
/* dragonBones::UserData::getString(unsigned int) const */

void dragonBones::UserData::getString(uint param_1)

{
  ulong in_x1;
  ulong *in_x8;
  ulong *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  void *__dest;
  size_t __n;
  void *__src;
  
  lVar2 = *(long *)((ulong)param_1 + 0x40);
  uVar3 = in_x1 & 0xffffffff;
  uVar4 = (*(long *)((ulong)param_1 + 0x48) - lVar2 >> 3) * -0x5555555555555555;
  if (uVar4 < uVar3 || uVar4 - uVar3 == 0) {
    *in_x8 = 0;
    in_x8[1] = 0;
    in_x8[2] = 0;
    __n = strlen((char *)0x0);
    if (0xffffffffffffffef < __n) goto LAB_00d3aac0;
    if (__n < 0x17) {
      __dest = (void *)((long)in_x8 + 1);
      *(char *)in_x8 = (char)((int)__n << 1);
      if (__n == 0) goto LAB_00d3aaac;
    }
    else {
      uVar3 = __n + 0x10 & 0xfffffffffffffff0;
      __dest = operator_new(uVar3);
      in_x8[1] = __n;
      in_x8[2] = (ulong)__dest;
      *in_x8 = uVar3 | 1;
    }
    __src = (void *)0x0;
  }
  else {
    in_x8[1] = 0;
    in_x8[2] = 0;
    puVar1 = (ulong *)(lVar2 + uVar3 * 0x18);
    *in_x8 = 0;
    if ((*puVar1 & 1) == 0) {
      uVar4 = puVar1[1];
      uVar3 = *puVar1;
      in_x8[2] = puVar1[2];
      in_x8[1] = uVar4;
      *in_x8 = uVar3;
      return;
    }
    lVar2 = lVar2 + uVar3 * 0x18;
    __n = *(ulong *)(lVar2 + 8);
    if (0xffffffffffffffef < __n) {
LAB_00d3aac0:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    __src = *(void **)(lVar2 + 0x10);
    if (__n < 0x17) {
      __dest = (void *)((long)in_x8 + 1);
      *(char *)in_x8 = (char)((int)__n << 1);
      if (__n == 0) goto LAB_00d3aaac;
    }
    else {
      uVar3 = __n + 0x10 & 0xfffffffffffffff0;
      __dest = operator_new(uVar3);
      in_x8[1] = __n;
      in_x8[2] = (ulong)__dest;
      *in_x8 = uVar3 | 1;
    }
  }
  memcpy(__dest,__src,__n);
LAB_00d3aaac:
  *(undefined1 *)((long)__dest + __n) = 0;
  return;
}

