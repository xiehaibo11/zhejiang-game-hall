
void FUN_009b73ec(undefined8 param_1,byte *param_2,undefined4 *param_3)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  void *__ptr;
  char *__s;
  size_t __n;
  ulong uVar5;
  void *pvVar6;
  ulong local_a0;
  size_t sStack_98;
  void *local_90;
  int local_88;
  int local_84;
  ulong local_80;
  size_t sStack_78;
  void *local_70;
  int local_64;
  byte *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uVar3 = glCreateShader();
  local_60 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    local_60 = param_2 + 1;
  }
  uVar5 = uVar3 & 0xffffffff;
  glShaderSource(uVar3,1,&local_60,0);
  glCompileShader(uVar5);
  glGetShaderiv(uVar5,0x8b81,&local_84);
  if (local_84 != 0) {
    uVar4 = 1;
    *param_3 = (int)uVar3;
    goto LAB_009b75e8;
  }
  glGetShaderiv(uVar5,0x8b88,&local_88);
  __ptr = malloc((long)local_88);
  glGetShaderSource(uVar3 & 0xffffffff,local_88,0,__ptr);
  __android_log_print(6,"renderer"," (86): ERROR: Failed to compile shader:\n%s\n",__ptr);
                    /* try { // try from 009b74cc to 00ab7543 has its CatchHandler @ 009b71c8 */
  local_64 = 0;
                    /* catch() { ... } // from try @ 009b724c with catch @ 009b74d4 */
  glGetShaderiv(uVar3 & 0xffffffff,0x8b84,&local_64);
  iVar2 = local_64;
                    /* catch() { ... } // from try @ 009b7240 with catch @ 009b74d8 */
                    /* catch() { ... } // from try @ 009b7220 with catch @ 009b74dc */
  if (local_64 < 1) {
    local_a0 = 0;
    sStack_98 = 0;
                    /* try { // try from 009b7544 to 00ab759b has its CatchHandler @ 009b7544
                       catch() { ... } // from try @ 009b7544 with catch @ 009b7544
                       catch() { ... } // from try @ 009b7720 with catch @ 009b7544 */
    local_90 = (void *)0x0;
LAB_009b75a0:
    pvVar6 = (void *)((ulong)&local_a0 | 1);
  }
  else {
    __s = malloc((long)local_64);
                    /* catch() { ... } // from try @ 009b7258 with catch @ 009b74ec */
    glGetShaderInfoLog(uVar3 & 0xffffffff,iVar2,0,__s);
    local_80 = 0;
    sStack_78 = 0;
    local_70 = (void *)0x0;
    __n = strlen(__s);
    if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (__n < 0x17) {
      pvVar6 = (void *)((ulong)&local_80 | 1);
      local_80 = CONCAT71(local_80._1_7_,(char)((int)__n << 1));
      if (__n != 0) goto LAB_009b756c;
    }
    else {
      uVar3 = __n + 0x10 & 0xfffffffffffffff0;
      pvVar6 = operator_new(uVar3);
      local_80 = uVar3 | 1;
      sStack_78 = __n;
      local_70 = pvVar6;
LAB_009b756c:
      memcpy(pvVar6,__s,__n);
    }
    *(undefined1 *)((long)pvVar6 + __n) = 0;
    free(__s);
    sStack_98 = sStack_78;
    local_a0 = local_80;
    local_90 = local_70;
                    /* try { // try from 009b759c to 00ab75b3 has its CatchHandler @ 009b77a0 */
    pvVar6 = local_70;
    if ((local_80 & 1) == 0) goto LAB_009b75a0;
  }
                    /* try { // try from 009b75bc to 00ab75c7 has its CatchHandler @ 009b779c */
  __android_log_print(6,"renderer"," (89): %s\n",pvVar6);
                    /* try { // try from 009b75c8 to 00ab75d3 has its CatchHandler @ 009b7798 */
  free(__ptr);
  *param_3 = 0;
                    /* try { // try from 009b75d4 to 00ab771f has its CatchHandler @ 009b77b0 */
  if ((local_a0 & 1) != 0) {
    operator_delete(local_90);
  }
  uVar4 = 0;
LAB_009b75e8:
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}

