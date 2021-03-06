function [Ratepersec_4Qam_MUMIMO] = ...
    calc_rps_mu_mimo(estimates_UE_1)

% this function calculates the MU-MIMO rate of the two users
% first we have to determine the compatible subbands (based on PMI feedback)
% on the compatible subbands we should use the MU-MIMO capacity, on the
% others we use the single layer precoding capacity and select the user
% with the higher capacity

capacity_mode5_mumimo

Frame_DL_sum_4Qam = zeros(1, 100);

for i = 1:length(estimates_UE_1)
   RS_sum_4Qam = sum(chcap_mumimo(1,:,i));
   
   % Since RS_sum_4Qam contains the throughput for the 4 symobols and there
   % are total 12 symbols in exteded cyclic prefix subframe of LTE out of
   % which 3 are used for control signals and rest of the 9 are used for
   % DLSCH with 12*25 = 300 cell specific reference signals in between
   % them. so basically we need to measure the throughput for in total 8
   % symbols. 
    Subframe_DL_sum_4Qam = (RS_sum_4Qam * 2);
    
     %In LTE TDD Confguration 3 we have 6 downlink subframes in one frame so
    Frame_DL_sum_4Qam(i) = Subframe_DL_sum_4Qam * 6;
    
end
% add rate of all 100 frames each of 10ms length to compute data rate/sec
Ratepersec_4Qam_MUMIMO = sum(Frame_DL_sum_4Qam(:));
  
  

