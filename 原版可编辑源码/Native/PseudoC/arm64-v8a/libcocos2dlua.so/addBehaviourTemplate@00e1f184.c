
/* cocos2d::PUParticleSystem3D::addBehaviourTemplate(cocos2d::PUBehaviour*) */

void __thiscall
cocos2d::PUParticleSystem3D::addBehaviourTemplate(PUParticleSystem3D *this,PUBehaviour *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  PUBehaviour *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  puVar4 = *(undefined8 **)(this + 0x408);
                    /* try { // try from 00e1f1b4 to 00f1f1bb has its CatchHandler @ 00e1f670 */
  puVar3 = *(undefined8 **)(this + 0x410);
  local_40 = param_1;
                    /* try { // try from 00e1f1c4 to 00f1f1df has its CatchHandler @ 00e1f674 */
  if ((puVar4 != puVar3) && ((PUBehaviour *)*puVar4 != param_1)) {
    do {
      if (puVar3 + -1 == puVar4) goto LAB_00e1f1fc;
      puVar1 = puVar4 + 1;
      puVar4 = puVar4 + 1;
    } while ((PUBehaviour *)*puVar1 != param_1);
  }
  if (puVar4 == puVar3) {
LAB_00e1f1fc:
    Ref::retain((Ref *)param_1);
    *(PUParticleSystem3D **)(param_1 + 0x28) = this;
    puVar4 = *(undefined8 **)(this + 0x410);
                    /* try { // try from 00e1f210 to 00f1f217 has its CatchHandler @ 00e1f650 */
    if (puVar4 == *(undefined8 **)(this + 0x418)) {
                    /* try { // try from 00e1f228 to 00f1f22f has its CatchHandler @ 00e1f660 */
      std::__ndk1::vector<cocos2d::PUBehaviour*,std::__ndk1::allocator<cocos2d::PUBehaviour*>>::
      __push_back_slow_path<cocos2d::PUBehaviour*const&>
                ((vector<cocos2d::PUBehaviour*,std::__ndk1::allocator<cocos2d::PUBehaviour*>> *)
                 (this + 0x408),&local_40);
    }
    else {
      *puVar4 = param_1;
      *(undefined8 **)(this + 0x410) = puVar4 + 1;
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

