
void FUN_00c06ac0(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  byte *pbVar7;
  long lVar8;
  undefined2 uVar9;
  uint uVar10;
  long lVar11;
  uint uVar12;
  long lVar13;
  
  puVar1 = (undefined8 *)(param_1 + 0x40);
  uVar12 = *(uint *)(param_1 + 0x30);
  puVar4 = *(undefined1 **)(param_1 + 0x40);
  if (uVar12 == 0x30) {
    puVar5 = puVar4;
    if ((int)*(undefined8 *)(param_1 + 0x48) == (int)puVar4) {
      puVar5 = (undefined1 *)FUN_00c1a4a8(puVar1,1);
    }
    puVar4 = puVar5 + 1;
    *puVar5 = 0x30;
    pbVar7 = *(byte **)(param_1 + 0x20);
    *(undefined1 **)(param_1 + 0x40) = puVar4;
    if (pbVar7 < *(byte **)(param_1 + 0x28)) {
      *(byte **)(param_1 + 0x20) = pbVar7 + 1;
      uVar10 = (uint)*pbVar7;
    }
    else {
      uVar10 = FUN_00c062d0(param_1);
      puVar4 = *(undefined1 **)(param_1 + 0x40);
    }
    *(uint *)(param_1 + 0x30) = uVar10;
    uVar6 = 0x65;
    if ((uVar10 | 0x20) == 0x78) {
      uVar6 = 0x70;
    }
  }
  else {
    uVar6 = 0x65;
    uVar10 = uVar12;
  }
  while ((((char)(&DAT_01410f61)[(int)uVar10] < '\0' || (uVar10 == 0x2e)) ||
         (((uVar10 - 0x2b & 0xfffffffd) == 0 && ((uVar12 | 0x20) == uVar6))))) {
    puVar5 = puVar4;
    if ((int)*(undefined8 *)(param_1 + 0x48) == (int)puVar4) {
      puVar5 = (undefined1 *)FUN_00c1a4a8(puVar1,1);
    }
    puVar4 = puVar5 + 1;
    *puVar5 = (char)uVar10;
    pbVar7 = *(byte **)(param_1 + 0x20);
    *puVar1 = puVar4;
    if (pbVar7 < *(byte **)(param_1 + 0x28)) {
      *(byte **)(param_1 + 0x20) = pbVar7 + 1;
      uVar2 = (uint)*pbVar7;
    }
    else {
      uVar2 = FUN_00c062d0(param_1);
      puVar4 = (undefined1 *)*puVar1;
    }
    *(uint *)(param_1 + 0x30) = uVar2;
    uVar12 = uVar10;
    uVar10 = uVar2;
  }
  if ((int)*(undefined8 *)(param_1 + 0x48) == (int)puVar4) {
    puVar4 = (undefined1 *)FUN_00c1a4a8(puVar1,1);
  }
  *puVar4 = 0;
  *(undefined1 **)(param_1 + 0x40) = puVar4 + 1;
  iVar3 = FUN_00c1ed60(*(undefined8 *)(param_1 + 0x50),param_2,0xd);
  if (iVar3 == 3) {
    *(undefined4 *)((long)param_2 + 4) = 0xfff90000;
  }
  else if (iVar3 != 1) {
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00c064c4(param_1,0x11e,0x884);
    }
    lVar11 = *(long *)(param_1 + 8);
    if (*(long *)(*(long *)(lVar11 + 0x10) + 0x168) == 0) {
      lVar8 = *(long *)(lVar11 + 0x28);
      lVar13 = *(long *)(lVar11 + 0x38);
      luaopen_ffi(lVar11);
      *(long *)(lVar11 + 0x28) = (lVar8 - lVar13) + *(long *)(lVar11 + 0x38);
    }
    if (iVar3 == 2) {
      lVar11 = FUN_00c1a314(lVar11,0x20);
      *(undefined1 *)(lVar11 + 9) = 10;
      *(undefined2 *)(lVar11 + 10) = 0x10;
      *(undefined8 *)(lVar11 + 0x10) = 0;
      *(undefined8 *)(lVar11 + 0x18) = *param_2;
    }
    else {
      uVar9 = 0xb;
      if (iVar3 != 5) {
        uVar9 = 0xc;
      }
      lVar11 = FUN_00c1a314(lVar11,0x18);
      *(undefined2 *)(lVar11 + 10) = uVar9;
      *(undefined1 *)(lVar11 + 9) = 10;
      *(undefined8 *)(lVar11 + 0x10) = *param_2;
    }
    FUN_00c0dcfc(param_1,param_2);
    return;
  }
  return;
}

