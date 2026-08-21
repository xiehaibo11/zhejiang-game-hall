
undefined8 * strbuf_new(int param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  
  puVar1 = malloc(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    iVar3 = 0x3ff;
    if (0 < param_1) {
      iVar3 = param_1 + 1;
    }
    *(undefined4 *)((long)puVar1 + 0x1c) = 0;
    *(int *)(puVar1 + 1) = iVar3;
    *(undefined8 *)((long)puVar1 + 0x14) = 0;
    *(undefined8 *)((long)puVar1 + 0xc) = 0xfffffffe00000000;
    puVar2 = malloc((long)iVar3);
    *puVar1 = puVar2;
    if (puVar2 != (undefined1 *)0x0) {
      *puVar2 = 0;
      *(undefined4 *)((long)puVar1 + 0x14) = 1;
      return puVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_009d08d4("Out of memory");
}

