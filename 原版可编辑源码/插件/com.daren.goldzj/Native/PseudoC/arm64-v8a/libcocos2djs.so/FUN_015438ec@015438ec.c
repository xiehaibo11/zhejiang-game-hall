
void FUN_015438ec(long *param_1,long *param_2,uint param_3,uint param_4,int param_5,int param_6,
                 undefined8 *param_7,undefined8 *param_8,undefined8 *param_9)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined8 *puVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  code *pcVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  long lVar18;
  int *piVar19;
  uint uVar20;
  long lVar21;
  long lVar22;
  uint *puVar23;
  long lVar24;
  int iVar25;
  ulong uVar26;
  undefined8 local_f8;
  undefined8 local_f0 [16];
  long local_70;
  
  lVar7 = tpidr_el0;
  local_70 = *(long *)(lVar7 + 0x28);
  lVar24 = *param_2;
  uVar20 = *(uint *)(lVar24 + (long)(int)param_3 * 4);
  uVar26 = (ulong)uVar20;
  if (param_4 == param_3) {
    if (param_9 == param_7) {
      (**(code **)(*param_1 + 0x58))(param_1,uVar20 - 1,param_8);
      goto LAB_01543f58;
    }
    (**(code **)(*param_1 + 0x60))(param_1,uVar26,param_9);
    if (param_8 == param_7) goto LAB_01543f58;
    lVar24 = *param_1;
  }
  else {
    uVar13 = *(uint *)(lVar24 + (long)(int)param_4 * 4);
    uVar15 = param_3 + 1;
    if (uVar15 != param_4) {
      lVar22 = (long)(int)param_3;
      if (6 < (int)(param_4 - param_3)) {
        if (param_5 >> 7 == param_6 >> 7) {
          iVar25 = param_3 - 1;
          do {
            iVar25 = iVar25 + 1;
          } while (iVar25 <= (int)param_4);
          puVar9 = param_9;
          puVar4 = param_8;
          if (param_8 != param_7) {
            puVar9 = param_8;
            puVar4 = param_9;
          }
          if ((int)(uVar26 & 0x7f) != 0) {
            memset(local_f0,(uint)(param_8 == param_7),uVar26 & 0x7f);
          }
          uVar20 = (uint)(param_8 != param_7);
          if ((int)param_3 < (int)param_4) {
            puVar23 = (uint *)(lVar24 + lVar22 * 4);
            lVar22 = (int)param_4 - lVar22;
            do {
              puVar23 = puVar23 + 1;
              uVar15 = (uint)uVar26 & 0x7f;
              uVar11 = (ulong)uVar15;
              uVar26 = (ulong)*puVar23;
              uVar13 = *puVar23 & 0x7f;
              if (uVar15 < uVar13) {
                memset((void *)((long)local_f0 + uVar11),uVar20,(ulong)(uVar13 + ~uVar15) + 1);
                uVar11 = (ulong)uVar13;
              }
              uVar20 = uVar20 ^ 1;
              lVar22 = lVar22 + -1;
            } while (lVar22 != 0);
          }
          else {
            uVar11 = 0;
          }
          memset((void *)((long)local_f0 + uVar11),uVar20,(ulong)(0x7f - (int)uVar11) + 1);
          plVar8 = (long *)v8::internal::Factory::NewByteArray((Factory *)param_1[3],0x80,1);
          lVar24 = 0;
          do {
            puVar1 = (undefined1 *)((long)local_f0 + lVar24);
            lVar22 = lVar24 + *plVar8;
            lVar24 = lVar24 + 1;
            *(undefined1 *)(lVar22 + 7) = *puVar1;
          } while (lVar24 != 0x80);
          (**(code **)(*param_1 + 0xb8))(param_1,plVar8,puVar9);
          if (puVar4 != param_7) {
            (**(code **)(*param_1 + 0xe0))(param_1,puVar4);
          }
        }
        else {
          if (param_5 >> 7 == (int)uVar20 >> 7) {
            uVar3 = uVar20 + 0x80 & 0xffffff80;
            uVar16 = param_3;
            if (((int)param_3 < (int)param_4) && ((int)uVar20 <= (int)uVar3)) {
              piVar19 = (int *)(lVar24 + lVar22 * 4);
              uVar15 = param_3;
              do {
                piVar19 = piVar19 + 1;
                uVar16 = param_4;
                if (param_4 - 1 == uVar15) break;
                uVar16 = uVar15 + 1;
                uVar15 = uVar16;
              } while (*piVar19 <= (int)uVar3);
            }
            iVar25 = param_4 + param_3;
            if (iVar25 < 0) {
              iVar25 = iVar25 + 1;
            }
            uVar14 = uVar3;
            uVar15 = uVar16;
            if ((((0x100 < (int)uVar3) && ((int)((uVar16 - param_3) * 2) < (int)(param_4 - param_3))
                 ) && (0x100 < (int)(uVar13 + ~uVar20))) &&
               (((uVar17 = iVar25 >> 1, (int)uVar16 < (int)uVar17 &&
                 (uVar5 = *(uint *)(lVar24 + (long)(int)uVar17 * 4),
                 (int)(uVar20 + 0x100) <= (int)uVar5)) &&
                (((int)uVar17 < (int)param_4 &&
                 (uVar20 = (uVar5 | 0x7f) + 1, uVar14 = uVar20, uVar15 = uVar17,
                 (int)uVar5 <= (int)uVar20)))))) {
              piVar19 = (int *)(lVar24 + (long)(int)uVar17 * 4);
              do {
                piVar19 = piVar19 + 1;
                uVar14 = uVar3;
                uVar15 = uVar16;
                if (param_4 - 1 == uVar17) break;
                uVar17 = uVar17 + 1;
                uVar14 = uVar20;
                uVar15 = uVar17;
              } while (*piVar19 <= (int)uVar20);
            }
            local_f0[0] = 0;
            iVar25 = uVar15 - 2;
            if (*(uint *)(lVar24 + (long)(int)(uVar15 - 1) * 4) != uVar14) {
              iVar25 = uVar15 - 1;
            }
            puVar9 = param_8;
            if (((param_4 ^ param_3) & 1) != 0) {
              puVar9 = param_9;
            }
            if ((int)uVar13 <= (int)uVar14) {
              iVar25 = param_4 - 1;
            }
            uVar20 = uVar14;
            if ((int)uVar13 <= (int)uVar14) {
              uVar20 = uVar13;
            }
            puVar4 = local_f0;
            if ((int)uVar13 <= (int)uVar14) {
              puVar4 = puVar9;
              uVar15 = param_4;
            }
            (**(code **)(*param_1 + 0x58))(param_1,uVar20 - 1,puVar4);
            local_f8 = 0;
            FUN_015438ec(param_1,param_2,param_3,iVar25,param_5,uVar20 - 1,&local_f8,param_8,param_9
                        );
            if ((int)local_f0[0] < 1) goto LAB_01543f58;
            (**(code **)(*param_1 + 0x40))(param_1,local_f0);
            param_7 = &local_f8;
            puVar9 = param_8;
            if (((uVar15 ^ param_3) & 1) == 0) {
              puVar9 = param_9;
              param_9 = param_8;
            }
            uVar26 = (ulong)uVar20;
            param_8 = puVar9;
          }
          else {
            (**(code **)(*param_1 + 0x60))(param_1,uVar26,param_9);
          }
          FUN_015438ec(param_1,param_2,uVar15,param_4,uVar26,param_6,param_7,param_9,param_8);
        }
        goto LAB_01543f58;
      }
      lVar10 = (lVar22 << 0x20) + -0x100000000;
      lVar18 = lVar22;
      do {
        lVar21 = lVar22;
        uVar20 = param_3;
        uVar13 = uVar15;
        if ((int)param_4 <= lVar18) goto LAB_01543b70;
        uVar16 = *(uint *)(lVar24 + 4 + lVar18 * 4);
        lVar18 = lVar18 + 1;
        lVar10 = lVar10 + 0x100000000;
        iVar25 = (int)uVar26;
        uVar26 = (ulong)uVar16;
      } while (iVar25 != uVar16 - 1);
      uVar16 = (uint)lVar18;
      if (uVar16 != 0) {
        lVar21 = lVar10 >> 0x20;
        uVar20 = uVar16 - 1;
        uVar13 = uVar16;
      }
LAB_01543b70:
      local_f0[0] = 0;
      iVar25 = *(int *)(lVar24 + lVar21 * 4);
      puVar9 = param_8;
      if ((uVar20 - param_3 & 1) != 0) {
        puVar9 = param_9;
      }
      iVar6 = *(int *)(lVar24 + (long)(int)uVar13 * 4) + -1;
      if (puVar9 == local_f0) {
        if (iVar25 != iVar6) {
          puVar9 = local_f0;
          pcVar12 = *(code **)(*param_1 + 0xb0);
          goto LAB_01543d44;
        }
        (**(code **)(*param_1 + 0x90))(param_1,iVar25,local_f0);
      }
      else if (iVar25 == iVar6) {
        (**(code **)(*param_1 + 0x48))(param_1,iVar25,puVar9);
      }
      else {
        pcVar12 = *(code **)(*param_1 + 0xa8);
LAB_01543d44:
        (*pcVar12)(param_1,iVar25,iVar6,puVar9);
      }
      if ((int)param_3 < (int)uVar20) {
        do {
          puVar2 = (undefined4 *)(*param_2 + lVar21 * 4);
          lVar21 = lVar21 + -1;
          *puVar2 = puVar2[-1];
        } while (lVar22 < lVar21);
      }
      if ((int)uVar13 < (int)param_4) {
        lVar24 = (long)(int)uVar13 << 2;
        iVar25 = param_4 - uVar13;
        do {
          iVar25 = iVar25 + -1;
          puVar2 = (undefined4 *)(*param_2 + lVar24);
          lVar24 = lVar24 + 4;
          *puVar2 = puVar2[1];
        } while (iVar25 != 0);
      }
      FUN_015438ec(param_1,param_2,uVar15,param_4 - 1,param_5,param_6,param_7,param_8,param_9);
      goto LAB_01543f58;
    }
    uVar13 = uVar13 - 1;
    if (param_8 == param_7) {
      if (uVar20 == uVar13) {
        (**(code **)(*param_1 + 0x90))(param_1,uVar26,param_9);
      }
      else {
        (**(code **)(*param_1 + 0xb0))(param_1,uVar26,uVar13,param_9);
      }
      goto LAB_01543f58;
    }
    if (uVar20 == uVar13) {
      (**(code **)(*param_1 + 0x48))(param_1,uVar26,param_8);
    }
    else {
      (**(code **)(*param_1 + 0xa8))(param_1,uVar26,uVar13,param_8);
    }
    if (param_9 == param_7) goto LAB_01543f58;
    lVar24 = *param_1;
    param_8 = param_9;
  }
  (**(code **)(lVar24 + 0xe0))(param_1,param_8);
LAB_01543f58:
  if (*(long *)(lVar7 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

