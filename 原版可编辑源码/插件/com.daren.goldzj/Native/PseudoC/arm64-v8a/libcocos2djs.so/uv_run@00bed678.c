
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void uv_run(long param_1,int param_2)

{
  long lVar1;
  bool bVar2;
  undefined4 uVar3;
  ulong uVar4;
  long *****ppppplVar5;
  long ****pppplVar6;
  uint uVar7;
  long lVar8;
  long ****local_18;
  long *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (((*(int *)(param_1 + 8) == 0) && (*(long *)(param_1 + 0x20) == param_1 + 0x20)) &&
     (*(long *)(param_1 + 0x168) == 0)) {
    uVar4 = uv__hrtime(1);
    bVar2 = false;
    *(ulong *)(param_1 + 0x220) = uVar4 / 1000000;
LAB_00bed8d4:
    if (*(int *)(param_1 + 0x30) != 0) {
LAB_00bed8dc:
      *(undefined4 *)(param_1 + 0x30) = 0;
    }
  }
  else {
    if (*(int *)(param_1 + 0x30) == 0) {
      do {
        uVar4 = uv__hrtime(1);
        *(ulong *)(param_1 + 0x220) = uVar4 / 1000000;
        uv__run_timers(param_1);
        ppppplVar5 = *(long ******)(param_1 + 0x48);
        if (ppppplVar5 == (long *****)(param_1 + 0x48)) {
          uv__run_idle(param_1);
          uv__run_prepare(param_1);
          if (param_2 != 1) goto LAB_00bed794;
LAB_00bed8fc:
          uVar3 = uv_backend_timeout(param_1);
        }
        else {
          local_10 = *(long **)(param_1 + 0x50);
          *local_10 = (long)&local_18;
          pppplVar6 = ppppplVar5[1];
          *(long *****)(param_1 + 0x50) = pppplVar6;
          *pppplVar6 = (long ***)(param_1 + 0x48);
          ppppplVar5[1] = (long ****)&local_18;
          local_18 = (long ****)ppppplVar5;
          while ((long *****)local_18 != &local_18) {
            *local_18[1] = (long **)*local_18;
            (*local_18)[1] = (long **)local_18[1];
            *local_18 = (long ***)local_18;
            local_18[1] = (long ***)local_18;
            (*(code *)local_18[-1])(param_1,local_18 + -1,4);
          }
          uv__run_idle(param_1);
          uv__run_prepare(param_1);
LAB_00bed794:
          if (param_2 == 0) goto LAB_00bed8fc;
          uVar3 = 0;
        }
        uv__io_poll(param_1,uVar3);
        uv__run_check(param_1);
        lVar8 = *(long *)(param_1 + 0x168);
        *(undefined8 *)(param_1 + 0x168) = 0;
        while (lVar1 = lVar8, lVar1 != 0) {
          lVar8 = *(long *)(lVar1 + 0x50);
          uVar7 = *(uint *)(lVar1 + 0x58) | 2;
          *(uint *)(lVar1 + 0x58) = uVar7;
          switch(*(undefined4 *)(lVar1 + 0x10)) {
          case 7:
          case 0xc:
          case 0xe:
            uv__stream_destroy(lVar1);
            uVar7 = *(uint *)(lVar1 + 0x58);
            break;
          case 0xf:
            uv__udp_finish_close(lVar1);
            uVar7 = *(uint *)(lVar1 + 0x58);
          }
          if (((uVar7 >> 0xd & 1) != 0) &&
             (*(uint *)(lVar1 + 0x58) = uVar7 & 0xffffdfff, (uVar7 >> 0xe & 1) != 0)) {
            *(int *)(*(long *)(lVar1 + 8) + 8) = *(int *)(*(long *)(lVar1 + 8) + 8) + -1;
          }
          **(undefined8 **)(lVar1 + 0x28) = *(undefined8 *)(lVar1 + 0x20);
          *(undefined8 *)(*(long *)(lVar1 + 0x20) + 8) = *(undefined8 *)(lVar1 + 0x28);
          if (*(code **)(lVar1 + 0x18) != (code *)0x0) {
            (**(code **)(lVar1 + 0x18))(lVar1);
          }
        }
        if (param_2 == 1) {
          uVar4 = uv__hrtime(1);
          *(ulong *)(param_1 + 0x220) = uVar4 / 1000000;
          uv__run_timers(param_1);
          if (*(int *)(param_1 + 8) == 0) goto LAB_00bed854;
LAB_00bed944:
          bVar2 = true;
          if (*(int *)(param_1 + 0x30) == 0) goto LAB_00bed87c;
          goto LAB_00bed8dc;
        }
        if (*(int *)(param_1 + 8) == 0) {
LAB_00bed854:
          if (*(long *)(param_1 + 0x20) != param_1 + 0x20) goto LAB_00bed864;
          bVar2 = *(long *)(param_1 + 0x168) != 0;
          if ((param_2 - 1U < 2) || (!bVar2)) goto LAB_00bed8d4;
        }
        else {
LAB_00bed864:
          if (param_2 - 1U < 2) goto LAB_00bed944;
        }
      } while (*(int *)(param_1 + 0x30) == 0);
    }
    bVar2 = true;
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
LAB_00bed87c:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar2);
  }
  return;
}

