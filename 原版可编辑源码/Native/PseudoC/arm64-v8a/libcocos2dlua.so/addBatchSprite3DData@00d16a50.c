
/* cocos2d::BatchSprite3DCache::addBatchSprite3DData(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, cocos2d::NodeDatas*&,
   cocos2d::MeshDatas*&, cocos2d::MaterialDatas*&) */

undefined4 __thiscall
cocos2d::BatchSprite3DCache::addBatchSprite3DData
          (BatchSprite3DCache *this,basic_string *param_1,NodeDatas **param_2,MeshDatas **param_3,
          MaterialDatas **param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  BatchSprite3DCache *pBVar5;
  MeshDatas *pMVar6;
  MaterialDatas *pMVar7;
  NodeDatas *pNVar8;
  Bundle3D *pBVar9;
  ulong uVar10;
  long lVar11;
  void *pvVar12;
  undefined4 uVar13;
  void *pvVar14;
  undefined8 *puVar15;
  void *pvVar16;
  MeshData *this_00;
  MeshDatas *pMVar17;
  uint local_b4;
  MaterialDatas *local_b0;
  byte local_a8 [8];
  ulong local_a0;
  int *local_98;
  basic_string local_90 [16];
  void *local_80;
  basic_string *local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  plVar4 = (long *)FileUtils::getInstance();
  (**(code **)(*plVar4 + 0x50))(local_90,plVar4,param_1);
  pBVar5 = (BatchSprite3DCache *)
           std::__ndk1::
           __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::BatchSprite3DCache::BatchSprite3DData>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::BatchSprite3DCache::BatchSprite3DData>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::BatchSprite3DCache::BatchSprite3DData>>>
           ::
           find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                     ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::BatchSprite3DCache::BatchSprite3DData>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::BatchSprite3DCache::BatchSprite3DData>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::BatchSprite3DCache::BatchSprite3DData>>>
                       *)this,local_90);
  if (this + 8 != pBVar5) {
    uVar13 = 1;
    *param_2 = *(NodeDatas **)(pBVar5 + 0x38);
    *param_3 = *(MeshDatas **)(pBVar5 + 0x40);
    *param_4 = *(MaterialDatas **)(pBVar5 + 0x48);
    goto joined_r0x00d16dc4;
  }
  pMVar6 = operator_new(0x18,(nothrow_t *)&std::nothrow);
  if (pMVar6 == (MeshDatas *)0x0) {
    pMVar17 = (MeshDatas *)0x0;
  }
  else {
    *(undefined8 *)pMVar6 = 0;
    *(undefined8 *)(pMVar6 + 8) = 0;
    *(undefined8 *)(pMVar6 + 0x10) = 0;
    pMVar17 = pMVar6;
  }
  pMVar7 = operator_new(0x18,(nothrow_t *)&std::nothrow);
  if (pMVar7 == (MaterialDatas *)0x0) {
    local_b0 = (MaterialDatas *)0x0;
  }
  else {
    *(undefined8 *)pMVar7 = 0;
    *(undefined8 *)(pMVar7 + 8) = 0;
    *(undefined8 *)(pMVar7 + 0x10) = 0;
    local_b0 = pMVar7;
  }
  pNVar8 = operator_new(0x38,(nothrow_t *)&std::nothrow);
  if (pNVar8 != (NodeDatas *)0x0) {
    *(undefined8 *)(pNVar8 + 0x10) = 0;
    *(undefined8 *)(pNVar8 + 8) = 0;
    *(undefined8 *)(pNVar8 + 0x20) = 0;
    *(undefined8 *)(pNVar8 + 0x18) = 0;
    *(undefined ***)pNVar8 = &PTR__NodeDatas_016d2d18;
    *(undefined8 *)(pNVar8 + 0x30) = 0;
    *(undefined8 *)(pNVar8 + 0x28) = 0;
  }
  plVar4 = (long *)FileUtils::getInstance();
  (**(code **)(*plVar4 + 0x138))(local_a8,plVar4,param_1);
  uVar10 = (ulong)(local_a8[0] >> 1);
  if ((local_a8[0] & 1) != 0) {
    uVar10 = local_a0;
  }
  if (uVar10 == 4) {
    piVar1 = (int *)((ulong)local_a8 | 1);
    if ((local_a8[0] & 1) != 0) {
      piVar1 = local_98;
    }
    if (*piVar1 != 0x6a626f2e) {
      if ((*piVar1 == 0x6233632e) || (*piVar1 == 0x7433632e)) {
        pBVar9 = (Bundle3D *)Bundle3D::createBundle();
        uVar10 = (**(code **)(*(long *)pBVar9 + 8))(pBVar9,local_90);
        if (((uVar10 & 1) == 0) ||
           ((uVar10 = (**(code **)(*(long *)pBVar9 + 0x20))(pBVar9,pMVar17), (uVar10 & 1) == 0 ||
            (uVar10 = (**(code **)(*(long *)pBVar9 + 0x30))(pBVar9,local_b0), (uVar10 & 1) == 0))))
        {
          local_b4 = 0;
        }
        else {
          local_b4 = (**(code **)(*(long *)pBVar9 + 0x28))(pBVar9,pNVar8);
        }
        Bundle3D::destroyBundle(pBVar9);
        if ((local_b4 & 1) != 0) goto LAB_00d16d38;
      }
      goto LAB_00d16c80;
    }
    uVar10 = Bundle3D::loadObj(pMVar17,local_b0,pNVar8,local_90,(char *)0x0);
    if ((uVar10 & 1) == 0) goto LAB_00d16c80;
LAB_00d16d38:
    local_70 = local_90;
    lVar11 = std::__ndk1::
             __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::BatchSprite3DCache::BatchSprite3DData>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::BatchSprite3DCache::BatchSprite3DData>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::BatchSprite3DCache::BatchSprite3DData>>>
             ::
             __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                       ((basic_string *)this,(piecewise_construct_t *)local_90,
                        (tuple *)&DAT_01418dee,(tuple *)&local_70);
    *(NodeDatas **)(lVar11 + 0x38) = pNVar8;
    *(MeshDatas **)(lVar11 + 0x40) = pMVar6;
    *(MaterialDatas **)(lVar11 + 0x48) = pMVar7;
    *param_2 = pNVar8;
    *param_3 = pMVar17;
    *param_4 = local_b0;
    uVar13 = 1;
  }
  else {
LAB_00d16c80:
    if (pMVar17 != (MeshDatas *)0x0) {
      puVar15 = *(undefined8 **)pMVar17;
      puVar2 = *(undefined8 **)(pMVar17 + 8);
      if (puVar15 == puVar2) {
        *(undefined8 **)(pMVar17 + 8) = puVar15;
      }
      else {
        do {
          this_00 = (MeshData *)*puVar15;
          if (this_00 != (MeshData *)0x0) {
            MeshData::~MeshData(this_00);
            operator_delete(this_00);
          }
          puVar15 = puVar15 + 1;
        } while (puVar2 != puVar15);
        puVar15 = *(undefined8 **)pMVar17;
        *(undefined8 **)(pMVar17 + 8) = puVar15;
      }
      if (puVar15 != (undefined8 *)0x0) {
        *(undefined8 **)(pMVar17 + 8) = puVar15;
        operator_delete(puVar15);
      }
      operator_delete(pMVar6);
    }
    if (local_b0 != (MaterialDatas *)0x0) {
      pvVar16 = *(void **)local_b0;
      if (pvVar16 != (void *)0x0) {
        pvVar14 = *(void **)(local_b0 + 8);
        pvVar12 = pvVar16;
        if (pvVar14 != pvVar16) {
          do {
            pvVar14 = (void *)((long)pvVar14 + -0x30);
            FUN_0090b07c(local_b0 + 0x10,pvVar14);
          } while (pvVar16 != pvVar14);
          pvVar12 = *(void **)local_b0;
        }
        *(void **)(local_b0 + 8) = pvVar16;
        operator_delete(pvVar12);
      }
      operator_delete(pMVar7);
    }
    if (pNVar8 != (NodeDatas *)0x0) {
      (**(code **)(*(long *)pNVar8 + 8))(pNVar8);
    }
    uVar13 = 0;
  }
  if ((local_a8[0] & 1) != 0) {
    operator_delete(local_98);
  }
joined_r0x00d16dc4:
  if (((byte)local_90[0] & 1) != 0) {
    operator_delete(local_80);
  }
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar13;
}

