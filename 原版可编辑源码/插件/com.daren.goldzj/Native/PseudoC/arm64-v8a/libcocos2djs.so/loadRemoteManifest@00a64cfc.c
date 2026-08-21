
/* cocos2d::extension::AssetsManagerEx::loadRemoteManifest(cocos2d::extension::Manifest*) */

void __thiscall
cocos2d::extension::AssetsManagerEx::loadRemoteManifest(AssetsManagerEx *this,Manifest *param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong local_68 [2];
  void *local_58;
  ulong local_50 [2];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (this[0x260] != (AssetsManagerEx)0x0) {
    uVar2 = 0;
    if ((param_1 == (Manifest *)0x0) || (1 < *(int *)(this + 0x30))) goto LAB_00a64e24;
    uVar3 = Manifest::isLoaded(param_1);
    if ((uVar3 & 1) != 0) {
      if (*(Ref **)(this + 0xf0) != (Ref *)0x0) {
        Ref::release(*(Ref **)(this + 0xf0));
      }
      *(Manifest **)(this + 0xf0) = param_1;
      Ref::retain((Ref *)param_1);
                    /* try { // try from 00a64d70 to 00b64e07 has its CatchHandler @ 00a65108 */
      uVar3 = Manifest::versionGreaterOrEquals
                        (*(Manifest **)(this + 0xe0),*(Manifest **)(this + 0xf0),this + 0x1d0);
      if ((uVar3 & 1) == 0) {
        *(undefined4 *)(this + 0x30) = 8;
        local_50[0] = 0;
        local_50[1] = 0;
        local_40 = (void *)0x0;
        local_68[0] = 0;
        local_68[1] = 0;
        local_58 = (void *)0x0;
        dispatchUpdateEvent(this,3,local_50,local_68,0,0);
      }
      else {
        *(undefined4 *)(this + 0x30) = 0xc;
        (**(code **)(**(long **)(this + 0x28) + 0x130))(*(long **)(this + 0x28),this + 0x68);
        local_50[0] = 0;
        local_50[1] = 0;
        local_40 = (void *)0x0;
        local_68[0] = 0;
        local_68[1] = 0;
        local_58 = (void *)0x0;
        dispatchUpdateEvent(this,4,local_50,local_68,0,0);
      }
      if ((local_68[0] & 1) != 0) {
                    /* try { // try from 00a64e08 to 00b64e93 has its CatchHandler @ 00a64b7c */
        operator_delete(local_58);
      }
      if ((local_50[0] & 1) != 0) {
        operator_delete(local_40);
      }
      uVar2 = 1;
      goto LAB_00a64e24;
    }
  }
  uVar2 = 0;
LAB_00a64e24:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}

