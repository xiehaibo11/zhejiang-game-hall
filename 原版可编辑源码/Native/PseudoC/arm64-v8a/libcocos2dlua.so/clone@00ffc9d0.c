
/* cocos2d::__Dictionary::clone() const */

Ref * __thiscall cocos2d::__Dictionary::clone(__Dictionary *this)

{
  long lVar1;
  char *pcVar2;
  long lVar3;
  Ref *this_00;
  undefined8 *puVar4;
  long lVar5;
  Ref *pRVar6;
  long lVar7;
  char *pcVar8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_70 [16];
  void *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  this_00 = operator_new(0x40,(nothrow_t *)&std::nothrow);
  if (this_00 != (Ref *)0x0) {
    Ref::Ref(this_00);
    *(undefined4 *)(this_00 + 0x38) = 0;
    *(undefined ***)this_00 = &PTR____Dictionary_01724bf8;
    *(undefined ***)(this_00 + 0x28) = &PTR_clone_01724c28;
    *(undefined8 *)(this_00 + 0x30) = 0;
                    /* catch() { ... } // from try @ 00ffca98 with catch @ 00ffca3c */
    Ref::autorelease(this_00);
  }
  if (*(int *)(this + 0x38) == 1) {
    pcVar8 = *(char **)(this + 0x30);
    while (pcVar2 = pcVar8, pcVar2 != (char *)0x0) {
      pcVar8 = *(char **)(pcVar2 + 0x120);
      if ((((*(long *)(pcVar2 + 0x108) != 0) &&
           (puVar4 = (undefined8 *)
                     __dynamic_cast(*(long *)(pcVar2 + 0x108),&Ref::typeinfo,&Clonable::typeinfo,
                                    0xfffffffffffffffe), puVar4 != (undefined8 *)0x0)) &&
          (lVar7 = (**(code **)*puVar4)(), lVar7 != 0)) &&
         (pRVar6 = (Ref *)__dynamic_cast(lVar7,&Clonable::typeinfo,&Ref::typeinfo,0xfffffffffffffffe
                                        ), pRVar6 != (Ref *)0x0)) {
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string<decltype(nullptr)>(local_70,pcVar2);
        setObject((__Dictionary *)this_00,pRVar6,(basic_string *)local_70);
        if (((byte)local_70[0] & 1) != 0) {
          operator_delete(local_60);
        }
      }
    }
  }
  else if (*(int *)(this + 0x38) == 2) {
    lVar7 = *(long *)(this + 0x30);
    while (lVar3 = lVar7, lVar3 != 0) {
      lVar7 = *(long *)(lVar3 + 0x120);
                    /* try { // try from 00ffca90 to 010fca97 has its CatchHandler @ 00ffcb9c */
                    /* try { // try from 00ffca98 to 010fcbb7 has its CatchHandler @ 00ffca3c */
      if (((*(long *)(lVar3 + 0x108) != 0) &&
          (puVar4 = (undefined8 *)
                    __dynamic_cast(*(long *)(lVar3 + 0x108),&Ref::typeinfo,&Clonable::typeinfo,
                                   0xfffffffffffffffe), puVar4 != (undefined8 *)0x0)) &&
         ((lVar5 = (**(code **)*puVar4)(), lVar5 != 0 &&
          (pRVar6 = (Ref *)__dynamic_cast(lVar5,&Clonable::typeinfo,&Ref::typeinfo,
                                          0xfffffffffffffffe), pRVar6 != (Ref *)0x0)))) {
        setObject((__Dictionary *)this_00,pRVar6,*(long *)(lVar3 + 0x100));
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 00ffca90 with catch @ 00ffcb9c */
    __stack_chk_fail();
  }
  return this_00;
}

