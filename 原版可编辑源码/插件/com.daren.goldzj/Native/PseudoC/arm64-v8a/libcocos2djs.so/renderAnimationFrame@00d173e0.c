
/* spine::SkeletonCache::renderAnimationFrame(spine::SkeletonCache::AnimationData*) */

void __thiscall
spine::SkeletonCache::renderAnimationFrame(SkeletonCache *this,AnimationData *param_1)

{
  vector<spine::SkeletonCache::BoneData*,std::__ndk1::allocator<spine::SkeletonCache::BoneData*>>
  *pvVar1;
  vector<spine::SkeletonCache::BoneData*,std::__ndk1::allocator<spine::SkeletonCache::BoneData*>>
  *pvVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined1 uVar6;
  long lVar14;
  int iVar15;
  Skeleton *this_00;
  Mat4 *this_01;
  RTTI *pRVar16;
  RegionAttachment *this_02;
  Bone *pBVar17;
  MeshAttachment *this_03;
  ClippingAttachment *pCVar18;
  Color4F *this_04;
  undefined1 *puVar19;
  SlotData *pSVar20;
  long *plVar21;
  ulong uVar22;
  long lVar23;
  SkeletonClipping *this_05;
  undefined4 *puVar24;
  short sVar25;
  float *pfVar26;
  long lVar27;
  long lVar28;
  int *piVar29;
  short *psVar30;
  ulong uVar31;
  vector<spine::SkeletonCache::FrameData*,std::__ndk1::allocator<spine::SkeletonCache::FrameData*>>
  *this_06;
  vector<spine::SkeletonCache::BoneData*,std::__ndk1::allocator<spine::SkeletonCache::BoneData*>>
  *this_07;
  vector<spine::SkeletonCache::SegmentData*,std::__ndk1::allocator<spine::SkeletonCache::SegmentData*>>
  *pvVar32;
  ulong uVar33;
  long lVar34;
  long lVar35;
  Texture2D *this_08;
  undefined8 *puVar36;
  long lVar37;
  void *__src;
  long lVar38;
  int iVar39;
  undefined4 *puVar40;
  long lVar41;
  long lVar42;
  Slot *this_09;
  undefined4 uVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  undefined8 uVar46;
  undefined8 uVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  ushort *local_160;
  int local_144;
  float *local_140;
  int local_130;
  int local_12c;
  undefined8 local_108;
  ulong local_100;
  ulong local_f8;
  undefined8 local_f0;
  float fStack_e8;
  float fStack_e4;
  float local_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  undefined8 local_d0;
  undefined8 uStack_c8;
  FrameData *local_c0;
  undefined8 uStack_b8;
  Mat4 *local_a8;
  long local_a0;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  
  lVar14 = tpidr_el0;
  local_a0 = *(long *)(lVar14 + 0x28);
  this_06 = (vector<spine::SkeletonCache::FrameData*,std::__ndk1::allocator<spine::SkeletonCache::FrameData*>>
             *)(param_1 + 0x20);
  lVar34 = *(long *)this_06;
  puVar36 = *(undefined8 **)(param_1 + 0x28);
  local_c0 = operator_new(400);
  *(undefined8 *)(local_c0 + 0x40) = 0;
  *(undefined8 *)(local_c0 + 0x80) = 0;
  *(undefined8 *)(local_c0 + 0xb0) = 0;
  *(undefined ***)(local_c0 + 0x50) = &PTR__IOBuffer_01c8e178;
  *(undefined ***)(local_c0 + 0xf0) = &PTR__IOBuffer_01c8e178;
  *(undefined8 *)(local_c0 + 0xe0) = 0;
  local_c0[0x78] = (FrameData)0x0;
  *(undefined8 *)(local_c0 + 0x120) = 0;
  *(undefined8 *)(local_c0 + 0x150) = 0;
  *(undefined8 *)(local_c0 + 0x180) = 0;
  local_c0[0x118] = (FrameData)0x0;
  *(undefined8 *)(local_c0 + 0x28) = 0;
  *(undefined8 *)(local_c0 + 0x20) = 0;
  *(undefined8 *)(local_c0 + 0x38) = 0;
  *(undefined8 *)(local_c0 + 0x30) = 0;
  *(undefined8 *)(local_c0 + 8) = 0;
  *(undefined8 *)local_c0 = 0;
  *(undefined8 *)(local_c0 + 0x18) = 0;
  *(undefined8 *)(local_c0 + 0x10) = 0;
  *(undefined8 *)(local_c0 + 0x70) = 0;
  *(undefined8 *)(local_c0 + 0x68) = 0;
  *(undefined8 *)(local_c0 + 0x60) = 0;
  *(undefined8 *)(local_c0 + 0x58) = 0;
  *(undefined8 *)(local_c0 + 0x100) = 0;
  *(undefined8 *)(local_c0 + 0xf8) = 0;
  *(undefined8 *)(local_c0 + 0x110) = 0;
  *(undefined8 *)(local_c0 + 0x108) = 0;
  if (*(undefined8 **)(param_1 + 0x30) == puVar36) {
    std::__ndk1::
    vector<spine::SkeletonCache::FrameData*,std::__ndk1::allocator<spine::SkeletonCache::FrameData*>>
    ::__push_back_slow_path<spine::SkeletonCache::FrameData*const&>(this_06,&local_c0);
    this_00 = *(Skeleton **)(this + 0x30);
  }
  else {
    *puVar36 = local_c0;
    *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 8;
    this_00 = *(Skeleton **)(this + 0x30);
  }
  if (this_00 != (Skeleton *)0x0) {
    this_07 = *(vector<spine::SkeletonCache::BoneData*,std::__ndk1::allocator<spine::SkeletonCache::BoneData*>>
                **)(*(long *)this_06 + ((long)puVar36 - lVar34 >> 3) * 8);
    lVar34 = Skeleton::getColor(this_00);
    if (*(float *)(lVar34 + 0x14) != 0.0) {
      cocos2d::Color4F::Color4F((Color4F *)&local_c0,-1.0,-1.0,-1.0,-1.0);
      cocos2d::Color4F::Color4F((Color4F *)&local_d0,-1.0,-1.0,-1.0,-1.0);
      cocos2d::Color4F::Color4F((Color4F *)&local_e0);
      cocos2d::Color4F::Color4F((Color4F *)&local_f0);
      lVar34 = Skeleton::getBones(*(Skeleton **)(this + 0x30));
      lVar37 = *(long *)(lVar34 + 8);
      if (lVar37 != 0) {
        lVar38 = 0;
        do {
          lVar23 = *(long *)this_07;
          lVar42 = *(long *)(this_07 + 8);
          lVar41 = *(long *)(lVar34 + 0x18);
          this_01 = operator_new(0x40);
          cocos2d::Mat4::Mat4(this_01);
          local_a8 = this_01;
          if (*(undefined8 **)(this_07 + 8) == *(undefined8 **)(this_07 + 0x10)) {
            std::__ndk1::
            vector<spine::SkeletonCache::BoneData*,std::__ndk1::allocator<spine::SkeletonCache::BoneData*>>
            ::__push_back_slow_path<spine::SkeletonCache::BoneData*const&>
                      (this_07,(BoneData **)&local_a8);
          }
          else {
            **(undefined8 **)(this_07 + 8) = this_01;
            *(long *)(this_07 + 8) = *(long *)(this_07 + 8) + 8;
          }
          lVar35 = lVar38 * 8;
          puVar40 = *(undefined4 **)(*(long *)this_07 + (lVar42 - lVar23 >> 3) * 8);
          uVar43 = Bone::getA(*(Bone **)(lVar41 + lVar35));
          *puVar40 = uVar43;
          uVar43 = Bone::getC(*(Bone **)(lVar41 + lVar35));
          puVar40[1] = uVar43;
          uVar43 = Bone::getB(*(Bone **)(lVar41 + lVar35));
          puVar40[4] = uVar43;
          uVar43 = Bone::getD(*(Bone **)(lVar41 + lVar35));
          puVar40[5] = uVar43;
          uVar43 = Bone::getWorldX(*(Bone **)(lVar41 + lVar35));
          puVar40[0xc] = uVar43;
          uVar43 = Bone::getWorldY(*(Bone **)(lVar41 + lVar35));
          lVar38 = lVar38 + 1;
          puVar40[0xd] = uVar43;
        } while (lVar37 != lVar38);
      }
      lVar34 = Skeleton::getDrawOrder(*(Skeleton **)(this + 0x30));
      lVar37 = *(long *)(lVar34 + 8);
      if (lVar37 == 0) {
        SkeletonClipping::clipEnd(*(SkeletonClipping **)(this + 0x60));
      }
      else {
        pvVar1 = this_07 + 0xf0;
        pvVar2 = this_07 + 0x50;
        pvVar32 = (vector<spine::SkeletonCache::SegmentData*,std::__ndk1::allocator<spine::SkeletonCache::SegmentData*>>
                   *)(this_07 + 0x30);
        local_12c = -1;
        lVar38 = 0;
        iVar39 = 0;
        local_144 = -1;
        local_108 = 0;
        local_f8 = 0xffffffff;
        do {
          this_09 = *(Slot **)(*(long *)(lVar34 + 0x18) + lVar38 * 8);
          plVar21 = (long *)Slot::getBone(this_09);
          uVar22 = (**(code **)(*plVar21 + 0x20))();
          if ((uVar22 & 1) != 0) {
            lVar23 = Slot::getAttachment(this_09);
            if ((lVar23 == 0) ||
               (lVar23 = Slot::getColor(this_09), *(float *)(lVar23 + 0x14) == 0.0)) {
LAB_00d18324:
              this_05 = *(SkeletonClipping **)(this + 0x60);
            }
            else {
              plVar21 = (long *)Slot::getAttachment(this_09);
              pRVar16 = (RTTI *)(**(code **)(*plVar21 + 0x10))();
              uVar22 = RTTI::isExactly(pRVar16,(RTTI *)RegionAttachment::rtti);
              this_02 = (RegionAttachment *)Slot::getAttachment(this_09);
              if ((uVar22 & 1) == 0) {
                pRVar16 = (RTTI *)(**(code **)(*(long *)this_02 + 0x10))(this_02);
                uVar22 = RTTI::isExactly(pRVar16,(RTTI *)MeshAttachment::rtti);
                this_03 = (MeshAttachment *)Slot::getAttachment(this_09);
                if ((uVar22 & 1) == 0) {
                  pRVar16 = (RTTI *)(**(code **)(*(long *)this_03 + 0x10))(this_03);
                  uVar22 = RTTI::isExactly(pRVar16,(RTTI *)ClippingAttachment::rtti);
                  if ((uVar22 & 1) != 0) {
                    pCVar18 = (ClippingAttachment *)Slot::getAttachment(this_09);
                    SkeletonClipping::clipStart(*(SkeletonClipping **)(this + 0x60),this_09,pCVar18)
                    ;
                    goto LAB_00d18330;
                  }
                }
                else {
                  lVar42 = *(long *)(this_03 + 0x88);
                  lVar23 = MeshAttachment::getColor(this_03);
                  if (*(float *)(lVar23 + 0x14) != 0.0) {
                    uVar3 = *(uint *)(*(long *)(lVar42 + 0x10) + 0x10);
                    local_100 = (ulong)uVar3;
                    local_130 = uVar3 * 0x18;
                    uVar22 = *(long *)(this_07 + 0x108) + (long)local_130;
                    if ((*(ulong *)(this_07 + 0x120) != 0) && (*(ulong *)(this_07 + 0x120) < uVar22)
                       ) {
                      if (*(long **)(this_07 + 0x150) != (long *)0x0) {
                        (**(code **)(**(long **)(this_07 + 0x150) + 0x30))();
                      }
                      *(undefined8 *)(this_07 + 0x108) = 0;
                    }
                    if (*(ulong *)(this_07 + 0x100) < uVar22) {
                      (**(code **)(*(long *)(this_07 + 0xf0) + 0x10))
                                (pvVar1,(long)((float)(int)((float)uVar22 * 0.0009765625) * 1024.0),
                                 1);
                      if (*(long **)(this_07 + 0x180) != (long *)0x0) {
                        (**(code **)(**(long **)(this_07 + 0x180) + 0x30))();
                      }
                    }
                    local_140 = (float *)(*(long *)(this_07 + 0xf8) + *(long *)(this_07 + 0x108));
                    if (0 < (int)uVar3) {
                      lVar23 = 8;
                      pfVar26 = local_140 + 2;
                      uVar22 = local_100;
                      do {
                        uVar22 = uVar22 - 1;
                        puVar36 = (undefined8 *)(**(long **)(lVar42 + 0x10) + lVar23);
                        lVar23 = lVar23 + 0x14;
                        *(undefined8 *)pfVar26 = *puVar36;
                        pfVar26 = pfVar26 + 6;
                      } while (uVar22 != 0);
                    }
                    uVar22 = VertexAttachment::getWorldVerticesLength((VertexAttachment *)this_03);
                    VertexAttachment::computeWorldVertices
                              ((VertexAttachment *)this_03,this_09,0,uVar22,local_140,0,6);
                    iVar4 = *(int *)(*(long *)(lVar42 + 0x10) + 0x14);
                    uVar3 = iVar4 << 1;
                    uVar22 = *(long *)(this_07 + 0x68) + (long)(int)uVar3;
                    if ((*(ulong *)(this_07 + 0x80) != 0) && (*(ulong *)(this_07 + 0x80) < uVar22))
                    {
                      if (*(long **)(this_07 + 0xb0) != (long *)0x0) {
                        (**(code **)(**(long **)(this_07 + 0xb0) + 0x30))();
                      }
                      *(undefined8 *)(this_07 + 0x68) = 0;
                    }
                    if (*(ulong *)(this_07 + 0x60) < uVar22) {
                      (**(code **)(*(long *)(this_07 + 0x50) + 0x10))
                                (pvVar2,(long)((float)(int)((float)uVar22 * 0.0009765625) * 1024.0),
                                 1);
                      if (*(long **)(this_07 + 0xe0) != (long *)0x0) {
                        (**(code **)(**(long **)(this_07 + 0xe0) + 0x30))();
                      }
                    }
                    local_160 = (ushort *)(*(long *)(this_07 + 0x58) + *(long *)(this_07 + 0x68));
                    memcpy(local_160,*(void **)(*(long *)(lVar42 + 0x10) + 8),(long)(int)uVar3);
                    lVar23 = MeshAttachment::getColor(this_03);
                    local_e0 = *(float *)(lVar23 + 8);
                    lVar23 = MeshAttachment::getColor(this_03);
                    fStack_dc = *(float *)(lVar23 + 0xc);
                    lVar23 = MeshAttachment::getColor(this_03);
                    fStack_d8 = *(float *)(lVar23 + 0x10);
                    lVar23 = MeshAttachment::getColor(this_03);
                    goto LAB_00d17ab4;
                  }
                }
                goto LAB_00d18324;
              }
              lVar42 = *(long *)(this_02 + 0x30);
              lVar23 = RegionAttachment::getColor(this_02);
              if (*(float *)(lVar23 + 0x14) == 0.0) goto LAB_00d18324;
              uVar3 = *(uint *)(*(long *)(lVar42 + 0x10) + 0x10);
              local_100 = (ulong)uVar3;
              local_130 = uVar3 * 0x18;
              uVar22 = *(long *)(this_07 + 0x108) + (long)local_130;
              if ((*(ulong *)(this_07 + 0x120) != 0) && (*(ulong *)(this_07 + 0x120) < uVar22)) {
                if (*(long **)(this_07 + 0x150) != (long *)0x0) {
                  (**(code **)(**(long **)(this_07 + 0x150) + 0x30))();
                }
                *(undefined8 *)(this_07 + 0x108) = 0;
              }
              if (*(ulong *)(this_07 + 0x100) < uVar22) {
                (**(code **)(*(long *)(this_07 + 0xf0) + 0x10))
                          (pvVar1,(long)((float)(int)((float)uVar22 * 0.0009765625) * 1024.0),1);
                if (*(long **)(this_07 + 0x180) != (long *)0x0) {
                  (**(code **)(**(long **)(this_07 + 0x180) + 0x30))();
                }
              }
              local_140 = (float *)(*(long *)(this_07 + 0xf8) + *(long *)(this_07 + 0x108));
              if (0 < (int)uVar3) {
                lVar23 = 8;
                pfVar26 = local_140 + 2;
                uVar22 = local_100;
                do {
                  uVar22 = uVar22 - 1;
                  puVar36 = (undefined8 *)(**(long **)(lVar42 + 0x10) + lVar23);
                  lVar23 = lVar23 + 0x14;
                  *(undefined8 *)pfVar26 = *puVar36;
                  pfVar26 = pfVar26 + 6;
                } while (uVar22 != 0);
              }
              pBVar17 = (Bone *)Slot::getBone(this_09);
              RegionAttachment::computeWorldVertices(this_02,pBVar17,local_140,0,6);
              iVar4 = *(int *)(*(long *)(lVar42 + 0x10) + 0x14);
              uVar3 = iVar4 << 1;
              uVar22 = *(long *)(this_07 + 0x68) + (long)(int)uVar3;
              if ((*(ulong *)(this_07 + 0x80) != 0) && (*(ulong *)(this_07 + 0x80) < uVar22)) {
                if (*(long **)(this_07 + 0xb0) != (long *)0x0) {
                  (**(code **)(**(long **)(this_07 + 0xb0) + 0x30))();
                }
                *(undefined8 *)(this_07 + 0x68) = 0;
              }
              if (*(ulong *)(this_07 + 0x60) < uVar22) {
                (**(code **)(*(long *)(this_07 + 0x50) + 0x10))
                          (pvVar2,(long)((float)(int)((float)uVar22 * 0.0009765625) * 1024.0),1);
                if (*(long **)(this_07 + 0xe0) != (long *)0x0) {
                  (**(code **)(**(long **)(this_07 + 0xe0) + 0x30))();
                }
              }
              local_160 = (ushort *)(*(long *)(this_07 + 0x58) + *(long *)(this_07 + 0x68));
              memcpy(local_160,*(void **)(*(long *)(lVar42 + 0x10) + 8),(long)(int)uVar3);
              lVar23 = RegionAttachment::getColor(this_02);
              local_e0 = *(float *)(lVar23 + 8);
              lVar23 = RegionAttachment::getColor(this_02);
              fStack_dc = *(float *)(lVar23 + 0xc);
              lVar23 = RegionAttachment::getColor(this_02);
              fStack_d8 = *(float *)(lVar23 + 0x10);
              lVar23 = RegionAttachment::getColor(this_02);
LAB_00d17ab4:
              fStack_d4 = *(float *)(lVar23 + 0x14);
              lVar23 = Skeleton::getColor(*(Skeleton **)(this + 0x30));
              fVar48 = *(float *)(lVar23 + 0x14);
              lVar23 = Slot::getColor(this_09);
              fStack_d4 = fVar48 * *(float *)(lVar23 + 0x14) * fStack_d4 * 255.0;
              if (fStack_d4 == 0.0) goto LAB_00d18324;
              lVar23 = Skeleton::getColor(*(Skeleton **)(this + 0x30));
              fVar48 = *(float *)(lVar23 + 8) * local_e0 * 255.0;
              lVar23 = Skeleton::getColor(*(Skeleton **)(this + 0x30));
              fVar49 = *(float *)(lVar23 + 0xc) * fStack_dc * 255.0;
              lVar23 = Skeleton::getColor(*(Skeleton **)(this + 0x30));
              fVar50 = *(float *)(lVar23 + 0x10) * fStack_d8 * 255.0;
              lVar23 = Slot::getColor(this_09);
              local_e0 = fVar48 * *(float *)(lVar23 + 8);
              lVar23 = Slot::getColor(this_09);
              fStack_dc = fVar49 * *(float *)(lVar23 + 0xc);
              lVar23 = Slot::getColor(this_09);
              fStack_d8 = fVar50 * *(float *)(lVar23 + 0x10);
              uVar22 = Slot::hasDarkColor(this_09);
              if ((uVar22 & 1) == 0) {
                fStack_e8 = 0.0;
                local_f0 = 0;
              }
              else {
                lVar23 = Slot::getDarkColor(this_09);
                local_f0 = CONCAT44(local_f0._4_4_,fVar48 * *(float *)(lVar23 + 8));
                lVar23 = Slot::getDarkColor(this_09);
                local_f0 = CONCAT44(fVar49 * *(float *)(lVar23 + 0xc),(float)local_f0);
                lVar23 = Slot::getDarkColor(this_09);
                fStack_e8 = fVar50 * *(float *)(lVar23 + 0x10);
              }
              fStack_e4 = 0.0;
              uVar22 = cocos2d::Color4F::operator!=((Color4F *)&local_c0,(Color4F *)&local_e0);
              if (((uVar22 & 1) != 0) ||
                 (uVar22 = cocos2d::Color4F::operator!=((Color4F *)&local_d0,(Color4F *)&local_f0),
                 (uVar22 & 1) != 0)) {
                uStack_c8 = CONCAT44(fStack_e4,fStack_e8);
                uStack_b8 = CONCAT44(fStack_d4,fStack_d8);
                local_c0 = (FrameData *)CONCAT44(fStack_dc,local_e0);
                local_d0 = local_f0;
                lVar23 = *(long *)(this_07 + 0x20) - *(long *)(this_07 + 0x18);
                lVar41 = lVar23 >> 3;
                if (lVar23 != 0) {
                  *(int *)(*(long *)(*(long *)(this_07 + 0x18) + lVar41 * 8 + -8) + 0x20) =
                       (int)((ulong)(long)*(int *)(this_07 + 0x108) >> 2);
                }
                this_04 = operator_new(0x24);
                cocos2d::Color4F::Color4F(this_04);
                cocos2d::Color4F::Color4F(this_04 + 0x10);
                *(undefined4 *)(this_04 + 0x20) = 0;
                local_a8 = (Mat4 *)this_04;
                if (*(undefined8 **)(this_07 + 0x20) == *(undefined8 **)(this_07 + 0x28)) {
                  std::__ndk1::
                  vector<spine::SkeletonCache::ColorData*,std::__ndk1::allocator<spine::SkeletonCache::ColorData*>>
                  ::__push_back_slow_path<spine::SkeletonCache::ColorData*const&>
                            ((vector<spine::SkeletonCache::ColorData*,std::__ndk1::allocator<spine::SkeletonCache::ColorData*>>
                              *)(this_07 + 0x18),(ColorData **)&local_a8);
                }
                else {
                  **(undefined8 **)(this_07 + 0x20) = this_04;
                  *(long *)(this_07 + 0x20) = *(long *)(this_07 + 0x20) + 8;
                }
                puVar36 = *(undefined8 **)(*(long *)(this_07 + 0x18) + lVar41 * 8);
                puVar36[1] = CONCAT44(fStack_d4,fStack_d8);
                *puVar36 = CONCAT44(fStack_dc,local_e0);
                puVar36[3] = CONCAT44(fStack_e4,fStack_e8);
                puVar36[2] = local_f0;
              }
              uVar22 = SkeletonClipping::isClipping(*(SkeletonClipping **)(this + 0x60));
              if ((uVar22 & 1) == 0) {
                if (0 < (int)local_100) {
                  uVar6 = (undefined1)(int)local_e0;
                  uVar7 = (undefined1)(int)fStack_dc;
                  uVar8 = (undefined1)(int)fStack_d8;
                  uVar9 = (undefined1)(int)fStack_d4;
                  uVar10 = (undefined1)(int)(float)local_f0;
                  uVar11 = (undefined1)(int)local_f0._4_4_;
                  uVar12 = (undefined1)(int)fStack_e8;
                  uVar13 = (undefined1)(int)fStack_e4;
                  if ((int)local_100 == 1) {
                    uVar33 = 0;
                  }
                  else {
                    uVar33 = local_100 & 0xfffffffe;
                    puVar19 = (undefined1 *)((long)local_140 + 0x2f);
                    uVar22 = uVar33;
                    do {
                      puVar19[-0x1f] = uVar6;
                      puVar19[-7] = uVar6;
                      puVar19[-0x1e] = uVar7;
                      puVar19[-6] = uVar7;
                      puVar19[-0x1d] = uVar8;
                      puVar19[-5] = uVar8;
                      puVar19[-0x1c] = uVar9;
                      puVar19[-4] = uVar9;
                      puVar19[-0x1b] = uVar10;
                      puVar19[-3] = uVar10;
                      puVar19[-0x1a] = uVar11;
                      puVar19[-2] = uVar11;
                      puVar19[-0x19] = uVar12;
                      puVar19[-1] = uVar12;
                      puVar19[-0x18] = uVar13;
                      *puVar19 = uVar13;
                      uVar22 = uVar22 - 2;
                      puVar19 = puVar19 + 0x30;
                    } while (uVar22 != 0);
                    if (uVar33 == local_100) goto LAB_00d18020;
                  }
                  lVar23 = local_100 - uVar33;
                  puVar19 = (undefined1 *)((long)local_140 + uVar33 * 0x18 + 0x17);
                  do {
                    puVar19[-7] = uVar6;
                    puVar19[-6] = uVar7;
                    puVar19[-5] = uVar8;
                    puVar19[-4] = uVar9;
                    puVar19[-3] = uVar10;
                    puVar19[-2] = uVar11;
                    puVar19[-1] = uVar12;
                    *puVar19 = uVar13;
                    lVar23 = lVar23 + -1;
                    puVar19 = puVar19 + 0x18;
                  } while (lVar23 != 0);
                }
LAB_00d18020:
                this_08 = *(Texture2D **)(lVar42 + 8);
                lVar23 = cocos2d::middleware::Texture2D::getNativeTexture(this_08);
                iVar4 = *(int *)(lVar23 + 0xc);
                if (local_12c == iVar4) {
                  pSVar20 = (SlotData *)Slot::getData(this_09);
                  iVar15 = SlotData::getBlendMode(pSVar20);
                  if (local_144 != iVar15) goto LAB_00d1805c;
                }
                else {
LAB_00d1805c:
                  if ((int)local_f8 == -1) {
                    lVar23 = *(long *)pvVar32;
                  }
                  else {
                    lVar23 = *(long *)(this_07 + 0x30);
                    puVar36 = *(undefined8 **)(this_07 + 0x38);
                    uVar33 = (long)iVar39 - 1;
                    uVar22 = (long)puVar36 - lVar23 >> 3;
                    if (uVar22 < uVar33) {
                      piVar29 = (int *)0x0;
                    }
                    else {
                      if (uVar22 == uVar33) {
                        local_a8 = operator_new(0x18);
                        *(undefined8 *)local_a8 = 0;
                        *(undefined4 *)(local_a8 + 8) = 0;
                        *(undefined8 *)(local_a8 + 0x10) = 0;
                        if (*(undefined8 **)(this_07 + 0x40) == puVar36) {
                          std::__ndk1::
                          vector<spine::SkeletonCache::SegmentData*,std::__ndk1::allocator<spine::SkeletonCache::SegmentData*>>
                          ::__push_back_slow_path<spine::SkeletonCache::SegmentData*const&>
                                    (pvVar32,(SegmentData **)&local_a8);
                        }
                        else {
                          *puVar36 = local_a8;
                          *(long *)(this_07 + 0x38) = *(long *)(this_07 + 0x38) + 8;
                        }
                        lVar23 = *(long *)pvVar32;
                      }
                      piVar29 = *(int **)(lVar23 + uVar33 * 8);
                    }
                    *piVar29 = (int)local_108;
                    piVar29[1] = local_108._4_4_;
                  }
                  puVar36 = *(undefined8 **)(this_07 + 0x38);
                  uVar33 = (ulong)iVar39;
                  uVar22 = (long)puVar36 - lVar23 >> 3;
                  if (uVar22 < uVar33) {
                    lVar23 = 0;
                  }
                  else {
                    if (uVar22 == uVar33) {
                      local_a8 = operator_new(0x18);
                      *(undefined8 *)local_a8 = 0;
                      *(undefined4 *)(local_a8 + 8) = 0;
                      *(undefined8 *)(local_a8 + 0x10) = 0;
                      if (*(undefined8 **)(this_07 + 0x40) == puVar36) {
                        std::__ndk1::
                        vector<spine::SkeletonCache::SegmentData*,std::__ndk1::allocator<spine::SkeletonCache::SegmentData*>>
                        ::__push_back_slow_path<spine::SkeletonCache::SegmentData*const&>
                                  (pvVar32,(SegmentData **)&local_a8);
                      }
                      else {
                        *puVar36 = local_a8;
                        *(long *)(this_07 + 0x38) = *(long *)(this_07 + 0x38) + 8;
                      }
                      lVar23 = *(long *)pvVar32;
                    }
                    lVar23 = *(long *)(lVar23 + uVar33 * 8);
                  }
                  if (this_08 != (Texture2D *)0x0) {
                    cocos2d::Ref::retain((Ref *)this_08);
                  }
                  if (*(Ref **)(lVar23 + 0x10) != (Ref *)0x0) {
                    cocos2d::Ref::release(*(Ref **)(lVar23 + 0x10));
                  }
                  *(Texture2D **)(lVar23 + 0x10) = this_08;
                  pSVar20 = (SlotData *)Slot::getData(this_09);
                  uVar43 = SlotData::getBlendMode(pSVar20);
                  *(undefined4 *)(lVar23 + 8) = uVar43;
                  local_f8 = (ulong)(long)*(int *)(this_07 + 0x68) >> 1;
                  pSVar20 = (SlotData *)Slot::getData(this_09);
                  local_144 = SlotData::getBlendMode(pSVar20);
                  local_108._0_4_ = 0;
                  local_108._4_4_ = 0;
                  iVar39 = iVar39 + 1;
                  local_12c = iVar4;
                }
                if ((0 < (int)uVar3) && (0 < local_130)) {
                  if ((5 < local_108._4_4_) && (uVar22 = (ulong)(uVar3 >> 1), uVar3 >> 1 != 0)) {
                    lVar23 = *(long *)(this_07 + 0x58);
                    lVar42 = *(long *)(this_07 + 0x68);
                    sVar25 = (short)(local_108._4_4_ / 6);
                    if (uVar3 < 0x20) {
                      uVar31 = 0;
                    }
                    else {
                      uVar31 = uVar22 & 0x7ffffff0;
                      puVar36 = (undefined8 *)(lVar23 + lVar42 + 0x10);
                      uVar33 = uVar31;
                      do {
                        uVar45 = puVar36[-1];
                        uVar44 = puVar36[-2];
                        uVar47 = puVar36[1];
                        uVar46 = *puVar36;
                        uVar33 = uVar33 - 0x10;
                        puVar36[-1] = CONCAT26((short)((ulong)uVar45 >> 0x30) + sVar25,
                                               CONCAT24((short)((ulong)uVar45 >> 0x20) + sVar25,
                                                        CONCAT22((short)((ulong)uVar45 >> 0x10) +
                                                                 sVar25,(short)uVar45 + sVar25)));
                        puVar36[-2] = CONCAT26((short)((ulong)uVar44 >> 0x30) + sVar25,
                                               CONCAT24((short)((ulong)uVar44 >> 0x20) + sVar25,
                                                        CONCAT22((short)((ulong)uVar44 >> 0x10) +
                                                                 sVar25,(short)uVar44 + sVar25)));
                        puVar36[1] = CONCAT26((short)((ulong)uVar47 >> 0x30) + sVar25,
                                              CONCAT24((short)((ulong)uVar47 >> 0x20) + sVar25,
                                                       CONCAT22((short)((ulong)uVar47 >> 0x10) +
                                                                sVar25,(short)uVar47 + sVar25)));
                        *puVar36 = CONCAT26((short)((ulong)uVar46 >> 0x30) + sVar25,
                                            CONCAT24((short)((ulong)uVar46 >> 0x20) + sVar25,
                                                     CONCAT22((short)((ulong)uVar46 >> 0x10) +
                                                              sVar25,(short)uVar46 + sVar25)));
                        puVar36 = puVar36 + 4;
                      } while (uVar33 != 0);
                      if (uVar31 == uVar22) goto LAB_00d1826c;
                    }
                    lVar41 = uVar22 - uVar31;
                    psVar30 = (short *)(lVar23 + lVar42 + uVar31 * 2);
                    do {
                      lVar41 = lVar41 + -1;
                      *psVar30 = *psVar30 + sVar25;
                      psVar30 = psVar30 + 1;
                    } while (lVar41 != 0);
                  }
LAB_00d1826c:
                  if (*(ulong *)(this_07 + 0x100) <
                      (ulong)(*(long *)(this_07 + 0x108) + (long)local_130)) {
                    this_07[0x118] =
                         (vector<spine::SkeletonCache::BoneData*,std::__ndk1::allocator<spine::SkeletonCache::BoneData*>>
                          )0x1;
                  }
                  else {
                    *(long *)(this_07 + 0x108) = *(long *)(this_07 + 0x108) + (long)local_130;
                  }
                  if (*(ulong *)(this_07 + 0x60) <
                      (ulong)(*(long *)(this_07 + 0x68) + (long)(int)uVar3)) {
                    this_07[0x78] =
                         (vector<spine::SkeletonCache::BoneData*,std::__ndk1::allocator<spine::SkeletonCache::BoneData*>>
                          )0x1;
                  }
                  else {
                    *(long *)(this_07 + 0x68) = *(long *)(this_07 + 0x68) + (long)(int)uVar3;
                  }
                  local_108._0_4_ = (int)local_108 + ((int)uVar3 >> 1);
                  local_108._4_4_ = local_108._4_4_ + (local_130 >> 2);
                }
                goto LAB_00d18324;
              }
              SkeletonClipping::clipTriangles
                        (*(SkeletonClipping **)(this + 0x60),local_140,local_160,(long)iVar4,
                         local_140 + 2,6);
              lVar23 = SkeletonClipping::getClippedTriangles(*(SkeletonClipping **)(this + 0x60));
              this_05 = *(SkeletonClipping **)(this + 0x60);
              if (*(long *)(lVar23 + 8) != 0) {
                lVar23 = SkeletonClipping::getClippedVertices(this_05);
                uVar5 = *(uint *)(lVar23 + 8);
                local_130 = ((uVar5 & 0xfffffffe) + ((int)uVar5 >> 1)) * 8;
                uVar22 = *(long *)(this_07 + 0x108) + (long)local_130;
                if ((*(ulong *)(this_07 + 0x120) != 0) && (*(ulong *)(this_07 + 0x120) < uVar22)) {
                  if (*(long **)(this_07 + 0x150) != (long *)0x0) {
                    (**(code **)(**(long **)(this_07 + 0x150) + 0x30))();
                  }
                  *(undefined8 *)(this_07 + 0x108) = 0;
                }
                if (*(ulong *)(this_07 + 0x100) < uVar22) {
                  (**(code **)(*(long *)(this_07 + 0xf0) + 0x10))
                            (pvVar1,(long)((float)(int)((float)uVar22 * 0.0009765625) * 1024.0),1);
                  if (*(long **)(this_07 + 0x180) != (long *)0x0) {
                    (**(code **)(**(long **)(this_07 + 0x180) + 0x30))();
                  }
                }
                lVar41 = *(long *)(this_07 + 0xf8);
                lVar35 = *(long *)(this_07 + 0x108);
                lVar23 = SkeletonClipping::getClippedTriangles(*(SkeletonClipping **)(this + 0x60));
                lVar23 = *(long *)(lVar23 + 8);
                uVar22 = *(long *)(this_07 + 0x68) + ((lVar23 << 0x21) >> 0x20);
                if ((*(ulong *)(this_07 + 0x80) != 0) && (*(ulong *)(this_07 + 0x80) < uVar22)) {
                  if (*(long **)(this_07 + 0xb0) != (long *)0x0) {
                    (**(code **)(**(long **)(this_07 + 0xb0) + 0x30))();
                  }
                  *(undefined8 *)(this_07 + 0x68) = 0;
                }
                uVar3 = (int)lVar23 << 1;
                if (*(ulong *)(this_07 + 0x60) < uVar22) {
                  (**(code **)(*(long *)(this_07 + 0x50) + 0x10))
                            (pvVar2,(long)((float)(int)((float)uVar22 * 0.0009765625) * 1024.0),1);
                  if (*(long **)(this_07 + 0xe0) != (long *)0x0) {
                    (**(code **)(**(long **)(this_07 + 0xe0) + 0x30))();
                  }
                }
                lVar27 = *(long *)(this_07 + 0x58);
                lVar28 = *(long *)(this_07 + 0x68);
                lVar23 = SkeletonClipping::getClippedTriangles(*(SkeletonClipping **)(this + 0x60));
                __src = *(void **)(lVar23 + 0x18);
                lVar23 = SkeletonClipping::getClippedTriangles(*(SkeletonClipping **)(this + 0x60));
                memcpy((void *)(lVar27 + lVar28),__src,*(long *)(lVar23 + 8) << 1);
                lVar23 = SkeletonClipping::getClippedVertices(*(SkeletonClipping **)(this + 0x60));
                lVar27 = *(long *)(lVar23 + 0x18);
                lVar23 = SkeletonClipping::getClippedUVs(*(SkeletonClipping **)(this + 0x60));
                if (1 < (int)uVar5) {
                  lVar28 = 0;
                  puVar19 = (undefined1 *)(lVar41 + lVar35 + 0x17);
                  puVar40 = (undefined4 *)(*(long *)(lVar23 + 0x18) + 4);
                  puVar24 = (undefined4 *)(lVar27 + 4);
                  do {
                    lVar28 = lVar28 + 1;
                    *(undefined4 *)(puVar19 + -0x17) = puVar24[-1];
                    *(undefined4 *)(puVar19 + -0x13) = *puVar24;
                    *(undefined4 *)(puVar19 + -0xf) = puVar40[-1];
                    uVar43 = *puVar40;
                    puVar19[-7] = (char)(int)local_e0;
                    puVar19[-6] = (char)(int)fStack_dc;
                    puVar19[-5] = (char)(int)fStack_d8;
                    puVar19[-4] = (char)(int)fStack_d4;
                    puVar19[-3] = (char)(int)(float)local_f0;
                    puVar19[-2] = (char)(int)local_f0._4_4_;
                    puVar19[-1] = (char)(int)fStack_e8;
                    *puVar19 = (char)(int)fStack_e4;
                    *(undefined4 *)(puVar19 + -0xb) = uVar43;
                    puVar19 = puVar19 + 0x18;
                    puVar40 = puVar40 + 2;
                    puVar24 = puVar24 + 2;
                  } while (lVar28 < (int)uVar5 >> 1);
                }
                goto LAB_00d18020;
              }
            }
            SkeletonClipping::clipEnd(this_05,this_09);
          }
LAB_00d18330:
          lVar38 = lVar38 + 1;
        } while (lVar38 != lVar37);
        SkeletonClipping::clipEnd(*(SkeletonClipping **)(this + 0x60));
        if ((int)local_f8 != -1) {
          pvVar32 = (vector<spine::SkeletonCache::SegmentData*,std::__ndk1::allocator<spine::SkeletonCache::SegmentData*>>
                     *)(this_07 + 0x30);
          lVar34 = *(long *)pvVar32;
          uVar33 = (ulong)(iVar39 + -1);
          puVar36 = *(undefined8 **)(this_07 + 0x38);
          uVar22 = (long)puVar36 - lVar34 >> 3;
          if (uVar22 < uVar33) {
            puVar40 = (undefined4 *)0x0;
          }
          else {
            if (uVar22 == uVar33) {
              local_a8 = operator_new(0x18);
              *(undefined8 *)local_a8 = 0;
              *(undefined4 *)(local_a8 + 8) = 0;
              *(undefined8 *)(local_a8 + 0x10) = 0;
              if (*(undefined8 **)(this_07 + 0x40) == puVar36) {
                std::__ndk1::
                vector<spine::SkeletonCache::SegmentData*,std::__ndk1::allocator<spine::SkeletonCache::SegmentData*>>
                ::__push_back_slow_path<spine::SkeletonCache::SegmentData*const&>
                          (pvVar32,(SegmentData **)&local_a8);
              }
              else {
                *puVar36 = local_a8;
                *(long *)(this_07 + 0x38) = *(long *)(this_07 + 0x38) + 8;
              }
              lVar34 = *(long *)pvVar32;
            }
            puVar40 = *(undefined4 **)(lVar34 + uVar33 * 8);
          }
          *puVar40 = (int)local_108;
          puVar40[1] = local_108._4_4_;
        }
      }
      lVar34 = *(long *)(this_07 + 0x20) - *(long *)(this_07 + 0x18);
      if (lVar34 != 0) {
        *(int *)(*(long *)(*(long *)(this_07 + 0x18) + lVar34 + -8) + 0x20) =
             (int)((ulong)(long)*(int *)(this_07 + 0x108) >> 2);
      }
    }
  }
  if (*(long *)(lVar14 + 0x28) == local_a0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

