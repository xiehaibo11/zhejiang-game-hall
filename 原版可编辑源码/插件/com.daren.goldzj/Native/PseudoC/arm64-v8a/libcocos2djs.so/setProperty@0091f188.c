
/* cocos2d::renderer::Pass::setProperty(unsigned long, void*) */

void __thiscall cocos2d::renderer::Pass::setProperty(Pass *this,ulong param_1,void *param_2)

{
  char cVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  Pass *pPVar5;
  basic_string *pbVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  Parameter *this_00;
  Pass *pPVar12;
  ulong *local_78 [2];
  void *local_68;
  ulong local_60;
  Value aVStack_58 [16];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  uVar7 = *(ulong *)(this + 0x40);
  local_60 = param_1;
  if (uVar7 != 0) {
    uVar8 = uVar7 - 1;
    if ((uVar8 & uVar7) == 0) {
      uVar9 = uVar8 & param_1;
    }
    else {
      uVar9 = param_1;
      if (uVar7 <= param_1) {
        uVar9 = 0;
        if (uVar7 != 0) {
          uVar9 = param_1 / uVar7;
        }
        uVar9 = param_1 - uVar9 * uVar7;
      }
    }
    plVar10 = *(long **)(*(ulong *)(this + 0x38) + uVar9 * 8);
    if (plVar10 != (long *)0x0) {
LAB_0091f1f8:
      plVar10 = (long *)*plVar10;
      if (plVar10 == (long *)0x0) goto LAB_0091f248;
      uVar11 = plVar10[1];
      if (uVar11 != param_1) {
        if ((uVar8 & uVar7) == 0) {
          uVar11 = uVar11 & uVar8;
        }
        else if (uVar7 <= uVar11) {
          uVar2 = 0;
          if (uVar7 != 0) {
            uVar2 = uVar11 / uVar7;
          }
          uVar11 = uVar11 - uVar2 * uVar7;
        }
        if (uVar11 != uVar9) goto LAB_0091f248;
        goto LAB_0091f1f8;
      }
      if (plVar10[2] != param_1) goto LAB_0091f1f8;
      this_00 = (Parameter *)(plVar10 + 3);
      pbVar6 = param_2;
LAB_0091f31c:
      Technique::Parameter::setValue(this_00,param_2);
      if ((this_00[0x31] != (Parameter)0x1d) ||
         (lVar4 = Technique::Parameter::getTexture(this_00), lVar4 == 0)) goto LAB_0091f3c0;
      lVar4 = Technique::Parameter::getTexture(this_00);
      cVar1 = *(char *)(lVar4 + 0x3a);
      std::__ndk1::operator+((__ndk1 *)"CC_USE_ALPHA_ATLAS_",(char *)(this_00 + 0x10),pbVar6);
      pPVar12 = this;
      do {
        pPVar5 = (Pass *)std::__ndk1::
                         __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
                         ::
                         find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                                   ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
                                     *)(pPVar12 + 0x60),(basic_string *)local_78);
        if (pPVar12 + 0x68 != pPVar5) goto LAB_0091f388;
        pPVar12 = *(Pass **)(pPVar12 + 0x30);
      } while (pPVar12 != (Pass *)0x0);
      if (cVar1 != '\0') goto LAB_0091f388;
      goto LAB_0091f3b0;
    }
  }
LAB_0091f248:
  for (lVar4 = *(long *)(this + 0x30); lVar4 != 0; lVar4 = *(long *)(lVar4 + 0x30)) {
    uVar7 = *(ulong *)(lVar4 + 0x40);
    if (uVar7 != 0) {
      uVar8 = uVar7 - 1;
      if ((uVar8 & uVar7) == 0) {
        uVar9 = uVar8 & param_1;
      }
      else {
        uVar9 = param_1;
        if (uVar7 <= param_1) {
          uVar9 = 0;
          if (uVar7 != 0) {
            uVar9 = param_1 / uVar7;
          }
          uVar9 = param_1 - uVar9 * uVar7;
        }
      }
      plVar10 = *(long **)(*(long *)(lVar4 + 0x38) + uVar9 * 8);
      if (plVar10 != (long *)0x0) {
        do {
          while( true ) {
            while( true ) {
              plVar10 = (long *)*plVar10;
              if (plVar10 == (long *)0x0) goto LAB_0091f2dc;
              uVar11 = plVar10[1];
              if (uVar11 != param_1) break;
              if (plVar10[2] == param_1) {
                local_78[0] = &local_60;
                pbVar6 = (basic_string *)&DAT_0186917d;
                lVar4 = std::__ndk1::
                        __hash_table<std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::Technique::Parameter>,std::__ndk1::__unordered_map_hasher<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::Technique::Parameter>,std::__ndk1::hash<unsigned_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::Technique::Parameter>,std::__ndk1::equal_to<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::Technique::Parameter>>>
                        ::
                        __emplace_unique_key_args<unsigned_long,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<unsigned_long_const&>,std::__ndk1::tuple<>>
                                  ((ulong *)(this + 0x38),(piecewise_construct_t *)&local_60,
                                   (tuple *)&DAT_0186917d,(tuple *)local_78);
                this_00 = (Parameter *)(lVar4 + 0x18);
                Technique::Parameter::operator=(this_00,(Parameter *)(plVar10 + 3));
                goto LAB_0091f31c;
              }
            }
            if ((uVar8 & uVar7) == 0) break;
            if (uVar7 <= uVar11) {
              uVar2 = 0;
              if (uVar7 != 0) {
                uVar2 = uVar11 / uVar7;
              }
              uVar11 = uVar11 - uVar2 * uVar7;
            }
            if (uVar11 != uVar9) goto LAB_0091f2dc;
          }
        } while ((uVar11 & uVar8) == uVar9);
      }
    }
LAB_0091f2dc:
  }
LAB_0091f3c0:
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
LAB_0091f388:
  cocos2d::Value::Value(aVStack_58,cVar1 != '\0');
  define(this,(basic_string *)local_78,aVStack_58);
  cocos2d::Value::~Value(aVStack_58);
LAB_0091f3b0:
  if (((ulong)local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  goto LAB_0091f3c0;
}

