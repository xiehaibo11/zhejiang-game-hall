
/* cocos2d::GLProgramState::~GLProgramState() */

void __thiscall cocos2d::GLProgramState::~GLProgramState(GLProgramState *this)

{
  __hash_table<std::__ndk1::__hash_value_type<int,cocos2d::UniformValue>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::UniformValue>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::UniformValue>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::UniformValue>>>
  *this_00;
  undefined8 *puVar1;
  long lVar2;
  void *pvVar3;
  long *plVar4;
  code *pcVar5;
  long lVar6;
  long *plVar7;
  
                    /* try { // try from 00fd7c00 to 010d7c97 has its CatchHandler @ 00fd7ba4 */
  *(undefined ***)this = &PTR__GLProgramState_01723ed8;
  lVar2 = Director::getInstance();
  EventDispatcher::removeEventListener
            (*(EventDispatcher **)(lVar2 + 0xb0),*(EventListener **)(this + 0x108));
  this_00 = (__hash_table<std::__ndk1::__hash_value_type<int,cocos2d::UniformValue>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::UniformValue>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::UniformValue>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::UniformValue>>>
             *)(this + 0x50);
  if (*(long *)(this + 0x68) != 0) {
    std::__ndk1::
    __hash_table<std::__ndk1::__hash_value_type<int,cocos2d::UniformValue>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::UniformValue>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::UniformValue>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::UniformValue>>>
    ::__deallocate_node(this_00,*(__hash_node_base **)(this + 0x60));
    lVar2 = *(long *)(this + 0x58);
    *(undefined8 *)(this + 0x60) = 0;
    if (lVar2 != 0) {
      lVar6 = 0;
      do {
        *(undefined8 *)(*(long *)this_00 + lVar6 * 8) = 0;
        lVar6 = lVar6 + 1;
                    /* catch() { ... } // from try @ 00fd7bfc with catch @ 00fd7c6c */
      } while (lVar2 != lVar6);
    }
    *(undefined8 *)(this + 0x68) = 0;
  }
                    /* catch() { ... } // from try @ 00fd7bd4 with catch @ 00fd7c7c */
  if (*(long *)(this + 0x90) != 0) {
    puVar1 = *(void **)(this + 0x88);
    while (puVar1 != (void *)0x0) {
      pvVar3 = (void *)*puVar1;
      if ((*(char *)(puVar1 + 6) != '\0') && (plVar7 = (long *)puVar1[7], plVar7 != (long *)0x0)) {
        plVar4 = (long *)plVar7[4];
        if (plVar7 == plVar4) {
          pcVar5 = *(code **)(*plVar4 + 0x20);
LAB_00fd7cd4:
          (*pcVar5)();
        }
        else if (plVar4 != (long *)0x0) {
          pcVar5 = *(code **)(*plVar4 + 0x28);
          goto LAB_00fd7cd4;
        }
        operator_delete(plVar7);
      }
      if ((*(byte *)(puVar1 + 2) & 1) != 0) {
        operator_delete((void *)puVar1[4]);
      }
      operator_delete(puVar1);
      puVar1 = pvVar3;
    }
    lVar2 = *(long *)(this + 0x80);
    *(undefined8 *)(this + 0x88) = 0;
    if (lVar2 != 0) {
      lVar6 = 0;
      do {
        *(undefined8 *)(*(long *)(this + 0x78) + lVar6 * 8) = 0;
        lVar6 = lVar6 + 1;
      } while (lVar2 != lVar6);
    }
    *(undefined8 *)(this + 0x90) = 0;
  }
  if (*(Ref **)(this + 0xd0) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0xd0));
  }
  puVar1 = *(void **)(this + 0xf0);
  while (puVar1 != (void *)0x0) {
    pvVar3 = (void *)*puVar1;
    if ((*(byte *)(puVar1 + 5) & 1) != 0) {
      operator_delete((void *)puVar1[7]);
    }
    if ((*(byte *)(puVar1 + 2) & 1) != 0) {
      operator_delete((void *)puVar1[4]);
    }
    operator_delete(puVar1);
    puVar1 = pvVar3;
  }
  pvVar3 = *(void **)(this + 0xe0);
  *(undefined8 *)(this + 0xe0) = 0;
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3);
  }
  puVar1 = *(void **)(this + 0xb0);
  while (puVar1 != (void *)0x0) {
    pvVar3 = (void *)*puVar1;
    if ((*(byte *)(puVar1 + 2) & 1) != 0) {
      operator_delete((void *)puVar1[4]);
    }
    operator_delete(puVar1);
    puVar1 = pvVar3;
  }
  pvVar3 = *(void **)(this + 0xa0);
  *(undefined8 *)(this + 0xa0) = 0;
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3);
  }
  puVar1 = *(void **)(this + 0x88);
  do {
    if (puVar1 == (void *)0x0) {
      pvVar3 = *(void **)(this + 0x78);
      *(undefined8 *)(this + 0x78) = 0;
      if (pvVar3 != (void *)0x0) {
        operator_delete(pvVar3);
      }
      std::__ndk1::
      __hash_table<std::__ndk1::__hash_value_type<int,cocos2d::UniformValue>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::UniformValue>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::UniformValue>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::UniformValue>>>
      ::__deallocate_node(this_00,*(__hash_node_base **)(this + 0x60));
      pvVar3 = *(void **)(this + 0x50);
      *(undefined8 *)(this + 0x50) = 0;
      if (pvVar3 != (void *)0x0) {
                    /* catch() { ... } // from try @ 00fd7ec8 with catch @ 00fd7e5c */
        operator_delete(pvVar3);
      }
      puVar1 = *(void **)(this + 0x38);
      while (puVar1 != (void *)0x0) {
        pvVar3 = (void *)*puVar1;
        if ((*(byte *)(puVar1 + 2) & 1) != 0) {
          operator_delete((void *)puVar1[4]);
        }
        operator_delete(puVar1);
        puVar1 = pvVar3;
      }
      pvVar3 = *(void **)(this + 0x28);
      *(undefined8 *)(this + 0x28) = 0;
                    /* try { // try from 00fd7e9c to 010d7ea3 has its CatchHandler @ 00fd7f50 */
      if (pvVar3 != (void *)0x0) {
        operator_delete(pvVar3);
      }
      Ref::~Ref((Ref *)this);
      return;
    }
    pvVar3 = (void *)*puVar1;
    if ((*(char *)(puVar1 + 6) != '\0') && (plVar7 = (long *)puVar1[7], plVar7 != (long *)0x0)) {
      plVar4 = (long *)plVar7[4];
      if (plVar7 == plVar4) {
        pcVar5 = *(code **)(*plVar4 + 0x20);
LAB_00fd7e14:
        (*pcVar5)();
      }
      else if (plVar4 != (long *)0x0) {
        pcVar5 = *(code **)(*plVar4 + 0x28);
        goto LAB_00fd7e14;
      }
      operator_delete(plVar7);
    }
    if ((*(byte *)(puVar1 + 2) & 1) != 0) {
      operator_delete((void *)puVar1[4]);
    }
    operator_delete(puVar1);
    puVar1 = pvVar3;
  } while( true );
}

