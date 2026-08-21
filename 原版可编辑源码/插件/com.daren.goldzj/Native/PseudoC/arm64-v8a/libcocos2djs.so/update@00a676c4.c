
/* cocos2d::extension::AssetsManagerEx::update() */

void __thiscall cocos2d::extension::AssetsManagerEx::update(AssetsManagerEx *this)

{
  long lVar1;
  ulong uVar2;
  ulong local_58 [2];
  void *local_48;
  ulong local_40 [2];
  void *local_30;
  long local_28;
  
                    /* try { // try from 00a676c4 to 00b676cf has its CatchHandler @ 00a67994 */
                    /* try { // try from 00a676d4 to 00b676db has its CatchHandler @ 00a67984 */
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (this[0xf8] != (AssetsManagerEx)0x0) goto switchD_00a6774c_caseD_3;
  if (this[0x260] == (AssetsManagerEx)0x0) {
    local_40[0] = 0;
    local_40[1] = 0;
    local_30 = (void *)0x0;
    local_58[0] = 0;
    local_58[1] = 0;
    local_48 = (void *)0x0;
    dispatchUpdateEvent(this,0,local_40,local_58,0,0);
                    /* try { // try from 00a677a0 to 00b677d7 has its CatchHandler @ 00a67548 */
LAB_00a677d0:
    if ((local_58[0] & 1) != 0) {
                    /* try { // try from 00a677d8 to 00b677e7 has its CatchHandler @ 00a679f0 */
      operator_delete(local_48);
    }
    if ((local_40[0] & 1) != 0) {
                    /* try { // try from 00a677e8 to 00b6782f has its CatchHandler @ 00a67548 */
      operator_delete(local_30);
    }
  }
  else {
    uVar2 = Manifest::isLoaded(*(Manifest **)(this + 0xe0));
    if ((uVar2 & 1) == 0) {
      local_40[0] = 0;
      local_40[1] = 0;
      local_30 = (void *)0x0;
      local_58[0] = 0;
      local_58[1] = 0;
      local_48 = (void *)0x0;
      dispatchUpdateEvent(this,0,local_40,local_58,0,0);
      goto LAB_00a677d0;
    }
    this[0xf8] = (AssetsManagerEx)0x2;
                    /* try { // try from 00a67738 to 00b6779f has its CatchHandler @ 00a67a40 */
    switch(*(undefined4 *)(this + 0x30)) {
    case 1:
      *(undefined4 *)(this + 0x30) = 2;
    case 2:
      downloadVersion(this);
      break;
    case 4:
      parseVersion(this);
      break;
    case 7:
                    /* try { // try from 00a67830 to 00b67873 has its CatchHandler @ 00a679f0 */
      parseManifest(this);
      break;
    case 8:
    case 9:
    case 0xd:
      uVar2 = Manifest::isLoaded(*(Manifest **)(this + 0xf0));
      if ((uVar2 & 1) != 0) {
        if (this[0xf8] == (AssetsManagerEx)0x2) {
          startUpdate(this);
        }
        break;
      }
      *(undefined4 *)(this + 0x30) = 5;
    case 5:
      downloadManifest(this);
      break;
    case 10:
    case 0xb:
    case 0xc:
      this[0xf8] = (AssetsManagerEx)0x0;
    }
  }
switchD_00a6774c_caseD_3:
                    /* try { // try from 00a676f0 to 00b676fb has its CatchHandler @ 00a67974 */
  if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* try { // try from 00a67700 to 00b67707 has its CatchHandler @ 00a67964 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

