
/* tinyobj::LoadObj(std::__ndk1::vector<tinyobj::shape_t, std::__ndk1::allocator<tinyobj::shape_t>
   >&, std::__ndk1::vector<tinyobj::material_t, std::__ndk1::allocator<tinyobj::material_t> >&,
   std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >&, tinyobj::MaterialReader&) */

void __thiscall
tinyobj::LoadObj(tinyobj *this,vector *param_1,vector *param_2,basic_istream *param_3,
                MaterialReader *param_4)

{
  ulong *puVar1;
  char *pcVar2;
  byte bVar3;
  long lVar4;
  ulong *puVar5;
  uint uVar6;
  undefined8 uVar7;
  byte *pbVar8;
  undefined8 uVar9;
  byte *pbVar10;
  vector<tinyobj::vertex_index,std::__ndk1::allocator<tinyobj::vertex_index>> *pvVar11;
  vector<tinyobj::vertex_index,std::__ndk1::allocator<tinyobj::vertex_index>> *pvVar12;
  byte *pbVar13;
  vector<tinyobj::vertex_index,std::__ndk1::allocator<tinyobj::vertex_index>> *pvVar14;
  vector<tinyobj::vertex_index,std::__ndk1::allocator<tinyobj::vertex_index>> *pvVar15;
  char cVar16;
  int iVar17;
  int iVar18;
  char *__s;
  long *plVar19;
  size_t sVar20;
  void *pvVar21;
  __tree_node_base *p_Var22;
  __tree_node_base **pp_Var23;
  void *pvVar24;
  size_t sVar25;
  ulong *puVar26;
  byte *pbVar27;
  __tree_node_base *p_Var28;
  byte *in_x8;
  ulong *puVar29;
  undefined8 *puVar30;
  ulong uVar31;
  long lVar32;
  float *pfVar33;
  ulong uVar34;
  long lVar35;
  long lVar36;
  ulong uVar37;
  ulong *puVar38;
  byte bVar39;
  ulong *puVar40;
  uint uVar41;
  undefined1 *puVar42;
  ulong uVar43;
  ulong *puVar44;
  int iVar45;
  float fVar46;
  undefined4 uVar47;
  ulong uVar48;
  undefined4 local_13b4;
  __tree_node **local_1390;
  __tree_node *local_1388;
  undefined8 uStack_1380;
  __tree_node **local_1378;
  __tree_node *local_1370;
  undefined8 uStack_1368;
  __tree_end_node *local_1360;
  ulong uStack_1358;
  ulong *local_1350;
  __tree_node **local_1340;
  __tree_node *local_1338;
  undefined8 uStack_1330;
  __tree_node **local_1328;
  __tree_node *local_1320;
  undefined8 uStack_1318;
  ulong *local_1310;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_1308 [8];
  ulong local_1300;
  ulong *local_12f8;
  ulong local_12f0;
  ulong uStack_12e8;
  undefined1 *local_12e0;
  void *pvStack_12d8;
  void *local_12d0;
  undefined8 local_12c8;
  void *local_12c0;
  void *pvStack_12b8;
  undefined8 local_12b0;
  void *local_12a8;
  void *local_12a0;
  undefined8 uStack_1298;
  void *local_1290;
  void *local_1288;
  undefined8 local_1280;
  void *pvStack_1278;
  void *local_1270;
  undefined8 local_1268;
  __tree_node **local_1260;
  __tree_node *local_1258;
  undefined8 uStack_1250;
  __tree_node_base *local_1248;
  __tree_node_base *local_1240;
  long local_1238;
  ulong local_1230;
  undefined8 uStack_1228;
  ulong *local_1220;
  vector<tinyobj::vertex_index,std::__ndk1::allocator<tinyobj::vertex_index>> *local_1210;
  vector<tinyobj::vertex_index,std::__ndk1::allocator<tinyobj::vertex_index>> *local_1208;
  vector<tinyobj::vertex_index,std::__ndk1::allocator<tinyobj::vertex_index>> *local_1200;
  float *local_11f8;
  float *local_11f0;
  float *local_11e8;
  float *local_11e0;
  float *local_11d8;
  float *local_11d0;
  float *local_11c8;
  float *local_11c0;
  float *local_11b8;
  undefined8 local_11b0;
  undefined8 uStack_11a8;
  undefined8 local_11a0;
  undefined **ppuStack_1198;
  locale alStack_1190 [8];
  undefined8 local_1188;
  undefined8 uStack_1180;
  undefined8 local_1178;
  undefined8 uStack_1170;
  undefined8 local_1168;
  undefined8 uStack_1160;
  ulong local_1158;
  undefined8 uStack_1150;
  void *local_1148;
  undefined8 uStack_1140;
  undefined4 local_1138;
  undefined8 local_1130 [17];
  undefined8 local_10a8;
  undefined4 local_10a0;
  float local_1090;
  undefined4 uStack_108c;
  undefined7 uStack_1088;
  undefined1 uStack_1081;
  ulong *local_1080;
  undefined8 local_1078;
  undefined7 uStack_1070;
  undefined1 uStack_1069;
  ulong *local_1068;
  long local_78;
  
  lVar4 = tpidr_el0;
  local_78 = *(long *)(lVar4 + 0x28);
  local_11b0 = 0x1698900;
  local_1130[0] = 0x1698928;
  uStack_11a8 = 0;
  local_11a0 = 0x1698810;
  std::__ndk1::ios_base::init((ios_base *)local_1130,&ppuStack_1198);
  local_10a0 = 0xffffffff;
  ppuStack_1198 = &PTR__basic_streambuf_01698a08;
  local_11b0 = 0x16987e8;
  local_1130[0] = 0x1698838;
  local_10a8 = 0;
  local_11a0 = 0x1698810;
  std::__ndk1::locale::locale(alStack_1190);
  uStack_1160 = 0;
  local_1168 = 0;
  uStack_1170 = 0;
  local_1178 = 0;
  uStack_1180 = 0;
  local_1188 = 0;
  local_11b8 = (float *)0x0;
  ppuStack_1198 = &PTR__basic_stringbuf_01698960;
  uStack_1150 = 0;
  local_1158 = 0;
  uStack_1140 = 0;
  local_1148 = (void *)0x0;
  local_1138 = 0x18;
  local_11c0 = (float *)0x0;
  local_11c8 = (float *)0x0;
  local_11d0 = (float *)0x0;
  local_11d8 = (float *)0x0;
  local_11e0 = (float *)0x0;
  local_11e8 = (float *)0x0;
  local_11f0 = (float *)0x0;
  local_11f8 = (float *)0x0;
  local_1200 = (vector<tinyobj::vertex_index,std::__ndk1::allocator<tinyobj::vertex_index>> *)0x0;
  local_1208 = (vector<tinyobj::vertex_index,std::__ndk1::allocator<tinyobj::vertex_index>> *)0x0;
  local_1210 = (vector<tinyobj::vertex_index,std::__ndk1::allocator<tinyobj::vertex_index>> *)0x0;
  local_1220 = (ulong *)0x0;
  uStack_1228 = 0;
  local_1230 = 0;
  local_1238 = 0;
  local_1240 = (__tree_node_base *)0x0;
  local_1258 = (__tree_node *)0x0;
  uStack_1250 = 0;
  pvStack_1278 = (void *)0x0;
  local_1280 = 0;
  local_1268 = 0;
  local_1270 = (void *)0x0;
  uStack_1298 = 0;
  local_12a0 = (void *)0x0;
  local_1288 = (void *)0x0;
  local_1290 = (void *)0x0;
  pvStack_12b8 = (void *)0x0;
  local_12c0 = (void *)0x0;
  local_12a8 = (void *)0x0;
  local_12b0 = 0;
  pvStack_12d8 = (void *)0x0;
  local_12e0 = (undefined1 *)0x0;
  local_12c8 = 0;
  local_12d0 = (void *)0x0;
  uStack_12e8 = 0;
  local_12f0 = 0;
  local_1260 = &local_1258;
  local_1248 = (__tree_node_base *)&local_1240;
  __s = operator_new(0x2000);
  memset(__s,0,0x2000);
  puVar29 = (ulong *)((ulong)local_1308 | 1);
  puVar30 = (undefined8 *)((ulong)&local_12f0 | 1);
  local_13b4 = 0xffffffff;
  while( true ) {
    iVar17 = std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::peek
                       ((basic_istream<char,std::__ndk1::char_traits<char>> *)param_2);
    if (iVar17 == -1) break;
    std::__ndk1::ios_base::getloc();
    plVar19 = (long *)std::__ndk1::locale::use_facet
                                ((locale *)&local_1078,(id *)&std::__ndk1::ctype<char>::id);
    cVar16 = (**(code **)(*plVar19 + 0x38))(plVar19,10);
    std::__ndk1::locale::~locale((locale *)&local_1078);
    std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::getline
              ((basic_istream<char,std::__ndk1::char_traits<char>> *)param_2,__s,0x2000,cVar16);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_1308,__s);
    uVar34 = (ulong)((byte)local_1308[0] >> 1);
    uVar31 = uVar34;
    if (((byte)local_1308[0] & 1) != 0) {
      uVar31 = local_1300;
    }
    if (uVar31 != 0) {
      puVar38 = puVar29;
      if (((byte)local_1308[0] & 1) != 0) {
        puVar38 = local_12f8;
      }
      if (*(char *)((long)puVar38 + (uVar31 - 1)) == '\n') {
        if (((byte)local_1308[0] & 1) != 0) {
          uVar34 = local_1300;
        }
        uVar31 = uVar34 - 1;
        if (uVar34 < uVar31) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
        }
        uVar34 = uVar31;
        if (((byte)local_1308[0] & 1) == 0) {
          local_1308[0] = SUB41((int)uVar31 << 1,0);
          uVar34 = local_1300;
        }
        local_1300 = uVar34;
        *(char *)((long)puVar38 + uVar31) = '\0';
        uVar34 = (ulong)((byte)local_1308[0] >> 1);
      }
    }
    uVar31 = uVar34;
    if (((byte)local_1308[0] & 1) != 0) {
      uVar31 = local_1300;
    }
    bVar39 = (byte)local_1308[0] & 1;
    if (uVar31 != 0) {
      puVar38 = puVar29;
      if (((byte)local_1308[0] & 1) != 0) {
        puVar38 = local_12f8;
      }
      if (*(char *)((long)puVar38 + (uVar31 - 1)) == '\r') {
        if (((byte)local_1308[0] & 1) != 0) {
          uVar34 = local_1300;
        }
        uVar31 = uVar34 - 1;
        if (uVar34 < uVar31) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
        }
        uVar34 = uVar31;
        if (((byte)local_1308[0] & 1) == 0) {
          local_1308[0] = SUB41((int)uVar31 << 1,0);
          uVar34 = local_1300;
        }
        local_1300 = uVar34;
        *(char *)((long)puVar38 + uVar31) = '\0';
        bVar39 = (byte)local_1308[0] & 1;
        uVar34 = (ulong)((byte)local_1308[0] >> 1);
      }
    }
    if (bVar39 != 0) {
      uVar34 = local_1300;
    }
    if (uVar34 == 0) {
      uVar41 = 2;
    }
    else {
      puVar38 = puVar29;
      if (bVar39 != 0) {
        puVar38 = local_12f8;
      }
      local_1310 = puVar38;
      sVar20 = strspn((char *)puVar38," \t");
      puVar38 = (ulong *)((long)puVar38 + sVar20);
      bVar39 = (byte)*puVar38;
      local_1310 = puVar38;
      if (bVar39 < 0x66) {
        uVar41 = 2;
        if ((bVar39 != 0) && (bVar39 != 0x23)) goto LAB_00d38480;
      }
      else {
        if (bVar39 == 0x66) {
          if ((*(byte *)((long)puVar38 + 1) != 0x20) && (*(byte *)((long)puVar38 + 1) != 9))
          goto LAB_00d38480;
          puVar38 = (ulong *)((long)puVar38 + 2);
          local_1310 = puVar38;
          sVar20 = strspn((char *)puVar38," \t");
          puVar38 = (ulong *)((long)puVar38 + sVar20);
          lVar32 = (long)local_11c0 - (long)local_11c8;
          lVar35 = (long)local_11d8 - (long)local_11e0;
          local_1068 = (ulong *)0x0;
          uStack_1070 = 0;
          uStack_1069 = 0;
          uVar31 = (long)local_11f0 - (long)local_11f8;
          local_1078 = (void *)0x0;
          while ((pvVar14 = local_1208, local_1310 = puVar38, 0xd < (byte)*puVar38 ||
                 ((1 << (ulong)((byte)*puVar38 & 0x1f) & 0x2401U) == 0))) {
            iVar17 = atoi((char *)puVar38);
            uVar41 = iVar17 - 1;
            if (iVar17 < 1) {
              uVar41 = 0;
              if (iVar17 != 0) {
                uVar41 = iVar17 + (int)((ulong)(lVar32 >> 2) / 3);
              }
            }
            sVar20 = strcspn((char *)puVar38,"/ \t\r");
            local_1310 = (ulong *)((long)puVar38 + sVar20);
            if ((byte)*local_1310 == 0x2f) {
              puVar38 = (ulong *)((long)local_1310 + 1);
              iVar45 = (int)((ulong)(lVar35 >> 2) / 3);
              if (*(byte *)((long)local_1310 + 1) == 0x2f) {
                puVar38 = (ulong *)((long)local_1310 + 2);
                local_1310 = puVar38;
                iVar18 = atoi((char *)puVar38);
                iVar17 = iVar18 + -1;
                if (iVar18 < 1) {
                  iVar17 = 0;
                  if (iVar18 != 0) {
                    iVar17 = iVar18 + iVar45;
                  }
                }
                sVar20 = strcspn((char *)puVar38,"/ \t\r");
                local_1310 = (ulong *)((long)puVar38 + sVar20);
                goto LAB_00d381a0;
              }
              local_1310 = puVar38;
              iVar17 = atoi((char *)puVar38);
              uVar6 = iVar17 - 1;
              if (iVar17 < 1) {
                uVar6 = 0;
                if (iVar17 != 0) {
                  uVar6 = iVar17 + (int)(uVar31 >> 3);
                }
              }
              uVar34 = (ulong)uVar6;
              sVar20 = strcspn((char *)puVar38,"/ \t\r");
              local_1310 = (ulong *)((long)puVar38 + sVar20);
              if ((byte)*local_1310 == 0x2f) {
                puVar38 = (ulong *)((long)local_1310 + 1);
                local_1310 = puVar38;
                iVar18 = atoi((char *)puVar38);
                iVar17 = iVar18 + -1;
                if (iVar18 < 1) {
                  iVar17 = 0;
                  if (iVar18 != 0) {
                    iVar17 = iVar18 + iVar45;
                  }
                }
                sVar20 = strcspn((char *)puVar38,"/ \t\r");
                local_1310 = (ulong *)((long)puVar38 + sVar20);
                pvVar24 = local_1078;
              }
              else {
                iVar17 = -1;
                pvVar24 = local_1078;
              }
            }
            else {
              iVar17 = -1;
LAB_00d381a0:
              uVar34 = 0xffffffff;
              pvVar24 = local_1078;
            }
            puVar38 = (ulong *)CONCAT17(uStack_1069,uStack_1070);
            uVar34 = (ulong)uVar41 | uVar34 << 0x20;
            local_1078 = pvVar24;
            if (puVar38 == local_1068) {
              sVar20 = (long)puVar38 - (long)pvVar24;
              uVar48 = ((long)sVar20 >> 2) * -0x5555555555555555 + 1;
              if (0x1555555555555555 < uVar48) {
                    /* WARNING: Subroutine does not return */
                std::__ndk1::__vector_base_common<true>::__throw_length_error();
              }
              lVar36 = (long)local_1068 - (long)pvVar24 >> 2;
              uVar43 = 0x1555555555555555;
              if ((ulong)(lVar36 * -0x5555555555555555) < 0xaaaaaaaaaaaaaaa) {
                uVar37 = lVar36 * 0x5555555555555556;
                uVar43 = uVar48;
                if (uVar48 <= uVar37) {
                  uVar43 = uVar37;
                }
                if (uVar43 != 0) goto LAB_00d38220;
                pvVar21 = (void *)0x0;
              }
              else {
LAB_00d38220:
                pvVar21 = operator_new(uVar43 * 0xc);
              }
              puVar38 = (ulong *)((long)pvVar21 + ((long)sVar20 >> 2) * 4);
              puVar40 = (ulong *)((long)pvVar21 + uVar43 * 0xc);
              *(int *)(puVar38 + 1) = iVar17;
              pvVar21 = (void *)((long)puVar38 - sVar20);
              *puVar38 = uVar34;
              if (0 < (long)sVar20) {
                memcpy(pvVar21,pvVar24,sVar20);
              }
              uStack_1070 = (undefined7)((long)puVar38 + 0xc);
              uStack_1069 = (undefined1)((ulong)((long)puVar38 + 0xc) >> 0x38);
              local_1068 = puVar40;
              local_1078 = pvVar21;
              if (pvVar24 != (void *)0x0) {
                operator_delete(pvVar24);
              }
            }
            else {
              *puVar38 = uVar34;
              *(int *)(puVar38 + 1) = iVar17;
              uStack_1070 = SUB87((char *)((long)puVar38 + 0xc),0);
              uStack_1069 = (undefined1)((ulong)((long)puVar38 + 0xc) >> 0x38);
            }
            puVar38 = local_1310;
            sVar20 = strspn((char *)local_1310," \t\r");
            puVar38 = (ulong *)((long)puVar38 + sVar20);
          }
          if (local_1208 == local_1200) {
            std::__ndk1::
            vector<std::__ndk1::vector<tinyobj::vertex_index,std::__ndk1::allocator<tinyobj::vertex_index>>,std::__ndk1::allocator<std::__ndk1::vector<tinyobj::vertex_index,std::__ndk1::allocator<tinyobj::vertex_index>>>>
            ::
            __push_back_slow_path<std::__ndk1::vector<tinyobj::vertex_index,std::__ndk1::allocator<tinyobj::vertex_index>>const&>
                      ((vector<std::__ndk1::vector<tinyobj::vertex_index,std::__ndk1::allocator<tinyobj::vertex_index>>,std::__ndk1::allocator<std::__ndk1::vector<tinyobj::vertex_index,std::__ndk1::allocator<tinyobj::vertex_index>>>>
                        *)&local_1210,(vector *)&local_1078);
          }
          else {
            std::__ndk1::vector<tinyobj::vertex_index,std::__ndk1::allocator<tinyobj::vertex_index>>
            ::vector(local_1208,(vector *)&local_1078);
            local_1208 = pvVar14 + 0x18;
          }
          if (local_1078 != (void *)0x0) {
            uStack_1070 = SUB87(local_1078,0);
            uStack_1069 = (undefined1)((ulong)local_1078 >> 0x38);
            operator_delete(local_1078);
          }
        }
        else {
          if (bVar39 != 0x76) goto LAB_00d38480;
          bVar3 = *(byte *)((long)puVar38 + 1);
          if (0x6d < bVar3) {
            if (bVar3 == 0x6e) {
              if ((*(byte *)((long)puVar38 + 2) == 0x20) || (*(byte *)((long)puVar38 + 2) == 9)) {
                local_1310 = (ulong *)((long)puVar38 + 3);
                fVar46 = (float)FUN_00d36c44(&local_1310);
                local_1078._0_4_ = fVar46;
                local_1090 = (float)FUN_00d36c44(&local_1310);
                uVar47 = FUN_00d36c44(&local_1310);
                local_1360 = (__tree_end_node *)CONCAT44(local_1360._4_4_,uVar47);
                if (local_11d8 == local_11d0) {
                  std::__ndk1::vector<float,std::__ndk1::allocator<float>>::
                  __push_back_slow_path<float_const&>
                            ((vector<float,std::__ndk1::allocator<float>> *)&local_11e0,
                             (float *)&local_1078);
                  pfVar33 = local_11d8;
                  if (local_11d8 != local_11d0) goto LAB_00d3845c;
LAB_00d3885c:
                  std::__ndk1::vector<float,std::__ndk1::allocator<float>>::
                  __push_back_slow_path<float_const&>
                            ((vector<float,std::__ndk1::allocator<float>> *)&local_11e0,&local_1090)
                  ;
                  if (local_11d8 == local_11d0) {
LAB_00d38878:
                    std::__ndk1::vector<float,std::__ndk1::allocator<float>>::
                    __push_back_slow_path<float_const&>
                              ((vector<float,std::__ndk1::allocator<float>> *)&local_11e0,
                               (float *)&local_1360);
                    goto LAB_00d3926c;
                  }
                }
                else {
                  pfVar33 = local_11d8 + 1;
                  *local_11d8 = (float)local_1078;
                  local_11d8 = pfVar33;
                  if (pfVar33 == local_11d0) goto LAB_00d3885c;
LAB_00d3845c:
                  local_11d8 = pfVar33 + 1;
                  *pfVar33 = local_1090;
                  if (local_11d8 == local_11d0) goto LAB_00d38878;
                }
                *local_11d8 = local_1360._0_4_;
                local_11d8 = local_11d8 + 1;
                goto LAB_00d3926c;
              }
            }
            else if ((bVar3 == 0x74) &&
                    ((*(byte *)((long)puVar38 + 2) == 0x20 || (*(byte *)((long)puVar38 + 2) == 9))))
            {
              local_1310 = (ulong *)((long)puVar38 + 3);
              fVar46 = (float)FUN_00d36c44(&local_1310);
              local_1078._0_4_ = fVar46;
              local_1090 = (float)FUN_00d36c44(&local_1310);
              if (local_11f0 == local_11e8) {
                std::__ndk1::vector<float,std::__ndk1::allocator<float>>::
                __push_back_slow_path<float_const&>
                          ((vector<float,std::__ndk1::allocator<float>> *)&local_11f8,
                           (float *)&local_1078);
                if (local_11f0 == local_11e8) goto LAB_00d38830;
              }
              else {
                pfVar33 = local_11f0 + 1;
                *local_11f0 = (float)local_1078;
                local_11f0 = pfVar33;
                if (pfVar33 == local_11e8) {
LAB_00d38830:
                  std::__ndk1::vector<float,std::__ndk1::allocator<float>>::
                  __push_back_slow_path<float_const&>
                            ((vector<float,std::__ndk1::allocator<float>> *)&local_11f8,&local_1090)
                  ;
                  goto LAB_00d3926c;
                }
              }
              *local_11f0 = local_1090;
              local_11f0 = local_11f0 + 1;
              goto LAB_00d3926c;
            }
LAB_00d38480:
            iVar17 = strncmp((char *)puVar38,"usemtl",6);
            if ((iVar17 != 0) ||
               ((*(byte *)((long)puVar38 + 6) != 0x20 && (*(byte *)((long)puVar38 + 6) != 9)))) {
              iVar17 = strncmp((char *)puVar38,"mtllib",6);
              if ((iVar17 == 0) &&
                 ((*(byte *)((long)puVar38 + 6) == 0x20 || (*(byte *)((long)puVar38 + 6) == 9)))) {
                local_1310 = (ulong *)((long)puVar38 + 7);
                sscanf((char *)local_1310,"%s",&local_1078);
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                basic_string<decltype(nullptr)>
                          ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                            *)&local_1090,(char *)&local_1078);
                    /* try { // try from 00d38654 to 00e3865b has its CatchHandler @ 00d387d0 */
                    /* try { // try from 00d3865c to 00e387d3 has its CatchHandler @ 00d38608 */
                (**(code **)(*(long *)param_3 + 0x10))
                          (in_x8,param_3,&local_1090,param_1,&local_1248);
                if (((uint)local_1090 & 1) != 0) {
                  operator_delete(local_1080);
                }
                pvVar14 = local_1210;
                bVar39 = *in_x8;
                uVar31 = (ulong)(bVar39 >> 1);
                if ((bVar39 & 1) != 0) {
                  uVar31 = *(ulong *)(in_x8 + 8);
                }
                if (uVar31 != 0) {
                  if (local_1208 != local_1210) {
                    pvVar24 = *(void **)(local_1208 + -0x18);
                    pvVar15 = local_1208 + -0x18;
                    pvVar12 = local_1208;
                    while( true ) {
                      pvVar11 = pvVar15;
                      if (pvVar24 != (void *)0x0) {
                        *(void **)(pvVar12 + -0x10) = pvVar24;
                        operator_delete(pvVar24);
                      }
                      if (pvVar14 == pvVar11) break;
                      pvVar24 = *(void **)(pvVar11 + -0x18);
                      pvVar15 = pvVar11 + -0x18;
                      pvVar12 = pvVar11;
                    }
                  }
                  local_1208 = pvVar14;
                  uVar41 = 1;
                  goto LAB_00d39270;
                }
                if ((bVar39 & 1) != 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00d38654 with catch @ 00d387d0
                        */
                  operator_delete(*(void **)(in_x8 + 0x10));
                }
                goto LAB_00d3926c;
              }
              if (bVar39 == 0x6f) {
                if ((*(byte *)((long)puVar38 + 1) != 0x20) && (*(byte *)((long)puVar38 + 1) != 9))
                goto LAB_00d38768;
                local_1370 = (__tree_node *)0x0;
                uStack_1368 = 0;
                local_1378 = &local_1370;
                std::__ndk1::
                map<tinyobj::vertex_index,unsigned_int,std::__ndk1::less<tinyobj::vertex_index>,std::__ndk1::allocator<std::__ndk1::pair<tinyobj::vertex_index_const,unsigned_int>>>
                ::
                insert<std::__ndk1::__map_const_iterator<std::__ndk1::__tree_const_iterator<std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>,std::__ndk1::__tree_node<std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>,void*>*,long>>>
                          ((map<tinyobj::vertex_index,unsigned_int,std::__ndk1::less<tinyobj::vertex_index>,std::__ndk1::allocator<std::__ndk1::pair<tinyobj::vertex_index_const,unsigned_int>>>
                            *)&local_1378,local_1260,&local_1258);
                uVar34 = FUN_00d399d8(&local_12f0,&local_1378,&local_11c8,&local_11e0,&local_11f8,
                                      &local_1210,local_13b4,&local_1230);
                std::__ndk1::
                __tree<std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>,std::__ndk1::__map_value_compare<tinyobj::vertex_index,std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>,std::__ndk1::less<tinyobj::vertex_index>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>>>
                ::destroy((__tree<std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>,std::__ndk1::__map_value_compare<tinyobj::vertex_index,std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>,std::__ndk1::less<tinyobj::vertex_index>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>>>
                           *)&local_1378,local_1370);
                puVar42 = local_12e0;
                uVar31 = uStack_12e8;
                if ((uVar34 & 1) != 0) {
                  puVar38 = *(ulong **)(this + 8);
                  if (puVar38 == *(ulong **)(this + 0x10)) {
                    std::__ndk1::vector<tinyobj::shape_t,std::__ndk1::allocator<tinyobj::shape_t>>::
                    __push_back_slow_path<tinyobj::shape_t_const&>
                              ((vector<tinyobj::shape_t,std::__ndk1::allocator<tinyobj::shape_t>> *)
                               this,(shape_t *)&local_12f0);
                  }
                  else {
                    *puVar38 = 0;
                    puVar38[1] = 0;
                    puVar38[2] = 0;
                    if ((local_12f0 & 1) == 0) {
                      puVar38[2] = (ulong)local_12e0;
                      puVar38[1] = uStack_12e8;
                      *puVar38 = local_12f0;
                    }
                    else {
                      if (0xffffffffffffffef < uStack_12e8) {
                    /* WARNING: Subroutine does not return */
                        std::__ndk1::__basic_string_common<true>::__throw_length_error();
                      }
                      if (uStack_12e8 < 0x17) {
                        pvVar24 = (void *)((long)puVar38 + 1);
                        *(char *)puVar38 = (char)((int)uStack_12e8 << 1);
                        if (uStack_12e8 != 0) goto LAB_00d3907c;
                      }
                      else {
                        uVar34 = uStack_12e8 + 0x10 & 0xfffffffffffffff0;
                        pvVar24 = operator_new(uVar34);
                        puVar38[1] = uVar31;
                        puVar38[2] = (ulong)pvVar24;
                        *puVar38 = uVar34 | 1;
LAB_00d3907c:
                        memcpy(pvVar24,puVar42,uVar31);
                      }
                      *(undefined1 *)((long)pvVar24 + uVar31) = 0;
                    }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00d390f8 with catch @ 00d390a4
                        */
                    mesh_t::mesh_t((mesh_t *)(puVar38 + 3),(mesh_t *)&pvStack_12d8);
                    *(ulong **)(this + 8) = puVar38 + 0x12;
                  }
                }
                pvVar14 = local_1210;
                if (local_1208 != local_1210) {
                  pvVar24 = *(void **)(local_1208 + -0x18);
                  pvVar15 = local_1208 + -0x18;
                  pvVar12 = local_1208;
                  while( true ) {
                    pvVar11 = pvVar15;
                    if (pvVar24 != (void *)0x0) {
                      *(void **)(pvVar12 + -0x10) = pvVar24;
                      operator_delete(pvVar24);
                    }
                    if (pvVar14 == pvVar11) break;
                    pvVar24 = *(void **)(pvVar11 + -0x18);
                    pvVar15 = pvVar11 + -0x18;
                    pvVar12 = pvVar11;
                  }
                }
                    /* try { // try from 00d390f0 to 00e390f7 has its CatchHandler @ 00d3926c */
                local_1208 = pvVar14;
                    /* try { // try from 00d390f8 to 00e3926f has its CatchHandler @ 00d390a4 */
                uStack_1070 = 0;
                local_1078._0_4_ = 0.0;
                local_1078._4_4_ = 0;
                if ((local_12f0 & 1) == 0) {
                  local_12f0 = local_12f0 & 0xffffffffffff0000;
                }
                else {
                  *local_12e0 = 0;
                  uStack_12e8 = 0;
                  if ((local_12f0 & 1) != 0) {
                    operator_delete(local_12e0);
                    local_12f0 = 0;
                  }
                }
                uVar9 = CONCAT71(uStack_1070,local_1078._7_1_);
                uVar7 = CONCAT44(local_1078._4_4_,(float)local_1078);
                local_12f0 = local_12f0 & 0xffffffffffffff00;
                local_1078._0_4_ = 0.0;
                local_1078._4_4_ = 0;
                uStack_1070 = 0;
                *(undefined8 *)((long)puVar30 + 7) = uVar9;
                *puVar30 = uVar7;
                local_12e0 = (undefined1 *)0x0;
                if (pvStack_12d8 != (void *)0x0) {
                  local_12d0 = pvStack_12d8;
                  operator_delete(pvStack_12d8);
                }
                if (local_12c0 != (void *)0x0) {
                  pvStack_12b8 = local_12c0;
                  operator_delete(local_12c0);
                }
                local_12c0 = (void *)0x0;
                pvStack_12b8 = (void *)0x0;
                local_12b0 = 0;
                if (local_12a8 != (void *)0x0) {
                  local_12a0 = local_12a8;
                  operator_delete(local_12a8);
                }
                local_12a8 = (void *)0x0;
                local_12a0 = (void *)0x0;
                uStack_1298 = 0;
                if (local_1290 != (void *)0x0) {
                  local_1288 = local_1290;
                  operator_delete(local_1290);
                }
                local_1290 = (void *)0x0;
                local_1288 = (void *)0x0;
                local_1280 = 0;
                if (pvStack_1278 != (void *)0x0) {
                  local_1270 = pvStack_1278;
                  operator_delete(pvStack_1278);
                }
                local_1310 = (ulong *)((long)local_1310 + 2);
                pvStack_1278 = (void *)0x0;
                local_1270 = (void *)0x0;
                local_1268 = 0;
                sscanf((char *)local_1310,"%s",&local_1078);
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                basic_string<decltype(nullptr)>
                          ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                            *)&local_1090,(char *)&local_1078);
                if ((local_1230 & 1) != 0) {
                  *(undefined1 *)local_1220 = 0;
                  uStack_1228 = 0;
                  if ((local_1230 & 1) != 0) {
                    operator_delete(local_1220);
                  }
                }
                uStack_1228 = CONCAT17(uStack_1081,uStack_1088);
                local_1230 = CONCAT44(uStack_108c,local_1090);
                local_1220 = local_1080;
                goto LAB_00d3926c;
              }
              if ((bVar39 != 0x67) ||
                 ((*(byte *)((long)puVar38 + 1) != 0x20 && (*(byte *)((long)puVar38 + 1) != 9)))) {
LAB_00d38768:
                uVar41 = 0;
                goto LAB_00d39270;
              }
              local_1338 = (__tree_node *)0x0;
              uStack_1330 = 0;
              local_1340 = &local_1338;
              std::__ndk1::
              map<tinyobj::vertex_index,unsigned_int,std::__ndk1::less<tinyobj::vertex_index>,std::__ndk1::allocator<std::__ndk1::pair<tinyobj::vertex_index_const,unsigned_int>>>
              ::
              insert<std::__ndk1::__map_const_iterator<std::__ndk1::__tree_const_iterator<std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>,std::__ndk1::__tree_node<std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>,void*>*,long>>>
                        ((map<tinyobj::vertex_index,unsigned_int,std::__ndk1::less<tinyobj::vertex_index>,std::__ndk1::allocator<std::__ndk1::pair<tinyobj::vertex_index_const,unsigned_int>>>
                          *)&local_1340,local_1260,&local_1258);
              uVar34 = FUN_00d399d8(&local_12f0,&local_1340,&local_11c8,&local_11e0,&local_11f8,
                                    &local_1210,local_13b4,&local_1230);
              std::__ndk1::
              __tree<std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>,std::__ndk1::__map_value_compare<tinyobj::vertex_index,std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>,std::__ndk1::less<tinyobj::vertex_index>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>>>
              ::destroy((__tree<std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>,std::__ndk1::__map_value_compare<tinyobj::vertex_index,std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>,std::__ndk1::less<tinyobj::vertex_index>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>>>
                         *)&local_1340,local_1338);
              puVar42 = local_12e0;
              uVar31 = uStack_12e8;
              if ((uVar34 & 1) != 0) {
                puVar38 = *(ulong **)(this + 8);
                if (puVar38 == *(ulong **)(this + 0x10)) {
                  std::__ndk1::vector<tinyobj::shape_t,std::__ndk1::allocator<tinyobj::shape_t>>::
                  __push_back_slow_path<tinyobj::shape_t_const&>
                            ((vector<tinyobj::shape_t,std::__ndk1::allocator<tinyobj::shape_t>> *)
                             this,(shape_t *)&local_12f0);
                }
                else {
                  *puVar38 = 0;
                  puVar38[1] = 0;
                  puVar38[2] = 0;
                  if ((local_12f0 & 1) == 0) {
                    puVar38[2] = (ulong)local_12e0;
                    puVar38[1] = uStack_12e8;
                    *puVar38 = local_12f0;
                  }
                  else {
                    if (0xffffffffffffffef < uStack_12e8) {
                    /* WARNING: Subroutine does not return */
                      std::__ndk1::__basic_string_common<true>::__throw_length_error();
                    }
                    if (uStack_12e8 < 0x17) {
                      pvVar24 = (void *)((long)puVar38 + 1);
                      *(char *)puVar38 = (char)((int)uStack_12e8 << 1);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00d38928 with catch @ 00d388cc
                       catch(type#1 @ 00000000) { ... } // from try @ 00d38af4 with catch @ 00d388cc
                        */
                      if (uStack_12e8 != 0) goto LAB_00d38bc4;
                    }
                    else {
                      uVar34 = uStack_12e8 + 0x10 & 0xfffffffffffffff0;
                      pvVar24 = operator_new(uVar34);
                      puVar38[1] = uVar31;
                      puVar38[2] = (ulong)pvVar24;
                      *puVar38 = uVar34 | 1;
LAB_00d38bc4:
                      memcpy(pvVar24,puVar42,uVar31);
                    }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00d38aec with catch @ 00d38bd4
                        */
                    *(undefined1 *)((long)pvVar24 + uVar31) = 0;
                  }
                  mesh_t::mesh_t((mesh_t *)(puVar38 + 3),(mesh_t *)&pvStack_12d8);
                  *(ulong **)(this + 8) = puVar38 + 0x12;
                }
              }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00d38a84 with catch @ 00d38bec
                        */
              uStack_1070 = 0;
              local_1078._0_4_ = 0.0;
              local_1078._4_4_ = 0;
              if ((local_12f0 & 1) == 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00d38920 with catch @ 00d38c00
                        */
                local_12f0 = local_12f0 & 0xffffffffffff0000;
              }
              else {
                *local_12e0 = 0;
                uStack_12e8 = 0;
                if ((local_12f0 & 1) != 0) {
                  operator_delete(local_12e0);
                  local_12f0 = 0;
                }
              }
              uVar9 = CONCAT71(uStack_1070,local_1078._7_1_);
              uVar7 = CONCAT44(local_1078._4_4_,(float)local_1078);
              local_12f0 = local_12f0 & 0xffffffffffffff00;
              local_1078._0_4_ = 0.0;
              local_1078._4_4_ = 0;
              uStack_1070 = 0;
              *(undefined8 *)((long)puVar30 + 7) = uVar9;
              *puVar30 = uVar7;
              local_12e0 = (undefined1 *)0x0;
              if (pvStack_12d8 != (void *)0x0) {
                local_12d0 = pvStack_12d8;
                operator_delete(pvStack_12d8);
              }
              if (local_12c0 != (void *)0x0) {
                pvStack_12b8 = local_12c0;
                operator_delete(local_12c0);
              }
              local_12c0 = (void *)0x0;
              pvStack_12b8 = (void *)0x0;
              local_12b0 = 0;
              if (local_12a8 != (void *)0x0) {
                local_12a0 = local_12a8;
                operator_delete(local_12a8);
              }
              local_12a8 = (void *)0x0;
              local_12a0 = (void *)0x0;
              uStack_1298 = 0;
              if (local_1290 != (void *)0x0) {
                local_1288 = local_1290;
                operator_delete(local_1290);
              }
              local_1290 = (void *)0x0;
              local_1288 = (void *)0x0;
              local_1280 = 0;
              if (pvStack_1278 != (void *)0x0) {
                local_1270 = pvStack_1278;
                operator_delete(pvStack_1278);
              }
              pvVar14 = local_1210;
              pvStack_1278 = (void *)0x0;
              local_1270 = (void *)0x0;
              local_1268 = 0;
              if (local_1208 != local_1210) {
                pvVar24 = *(void **)(local_1208 + -0x18);
                pvVar15 = local_1208 + -0x18;
                pvVar12 = local_1208;
                while( true ) {
                  pvVar11 = pvVar15;
                  if (pvVar24 != (void *)0x0) {
                    *(void **)(pvVar12 + -0x10) = pvVar24;
                    operator_delete(pvVar24);
                  }
                  if (pvVar14 == pvVar11) break;
                  pvVar24 = *(void **)(pvVar11 + -0x18);
                  pvVar15 = pvVar11 + -0x18;
                  pvVar12 = pvVar11;
                }
              }
              local_1208 = pvVar14;
              local_1080 = (ulong *)0x0;
              uStack_1088 = 0;
              uStack_1081 = 0;
              local_1090 = 0.0;
              uStack_108c = 0;
              while (puVar38 = local_1310,
                    0xd < (byte)*local_1310 ||
                    (1 << (ulong)((byte)*local_1310 & 0x1f) & 0x2401U) == 0) {
                uStack_1358 = 0;
                local_1350 = (ulong *)0x0;
                local_1360 = (__tree_end_node *)0x0;
                sVar20 = strspn((char *)local_1310," \t");
                puVar40 = (ulong *)((long)puVar38 + sVar20);
                local_1310 = puVar40;
                sVar25 = strcspn((char *)puVar40," \t\r");
                local_1068 = (ulong *)0x0;
                uStack_1070 = 0;
                uStack_1069 = 0;
                local_1078._0_4_ = 0.0;
                local_1078._4_4_ = 0;
                if (0xffffffffffffffef < sVar25) {
                    /* WARNING: Subroutine does not return */
                  std::__ndk1::__basic_string_common<true>::__throw_length_error();
                }
                if (sVar25 < 0x17) {
                  local_1078._0_4_ = (float)(((uint)sVar25 & 0x7f) << 1);
                  puVar26 = (ulong *)((ulong)&local_1078 | 1);
                  if (sVar25 != 0) goto LAB_00d38dfc;
                }
                else {
                  uVar31 = sVar25 + 0x10 & 0xfffffffffffffff0;
                  puVar26 = operator_new(uVar31);
                  local_1078._0_4_ = (float)((uint)uVar31 | 1);
                  local_1078._4_4_ = (undefined4)(uVar31 >> 0x20);
                  uStack_1070 = (undefined7)sVar25;
                  uStack_1069 = (undefined1)(sVar25 >> 0x38);
                  local_1068 = puVar26;
LAB_00d38dfc:
                  puVar1 = (ulong *)((long)puVar40 + sVar25);
                  if ((0x1f < sVar25) &&
                     ((puVar1 <= puVar26 || ((ulong *)((long)puVar26 + sVar25) <= puVar40)))) {
                    uVar34 = sVar25 & 0xffffffffffffffe0;
                    puVar44 = puVar26 + 2;
                    puVar40 = (ulong *)((long)puVar40 + uVar34);
                    puVar26 = (ulong *)((long)puVar26 + uVar34);
                    puVar38 = (ulong *)((long)puVar38 + sVar20 + 0x10);
                    uVar31 = uVar34;
                    do {
                      puVar5 = puVar38 + -1;
                      uVar48 = puVar38[-2];
                      uVar37 = puVar38[1];
                      uVar43 = *puVar38;
                      uVar31 = uVar31 - 0x20;
                      puVar38 = puVar38 + 4;
                      puVar44[-1] = *puVar5;
                      puVar44[-2] = uVar48;
                      puVar44[1] = uVar37;
                      *puVar44 = uVar43;
                      puVar44 = puVar44 + 4;
                    } while (uVar31 != 0);
                    if (sVar25 == uVar34) goto LAB_00d38e78;
                  }
                  do {
                    puVar44 = (ulong *)((long)puVar40 + 1);
                    puVar38 = (ulong *)((long)puVar26 + 1);
                    *(char *)puVar26 = (char)*puVar40;
                    puVar26 = puVar38;
                    puVar40 = puVar44;
                  } while (puVar1 != puVar44);
                }
LAB_00d38e78:
                puVar40 = local_1068;
                *(char *)puVar26 = '\0';
                puVar38 = (ulong *)CONCAT17(uStack_1081,uStack_1088);
                uVar31 = CONCAT17(uStack_1069,uStack_1070);
                local_1360 = (__tree_end_node *)CONCAT44(local_1078._4_4_,(float)local_1078);
                local_1310 = (ulong *)((long)local_1310 + sVar25);
                local_1350 = local_1068;
                uStack_1358 = uVar31;
                if (puVar38 == local_1080) {
                  std::__ndk1::
                  vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                  ::
                  __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
                            ((vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                              *)&local_1090,(basic_string *)&local_1360);
                }
                else {
                  *puVar38 = 0;
                  puVar38[1] = 0;
                  puVar38[2] = 0;
                  if (((uint)(float)local_1078 & 1) == 0) {
                    puVar38[2] = (ulong)local_1068;
                    puVar38[1] = uVar31;
                    *puVar38 = (ulong)local_1360;
                  }
                  else {
                    if (0xffffffffffffffef < uVar31) {
                    /* WARNING: Subroutine does not return */
                      std::__ndk1::__basic_string_common<true>::__throw_length_error();
                    }
                    if (uVar31 < 0x17) {
                      puVar42 = (undefined1 *)((long)puVar38 + 1);
                      *(char *)puVar38 = (char)((int)uStack_1070 << 1);
                      if (uVar31 != 0) goto LAB_00d38f30;
                    }
                    else {
                      uVar34 = uVar31 + 0x10 & 0xfffffffffffffff0;
                      puVar42 = operator_new(uVar34);
                      puVar38[1] = uVar31;
                      puVar38[2] = (ulong)puVar42;
                      *puVar38 = uVar34 | 1;
LAB_00d38f30:
                      memcpy(puVar42,puVar40,uVar31);
                    }
                    puVar42[uVar31] = 0;
                  }
                  uStack_1088 = SUB87(puVar38 + 3,0);
                  uStack_1081 = (undefined1)((ulong)(puVar38 + 3) >> 0x38);
                }
                puVar38 = local_1310;
                sVar20 = strspn((char *)local_1310," \t\r");
                local_1310 = (ulong *)((long)puVar38 + sVar20);
                if (((ulong)local_1360 & 1) != 0) {
                  operator_delete(local_1350);
                }
              }
              lVar32 = CONCAT44(uStack_108c,local_1090);
              if ((ulong)((CONCAT17(uStack_1081,uStack_1088) - lVar32 >> 3) * -0x5555555555555555) <
                  2) {
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)&local_1230,"",0);
              }
              else if (&local_1230 != (ulong *)(lVar32 + 0x18)) {
                uVar31 = *(ulong *)(lVar32 + 0x20);
                pcVar2 = *(char **)(lVar32 + 0x28);
                if ((*(byte *)(lVar32 + 0x18) & 1) == 0) {
                  pcVar2 = (char *)(lVar32 + 0x19);
                  uVar31 = (ulong)(*(byte *)(lVar32 + 0x18) >> 1);
                }
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)&local_1230,pcVar2,uVar31);
              }
              uVar47 = uStack_108c;
              pbVar8 = (byte *)CONCAT44(uStack_108c,local_1090);
              if (pbVar8 != (byte *)0x0) {
                pbVar10 = (byte *)CONCAT17(uStack_1081,uStack_1088);
                pbVar27 = pbVar8;
                if (pbVar10 != pbVar8) {
                  bVar39 = pbVar10[-0x18];
                  pbVar27 = pbVar10 + -0x18;
                  while( true ) {
                    pbVar13 = pbVar27;
                    if ((bVar39 & 1) != 0) {
                      operator_delete(*(void **)(pbVar10 + -8));
                    }
                    if (pbVar8 == pbVar13) break;
                    bVar39 = pbVar13[-0x18];
                    pbVar27 = pbVar13 + -0x18;
                    pbVar10 = pbVar13;
                  }
                  pbVar27 = (byte *)CONCAT44(uStack_108c,local_1090);
                }
                uStack_1088 = SUB87(pbVar8,0);
                uStack_1081 = (undefined1)((uint)uVar47 >> 0x18);
                operator_delete(pbVar27);
              }
              goto LAB_00d3926c;
            }
            local_1310 = (ulong *)((long)puVar38 + 7);
            sscanf((char *)local_1310,"%s",&local_1078);
            local_1320 = (__tree_node *)0x0;
            uStack_1318 = 0;
            local_1328 = &local_1320;
            std::__ndk1::
            map<tinyobj::vertex_index,unsigned_int,std::__ndk1::less<tinyobj::vertex_index>,std::__ndk1::allocator<std::__ndk1::pair<tinyobj::vertex_index_const,unsigned_int>>>
            ::
            insert<std::__ndk1::__map_const_iterator<std::__ndk1::__tree_const_iterator<std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>,std::__ndk1::__tree_node<std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>,void*>*,long>>>
                      ((map<tinyobj::vertex_index,unsigned_int,std::__ndk1::less<tinyobj::vertex_index>,std::__ndk1::allocator<std::__ndk1::pair<tinyobj::vertex_index_const,unsigned_int>>>
                        *)&local_1328,local_1260,&local_1258);
            uVar34 = FUN_00d399d8(&local_12f0,&local_1328,&local_11c8,&local_11e0,&local_11f8,
                                  &local_1210,local_13b4,&local_1230);
            std::__ndk1::
            __tree<std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>,std::__ndk1::__map_value_compare<tinyobj::vertex_index,std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>,std::__ndk1::less<tinyobj::vertex_index>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>>>
            ::destroy((__tree<std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>,std::__ndk1::__map_value_compare<tinyobj::vertex_index,std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>,std::__ndk1::less<tinyobj::vertex_index>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>>>
                       *)&local_1328,local_1320);
            puVar42 = local_12e0;
            uVar31 = uStack_12e8;
            if ((uVar34 & 1) != 0) {
              puVar38 = *(ulong **)(this + 8);
              if (puVar38 == *(ulong **)(this + 0x10)) {
                std::__ndk1::vector<tinyobj::shape_t,std::__ndk1::allocator<tinyobj::shape_t>>::
                __push_back_slow_path<tinyobj::shape_t_const&>
                          ((vector<tinyobj::shape_t,std::__ndk1::allocator<tinyobj::shape_t>> *)this
                           ,(shape_t *)&local_12f0);
              }
              else {
                *puVar38 = 0;
                puVar38[1] = 0;
                puVar38[2] = 0;
                if ((local_12f0 & 1) == 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00d3865c with catch @ 00d38608
                        */
                  puVar38[2] = (ulong)local_12e0;
                  puVar38[1] = uStack_12e8;
                  *puVar38 = local_12f0;
                }
                else {
                  if (0xffffffffffffffef < uStack_12e8) {
                    /* WARNING: Subroutine does not return */
                    std::__ndk1::__basic_string_common<true>::__throw_length_error();
                  }
                  if (uStack_12e8 < 0x17) {
                    pvVar24 = (void *)((long)puVar38 + 1);
                    *(char *)puVar38 = (char)((int)uStack_12e8 << 1);
                    if (uStack_12e8 != 0) goto LAB_00d38924;
                  }
                  else {
                    uVar34 = uStack_12e8 + 0x10 & 0xfffffffffffffff0;
                    pvVar24 = operator_new(uVar34);
                    puVar38[1] = uVar31;
                    puVar38[2] = (ulong)pvVar24;
                    /* try { // try from 00d38920 to 00e38927 has its CatchHandler @ 00d38c00 */
                    *puVar38 = uVar34 | 1;
LAB_00d38924:
                    /* try { // try from 00d38928 to 00e38a83 has its CatchHandler @ 00d388cc */
                    memcpy(pvVar24,puVar42,uVar31);
                  }
                  *(undefined1 *)((long)pvVar24 + uVar31) = 0;
                }
                mesh_t::mesh_t((mesh_t *)(puVar38 + 3),(mesh_t *)&pvStack_12d8);
                *(ulong **)(this + 8) = puVar38 + 0x12;
              }
            }
            uStack_1088 = 0;
            local_1090 = 0.0;
            uStack_108c = 0;
            if ((local_12f0 & 1) == 0) {
              local_12f0 = local_12f0 & 0xffffffffffff0000;
            }
            else {
              *local_12e0 = 0;
              uStack_12e8 = 0;
              if ((local_12f0 & 1) != 0) {
                operator_delete(local_12e0);
                local_12f0 = 0;
              }
            }
            uVar9 = CONCAT71(uStack_1088,uStack_108c._3_1_);
            uVar7 = CONCAT44(uStack_108c,local_1090);
            local_12f0 = local_12f0 & 0xffffffffffffff00;
            local_1090 = 0.0;
            uStack_108c = 0;
            uStack_1088 = 0;
            *(undefined8 *)((long)puVar30 + 7) = uVar9;
            *puVar30 = uVar7;
            local_12e0 = (undefined1 *)0x0;
            if (pvStack_12d8 != (void *)0x0) {
              local_12d0 = pvStack_12d8;
              operator_delete(pvStack_12d8);
            }
            if (local_12c0 != (void *)0x0) {
              pvStack_12b8 = local_12c0;
              operator_delete(local_12c0);
            }
            local_12c0 = (void *)0x0;
            pvStack_12b8 = (void *)0x0;
            local_12b0 = 0;
            if (local_12a8 != (void *)0x0) {
              local_12a0 = local_12a8;
              operator_delete(local_12a8);
            }
            local_12a8 = (void *)0x0;
            local_12a0 = (void *)0x0;
            uStack_1298 = 0;
            if (local_1290 != (void *)0x0) {
              local_1288 = local_1290;
              operator_delete(local_1290);
            }
            local_1290 = (void *)0x0;
            local_1288 = (void *)0x0;
            local_1280 = 0;
            if (pvStack_1278 != (void *)0x0) {
              local_1270 = pvStack_1278;
              operator_delete(pvStack_1278);
            }
            pvVar14 = local_1210;
            pvStack_1278 = (void *)0x0;
            local_1270 = (void *)0x0;
            local_1268 = 0;
            if (local_1208 != local_1210) {
              pvVar24 = *(void **)(local_1208 + -0x18);
              pvVar15 = local_1208 + -0x18;
              pvVar12 = local_1208;
              while( true ) {
                pvVar11 = pvVar15;
                    /* try { // try from 00d38a84 to 00e38a8f has its CatchHandler @ 00d38bec */
                if (pvVar24 != (void *)0x0) {
                  *(void **)(pvVar12 + -0x10) = pvVar24;
                  operator_delete(pvVar24);
                }
                if (pvVar14 == pvVar11) break;
                pvVar24 = *(void **)(pvVar11 + -0x18);
                pvVar15 = pvVar11 + -0x18;
                pvVar12 = pvVar11;
              }
            }
            local_1208 = pvVar14;
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            basic_string<decltype(nullptr)>
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)&local_1090,(char *)&local_1078);
            p_Var22 = (__tree_node_base *)
                      std::__ndk1::
                      __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>>>
                      ::
                      find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                                ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>>>
                                  *)&local_1248,(basic_string *)&local_1090);
            if (((uint)local_1090 & 1) != 0) {
              operator_delete(local_1080);
            }
            if ((__tree_node_base *)&local_1240 == p_Var22) {
              local_13b4 = 0xffffffff;
            }
            else {
                    /* try { // try from 00d38aec to 00e38af3 has its CatchHandler @ 00d38bd4 */
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
              basic_string<decltype(nullptr)>
                        ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                          *)&local_1090,(char *)&local_1078);
                    /* try { // try from 00d38af4 to 00e38c03 has its CatchHandler @ 00d388cc */
              pp_Var23 = std::__ndk1::
                         __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>>>
                         ::
                         __find_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                                   ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>>>
                                     *)&local_1248,&local_1360,(basic_string *)&local_1090);
              p_Var22 = *pp_Var23;
              if (p_Var22 == (__tree_node_base *)0x0) {
                p_Var22 = operator_new(0x40);
                puVar38 = local_1080;
                uVar9 = CONCAT17(uStack_1081,uStack_1088);
                uVar7 = CONCAT44(uStack_108c,local_1090);
                local_1080 = (ulong *)0x0;
                uStack_1088 = 0;
                uStack_1081 = 0;
                *(ulong **)(p_Var22 + 0x30) = puVar38;
                local_1090 = 0.0;
                uStack_108c = 0;
                *(undefined4 *)(p_Var22 + 0x38) = 0;
                *(undefined8 *)p_Var22 = 0;
                *(undefined8 *)(p_Var22 + 8) = 0;
                *(undefined8 *)(p_Var22 + 0x28) = uVar9;
                *(undefined8 *)(p_Var22 + 0x20) = uVar7;
                *(__tree_end_node **)(p_Var22 + 0x10) = local_1360;
                *pp_Var23 = p_Var22;
                p_Var28 = p_Var22;
                if (*(__tree_node_base **)local_1248 != (__tree_node_base *)0x0) {
                  p_Var28 = *pp_Var23;
                  local_1248 = *(__tree_node_base **)local_1248;
                }
                std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                          (local_1240,p_Var28);
                local_1238 = local_1238 + 1;
              }
              local_13b4 = *(undefined4 *)(p_Var22 + 0x38);
              if (((uint)local_1090 & 1) != 0) {
                operator_delete(local_1080);
              }
            }
            goto LAB_00d3926c;
          }
          if ((bVar3 != 9) && (bVar3 != 0x20)) goto LAB_00d38480;
          local_1310 = (ulong *)((long)puVar38 + 2);
          fVar46 = (float)FUN_00d36c44(&local_1310);
          local_1078._0_4_ = fVar46;
          local_1090 = (float)FUN_00d36c44(&local_1310);
          uVar47 = FUN_00d36c44(&local_1310);
          local_1360 = (__tree_end_node *)CONCAT44(local_1360._4_4_,uVar47);
          if (local_11c0 == local_11b8) {
            std::__ndk1::vector<float,std::__ndk1::allocator<float>>::
            __push_back_slow_path<float_const&>
                      ((vector<float,std::__ndk1::allocator<float>> *)&local_11c8,
                       (float *)&local_1078);
            pfVar33 = local_11c0;
            if (local_11c0 != local_11b8) goto LAB_00d38010;
LAB_00d38798:
            std::__ndk1::vector<float,std::__ndk1::allocator<float>>::
            __push_back_slow_path<float_const&>
                      ((vector<float,std::__ndk1::allocator<float>> *)&local_11c8,&local_1090);
            if (local_11c0 == local_11b8) {
LAB_00d387b4:
              std::__ndk1::vector<float,std::__ndk1::allocator<float>>::
              __push_back_slow_path<float_const&>
                        ((vector<float,std::__ndk1::allocator<float>> *)&local_11c8,
                         (float *)&local_1360);
              goto LAB_00d3926c;
            }
          }
          else {
            pfVar33 = local_11c0 + 1;
            *local_11c0 = (float)local_1078;
            local_11c0 = pfVar33;
            if (pfVar33 == local_11b8) goto LAB_00d38798;
LAB_00d38010:
            local_11c0 = pfVar33 + 1;
            *pfVar33 = local_1090;
            if (local_11c0 == local_11b8) goto LAB_00d387b4;
          }
          *local_11c0 = local_1360._0_4_;
          local_11c0 = local_11c0 + 1;
        }
LAB_00d3926c:
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00d390f0 with catch @ 00d3926c
                        */
        uVar41 = 2;
      }
LAB_00d39270:
                    /* catch() { ... } // from try @ 00d392b8 with catch @ 00d39270 */
      bVar39 = (byte)local_1308[0] & 1;
    }
    if (bVar39 != 0) {
      operator_delete(local_12f8);
    }
    if ((uVar41 | 2) != 2) goto LAB_00d393d8;
  }
  local_1390 = &local_1388;
  local_1388 = (__tree_node *)0x0;
  uStack_1380 = 0;
                    /* try { // try from 00d39294 to 00e3929b has its CatchHandler @ 00d39368 */
  std::__ndk1::
  map<tinyobj::vertex_index,unsigned_int,std::__ndk1::less<tinyobj::vertex_index>,std::__ndk1::allocator<std::__ndk1::pair<tinyobj::vertex_index_const,unsigned_int>>>
  ::
  insert<std::__ndk1::__map_const_iterator<std::__ndk1::__tree_const_iterator<std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>,std::__ndk1::__tree_node<std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>,void*>*,long>>>
            ((map<tinyobj::vertex_index,unsigned_int,std::__ndk1::less<tinyobj::vertex_index>,std::__ndk1::allocator<std::__ndk1::pair<tinyobj::vertex_index_const,unsigned_int>>>
              *)&local_1390,local_1260,&local_1258);
                    /* try { // try from 00d392b0 to 00e392b7 has its CatchHandler @ 00d39358 */
                    /* try { // try from 00d392b8 to 00e39383 has its CatchHandler @ 00d39270 */
  uVar34 = FUN_00d399d8(&local_12f0,&local_1390,&local_11c8,&local_11e0,&local_11f8,&local_1210,
                        local_13b4,&local_1230);
  std::__ndk1::
  __tree<std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>,std::__ndk1::__map_value_compare<tinyobj::vertex_index,std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>,std::__ndk1::less<tinyobj::vertex_index>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>>>
  ::destroy((__tree<std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>,std::__ndk1::__map_value_compare<tinyobj::vertex_index,std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>,std::__ndk1::less<tinyobj::vertex_index>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>>>
             *)&local_1390,local_1388);
  puVar42 = local_12e0;
  uVar31 = uStack_12e8;
  if ((uVar34 & 1) != 0) {
    puVar29 = *(ulong **)(this + 8);
    if (puVar29 == *(ulong **)(this + 0x10)) {
      std::__ndk1::vector<tinyobj::shape_t,std::__ndk1::allocator<tinyobj::shape_t>>::
      __push_back_slow_path<tinyobj::shape_t_const&>
                ((vector<tinyobj::shape_t,std::__ndk1::allocator<tinyobj::shape_t>> *)this,
                 (shape_t *)&local_12f0);
    }
    else {
      *puVar29 = 0;
      puVar29[1] = 0;
      puVar29[2] = 0;
      if ((local_12f0 & 1) == 0) {
        puVar29[2] = (ulong)local_12e0;
        puVar29[1] = uStack_12e8;
        *puVar29 = local_12f0;
      }
      else {
        if (0xffffffffffffffef < uStack_12e8) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__basic_string_common<true>::__throw_length_error();
        }
        if (uStack_12e8 < 0x17) {
          pvVar24 = (void *)((long)puVar29 + 1);
          *(char *)puVar29 = (char)((int)uStack_12e8 << 1);
          if (uStack_12e8 != 0) goto LAB_00d39364;
        }
        else {
          uVar34 = uStack_12e8 + 0x10 & 0xfffffffffffffff0;
          pvVar24 = operator_new(uVar34);
                    /* catch() { ... } // from try @ 00d392b0 with catch @ 00d39358 */
          puVar29[1] = uVar31;
          puVar29[2] = (ulong)pvVar24;
          *puVar29 = uVar34 | 1;
LAB_00d39364:
                    /* catch() { ... } // from try @ 00d39294 with catch @ 00d39368 */
          memcpy(pvVar24,puVar42,uVar31);
        }
        *(undefined1 *)((long)pvVar24 + uVar31) = 0;
      }
      mesh_t::mesh_t((mesh_t *)(puVar29 + 3),(mesh_t *)&pvStack_12d8);
                    /* catch() { ... } // from try @ 00d393d4 with catch @ 00d39384 */
      *(ulong **)(this + 8) = puVar29 + 0x12;
    }
  }
  pvVar14 = local_1210;
  if (local_1208 != local_1210) {
    pvVar24 = *(void **)(local_1208 + -0x18);
    pvVar15 = local_1208 + -0x18;
    pvVar12 = local_1208;
    while( true ) {
      pvVar11 = pvVar15;
      if (pvVar24 != (void *)0x0) {
        *(void **)(pvVar12 + -0x10) = pvVar24;
        operator_delete(pvVar24);
      }
                    /* try { // try from 00d393b0 to 00e393b7 has its CatchHandler @ 00d3948c */
      if (pvVar14 == pvVar11) break;
      pvVar24 = *(void **)(pvVar11 + -0x18);
      pvVar15 = pvVar11 + -0x18;
      pvVar12 = pvVar11;
    }
  }
  local_1208 = pvVar14;
                    /* try { // try from 00d393cc to 00e393d3 has its CatchHandler @ 00d3947c */
                    /* try { // try from 00d393d4 to 00e394a7 has its CatchHandler @ 00d39384 */
  std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  str();
LAB_00d393d8:
  operator_delete(__s);
  if (pvStack_1278 != (void *)0x0) {
    local_1270 = pvStack_1278;
    operator_delete(pvStack_1278);
  }
  if (local_1290 != (void *)0x0) {
    local_1288 = local_1290;
    operator_delete(local_1290);
  }
  if (local_12a8 != (void *)0x0) {
    local_12a0 = local_12a8;
    operator_delete(local_12a8);
  }
  if (local_12c0 != (void *)0x0) {
    pvStack_12b8 = local_12c0;
    operator_delete(local_12c0);
  }
  if (pvStack_12d8 != (void *)0x0) {
    local_12d0 = pvStack_12d8;
    operator_delete(pvStack_12d8);
  }
  if ((local_12f0 & 1) != 0) {
    operator_delete(local_12e0);
  }
  std::__ndk1::
  __tree<std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>,std::__ndk1::__map_value_compare<tinyobj::vertex_index,std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>,std::__ndk1::less<tinyobj::vertex_index>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>>>
  ::destroy((__tree<std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>,std::__ndk1::__map_value_compare<tinyobj::vertex_index,std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>,std::__ndk1::less<tinyobj::vertex_index>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>>>
             *)&local_1260,local_1258);
  std::__ndk1::
  __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>>>
  ::destroy((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>>>
             *)&local_1248,(__tree_node *)local_1240);
  if ((local_1230 & 1) != 0) {
    operator_delete(local_1220);
  }
  pvVar14 = local_1210;
  if (local_1210 !=
      (vector<tinyobj::vertex_index,std::__ndk1::allocator<tinyobj::vertex_index>> *)0x0) {
    if (local_1208 != local_1210) {
                    /* catch() { ... } // from try @ 00d393cc with catch @ 00d3947c */
      pvVar24 = *(void **)(local_1208 + -0x18);
      pvVar15 = local_1208 + -0x18;
      pvVar12 = local_1208;
      while( true ) {
        pvVar11 = pvVar15;
        if (pvVar24 != (void *)0x0) {
          *(void **)(pvVar12 + -0x10) = pvVar24;
          operator_delete(pvVar24);
        }
                    /* catch() { ... } // from try @ 00d393b0 with catch @ 00d3948c */
        if (pvVar14 == pvVar11) break;
        pvVar24 = *(void **)(pvVar11 + -0x18);
        pvVar15 = pvVar11 + -0x18;
        pvVar12 = pvVar11;
      }
    }
    local_1208 = pvVar14;
    operator_delete(local_1210);
  }
  if (local_11f8 != (float *)0x0) {
    local_11f0 = local_11f8;
    operator_delete(local_11f8);
  }
                    /* try { // try from 00d394d0 to 00e394d7 has its CatchHandler @ 00d39540 */
  if (local_11e0 != (float *)0x0) {
    local_11d8 = local_11e0;
                    /* try { // try from 00d394d8 to 00e39553 has its CatchHandler @ 00d394a8 */
    operator_delete(local_11e0);
  }
  if (local_11c8 != (float *)0x0) {
    local_11c0 = local_11c8;
    operator_delete(local_11c8);
  }
  local_11b0 = 0x16987e8;
  local_11a0 = 0x1698810;
  local_1130[0] = 0x1698838;
  ppuStack_1198 = &PTR__basic_stringbuf_01698960;
  if ((local_1158 & 1) != 0) {
    operator_delete(local_1148);
  }
  ppuStack_1198 = &PTR__basic_streambuf_01698a08;
  std::__ndk1::locale::~locale(alStack_1190);
                    /* catch() { ... } // from try @ 00d394d0 with catch @ 00d39540 */
  std::__ndk1::ios_base::~ios_base((ios_base *)local_1130);
                    /* try { // try from 00d39554 to 00e395db has its CatchHandler @ 00d39554
                       catch(type#1 @ 00000000) { ... } // from try @ 00d39554 with catch @ 00d39554
                        */
  if (*(long *)(lVar4 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

