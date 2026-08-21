
void FUN_010ea604(long *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined1 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined1 *puVar14;
  char *pcVar15;
  char *pcVar16;
  ulong uVar17;
  char local_78 [4];
  char local_74;
  undefined1 local_73;
  undefined1 local_72;
  undefined1 local_71;
  undefined1 local_70;
  undefined1 local_6f;
  undefined1 local_6e;
  byte local_6d;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  puVar13 = (undefined8 *)param_1[5];
  lVar7 = puVar13[1];
  if (lVar7 == 0) {
    uVar6 = (*(code *)puVar13[3])(param_1);
    if ((int)uVar6 == 0) goto LAB_010ea810;
    lVar7 = puVar13[1];
  }
  lVar7 = lVar7 + -1;
  puVar14 = (undefined1 *)*puVar13 + 1;
  uVar4 = *(undefined1 *)*puVar13;
  if (lVar7 == 0) {
    uVar6 = (*(code *)puVar13[3])(param_1);
    if ((int)uVar6 == 0) goto LAB_010ea810;
    puVar14 = (undefined1 *)*puVar13;
    lVar7 = puVar13[1];
  }
  pcVar15 = puVar14 + 1;
  lVar7 = lVar7 + -1;
  uVar10 = (ulong)CONCAT11(uVar4,*puVar14);
  lVar8 = uVar10 - 2;
  uVar1 = (uint)lVar8;
  if (uVar10 < 2 || lVar8 == 0) {
    uVar1 = 0;
  }
  uVar2 = 0xe;
  if (uVar10 < 0x10) {
    uVar2 = uVar1;
  }
  if (uVar2 == 0) {
    uVar10 = 0;
  }
  else {
    uVar17 = 0;
    uVar10 = (ulong)uVar2;
    pcVar16 = pcVar15;
    do {
      if (lVar7 == 0) {
        uVar6 = (*(code *)puVar13[3])(param_1);
        if ((int)uVar6 == 0) goto LAB_010ea810;
        pcVar16 = (char *)*puVar13;
        lVar7 = puVar13[1];
      }
      pcVar15 = pcVar16 + 1;
      lVar7 = lVar7 + -1;
      local_78[uVar17] = *pcVar16;
      uVar17 = uVar17 + 1;
      pcVar16 = pcVar15;
    } while (uVar17 < uVar10);
  }
  iVar3 = *(int *)((long)param_1 + 0x23c);
  lVar12 = lVar8 - uVar10;
  if (iVar3 == 0xee) {
    if ((((uVar2 < 0xc) || (local_78[0] != 'A')) || (local_78[1] != 'd')) ||
       (((local_78[2] != 'o' || (local_78[3] != 'b')) || (local_74 != 'e')))) {
      lVar9 = *param_1;
      *(undefined4 *)(lVar9 + 0x28) = 0x50;
      *(uint *)(lVar9 + 0x2c) = (uint)lVar8;
      (**(code **)(lVar9 + 8))(param_1,1);
    }
    else {
      lVar8 = *param_1;
      *(undefined4 *)(lVar8 + 0x28) = 0x4e;
      *(uint *)(lVar8 + 0x2c) = (uint)CONCAT11(local_73,local_72);
      *(uint *)(lVar8 + 0x30) = (uint)CONCAT11(local_71,local_70);
      *(uint *)(lVar8 + 0x34) = (uint)CONCAT11(local_6f,local_6e);
      *(uint *)(lVar8 + 0x38) = (uint)local_6d;
      (**(code **)(lVar8 + 8))(param_1,1);
      *(undefined4 *)((long)param_1 + 0x184) = 1;
      *(byte *)(param_1 + 0x31) = local_6d;
    }
  }
  else if (iVar3 == 0xe0) {
    FUN_010eb1b0(param_1,local_78,uVar2,lVar12);
  }
  else {
    puVar11 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar11 + 5) = 0x46;
    *(int *)((long)puVar11 + 0x2c) = iVar3;
    (*(code *)*puVar11)(param_1);
  }
  *puVar13 = pcVar15;
  puVar13[1] = lVar7;
  if (0 < lVar12) {
    (**(code **)(param_1[5] + 0x20))(param_1,lVar12);
  }
  uVar6 = 1;
LAB_010ea810:
  if (*(long *)(lVar5 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar6);
  }
  return;
}

