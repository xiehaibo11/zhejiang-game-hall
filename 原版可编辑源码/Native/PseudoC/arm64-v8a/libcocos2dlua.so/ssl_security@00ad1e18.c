
void ssl_security(long param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00ad1e48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x148) + 0x1b8))
            (param_1,0,param_2,param_3,param_4,param_5,
             *(undefined8 *)(*(long *)(param_1 + 0x148) + 0x1c8));
  return;
}

