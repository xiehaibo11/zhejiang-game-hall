
/* cocosbuilder::CCBAnimationManager::~CCBAnimationManager() */

void __thiscall cocosbuilder::CCBAnimationManager::~CCBAnimationManager(CCBAnimationManager *this)

{
  Ref *this_00;
  Value *pVVar1;
  void *pvVar2;
  long *plVar3;
  Value *pVVar4;
  undefined8 *puVar5;
  Value *pVVar6;
  long *plVar7;
  undefined8 *puVar8;
  void *pvVar9;
  
  *(undefined ***)this = &PTR__CCBAnimationManager_016cf0d0;
  if (*(Node **)(this + 200) != (Node *)0x0) {
    cocos2d::Node::stopAllActions(*(Node **)(this + 200));
  }
  *(undefined8 *)(this + 200) = 0;
  if ((*(long *)(this + 0xd8) != 0) &&
     (this_00 = (Ref *)__dynamic_cast(*(long *)(this + 0xd8),&CCBAnimationManagerDelegate::typeinfo,
                                      &cocos2d::Ref::typeinfo,0xfffffffffffffffe),
     this_00 != (Ref *)0x0)) {
    cocos2d::Ref::release(this_00);
  }
  plVar3 = *(long **)(this + 0xa8);
  *(undefined8 *)(this + 0xd8) = 0;
  for (; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
    for (plVar7 = (long *)plVar3[5]; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
      cocos2d::Ref::release((Ref *)plVar7[5]);
    }
  }
  if (*(Ref **)(this + 0x1e0) != (Ref *)0x0) {
    cocos2d::Ref::release(*(Ref **)(this + 0x1e0));
  }
  if (((byte)this[0x1b8] & 1) != 0) {
    operator_delete(*(void **)(this + 0x1c8));
  }
  if (((byte)this[0x1a0] & 1) != 0) {
    operator_delete(*(void **)(this + 0x1b0));
  }
  cocos2d::
  Map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::CallFunc*>
  ::~Map((Map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::CallFunc*>
          *)(this + 0x178));
  pVVar6 = *(Value **)(this + 0x160);
  if (pVVar6 != (Value *)0x0) {
    pVVar4 = *(Value **)(this + 0x168);
    pVVar1 = pVVar6;
    if (pVVar4 != pVVar6) {
      do {
        pVVar4 = pVVar4 + -0x10;
        cocos2d::Value::~Value(pVVar4);
      } while (pVVar6 != pVVar4);
      pVVar1 = *(Value **)(this + 0x160);
    }
    *(Value **)(this + 0x168) = pVVar6;
    operator_delete(pVVar1);
  }
  pVVar6 = *(Value **)(this + 0x148);
  if (pVVar6 != (Value *)0x0) {
    pVVar4 = *(Value **)(this + 0x150);
    pVVar1 = pVVar6;
    if (pVVar4 != pVVar6) {
      do {
        pVVar4 = pVVar4 + -0x10;
        cocos2d::Value::~Value(pVVar4);
      } while (pVVar6 != pVVar4);
      pVVar1 = *(Value **)(this + 0x148);
    }
    *(Value **)(this + 0x150) = pVVar6;
    operator_delete(pVVar1);
  }
  puVar5 = *(undefined8 **)(this + 0x130);
  puVar8 = *(undefined8 **)(this + 0x138);
  if (puVar5 != puVar8) {
    do {
      cocos2d::Ref::release((Ref *)*puVar5);
      puVar5 = puVar5 + 1;
    } while (puVar8 != puVar5);
    puVar5 = *(undefined8 **)(this + 0x130);
  }
  *(undefined8 **)(this + 0x138) = puVar5;
  if (puVar5 != (undefined8 *)0x0) {
    *(undefined8 **)(this + 0x138) = puVar5;
    operator_delete(puVar5);
  }
  pVVar6 = *(Value **)(this + 0x118);
  if (pVVar6 != (Value *)0x0) {
    pVVar4 = *(Value **)(this + 0x120);
    pVVar1 = pVVar6;
    if (pVVar4 != pVVar6) {
      do {
        pVVar4 = pVVar4 + -0x10;
        cocos2d::Value::~Value(pVVar4);
      } while (pVVar6 != pVVar4);
      pVVar1 = *(Value **)(this + 0x118);
    }
    *(Value **)(this + 0x120) = pVVar6;
    operator_delete(pVVar1);
  }
  puVar5 = *(undefined8 **)(this + 0x100);
  puVar8 = *(undefined8 **)(this + 0x108);
  if (puVar5 != puVar8) {
    do {
      cocos2d::Ref::release((Ref *)*puVar5);
      puVar5 = puVar5 + 1;
    } while (puVar8 != puVar5);
    puVar5 = *(undefined8 **)(this + 0x100);
  }
  *(undefined8 **)(this + 0x108) = puVar5;
  if (puVar5 != (undefined8 *)0x0) {
    *(undefined8 **)(this + 0x108) = puVar5;
    operator_delete(puVar5);
  }
  pVVar6 = *(Value **)(this + 0xe8);
  if (pVVar6 != (Value *)0x0) {
    pVVar4 = *(Value **)(this + 0xf0);
    pVVar1 = pVVar6;
    if (pVVar4 != pVVar6) {
      do {
        pVVar4 = pVVar4 + -0x10;
        cocos2d::Value::~Value(pVVar4);
      } while (pVVar6 != pVVar4);
      pVVar1 = *(Value **)(this + 0xe8);
    }
    *(Value **)(this + 0xf0) = pVVar6;
    operator_delete(pVVar1);
  }
  std::__ndk1::
  __hash_table<std::__ndk1::__hash_value_type<cocos2d::Node*,std::__ndk1::unordered_map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Ref*,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,cocos2d::Ref*>>>>,std::__ndk1::__unordered_map_hasher<cocos2d::Node*,std::__ndk1::__hash_value_type<cocos2d::Node*,std::__ndk1::unordered_map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Ref*,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,s...ic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,cocos2d::Ref*>>>>>>
  ::~__hash_table((__hash_table<std::__ndk1::__hash_value_type<cocos2d::Node*,std::__ndk1::unordered_map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Ref*,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,cocos2d::Ref*>>>>,std::__ndk1::__unordered_map_hasher<cocos2d::Node*,std::__ndk1::__hash_value_type<cocos2d::Node*,std::__ndk1::unordered_map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Ref*,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,s___ic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,cocos2d::Ref*>>>>>>
                   *)(this + 0x98));
  FUN_00ceae20(this + 0x70);
  puVar5 = *(void **)(this + 0x58);
  while (puVar5 != (void *)0x0) {
    pvVar2 = (void *)*puVar5;
    puVar8 = (void *)puVar5[5];
    while (puVar8 != (void *)0x0) {
      pvVar9 = (void *)*puVar8;
      cocos2d::
      Map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocosbuilder::CCBSequenceProperty*>
      ::~Map((Map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocosbuilder::CCBSequenceProperty*>
              *)(puVar8 + 3));
      operator_delete(puVar8);
      puVar8 = pvVar9;
    }
    pvVar9 = (void *)puVar5[3];
    puVar5[3] = 0;
    if (pvVar9 != (void *)0x0) {
      operator_delete(pvVar9);
    }
    operator_delete(puVar5);
    puVar5 = pvVar2;
  }
  pvVar2 = *(void **)(this + 0x48);
  *(undefined8 *)(this + 0x48) = 0;
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
  }
  puVar5 = *(undefined8 **)(this + 0x30);
  puVar8 = *(undefined8 **)(this + 0x38);
  if (puVar5 != puVar8) {
    do {
      cocos2d::Ref::release((Ref *)*puVar5);
      puVar5 = puVar5 + 1;
    } while (puVar8 != puVar5);
    puVar5 = *(undefined8 **)(this + 0x30);
  }
  *(undefined8 **)(this + 0x38) = puVar5;
  if (puVar5 != (undefined8 *)0x0) {
    *(undefined8 **)(this + 0x38) = puVar5;
    operator_delete(puVar5);
  }
  cocos2d::Ref::~Ref((Ref *)this);
  return;
}

