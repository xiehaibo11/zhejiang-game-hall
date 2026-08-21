
/* WARNING: Removing unreachable block (ram,0x014e5e5c) */
/* WARNING: Removing unreachable block (ram,0x014e5e6c) */
/* v8::internal::SafepointTableBuilder::Emit(v8::internal::Assembler*, int) */

void __thiscall
v8::internal::SafepointTableBuilder::Emit
          (SafepointTableBuilder *this,Assembler *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  Zone *this_00;
  void *__s;
  void *pvVar4;
  ulong uVar5;
  uint *puVar6;
  ulong uVar7;
  ulong uVar8;
  uint *puVar9;
  ulong uVar10;
  uint *puVar11;
  ulong uVar12;
  long lVar13;
  uint *local_88;
  byte local_78 [17];
  undefined4 uStack_67;
  undefined1 uStack_63;
  undefined2 uStack_62;
  
  RemoveDuplicates(this);
  Assembler::Align(param_1,4);
  if (FLAG_code_comments != '\0') {
    local_78[0] = 0x28;
    uStack_62 = 0;
    uStack_67 = 0x2e656c62;
    local_78[9] = 0x70;
    local_78[10] = 0x6f;
    local_78[0xb] = 0x69;
    local_78[0xc] = 0x6e;
    local_78[0xd] = 0x74;
    local_78[0xe] = 0x20;
    local_78[0xf] = 0x74;
    local_78[0x10] = 0x61;
    local_78[1] = 0x3b;
    local_78[2] = 0x3b;
    local_78[3] = 0x3b;
    local_78[4] = 0x20;
    local_78[5] = 0x53;
    local_78[6] = 0x61;
    local_78[7] = 0x66;
    local_78[8] = 0x65;
    uStack_63 = 0;
    CodeCommentsWriter::Add
              ((CodeCommentsWriter *)(param_1 + 0x28),
               *(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x10),local_78);
    if ((local_78[0] & 1) != 0) {
      operator_delete((void *)CONCAT26(uStack_62,
                                       CONCAT15(uStack_63,CONCAT41(uStack_67,local_78[0x10]))));
    }
  }
  iVar1 = param_2 + 7;
  *(int *)(this + 0x20) = *(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x10);
  uVar2 = iVar1 >> 3;
  Assembler::dc32(param_1,*(uint *)(this + 8));
  Assembler::dc32(param_1,uVar2);
  puVar11 = *(uint **)(this + 0x10);
  puVar9 = *(uint **)(this + 0x18);
  if (puVar9 == (uint *)0x0) {
    uVar10 = 0;
    puVar9 = puVar11;
LAB_014e5d28:
    if (uVar10 != 0) goto LAB_014e5d40;
  }
  else {
    uVar10 = (ulong)puVar9[1];
    if (puVar9[1] == *puVar9) {
      puVar9 = *(uint **)(puVar9 + 2);
      uVar10 = 0;
    }
    if (puVar9 == puVar11) goto LAB_014e5d28;
LAB_014e5d40:
    uVar12 = 0;
    do {
      Assembler::dc32(param_1,puVar11[uVar12 * 6 + 6]);
      Assembler::dc32(param_1,puVar11[uVar12 * 6 + 7]);
      Assembler::dc32(param_1,puVar11[uVar12 * 6 + 8]);
      uVar12 = uVar12 + 1;
      if (*puVar11 <= uVar12) {
        puVar11 = *(uint **)(puVar11 + 2);
        uVar12 = 0;
      }
    } while ((puVar9 != puVar11) || (uVar10 != uVar12));
  }
  uVar10 = (ulong)(int)uVar2;
  if (uVar2 == 0) {
    pvVar4 = (void *)0x0;
    __s = (void *)0x0;
  }
  else {
    if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    this_00 = *(Zone **)(this + 0x28);
    uVar12 = uVar10 + 7 & 0xfffffffffffffff8;
    __s = *(void **)(this_00 + 0x10);
    if ((ulong)(*(long *)(this_00 + 0x18) - (long)__s) < uVar12) {
      __s = (void *)Zone::NewExpand(this_00,uVar12);
    }
    else {
      *(ulong *)(this_00 + 0x10) = (long)__s + uVar12;
    }
    memset(__s,0,uVar10);
    pvVar4 = __s;
    uVar12 = uVar10;
    if (1 < uVar2) {
      uVar5 = uVar10 & 0xfffffffffffffffe;
      pvVar4 = (void *)((long)__s + uVar5);
      uVar12 = uVar10 - uVar5;
      uVar8 = uVar5;
      do {
        uVar8 = uVar8 - 2;
      } while (uVar8 != 0);
      if (uVar5 == uVar10) goto LAB_014e5e34;
    }
    do {
      uVar12 = uVar12 - 1;
      pvVar4 = (void *)((long)pvVar4 + 1);
    } while (uVar12 != 0);
  }
LAB_014e5e34:
  puVar11 = *(uint **)(this + 0x10);
  local_88 = *(uint **)(this + 0x18);
  if (local_88 == (uint *)0x0) {
    uVar12 = 0;
    local_88 = puVar11;
LAB_014e5e78:
    if (local_88 == puVar11) goto LAB_014e5fa4;
  }
  else {
    uVar12 = (ulong)local_88[1];
    if (local_88[1] == *local_88) {
      uVar12 = 0;
      local_88 = *(uint **)(local_88 + 2);
      goto LAB_014e5e78;
    }
    if (uVar12 == 0) goto LAB_014e5e78;
  }
  uVar8 = 0;
  do {
    lVar13 = *(long *)(puVar11 + uVar8 * 6 + 10);
    if (0 < (long)pvVar4 - (long)__s) {
      memset(__s,0,(long)pvVar4 - (long)__s);
    }
    puVar9 = *(uint **)(lVar13 + 0x10);
    puVar6 = *(uint **)(lVar13 + 0x18);
    if (puVar6 == (uint *)0x0) {
      uVar5 = 0;
      puVar6 = puVar9;
LAB_014e5ed4:
      if (puVar6 != puVar9) goto LAB_014e5eec;
    }
    else {
      uVar5 = (ulong)puVar6[1];
      if (puVar6[1] == *puVar6) {
        puVar6 = *(uint **)(puVar6 + 2);
        uVar5 = 0;
      }
      if (uVar5 == 0) goto LAB_014e5ed4;
LAB_014e5eec:
      uVar7 = 0;
LAB_014e5ef0:
      do {
        lVar3 = uVar7 + 6;
        uVar7 = uVar7 + 1;
        lVar13 = (long)((ulong)(~puVar9[lVar3] + param_2) << 0x20) >> 0x23;
        *(byte *)((long)__s + lVar13) =
             *(byte *)((long)__s + lVar13) | (byte)(1 << (ulong)(~puVar9[lVar3] + param_2 & 7));
        if (uVar7 < *puVar9) {
          if (uVar5 != uVar7) goto LAB_014e5ef0;
        }
        else {
          puVar9 = *(uint **)(puVar9 + 2);
          uVar7 = 0;
          if (uVar5 != 0) goto LAB_014e5ef0;
        }
      } while (puVar6 != puVar9);
    }
    if (7 < iVar1) {
      lVar13 = 0;
      do {
        Assembler::dc8(param_1,*(uchar *)((long)__s + lVar13));
        lVar13 = lVar13 + 1;
      } while (lVar13 < (long)uVar10);
    }
    uVar8 = uVar8 + 1;
    if (*puVar11 <= uVar8) {
      puVar11 = *(uint **)(puVar11 + 2);
      uVar8 = 0;
    }
  } while ((uVar12 != uVar8) || (local_88 != puVar11));
LAB_014e5fa4:
  this[0x24] = (SafepointTableBuilder)0x1;
  return;
}

