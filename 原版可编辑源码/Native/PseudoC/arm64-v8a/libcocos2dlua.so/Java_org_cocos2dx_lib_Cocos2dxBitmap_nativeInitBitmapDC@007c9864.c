
void Java_org_cocos2dx_lib_Cocos2dxBitmap_nativeInitBitmapDC
               (long *param_1,undefined8 param_2,int param_3,int param_4,undefined8 param_5)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_3 * param_4 * 4;
  if ((DAT_01781ac0 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_01781ac0);
    if (iVar2 != 0) {
      DAT_01781ab0 = 0;
      DAT_01781ab8 = (void *)0x0;
      __cxa_guard_release(&DAT_01781ac0);
    }
  }
  DAT_01781ab0 = CONCAT44(param_4,param_3);
  DAT_01781ab8 = malloc((long)iVar1);
                    /* WARNING: Could not recover jumptable at 0x007c98dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x640))(param_1,param_5,0,iVar1,DAT_01781ab8);
  return;
}

