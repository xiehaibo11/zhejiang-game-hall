
/* std_unorderedmap_string_EffectProperty_to_seval(std::__ndk1::unordered_map<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   cocos2d::renderer::Technique::Parameter, std::__ndk1::hash<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::equal_to<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const,
   cocos2d::renderer::Technique::Parameter> > > const&, se::Value*) */

undefined8 std_unorderedmap_string_EffectProperty_to_seval(unordered_map *param_1,Value *param_2)

{
  byte bVar1;
  long lVar2;
  Object *pOVar3;
  char *pcVar4;
  long *plVar5;
  Object *local_50;
  Value aVStack_48 [16];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  pOVar3 = (Object *)se::Object::createPlainObject();
  se::HandleObject::HandleObject((HandleObject *)&local_50,pOVar3);
  plVar5 = *(long **)(param_1 + 0x10);
  do {
    while( true ) {
      if (plVar5 == (long *)0x0) {
        se::Value::setObject(param_2,(HandleObject *)&local_50,false);
        se::HandleObject::~HandleObject((HandleObject *)&local_50);
        if (*(long *)(lVar2 + 0x28) == local_38) {
          return 1;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      bVar1 = *(byte *)(plVar5 + 2);
      if ((bVar1 & 1) != 0) break;
      if (bVar1 >> 1 != 0) goto LAB_008dea74;
LAB_008dea60:
      plVar5 = (long *)*plVar5;
    }
    if (plVar5[3] == 0) goto LAB_008dea60;
LAB_008dea74:
    se::Value::Value(aVStack_48);
    EffectProperty_to_seval((Parameter *)(plVar5 + 5),aVStack_48);
    if ((*(byte *)(plVar5 + 2) & 1) == 0) {
      pcVar4 = (char *)((long)plVar5 + 0x11);
    }
    else {
      pcVar4 = (char *)plVar5[4];
    }
    se::Object::setProperty(local_50,pcVar4,aVStack_48);
    se::Value::~Value(aVStack_48);
    plVar5 = (long *)*plVar5;
  } while( true );
}

