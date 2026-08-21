
/* cocos2d::extension::AssetsManagerEx::onDownloadUnitsFinished() */

void __thiscall cocos2d::extension::AssetsManagerEx::onDownloadUnitsFinished(AssetsManagerEx *this)

{
  long lVar1;
  ulong local_58 [2];
  void *local_48;
  ulong local_40 [2];
  void *local_30;
  long local_28;
  
                    /* try { // try from 00a67a98 to 00b67aeb has its CatchHandler @ 00a67a98
                       catch() { ... } // from try @ 00a67a98 with catch @ 00a67a98
                       catch() { ... } // from try @ 00a67bf8 with catch @ 00a67a98 */
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  Manifest::saveToFile(*(Manifest **)(this + 0xe8),(basic_string *)(this + 0xb0));
  if (*(long *)(this + 0x140) == 0) {
                    /* try { // try from 00a67b24 to 00b67bf7 has its CatchHandler @ 00a67c84 */
    if (*(int *)(this + 0x30) == 10) {
      updateSucceed(this);
    }
  }
  else {
    *(undefined4 *)(this + 0x30) = 0xd;
    local_40[0] = 0;
    local_40[1] = 0;
    local_30 = (void *)0x0;
    local_58[0] = 0;
    local_58[1] = 0;
    local_48 = (void *)0x0;
                    /* try { // try from 00a67aec to 00b67b03 has its CatchHandler @ 00a67c74 */
    dispatchUpdateEvent(this,9,local_40,local_58,0,0);
    if ((local_58[0] & 1) != 0) {
                    /* try { // try from 00a67b0c to 00b67b17 has its CatchHandler @ 00a67c70 */
      operator_delete(local_48);
    }
    if ((local_40[0] & 1) != 0) {
                    /* try { // try from 00a67b18 to 00b67b23 has its CatchHandler @ 00a67c6c */
      operator_delete(local_30);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

