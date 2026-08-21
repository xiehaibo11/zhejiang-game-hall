
/* ccvaluemap_to_seval(std::__ndk1::unordered_map<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, cocos2d::Value,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, cocos2d::Value> > > const&,
   se::Value*) */

undefined4 ccvaluemap_to_seval(unordered_map *param_1,Value *param_2)

{
  byte bVar1;
  long lVar2;
  Object *pOVar3;
  ulong uVar4;
  char *pcVar5;
  undefined4 uVar6;
  long *plVar7;
  Object *local_50;
  Value aVStack_48 [16];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  pOVar3 = (Object *)se::Object::createPlainObject();
  se::HandleObject::HandleObject((HandleObject *)&local_50,pOVar3);
  plVar7 = *(long **)(param_1 + 0x10);
joined_r0x008dd338:
  if (plVar7 != (long *)0x0) {
    do {
      bVar1 = *(byte *)(plVar7 + 2);
      if ((bVar1 & 1) == 0) {
        if (bVar1 >> 1 != 0) goto LAB_008dd364;
      }
      else if (plVar7[3] != 0) goto LAB_008dd364;
      plVar7 = (long *)*plVar7;
      if (plVar7 == (long *)0x0) break;
    } while( true );
  }
  se::Value::setObject(param_2,(HandleObject *)&local_50,false);
  uVar6 = 1;
LAB_008dd3d8:
  se::HandleObject::~HandleObject((HandleObject *)&local_50);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_008dd364:
  se::Value::Value(aVStack_48);
  uVar4 = ccvalue_to_seval((Value *)(plVar7 + 5),aVStack_48);
  if ((uVar4 & 1) == 0) {
    se::Value::setUndefined(param_2);
    se::Value::~Value(aVStack_48);
    uVar6 = 0;
    goto LAB_008dd3d8;
  }
  if ((*(byte *)(plVar7 + 2) & 1) == 0) {
    pcVar5 = (char *)((long)plVar7 + 0x11);
  }
  else {
    pcVar5 = (char *)plVar7[4];
  }
  se::Object::setProperty(local_50,pcVar5,aVStack_48);
  se::Value::~Value(aVStack_48);
  plVar7 = (long *)*plVar7;
  goto joined_r0x008dd338;
}

