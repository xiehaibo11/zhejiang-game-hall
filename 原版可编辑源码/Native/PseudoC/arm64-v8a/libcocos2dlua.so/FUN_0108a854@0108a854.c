
undefined8 FUN_0108a854(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 *puVar4;
  long local_28;
  
                    /* try { // try from 0108a878 to 0118a8ef has its CatchHandler @ 0108a4c4 */
  puVar4 = *(undefined8 **)(*param_1 + 0x260);
  lVar1 = FT_Get_Module(*(undefined8 *)(*(long *)(*param_1 + 0xb0) + 8),"pshinter");
  uVar2 = 0;
  if ((puVar4 != (undefined8 *)0x0) && (lVar1 != 0)) {
    pcVar3 = (code *)*puVar4;
    if (pcVar3 == (code *)0x0) {
      uVar2 = 0;
    }
    else {
      puVar4 = (undefined8 *)(*pcVar3)(lVar1);
      uVar2 = 0;
      if (puVar4 != (undefined8 *)0x0) {
        lVar1 = *param_1;
        uVar2 = (*(code *)*puVar4)(*(undefined8 *)(lVar1 + 0xb8),
                                   *(long *)(lVar1 + 0x240) + *(long *)(lVar1 + 8) * 0x150,&local_28
                                  );
        if ((int)uVar2 == 0) {
          param_1[10] = local_28;
        }
      }
    }
  }
  return uVar2;
}

