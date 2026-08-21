
/* std::__ndk1::vector<std::__ndk1::sub_match<char const*>,
   std::__ndk1::allocator<std::__ndk1::sub_match<char const*> > >::assign(unsigned long,
   std::__ndk1::sub_match<char const*> const&) */

void __thiscall
std::__ndk1::
vector<std::__ndk1::sub_match<char_const*>,std::__ndk1::allocator<std::__ndk1::sub_match<char_const*>>>
::assign(vector<std::__ndk1::sub_match<char_const*>,std::__ndk1::allocator<std::__ndk1::sub_match<char_const*>>>
         *this,ulong param_1,sub_match *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  lVar4 = *(long *)(this + 0x10);
  puVar2 = *(undefined8 **)this;
  if ((ulong)((lVar4 - (long)puVar2 >> 3) * -0x5555555555555555) < param_1) {
    if (puVar2 != (undefined8 *)0x0) {
      *(undefined8 **)(this + 8) = puVar2;
      operator_delete(puVar2);
      lVar4 = 0;
      *(undefined8 *)this = 0;
      *(undefined8 *)(this + 8) = 0;
      *(undefined8 *)(this + 0x10) = 0;
    }
    if (0xaaaaaaaaaaaaaaa < param_1) {
                    /* WARNING: Subroutine does not return */
      __vector_base_common<true>::__throw_length_error();
    }
    uVar7 = 0xaaaaaaaaaaaaaaa;
    if (((ulong)((lVar4 >> 3) * -0x5555555555555555) < 0x555555555555555) &&
       (uVar5 = (lVar4 >> 3) * 0x5555555555555556, uVar7 = param_1, param_1 <= uVar5)) {
      uVar7 = uVar5;
    }
    puVar3 = operator_new(uVar7 * 0x18);
    lVar4 = param_1 * 0x18;
    *(undefined8 **)(this + 0x10) = puVar3 + uVar7 * 3;
    puVar2 = puVar3 + param_1 * 3;
    *(undefined8 **)this = puVar3;
    *(undefined8 **)(this + 8) = puVar3;
    do {
      uVar9 = *(undefined8 *)(param_2 + 8);
      uVar8 = *(undefined8 *)param_2;
      lVar4 = lVar4 + -0x18;
      puVar3[2] = *(undefined8 *)(param_2 + 0x10);
      puVar3[1] = uVar9;
      *puVar3 = uVar8;
      puVar3 = puVar3 + 3;
    } while (lVar4 != 0);
  }
  else {
    puVar6 = *(undefined8 **)(this + 8);
    lVar4 = (long)puVar6 - (long)puVar2 >> 3;
    uVar5 = lVar4 * -0x5555555555555555;
    puVar3 = puVar2;
    uVar7 = uVar5;
    if (param_1 <= uVar5) {
      uVar7 = param_1;
    }
    for (; uVar7 != 0; uVar7 = uVar7 - 1) {
      uVar8 = *(undefined8 *)param_2;
      puVar3[1] = *(undefined8 *)(param_2 + 8);
      *puVar3 = uVar8;
      *(sub_match *)(puVar3 + 2) = param_2[0x10];
      puVar3 = puVar3 + 3;
    }
    if (uVar5 < param_1) {
      lVar1 = param_1 + lVar4 * 0x5555555555555555;
      puVar2 = puVar6;
      if (lVar1 != 0) {
        puVar2 = puVar6 + lVar1 * 3;
        lVar4 = lVar4 * -8 + param_1 * 0x18;
        do {
          uVar9 = *(undefined8 *)(param_2 + 8);
          uVar8 = *(undefined8 *)param_2;
          lVar4 = lVar4 + -0x18;
          puVar6[2] = *(undefined8 *)(param_2 + 0x10);
          puVar6[1] = uVar9;
          *puVar6 = uVar8;
          puVar6 = puVar6 + 3;
        } while (lVar4 != 0);
      }
    }
    else {
      puVar2 = puVar2 + param_1 * 3;
    }
  }
  *(undefined8 **)(this + 8) = puVar2;
  return;
}

