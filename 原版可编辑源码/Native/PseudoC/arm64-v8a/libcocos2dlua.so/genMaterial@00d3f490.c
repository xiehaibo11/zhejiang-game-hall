
/* cocos2d::Sprite3D::genMaterial(bool) */

void __thiscall cocos2d::Sprite3D::genMaterial(Sprite3D *this,bool param_1)

{
  long lVar1;
  bool bVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  RenderState *this_00;
  StateBlock *pSVar10;
  Material *pMVar11;
  undefined4 uVar12;
  void *pvVar13;
  RenderState *this_01;
  Mesh *this_02;
  MeshVertexData *pMVar14;
  long *plVar15;
  long *plVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  MeshVertexData *local_a8 [2];
  MeshVertexData **local_98;
  MeshVertexData *local_90;
  undefined8 uStack_88;
  undefined8 *local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  this[0x3c8] = (Sprite3D)param_1;
  uStack_88 = 0;
  local_90 = (MeshVertexData *)0x0;
  uStack_78 = 0;
  local_80 = (undefined8 *)0x0;
  local_70 = 0x3f800000;
  puVar17 = *(undefined8 **)(this + 0x308);
  puVar18 = *(undefined8 **)(this + 0x310);
  if (puVar17 != puVar18) {
                    /* try { // try from 00d3f4f0 to 00e3f527 has its CatchHandler @ 00d3f4f0
                       catch() { ... } // from try @ 00d3f4f0 with catch @ 00d3f4f0
                       catch() { ... } // from try @ 00d3f534 with catch @ 00d3f4f0 */
    do {
      pMVar14 = (MeshVertexData *)*puVar17;
      uVar6 = MeshVertexData::hasVertexAttrib(pMVar14,2);
      uVar7 = MeshVertexData::hasVertexAttrib(pMVar14,8);
      if ((uVar7 & 1) == 0) {
        uVar4 = 0;
      }
      else {
                    /* try { // try from 00d3f528 to 00e3f533 has its CatchHandler @ 00d3f548 */
        uVar4 = MeshVertexData::hasVertexAttrib(pMVar14,7);
                    /* try { // try from 00d3f534 to 00e3f55b has its CatchHandler @ 00d3f4f0 */
      }
      bVar3 = MeshVertexData::hasVertexAttrib(pMVar14,6);
                    /* catch() { ... } // from try @ 00d3f528 with catch @ 00d3f548 */
      uVar7 = MeshVertexData::hasVertexAttrib(pMVar14,9);
      if ((uVar7 & 1) == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = MeshVertexData::hasVertexAttrib(pMVar14,10);
      }
      bVar2 = (bVar3 & param_1) == 0;
      if ((uVar6 & 1) == 0) {
        uVar12 = 4;
        if (bVar2) {
          uVar12 = 1;
        }
      }
      else {
        if ((uVar7 & 1) == 0) {
          uVar12 = 3;
        }
        else {
          uVar12 = 5;
        }
        if (bVar2) {
          uVar12 = 0;
        }
      }
                    /* try { // try from 00d3f598 to 00e3f59b has its CatchHandler @ 00d3f5e4 */
      uVar8 = Sprite3DMaterial::createBuiltInMaterial(uVar12,uVar4 & 1);
      local_a8[0] = pMVar14;
      local_98 = local_a8;
      lVar9 = std::__ndk1::
              __hash_table<std::__ndk1::__hash_value_type<cocos2d::MeshVertexData_const*,cocos2d::Sprite3DMaterial*>,std::__ndk1::__unordered_map_hasher<cocos2d::MeshVertexData_const*,std::__ndk1::__hash_value_type<cocos2d::MeshVertexData_const*,cocos2d::Sprite3DMaterial*>,std::__ndk1::hash<cocos2d::MeshVertexData_const*>,true>,std::__ndk1::__unordered_map_equal<cocos2d::MeshVertexData_const*,std::__ndk1::__hash_value_type<cocos2d::MeshVertexData_const*,cocos2d::Sprite3DMaterial*>,std::__ndk1::equal_to<cocos2d::MeshVertexData_const*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<cocos2d::MeshVertexData_const*,cocos2d::Sprite3DMaterial*>>>
              ::
              __emplace_unique_key_args<cocos2d::MeshVertexData_const*,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<cocos2d::MeshVertexData_const*&&>,std::__ndk1::tuple<>>
                        (&local_90,(piecewise_construct_t *)local_a8,(tuple *)&DAT_01419632,
                         (tuple *)&local_98);
      puVar17 = puVar17 + 1;
      *(undefined8 *)(lVar9 + 0x18) = uVar8;
    } while (puVar18 != puVar17);
  }
  plVar15 = *(long **)(this + 0x350);
  plVar16 = *(long **)(this + 0x358);
  pMVar14 = local_90;
  puVar17 = local_80;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00d3f598 with catch @ 00d3f5e4
                        */
  if (plVar15 != plVar16) {
    do {
      local_a8[0] = *(MeshVertexData **)(*(long *)(*plVar15 + 0x128) + 0x30);
      local_98 = local_a8;
      lVar9 = std::__ndk1::
              __hash_table<std::__ndk1::__hash_value_type<cocos2d::MeshVertexData_const*,cocos2d::Sprite3DMaterial*>,std::__ndk1::__unordered_map_hasher<cocos2d::MeshVertexData_const*,std::__ndk1::__hash_value_type<cocos2d::MeshVertexData_const*,cocos2d::Sprite3DMaterial*>,std::__ndk1::hash<cocos2d::MeshVertexData_const*>,true>,std::__ndk1::__unordered_map_equal<cocos2d::MeshVertexData_const*,std::__ndk1::__hash_value_type<cocos2d::MeshVertexData_const*,cocos2d::Sprite3DMaterial*>,std::__ndk1::equal_to<cocos2d::MeshVertexData_const*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<cocos2d::MeshVertexData_const*,cocos2d::Sprite3DMaterial*>>>
              ::
              __emplace_unique_key_args<cocos2d::MeshVertexData_const*,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<cocos2d::MeshVertexData_const*&&>,std::__ndk1::tuple<>>
                        (&local_90,(piecewise_construct_t *)local_a8,(tuple *)&DAT_01419632,
                         (tuple *)&local_98);
      this_01 = *(RenderState **)(lVar9 + 0x18);
      this_00 = (RenderState *)Mesh::getMaterial((Mesh *)*plVar15);
      if (this_00 != (RenderState *)0x0) {
        pSVar10 = (StateBlock *)RenderState::getStateBlock(this_00);
        RenderState::setStateBlock(this_01,pSVar10);
      }
      iVar5 = Ref::getReferenceCount((Ref *)this_01);
      this_02 = (Mesh *)*plVar15;
      if (iVar5 == 1) {
        Mesh::setMaterial(this_02,(Material *)this_01);
      }
      else {
        pMVar11 = (Material *)(**(code **)(*(long *)this_01 + 0x10))(this_01);
        Mesh::setMaterial(this_02,pMVar11);
      }
      plVar15 = plVar15 + 1;
      pMVar14 = local_90;
      puVar17 = local_80;
    } while (plVar16 != plVar15);
  }
  while (puVar17 != (void *)0x0) {
    pvVar13 = (void *)*puVar17;
    local_90 = pMVar14;
    operator_delete(puVar17);
                    /* try { // try from 00d3f6a0 to 00e3f6c7 has its CatchHandler @ 00d3f6a0
                       catch() { ... } // from try @ 00d3f6a0 with catch @ 00d3f6a0
                       catch() { ... } // from try @ 00d3f6d4 with catch @ 00d3f6a0 */
    pMVar14 = local_90;
    puVar17 = pvVar13;
  }
  local_90 = (MeshVertexData *)0x0;
  if (pMVar14 != (MeshVertexData *)0x0) {
    operator_delete(pMVar14);
  }
                    /* try { // try from 00d3f6c8 to 00e3f6d3 has its CatchHandler @ 00d3f700 */
  if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* try { // try from 00d3f6d4 to 00e3f713 has its CatchHandler @ 00d3f6a0 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

