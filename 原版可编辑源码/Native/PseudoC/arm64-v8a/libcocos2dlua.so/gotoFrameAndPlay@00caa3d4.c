
/* cocostudio::timeline::ActionTimeline::gotoFrameAndPlay(int, int, bool) */

void cocostudio::timeline::ActionTimeline::gotoFrameAndPlay(int param_1,int param_2,bool param_3)

{
  uint in_w3;
  
                    /* WARNING: Could not recover jumptable at 0x00caa3e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(ulong)(uint)param_1 + 0x78))
            ((long *)(ulong)(uint)param_1,param_2,param_3,param_2,in_w3 & 1);
  return;
}

