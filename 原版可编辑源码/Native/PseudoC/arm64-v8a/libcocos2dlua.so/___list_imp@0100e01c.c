
/* std::__ndk1::__list_imp<cocos2d::PhysicsJoint*, std::__ndk1::allocator<cocos2d::PhysicsJoint*>
   >::~__list_imp() */

void __thiscall
std::__ndk1::__list_imp<cocos2d::PhysicsJoint*,std::__ndk1::allocator<cocos2d::PhysicsJoint*>>::
~__list_imp(__list_imp<cocos2d::PhysicsJoint*,std::__ndk1::allocator<cocos2d::PhysicsJoint*>> *this)

{
  long lVar1;
  __list_imp<cocos2d::PhysicsJoint*,std::__ndk1::allocator<cocos2d::PhysicsJoint*>> *p_Var2;
  long lVar3;
  __list_imp<cocos2d::PhysicsJoint*,std::__ndk1::allocator<cocos2d::PhysicsJoint*>> *p_Var4;
  
  if (*(long *)(this + 0x10) != 0) {
    lVar1 = *(long *)this;
    p_Var2 = *(__list_imp<cocos2d::PhysicsJoint*,std::__ndk1::allocator<cocos2d::PhysicsJoint*>> **)
              (this + 8);
    lVar3 = *(long *)p_Var2;
    *(undefined8 *)(lVar3 + 8) = *(undefined8 *)(lVar1 + 8);
    **(long **)(lVar1 + 8) = lVar3;
    *(undefined8 *)(this + 0x10) = 0;
    while (p_Var2 != this) {
      p_Var4 = *(__list_imp<cocos2d::PhysicsJoint*,std::__ndk1::allocator<cocos2d::PhysicsJoint*>>
                 **)(p_Var2 + 8);
      operator_delete(p_Var2);
      p_Var2 = p_Var4;
    }
  }
  return;
}

