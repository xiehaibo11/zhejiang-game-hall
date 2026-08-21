
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
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  puVar7 = *(undefined8 **)(this + 8);
  if (param_1 <= (ulong)((*(long *)(this + 0x10) - (long)puVar7 >> 3) * -0x5555555555555555)) {
    do {
      uVar10 = *(undefined8 *)(param_2 + 8);
      uVar9 = *(undefined8 *)param_2;
      param_1 = param_1 - 1;
      puVar7[2] = *(undefined8 *)(param_2 + 0x10);
      puVar7[1] = uVar10;
      *puVar7 = uVar9;
      puVar7 = (undefined8 *)(*(long *)(this + 8) + 0x18);
      *(undefined8 **)(this + 8) = puVar7;
    } while (param_1 != 0);
    return;
  }
  uVar8 = 0xaaaaaaaaaaaaaaa;
  lVar3 = (long)puVar7 - *(long *)this >> 3;
  uVar1 = lVar3 * -0x5555555555555555 + param_1;
  if (0xaaaaaaaaaaaaaaa < uVar1) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar4 = *(long *)(this + 0x10) - *(long *)this >> 3;
  if ((ulong)(lVar4 * -0x5555555555555555) < 0x555555555555555) {
    uVar5 = lVar4 * 0x5555555555555556;
    uVar8 = uVar1;
    if (uVar1 <= uVar5) {
      uVar8 = uVar5;
    }
    if (uVar8 == 0) {
      pvVar2 = (void *)0x0;
      goto LAB_00864fe8;
    }
  }
  pvVar2 = operator_new(uVar8 * 0x18);
LAB_00864fe8:
  puVar6 = (undefined8 *)((long)pvVar2 + lVar3 * 8);
  puVar7 = puVar6;
  do {
    uVar10 = *(undefined8 *)(param_2 + 8);
    uVar9 = *(undefined8 *)param_2;
    param_1 = param_1 - 1;
    puVar7[2] = *(undefined8 *)(param_2 + 0x10);
    puVar7[1] = uVar10;
    *puVar7 = uVar9;
    puVar7 = puVar7 + 3;
  } while (param_1 != 0);
  __src = *(void **)this;
  __n = *(long *)(this + 8) - (long)__src;
  lVar3 = SUB168(SEXT816((long)__n) * SEXT816(-0x2aaaaaaaaaaaaaab),8);
  puVar6 = puVar6 + ((lVar3 >> 2) - (lVar3 >> 0x3f)) * 3;
  if (0 < (long)__n) {
    memcpy(puVar6,__src,__n);
  }
  *(undefined8 **)this = puVar6;
  *(void **)(this + 8) = (void *)((long)pvVar2 + uVar1 * 0x18);
  *(void **)(this + 0x10) = (void *)((long)pvVar2 + uVar8 * 0x18);
  if (__src == (void *)0x0) {
    return;
  }
  operator_delete(__src);
  return;
}

