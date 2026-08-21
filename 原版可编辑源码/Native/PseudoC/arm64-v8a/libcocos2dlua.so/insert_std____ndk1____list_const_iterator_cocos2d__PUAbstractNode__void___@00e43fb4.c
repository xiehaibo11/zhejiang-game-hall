
/* std::__ndk1::__list_iterator<cocos2d::PUAbstractNode*, void*>
   std::__ndk1::list<cocos2d::PUAbstractNode*, std::__ndk1::allocator<cocos2d::PUAbstractNode*>
   >::insert<std::__ndk1::__list_const_iterator<cocos2d::PUAbstractNode*, void*>
   >(std::__ndk1::__list_const_iterator<cocos2d::PUAbstractNode*, void*>,
   std::__ndk1::__list_const_iterator<cocos2d::PUAbstractNode*, void*>,
   std::__ndk1::__list_const_iterator<cocos2d::PUAbstractNode*, void*>,
   std::__ndk1::enable_if<__is_input_iterator<std::__ndk1::__list_const_iterator<cocos2d::PUAbstractNode*,
   void*> >::value, void>::type*) */

long * std::__ndk1::list<cocos2d::PUAbstractNode*,std::__ndk1::allocator<cocos2d::PUAbstractNode*>>
       ::insert<std::__ndk1::__list_const_iterator<cocos2d::PUAbstractNode*,void*>>
                 (long param_1,long *param_2,long param_3,long param_4)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
                    /* catch() { ... } // from try @ 00e43f00 with catch @ 00e43fc0 */
  plVar2 = param_2;
  if (param_3 != param_4) {
    plVar2 = operator_new(0x18);
    *plVar2 = 0;
    lVar4 = 1;
    plVar2[2] = *(long *)(param_3 + 0x10);
    plVar1 = plVar2;
    for (lVar5 = *(long *)(param_3 + 8); lVar5 != param_4; lVar5 = *(long *)(lVar5 + 8)) {
      plVar3 = operator_new(0x18);
      lVar4 = lVar4 + 1;
      plVar3[2] = *(long *)(lVar5 + 0x10);
      plVar1[1] = (long)plVar3;
      *plVar3 = (long)plVar1;
      plVar1 = plVar3;
    }
    lVar5 = *param_2;
    *(long **)(lVar5 + 8) = plVar2;
    *plVar2 = lVar5;
    *param_2 = (long)plVar1;
    plVar1[1] = (long)param_2;
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + lVar4;
  }
  return plVar2;
}

