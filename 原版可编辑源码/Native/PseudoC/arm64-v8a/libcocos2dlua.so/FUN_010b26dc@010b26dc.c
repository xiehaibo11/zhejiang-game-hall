
void FUN_010b26dc(long param_1)

{
  void *__s;
  undefined8 uVar1;
  undefined8 uVar2;
  
  __s = *(void **)(param_1 + 0x18);
  if (__s != (void *)0x0) {
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    uVar2 = *(undefined8 *)((long)__s + 0xe8);
    *(undefined8 *)((long)__s + 0x18) = 0;
    *(undefined8 *)((long)__s + 0x40) = 0;
    *(undefined4 *)((long)__s + 0x90) = 0;
    *(undefined1 *)((long)__s + 0x38) = 0;
    *(undefined8 *)((long)__s + 0x30) = 0;
    *(undefined4 *)((long)__s + 0x54) = 9;
    if (*(long *)((long)__s + 0x88) != (long)__s + 0xa0) {
      ft_mem_free(uVar2);
      *(undefined8 *)((long)__s + 0x88) = 0;
    }
    ft_mem_free(uVar2,*(undefined8 *)((long)__s + 0x70));
    memset(__s,0,0xf0);
    ft_mem_free(uVar1,__s);
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  return;
}

