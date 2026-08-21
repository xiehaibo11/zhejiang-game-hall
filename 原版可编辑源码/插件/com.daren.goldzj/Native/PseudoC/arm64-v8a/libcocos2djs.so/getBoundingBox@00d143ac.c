
/* spine::SkeletonRenderer::getBoundingBox() const */

void spine::SkeletonRenderer::getBoundingBox(void)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  int iVar4;
  long in_x0;
  long lVar5;
  long *plVar6;
  RTTI *pRVar7;
  ulong uVar8;
  RegionAttachment *this;
  Bone *pBVar9;
  VertexAttachment *this_00;
  Rect *in_x8;
  float fVar10;
  float fVar11;
  float fVar12;
  Slot *this_01;
  float *pfVar13;
  ulong uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  if (((DAT_01d3dd00 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_01d3dd00), iVar4 != 0)) {
    DAT_01d3dc60 = &PTR__IOBuffer_01c8e178;
    DAT_01d3dc90 = 0;
    DAT_01d3dcc0 = (long *)0x0;
    DAT_01d3dcf0 = (long *)0x0;
    DAT_01d3dc78 = 0;
    DAT_01d3dc80 = 0;
    DAT_01d3dc70 = 0x400;
    DAT_01d3dc88 = 0;
    DAT_01d3dc68 = operator_new__(0x400);
    __cxa_atexit(cocos2d::middleware::IOBuffer::~IOBuffer,&DAT_01d3dc60,&PTR_LOOP_01d1b000);
    __cxa_guard_release(&DAT_01d3dd00);
  }
  lVar5 = Skeleton::getSlots(*(Skeleton **)(in_x0 + 0x30));
  if (*(long *)(lVar5 + 8) != 0) {
    fVar16 = 3.4028235e+38;
    fVar18 = -3.4028235e+38;
    uVar14 = 0;
    fVar15 = -3.4028235e+38;
    fVar10 = 3.4028235e+38;
    fVar11 = -3.4028235e+38;
    fVar12 = 3.4028235e+38;
    fVar17 = fVar16;
    fVar19 = fVar18;
    do {
      lVar5 = Skeleton::getSlots(*(Skeleton **)(in_x0 + 0x30));
      this_01 = *(Slot **)(*(long *)(lVar5 + 0x18) + uVar14 * 8);
      lVar5 = Slot::getAttachment(this_01);
      if (lVar5 != 0) {
        plVar6 = (long *)Slot::getAttachment(this_01);
        pRVar7 = (RTTI *)(**(code **)(*plVar6 + 0x10))();
        uVar8 = RTTI::isExactly(pRVar7,(RTTI *)RegionAttachment::rtti);
        this = (RegionAttachment *)Slot::getAttachment(this_01);
        if ((uVar8 & 1) == 0) {
          pRVar7 = (RTTI *)(**(code **)(*(long *)this + 0x10))(this);
          uVar8 = RTTI::isExactly(pRVar7,(RTTI *)MeshAttachment::rtti);
          if ((uVar8 & 1) != 0) {
            this_00 = (VertexAttachment *)Slot::getAttachment(this_01);
            lVar5 = VertexAttachment::getWorldVerticesLength(this_00);
            uVar8 = DAT_01d3dc78 + lVar5 * 4;
            if ((DAT_01d3dc90 != 0) && (DAT_01d3dc90 < uVar8)) {
              if (DAT_01d3dcc0 != (long *)0x0) {
                (**(code **)(*DAT_01d3dcc0 + 0x30))();
              }
              DAT_01d3dc78 = 0;
            }
            if ((DAT_01d3dc70 < uVar8) &&
               ((*(code *)DAT_01d3dc60[2])
                          (&DAT_01d3dc60,(long)((float)(int)((float)uVar8 * 0.0009765625) * 1024.0),
                           0), DAT_01d3dcf0 != (long *)0x0)) {
              (**(code **)(*DAT_01d3dcf0 + 0x30))();
            }
            pfVar13 = (float *)((long)DAT_01d3dc68 + DAT_01d3dc78);
            uVar8 = VertexAttachment::getWorldVerticesLength(this_00);
            VertexAttachment::computeWorldVertices(this_00,this_01,0,uVar8,pfVar13,0,2);
            iVar4 = VertexAttachment::getWorldVerticesLength(this_00);
            if (0 < iVar4) goto LAB_00d14664;
          }
        }
        else {
          uVar8 = DAT_01d3dc78 + 0x20;
          if ((DAT_01d3dc90 != 0) && (DAT_01d3dc90 < uVar8)) {
            if (DAT_01d3dcc0 != (long *)0x0) {
              (**(code **)(*DAT_01d3dcc0 + 0x30))();
            }
            DAT_01d3dc78 = 0;
          }
          if ((DAT_01d3dc70 < uVar8) &&
             ((*(code *)DAT_01d3dc60[2])
                        (&DAT_01d3dc60,(long)((float)(int)((float)uVar8 * 0.0009765625) * 1024.0),0)
             , DAT_01d3dcf0 != (long *)0x0)) {
            (**(code **)(*DAT_01d3dcf0 + 0x30))();
          }
          pfVar13 = (float *)((long)DAT_01d3dc68 + DAT_01d3dc78);
          pBVar9 = (Bone *)Slot::getBone(this_01);
          RegionAttachment::computeWorldVertices(this,pBVar9,pfVar13,0,2);
          iVar4 = 8;
LAB_00d14664:
          lVar5 = 0;
          do {
            fVar1 = pfVar13[lVar5];
            fVar2 = (pfVar13 + lVar5)[1];
            lVar5 = lVar5 + 2;
            bVar3 = fVar17 <= fVar1;
            fVar17 = fVar1;
            if (bVar3) {
              fVar17 = fVar12;
            }
            bVar3 = fVar16 <= fVar2;
            fVar16 = fVar2;
            if (bVar3) {
              fVar16 = fVar10;
            }
            bVar3 = fVar1 <= fVar19;
            fVar19 = fVar1;
            if (bVar3) {
              fVar19 = fVar11;
            }
            bVar3 = fVar2 <= fVar18;
            fVar18 = fVar2;
            if (bVar3) {
              fVar18 = fVar15;
            }
            fVar15 = fVar18;
            fVar11 = fVar19;
            fVar12 = fVar17;
            fVar10 = fVar16;
          } while (lVar5 < iVar4);
        }
      }
      uVar14 = uVar14 + 1;
      lVar5 = Skeleton::getSlots(*(Skeleton **)(in_x0 + 0x30));
    } while (uVar14 < *(ulong *)(lVar5 + 8));
    if (fVar17 != 3.4028235e+38) goto LAB_00d146f4;
  }
  fVar18 = 0.0;
  fVar19 = 0.0;
  fVar16 = 0.0;
  fVar17 = 0.0;
LAB_00d146f4:
  cocos2d::Rect::Rect(in_x8,fVar17,fVar16,fVar19 - fVar17,fVar18 - fVar16);
  return;
}

