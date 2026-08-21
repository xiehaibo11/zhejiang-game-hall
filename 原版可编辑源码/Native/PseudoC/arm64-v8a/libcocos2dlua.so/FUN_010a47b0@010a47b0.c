
int FUN_010a47b0(long param_1,long param_2,undefined8 param_3,ulong param_4,uint param_5)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined *puVar9;
  long local_98;
  long lStack_90;
  long lStack_88;
  long local_80;
  long local_78;
  uint uStack_70;
  undefined4 uStack_6c;
  int local_64;
  
  lVar5 = *(long *)(param_2 + 8);
  param_4 = param_4 & 0xffffffff;
  lVar2 = *(long *)(lVar5 + 0xa0);
  if (lVar2 == 0) {
    iVar1 = 0x24;
  }
  else {
    lStack_88 = *(long *)(lVar2 + 0x28);
    lStack_90 = *(long *)(lVar2 + 0x20);
    uStack_70 = param_5 >> 0x10 & 0xf;
    local_80 = 0;
    local_78 = 0;
    uStack_6c = 0;
    *(long *)(param_1 + 0x20) = lVar5;
    *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(lVar5 + 0xd8);
    local_98 = lVar5;
    FT_GlyphLoader_Rewind(*(undefined8 *)(param_1 + 0x30));
    plVar8 = *(long **)(param_1 + 0x28);
    if (plVar8 == (long *)0x0) {
      iVar1 = FUN_010a8a28(lVar5,(undefined8 *)(param_1 + 0x28),param_1);
      if (iVar1 != 0) {
        return iVar1;
      }
      plVar8 = *(long **)(param_1 + 0x28);
      *(long **)(lVar5 + 0xd8) = plVar8;
      *(code **)(lVar5 + 0xe0) = FUN_010a8dec;
    }
    local_64 = 0;
    if (param_4 < (ulong)plVar8[1]) {
      uVar3 = (ulong)*(byte *)(plVar8[2] + param_4) & 0x7f;
      puVar9 = (&af_style_classes)[uVar3];
      plVar6 = (long *)plVar8[uVar3 + 4];
      if (plVar6 == (long *)0x0) {
        lVar2 = *(long *)(af_writing_system_classes + (ulong)*(uint *)(puVar9 + 4) * 8);
        uVar7 = *(undefined8 *)(*plVar8 + 0xb8);
        plVar6 = (long *)ft_mem_alloc(uVar7,*(undefined8 *)(lVar2 + 8),&local_64);
        if (local_64 != 0) {
          return local_64;
        }
        *plVar6 = (long)puVar9;
        plVar6[8] = (long)plVar8;
        if ((*(code **)(lVar2 + 0x10) == (code *)0x0) ||
           (local_64 = (**(code **)(lVar2 + 0x10))(plVar6,*plVar8), local_64 == 0)) {
          plVar8[uVar3 + 4] = (long)plVar6;
        }
        else {
          if (*(code **)(lVar2 + 0x20) != (code *)0x0) {
            (**(code **)(lVar2 + 0x20))(plVar6);
          }
          ft_mem_free(uVar7,plVar6);
          if (local_64 != 0) {
            return local_64;
          }
          plVar6 = (long *)0x0;
        }
      }
      lVar2 = *(long *)(af_writing_system_classes + (ulong)*(uint *)(*plVar6 + 4) * 8);
      *(long **)(param_1 + 0xf0) = plVar6;
      if (*(code **)(lVar2 + 0x18) == (code *)0x0) {
        plVar6[6] = CONCAT44(uStack_6c,uStack_70);
        plVar6[5] = local_78;
        plVar6[4] = local_80;
        plVar6[3] = lStack_88;
        plVar6[2] = lStack_90;
        plVar6[1] = local_98;
        pcVar4 = *(code **)(lVar2 + 0x28);
      }
      else {
        (**(code **)(lVar2 + 0x18))(plVar6,&local_98);
        pcVar4 = *(code **)(lVar2 + 0x28);
      }
      if ((pcVar4 == (code *)0x0) || (iVar1 = (*pcVar4)(param_1 + 0x38,plVar6), iVar1 == 0)) {
        iVar1 = FUN_010a8328(param_1 + 0x20,&local_98,param_4,param_5 & 0xfffff7fa | 0x801,0);
      }
    }
    else {
      iVar1 = 6;
    }
  }
  return iVar1;
}

