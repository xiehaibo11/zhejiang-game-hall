
void * FUN_00c22d28(long *param_1,uint *param_2,uint param_3,void *param_4,long param_5,uint param_6
                   )

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  void *pvVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  uint *puVar12;
  uint uVar13;
  undefined1 auVar14 [16];
  uint local_4;
  
  if (param_6 == 0) {
LAB_00c22df0:
    pvVar7 = memset(param_4,0,(ulong)param_3);
    return pvVar7;
  }
  if ((param_6 == 1) && (iVar5 = FUN_00c22c7c(param_1,param_2,param_5), iVar5 == 0)) {
    pvVar7 = (void *)FUN_00c22594(param_1,param_2,param_4,param_5,0);
    return pvVar7;
  }
  uVar9 = *param_2;
  if (uVar9 >> 0x1c == 3) {
    lVar8 = *param_1;
    do {
      lVar1 = (ulong)(ushort)uVar9 * 0x18;
      lVar10 = lVar8 + lVar1;
      uVar9 = *(uint *)(lVar8 + lVar1);
    } while (uVar9 >> 0x1c == 8);
    uVar2 = *(uint *)(lVar10 + 4);
    uVar9 = param_6 * uVar2;
    if (uVar9 <= param_3) {
      uVar11 = 0;
      lVar8 = param_5;
      do {
        lVar1 = lVar8 + 8;
        pvVar7 = (void *)FUN_00c22594(param_1,lVar10,(long)param_4 + uVar11,lVar8,0);
        uVar11 = (ulong)((int)uVar11 + uVar2);
        lVar8 = lVar1;
      } while (lVar1 != param_5 + ((ulong)(param_6 - 1) + 1) * 8);
      if (uVar2 == uVar9) {
        if (param_3 <= uVar2) {
          return pvVar7;
        }
        do {
          uVar11 = (ulong)uVar9;
          uVar9 = uVar9 + uVar2;
          pvVar7 = memcpy((void *)((long)param_4 + uVar11),param_4,(ulong)uVar2);
        } while (uVar9 < param_3);
        return pvVar7;
      }
      param_3 = param_3 - uVar9;
      param_4 = (void *)((long)param_4 + (ulong)uVar9);
      goto LAB_00c22df0;
    }
  }
  else {
    if (uVar9 >> 0x1c == 1) {
      local_4 = 0;
      memset(param_4,0,(ulong)param_3);
      FUN_00c22b10(param_1,param_2,(short)param_2[2],param_4,param_5,param_6,&local_4);
      if (param_6 <= local_4) {
        return (void *)(ulong)local_4;
      }
    }
    lVar8 = *param_1;
  }
  auVar14 = FUN_007b604c(lVar8,param_1 + 2,param_2);
  puVar12 = auVar14._8_8_;
  uVar13 = 0;
  uVar3 = puVar12[1];
  uVar2 = *puVar12 & 0x800000;
  uVar9 = 0;
LAB_00c22f50:
  uVar4 = (ushort)puVar12[2];
  do {
    if (uVar4 == 0) {
      if (((uVar13 - 4 & 0xfffffffb) == 0) && (uVar9 < 5)) {
        return (void *)(ulong)(uVar13 + uVar9 * 0x100);
      }
LAB_00c230ac:
      return (void *)(ulong)(uVar3 < 0x11);
    }
    lVar8 = *auVar14._0_8_;
    puVar12 = (uint *)(lVar8 + (ulong)uVar4 * 0x18);
    uVar6 = *(uint *)(lVar8 + (ulong)uVar4 * 0x18);
    uVar11 = (ulong)uVar6;
    if (uVar6 >> 0x1c == 9) {
      do {
        lVar1 = (uVar11 & 0xffff) * 0x18;
        lVar10 = lVar8 + lVar1;
        uVar6 = *(uint *)(lVar8 + lVar1);
        uVar11 = (ulong)uVar6;
      } while (uVar6 >> 0x1c == 8);
      if ((uVar6 & 0xf4000000) == 0x4000000) {
        uVar13 = uVar13 | *(uint *)(lVar10 + 4);
        if (uVar2 == 0) {
          uVar9 = uVar9 + 1;
        }
        else if (uVar9 == 0) {
          uVar9 = 1;
        }
        goto LAB_00c22f50;
      }
      if ((uVar6 & 0xf4000000) == 0x34000000) {
        uVar13 = uVar13 | *(uint *)(lVar10 + 4) >> 1;
        if (uVar2 == 0) {
          uVar9 = uVar9 + 2;
        }
        else if (uVar9 < 2) {
          uVar9 = 2;
        }
        goto LAB_00c22f50;
      }
      if (uVar6 >> 0x1c != 1) goto LAB_00c230ac;
    }
    else {
      if (uVar6 >> 0x1c == 10) goto LAB_00c230ac;
      if ((uVar6 & 0xf0ff0000) != 0x80030000) goto LAB_00c22f50;
      do {
        lVar1 = (uVar11 & 0xffff) * 0x18;
        lVar10 = lVar8 + lVar1;
        uVar6 = *(uint *)(lVar8 + lVar1);
        if (uVar6 >> 0x1c != 8) break;
        lVar1 = (ulong)(ushort)uVar6 * 0x18;
        lVar10 = lVar8 + lVar1;
        uVar6 = *(uint *)(lVar8 + lVar1);
        uVar11 = (ulong)uVar6;
      } while (uVar6 >> 0x1c == 8);
    }
    if (*(int *)(lVar10 + 4) == 0) goto LAB_00c22f50;
    uVar6 = FUN_00c22f00(auVar14._0_8_);
    if (uVar6 < 2) goto LAB_00c230ac;
    uVar13 = uVar13 | uVar6 & 0xff;
    if (uVar2 != 0) break;
    uVar4 = (ushort)puVar12[2];
    uVar9 = uVar9 + (uVar6 >> 8);
  } while( true );
  if (uVar9 < uVar6 >> 8) {
    uVar9 = uVar6 >> 8;
  }
  goto LAB_00c22f50;
}

