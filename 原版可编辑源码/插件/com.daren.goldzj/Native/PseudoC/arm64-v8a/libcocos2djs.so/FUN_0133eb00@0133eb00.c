
undefined8
FUN_0133eb00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
            undefined8 param_9,ulong param_10,uint *param_11,int param_12,undefined8 param_13,
            undefined8 param_14,undefined8 param_15,undefined8 param_16,undefined8 param_17)

{
  uint *puVar1;
  long lVar2;
  ulong uVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  long unaff_x26;
  
  iVar4 = (int)param_13;
  if (param_12 == 0) {
    if (**(char **)(unaff_x26 + 0x1420) == '\0') {
      param_10 = param_10 & 0xfffffffffffc0000;
      if (*(long *)(param_10 + 0x30) != 0) {
        uVar5 = (long)param_11 - param_10;
        lVar2 = *(long *)(*(long *)(param_10 + 0x30) + (uVar5 >> 0xc) * 8);
        if (lVar2 != 0) {
          puVar1 = (uint *)(lVar2 + (uVar5 >> 5 & 0x7c));
          *puVar1 = *puVar1 | (uint)(1L << (uVar5 >> 2 & 0x1f));
          goto LAB_0133f0b4;
        }
      }
      if (iVar4 == 0) {
        *(undefined8 *)(unaff_x26 + 0x40) = 0x133ec9c;
        *(undefined1 **)(unaff_x26 + 0x38) = &stack0xfffffffffffffff0;
        (**(code **)(unaff_x26 + 0x1198))(param_10,param_11);
        *(undefined8 *)(unaff_x26 + 0x38) = 0;
      }
      else {
        *(undefined8 *)(unaff_x26 + 0x40) = 0x133ebe8;
        *(undefined1 **)(unaff_x26 + 0x38) = &stack0xfffffffffffffff0;
        (**(code **)(unaff_x26 + 0x1198))(param_10,param_11);
        *(undefined8 *)(unaff_x26 + 0x38) = 0;
      }
      goto LAB_0133f0b4;
    }
    if (((*(ulong *)((unaff_x26 + (ulong)*param_11 & 0xfffffffffffc0000) + 8) & 0x18) != 0) &&
       ((*(ulong *)((param_10 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      uVar3 = param_10 & 0xfffffffffffc0000;
      uVar5 = uVar3;
      if (*(long *)(uVar3 + 0x30) != 0) {
        uVar6 = (long)param_11 - uVar3;
        uVar5 = uVar6 >> 0xc;
        lVar2 = *(long *)(*(long *)(uVar3 + 0x30) + uVar5 * 8);
        if (lVar2 != 0) {
          puVar1 = (uint *)(lVar2 + (uVar6 >> 5 & 0x7c));
          *puVar1 = *puVar1 | (uint)(1L << (uVar6 >> 2 & 0x1f));
          goto LAB_0133eed8;
        }
      }
      if (iVar4 == 0) {
        *(undefined8 *)(unaff_x26 + 0x40) = 0x133ee88;
        *(undefined1 **)(unaff_x26 + 0x38) = &stack0xfffffffffffffff0;
        (**(code **)(unaff_x26 + 0x1198))
                  (uVar3,param_11,param_11,param_13,0,param_15,param_16,param_17,param_11,uVar5,
                   param_13,0,param_15,param_16,param_17,param_1);
        *(undefined8 *)(unaff_x26 + 0x38) = 0;
      }
      else {
        *(undefined8 *)(unaff_x26 + 0x40) = 0x133edd0;
        *(undefined1 **)(unaff_x26 + 0x38) = &stack0xfffffffffffffff0;
        (**(code **)(unaff_x26 + 0x1198))
                  (uVar3,param_11,param_11,param_13,0,param_15,param_16,param_17,param_2,param_3,
                   param_4,param_5,param_6,param_7,param_8,param_9);
        *(undefined8 *)(unaff_x26 + 0x38) = 0;
      }
    }
  }
LAB_0133eed8:
  uVar5 = unaff_x26 + (ulong)*param_11;
  if (((*(uint *)(*(long *)((uVar5 & 0xfffffffffffc0000) + 0x10) + (uVar5 >> 5 & 0x1ffc)) &
       (uint)(1L << (uVar5 >> 2 & 0x1f))) == 0) ||
     ((((uint)*(undefined8 *)((uVar5 & 0xfffffffffffc0000) + 8) >> 6 & 1) != 0 &&
      ((*(ulong *)((param_10 & 0xfffffffffffc0000) + 8) & 0x58) == 0)))) {
    if (iVar4 == 0) {
      *(undefined8 *)(unaff_x26 + 0x40) = 0x133f064;
      *(undefined1 **)(unaff_x26 + 0x38) = &stack0xfffffffffffffff0;
      (**(code **)(unaff_x26 + 0x1190))(param_10,param_11);
      *(undefined8 *)(unaff_x26 + 0x38) = 0;
    }
    else {
      *(undefined8 *)(unaff_x26 + 0x40) = 0x133efac;
      *(undefined1 **)(unaff_x26 + 0x38) = &stack0xfffffffffffffff0;
      (**(code **)(unaff_x26 + 0x1190))(param_10,param_11);
      *(undefined8 *)(unaff_x26 + 0x38) = 0;
    }
  }
LAB_0133f0b4:
  return *(undefined8 *)(unaff_x26 + 0xb8);
}

