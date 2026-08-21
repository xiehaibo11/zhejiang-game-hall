
/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_00d1ac48(long param_1)

{
  ulong uVar1;
  vector *pvVar2;
  NMaterialData *pNVar3;
  undefined8 *puVar4;
  ushort *puVar5;
  vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *this;
  ulong *puVar6;
  byte *pbVar7;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar8;
  long lVar9;
  bool bVar10;
  vector<float,std::__ndk1::allocator<float>> *pvVar11;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar12;
  ModelData *pMVar13;
  void *__src;
  bool bVar14;
  int *piVar15;
  int *piVar18;
  size_t sVar21;
  void *pvVar22;
  NodeData *pNVar23;
  basic_string *pbVar24;
  undefined8 extraout_x1;
  char *in_x4;
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
  char *pcVar37;
  ModelData *pMVar38;
  long *unaff_x20;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar39;
  long *unaff_x21;
  vector *pvVar40;
  ushort *puVar41;
  int iVar42;
  vector<cocos2d::NMaterialData,std::__ndk1::allocator<cocos2d::NMaterialData>> *unaff_x22;
  byte *unaff_x23;
  ulong uVar43;
  char *unaff_x24;
  uint uVar44;
  __tree_node_base *p_Var45;
  __tree_node_base *p_Var46;
  uint uVar47;
  __tree_node_base *p_Var48;
  long unaff_x29;
  int iVar49;
  int iVar50;
  int iVar51;
  int iVar52;
  int iVar53;
  int iVar54;
  int iVar55;
  int iVar56;
  int iVar57;
  long in_stack_00000008;
  vector<cocos2d::NodeData*,std::__ndk1::allocator<cocos2d::NodeData*>> *in_stack_00000010;
  long in_stack_00000028;
  vector<cocos2d::MeshData*,std::__ndk1::allocator<cocos2d::MeshData*>> *in_stack_00000040;
  NodeData *in_stack_00000048;
  int iStack0000000000000050;
  undefined4 uStack0000000000000054;
  undefined8 in_stack_00000058;
  vector<float,std::__ndk1::allocator<float>> *in_stack_00000060;
  void *in_stack_00000068;
  void *in_stack_00000070;
  void *in_stack_00000078;
  __tree_node_base *in_stack_00000080;
  __tree_node_base *in_stack_00000088;
  __tree_node_base *in_stack_00000090;
  ulong in_stack_00000098;
  undefined8 in_stack_000000a0;
  void *in_stack_000000a8;
  vector *in_stack_000000b0;
  vector *in_stack_000000b8;
  char *in_stack_000000c0;
  byte in_stack_000000c8;
  ulong in_stack_000000d0;
  void *in_stack_000000d8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *in_stack_000000e0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *in_stack_000000e8;
  undefined8 in_stack_000000f0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *in_stack_000000f8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *in_stack_00000100;
  undefined8 in_stack_00000108;
  vector *in_stack_00000110;
  vector *in_stack_00000118;
  char *in_stack_00000120;
  ModelData *in_stack_00000130;
  vector *in_stack_00000140;
  vector *in_stack_00000148;
  char *in_stack_00000150;
  void *in_stack_00000158;
  void *in_stack_00000160;
  undefined1 *in_stack_00000168;
  void *in_stack_00000170;
  undefined4 uStack0000000000000178;
  undefined4 uStack000000000000017c;
  void *in_stack_00000188;
  void *in_stack_00000190;
  int *in_stack_000001a0;
  int *in_stack_000001a8;
  int *piVar16;
  int *piVar17;
  int *piVar19;
  int *piVar20;
  
  do {
    (**(code **)(param_1 + 8))();
    do {
      unaff_x20 = unaff_x20 + 1;
      if (unaff_x21 == unaff_x20) {
        *(undefined8 *)(in_stack_00000028 + 0x28) = *(undefined8 *)in_stack_00000010;
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string<decltype(nullptr)>
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )&stack0x00000110,"");
        if (unaff_x24 != (char *)0x0) {
          sVar21 = strlen(unaff_x24);
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)&stack0x00000110,unaff_x24,sVar21);
          goto LAB_00d1ad94;
        }
        pvVar40 = *(vector **)(unaff_x23 + 8);
        pbVar7 = *(byte **)(unaff_x23 + 0x10);
        pvVar25 = (vector *)(ulong)(*unaff_x23 >> 1);
        pvVar2 = pvVar40;
        if ((*unaff_x23 & 1) == 0) {
          pbVar7 = unaff_x23 + 1;
          pvVar40 = pvVar25;
          pvVar2 = pvVar25;
        }
        goto LAB_00d1acbc;
      }
    } while ((long *)*unaff_x20 == (long *)0x0);
    param_1 = *(long *)*unaff_x20;
  } while( true );
  while( true ) {
    pvVar22 = memchr(&DAT_012f063d,(uint)(pbVar7 + (long)pvVar40)[-1],2);
    pvVar40 = pvVar40 + -1;
    if (pvVar22 != (void *)0x0) break;
LAB_00d1acbc:
    if (pvVar40 == (vector *)0x0) {
      pvVar40 = (vector *)0xffffffffffffffff;
      break;
    }
  }
  if (pvVar40 + 1 <= pvVar2) {
    pvVar2 = pvVar40 + 1;
  }
  in_stack_00000148 = (vector *)0x0;
  in_stack_00000150 = (char *)0x0;
  in_stack_00000140 = (vector *)0x0;
  if ((vector *)0xffffffffffffffef < pvVar2) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (pvVar2 < (vector *)0x17) {
    pcVar37 = (char *)((ulong)&stack0x00000140 | 1);
    in_stack_00000140 = (vector *)(ulong)(byte)((int)pvVar2 << 1);
    if (pvVar2 != (vector *)0x0) goto LAB_00d1ad40;
  }
  else {
    pcVar37 = operator_new((ulong)(pvVar2 + 0x10) & 0xfffffffffffffff0);
    in_stack_00000140 = (vector *)((ulong)(pvVar2 + 0x10) & 0xfffffffffffffff0 | 1);
    in_stack_00000148 = pvVar2;
    in_stack_00000150 = pcVar37;
LAB_00d1ad40:
    memcpy(pcVar37,pbVar7,(size_t)pvVar2);
  }
  pcVar37[(long)pvVar2] = '\0';
  if (((ulong)in_stack_00000110 & 1) != 0) {
    *in_stack_00000120 = '\0';
    in_stack_00000118 = (vector *)0x0;
    if (((ulong)in_stack_00000110 & 1) != 0) {
      operator_delete(in_stack_00000120);
    }
  }
  in_stack_00000118 = in_stack_00000148;
  in_stack_00000110 = in_stack_00000140;
  in_stack_00000120 = in_stack_00000150;
LAB_00d1ad94:
  in_stack_00000100 =
       (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)0x0;
  in_stack_00000108 = 0;
  in_stack_000000f0 = 0;
  in_stack_000000f8 =
       (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)0x0;
  in_stack_000000e0 =
       (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)0x0;
  in_stack_000000e8 =
       (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)0x0;
  pNVar33 = *(NMaterialData **)(unaff_x23 + 0x10);
  if ((*unaff_x23 & 1) == 0) {
    pNVar33 = (NMaterialData *)(unaff_x23 + 1);
  }
  pcVar37 = (char *)((ulong)&stack0x00000110 | 1);
  if (((ulong)in_stack_00000110 & 1) != 0) {
    pcVar37 = in_stack_00000120;
  }
  tinyobj::LoadObj((tinyobj *)&stack0x000000f8,(vector *)&stack0x000000e0,(vector *)pNVar33,pcVar37,
                   in_x4);
  uVar28 = (ulong)(in_stack_000000c8 >> 1);
  if ((in_stack_000000c8 & 1) != 0) {
    uVar28 = in_stack_000000d0;
  }
  if (uVar28 != 0) {
    uVar36 = 0;
    goto joined_r0x00d1be50;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &stack0x000000b0,"");
  pbVar7 = unaff_x23 + 1;
  pvVar2 = (vector *)(ulong)(*unaff_x23 >> 1);
  if ((*unaff_x23 & 1) != 0) {
    pbVar7 = *(byte **)(unaff_x23 + 0x10);
    pvVar2 = *(vector **)(unaff_x23 + 8);
  }
  pvVar40 = pvVar2;
  if (pvVar2 != (vector *)0x0) {
    do {
      pvVar25 = pvVar40;
      if (pvVar25 == (vector *)0x0) goto LAB_00d1afe8;
      pvVar40 = pvVar25 + -1;
    } while ((pbVar7 + (long)pvVar25)[-1] != 0x2f);
    if (pvVar25 + -1 != (vector *)0xffffffffffffffff) {
      if (pvVar25 <= pvVar2) {
        pvVar2 = pvVar25;
      }
      in_stack_00000148 = (vector *)0x0;
      in_stack_00000150 = (char *)0x0;
      in_stack_00000140 = (vector *)0x0;
      if ((vector *)0xffffffffffffffef < pvVar2) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__basic_string_common<true>::__throw_length_error();
      }
      if (pvVar2 < (vector *)0x17) {
        pcVar37 = (char *)((ulong)&stack0x00000140 | 1);
        in_stack_00000140 = (vector *)(ulong)(byte)((int)pvVar2 << 1);
        if (pvVar2 != (vector *)0x0) goto LAB_00d1af94;
      }
      else {
        pcVar37 = operator_new((ulong)(pvVar2 + 0x10) & 0xfffffffffffffff0);
        in_stack_00000140 = (vector *)((ulong)(pvVar2 + 0x10) & 0xfffffffffffffff0 | 1);
        in_stack_00000148 = pvVar2;
        in_stack_00000150 = pcVar37;
LAB_00d1af94:
        pNVar33 = (NMaterialData *)pvVar2;
        memcpy(pcVar37,pbVar7,(size_t)pvVar2);
      }
      pcVar37[(long)pvVar2] = '\0';
      if (((ulong)in_stack_000000b0 & 1) != 0) {
        *in_stack_000000c0 = '\0';
        in_stack_000000b8 = (vector *)0x0;
        if (((ulong)in_stack_000000b0 & 1) != 0) {
          operator_delete(in_stack_000000c0);
        }
      }
      in_stack_000000b8 = in_stack_00000148;
      in_stack_000000b0 = in_stack_00000140;
      in_stack_000000c0 = in_stack_00000150;
    }
  }
LAB_00d1afe8:
  pbVar12 = in_stack_000000e8;
  if (in_stack_000000e0 != in_stack_000000e8) {
    pbVar39 = in_stack_000000e0;
    do {
      in_stack_00000098 = 0;
      in_stack_00000090 = (__tree_node_base *)0x0;
      in_stack_000000a8 = (void *)0x0;
      in_stack_000000a0 = 0;
      in_stack_00000088 = (__tree_node_base *)0x0;
      in_stack_00000080 = (__tree_node_base *)0x0;
      in_stack_00000158 = (void *)0x0;
      in_stack_00000150 = (char *)0x0;
      in_stack_00000168 = (undefined1 *)0x0;
      in_stack_00000160 = (void *)0x0;
      in_stack_00000148 = (vector *)0x0;
      in_stack_00000140 = (vector *)0x0;
      pbVar24 = (basic_string *)(pbVar39 + 0x80);
      if (((byte)*pbVar24 & 1) == 0) {
        if ((byte)*pbVar24 >> 1 == 0) goto LAB_00d1b090;
LAB_00d1b06c:
        std::__ndk1::operator+((__ndk1 *)&stack0x000000b0,pbVar24,(basic_string *)pNVar33);
      }
      else {
        if (*(long *)(pbVar39 + 0x88) != 0) goto LAB_00d1b06c;
LAB_00d1b090:
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)&stack0x00000068,pbVar24);
      }
      if (((ulong)in_stack_00000158 & 1) != 0) {
        *in_stack_00000168 = 0;
        in_stack_00000160 = (void *)0x0;
        if (((ulong)in_stack_00000158 & 1) != 0) {
          operator_delete(in_stack_00000168);
        }
      }
      in_stack_00000168 = in_stack_00000078;
      in_stack_00000160 = in_stack_00000070;
      in_stack_00000158 = in_stack_00000068;
      in_stack_00000170 = (void *)0x812f00000002;
      _uStack0000000000000178 = (void *)CONCAT44(uStack000000000000017c,0x812f);
      FUN_00d1c170(unaff_x29 + -0x9c);
      pcVar37 = in_stack_00000150;
      pvVar2 = in_stack_00000148;
      p_Var46 = in_stack_00000088;
      if (in_stack_00000088 == in_stack_00000090) {
        std::__ndk1::vector<cocos2d::NTextureData,std::__ndk1::allocator<cocos2d::NTextureData>>::
        __push_back_slow_path<cocos2d::NTextureData_const&>
                  ((vector<cocos2d::NTextureData,std::__ndk1::allocator<cocos2d::NTextureData>> *)
                   &stack0x00000080,(NTextureData *)&stack0x00000140);
      }
      else {
        *(ulong *)in_stack_00000088 = 0;
        *(ulong *)(in_stack_00000088 + 8) = 0;
        *(ulong *)(in_stack_00000088 + 0x10) = 0;
        if (((ulong)in_stack_00000140 & 1) == 0) {
          *(char **)(in_stack_00000088 + 0x10) = in_stack_00000150;
          *(vector **)(in_stack_00000088 + 8) = in_stack_00000148;
          *(vector **)in_stack_00000088 = in_stack_00000140;
        }
        else {
          if ((vector *)0xffffffffffffffef < in_stack_00000148) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__basic_string_common<true>::__throw_length_error();
          }
          if (in_stack_00000148 < (vector *)0x17) {
            p_Var48 = in_stack_00000088 + 1;
            *in_stack_00000088 = SUB41((int)in_stack_00000148 << 1,0);
            if (in_stack_00000148 != (vector *)0x0) goto LAB_00d1b17c;
          }
          else {
            pvVar40 = in_stack_00000148 + 0x10;
            p_Var48 = operator_new((ulong)pvVar40 & 0xfffffffffffffff0);
            *(vector **)(p_Var46 + 8) = pvVar2;
            *(__tree_node_base **)(p_Var46 + 0x10) = p_Var48;
            *(ulong *)p_Var46 = (ulong)pvVar40 & 0xfffffffffffffff0 | 1;
LAB_00d1b17c:
            memcpy(p_Var48,pcVar37,(size_t)pvVar2);
          }
          p_Var48[(long)pvVar2] = (__tree_node_base)0x0;
        }
        __src = in_stack_00000168;
        pvVar22 = in_stack_00000160;
        p_Var48 = p_Var46 + 0x18;
        *(ulong *)p_Var48 = 0;
        *(ulong *)(p_Var46 + 0x20) = 0;
        *(ulong *)(p_Var46 + 0x28) = 0;
        if (((ulong)in_stack_00000158 & 1) == 0) {
          *(undefined1 **)(p_Var46 + 0x28) = in_stack_00000168;
          *(void **)(p_Var46 + 0x20) = in_stack_00000160;
          *(void **)p_Var48 = in_stack_00000158;
        }
        else {
          if ((void *)0xffffffffffffffef < in_stack_00000160) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__basic_string_common<true>::__throw_length_error();
          }
          if (in_stack_00000160 < (void *)0x17) {
            p_Var45 = p_Var46 + 0x19;
            *p_Var48 = SUB41((int)in_stack_00000160 << 1,0);
            if (in_stack_00000160 != (void *)0x0) goto LAB_00d1b204;
          }
          else {
            uVar28 = (long)in_stack_00000160 + 0x10U & 0xfffffffffffffff0;
            p_Var45 = operator_new(uVar28);
            *(void **)(p_Var46 + 0x20) = pvVar22;
            *(__tree_node_base **)(p_Var46 + 0x28) = p_Var45;
            *(ulong *)(p_Var46 + 0x18) = uVar28 | 1;
LAB_00d1b204:
            memcpy(p_Var45,__src,(size_t)pvVar22);
          }
          p_Var45[(long)pvVar22] = (__tree_node_base)0x0;
        }
        in_stack_00000088 = p_Var46 + 0x40;
        *(undefined4 *)(p_Var46 + 0x38) = uStack0000000000000178;
        *(void **)(p_Var46 + 0x30) = in_stack_00000170;
      }
      sVar21 = strlen((char *)(unaff_x29 + -0x9c));
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &stack0x00000098,(char *)(unaff_x29 + -0x9c),sVar21);
      pNVar33 = (NMaterialData *)strlen((char *)(unaff_x29 + -0x9c));
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign(pbVar39,(char *)(unaff_x29 + -0x9c),(ulong)pNVar33);
      pNVar3 = *(NMaterialData **)(unaff_x22 + 8);
      if (pNVar3 == *(NMaterialData **)(unaff_x22 + 0x10)) {
        std::__ndk1::vector<cocos2d::NMaterialData,std::__ndk1::allocator<cocos2d::NMaterialData>>::
        __push_back_slow_path<cocos2d::NMaterialData_const&>
                  (unaff_x22,(NMaterialData *)&stack0x00000080);
      }
      else {
        pNVar33 = (NMaterialData *)&stack0x00000080;
        std::__ndk1::allocator<cocos2d::NMaterialData>::
        construct<cocos2d::NMaterialData,cocos2d::NMaterialData_const&>
                  ((allocator<cocos2d::NMaterialData> *)(unaff_x22 + 0x10),pNVar3,pNVar33);
        *(NMaterialData **)(unaff_x22 + 8) = pNVar3 + 0x30;
      }
      if (((ulong)in_stack_00000158 & 1) != 0) {
        operator_delete(in_stack_00000168);
      }
      if (((ulong)in_stack_00000140 & 1) != 0) {
        operator_delete(in_stack_00000150);
      }
      p_Var46 = in_stack_00000080;
      if ((in_stack_00000098 & 1) != 0) {
        operator_delete(in_stack_000000a8);
        p_Var46 = in_stack_00000080;
      }
      in_stack_00000080 = p_Var46;
      p_Var48 = in_stack_00000088;
      if (p_Var46 != (__tree_node_base *)0x0) {
        while (p_Var45 = p_Var48, p_Var45 != p_Var46) {
          if (((byte)p_Var45[-0x28] & 1) != 0) {
            operator_delete(*(void **)(p_Var45 + -0x18));
          }
          p_Var48 = p_Var45 + -0x40;
          if (((byte)p_Var45[-0x40] & 1) != 0) {
            operator_delete(*(void **)(p_Var45 + -0x30));
          }
        }
        in_stack_00000088 = p_Var46;
        operator_delete(in_stack_00000080);
      }
      pbVar39 = pbVar39 + 0xe0;
    } while (pbVar39 != pbVar12);
  }
  pbVar12 = in_stack_00000100;
  if (in_stack_000000f8 != in_stack_00000100) {
    iVar42 = 0;
    pbVar39 = in_stack_000000f8;
    do {
      tinyobj::mesh_t::mesh_t((mesh_t *)&stack0x00000140,(mesh_t *)(pbVar39 + 0x18));
      in_stack_00000060 = operator_new(0x90,(nothrow_t *)&std::nothrow);
      if (in_stack_00000060 != (vector<float,std::__ndk1::allocator<float>> *)0x0) {
        *(undefined8 *)in_stack_00000060 = 0;
        *(undefined8 *)(in_stack_00000060 + 8) = 0;
        *(undefined4 *)(in_stack_00000060 + 0x18) = 0;
        *(undefined8 *)(in_stack_00000060 + 0x10) = 0;
        *(undefined8 *)(in_stack_00000060 + 0x28) = 0;
        *(undefined8 *)(in_stack_00000060 + 0x20) = 0;
        *(undefined8 *)(in_stack_00000060 + 0x38) = 0;
        *(undefined8 *)(in_stack_00000060 + 0x30) = 0;
        *(undefined8 *)(in_stack_00000060 + 0x48) = 0;
        *(undefined8 *)(in_stack_00000060 + 0x40) = 0;
        *(undefined8 *)(in_stack_00000060 + 0x58) = 0;
        *(undefined8 *)(in_stack_00000060 + 0x50) = 0;
        *(undefined8 *)(in_stack_00000060 + 100) = 0;
        *(undefined8 *)(in_stack_00000060 + 0x5c) = 0;
        *(undefined8 *)(in_stack_00000060 + 0x78) = 0;
        *(undefined8 *)(in_stack_00000060 + 0x80) = 0;
        *(undefined8 *)(in_stack_00000060 + 0x70) = 0;
        *(undefined4 *)(in_stack_00000060 + 0x88) = 0;
      }
      _iStack0000000000000050 = 0x140600000003;
      if (in_stack_00000148 != in_stack_00000140) {
        in_stack_00000058 = 0xc00000000;
        puVar4 = *(undefined8 **)(in_stack_00000060 + 0x78);
        if (puVar4 == *(undefined8 **)(in_stack_00000060 + 0x80)) {
          std::__ndk1::
          vector<cocos2d::MeshVertexAttrib,std::__ndk1::allocator<cocos2d::MeshVertexAttrib>>::
          __push_back_slow_path<cocos2d::MeshVertexAttrib_const&>
                    ((vector<cocos2d::MeshVertexAttrib,std::__ndk1::allocator<cocos2d::MeshVertexAttrib>>
                      *)(in_stack_00000060 + 0x70),(MeshVertexAttrib *)&stack0x00000050);
        }
        else {
          puVar4[1] = 0xc00000000;
          *puVar4 = 0x140600000003;
          *(undefined8 **)(in_stack_00000060 + 0x78) = puVar4 + 2;
        }
      }
      if (in_stack_00000160 == in_stack_00000158) {
        bVar14 = false;
      }
      else {
        in_stack_00000058 = CONCAT44(iStack0000000000000050 << 2,6);
        puVar4 = *(undefined8 **)(in_stack_00000060 + 0x78);
        if (puVar4 == *(undefined8 **)(in_stack_00000060 + 0x80)) {
          std::__ndk1::
          vector<cocos2d::MeshVertexAttrib,std::__ndk1::allocator<cocos2d::MeshVertexAttrib>>::
          __push_back_slow_path<cocos2d::MeshVertexAttrib_const&>
                    ((vector<cocos2d::MeshVertexAttrib,std::__ndk1::allocator<cocos2d::MeshVertexAttrib>>
                      *)(in_stack_00000060 + 0x70),(MeshVertexAttrib *)&stack0x00000050);
        }
        else {
          puVar4[1] = in_stack_00000058;
          *puVar4 = _iStack0000000000000050;
          *(undefined8 **)(in_stack_00000060 + 0x78) = puVar4 + 2;
        }
        bVar14 = true;
      }
      if (_uStack0000000000000178 == in_stack_00000170) {
        bVar10 = false;
      }
      else {
        _iStack0000000000000050 = CONCAT44(uStack0000000000000054,2);
        in_stack_00000058 = 0x800000002;
        puVar4 = *(undefined8 **)(in_stack_00000060 + 0x78);
        if (puVar4 == *(undefined8 **)(in_stack_00000060 + 0x80)) {
          std::__ndk1::
          vector<cocos2d::MeshVertexAttrib,std::__ndk1::allocator<cocos2d::MeshVertexAttrib>>::
          __push_back_slow_path<cocos2d::MeshVertexAttrib_const&>
                    ((vector<cocos2d::MeshVertexAttrib,std::__ndk1::allocator<cocos2d::MeshVertexAttrib>>
                      *)(in_stack_00000060 + 0x70),(MeshVertexAttrib *)&stack0x00000050);
        }
        else {
          puVar4[1] = 0x800000002;
          *puVar4 = _iStack0000000000000050;
          *(undefined8 **)(in_stack_00000060 + 0x78) = puVar4 + 2;
        }
        bVar10 = true;
      }
      uVar28 = (long)in_stack_00000148 - (long)in_stack_00000140 >> 2;
      if (2 < uVar28) {
        uVar44 = 2;
        uVar47 = 1;
        uVar43 = 1;
        while( true ) {
          pfVar30 = *(float **)(in_stack_00000060 + 8);
          pfVar26 = *(float **)(in_stack_00000060 + 0x10);
          if (pfVar30 == pfVar26) {
            std::__ndk1::vector<float,std::__ndk1::allocator<float>>::
            __push_back_slow_path<float_const&>
                      (in_stack_00000060,(float *)(in_stack_00000140 + (ulong)(uVar44 - 2) * 4));
            pfVar29 = *(float **)(in_stack_00000060 + 8);
            pfVar26 = *(float **)(in_stack_00000060 + 0x10);
          }
          else {
            pfVar29 = pfVar30 + 1;
            *pfVar30 = *(float *)(in_stack_00000140 + (ulong)(uVar44 - 2) * 4);
            *(float **)(in_stack_00000060 + 8) = pfVar29;
          }
          if (pfVar29 == pfVar26) {
            std::__ndk1::vector<float,std::__ndk1::allocator<float>>::
            __push_back_slow_path<float_const&>
                      (in_stack_00000060,(float *)(in_stack_00000140 + (ulong)(uVar44 - 1) * 4));
            pfVar30 = *(float **)(in_stack_00000060 + 8);
            pfVar26 = *(float **)(in_stack_00000060 + 0x10);
          }
          else {
            pfVar30 = pfVar29 + 1;
            *pfVar29 = *(float *)(in_stack_00000140 + (ulong)(uVar44 - 1) * 4);
            *(float **)(in_stack_00000060 + 8) = pfVar30;
          }
          if (pfVar30 == pfVar26) {
            std::__ndk1::vector<float,std::__ndk1::allocator<float>>::
            __push_back_slow_path<float_const&>
                      (in_stack_00000060,(float *)(in_stack_00000140 + (ulong)uVar44 * 4));
          }
          else {
            *pfVar30 = *(float *)(in_stack_00000140 + (ulong)uVar44 * 4);
            *(float **)(in_stack_00000060 + 8) = pfVar30 + 1;
          }
          if (bVar14) {
            pfVar26 = *(float **)((long)in_stack_00000060 + 8);
            pfVar29 = *(float **)((long)in_stack_00000060 + 0x10);
            pfVar30 = (float *)((long)in_stack_00000158 + (ulong)(uVar44 - 2) * 4);
            if (pfVar26 == pfVar29) {
              std::__ndk1::vector<float,std::__ndk1::allocator<float>>::
              __push_back_slow_path<float_const&>(in_stack_00000060,pfVar30);
              pfVar27 = *(float **)(in_stack_00000060 + 8);
              pfVar29 = *(float **)(in_stack_00000060 + 0x10);
            }
            else {
              pfVar27 = pfVar26 + 1;
              *pfVar26 = *pfVar30;
              *(float **)((long)in_stack_00000060 + 8) = pfVar27;
            }
            pfVar30 = (float *)((long)in_stack_00000158 + (ulong)(uVar44 - 1) * 4);
            if (pfVar27 == pfVar29) {
              std::__ndk1::vector<float,std::__ndk1::allocator<float>>::
              __push_back_slow_path<float_const&>(in_stack_00000060,pfVar30);
              pfVar26 = *(float **)(in_stack_00000060 + 8);
              pfVar29 = *(float **)(in_stack_00000060 + 0x10);
            }
            else {
              pfVar26 = pfVar27 + 1;
              *pfVar27 = *pfVar30;
              *(float **)(in_stack_00000060 + 8) = pfVar26;
            }
            pfVar30 = (float *)((long)in_stack_00000158 + (ulong)uVar44 * 4);
            if (pfVar26 == pfVar29) {
              std::__ndk1::vector<float,std::__ndk1::allocator<float>>::
              __push_back_slow_path<float_const&>(in_stack_00000060,pfVar30);
            }
            else {
              *pfVar26 = *pfVar30;
              *(float **)(in_stack_00000060 + 8) = pfVar26 + 1;
            }
          }
          if (bVar10) {
            pfVar26 = *(float **)(in_stack_00000060 + 8);
            pfVar29 = *(float **)(in_stack_00000060 + 0x10);
            pfVar30 = (float *)((long)in_stack_00000170 + (ulong)(uVar47 - 1) * 4);
            if (pfVar26 == pfVar29) {
              std::__ndk1::vector<float,std::__ndk1::allocator<float>>::
              __push_back_slow_path<float_const&>(in_stack_00000060,pfVar30);
              pfVar27 = *(float **)(in_stack_00000060 + 8);
              pfVar29 = *(float **)(in_stack_00000060 + 0x10);
            }
            else {
              pfVar27 = pfVar26 + 1;
              *pfVar26 = *pfVar30;
              *(float **)(in_stack_00000060 + 8) = pfVar27;
            }
            pfVar30 = (float *)((long)in_stack_00000170 + (ulong)uVar47 * 4);
            if (pfVar27 == pfVar29) {
              std::__ndk1::vector<float,std::__ndk1::allocator<float>>::
              __push_back_slow_path<float_const&>(in_stack_00000060,pfVar30);
            }
            else {
              *pfVar27 = *pfVar30;
              *(float **)(in_stack_00000060 + 8) = pfVar27 + 1;
            }
          }
          if (uVar28 / 3 <= uVar43) break;
          uVar43 = (ulong)((int)uVar43 + 1);
          uVar44 = uVar44 + 3;
          uVar47 = uVar47 + 2;
        }
      }
      in_stack_00000088 = (__tree_node_base *)0x0;
      in_stack_00000090 = (__tree_node_base *)0x0;
      lVar31 = (long)in_stack_000001a8 - (long)in_stack_000001a0;
      in_stack_00000080 = (__tree_node_base *)&stack0x00000088;
      if (lVar31 != 0) {
        uVar28 = 0;
        iVar49 = *in_stack_000001a0;
        p_Var46 = (__tree_node_base *)&stack0x00000088;
        p_Var48 = (__tree_node_base *)&stack0x00000088;
        do {
          p_Var45 = *(__tree_node_base **)p_Var48;
joined_r0x00d1b748:
          if (p_Var45 == (__tree_node_base *)0x0) {
            p_Var45 = operator_new(0x40);
            *(int *)(p_Var45 + 0x20) = iVar49;
            *(undefined8 *)(p_Var45 + 0x30) = 0;
            *(undefined8 *)(p_Var45 + 0x38) = 0;
            *(undefined8 *)(p_Var45 + 0x28) = 0;
            *(undefined8 *)p_Var45 = 0;
            *(undefined8 *)(p_Var45 + 8) = 0;
            *(__tree_node_base **)(p_Var45 + 0x10) = p_Var46;
            *(__tree_node_base **)p_Var48 = p_Var45;
            p_Var46 = p_Var45;
            if (*(__tree_node_base **)in_stack_00000080 != (__tree_node_base *)0x0) {
              p_Var46 = *(__tree_node_base **)p_Var48;
              in_stack_00000080 = *(__tree_node_base **)in_stack_00000080;
            }
            std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                      (in_stack_00000088,p_Var46);
            in_stack_00000090 = in_stack_00000090 + 1;
          }
          puVar5 = *(ushort **)(p_Var45 + 0x30);
          puVar41 = (ushort *)((long)in_stack_00000188 + uVar28 * 6);
          p_Var46 = (__tree_node_base *)&stack0x00000088;
          p_Var48 = (__tree_node_base *)&stack0x00000088;
          if (puVar5 == *(ushort **)(p_Var45 + 0x38)) {
            std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::
            __push_back_slow_path<unsigned_short_const&>
                      ((vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *)
                       (p_Var45 + 0x28),puVar41);
            p_Var45 = in_stack_00000088;
          }
          else {
            *puVar5 = *puVar41;
            *(ushort **)(p_Var45 + 0x30) = puVar5 + 1;
            p_Var45 = in_stack_00000088;
          }
          while (p_Var45 != (__tree_node_base *)0x0) {
            while (p_Var48 = p_Var45, iVar49 < *(int *)(p_Var48 + 0x20)) {
              p_Var46 = p_Var48;
              p_Var45 = *(__tree_node_base **)p_Var48;
              if (*(__tree_node_base **)p_Var48 == (__tree_node_base *)0x0) {
                p_Var45 = *(__tree_node_base **)p_Var48;
                goto joined_r0x00d1b82c;
              }
            }
            if (iVar49 <= *(int *)(p_Var48 + 0x20)) break;
            p_Var46 = p_Var48 + 8;
            p_Var45 = *(__tree_node_base **)p_Var46;
          }
          p_Var45 = *(__tree_node_base **)p_Var46;
joined_r0x00d1b82c:
          if (p_Var45 == (__tree_node_base *)0x0) {
            p_Var45 = operator_new(0x40);
            *(int *)(p_Var45 + 0x20) = iVar49;
            *(undefined8 *)(p_Var45 + 0x30) = 0;
            *(undefined8 *)(p_Var45 + 0x38) = 0;
            *(undefined8 *)(p_Var45 + 0x28) = 0;
            *(undefined8 *)p_Var45 = 0;
            *(undefined8 *)(p_Var45 + 8) = 0;
            *(__tree_node_base **)(p_Var45 + 0x10) = p_Var48;
            *(__tree_node_base **)p_Var46 = p_Var45;
            p_Var48 = p_Var45;
            if (*(__tree_node_base **)in_stack_00000080 != (__tree_node_base *)0x0) {
              p_Var48 = *(__tree_node_base **)p_Var46;
              in_stack_00000080 = *(__tree_node_base **)in_stack_00000080;
            }
            std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                      (in_stack_00000088,p_Var48);
            in_stack_00000090 = in_stack_00000090 + 1;
          }
          puVar5 = *(ushort **)(p_Var45 + 0x30);
          puVar41 = (ushort *)((long)in_stack_00000188 + uVar28 * 6 + 2);
          p_Var46 = (__tree_node_base *)&stack0x00000088;
          p_Var48 = (__tree_node_base *)&stack0x00000088;
          if (puVar5 == *(ushort **)(p_Var45 + 0x38)) {
            std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::
            __push_back_slow_path<unsigned_short_const&>
                      ((vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *)
                       (p_Var45 + 0x28),puVar41);
            p_Var45 = in_stack_00000088;
          }
          else {
            *puVar5 = *puVar41;
            *(ushort **)(p_Var45 + 0x30) = puVar5 + 1;
            p_Var45 = in_stack_00000088;
          }
          while (p_Var45 != (__tree_node_base *)0x0) {
            while (p_Var48 = p_Var45, iVar49 < *(int *)(p_Var48 + 0x20)) {
              p_Var46 = p_Var48;
              p_Var45 = *(__tree_node_base **)p_Var48;
              if (*(__tree_node_base **)p_Var48 == (__tree_node_base *)0x0) {
                p_Var45 = *(__tree_node_base **)p_Var48;
                goto joined_r0x00d1b920;
              }
            }
            if (iVar49 <= *(int *)(p_Var48 + 0x20)) break;
            p_Var46 = p_Var48 + 8;
            p_Var45 = *(__tree_node_base **)p_Var46;
          }
          p_Var45 = *(__tree_node_base **)p_Var46;
joined_r0x00d1b920:
          if (p_Var45 == (__tree_node_base *)0x0) {
            p_Var45 = operator_new(0x40);
            *(int *)(p_Var45 + 0x20) = iVar49;
            *(undefined8 *)(p_Var45 + 0x30) = 0;
            *(undefined8 *)(p_Var45 + 0x38) = 0;
            *(undefined8 *)(p_Var45 + 0x28) = 0;
            *(undefined8 *)p_Var45 = 0;
            *(undefined8 *)(p_Var45 + 8) = 0;
            *(__tree_node_base **)(p_Var45 + 0x10) = p_Var48;
            *(__tree_node_base **)p_Var46 = p_Var45;
            p_Var48 = p_Var45;
            if (*(__tree_node_base **)in_stack_00000080 != (__tree_node_base *)0x0) {
              p_Var48 = *(__tree_node_base **)p_Var46;
              in_stack_00000080 = *(__tree_node_base **)in_stack_00000080;
            }
            std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                      (in_stack_00000088,p_Var48);
            in_stack_00000090 = in_stack_00000090 + 1;
          }
          puVar5 = *(ushort **)(p_Var45 + 0x30);
          puVar41 = (ushort *)((long)in_stack_00000188 + uVar28 * 6 + 4);
          if (puVar5 == *(ushort **)(p_Var45 + 0x38)) {
            std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::
            __push_back_slow_path<unsigned_short_const&>
                      ((vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *)
                       (p_Var45 + 0x28),puVar41);
          }
          else {
            *puVar5 = *puVar41;
            *(ushort **)(p_Var45 + 0x30) = puVar5 + 1;
          }
          uVar28 = uVar28 + 1;
          if ((ulong)(lVar31 >> 2) <= uVar28) break;
          iVar49 = in_stack_000001a0[uVar28];
          p_Var48 = (__tree_node_base *)&stack0x00000088;
          p_Var46 = (__tree_node_base *)&stack0x00000088;
          p_Var45 = in_stack_00000088;
          while (p_Var45 != (__tree_node_base *)0x0) {
            while (p_Var46 = p_Var45, iVar49 < *(int *)(p_Var46 + 0x20)) {
              p_Var45 = *(__tree_node_base **)p_Var46;
              p_Var48 = p_Var46;
              if (*(__tree_node_base **)p_Var46 == (__tree_node_base *)0x0) {
                p_Var45 = *(__tree_node_base **)p_Var46;
                goto joined_r0x00d1b748;
              }
            }
            if (iVar49 <= *(int *)(p_Var46 + 0x20)) break;
            p_Var48 = p_Var46 + 8;
            p_Var45 = *(__tree_node_base **)p_Var48;
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
        cocos2d::Mat4::Mat4((Mat4 *)(pNVar23 + 0x20));
        *(undefined8 *)(pNVar23 + 0x78) = 0;
        *(undefined8 *)(pNVar23 + 0x70) = 0;
        *(undefined8 *)(pNVar23 + 0x88) = 0;
        *(undefined8 *)(pNVar23 + 0x80) = 0;
        *(undefined8 *)(pNVar23 + 0x68) = 0;
        *(undefined8 *)(pNVar23 + 0x60) = 0;
      }
      in_stack_00000048 = pNVar23;
      pvVar11 = in_stack_00000060;
      p_Var46 = in_stack_00000080;
      if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
          (pNVar23 + 8) != pbVar39) {
        uVar28 = *(ulong *)(pbVar39 + 8);
        pbVar8 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **
                  )(pbVar39 + 0x10);
        if (((byte)*pbVar39 & 1) == 0) {
          pbVar8 = pbVar39 + 1;
          uVar28 = (ulong)((byte)*pbVar39 >> 1);
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (pNVar23 + 8),(char *)pbVar8,uVar28);
        pvVar11 = in_stack_00000060;
        p_Var46 = in_stack_00000080;
      }
      while (in_stack_00000060 = pvVar11, p_Var46 != (__tree_node_base *)&stack0x00000088) {
        this = *(vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> **)(pvVar11 + 0x28);
        if (this == *(vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> **)
                     (pvVar11 + 0x30)) {
          std::__ndk1::
          vector<std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>,std::__ndk1::allocator<std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>>>
          ::
          __push_back_slow_path<std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>const&>
                    ((vector<std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>,std::__ndk1::allocator<std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>>>
                      *)(pvVar11 + 0x20),(vector *)(p_Var46 + 0x28));
        }
        else {
          std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::vector
                    (this,(vector *)(p_Var46 + 0x28));
          *(vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> **)(pvVar11 + 0x28) =
               this + 0x18;
        }
        pvVar11 = in_stack_00000060;
        lVar31 = *(long *)(in_stack_00000060 + 0x70);
        lVar9 = *(long *)(in_stack_00000060 + 0x78);
        if (lVar31 == lVar9) {
          iVar49 = 0;
        }
        else {
          uVar43 = (lVar9 - lVar31) - 0x10U >> 4;
          uVar28 = uVar43 + 1;
          if (uVar28 < 9) {
            iVar49 = 0;
          }
          else {
            uVar1 = 8;
            if ((uVar28 & 7) != 0) {
              uVar1 = uVar28 & 7;
            }
            piVar32 = (int *)(lVar31 + 0x4c);
            iVar49 = 0;
            iVar50 = 0;
            iVar51 = 0;
            iVar52 = 0;
            lVar31 = lVar31 + (uVar28 - uVar1) * 0x10;
            lVar34 = (uVar43 - uVar1) + 1;
            iVar53 = 0;
            iVar54 = 0;
            iVar55 = 0;
            iVar56 = 0;
            do {
              piVar35 = piVar32 + -0x10;
              iVar57 = *piVar32;
              piVar15 = piVar32 + 4;
              piVar16 = piVar32 + 8;
              piVar17 = piVar32 + 0xc;
              piVar18 = piVar32 + -0xc;
              piVar19 = piVar32 + -8;
              piVar20 = piVar32 + -4;
              lVar34 = lVar34 + -8;
              piVar32 = piVar32 + 0x20;
              iVar53 = iVar57 + iVar53;
              iVar54 = *piVar15 + iVar54;
              iVar55 = *piVar16 + iVar55;
              iVar56 = *piVar17 + iVar56;
              iVar49 = *piVar35 + iVar49;
              iVar50 = *piVar18 + iVar50;
              iVar51 = *piVar19 + iVar51;
              iVar52 = *piVar20 + iVar52;
            } while (lVar34 != 0);
            iVar49 = iVar53 + iVar49 + iVar54 + iVar50 + iVar55 + iVar51 + iVar56 + iVar52;
          }
          do {
            piVar32 = (int *)(lVar31 + 0xc);
            lVar31 = lVar31 + 0x10;
            iVar49 = *piVar32 + iVar49;
          } while (lVar9 != lVar31);
        }
        cocos2d::AABB::AABB((AABB *)&stack0x00000068);
        puVar41 = *(ushort **)(p_Var46 + 0x28);
        puVar5 = *(ushort **)(p_Var46 + 0x30);
        iVar50 = iVar49 + 3;
        if (-1 < iVar49) {
          iVar50 = iVar49;
        }
        if (puVar41 != puVar5) {
          do {
            pfVar30 = (float *)(*(long *)pvVar11 + (long)(iVar50 >> 2) * (ulong)*puVar41 * 4);
            cocos2d::Vec3::Vec3((Vec3 *)&stack0x00000130,*pfVar30,pfVar30[1],pfVar30[2]);
            cocos2d::AABB::updateMinMax((AABB *)&stack0x00000068,(Vec3 *)&stack0x00000130,1);
            puVar41 = puVar41 + 1;
          } while (puVar5 != puVar41);
        }
        FUN_00d1c324(pvVar11 + 0x50,&stack0x00000068);
        iVar42 = iVar42 + 1;
        FUN_00d1c170(unaff_x29 + -0x9c,extraout_x1,"%d",iVar42);
        pvVar11 = in_stack_00000060;
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string<decltype(nullptr)>
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )&stack0x00000068,(char *)(unaff_x29 + -0x9c));
        puVar6 = *(ulong **)(pvVar11 + 0x40);
        if (puVar6 < *(ulong **)(pvVar11 + 0x48)) {
          puVar6[2] = (ulong)in_stack_00000078;
          puVar6[1] = (ulong)in_stack_00000070;
          *puVar6 = (ulong)in_stack_00000068;
          in_stack_00000070 = (void *)0x0;
          in_stack_00000078 = (void *)0x0;
          in_stack_00000068 = (void *)0x0;
          *(ulong **)(pvVar11 + 0x40) = puVar6 + 3;
        }
        else {
          std::__ndk1::
          vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
          ::
          __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                    ((vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                      *)(pvVar11 + 0x38),(basic_string *)&stack0x00000068);
          if (((ulong)in_stack_00000068 & 1) != 0) {
            operator_delete(in_stack_00000078);
          }
        }
        in_stack_00000130 = operator_new(0x68,(nothrow_t *)&std::nothrow);
        if (in_stack_00000130 != (ModelData *)0x0) {
          *(undefined8 *)(in_stack_00000130 + 0x10) = 0;
          *(undefined8 *)(in_stack_00000130 + 8) = 0;
          *(undefined8 *)(in_stack_00000130 + 0x20) = 0;
          *(undefined8 *)(in_stack_00000130 + 0x18) = 0;
          *(undefined ***)in_stack_00000130 = &PTR__ModelData_016d34c0;
          *(undefined8 *)(in_stack_00000130 + 0x30) = 0;
          *(undefined8 *)(in_stack_00000130 + 0x28) = 0;
          *(undefined8 *)(in_stack_00000130 + 0x40) = 0;
          *(undefined8 *)(in_stack_00000130 + 0x38) = 0;
          *(undefined8 *)(in_stack_00000130 + 0x50) = 0;
          *(undefined8 *)(in_stack_00000130 + 0x48) = 0;
          *(undefined8 *)(in_stack_00000130 + 0x60) = 0;
          *(undefined8 *)(in_stack_00000130 + 0x58) = 0;
        }
        if (*(int *)(p_Var46 + 0x20) == -1) {
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          basic_string<decltype(nullptr)>
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)&stack0x00000068,"");
        }
        else {
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          basic_string((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)&stack0x00000068,
                       (basic_string *)(in_stack_000000e0 + (long)*(int *)(p_Var46 + 0x20) * 0xe0));
        }
        pMVar13 = in_stack_00000130;
        pMVar38 = in_stack_00000130 + 0x20;
        if (((byte)*pMVar38 & 1) == 0) {
          *(undefined2 *)pMVar38 = 0;
        }
        else {
          **(undefined1 **)(in_stack_00000130 + 0x30) = 0;
          *(undefined8 *)(in_stack_00000130 + 0x28) = 0;
          if (((byte)in_stack_00000130[0x20] & 1) != 0) {
            operator_delete(*(void **)(in_stack_00000130 + 0x30));
            *(undefined8 *)(pMVar13 + 0x20) = 0;
          }
        }
        *(void **)(pMVar13 + 0x30) = in_stack_00000078;
        *(void **)(pMVar13 + 0x28) = in_stack_00000070;
        *(void **)pMVar38 = in_stack_00000068;
        pbVar8 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (in_stack_00000130 + 8);
        sVar21 = strlen((char *)(unaff_x29 + -0x9c));
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign(pbVar8,(char *)(unaff_x29 + -0x9c),sVar21);
        puVar4 = *(undefined8 **)(in_stack_00000048 + 0x68);
        if (puVar4 == *(undefined8 **)(in_stack_00000048 + 0x70)) {
          std::__ndk1::vector<cocos2d::ModelData*,std::__ndk1::allocator<cocos2d::ModelData*>>::
          __push_back_slow_path<cocos2d::ModelData*const&>
                    ((vector<cocos2d::ModelData*,std::__ndk1::allocator<cocos2d::ModelData*>> *)
                     (in_stack_00000048 + 0x60),&stack0x00000130);
          p_Var48 = *(__tree_node_base **)(p_Var46 + 8);
          if (*(__tree_node_base **)(p_Var46 + 8) == (__tree_node_base *)0x0) goto LAB_00d1bd4c;
LAB_00d1bd3c:
          do {
            p_Var46 = p_Var48;
            p_Var48 = *(__tree_node_base **)p_Var46;
            pvVar11 = in_stack_00000060;
          } while (p_Var48 != (__tree_node_base *)0x0);
        }
        else {
          *puVar4 = in_stack_00000130;
          *(undefined8 **)(in_stack_00000048 + 0x68) = puVar4 + 1;
          p_Var48 = *(__tree_node_base **)(p_Var46 + 8);
          if (*(__tree_node_base **)(p_Var46 + 8) != (__tree_node_base *)0x0) goto LAB_00d1bd3c;
LAB_00d1bd4c:
          p_Var48 = p_Var46 + 0x10;
          bVar14 = *(__tree_node_base **)*(__tree_node_base **)p_Var48 != p_Var46;
          pvVar11 = in_stack_00000060;
          p_Var46 = *(__tree_node_base **)p_Var48;
          if (bVar14) {
            do {
              uVar28 = *(ulong *)p_Var48;
              p_Var48 = (__tree_node_base *)(uVar28 + 0x10);
              p_Var46 = *(__tree_node_base **)p_Var48;
            } while (*(ulong *)p_Var46 != uVar28);
          }
        }
      }
      puVar4 = *(undefined8 **)(in_stack_00000028 + 0x28);
      if (puVar4 == *(undefined8 **)(in_stack_00000028 + 0x30)) {
        std::__ndk1::vector<cocos2d::NodeData*,std::__ndk1::allocator<cocos2d::NodeData*>>::
        __push_back_slow_path<cocos2d::NodeData*const&>(in_stack_00000010,&stack0x00000048);
      }
      else {
        *puVar4 = in_stack_00000048;
        *(undefined8 **)(in_stack_00000028 + 0x28) = puVar4 + 1;
      }
      puVar4 = *(undefined8 **)(in_stack_00000040 + 8);
      if (puVar4 == *(undefined8 **)(in_stack_00000040 + 0x10)) {
        std::__ndk1::vector<cocos2d::MeshData*,std::__ndk1::allocator<cocos2d::MeshData*>>::
        __push_back_slow_path<cocos2d::MeshData*const&>
                  (in_stack_00000040,(MeshData **)&stack0x00000060);
      }
      else {
        *puVar4 = in_stack_00000060;
        *(undefined8 **)(in_stack_00000040 + 8) = puVar4 + 1;
      }
      std::__ndk1::
      __tree<std::__ndk1::__value_type<int,std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>>,std::__ndk1::less<int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<int,std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>>>>
      ::destroy((__tree<std::__ndk1::__value_type<int,std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>>,std::__ndk1::less<int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<int,std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>>>>
                 *)&stack0x00000080,(__tree_node *)in_stack_00000088);
      if (in_stack_000001a0 != (int *)0x0) {
        in_stack_000001a8 = in_stack_000001a0;
        operator_delete(in_stack_000001a0);
      }
      if (in_stack_00000188 != (void *)0x0) {
        in_stack_00000190 = in_stack_00000188;
        operator_delete(in_stack_00000188);
      }
      if (in_stack_00000170 != (void *)0x0) {
        _uStack0000000000000178 = in_stack_00000170;
        operator_delete(in_stack_00000170);
      }
      if (in_stack_00000158 != (void *)0x0) {
        in_stack_00000160 = in_stack_00000158;
        operator_delete(in_stack_00000158);
      }
      if (in_stack_00000140 != (vector *)0x0) {
        in_stack_00000148 = in_stack_00000140;
        operator_delete(in_stack_00000140);
      }
      pbVar39 = pbVar39 + 0x90;
    } while (pbVar39 != pbVar12);
  }
  if (((ulong)in_stack_000000b0 & 1) != 0) {
    operator_delete(in_stack_000000c0);
  }
  uVar36 = 1;
joined_r0x00d1be50:
  if ((in_stack_000000c8 & 1) != 0) {
    operator_delete(in_stack_000000d8);
  }
  pbVar12 = in_stack_000000e0;
  if (in_stack_000000e0 !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)0x0) {
    if (in_stack_000000e8 != in_stack_000000e0) {
      pbVar39 = in_stack_000000e8;
      do {
        pbVar39 = pbVar39 + -0xe0;
        FUN_00d2a6b8(&stack0x000000f0,pbVar39);
      } while (pbVar12 != pbVar39);
    }
    in_stack_000000e8 = pbVar12;
    operator_delete(in_stack_000000e0);
  }
  pbVar12 = in_stack_000000f8;
  if (in_stack_000000f8 !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)0x0) {
    if (in_stack_00000100 != in_stack_000000f8) {
      pbVar39 = in_stack_00000100;
      do {
        pbVar39 = pbVar39 + -0x90;
        FUN_00d2a634(&stack0x00000108,pbVar39);
      } while (pbVar12 != pbVar39);
    }
    in_stack_00000100 = pbVar12;
    operator_delete(in_stack_000000f8);
  }
  if (((ulong)in_stack_00000110 & 1) != 0) {
    operator_delete(in_stack_00000120);
  }
  if (*(long *)(in_stack_00000008 + 0x28) != *(long *)(unaff_x29 + -0x88)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar36;
}

