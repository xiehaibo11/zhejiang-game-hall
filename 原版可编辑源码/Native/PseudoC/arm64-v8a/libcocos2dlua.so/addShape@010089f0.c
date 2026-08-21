
/* cocos2d::PhysicsShape::addShape(cpShape*) */

void __thiscall cocos2d::PhysicsShape::addShape(PhysicsShape *this,cpShape *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  cpShape *local_40;
  long local_38;
  
                    /* catch() { ... } // from try @ 01008970 with catch @ 010089f4 */
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_40 = param_1;
  if (param_1 != (cpShape *)0x0) {
                    /* catch() { ... } // from try @ 01008a78 with catch @ 01008a18 */
    cpShapeSetUserData(param_1,this);
    cpShapeSetFilter(param_1,(long)*(int *)(this + 0x88),0xffffffffffffffff);
    puVar1 = *(undefined8 **)(this + 0x38);
    if (puVar1 == *(undefined8 **)(this + 0x40)) {
      std::__ndk1::vector<cpShape*,std::__ndk1::allocator<cpShape*>>::
      __push_back_slow_path<cpShape*const&>
                ((vector<cpShape*,std::__ndk1::allocator<cpShape*>> *)(this + 0x30),&local_40);
    }
    else {
      *puVar1 = param_1;
                    /* try { // try from 01008a4c to 01108a53 has its CatchHandler @ 01008ae4 */
      *(undefined8 **)(this + 0x38) = puVar1 + 1;
    }
  }
                    /* try { // try from 01008a68 to 01108a77 has its CatchHandler @ 01008aec */
  if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* try { // try from 01008a78 to 01108b0f has its CatchHandler @ 01008a18 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

