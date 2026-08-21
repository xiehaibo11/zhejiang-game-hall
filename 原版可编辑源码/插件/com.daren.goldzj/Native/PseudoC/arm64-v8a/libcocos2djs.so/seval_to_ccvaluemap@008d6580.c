
/* seval_to_ccvaluemap(se::Value const&, std::__ndk1::unordered_map<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, cocos2d::Value,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, cocos2d::Value> > >*) */

undefined4 seval_to_ccvaluemap(Value *param_1,unordered_map *param_2)

{
  basic_string *pbVar1;
  long lVar2;
  undefined8 *puVar3;
  Object *this;
  ulong uVar4;
  basic_string *pbVar5;
  long lVar6;
  long lVar7;
  undefined4 uVar8;
  void *pvVar9;
  basic_string *pbVar10;
  basic_string *local_80;
  basic_string *local_78;
  undefined8 local_70;
  Value aVStack_68 [16];
  Value aVStack_58 [16];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if ((byte)param_1[8] < 2) {
    if (*(long *)(param_2 + 0x18) == 0) {
      uVar8 = 1;
    }
    else {
      puVar3 = *(void **)(param_2 + 0x10);
      while (puVar3 != (void *)0x0) {
        pvVar9 = (void *)*puVar3;
        cocos2d::Value::~Value((Value *)(puVar3 + 5));
        if ((*(byte *)(puVar3 + 2) & 1) != 0) {
          operator_delete((void *)puVar3[4]);
        }
        operator_delete(puVar3);
        puVar3 = pvVar9;
      }
      lVar6 = *(long *)(param_2 + 8);
      *(undefined8 *)(param_2 + 0x10) = 0;
      if (lVar6 != 0) {
        lVar7 = 0;
        do {
          *(undefined8 *)(*(long *)param_2 + lVar7 * 8) = 0;
          lVar7 = lVar7 + 1;
        } while (lVar6 != lVar7);
      }
      *(undefined8 *)(param_2 + 0x18) = 0;
      uVar8 = 1;
    }
  }
  else if (param_1[8] == (Value)0x5) {
    this = (Object *)se::Value::toObject(param_1);
    local_80 = (basic_string *)0x0;
    local_78 = (basic_string *)0x0;
    local_70 = 0;
    uVar4 = se::Object::getAllKeys(this,(vector *)&local_80);
    if ((uVar4 & 1) == 0) {
      if (*(long *)(param_2 + 0x18) == 0) {
        uVar8 = 0;
        pbVar1 = local_80;
      }
      else {
        puVar3 = *(void **)(param_2 + 0x10);
        while (puVar3 != (void *)0x0) {
          pvVar9 = (void *)*puVar3;
          cocos2d::Value::~Value((Value *)(puVar3 + 5));
          if ((*(byte *)(puVar3 + 2) & 1) != 0) {
            operator_delete((void *)puVar3[4]);
          }
          operator_delete(puVar3);
          puVar3 = pvVar9;
        }
        lVar6 = *(long *)(param_2 + 8);
        *(undefined8 *)(param_2 + 0x10) = 0;
        if (lVar6 != 0) {
          lVar7 = 0;
          do {
            *(undefined8 *)(*(long *)param_2 + lVar7 * 8) = 0;
            lVar7 = lVar7 + 1;
          } while (lVar6 != lVar7);
        }
        uVar8 = 0;
        *(undefined8 *)(param_2 + 0x18) = 0;
        pbVar1 = local_80;
      }
    }
    else {
      se::Value::Value(aVStack_58);
      cocos2d::Value::Value(aVStack_68);
      pbVar10 = local_78;
      for (pbVar1 = local_80; pbVar1 != pbVar10; pbVar1 = pbVar1 + 0x18) {
        if (((byte)*pbVar1 & 1) == 0) {
          pbVar5 = pbVar1 + 1;
        }
        else {
          pbVar5 = *(basic_string **)(pbVar1 + 0x10);
        }
        uVar4 = se::Object::getProperty(this,(char *)pbVar5,aVStack_58);
        if ((uVar4 & 1) == 0) {
          if (*(long *)(param_2 + 0x18) == 0) {
LAB_008d688c:
            uVar8 = 0;
          }
          else {
            puVar3 = *(void **)(param_2 + 0x10);
            while (puVar3 != (void *)0x0) {
              pvVar9 = (void *)*puVar3;
              cocos2d::Value::~Value((Value *)(puVar3 + 5));
              if ((*(byte *)(puVar3 + 2) & 1) != 0) {
                operator_delete((void *)puVar3[4]);
              }
              operator_delete(puVar3);
              puVar3 = pvVar9;
            }
            lVar6 = *(long *)(param_2 + 8);
            *(undefined8 *)(param_2 + 0x10) = 0;
            if (lVar6 != 0) {
              lVar7 = 0;
              do {
                *(undefined8 *)(*(long *)param_2 + lVar7 * 8) = 0;
                lVar7 = lVar7 + 1;
              } while (lVar6 != lVar7);
            }
LAB_008d6880:
            uVar8 = 0;
            *(undefined8 *)(param_2 + 0x18) = 0;
          }
          goto LAB_008d6890;
        }
        uVar4 = seval_to_ccvalue(aVStack_58,aVStack_68);
        if ((uVar4 & 1) == 0) {
          if (*(long *)(param_2 + 0x18) == 0) goto LAB_008d688c;
          puVar3 = *(void **)(param_2 + 0x10);
          while (puVar3 != (void *)0x0) {
            pvVar9 = (void *)*puVar3;
            cocos2d::Value::~Value((Value *)(puVar3 + 5));
            if ((*(byte *)(puVar3 + 2) & 1) != 0) {
              operator_delete((void *)puVar3[4]);
            }
            operator_delete(puVar3);
            puVar3 = pvVar9;
          }
          lVar6 = *(long *)(param_2 + 8);
          *(undefined8 *)(param_2 + 0x10) = 0;
          if (lVar6 != 0) {
            lVar7 = 0;
            do {
              *(undefined8 *)(*(long *)param_2 + lVar7 * 8) = 0;
              lVar7 = lVar7 + 1;
            } while (lVar6 != lVar7);
          }
          goto LAB_008d6880;
        }
        std::__ndk1::
        __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
        ::
        __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,cocos2d::Value&>
                  ((basic_string *)param_2,pbVar1,(Value *)pbVar1);
      }
      uVar8 = 1;
LAB_008d6890:
      cocos2d::Value::~Value(aVStack_68);
      se::Value::~Value(aVStack_58);
      pbVar1 = local_80;
    }
    local_80 = pbVar1;
    pbVar10 = local_78;
    if (pbVar1 != (basic_string *)0x0) {
      while (pbVar5 = pbVar10, pbVar5 != pbVar1) {
        pbVar10 = pbVar5 + -0x18;
        if (((byte)*pbVar10 & 1) != 0) {
          operator_delete(*(void **)(pbVar5 + -8));
        }
      }
      local_78 = pbVar1;
      operator_delete(local_80);
    }
  }
  else if (*(long *)(param_2 + 0x18) == 0) {
    uVar8 = 0;
  }
  else {
    puVar3 = *(void **)(param_2 + 0x10);
    while (puVar3 != (void *)0x0) {
      pvVar9 = (void *)*puVar3;
      cocos2d::Value::~Value((Value *)(puVar3 + 5));
      if ((*(byte *)(puVar3 + 2) & 1) != 0) {
        operator_delete((void *)puVar3[4]);
      }
      operator_delete(puVar3);
      puVar3 = pvVar9;
    }
    lVar6 = *(long *)(param_2 + 8);
    *(undefined8 *)(param_2 + 0x10) = 0;
    if (lVar6 != 0) {
      lVar7 = 0;
      do {
        *(undefined8 *)(*(long *)param_2 + lVar7 * 8) = 0;
        lVar7 = lVar7 + 1;
      } while (lVar6 != lVar7);
    }
    uVar8 = 0;
    *(undefined8 *)(param_2 + 0x18) = 0;
  }
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar8;
}

