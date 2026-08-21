
void FUN_0090cfa0(State *param_1,undefined8 param_2,int param_3)

{
  char *pcVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  char *pcVar6;
  bool bVar7;
  long *plVar8;
  char *pcVar9;
  ulong *puVar10;
  char *pcVar11;
  size_t __n;
  ulong uVar12;
  int iVar13;
  char *pcVar14;
  long lVar15;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_b8 [16];
  char *local_a8;
  ulong local_a0;
  ulong uStack_98;
  char *local_90;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_80 [8];
  size_t local_78;
  char *local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  plVar8 = (long *)se::State::args(param_1);
  lVar2 = *plVar8;
  lVar3 = plVar8[1];
  iVar13 = (int)((ulong)(lVar3 - lVar2) >> 4);
  if (iVar13 - param_3 == 1) {
    se::Value::toStringForce();
    pcVar11 = (char *)((ulong)local_80 | 1);
    if (((byte)local_80[0] & 1) != 0) {
      pcVar11 = local_70;
    }
    __android_log_print(3,"jswrapper","JS: %s%s\n",param_2,pcVar11);
  }
  else {
    if (iVar13 < 2) goto LAB_0090d244;
    se::Value::toStringForce();
    pcVar14 = (char *)((ulong)local_80 | 1);
    bVar7 = ((byte)local_80[0] & 1) == 0;
    pcVar11 = pcVar14;
    if (!bVar7) {
      pcVar11 = local_70;
    }
    if (param_3 + 1 < iVar13) {
      lVar15 = (long)(param_3 + 1);
      do {
        pcVar6 = local_70;
        __n = (ulong)((byte)local_80[0] >> 1);
        if (!bVar7) {
          __n = local_78;
        }
        uVar4 = __n - 1;
        if (0 < (long)__n) {
          pcVar1 = pcVar11 + __n;
          pcVar9 = pcVar11;
          while (pcVar9 = memchr(pcVar9,0x25,__n), pcVar9 != (char *)0x0) {
            if (*pcVar9 == '%') {
              if (((pcVar9 != pcVar1) &&
                  (uVar12 = (long)pcVar9 - (long)pcVar11, uVar12 != 0xffffffffffffffff)) &&
                 (uVar12 != uVar4)) {
                pcVar11 = pcVar14;
                if (!bVar7) {
                  pcVar11 = pcVar6;
                }
                if (((byte)pcVar11[uVar12 + 1] - 100 < 0x10) &&
                   ((1 << (ulong)((byte)pcVar11[uVar12 + 1] - 100 & 0x1f) & 0x8005U) != 0)) {
                  se::Value::toStringForce();
                  uVar4 = local_a0 >> 1 & 0x7f;
                  pcVar11 = (char *)((ulong)&local_a0 | 1);
                  if ((local_a0 & 1) != 0) {
                    uVar4 = uStack_98;
                    pcVar11 = local_90;
                  }
                  std::__ndk1::
                  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                  replace(local_80,uVar12,2,pcVar11,uVar4);
                  pcVar11 = local_90;
                  if ((local_a0 & 1) == 0) goto LAB_0090d1f0;
                  goto LAB_0090d1ec;
                }
              }
              break;
            }
            pcVar9 = pcVar9 + 1;
            __n = (long)pcVar1 - (long)pcVar9;
            if ((long)__n < 1) break;
          }
        }
        se::Value::toStringForce();
        puVar10 = (ulong *)std::__ndk1::
                           basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                           ::insert(local_b8,0," ",1);
        local_90 = (char *)puVar10[2];
        uStack_98 = puVar10[1];
        local_a0 = *puVar10;
        puVar10[1] = 0;
        puVar10[2] = 0;
        *puVar10 = 0;
        uVar4 = local_a0 >> 1 & 0x7f;
        pcVar11 = (char *)((ulong)&local_a0 | 1);
        if ((local_a0 & 1) != 0) {
          uVar4 = uStack_98;
          pcVar11 = local_90;
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::append(local_80,pcVar11,uVar4);
        if ((local_a0 & 1) != 0) {
          operator_delete(local_90);
        }
        pcVar11 = local_a8;
        if (((byte)local_b8[0] & 1) != 0) {
LAB_0090d1ec:
          operator_delete(pcVar11);
        }
LAB_0090d1f0:
        lVar15 = lVar15 + 1;
        bVar7 = ((byte)local_80[0] & 1) == 0;
        pcVar11 = pcVar14;
        if (!bVar7) {
          pcVar11 = local_70;
        }
      } while (lVar15 < (lVar3 - lVar2) * 0x10000000 >> 0x20);
    }
    __android_log_print(3,"jswrapper","JS: %s%s\n",param_2,pcVar11);
  }
  if (((byte)local_80[0] & 1) != 0) {
    operator_delete(local_70);
  }
LAB_0090d244:
  if (*(long *)(lVar5 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

