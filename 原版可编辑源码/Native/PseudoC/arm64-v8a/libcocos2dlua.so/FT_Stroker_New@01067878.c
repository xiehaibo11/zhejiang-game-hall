
int FT_Stroker_New(undefined8 *param_1,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  int local_24;
  
  if (param_1 == (undefined8 *)0x0) {
    local_24 = 0x21;
  }
  else if (param_2 == (long *)0x0) {
    local_24 = 6;
  }
  else {
    uVar2 = *param_1;
    lVar1 = ft_mem_alloc(uVar2,0xd8,&local_24);
                    /* try { // try from 010678ac to 011678b3 has its CatchHandler @ 01067b30 */
    if (local_24 == 0) {
      *(undefined8 **)(lVar1 + 0xd0) = param_1;
      *(undefined8 *)(lVar1 + 0x90) = uVar2;
      *(undefined8 *)(lVar1 + 0x78) = 0;
      *(undefined8 *)(lVar1 + 0x80) = 0;
      *(undefined8 *)(lVar1 + 0x70) = 0;
      *(undefined1 *)(lVar1 + 0x98) = 0;
      *(undefined8 *)(lVar1 + 0xc0) = uVar2;
      *(undefined8 *)(lVar1 + 0xa8) = 0;
      *(undefined8 *)(lVar1 + 0xb0) = 0;
      *(undefined8 *)(lVar1 + 0xa0) = 0;
                    /* try { // try from 010678d8 to 011678df has its CatchHandler @ 01067ba4 */
      *(undefined4 *)(lVar1 + 0x8c) = 0xffffffff;
      *(undefined4 *)(lVar1 + 0xbc) = 0xffffffff;
      *(undefined1 *)(lVar1 + 200) = 0;
    }
    *param_2 = lVar1;
  }
  return local_24;
}

