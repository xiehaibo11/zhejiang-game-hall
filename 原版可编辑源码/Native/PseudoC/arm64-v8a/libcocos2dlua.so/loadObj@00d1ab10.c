
/* WARNING: Type propagation algorithm not settling */
/* cocos2d::Bundle3D::loadObj(cocos2d::MeshDatas&, cocos2d::MaterialDatas&, cocos2d::NodeDatas&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, char const*) */

undefined4
cocos2d::Bundle3D::loadObj
          (MeshDatas *param_1,MaterialDatas *param_2,NodeDatas *param_3,basic_string *param_4,
          char *param_5)

{
  ushort *puVar1;
  ulong uVar2;
  vector *pvVar3;
  NMaterialData *pNVar4;
  ushort *puVar5;
  vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *this;
  ulong *puVar6;
  undefined8 *puVar7;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar8;
  long lVar9;
  bool bVar10;
  vector<float,std::__ndk1::allocator<float>> *pvVar11;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar12;
  ModelData *pMVar13;
  undefined1 *__src;
  bool bVar14;
  int *piVar15;
  int *piVar18;
  size_t sVar21;
  void *pvVar22;
  NodeData *pNVar23;
  basic_string *pbVar24;
  undefined8 extraout_x1;
  vector<cocos2d::NodeData*,std::__ndk1::allocator<cocos2d::NodeData*>> *this_00;
  vector *pvVar25;
  float *pfVar26;
  float *pfVar27;
  ulong uVar28;
  float *pfVar29;
  float *pfVar30;
  long lVar31;
  int *piVar32;
  NMaterialData *pNVar33;
  long lVar34;
  int *piVar35;
  undefined4 uVar36;
  MeshData *this_01;
  long lVar37;
  long *plVar38;
  char *pcVar39;
  char *pcVar40;
  ModelData *pMVar41;
  undefined8 *puVar42;
  long *plVar43;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar44;
  long *plVar45;
  vector *pvVar46;
  int iVar47;
  ulong uVar48;
  uint uVar49;
  __tree_node_base *p_Var50;
  __tree_node_base *p_Var51;
  uint uVar52;
  __tree_node_base *p_Var53;
  int iVar54;
  int iVar55;
  int iVar56;
  int iVar57;
  int iVar58;
  int iVar59;
  int iVar60;
  int iVar61;
  int iVar62;
  NodeData *pNStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  vector<float,std::__ndk1::allocator<float>> *pvStack_210;
  void *pvStack_208;
  void *pvStack_200;
  void *pvStack_1f8;
  __tree_node_base *p_Stack_1f0;
  __tree_node_base *p_Stack_1e8;
  __tree_node_base *p_Stack_1e0;
  ulong uStack_1d8;
  undefined8 uStack_1d0;
  void *pvStack_1c8;
  vector *pvStack_1c0;
  vector *pvStack_1b8;
  char *pcStack_1b0;
  byte bStack_1a8;
  ulong uStack_1a0;
  void *pvStack_198;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbStack_190;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbStack_188;
  undefined8 uStack_180;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbStack_178;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbStack_170;
  undefined8 uStack_168;
  vector *pvStack_160;
  vector *pvStack_158;
  char *pcStack_150;
  ModelData *apMStack_140 [2];
  vector *pvStack_130;
  vector *pvStack_128;
  char *pcStack_120;
  void *pvStack_118;
  void *pvStack_110;
  undefined1 *puStack_108;
  void *pvStack_100;
  void *pvStack_f8;
  void *pvStack_e8;
  void *pvStack_e0;
  int *piStack_d0;
  int *piStack_c8;
  char acStack_ac [20];
  long local_98;
  int *piVar16;
  int *piVar17;
  int *piVar19;
  int *piVar20;
  
  lVar9 = tpidr_el0;
  local_98 = *(long *)(lVar9 + 0x28);
  puVar42 = *(undefined8 **)param_1;
  puVar7 = *(undefined8 **)(param_1 + 8);
  pcVar40 = param_5;
  if (puVar42 != puVar7) {
    do {
      this_01 = (MeshData *)*puVar42;
      if (this_01 != (MeshData *)0x0) {
        MeshData::~MeshData(this_01);
        operator_delete(this_01);
      }
      puVar42 = puVar42 + 1;
    } while (puVar7 != puVar42);
    puVar42 = *(undefined8 **)param_1;
  }
  *(undefined8 **)(param_1 + 8) = puVar42;
  lVar31 = *(long *)param_2;
  lVar37 = *(long *)(param_2 + 8);
  if (lVar37 != lVar31) {
    do {
      lVar37 = lVar37 + -0x30;
      FUN_0090b07c(param_2 + 0x10,lVar37);
    } while (lVar31 != lVar37);
  }
  *(long *)(param_2 + 8) = lVar31;
  plVar38 = *(long **)(param_3 + 8);
  plVar43 = *(long **)(param_3 + 0x10);
  if (plVar38 != plVar43) {
    do {
      if ((long *)*plVar38 != (long *)0x0) {
        (**(code **)(*(long *)*plVar38 + 8))();
      }
      plVar38 = plVar38 + 1;
    } while (plVar43 != plVar38);
    plVar38 = *(long **)(param_3 + 8);
  }
  this_00 = (vector<cocos2d::NodeData*,std::__ndk1::allocator<cocos2d::NodeData*>> *)
            (param_3 + 0x20);
  plVar43 = *(long **)this_00;
  plVar45 = *(long **)(param_3 + 0x28);
  *(long **)(param_3 + 0x10) = plVar38;
  if (plVar43 != plVar45) {
    do {
      if ((long *)*plVar43 != (long *)0x0) {
        (**(code **)(*(long *)*plVar43 + 8))();
      }
      plVar43 = plVar43 + 1;
    } while (plVar45 != plVar43);
    plVar43 = *(long **)this_00;
  }
  *(long **)(param_3 + 0x28) = plVar43;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &pvStack_160,"");
  if (param_5 == (char *)0x0) {
    pvVar46 = *(vector **)(param_4 + 8);
    pbVar24 = *(basic_string **)(param_4 + 0x10);
    pvVar25 = (vector *)(ulong)((byte)*param_4 >> 1);
    pvVar3 = pvVar46;
    if (((byte)*param_4 & 1) == 0) {
      pbVar24 = param_4 + 1;
      pvVar46 = pvVar25;
      pvVar3 = pvVar25;
    }
    do {
      if (pvVar46 == (vector *)0x0) {
        pvVar46 = (vector *)0xffffffffffffffff;
        break;
      }
      pvVar22 = memchr(&DAT_012f063d,(uint)(byte)(pbVar24 + (long)pvVar46)[-1],2);
      pvVar46 = pvVar46 + -1;
    } while (pvVar22 == (void *)0x0);
    if (pvVar46 + 1 <= pvVar3) {
      pvVar3 = pvVar46 + 1;
    }
    pvStack_128 = (vector *)0x0;
    pcStack_120 = (char *)0x0;
    pvStack_130 = (vector *)0x0;
    if ((vector *)0xffffffffffffffef < pvVar3) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (pvVar3 < (vector *)0x17) {
      pcVar39 = (char *)((ulong)&pvStack_130 | 1);
      pvStack_130 = (vector *)(ulong)(byte)((int)pvVar3 << 1);
      if (pvVar3 != (vector *)0x0) goto LAB_00d1ad40;
    }
    else {
      pcVar39 = operator_new((ulong)(pvVar3 + 0x10) & 0xfffffffffffffff0);
      pvStack_130 = (vector *)((ulong)(pvVar3 + 0x10) & 0xfffffffffffffff0 | 1);
      pvStack_128 = pvVar3;
      pcStack_120 = pcVar39;
LAB_00d1ad40:
      memcpy(pcVar39,pbVar24,(size_t)pvVar3);
    }
    pcVar39[(long)pvVar3] = '\0';
    if (((byte)pvStack_160._0_1_ & 1) != 0) {
      *pcStack_150 = '\0';
      pvStack_158 = (vector *)0x0;
      if (((byte)pvStack_160._0_1_ & 1) != 0) {
        operator_delete(pcStack_150);
      }
    }
    pvStack_158 = pvStack_128;
    pvStack_160 = pvStack_130;
    pcStack_150 = pcStack_120;
  }
  else {
    sVar21 = strlen(param_5);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           &pvStack_160,param_5,sVar21);
  }
  pbStack_170 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                0x0;
  uStack_168 = 0;
  uStack_180 = 0;
  pbStack_178 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                0x0;
  pbStack_190 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                0x0;
  pbStack_188 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                0x0;
  pNVar33 = *(NMaterialData **)(param_4 + 0x10);
  if (((byte)*param_4 & 1) == 0) {
    pNVar33 = (NMaterialData *)(param_4 + 1);
  }
  pcVar39 = (char *)((ulong)&pvStack_160 | 1);
  if (((ulong)pvStack_160 & 1) != 0) {
    pcVar39 = pcStack_150;
  }
  tinyobj::LoadObj((tinyobj *)&pbStack_178,(vector *)&pbStack_190,(vector *)pNVar33,pcVar39,pcVar40)
  ;
  uVar28 = (ulong)(bStack_1a8 >> 1);
  if ((bStack_1a8 & 1) != 0) {
    uVar28 = uStack_1a0;
  }
  if (uVar28 != 0) {
    uVar36 = 0;
    goto joined_r0x00d1be50;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &pvStack_1c0,"");
  pbVar24 = param_4 + 1;
  pvVar3 = (vector *)(ulong)((byte)*param_4 >> 1);
  if (((byte)*param_4 & 1) != 0) {
    pbVar24 = *(basic_string **)(param_4 + 0x10);
    pvVar3 = *(vector **)(param_4 + 8);
  }
  pvVar46 = pvVar3;
  if (pvVar3 != (vector *)0x0) {
    do {
      pvVar25 = pvVar46;
      if (pvVar25 == (vector *)0x0) goto LAB_00d1afe8;
      pvVar46 = pvVar25 + -1;
    } while ((pbVar24 + (long)pvVar25)[-1] != (basic_string)0x2f);
    if (pvVar25 + -1 != (vector *)0xffffffffffffffff) {
      if (pvVar25 <= pvVar3) {
        pvVar3 = pvVar25;
      }
      pvStack_128 = (vector *)0x0;
      pcStack_120 = (char *)0x0;
      pvStack_130 = (vector *)0x0;
      if ((vector *)0xffffffffffffffef < pvVar3) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__basic_string_common<true>::__throw_length_error();
      }
      if (pvVar3 < (vector *)0x17) {
        pcVar40 = (char *)((ulong)&pvStack_130 | 1);
        pvStack_130 = (vector *)(ulong)(byte)((int)pvVar3 << 1);
        if (pvVar3 != (vector *)0x0) goto LAB_00d1af94;
      }
      else {
        pcVar40 = operator_new((ulong)(pvVar3 + 0x10) & 0xfffffffffffffff0);
        pvStack_130 = (vector *)((ulong)(pvVar3 + 0x10) & 0xfffffffffffffff0 | 1);
        pvStack_128 = pvVar3;
        pcStack_120 = pcVar40;
LAB_00d1af94:
        pNVar33 = (NMaterialData *)pvVar3;
        memcpy(pcVar40,pbVar24,(size_t)pvVar3);
      }
      pcVar40[(long)pvVar3] = '\0';
      if (((ulong)pvStack_1c0 & 1) != 0) {
        *pcStack_1b0 = '\0';
        pvStack_1b8 = (vector *)0x0;
        if (((ulong)pvStack_1c0 & 1) != 0) {
          operator_delete(pcStack_1b0);
        }
      }
      pvStack_1b8 = pvStack_128;
      pvStack_1c0 = pvStack_130;
      pcStack_1b0 = pcStack_120;
    }
  }
LAB_00d1afe8:
  pbVar12 = pbStack_188;
  if (pbStack_190 != pbStack_188) {
    pbVar44 = pbStack_190;
    do {
      uStack_1d8 = 0;
      p_Stack_1e0 = (__tree_node_base *)0x0;
      pvStack_1c8 = (void *)0x0;
      uStack_1d0 = 0;
      p_Stack_1e8 = (__tree_node_base *)0x0;
      p_Stack_1f0 = (__tree_node_base *)0x0;
      pvStack_118 = (void *)0x0;
      pcStack_120 = (char *)0x0;
      puStack_108 = (undefined1 *)0x0;
      pvStack_110 = (void *)0x0;
      pvStack_128 = (vector *)0x0;
      pvStack_130 = (vector *)0x0;
      pbVar24 = (basic_string *)(pbVar44 + 0x80);
      if (((byte)*pbVar24 & 1) == 0) {
        if ((byte)*pbVar24 >> 1 == 0) goto LAB_00d1b090;
LAB_00d1b06c:
        std::__ndk1::operator+((__ndk1 *)&pvStack_1c0,pbVar24,(basic_string *)pNVar33);
      }
      else {
        if (*(long *)(pbVar44 + 0x88) != 0) goto LAB_00d1b06c;
LAB_00d1b090:
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)&pvStack_208,pbVar24);
      }
      if (((ulong)pvStack_118 & 1) != 0) {
        *puStack_108 = 0;
        pvStack_110 = (void *)0x0;
        if (((ulong)pvStack_118 & 1) != 0) {
          operator_delete(puStack_108);
        }
      }
      puStack_108 = pvStack_1f8;
      pvStack_110 = pvStack_200;
      pvStack_118 = pvStack_208;
      pvStack_100 = (void *)0x812f00000002;
      pvStack_f8 = (void *)CONCAT44(pvStack_f8._4_4_,0x812f);
      FUN_00d1c170(acStack_ac);
      pcVar40 = pcStack_120;
      pvVar3 = pvStack_128;
      p_Var51 = p_Stack_1e8;
      if (p_Stack_1e8 == p_Stack_1e0) {
        std::__ndk1::vector<cocos2d::NTextureData,std::__ndk1::allocator<cocos2d::NTextureData>>::
        __push_back_slow_path<cocos2d::NTextureData_const&>
                  ((vector<cocos2d::NTextureData,std::__ndk1::allocator<cocos2d::NTextureData>> *)
                   &p_Stack_1f0,(NTextureData *)&pvStack_130);
      }
      else {
        *(undefined8 *)p_Stack_1e8 = 0;
        *(undefined8 *)(p_Stack_1e8 + 8) = 0;
        *(undefined8 *)(p_Stack_1e8 + 0x10) = 0;
        if (((ulong)pvStack_130 & 1) == 0) {
          *(char **)(p_Stack_1e8 + 0x10) = pcStack_120;
          *(vector **)(p_Stack_1e8 + 8) = pvStack_128;
          *(vector **)p_Stack_1e8 = pvStack_130;
        }
        else {
          if ((vector *)0xffffffffffffffef < pvStack_128) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__basic_string_common<true>::__throw_length_error();
          }
          if (pvStack_128 < (vector *)0x17) {
            p_Var53 = p_Stack_1e8 + 1;
            *p_Stack_1e8 = SUB41((int)pvStack_128 << 1,0);
            if (pvStack_128 != (vector *)0x0) goto LAB_00d1b17c;
          }
          else {
            pvVar46 = pvStack_128 + 0x10;
            p_Var53 = operator_new((ulong)pvVar46 & 0xfffffffffffffff0);
            *(vector **)(p_Var51 + 8) = pvVar3;
            *(__tree_node_base **)(p_Var51 + 0x10) = p_Var53;
            *(ulong *)p_Var51 = (ulong)pvVar46 & 0xfffffffffffffff0 | 1;
LAB_00d1b17c:
            memcpy(p_Var53,pcVar40,(size_t)pvVar3);
          }
          p_Var53[(long)pvVar3] = (__tree_node_base)0x0;
        }
        __src = puStack_108;
        pvVar22 = pvStack_110;
        p_Var53 = p_Var51 + 0x18;
        *(undefined8 *)p_Var53 = 0;
        *(undefined8 *)(p_Var51 + 0x20) = 0;
        *(undefined8 *)(p_Var51 + 0x28) = 0;
        if (((ulong)pvStack_118 & 1) == 0) {
          *(undefined1 **)(p_Var51 + 0x28) = puStack_108;
          *(void **)(p_Var51 + 0x20) = pvStack_110;
          *(void **)p_Var53 = pvStack_118;
        }
        else {
          if ((void *)0xffffffffffffffef < pvStack_110) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__basic_string_common<true>::__throw_length_error();
          }
          if (pvStack_110 < (void *)0x17) {
            p_Var50 = p_Var51 + 0x19;
            *p_Var53 = SUB41((int)pvStack_110 << 1,0);
            if (pvStack_110 != (void *)0x0) goto LAB_00d1b204;
          }
          else {
            uVar28 = (long)pvStack_110 + 0x10U & 0xfffffffffffffff0;
            p_Var50 = operator_new(uVar28);
            *(void **)(p_Var51 + 0x20) = pvVar22;
            *(__tree_node_base **)(p_Var51 + 0x28) = p_Var50;
            *(ulong *)(p_Var51 + 0x18) = uVar28 | 1;
LAB_00d1b204:
            memcpy(p_Var50,__src,(size_t)pvVar22);
          }
          p_Var50[(long)pvVar22] = (__tree_node_base)0x0;
        }
        p_Stack_1e8 = p_Var51 + 0x40;
        *(undefined4 *)(p_Var51 + 0x38) = pvStack_f8._0_4_;
        *(void **)(p_Var51 + 0x30) = pvStack_100;
      }
      sVar21 = strlen(acStack_ac);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &uStack_1d8,acStack_ac,sVar21);
      pNVar33 = (NMaterialData *)strlen(acStack_ac);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign(pbVar44,acStack_ac,(ulong)pNVar33);
      pNVar4 = *(NMaterialData **)(param_2 + 8);
      if (pNVar4 == *(NMaterialData **)(param_2 + 0x10)) {
        std::__ndk1::vector<cocos2d::NMaterialData,std::__ndk1::allocator<cocos2d::NMaterialData>>::
        __push_back_slow_path<cocos2d::NMaterialData_const&>
                  ((vector<cocos2d::NMaterialData,std::__ndk1::allocator<cocos2d::NMaterialData>> *)
                   param_2,(NMaterialData *)&p_Stack_1f0);
      }
      else {
        pNVar33 = (NMaterialData *)&p_Stack_1f0;
        std::__ndk1::allocator<cocos2d::NMaterialData>::
        construct<cocos2d::NMaterialData,cocos2d::NMaterialData_const&>
                  ((allocator<cocos2d::NMaterialData> *)(param_2 + 0x10),pNVar4,pNVar33);
        *(NMaterialData **)(param_2 + 8) = pNVar4 + 0x30;
      }
      if (((ulong)pvStack_118 & 1) != 0) {
        operator_delete(puStack_108);
      }
      if (((ulong)pvStack_130 & 1) != 0) {
        operator_delete(pcStack_120);
      }
      p_Var51 = p_Stack_1f0;
      if ((uStack_1d8 & 1) != 0) {
        operator_delete(pvStack_1c8);
        p_Var51 = p_Stack_1f0;
      }
      p_Stack_1f0 = p_Var51;
      p_Var53 = p_Stack_1e8;
      if (p_Var51 != (__tree_node_base *)0x0) {
        while (p_Var50 = p_Var53, p_Var50 != p_Var51) {
          if (((byte)p_Var50[-0x28] & 1) != 0) {
            operator_delete(*(void **)(p_Var50 + -0x18));
          }
          p_Var53 = p_Var50 + -0x40;
          if (((byte)p_Var50[-0x40] & 1) != 0) {
            operator_delete(*(void **)(p_Var50 + -0x30));
          }
        }
        p_Stack_1e8 = p_Var51;
        operator_delete(p_Stack_1f0);
      }
      pbVar44 = pbVar44 + 0xe0;
    } while (pbVar44 != pbVar12);
  }
  pbVar12 = pbStack_170;
  if (pbStack_178 != pbStack_170) {
    iVar47 = 0;
    pbVar44 = pbStack_178;
    do {
      tinyobj::mesh_t::mesh_t((mesh_t *)&pvStack_130,(mesh_t *)(pbVar44 + 0x18));
      pvStack_210 = operator_new(0x90,(nothrow_t *)&std::nothrow);
      if (pvStack_210 != (vector<float,std::__ndk1::allocator<float>> *)0x0) {
        *(undefined8 *)pvStack_210 = 0;
        *(undefined8 *)(pvStack_210 + 8) = 0;
        *(undefined4 *)(pvStack_210 + 0x18) = 0;
        *(undefined8 *)(pvStack_210 + 0x10) = 0;
        *(undefined8 *)(pvStack_210 + 0x28) = 0;
        *(undefined8 *)(pvStack_210 + 0x20) = 0;
        *(undefined8 *)(pvStack_210 + 0x38) = 0;
        *(undefined8 *)(pvStack_210 + 0x30) = 0;
        *(undefined8 *)(pvStack_210 + 0x48) = 0;
        *(undefined8 *)(pvStack_210 + 0x40) = 0;
        *(undefined8 *)(pvStack_210 + 0x58) = 0;
        *(undefined8 *)(pvStack_210 + 0x50) = 0;
        *(undefined8 *)(pvStack_210 + 100) = 0;
        *(undefined8 *)(pvStack_210 + 0x5c) = 0;
        *(undefined8 *)(pvStack_210 + 0x78) = 0;
        *(undefined8 *)(pvStack_210 + 0x80) = 0;
        *(undefined8 *)(pvStack_210 + 0x70) = 0;
        *(undefined4 *)(pvStack_210 + 0x88) = 0;
      }
      uStack_220 = 0x140600000003;
      if (pvStack_128 != pvStack_130) {
        uStack_218 = 0xc00000000;
        puVar42 = *(undefined8 **)(pvStack_210 + 0x78);
        if (puVar42 == *(undefined8 **)(pvStack_210 + 0x80)) {
          std::__ndk1::
          vector<cocos2d::MeshVertexAttrib,std::__ndk1::allocator<cocos2d::MeshVertexAttrib>>::
          __push_back_slow_path<cocos2d::MeshVertexAttrib_const&>
                    ((vector<cocos2d::MeshVertexAttrib,std::__ndk1::allocator<cocos2d::MeshVertexAttrib>>
                      *)(pvStack_210 + 0x70),(MeshVertexAttrib *)&uStack_220);
        }
        else {
          puVar42[1] = 0xc00000000;
          *puVar42 = 0x140600000003;
          *(undefined8 **)(pvStack_210 + 0x78) = puVar42 + 2;
        }
      }
      if (pvStack_110 == pvStack_118) {
        bVar14 = false;
      }
      else {
        uStack_218 = CONCAT44((int)uStack_220 << 2,6);
        puVar42 = *(undefined8 **)(pvStack_210 + 0x78);
        if (puVar42 == *(undefined8 **)(pvStack_210 + 0x80)) {
          std::__ndk1::
          vector<cocos2d::MeshVertexAttrib,std::__ndk1::allocator<cocos2d::MeshVertexAttrib>>::
          __push_back_slow_path<cocos2d::MeshVertexAttrib_const&>
                    ((vector<cocos2d::MeshVertexAttrib,std::__ndk1::allocator<cocos2d::MeshVertexAttrib>>
                      *)(pvStack_210 + 0x70),(MeshVertexAttrib *)&uStack_220);
        }
        else {
          puVar42[1] = uStack_218;
          *puVar42 = uStack_220;
          *(undefined8 **)(pvStack_210 + 0x78) = puVar42 + 2;
        }
        bVar14 = true;
      }
      if (pvStack_f8 == pvStack_100) {
        bVar10 = false;
      }
      else {
        uStack_220 = CONCAT44(uStack_220._4_4_,2);
        uStack_218 = 0x800000002;
        puVar42 = *(undefined8 **)(pvStack_210 + 0x78);
        if (puVar42 == *(undefined8 **)(pvStack_210 + 0x80)) {
          std::__ndk1::
          vector<cocos2d::MeshVertexAttrib,std::__ndk1::allocator<cocos2d::MeshVertexAttrib>>::
          __push_back_slow_path<cocos2d::MeshVertexAttrib_const&>
                    ((vector<cocos2d::MeshVertexAttrib,std::__ndk1::allocator<cocos2d::MeshVertexAttrib>>
                      *)(pvStack_210 + 0x70),(MeshVertexAttrib *)&uStack_220);
        }
        else {
          puVar42[1] = 0x800000002;
          *puVar42 = uStack_220;
          *(undefined8 **)(pvStack_210 + 0x78) = puVar42 + 2;
        }
        bVar10 = true;
      }
      uVar28 = (long)pvStack_128 - (long)pvStack_130 >> 2;
      if (2 < uVar28) {
        uVar49 = 2;
        uVar52 = 1;
        uVar48 = 1;
        while( true ) {
          pfVar30 = *(float **)(pvStack_210 + 8);
          pfVar26 = *(float **)(pvStack_210 + 0x10);
          if (pfVar30 == pfVar26) {
            std::__ndk1::vector<float,std::__ndk1::allocator<float>>::
            __push_back_slow_path<float_const&>
                      (pvStack_210,(float *)(pvStack_130 + (ulong)(uVar49 - 2) * 4));
            pfVar29 = *(float **)(pvStack_210 + 8);
            pfVar26 = *(float **)(pvStack_210 + 0x10);
          }
          else {
            pfVar29 = pfVar30 + 1;
            *pfVar30 = *(float *)(pvStack_130 + (ulong)(uVar49 - 2) * 4);
            *(float **)(pvStack_210 + 8) = pfVar29;
          }
          if (pfVar29 == pfVar26) {
            std::__ndk1::vector<float,std::__ndk1::allocator<float>>::
            __push_back_slow_path<float_const&>
                      (pvStack_210,(float *)(pvStack_130 + (ulong)(uVar49 - 1) * 4));
            pfVar30 = *(float **)(pvStack_210 + 8);
            pfVar26 = *(float **)(pvStack_210 + 0x10);
          }
          else {
            pfVar30 = pfVar29 + 1;
            *pfVar29 = *(float *)(pvStack_130 + (ulong)(uVar49 - 1) * 4);
            *(float **)(pvStack_210 + 8) = pfVar30;
          }
          if (pfVar30 == pfVar26) {
            std::__ndk1::vector<float,std::__ndk1::allocator<float>>::
            __push_back_slow_path<float_const&>
                      (pvStack_210,(float *)(pvStack_130 + (ulong)uVar49 * 4));
          }
          else {
            *pfVar30 = *(float *)(pvStack_130 + (ulong)uVar49 * 4);
            *(float **)(pvStack_210 + 8) = pfVar30 + 1;
          }
          if (bVar14) {
            pfVar26 = *(float **)((long)pvStack_210 + 8);
            pfVar29 = *(float **)((long)pvStack_210 + 0x10);
            pfVar30 = (float *)((long)pvStack_118 + (ulong)(uVar49 - 2) * 4);
            if (pfVar26 == pfVar29) {
              std::__ndk1::vector<float,std::__ndk1::allocator<float>>::
              __push_back_slow_path<float_const&>(pvStack_210,pfVar30);
              pfVar27 = *(float **)(pvStack_210 + 8);
              pfVar29 = *(float **)(pvStack_210 + 0x10);
            }
            else {
              pfVar27 = pfVar26 + 1;
              *pfVar26 = *pfVar30;
              *(float **)((long)pvStack_210 + 8) = pfVar27;
            }
            pfVar30 = (float *)((long)pvStack_118 + (ulong)(uVar49 - 1) * 4);
            if (pfVar27 == pfVar29) {
              std::__ndk1::vector<float,std::__ndk1::allocator<float>>::
              __push_back_slow_path<float_const&>(pvStack_210,pfVar30);
              pfVar26 = *(float **)(pvStack_210 + 8);
              pfVar29 = *(float **)(pvStack_210 + 0x10);
            }
            else {
              pfVar26 = pfVar27 + 1;
              *pfVar27 = *pfVar30;
              *(float **)(pvStack_210 + 8) = pfVar26;
            }
            pfVar30 = (float *)((long)pvStack_118 + (ulong)uVar49 * 4);
            if (pfVar26 == pfVar29) {
              std::__ndk1::vector<float,std::__ndk1::allocator<float>>::
              __push_back_slow_path<float_const&>(pvStack_210,pfVar30);
            }
            else {
              *pfVar26 = *pfVar30;
              *(float **)(pvStack_210 + 8) = pfVar26 + 1;
            }
          }
          if (bVar10) {
            pfVar26 = *(float **)(pvStack_210 + 8);
            pfVar29 = *(float **)(pvStack_210 + 0x10);
            pfVar30 = (float *)((long)pvStack_100 + (ulong)(uVar52 - 1) * 4);
            if (pfVar26 == pfVar29) {
              std::__ndk1::vector<float,std::__ndk1::allocator<float>>::
              __push_back_slow_path<float_const&>(pvStack_210,pfVar30);
              pfVar27 = *(float **)(pvStack_210 + 8);
              pfVar29 = *(float **)(pvStack_210 + 0x10);
            }
            else {
              pfVar27 = pfVar26 + 1;
              *pfVar26 = *pfVar30;
              *(float **)(pvStack_210 + 8) = pfVar27;
            }
            pfVar30 = (float *)((long)pvStack_100 + (ulong)uVar52 * 4);
            if (pfVar27 == pfVar29) {
              std::__ndk1::vector<float,std::__ndk1::allocator<float>>::
              __push_back_slow_path<float_const&>(pvStack_210,pfVar30);
            }
            else {
              *pfVar27 = *pfVar30;
              *(float **)(pvStack_210 + 8) = pfVar27 + 1;
            }
          }
          if (uVar28 / 3 <= uVar48) break;
          uVar48 = (ulong)((int)uVar48 + 1);
          uVar49 = uVar49 + 3;
          uVar52 = uVar52 + 2;
        }
      }
      p_Stack_1e8 = (__tree_node_base *)0x0;
      p_Stack_1e0 = (__tree_node_base *)0x0;
      lVar31 = (long)piStack_c8 - (long)piStack_d0;
      p_Stack_1f0 = (__tree_node_base *)&p_Stack_1e8;
      if (lVar31 != 0) {
        uVar28 = 0;
        iVar54 = *piStack_d0;
        p_Var51 = (__tree_node_base *)&p_Stack_1e8;
        p_Var53 = (__tree_node_base *)&p_Stack_1e8;
        do {
          p_Var50 = *(__tree_node_base **)p_Var53;
joined_r0x00d1b748:
          if (p_Var50 == (__tree_node_base *)0x0) {
            p_Var50 = operator_new(0x40);
            *(int *)(p_Var50 + 0x20) = iVar54;
            *(undefined8 *)(p_Var50 + 0x30) = 0;
            *(undefined8 *)(p_Var50 + 0x38) = 0;
            *(undefined8 *)(p_Var50 + 0x28) = 0;
            *(undefined8 *)p_Var50 = 0;
            *(undefined8 *)(p_Var50 + 8) = 0;
            *(__tree_node_base **)(p_Var50 + 0x10) = p_Var51;
            *(__tree_node_base **)p_Var53 = p_Var50;
            p_Var51 = p_Var50;
            if (*(__tree_node_base **)p_Stack_1f0 != (__tree_node_base *)0x0) {
              p_Var51 = *(__tree_node_base **)p_Var53;
              p_Stack_1f0 = *(__tree_node_base **)p_Stack_1f0;
            }
            std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                      (p_Stack_1e8,p_Var51);
            p_Stack_1e0 = p_Stack_1e0 + 1;
          }
          puVar5 = *(ushort **)(p_Var50 + 0x30);
          puVar1 = (ushort *)((long)pvStack_e8 + uVar28 * 6);
          p_Var51 = (__tree_node_base *)&p_Stack_1e8;
          p_Var53 = (__tree_node_base *)&p_Stack_1e8;
          if (puVar5 == *(ushort **)(p_Var50 + 0x38)) {
            std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::
            __push_back_slow_path<unsigned_short_const&>
                      ((vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *)
                       (p_Var50 + 0x28),puVar1);
            p_Var50 = p_Stack_1e8;
          }
          else {
            *puVar5 = *puVar1;
            *(ushort **)(p_Var50 + 0x30) = puVar5 + 1;
            p_Var50 = p_Stack_1e8;
          }
          while (p_Var50 != (__tree_node_base *)0x0) {
            while (p_Var53 = p_Var50, iVar54 < *(int *)(p_Var53 + 0x20)) {
              p_Var51 = p_Var53;
              p_Var50 = *(__tree_node_base **)p_Var53;
              if (*(__tree_node_base **)p_Var53 == (__tree_node_base *)0x0) {
                p_Var50 = *(__tree_node_base **)p_Var53;
                goto joined_r0x00d1b82c;
              }
            }
            if (iVar54 <= *(int *)(p_Var53 + 0x20)) break;
            p_Var51 = p_Var53 + 8;
            p_Var50 = *(__tree_node_base **)p_Var51;
          }
          p_Var50 = *(__tree_node_base **)p_Var51;
joined_r0x00d1b82c:
          if (p_Var50 == (__tree_node_base *)0x0) {
            p_Var50 = operator_new(0x40);
            *(int *)(p_Var50 + 0x20) = iVar54;
            *(undefined8 *)(p_Var50 + 0x30) = 0;
            *(undefined8 *)(p_Var50 + 0x38) = 0;
            *(undefined8 *)(p_Var50 + 0x28) = 0;
            *(undefined8 *)p_Var50 = 0;
            *(undefined8 *)(p_Var50 + 8) = 0;
            *(__tree_node_base **)(p_Var50 + 0x10) = p_Var53;
            *(__tree_node_base **)p_Var51 = p_Var50;
            p_Var53 = p_Var50;
            if (*(__tree_node_base **)p_Stack_1f0 != (__tree_node_base *)0x0) {
              p_Var53 = *(__tree_node_base **)p_Var51;
              p_Stack_1f0 = *(__tree_node_base **)p_Stack_1f0;
            }
            std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                      (p_Stack_1e8,p_Var53);
            p_Stack_1e0 = p_Stack_1e0 + 1;
          }
          puVar5 = *(ushort **)(p_Var50 + 0x30);
          puVar1 = (ushort *)((long)pvStack_e8 + uVar28 * 6 + 2);
          p_Var51 = (__tree_node_base *)&p_Stack_1e8;
          p_Var53 = (__tree_node_base *)&p_Stack_1e8;
          if (puVar5 == *(ushort **)(p_Var50 + 0x38)) {
            std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::
            __push_back_slow_path<unsigned_short_const&>
                      ((vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *)
                       (p_Var50 + 0x28),puVar1);
            p_Var50 = p_Stack_1e8;
          }
          else {
            *puVar5 = *puVar1;
            *(ushort **)(p_Var50 + 0x30) = puVar5 + 1;
            p_Var50 = p_Stack_1e8;
          }
          while (p_Var50 != (__tree_node_base *)0x0) {
            while (p_Var53 = p_Var50, iVar54 < *(int *)(p_Var53 + 0x20)) {
              p_Var51 = p_Var53;
              p_Var50 = *(__tree_node_base **)p_Var53;
              if (*(__tree_node_base **)p_Var53 == (__tree_node_base *)0x0) {
                p_Var50 = *(__tree_node_base **)p_Var53;
                goto joined_r0x00d1b920;
              }
            }
            if (iVar54 <= *(int *)(p_Var53 + 0x20)) break;
            p_Var51 = p_Var53 + 8;
            p_Var50 = *(__tree_node_base **)p_Var51;
          }
          p_Var50 = *(__tree_node_base **)p_Var51;
joined_r0x00d1b920:
          if (p_Var50 == (__tree_node_base *)0x0) {
            p_Var50 = operator_new(0x40);
            *(int *)(p_Var50 + 0x20) = iVar54;
            *(undefined8 *)(p_Var50 + 0x30) = 0;
            *(undefined8 *)(p_Var50 + 0x38) = 0;
            *(undefined8 *)(p_Var50 + 0x28) = 0;
            *(undefined8 *)p_Var50 = 0;
            *(undefined8 *)(p_Var50 + 8) = 0;
            *(__tree_node_base **)(p_Var50 + 0x10) = p_Var53;
            *(__tree_node_base **)p_Var51 = p_Var50;
            p_Var53 = p_Var50;
            if (*(__tree_node_base **)p_Stack_1f0 != (__tree_node_base *)0x0) {
              p_Var53 = *(__tree_node_base **)p_Var51;
              p_Stack_1f0 = *(__tree_node_base **)p_Stack_1f0;
            }
            std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                      (p_Stack_1e8,p_Var53);
            p_Stack_1e0 = p_Stack_1e0 + 1;
          }
          puVar5 = *(ushort **)(p_Var50 + 0x30);
          puVar1 = (ushort *)((long)pvStack_e8 + uVar28 * 6 + 4);
          if (puVar5 == *(ushort **)(p_Var50 + 0x38)) {
            std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::
            __push_back_slow_path<unsigned_short_const&>
                      ((vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *)
                       (p_Var50 + 0x28),puVar1);
          }
          else {
            *puVar5 = *puVar1;
            *(ushort **)(p_Var50 + 0x30) = puVar5 + 1;
          }
          uVar28 = uVar28 + 1;
          if ((ulong)(lVar31 >> 2) <= uVar28) break;
          iVar54 = piStack_d0[uVar28];
          p_Var53 = (__tree_node_base *)&p_Stack_1e8;
          p_Var51 = (__tree_node_base *)&p_Stack_1e8;
          p_Var50 = p_Stack_1e8;
          while (p_Var50 != (__tree_node_base *)0x0) {
            while (p_Var51 = p_Var50, iVar54 < *(int *)(p_Var51 + 0x20)) {
              p_Var50 = *(__tree_node_base **)p_Var51;
              p_Var53 = p_Var51;
              if (*(__tree_node_base **)p_Var51 == (__tree_node_base *)0x0) {
                p_Var50 = *(__tree_node_base **)p_Var51;
                goto joined_r0x00d1b748;
              }
            }
            if (iVar54 <= *(int *)(p_Var51 + 0x20)) break;
            p_Var53 = p_Var51 + 8;
            p_Var50 = *(__tree_node_base **)p_Var53;
          }
        } while( true );
      }
      pNVar23 = operator_new(0x90,(nothrow_t *)&std::nothrow);
      if (pNVar23 != (NodeData *)0x0) {
        *(undefined8 *)(pNVar23 + 0x78) = 0;
        *(undefined8 *)(pNVar23 + 0x70) = 0;
        *(undefined8 *)(pNVar23 + 0x88) = 0;
        *(undefined8 *)(pNVar23 + 0x80) = 0;
        *(undefined8 *)(pNVar23 + 0x58) = 0;
        *(undefined8 *)(pNVar23 + 0x50) = 0;
        *(undefined8 *)(pNVar23 + 0x68) = 0;
        *(undefined8 *)(pNVar23 + 0x60) = 0;
        *(undefined8 *)(pNVar23 + 0x38) = 0;
        *(undefined8 *)(pNVar23 + 0x30) = 0;
        *(undefined8 *)(pNVar23 + 0x48) = 0;
        *(undefined8 *)(pNVar23 + 0x40) = 0;
        *(undefined8 *)(pNVar23 + 0x28) = 0;
        *(undefined8 *)(pNVar23 + 0x20) = 0;
        *(undefined ***)pNVar23 = &PTR__NodeData_016d3488;
        *(undefined8 *)(pNVar23 + 8) = 0;
        *(undefined8 *)(pNVar23 + 0x10) = 0;
        *(undefined8 *)(pNVar23 + 0x18) = 0;
        Mat4::Mat4((Mat4 *)(pNVar23 + 0x20));
        *(undefined8 *)(pNVar23 + 0x78) = 0;
        *(undefined8 *)(pNVar23 + 0x70) = 0;
        *(undefined8 *)(pNVar23 + 0x88) = 0;
        *(undefined8 *)(pNVar23 + 0x80) = 0;
        *(undefined8 *)(pNVar23 + 0x68) = 0;
        *(undefined8 *)(pNVar23 + 0x60) = 0;
      }
      pNStack_228 = pNVar23;
      pvVar11 = pvStack_210;
      p_Var51 = p_Stack_1f0;
      if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
          (pNVar23 + 8) != pbVar44) {
        uVar28 = *(ulong *)(pbVar44 + 8);
        pbVar8 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **
                  )(pbVar44 + 0x10);
        if (((byte)*pbVar44 & 1) == 0) {
          pbVar8 = pbVar44 + 1;
          uVar28 = (ulong)((byte)*pbVar44 >> 1);
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (pNVar23 + 8),(char *)pbVar8,uVar28);
        pvVar11 = pvStack_210;
        p_Var51 = p_Stack_1f0;
      }
      while (pvStack_210 = pvVar11, p_Var51 != (__tree_node_base *)&p_Stack_1e8) {
        this = *(vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> **)(pvVar11 + 0x28);
        if (this == *(vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> **)
                     (pvVar11 + 0x30)) {
          std::__ndk1::
          vector<std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>,std::__ndk1::allocator<std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>>>
          ::
          __push_back_slow_path<std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>const&>
                    ((vector<std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>,std::__ndk1::allocator<std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>>>
                      *)(pvVar11 + 0x20),(vector *)(p_Var51 + 0x28));
        }
        else {
          std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::vector
                    (this,(vector *)(p_Var51 + 0x28));
          *(vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> **)(pvVar11 + 0x28) =
               this + 0x18;
        }
        pvVar11 = pvStack_210;
        lVar31 = *(long *)(pvStack_210 + 0x70);
        lVar37 = *(long *)(pvStack_210 + 0x78);
        if (lVar31 == lVar37) {
          iVar54 = 0;
        }
        else {
          uVar48 = (lVar37 - lVar31) - 0x10U >> 4;
          uVar28 = uVar48 + 1;
          if (uVar28 < 9) {
            iVar54 = 0;
          }
          else {
            uVar2 = 8;
            if ((uVar28 & 7) != 0) {
              uVar2 = uVar28 & 7;
            }
            piVar32 = (int *)(lVar31 + 0x4c);
            iVar54 = 0;
            iVar55 = 0;
            iVar56 = 0;
            iVar57 = 0;
            lVar31 = lVar31 + (uVar28 - uVar2) * 0x10;
            lVar34 = (uVar48 - uVar2) + 1;
            iVar58 = 0;
            iVar59 = 0;
            iVar60 = 0;
            iVar61 = 0;
            do {
              piVar35 = piVar32 + -0x10;
              iVar62 = *piVar32;
              piVar15 = piVar32 + 4;
              piVar16 = piVar32 + 8;
              piVar17 = piVar32 + 0xc;
              piVar18 = piVar32 + -0xc;
              piVar19 = piVar32 + -8;
              piVar20 = piVar32 + -4;
              lVar34 = lVar34 + -8;
              piVar32 = piVar32 + 0x20;
              iVar58 = iVar62 + iVar58;
              iVar59 = *piVar15 + iVar59;
              iVar60 = *piVar16 + iVar60;
              iVar61 = *piVar17 + iVar61;
              iVar54 = *piVar35 + iVar54;
              iVar55 = *piVar18 + iVar55;
              iVar56 = *piVar19 + iVar56;
              iVar57 = *piVar20 + iVar57;
            } while (lVar34 != 0);
            iVar54 = iVar58 + iVar54 + iVar59 + iVar55 + iVar60 + iVar56 + iVar61 + iVar57;
          }
          do {
            piVar32 = (int *)(lVar31 + 0xc);
            lVar31 = lVar31 + 0x10;
            iVar54 = *piVar32 + iVar54;
          } while (lVar37 != lVar31);
        }
        AABB::AABB((AABB *)&pvStack_208);
        p_Var53 = *(__tree_node_base **)(p_Var51 + 0x28);
        p_Var50 = *(__tree_node_base **)(p_Var51 + 0x30);
        iVar55 = iVar54 + 3;
        if (-1 < iVar54) {
          iVar55 = iVar54;
        }
        if (p_Var53 != p_Var50) {
          do {
            pfVar30 = (float *)(*(long *)pvVar11 +
                               (long)(iVar55 >> 2) * (ulong)*(ushort *)p_Var53 * 4);
            Vec3::Vec3((Vec3 *)apMStack_140,*pfVar30,pfVar30[1],pfVar30[2]);
            AABB::updateMinMax((AABB *)&pvStack_208,(Vec3 *)apMStack_140,1);
            p_Var53 = p_Var53 + 2;
          } while (p_Var50 != p_Var53);
        }
        FUN_00d1c324(pvVar11 + 0x50,&pvStack_208);
        iVar47 = iVar47 + 1;
        FUN_00d1c170(acStack_ac,extraout_x1,"%d",iVar47);
        pvVar11 = pvStack_210;
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string<decltype(nullptr)>
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )&pvStack_208,acStack_ac);
        puVar6 = *(ulong **)(pvVar11 + 0x40);
        if (puVar6 < *(ulong **)(pvVar11 + 0x48)) {
          puVar6[2] = (ulong)pvStack_1f8;
          puVar6[1] = (ulong)pvStack_200;
          *puVar6 = (ulong)pvStack_208;
          pvStack_200 = (void *)0x0;
          pvStack_1f8 = (void *)0x0;
          pvStack_208 = (void *)0x0;
          *(ulong **)(pvVar11 + 0x40) = puVar6 + 3;
        }
        else {
          std::__ndk1::
          vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
          ::
          __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                    ((vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                      *)(pvVar11 + 0x38),(basic_string *)&pvStack_208);
          if (((ulong)pvStack_208 & 1) != 0) {
            operator_delete(pvStack_1f8);
          }
        }
        apMStack_140[0] = operator_new(0x68,(nothrow_t *)&std::nothrow);
        if (apMStack_140[0] != (ModelData *)0x0) {
          *(undefined8 *)(apMStack_140[0] + 0x10) = 0;
          *(undefined8 *)(apMStack_140[0] + 8) = 0;
          *(undefined8 *)(apMStack_140[0] + 0x20) = 0;
          *(undefined8 *)(apMStack_140[0] + 0x18) = 0;
          *(undefined ***)apMStack_140[0] = &PTR__ModelData_016d34c0;
          *(undefined8 *)(apMStack_140[0] + 0x30) = 0;
          *(undefined8 *)(apMStack_140[0] + 0x28) = 0;
          *(undefined8 *)(apMStack_140[0] + 0x40) = 0;
          *(undefined8 *)(apMStack_140[0] + 0x38) = 0;
          *(undefined8 *)(apMStack_140[0] + 0x50) = 0;
          *(undefined8 *)(apMStack_140[0] + 0x48) = 0;
          *(undefined8 *)(apMStack_140[0] + 0x60) = 0;
          *(undefined8 *)(apMStack_140[0] + 0x58) = 0;
        }
        if (*(int *)(p_Var51 + 0x20) == -1) {
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          basic_string<decltype(nullptr)>
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)&pvStack_208,"");
        }
        else {
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          basic_string((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)&pvStack_208,
                       (basic_string *)(pbStack_190 + (long)*(int *)(p_Var51 + 0x20) * 0xe0));
        }
        pMVar13 = apMStack_140[0];
        pMVar41 = apMStack_140[0] + 0x20;
        if (((byte)*pMVar41 & 1) == 0) {
          *(undefined2 *)pMVar41 = 0;
        }
        else {
          **(undefined1 **)(apMStack_140[0] + 0x30) = 0;
          *(undefined8 *)(apMStack_140[0] + 0x28) = 0;
          if (((byte)apMStack_140[0][0x20] & 1) != 0) {
            operator_delete(*(void **)(apMStack_140[0] + 0x30));
            *(undefined8 *)(pMVar13 + 0x20) = 0;
          }
        }
        *(void **)(pMVar13 + 0x30) = pvStack_1f8;
        *(void **)(pMVar13 + 0x28) = pvStack_200;
        *(void **)pMVar41 = pvStack_208;
        pbVar8 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (apMStack_140[0] + 8);
        sVar21 = strlen(acStack_ac);
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign(pbVar8,acStack_ac,sVar21);
        puVar42 = *(undefined8 **)(pNStack_228 + 0x68);
        if (puVar42 == *(undefined8 **)(pNStack_228 + 0x70)) {
          std::__ndk1::vector<cocos2d::ModelData*,std::__ndk1::allocator<cocos2d::ModelData*>>::
          __push_back_slow_path<cocos2d::ModelData*const&>
                    ((vector<cocos2d::ModelData*,std::__ndk1::allocator<cocos2d::ModelData*>> *)
                     (pNStack_228 + 0x60),apMStack_140);
          p_Var53 = *(__tree_node_base **)(p_Var51 + 8);
          if (*(__tree_node_base **)(p_Var51 + 8) == (__tree_node_base *)0x0) goto LAB_00d1bd4c;
LAB_00d1bd3c:
          do {
            p_Var51 = p_Var53;
            p_Var53 = *(__tree_node_base **)p_Var51;
            pvVar11 = pvStack_210;
          } while (p_Var53 != (__tree_node_base *)0x0);
        }
        else {
          *puVar42 = apMStack_140[0];
          *(undefined8 **)(pNStack_228 + 0x68) = puVar42 + 1;
          p_Var53 = *(__tree_node_base **)(p_Var51 + 8);
          if (*(__tree_node_base **)(p_Var51 + 8) != (__tree_node_base *)0x0) goto LAB_00d1bd3c;
LAB_00d1bd4c:
          p_Var53 = p_Var51 + 0x10;
          bVar14 = *(__tree_node_base **)*(__tree_node_base **)p_Var53 != p_Var51;
          pvVar11 = pvStack_210;
          p_Var51 = *(__tree_node_base **)p_Var53;
          if (bVar14) {
            do {
              lVar31 = *(long *)p_Var53;
              p_Var53 = (__tree_node_base *)(lVar31 + 0x10);
              p_Var51 = *(__tree_node_base **)p_Var53;
            } while (*(long *)p_Var51 != lVar31);
          }
        }
      }
      puVar42 = *(undefined8 **)(param_3 + 0x28);
      if (puVar42 == *(undefined8 **)(param_3 + 0x30)) {
        std::__ndk1::vector<cocos2d::NodeData*,std::__ndk1::allocator<cocos2d::NodeData*>>::
        __push_back_slow_path<cocos2d::NodeData*const&>(this_00,&pNStack_228);
      }
      else {
        *puVar42 = pNStack_228;
        *(undefined8 **)(param_3 + 0x28) = puVar42 + 1;
      }
      puVar42 = *(undefined8 **)(param_1 + 8);
      if (puVar42 == *(undefined8 **)(param_1 + 0x10)) {
        std::__ndk1::vector<cocos2d::MeshData*,std::__ndk1::allocator<cocos2d::MeshData*>>::
        __push_back_slow_path<cocos2d::MeshData*const&>
                  ((vector<cocos2d::MeshData*,std::__ndk1::allocator<cocos2d::MeshData*>> *)param_1,
                   (MeshData **)&pvStack_210);
      }
      else {
        *puVar42 = pvStack_210;
        *(undefined8 **)(param_1 + 8) = puVar42 + 1;
      }
      std::__ndk1::
      __tree<std::__ndk1::__value_type<int,std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>>,std::__ndk1::less<int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<int,std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>>>>
      ::destroy((__tree<std::__ndk1::__value_type<int,std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>>,std::__ndk1::less<int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<int,std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>>>>
                 *)&p_Stack_1f0,(__tree_node *)p_Stack_1e8);
      if (piStack_d0 != (int *)0x0) {
        piStack_c8 = piStack_d0;
        operator_delete(piStack_d0);
      }
      if (pvStack_e8 != (void *)0x0) {
        pvStack_e0 = pvStack_e8;
        operator_delete(pvStack_e8);
      }
      if (pvStack_100 != (void *)0x0) {
        pvStack_f8 = pvStack_100;
        operator_delete(pvStack_100);
      }
      if (pvStack_118 != (void *)0x0) {
        pvStack_110 = pvStack_118;
        operator_delete(pvStack_118);
      }
      if (pvStack_130 != (vector *)0x0) {
        pvStack_128 = pvStack_130;
        operator_delete(pvStack_130);
      }
      pbVar44 = pbVar44 + 0x90;
    } while (pbVar44 != pbVar12);
  }
  if (((ulong)pvStack_1c0 & 1) != 0) {
    operator_delete(pcStack_1b0);
  }
  uVar36 = 1;
joined_r0x00d1be50:
  if ((bStack_1a8 & 1) != 0) {
    operator_delete(pvStack_198);
  }
  pbVar12 = pbStack_190;
  if (pbStack_190 !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)0x0) {
    if (pbStack_188 != pbStack_190) {
      pbVar44 = pbStack_188;
      do {
        pbVar44 = pbVar44 + -0xe0;
        FUN_00d2a6b8(&uStack_180,pbVar44);
      } while (pbVar12 != pbVar44);
    }
    pbStack_188 = pbVar12;
    operator_delete(pbStack_190);
  }
  pbVar12 = pbStack_178;
  if (pbStack_178 !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)0x0) {
    if (pbStack_170 != pbStack_178) {
      pbVar44 = pbStack_170;
      do {
        pbVar44 = pbVar44 + -0x90;
        FUN_00d2a634(&uStack_168,pbVar44);
      } while (pbVar12 != pbVar44);
    }
    pbStack_170 = pbVar12;
    operator_delete(pbStack_178);
  }
  if (((ulong)pvStack_160 & 1) != 0) {
    operator_delete(pcStack_150);
  }
  if (*(long *)(lVar9 + 0x28) != local_98) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar36;
}

