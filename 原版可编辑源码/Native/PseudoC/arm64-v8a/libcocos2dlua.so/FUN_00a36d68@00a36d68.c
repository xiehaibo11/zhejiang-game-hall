
undefined4
FUN_00a36d68(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  
                    /* catch() { ... } // from try @ 00a36cac with catch @ 00a36d68
                       catch() { ... } // from try @ 00a36d14 with catch @ 00a36d68 */
                    /* try { // try from 00a36d84 to 00b36ddb has its CatchHandler @ 00a36d84
                       catch() { ... } // from try @ 00a36d84 with catch @ 00a36d84
                       catch() { ... } // from try @ 00a36ef0 with catch @ 00a36d84
                       catch() { ... } // from try @ 00a36ff4 with catch @ 00a36d84 */
  puStack_70 = &local_b0;
  ppuStack_78 = &local_80;
  uStack_68 = 0xffffff80ffffffd0;
  local_b0 = param_3;
  uStack_a8 = param_4;
  local_a0 = param_5;
  uStack_98 = param_6;
  local_90 = param_7;
  uStack_88 = param_8;
  local_80 = (undefined1 *)register0x00000008;
                    /* try { // try from 00a36ddc to 00b36e37 has its CatchHandler @ 00a37010 */
  __s = (char *)FUN_00a2442c(param_2,&local_80);
  if (__s == (char *)0x0) {
    (*(code *)PTR_free_01769a00)(*param_1);
                    /* try { // try from 00a36e40 to 00b36e4f has its CatchHandler @ 00a3700c */
    (*(code *)PTR_free_01769a00)(param_1);
    return 0x1b;
  }
  __n = strlen(__s);
  uVar2 = param_1[2];
  if (~__n < uVar2) {
    (*(code *)PTR_free_01769a00)(*param_1);
    *param_1 = 0;
LAB_00a36eec:
                    /* try { // try from 00a36ef0 to 00b36f23 has its CatchHandler @ 00a36d84 */
    (*(code *)PTR_free_01769a00)(param_1);
    uVar4 = 0x1b;
  }
  else {
    lVar1 = *param_1;
                    /* try { // try from 00a36e50 to 00b36e63 has its CatchHandler @ 00a37008 */
    if ((lVar1 == 0) || (param_1[1] - 1U < uVar2 + __n)) {
      lVar5 = -1;
                    /* try { // try from 00a36e78 to 00b36e83 has its CatchHandler @ 00a37010 */
      if ((-1 < (long)(uVar2 | __n)) &&
         (uVar3 = __n << 1 ^ 0xffffffffffffffff, uVar2 * 2 < uVar3 || uVar2 * 2 - uVar3 == 0)) {
        lVar5 = (uVar2 + __n) * 2;
      }
      if (lVar1 == 0) {
        lVar1 = (*(code *)PTR_malloc_017699f8)(lVar5);
      }
      else {
                    /* try { // try from 00a36e94 to 00b36eef has its CatchHandler @ 00a37020 */
        lVar1 = FUN_00a4e398(lVar1,lVar5);
      }
      if (lVar1 == 0) goto LAB_00a36eec;
      uVar2 = param_1[2];
      *param_1 = lVar1;
      param_1[1] = lVar5;
    }
    memcpy((void *)(lVar1 + uVar2),__s,__n);
    uVar4 = 0;
    param_1[2] = param_1[2] + __n;
  }
  (*(code *)PTR_free_01769a00)(__s);
                    /* try { // try from 00a36f24 to 00b36f37 has its CatchHandler @ 00a37010 */
  return uVar4;
}

