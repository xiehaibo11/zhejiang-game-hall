
void FUN_00d8471c(long *param_1)

{
  long *plVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  char cVar12;
  uint uVar13;
  ulong uVar14;
  long lVar15;
  undefined8 *puVar16;
  long *plVar17;
  uint uVar18;
  ulong uVar19;
  undefined1 *puVar20;
  char *pcVar21;
  long lVar22;
  char cVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  ulong uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  long lVar34;
  undefined4 *puVar35;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  lVar34 = param_1[0x42];
  if (*(int *)((long)param_1 + 0x124) == 0) {
    if (0 < *(int *)((long)param_1 + 0x174)) {
      lVar15 = 0x2f;
      do {
        lVar22 = param_1[lVar15];
        if ((*(int *)((long)param_1 + 0x1cc) == 0) && (*(int *)((long)param_1 + 0x1d4) == 0)) {
          FUN_00d85ff8(param_1,*(undefined4 *)(lVar22 + 0x14),0);
          iVar7 = (int)param_1[0x3a];
        }
        else {
          iVar7 = (int)param_1[0x3a];
        }
        if (iVar7 != 0) {
          FUN_00d85ff8(param_1,*(undefined4 *)(lVar22 + 0x18),1);
        }
        lVar22 = lVar15 + -0x2e;
        lVar15 = lVar15 + 1;
      } while (lVar22 < *(int *)((long)param_1 + 0x174));
    }
    goto LAB_00d84c5c;
  }
  uStack_70 = 0;
  local_78 = 0;
  uStack_60 = 0;
  local_68 = 0;
  uVar5 = *(uint *)((long)param_1 + 0x174);
  uVar14 = (ulong)(int)uVar5;
  if ((int)uVar5 < 1) {
LAB_00d848a8:
    uVar18 = 0;
LAB_00d848ac:
    uVar13 = 0;
    uVar24 = 0;
    uVar25 = 0;
    uVar26 = 0;
    uVar27 = 0;
    uVar29 = 0;
    uVar30 = 0;
    uVar31 = 0;
    uVar32 = 0;
    uVar33 = 0;
    uVar5 = 0;
    uVar8 = 0;
    uVar9 = 0;
    uVar10 = 0;
    uVar11 = 0;
  }
  else {
    uVar18 = *(uint *)(param_1 + 0x3a);
    if (*(int *)((long)param_1 + 0x1cc) != 0) {
      if (uVar18 != 0) {
        if (uVar5 < 2) {
          uVar19 = 0;
        }
        else {
          uVar19 = uVar14 & 0xfffffffffffffffe;
          if (uVar19 != 0) {
            plVar17 = param_1 + 0x30;
            uVar28 = uVar19;
            do {
              plVar1 = plVar17 + -1;
              lVar15 = *plVar17;
              uVar28 = uVar28 - 2;
              plVar17 = plVar17 + 2;
              iVar7 = *(int *)(lVar15 + 0x18);
              *(undefined1 *)((long)&local_78 + (long)*(int *)(*plVar1 + 0x18)) = 1;
              *(undefined1 *)((long)&local_78 + (long)iVar7) = 1;
            } while (uVar28 != 0);
            if (uVar19 == uVar14) goto LAB_00d848a8;
          }
        }
        lVar15 = uVar14 - uVar19;
        plVar17 = param_1 + uVar19 + 0x2f;
        do {
          lVar15 = lVar15 + -1;
          *(undefined1 *)((long)&local_78 + (long)*(int *)(*plVar17 + 0x18)) = 1;
          plVar17 = plVar17 + 1;
        } while (lVar15 != 0);
        goto LAB_00d848a8;
      }
      goto LAB_00d848ac;
    }
    if (*(int *)((long)param_1 + 0x1d4) != 0) {
      if (uVar18 != 0) {
        plVar17 = param_1 + 0x2f;
        do {
          uVar14 = uVar14 - 1;
          *(undefined1 *)((long)&local_78 + (long)*(int *)(*plVar17 + 0x18)) = 1;
          plVar17 = plVar17 + 1;
        } while (uVar14 != 0);
        goto LAB_00d848a8;
      }
      goto LAB_00d848ac;
    }
    plVar17 = param_1 + 0x2f;
    do {
      lVar15 = *plVar17;
      *(undefined1 *)((long)&local_68 + (long)*(int *)(lVar15 + 0x14)) = 1;
      if (uVar18 != 0) {
        *(undefined1 *)((long)&local_78 + (long)*(int *)(lVar15 + 0x18)) = 1;
      }
      uVar14 = uVar14 - 1;
      plVar17 = plVar17 + 1;
    } while (uVar14 != 0);
    uVar11 = (uint)local_68 & 0xff;
    uVar10 = (uint)local_68._1_1_;
    uVar9 = (uint)local_68._2_1_;
    uVar8 = (uint)local_68._3_1_;
    uVar5 = (uint)local_68._4_1_;
    uVar33 = (uint)local_68._5_1_;
    uVar32 = (uint)local_68._6_1_;
    uVar31 = (uint)local_68._7_1_;
    uVar30 = (uint)(byte)uStack_60;
    uVar29 = (uint)uStack_60._1_1_;
    uVar27 = (uint)uStack_60._2_1_;
    uVar26 = (uint)uStack_60._3_1_;
    uVar25 = (uint)uStack_60._4_1_;
    uVar24 = (uint)uStack_60._5_1_;
    uVar18 = (uint)uStack_60._6_1_;
    uVar13 = (uint)uStack_60._7_1_;
  }
  iVar7 = uVar26 + uVar25 + uVar27 + uVar29 + uVar30 + uVar31 + uVar32 + uVar33 + uVar5 + uVar8 +
          uVar9 + uVar10 + uVar11 + (uint)(byte)local_78 + (uint)local_78._1_1_ +
          (uint)local_78._2_1_ + (uint)local_78._3_1_ + (uint)local_78._4_1_ + (uint)local_78._5_1_
          + (uint)local_78._6_1_ + (uint)local_78._7_1_ + (uint)(byte)uStack_70 +
          (uint)uStack_70._1_1_ + (uint)uStack_70._2_1_ + (uint)uStack_70._3_1_ +
          (uint)uStack_70._4_1_ + uVar24 + (uint)uStack_70._5_1_ + uVar18 + (uint)uStack_70._6_1_ +
          uVar13 + (uint)uStack_70._7_1_;
  if (iVar7 != 0) {
    puVar16 = (undefined8 *)param_1[5];
    puVar20 = (undefined1 *)*puVar16;
    *puVar16 = puVar20 + 1;
    *puVar20 = 0xff;
    lVar15 = puVar16[1];
    puVar16[1] = lVar15 + -1;
    if ((lVar15 + -1 == 0) && (iVar6 = (*(code *)puVar16[3])(param_1), iVar6 == 0)) {
      puVar16 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar16 + 5) = 0x19;
      (*(code *)*puVar16)(param_1);
    }
    puVar16 = (undefined8 *)param_1[5];
    puVar20 = (undefined1 *)*puVar16;
    *puVar16 = puVar20 + 1;
    *puVar20 = 0xcc;
    lVar15 = puVar16[1];
    puVar16[1] = lVar15 + -1;
    if ((lVar15 + -1 == 0) && (iVar6 = (*(code *)puVar16[3])(param_1), iVar6 == 0)) {
      puVar16 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar16 + 5) = 0x19;
      (*(code *)*puVar16)(param_1);
    }
    plVar17 = (long *)param_1[5];
    iVar7 = iVar7 * 2 + 2;
    puVar20 = (undefined1 *)*plVar17;
    *plVar17 = (long)(puVar20 + 1);
    *puVar20 = (char)((uint)iVar7 >> 8);
    lVar15 = plVar17[1];
    plVar17[1] = lVar15 + -1;
    if ((lVar15 + -1 == 0) && (iVar6 = (*(code *)plVar17[3])(param_1), iVar6 == 0)) {
      puVar16 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar16 + 5) = 0x19;
      (*(code *)*puVar16)(param_1);
    }
    plVar17 = (long *)param_1[5];
    puVar20 = (undefined1 *)*plVar17;
    *plVar17 = (long)(puVar20 + 1);
    *puVar20 = (char)iVar7;
    lVar15 = plVar17[1];
    plVar17[1] = lVar15 + -1;
    if ((lVar15 + -1 == 0) && (iVar7 = (*(code *)plVar17[3])(param_1), iVar7 == 0)) {
      puVar16 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar16 + 5) = 0x19;
      (*(code *)*puVar16)(param_1);
    }
    lVar15 = 0;
    do {
      if (*(char *)((long)&local_68 + lVar15) == '\0') {
LAB_00d84b8c:
        cVar12 = *(char *)((long)&local_78 + lVar15);
      }
      else {
        plVar17 = (long *)param_1[5];
        pcVar21 = (char *)*plVar17;
        *plVar17 = (long)(pcVar21 + 1);
        *pcVar21 = (char)lVar15;
        lVar22 = plVar17[1];
        plVar17[1] = lVar22 + -1;
        if ((lVar22 + -1 == 0) && (iVar7 = (*(code *)plVar17[3])(param_1), iVar7 == 0)) {
          puVar16 = (undefined8 *)*param_1;
          *(undefined4 *)(puVar16 + 5) = 0x19;
          (*(code *)*puVar16)(param_1);
        }
        plVar17 = (long *)param_1[5];
        cVar12 = *(char *)((long)param_1 + lVar15 + 0xe0);
        cVar23 = *(char *)((long)param_1 + lVar15 + 0xf0);
        pcVar21 = (char *)*plVar17;
        *plVar17 = (long)(pcVar21 + 1);
        *pcVar21 = cVar12 + cVar23 * '\x10';
        lVar22 = plVar17[1];
        plVar17[1] = lVar22 + -1;
        if ((lVar22 + -1 != 0) || (iVar7 = (*(code *)plVar17[3])(param_1), iVar7 != 0))
        goto LAB_00d84b8c;
        puVar16 = (undefined8 *)*param_1;
        *(undefined4 *)(puVar16 + 5) = 0x19;
        (*(code *)*puVar16)(param_1);
        cVar12 = *(char *)((long)&local_78 + lVar15);
      }
      if (cVar12 != '\0') {
        plVar17 = (long *)param_1[5];
        pcVar21 = (char *)*plVar17;
        *plVar17 = (long)(pcVar21 + 1);
        *pcVar21 = (char)lVar15 + '\x10';
        lVar22 = plVar17[1];
        plVar17[1] = lVar22 + -1;
        if ((lVar22 + -1 == 0) && (iVar7 = (*(code *)plVar17[3])(param_1), iVar7 == 0)) {
          puVar16 = (undefined8 *)*param_1;
          *(undefined4 *)(puVar16 + 5) = 0x19;
          (*(code *)*puVar16)(param_1);
        }
        plVar17 = (long *)param_1[5];
        uVar3 = *(undefined1 *)((long)param_1 + lVar15 + 0x100);
        puVar20 = (undefined1 *)*plVar17;
        *plVar17 = (long)(puVar20 + 1);
        *puVar20 = uVar3;
        lVar22 = plVar17[1];
        plVar17[1] = lVar22 + -1;
        if ((lVar22 + -1 == 0) && (iVar7 = (*(code *)plVar17[3])(param_1), iVar7 == 0)) {
          puVar16 = (undefined8 *)*param_1;
          *(undefined4 *)(puVar16 + 5) = 0x19;
          (*(code *)*puVar16)(param_1);
        }
      }
      lVar15 = lVar15 + 1;
    } while (lVar15 != 0x10);
  }
LAB_00d84c5c:
  if (*(int *)((long)param_1 + 0x13c) != *(int *)(lVar34 + 0x38)) {
    puVar16 = (undefined8 *)param_1[5];
    puVar20 = (undefined1 *)*puVar16;
    *puVar16 = puVar20 + 1;
    *puVar20 = 0xff;
    lVar15 = puVar16[1];
    puVar16[1] = lVar15 + -1;
    if ((lVar15 + -1 == 0) && (iVar7 = (*(code *)puVar16[3])(param_1), iVar7 == 0)) {
      puVar16 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar16 + 5) = 0x19;
      (*(code *)*puVar16)(param_1);
    }
    puVar16 = (undefined8 *)param_1[5];
    puVar20 = (undefined1 *)*puVar16;
    *puVar16 = puVar20 + 1;
    *puVar20 = 0xdd;
    lVar15 = puVar16[1];
    puVar16[1] = lVar15 + -1;
    if ((lVar15 + -1 == 0) && (iVar7 = (*(code *)puVar16[3])(param_1), iVar7 == 0)) {
      puVar16 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar16 + 5) = 0x19;
      (*(code *)*puVar16)(param_1);
    }
    puVar16 = (undefined8 *)param_1[5];
    puVar20 = (undefined1 *)*puVar16;
    *puVar16 = puVar20 + 1;
    *puVar20 = 0;
    lVar15 = puVar16[1];
    puVar16[1] = lVar15 + -1;
    if ((lVar15 + -1 == 0) && (iVar7 = (*(code *)puVar16[3])(param_1), iVar7 == 0)) {
      puVar16 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar16 + 5) = 0x19;
      (*(code *)*puVar16)(param_1);
    }
    puVar16 = (undefined8 *)param_1[5];
    puVar20 = (undefined1 *)*puVar16;
    *puVar16 = puVar20 + 1;
    *puVar20 = 4;
    lVar15 = puVar16[1];
    puVar16[1] = lVar15 + -1;
    if ((lVar15 + -1 == 0) && (iVar7 = (*(code *)puVar16[3])(param_1), iVar7 == 0)) {
      puVar16 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar16 + 5) = 0x19;
      (*(code *)*puVar16)(param_1);
    }
    plVar17 = (long *)param_1[5];
    uVar2 = *(undefined4 *)((long)param_1 + 0x13c);
    puVar20 = (undefined1 *)*plVar17;
    *plVar17 = (long)(puVar20 + 1);
    *puVar20 = (char)((uint)uVar2 >> 8);
    lVar15 = plVar17[1];
    plVar17[1] = lVar15 + -1;
    if ((lVar15 + -1 == 0) && (iVar7 = (*(code *)plVar17[3])(param_1), iVar7 == 0)) {
      puVar16 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar16 + 5) = 0x19;
      (*(code *)*puVar16)(param_1);
    }
    plVar17 = (long *)param_1[5];
    puVar20 = (undefined1 *)*plVar17;
    *plVar17 = (long)(puVar20 + 1);
    *puVar20 = (char)uVar2;
    lVar15 = plVar17[1];
    plVar17[1] = lVar15 + -1;
    if ((lVar15 + -1 == 0) && (iVar7 = (*(code *)plVar17[3])(param_1), iVar7 == 0)) {
      puVar16 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar16 + 5) = 0x19;
      (*(code *)*puVar16)(param_1);
    }
    *(undefined4 *)(lVar34 + 0x38) = *(undefined4 *)((long)param_1 + 0x13c);
  }
  puVar16 = (undefined8 *)param_1[5];
  puVar20 = (undefined1 *)*puVar16;
  *puVar16 = puVar20 + 1;
  *puVar20 = 0xff;
  lVar34 = puVar16[1];
  puVar16[1] = lVar34 + -1;
  if ((lVar34 + -1 == 0) && (iVar7 = (*(code *)puVar16[3])(param_1), iVar7 == 0)) {
    puVar16 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar16 + 5) = 0x19;
    (*(code *)*puVar16)(param_1);
  }
  puVar16 = (undefined8 *)param_1[5];
  puVar20 = (undefined1 *)*puVar16;
  *puVar16 = puVar20 + 1;
  *puVar20 = 0xda;
  lVar34 = puVar16[1];
  puVar16[1] = lVar34 + -1;
  if ((lVar34 + -1 == 0) && (iVar7 = (*(code *)puVar16[3])(param_1), iVar7 == 0)) {
    puVar16 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar16 + 5) = 0x19;
    (*(code *)*puVar16)(param_1);
  }
  plVar17 = (long *)param_1[5];
  puVar20 = (undefined1 *)*plVar17;
  iVar7 = *(int *)((long)param_1 + 0x174) * 2 + 6;
  *plVar17 = (long)(puVar20 + 1);
  *puVar20 = (char)((uint)iVar7 >> 8);
  lVar34 = plVar17[1];
  plVar17[1] = lVar34 + -1;
  if ((lVar34 + -1 == 0) && (iVar6 = (*(code *)plVar17[3])(param_1), iVar6 == 0)) {
    puVar16 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar16 + 5) = 0x19;
    (*(code *)*puVar16)(param_1);
  }
  plVar17 = (long *)param_1[5];
  puVar20 = (undefined1 *)*plVar17;
  *plVar17 = (long)(puVar20 + 1);
  *puVar20 = (char)iVar7;
  lVar34 = plVar17[1];
  plVar17[1] = lVar34 + -1;
  if ((lVar34 + -1 == 0) && (iVar7 = (*(code *)plVar17[3])(param_1), iVar7 == 0)) {
    puVar16 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar16 + 5) = 0x19;
    (*(code *)*puVar16)(param_1);
  }
  plVar17 = (long *)param_1[5];
  uVar2 = *(undefined4 *)((long)param_1 + 0x174);
  puVar20 = (undefined1 *)*plVar17;
  *plVar17 = (long)(puVar20 + 1);
  *puVar20 = (char)uVar2;
  lVar34 = plVar17[1];
  plVar17[1] = lVar34 + -1;
  if ((lVar34 + -1 == 0) && (iVar7 = (*(code *)plVar17[3])(param_1), iVar7 == 0)) {
    puVar16 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar16 + 5) = 0x19;
    (*(code *)*puVar16)(param_1);
  }
  if (0 < *(int *)((long)param_1 + 0x174)) {
    lVar34 = 0;
    do {
      plVar17 = (long *)param_1[5];
      puVar35 = (undefined4 *)param_1[lVar34 + 0x2f];
      puVar20 = (undefined1 *)*plVar17;
      uVar2 = *puVar35;
      *plVar17 = (long)(puVar20 + 1);
      *puVar20 = (char)uVar2;
      lVar15 = plVar17[1];
      plVar17[1] = lVar15 + -1;
      if ((lVar15 + -1 == 0) && (iVar7 = (*(code *)plVar17[3])(param_1), iVar7 == 0)) {
        puVar16 = (undefined8 *)*param_1;
        *(undefined4 *)(puVar16 + 5) = 0x19;
        (*(code *)*puVar16)(param_1);
        if (*(int *)((long)param_1 + 0x1cc) != 0) goto LAB_00d8507c;
LAB_00d85044:
        if (*(int *)((long)param_1 + 0x1d4) != 0) goto LAB_00d8507c;
        cVar12 = (char)puVar35[5];
        cVar23 = cVar12;
        if ((int)param_1[0x3a] == 0) goto LAB_00d85058;
LAB_00d85088:
        cVar12 = cVar23;
        cVar23 = (char)puVar35[6];
      }
      else {
        if (*(int *)((long)param_1 + 0x1cc) == 0) goto LAB_00d85044;
LAB_00d8507c:
        cVar12 = '\0';
        cVar23 = '\0';
        if ((int)param_1[0x3a] != 0) goto LAB_00d85088;
LAB_00d85058:
        cVar23 = '\0';
      }
      plVar17 = (long *)param_1[5];
      pcVar21 = (char *)*plVar17;
      *plVar17 = (long)(pcVar21 + 1);
      *pcVar21 = cVar23 + cVar12 * '\x10';
      lVar15 = plVar17[1];
      plVar17[1] = lVar15 + -1;
      if ((lVar15 + -1 == 0) && (iVar7 = (*(code *)plVar17[3])(param_1), iVar7 == 0)) {
        puVar16 = (undefined8 *)*param_1;
        *(undefined4 *)(puVar16 + 5) = 0x19;
        (*(code *)*puVar16)(param_1);
      }
      lVar34 = lVar34 + 1;
    } while (lVar34 < *(int *)((long)param_1 + 0x174));
  }
  plVar17 = (long *)param_1[5];
  uVar2 = *(undefined4 *)((long)param_1 + 0x1cc);
  puVar20 = (undefined1 *)*plVar17;
  *plVar17 = (long)(puVar20 + 1);
  *puVar20 = (char)uVar2;
  lVar34 = plVar17[1];
  plVar17[1] = lVar34 + -1;
  if ((lVar34 + -1 == 0) && (iVar7 = (*(code *)plVar17[3])(param_1), iVar7 == 0)) {
    puVar16 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar16 + 5) = 0x19;
    (*(code *)*puVar16)(param_1);
  }
  plVar17 = (long *)param_1[5];
  lVar34 = param_1[0x3a];
  puVar20 = (undefined1 *)*plVar17;
  *plVar17 = (long)(puVar20 + 1);
  *puVar20 = (char)(int)lVar34;
  lVar34 = plVar17[1];
  plVar17[1] = lVar34 + -1;
  if ((lVar34 + -1 == 0) && (iVar7 = (*(code *)plVar17[3])(param_1), iVar7 == 0)) {
    puVar16 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar16 + 5) = 0x19;
    (*(code *)*puVar16)(param_1);
  }
  plVar17 = (long *)param_1[5];
  iVar7 = *(int *)((long)param_1 + 0x1d4);
  lVar34 = param_1[0x3b];
  pcVar21 = (char *)*plVar17;
  *plVar17 = (long)(pcVar21 + 1);
  *pcVar21 = (char)(int)lVar34 + (char)(iVar7 << 4);
  lVar34 = plVar17[1];
  plVar17[1] = lVar34 + -1;
  if ((lVar34 + -1 == 0) && (iVar7 = (*(code *)plVar17[3])(param_1), iVar7 == 0)) {
    puVar16 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar16 + 5) = 0x19;
    (*(code *)*puVar16)(param_1);
  }
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

