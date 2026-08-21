
/* spine::SkeletonRenderer::render(float) */

void spine::SkeletonRenderer::render(float param_1)

{
  Vec3 *pVVar1;
  ushort *puVar2;
  ushort *puVar3;
  char cVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  undefined1 uVar8;
  short sVar16;
  long lVar17;
  float **ppfVar18;
  bool bVar19;
  byte bVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  bool bVar23;
  int iVar24;
  int iVar25;
  long in_x0;
  float *pfVar26;
  MiddlewareManager *pMVar27;
  long lVar28;
  undefined1 *puVar29;
  SlotData *pSVar30;
  RTTI *pRVar31;
  RegionAttachment *this;
  long lVar32;
  Bone *pBVar33;
  MeshAttachment *this_00;
  ClippingAttachment *pCVar34;
  ulong uVar35;
  SkeletonClipping *this_01;
  BoneData *pBVar36;
  RealTimeAttachUtil *this_02;
  ulong uVar37;
  ulong uVar38;
  float *pfVar39;
  Texture2D *pTVar40;
  long lVar41;
  undefined4 *puVar42;
  ulong uVar43;
  undefined4 *puVar44;
  undefined8 *puVar45;
  ulong uVar46;
  float *pfVar47;
  uint uVar48;
  IOTypedArray *pIVar49;
  EffectVariant *this_03;
  uint uVar50;
  EffectVariant *pEVar51;
  int iVar52;
  long lVar53;
  undefined4 *puVar54;
  undefined8 uVar55;
  long lVar56;
  Mat4 *pMVar57;
  Slot *this_04;
  void *pvVar58;
  Texture2D *pTVar59;
  long *plVar60;
  long lVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  undefined4 uVar68;
  undefined4 in_register_00005004;
  ulong extraout_d0;
  ulong uVar69;
  ulong extraout_d0_00;
  undefined8 uVar70;
  undefined8 uVar71;
  undefined8 uVar72;
  double dVar73;
  uint local_244;
  ushort *local_240;
  int local_238;
  ushort *local_230;
  int local_228;
  float *local_218;
  float *local_210;
  ulong local_208;
  undefined **local_200;
  Mat4 *local_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  int local_1d4;
  long local_1d0;
  int local_1c4;
  long local_1c0;
  Texture2D *local_1b8;
  Texture2D *local_1b0;
  uint local_1a4;
  undefined8 *local_1a0;
  undefined8 *local_198;
  long *local_190;
  uint local_184;
  ulong local_180;
  int local_174;
  ulong local_170;
  ulong local_168;
  float *local_160;
  float *local_158;
  undefined8 *local_150;
  long local_148;
  long local_140;
  long local_138;
  undefined **local_130;
  float local_128;
  float fStack_124;
  float fStack_120;
  undefined **local_118;
  float local_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  undefined **local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined **local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  float fStack_c8;
  float fStack_c4;
  float local_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  long local_b0;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  
  uVar69 = CONCAT44(in_register_00005004,param_1);
  lVar17 = tpidr_el0;
  local_b0 = *(long *)(lVar17 + 0x28);
  if (((*(NodeProxy **)(in_x0 + 0x98) == (NodeProxy *)0x0) || (*(long *)(in_x0 + 0xa0) == 0)) ||
     (pfVar26 = (float *)cocos2d::renderer::NodeProxy::getAssembler(*(NodeProxy **)(in_x0 + 0x98)),
     uVar69 = extraout_d0, pfVar26 == (float *)0x0)) goto LAB_00d14360;
  uVar69 = (**(code **)(*(long *)pfVar26 + 0x20))();
  *(byte *)(pfVar26 + 10) = *(byte *)(in_x0 + 0x45) ^ 1;
  if (*(long *)(in_x0 + 0x30) == 0) goto LAB_00d14360;
  if (cocos2d::middleware::MiddlewareManager::_instance == (MiddlewareManager *)0x0) {
    pMVar27 = operator_new(0x50);
    uVar69 = cocos2d::middleware::MiddlewareManager::MiddlewareManager(pMVar27);
    cocos2d::middleware::MiddlewareManager::_instance = pMVar27;
  }
  pMVar27 = cocos2d::middleware::MiddlewareManager::_instance;
  if (*cocos2d::middleware::MiddlewareManager::_instance == (MiddlewareManager)0x0)
  goto LAB_00d14360;
  fVar62 = (float)NEON_ucvtf((uint)*(byte *)(*(long *)(in_x0 + 0x98) + 0x43));
  *(float *)(in_x0 + 0x58) = fVar62 / 255.0;
  lVar28 = Skeleton::getColor(*(Skeleton **)(in_x0 + 0x30));
  uVar69 = (ulong)(uint)*(float *)(lVar28 + 0x14);
  if (*(float *)(lVar28 + 0x14) == 0.0) goto LAB_00d14360;
  cocos2d::Color4F::Color4F((Color4F *)&local_c0);
  cocos2d::Color4F::Color4F((Color4F *)&local_d0);
  if (*(int *)(in_x0 + 0x88) == -1) {
    uVar50 = (uint)(*(int *)(in_x0 + 0x8c) == -1);
  }
  else {
    uVar50 = 0;
  }
  iVar24 = 5;
  if (*(char *)(in_x0 + 0x68) != '\0') {
    iVar24 = 6;
  }
  lVar28 = cocos2d::middleware::MiddlewareManager::getMeshBuffer(pMVar27,iVar24);
  pMVar57 = *(Mat4 **)(*(long *)(in_x0 + 0x98) + 0x98);
  if (((*(char *)(in_x0 + 0x47) != '\0') || (*(char *)(in_x0 + 0x48) != '\0')) ||
     (*(char *)(in_x0 + 0x46) != '\0')) {
    pIVar49 = *(IOTypedArray **)(in_x0 + 0x90);
    if (pIVar49 == (IOTypedArray *)0x0) {
      pIVar49 = operator_new(0xc0);
      cocos2d::middleware::IOTypedArray::IOTypedArray(pIVar49,8,0x64000,0);
      *(IOTypedArray **)(in_x0 + 0x90) = pIVar49;
    }
    *(undefined8 *)(pIVar49 + 0x18) = 0;
    *(undefined8 *)(pIVar49 + 0x20) = 0;
  }
  if (*(long *)(in_x0 + 0x38) == 0) {
    uVar48 = 0;
    plVar60 = (long *)0x0;
  }
  else {
    plVar60 = *(long **)(*(long *)(in_x0 + 0x38) + 0x10);
    if (plVar60 == (long *)0x0) {
      uVar48 = 0;
    }
    else {
      (**(code **)(*plVar60 + 0x10))(plVar60,*(undefined8 *)(in_x0 + 0x30));
      uVar48 = 1;
    }
  }
  local_138 = Skeleton::getDrawOrder(*(Skeleton **)(in_x0 + 0x30));
  local_140 = *(long *)(local_138 + 8);
  if (local_140 == 0) {
    iVar25 = 0;
    iVar24 = 0;
    puVar45 = (undefined8 *)(in_x0 + 0x60);
    iVar52 = -1;
  }
  else {
    local_1c0 = lVar28 + 0x40;
    local_1d0 = lVar28 + 0xe0;
    local_174 = 0;
    local_168 = 0;
    local_198 = &local_e0;
    local_1a0 = &local_f8;
    local_200 = &PTR__SpineObject_01c8eb68;
    local_1c4 = -1;
    lVar61 = 0;
    puVar45 = (undefined8 *)(in_x0 + 0x60);
    pfVar47 = &local_110;
    pfVar39 = &local_128;
    local_1d4 = -1;
    uStack_1e8 = 0x437f0000437f0000;
    local_1f0 = 0x437f0000437f0000;
    local_180 = 0xffffffff;
    local_1f8 = pMVar57;
    local_190 = plVar60;
    local_184 = uVar48;
    local_150 = puVar45;
    local_148 = lVar28;
    do {
      this_04 = *(Slot **)(*(long *)(local_138 + 0x18) + lVar61 * 8);
      plVar60 = (long *)Slot::getBone(this_04);
      uVar69 = (**(code **)(*plVar60 + 0x20))();
      if ((uVar69 & 1) != 0) {
        iVar24 = *(int *)(in_x0 + 0x88);
        if (iVar24 < 0) {
          if ((uVar50 & 1) == 0) goto LAB_00d13380;
        }
        else {
          pSVar30 = (SlotData *)Slot::getData(this_04);
          iVar25 = SlotData::getIndex(pSVar30);
          if ((uVar50 & 1) == 0 && iVar24 != iVar25) {
LAB_00d13380:
            SkeletonClipping::clipEnd((SkeletonClipping *)*puVar45,this_04);
            uVar50 = 0;
            goto LAB_00d140c0;
          }
        }
        iVar24 = *(int *)(in_x0 + 0x8c);
        if (iVar24 < 0) {
          uVar50 = 1;
        }
        else {
          pSVar30 = (SlotData *)Slot::getData(this_04);
          iVar25 = SlotData::getIndex(pSVar30);
          uVar50 = (uint)(iVar24 != iVar25);
        }
        lVar28 = Slot::getAttachment(this_04);
        if ((lVar28 == 0) || (lVar28 = Slot::getColor(this_04), *(float *)(lVar28 + 0x14) == 0.0)) {
LAB_00d140b4:
          this_01 = (SkeletonClipping *)*puVar45;
        }
        else {
          plVar60 = (long *)Slot::getAttachment(this_04);
          pRVar31 = (RTTI *)(**(code **)(*plVar60 + 0x10))();
          uVar69 = RTTI::isExactly(pRVar31,(RTTI *)RegionAttachment::rtti);
          this = (RegionAttachment *)Slot::getAttachment(this_04);
          if ((uVar69 & 1) == 0) {
            pRVar31 = (RTTI *)(**(code **)(*(long *)this + 0x10))(this);
            uVar69 = RTTI::isExactly(pRVar31,(RTTI *)MeshAttachment::rtti);
            this_00 = (MeshAttachment *)Slot::getAttachment(this_04);
            if ((uVar69 & 1) == 0) {
              pRVar31 = (RTTI *)(**(code **)(*(long *)this_00 + 0x10))(this_00);
              uVar69 = RTTI::isExactly(pRVar31,(RTTI *)ClippingAttachment::rtti);
              puVar45 = local_150;
              if ((uVar69 & 1) != 0) {
                pCVar34 = (ClippingAttachment *)Slot::getAttachment(this_04);
                puVar45 = local_150;
                SkeletonClipping::clipStart((SkeletonClipping *)*local_150,this_04,pCVar34);
                goto LAB_00d140c0;
              }
            }
            else {
              pTVar59 = *(Texture2D **)(this_00 + 0x88);
              lVar32 = MeshAttachment::getColor(this_00);
              lVar28 = local_148;
              puVar45 = local_150;
              if (*(float *)(lVar32 + 0x14) != 0.0) {
                uVar48 = *(uint *)(*(long *)(pTVar59 + 0x10) + 0x10);
                local_1b8 = (Texture2D *)(ulong)uVar48;
                local_1b0 = pTVar59;
                if (*(char *)(in_x0 + 0x68) == '\0') {
                  uVar48 = uVar48 * 0x14;
                  local_170 = (ulong)uVar48;
                  bVar19 = false;
                  uVar69 = *(long *)(local_148 + 0x58) + (long)(int)uVar48;
                  local_1a4 = uVar50;
                  local_160 = pfVar39;
                  local_158 = pfVar47;
                  if ((*(ulong *)(local_148 + 0x70) != 0) && (*(ulong *)(local_148 + 0x70) < uVar69)
                     ) {
                    if (*(long **)(local_148 + 0xa0) != (long *)0x0) {
                      (**(code **)(**(long **)(local_148 + 0xa0) + 0x30))();
                    }
                    bVar19 = true;
                    *(undefined8 *)(local_148 + 0x58) = 0;
                  }
                  lVar28 = local_148;
                  if (*(ulong *)(local_148 + 0x50) < uVar69) {
                    (**(code **)(*(long *)(local_148 + 0x40) + 0x10))
                              (local_1c0,(long)((float)(int)((float)uVar69 * 0.0009765625) * 1024.0)
                               ,1);
                    if (*(long **)(lVar28 + 0xd0) != (long *)0x0) {
                      (**(code **)(**(long **)(lVar28 + 0xd0) + 0x30))();
                    }
                  }
                  pTVar59 = local_1b0;
                  pfVar47 = (float *)(*(long *)(lVar28 + 0x48) + *(long *)(lVar28 + 0x58));
                  memcpy(pfVar47,(void *)**(undefined8 **)(local_1b0 + 0x10),(long)(int)uVar48);
                  uVar69 = VertexAttachment::getWorldVerticesLength((VertexAttachment *)this_00);
                  local_218 = pfVar47;
                  VertexAttachment::computeWorldVertices
                            ((VertexAttachment *)this_00,this_04,0,uVar69,pfVar47,0,5);
                  local_228 = *(int *)(*(long *)(pTVar59 + 0x10) + 0x14);
                  uVar50 = local_228 << 1;
                  local_208 = (ulong)uVar50;
                  uVar69 = *(long *)(lVar28 + 0xf8) + (long)(int)uVar50;
                  if ((*(ulong *)(lVar28 + 0x110) != 0) && (*(ulong *)(lVar28 + 0x110) < uVar69)) {
                    if (*(long **)(local_148 + 0x140) != (long *)0x0) {
                      (**(code **)(**(long **)(local_148 + 0x140) + 0x30))();
                    }
                    *(undefined8 *)(local_148 + 0xf8) = 0;
                  }
                  lVar28 = local_148;
                  if (*(ulong *)(local_148 + 0xf0) < uVar69) {
                    (**(code **)(*(long *)(local_148 + 0xe0) + 0x10))
                              (local_1d0,(long)((float)(int)((float)uVar69 * 0.0009765625) * 1024.0)
                               ,1);
                    if (*(long **)(lVar28 + 0x170) != (long *)0x0) {
                      (**(code **)(**(long **)(lVar28 + 0x170) + 0x30))();
                    }
                  }
                  local_230 = (ushort *)(*(long *)(lVar28 + 0xe8) + *(long *)(lVar28 + 0xf8));
                  memcpy(local_230,*(void **)(*(long *)(local_1b0 + 0x10) + 8),(long)(int)uVar50);
                  local_238 = 0;
                  local_240 = (ushort *)0x0;
                  local_210 = (float *)0x0;
                  local_244 = (uint)local_1b8;
                  local_1b8 = (Texture2D *)0x0;
                }
                else {
                  local_170 = (ulong)(uVar48 * 0x18);
                  bVar19 = false;
                  uVar69 = *(long *)(local_148 + 0x58) + (long)(int)(uVar48 * 0x18);
                  local_1a4 = uVar50;
                  local_160 = pfVar39;
                  local_158 = pfVar47;
                  if ((*(ulong *)(local_148 + 0x70) != 0) && (*(ulong *)(local_148 + 0x70) < uVar69)
                     ) {
                    if (*(long **)(local_148 + 0xa0) != (long *)0x0) {
                      (**(code **)(**(long **)(local_148 + 0xa0) + 0x30))();
                    }
                    bVar19 = true;
                    *(undefined8 *)(lVar28 + 0x58) = 0;
                  }
                  if (*(ulong *)(lVar28 + 0x50) < uVar69) {
                    (**(code **)(*(long *)(lVar28 + 0x40) + 0x10))
                              (local_1c0,(long)((float)(int)((float)uVar69 * 0.0009765625) * 1024.0)
                               ,1);
                    if (*(long **)(lVar28 + 0xd0) != (long *)0x0) {
                      (**(code **)(**(long **)(lVar28 + 0xd0) + 0x30))();
                    }
                  }
                  pfVar47 = (float *)(*(long *)(lVar28 + 0x48) + *(long *)(lVar28 + 0x58));
                  if (0 < (int)local_1b8) {
                    lVar32 = 8;
                    pfVar39 = pfVar47 + 2;
                    pTVar40 = local_1b8;
                    do {
                      pTVar40 = pTVar40 + -1;
                      puVar45 = (undefined8 *)(**(long **)(pTVar59 + 0x10) + lVar32);
                      lVar32 = lVar32 + 0x14;
                      *(undefined8 *)pfVar39 = *puVar45;
                      pfVar39 = pfVar39 + 6;
                    } while (pTVar40 != (Texture2D *)0x0);
                  }
                  uVar69 = VertexAttachment::getWorldVerticesLength((VertexAttachment *)this_00);
                  local_210 = pfVar47;
                  VertexAttachment::computeWorldVertices
                            ((VertexAttachment *)this_00,this_04,0,uVar69,pfVar47,0,6);
                  local_238 = *(int *)(*(long *)(pTVar59 + 0x10) + 0x14);
                  uVar50 = local_238 << 1;
                  local_208 = (ulong)uVar50;
                  uVar69 = *(long *)(lVar28 + 0xf8) + (long)(int)uVar50;
                  if ((*(ulong *)(lVar28 + 0x110) != 0) && (*(ulong *)(lVar28 + 0x110) < uVar69)) {
                    if (*(long **)(local_148 + 0x140) != (long *)0x0) {
                      (**(code **)(**(long **)(local_148 + 0x140) + 0x30))();
                    }
                    *(undefined8 *)(local_148 + 0xf8) = 0;
                  }
                  lVar28 = local_148;
                  if (*(ulong *)(local_148 + 0xf0) < uVar69) {
                    (**(code **)(*(long *)(local_148 + 0xe0) + 0x10))
                              (local_1d0,(long)((float)(int)((float)uVar69 * 0.0009765625) * 1024.0)
                               ,1);
                    if (*(long **)(lVar28 + 0x170) != (long *)0x0) {
                      (**(code **)(**(long **)(lVar28 + 0x170) + 0x30))();
                    }
                  }
                  local_240 = (ushort *)(*(long *)(lVar28 + 0xe8) + *(long *)(lVar28 + 0xf8));
                  memcpy(local_240,*(void **)(*(long *)(local_1b0 + 0x10) + 8),(long)(int)uVar50);
                  local_230 = (ushort *)0x0;
                  local_228 = 0;
                  local_244 = 0;
                  local_218 = (float *)0x0;
                }
                lVar28 = MeshAttachment::getColor(this_00);
                local_c0 = *(float *)(lVar28 + 8);
                lVar28 = MeshAttachment::getColor(this_00);
                fStack_bc = *(float *)(lVar28 + 0xc);
                lVar28 = MeshAttachment::getColor(this_00);
                fStack_b8 = *(float *)(lVar28 + 0x10);
                lVar28 = MeshAttachment::getColor(this_00);
                fStack_b4 = *(float *)(lVar28 + 0x14);
                if (*(char *)(in_x0 + 0x46) != '\0') {
                  lVar28 = *(long *)(in_x0 + 0x90);
                  bVar23 = *(char *)(in_x0 + 0x68) == '\0';
                  uVar38 = *(ulong *)(lVar28 + 0x10);
                  uVar69 = *(ulong *)(lVar28 + 0x18);
                  ppfVar18 = &local_210;
                  iVar24 = local_238;
                  if (bVar23) {
                    ppfVar18 = &local_218;
                    iVar24 = local_228;
                  }
                  pfVar47 = *ppfVar18;
                  uVar43 = uVar69 + 4;
                  puVar3 = local_240;
                  if (bVar23) {
                    puVar3 = local_230;
                  }
                  uVar50 = 5;
                  if (!bVar23) {
                    uVar50 = 6;
                  }
                  if (uVar38 < uVar43) {
                    *(undefined1 *)(lVar28 + 0x28) = 1;
                    uVar46 = uVar43;
                  }
                  else {
                    *(undefined4 *)(*(long *)(lVar28 + 8) + uVar69) = 0x40000000;
                    uVar46 = uVar69 + 8;
                    *(ulong *)(lVar28 + 0x18) = uVar43;
                    uVar69 = uVar43;
                  }
                  if (uVar38 < uVar46) {
                    *(undefined1 *)(lVar28 + 0x28) = 1;
                  }
                  else {
                    *(float *)(*(long *)(lVar28 + 8) + uVar69) = (float)(iVar24 << 1);
                    *(ulong *)(lVar28 + 0x18) = uVar46;
                    uVar69 = uVar46;
                  }
                  if (0 < iVar24) {
                    lVar32 = 0;
                    do {
                      puVar2 = puVar3 + lVar32;
                      uVar5 = *puVar2;
                      uVar6 = puVar2[1];
                      uVar7 = puVar2[2];
                      uVar46 = (ulong)uVar50;
                      uVar43 = uVar69 + 4;
                      if (uVar38 < uVar43) {
                        *(undefined1 *)(lVar28 + 0x28) = 1;
                        bVar23 = uVar43 <= uVar38;
                        uVar35 = uVar43;
                        uVar43 = uVar69;
                        if (bVar23) goto LAB_00d13f68;
LAB_00d13fa8:
                        *(undefined1 *)(lVar28 + 0x28) = 1;
                        uVar69 = uVar35;
                      }
                      else {
                        *(float *)(*(long *)(lVar28 + 8) + uVar69) = pfVar47[uVar46 * uVar5];
                        uVar35 = uVar69 + 8;
                        *(ulong *)(lVar28 + 0x18) = uVar43;
                        if (uVar38 < uVar35) goto LAB_00d13fa8;
LAB_00d13f68:
                        *(float *)(*(long *)(lVar28 + 8) + uVar43) =
                             pfVar47[(int)(uVar46 * uVar5) + 1];
                        *(ulong *)(lVar28 + 0x18) = uVar35;
                        uVar69 = uVar35 + 4;
                        uVar43 = uVar35;
                      }
                      if (uVar38 < uVar69) {
                        *(undefined1 *)(lVar28 + 0x28) = 1;
                        bVar23 = uVar69 <= uVar38;
                        uVar35 = uVar69;
                        uVar37 = uVar69;
                        uVar69 = uVar43;
                        if (bVar23) goto LAB_00d13fcc;
LAB_00d1400c:
                        *(undefined1 *)(lVar28 + 0x28) = 1;
                      }
                      else {
                        *(float *)(*(long *)(lVar28 + 8) + uVar43) = pfVar47[uVar46 * uVar6];
                        uVar35 = uVar69 + 4;
                        *(ulong *)(lVar28 + 0x18) = uVar69;
                        uVar37 = uVar35;
                        if (uVar38 < uVar35) goto LAB_00d1400c;
LAB_00d13fcc:
                        *(float *)(*(long *)(lVar28 + 8) + uVar69) =
                             pfVar47[(int)(uVar46 * uVar6) + 1];
                        uVar35 = uVar37 + 4;
                        *(ulong *)(lVar28 + 0x18) = uVar37;
                        uVar69 = uVar37;
                      }
                      if (uVar38 < uVar35) {
                        *(undefined1 *)(lVar28 + 0x28) = 1;
                        uVar35 = uVar69;
                      }
                      else {
                        *(float *)(*(long *)(lVar28 + 8) + uVar69) = pfVar47[uVar46 * uVar7];
                        *(ulong *)(lVar28 + 0x18) = uVar35;
                      }
                      uVar69 = uVar35 + 4;
                      if (uVar38 < uVar69) {
                        *(undefined1 *)(lVar28 + 0x28) = 1;
                        uVar69 = uVar35;
                      }
                      else {
                        *(float *)(*(long *)(lVar28 + 8) + uVar35) =
                             pfVar47[(int)(uVar46 * uVar7) + 1];
                        *(ulong *)(lVar28 + 0x18) = uVar69;
                      }
                      lVar32 = lVar32 + 3;
                    } while (lVar32 < iVar24);
                  }
                }
                goto LAB_00d14074;
              }
            }
            goto LAB_00d140b4;
          }
          pTVar59 = *(Texture2D **)(this + 0x30);
          lVar32 = RegionAttachment::getColor(this);
          lVar28 = local_148;
          puVar45 = local_150;
          if (*(float *)(lVar32 + 0x14) == 0.0) goto LAB_00d140b4;
          uVar48 = *(uint *)(*(long *)(pTVar59 + 0x10) + 0x10);
          local_1b8 = (Texture2D *)(ulong)uVar48;
          local_1b0 = pTVar59;
          if (*(char *)(in_x0 + 0x68) == '\0') {
            uVar48 = uVar48 * 0x14;
            local_170 = (ulong)uVar48;
            bVar19 = false;
            uVar69 = *(long *)(local_148 + 0x58) + (long)(int)uVar48;
            local_1a4 = uVar50;
            local_160 = pfVar39;
            local_158 = pfVar47;
            if ((*(ulong *)(local_148 + 0x70) != 0) && (*(ulong *)(local_148 + 0x70) < uVar69)) {
              if (*(long **)(local_148 + 0xa0) != (long *)0x0) {
                (**(code **)(**(long **)(local_148 + 0xa0) + 0x30))();
              }
              bVar19 = true;
              *(undefined8 *)(local_148 + 0x58) = 0;
            }
            lVar28 = local_148;
            if (*(ulong *)(local_148 + 0x50) < uVar69) {
              (**(code **)(*(long *)(local_148 + 0x40) + 0x10))
                        (local_1c0,(long)((float)(int)((float)uVar69 * 0.0009765625) * 1024.0),1);
              if (*(long **)(lVar28 + 0xd0) != (long *)0x0) {
                (**(code **)(**(long **)(lVar28 + 0xd0) + 0x30))();
              }
            }
            pTVar59 = local_1b0;
            pfVar47 = (float *)(*(long *)(lVar28 + 0x48) + *(long *)(lVar28 + 0x58));
            memcpy(pfVar47,(void *)**(undefined8 **)(local_1b0 + 0x10),(long)(int)uVar48);
            pBVar33 = (Bone *)Slot::getBone(this_04);
            local_218 = pfVar47;
            RegionAttachment::computeWorldVertices(this,pBVar33,pfVar47,0,5);
            local_228 = *(int *)(*(long *)(pTVar59 + 0x10) + 0x14);
            uVar50 = local_228 << 1;
            local_208 = (ulong)uVar50;
            uVar69 = *(long *)(lVar28 + 0xf8) + (long)(int)uVar50;
            if ((*(ulong *)(lVar28 + 0x110) != 0) && (*(ulong *)(lVar28 + 0x110) < uVar69)) {
              if (*(long **)(local_148 + 0x140) != (long *)0x0) {
                (**(code **)(**(long **)(local_148 + 0x140) + 0x30))();
              }
              *(undefined8 *)(local_148 + 0xf8) = 0;
            }
            lVar28 = local_148;
            if (*(ulong *)(local_148 + 0xf0) < uVar69) {
              (**(code **)(*(long *)(local_148 + 0xe0) + 0x10))
                        (local_1d0,(long)((float)(int)((float)uVar69 * 0.0009765625) * 1024.0),1);
              if (*(long **)(lVar28 + 0x170) != (long *)0x0) {
                (**(code **)(**(long **)(lVar28 + 0x170) + 0x30))();
              }
            }
            local_230 = (ushort *)(*(long *)(lVar28 + 0xe8) + *(long *)(lVar28 + 0xf8));
            memcpy(local_230,*(void **)(*(long *)(local_1b0 + 0x10) + 8),(long)(int)uVar50);
            local_238 = 0;
            local_240 = (ushort *)0x0;
            local_210 = (float *)0x0;
            local_244 = (uint)local_1b8;
            local_1b8 = (Texture2D *)0x0;
          }
          else {
            local_170 = (ulong)(uVar48 * 0x18);
            bVar19 = false;
            uVar69 = *(long *)(local_148 + 0x58) + (long)(int)(uVar48 * 0x18);
            local_1a4 = uVar50;
            local_160 = pfVar39;
            local_158 = pfVar47;
            if ((*(ulong *)(local_148 + 0x70) != 0) && (*(ulong *)(local_148 + 0x70) < uVar69)) {
              if (*(long **)(local_148 + 0xa0) != (long *)0x0) {
                (**(code **)(**(long **)(local_148 + 0xa0) + 0x30))();
              }
              bVar19 = true;
              *(undefined8 *)(lVar28 + 0x58) = 0;
            }
            if (*(ulong *)(lVar28 + 0x50) < uVar69) {
              (**(code **)(*(long *)(lVar28 + 0x40) + 0x10))
                        (local_1c0,(long)((float)(int)((float)uVar69 * 0.0009765625) * 1024.0),1);
              if (*(long **)(lVar28 + 0xd0) != (long *)0x0) {
                (**(code **)(**(long **)(lVar28 + 0xd0) + 0x30))();
              }
            }
            pfVar47 = (float *)(*(long *)(lVar28 + 0x48) + *(long *)(lVar28 + 0x58));
            if (0 < (int)local_1b8) {
              lVar32 = 8;
              pfVar39 = pfVar47 + 2;
              pTVar40 = local_1b8;
              do {
                pTVar40 = pTVar40 + -1;
                puVar45 = (undefined8 *)(**(long **)(pTVar59 + 0x10) + lVar32);
                lVar32 = lVar32 + 0x14;
                *(undefined8 *)pfVar39 = *puVar45;
                pfVar39 = pfVar39 + 6;
              } while (pTVar40 != (Texture2D *)0x0);
            }
            pBVar33 = (Bone *)Slot::getBone(this_04);
            local_210 = pfVar47;
            RegionAttachment::computeWorldVertices(this,pBVar33,pfVar47,0,6);
            local_238 = *(int *)(*(long *)(pTVar59 + 0x10) + 0x14);
            uVar50 = local_238 << 1;
            local_208 = (ulong)uVar50;
            uVar69 = *(long *)(lVar28 + 0xf8) + (long)(int)uVar50;
            if ((*(ulong *)(lVar28 + 0x110) != 0) && (*(ulong *)(lVar28 + 0x110) < uVar69)) {
              if (*(long **)(local_148 + 0x140) != (long *)0x0) {
                (**(code **)(**(long **)(local_148 + 0x140) + 0x30))();
              }
              *(undefined8 *)(local_148 + 0xf8) = 0;
            }
            lVar28 = local_148;
            if (*(ulong *)(local_148 + 0xf0) < uVar69) {
              (**(code **)(*(long *)(local_148 + 0xe0) + 0x10))
                        (local_1d0,(long)((float)(int)((float)uVar69 * 0.0009765625) * 1024.0),1);
              if (*(long **)(lVar28 + 0x170) != (long *)0x0) {
                (**(code **)(**(long **)(lVar28 + 0x170) + 0x30))();
              }
            }
            local_240 = (ushort *)(*(long *)(lVar28 + 0xe8) + *(long *)(lVar28 + 0xf8));
            memcpy(local_240,*(void **)(*(long *)(local_1b0 + 0x10) + 8),(long)(int)uVar50);
            local_230 = (ushort *)0x0;
            local_228 = 0;
            local_244 = 0;
            local_218 = (float *)0x0;
          }
          lVar28 = RegionAttachment::getColor(this);
          local_c0 = *(float *)(lVar28 + 8);
          lVar28 = RegionAttachment::getColor(this);
          fStack_bc = *(float *)(lVar28 + 0xc);
          lVar28 = RegionAttachment::getColor(this);
          fStack_b8 = *(float *)(lVar28 + 0x10);
          lVar28 = RegionAttachment::getColor(this);
          fStack_b4 = *(float *)(lVar28 + 0x14);
          if (*(char *)(in_x0 + 0x47) != '\0') {
            lVar28 = *(long *)(in_x0 + 0x90);
            uVar38 = *(ulong *)(lVar28 + 0x10);
            uVar43 = *(ulong *)(lVar28 + 0x18);
            uVar69 = uVar43 + 4;
            if (uVar38 < uVar69) {
              *(undefined1 *)(lVar28 + 0x28) = 1;
              uVar46 = uVar69;
              uVar69 = uVar43;
            }
            else {
              *(undefined4 *)(*(long *)(lVar28 + 8) + uVar43) = 0x3f800000;
              uVar46 = uVar43 + 8;
              *(ulong *)(lVar28 + 0x18) = uVar69;
            }
            if (uVar38 < uVar46) {
              *(undefined1 *)(lVar28 + 0x28) = 1;
              uVar43 = uVar46;
            }
            else {
              *(undefined4 *)(*(long *)(lVar28 + 8) + uVar69) = 0x41000000;
              uVar43 = uVar46 + 4;
              *(ulong *)(lVar28 + 0x18) = uVar46;
              uVar69 = uVar46;
            }
            puVar29 = (undefined1 *)(lVar28 + 0x28);
            bVar23 = *(char *)(in_x0 + 0x68) == '\0';
            ppfVar18 = &local_210;
            if (bVar23) {
              ppfVar18 = &local_218;
            }
            pfVar47 = *ppfVar18;
            lVar32 = 5;
            if (!bVar23) {
              lVar32 = 6;
            }
            if (uVar38 < uVar43) {
              *puVar29 = 1;
              uVar35 = uVar69;
              uVar46 = uVar43;
              if (uVar38 < uVar43) goto LAB_00d13b0c;
LAB_00d13b38:
              uVar35 = uVar46;
              *(float *)(*(long *)(lVar28 + 8) + uVar69) = pfVar47[1];
              uVar46 = uVar35 + 4;
              *(ulong *)(lVar28 + 0x18) = uVar35;
            }
            else {
              *(float *)(*(long *)(lVar28 + 8) + uVar69) = *pfVar47;
              uVar46 = uVar43 + 4;
              *(ulong *)(lVar28 + 0x18) = uVar43;
              uVar69 = uVar43;
              uVar35 = uVar43;
              if (uVar46 <= uVar38) goto LAB_00d13b38;
LAB_00d13b0c:
              *puVar29 = 1;
            }
            pfVar47 = pfVar47 + lVar32;
            if (uVar38 < uVar46) {
              *puVar29 = 1;
              uVar69 = uVar46;
              if (uVar38 < uVar46) goto LAB_00d13b70;
LAB_00d13b9c:
              *(float *)(*(long *)(lVar28 + 8) + uVar35) = pfVar47[1];
              *(ulong *)(lVar28 + 0x18) = uVar69;
              uVar43 = uVar69 + 4;
              uVar35 = uVar69;
            }
            else {
              *(float *)(*(long *)(lVar28 + 8) + uVar35) = *pfVar47;
              *(ulong *)(lVar28 + 0x18) = uVar46;
              uVar69 = uVar46 + 4;
              uVar35 = uVar46;
              if (uVar69 <= uVar38) goto LAB_00d13b9c;
LAB_00d13b70:
              *puVar29 = 1;
              uVar43 = uVar69;
            }
            pfVar47 = pfVar47 + lVar32;
            if (uVar38 < uVar43) {
              *puVar29 = 1;
              bVar23 = uVar38 < uVar43;
              uVar69 = uVar43;
              uVar43 = uVar35;
              if (bVar23) goto LAB_00d13bd0;
LAB_00d13bfc:
              *(float *)(*(long *)(lVar28 + 8) + uVar43) = pfVar47[1];
              *(ulong *)(lVar28 + 0x18) = uVar69;
              uVar46 = uVar69 + 4;
              uVar43 = uVar69;
            }
            else {
              *(float *)(*(long *)(lVar28 + 8) + uVar35) = *pfVar47;
              *(ulong *)(lVar28 + 0x18) = uVar43;
              uVar69 = uVar43 + 4;
              if (uVar69 <= uVar38) goto LAB_00d13bfc;
LAB_00d13bd0:
              *puVar29 = 1;
              uVar46 = uVar69;
            }
            if (uVar38 < uVar46) {
              *puVar29 = 1;
              uVar69 = uVar46;
            }
            else {
              *(float *)(*(long *)(lVar28 + 8) + uVar43) = pfVar47[lVar32];
              *(ulong *)(lVar28 + 0x18) = uVar46;
              uVar69 = uVar46 + 4;
              uVar43 = uVar46;
            }
            if (uVar38 < uVar69) {
              *puVar29 = 1;
            }
            else {
              *(float *)(*(long *)(lVar28 + 8) + uVar43) = (pfVar47 + lVar32)[1];
              *(ulong *)(lVar28 + 0x18) = uVar69;
            }
          }
LAB_00d14074:
          pfVar47 = local_158;
          pfVar39 = local_160;
          uVar50 = local_1a4;
          lVar28 = Skeleton::getColor(*(Skeleton **)(in_x0 + 0x30));
          fVar62 = *(float *)(lVar28 + 0x14);
          lVar28 = Slot::getColor(this_04);
          fStack_b4 = fVar62 * *(float *)(lVar28 + 0x14) * fStack_b4 * *(float *)(in_x0 + 0x58) *
                      255.0;
          puVar45 = local_150;
          if (fStack_b4 == 0.0) goto LAB_00d140b4;
          fVar63 = *(float *)(in_x0 + 0x4c);
          fVar62 = 255.0;
          if (*(char *)(in_x0 + 0x5c) != '\0') {
            fVar62 = fStack_b4;
          }
          lVar28 = Skeleton::getColor(*(Skeleton **)(in_x0 + 0x30));
          fVar66 = *(float *)(in_x0 + 0x50);
          fVar65 = fVar62 * fVar63 * *(float *)(lVar28 + 8) * local_c0;
          lVar28 = Skeleton::getColor(*(Skeleton **)(in_x0 + 0x30));
          fVar63 = *(float *)(in_x0 + 0x54);
          fVar66 = fVar62 * fVar66 * *(float *)(lVar28 + 0xc) * fStack_bc;
          lVar28 = Skeleton::getColor(*(Skeleton **)(in_x0 + 0x30));
          fVar62 = fVar62 * fVar63 * *(float *)(lVar28 + 0x10) * fStack_b8;
          lVar28 = Slot::getColor(this_04);
          local_c0 = fVar65 * *(float *)(lVar28 + 8);
          lVar28 = Slot::getColor(this_04);
          fStack_bc = fVar66 * *(float *)(lVar28 + 0xc);
          lVar28 = Slot::getColor(this_04);
          fStack_b8 = fVar62 * *(float *)(lVar28 + 0x10);
          uVar69 = Slot::hasDarkColor(this_04);
          if ((uVar69 & 1) == 0) {
            fStack_c8 = 0.0;
            local_d0 = 0;
          }
          else {
            lVar28 = Slot::getDarkColor(this_04);
            local_d0 = CONCAT44(local_d0._4_4_,fVar65 * *(float *)(lVar28 + 8));
            lVar28 = Slot::getDarkColor(this_04);
            local_d0 = CONCAT44(fVar66 * *(float *)(lVar28 + 0xc),(float)local_d0);
            lVar28 = Slot::getDarkColor(this_04);
            fStack_c8 = fVar62 * *(float *)(lVar28 + 0x10);
          }
          fStack_c4 = 0.0;
          if (*(char *)(in_x0 + 0x5c) != '\0') {
            fStack_c4 = 255.0;
          }
          cVar4 = *(char *)(in_x0 + 0x68);
          uVar69 = SkeletonClipping::isClipping(*(SkeletonClipping **)(in_x0 + 0x60));
          puVar45 = local_150;
          plVar60 = local_190;
          puVar22 = local_198;
          puVar21 = local_1a0;
          fVar62 = (float)local_1f0;
          fVar63 = (float)((ulong)local_1f0 >> 0x20);
          fVar65 = (float)uStack_1e8;
          fVar66 = (float)((ulong)uStack_1e8 >> 0x20);
          local_1a4 = uVar50;
          local_160 = pfVar39;
          local_158 = pfVar47;
          if (cVar4 == '\0') {
            if ((uVar69 & 1) == 0) {
              if ((local_184 & 1) == 0) {
                if (0 < (int)local_244) {
                  uVar69 = (ulong)local_244;
                  uVar8 = (undefined1)(int)local_c0;
                  uVar9 = (undefined1)(int)fStack_bc;
                  uVar10 = (undefined1)(int)fStack_b8;
                  uVar11 = (undefined1)(int)fStack_b4;
                  if (local_244 == 1) {
                    uVar43 = 0;
                  }
                  else {
                    uVar43 = uVar69 & 0xfffffffe;
                    puVar29 = (undefined1 *)((long)local_218 + 0x27);
                    uVar38 = uVar43;
                    do {
                      puVar29[-0x17] = uVar8;
                      puVar29[-3] = uVar8;
                      puVar29[-0x16] = uVar9;
                      puVar29[-2] = uVar9;
                      puVar29[-0x15] = uVar10;
                      puVar29[-1] = uVar10;
                      puVar29[-0x14] = uVar11;
                      *puVar29 = uVar11;
                      uVar38 = uVar38 - 2;
                      puVar29 = puVar29 + 0x28;
                    } while (uVar38 != 0);
                    if (uVar43 == uVar69) goto LAB_00d12e18;
                  }
                  lVar28 = uVar69 - uVar43;
                  puVar29 = (undefined1 *)((long)local_218 + uVar43 * 0x14 + 0x13);
                  do {
                    puVar29[-3] = uVar8;
                    puVar29[-2] = uVar9;
                    puVar29[-1] = uVar10;
                    *puVar29 = uVar11;
                    lVar28 = lVar28 + -1;
                    puVar29 = puVar29 + 0x14;
                  } while (lVar28 != 0);
                }
              }
              else {
                local_100 = &PTR__SpineObject_01c8eb68;
                local_e0 = CONCAT44(fStack_bc / fVar63,local_c0 / fVar62);
                uStack_d8 = CONCAT44(fStack_b4 / fVar66,fStack_b8 / fVar65);
                local_e8 = local_100;
                *local_1a0 = 0;
                local_1a0[1] = 0;
                if (0 < (int)local_244) {
                  uVar69 = (ulong)local_244;
                  pfVar47 = local_218 + 3;
                  do {
                    local_130 = &PTR__SpineObject_01c8eb68;
                    uVar70 = local_198[1];
                    uVar55 = *local_198;
                    uVar71 = *puVar21;
                    *(undefined8 *)(local_160 + 2) = puVar21[1];
                    *(undefined8 *)local_160 = uVar71;
                    *(undefined8 *)(local_158 + 2) = uVar70;
                    *(undefined8 *)local_158 = uVar55;
                    local_118 = local_130;
                    (**(code **)(*plVar60 + 0x18))
                              (plVar60,pfVar47 + -3,pfVar47 + -2,pfVar47 + -1,pfVar47,&local_118,
                               &local_130);
                    *(char *)(pfVar47 + 1) = (char)(int)(local_110 * 255.0);
                    *(char *)((long)pfVar47 + 5) = (char)(int)(fStack_10c * 255.0);
                    *(char *)((long)pfVar47 + 6) = (char)(int)(fStack_108 * 255.0);
                    *(char *)((long)pfVar47 + 7) = (char)(int)(fStack_104 * 255.0);
                    SpineObject::~SpineObject((SpineObject *)&local_130);
                    SpineObject::~SpineObject((SpineObject *)&local_118);
                    uVar69 = uVar69 - 1;
                    pfVar47 = pfVar47 + 5;
                  } while (uVar69 != 0);
                }
                pfVar39 = local_160;
                SpineObject::~SpineObject((SpineObject *)&local_100);
                SpineObject::~SpineObject((SpineObject *)&local_e8);
              }
            }
            else {
              SkeletonClipping::clipTriangles
                        ((SkeletonClipping *)*local_150,local_218,local_230,(long)local_228,
                         local_218 + 2,5);
              lVar28 = SkeletonClipping::getClippedTriangles((SkeletonClipping *)*puVar45);
              this_01 = (SkeletonClipping *)*puVar45;
              if (*(long *)(lVar28 + 8) == 0) goto LAB_00d140b8;
              lVar28 = SkeletonClipping::getClippedVertices(this_01);
              iVar24 = *(int *)(lVar28 + 8);
              bVar20 = 0;
              local_1b8 = (Texture2D *)(ulong)(uint)(iVar24 >> 1);
              uVar50 = (iVar24 >> 1) * 0x14;
              local_170 = (ulong)uVar50;
              uVar69 = *(long *)(local_148 + 0x58) + (long)(int)uVar50;
              if ((*(ulong *)(local_148 + 0x70) != 0) && (*(ulong *)(local_148 + 0x70) < uVar69)) {
                if (*(long **)(local_148 + 0xa0) != (long *)0x0) {
                  (**(code **)(**(long **)(local_148 + 0xa0) + 0x30))();
                }
                bVar20 = 1;
                *(undefined8 *)(local_148 + 0x58) = 0;
              }
              lVar28 = local_148;
              if (*(ulong *)(local_148 + 0x50) < uVar69) {
                (**(code **)(*(long *)(local_148 + 0x40) + 0x10))
                          (local_1c0,(long)((float)(int)((float)uVar69 * 0.0009765625) * 1024.0),1);
                if (*(long **)(lVar28 + 0xd0) != (long *)0x0) {
                  (**(code **)(**(long **)(lVar28 + 0xd0) + 0x30))();
                }
              }
              local_210 = *(float **)(lVar28 + 0x48);
              local_218 = *(float **)(lVar28 + 0x58);
              lVar32 = SkeletonClipping::getClippedTriangles((SkeletonClipping *)*puVar45);
              lVar32 = *(long *)(lVar32 + 8);
              uVar69 = *(long *)(lVar28 + 0xf8) + ((lVar32 << 0x21) >> 0x20);
              if ((*(ulong *)(lVar28 + 0x110) != 0) && (*(ulong *)(lVar28 + 0x110) < uVar69)) {
                if (*(long **)(local_148 + 0x140) != (long *)0x0) {
                  (**(code **)(**(long **)(local_148 + 0x140) + 0x30))();
                }
                *(undefined8 *)(local_148 + 0xf8) = 0;
              }
              lVar28 = local_148;
              bVar19 = (bool)(bVar20 | bVar19);
              local_208 = (ulong)(uint)((int)lVar32 << 1);
              if (*(ulong *)(local_148 + 0xf0) < uVar69) {
                (**(code **)(*(long *)(local_148 + 0xe0) + 0x10))
                          (local_1d0,(long)((float)(int)((float)uVar69 * 0.0009765625) * 1024.0),1);
                if (*(long **)(lVar28 + 0x170) != (long *)0x0) {
                  (**(code **)(**(long **)(lVar28 + 0x170) + 0x30))();
                }
              }
              lVar32 = *(long *)(lVar28 + 0xe8);
              lVar56 = *(long *)(lVar28 + 0xf8);
              lVar28 = SkeletonClipping::getClippedTriangles((SkeletonClipping *)*puVar45);
              pvVar58 = *(void **)(lVar28 + 0x18);
              lVar28 = SkeletonClipping::getClippedTriangles((SkeletonClipping *)*local_150);
              puVar45 = local_150;
              memcpy((void *)(lVar32 + lVar56),pvVar58,*(long *)(lVar28 + 8) << 1);
              lVar28 = SkeletonClipping::getClippedVertices((SkeletonClipping *)*puVar45);
              lVar32 = *(long *)(lVar28 + 0x18);
              lVar28 = SkeletonClipping::getClippedUVs((SkeletonClipping *)*puVar45);
              plVar60 = local_190;
              lVar28 = *(long *)(lVar28 + 0x18);
              if ((local_184 & 1) != 0) {
                local_e8 = local_200;
                local_100 = local_200;
                local_e0 = CONCAT44(fStack_bc / (float)((ulong)local_1f0 >> 0x20),
                                    local_c0 / (float)local_1f0);
                uStack_d8 = CONCAT44(fStack_b4 / (float)((ulong)uStack_1e8 >> 0x20),
                                     fStack_b8 / (float)uStack_1e8);
                *local_1a0 = 0;
                local_1a0[1] = 0;
                if (1 < iVar24) {
                  lVar56 = 0;
                  puVar42 = (undefined4 *)((long)local_210 + (long)local_218);
                  local_1b8 = (Texture2D *)(long)(int)local_1b8;
                  puVar44 = (undefined4 *)(lVar32 + 4);
                  puVar54 = (undefined4 *)(lVar28 + 4);
                  do {
                    uVar55 = *local_198;
                    local_130 = &PTR__SpineObject_01c8eb68;
                    uVar71 = local_1a0[1];
                    uVar70 = *local_1a0;
                    *(undefined8 *)(local_158 + 2) = local_198[1];
                    *(undefined8 *)local_158 = uVar55;
                    local_118 = local_130;
                    *(undefined8 *)(local_160 + 2) = uVar71;
                    *(undefined8 *)local_160 = uVar70;
                    *puVar42 = puVar44[-1];
                    puVar42[1] = *puVar44;
                    puVar42[2] = puVar54[-1];
                    puVar42[3] = *puVar54;
                    (**(code **)(*plVar60 + 0x18))
                              (plVar60,puVar42,puVar42 + 1,puVar42 + 2,puVar42 + 3,&local_118,
                               &local_130);
                    *(char *)(puVar42 + 4) = (char)(int)(local_110 * 255.0);
                    *(char *)((long)puVar42 + 0x11) = (char)(int)(fStack_10c * 255.0);
                    *(char *)((long)puVar42 + 0x12) = (char)(int)(fStack_108 * 255.0);
                    *(char *)((long)puVar42 + 0x13) = (char)(int)(fStack_104 * 255.0);
                    SpineObject::~SpineObject((SpineObject *)&local_130);
                    SpineObject::~SpineObject((SpineObject *)&local_118);
                    lVar56 = lVar56 + 1;
                    puVar42 = puVar42 + 5;
                    puVar44 = puVar44 + 2;
                    puVar54 = puVar54 + 2;
                  } while (lVar56 < (long)local_1b8);
                }
                goto LAB_00d1299c;
              }
              pfVar39 = local_160;
              if (1 < iVar24) {
                lVar56 = 0;
                puVar29 = (undefined1 *)((long)local_210 + (long)local_218 + 0x13);
                puVar42 = (undefined4 *)(lVar28 + 4);
                puVar44 = (undefined4 *)(lVar32 + 4);
                do {
                  lVar56 = lVar56 + 1;
                  *(undefined4 *)(puVar29 + -0x13) = puVar44[-1];
                  *(undefined4 *)(puVar29 + -0xf) = *puVar44;
                  *(undefined4 *)(puVar29 + -0xb) = puVar42[-1];
                  uVar68 = *puVar42;
                  puVar29[-3] = (char)(int)local_c0;
                  puVar29[-2] = (char)(int)fStack_bc;
                  puVar29[-1] = (char)(int)fStack_b8;
                  *puVar29 = (char)(int)fStack_b4;
                  *(undefined4 *)(puVar29 + -7) = uVar68;
                  puVar29 = puVar29 + 0x14;
                  puVar42 = puVar42 + 2;
                  puVar44 = puVar44 + 2;
                } while (lVar56 < (int)local_1b8);
              }
            }
LAB_00d12e18:
            pfVar47 = local_158;
            uVar50 = local_1a4;
            local_1b8 = *(Texture2D **)(local_1b0 + 8);
            lVar28 = cocos2d::middleware::Texture2D::getNativeTexture(local_1b8);
            local_1b0 = (Texture2D *)CONCAT44(local_1b0._4_4_,*(int *)(lVar28 + 0xc));
            if (local_1c4 == *(int *)(lVar28 + 0xc)) {
              pSVar30 = (SlotData *)Slot::getData(this_04);
              iVar24 = SlotData::getBlendMode(pSVar30);
              if ((bVar19) || (local_1d4 != iVar24)) goto LAB_00d12e64;
            }
            else {
LAB_00d12e64:
              if ((int)local_180 != -1) {
                (**(code **)(*(long *)pfVar26 + 0x28))
                          (pfVar26,(long)((int)local_168 + -1),local_180,local_174);
              }
              pSVar30 = (SlotData *)Slot::getData(this_04);
              iVar24 = SlotData::getBlendMode(pSVar30);
              if (iVar24 == 3) {
                uVar55 = 0x301;
                uVar68 = 1;
              }
              else if (iVar24 == 2) {
                uVar55 = 0x303;
                uVar68 = 0x306;
              }
              else {
                if (iVar24 == 1) {
                  cVar4 = *(char *)(in_x0 + 0x5c);
                  uVar55 = 1;
                }
                else {
                  cVar4 = *(char *)(in_x0 + 0x5c);
                  uVar55 = 0x303;
                }
                uVar68 = 0x302;
                if (cVar4 != '\0') {
                  uVar68 = 1;
                }
              }
              dVar73 = (double)((int)local_1b0 + iVar24 * 0x10000 +
                                (uint)*(byte *)(in_x0 + 0x68) * 0x1000000 +
                                (uint)*(byte *)(in_x0 + 0x45) * 0x2000000 +
                               (int)*(double *)(*(long *)(in_x0 + 0xa0) + 0x10) * 0x4000000);
              uVar69 = (ulong)(int)local_168;
              if ((uVar69 < (ulong)(*(long *)(pfVar26 + 0x16) - *(long *)(pfVar26 + 0x14) >> 3)) &&
                 (this_03 = *(EffectVariant **)(*(long *)(pfVar26 + 0x14) + uVar69 * 8),
                 this_03 != (EffectVariant *)0x0)) {
                pEVar51 = this_03 + 0x10;
                if (0.01 <= ABS(*(double *)pEVar51 - dVar73)) goto LAB_00d12f90;
              }
              else {
                this_03 = operator_new(0x40);
                cocos2d::renderer::EffectVariant::EffectVariant(this_03);
                cocos2d::Ref::autorelease((Ref *)this_03);
                cocos2d::renderer::EffectVariant::copy(this_03,*(EffectVariant **)(in_x0 + 0xa0));
                (**(code **)(*(long *)pfVar26 + 0x48))(pfVar26,uVar69,this_03);
                pEVar51 = this_03 + 0x10;
LAB_00d12f90:
                pvVar58 = (void *)cocos2d::middleware::Texture2D::getNativeTexture(local_1b8);
                cocos2d::renderer::EffectBase::setProperty
                          ((EffectBase *)this_03,(basic_string *)&DAT_01d3dc38,pvVar58,-1);
                cocos2d::renderer::EffectBase::setBlend
                          ((EffectBase *)this_03,1,0x8006,uVar68,uVar55,0x8006,uVar68,uVar55,
                           0xffffffff,0xffffffff);
              }
              *(double *)pEVar51 = dVar73;
              lVar28 = *(long *)(local_148 + 0x38) * 8;
              local_180 = (ulong)(long)*(int *)(local_148 + 0xf8) >> 1;
              (**(code **)(*(long *)pfVar26 + 0x30))
                        (pfVar26,uVar69,*(undefined8 *)(*(long *)(local_148 + 0x20) + lVar28),
                         *(undefined8 *)(*(long *)(local_148 + 8) + lVar28));
              pSVar30 = (SlotData *)Slot::getData(this_04);
              local_1d4 = SlotData::getBlendMode(pSVar30);
              local_168 = (ulong)((int)local_168 + 1);
              local_174 = 0;
              local_1c4 = (int)local_1b0;
              pfVar47 = local_158;
              pfVar39 = local_160;
              uVar50 = local_1a4;
            }
            pMVar57 = local_1f8;
            iVar24 = (int)local_170;
            puVar45 = local_150;
            if ((0 < (int)local_208) && (0 < iVar24)) {
              pTVar59 = *(Texture2D **)(local_148 + 0x58);
              local_1b8 = (Texture2D *)0x14;
              if (*(char *)(in_x0 + 0x68) != '\0') {
                local_1b8 = (Texture2D *)0x18;
              }
              local_218 = pfVar26;
              local_1b0 = pTVar59;
              if (*(char *)(in_x0 + 0x45) != '\0') {
                lVar28 = 0;
                lVar56 = *(long *)(local_148 + 0x48);
                lVar32 = 0x14;
                if (*(char *)(in_x0 + 0x68) != '\0') {
                  lVar32 = 0x18;
                }
                do {
                  pVVar1 = (Vec3 *)(pTVar59 + lVar28 + lVar56);
                  uVar68 = *(undefined4 *)(pVVar1 + 8);
                  *(undefined4 *)(pVVar1 + 8) = 0;
                  cocos2d::Mat4::transformVector
                            (pMVar57,*(float *)pVVar1,*(float *)(pVVar1 + 4),0.0,1.0,pVVar1);
                  lVar28 = lVar28 + lVar32;
                  *(undefined4 *)(pVVar1 + 8) = uVar68;
                  iVar24 = (int)local_170;
                } while ((int)lVar28 < iVar24);
              }
              iVar25 = (int)local_208;
              if ((local_1b8 <= local_1b0) && (1 < iVar25)) {
                lVar28 = *(long *)(local_148 + 0xe8);
                lVar32 = *(long *)(local_148 + 0xf8);
                uVar38 = local_208 >> 1 & 0x7fffffff;
                uVar69 = uVar38;
                if ((uint)uVar38 < 2) {
                  uVar69 = 1;
                }
                sVar16 = 0;
                if (local_1b8 != (Texture2D *)0x0) {
                  sVar16 = (short)((ulong)local_1b0 / (ulong)local_1b8);
                }
                if (uVar69 < 0x10) {
                  uVar43 = 0;
                }
                else {
                  uVar43 = uVar69 & 0x7ffffff0;
                  puVar45 = (undefined8 *)(lVar28 + lVar32 + 0x10);
                  uVar46 = uVar43;
                  do {
                    uVar70 = puVar45[-1];
                    uVar55 = puVar45[-2];
                    uVar72 = puVar45[1];
                    uVar71 = *puVar45;
                    uVar46 = uVar46 - 0x10;
                    puVar45[-1] = CONCAT26((short)((ulong)uVar70 >> 0x30) + sVar16,
                                           CONCAT24((short)((ulong)uVar70 >> 0x20) + sVar16,
                                                    CONCAT22((short)((ulong)uVar70 >> 0x10) + sVar16
                                                             ,(short)uVar70 + sVar16)));
                    puVar45[-2] = CONCAT26((short)((ulong)uVar55 >> 0x30) + sVar16,
                                           CONCAT24((short)((ulong)uVar55 >> 0x20) + sVar16,
                                                    CONCAT22((short)((ulong)uVar55 >> 0x10) + sVar16
                                                             ,(short)uVar55 + sVar16)));
                    puVar45[1] = CONCAT26((short)((ulong)uVar72 >> 0x30) + sVar16,
                                          CONCAT24((short)((ulong)uVar72 >> 0x20) + sVar16,
                                                   CONCAT22((short)((ulong)uVar72 >> 0x10) + sVar16,
                                                            (short)uVar72 + sVar16)));
                    *puVar45 = CONCAT26((short)((ulong)uVar71 >> 0x30) + sVar16,
                                        CONCAT24((short)((ulong)uVar71 >> 0x20) + sVar16,
                                                 CONCAT22((short)((ulong)uVar71 >> 0x10) + sVar16,
                                                          (short)uVar71 + sVar16)));
                    puVar45 = puVar45 + 4;
                  } while (uVar46 != 0);
                  if (uVar69 == uVar43) goto LAB_00d131a4;
                }
                lVar28 = lVar28 + lVar32;
                do {
                  lVar32 = uVar43 * 2;
                  uVar43 = uVar43 + 1;
                  *(short *)(lVar28 + lVar32) = *(short *)(lVar28 + lVar32) + sVar16;
                } while (uVar43 < uVar38);
              }
LAB_00d131a4:
              uVar69 = *(long *)(local_148 + 0x58) + (long)iVar24;
              if (*(ulong *)(local_148 + 0x50) < uVar69) {
                *(undefined1 *)(local_148 + 0x68) = 1;
              }
              else {
                *(ulong *)(local_148 + 0x58) = uVar69;
              }
              uVar69 = *(long *)(local_148 + 0xf8) + (long)iVar25;
              if (*(ulong *)(local_148 + 0xf0) < uVar69) {
                *(undefined1 *)(local_148 + 0x108) = 1;
              }
              else {
                *(ulong *)(local_148 + 0xf8) = uVar69;
              }
              local_174 = local_174 + (iVar25 >> 1);
              pfVar47 = local_158;
              pfVar39 = local_160;
              pfVar26 = local_218;
              puVar45 = local_150;
              uVar50 = local_1a4;
            }
            goto LAB_00d140b4;
          }
          if ((uVar69 & 1) == 0) {
            iVar24 = (int)local_1b8;
            if ((local_184 & 1) == 0) {
              if (0 < iVar24) {
                uVar8 = (undefined1)(int)local_c0;
                uVar9 = (undefined1)(int)fStack_bc;
                uVar10 = (undefined1)(int)fStack_b8;
                uVar11 = (undefined1)(int)fStack_b4;
                uVar12 = (undefined1)(int)(float)local_d0;
                uVar13 = (undefined1)(int)local_d0._4_4_;
                uVar14 = (undefined1)(int)fStack_c8;
                uVar15 = (undefined1)(int)fStack_c4;
                if (iVar24 == 1) {
                  uVar38 = 0;
                }
                else {
                  uVar38 = (ulong)local_1b8 & 0xfffffffe;
                  puVar29 = (undefined1 *)((long)local_210 + 0x2f);
                  uVar69 = uVar38;
                  do {
                    puVar29[-0x1f] = uVar8;
                    puVar29[-7] = uVar8;
                    puVar29[-0x1e] = uVar9;
                    puVar29[-6] = uVar9;
                    puVar29[-0x1d] = uVar10;
                    puVar29[-5] = uVar10;
                    puVar29[-0x1c] = uVar11;
                    puVar29[-4] = uVar11;
                    puVar29[-0x1b] = uVar12;
                    puVar29[-3] = uVar12;
                    puVar29[-0x1a] = uVar13;
                    puVar29[-2] = uVar13;
                    puVar29[-0x19] = uVar14;
                    puVar29[-1] = uVar14;
                    puVar29[-0x18] = uVar15;
                    *puVar29 = uVar15;
                    uVar69 = uVar69 - 2;
                    puVar29 = puVar29 + 0x30;
                  } while (uVar69 != 0);
                  if (uVar38 == ((ulong)local_1b8 & 0xffffffff)) goto LAB_00d12e18;
                }
                lVar28 = ((ulong)local_1b8 & 0xffffffff) - uVar38;
                puVar29 = (undefined1 *)((long)local_210 + uVar38 * 0x18 + 0x17);
                do {
                  puVar29[-7] = uVar8;
                  puVar29[-6] = uVar9;
                  puVar29[-5] = uVar10;
                  puVar29[-4] = uVar11;
                  puVar29[-3] = uVar12;
                  puVar29[-2] = uVar13;
                  puVar29[-1] = uVar14;
                  *puVar29 = uVar15;
                  lVar28 = lVar28 + -1;
                  puVar29 = puVar29 + 0x18;
                } while (lVar28 != 0);
              }
            }
            else {
              local_100 = &PTR__SpineObject_01c8eb68;
              local_e0 = CONCAT44(fStack_bc / fVar63,local_c0 / fVar62);
              uStack_d8 = CONCAT44(fStack_b4 / fVar66,fStack_b8 / fVar65);
              local_f8 = CONCAT44(local_d0._4_4_ / fVar63,(float)local_d0 / fVar62);
              uStack_f0 = CONCAT44(fStack_c4 / fVar66,fStack_c8 / fVar65);
              local_218 = pfVar26;
              local_e8 = local_100;
              if (0 < iVar24) {
                uVar69 = (ulong)local_1b8 & 0xffffffff;
                pfVar26 = local_210 + 3;
                do {
                  local_130 = &PTR__SpineObject_01c8eb68;
                  uVar70 = puVar22[1];
                  uVar55 = *puVar22;
                  uVar71 = *puVar21;
                  *(undefined8 *)(local_160 + 2) = puVar21[1];
                  *(undefined8 *)local_160 = uVar71;
                  *(undefined8 *)(local_158 + 2) = uVar70;
                  *(undefined8 *)local_158 = uVar55;
                  local_118 = local_130;
                  (**(code **)(*plVar60 + 0x18))
                            (plVar60,pfVar26 + -3,pfVar26 + -2,pfVar26 + -1,pfVar26,&local_118,
                             &local_130);
                  *(char *)(pfVar26 + 1) = (char)(int)(local_110 * 255.0);
                  *(char *)((long)pfVar26 + 5) = (char)(int)(fStack_10c * 255.0);
                  *(char *)((long)pfVar26 + 6) = (char)(int)(fStack_108 * 255.0);
                  *(char *)((long)pfVar26 + 7) = (char)(int)(fStack_104 * 255.0);
                  *(char *)(pfVar26 + 2) = (char)(int)(local_128 * 255.0);
                  *(char *)((long)pfVar26 + 9) = (char)(int)(fStack_124 * 255.0);
                  *(char *)((long)pfVar26 + 10) = (char)(int)(fStack_120 * 255.0);
                  *(char *)((long)pfVar26 + 0xb) = (char)(int)fStack_c4;
                  SpineObject::~SpineObject((SpineObject *)&local_130);
                  SpineObject::~SpineObject((SpineObject *)&local_118);
                  uVar69 = uVar69 - 1;
                  pfVar26 = pfVar26 + 6;
                } while (uVar69 != 0);
              }
              pfVar39 = local_160;
              SpineObject::~SpineObject((SpineObject *)&local_100);
              SpineObject::~SpineObject((SpineObject *)&local_e8);
              pfVar26 = local_218;
            }
            goto LAB_00d12e18;
          }
          SkeletonClipping::clipTriangles
                    ((SkeletonClipping *)*local_150,local_210,local_240,(long)local_238,
                     local_210 + 2,6);
          lVar28 = SkeletonClipping::getClippedTriangles((SkeletonClipping *)*puVar45);
          this_01 = (SkeletonClipping *)*puVar45;
          if (*(long *)(lVar28 + 8) != 0) {
            lVar28 = SkeletonClipping::getClippedVertices(this_01);
            uVar50 = *(uint *)(lVar28 + 8);
            bVar20 = 0;
            local_1b8 = (Texture2D *)(ulong)(uint)((int)uVar50 >> 1);
            uVar48 = ((uVar50 & 0xfffffffe) + ((int)uVar50 >> 1)) * 8;
            local_170 = (ulong)uVar48;
            uVar69 = *(long *)(local_148 + 0x58) + (long)(int)uVar48;
            if ((*(ulong *)(local_148 + 0x70) != 0) && (*(ulong *)(local_148 + 0x70) < uVar69)) {
              if (*(long **)(local_148 + 0xa0) != (long *)0x0) {
                (**(code **)(**(long **)(local_148 + 0xa0) + 0x30))();
              }
              bVar20 = 1;
              *(undefined8 *)(local_148 + 0x58) = 0;
            }
            lVar28 = local_148;
            if (*(ulong *)(local_148 + 0x50) < uVar69) {
              (**(code **)(*(long *)(local_148 + 0x40) + 0x10))
                        (local_1c0,(long)((float)(int)((float)uVar69 * 0.0009765625) * 1024.0),1);
              if (*(long **)(lVar28 + 0xd0) != (long *)0x0) {
                (**(code **)(**(long **)(lVar28 + 0xd0) + 0x30))();
              }
            }
            local_210 = *(float **)(lVar28 + 0x48);
            lVar53 = *(long *)(lVar28 + 0x58);
            bVar19 = (bool)(bVar20 | bVar19);
            lVar32 = SkeletonClipping::getClippedTriangles((SkeletonClipping *)*puVar45);
            lVar56 = *(long *)(lVar28 + 0xe8);
            lVar41 = *(long *)(lVar28 + 0xf8);
            local_208 = (ulong)(uint)(*(int *)(lVar32 + 8) << 1);
            lVar28 = SkeletonClipping::getClippedTriangles((SkeletonClipping *)*puVar45);
            pvVar58 = *(void **)(lVar28 + 0x18);
            lVar28 = SkeletonClipping::getClippedTriangles((SkeletonClipping *)*local_150);
            puVar45 = local_150;
            memcpy((void *)(lVar56 + lVar41),pvVar58,*(long *)(lVar28 + 8) << 1);
            lVar28 = SkeletonClipping::getClippedVertices((SkeletonClipping *)*puVar45);
            lVar32 = *(long *)(lVar28 + 0x18);
            lVar28 = SkeletonClipping::getClippedUVs((SkeletonClipping *)*puVar45);
            plVar60 = local_190;
            if ((local_184 & 1) == 0) {
              pfVar39 = local_160;
              if (1 < (int)uVar50) {
                lVar56 = 0;
                puVar29 = (undefined1 *)((long)local_210 + lVar53 + 0x17);
                puVar42 = (undefined4 *)(*(long *)(lVar28 + 0x18) + 4);
                puVar44 = (undefined4 *)(lVar32 + 4);
                do {
                  lVar56 = lVar56 + 1;
                  *(undefined4 *)(puVar29 + -0x17) = puVar44[-1];
                  *(undefined4 *)(puVar29 + -0x13) = *puVar44;
                  *(undefined4 *)(puVar29 + -0xf) = puVar42[-1];
                  uVar68 = *puVar42;
                  puVar29[-7] = (char)(int)local_c0;
                  puVar29[-6] = (char)(int)fStack_bc;
                  puVar29[-5] = (char)(int)fStack_b8;
                  puVar29[-4] = (char)(int)fStack_b4;
                  puVar29[-3] = (char)(int)(float)local_d0;
                  puVar29[-2] = (char)(int)local_d0._4_4_;
                  puVar29[-1] = (char)(int)fStack_c8;
                  *puVar29 = (char)(int)fStack_c4;
                  *(undefined4 *)(puVar29 + -0xb) = uVar68;
                  puVar29 = puVar29 + 0x18;
                  puVar42 = puVar42 + 2;
                  puVar44 = puVar44 + 2;
                } while (lVar56 < (int)local_1b8);
              }
            }
            else {
              local_100 = &PTR__SpineObject_01c8eb68;
              fVar62 = (float)((ulong)local_1f0 >> 0x20);
              local_e0 = CONCAT44(fStack_bc / fVar62,local_c0 / (float)local_1f0);
              fVar63 = (float)((ulong)uStack_1e8 >> 0x20);
              uStack_d8 = CONCAT44(fStack_b4 / fVar63,fStack_b8 / (float)uStack_1e8);
              local_f8 = CONCAT44(local_d0._4_4_ / fVar62,(float)local_d0 / (float)local_1f0);
              uStack_f0 = CONCAT44(fStack_c4 / fVar63,fStack_c8 / (float)uStack_1e8);
              local_e8 = local_100;
              if (1 < (int)uVar50) {
                lVar56 = 0;
                puVar42 = (undefined4 *)((long)local_210 + lVar53);
                local_1b8 = (Texture2D *)(long)(int)local_1b8;
                puVar44 = (undefined4 *)(*(long *)(lVar28 + 0x18) + 4);
                puVar54 = (undefined4 *)(lVar32 + 4);
                do {
                  uVar71 = local_1a0[1];
                  uVar70 = *local_1a0;
                  uVar55 = *local_198;
                  local_130 = &PTR__SpineObject_01c8eb68;
                  *(undefined8 *)(local_158 + 2) = local_198[1];
                  *(undefined8 *)local_158 = uVar55;
                  local_118 = local_130;
                  *(undefined8 *)(local_160 + 2) = uVar71;
                  *(undefined8 *)local_160 = uVar70;
                  *puVar42 = puVar54[-1];
                  puVar42[1] = *puVar54;
                  puVar42[2] = puVar44[-1];
                  puVar42[3] = *puVar44;
                  (**(code **)(*plVar60 + 0x18))
                            (plVar60,puVar42,puVar42 + 1,puVar42 + 2,puVar42 + 3,&local_118,
                             &local_130);
                  *(char *)(puVar42 + 4) = (char)(int)(local_110 * 255.0);
                  *(char *)((long)puVar42 + 0x11) = (char)(int)(fStack_10c * 255.0);
                  *(char *)((long)puVar42 + 0x12) = (char)(int)(fStack_108 * 255.0);
                  *(char *)((long)puVar42 + 0x13) = (char)(int)(fStack_104 * 255.0);
                  *(char *)(puVar42 + 5) = (char)(int)(local_128 * 255.0);
                  *(char *)((long)puVar42 + 0x15) = (char)(int)(fStack_124 * 255.0);
                  *(char *)((long)puVar42 + 0x16) = (char)(int)(fStack_120 * 255.0);
                  *(char *)((long)puVar42 + 0x17) = (char)(int)fStack_c4;
                  SpineObject::~SpineObject((SpineObject *)&local_130);
                  SpineObject::~SpineObject((SpineObject *)&local_118);
                  lVar56 = lVar56 + 1;
                  puVar42 = puVar42 + 6;
                  puVar44 = puVar44 + 2;
                  puVar54 = puVar54 + 2;
                } while (lVar56 < (long)local_1b8);
              }
LAB_00d1299c:
              SpineObject::~SpineObject((SpineObject *)&local_100);
              SpineObject::~SpineObject((SpineObject *)&local_e8);
              pfVar39 = local_160;
            }
            goto LAB_00d12e18;
          }
        }
LAB_00d140b8:
        SkeletonClipping::clipEnd(this_01,this_04);
      }
LAB_00d140c0:
      lVar61 = lVar61 + 1;
    } while (lVar61 != local_140);
    iVar25 = (int)local_168;
    iVar52 = (int)local_180;
    plVar60 = local_190;
    uVar48 = local_184;
    iVar24 = local_174;
  }
  uVar69 = SkeletonClipping::clipEnd((SkeletonClipping *)*puVar45);
  if ((uVar48 & 1) != 0) {
    uVar69 = (**(code **)(*plVar60 + 0x20))(plVar60);
  }
  if (iVar52 != -1) {
    uVar69 = (**(code **)(*(long *)pfVar26 + 0x28))(pfVar26,(long)(iVar25 + -1),iVar52,iVar24);
  }
  if (*(char *)(in_x0 + 0x48) == '\0') {
    lVar28 = *(long *)(in_x0 + 0x90);
    if (lVar28 != 0) goto LAB_00d142f4;
LAB_00d1434c:
    this_02 = *(RealTimeAttachUtil **)(in_x0 + 0xa8);
  }
  else {
    lVar61 = Skeleton::getBones(*(Skeleton **)(in_x0 + 0x30));
    lVar32 = *(long *)(lVar61 + 8);
    plVar60 = (long *)(in_x0 + 0x90);
    lVar28 = *plVar60;
    uVar38 = *(ulong *)(lVar28 + 0x10);
    uVar43 = *(ulong *)(lVar28 + 0x18);
    uVar69 = uVar43 + 4;
    if (uVar38 < uVar69) {
      *(undefined1 *)(lVar28 + 0x28) = 1;
      uVar46 = uVar69;
      if (uVar38 < uVar69) goto LAB_00d1416c;
LAB_00d141ac:
      uVar69 = (ulong)(uint)(float)(ulong)(lVar32 << 2);
      *(float *)(*(long *)(lVar28 + 8) + uVar43) = (float)(ulong)(lVar32 << 2);
      *(ulong *)(lVar28 + 0x18) = uVar46;
    }
    else {
      *(undefined4 *)(*(long *)(lVar28 + 8) + uVar43) = 0x40400000;
      uVar46 = uVar43 + 8;
      *(ulong *)(lVar28 + 0x18) = uVar69;
      uVar43 = uVar69;
      if (uVar46 <= uVar38) goto LAB_00d141ac;
LAB_00d1416c:
      *(undefined1 *)(lVar28 + 0x28) = 1;
      uVar69 = extraout_d0_00;
    }
    if (lVar32 != 0) {
      lVar56 = 0;
      do {
        pBVar33 = *(Bone **)(*(long *)(lVar61 + 0x18) + lVar56 * 8);
        pBVar36 = (BoneData *)Bone::getData(pBVar33);
        fVar62 = (float)BoneData::getLength(pBVar36);
        fVar63 = (float)Bone::getA(pBVar33);
        fVar64 = (float)Bone::getWorldX(pBVar33);
        pBVar36 = (BoneData *)Bone::getData(pBVar33);
        fVar65 = (float)BoneData::getLength(pBVar36);
        fVar66 = (float)Bone::getC(pBVar33);
        fVar67 = (float)Bone::getWorldY(pBVar33);
        lVar28 = *plVar60;
        uVar68 = Bone::getWorldX(pBVar33);
        uVar69 = *(long *)(lVar28 + 0x18) + 4;
        if (*(ulong *)(lVar28 + 0x10) < uVar69) {
          *(undefined1 *)(lVar28 + 0x28) = 1;
        }
        else {
          *(undefined4 *)(*(long *)(lVar28 + 8) + *(long *)(lVar28 + 0x18)) = uVar68;
          *(ulong *)(lVar28 + 0x18) = uVar69;
        }
        lVar28 = *plVar60;
        uVar69 = Bone::getWorldY(pBVar33);
        uVar38 = *(long *)(lVar28 + 0x18) + 4;
        if (*(ulong *)(lVar28 + 0x10) < uVar38) {
          *(undefined1 *)(lVar28 + 0x28) = 1;
        }
        else {
          *(int *)(*(long *)(lVar28 + 8) + *(long *)(lVar28 + 0x18)) = (int)uVar69;
          *(ulong *)(lVar28 + 0x18) = uVar38;
        }
        lVar28 = *plVar60;
        uVar43 = *(ulong *)(lVar28 + 0x10);
        uVar46 = *(ulong *)(lVar28 + 0x18);
        uVar38 = uVar46 + 4;
        if (uVar43 < uVar38) {
          *(undefined1 *)(lVar28 + 0x28) = 1;
          uVar35 = uVar38;
          if (uVar38 <= uVar43) goto LAB_00d142a8;
LAB_00d142e4:
          *(undefined1 *)(lVar28 + 0x28) = 1;
        }
        else {
          fVar64 = fVar62 * fVar63 + fVar64;
          uVar69 = (ulong)(uint)fVar64;
          *(float *)(*(long *)(lVar28 + 8) + uVar46) = fVar64;
          uVar35 = uVar46 + 8;
          *(ulong *)(lVar28 + 0x18) = uVar38;
          uVar46 = uVar38;
          if (uVar43 < uVar35) goto LAB_00d142e4;
LAB_00d142a8:
          fVar67 = fVar65 * fVar66 + fVar67;
          uVar69 = (ulong)(uint)fVar67;
          *(float *)(*(long *)(lVar28 + 8) + uVar46) = fVar67;
          *(ulong *)(lVar28 + 0x18) = uVar35;
        }
        lVar56 = lVar56 + 1;
      } while (lVar32 != lVar56);
    }
LAB_00d142f4:
    if (*(char *)(lVar28 + 0x28) != '\0') {
      *(undefined8 *)(lVar28 + 0x18) = 0;
      *(undefined8 *)(lVar28 + 0x20) = 0;
      cocos2d::log("Spine debug data is too large, debug buffer has no space to put in it!!!!!!!!!!"
                  );
      uVar69 = cocos2d::log("You can adjust MAX_DEBUG_BUFFER_SIZE macro");
      lVar28 = *(long *)(in_x0 + 0x90);
    }
    uVar38 = *(long *)(lVar28 + 0x18) + 4;
    if (uVar38 <= *(ulong *)(lVar28 + 0x10)) {
      *(undefined4 *)(*(long *)(lVar28 + 8) + *(long *)(lVar28 + 0x18)) = 0;
      *(ulong *)(lVar28 + 0x18) = uVar38;
      goto LAB_00d1434c;
    }
    *(undefined1 *)(lVar28 + 0x28) = 1;
    this_02 = *(RealTimeAttachUtil **)(in_x0 + 0xa8);
  }
  if (this_02 != (RealTimeAttachUtil *)0x0) {
    uVar69 = RealTimeAttachUtil::syncAttachedNode
                       (this_02,*(NodeProxy **)(in_x0 + 0x98),*(Skeleton **)(in_x0 + 0x30));
  }
LAB_00d14360:
  if (*(long *)(lVar17 + 0x28) == local_b0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar69);
}

