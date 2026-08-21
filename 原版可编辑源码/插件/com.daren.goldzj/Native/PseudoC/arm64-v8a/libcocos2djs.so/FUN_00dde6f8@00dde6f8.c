
undefined8 FUN_00dde6f8(long param_1)

{
  void *pvVar1;
  undefined8 uVar2;
  char *pcVar3;
  long lVar4;
  undefined1 *puVar5;
  long lVar6;
  
  lVar6 = *(long *)(param_1 + 0x350);
  if (lVar6 == 0) {
    pvVar1 = _TIFFmalloc(0x120);
    *(void **)(param_1 + 0x350) = pvVar1;
    if (pvVar1 != (void *)0x0) {
      *(undefined8 *)((long)pvVar1 + 0xe0) = 0;
      *(undefined8 *)((long)pvVar1 + 0xb8) = 0;
      TIFFPredictorInit(param_1);
      lVar6 = *(long *)(param_1 + 0x350);
      lVar4 = *(long *)(lVar6 + 0xe0);
      goto joined_r0x00dde78c;
    }
    uVar2 = *(undefined8 *)(param_1 + 0x3b8);
    pcVar3 = "No space for LZW state block";
LAB_00dde7c4:
    TIFFErrorExt(uVar2,"LZWSetupDecode",pcVar3);
    uVar2 = 0;
  }
  else {
    lVar4 = *(long *)(lVar6 + 0xe0);
joined_r0x00dde78c:
    if (lVar4 == 0) {
      pvVar1 = _TIFFmalloc(0x13ff0);
      *(void **)(lVar6 + 0xe0) = pvVar1;
      if (pvVar1 == (void *)0x0) {
        uVar2 = *(undefined8 *)(param_1 + 0x3b8);
        pcVar3 = "No space for LZW code table";
        goto LAB_00dde7c4;
      }
      lVar6 = 0x100;
      puVar5 = (undefined1 *)((long)pvVar1 + 0xffb);
      do {
        lVar6 = lVar6 + -1;
        *(undefined2 *)(puVar5 + -3) = 1;
        *(undefined8 *)(puVar5 + -0xb) = 0;
        puVar5[-1] = (char)lVar6;
        *puVar5 = (char)lVar6;
        puVar5 = puVar5 + -0x10;
      } while (lVar6 != 0);
      _TIFFmemset((void *)((long)pvVar1 + 0x1000),0,0x20);
    }
    uVar2 = 1;
  }
  return uVar2;
}

