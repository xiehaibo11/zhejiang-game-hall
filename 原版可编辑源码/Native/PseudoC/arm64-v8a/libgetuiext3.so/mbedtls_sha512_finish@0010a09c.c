
void mbedtls_sha512_finish(ulong *param_1,undefined1 *param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 local_78 [4];
  undefined1 local_74;
  undefined1 local_73;
  undefined1 local_72;
  byte local_71;
  undefined1 local_70;
  undefined1 local_6f;
  undefined1 local_6e;
  undefined1 local_6d;
  undefined1 local_6c;
  undefined1 local_6b;
  undefined1 local_6a;
  undefined1 local_69;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  lVar3 = 0x70;
  uVar7 = *param_1;
  uVar11 = param_1[1];
  uVar1 = (uint)(uVar11 >> 0x20);
  local_78[0] = (undefined1)(uVar1 >> 0x15);
  local_78[1] = (undefined1)(uVar1 >> 0xd);
  local_78[2] = (undefined1)(uVar1 >> 5);
  local_78[3] = (undefined1)(uVar11 >> 0x1d);
  local_74 = (undefined1)(uVar11 >> 0x15);
  local_73 = (undefined1)(uVar11 >> 0xd);
  local_72 = (undefined1)(uVar11 >> 5);
  local_71 = (byte)(uVar7 >> 0x3d) | (byte)((int)uVar11 << 3);
  uVar1 = (uint)(uVar7 >> 0x20);
  local_70 = (undefined1)(uVar1 >> 0x15);
  local_6f = (undefined1)(uVar1 >> 0xd);
  local_6e = (undefined1)(uVar1 >> 5);
  local_6d = (undefined1)(uVar7 >> 0x1d);
  local_6c = (undefined1)(uVar7 >> 0x15);
  local_6b = (undefined1)(uVar7 >> 0xd);
  local_6a = (undefined1)(uVar7 >> 5);
  if (0x6f < (uVar7 & 0x7f)) {
    lVar3 = 0xf0;
  }
  uVar6 = lVar3 - (uVar7 & 0x7f);
  local_69 = (undefined1)(uVar7 << 3);
  if (uVar6 != 0) {
    uVar1 = (uint)uVar7 & 0x7f;
    uVar10 = (ulong)uVar1;
    *param_1 = uVar6 + uVar7;
    if (CARRY8(uVar6,uVar7)) {
      param_1[1] = uVar11 + 1;
    }
    puVar4 = &DAT_0010b2f0;
    if ((uVar7 & 0x7f) != 0) {
      uVar7 = (ulong)(0x80 - uVar1);
      if (uVar7 <= uVar6) {
        thunk_EXT_FUN_00002bb0((long)(param_1 + 10) + uVar10,&DAT_0010b2f0,uVar7);
        thunk_EXT_FUN_00002bb0(param_1,param_1 + 10);
        uVar10 = 0;
        puVar4 = &DAT_0010b2f0 + uVar7;
        uVar6 = uVar6 - uVar7;
      }
    }
    uVar7 = uVar6 - 0x80;
    if (0x7f < uVar6) {
      uVar11 = uVar7 & 0xffffffffffffff80;
      puVar8 = puVar4;
      do {
        thunk_EXT_FUN_00002bb0(param_1,puVar8);
        uVar6 = uVar6 - 0x80;
        puVar8 = puVar8 + 0x80;
      } while (0x7f < uVar6);
      puVar4 = puVar4 + uVar11 + 0x80;
      uVar6 = uVar7 - uVar11;
    }
    if (uVar6 != 0) {
      thunk_EXT_FUN_00002bb0((long)param_1 + uVar10 + 0x50,puVar4,uVar6);
    }
  }
  uVar11 = *param_1;
  uVar1 = (uint)uVar11 & 0x7f;
  uVar7 = (ulong)uVar1;
  *param_1 = uVar11 + 0x10;
  if (0xffffffffffffffef < uVar11) {
    param_1[1] = param_1[1] + 1;
  }
  puVar5 = local_78;
  uVar6 = 0x10;
  if (((uVar11 & 0x7f) != 0) && (uVar1 = 0x80 - uVar1, uVar11 = (ulong)uVar1, uVar1 < 0x11)) {
    thunk_EXT_FUN_00002bb0((long)(param_1 + 10) + uVar7,local_78,uVar11);
    thunk_EXT_FUN_00002bb0(param_1,param_1 + 10);
    uVar6 = -uVar11 + 0x10;
    uVar7 = -uVar11 - 0x70;
    puVar5 = local_78 + uVar11;
    if (0x7f < uVar6) {
      uVar11 = uVar7 & 0xffffffffffffff80;
      puVar9 = puVar5;
      do {
        thunk_EXT_FUN_00002bb0(param_1,puVar9);
        uVar6 = uVar6 - 0x80;
        puVar9 = puVar9 + 0x80;
      } while (0x7f < uVar6);
      puVar5 = puVar5 + uVar11 + 0x80;
      uVar6 = uVar7 - uVar11;
    }
    if (uVar6 == 0) goto LAB_0010a2e8;
    uVar7 = 0;
  }
  thunk_EXT_FUN_00002bb0((long)param_1 + uVar7 + 0x50,puVar5,uVar6);
LAB_0010a2e8:
  *param_2 = *(undefined1 *)((long)param_1 + 0x17);
  param_2[1] = (char)*(undefined2 *)((long)param_1 + 0x16);
  param_2[2] = (char)(param_1[2] >> 0x28);
  param_2[3] = (char)*(undefined4 *)((long)param_1 + 0x14);
  param_2[4] = (char)(param_1[2] >> 0x18);
  param_2[5] = (char)(param_1[2] >> 0x10);
  param_2[6] = (char)(param_1[2] >> 8);
  param_2[7] = (char)param_1[2];
  param_2[8] = *(undefined1 *)((long)param_1 + 0x1f);
  param_2[9] = (char)*(undefined2 *)((long)param_1 + 0x1e);
  param_2[10] = (char)(param_1[3] >> 0x28);
  param_2[0xb] = (char)*(undefined4 *)((long)param_1 + 0x1c);
  param_2[0xc] = (char)(param_1[3] >> 0x18);
  param_2[0xd] = (char)(param_1[3] >> 0x10);
  param_2[0xe] = (char)(param_1[3] >> 8);
  param_2[0xf] = (char)param_1[3];
  param_2[0x10] = *(undefined1 *)((long)param_1 + 0x27);
  param_2[0x11] = (char)*(undefined2 *)((long)param_1 + 0x26);
  param_2[0x12] = (char)(param_1[4] >> 0x28);
  param_2[0x13] = (char)*(undefined4 *)((long)param_1 + 0x24);
  param_2[0x14] = (char)(param_1[4] >> 0x18);
  param_2[0x15] = (char)(param_1[4] >> 0x10);
  param_2[0x16] = (char)(param_1[4] >> 8);
  param_2[0x17] = (char)param_1[4];
  param_2[0x18] = *(undefined1 *)((long)param_1 + 0x2f);
  param_2[0x19] = (char)*(undefined2 *)((long)param_1 + 0x2e);
  param_2[0x1a] = (char)(param_1[5] >> 0x28);
  param_2[0x1b] = (char)*(undefined4 *)((long)param_1 + 0x2c);
  param_2[0x1c] = (char)(param_1[5] >> 0x18);
  param_2[0x1d] = (char)(param_1[5] >> 0x10);
  param_2[0x1e] = (char)(param_1[5] >> 8);
  param_2[0x1f] = (char)param_1[5];
  param_2[0x20] = *(undefined1 *)((long)param_1 + 0x37);
  param_2[0x21] = (char)*(undefined2 *)((long)param_1 + 0x36);
  param_2[0x22] = (char)(param_1[6] >> 0x28);
  param_2[0x23] = (char)*(undefined4 *)((long)param_1 + 0x34);
  param_2[0x24] = (char)(param_1[6] >> 0x18);
  param_2[0x25] = (char)(param_1[6] >> 0x10);
  param_2[0x26] = (char)(param_1[6] >> 8);
  param_2[0x27] = (char)param_1[6];
  param_2[0x28] = *(undefined1 *)((long)param_1 + 0x3f);
  param_2[0x29] = (char)*(undefined2 *)((long)param_1 + 0x3e);
  param_2[0x2a] = (char)(param_1[7] >> 0x28);
  param_2[0x2b] = (char)*(undefined4 *)((long)param_1 + 0x3c);
  param_2[0x2c] = (char)(param_1[7] >> 0x18);
  param_2[0x2d] = (char)(param_1[7] >> 0x10);
  param_2[0x2e] = (char)(param_1[7] >> 8);
  param_2[0x2f] = (char)param_1[7];
  if ((int)param_1[0x1a] == 0) {
    param_2[0x30] = *(undefined1 *)((long)param_1 + 0x47);
    param_2[0x31] = (char)*(undefined2 *)((long)param_1 + 0x46);
    param_2[0x32] = (char)(param_1[8] >> 0x28);
    param_2[0x33] = (char)*(undefined4 *)((long)param_1 + 0x44);
    param_2[0x34] = (char)(param_1[8] >> 0x18);
    param_2[0x35] = (char)(param_1[8] >> 0x10);
    param_2[0x36] = (char)(param_1[8] >> 8);
    param_2[0x37] = (char)param_1[8];
    param_2[0x38] = *(undefined1 *)((long)param_1 + 0x4f);
    param_2[0x39] = (char)*(undefined2 *)((long)param_1 + 0x4e);
    param_2[0x3a] = (char)(param_1[9] >> 0x28);
    param_2[0x3b] = (char)*(undefined4 *)((long)param_1 + 0x4c);
    param_2[0x3c] = (char)(param_1[9] >> 0x18);
    param_2[0x3d] = (char)(param_1[9] >> 0x10);
    param_2[0x3e] = (char)(param_1[9] >> 8);
    param_2[0x3f] = (char)param_1[9];
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
  thunk_EXT_FUN_00002bb0();
  return;
}

