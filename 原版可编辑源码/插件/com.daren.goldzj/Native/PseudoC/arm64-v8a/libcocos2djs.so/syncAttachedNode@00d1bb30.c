
/* spine::RealTimeAttachUtil::syncAttachedNode(cocos2d::renderer::NodeProxy*, spine::Skeleton*) */

void __thiscall
spine::RealTimeAttachUtil::syncAttachedNode
          (RealTimeAttachUtil *this,NodeProxy *param_1,Skeleton *param_2)

{
  int iVar1;
  Ref *this_00;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  vector<cocos2d::renderer::NodeProxy*,std::__ndk1::allocator<cocos2d::renderer::NodeProxy*>>
  *this_01;
  NodeProxy *this_02;
  Bone *this_03;
  ulong uVar5;
  ulong uVar6;
  
  if (((DAT_01d3dd80 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_01d3dd80), iVar1 != 0)) {
    cocos2d::Mat4::Mat4((Mat4 *)&DAT_01d3dd40);
    __cxa_atexit(cocos2d::Mat4::~Mat4,&DAT_01d3dd40,&PTR_LOOP_01d1b000);
    __cxa_guard_release(&DAT_01d3dd80);
  }
  if (((DAT_01d3ddc8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_01d3ddc8), iVar1 != 0)) {
    cocos2d::Mat4::Mat4((Mat4 *)&DAT_01d3dd88);
    __cxa_atexit(cocos2d::Mat4::~Mat4,&DAT_01d3dd88,&PTR_LOOP_01d1b000);
    __cxa_guard_release(&DAT_01d3ddc8);
  }
  if (((param_1 != (NodeProxy *)0x0) && (param_2 != (Skeleton *)0x0)) &&
     (this_00 = *(Ref **)(this + 0x28), this_00 != (Ref *)0x0)) {
    if (*(long *)(this_00 + 0x88) == 0) {
      cocos2d::Ref::release(this_00);
      *(undefined8 *)(this + 0x28) = 0;
    }
    else {
      cocos2d::renderer::NodeProxy::updateWorldMatrix
                ((NodeProxy *)this_00,*(Mat4 **)(param_1 + 0x98));
      lVar2 = Skeleton::getBones(param_2);
      this_01 = (vector<cocos2d::renderer::NodeProxy*,std::__ndk1::allocator<cocos2d::renderer::NodeProxy*>>
                 *)(this + 0x10);
      plVar3 = *(long **)this_01;
      uVar4 = *(long *)(this + 0x18) - (long)plVar3;
      if ((int)(uVar4 >> 3) < 1) {
        iVar1 = -1;
      }
      else {
        uVar5 = 0;
        uVar6 = 0xffffffff;
        uVar4 = (uVar4 >> 3 & 0xffffffff) - 1;
        this_02 = (NodeProxy *)*plVar3;
        if (this_02 != (NodeProxy *)0x0) goto LAB_00d1bbfc;
LAB_00d1bc84:
        iVar1 = (int)uVar6;
        if (uVar4 != uVar5) {
          while( true ) {
            uVar5 = uVar5 + 1;
            this_02 = *(NodeProxy **)(*(long *)this_01 + uVar5 * 8);
            if (this_02 == (NodeProxy *)0x0) break;
LAB_00d1bbfc:
            iVar1 = (int)uVar6;
            if (*(long *)(this_02 + 0x88) != 0) {
              this_03 = *(Bone **)(*(long *)(lVar2 + 0x18) + uVar5 * 8);
              if (this_03 != (Bone *)0x0) {
                this_02[0x40] = (NodeProxy)0x1;
                DAT_01d3dd40 = Bone::getA(this_03);
                DAT_01d3dd44 = Bone::getC(this_03);
                DAT_01d3dd50 = Bone::getB(this_03);
                DAT_01d3dd54 = Bone::getD(this_03);
                DAT_01d3dd70 = Bone::getWorldX(this_03);
                DAT_01d3dd74 = Bone::getWorldY(this_03);
                cocos2d::Mat4::multiply
                          (*(Mat4 **)(*(long *)(this + 0x28) + 0x98),(Mat4 *)&DAT_01d3dd40,
                           (Mat4 *)&DAT_01d3dd88);
                cocos2d::renderer::NodeProxy::updateWorldMatrix(this_02,(Mat4 *)&DAT_01d3dd88);
                uVar6 = uVar5 & 0xffffffff;
                break;
              }
              this_02[0x40] = (NodeProxy)0x0;
            }
            cocos2d::Ref::release((Ref *)this_02);
            *(undefined8 *)(*(long *)this_01 + uVar5 * 8) = 0;
            if (uVar4 == uVar5) goto LAB_00d1bcac;
          }
          goto LAB_00d1bc84;
        }
LAB_00d1bcac:
        plVar3 = *(long **)(this + 0x10);
        uVar4 = *(long *)(this + 0x18) - (long)plVar3;
      }
      uVar5 = (ulong)(iVar1 + 1);
      uVar4 = (long)uVar4 >> 3;
      if (uVar4 < uVar5) {
        std::__ndk1::
        vector<cocos2d::renderer::NodeProxy*,std::__ndk1::allocator<cocos2d::renderer::NodeProxy*>>
        ::__append(this_01,uVar5 - uVar4);
        return;
      }
      if (uVar4 != uVar5) {
        *(long **)(this + 0x18) = plVar3 + uVar5;
      }
    }
  }
  return;
}

