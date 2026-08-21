
ulong FUN_00e3ed2c(long param_1,char *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  char *__s2;
  long lVar7;
  
  lVar7 = *(long *)(param_1 + 0x490);
  if (*(char *)(lVar7 + 0x28) == '\x02') {
    uVar4 = FT_Get_Module(*(undefined8 *)(*(long *)(param_1 + 0xb0) + 8),&DAT_01975980);
    lVar7 = FUN_00e19608(uVar4,"glyph-dict",0);
    if ((lVar7 != 0) && (*(code **)(lVar7 + 8) != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00e3ed98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar5 = (**(code **)(lVar7 + 8))(param_1,param_2);
      return uVar5;
    }
  }
  else {
    lVar6 = FUN_00e19608(*(undefined8 *)(param_1 + 0xb0),"postscript-cmaps",1);
    if ((lVar6 != 0) && (*(int *)(lVar7 + 0x24) != 0)) {
      uVar5 = 0;
      do {
        uVar2 = (uint)*(ushort *)(*(long *)(lVar7 + 0x520) + uVar5 * 2);
        uVar1 = uVar2 - 0x187;
        if (uVar2 < 0x187) {
          __s2 = (char *)(**(code **)(lVar6 + 0x28))();
joined_r0x00e3ee08:
          if ((__s2 != (char *)0x0) && (iVar3 = strcmp(param_2,__s2), iVar3 == 0))
          goto LAB_00e3ee20;
        }
        else if (uVar1 < *(uint *)(lVar7 + 0x648)) {
          __s2 = *(char **)(*(long *)(lVar7 + 0x650) + (ulong)uVar1 * 8);
          goto joined_r0x00e3ee08;
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < *(uint *)(lVar7 + 0x24));
    }
  }
  uVar5 = 0;
LAB_00e3ee20:
  return uVar5 & 0xffffffff;
}

