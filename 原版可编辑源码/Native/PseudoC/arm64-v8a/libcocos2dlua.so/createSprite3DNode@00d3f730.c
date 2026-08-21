
/* cocos2d::Sprite3D::createSprite3DNode(cocos2d::NodeData*, cocos2d::ModelData*,
   cocos2d::MaterialDatas const&) */

Sprite3D * __thiscall
cocos2d::Sprite3D::createSprite3DNode
          (Sprite3D *this,NodeData *param_1,ModelData *param_2,MaterialDatas *param_3)

{
  size_t __n;
  size_t sVar1;
  ModelData MVar2;
  byte bVar3;
  long lVar4;
  int iVar5;
  Sprite3D *this_00;
  MeshIndexData *pMVar6;
  Mesh *this_01;
  MeshSkin *pMVar7;
  Director *this_02;
  TextureCache *this_03;
  Texture2D *pTVar8;
  long lVar9;
  ulong uVar10;
  ModelData *__s2;
  void *__s1;
  long *plVar11;
  long *plVar12;
  undefined8 *puVar13;
  undefined8 *puVar15;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  Vec3 aVStack_90 [16];
  undefined8 local_80;
  undefined8 local_78;
  Ref *local_70;
  long local_68;
  undefined8 *puVar14;
  
                    /* try { // try from 00d3f73c to 00e3f743 has its CatchHandler @ 00d3f7ac */
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  this_00 = operator_new(0x460,(nothrow_t *)&std::nothrow);
  if (this_00 == (Sprite3D *)0x0) goto LAB_00d3fb54;
  Sprite3D(this_00);
  (**(code **)(*(long *)this_00 + 0x2d0))(this_00,(basic_string *)(param_1 + 8));
  puVar15 = *(undefined8 **)(this + 0x310);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00d3f73c with catch @ 00d3f7ac
                        */
  if (*(undefined8 **)(this + 0x308) != puVar15) {
    puVar13 = *(undefined8 **)(this + 0x308);
    do {
      puVar14 = puVar13 + 1;
      pMVar6 = (MeshIndexData *)
               MeshVertexData::getMeshIndexDataById
                         ((MeshVertexData *)*puVar13,(basic_string *)(param_2 + 8));
      if (pMVar6 != (MeshIndexData *)0x0) goto LAB_00d3f7dc;
      puVar13 = puVar14;
    } while (puVar15 != puVar14);
  }
  pMVar6 = (MeshIndexData *)0x0;
LAB_00d3f7dc:
  this_01 = (Mesh *)Mesh::create((basic_string *)(param_1 + 8),pMVar6,(MeshSkin *)0x0);
  if ((*(Skeleton3D **)(this + 0x300) != (Skeleton3D *)0x0) &&
     (*(long *)(param_2 + 0x40) != *(long *)(param_2 + 0x38))) {
    pMVar7 = (MeshSkin *)
             MeshSkin::create(*(Skeleton3D **)(this + 0x300),(vector *)(param_2 + 0x38),
                              (vector *)(param_2 + 0x50));
    Mesh::setSkin(this_01,pMVar7);
  }
  MVar2 = param_2[0x20];
  __n = (ulong)((byte)MVar2 >> 1);
  if (((byte)MVar2 & 1) != 0) {
    __n = *(size_t *)(param_2 + 0x28);
  }
  if (__n == 0) {
    plVar12 = *(long **)param_3;
    plVar11 = *(long **)(param_3 + 8);
    if (plVar11 == plVar12) {
      if (plVar12 != plVar11) goto LAB_00d3f860;
    }
    else {
      for (lVar9 = *plVar12; lVar9 != plVar12[1]; lVar9 = lVar9 + 0x40) {
        if (*(int *)(lVar9 + 0x30) == 2) goto LAB_00d3f944;
      }
      lVar9 = 0;
LAB_00d3f944:
      Mesh::setTexture(this_01,(basic_string *)(lVar9 + 0x18));
                    /* try { // try from 00d3f950 to 00e3f957 has its CatchHandler @ 00d3f9c0 */
    }
  }
  else {
    plVar12 = *(long **)param_3;
    plVar11 = *(long **)(param_3 + 8);
    if (plVar12 != plVar11) {
LAB_00d3f860:
      __s2 = *(ModelData **)(param_2 + 0x30);
      if (((byte)MVar2 & 1) == 0) {
        __s2 = param_2 + 0x21;
      }
      do {
        bVar3 = *(byte *)(plVar12 + 3);
        sVar1 = (ulong)(bVar3 >> 1);
        if ((bVar3 & 1) != 0) {
          sVar1 = plVar12[4];
        }
        if (sVar1 == __n) {
          __s1 = (void *)plVar12[5];
          if ((bVar3 & 1) == 0) {
            __s1 = (void *)((long)plVar12 + 0x19);
          }
          if ((bVar3 & 1) == 0) {
            if (__n == 0) {
LAB_00d3f8f4:
              lVar9 = *plVar12;
              if (lVar9 == plVar12[1]) goto LAB_00d3f9c0;
              goto LAB_00d3f900;
            }
            uVar10 = 0;
            while (*(ModelData *)((long)plVar12 + uVar10 + 0x19) == __s2[uVar10]) {
              uVar10 = uVar10 + 1;
              if (bVar3 >> 1 == uVar10) {
                if (plVar12 == (long *)0x0) goto LAB_00d3fa38;
                goto LAB_00d3f8f4;
              }
            }
          }
          else if ((__n == 0) || (iVar5 = memcmp(__s1,__s2,__n), iVar5 == 0)) goto LAB_00d3f8f4;
        }
        plVar12 = plVar12 + 6;
      } while (plVar12 != plVar11);
    }
  }
  goto LAB_00d3fa38;
  while (lVar9 = lVar9 + 0x40, plVar12[1] != lVar9) {
LAB_00d3f900:
    if (*(int *)(lVar9 + 0x30) == 2) {
      if (lVar9 != 0) {
        Mesh::setTexture(this_01,(basic_string *)(lVar9 + 0x18));
        pTVar8 = (Texture2D *)Mesh::getTexture(this_01);
        if (pTVar8 != (Texture2D *)0x0) {
          local_80 = 0x260100002601;
          local_78 = *(undefined8 *)(lVar9 + 0x34);
          Texture2D::setTexParameters(pTVar8,(_TexParams *)&local_80);
          lVar9 = *plVar12;
          goto joined_r0x00d3f994;
        }
      }
      break;
    }
  }
  goto LAB_00d3f9c0;
joined_r0x00d3f994:
  if (lVar9 == plVar12[1]) goto LAB_00d3f9b0;
  if (*(int *)(lVar9 + 0x30) == 9) goto LAB_00d3f9b4;
  lVar9 = lVar9 + 0x40;
  goto joined_r0x00d3f994;
LAB_00d3f9b0:
  lVar9 = 0;
LAB_00d3f9b4:
  this_01[0x49] = (Mesh)(lVar9 != 0);
LAB_00d3f9c0:
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00d3f950 with catch @ 00d3f9c0
                        */
  for (lVar9 = *plVar12; lVar9 != plVar12[1]; lVar9 = lVar9 + 0x40) {
    if (*(int *)(lVar9 + 0x30) == 7) {
      if (lVar9 != 0) {
        this_02 = (Director *)Director::getInstance();
        this_03 = (TextureCache *)Director::getTextureCache(this_02);
                    /* try { // try from 00d3f9f8 to 00e3fa5b has its CatchHandler @ 00d3f9f8
                       catch() { ... } // from try @ 00d3f9f8 with catch @ 00d3f9f8
                       catch() { ... } // from try @ 00d3fa68 with catch @ 00d3f9f8 */
        pTVar8 = (Texture2D *)TextureCache::addImage(this_03,(basic_string *)(lVar9 + 0x18));
        if (pTVar8 != (Texture2D *)0x0) {
          local_80 = 0x260100002601;
          local_78 = *(undefined8 *)(lVar9 + 0x34);
          Texture2D::setTexParameters(pTVar8,(_TexParams *)&local_80);
        }
        Mesh::setTexture(this_01,pTVar8,7,1);
      }
      break;
    }
  }
LAB_00d3fa38:
  Vec3::Vec3(aVStack_90);
  Quaternion::Quaternion((Quaternion *)&local_80);
  Vec3::Vec3((Vec3 *)&local_a0);
                    /* try { // try from 00d3fa5c to 00e3fa67 has its CatchHandler @ 00d3faa8 */
  Mat4::decompose((Mat4 *)(param_1 + 0x20),(Vec3 *)&local_a0,(Quaternion *)&local_80,aVStack_90);
                    /* try { // try from 00d3fa68 to 00e3faaf has its CatchHandler @ 00d3f9f8 */
  (**(code **)(*(long *)this_00 + 0xf8))(this_00,aVStack_90);
  (**(code **)(*(long *)this_00 + 0x1a0))(this_00,&local_80);
  (**(code **)(*(long *)this_00 + 0x50))(local_a0,this_00);
                    /* catch() { ... } // from try @ 00d3fa5c with catch @ 00d3faa8 */
  (**(code **)(*(long *)this_00 + 0x60))(local_9c,this_00);
  (**(code **)(*(long *)this_00 + 0x70))(local_98,this_00);
  puVar15 = *(undefined8 **)(this_00 + 0x310);
  local_70 = *(Ref **)(*(long *)(this_01 + 0x128) + 0x30);
  if (puVar15 == *(undefined8 **)(this_00 + 0x318)) {
    std::__ndk1::vector<cocos2d::MeshVertexData*,std::__ndk1::allocator<cocos2d::MeshVertexData*>>::
    __push_back_slow_path<cocos2d::MeshVertexData*const&>
              ((vector<cocos2d::MeshVertexData*,std::__ndk1::allocator<cocos2d::MeshVertexData*>> *)
               (this_00 + 0x308),(MeshVertexData **)&local_70);
  }
  else {
    *puVar15 = local_70;
    *(undefined8 **)(this_00 + 0x310) = puVar15 + 1;
  }
  Ref::retain(local_70);
  puVar15 = *(undefined8 **)(this_00 + 0x358);
  local_70 = (Ref *)this_01;
  if (puVar15 == *(undefined8 **)(this_00 + 0x360)) {
    std::__ndk1::vector<cocos2d::Mesh*,std::__ndk1::allocator<cocos2d::Mesh*>>::
    __push_back_slow_path<cocos2d::Mesh*const&>
              ((vector<cocos2d::Mesh*,std::__ndk1::allocator<cocos2d::Mesh*>> *)(this_00 + 0x350),
               (Mesh **)&local_70);
  }
  else {
    *puVar15 = this_01;
    *(undefined8 **)(this_00 + 0x358) = puVar15 + 1;
  }
  Ref::retain(local_70);
  Ref::autorelease((Ref *)this_00);
  genMaterial(this_00,false);
  Quaternion::~Quaternion((Quaternion *)&local_80);
LAB_00d3fb54:
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this_00;
}

