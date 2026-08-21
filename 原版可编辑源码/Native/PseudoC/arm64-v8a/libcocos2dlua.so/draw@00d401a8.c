
/* cocos2d::Sprite3D::draw(cocos2d::Renderer*, cocos2d::Mat4 const&, unsigned int) */

void __thiscall cocos2d::Sprite3D::draw(Sprite3D *this,Renderer *param_1,Mat4 *param_2,uint param_3)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  byte bVar4;
  long lVar5;
  Camera *this_00;
  AABB *pAVar6;
  ulong uVar7;
  Color3B *pCVar8;
  Sprite3D SVar9;
  Mesh *this_01;
  undefined8 *puVar10;
  undefined8 *puVar11;
  float fVar12;
  long *local_90;
  long *local_88;
  float local_78;
  float fStack_74;
  float local_70;
  float local_6c;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  if ((*(long *)(this + 0x180) == *(long *)(this + 0x178)) &&
     (lVar5 = Camera::getVisitingCamera(), lVar5 != 0)) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00d40250 with catch @ 00d401fc
                        */
    this_00 = (Camera *)Camera::getVisitingCamera();
    pAVar6 = (AABB *)getAABB(this);
    uVar7 = Camera::isVisibleInFrustum(this_00,pAVar6);
    if ((uVar7 & 1) == 0) goto LAB_00d40360;
  }
  if (*(Skeleton3D **)(this + 0x300) != (Skeleton3D *)0x0) {
    Skeleton3D::updateBoneMatrix(*(Skeleton3D **)(this + 0x300));
  }
  pCVar8 = (Color3B *)(**(code **)(*(long *)this + 0x4b8))(this);
  Color4F::Color4F((Color4F *)&local_78,pCVar8,1.0);
                    /* try { // try from 00d40248 to 00e4024f has its CatchHandler @ 00d403c4 */
                    /* try { // try from 00d40250 to 00e403c7 has its CatchHandler @ 00d401fc */
  bVar4 = (**(code **)(*(long *)this + 0x488))(this);
  local_6c = (float)bVar4 / 255.0;
  lVar5 = Director::getInstance();
  if ((*(long *)(lVar5 + 0x158) != 0) && (this[0x3ca] != (Sprite3D)0x0)) {
    std::__ndk1::vector<cocos2d::BaseLight*,std::__ndk1::allocator<cocos2d::BaseLight*>>::vector
              ((vector<cocos2d::BaseLight*,std::__ndk1::allocator<cocos2d::BaseLight*>> *)&local_90,
               (vector *)(*(long *)(lVar5 + 0x158) + 0x330));
    for (plVar1 = local_90; plVar1 != local_88; plVar1 = plVar1 + 1) {
      if ((*(char *)(*plVar1 + 0x300) != '\0') &&
         ((*(uint *)(this + 0x3c4) & *(uint *)(*plVar1 + 0x2fc)) != 0)) {
        SVar9 = (Sprite3D)0x1;
        goto LAB_00d402d8;
      }
    }
    SVar9 = (Sprite3D)0x0;
LAB_00d402d8:
    if (SVar9 != this[0x3c8]) {
      genMaterial(this,(bool)SVar9);
    }
    if (local_90 != (long *)0x0) {
      operator_delete(local_90);
    }
  }
  puVar11 = *(undefined8 **)(this + 0x358);
  for (puVar10 = *(undefined8 **)(this + 0x350); puVar10 != puVar11; puVar10 = puVar10 + 1) {
    this_01 = (Mesh *)*puVar10;
    fVar12 = *(float *)(this + 0x170);
    uVar2 = *(uint *)(this + 0x3c4);
    Vec4::Vec4((Vec4 *)&local_90,local_78,fStack_74,local_70,local_6c);
    Mesh::draw(this_01,param_1,fVar12,param_2,param_3,uVar2,(Vec4 *)&local_90,(bool)this[0x3c9]);
    Vec4::~Vec4((Vec4 *)&local_90);
  }
LAB_00d40360:
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

