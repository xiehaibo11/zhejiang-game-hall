
/* cocos2d::extension::AssetsManagerEx::parseVersion() */

void __thiscall cocos2d::extension::AssetsManagerEx::parseVersion(AssetsManagerEx *this)

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
                    /* try { // try from 00a65d98 to 00b65da7 has its CatchHandler @ 00a660e4 */
  if (*(int *)(this + 0x30) == 4) {
                    /* try { // try from 00a65dac to 00b65db7 has its CatchHandler @ 00a660dc */
    Manifest::parseVersion(*(Manifest **)(this + 0xf0),(basic_string *)(this + 0x80));
                    /* try { // try from 00a65db8 to 00b65dc7 has its CatchHandler @ 00a660c4 */
    uVar2 = Manifest::isVersionLoaded(*(Manifest **)(this + 0xf0));
                    /* try { // try from 00a65dcc to 00b65dd7 has its CatchHandler @ 00a660b4 */
    if (((uVar2 & 1) == 0) ||
       (uVar2 = Manifest::versionGreaterOrEquals
                          (*(Manifest **)(this + 0xe0),*(Manifest **)(this + 0xf0),this + 0x1d0),
       (uVar2 & 1) == 0)) {
                    /* try { // try from 00a65e40 to 00b65ea7 has its CatchHandler @ 00a66160 */
      *(undefined4 *)(this + 0x30) = 5;
      downloadManifest(this);
    }
    else {
                    /* try { // try from 00a65ddc to 00b65de3 has its CatchHandler @ 00a660a4 */
      *(undefined4 *)(this + 0x30) = 0xc;
      (**(code **)(**(long **)(this + 0x28) + 0x130))(*(long **)(this + 0x28),this + 0x68);
      local_40[0] = 0;
      local_40[1] = 0;
      local_30 = (void *)0x0;
                    /* try { // try from 00a65df8 to 00b65e03 has its CatchHandler @ 00a66094 */
      local_58[0] = 0;
      local_58[1] = 0;
      local_48 = (void *)0x0;
                    /* try { // try from 00a65e08 to 00b65e0f has its CatchHandler @ 00a66084 */
      dispatchUpdateEvent(this,4,local_40,local_58,0,0);
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

