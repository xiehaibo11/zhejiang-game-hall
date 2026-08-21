
/* cocos2d::middleware::TypedArrayPool::clearPool() */

void __thiscall cocos2d::middleware::TypedArrayPool::clearPool(TypedArrayPool *this)

{
  bool bVar1;
  __tree<std::__ndk1::__value_type<unsigned_long,std::__ndk1::vector<se::Object*,std::__ndk1::allocator<se::Object*>>*>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,std::__ndk1::vector<se::Object*,std::__ndk1::allocator<se::Object*>>*>,std::__ndk1::less<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long,std::__ndk1::vector<se::Object*,std::__ndk1::allocator<se::Object*>>*>>>
  *p_Var2;
  TypedArrayPool *pTVar3;
  long lVar4;
  __tree<std::__ndk1::__value_type<unsigned_long,std::__ndk1::vector<se::Object*,std::__ndk1::allocator<se::Object*>>*>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,std::__ndk1::vector<se::Object*,std::__ndk1::allocator<se::Object*>>*>,std::__ndk1::less<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long,std::__ndk1::vector<se::Object*,std::__ndk1::allocator<se::Object*>>*>>>
  *this_00;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  TypedArrayPool *pTVar8;
  __tree<std::__ndk1::__value_type<unsigned_long,std::__ndk1::vector<se::Object*,std::__ndk1::allocator<se::Object*>>*>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,std::__ndk1::vector<se::Object*,std::__ndk1::allocator<se::Object*>>*>,std::__ndk1::less<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long,std::__ndk1::vector<se::Object*,std::__ndk1::allocator<se::Object*>>*>>>
  *p_Var9;
  
  pTVar8 = *(TypedArrayPool **)this;
  while (this + 8 != pTVar8) {
    this_00 = *(__tree<std::__ndk1::__value_type<unsigned_long,std::__ndk1::vector<se::Object*,std::__ndk1::allocator<se::Object*>>*>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,std::__ndk1::vector<se::Object*,std::__ndk1::allocator<se::Object*>>*>,std::__ndk1::less<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long,std::__ndk1::vector<se::Object*,std::__ndk1::allocator<se::Object*>>*>>>
                **)(pTVar8 + 0x28);
    p_Var9 = *(__tree<std::__ndk1::__value_type<unsigned_long,std::__ndk1::vector<se::Object*,std::__ndk1::allocator<se::Object*>>*>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,std::__ndk1::vector<se::Object*,std::__ndk1::allocator<se::Object*>>*>,std::__ndk1::less<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long,std::__ndk1::vector<se::Object*,std::__ndk1::allocator<se::Object*>>*>>>
               **)this_00;
    while (this_00 + 8 != p_Var9) {
      plVar5 = *(long **)(p_Var9 + 0x28);
      puVar7 = (undefined8 *)*plVar5;
      if (puVar7 != (undefined8 *)plVar5[1]) {
        do {
          se::Object::unroot((Object *)*puVar7);
          puVar6 = puVar7 + 1;
          se::RefCounter::decRef((RefCounter *)*puVar7);
          puVar7 = puVar6;
        } while (puVar6 != (undefined8 *)plVar5[1]);
        puVar7 = (undefined8 *)*plVar5;
      }
      if (puVar7 != (undefined8 *)0x0) {
        plVar5[1] = (long)puVar7;
        operator_delete(puVar7);
      }
      operator_delete(plVar5);
      p_Var2 = *(__tree<std::__ndk1::__value_type<unsigned_long,std::__ndk1::vector<se::Object*,std::__ndk1::allocator<se::Object*>>*>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,std::__ndk1::vector<se::Object*,std::__ndk1::allocator<se::Object*>>*>,std::__ndk1::less<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long,std::__ndk1::vector<se::Object*,std::__ndk1::allocator<se::Object*>>*>>>
                 **)(p_Var9 + 8);
      if (*(__tree<std::__ndk1::__value_type<unsigned_long,std::__ndk1::vector<se::Object*,std::__ndk1::allocator<se::Object*>>*>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,std::__ndk1::vector<se::Object*,std::__ndk1::allocator<se::Object*>>*>,std::__ndk1::less<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long,std::__ndk1::vector<se::Object*,std::__ndk1::allocator<se::Object*>>*>>>
            **)(p_Var9 + 8) ==
          (__tree<std::__ndk1::__value_type<unsigned_long,std::__ndk1::vector<se::Object*,std::__ndk1::allocator<se::Object*>>*>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,std::__ndk1::vector<se::Object*,std::__ndk1::allocator<se::Object*>>*>,std::__ndk1::less<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long,std::__ndk1::vector<se::Object*,std::__ndk1::allocator<se::Object*>>*>>>
           *)0x0) {
        p_Var2 = p_Var9 + 0x10;
        bVar1 = *(__tree<std::__ndk1::__value_type<unsigned_long,std::__ndk1::vector<se::Object*,std::__ndk1::allocator<se::Object*>>*>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,std::__ndk1::vector<se::Object*,std::__ndk1::allocator<se::Object*>>*>,std::__ndk1::less<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long,std::__ndk1::vector<se::Object*,std::__ndk1::allocator<se::Object*>>*>>>
                  **)*(__tree<std::__ndk1::__value_type<unsigned_long,std::__ndk1::vector<se::Object*,std::__ndk1::allocator<se::Object*>>*>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,std::__ndk1::vector<se::Object*,std::__ndk1::allocator<se::Object*>>*>,std::__ndk1::less<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long,std::__ndk1::vector<se::Object*,std::__ndk1::allocator<se::Object*>>*>>>
                       **)p_Var2 != p_Var9;
        p_Var9 = *(__tree<std::__ndk1::__value_type<unsigned_long,std::__ndk1::vector<se::Object*,std::__ndk1::allocator<se::Object*>>*>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,std::__ndk1::vector<se::Object*,std::__ndk1::allocator<se::Object*>>*>,std::__ndk1::less<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long,std::__ndk1::vector<se::Object*,std::__ndk1::allocator<se::Object*>>*>>>
                   **)p_Var2;
        if (bVar1) {
          do {
            lVar4 = *(long *)p_Var2;
            p_Var2 = (__tree<std::__ndk1::__value_type<unsigned_long,std::__ndk1::vector<se::Object*,std::__ndk1::allocator<se::Object*>>*>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,std::__ndk1::vector<se::Object*,std::__ndk1::allocator<se::Object*>>*>,std::__ndk1::less<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long,std::__ndk1::vector<se::Object*,std::__ndk1::allocator<se::Object*>>*>>>
                      *)(lVar4 + 0x10);
            p_Var9 = *(__tree<std::__ndk1::__value_type<unsigned_long,std::__ndk1::vector<se::Object*,std::__ndk1::allocator<se::Object*>>*>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,std::__ndk1::vector<se::Object*,std::__ndk1::allocator<se::Object*>>*>,std::__ndk1::less<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long,std::__ndk1::vector<se::Object*,std::__ndk1::allocator<se::Object*>>*>>>
                       **)p_Var2;
          } while (*(long *)p_Var9 != lVar4);
        }
      }
      else {
        do {
          p_Var9 = p_Var2;
          p_Var2 = *(__tree<std::__ndk1::__value_type<unsigned_long,std::__ndk1::vector<se::Object*,std::__ndk1::allocator<se::Object*>>*>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,std::__ndk1::vector<se::Object*,std::__ndk1::allocator<se::Object*>>*>,std::__ndk1::less<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long,std::__ndk1::vector<se::Object*,std::__ndk1::allocator<se::Object*>>*>>>
                     **)p_Var9;
        } while (*(__tree<std::__ndk1::__value_type<unsigned_long,std::__ndk1::vector<se::Object*,std::__ndk1::allocator<se::Object*>>*>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,std::__ndk1::vector<se::Object*,std::__ndk1::allocator<se::Object*>>*>,std::__ndk1::less<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long,std::__ndk1::vector<se::Object*,std::__ndk1::allocator<se::Object*>>*>>>
                   **)p_Var9 !=
                 (__tree<std::__ndk1::__value_type<unsigned_long,std::__ndk1::vector<se::Object*,std::__ndk1::allocator<se::Object*>>*>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,std::__ndk1::vector<se::Object*,std::__ndk1::allocator<se::Object*>>*>,std::__ndk1::less<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long,std::__ndk1::vector<se::Object*,std::__ndk1::allocator<se::Object*>>*>>>
                  *)0x0);
      }
    }
    if (this_00 !=
        (__tree<std::__ndk1::__value_type<unsigned_long,std::__ndk1::vector<se::Object*,std::__ndk1::allocator<se::Object*>>*>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,std::__ndk1::vector<se::Object*,std::__ndk1::allocator<se::Object*>>*>,std::__ndk1::less<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long,std::__ndk1::vector<se::Object*,std::__ndk1::allocator<se::Object*>>*>>>
         *)0x0) {
      std::__ndk1::
      __tree<std::__ndk1::__value_type<unsigned_long,std::__ndk1::vector<se::Object*,std::__ndk1::allocator<se::Object*>>*>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,std::__ndk1::vector<se::Object*,std::__ndk1::allocator<se::Object*>>*>,std::__ndk1::less<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long,std::__ndk1::vector<se::Object*,std::__ndk1::allocator<se::Object*>>*>>>
      ::destroy(this_00,*(__tree_node **)(this_00 + 8));
      operator_delete(this_00);
    }
    pTVar3 = *(TypedArrayPool **)(pTVar8 + 8);
    if (*(TypedArrayPool **)(pTVar8 + 8) == (TypedArrayPool *)0x0) {
      pTVar3 = pTVar8 + 0x10;
      bVar1 = *(TypedArrayPool **)*(TypedArrayPool **)pTVar3 != pTVar8;
      pTVar8 = *(TypedArrayPool **)pTVar3;
      if (bVar1) {
        do {
          lVar4 = *(long *)pTVar3;
          pTVar3 = (TypedArrayPool *)(lVar4 + 0x10);
          pTVar8 = *(TypedArrayPool **)pTVar3;
        } while (*(long *)pTVar8 != lVar4);
      }
    }
    else {
      do {
        pTVar8 = pTVar3;
        pTVar3 = *(TypedArrayPool **)pTVar8;
      } while (*(TypedArrayPool **)pTVar8 != (TypedArrayPool *)0x0);
    }
  }
  std::__ndk1::
  __tree<std::__ndk1::__value_type<se::Object::TypedArrayType,std::__ndk1::map<unsigned_long,std::__ndk1::vector<se::Object*,std::__ndk1::allocator<se::Object*>>*,std::__ndk1::less<unsigned_long>,std::__ndk1::allocator<std::__ndk1::pair<unsigned_long_const,std::__ndk1::vector<se::Object*,std::__ndk1::allocator<se::Object*>>*>>>*>,std::__ndk1::__map_value_compare<se::Object::TypedArrayType,std::__ndk1::__value_type<se::Object::TypedArrayType,std::__ndk1::map<unsigned_long,std::__ndk1::vector<se::Object*,std::__ndk1::allocator<se::Object*>>*,std::__ndk1::less<unsigned_long>,std::__ndk1::allocator<std::__ndk1::pair<unsigned_long_const,std::__ndk1::vector<se::Object*,std::__ndk1::allocator<se::Object*>>*>>>*>,std::__ndk1::less<se::Object::TypedArrayType>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<se::Object::TypedArrayType,std::__ndk1::map<unsigned_long,std::__ndk1::vector<se::Object*,std::__ndk1::allocator<se::Object*>>*,std::__ndk1::less<unsigned_long>,std::__ndk1::allocator<std::__ndk1::pair<unsigned_long_const,std::__ndk1::vector<se::Object*,std::__ndk1::allocator<se::Object*>>*>>>*>>>
  ::destroy((__tree<std::__ndk1::__value_type<se::Object::TypedArrayType,std::__ndk1::map<unsigned_long,std::__ndk1::vector<se::Object*,std::__ndk1::allocator<se::Object*>>*,std::__ndk1::less<unsigned_long>,std::__ndk1::allocator<std::__ndk1::pair<unsigned_long_const,std::__ndk1::vector<se::Object*,std::__ndk1::allocator<se::Object*>>*>>>*>,std::__ndk1::__map_value_compare<se::Object::TypedArrayType,std::__ndk1::__value_type<se::Object::TypedArrayType,std::__ndk1::map<unsigned_long,std::__ndk1::vector<se::Object*,std::__ndk1::allocator<se::Object*>>*,std::__ndk1::less<unsigned_long>,std::__ndk1::allocator<std::__ndk1::pair<unsigned_long_const,std::__ndk1::vector<se::Object*,std::__ndk1::allocator<se::Object*>>*>>>*>,std::__ndk1::less<se::Object::TypedArrayType>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<se::Object::TypedArrayType,std::__ndk1::map<unsigned_long,std::__ndk1::vector<se::Object*,std::__ndk1::allocator<se::Object*>>*,std::__ndk1::less<unsigned_long>,std::__ndk1::allocator<std::__ndk1::pair<unsigned_long_const,std::__ndk1::vector<se::Object*,std::__ndk1::allocator<se::Object*>>*>>>*>>>
             *)this,*(__tree_node **)(this + 8));
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(TypedArrayPool **)this = this + 8;
  return;
}

