
uint FUN_00e45558(long param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  ulong uVar3;
  byte *pbVar4;
  uint uVar5;
  byte *pbVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined1 uVar9;
  long lVar11;
  void *__dest;
  long lVar12;
  ulong uVar13;
  long *plVar14;
  long lVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined1 auStack_a28 [1224];
  byte *local_560;
  undefined8 local_558;
  long local_550;
  long lStack_548;
  undefined1 *local_140;
  uint local_6c [3];
  undefined1 uVar10;
  
  lVar11 = *(long *)(param_1 + 8);
  lVar12 = *(long *)(lVar11 + 0x270);
  local_6c[0] = 0;
  uVar8 = *(undefined8 *)(lVar11 + 0xb8);
  lVar15 = *(long *)(lVar11 + 0x100);
  plVar14 = *(long **)(*(long *)(lVar11 + 0xf0) + 0x68);
  if (plVar14 == (long *)0x0) {
    iVar1 = *(int *)(lVar11 + 0x22c) + *(int *)(lVar11 + 0x228);
    local_6c[0] = FUN_00e1bb5c(lVar12,*(long *)(lVar11 + 0x220) + *(long *)(lVar11 + 0x248) +
                                      (ulong)(uint)(iVar1 * param_2));
    if ((local_6c[0] != 0) || (local_6c[0] = FUN_00e1d718(lVar12,iVar1 * 2), local_6c[0] != 0)) {
LAB_00e4560c:
      uVar9 = 0;
      __dest = (void *)0x0;
      goto LAB_00e458cc;
    }
    uVar7 = *(uint *)(lVar11 + 0x228);
    uVar13 = (ulong)(int)uVar7;
    pbVar4 = *(byte **)(lVar12 + 0x40);
    if ((uVar13 & 0xff) == 0) {
      uVar3 = 0;
    }
    else {
      uVar5 = uVar7 - 1;
      uVar3 = 0;
      pbVar6 = pbVar4;
      do {
        uVar7 = uVar7 - 1;
        uVar3 = (ulong)*pbVar6 | uVar3 << 8;
        pbVar6 = pbVar6 + 1;
      } while ((uVar7 & 0xff) != 0);
      pbVar4 = pbVar4 + ((ulong)uVar5 & 0xff) + 1;
    }
    uVar7 = *(uint *)(lVar11 + 0x22c);
    uVar16 = 0;
    if ((uVar7 & 0xff) == 0) {
      uVar13 = 0;
    }
    else {
      pbVar6 = pbVar4;
      uVar5 = uVar7;
      do {
        uVar5 = uVar5 - 1;
        uVar16 = (ulong)*pbVar6 | uVar16 << 8;
        pbVar6 = pbVar6 + 1;
      } while ((uVar5 & 0xff) != 0);
      pbVar4 = pbVar4 + uVar13 + ((ulong)(uVar7 - 1) & 0xff);
      uVar13 = 0;
      do {
        pbVar4 = pbVar4 + 1;
        uVar7 = uVar7 - 1;
        uVar13 = (ulong)*pbVar4 | uVar13 << 8;
      } while ((uVar7 & 0xff) != 0);
    }
    FUN_00e1d90c(lVar12);
    if ((((ulong)(long)*(int *)(lVar11 + 0x238) <= uVar3) || (uVar13 < uVar16)) ||
       (*(ulong *)(lVar12 + 8) < uVar13)) {
      __dest = (void *)0x0;
      goto LAB_00e458c4;
    }
    uVar13 = uVar13 - uVar16;
    if (uVar13 == 0) goto LAB_00e4560c;
    __dest = (void *)FUN_00e1388c(uVar8,uVar13,local_6c);
    if ((local_6c[0] == 0) &&
       (local_6c[0] = FUN_00e1d4a8(lVar12,*(long *)(lVar11 + 0x248) + uVar16,__dest,uVar13),
       local_6c[0] == 0)) {
      local_6c[0] = 0;
      goto LAB_00e456c8;
    }
  }
  else {
    local_6c[0] = (**(code **)*plVar14)(plVar14[1],param_2,&local_560);
    if (local_6c[0] != 0) {
      __dest = (void *)0x0;
      uVar9 = 0;
      goto LAB_00e458cc;
    }
    uVar7 = *(uint *)(lVar11 + 0x228);
    if ((uVar7 & 0xff) == 0) {
      uVar3 = 0;
      if ((int)local_558 == 0) goto LAB_00e4569c;
LAB_00e45650:
      uVar13 = (ulong)(int)((int)local_558 - uVar7);
      __dest = (void *)FUN_00e1388c(uVar8,uVar13,local_6c);
      if (local_6c[0] == 0) {
        memcpy(__dest,local_560 + *(int *)(lVar11 + 0x228),uVar13);
      }
    }
    else {
      uVar3 = 0;
      pbVar4 = local_560;
      uVar5 = uVar7;
      do {
        uVar5 = uVar5 - 1;
        uVar3 = (ulong)*pbVar4 | uVar3 << 8;
        pbVar4 = pbVar4 + 1;
      } while ((uVar5 & 0xff) != 0);
      if ((int)local_558 != 0) goto LAB_00e45650;
LAB_00e4569c:
      uVar13 = 0;
      __dest = (void *)0x0;
    }
    (**(code **)(*plVar14 + 8))(plVar14[1],&local_560);
    if (local_6c[0] == 0) {
LAB_00e456c8:
      puVar2 = (undefined4 *)(*(long *)(lVar11 + 600) + uVar3 * 0x10);
      *(undefined4 *)(param_1 + 0xa9c) = *puVar2;
      *(undefined8 *)(param_1 + 0xaa0) = *(undefined8 *)(puVar2 + 2);
      *(undefined8 *)(param_1 + 0xab0) = 0;
      *(undefined8 *)(param_1 + 0xaa8) = 0;
      lVar12 = *(long *)(lVar11 + 0x240) + uVar3 * 0x150;
      uVar17 = *(undefined8 *)(lVar12 + 0x118);
      uVar19 = *(undefined8 *)(lVar12 + 0x110);
      uVar18 = *(undefined8 *)(lVar12 + 0x108);
      *(undefined8 *)(param_1 + 0xad0) = *(undefined8 *)(lVar12 + 0x120);
      *(undefined8 *)(param_1 + 0xac8) = uVar17;
      *(undefined8 *)(param_1 + 0xac0) = uVar19;
      *(undefined8 *)(param_1 + 0xab8) = uVar18;
      uVar17 = *(undefined8 *)(lVar12 + 0x128);
      *(undefined8 *)(param_1 + 0xae0) = *(undefined8 *)(lVar12 + 0x130);
      *(undefined8 *)(param_1 + 0xad8) = uVar17;
      uVar5 = *(uint *)(lVar12 + 4);
      uVar7 = uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU);
      uVar3 = (ulong)uVar7;
      *(uint *)(param_1 + 0xa98) = uVar5;
      if (uVar13 < uVar3) {
LAB_00e458c4:
        local_6c[0] = 9;
        uVar9 = 0;
        goto LAB_00e458cc;
      }
      if (-1 < (int)uVar5) {
        (**(code **)(lVar15 + 0x20))(__dest,uVar13,0x10ea);
      }
      if (*(char *)(param_1 + 0x86) == '\0') {
        (**(code **)(lVar15 + 0x30))(&local_560,param_1,1);
        (**(code **)(lVar15 + 0x38))(lVar11,lVar12,auStack_a28);
        local_140 = auStack_a28;
        local_6c[0] = (**(code **)(*(long *)(lVar15 + 0x18) + 0x18))
                                (&local_560,(long)__dest + uVar3,uVar13 - uVar3);
        if ((local_6c[0] & 0xff) != 0xa4) goto joined_r0x00e45998;
        *(undefined1 *)(*(long *)(param_1 + 0x10) + 0x130) = 0;
        local_6c[0] = (**(code **)(*(long *)(lVar15 + 0x18) + 0x18))
                                (&local_560,(long)__dest + uVar3,uVar13 - uVar3);
        uVar10 = 1;
        uVar9 = 1;
      }
      else {
        local_6c[0] = (**(code **)(*(long *)(lVar15 + 0x18) + 0x10))
                                (param_1,(long)__dest + uVar3,(int)uVar13 - uVar7);
joined_r0x00e45998:
        uVar10 = 0;
        uVar9 = 0;
      }
      if (((plVar14 != (long *)0x0) && (uVar9 = uVar10, local_6c[0] == 0)) &&
         (*(long *)(*plVar14 + 0x10) != 0)) {
        lVar11 = FT_RoundFix(*(undefined8 *)(param_1 + 0x40));
        local_560 = (byte *)(lVar11 >> 0x10);
        local_558 = 0;
        local_550 = FT_RoundFix(*(undefined8 *)(param_1 + 0x50));
        local_550 = local_550 >> 0x10;
        lStack_548 = FT_RoundFix(*(undefined8 *)(param_1 + 0x58));
        lStack_548 = lStack_548 >> 0x10;
        local_6c[0] = (**(code **)(*plVar14 + 0x10))(plVar14[1],param_2,0,&local_560);
        *(long *)(param_1 + 0x40) = (long)local_560 << 0x10;
        *(long *)(param_1 + 0x58) = lStack_548 << 0x10;
        *(long *)(param_1 + 0x50) = local_550 << 0x10;
      }
      goto LAB_00e458cc;
    }
  }
  uVar9 = 0;
LAB_00e458cc:
  FUN_00e139fc(uVar8,__dest);
  *(undefined1 *)(*(long *)(param_1 + 0x10) + 0x131) = uVar9;
  return local_6c[0];
}

