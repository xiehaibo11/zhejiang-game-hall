
void FUN_00c2944c(long param_1,long param_2,char *param_3,undefined8 *param_4)

{
  void *__src;
  char cVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  byte bVar5;
  byte bVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 uVar13;
  ulong *puVar14;
  char cVar15;
  long lVar16;
  byte *pbVar17;
  ulong local_e8;
  ulong local_e0;
  int local_d8;
  undefined8 local_b0;
  long local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  byte *local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  undefined8 uStack_8;
  
  local_e0 = *(ulong *)(param_1 + 0x48);
  cVar15 = *param_3;
  lVar16 = *(long *)(param_1 + 0x10) + (ulong)(byte)param_3[1] * 4 + 0xa38;
  cVar1 = param_3[2];
  if (param_2 == 0) {
    lua_createtable(param_1,0,cVar1);
  }
  else {
    luaL_findtable(param_1,0xffffd8f0,"_LOADED",0x10);
    lua_getfield(param_1,0xffffffff,param_2);
    lVar7 = *(long *)(param_1 + 0x28);
    if ((int)((long)*(undefined8 *)(lVar7 + -8) >> 0x2f) != -0xc) {
      *(long *)(param_1 + 0x28) = lVar7 + -8;
      lVar7 = luaL_findtable(param_1,0xffffd8ee,param_2,cVar1);
      if (lVar7 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00bfb308(param_1,0x7a1,param_2);
      }
      **(ulong **)(param_1 + 0x28) =
           (*(ulong **)(param_1 + 0x28))[-1] & 0x7fffffffffff | 0xfffa000000000000;
      *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 8;
      lua_setfield(param_1,0xfffffffd,param_2);
      lVar7 = *(long *)(param_1 + 0x28);
    }
    *(long *)(param_1 + 0x28) = lVar7 + -8;
    *(ulong *)(lVar7 + -0x10) = *(ulong *)(lVar7 + -8) & 0x7fffffffffff | 0xfffa000000000000;
  }
  lVar7 = *(long *)(param_1 + 0x28) - *(long *)(param_1 + 0x20);
  uVar8 = *(ulong *)(*(long *)(param_1 + 0x28) + -8) & 0x7fffffffffff;
  if ((*(byte *)(uVar8 + 8) >> 2 & 1) != 0) {
    lVar12 = *(long *)(param_1 + 0x10);
    *(byte *)(uVar8 + 8) = *(byte *)(uVar8 + 8) & 0xfb;
    *(undefined8 *)(uVar8 + 0x18) = *(undefined8 *)(lVar12 + 0x50);
    *(ulong *)(lVar12 + 0x50) = uVar8;
  }
  local_e8 = 0;
  *(undefined1 *)(uVar8 + 10) = 0;
  pbVar17 = (byte *)(param_3 + 3);
LAB_00c29590:
  do {
    bVar2 = *pbVar17;
    while( true ) {
      bVar5 = bVar2 & 0xc0;
      bVar6 = bVar2 & 0x3f;
      pbVar4 = pbVar17 + 1;
      if (bVar5 == 0xc0) break;
      local_d8 = (int)(lVar7 >> 3);
      uVar3 = (int)(*(long *)(param_1 + 0x28) - *(long *)(param_1 + 0x20) >> 3) - local_d8;
      uVar9 = FUN_00bfbe68(param_1,(ulong)uVar3,local_e0);
      if (uVar3 != 0) {
        __src = (void *)(*(long *)(param_1 + 0x20) + lVar7);
        *(void **)(param_1 + 0x28) = __src;
        memcpy((void *)(uVar9 + 0x30),__src,(ulong)uVar3 << 3);
      }
      *(char *)(uVar9 + 10) = cVar15;
      cVar15 = cVar15 + '\x01';
      pbVar17 = pbVar4 + bVar6;
      if (bVar5 == 0) {
        *(long *)(uVar9 + 0x20) = *(long *)(param_1 + 0x10) + 0x150;
LAB_00c295f8:
        uVar10 = *param_4;
        param_4 = param_4 + 1;
        *(undefined8 *)(uVar9 + 0x28) = uVar10;
      }
      else {
        *(long *)(uVar9 + 0x20) = lVar16;
        lVar16 = lVar16 + 4;
        if (bVar5 != 0x80) goto LAB_00c295f8;
        *(undefined8 *)(uVar9 + 0x28) = *(undefined8 *)(local_e8 + 0x28);
      }
      local_e8 = uVar9;
      if (bVar6 != 0) {
        uVar10 = FUN_00bfba1c(param_1,pbVar4);
        puVar14 = (ulong *)FUN_00c1c6dc(param_1,uVar8,uVar10);
        *puVar14 = uVar9 | 0xfffb800000000000;
        goto LAB_00c29590;
      }
      bVar2 = *pbVar17;
    }
    switch(bVar2) {
    case 0xf9:
      bVar2 = pbVar17[1];
      uVar10 = FUN_00bfba1c(param_1,pbVar17 + 2,(ulong)bVar2);
      local_90 = pbVar17 + 2 + bVar2;
      uStack_78 = 0;
      local_b0 = 0;
      local_40 = 0;
      local_10 = 0;
      local_88 = 0xffffffffffffffff;
      local_80 = 0xffffffff;
      local_a0 = 0;
      uStack_98 = 0;
      local_70 = 0;
      uStack_68 = 0;
      local_60 = 0;
      uStack_58 = 0;
      local_50 = 0;
      uStack_48 = 0;
      local_30 = 0;
      uStack_28 = 0;
      local_20 = 0;
      uStack_18 = 0;
      uStack_8 = 0x200000000;
      local_a8 = param_1;
      local_38 = uVar10;
      lVar12 = FUN_00c1fafc(&local_b0);
      uVar13 = *(undefined8 *)(param_1 + 0x48);
      *(undefined4 *)(lVar12 + 0x48) = 0xffffffff;
      uVar9 = FUN_00bfbec8(param_1,lVar12,uVar13);
      puVar14 = (ulong *)FUN_00c1c6dc(param_1,uVar8,uVar10);
      *puVar14 = uVar9 | 0xfffb800000000000;
      pbVar17 = local_90;
      break;
    case 0xfa:
      lVar12 = *(long *)(param_1 + 0x28);
      *(long *)(param_1 + 0x28) = lVar12 + -0x10;
      if (((int)((long)*(ulong *)(lVar12 + -8) >> 0x2f) == -5) &&
         (*(int *)((*(ulong *)(lVar12 + -8) & 0x7fffffffffff) + 0x10) == 0)) {
        local_e0 = *(ulong *)(lVar12 + -0x10) & 0x7fffffffffff;
        pbVar17 = pbVar4;
      }
      else {
        puVar11 = (undefined8 *)FUN_00c1bdd4(param_1,uVar8,lVar12 + -8);
        *puVar11 = **(undefined8 **)(param_1 + 0x28);
        pbVar17 = pbVar4;
      }
      break;
    case 0xfb:
      **(undefined8 **)(param_1 + 0x28) = *(undefined8 *)pbVar4;
      *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 8;
      pbVar17 = pbVar17 + 9;
      break;
    case 0xfc:
      puVar11 = *(undefined8 **)(param_1 + 0x28);
      *puVar11 = puVar11[-(ulong)pbVar17[1]];
      *(undefined8 **)(param_1 + 0x28) = puVar11 + 1;
      pbVar17 = pbVar17 + 2;
      break;
    case 0xfd:
      puVar14 = *(ulong **)(param_1 + 0x28);
      *(ulong **)(param_1 + 0x28) = puVar14 + 1;
      *puVar14 = local_e8 | 0xfffb800000000000;
      pbVar17 = pbVar4;
      break;
    case 0xfe:
      cVar15 = cVar15 + '\x01';
      pbVar17 = pbVar4;
      break;
    case 0xff:
      return;
    default:
      puVar14 = *(ulong **)(param_1 + 0x28);
      *(ulong **)(param_1 + 0x28) = puVar14 + 1;
      uVar9 = FUN_00bfba1c(param_1,pbVar4);
      *puVar14 = uVar9 | 0xfffd800000000000;
      pbVar17 = pbVar4 + bVar6;
    }
  } while( true );
}

