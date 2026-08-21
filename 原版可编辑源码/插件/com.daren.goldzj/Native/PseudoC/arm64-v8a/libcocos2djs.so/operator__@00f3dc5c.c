
/* std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char>
   >::TEMPNAMEPLACEHOLDERVALUE(short) */

basic_ostream<char,std::__ndk1::char_traits<char>> * __thiscall
std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
          (basic_ostream<char,std::__ndk1::char_traits<char>> *this,short param_1)

{
  basic_ostream<char,std::__ndk1::char_traits<char>> *pbVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  locale alStack_38 [8];
  
  lVar8 = *(long *)(*(long *)this + -0x18);
  if (*(int *)(this + lVar8 + 0x20) == 0) {
    if (*(basic_ostream<char,std::__ndk1::char_traits<char>> **)(this + lVar8 + 0x88) !=
        (basic_ostream<char,std::__ndk1::char_traits<char>> *)0x0) {
      flush(*(basic_ostream<char,std::__ndk1::char_traits<char>> **)(this + lVar8 + 0x88));
      lVar8 = *(long *)(*(long *)this + -0x18);
    }
    uVar2 = *(uint *)(this + lVar8 + 8);
    ios_base::getloc();
    plVar5 = (long *)locale::use_facet(alStack_38,
                                       (id *)&num_put<char,std::__ndk1::ostreambuf_iterator<char,std::__ndk1::char_traits<char>>>
                                              ::id);
    locale::~locale(alStack_38);
    pbVar1 = this + *(long *)(*(long *)this + -0x18);
    uVar3 = *(uint *)(pbVar1 + 0x90);
    uVar9 = *(undefined8 *)(pbVar1 + 0x28);
    if (uVar3 == 0xffffffff) {
      ios_base::getloc();
      plVar6 = (long *)locale::use_facet(alStack_38,(id *)&ctype<char>::id);
      uVar3 = (**(code **)(*plVar6 + 0x38))(plVar6,0x20);
      locale::~locale(alStack_38);
      uVar3 = uVar3 & 0xff;
      *(uint *)(pbVar1 + 0x90) = uVar3;
    }
    uVar7 = (ulong)(ushort)param_1;
    if ((uVar2 & 0x4a) != 8 && (uVar2 & 0x4a) != 0x40) {
      uVar7 = (long)param_1;
    }
    lVar8 = (**(code **)(*plVar5 + 0x20))(plVar5,uVar9,pbVar1,uVar3,uVar7);
    if (lVar8 == 0) {
      ios_base::clear((ios_base *)(this + *(long *)(*(long *)this + -0x18)),
                      *(uint *)((ios_base *)(this + *(long *)(*(long *)this + -0x18)) + 0x20) | 5);
    }
  }
  lVar8 = *(long *)(*(long *)this + -0x18);
  if ((((*(long *)(this + lVar8 + 0x28) != 0) && (*(int *)(this + lVar8 + 0x20) == 0)) &&
      (((byte)this[lVar8 + 9] >> 5 & 1) != 0)) &&
     ((uVar7 = uncaught_exception(), (uVar7 & 1) == 0 &&
      (iVar4 = (**(code **)(**(long **)(this + *(long *)(*(long *)this + -0x18) + 0x28) + 0x30))(),
      iVar4 == -1)))) {
    ios_base::clear((ios_base *)(this + *(long *)(*(long *)this + -0x18)),
                    *(uint *)((ios_base *)(this + *(long *)(*(long *)this + -0x18)) + 0x20) | 1);
  }
  return this;
}

