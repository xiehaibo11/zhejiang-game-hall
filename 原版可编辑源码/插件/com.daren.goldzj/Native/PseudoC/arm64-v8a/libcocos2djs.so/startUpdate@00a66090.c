
/* cocos2d::extension::AssetsManagerEx::startUpdate() */

void __thiscall cocos2d::extension::AssetsManagerEx::startUpdate(AssetsManagerEx *this)

{
  long lVar1;
  int iVar2;
  ulong local_58;
  undefined8 uStack_50;
  void *local_48;
  ulong local_40;
  undefined8 uStack_38;
  undefined1 *local_30;
  long local_28;
  
                    /* catch() { ... } // from try @ 00a65df8 with catch @ 00a66094 */
  lVar1 = tpidr_el0;
                    /* catch() { ... } // from try @ 00a65ddc with catch @ 00a660a4 */
  local_28 = *(long *)(lVar1 + 0x28);
  iVar2 = *(int *)(this + 0x30);
                    /* catch() { ... } // from try @ 00a65dcc with catch @ 00a660b4 */
  if (iVar2 == 8) {
    prepareUpdate();
                    /* catch() { ... } // from try @ 00a65db8 with catch @ 00a660c4 */
    iVar2 = *(int *)(this + 0x30);
  }
  if (iVar2 == 9) {
    *(undefined8 *)(this + 0x188) = 0;
    *(undefined4 *)(this + 0x30) = 10;
                    /* catch() { ... } // from try @ 00a65dac with catch @ 00a660dc */
    uStack_38 = 0;
    local_30 = (undefined1 *)0x0;
    local_40 = 0;
                    /* catch() { ... } // from try @ 00a65d98 with catch @ 00a660e4 */
                    /* catch() { ... } // from try @ 00a65d70 with catch @ 00a660e8 */
    if (this[0x168] == (AssetsManagerEx)0x0) {
                    /* catch() { ... } // from try @ 00a65cfc with catch @ 00a66110 */
                    /* catch() { ... } // from try @ 00a65cf0 with catch @ 00a66114 */
                    /* catch() { ... } // from try @ 00a65f24 with catch @ 00a66118 */
      StringUtils::format("Start to update %d files from remote package.",&local_58,
                          (ulong)*(uint *)(this + 0x1c0));
    }
    else {
                    /* catch() { ... } // from try @ 00a65d54 with catch @ 00a660f0 */
                    /* catch() { ... } // from try @ 00a65d78 with catch @ 00a660f4 */
      StringUtils::format("Resuming from previous unfinished update, %d files remains to be finished."
                          ,&local_58,(ulong)*(uint *)(this + 0x1c0));
    }
    if ((local_40 & 1) != 0) {
      *local_30 = 0;
      uStack_38 = 0;
      if ((local_40 & 1) != 0) {
        operator_delete(local_30);
      }
    }
    local_30 = local_48;
    uStack_38 = uStack_50;
    local_40 = local_58;
                    /* catch() { ... } // from try @ 00a65cd0 with catch @ 00a66150 */
    local_58 = 0;
    uStack_50 = 0;
    local_48 = (void *)0x0;
                    /* catch() { ... } // from try @ 00a65d08 with catch @ 00a66160
                       catch() { ... } // from try @ 00a65e40 with catch @ 00a66160
                       catch() { ... } // from try @ 00a65fcc with catch @ 00a66160 */
    dispatchUpdateEvent(this,5,&local_58,&local_40,0,0);
    if ((local_58 & 1) != 0) {
      operator_delete(local_48);
    }
    batchDownload(this);
    if ((local_40 & 1) != 0) {
      operator_delete(local_30);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* try { // try from 00a661b8 to 00b6620f has its CatchHandler @ 00a661b8
                       catch() { ... } // from try @ 00a661b8 with catch @ 00a661b8
                       catch() { ... } // from try @ 00a663a8 with catch @ 00a661b8 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

