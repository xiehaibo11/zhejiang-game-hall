
/* std::__ndk1::ios_base::__set_badbit_and_consider_rethrow() */

ios_base * __thiscall std::__ndk1::ios_base::__set_badbit_and_consider_rethrow(ios_base *this)

{
  ios_base *piVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  ios_base *piVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  sentry asStack_80 [8];
  ios_base *piStack_78;
  locale alStack_70 [8];
  long lStack_68;
  
  *(uint *)(this + 0x20) = *(uint *)(this + 0x20) | 1;
  if (((byte)this[0x24] & 1) == 0) {
    return this;
  }
  auVar11 = __cxa_rethrow();
  piVar6 = auVar11._0_8_;
  lVar4 = tpidr_el0;
  lStack_68 = *(long *)(lVar4 + 0x28);
  asStack_80[0] = (sentry)0x0;
  lVar9 = *(long *)piVar6;
  piStack_78 = piVar6;
  if (*(int *)(piVar6 + *(long *)(lVar9 + -0x18) + 0x20) == 0) {
    if (*(basic_ostream<char,std::__ndk1::char_traits<char>> **)
         (piVar6 + *(long *)(lVar9 + -0x18) + 0x88) !=
        (basic_ostream<char,std::__ndk1::char_traits<char>> *)0x0) {
      basic_ostream<char,std::__ndk1::char_traits<char>>::flush
                (*(basic_ostream<char,std::__ndk1::char_traits<char>> **)
                  (piVar6 + *(long *)(lVar9 + -0x18) + 0x88));
      lVar9 = *(long *)piVar6;
    }
    asStack_80[0] = (sentry)0x1;
    uVar3 = *(uint *)(piVar6 + *(long *)(lVar9 + -0x18) + 8);
    locale::locale(alStack_70,(locale *)(piVar6 + *(long *)(lVar9 + -0x18) + 0x30));
    plVar7 = (long *)locale::use_facet(alStack_70,
                                       (id *)&num_put<char,std::__ndk1::ostreambuf_iterator<char,std::__ndk1::char_traits<char>>>
                                              ::id);
    locale::~locale(alStack_70);
    piVar1 = piVar6 + *(long *)(*(long *)piVar6 + -0x18);
    uVar5 = *(uint *)(piVar1 + 0x90);
    uVar10 = *(undefined8 *)(piVar1 + 0x28);
    if (uVar5 == 0xffffffff) {
      locale::locale(alStack_70,(locale *)(piVar1 + 0x30));
      plVar8 = (long *)locale::use_facet(alStack_70,(id *)&ctype<char>::id);
      uVar5 = (**(code **)(*plVar8 + 0x38))(plVar8,0x20);
      locale::~locale(alStack_70);
      uVar5 = uVar5 & 0xff;
      *(uint *)(piVar1 + 0x90) = uVar5;
    }
    uVar2 = auVar11._8_8_ & 0xffff;
    if ((uVar3 & 0x4a) != 8 && (uVar3 & 0x4a) != 0x40) {
      uVar2 = (long)auVar11._8_2_;
    }
    lVar9 = (**(code **)(*plVar7 + 0x20))(plVar7,uVar10,piVar1,uVar5,uVar2);
    if (lVar9 == 0) {
      lVar9 = *(long *)(*(long *)piVar6 + -0x18);
      uVar5 = *(uint *)(piVar6 + lVar9 + 0x20);
      *(uint *)(piVar6 + lVar9 + 0x20) = uVar5 | 5;
      if ((*(uint *)(piVar6 + lVar9 + 0x24) & (uVar5 | 5)) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_011dac54("ios_base::clear");
      }
    }
  }
  basic_ostream<char,std::__ndk1::char_traits<char>>::sentry::~sentry(asStack_80);
  if (*(long *)(lVar4 + 0x28) == lStack_68) {
    return piVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

