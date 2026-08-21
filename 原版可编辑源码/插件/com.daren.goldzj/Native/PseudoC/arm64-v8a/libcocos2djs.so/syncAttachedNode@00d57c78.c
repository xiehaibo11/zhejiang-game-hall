
/* dragonBones::CacheModeAttachUtil::syncAttachedNode(cocos2d::renderer::NodeProxy*,
   dragonBones::ArmatureCache::FrameData*) */

void __thiscall
dragonBones::CacheModeAttachUtil::syncAttachedNode
          (CacheModeAttachUtil *this,NodeProxy *param_1,FrameData *param_2)

{
  int iVar1;
  Ref *this_00;
  ulong uVar2;
  Mat4 *pMVar3;
  long *plVar4;
  ulong uVar5;
  vector<cocos2d::renderer::NodeProxy*,std::__ndk1::allocator<cocos2d::renderer::NodeProxy*>>
  *this_01;
  NodeProxy *this_02;
  ulong uVar6;
  ulong uVar7;
  
  if (((DAT_01d3e858 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_01d3e858), iVar1 != 0)) {
    cocos2d::Mat4::Mat4((Mat4 *)&DAT_01d3e818);
    __cxa_atexit(cocos2d::Mat4::~Mat4,&DAT_01d3e818,&PTR_LOOP_01d1b000);
    __cxa_guard_release(&DAT_01d3e858);
  }
  if ((param_1 != (NodeProxy *)0x0) && (this_00 = *(Ref **)(this + 0x58), this_00 != (Ref *)0x0)) {
    if (*(long *)(this_00 + 0x88) == 0) {
      cocos2d::Ref::release(this_00);
      *(undefined8 *)(this + 0x58) = 0;
    }
    else {
      cocos2d::renderer::NodeProxy::updateWorldMatrix
                ((NodeProxy *)this_00,*(Mat4 **)(param_1 + 0x98));
      uVar2 = ArmatureCache::FrameData::getBoneCount(param_2);
      this_01 = (vector<cocos2d::renderer::NodeProxy*,std::__ndk1::allocator<cocos2d::renderer::NodeProxy*>>
                 *)(this + 0x40);
      plVar4 = *(long **)this_01;
      uVar5 = *(long *)(this + 0x48) - (long)plVar4;
      if ((int)(uVar5 >> 3) < 1) {
        iVar1 = -1;
      }
      else {
        uVar6 = 0;
        uVar7 = 0xffffffff;
        uVar5 = (uVar5 >> 3 & 0xffffffff) - 1;
        this_02 = (NodeProxy *)*plVar4;
        if (this_02 != (NodeProxy *)0x0) goto LAB_00d57d2c;
LAB_00d57d80:
        iVar1 = (int)uVar7;
        if (uVar5 != uVar6) {
          while( true ) {
            uVar6 = uVar6 + 1;
            this_02 = *(NodeProxy **)(*(long *)this_01 + uVar6 * 8);
            if (this_02 == (NodeProxy *)0x0) break;
LAB_00d57d2c:
            if (*(long *)(this_02 + 0x88) == 0) {
              cocos2d::Ref::release((Ref *)this_02);
              *(undefined8 *)(*(long *)this_01 + uVar6 * 8) = 0;
              break;
            }
            if (uVar6 < uVar2) {
              pMVar3 = *(Mat4 **)(*(long *)param_2 + uVar6 * 8);
              this_02[0x40] = (NodeProxy)0x1;
              cocos2d::Mat4::multiply
                        (*(Mat4 **)(*(long *)(*(long *)(this + 0x28) + uVar6 * 8) + 0x98),pMVar3,
                         (Mat4 *)&DAT_01d3e818);
              cocos2d::renderer::NodeProxy::updateWorldMatrix(this_02,(Mat4 *)&DAT_01d3e818);
            }
            else {
              this_02[0x40] = (NodeProxy)0x0;
            }
            uVar7 = uVar6 & 0xffffffff;
            iVar1 = (int)uVar6;
            if (uVar5 == uVar6) goto LAB_00d57d9c;
          }
          goto LAB_00d57d80;
        }
LAB_00d57d9c:
        plVar4 = *(long **)(this + 0x40);
        uVar5 = *(long *)(this + 0x48) - (long)plVar4;
      }
      uVar2 = (ulong)(iVar1 + 1);
      uVar5 = (long)uVar5 >> 3;
      if (uVar5 < uVar2) {
        std::__ndk1::
        vector<cocos2d::renderer::NodeProxy*,std::__ndk1::allocator<cocos2d::renderer::NodeProxy*>>
        ::__append(this_01,uVar2 - uVar5);
        return;
      }
      if (uVar5 != uVar2) {
        *(long **)(this + 0x48) = plVar4 + uVar2;
      }
    }
  }
  return;
}

