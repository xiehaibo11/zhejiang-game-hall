
/* cocos2d::BatchSprite3D::draw(cocos2d::Renderer*, cocos2d::Mat4 const&, unsigned int) */

void cocos2d::BatchSprite3D::draw(Renderer *param_1,Mat4 *param_2,uint param_3)

{
  char cVar1;
  ushort uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  Color3B *pCVar6;
  Vec4 *this;
  undefined1 uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined4 uVar13;
  BatchMesh *pBVar14;
  undefined4 in_s1;
  undefined4 in_s2;
  Vec4 aVStack_b0 [16];
  Vec4 aVStack_a0 [16];
  Vec4 aVStack_90 [16];
  float local_80;
  float fStack_7c;
  long *local_78;
  long local_68;
  
  this = aVStack_b0;
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  if (*(float *)(param_1 + 0x300) == 0.0) goto LAB_00d17914;
  if (param_1[0x2fa] != (Renderer)0x0) {
    plVar5 = (long *)Camera::getVisitingCamera();
    uVar2 = *(ushort *)(param_1 + 0x222);
    uVar13 = (**(code **)(*plVar5 + 0x100))();
    if (((*(uint *)((long)plVar5 + 0x42c) & (uint)uVar2) != 0) &&
       (lVar8 = *(long *)(param_1 + 0x338), lVar8 != 0)) {
      *(undefined4 *)(lVar8 + 0x294) = uVar13;
      *(undefined4 *)(lVar8 + 0x298) = in_s1;
      *(undefined4 *)(lVar8 + 0x29c) = in_s2;
    }
    param_1[0x2fa] = (Renderer)0x0;
    *(ushort *)(*(long *)(param_1 + 0x338) + 0x28a) = uVar2;
  }
  if (param_1[0x2f9] != (Renderer)0x0) {
    lVar8 = Director::getInstance();
    std::__ndk1::vector<cocos2d::BaseLight*,std::__ndk1::allocator<cocos2d::BaseLight*>>::vector
              ((vector<cocos2d::BaseLight*,std::__ndk1::allocator<cocos2d::BaseLight*>> *)&local_80,
               (vector *)(*(long *)(lVar8 + 0x158) + 0x330));
    plVar4 = (long *)CONCAT44(fStack_7c,local_80);
    for (plVar5 = plVar4; plVar5 != local_78; plVar5 = plVar5 + 1) {
      if ((*(char *)(*plVar5 + 0x300) != '\0') &&
         ((*(uint *)(*(long *)(param_1 + 0x338) + 0x28c) & *(uint *)(*plVar5 + 0x2fc)) != 0)) {
        uVar7 = 1;
        goto LAB_00d177bc;
      }
    }
    uVar7 = 0;
LAB_00d177bc:
    *(undefined1 *)(*(long *)(param_1 + 0x338) + 0x288) = uVar7;
    param_1[0x2f9] = (Renderer)0x0;
    if (plVar4 != (long *)0x0) {
      local_78 = plVar4;
      operator_delete(plVar4);
    }
  }
  pCVar6 = (Color3B *)(**(code **)(*(long *)param_1 + 0x4b8))(param_1);
  Color4F::Color4F((Color4F *)&local_80,pCVar6,1.0);
  Vec4::Vec4(aVStack_90,local_80,fStack_7c,local_78._0_4_,*(float *)(param_1 + 0x300));
  if ((param_1[0x2f8] != (Renderer)0x0) || (*(float *)(param_1 + 0x300) < 1.0)) {
    cVar1 = *(char *)(*(long *)(param_1 + 0x338) + 0x283);
    pBVar14 = (BatchMesh *)(**(code **)(*(long *)param_1 + 0x530))(param_1);
    lVar8 = *(long *)(param_1 + 0x340);
    lVar11 = *(long *)(param_1 + 0x348);
    if ((lVar8 != lVar11) && (cVar1 != '\0')) {
      lVar10 = *(long *)(param_1 + 0x358);
      lVar12 = *(long *)(param_1 + 0x360);
      if (lVar10 != lVar12) {
        uVar9 = *(undefined8 *)(param_1 + 0x338);
        Vec4::Vec4(aVStack_a0,aVStack_90);
        BatchMesh::onMeshDraw
                  (pBVar14,uVar9,param_2,param_3,lVar8,(int)lVar11 - (int)lVar8 & 0xfffffffc,lVar10,
                   (int)lVar12 - (int)lVar10 & 0xfffffffe,aVStack_a0);
        this = aVStack_a0;
        goto LAB_00d17908;
      }
    }
  }
  else {
    lVar8 = *(long *)(param_1 + 0x340);
    lVar11 = *(long *)(param_1 + 0x348);
    if (lVar8 != lVar11) {
      lVar10 = *(long *)(param_1 + 0x358);
      lVar12 = *(long *)(param_1 + 0x360);
      if (lVar10 != lVar12) {
        pBVar14 = *(BatchMesh **)(param_1 + 0x338);
        Vec4::Vec4(aVStack_b0,aVStack_90);
        BatchMesh::onMeshDraw
                  (pBVar14,param_2,param_3,lVar8,(int)lVar11 - (int)lVar8 & 0xfffffffc,lVar10,
                   (int)lVar12 - (int)lVar10 & 0xfffffffe,aVStack_b0);
LAB_00d17908:
        Vec4::~Vec4(this);
      }
    }
  }
  Vec4::~Vec4(aVStack_90);
LAB_00d17914:
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

