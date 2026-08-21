
int FUN_00e3b4e8(long param_1,uint param_2,uint param_3)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  uint *puVar6;
  uint *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  int local_44;
  
  uVar8 = *(undefined8 *)(param_1 + 0xb8);
  local_44 = 0;
  puVar7 = *(uint **)(param_1 + 0x350);
  if (puVar7 == (uint *)0x0) {
    puVar7 = (uint *)FUN_00e1388c(uVar8,0x300,&local_44);
    if (local_44 != 0) {
      return local_44;
    }
    puVar7[0xbe] = 0;
    *(uint **)(param_1 + 0x350) = puVar7;
    if (param_2 != 0) goto LAB_00e3b520;
LAB_00e3b55c:
    uVar4 = puVar7[1];
joined_r0x00e3b6a0:
    if (param_3 == 0) {
      uVar1 = *puVar7;
      param_3 = uVar4;
    }
    else {
      if ((uVar4 != 0) && (uVar4 != param_3)) goto LAB_00e3b570;
      puVar7[1] = param_3;
      uVar1 = *puVar7;
    }
    if (((uVar1 != 0) && (param_3 != 0)) && (*(long *)(puVar7 + 10) == 0)) {
      lVar3 = FUN_00e13bcc(uVar8,8,0,param_3 * uVar1,0,&local_44);
      *(long *)(puVar7 + 10) = lVar3;
      if (((local_44 == 0) && (1 < uVar1)) &&
         (*(ulong *)(puVar7 + 0xc) = lVar3 + (ulong)param_3 * 8, uVar1 != 2)) {
        lVar3 = (ulong)uVar1 - 2;
        uVar4 = param_3 << 1;
        puVar6 = puVar7 + 0xe;
        do {
          lVar3 = lVar3 + -1;
          *(ulong *)puVar6 = *(long *)(puVar7 + 10) + (ulong)uVar4 * 8;
          uVar4 = uVar4 + param_3;
          puVar6 = puVar6 + 2;
        } while (lVar3 != 0);
      }
    }
  }
  else {
    if (param_2 == 0) goto LAB_00e3b55c;
LAB_00e3b520:
    if (*puVar7 == 0) {
      uVar9 = (ulong)param_2;
      uVar2 = FUN_00e13bcc(uVar8,0x38,0,uVar9,0,&local_44);
      *(undefined8 *)(puVar7 + 0x48) = uVar2;
      if (local_44 != 0) {
        return local_44;
      }
      uVar2 = FUN_00e13bcc(uVar8,0xe0,0,uVar9,0,&local_44);
      *(undefined8 *)(puVar7 + 0x6a) = uVar2;
      if (local_44 != 0) {
        return local_44;
      }
      uVar2 = FUN_00e13bcc(uVar8,0x20,0,uVar9,0,&local_44);
      *(undefined8 *)(puVar7 + 0x8e) = uVar2;
      if (local_44 != 0) {
        return local_44;
      }
      lVar3 = FUN_00e13bcc(uVar8,8,0,param_2 << 1,0,&local_44);
      *(long *)(puVar7 + 0x42) = lVar3;
      if (local_44 != 0) {
        return local_44;
      }
      *(ulong *)(puVar7 + 0x44) = lVar3 + uVar9 * 8;
      *(long *)(puVar7 + 0x46) = param_1 + 0xf8;
      *(long *)(puVar7 + 0x68) = param_1 + 0x138;
      *(long *)(puVar7 + 0x8c) = param_1 + 0x2d8;
      if (1 < param_2) {
        lVar3 = *(long *)(puVar7 + 0x48);
        uVar9 = 2;
        do {
          lVar3 = lVar3 + 0x38;
          uVar5 = (ulong)((int)uVar9 - 1);
          *(long *)(puVar7 + uVar9 * 2 + 0x46) = lVar3;
          uVar4 = (int)uVar9 + 1;
          *(long *)(puVar7 + uVar9 * 2 + 0x68) = *(long *)(puVar7 + uVar5 * 2 + 0x68) + 0xe0;
          *(long *)(puVar7 + uVar9 * 2 + 0x8c) = *(long *)(puVar7 + uVar5 * 2 + 0x8c) + 0x20;
          uVar9 = (ulong)uVar4;
        } while (uVar4 <= param_2);
      }
      *puVar7 = param_2;
      uVar4 = puVar7[1];
      local_44 = 0;
      goto joined_r0x00e3b6a0;
    }
    if (*puVar7 == param_2) goto LAB_00e3b55c;
LAB_00e3b570:
    local_44 = 3;
  }
  return local_44;
}

