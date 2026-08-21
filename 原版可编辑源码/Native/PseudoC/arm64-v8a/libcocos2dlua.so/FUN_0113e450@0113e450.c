
void FUN_0113e450(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x350);
  (**(code **)(lVar1 + 0x30))();
                    /* WARNING: Could not recover jumptable at 0x0113e4a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x18))(param_1,param_2,param_3,param_4);
  return;
}

