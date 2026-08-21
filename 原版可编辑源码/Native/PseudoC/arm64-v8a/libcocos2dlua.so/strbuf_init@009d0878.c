
void strbuf_init(undefined8 *param_1,int param_2)

{
  undefined1 *puVar1;
  int iVar2;
  
  iVar2 = 0x3ff;
  if (0 < param_2) {
    iVar2 = param_2 + 1;
  }
  *(undefined4 *)((long)param_1 + 0x1c) = 0;
  *(int *)(param_1 + 1) = iVar2;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *(undefined8 *)((long)param_1 + 0xc) = 0xfffffffe00000000;
  puVar1 = malloc((long)iVar2);
  *param_1 = puVar1;
  if (puVar1 != (undefined1 *)0x0) {
    *puVar1 = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_009d08d4("Out of memory");
}

