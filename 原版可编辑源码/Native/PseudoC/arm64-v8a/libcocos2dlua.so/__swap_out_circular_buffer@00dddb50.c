
/* std::__ndk1::vector<cocos2d::Vector<cocos2d::Node*>,
   std::__ndk1::allocator<cocos2d::Vector<cocos2d::Node*> >
   >::__swap_out_circular_buffer(std::__ndk1::__split_buffer<cocos2d::Vector<cocos2d::Node*>,
   std::__ndk1::allocator<cocos2d::Vector<cocos2d::Node*> >&>&) */

void __thiscall
std::__ndk1::
vector<cocos2d::Vector<cocos2d::Node*>,std::__ndk1::allocator<cocos2d::Vector<cocos2d::Node*>>>::
__swap_out_circular_buffer
          (vector<cocos2d::Vector<cocos2d::Node*>,std::__ndk1::allocator<cocos2d::Vector<cocos2d::Node*>>>
           *this,__split_buffer *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = *(long *)this;
  lVar6 = *(long *)(this + 8);
  if (lVar6 == lVar5) {
    lVar4 = *(long *)(param_1 + 8);
  }
  else {
    lVar4 = *(long *)(param_1 + 8);
    do {
      *(undefined8 *)(lVar4 + -0x18) = 0;
      *(undefined8 *)(lVar4 + -0x10) = 0;
      *(undefined8 *)(lVar4 + -8) = 0;
      if (lVar4 != lVar6) {
        vector<cocos2d::Node*,std::__ndk1::allocator<cocos2d::Node*>>::assign<cocos2d::Node**>
                  ((vector<cocos2d::Node*,std::__ndk1::allocator<cocos2d::Node*>> *)(lVar4 + -0x18),
                   *(Node ***)(lVar6 + -0x18),*(Node ***)(lVar6 + -0x10));
        puVar2 = *(undefined8 **)(lVar4 + -0x10);
        for (puVar1 = *(undefined8 **)(lVar4 + -0x18); puVar1 != puVar2; puVar1 = puVar1 + 1) {
          cocos2d::Ref::retain((Ref *)*puVar1);
        }
      }
      lVar6 = lVar6 + -0x18;
      lVar4 = *(long *)(param_1 + 8) + -0x18;
      *(long *)(param_1 + 8) = lVar4;
    } while (lVar6 != lVar5);
    lVar5 = *(long *)this;
  }
  *(long *)this = lVar4;
  *(long *)(param_1 + 8) = lVar5;
  uVar3 = *(undefined8 *)(this + 8);
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = uVar3;
  uVar3 = *(undefined8 *)(this + 0x10);
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = uVar3;
  *(undefined8 *)param_1 = *(undefined8 *)(param_1 + 8);
  return;
}

