
void FUN_010a8dec(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (param_1 != (long *)0x0) {
    lVar3 = 0;
    uVar2 = *(undefined8 *)(*param_1 + 0xb8);
    do {
      lVar1 = *(long *)((long)param_1 + lVar3 + 0x20);
      if (lVar1 != 0) {
        if (*(code **)(*(long *)(af_writing_system_classes +
                                (ulong)*(uint *)(*(long *)((long)&af_style_classes + lVar3) + 4) * 8
                                ) + 0x20) != (code *)0x0) {
          (**(code **)(*(long *)(af_writing_system_classes +
                                (ulong)*(uint *)(*(long *)((long)&af_style_classes + lVar3) + 4) * 8
                                ) + 0x20))(lVar1);
          lVar1 = *(long *)((long)param_1 + lVar3 + 0x20);
        }
        ft_mem_free(uVar2,lVar1);
        *(undefined8 *)((long)param_1 + lVar3 + 0x20) = 0;
      }
      lVar3 = lVar3 + 8;
    } while (lVar3 != 0x178);
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
                    /* catch() { ... } // from try @ 010a8f08 with catch @ 010a8e88 */
    ft_mem_free(uVar2,param_1);
    return;
  }
  return;
}

