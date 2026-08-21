
/* cocos2d::extension::AssetsManagerEx::checkUpdate() */

void __thiscall cocos2d::extension::AssetsManagerEx::checkUpdate(AssetsManagerEx *this)

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
  if (this[0xf8] != (AssetsManagerEx)0x0) goto switchD_00a67580_caseD_3;
  if (this[0x260] == (AssetsManagerEx)0x0) {
    local_40[0] = 0;
    local_40[1] = 0;
    local_30 = (void *)0x0;
    local_58[0] = 0;
    local_58[1] = 0;
    local_48 = (void *)0x0;
                    /* try { // try from 00a675c8 to 00b675d3 has its CatchHandler @ 00a67a2c */
                    /* try { // try from 00a675d4 to 00b675df has its CatchHandler @ 00a67a28 */
    dispatchUpdateEvent(this,0,local_40,local_58,0,0);
                    /* try { // try from 00a675e0 to 00b675f7 has its CatchHandler @ 00a67a40 */
    goto LAB_00a67610;
  }
                    /* try { // try from 00a67548 to 00b675a7 has its CatchHandler @ 00a67548
                       catch() { ... } // from try @ 00a67548 with catch @ 00a67548
                       catch() { ... } // from try @ 00a677a0 with catch @ 00a67548
                       catch() { ... } // from try @ 00a677e8 with catch @ 00a67548
                       catch() { ... } // from try @ 00a67874 with catch @ 00a67548
                       catch() { ... } // from try @ 00a678e4 with catch @ 00a67548 */
  uVar2 = Manifest::isLoaded(*(Manifest **)(this + 0xe0));
  if ((uVar2 & 1) == 0) {
    local_40[0] = 0;
    local_40[1] = 0;
    local_30 = (void *)0x0;
    local_58[0] = 0;
    local_58[1] = 0;
    local_48 = (void *)0x0;
    dispatchUpdateEvent(this,0,local_40,local_58,0,0);
    goto LAB_00a67610;
  }
  this[0xf8] = (AssetsManagerEx)0x1;
  switch(*(undefined4 *)(this + 0x30)) {
  default:
    goto switchD_00a67580_caseD_3;
  case 8:
    local_40[0] = 0;
    local_40[1] = 0;
    local_30 = (void *)0x0;
    local_58[0] = 0;
    local_58[1] = 0;
    local_48 = (void *)0x0;
                    /* try { // try from 00a675a8 to 00b675bf has its CatchHandler @ 00a67a30 */
    dispatchUpdateEvent(this,3,local_40,local_58,0,0);
    break;
  case 0xc:
    local_40[0] = 0;
    local_40[1] = 0;
    local_30 = (void *)0x0;
                    /* try { // try from 00a6763c to 00b67643 has its CatchHandler @ 00a679f0 */
    local_58[0] = 0;
    local_58[1] = 0;
    local_48 = (void *)0x0;
                    /* try { // try from 00a67648 to 00b6765f has its CatchHandler @ 00a679d0 */
    dispatchUpdateEvent(this,4,local_40,local_58,0,0);
    break;
  case 0xd:
                    /* try { // try from 00a67668 to 00b6766f has its CatchHandler @ 00a679c8 */
    *(undefined4 *)(this + 0x30) = 1;
  case 1:
  case 2:
                    /* try { // try from 00a67670 to 00b6768f has its CatchHandler @ 00a679d4 */
    downloadVersion(this);
    goto switchD_00a67580_caseD_3;
  }
LAB_00a67610:
  if ((local_58[0] & 1) != 0) {
                    /* try { // try from 00a67618 to 00b6761f has its CatchHandler @ 00a679ec */
    operator_delete(local_48);
  }
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
switchD_00a67580_caseD_3:
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

