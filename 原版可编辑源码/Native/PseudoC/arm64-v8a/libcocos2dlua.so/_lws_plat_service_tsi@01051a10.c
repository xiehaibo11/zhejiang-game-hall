
void _lws_plat_service_tsi(long param_1,int param_2,int param_3)

{
  long *plVar1;
  long lVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  ssize_t sVar6;
  int *piVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  undefined1 auStack_378 [544];
  long local_158;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
                    /* try { // try from 01051a3c to 01151a47 has its CatchHandler @ 010537f0 */
                    /* try { // try from 01051a48 to 01151a5b has its CatchHandler @ 010537ec */
  if ((param_1 == 0) || (*(long *)(param_1 + 0x830) == 0)) {
                    /* try { // try from 01051bf4 to 01151c07 has its CatchHandler @ 010537d0 */
    iVar5 = 1;
    if (*(long *)(lVar2 + 0x28) == local_68) {
      return;
    }
    goto LAB_01051c08;
  }
  lVar8 = (long)param_3;
                    /* try { // try from 01051a60 to 01151a87 has its CatchHandler @ 01053910 */
  plVar1 = (long *)(param_1 + (long)param_3 * 0x6f8 + 0xe0);
  if (param_2 < 0) {
                    /* try { // try from 01051c0c to 01151c33 has its CatchHandler @ 01053900 */
    iVar5 = -1;
    iVar4 = FUN_01045058(param_1,param_3);
    if (iVar4 == 0) goto LAB_01051c20;
LAB_01051b34:
    iVar5 = -1;
LAB_01051b40:
    lVar10 = param_1 + lVar8 * 0x6f8;
                    /* try { // try from 01051b48 to 01151b4f has its CatchHandler @ 010537e0 */
    if (*(int *)(lVar10 + 0x7c8) != 0) {
                    /* try { // try from 01051b54 to 01151b83 has its CatchHandler @ 010539bc */
      uVar9 = 0;
      do {
        piVar7 = (int *)(*plVar1 + (long)(int)uVar9 * 8);
        if (*(short *)((long)piVar7 + 6) != 0) {
          iVar5 = iVar5 + -1;
                    /* try { // try from 01051b88 to 01151b8f has its CatchHandler @ 010537dc */
          if (*piVar7 == *(int *)(param_1 + lVar8 * 0x6f8 + 0x7c0)) {
                    /* try { // try from 01051b90 to 01151ba3 has its CatchHandler @ 010537d8 */
            sVar6 = read(*piVar7,auStack_378,1);
            if (sVar6 != 1) {
                    /* try { // try from 01051ba8 to 01151bcf has its CatchHandler @ 01053904 */
              _lws_log(1,"Cannot read from dummy pipe.");
            }
          }
          else {
            iVar4 = lws_service_fd_tsi(param_1,piVar7,param_3);
            if (iVar4 < 0) {
              iVar5 = -1;
              if (*(long *)(lVar2 + 0x28) == local_68) {
                return;
              }
              goto LAB_01051c08;
            }
            uVar9 = uVar9 - (iVar4 != 0);
          }
        }
      } while ((iVar5 != 0) &&
              (uVar9 = uVar9 + 1, uVar9 < *(uint *)(lVar10 + 0x7c8)
                    /* try { // try from 01051bec to 01151bf3 has its CatchHandler @ 010537d4 */));
    }
  }
  else {
    lws_libuv_run(param_1,param_3);
    if (*(int *)(param_1 + 0xca0) == 0) {
      memset(auStack_378,0,0x310);
                    /* try { // try from 01051aa0 to 01151ab3 has its CatchHandler @ 010537e8 */
      local_158 = param_1;
      uVar3 = (**(code **)(*(long *)(*(long *)(param_1 + 0x830) + 0x188) + 8))
                        (auStack_378,0x1f,0,0,0);
                    /* try { // try from 01051ab8 to 01151adb has its CatchHandler @ 0105390c */
      *(undefined4 *)(param_1 + 0xc9c) = uVar3;
      *(undefined4 *)(param_1 + 0xca0) = 1;
    }
    iVar4 = lws_service_adjust_timeout(param_1,1,param_3);
    iVar5 = param_2;
    if (iVar4 == 0) {
      lVar10 = param_1 + lVar8 * 0x6f8;
      _lws_plat_service_tsi(param_1,0xffffffff,*(undefined1 *)(lVar10 + 0x7d2));
                    /* try { // try from 01051af0 to 01151b03 has its CatchHandler @ 010537e4 */
      iVar4 = lws_service_adjust_timeout(param_1,1,*(undefined1 *)(lVar10 + 0x7d2));
      iVar5 = 0;
      if (iVar4 != 0) {
        iVar5 = param_2;
      }
    }
                    /* try { // try from 01051b08 to 01151b2b has its CatchHandler @ 01053908 */
    iVar5 = poll((pollfd *)*plVar1,(ulong)*(uint *)(param_1 + lVar8 * 0x6f8 + 0x7c8),iVar5);
    if (iVar5 == 0) {
                    /* try { // try from 01051c64 to 01151c87 has its CatchHandler @ 010538f0 */
      if ((*(long *)(param_1 + lVar8 * 0x6f8 + 0xe8) == 0) &&
         (iVar5 = FUN_0104f374(param_1,param_3), iVar5 == 0)) {
        lws_service_fd_tsi(param_1,0,param_3);
        iVar5 = 0;
                    /* try { // try from 01051cec to 01151cf7 has its CatchHandler @ 010537c4 */
        if (*(long *)(lVar2 + 0x28) == local_68) {
          return;
        }
        goto LAB_01051c08;
      }
      iVar5 = 0;
      iVar4 = FUN_01045058(param_1,param_3);
    }
    else {
      iVar4 = FUN_01045058(param_1,param_3);
    }
                    /* try { // try from 01051c8c to 01151c9f has its CatchHandler @ 010537c8 */
    if (iVar4 != 0) goto LAB_01051b34;
LAB_01051c20:
    if (iVar5 < 0) {
      piVar7 = (int *)__errno();
      iVar5 = -(uint)(*piVar7 != 4);
                    /* try { // try from 01051ca4 to 01151ccb has its CatchHandler @ 010538d8 */
      if (*(long *)(lVar2 + 0x28) == local_68) {
        return;
      }
      goto LAB_01051c08;
    }
    if (iVar5 != 0) goto LAB_01051b40;
  }
  iVar5 = 0;
  if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 01051c4c to 01151c5f has its CatchHandler @ 010537cc */
    return;
  }
LAB_01051c08:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar5);
}

