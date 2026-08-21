
void FUN_00aa8754(long param_1)

{
  uint uVar1;
  short sVar2;
  long lVar3;
  int iVar4;
  char *__s2;
  uint uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined1 auStack_378 [544];
  undefined8 local_158;
  long local_150;
  long local_130;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  if ((*(byte *)(param_1 + 0x200) >> 2 & 1) == 0) {
    lVar7 = *(long *)(param_1 + 0x150);
    lVar10 = *(long *)(param_1 + 0x168);
    sVar2 = *(short *)(lVar7 + 0xca6);
    lVar8 = (long)sVar2;
    *(byte *)(param_1 + 0x200) = *(byte *)(param_1 + 0x200) | 4;
    if (lVar10 != 0) {
      for (lVar9 = *(long *)(lVar7 + 0x830); lVar9 != 0; lVar9 = *(long *)(lVar9 + 0x158)) {
                    /* try { // try from 00aa87bc to 00ba88e7 has its CatchHandler @ 00aa87bc
                       catch() { ... } // from try @ 00aa87bc with catch @ 00aa87bc
                       catch() { ... } // from try @ 00aa88f0 with catch @ 00aa87bc */
        if (((lVar9 != param_1) && ((*(byte *)(lVar9 + 0x200) >> 2 & 1) == 0)) &&
           (*(int *)(lVar9 + 0x1d0) == *(int *)(param_1 + 0x1d0))) {
          __s2 = *(char **)(param_1 + 0x178);
          if (*(char **)(lVar9 + 0x178) == (char *)0x0) {
            if (__s2 == (char *)0x0) goto LAB_00aa87f4;
          }
          else if ((__s2 != (char *)0x0) &&
                  (iVar4 = strcmp(*(char **)(lVar9 + 0x178),__s2), iVar4 == 0)) {
LAB_00aa87f4:
            *(long *)(lVar9 + 0x168) = lVar10;
            *(undefined8 *)(param_1 + 0x168) = 0;
            if (*(long *)(lVar9 + 0x168) != 0) {
              *(long *)(*(long *)(lVar9 + 0x168) + 0x228) = lVar9;
            }
            _lws_log(4,"%s: listen skt from %s to %s\n","lws_vhost_destroy1",
                     *(undefined8 *)(param_1 + 0x170),*(undefined8 *)(lVar9 + 0x170));
            break;
          }
        }
      }
    }
    if (sVar2 != 0) {
      do {
        lVar8 = lVar8 + -1;
        lVar10 = lVar7 + lVar8 * 0x6f8;
        uVar5 = *(uint *)(lVar10 + 0x7c8);
        if (uVar5 != 0) {
          uVar11 = 0;
          do {
            while( true ) {
              lVar9 = *(long *)(*(long *)(lVar7 + 0x828) +
                               (long)*(int *)(*(long *)(lVar7 + lVar8 * 0x6f8 + 0xe0) +
                                             (-(uVar11 >> 0x1f) & 0xfffffff800000000 | uVar11 << 3))
                               * 8);
              if ((lVar9 != 0) && (*(long *)(lVar9 + 0x228) == param_1)) break;
              uVar1 = (uint)uVar11 + 1;
              uVar11 = (ulong)uVar1;
              if (uVar5 <= uVar1) goto LAB_00aa88a0;
            }
            FUN_00a9f034(lVar9,9999);
            uVar5 = *(uint *)(lVar10 + 0x7c8);
          } while ((uint)uVar11 < uVar5);
        }
LAB_00aa88a0:
      } while ((int)lVar8 != 0);
    }
    memset(auStack_378,0,0x310);
    local_158 = *(undefined8 *)(param_1 + 0x150);
    lVar8 = *(long *)(param_1 + 0x188);
    local_150 = param_1;
    if ((lVar8 != 0) && (0 < *(int *)(param_1 + 0x1dc))) {
      iVar4 = 0;
      do {
        local_130 = lVar8;
                    /* try { // try from 00aa88e8 to 00ba88ef has its CatchHandler @ 00aa89b0 */
                    /* try { // try from 00aa88f0 to 00ba89c3 has its CatchHandler @ 00aa87bc */
        (**(code **)(lVar8 + 8))(auStack_378,0x1c,0,0,0);
        iVar4 = iVar4 + 1;
        lVar8 = lVar8 + 0x38;
      } while (iVar4 < *(int *)(param_1 + 0x1dc));
    }
    lVar8 = *(long *)(lVar7 + 0x830);
    if (lVar8 != 0) {
      plVar6 = (long *)(lVar7 + 0x830);
      do {
        if (lVar8 == param_1) {
          *plVar6 = *(long *)(param_1 + 0x158);
          break;
        }
        plVar6 = (long *)(lVar8 + 0x158);
        lVar8 = *plVar6;
      } while (lVar8 != 0);
    }
    *(undefined8 *)(param_1 + 0x158) = *(undefined8 *)(*(long *)(param_1 + 0x150) + 0x838);
    *(long *)(*(long *)(param_1 + 0x150) + 0x838) = param_1;
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

