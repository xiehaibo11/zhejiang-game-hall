
/* std::__ndk1::vector<std::__ndk1::sub_match<char const*>,
   std::__ndk1::allocator<std::__ndk1::sub_match<char const*> > >::__append(unsigned long,
   std::__ndk1::sub_match<char const*> const&) */

void __thiscall
std::__ndk1::
vector<std::__ndk1::sub_match<char_const*>,std::__ndk1::allocator<std::__ndk1::sub_match<char_const*>>>
::__append(vector<std::__ndk1::sub_match<char_const*>,std::__ndk1::allocator<std::__ndk1::sub_match<char_const*>>>
           *this,ulong param_1,sub_match *param_2)

{
  ulong uVar1;
  void *__src;
  void *pvVar2;
  size_t __n;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  puVar5 = *(undefined8 **)(this + 8);
  if (param_1 <= (ulong)((*(long *)(this + 0x10) - (long)puVar5 >> 3) * -0x5555555555555555)) {
    puVar4 = puVar5;
    if (param_1 != 0) {
      puVar4 = puVar5 + param_1 * 3;
      lVar3 = param_1 * 0x18;
      do {
        uVar10 = *(undefined8 *)(param_2 + 8);
        uVar9 = *(undefined8 *)param_2;
        lVar3 = lVar3 + -0x18;
        puVar5[2] = *(undefined8 *)(param_2 + 0x10);
        puVar5[1] = uVar10;
        *puVar5 = uVar9;
        puVar5 = puVar5 + 3;
      } while (lVar3 != 0);
    }
    *(undefined8 **)(this + 8) = puVar4;
    return;
  }
  uVar8 = 0xaaaaaaaaaaaaaaa;
  lVar3 = (long)puVar5 - *(long *)this >> 3;
  uVar1 = lVar3 * -0x5555555555555555 + param_1;
  if (0xaaaaaaaaaaaaaaa < uVar1) {
                    /* WARNING: Subroutine does not return */
    __vector_base_common<true>::__throw_length_error();
  }
  lVar6 = *(long *)(this + 0x10) - *(long *)this >> 3;
  if ((ulong)(lVar6 * -0x5555555555555555) < 0x555555555555555) {
    uVar7 = lVar6 * 0x5555555555555556;
    uVar8 = uVar1;
    if (uVar1 <= uVar7) {
      uVar8 = uVar7;
    }
    if (uVar8 == 0) {
      pvVar2 = (void *)0x0;
      goto LAB_00eaada8;
    }
  }
  pvVar2 = operator_new(uVar8 * 0x18);
LAB_00eaada8:
  puVar4 = (undefined8 *)((long)pvVar2 + lVar3 * 8);
  lVar3 = param_1 * 0x18;
  puVar5 = puVar4;
  do {
    uVar10 = *(undefined8 *)(param_2 + 8);
    uVar9 = *(undefined8 *)param_2;
    lVar3 = lVar3 + -0x18;
    puVar5[2] = *(undefined8 *)(param_2 + 0x10);
    puVar5[1] = uVar10;
    *puVar5 = uVar9;
    puVar5 = puVar5 + 3;
  } while (lVar3 != 0);
  __src = *(void **)this;
  __n = *(long *)(this + 8) - (long)__src;
  if (0 < (long)__n) {
    memcpy((void *)((long)puVar4 - __n),__src,__n);
  }
  *(void **)this = (void *)((long)puVar4 - __n);
  *(undefined8 **)(this + 8) = puVar4 + param_1 * 3;
  *(void **)(this + 0x10) = (void *)((long)pvVar2 + uVar8 * 0x18);
  if (__src == (void *)0x0) {
    return;
  }
  operator_delete(__src);
  return;
}

