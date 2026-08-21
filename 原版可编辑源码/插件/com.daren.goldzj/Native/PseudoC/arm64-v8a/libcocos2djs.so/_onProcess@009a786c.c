
/* cocos2d::network::DownloaderAndroid::_onProcess(int, long, long, long) */

void __thiscall
cocos2d::network::DownloaderAndroid::_onProcess
          (DownloaderAndroid *this,int param_1,long param_2,long param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  code *pcVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  long local_78;
  long local_70;
  long lStack_68;
  long alStack_60 [4];
  long *local_40;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  uVar4 = *(ulong *)(this + 0x88);
  if (uVar4 != 0) {
    uVar6 = uVar4 - 1;
    uVar7 = (ulong)param_1;
    if ((uVar6 & uVar4) == 0) {
      uVar8 = uVar6 & uVar7;
    }
    else {
      uVar8 = uVar7;
      if (uVar4 <= uVar7) {
                    /* catch() { ... } // from try @ 009a7704 with catch @ 009a78ac */
        uVar8 = 0;
        if (uVar4 != 0) {
          uVar8 = uVar7 / uVar4;
        }
                    /* catch() { ... } // from try @ 009a76f8 with catch @ 009a78b0 */
        uVar8 = uVar7 - uVar8 * uVar4;
                    /* catch() { ... } // from try @ 009a76d8 with catch @ 009a78b4 */
      }
    }
    plVar9 = *(long **)(*(long *)(this + 0x80) + uVar8 * 8);
                    /* catch() { ... } // from try @ 009a7710 with catch @ 009a78c4 */
    if (plVar9 != (long *)0x0) {
      do {
        while( true ) {
          plVar9 = (long *)*plVar9;
          if (plVar9 == (long *)0x0) goto LAB_009a7978;
          uVar10 = plVar9[1];
          if (uVar10 != uVar7) break;
          if (*(int *)(plVar9 + 2) == param_1) {
            local_40 = (long *)0x0;
                    /* try { // try from 009a791c to 00aa796f has its CatchHandler @ 009a791c
                       catch() { ... } // from try @ 009a791c with catch @ 009a791c
                       catch() { ... } // from try @ 009a7ae0 with catch @ 009a791c */
            plVar3 = *(long **)(this + 0x30);
            local_78 = param_4;
            local_70 = param_3;
            lStack_68 = param_2;
            if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 009a799c to 00aa79a7 has its CatchHandler @ 009a7b54 */
              FUN_008589d0(0,*(undefined8 *)(plVar9[3] + 0x10));
            }
            (**(code **)(*plVar3 + 0x30))
                      (plVar3,*(undefined8 *)(plVar9[3] + 0x10),&lStack_68,&local_70,&local_78,
                       alStack_60);
            if (alStack_60 == local_40) {
                    /* try { // try from 009a7970 to 00aa7987 has its CatchHandler @ 009a7b5c */
              pcVar5 = *(code **)(*local_40 + 0x20);
            }
            else {
              if (local_40 == (long *)0x0) goto LAB_009a7978;
              pcVar5 = *(code **)(*local_40 + 0x28);
            }
            (*pcVar5)();
            goto LAB_009a7978;
          }
        }
        if ((uVar6 & uVar4) == 0) {
          uVar10 = uVar10 & uVar6;
        }
        else if (uVar4 <= uVar10) {
          uVar1 = 0;
          if (uVar4 != 0) {
            uVar1 = uVar10 / uVar4;
          }
          uVar10 = uVar10 - uVar1 * uVar4;
        }
      } while (uVar10 == uVar8);
    }
  }
LAB_009a7978:
  if (*(long *)(lVar2 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 009a7990 to 00aa799b has its CatchHandler @ 009a7b58 */
  return;
}

