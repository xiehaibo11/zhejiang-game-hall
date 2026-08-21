
void FUN_00a38740(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  size_t __size;
  undefined8 local_8b0;
  undefined8 uStack_8a8;
  undefined8 local_8a0;
  undefined8 uStack_898;
  undefined8 local_890;
  undefined8 uStack_888;
  undefined1 *local_880;
  undefined1 **ppuStack_878;
  undefined8 *puStack_870;
  undefined8 uStack_868;
  char acStack_83c [2052];
  long local_38;
  
                    /* try { // try from 00a3876c to 00b38803 has its CatchHandler @ 00a38818 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_8b0 = param_3;
  uStack_8a8 = param_4;
  local_8a0 = param_5;
  uStack_898 = param_6;
  local_890 = param_7;
  uStack_888 = param_8;
  if ((param_1 != 0) && (*(char *)(param_1 + 0x628) != '\0')) {
    puStack_870 = &local_8b0;
    ppuStack_878 = &local_880;
    uStack_868 = 0xffffff80ffffffd0;
    local_880 = (undefined1 *)register0x00000008;
    FUN_00a22d94(acStack_83c,0x801,param_2,&local_880);
    __size = strlen(acStack_83c);
    if (*(code **)(param_1 + 0x2e8) == (code *)0x0) {
                    /* catch() { ... } // from try @ 00a386fc with catch @ 00a38818
                       catch() { ... } // from try @ 00a3876c with catch @ 00a38818 */
      fwrite(&DAT_013c44af,2,1,*(FILE **)(param_1 + 0x220));
      fwrite(acStack_83c,__size,1,*(FILE **)(param_1 + 0x220));
    }
    else {
                    /* try { // try from 00a38804 to 00b38833 has its CatchHandler @ 00a386a4 */
      (**(code **)(param_1 + 0x2e8))(param_1,0,acStack_83c,__size,*(undefined8 *)(param_1 + 0x228));
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

