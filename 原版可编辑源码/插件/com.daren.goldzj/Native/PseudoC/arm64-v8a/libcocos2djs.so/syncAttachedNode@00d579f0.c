
/* dragonBones::RealTimeAttachUtil::syncAttachedNode(cocos2d::renderer::NodeProxy*) */

void __thiscall
dragonBones::RealTimeAttachUtil::syncAttachedNode(RealTimeAttachUtil *this,NodeProxy *param_1)

{
  int iVar1;
  Ref *pRVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  vector<cocos2d::renderer::NodeProxy*,std::__ndk1::allocator<cocos2d::renderer::NodeProxy*>>
  *this_00;
  ulong uVar6;
  ulong uVar7;
  
  if (((DAT_01d3e7c8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_01d3e7c8), iVar1 != 0)) {
    cocos2d::Mat4::Mat4((Mat4 *)&DAT_01d3e788);
    __cxa_atexit(cocos2d::Mat4::~Mat4,&DAT_01d3e788,&PTR_LOOP_01d1b000);
    __cxa_guard_release(&DAT_01d3e7c8);
  }
  if (((DAT_01d3e810 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_01d3e810), iVar1 != 0)) {
    cocos2d::Mat4::Mat4((Mat4 *)&DAT_01d3e7d0);
    __cxa_atexit(cocos2d::Mat4::~Mat4,&DAT_01d3e7d0,&PTR_LOOP_01d1b000);
    __cxa_guard_release(&DAT_01d3e810);
  }
  if ((param_1 != (NodeProxy *)0x0) && (pRVar2 = *(Ref **)(this + 0x58), pRVar2 != (Ref *)0x0)) {
    if (*(long *)(pRVar2 + 0x88) == 0) {
      cocos2d::Ref::release(pRVar2);
      *(undefined8 *)(this + 0x58) = 0;
    }
    else {
      cocos2d::renderer::NodeProxy::updateWorldMatrix
                ((NodeProxy *)pRVar2,*(Mat4 **)(param_1 + 0x98));
      this_00 = (vector<cocos2d::renderer::NodeProxy*,std::__ndk1::allocator<cocos2d::renderer::NodeProxy*>>
                 *)(this + 0x40);
      plVar3 = *(long **)this_00;
      uVar5 = *(long *)(this + 0x48) - (long)plVar3;
      if ((int)(uVar5 >> 3) < 1) {
        iVar1 = -1;
      }
      else {
        uVar6 = 0;
        uVar7 = 0xffffffff;
        uVar5 = (uVar5 >> 3 & 0xffffffff) - 1;
        pRVar2 = (Ref *)*plVar3;
        if (pRVar2 != (Ref *)0x0) goto LAB_00d57aac;
LAB_00d57ae8:
        iVar1 = (int)uVar7;
        if (uVar5 != uVar6) {
          while( true ) {
            uVar6 = uVar6 + 1;
            pRVar2 = *(Ref **)(*(long *)this_00 + uVar6 * 8);
            if (pRVar2 == (Ref *)0x0) break;
LAB_00d57aac:
            iVar1 = (int)uVar7;
            if (*(long *)(pRVar2 + 0x88) == 0) {
              cocos2d::Ref::release(pRVar2);
              *(undefined8 *)(*(long *)this_00 + uVar6 * 8) = 0;
            }
            else {
              lVar4 = *(long *)(*(long *)(this + 0x10) + uVar6 * 8);
              if ((lVar4 == 0) || (*(char *)(lVar4 + 0xc) != '\0')) {
                pRVar2[0x40] = (Ref)0x0;
                cocos2d::Ref::release(pRVar2);
                *(undefined8 *)(*(long *)(this + 0x40) + uVar6 * 8) = 0;
                *(undefined8 *)(*(long *)(this + 0x10) + uVar6 * 8) = 0;
                break;
              }
              pRVar2[0x40] = (Ref)0x1;
              DAT_01d3e788 = *(undefined8 *)(lVar4 + 0x10);
              DAT_01d3e798 = CONCAT44(-(float)((ulong)*(undefined8 *)(lVar4 + 0x18) >> 0x20),
                                      -(float)*(undefined8 *)(lVar4 + 0x18));
              DAT_01d3e7b8 = *(undefined4 *)(lVar4 + 0x20);
              DAT_01d3e7bc = *(undefined4 *)(lVar4 + 0x24);
              cocos2d::Mat4::multiply
                        (*(Mat4 **)(*(long *)(*(long *)(this + 0x28) + uVar6 * 8) + 0x98),
                         (Mat4 *)&DAT_01d3e788,(Mat4 *)&DAT_01d3e7d0);
              cocos2d::renderer::NodeProxy::updateWorldMatrix
                        ((NodeProxy *)pRVar2,(Mat4 *)&DAT_01d3e7d0);
              uVar7 = uVar6 & 0xffffffff;
              iVar1 = (int)uVar6;
            }
            if (uVar5 == uVar6) goto LAB_00d57b68;
          }
          goto LAB_00d57ae8;
        }
LAB_00d57b68:
        plVar3 = *(long **)(this + 0x40);
        uVar5 = *(long *)(this + 0x48) - (long)plVar3;
      }
      uVar6 = (ulong)(iVar1 + 1);
      uVar5 = (long)uVar5 >> 3;
      if (uVar5 < uVar6) {
        std::__ndk1::
        vector<cocos2d::renderer::NodeProxy*,std::__ndk1::allocator<cocos2d::renderer::NodeProxy*>>
        ::__append(this_00,uVar6 - uVar5);
        return;
      }
      if (uVar5 != uVar6) {
        *(long **)(this + 0x48) = plVar3 + uVar6;
      }
    }
  }
  return;
}

