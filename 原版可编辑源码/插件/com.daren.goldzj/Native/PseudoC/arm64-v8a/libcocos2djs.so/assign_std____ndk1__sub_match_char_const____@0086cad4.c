
/* std::__ndk1::enable_if<__is_forward_iterator<std::__ndk1::sub_match<char
   const*>*>::value&&is_constructible<std::__ndk1::sub_match<char const*>,
   std::__ndk1::iterator_traits<std::__ndk1::sub_match<char const*>*>::reference>::value,
   void>::type std::__ndk1::vector<std::__ndk1::sub_match<char const*>,
   std::__ndk1::allocator<std::__ndk1::sub_match<char const*> >
   >::assign<std::__ndk1::sub_match<char const*>*>(std::__ndk1::sub_match<char const*>*,
   std::__ndk1::sub_match<char const*>*) */

void __thiscall
std::__ndk1::
vector<std::__ndk1::sub_match<char_const*>,std::__ndk1::allocator<std::__ndk1::sub_match<char_const*>>>
::assign<std::__ndk1::sub_match<char_const*>*>
          (vector<std::__ndk1::sub_match<char_const*>,std::__ndk1::allocator<std::__ndk1::sub_match<char_const*>>>
           *this,sub_match *param_1,sub_match *param_2)

{
  sub_match *__src;
  undefined8 *puVar1;
  void *pvVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  size_t sVar7;
  ulong uVar8;
  undefined8 uVar9;
  
  lVar3 = *(long *)(this + 0x10);
  puVar1 = *(undefined8 **)this;
  sVar7 = (long)param_2 - (long)param_1;
  uVar8 = ((long)sVar7 >> 3) * -0x5555555555555555;
  lVar6 = lVar3 - (long)puVar1 >> 3;
  if (uVar8 < (ulong)(lVar6 * -0x5555555555555555) || uVar8 + lVar6 * 0x5555555555555555 == 0) {
    lVar3 = *(long *)(this + 8) - (long)puVar1 >> 3;
    __src = param_1 + (*(long *)(this + 8) - (long)puVar1);
    if (uVar8 < (ulong)(lVar3 * -0x5555555555555555) || uVar8 + lVar3 * 0x5555555555555555 == 0) {
      __src = param_2;
    }
    for (; __src != param_1; param_1 = param_1 + 0x18) {
      uVar9 = *(undefined8 *)param_1;
      puVar1[1] = *(undefined8 *)(param_1 + 8);
      *puVar1 = uVar9;
      *(sub_match *)(puVar1 + 2) = param_1[0x10];
      puVar1 = puVar1 + 3;
    }
    if (uVar8 < (ulong)(lVar3 * -0x5555555555555555) || uVar8 + lVar3 * 0x5555555555555555 == 0) {
      *(undefined8 **)(this + 8) = puVar1;
      return;
    }
    sVar7 = (long)param_2 - (long)__src;
    if ((long)sVar7 < 1) {
      return;
    }
    memcpy(*(void **)(this + 8),__src,sVar7);
    pvVar2 = (void *)(*(long *)(this + 8) + (sVar7 / 0x18) * 0x18);
  }
  else {
    if (puVar1 != (undefined8 *)0x0) {
      *(undefined8 **)(this + 8) = puVar1;
      operator_delete(puVar1);
      lVar3 = 0;
      *(undefined8 *)this = 0;
      *(undefined8 *)(this + 8) = 0;
      *(undefined8 *)(this + 0x10) = 0;
    }
    if (0xaaaaaaaaaaaaaaa < uVar8) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    uVar5 = 0xaaaaaaaaaaaaaaa;
    if (((ulong)((lVar3 >> 3) * -0x5555555555555555) < 0x555555555555555) &&
       (uVar4 = (lVar3 >> 3) * 0x5555555555555556, uVar5 = uVar8, uVar8 <= uVar4)) {
      uVar5 = uVar4;
    }
    pvVar2 = operator_new(uVar5 * 0x18);
    *(void **)this = pvVar2;
    *(void **)(this + 8) = pvVar2;
    *(void **)(this + 0x10) = (void *)((long)pvVar2 + uVar5 * 0x18);
    if ((long)sVar7 < 1) {
      return;
    }
    memcpy(pvVar2,param_1,sVar7);
    pvVar2 = (void *)((long)pvVar2 + (sVar7 / 0x18) * 0x18);
  }
  *(void **)(this + 8) = pvVar2;
  return;
}

