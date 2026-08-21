
/* cocos2d::Bundle3D::loadAnimationDataBinary(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, cocos2d::Animation3DData*)
    */

void __thiscall
cocos2d::Bundle3D::loadAnimationDataBinary
          (Bundle3D *this,basic_string *param_1,Animation3DData *param_2)

{
  __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::Animation3DData::QuatKey,std::__ndk1::allocator<cocos2d::Animation3DData::QuatKey>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::Animation3DData::QuatKey,std::__ndk1::allocator<cocos2d::Animation3DData::QuatKey>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::Animation3DData::QuatKey,std::__ndk1::allocator<cocos2d::Animation3DData::QuatKey>>>>>
  *this_00;
  __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::Animation3DData::Vec3Key,std::__ndk1::allocator<cocos2d::Animation3DData::Vec3Key>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::Animation3DData::Vec3Key,std::__ndk1::allocator<cocos2d::Animation3DData::Vec3Key>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::Animation3DData::Vec3Key,std::__ndk1::allocator<cocos2d::Animation3DData::Vec3Key>>>>>
  *this_01;
  BundleReader *this_02;
  Bundle3D *pBVar1;
  size_t sVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  Bundle3D BVar5;
  basic_string bVar6;
  long lVar7;
  uint uVar8;
  bool bVar9;
  int iVar10;
  long lVar11;
  basic_string *__s2;
  size_t __n;
  ulong uVar12;
  Bundle3D *pBVar13;
  basic_string *pbVar14;
  Animation3DData *pAVar15;
  uint uVar16;
  size_t sVar17;
  uint uVar18;
  uint uVar19;
  ulong uVar20;
  Quaternion *this_03;
  byte bVar21;
  ulong uVar22;
  uint local_124;
  piecewise_construct_t *local_e8;
  undefined8 uStack_e0;
  undefined8 local_d0;
  undefined4 local_c8;
  byte local_bc [4];
  undefined4 local_b8;
  uint local_b4;
  uint local_b0;
  uint local_ac;
  piecewise_construct_t local_a8 [8];
  size_t sStack_a0;
  basic_string *local_98;
  ulong local_90;
  size_t sStack_88;
  basic_string *local_80;
  long local_70;
  
  lVar7 = tpidr_el0;
  local_70 = *(long *)(lVar7 + 0x28);
  BVar5 = this[0x38];
  uVar12 = (ulong)((byte)BVar5 >> 1);
  if (((byte)BVar5 & 1) != 0) {
    uVar12 = *(ulong *)(this + 0x40);
  }
  if (uVar12 == 3) {
    pBVar13 = *(Bundle3D **)(this + 0x48);
    if (((byte)BVar5 & 1) == 0) {
      pBVar13 = this + 0x39;
    }
    iVar10 = memcmp(pBVar13,&DAT_0149b808,3);
    if ((((iVar10 != 0) && (iVar10 = memcmp(pBVar13,&DAT_012f2699,3), iVar10 != 0)) &&
        (iVar10 = memcmp(pBVar13,"0.3",3), iVar10 != 0)) &&
       (iVar10 = memcmp(pBVar13,&DAT_013c6afc,3), iVar10 != 0)) goto LAB_00d1d794;
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_90,"");
    lVar11 = seekToFirstType(this,3,(basic_string *)&local_90);
  }
  else {
LAB_00d1d794:
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_90,param_1);
    uVar12 = (ulong)((byte)*param_1 >> 1);
    if (((byte)*param_1 & 1) != 0) {
      uVar12 = *(ulong *)(param_1 + 8);
    }
    if (uVar12 != 0) {
      FUN_007c1fb0(local_a8,param_1,"animation");
      if (((byte)local_90._0_1_ & 1) != 0) {
        *local_80 = (basic_string)0x0;
        sStack_88 = 0;
        if (((byte)local_90._0_1_ & 1) != 0) {
          operator_delete(local_80);
        }
      }
      local_90 = (ulong)(byte)local_a8[0];
      sStack_88 = sStack_a0;
      local_80 = local_98;
    }
    lVar11 = seekToFirstType(this,3,(basic_string *)&local_90);
  }
  if ((local_90 & 1) != 0) {
    operator_delete(local_80);
  }
  if (lVar11 == 0) {
LAB_00d1e008:
    bVar9 = false;
    goto LAB_00d1e088;
  }
  local_ac = 1;
  BVar5 = this[0x38];
  uVar12 = (ulong)((byte)BVar5 >> 1);
  if (((byte)BVar5 & 1) != 0) {
    uVar12 = *(ulong *)(this + 0x40);
  }
  if (uVar12 == 3) {
    pBVar13 = *(Bundle3D **)(this + 0x48);
    if (((byte)BVar5 & 1) == 0) {
      pBVar13 = this + 0x39;
    }
    iVar10 = memcmp(pBVar13,"0.3",3);
    if ((iVar10 != 0) && (iVar10 = memcmp(pBVar13,&DAT_013c6afc,3), iVar10 != 0)) goto LAB_00d1d8dc;
    lVar11 = BundleReader::read((BundleReader *)(this + 0xe0),&local_ac,4,1);
    if (lVar11 != 1) goto LAB_00d1e008;
    if (local_ac != 0) goto LAB_00d1d8dc;
    iVar10 = 4;
    local_124 = 0;
  }
  else {
LAB_00d1d8dc:
    this_00 = (__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::Animation3DData::QuatKey,std::__ndk1::allocator<cocos2d::Animation3DData::QuatKey>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::Animation3DData::QuatKey,std::__ndk1::allocator<cocos2d::Animation3DData::QuatKey>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::Animation3DData::QuatKey,std::__ndk1::allocator<cocos2d::Animation3DData::QuatKey>>>>>
               *)(param_2 + 0x18);
    this_01 = (__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::Animation3DData::Vec3Key,std::__ndk1::allocator<cocos2d::Animation3DData::Vec3Key>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::Animation3DData::Vec3Key,std::__ndk1::allocator<cocos2d::Animation3DData::Vec3Key>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::Animation3DData::Vec3Key,std::__ndk1::allocator<cocos2d::Animation3DData::Vec3Key>>>>>
               *)(param_2 + 0x30);
    pBVar13 = this + 0x39;
    uVar18 = 0;
    this_02 = (BundleReader *)(this + 0xe0);
    this_03 = (Quaternion *)((ulong)&local_e8 | 4);
    local_124 = 0;
    do {
      *(undefined4 *)(param_2 + 0x48) = 0;
      std::__ndk1::
      __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::Animation3DData::Vec3Key,std::__ndk1::allocator<cocos2d::Animation3DData::Vec3Key>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::Animation3DData::Vec3Key,std::__ndk1::allocator<cocos2d::Animation3DData::Vec3Key>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::Animation3DData::Vec3Key,std::__ndk1::allocator<cocos2d::Animation3DData::Vec3Key>>>>>
      ::destroy((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::Animation3DData::Vec3Key,std::__ndk1::allocator<cocos2d::Animation3DData::Vec3Key>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::Animation3DData::Vec3Key,std::__ndk1::allocator<cocos2d::Animation3DData::Vec3Key>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::Animation3DData::Vec3Key,std::__ndk1::allocator<cocos2d::Animation3DData::Vec3Key>>>>>
                 *)param_2,*(__tree_node **)(param_2 + 8));
      *(undefined8 *)(param_2 + 8) = 0;
      *(undefined8 *)(param_2 + 0x10) = 0;
      *(Animation3DData **)param_2 = param_2 + 8;
      std::__ndk1::
      __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::Animation3DData::QuatKey,std::__ndk1::allocator<cocos2d::Animation3DData::QuatKey>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::Animation3DData::QuatKey,std::__ndk1::allocator<cocos2d::Animation3DData::QuatKey>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::Animation3DData::QuatKey,std::__ndk1::allocator<cocos2d::Animation3DData::QuatKey>>>>>
      ::destroy(this_00,*(__tree_node **)(param_2 + 0x20));
      *(undefined8 *)(param_2 + 0x20) = 0;
      *(undefined8 *)(param_2 + 0x28) = 0;
      *(Animation3DData **)(param_2 + 0x18) = param_2 + 0x20;
      std::__ndk1::
      __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::Animation3DData::Vec3Key,std::__ndk1::allocator<cocos2d::Animation3DData::Vec3Key>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::Animation3DData::Vec3Key,std::__ndk1::allocator<cocos2d::Animation3DData::Vec3Key>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::Animation3DData::Vec3Key,std::__ndk1::allocator<cocos2d::Animation3DData::Vec3Key>>>>>
      ::destroy(this_01,*(__tree_node **)(param_2 + 0x38));
      *(undefined8 *)(param_2 + 0x38) = 0;
      *(undefined8 *)(param_2 + 0x40) = 0;
      *(Animation3DData **)(param_2 + 0x30) = param_2 + 0x38;
      BundleReader::readString();
      lVar11 = BundleReader::read(this_02,param_2 + 0x48,4,1);
      uVar8 = local_124;
      if (lVar11 == 1) {
        lVar11 = BundleReader::read(this_02,&local_b0,4,1);
        if (lVar11 == 1) {
          if (local_b0 != 0) {
            uVar19 = 0;
            do {
              BundleReader::readString();
              lVar11 = BundleReader::read(this_02,&local_b4,4,1);
              if (lVar11 == 1) {
                local_e8 = local_a8;
                lVar11 = std::__ndk1::
                         __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::Animation3DData::QuatKey,std::__ndk1::allocator<cocos2d::Animation3DData::QuatKey>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::Animation3DData::QuatKey,std::__ndk1::allocator<cocos2d::Animation3DData::QuatKey>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::Animation3DData::QuatKey,std::__ndk1::allocator<cocos2d::Animation3DData::QuatKey>>>>>
                         ::
                         __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                                   ((basic_string *)this_00,local_a8,(tuple *)&DAT_01419148,
                                    (tuple *)&local_e8);
                std::__ndk1::
                vector<cocos2d::Animation3DData::QuatKey,std::__ndk1::allocator<cocos2d::Animation3DData::QuatKey>>
                ::reserve((vector<cocos2d::Animation3DData::QuatKey,std::__ndk1::allocator<cocos2d::Animation3DData::QuatKey>>
                           *)(lVar11 + 0x38),(ulong)local_b4);
                local_e8 = local_a8;
                lVar11 = std::__ndk1::
                         __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::Animation3DData::Vec3Key,std::__ndk1::allocator<cocos2d::Animation3DData::Vec3Key>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::Animation3DData::Vec3Key,std::__ndk1::allocator<cocos2d::Animation3DData::Vec3Key>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::Animation3DData::Vec3Key,std::__ndk1::allocator<cocos2d::Animation3DData::Vec3Key>>>>>
                         ::
                         __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                                   ((basic_string *)this_01,local_a8,(tuple *)&DAT_01419148,
                                    (tuple *)&local_e8);
                std::__ndk1::
                vector<cocos2d::Animation3DData::Vec3Key,std::__ndk1::allocator<cocos2d::Animation3DData::Vec3Key>>
                ::reserve((vector<cocos2d::Animation3DData::Vec3Key,std::__ndk1::allocator<cocos2d::Animation3DData::Vec3Key>>
                           *)(lVar11 + 0x38),(ulong)local_b4);
                local_e8 = local_a8;
                lVar11 = std::__ndk1::
                         __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::Animation3DData::Vec3Key,std::__ndk1::allocator<cocos2d::Animation3DData::Vec3Key>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::Animation3DData::Vec3Key,std::__ndk1::allocator<cocos2d::Animation3DData::Vec3Key>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::Animation3DData::Vec3Key,std::__ndk1::allocator<cocos2d::Animation3DData::Vec3Key>>>>>
                         ::
                         __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                                   ((basic_string *)param_2,local_a8,(tuple *)&DAT_01419148,
                                    (tuple *)&local_e8);
                std::__ndk1::
                vector<cocos2d::Animation3DData::Vec3Key,std::__ndk1::allocator<cocos2d::Animation3DData::Vec3Key>>
                ::reserve((vector<cocos2d::Animation3DData::Vec3Key,std::__ndk1::allocator<cocos2d::Animation3DData::Vec3Key>>
                           *)(lVar11 + 0x38),(ulong)local_b4);
                if (local_b4 != 0) {
                  uVar16 = 0;
                  do {
                    lVar11 = BundleReader::read(this_02,&local_b8,4,1);
                    if (lVar11 != 1) goto LAB_00d1dec8;
                    local_bc[0] = 0;
                    BVar5 = this[0x38];
                    uVar20 = *(ulong *)(this + 0x40);
                    uVar22 = (ulong)((byte)BVar5 >> 1);
                    uVar12 = uVar22;
                    if (((byte)BVar5 & 1) != 0) {
                      uVar12 = uVar20;
                    }
                    if (uVar12 == 3) {
                      bVar21 = (byte)BVar5 & 1;
                      pBVar1 = pBVar13;
                      if (((byte)BVar5 & 1) != 0) {
                        pBVar1 = *(Bundle3D **)(this + 0x48);
                      }
                      iVar10 = memcmp(pBVar1,&DAT_0149b808,3);
                      if (((iVar10 != 0) && (iVar10 = memcmp(pBVar1,&DAT_012f2699,3), iVar10 != 0))
                         && (iVar10 = memcmp(pBVar1,"0.3",3), iVar10 != 0)) goto LAB_00d1db5c;
                    }
                    else {
LAB_00d1db5c:
                      lVar11 = BundleReader::read(this_02,local_bc,1,1);
                      if (lVar11 != 1) goto LAB_00d1dec8;
                      uVar20 = *(ulong *)(this + 0x40);
                      bVar21 = (byte)this[0x38] & 1;
                      uVar22 = (ulong)((byte)this[0x38] >> 1);
                    }
                    uVar12 = uVar22;
                    if (bVar21 != 0) {
                      uVar12 = uVar20;
                    }
                    if (uVar12 == 3) {
                      pBVar1 = pBVar13;
                      if (bVar21 != 0) {
                        pBVar1 = *(Bundle3D **)(this + 0x48);
                      }
                      iVar10 = memcmp(pBVar1,&DAT_0149b808,3);
                      if (((iVar10 != 0) && (iVar10 = memcmp(pBVar1,&DAT_012f2699,3), iVar10 != 0))
                         && (iVar10 = memcmp(pBVar1,"0.3",3), iVar10 != 0)) goto LAB_00d1dbf0;
LAB_00d1dbf8:
                      Quaternion::Quaternion((Quaternion *)&local_d0);
                      lVar11 = BundleReader::read(this_02,&local_d0,4,4);
                      if (lVar11 != 4) {
                        Quaternion::~Quaternion((Quaternion *)&local_d0);
                        goto LAB_00d1dec8;
                      }
                      local_e8 = local_a8;
                      lVar11 = std::__ndk1::
                               __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::Animation3DData::QuatKey,std::__ndk1::allocator<cocos2d::Animation3DData::QuatKey>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::Animation3DData::QuatKey,std::__ndk1::allocator<cocos2d::Animation3DData::QuatKey>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::Animation3DData::QuatKey,std::__ndk1::allocator<cocos2d::Animation3DData::QuatKey>>>>>
                               ::
                               __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                                         ((basic_string *)this_00,local_a8,(tuple *)&DAT_01419148,
                                          (tuple *)&local_e8);
                      local_e8 = (piecewise_construct_t *)CONCAT44(local_e8._4_4_,local_b8);
                      Quaternion::Quaternion(this_03,(Quaternion *)&local_d0);
                      puVar3 = *(undefined4 **)(lVar11 + 0x40);
                      if (puVar3 < *(undefined4 **)(lVar11 + 0x48)) {
                        *puVar3 = local_e8._0_4_;
                        Quaternion::Quaternion((Quaternion *)(puVar3 + 1),this_03);
                        *(undefined4 **)(lVar11 + 0x40) = puVar3 + 5;
                      }
                      else {
                        std::__ndk1::
                        vector<cocos2d::Animation3DData::QuatKey,std::__ndk1::allocator<cocos2d::Animation3DData::QuatKey>>
                        ::__push_back_slow_path<cocos2d::Animation3DData::QuatKey>
                                  ((vector<cocos2d::Animation3DData::QuatKey,std::__ndk1::allocator<cocos2d::Animation3DData::QuatKey>>
                                    *)(lVar11 + 0x38),(QuatKey *)&local_e8);
                      }
                      Quaternion::~Quaternion(this_03);
                      Quaternion::~Quaternion((Quaternion *)&local_d0);
                      uVar20 = *(ulong *)(this + 0x40);
                      bVar21 = (byte)this[0x38] & 1;
                      uVar22 = (ulong)((byte)this[0x38] >> 1);
                    }
                    else {
LAB_00d1dbf0:
                      if ((local_bc[0] & 1) != 0) goto LAB_00d1dbf8;
                    }
                    uVar12 = uVar22;
                    if (bVar21 != 0) {
                      uVar12 = uVar20;
                    }
                    if (uVar12 == 3) {
                      pBVar1 = pBVar13;
                      if (bVar21 != 0) {
                        pBVar1 = *(Bundle3D **)(this + 0x48);
                      }
                      iVar10 = memcmp(pBVar1,&DAT_0149b808,3);
                      if (((iVar10 != 0) && (iVar10 = memcmp(pBVar1,&DAT_012f2699,3), iVar10 != 0))
                         && (iVar10 = memcmp(pBVar1,"0.3",3), iVar10 != 0)) goto LAB_00d1dd18;
LAB_00d1dd20:
                      Vec3::Vec3((Vec3 *)&local_d0);
                      lVar11 = BundleReader::read(this_02,&local_d0,4,3);
                      if (lVar11 != 3) goto LAB_00d1dec8;
                      local_e8 = local_a8;
                      lVar11 = std::__ndk1::
                               __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::Animation3DData::Vec3Key,std::__ndk1::allocator<cocos2d::Animation3DData::Vec3Key>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::Animation3DData::Vec3Key,std::__ndk1::allocator<cocos2d::Animation3DData::Vec3Key>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::Animation3DData::Vec3Key,std::__ndk1::allocator<cocos2d::Animation3DData::Vec3Key>>>>>
                               ::
                               __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                                         ((basic_string *)this_01,local_a8,(tuple *)&DAT_01419148,
                                          (tuple *)&local_e8);
                      local_e8 = (piecewise_construct_t *)CONCAT44(local_e8._4_4_,local_b8);
                      *(undefined4 *)(this_03 + 8) = local_c8;
                      *(undefined8 *)this_03 = local_d0;
                      puVar4 = *(undefined8 **)(lVar11 + 0x40);
                      if (puVar4 < *(undefined8 **)(lVar11 + 0x48)) {
                        puVar4[1] = uStack_e0;
                        *puVar4 = local_e8;
                        *(undefined8 **)(lVar11 + 0x40) = puVar4 + 2;
                      }
                      else {
                        std::__ndk1::
                        vector<cocos2d::Animation3DData::Vec3Key,std::__ndk1::allocator<cocos2d::Animation3DData::Vec3Key>>
                        ::__push_back_slow_path<cocos2d::Animation3DData::Vec3Key>
                                  ((vector<cocos2d::Animation3DData::Vec3Key,std::__ndk1::allocator<cocos2d::Animation3DData::Vec3Key>>
                                    *)(lVar11 + 0x38),(Vec3Key *)&local_e8);
                      }
                      uVar20 = *(ulong *)(this + 0x40);
                      bVar21 = (byte)this[0x38] & 1;
                      uVar22 = (ulong)((byte)this[0x38] >> 1);
                    }
                    else {
LAB_00d1dd18:
                      if ((local_bc[0] >> 1 & 1) != 0) goto LAB_00d1dd20;
                    }
                    if (bVar21 != 0) {
                      uVar22 = uVar20;
                    }
                    if (uVar22 == 3) {
                      pBVar1 = pBVar13;
                      if (bVar21 != 0) {
                        pBVar1 = *(Bundle3D **)(this + 0x48);
                      }
                      iVar10 = memcmp(pBVar1,&DAT_0149b808,3);
                      if (((iVar10 != 0) && (iVar10 = memcmp(pBVar1,&DAT_012f2699,3), iVar10 != 0))
                         && (iVar10 = memcmp(pBVar1,"0.3",3), iVar10 != 0)) goto LAB_00d1de24;
LAB_00d1de2c:
                      Vec3::Vec3((Vec3 *)&local_d0);
                      lVar11 = BundleReader::read(this_02,&local_d0,4,3);
                      if (lVar11 != 3) goto LAB_00d1dec8;
                      local_e8 = local_a8;
                      lVar11 = std::__ndk1::
                               __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::Animation3DData::Vec3Key,std::__ndk1::allocator<cocos2d::Animation3DData::Vec3Key>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::Animation3DData::Vec3Key,std::__ndk1::allocator<cocos2d::Animation3DData::Vec3Key>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::Animation3DData::Vec3Key,std::__ndk1::allocator<cocos2d::Animation3DData::Vec3Key>>>>>
                               ::
                               __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                                         ((basic_string *)param_2,local_a8,(tuple *)&DAT_01419148,
                                          (tuple *)&local_e8);
                      local_e8 = (piecewise_construct_t *)CONCAT44(local_e8._4_4_,local_b8);
                      *(undefined4 *)(this_03 + 8) = local_c8;
                      *(undefined8 *)this_03 = local_d0;
                      puVar4 = *(undefined8 **)(lVar11 + 0x40);
                      if (puVar4 < *(undefined8 **)(lVar11 + 0x48)) {
                        puVar4[1] = uStack_e0;
                        *puVar4 = local_e8;
                        *(undefined8 **)(lVar11 + 0x40) = puVar4 + 2;
                      }
                      else {
                        std::__ndk1::
                        vector<cocos2d::Animation3DData::Vec3Key,std::__ndk1::allocator<cocos2d::Animation3DData::Vec3Key>>
                        ::__push_back_slow_path<cocos2d::Animation3DData::Vec3Key>
                                  ((vector<cocos2d::Animation3DData::Vec3Key,std::__ndk1::allocator<cocos2d::Animation3DData::Vec3Key>>
                                    *)(lVar11 + 0x38),(Vec3Key *)&local_e8);
                      }
                    }
                    else {
LAB_00d1de24:
                      if ((local_bc[0] >> 2 & 1) != 0) goto LAB_00d1de2c;
                    }
                    uVar16 = uVar16 + 1;
                  } while (uVar16 < local_b4);
                }
                bVar9 = false;
              }
              else {
LAB_00d1dec8:
                bVar9 = true;
              }
              if (((byte)local_a8[0] & 1) != 0) {
                operator_delete(local_98);
              }
              if (bVar9) {
                iVar10 = 1;
                goto joined_r0x00d1df84;
              }
              uVar19 = uVar19 + 1;
            } while (uVar19 < local_b0);
          }
          bVar6 = *param_1;
          sVar17 = *(size_t *)(param_1 + 8);
          uVar12 = (ulong)((byte)bVar6 >> 1);
          __n = uVar12;
          if (((byte)bVar6 & 1) != 0) {
            __n = sVar17;
          }
          sVar2 = local_90 >> 1 & 0x7f;
          if ((local_90 & 1) != 0) {
            sVar2 = sStack_88;
          }
          if (__n == sVar2) {
            pbVar14 = param_1 + 1;
            if (((byte)bVar6 & 1) != 0) {
              pbVar14 = *(basic_string **)(param_1 + 0x10);
            }
            __s2 = (basic_string *)((ulong)&local_90 | 1);
            if ((local_90 & 1) != 0) {
              __s2 = local_80;
            }
            if (((byte)bVar6 & 1) == 0) {
              pbVar14 = param_1 + 1;
              if (__n != 0) {
                do {
                  if (*pbVar14 != *__s2) goto LAB_00d1dfb8;
                  uVar12 = uVar12 - 1;
                  pbVar14 = pbVar14 + 1;
                  __s2 = __s2 + 1;
                  iVar10 = 4;
                  uVar8 = 1;
                } while (uVar12 != 0);
                goto joined_r0x00d1df84;
              }
            }
            else if ((__n != 0) && (iVar10 = memcmp(pbVar14,__s2,__n), __n = sVar17, iVar10 != 0))
            goto LAB_00d1dfb8;
            iVar10 = 4;
            uVar8 = 1;
          }
          else {
LAB_00d1dfb8:
            iVar10 = (uint)(__n == 0) << 2;
            uVar8 = local_124 | __n == 0;
          }
        }
        else {
          iVar10 = 1;
        }
      }
      else {
        iVar10 = 1;
      }
joined_r0x00d1df84:
      local_124 = uVar8;
      if ((local_90 & 1) != 0) {
        operator_delete(local_80);
      }
      if (iVar10 != 0) goto LAB_00d1e020;
      uVar18 = uVar18 + 1;
    } while (uVar18 < local_ac);
    iVar10 = 4;
  }
LAB_00d1e020:
  bVar9 = iVar10 == 4;
  if ((bVar9) && (local_124 == 0)) {
    *(undefined4 *)(param_2 + 0x48) = 0;
    pAVar15 = param_2 + 8;
    std::__ndk1::
    __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::Animation3DData::Vec3Key,std::__ndk1::allocator<cocos2d::Animation3DData::Vec3Key>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::Animation3DData::Vec3Key,std::__ndk1::allocator<cocos2d::Animation3DData::Vec3Key>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::Animation3DData::Vec3Key,std::__ndk1::allocator<cocos2d::Animation3DData::Vec3Key>>>>>
    ::destroy((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::Animation3DData::Vec3Key,std::__ndk1::allocator<cocos2d::Animation3DData::Vec3Key>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::Animation3DData::Vec3Key,std::__ndk1::allocator<cocos2d::Animation3DData::Vec3Key>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::Animation3DData::Vec3Key,std::__ndk1::allocator<cocos2d::Animation3DData::Vec3Key>>>>>
               *)param_2,*(__tree_node **)pAVar15);
    *(Animation3DData **)param_2 = pAVar15;
    *(undefined8 *)(param_2 + 0x10) = 0;
    *(undefined8 *)pAVar15 = 0;
    pAVar15 = param_2 + 0x20;
    std::__ndk1::
    __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::Animation3DData::QuatKey,std::__ndk1::allocator<cocos2d::Animation3DData::QuatKey>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::Animation3DData::QuatKey,std::__ndk1::allocator<cocos2d::Animation3DData::QuatKey>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::Animation3DData::QuatKey,std::__ndk1::allocator<cocos2d::Animation3DData::QuatKey>>>>>
    ::destroy((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::Animation3DData::QuatKey,std::__ndk1::allocator<cocos2d::Animation3DData::QuatKey>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::Animation3DData::QuatKey,std::__ndk1::allocator<cocos2d::Animation3DData::QuatKey>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::Animation3DData::QuatKey,std::__ndk1::allocator<cocos2d::Animation3DData::QuatKey>>>>>
               *)(param_2 + 0x18),*(__tree_node **)pAVar15);
    *(Animation3DData **)(param_2 + 0x18) = pAVar15;
    *(undefined8 *)pAVar15 = 0;
    *(undefined8 *)(param_2 + 0x28) = 0;
    std::__ndk1::
    __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::Animation3DData::Vec3Key,std::__ndk1::allocator<cocos2d::Animation3DData::Vec3Key>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::Animation3DData::Vec3Key,std::__ndk1::allocator<cocos2d::Animation3DData::Vec3Key>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::Animation3DData::Vec3Key,std::__ndk1::allocator<cocos2d::Animation3DData::Vec3Key>>>>>
    ::destroy((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::Animation3DData::Vec3Key,std::__ndk1::allocator<cocos2d::Animation3DData::Vec3Key>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::Animation3DData::Vec3Key,std::__ndk1::allocator<cocos2d::Animation3DData::Vec3Key>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::Animation3DData::Vec3Key,std::__ndk1::allocator<cocos2d::Animation3DData::Vec3Key>>>>>
               *)(param_2 + 0x30),*(__tree_node **)(param_2 + 0x38));
    bVar9 = false;
    *(Animation3DData **)(param_2 + 0x30) = param_2 + 0x38;
    *(undefined8 *)(param_2 + 0x38) = 0;
    *(undefined8 *)(param_2 + 0x40) = 0;
  }
LAB_00d1e088:
  if (*(long *)(lVar7 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar9);
  }
  return;
}

