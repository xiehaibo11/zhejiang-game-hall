
void java_callback(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0xf8))();
  uVar1 = (**(code **)(*param_1 + 0x108))(param_1,uVar1,param_3,&DAT_0010afae);
                    /* WARNING: Could not recover jumptable at 0x001064a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x1e8))(param_1,param_2,uVar1);
  return;
}

