
/* void std::__ndk1::match_results<std::__ndk1::__wrap_iter<char const*>,
   std::__ndk1::allocator<std::__ndk1::sub_match<std::__ndk1::__wrap_iter<char const*> > >
   >::__assign<char const*, std::__ndk1::allocator<std::__ndk1::sub_match<char const*> >
   >(std::__ndk1::__wrap_iter<char const*>, std::__ndk1::__wrap_iter<char const*>,
   std::__ndk1::match_results<char const*, std::__ndk1::allocator<std::__ndk1::sub_match<char
   const*> > > const&, bool) */

void __thiscall
std::__ndk1::
match_results<std::__ndk1::__wrap_iter<char_const*>,std::__ndk1::allocator<std::__ndk1::sub_match<std::__ndk1::__wrap_iter<char_const*>>>>
::__assign<char_const*,std::__ndk1::allocator<std::__ndk1::sub_match<char_const*>>>
          (match_results<std::__ndk1::__wrap_iter<char_const*>,std::__ndk1::allocator<std::__ndk1::sub_match<std::__ndk1::__wrap_iter<char_const*>>>>
           *this,long param_2,undefined8 param_3,long *param_4,uint param_5)

{
  long *plVar1;
  long *plVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  
  lVar6 = *(long *)this;
  lVar5 = *(long *)(this + 8);
  lVar10 = param_4[6];
  lVar4 = param_4[1] - *param_4 >> 3;
  lVar8 = lVar5 - lVar6 >> 3;
  uVar7 = lVar4 * -0x5555555555555555;
  bVar3 = uVar7 < (ulong)(lVar8 * -0x5555555555555555);
  uVar7 = uVar7 + lVar8 * 0x5555555555555555;
  if (bVar3 || uVar7 == 0) {
    if (bVar3) {
      lVar5 = lVar6 + lVar4 * 8;
      *(long *)(this + 8) = lVar5;
    }
    if (lVar5 == lVar6) goto LAB_00eb0e28;
  }
  else {
    vector<std::__ndk1::sub_match<std::__ndk1::__wrap_iter<char_const*>>,std::__ndk1::allocator<std::__ndk1::sub_match<std::__ndk1::__wrap_iter<char_const*>>>>
    ::__append((vector<std::__ndk1::sub_match<std::__ndk1::__wrap_iter<char_const*>>,std::__ndk1::allocator<std::__ndk1::sub_match<std::__ndk1::__wrap_iter<char_const*>>>>
                *)this,uVar7);
    lVar6 = *(long *)this;
    if (*(long *)(this + 8) == lVar6) goto LAB_00eb0e28;
  }
  lVar4 = *param_4;
  lVar8 = param_4[1];
  lVar5 = 0;
  uVar7 = 0;
  plVar1 = param_4 + 3;
  do {
    uVar9 = (lVar8 - lVar4 >> 3) * -0x5555555555555555;
    plVar2 = (long *)(lVar4 + lVar5);
    if (uVar9 < uVar7 || uVar9 - uVar7 == 0) {
      plVar2 = plVar1;
    }
    *(long *)(lVar6 + lVar5) = param_2 + (*plVar2 - lVar10);
    uVar9 = (param_4[1] - *param_4 >> 3) * -0x5555555555555555;
    plVar2 = (long *)(*param_4 + lVar5);
    if (uVar9 < uVar7 || uVar9 - uVar7 == 0) {
      plVar2 = plVar1;
    }
    *(long *)(*(long *)this + lVar5 + 8) = param_2 + (plVar2[1] - lVar10);
    lVar4 = *param_4;
    lVar8 = param_4[1];
    uVar9 = (lVar8 - lVar4 >> 3) * -0x5555555555555555;
    plVar2 = (long *)(lVar4 + lVar5);
    if (uVar9 < uVar7 || uVar9 - uVar7 == 0) {
      plVar2 = plVar1;
    }
    lVar6 = *(long *)this;
    uVar7 = uVar7 + 1;
    *(char *)(lVar6 + lVar5 + 0x10) = (char)plVar2[2];
    lVar5 = lVar5 + 0x18;
  } while (uVar7 < (ulong)((*(long *)(this + 8) - lVar6 >> 3) * -0x5555555555555555));
LAB_00eb0e28:
  *(undefined8 *)(this + 0x18) = param_3;
  *(undefined8 *)(this + 0x20) = param_3;
  this[0x28] = (match_results<std::__ndk1::__wrap_iter<char_const*>,std::__ndk1::allocator<std::__ndk1::sub_match<std::__ndk1::__wrap_iter<char_const*>>>>
                )0x0;
  lVar6 = param_2 + (param_4[6] - lVar10);
  *(long *)(this + 0x30) = lVar6;
  *(long *)(this + 0x38) = param_2 + (param_4[7] - lVar10);
  this[0x40] = *(match_results<std::__ndk1::__wrap_iter<char_const*>,std::__ndk1::allocator<std::__ndk1::sub_match<std::__ndk1::__wrap_iter<char_const*>>>>
                 *)(param_4 + 8);
  *(long *)(this + 0x48) = param_2 + (param_4[9] - lVar10);
  *(long *)(this + 0x50) = param_2 + (param_4[10] - lVar10);
  this[0x58] = *(match_results<std::__ndk1::__wrap_iter<char_const*>,std::__ndk1::allocator<std::__ndk1::sub_match<std::__ndk1::__wrap_iter<char_const*>>>>
                 *)(param_4 + 0xb);
  if ((param_5 & 1) == 0) {
    *(long *)(this + 0x68) = lVar6;
  }
  this[0x60] = *(match_results<std::__ndk1::__wrap_iter<char_const*>,std::__ndk1::allocator<std::__ndk1::sub_match<std::__ndk1::__wrap_iter<char_const*>>>>
                 *)(param_4 + 0xc);
  return;
}

