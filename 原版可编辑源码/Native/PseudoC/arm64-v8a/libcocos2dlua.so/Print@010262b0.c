
/* tinyxml2::XMLPrinter::Print(char const*, ...) */

void tinyxml2::XMLPrinter::Print(char *param_1,...)

{
  long lVar1;
  int iVar2;
  long lVar3;
  char *in_x1;
  undefined8 in_x2;
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined1 *local_d0;
  undefined1 **ppuStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  undefined1 *local_90;
  undefined1 **ppuStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  long local_68;
  
                    /* try { // try from 010262d8 to 011262df has its CatchHandler @ 0102632c */
                    /* try { // try from 010262e0 to 01126363 has its CatchHandler @ 0102628c */
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  local_100 = in_x2;
  uStack_f8 = in_x3;
  local_f0 = in_x4;
  uStack_e8 = in_x5;
  local_e0 = in_x6;
  uStack_d8 = in_x7;
  if (*(FILE **)(param_1 + 0x10) == (FILE *)0x0) {
    uStack_78 = 0xffffff80ffffffd0;
    local_90 = (undefined1 *)register0x00000008;
    ppuStack_88 = &local_d0;
    puStack_80 = &local_100;
    iVar2 = vsnprintf((char *)0x0,0,in_x1,&local_90);
                    /* try { // try from 01026364 to 011263eb has its CatchHandler @ 01026364
                       catch() { ... } // from try @ 01026364 with catch @ 01026364
                       catch() { ... } // from try @ 010263fc with catch @ 01026364 */
    lVar3 = DynArray<char,20>::PushArr((DynArray<char,20> *)(param_1 + 0x108),iVar2);
    uStack_78 = 0xffffff80ffffffd0;
    local_90 = (undefined1 *)register0x00000008;
    ppuStack_88 = &local_d0;
    puStack_80 = &local_100;
    iVar2 = vsnprintf((char *)(lVar3 + -1),(long)(iVar2 + 1),in_x1,&local_90);
  }
  else {
                    /* catch() { ... } // from try @ 010262d8 with catch @ 0102632c */
    uStack_b8 = 0xffffff80ffffffd0;
    local_d0 = (undefined1 *)register0x00000008;
    ppuStack_c8 = &local_d0;
    puStack_c0 = &local_100;
    iVar2 = vfprintf(*(FILE **)(param_1 + 0x10),in_x1,&local_d0);
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2);
}

