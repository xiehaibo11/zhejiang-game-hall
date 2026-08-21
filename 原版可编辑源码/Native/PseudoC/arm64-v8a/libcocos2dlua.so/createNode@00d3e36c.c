
/* cocos2d::Sprite3D::createNode(cocos2d::NodeData*, cocos2d::Node*, cocos2d::MaterialDatas const&,
   bool) */

void __thiscall
cocos2d::Sprite3D::createNode
          (Sprite3D *this,NodeData *param_1,Node *param_2,MaterialDatas *param_3,bool param_4)

{
  size_t __n;
  size_t sVar1;
  long *plVar2;
  long *plVar3;
  byte bVar4;
  long lVar5;
  int iVar6;
  MeshIndexData *pMVar7;
  Mesh *this_00;
  MeshSkin *pMVar8;
  Director *this_01;
  TextureCache *this_02;
  Texture2D *pTVar9;
  ModelData *pMVar10;
  long lVar11;
  code *pcVar12;
  void *__s2;
  ulong uVar13;
  void *__s1;
  undefined8 *puVar14;
  long *plVar15;
  undefined8 *puVar16;
  undefined8 *puVar18;
  long *plVar19;
  Sprite3D *pSVar20;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  Vec3 aVStack_c0 [16];
  Mesh *local_b0;
  code *local_a8;
  undefined8 uStack_a0;
  Sprite3D *local_98;
  Mesh **local_90;
  long local_80;
  undefined8 *puVar17;
  
  lVar5 = tpidr_el0;
  local_80 = *(long *)(lVar5 + 0x28);
  plVar2 = *(long **)(param_1 + 0x60);
  plVar3 = *(long **)(param_1 + 0x68);
  if (plVar2 != plVar3) {
    pSVar20 = (Sprite3D *)0x0;
    pMVar10 = (ModelData *)*plVar2;
joined_r0x00d3e424:
    if (pMVar10 != (ModelData *)0x0) {
      if ((*(long *)(pMVar10 + 0x40) == *(long *)(pMVar10 + 0x38)) && (!param_4)) {
        pSVar20 = (Sprite3D *)createSprite3DNode(this,param_1,pMVar10,param_3);
        if ((param_2 != (Node *)0x0) && (pSVar20 != (Sprite3D *)0x0)) {
          (**(code **)(*(long *)param_2 + 0x208))(param_2,pSVar20);
        }
        goto LAB_00d3e428;
      }
      if (param_2 != (Node *)0x0 && param_4) {
        (**(code **)(*(long *)param_2 + 0x2d0))(param_2,(basic_string *)(param_1 + 8));
        pMVar10 = (ModelData *)*plVar2;
      }
      puVar18 = *(undefined8 **)(this + 0x310);
      if (*(undefined8 **)(this + 0x308) == puVar18) {
        pMVar7 = (MeshIndexData *)0x0;
      }
      else {
        puVar14 = *(undefined8 **)(this + 0x308);
        do {
          puVar16 = puVar14 + 1;
          pMVar7 = (MeshIndexData *)
                   MeshVertexData::getMeshIndexDataById
                             ((MeshVertexData *)*puVar14,(basic_string *)(pMVar10 + 8));
          if (pMVar7 != (MeshIndexData *)0x0) goto LAB_00d3e4e8;
          puVar14 = puVar16;
        } while (puVar18 != puVar16);
        pMVar7 = (MeshIndexData *)0x0;
      }
LAB_00d3e4e8:
      this_00 = (Mesh *)Mesh::create((basic_string *)(param_1 + 8),pMVar7,(MeshSkin *)0x0);
      if (this_00 == (Mesh *)0x0) goto LAB_00d3e428;
      puVar18 = *(undefined8 **)(this + 0x358);
      local_b0 = this_00;
      if (puVar18 == *(undefined8 **)(this + 0x360)) {
        std::__ndk1::vector<cocos2d::Mesh*,std::__ndk1::allocator<cocos2d::Mesh*>>::
        __push_back_slow_path<cocos2d::Mesh*const&>
                  ((vector<cocos2d::Mesh*,std::__ndk1::allocator<cocos2d::Mesh*>> *)(this + 0x350),
                   &local_b0);
      }
      else {
        *puVar18 = this_00;
        *(undefined8 **)(this + 0x358) = puVar18 + 1;
      }
      Ref::retain((Ref *)local_b0);
      if (*(Skeleton3D **)(this + 0x300) != (Skeleton3D *)0x0) {
        lVar11 = *plVar2;
        if (*(long *)(lVar11 + 0x40) != *(long *)(lVar11 + 0x38)) {
          pMVar8 = (MeshSkin *)
                   MeshSkin::create(*(Skeleton3D **)(this + 0x300),(vector *)(lVar11 + 0x38),
                                    (vector *)(lVar11 + 0x50));
          Mesh::setSkin(this_00,pMVar8);
        }
      }
      local_b0 = (Mesh *)&PTR_FUN_016d4480;
      uStack_a0 = 0;
      local_a8 = onAABBDirty;
      local_98 = this;
      local_90 = &local_b0;
      FUN_008820fc(&local_b0,this_00 + 0x170);
      if (&local_b0 == local_90) {
        pcVar12 = *(code **)(*local_90 + 0x20);
LAB_00d3e5b4:
        (*pcVar12)();
      }
      else if (local_90 != (Mesh **)0x0) {
        pcVar12 = *(code **)(*local_90 + 0x28);
        goto LAB_00d3e5b4;
      }
      lVar11 = *plVar2;
      bVar4 = *(byte *)(lVar11 + 0x20);
      __n = (ulong)(bVar4 >> 1);
      if ((bVar4 & 1) != 0) {
        __n = *(size_t *)(lVar11 + 0x28);
      }
      if (__n == 0) {
        plVar19 = *(long **)param_3;
        plVar15 = *(long **)(param_3 + 8);
        if (plVar15 == plVar19) {
          if (plVar19 != plVar15) goto LAB_00d3e5fc;
        }
        else {
          for (lVar11 = *plVar19; lVar11 != plVar19[1]; lVar11 = lVar11 + 0x40) {
            if (*(int *)(lVar11 + 0x30) == 2) goto LAB_00d3e6e0;
          }
          lVar11 = 0;
LAB_00d3e6e0:
          Mesh::setTexture(this_00,(basic_string *)(lVar11 + 0x18));
        }
      }
      else {
        plVar19 = *(long **)param_3;
        plVar15 = *(long **)(param_3 + 8);
        if (plVar19 != plVar15) {
LAB_00d3e5fc:
          __s2 = *(void **)(lVar11 + 0x30);
          if ((bVar4 & 1) == 0) {
            __s2 = (void *)(lVar11 + 0x21);
          }
          do {
            bVar4 = *(byte *)(plVar19 + 3);
            sVar1 = (ulong)(bVar4 >> 1);
            if ((bVar4 & 1) != 0) {
              sVar1 = plVar19[4];
            }
            if (sVar1 == __n) {
              __s1 = (void *)plVar19[5];
              if ((bVar4 & 1) == 0) {
                __s1 = (void *)((long)plVar19 + 0x19);
              }
              if ((bVar4 & 1) == 0) {
                if (__n == 0) {
LAB_00d3e690:
                  lVar11 = *plVar19;
                  if (lVar11 == plVar19[1]) goto LAB_00d3e754;
                  goto LAB_00d3e69c;
                }
                uVar13 = 0;
                while (*(char *)((long)plVar19 + uVar13 + 0x19) == *(char *)((long)__s2 + uVar13)) {
                  uVar13 = uVar13 + 1;
                  if (bVar4 >> 1 == uVar13) {
                    if (plVar19 == (long *)0x0) goto LAB_00d3e7c4;
                    goto LAB_00d3e690;
                  }
                }
              }
              else if ((__n == 0) || (iVar6 = memcmp(__s1,__s2,__n), iVar6 == 0)) goto LAB_00d3e690;
            }
            plVar19 = plVar19 + 6;
          } while (plVar19 != plVar15);
        }
      }
      goto LAB_00d3e7c4;
    }
    goto LAB_00d3e428;
  }
  pSVar20 = (Sprite3D *)0x0;
  if (plVar3 != plVar2) goto LAB_00d3e95c;
LAB_00d3e88c:
  pSVar20 = (Sprite3D *)Node::create();
  if (pSVar20 != (Sprite3D *)0x0) {
    (**(code **)(*(long *)pSVar20 + 0x2d0))(pSVar20,param_1 + 8);
    Vec3::Vec3(aVStack_c0);
    Quaternion::Quaternion((Quaternion *)&local_b0);
    Vec3::Vec3((Vec3 *)&local_d0);
    Mat4::decompose((Mat4 *)(param_1 + 0x20),(Vec3 *)&local_d0,(Quaternion *)&local_b0,aVStack_c0);
    (**(code **)(*(long *)pSVar20 + 0xf8))(pSVar20,aVStack_c0);
    (**(code **)(*(long *)pSVar20 + 0x1a0))(pSVar20,&local_b0);
    (**(code **)(*(long *)pSVar20 + 0x50))(local_d0,pSVar20);
    (**(code **)(*(long *)pSVar20 + 0x60))(local_cc,pSVar20);
    (**(code **)(*(long *)pSVar20 + 0x70))(local_c8,pSVar20);
    if (param_2 != (Node *)0x0) {
      (**(code **)(*(long *)param_2 + 0x208))(param_2,pSVar20);
    }
    Quaternion::~Quaternion((Quaternion *)&local_b0);
  }
LAB_00d3e95c:
  puVar18 = *(undefined8 **)(param_1 + 0x78);
  puVar14 = *(undefined8 **)(param_1 + 0x80);
  if (puVar18 != puVar14) {
    puVar16 = puVar18;
    do {
      puVar17 = puVar16 + 1;
      createNode(this,(NodeData *)*puVar16,(Node *)pSVar20,param_3,
                 (long)puVar14 - (long)puVar18 == 8);
      puVar16 = puVar17;
    } while (puVar14 != puVar17);
  }
  if (*(long *)(lVar5 + 0x28) != local_80) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
  while (lVar11 = lVar11 + 0x40, plVar19[1] != lVar11) {
LAB_00d3e69c:
    if (*(int *)(lVar11 + 0x30) == 2) {
      if (lVar11 != 0) {
        Mesh::setTexture(this_00,(basic_string *)(lVar11 + 0x18));
        pTVar9 = (Texture2D *)Mesh::getTexture(this_00);
        if (pTVar9 != (Texture2D *)0x0) {
          local_b0 = (Mesh *)0x260100002601;
          local_a8 = *(code **)(lVar11 + 0x34);
          Texture2D::setTexParameters(pTVar9,(_TexParams *)&local_b0);
          lVar11 = *plVar19;
          goto joined_r0x00d3e728;
        }
      }
      break;
    }
  }
  goto LAB_00d3e754;
joined_r0x00d3e728:
  if (lVar11 == plVar19[1]) goto LAB_00d3e744;
  if (*(int *)(lVar11 + 0x30) == 9) goto LAB_00d3e748;
  lVar11 = lVar11 + 0x40;
  goto joined_r0x00d3e728;
LAB_00d3e744:
  lVar11 = 0;
LAB_00d3e748:
  this_00[0x49] = (Mesh)(lVar11 != 0);
LAB_00d3e754:
  for (lVar11 = *plVar19; lVar11 != plVar19[1]; lVar11 = lVar11 + 0x40) {
    if (*(int *)(lVar11 + 0x30) == 7) {
      if (lVar11 != 0) {
        this_01 = (Director *)Director::getInstance();
        this_02 = (TextureCache *)Director::getTextureCache(this_01);
        pTVar9 = (Texture2D *)TextureCache::addImage(this_02,(basic_string *)(lVar11 + 0x18));
        if (pTVar9 != (Texture2D *)0x0) {
          local_b0 = (Mesh *)0x260100002601;
          local_a8 = *(code **)(lVar11 + 0x34);
          Texture2D::setTexParameters(pTVar9,(_TexParams *)&local_b0);
        }
        Mesh::setTexture(this_00,pTVar9,7,1);
      }
      break;
    }
  }
LAB_00d3e7c4:
  Vec3::Vec3(aVStack_c0);
  Quaternion::Quaternion((Quaternion *)&local_b0);
  Vec3::Vec3((Vec3 *)&local_d0);
  Mat4::decompose((Mat4 *)(param_1 + 0x20),(Vec3 *)&local_d0,(Quaternion *)&local_b0,aVStack_c0);
  (**(code **)(*(long *)this + 0xf8))(this,aVStack_c0);
  (**(code **)(*(long *)this + 0x1a0))(this,&local_b0);
  (**(code **)(*(long *)this + 0x50))(local_d0,this);
  (**(code **)(*(long *)this + 0x60))(local_cc,this);
  (**(code **)(*(long *)this + 0x70))(local_c8,this);
  Quaternion::~Quaternion((Quaternion *)&local_b0);
  pSVar20 = this;
LAB_00d3e428:
  plVar2 = plVar2 + 1;
  if (plVar2 == plVar3) goto LAB_00d3e870;
  pMVar10 = (ModelData *)*plVar2;
  goto joined_r0x00d3e424;
LAB_00d3e870:
  if (*(long *)(param_1 + 0x68) != *(long *)(param_1 + 0x60)) goto LAB_00d3e95c;
  goto LAB_00d3e88c;
}

