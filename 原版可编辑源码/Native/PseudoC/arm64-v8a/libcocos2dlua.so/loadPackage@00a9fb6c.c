
/* fairygui::UIPackage::loadPackage(fairygui::ByteBuffer*) */

void __thiscall fairygui::UIPackage::loadPackage(UIPackage *this,ByteBuffer *param_1)

{
  int iVar1;
  vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
  *this_00;
  ulong *puVar2;
  unordered_map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
  *this_01;
  byte *pbVar3;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar4;
  int iVar5;
  PackageItem PVar6;
  long lVar7;
  bool bVar8;
  byte *pbVar9;
  char cVar10;
  byte bVar11;
  short sVar12;
  int iVar13;
  uint uVar14;
  undefined4 uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar19;
  void *pvVar20;
  PackageItem *pPVar21;
  Rect *this_02;
  PackageItem *pPVar22;
  vector *pvVar23;
  undefined8 *puVar24;
  PixelHitTestData *this_03;
  undefined8 uVar25;
  piecewise_construct_t *ppVar26;
  basic_string *pbVar27;
  long lVar28;
  ulong uVar29;
  UIPackage *pUVar30;
  byte *pbVar31;
  ulong uVar32;
  void *pvVar33;
  long lVar34;
  piecewise_construct_t *local_100 [2];
  void *local_f0;
  piecewise_construct_t *local_e8;
  ulong uStack_e0;
  void *local_d8;
  PackageItem *local_d0;
  ulong local_c8;
  ulong local_c0;
  void *local_b8;
  void *local_b0;
  size_t sStack_a8;
  undefined8 *local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined7 uStack_80;
  undefined1 local_79;
  undefined7 uStack_78;
  long local_70;
  
  lVar7 = tpidr_el0;
  local_70 = *(long *)(lVar7 + 0x28);
  iVar13 = ByteBuffer::readUint(param_1);
  if (iVar13 != 0x46475549) {
    uVar25 = 0;
    goto LAB_00aa093c;
  }
  iVar13 = ByteBuffer::readInt(param_1);
  *(int *)param_1 = iVar13;
  ByteBuffer::readBool(param_1);
  ByteBuffer::readString();
  pUVar30 = this + 0x28;
  if (((byte)*pUVar30 & 1) == 0) {
    *(undefined2 *)pUVar30 = 0;
  }
  else {
    **(undefined1 **)(this + 0x38) = 0;
    *(undefined8 *)(this + 0x30) = 0;
    if (((byte)this[0x28] & 1) != 0) {
      operator_delete(*(void **)(this + 0x38));
      *(undefined8 *)(this + 0x28) = 0;
    }
  }
  *(undefined8 **)(this + 0x38) = local_a0;
  *(size_t *)(this + 0x30) = sStack_a8;
  *(void **)pUVar30 = local_b0;
  ByteBuffer::readString();
  pUVar30 = this + 0x40;
  if (((byte)*pUVar30 & 1) == 0) {
    *(undefined2 *)pUVar30 = 0;
  }
  else {
    **(undefined1 **)(this + 0x50) = 0;
    *(undefined8 *)(this + 0x48) = 0;
    if (((byte)this[0x40] & 1) != 0) {
      operator_delete(*(void **)(this + 0x50));
      *(undefined8 *)(this + 0x40) = 0;
    }
  }
  *(undefined8 **)(this + 0x50) = local_a0;
  *(size_t *)(this + 0x48) = sStack_a8;
  *(void **)pUVar30 = local_b0;
  iVar1 = *(int *)(param_1 + 0x1c) + 0x14;
  *(int *)(param_1 + 0x1c) = iVar1;
  ByteBuffer::seek(param_1,iVar1,4);
  uVar14 = ByteBuffer::readInt(param_1);
  pbVar3 = *(byte **)(this + 0x120);
  uVar32 = (ulong)(int)uVar14;
  lVar28 = (long)pbVar3 - *(long *)(this + 0x118) >> 3;
  uVar29 = lVar28 * -0x5555555555555555;
  this_00 = (vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
             *)(this + 0x118);
  if (uVar29 < uVar32) {
    std::__ndk1::
    vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
    ::__append(this_00,uVar32 + lVar28 * 0x5555555555555555);
  }
  else if (uVar29 - uVar32 != 0) {
    pbVar31 = (byte *)(*(long *)(this + 0x118) + uVar32 * 0x18);
    if (pbVar31 != pbVar3) {
      bVar11 = pbVar3[-0x18];
      pbVar9 = pbVar3 + -0x18;
      while( true ) {
        if ((bVar11 & 1) != 0) {
          operator_delete(*(void **)(pbVar3 + -8));
        }
        if (pbVar31 == pbVar9) break;
        bVar11 = pbVar9[-0x18];
        pbVar3 = pbVar9;
        pbVar9 = pbVar9 + -0x18;
      }
    }
    *(byte **)(this + 0x120) = pbVar31;
  }
  if (0 < (int)uVar14) {
    lVar28 = 0;
    uVar29 = (ulong)uVar14;
    do {
      ByteBuffer::readString();
      lVar34 = *(long *)this_00;
      puVar2 = (ulong *)(lVar34 + lVar28);
      if ((*puVar2 & 1) == 0) {
        *(undefined2 *)(lVar34 + lVar28) = 0;
      }
      else {
        *(undefined1 *)puVar2[2] = 0;
        puVar2[1] = 0;
        if ((*puVar2 & 1) != 0) {
          operator_delete((void *)puVar2[2]);
          *(undefined8 *)(lVar34 + lVar28) = 0;
        }
      }
      uVar29 = uVar29 - 1;
      lVar28 = lVar28 + 0x18;
      puVar2[2] = (ulong)local_a0;
      puVar2[1] = sStack_a8;
      *puVar2 = (ulong)local_b0;
    } while (uVar29 != 0);
  }
  *(vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
    **)(param_1 + 0x20) = this_00;
  ByteBuffer::seek(param_1,iVar1,0);
  sVar12 = ByteBuffer::readShort(param_1);
  if (0 < sVar12) {
    iVar18 = 0;
    do {
      sStack_a8 = 0;
      local_b0 = (void *)0x0;
      uStack_98 = 0;
      local_a0 = (undefined8 *)0x0;
      local_90 = 0x3f800000;
      pbVar19 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                ByteBuffer::readS(param_1);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_c8,"id");
      local_e8 = (piecewise_construct_t *)&local_c8;
      lVar28 = std::__ndk1::
               __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
               ::
               __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                         ((basic_string *)&local_b0,(piecewise_construct_t *)&local_c8,
                          (tuple *)&DAT_013ce052,(tuple *)&local_e8);
      if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
          (lVar28 + 0x28) != pbVar19) {
        uVar29 = *(ulong *)(pbVar19 + 8);
        pbVar4 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **
                  )(pbVar19 + 0x10);
        if (((byte)*pbVar19 & 1) == 0) {
          pbVar4 = pbVar19 + 1;
          uVar29 = (ulong)((byte)*pbVar19 >> 1);
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (lVar28 + 0x28),(char *)pbVar4,uVar29);
      }
      if ((local_c8 & 1) != 0) {
        operator_delete(local_b8);
      }
      pbVar19 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                ByteBuffer::readS(param_1);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_c8,"name");
      local_e8 = (piecewise_construct_t *)&local_c8;
      lVar28 = std::__ndk1::
               __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
               ::
               __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                         ((basic_string *)&local_b0,(piecewise_construct_t *)&local_c8,
                          (tuple *)&DAT_013ce052,(tuple *)&local_e8);
      if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
          (lVar28 + 0x28) != pbVar19) {
        uVar29 = *(ulong *)(pbVar19 + 8);
        pbVar4 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **
                  )(pbVar19 + 0x10);
        if (((byte)*pbVar19 & 1) == 0) {
          pbVar4 = pbVar19 + 1;
          uVar29 = (ulong)((byte)*pbVar19 >> 1);
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (lVar28 + 0x28),(char *)pbVar4,uVar29);
      }
      if ((local_c8 & 1) != 0) {
        operator_delete(local_b8);
      }
      this_01 = *(unordered_map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
                  **)(this + 0x138);
      if (this_01 ==
          *(unordered_map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
            **)(this + 0x140)) {
        std::__ndk1::
        vector<std::__ndk1::unordered_map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>,std::__ndk1::allocator<std::__ndk1::unordered_map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>>>
        ::
        __push_back_slow_path<std::__ndk1::unordered_map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>const&>
                  ((vector<std::__ndk1::unordered_map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>,std::__ndk1::allocator<std::__ndk1::unordered_map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>>>
                    *)(this + 0x130),(unordered_map *)&local_b0);
        pvVar20 = local_b0;
        puVar24 = local_a0;
      }
      else {
        std::__ndk1::
        unordered_map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
        ::unordered_map(this_01,(unordered_map *)&local_b0);
        *(unordered_map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          **)(this + 0x138) = this_01 + 0x28;
        pvVar20 = local_b0;
        puVar24 = local_a0;
      }
      while (puVar24 != (void *)0x0) {
        pvVar33 = (void *)*puVar24;
        local_b0 = pvVar20;
        if ((*(byte *)(puVar24 + 5) & 1) != 0) {
          operator_delete((void *)puVar24[7]);
        }
        if ((*(byte *)(puVar24 + 2) & 1) != 0) {
          operator_delete((void *)puVar24[4]);
        }
        operator_delete(puVar24);
        pvVar20 = local_b0;
        puVar24 = pvVar33;
      }
      local_b0 = (void *)0x0;
      if (pvVar20 != (void *)0x0) {
        operator_delete(pvVar20);
      }
      iVar18 = iVar18 + 1;
    } while (iVar18 != sVar12);
  }
  if (iVar13 < 2) {
LAB_00a9fff0:
    bVar8 = false;
  }
  else {
    sVar12 = ByteBuffer::readShort(param_1);
    if (sVar12 < 1) goto LAB_00a9fff0;
    ByteBuffer::readSArray(param_1,(vector *)(this + 0x148),(int)sVar12);
    uVar29 = (ulong)((byte)_branch >> 1);
    if (((byte)_branch & 1) != 0) {
      uVar29 = DAT_017828d8;
    }
    if (uVar29 != 0) {
      uVar15 = ToolSet::findInStringArray((vector *)(this + 0x148),(basic_string *)&_branch);
      *(undefined4 *)(this + 0x160) = uVar15;
    }
    bVar8 = true;
  }
  ByteBuffer::seek(param_1,iVar1,1);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_b0,(basic_string *)(this + 0x58));
  puVar24 = (undefined8 *)((ulong)&local_b0 | 1);
  uVar29 = (ulong)local_b0 >> 1 & 0x7f;
  if (((ulong)local_b0 & 1) != 0) {
    puVar24 = local_a0;
    uVar29 = sStack_a8;
  }
  if (((uVar29 == 0) || (pvVar20 = memchr(puVar24,0x2f,uVar29), pvVar20 == (void *)0x0)) ||
     (lVar28 = (long)pvVar20 - (long)puVar24, lVar28 == -1)) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_c8,(basic_string *)&cocos2d::STD_STRING_EMPTY);
  }
  else {
    if (lVar28 + 1U <= uVar29) {
      uVar29 = lVar28 + 1;
    }
    local_c0 = 0;
    local_b8 = (void *)0x0;
    local_c8 = 0;
    if (0xffffffffffffffef < uVar29) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (uVar29 < 0x17) {
      pvVar20 = (void *)((ulong)&local_c8 | 1);
      local_c8 = (ulong)(byte)((int)uVar29 << 1);
    }
    else {
                    /* try { // try from 00aa00a0 to 00ba00eb has its CatchHandler @ 00aa00a0
                       catch() { ... } // from try @ 00aa00a0 with catch @ 00aa00a0
                       catch() { ... } // from try @ 00aa00f0 with catch @ 00aa00a0 */
      uVar32 = uVar29 + 0x10 & 0xfffffffffffffff0;
      pvVar20 = operator_new(uVar32);
      local_c8 = uVar32 | 1;
      local_c0 = uVar29;
      local_b8 = pvVar20;
    }
    memcpy(pvVar20,puVar24,uVar29);
    *(undefined1 *)((long)pvVar20 + uVar29) = 0;
  }
  pbVar27 = (basic_string *)0x1;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)&local_b0
         ,"_",1);
                    /* try { // try from 00aa00ec to 00ba00ef has its CatchHandler @ 00aa0124 */
  sVar12 = ByteBuffer::readShort(param_1);
                    /* try { // try from 00aa00f0 to 00ba0137 has its CatchHandler @ 00aa00a0 */
  iVar18 = (int)sVar12;
  if (0 < iVar18) {
    do {
      iVar16 = ByteBuffer::readInt(param_1);
      iVar5 = *(int *)(param_1 + 0x1c);
      pPVar21 = operator_new(0x130);
      PackageItem::PackageItem(pPVar21);
      *(UIPackage **)(pPVar21 + 0x28) = this;
      local_d0 = pPVar21;
      cVar10 = ByteBuffer::readByte(param_1);
      *(int *)(local_d0 + 0x30) = (int)cVar10;
      pbVar19 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                ByteBuffer::readS(param_1);
      if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
          (local_d0 + 0x38) != pbVar19) {
        pbVar27 = *(basic_string **)(pbVar19 + 8);
        pbVar4 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **
                  )(pbVar19 + 0x10);
        if (((byte)*pbVar19 & 1) == 0) {
          pbVar4 = pbVar19 + 1;
          pbVar27 = (basic_string *)(ulong)((byte)*pbVar19 >> 1);
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (local_d0 + 0x38),(char *)pbVar4,(ulong)pbVar27);
      }
      pbVar19 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                ByteBuffer::readS(param_1);
      if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
          (local_d0 + 0x50) != pbVar19) {
        pbVar27 = *(basic_string **)(pbVar19 + 8);
        pbVar4 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **
                  )(pbVar19 + 0x10);
        if (((byte)*pbVar19 & 1) == 0) {
          pbVar4 = pbVar19 + 1;
          pbVar27 = (basic_string *)(ulong)((byte)*pbVar19 >> 1);
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (local_d0 + 0x50),(char *)pbVar4,(ulong)pbVar27);
      }
      *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 2;
      pbVar19 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                ByteBuffer::readS(param_1);
      if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
          (local_d0 + 0x70) != pbVar19) {
        pbVar27 = *(basic_string **)(pbVar19 + 8);
        pbVar4 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **
                  )(pbVar19 + 0x10);
        if (((byte)*pbVar19 & 1) == 0) {
          pbVar4 = pbVar19 + 1;
          pbVar27 = (basic_string *)(ulong)((byte)*pbVar19 >> 1);
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (local_d0 + 0x70),(char *)pbVar4,(ulong)pbVar27);
      }
      ByteBuffer::readBool(param_1);
      uVar15 = ByteBuffer::readInt(param_1);
      *(undefined4 *)(local_d0 + 0x68) = uVar15;
      uVar15 = ByteBuffer::readInt(param_1);
      *(undefined4 *)(local_d0 + 0x6c) = uVar15;
      switch(*(undefined4 *)(local_d0 + 0x30)) {
      case 0:
        *(undefined4 *)(local_d0 + 0x34) = 0;
        cVar10 = ByteBuffer::readByte(param_1);
                    /* try { // try from 00aa035c to 00ba038f has its CatchHandler @ 00aa03e0 */
        if (cVar10 == '\x02') {
          local_d0[0xb0] = (PackageItem)0x1;
        }
        else if (cVar10 == '\x01') {
          this_02 = operator_new(0x10);
          cocos2d::Rect::Rect(this_02);
          *(Rect **)(local_d0 + 0xa8) = this_02;
          iVar17 = ByteBuffer::readInt(param_1);
                    /* try { // try from 00aa0390 to 00ba042b has its CatchHandler @ 00aa0138 */
          **(float **)(local_d0 + 0xa8) = (float)iVar17;
          iVar17 = ByteBuffer::readInt(param_1);
          *(float *)(*(long *)(local_d0 + 0xa8) + 4) = (float)iVar17;
          iVar17 = ByteBuffer::readInt(param_1);
          *(float *)(*(long *)(local_d0 + 0xa8) + 8) = (float)iVar17;
          iVar17 = ByteBuffer::readInt(param_1);
                    /* catch() { ... } // from try @ 00aa0344 with catch @ 00aa03dc */
                    /* catch() { ... } // from try @ 00aa035c with catch @ 00aa03e0 */
          *(float *)(*(long *)(local_d0 + 0xa8) + 0xc) = (float)iVar17;
          uVar15 = ByteBuffer::readInt(param_1);
          *(undefined4 *)(local_d0 + 0xb4) = uVar15;
        }
        ByteBuffer::readBool(param_1);
        break;
      case 1:
        ByteBuffer::readBool(param_1);
                    /* catch() { ... } // from try @ 00aa0310 with catch @ 00aa0410 */
        *(undefined4 *)(local_d0 + 0x34) = 1;
        uVar25 = ByteBuffer::readBuffer(param_1);
        goto LAB_00aa0420;
      case 2:
      case 4:
      case 7:
        std::__ndk1::operator+((__ndk1 *)&local_b0,(basic_string *)(local_d0 + 0x70),pbVar27);
        pPVar21 = local_d0;
        pPVar22 = local_d0 + 0x70;
        if (((byte)*pPVar22 & 1) == 0) {
          *(undefined2 *)pPVar22 = 0;
        }
        else {
          **(undefined1 **)(local_d0 + 0x80) = 0;
          *(undefined8 *)(local_d0 + 0x78) = 0;
          if (((byte)local_d0[0x70] & 1) != 0) {
            operator_delete(*(void **)(local_d0 + 0x80));
            *(undefined8 *)(pPVar21 + 0x70) = 0;
          }
        }
        *(void **)(pPVar21 + 0x80) = local_d8;
        *(ulong *)(pPVar21 + 0x78) = uStack_e0;
        *(piecewise_construct_t **)pPVar22 = local_e8;
        break;
      case 3:
                    /* try { // try from 00aa0310 to 00ba0343 has its CatchHandler @ 00aa0410 */
        cVar10 = ByteBuffer::readByte(param_1);
        iVar17 = (int)cVar10;
        if (iVar17 < 1) {
          iVar17 = 9;
        }
        *(int *)(local_d0 + 0x34) = iVar17;
        uVar25 = ByteBuffer::readBuffer(param_1);
        *(undefined8 *)(local_d0 + 0x88) = uVar25;
                    /* try { // try from 00aa0344 to 00ba0357 has its CatchHandler @ 00aa03dc */
        UIObjectFactory::resolvePackageItemExtension(local_d0);
        break;
      case 5:
        uVar25 = ByteBuffer::readBuffer(param_1);
LAB_00aa0420:
        *(undefined8 *)(local_d0 + 0x88) = uVar25;
        break;
      case 9:
      case 10:
        std::__ndk1::operator+((__ndk1 *)&local_c8,(basic_string *)(local_d0 + 0x70),pbVar27);
        pPVar21 = local_d0;
        pPVar22 = local_d0 + 0x70;
        if (((byte)*pPVar22 & 1) == 0) {
          *(undefined2 *)pPVar22 = 0;
        }
        else {
          **(undefined1 **)(local_d0 + 0x80) = 0;
          *(undefined8 *)(local_d0 + 0x78) = 0;
          if (((byte)local_d0[0x70] & 1) != 0) {
            operator_delete(*(void **)(local_d0 + 0x80));
            *(undefined8 *)(pPVar21 + 0x70) = 0;
          }
        }
        *(void **)(pPVar21 + 0x80) = local_d8;
        *(ulong *)(pPVar21 + 0x78) = uStack_e0;
        *(piecewise_construct_t **)pPVar22 = local_e8;
        puVar24 = operator_new(8);
        *puVar24 = 0;
        *(undefined8 **)(local_d0 + 0x120) = puVar24;
        uVar15 = ByteBuffer::readFloat(param_1);
        **(undefined4 **)(local_d0 + 0x120) = uVar15;
        uVar15 = ByteBuffer::readFloat(param_1);
        *(undefined4 *)(*(long *)(local_d0 + 0x120) + 4) = uVar15;
      }
      if (1 < iVar13) {
        pbVar27 = (basic_string *)ByteBuffer::readS(param_1);
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)&local_e8,pbVar27);
        uVar29 = (ulong)local_e8 >> 1 & 0x7f;
        if (((ulong)local_e8 & 1) != 0) {
          uVar29 = uStack_e0;
        }
        if (uVar29 != 0) {
          FUN_007c1fb0(local_100,&local_e8,&DAT_0144b7ba);
          uVar29 = (ulong)((byte)local_d0[0x50] >> 1);
          pPVar21 = local_d0 + 0x51;
          if (((byte)local_d0[0x50] & 1) != 0) {
            uVar29 = *(ulong *)(local_d0 + 0x58);
            pPVar21 = *(PackageItem **)(local_d0 + 0x60);
          }
          pPVar22 = (PackageItem *)
                    std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                            *)local_100,(char *)pPVar21,uVar29);
          pPVar21 = local_d0;
          uVar25 = *(undefined8 *)(pPVar22 + 0x10);
          PVar6 = *pPVar22;
          uStack_78 = (undefined7)((ulong)*(undefined8 *)(pPVar22 + 8) >> 8);
          uStack_80 = (undefined7)*(undefined8 *)(pPVar22 + 1);
          local_79 = (undefined1)((ulong)*(undefined8 *)(pPVar22 + 1) >> 0x38);
          *(undefined8 *)pPVar22 = 0;
          *(undefined8 *)(pPVar22 + 8) = 0;
          *(undefined8 *)(pPVar22 + 0x10) = 0;
          if (((byte)local_d0[0x50] & 1) == 0) {
            *(undefined2 *)(local_d0 + 0x50) = 0;
          }
          else {
            **(undefined1 **)(local_d0 + 0x60) = 0;
            *(undefined8 *)(local_d0 + 0x58) = 0;
            if (((byte)local_d0[0x50] & 1) != 0) {
              operator_delete(*(void **)(local_d0 + 0x60));
              *(undefined8 *)(pPVar21 + 0x50) = 0;
            }
          }
          pPVar21[0x50] = PVar6;
          *(ulong *)(pPVar21 + 0x58) = CONCAT71(uStack_78,local_79);
          *(undefined8 *)(pPVar21 + 0x60) = uVar25;
          *(ulong *)(pPVar21 + 0x51) = CONCAT17(local_79,uStack_80);
          uStack_78 = 0;
          uStack_80 = 0;
          local_79 = 0;
          if (((ulong)local_100[0] & 1) != 0) {
            operator_delete(local_f0);
          }
        }
        bVar11 = ByteBuffer::readUbyte(param_1);
        pPVar21 = local_d0;
        if (bVar11 != 0) {
          if (bVar8) {
            pvVar23 = operator_new(0x18);
            *(undefined8 *)pvVar23 = 0;
            *(undefined8 *)(pvVar23 + 8) = 0;
            *(undefined8 *)(pvVar23 + 0x10) = 0;
            *(vector **)(local_d0 + 0x90) = pvVar23;
            ByteBuffer::readSArray(param_1,pvVar23,(uint)bVar11);
          }
          else {
            local_100[0] = (piecewise_construct_t *)ByteBuffer::readS(param_1);
            lVar28 = std::__ndk1::
                     __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::PackageItem*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::PackageItem*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::PackageItem*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::PackageItem*>>>
                     ::
                     __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                               ((basic_string *)(this + 0x88),local_100[0],(tuple *)&DAT_013ce052,
                                (tuple *)local_100);
            *(PackageItem **)(lVar28 + 0x28) = pPVar21;
          }
        }
        bVar11 = ByteBuffer::readUbyte(param_1);
        if (bVar11 != 0) {
          pvVar23 = operator_new(0x18);
          *(undefined8 *)pvVar23 = 0;
          *(undefined8 *)(pvVar23 + 8) = 0;
          *(undefined8 *)(pvVar23 + 0x10) = 0;
          *(vector **)(local_d0 + 0x98) = pvVar23;
          ByteBuffer::readSArray(param_1,pvVar23,(uint)bVar11);
        }
        if (((ulong)local_e8 & 1) != 0) {
          operator_delete(local_d8);
        }
      }
      puVar24 = *(undefined8 **)(this + 0x78);
      if (puVar24 == *(undefined8 **)(this + 0x80)) {
        std::__ndk1::vector<fairygui::PackageItem*,std::__ndk1::allocator<fairygui::PackageItem*>>::
        __push_back_slow_path<fairygui::PackageItem*const&>
                  ((vector<fairygui::PackageItem*,std::__ndk1::allocator<fairygui::PackageItem*>> *)
                   (this + 0x70),&local_d0);
      }
      else {
        *puVar24 = local_d0;
        *(undefined8 **)(this + 0x78) = puVar24 + 1;
      }
      pPVar21 = local_d0;
      local_e8 = (piecewise_construct_t *)(local_d0 + 0x38);
      pbVar27 = (basic_string *)&DAT_013ce052;
      lVar28 = std::__ndk1::
               __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::PackageItem*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::PackageItem*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::PackageItem*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::PackageItem*>>>
               ::
               __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                         ((basic_string *)(this + 0x88),local_e8,(tuple *)&DAT_013ce052,
                          (tuple *)&local_e8);
      pPVar22 = local_d0;
      *(PackageItem **)(lVar28 + 0x28) = pPVar21;
      ppVar26 = (piecewise_construct_t *)(local_d0 + 0x50);
      if (((byte)*ppVar26 & 1) == 0) {
        if ((byte)*ppVar26 >> 1 != 0) {
LAB_00aa0124:
                    /* catch() { ... } // from try @ 00aa00ec with catch @ 00aa0124 */
                    /* try { // try from 00aa0138 to 00ba030f has its CatchHandler @ 00aa0138
                       catch() { ... } // from try @ 00aa0138 with catch @ 00aa0138
                       catch() { ... } // from try @ 00aa0390 with catch @ 00aa0138 */
          pbVar27 = (basic_string *)&DAT_013ce052;
          local_e8 = ppVar26;
          lVar28 = std::__ndk1::
                   __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::PackageItem*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::PackageItem*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::PackageItem*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::PackageItem*>>>
                   ::
                   __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                             ((basic_string *)(this + 0xb0),ppVar26,(tuple *)&DAT_013ce052,
                              (tuple *)&local_e8);
          *(PackageItem **)(lVar28 + 0x28) = pPVar22;
        }
      }
      else if (*(long *)(local_d0 + 0x58) != 0) goto LAB_00aa0124;
      iVar18 = iVar18 + -1;
      *(int *)(param_1 + 0x1c) = iVar5 + iVar16;
    } while (iVar18 != 0);
  }
                    /* try { // try from 00aa06d4 to 00ba0723 has its CatchHandler @ 00aa06d4
                       catch() { ... } // from try @ 00aa06d4 with catch @ 00aa06d4
                       catch() { ... } // from try @ 00aa0788 with catch @ 00aa06d4
                       catch() { ... } // from try @ 00aa07cc with catch @ 00aa06d4 */
  ByteBuffer::seek(param_1,iVar1,2);
  sVar12 = ByteBuffer::readShort(param_1);
  iVar18 = (int)sVar12;
  if (0 < iVar18) {
    do {
      sVar12 = ByteBuffer::readShort(param_1);
      iVar5 = *(int *)(param_1 + 0x1c);
      ppVar26 = (piecewise_construct_t *)ByteBuffer::readS(param_1);
                    /* try { // try from 00aa0724 to 00ba0787 has its CatchHandler @ 00aa080c */
      local_e8 = (piecewise_construct_t *)ByteBuffer::readS(param_1);
      lVar28 = std::__ndk1::
               __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::PackageItem*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::PackageItem*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::PackageItem*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::PackageItem*>>>
               ::
               __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                         ((basic_string *)(this + 0x88),local_e8,(tuple *)&DAT_013ce052,
                          (tuple *)&local_e8);
      local_d0 = *(PackageItem **)(lVar28 + 0x28);
      puVar24 = operator_new(0x30);
      puVar24[3] = 0;
      puVar24[2] = 0;
      puVar24[5] = 0;
      puVar24[4] = 0;
      puVar24[1] = 0;
      *puVar24 = 0;
      cocos2d::Rect::Rect((Rect *)(puVar24 + 1));
      cocos2d::Size::Size((Size *)(puVar24 + 3));
      puVar24[4] = 0;
                    /* try { // try from 00aa0788 to 00ba07b7 has its CatchHandler @ 00aa06d4 */
      *puVar24 = local_d0;
      iVar16 = ByteBuffer::readInt(param_1);
      *(float *)(puVar24 + 1) = (float)iVar16;
      iVar16 = ByteBuffer::readInt(param_1);
      *(float *)((long)puVar24 + 0xc) = (float)iVar16;
      iVar16 = ByteBuffer::readInt(param_1);
                    /* try { // try from 00aa07b8 to 00ba07cb has its CatchHandler @ 00aa080c */
      *(float *)(puVar24 + 2) = (float)iVar16;
      iVar16 = ByteBuffer::readInt(param_1);
      *(float *)((long)puVar24 + 0x14) = (float)iVar16;
                    /* try { // try from 00aa07cc to 00ba0827 has its CatchHandler @ 00aa06d4 */
      bVar11 = ByteBuffer::readBool(param_1);
      *(byte *)(puVar24 + 5) = bVar11 & 1;
      if ((iVar13 < 2) || (uVar29 = ByteBuffer::readBool(param_1), (uVar29 & 1) == 0)) {
        puVar24[3] = puVar24[2];
        puVar24[4] = 0;
      }
      else {
        iVar16 = ByteBuffer::readInt(param_1);
        *(float *)(puVar24 + 4) = (float)iVar16;
        iVar16 = ByteBuffer::readInt(param_1);
                    /* catch() { ... } // from try @ 00aa0724 with catch @ 00aa080c
                       catch() { ... } // from try @ 00aa07b8 with catch @ 00aa080c */
        *(float *)((long)puVar24 + 0x24) = (float)iVar16;
        iVar16 = ByteBuffer::readInt(param_1);
        *(float *)(puVar24 + 3) = (float)iVar16;
        iVar16 = ByteBuffer::readInt(param_1);
        *(float *)((long)puVar24 + 0x1c) = (float)iVar16;
      }
      local_e8 = ppVar26;
      lVar28 = std::__ndk1::
               __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::AtlasSprite*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::AtlasSprite*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::AtlasSprite*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::AtlasSprite*>>>
               ::
               __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                         ((basic_string *)(this + 0xd8),ppVar26,(tuple *)&DAT_013ce052,
                          (tuple *)&local_e8);
      iVar18 = iVar18 + -1;
      *(undefined8 **)(lVar28 + 0x28) = puVar24;
      *(int *)(param_1 + 0x1c) = iVar5 + sVar12;
    } while (iVar18 != 0);
  }
  uVar29 = ByteBuffer::seek(param_1,iVar1,3);
  if ((uVar29 & 1) != 0) {
    sVar12 = ByteBuffer::readShort(param_1);
    iVar13 = (int)sVar12;
    if (0 < iVar13) {
      do {
        iVar18 = ByteBuffer::readInt(param_1);
        iVar1 = *(int *)(param_1 + 0x1c);
        pbVar27 = (basic_string *)ByteBuffer::readS(param_1);
        lVar28 = std::__ndk1::
                 __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::PackageItem*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::PackageItem*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::PackageItem*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::PackageItem*>>>
                 ::
                 find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                           ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::PackageItem*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::PackageItem*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::PackageItem*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::PackageItem*>>>
                             *)(this + 0x88),pbVar27);
        if ((lVar28 != 0) &&
           (local_d0 = *(PackageItem **)(lVar28 + 0x28), *(int *)(local_d0 + 0x30) == 0)) {
          this_03 = operator_new(0x18);
          PixelHitTestData::PixelHitTestData(this_03);
          *(PixelHitTestData **)(local_d0 + 0xc0) = this_03;
          PixelHitTestData::load(this_03,param_1);
        }
        iVar13 = iVar13 + -1;
        *(int *)(param_1 + 0x1c) = iVar1 + iVar18;
      } while (iVar13 != 0);
    }
  }
  if ((local_c8 & 1) != 0) {
    operator_delete(local_b8);
  }
  if (((ulong)local_b0 & 1) != 0) {
    operator_delete(local_a0);
  }
  uVar25 = 1;
LAB_00aa093c:
  if (*(long *)(lVar7 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar25);
}

