
/* cocos2d::BatchSprite3D::createNode(cocos2d::NodeData const*, cocos2d::MeshDatas const*,
   cocos2d::MaterialDatas const*, bool) */

void __thiscall
cocos2d::BatchSprite3D::createNode
          (BatchSprite3D *this,NodeData *param_1,MeshDatas *param_2,MaterialDatas *param_3,
          bool param_4)

{
  byte *__s2;
  size_t sVar1;
  size_t sVar2;
  ushort *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  byte *pbVar6;
  float *pfVar7;
  ushort *puVar8;
  long *plVar9;
  byte bVar10;
  long lVar11;
  byte *pbVar12;
  byte *pbVar13;
  int iVar14;
  BatchSprite3D *this_00;
  Ref *this_01;
  Director *this_02;
  TextureCache *this_03;
  Texture2D *pTVar15;
  size_t sVar16;
  float *pfVar17;
  ushort *puVar18;
  void *__s2_00;
  ulong uVar19;
  byte *__s1;
  void *__s1_00;
  long *plVar20;
  undefined8 *puVar21;
  byte *pbVar22;
  byte *pbVar23;
  long *plVar24;
  long lVar25;
  byte *pbVar26;
  float *pfVar27;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  Vec3 aVStack_b0 [16];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  long local_80;
  
  lVar11 = tpidr_el0;
  local_80 = *(long *)(lVar11 + 0x28);
  this_00 = this;
  if (!param_4) {
    this_00 = operator_new(0x370,(nothrow_t *)&std::nothrow);
    if (this_00 != (BatchSprite3D *)0x0) {
      Node::Node((Node *)this_00);
      *(Node *)(this_00 + 0x2f8) = (Node)0x0;
      *(undefined ***)this_00 = &PTR__BatchSprite3D_016d27b8;
      *(undefined8 *)(this_00 + 0x2fc) = 0x3f800000c7c34f80;
      AABB::AABB((AABB *)(this_00 + 0x304));
      AABB::AABB((AABB *)(this_00 + 0x31c));
      *(undefined8 *)(this_00 + 0x368) = 0;
      *(undefined8 *)(this_00 + 0x350) = 0;
      *(undefined8 *)(this_00 + 0x348) = 0;
      *(undefined8 *)(this_00 + 0x360) = 0;
      *(undefined8 *)(this_00 + 0x358) = 0;
      *(undefined8 *)(this_00 + 0x340) = 0;
      *(undefined8 *)(this_00 + 0x338) = 0;
    }
    Ref::autorelease((Ref *)this_00);
    this_01 = *(Ref **)(this + 0x338);
    *(Ref **)(this_00 + 0x338) = this_01;
    Ref::retain(this_01);
  }
  plVar20 = *(long **)(param_1 + 0x60);
  plVar4 = *(long **)(param_1 + 0x68);
  if (plVar20 == plVar4) {
LAB_00d1733c:
    AABB::reset((AABB *)(this + 0x304));
    plVar4 = *(long **)(param_2 + 8);
    for (plVar20 = *(long **)param_2; plVar20 != plVar4; plVar20 = plVar20 + 1) {
      puVar5 = *(undefined8 **)(*plVar20 + 0x58);
      for (puVar21 = *(undefined8 **)(*plVar20 + 0x50); puVar21 != puVar5; puVar21 = puVar21 + 3) {
        local_90 = puVar21[2];
        uStack_98 = puVar21[1];
        local_a0 = *puVar21;
        AABB::merge((AABB *)(this + 0x304),(AABB *)&local_a0);
      }
    }
    (**(code **)(*(long *)this_00 + 0x2d0))(this_00,param_1 + 8);
    Vec3::Vec3(aVStack_b0);
    Quaternion::Quaternion((Quaternion *)&local_a0);
    Vec3::Vec3((Vec3 *)&local_c0);
    Mat4::decompose((Mat4 *)(param_1 + 0x20),(Vec3 *)&local_c0,(Quaternion *)&local_a0,aVStack_b0);
    (**(code **)(*(long *)this_00 + 0xf8))(this_00,aVStack_b0);
    (**(code **)(*(long *)this_00 + 0x1a0))(this_00,&local_a0);
    (**(code **)(*(long *)this_00 + 0x50))(local_c0,this_00);
    (**(code **)(*(long *)this_00 + 0x60))(local_bc,this_00);
    (**(code **)(*(long *)this_00 + 0x70))(local_b8,this_00);
    if (!param_4) {
      (**(code **)(*(long *)this + 0x208))(this,this_00);
    }
    puVar5 = *(undefined8 **)(param_1 + 0x80);
    for (puVar21 = *(undefined8 **)(param_1 + 0x78); puVar21 != puVar5; puVar21 = puVar21 + 1) {
      createNode(this_00,(NodeData *)*puVar21,param_2,param_3,false);
    }
    Quaternion::~Quaternion((Quaternion *)&local_a0);
    if (*(long *)(lVar11 + 0x28) != local_80) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
LAB_00d16f98:
  puVar21 = *(undefined8 **)param_2;
  puVar5 = *(undefined8 **)(param_2 + 8);
  if (puVar21 != puVar5) {
    lVar25 = *plVar20;
LAB_00d16fb4:
    plVar24 = (long *)*puVar21;
    pbVar26 = (byte *)plVar24[7];
    pbVar6 = (byte *)plVar24[8];
    pbVar23 = pbVar26;
    if (pbVar26 != pbVar6) {
      pbVar22 = pbVar26;
      sVar1 = (ulong)(*(byte *)(lVar25 + 8) >> 1);
      __s2 = (byte *)(lVar25 + 9);
      if ((*(byte *)(lVar25 + 8) & 1) != 0) {
        sVar1 = *(size_t *)(lVar25 + 0x10);
        __s2 = *(byte **)(lVar25 + 0x18);
      }
      do {
        bVar10 = *pbVar22;
        sVar16 = (size_t)(bVar10 >> 1);
        sVar2 = sVar16;
        if ((bVar10 & 1) != 0) {
          sVar2 = *(size_t *)(pbVar22 + 8);
        }
        if (sVar2 == sVar1) {
          __s1 = *(byte **)(pbVar22 + 0x10);
          if ((bVar10 & 1) == 0) {
            __s1 = pbVar22 + 1;
          }
          pbVar12 = pbVar22;
          pbVar13 = __s2;
          sVar2 = sVar1;
          pbVar23 = pbVar22;
          if ((bVar10 & 1) == 0) {
            while( true ) {
              if (sVar2 == 0) goto LAB_00d1706c;
              if (pbVar12[1] != *pbVar13) break;
              sVar16 = sVar16 - 1;
              pbVar12 = pbVar12 + 1;
              pbVar13 = pbVar13 + 1;
              sVar2 = sVar16;
            }
          }
          else if ((sVar1 == 0) || (iVar14 = memcmp(__s1,__s2,sVar1), iVar14 == 0)) break;
        }
        pbVar22 = pbVar22 + 0x18;
        pbVar23 = pbVar6;
      } while (pbVar22 != pbVar6);
    }
LAB_00d1706c:
    if (pbVar23 == pbVar6) goto code_r0x00d17074;
    pfVar27 = (float *)*plVar24;
    pfVar7 = (float *)plVar24[1];
    if (pfVar27 != pfVar7) {
      do {
        pfVar17 = *(float **)(this_00 + 0x348);
        if (pfVar17 == *(float **)(this_00 + 0x350)) {
          std::__ndk1::vector<float,std::__ndk1::allocator<float>>::
          __push_back_slow_path<float_const&>
                    ((vector<float,std::__ndk1::allocator<float>> *)(this_00 + 0x340),pfVar27);
        }
        else {
          *pfVar17 = *pfVar27;
          *(float **)(this_00 + 0x348) = pfVar17 + 1;
        }
        pfVar27 = pfVar27 + 1;
      } while (pfVar7 != pfVar27);
      pbVar26 = (byte *)plVar24[7];
    }
    puVar8 = *(ushort **)(pbVar23 + (plVar24[4] - (long)pbVar26) + 8);
    for (puVar3 = *(ushort **)(pbVar23 + (plVar24[4] - (long)pbVar26)); puVar3 != puVar8;
        puVar3 = puVar3 + 1) {
      puVar18 = *(ushort **)(this_00 + 0x360);
      if (puVar18 == *(ushort **)(this_00 + 0x368)) {
        std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::
        __push_back_slow_path<unsigned_short_const&>
                  ((vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *)
                   (this_00 + 0x358),puVar3);
      }
      else {
        *puVar18 = *puVar3;
        *(ushort **)(this_00 + 0x360) = puVar18 + 1;
      }
    }
  }
LAB_00d17130:
  lVar25 = *plVar20;
  bVar10 = *(byte *)(lVar25 + 0x20);
  sVar1 = (ulong)(bVar10 >> 1);
  if ((bVar10 & 1) != 0) {
    sVar1 = *(size_t *)(lVar25 + 0x28);
  }
  if ((sVar1 == 0) && (plVar24 = *(long **)param_3, *(long **)(param_3 + 8) != plVar24)) {
    for (lVar25 = *plVar24; lVar25 != plVar24[1]; lVar25 = lVar25 + 0x40) {
      if (*(int *)(lVar25 + 0x30) == 2) goto LAB_00d16f74;
    }
    lVar25 = 0;
LAB_00d16f74:
    BatchMesh::setTexture(*(BatchMesh **)(this + 0x338),(basic_string *)(lVar25 + 0x18));
  }
  else {
    plVar24 = *(long **)param_3;
    plVar9 = *(long **)(param_3 + 8);
    if (plVar24 != plVar9) {
      __s2_00 = *(void **)(lVar25 + 0x30);
      if ((bVar10 & 1) == 0) {
        __s2_00 = (void *)(lVar25 + 0x21);
      }
      do {
        bVar10 = *(byte *)(plVar24 + 3);
        sVar2 = (ulong)(bVar10 >> 1);
        if ((bVar10 & 1) != 0) {
          sVar2 = plVar24[4];
        }
        if (sVar2 == sVar1) {
          __s1_00 = (void *)plVar24[5];
          if ((bVar10 & 1) == 0) {
            __s1_00 = (void *)((long)plVar24 + 0x19);
          }
          if ((bVar10 & 1) == 0) {
            if (sVar1 == 0) {
LAB_00d17208:
              lVar25 = *plVar24;
              goto joined_r0x00d17210;
            }
            uVar19 = 0;
            while (*(char *)((long)plVar24 + uVar19 + 0x19) == *(char *)((long)__s2_00 + uVar19)) {
              uVar19 = uVar19 + 1;
              if (bVar10 >> 1 == uVar19) {
                if (plVar24 == (long *)0x0) goto LAB_00d16f84;
                goto LAB_00d17208;
              }
            }
          }
          else if ((sVar1 == 0) || (iVar14 = memcmp(__s1_00,__s2_00,sVar1), iVar14 == 0))
          goto LAB_00d17208;
        }
        plVar24 = plVar24 + 6;
      } while (plVar24 != plVar9);
    }
  }
  goto LAB_00d16f84;
code_r0x00d17074:
  puVar21 = puVar21 + 1;
  if (puVar21 == puVar5) goto LAB_00d17130;
  goto LAB_00d16fb4;
joined_r0x00d17210:
  if (lVar25 == plVar24[1]) goto LAB_00d172c8;
  if (*(int *)(lVar25 + 0x30) == 2) {
    if (lVar25 != 0) {
      BatchMesh::setTexture(*(BatchMesh **)(this + 0x338),(basic_string *)(lVar25 + 0x18));
      pTVar15 = (Texture2D *)BatchMesh::getTexture(*(BatchMesh **)(this + 0x338));
      if (pTVar15 != (Texture2D *)0x0) {
        local_a0 = 0x260100002601;
        uStack_98 = *(undefined8 *)(lVar25 + 0x34);
        Texture2D::setTexParameters(pTVar15,(_TexParams *)&local_a0);
        lVar25 = *plVar24;
        goto joined_r0x00d17298;
      }
    }
    goto LAB_00d172c8;
  }
  lVar25 = lVar25 + 0x40;
  goto joined_r0x00d17210;
joined_r0x00d17298:
  if (lVar25 == plVar24[1]) goto LAB_00d172b4;
  if (*(int *)(lVar25 + 0x30) == 9) goto LAB_00d172b8;
  lVar25 = lVar25 + 0x40;
  goto joined_r0x00d17298;
LAB_00d172b4:
  lVar25 = 0;
LAB_00d172b8:
  this[0x2f8] = (BatchSprite3D)(lVar25 != 0);
LAB_00d172c8:
  for (lVar25 = *plVar24; lVar25 != plVar24[1]; lVar25 = lVar25 + 0x40) {
    if (*(int *)(lVar25 + 0x30) == 7) {
      if (lVar25 != 0) {
        this_02 = (Director *)Director::getInstance();
        this_03 = (TextureCache *)Director::getTextureCache(this_02);
        pTVar15 = (Texture2D *)TextureCache::addImage(this_03,(basic_string *)(lVar25 + 0x18));
        if (pTVar15 != (Texture2D *)0x0) {
          local_a0 = 0x260100002601;
          uStack_98 = *(undefined8 *)(lVar25 + 0x34);
          Texture2D::setTexParameters(pTVar15,(_TexParams *)&local_a0);
        }
        BatchMesh::setTexture(*(BatchMesh **)(this + 0x338),pTVar15,7);
      }
      break;
    }
  }
LAB_00d16f84:
  plVar20 = plVar20 + 1;
  if (plVar20 == plVar4) goto LAB_00d1733c;
  goto LAB_00d16f98;
}

