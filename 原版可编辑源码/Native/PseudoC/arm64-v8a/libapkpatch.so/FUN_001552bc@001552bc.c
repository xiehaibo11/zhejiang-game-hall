
void FUN_001552bc(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  void *pvVar3;
  ulong uVar4;
  long lVar5;
  
  (**(code **)(**(long **)(param_1 + 0x18) + 0x20))();
  puVar1 = *(undefined8 **)(param_1 + 0x18);
  if ((*(char *)((long)puVar1 + 9) != '\0') &&
     ((*(char *)((long)puVar1 + 9) != '\x02' ||
      (uVar2 = (**(code **)*puVar1)(puVar1,param_2), (uVar2 & 1) == 0)))) {
    lVar5 = param_2[1];
    uVar2 = lVar5 + 1;
    if (uVar2 < (ulong)param_2[2]) {
      pvVar3 = (void *)*param_2;
    }
    else {
      uVar4 = param_2[2] << 1;
      if (uVar2 <= uVar4) {
        uVar2 = uVar4;
      }
      param_2[2] = uVar2;
      pvVar3 = realloc((void *)*param_2,uVar2);
      *param_2 = pvVar3;
      if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
      lVar5 = param_2[1];
    }
    *(undefined1 *)((long)pvVar3 + lVar5) = 0x20;
    param_2[1] = param_2[1] + 1;
  }
  return;
}

