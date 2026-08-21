
undefined8 uv_loop_fork(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  
  uVar2 = FUN_011abea0();
  if ((((int)uVar2 == 0) && (uVar2 = FUN_011a234c(param_1), (int)uVar2 == 0)) &&
     (uVar2 = FUN_011a6d4c(param_1), (int)uVar2 == 0)) {
    uVar1 = *(uint *)(param_1 + 0x70);
    if (uVar1 != 0) {
      uVar3 = 0;
      do {
        while (((lVar4 = *(long *)(*(long *)(param_1 + 0x68) + uVar3 * 8), lVar4 != 0 &&
                (*(int *)(lVar4 + 0x28) != 0)) &&
               (plVar5 = (long *)(lVar4 + 0x18), plVar5 == (long *)*plVar5))) {
          *(undefined4 *)(lVar4 + 0x2c) = 0;
          *(long *)(lVar4 + 0x18) = param_1 + 0x58;
          plVar6 = *(long **)(param_1 + 0x60);
          *(long **)(lVar4 + 0x20) = plVar6;
          *plVar6 = (long)plVar5;
          *(long **)(param_1 + 0x60) = plVar5;
          uVar3 = uVar3 + 1;
          if (uVar1 <= uVar3) {
            return 0;
          }
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar1);
    }
    return 0;
  }
  return uVar2;
}

