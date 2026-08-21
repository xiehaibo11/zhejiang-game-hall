
/* cocos2d::extension::AssetsManagerEx::parseManifest() */

void __thiscall cocos2d::extension::AssetsManagerEx::parseManifest(AssetsManagerEx *this)

{
  long lVar1;
  ulong uVar2;
  ulong local_58 [2];
  void *local_48;
  ulong local_40 [2];
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (*(int *)(this + 0x30) == 7) {
    Manifest::parseFile(*(Manifest **)(this + 0xf0),(basic_string *)(this + 0xb0));
    uVar2 = Manifest::isLoaded(*(Manifest **)(this + 0xf0));
    if ((uVar2 & 1) == 0) {
      local_40[0] = 0;
      local_40[1] = 0;
      local_30 = (void *)0x0;
      local_58[0] = 0;
      local_58[1] = 0;
      local_48 = (void *)0x0;
      dispatchUpdateEvent(this,2,local_40,local_58,0,0);
      if ((local_58[0] & 1) != 0) {
        operator_delete(local_48);
      }
      if ((local_40[0] & 1) != 0) {
                    /* try { // try from 00a65f98 to 00b65fcb has its CatchHandler @ 00a65c74 */
        operator_delete(local_30);
      }
      *(undefined4 *)(this + 0x30) = 1;
    }
    else {
      uVar2 = Manifest::versionGreaterOrEquals
                        (*(Manifest **)(this + 0xe0),*(Manifest **)(this + 0xf0),this + 0x1d0);
      if ((uVar2 & 1) == 0) {
        *(undefined4 *)(this + 0x30) = 8;
        if (this[0xf8] == (AssetsManagerEx)0x1) {
          prepareUpdate();
        }
        else if (this[0xf8] == (AssetsManagerEx)0x2) {
                    /* try { // try from 00a65fcc to 00b66007 has its CatchHandler @ 00a66160 */
          startUpdate(this);
        }
        local_40[0] = 0;
        local_40[1] = 0;
        local_30 = (void *)0x0;
        local_58[0] = 0;
        local_58[1] = 0;
        local_48 = (void *)0x0;
        dispatchUpdateEvent(this,3,local_40,local_58,0,0);
      }
      else {
        *(undefined4 *)(this + 0x30) = 0xc;
        (**(code **)(**(long **)(this + 0x28) + 0x130))(*(long **)(this + 0x28),this + 0x68);
                    /* try { // try from 00a65f24 to 00b65f97 has its CatchHandler @ 00a66118 */
        local_40[0] = 0;
        local_40[1] = 0;
        local_30 = (void *)0x0;
        local_58[0] = 0;
        local_58[1] = 0;
        local_48 = (void *)0x0;
        dispatchUpdateEvent(this,4,local_40,local_58,0,0);
      }
                    /* try { // try from 00a66008 to 00b661b7 has its CatchHandler @ 00a65c74 */
      if ((local_58[0] & 1) != 0) {
        operator_delete(local_48);
      }
      if ((local_40[0] & 1) != 0) {
        operator_delete(local_30);
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

