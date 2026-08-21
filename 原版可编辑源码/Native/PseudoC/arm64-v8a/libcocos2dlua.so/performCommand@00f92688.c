
/* cocos2d::Console::performCommand(int, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall cocos2d::Console::performCommand(Console *this,int param_1,basic_string *param_2)

{
  byte *pbVar1;
  basic_string bVar2;
  long lVar3;
  basic_string *pbVar4;
  basic_string *pbVar5;
  basic_string *pbVar6;
  long lVar7;
  basic_string *pbVar8;
  byte *pbVar9;
  runtime_error *prVar10;
  ulong *puVar11;
  ulong uVar12;
  vector *pvVar13;
  void *pvVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> abStack_b8 [24];
  ulong local_a0;
  ulong uStack_98;
  void *local_90;
  basic_string *local_80;
  basic_string *local_78;
  undefined8 uStack_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  local_78 = (basic_string *)0x0;
  uStack_70 = 0;
  local_80 = (basic_string *)0x0;
  pvVar13 = (vector *)&local_80;
  Utility::split(param_2,' ',pvVar13);
  pbVar8 = local_80;
  if (local_80 == local_78) {
    prVar10 = (runtime_error *)__cxa_allocate_exception(0x10);
    std::runtime_error::runtime_error(prVar10,"Unknown command. Type \'help\' for options\n");
                    /* WARNING: Subroutine does not return */
    __cxa_throw(prVar10,&std::runtime_error::typeinfo,std::overflow_error::~overflow_error);
  }
  Utility::rtrim(local_80);
  Utility::ltrim(pbVar8);
  lVar7 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Console::Command*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Console::Command*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Console::Command*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Console::Command*>>>
          ::
          find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                    ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Console::Command*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Console::Command*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Console::Command*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Console::Command*>>>
                      *)(this + 0xd8),pbVar8);
  if (lVar7 == 0) {
    prVar10 = (runtime_error *)__cxa_allocate_exception(0x10);
    std::__ndk1::operator+((__ndk1 *)"Unknown command ",(char *)param_2,(basic_string *)pvVar13);
    puVar11 = (ulong *)std::__ndk1::
                       basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                       ::append(abStack_b8,". Type \'help\' for options\n",0x1a);
    local_90 = (void *)puVar11[2];
    uStack_98 = puVar11[1];
    local_a0 = *puVar11;
    puVar11[1] = 0;
    puVar11[2] = 0;
    *puVar11 = 0;
    std::runtime_error::runtime_error(prVar10,(basic_string *)&local_a0);
                    /* WARNING: Subroutine does not return */
    __cxa_throw(prVar10,&std::runtime_error::typeinfo,std::overflow_error::~overflow_error);
  }
  uStack_98 = 0;
  local_90 = (void *)0x0;
  local_a0 = 0;
  if (1 < (ulong)(((long)local_78 - (long)local_80 >> 3) * -0x5555555555555555)) {
    uVar15 = 1;
    lVar16 = 0x18;
    do {
      if (1 < uVar15) {
        if ((local_a0 & 1) == 0) {
          uVar17 = local_a0 >> 1 & 0x7f;
          uVar12 = 0x16;
          if (uVar17 != 0x16) goto LAB_00f92768;
LAB_00f9278c:
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::__grow_by
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)&local_a0,uVar12,1,uVar12,uVar12,0,0);
          if ((local_a0 & 1) != 0) goto LAB_00f9276c;
LAB_00f927b0:
          local_a0 = CONCAT71(local_a0._1_7_,(char)uVar17 * '\x02' + '\x02');
          pvVar14 = (void *)((ulong)&local_a0 | 1);
        }
        else {
          uVar12 = (local_a0 & 0xfffffffffffffffe) - 1;
          uVar17 = uStack_98;
          if (uStack_98 == uVar12) goto LAB_00f9278c;
LAB_00f92768:
          if ((local_a0 & 1) == 0) goto LAB_00f927b0;
LAB_00f9276c:
          uStack_98 = uVar17 + 1;
          pvVar14 = local_90;
        }
        *(undefined2 *)((long)pvVar14 + uVar17) = 0x20;
      }
      pbVar8 = (basic_string *)Utility::rtrim(local_80 + lVar16);
      pbVar9 = (byte *)Utility::ltrim(pbVar8);
      uVar17 = *(ulong *)(pbVar9 + 8);
      pbVar1 = *(byte **)(pbVar9 + 0x10);
      if ((*pbVar9 & 1) == 0) {
        pbVar1 = pbVar9 + 1;
        uVar17 = (ulong)(*pbVar9 >> 1);
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_a0,(char *)pbVar1,uVar17);
      uVar15 = uVar15 + 1;
      lVar16 = lVar16 + 0x18;
    } while (uVar15 < (ulong)(((long)local_78 - (long)local_80 >> 3) * -0x5555555555555555));
  }
  Command::commandGeneric(*(Command **)(lVar7 + 0x28),param_1,(basic_string *)&local_a0);
  if ((local_a0 & 1) != 0) {
    operator_delete(local_90);
  }
  pbVar8 = local_80;
  if (local_80 != (basic_string *)0x0) {
    if (local_78 != local_80) {
      bVar2 = local_78[-0x18];
      pbVar6 = local_78 + -0x18;
      pbVar5 = local_78;
      while( true ) {
        pbVar4 = pbVar6;
        if (((byte)bVar2 & 1) != 0) {
          operator_delete(*(void **)(pbVar5 + -8));
        }
        if (pbVar8 == pbVar4) break;
        bVar2 = pbVar4[-0x18];
        pbVar6 = pbVar4 + -0x18;
        pbVar5 = pbVar4;
      }
    }
    local_78 = pbVar8;
    operator_delete(local_80);
  }
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

