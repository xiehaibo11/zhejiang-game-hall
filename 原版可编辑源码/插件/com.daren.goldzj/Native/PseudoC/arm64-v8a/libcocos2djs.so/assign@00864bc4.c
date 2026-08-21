
/* std::__ndk1::vector<std::__ndk1::sub_match<char const*>,
   std::__ndk1::allocator<std::__ndk1::sub_match<char const*> > >::assign(unsigned long,
   std::__ndk1::sub_match<char const*> const&) */

void __thiscall
std::__ndk1::
vector<std::__ndk1::sub_match<char_const*>,std::__ndk1::allocator<std::__ndk1::sub_match<char_const*>>>
::assign(vector<std::__ndk1::sub_match<char_const*>,std::__ndk1::allocator<std::__ndk1::sub_match<char_const*>>>
         *this,ulong param_1,sub_match *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  lVar2 = *(long *)(this + 0x10);
  puVar1 = *(undefined8 **)this;
  if ((ulong)((lVar2 - (long)puVar1 >> 3) * -0x5555555555555555) < param_1) {
    if (puVar1 != (undefined8 *)0x0) {
      *(undefined8 **)(this + 8) = puVar1;
      operator_delete(puVar1);
      lVar2 = 0;
      *(undefined8 *)this = 0;
      *(undefined8 *)(this + 8) = 0;
      *(undefined8 *)(this + 0x10) = 0;
    }
    if (0xaaaaaaaaaaaaaaa < param_1) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    uVar5 = 0xaaaaaaaaaaaaaaa;
    if (((ulong)((lVar2 >> 3) * -0x5555555555555555) < 0x555555555555555) &&
       (uVar3 = (lVar2 >> 3) * 0x5555555555555556, uVar5 = param_1, param_1 <= uVar3)) {
      uVar5 = uVar3;
    }
    puVar1 = operator_new(uVar5 * 0x18);
    *(undefined8 **)this = puVar1;
    *(undefined8 **)(this + 8) = puVar1;
    *(undefined8 **)(this + 0x10) = puVar1 + uVar5 * 3;
    do {
      uVar8 = *(undefined8 *)(param_2 + 8);
      uVar7 = *(undefined8 *)param_2;
      param_1 = param_1 - 1;
      puVar1[2] = *(undefined8 *)(param_2 + 0x10);
      puVar1[1] = uVar8;
      *puVar1 = uVar7;
      puVar1 = (undefined8 *)(*(long *)(this + 8) + 0x18);
      *(undefined8 **)(this + 8) = puVar1;
    } while (param_1 != 0);
  }
  else {
    puVar4 = *(undefined8 **)(this + 8);
    uVar3 = ((long)puVar4 - (long)puVar1 >> 3) * -0x5555555555555555;
    uVar5 = uVar3;
    if (param_1 <= uVar3) {
      uVar5 = param_1;
    }
    if (uVar5 != 0) {
      uVar5 = ~param_1;
      if (uVar5 < ~uVar3) {
        uVar5 = ~uVar3;
      }
      lVar2 = uVar5 + 1;
      puVar6 = puVar1;
      do {
        uVar7 = *(undefined8 *)param_2;
        lVar2 = lVar2 + 1;
        puVar6[1] = *(undefined8 *)(param_2 + 8);
        *puVar6 = uVar7;
        *(sub_match *)(puVar6 + 2) = param_2[0x10];
        puVar6 = puVar6 + 3;
      } while (lVar2 != 0);
    }
    lVar2 = uVar3 - param_1;
    if (uVar3 < param_1) {
      do {
        uVar8 = *(undefined8 *)(param_2 + 8);
        uVar7 = *(undefined8 *)param_2;
        lVar2 = lVar2 + 1;
        puVar4[2] = *(undefined8 *)(param_2 + 0x10);
        puVar4[1] = uVar8;
        *puVar4 = uVar7;
        puVar4 = (undefined8 *)(*(long *)(this + 8) + 0x18);
        *(undefined8 **)(this + 8) = puVar4;
      } while (lVar2 != 0);
    }
    else {
      *(undefined8 **)(this + 8) = puVar1 + param_1 * 3;
    }
  }
  return;
}

