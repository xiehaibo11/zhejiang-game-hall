
void _INIT_75(void)

{
  ulong *puVar1;
  long lVar2;
  undefined *puVar3;
  size_t sVar4;
  ulong *puVar5;
  void *pvVar6;
  void *pvVar7;
  ulong uVar8;
  ulong local_c8;
  size_t sStack_c0;
  void *local_b8;
  undefined8 local_b0;
  size_t sStack_a8;
  void *local_a0;
  undefined8 local_98;
  size_t sStack_90;
  void *local_88;
  undefined8 local_80;
  size_t sStack_78;
  void *local_70;
  long local_68;
  
  puVar3 = dragonBones::DataParser::DATA_VERSION_4_0;
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  local_c8 = 0;
  sStack_c0 = 0;
  local_b8 = (void *)0x0;
  dragonBones::DataParser::DATA_VERSION = dragonBones::DataParser::DATA_VERSION_5_5;
  sVar4 = strlen(dragonBones::DataParser::DATA_VERSION_4_0);
  if (0xffffffffffffffef < sVar4) goto LAB_007b9ccc;
  if (sVar4 < 0x17) {
    pvVar7 = (void *)((ulong)&local_c8 | 1);
    local_c8 = CONCAT71(local_c8._1_7_,(char)((int)sVar4 << 1));
    if (sVar4 != 0) goto LAB_007b985c;
  }
  else {
    uVar8 = sVar4 + 0x10 & 0xfffffffffffffff0;
    pvVar7 = operator_new(uVar8);
    local_c8 = uVar8 | 1;
    sStack_c0 = sVar4;
    local_b8 = pvVar7;
LAB_007b985c:
    memcpy(pvVar7,puVar3,sVar4);
  }
  *(undefined1 *)((long)pvVar7 + sVar4) = 0;
  puVar3 = dragonBones::DataParser::DATA_VERSION_4_5;
  local_b0 = 0;
  sStack_a8 = 0;
  local_a0 = (void *)0x0;
  sVar4 = strlen(dragonBones::DataParser::DATA_VERSION_4_5);
  if (0xffffffffffffffef < sVar4) goto LAB_007b9ccc;
  if (sVar4 < 0x17) {
    pvVar7 = (void *)((long)&local_b0 + 1);
    local_b0 = CONCAT71(local_b0._1_7_,(char)((int)sVar4 << 1));
    if (sVar4 != 0) goto LAB_007b98dc;
  }
  else {
    uVar8 = sVar4 + 0x10 & 0xfffffffffffffff0;
    pvVar7 = operator_new(uVar8);
    local_b0 = uVar8 | 1;
    sStack_a8 = sVar4;
    local_a0 = pvVar7;
LAB_007b98dc:
    memcpy(pvVar7,puVar3,sVar4);
  }
  puVar3 = dragonBones::DataParser::DATA_VERSION_5_0;
  *(undefined1 *)((long)pvVar7 + sVar4) = 0;
  local_98 = 0;
  sStack_90 = 0;
  local_88 = (void *)0x0;
  sVar4 = strlen(dragonBones::DataParser::DATA_VERSION_5_0);
  if (0xffffffffffffffef < sVar4) goto LAB_007b9ccc;
  if (sVar4 < 0x17) {
    pvVar7 = (void *)((long)&local_98 + 1);
    local_98 = CONCAT71(local_98._1_7_,(char)((int)sVar4 << 1));
    if (sVar4 != 0) goto LAB_007b995c;
  }
  else {
    uVar8 = sVar4 + 0x10 & 0xfffffffffffffff0;
    pvVar7 = operator_new(uVar8);
    local_98 = uVar8 | 1;
    sStack_90 = sVar4;
    local_88 = pvVar7;
LAB_007b995c:
    memcpy(pvVar7,puVar3,sVar4);
  }
  puVar3 = dragonBones::DataParser::DATA_VERSION_5_5;
  *(undefined1 *)((long)pvVar7 + sVar4) = 0;
  local_80 = 0;
  sStack_78 = 0;
  local_70 = (void *)0x0;
  sVar4 = strlen(dragonBones::DataParser::DATA_VERSION_5_5);
  if (0xffffffffffffffef < sVar4) goto LAB_007b9ccc;
  if (sVar4 < 0x17) {
    pvVar7 = (void *)((long)&local_80 + 1);
    local_80 = CONCAT71(local_80._1_7_,(char)((int)sVar4 << 1));
    if (sVar4 != 0) goto LAB_007b99d8;
  }
  else {
    uVar8 = sVar4 + 0x10 & 0xfffffffffffffff0;
    pvVar7 = operator_new(uVar8);
    local_80 = uVar8 | 1;
    sStack_78 = sVar4;
    local_70 = pvVar7;
LAB_007b99d8:
    memcpy(pvVar7,puVar3,sVar4);
  }
  *(undefined1 *)((long)pvVar7 + sVar4) = 0;
  puVar5 = operator_new(0x60);
  pvVar7 = local_b8;
  sVar4 = sStack_c0;
  puVar1 = puVar5 + 0xc;
  dragonBones::DataParser::DATA_VERSIONS = puVar5;
  DAT_01787d08 = puVar5;
  DAT_01787d10 = puVar1;
  *puVar5 = 0;
  puVar5[1] = 0;
  puVar5[2] = 0;
  if ((local_c8 & 1) == 0) {
    puVar5[2] = (ulong)local_b8;
    puVar5[1] = sStack_c0;
    *puVar5 = local_c8;
  }
  else {
    if (0xffffffffffffffef < sStack_c0) goto LAB_007b9ccc;
    if (sStack_c0 < 0x17) {
      pvVar6 = (void *)((long)puVar5 + 1);
      *(char *)puVar5 = (char)((int)sStack_c0 << 1);
      if (sStack_c0 != 0) goto LAB_007b9a7c;
    }
    else {
      uVar8 = sStack_c0 + 0x10 & 0xfffffffffffffff0;
      pvVar6 = operator_new(uVar8);
      puVar5[1] = sVar4;
      puVar5[2] = (ulong)pvVar6;
      *puVar5 = uVar8 | 1;
LAB_007b9a7c:
      memcpy(pvVar6,pvVar7,sVar4);
    }
    *(undefined1 *)((long)pvVar6 + sVar4) = 0;
  }
  pvVar7 = local_a0;
  sVar4 = sStack_a8;
  puVar5[3] = 0;
  puVar5[4] = 0;
  puVar5[5] = 0;
  if ((local_b0 & 1) == 0) {
    puVar5[5] = (ulong)local_a0;
    puVar5[4] = sStack_a8;
    puVar5[3] = local_b0;
  }
  else {
    if (0xffffffffffffffef < sStack_a8) goto LAB_007b9ccc;
    if (sStack_a8 < 0x17) {
      pvVar6 = (void *)((long)puVar5 + 0x19);
      *(char *)(puVar5 + 3) = (char)((int)sStack_a8 << 1);
      if (sStack_a8 != 0) goto LAB_007b9b04;
    }
    else {
      uVar8 = sStack_a8 + 0x10 & 0xfffffffffffffff0;
      pvVar6 = operator_new(uVar8);
      puVar5[4] = sVar4;
      puVar5[5] = (ulong)pvVar6;
      puVar5[3] = uVar8 | 1;
LAB_007b9b04:
      memcpy(pvVar6,pvVar7,sVar4);
    }
    *(undefined1 *)((long)pvVar6 + sVar4) = 0;
  }
  pvVar7 = local_88;
  sVar4 = sStack_90;
  puVar5[6] = 0;
  puVar5[7] = 0;
  puVar5[8] = 0;
  if ((local_98 & 1) == 0) {
    puVar5[8] = (ulong)local_88;
    puVar5[7] = sStack_90;
    puVar5[6] = local_98;
  }
  else {
    if (0xffffffffffffffef < sStack_90) goto LAB_007b9ccc;
    if (sStack_90 < 0x17) {
      pvVar6 = (void *)((long)puVar5 + 0x31);
      *(char *)(puVar5 + 6) = (char)((int)sStack_90 << 1);
      if (sStack_90 != 0) goto LAB_007b9b8c;
    }
    else {
      uVar8 = sStack_90 + 0x10 & 0xfffffffffffffff0;
      pvVar6 = operator_new(uVar8);
      puVar5[7] = sVar4;
      puVar5[8] = (ulong)pvVar6;
      puVar5[6] = uVar8 | 1;
LAB_007b9b8c:
      memcpy(pvVar6,pvVar7,sVar4);
    }
    *(undefined1 *)((long)pvVar6 + sVar4) = 0;
  }
  pvVar7 = local_70;
  sVar4 = sStack_78;
  puVar5[9] = 0;
  puVar5[10] = 0;
  puVar5[0xb] = 0;
  if ((local_80 & 1) == 0) {
    DAT_01787d08 = puVar1;
    puVar5[0xb] = (ulong)local_70;
    puVar5[10] = sStack_78;
    puVar5[9] = local_80;
    goto LAB_007b9c38;
  }
  if (0xffffffffffffffef < sStack_78) {
LAB_007b9ccc:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (sStack_78 < 0x17) {
    pvVar6 = (void *)((long)puVar5 + 0x49);
    *(char *)(puVar5 + 9) = (char)((int)sStack_78 << 1);
    if (sStack_78 != 0) goto LAB_007b9c18;
  }
  else {
    uVar8 = sStack_78 + 0x10 & 0xfffffffffffffff0;
    pvVar6 = operator_new(uVar8);
    puVar5[10] = sVar4;
    puVar5[0xb] = (ulong)pvVar6;
    puVar5[9] = uVar8 | 1;
LAB_007b9c18:
    memcpy(pvVar6,pvVar7,sVar4);
  }
  *(undefined1 *)((long)pvVar6 + sVar4) = 0;
  DAT_01787d08 = puVar1;
  operator_delete(local_70);
LAB_007b9c38:
  if ((local_98 & 1) != 0) {
    operator_delete(local_88);
  }
  if ((local_b0 & 1) != 0) {
    operator_delete(local_a0);
  }
  if ((local_c8 & 1) != 0) {
    operator_delete(local_b8);
  }
  __cxa_atexit(FUN_009127f4,&dragonBones::DataParser::DATA_VERSIONS,&PTR_LOOP_016979c0);
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

