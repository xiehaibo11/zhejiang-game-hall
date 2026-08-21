
/* dragonBones::AttachUtilBase::associateAttachedNode(dragonBones::Armature*,
   cocos2d::renderer::NodeProxy*) */

void __thiscall
dragonBones::AttachUtilBase::associateAttachedNode
          (AttachUtilBase *this,Armature *param_1,NodeProxy *param_2)

{
  long lVar1;
  int iVar2;
  Ref *this_00;
  undefined8 *puVar3;
  long lVar4;
  code *pcVar5;
  ulong uVar6;
  byte local_a0;
  undefined7 uStack_9f;
  undefined1 uStack_98;
  undefined7 uStack_97;
  undefined1 uStack_90;
  undefined2 uStack_8f;
  undefined1 uStack_8d;
  undefined4 uStack_8c;
  Ref *local_88;
  undefined **local_80;
  Ref **ppRStack_78;
  AttachUtilBase *local_70;
  undefined ***pppuStack_68;
  undefined ***local_60;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (((DAT_01d3e780 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_01d3e780), iVar2 != 0)) {
    DAT_01d3e770 = (__tree_node *)0x0;
    DAT_01d3e778 = 0;
    DAT_01d3e768 = &DAT_01d3e770;
    __cxa_atexit(std::__ndk1::
                 map<dragonBones::Bone*,cocos2d::renderer::NodeProxy*,std::__ndk1::less<dragonBones::Bone*>,std::__ndk1::allocator<std::__ndk1::pair<dragonBones::Bone*const,cocos2d::renderer::NodeProxy*>>>
                 ::~map,&DAT_01d3e768,&PTR_LOOP_01d1b000);
    __cxa_guard_release(&DAT_01d3e780);
  }
  puVar3 = *(undefined8 **)(this + 0x40);
  lVar4 = *(long *)(this + 0x48);
  *(undefined8 *)(this + 0x18) = *(undefined8 *)(this + 0x10);
  *(undefined8 *)(this + 0x30) = *(undefined8 *)(this + 0x28);
  if (lVar4 - (long)puVar3 != 0) {
    uVar6 = 0;
    this_00 = (Ref *)*puVar3;
    while( true ) {
      if (this_00 != (Ref *)0x0) {
        cocos2d::Ref::release(this_00);
      }
      uVar6 = uVar6 + 1;
      if ((ulong)(lVar4 - (long)puVar3 >> 3) <= uVar6) break;
      this_00 = *(Ref **)(*(long *)(this + 0x40) + uVar6 * 8);
    }
    puVar3 = *(undefined8 **)(this + 0x40);
  }
  *(undefined8 **)(this + 0x48) = puVar3;
  if (*(Ref **)(this + 0x58) != (Ref *)0x0) {
    cocos2d::Ref::release(*(Ref **)(this + 0x58));
    *(undefined8 *)(this + 0x58) = 0;
  }
  if (param_2 == (NodeProxy *)0x0) goto LAB_00d57970;
  uStack_8c = 0;
  local_a0 = 0x24;
  uStack_8f = 0x4545;
  uStack_97 = 0x545f45444f4e5f;
  uStack_90 = 0x52;
  uStack_9f = 0x45484341545441;
  uStack_98 = 0x44;
  uStack_8d = 0;
  local_88 = (Ref *)cocos2d::renderer::NodeProxy::getChildByName(param_2,&local_a0);
  if ((local_a0 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_8c,CONCAT13(uStack_8d,CONCAT21(uStack_8f,uStack_90))));
  }
  if ((local_88 == (Ref *)0x0) || (*(long *)(local_88 + 0x88) == 0)) goto LAB_00d57970;
  *(Ref **)(this + 0x58) = local_88;
  cocos2d::Ref::retain(local_88);
  lVar4 = *(long *)(this + 0x58);
  local_80 = &PTR_FUN_01c694f0;
  *(undefined1 *)(lVar4 + 0x41) = 0;
  ppRStack_78 = (Ref **)cocos2d::renderer::NodeProxy::visit;
  local_60 = &local_80;
  FUN_00923dac(&local_80,lVar4 + 0x10);
  if (&local_80 == local_60) {
    pcVar5 = (code *)(*local_60)[4];
LAB_00d578f8:
    (*pcVar5)();
  }
  else if (local_60 != (undefined ***)0x0) {
    pcVar5 = (code *)(*local_60)[5];
    goto LAB_00d578f8;
  }
  std::__ndk1::
  __tree<std::__ndk1::__value_type<dragonBones::Bone*,cocos2d::renderer::NodeProxy*>,std::__ndk1::__map_value_compare<dragonBones::Bone*,std::__ndk1::__value_type<dragonBones::Bone*,cocos2d::renderer::NodeProxy*>,std::__ndk1::less<dragonBones::Bone*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<dragonBones::Bone*,cocos2d::renderer::NodeProxy*>>>
  ::destroy((__tree<std::__ndk1::__value_type<dragonBones::Bone*,cocos2d::renderer::NodeProxy*>,std::__ndk1::__map_value_compare<dragonBones::Bone*,std::__ndk1::__value_type<dragonBones::Bone*,cocos2d::renderer::NodeProxy*>,std::__ndk1::less<dragonBones::Bone*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<dragonBones::Bone*,cocos2d::renderer::NodeProxy*>>>
             *)&DAT_01d3e768,DAT_01d3e770);
  DAT_01d3e768 = &DAT_01d3e770;
  DAT_01d3e778 = 0;
  ppRStack_78 = &local_88;
  DAT_01d3e770 = (__tree_node *)0x0;
  local_80 = &PTR_FUN_01c91c30;
  local_70 = this;
  pppuStack_68 = &local_80;
  local_60 = &local_80;
  FUN_00d57f6c((ulong)&local_80 | 8,param_1);
  if (&local_80 == local_60) {
    pcVar5 = (code *)(*local_60)[4];
  }
  else {
    if (local_60 == (undefined ***)0x0) goto LAB_00d57970;
    pcVar5 = (code *)(*local_60)[5];
  }
  (*pcVar5)();
LAB_00d57970:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

