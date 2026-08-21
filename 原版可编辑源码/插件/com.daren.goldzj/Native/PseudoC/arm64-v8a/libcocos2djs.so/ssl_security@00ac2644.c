
void ssl_security(long param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined8 param_5)

{
                    /* catch() { ... } // from try @ 00ac203c with catch @ 00ac2644 */
                    /* WARNING: Could not recover jumptable at 0x00ac2674. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x148) + 0x1b8))
            (param_1,0,param_2,param_3,param_4,param_5,
             *(undefined8 *)(*(long *)(param_1 + 0x148) + 0x1c8));
  return;
}

