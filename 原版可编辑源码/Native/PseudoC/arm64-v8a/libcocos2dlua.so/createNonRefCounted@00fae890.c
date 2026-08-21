
/* cocos2d::Properties::createNonRefCounted(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

Properties * cocos2d::Properties::createNonRefCounted(basic_string *param_1)

{
  byte bVar1;
  long lVar2;
  char *pcVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  long *plVar8;
  Properties *this;
  Properties *this_00;
  Properties *pPVar9;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this_01;
  ulong *puVar10;
  Properties *this_02;
  void *__dest;
  ulong uVar11;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_d0;
  undefined7 uStack_cf;
  ulong uStack_c8;
  char *local_c0;
  long local_b8;
  Data aDStack_b0 [16];
  byte *local_a0;
  byte *local_98;
  undefined8 local_90;
  ulong local_88;
  undefined8 local_80;
  void *local_78;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_70 [16];
  void *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  uVar11 = (ulong)((byte)*param_1 >> 1);
  if (((byte)*param_1 & 1) != 0) {
    uVar11 = *(ulong *)(param_1 + 8);
  }
  if (uVar11 == 0) {
    pPVar9 = (Properties *)0x0;
                    /* try { // try from 00fae948 to 010ae953 has its CatchHandler @ 00faec5c */
    goto LAB_00faea84;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string(local_70,param_1);
  local_80 = 0;
  local_78 = (void *)0x0;
  local_90 = 0;
  local_88 = 0;
  local_a0 = (byte *)0x0;
  local_98 = (byte *)0x0;
  calculateNamespacePath((basic_string *)local_70,(basic_string *)&local_88,(vector *)&local_a0);
  plVar8 = (long *)FileUtils::getInstance();
  (**(code **)(*plVar8 + 0x28))(aDStack_b0,plVar8,&local_88);
  local_b8 = 0;
  this = operator_new(0xb0,(nothrow_t *)&std::nothrow);
  if (this == (Properties *)0x0) {
    this_02 = (Properties *)0x0;
  }
  else {
    Properties(this,aDStack_b0,&local_b8);
    this_02 = this;
  }
  resolveInheritance(this_02,(char *)0x0);
  this_00 = (Properties *)getPropertiesFromNamespacePath(this_02,(vector *)&local_a0);
  if (this_00 == (Properties *)0x0) {
    if (this_02 != (Properties *)0x0) {
      ~Properties(this_02);
      operator_delete(this);
    }
    pPVar9 = (Properties *)0x0;
  }
  else {
    pPVar9 = this_02;
    if ((this_00 != this_02) &&
       (pPVar9 = (Properties *)clone(this_00), this_02 != (Properties *)0x0)) {
      ~Properties(this_02);
      operator_delete(this);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(&local_d0,"");
    this_01 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
               (pPVar9 + 0xa0);
    if (this_01 ==
        (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)0x0) {
      puVar10 = operator_new(0x18,(nothrow_t *)&std::nothrow);
      pcVar3 = local_c0;
      if (puVar10 != (ulong *)0x0) {
        *puVar10 = 0;
        puVar10[1] = 0;
        puVar10[2] = 0;
        if (((byte)local_d0 & 1) == 0) {
          puVar10[2] = (ulong)local_c0;
          puVar10[1] = uStack_c8;
          *puVar10 = CONCAT71(uStack_cf,local_d0);
        }
        else {
          if (0xffffffffffffffef < uStack_c8) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__basic_string_common<true>::__throw_length_error();
          }
          if (uStack_c8 < 0x17) {
            __dest = (void *)((long)puVar10 + 1);
            *(char *)puVar10 = (char)((int)uStack_c8 << 1);
            if (uStack_c8 != 0) goto LAB_00faeb3c;
          }
          else {
            uVar11 = uStack_c8 + 0x10 & 0xfffffffffffffff0;
            __dest = operator_new(uVar11);
            puVar10[1] = uStack_c8;
            puVar10[2] = (ulong)__dest;
            *puVar10 = uVar11 | 1;
LAB_00faeb3c:
            memcpy(__dest,pcVar3,uStack_c8);
          }
          *(undefined1 *)((long)__dest + uStack_c8) = 0;
        }
      }
      *(ulong **)(pPVar9 + 0xa0) = puVar10;
    }
    else if (this_01 != &local_d0) {
                    /* try { // try from 00fae9e0 to 010ae9e7 has its CatchHandler @ 00faec00 */
                    /* try { // try from 00fae9e8 to 010aeb83 has its CatchHandler @ 00fae718 */
      uVar11 = (ulong)((byte)local_d0 >> 1);
      pcVar3 = (char *)((ulong)&local_d0 | 1);
      if (((byte)local_d0 & 1) != 0) {
        uVar11 = uStack_c8;
        pcVar3 = local_c0;
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign(this_01,pcVar3,uVar11);
    }
    if (((byte)local_d0 & 1) != 0) {
      operator_delete(local_c0);
    }
  }
  Data::~Data(aDStack_b0);
  pbVar6 = local_a0;
  if (local_a0 != (byte *)0x0) {
    if (local_98 != local_a0) {
      bVar1 = local_98[-0x18];
      pbVar7 = local_98 + -0x18;
      pbVar5 = local_98;
      while( true ) {
        pbVar4 = pbVar7;
        if ((bVar1 & 1) != 0) {
          operator_delete(*(void **)(pbVar5 + -8));
        }
        if (pbVar6 == pbVar4) break;
        bVar1 = pbVar4[-0x18];
        pbVar7 = pbVar4 + -0x18;
        pbVar5 = pbVar4;
      }
    }
    local_98 = pbVar6;
    operator_delete(local_a0);
  }
  if ((local_88 & 1) != 0) {
    operator_delete(local_78);
  }
  if (((byte)local_70[0] & 1) != 0) {
    operator_delete(local_60);
  }
LAB_00faea84:
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pPVar9;
}

