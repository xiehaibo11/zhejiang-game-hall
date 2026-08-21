
undefined4
FUN_00a21380(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char *__s;
  size_t __n;
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 *local_80;
  undefined1 **ppuStack_78;
  undefined8 *puStack_70;
  undefined8 uStack_68;
  
                    /* try { // try from 00a21388 to 00b2138f has its CatchHandler @ 00a213cc */
                    /* try { // try from 00a21390 to 00b213eb has its CatchHandler @ 00a21274 */
  puStack_70 = &local_b0;
  ppuStack_78 = &local_80;
  uStack_68 = 0xffffff80ffffffd0;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a21388 with catch @ 00a213cc
                        */
  local_b0 = param_3;
  uStack_a8 = param_4;
  local_a0 = param_5;
  uStack_98 = param_6;
  local_90 = param_7;
  uStack_88 = param_8;
  local_80 = (undefined1 *)register0x00000008;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a21374 with catch @ 00a213e8
                        */
                    /* try { // try from 00a213ec to 00b214f7 has its CatchHandler @ 00a213ec
                       catch(type#1 @ 00000000) { ... } // from try @ 00a213ec with catch @ 00a213ec
                       catch(type#1 @ 00000000) { ... } // from try @ 00a2154c with catch @ 00a213ec
                        */
  __s = (char *)FUN_00a0ea44(param_2,&local_80);
  if (__s == (char *)0x0) {
    (*(code *)PTR_free_01d1b748)(*param_1);
    (*(code *)PTR_free_01d1b748)(param_1);
    return 0x1b;
  }
  __n = strlen(__s);
  uVar2 = param_1[2];
  if (~__n < uVar2) {
    (*(code *)PTR_free_01d1b748)(*param_1);
    *param_1 = 0;
LAB_00a21504:
    (*(code *)PTR_free_01d1b748)(param_1);
    uVar4 = 0x1b;
  }
  else {
    lVar1 = *param_1;
    if ((lVar1 == 0) || (param_1[1] - 1U < uVar2 + __n)) {
      lVar5 = -1;
      if ((-1 < (long)(uVar2 | __n)) &&
         (uVar3 = __n << 1 ^ 0xffffffffffffffff, uVar2 * 2 < uVar3 || uVar2 * 2 - uVar3 == 0)) {
        lVar5 = (uVar2 + __n) * 2;
      }
      if (lVar1 == 0) {
        lVar1 = (*(code *)PTR_malloc_01d1b740)(lVar5);
      }
      else {
        lVar1 = FUN_00a379b0(lVar1,lVar5);
      }
      if (lVar1 == 0) goto LAB_00a21504;
      uVar2 = param_1[2];
      *param_1 = lVar1;
      param_1[1] = lVar5;
    }
    memcpy((void *)(lVar1 + uVar2),__s,__n);
    uVar4 = 0;
    param_1[2] = param_1[2] + __n;
  }
  (*(code *)PTR_free_01d1b748)(__s);
  return uVar4;
}

