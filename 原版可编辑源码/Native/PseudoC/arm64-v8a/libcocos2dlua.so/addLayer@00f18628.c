
/* cocos2d::LayerMultiplex::addLayer(cocos2d::Layer*) */

void __thiscall cocos2d::LayerMultiplex::addLayer(LayerMultiplex *this,Layer *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  Layer *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  puVar2 = *(undefined8 **)(this + 0x330);
  local_30 = param_1;
  if (puVar2 == *(undefined8 **)(this + 0x338)) {
                    /* try { // try from 00f18664 to 0101875b has its CatchHandler @ 00f18664
                       catch() { ... } // from try @ 00f18664 with catch @ 00f18664
                       catch() { ... } // from try @ 00f1876c with catch @ 00f18664 */
    std::__ndk1::vector<cocos2d::Layer*,std::__ndk1::allocator<cocos2d::Layer*>>::
    __push_back_slow_path<cocos2d::Layer*const&>
              ((vector<cocos2d::Layer*,std::__ndk1::allocator<cocos2d::Layer*>> *)(this + 0x328),
               &local_30);
  }
  else {
    *puVar2 = param_1;
    *(undefined8 **)(this + 0x330) = puVar2 + 1;
  }
  Ref::retain((Ref *)local_30);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

