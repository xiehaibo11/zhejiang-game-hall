
/* dragonBones::JSONDataParser::_parseDragonBonesData(rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > const&, float) */

DragonBonesData *
dragonBones::JSONDataParser::_parseDragonBonesData(GenericValue *param_1,float param_2)

{
  ulong uVar1;
  size_t sVar2;
  int *__s2;
  ulong uVar3;
  void *pvVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  byte bVar14;
  long lVar15;
  undefined8 *puVar16;
  size_t sVar17;
  byte *pbVar18;
  undefined *puVar19;
  int iVar20;
  int iVar21;
  DragonBonesData *this;
  ArmatureData *pAVar22;
  void *pvVar23;
  JSONDataParser *in_x1;
  ulong uVar24;
  basic_string *in_x3;
  byte *pbVar25;
  char *pcVar26;
  long lVar27;
  long lVar28;
  ulong uVar29;
  long lVar30;
  ulong uVar31;
  byte *pbVar32;
  ulong uVar33;
  ulong uVar34;
  undefined8 *puVar35;
  undefined2 *puVar36;
  ulong uVar37;
  undefined8 *puVar38;
  long lVar39;
  undefined4 *puVar40;
  DragonBonesData *pDVar41;
  undefined2 *puVar42;
  long lVar43;
  long lVar44;
  ulong uVar45;
  int *piVar46;
  char *pcVar47;
  ulong uVar48;
  int *piVar49;
  int *piVar50;
  long lVar51;
  int *piVar52;
  undefined4 in_register_00005004;
  double dVar53;
  undefined8 uVar54;
  undefined8 uVar55;
  undefined8 uVar56;
  ulong local_e0;
  undefined8 uStack_d8;
  void *local_d0;
  ulong local_c8;
  undefined8 uStack_c0;
  void *local_b8;
  ulong local_b0;
  size_t local_a8;
  byte *local_a0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_98 [8];
  ulong local_90;
  byte *local_88;
  long local_80;
  
  lVar15 = tpidr_el0;
  local_80 = *(long *)(lVar15 + 0x28);
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = (byte *)0x0;
  _getString(in_x1,(GenericValue *)DataParser::VERSION,(char *)&local_b0,in_x3);
  if ((local_b0 & 1) != 0) {
    operator_delete(local_a0);
  }
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = (void *)0x0;
  _getString(in_x1,(GenericValue *)DataParser::COMPATIBLE_VERSION,(char *)&local_c8,in_x3);
  if ((local_c8 & 1) != 0) {
    operator_delete(local_b8);
  }
  lVar51 = DataParser::DATA_VERSIONS;
  if (DAT_01d3e880 - DataParser::DATA_VERSIONS != 0) {
    uVar45 = (DAT_01d3e880 - DataParser::DATA_VERSIONS >> 3) * -0x5555555555555555;
    uVar48 = 0;
    sVar17 = (ulong)((byte)local_98[0] >> 1);
    pbVar18 = (byte *)((ulong)local_98 | 1);
    if (((byte)local_98[0] & 1) != 0) {
      sVar17 = local_90;
      pbVar18 = local_88;
    }
    do {
      pbVar25 = (byte *)(lVar51 + uVar48 * 0x18);
      bVar14 = *pbVar25;
      sVar2 = (ulong)(bVar14 >> 1);
      if ((bVar14 & 1) != 0) {
        sVar2 = *(size_t *)(pbVar25 + 8);
      }
      if (sVar2 == sVar17) {
        pbVar32 = *(byte **)(lVar51 + uVar48 * 0x18 + 0x10);
        if ((bVar14 & 1) == 0) {
          pbVar32 = pbVar25 + 1;
        }
        if ((bVar14 & 1) == 0) {
          if (sVar17 == 0) {
LAB_00d4c5f8:
            if (-1 < (int)uVar48) goto LAB_00d4c6b4;
            break;
          }
          lVar27 = -(ulong)(bVar14 >> 1);
          pbVar32 = pbVar18;
          while (pbVar25 = pbVar25 + 1, *pbVar25 == *pbVar32) {
            lVar27 = lVar27 + 1;
            pbVar32 = pbVar32 + 1;
            if (lVar27 == 0) goto LAB_00d4c5f8;
          }
        }
        else if ((sVar17 == 0) || (iVar21 = memcmp(pbVar32,pbVar18,sVar17), iVar21 == 0))
        goto LAB_00d4c5f8;
      }
      uVar48 = uVar48 + 1;
    } while (uVar48 < uVar45);
    uVar48 = 0;
    sVar17 = local_b0 >> 1 & 0x7f;
    pbVar18 = (byte *)((ulong)&local_b0 | 1);
    if ((local_b0 & 1) != 0) {
      sVar17 = local_a8;
      pbVar18 = local_a0;
    }
    do {
      pbVar25 = (byte *)(lVar51 + uVar48 * 0x18);
      bVar14 = *pbVar25;
      sVar2 = (ulong)(bVar14 >> 1);
      if ((bVar14 & 1) != 0) {
        sVar2 = *(size_t *)(pbVar25 + 8);
      }
      if (sVar2 == sVar17) {
        pbVar32 = *(byte **)(lVar51 + uVar48 * 0x18 + 0x10);
        if ((bVar14 & 1) == 0) {
          pbVar32 = pbVar25 + 1;
        }
        if ((bVar14 & 1) == 0) {
          if (sVar17 == 0) {
LAB_00d4c6b0:
            if (-1 < (int)uVar48) goto LAB_00d4c6b4;
            break;
          }
          lVar27 = -(ulong)(bVar14 >> 1);
          pbVar32 = pbVar18;
          while (pbVar25 = pbVar25 + 1, *pbVar25 == *pbVar32) {
            lVar27 = lVar27 + 1;
            pbVar32 = pbVar32 + 1;
            if (lVar27 == 0) goto LAB_00d4c6b0;
          }
        }
        else if ((sVar17 == 0) || (iVar21 = memcmp(pbVar32,pbVar18,sVar17), iVar21 == 0))
        goto LAB_00d4c6b0;
      }
      uVar48 = uVar48 + 1;
    } while (uVar48 < uVar45);
  }
  this = (DragonBonesData *)0x0;
  goto joined_r0x00d4c72c;
LAB_00d4c6b4:
  this = BaseObject::borrowObject<dragonBones::DragonBonesData>();
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (this + 0x18) != local_98) {
    uVar48 = (ulong)((byte)local_98[0] >> 1);
    pbVar18 = (byte *)((ulong)local_98 | 1);
    if (((byte)local_98[0] & 1) != 0) {
      uVar48 = local_90;
      pbVar18 = local_88;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x18),(char *)pbVar18,uVar48);
  }
  local_e0 = 0;
  uStack_d8 = 0;
  local_d0 = (void *)0x0;
  _getString(in_x1,(GenericValue *)DataParser::NAME,(char *)&local_e0,in_x3);
  pDVar41 = this + 0x30;
  if (((byte)*pDVar41 & 1) == 0) {
    *(undefined2 *)pDVar41 = 0;
  }
  else {
    **(undefined1 **)(this + 0x40) = 0;
    *(undefined8 *)(this + 0x38) = 0;
    if (((byte)this[0x30] & 1) != 0) {
      operator_delete(*(void **)(this + 0x40));
      *(undefined8 *)(this + 0x30) = 0;
    }
  }
  *(void **)(this + 0x40) = local_b8;
  *(undefined8 *)(this + 0x38) = uStack_c0;
  *(ulong *)pDVar41 = local_c8;
  uStack_c0 = 0;
  local_b8 = (void *)0x0;
  local_c8 = 0;
  if ((local_e0 & 1) != 0) {
    operator_delete(local_d0);
  }
  iVar20 = _getNumber((GenericValue *)in_x1,DataParser::FRAME_RATE,0x18);
  iVar21 = 0x18;
  if (iVar20 != 0) {
    iVar21 = iVar20;
  }
  *(int *)(this + 0x10) = iVar21;
  puVar19 = DataParser::ARMATURE;
  pcVar26 = DataParser::ARMATURE + -1;
  do {
    pcVar26 = pcVar26 + 1;
  } while (*pcVar26 != '\0');
  piVar46 = *(int **)(in_x1 + 8);
  uVar13 = *(uint *)in_x1;
  piVar49 = piVar46 + (ulong)uVar13 * 0xc;
  piVar50 = piVar46;
  if (uVar13 != 0) {
    uVar48 = (long)pcVar26 - (long)DataParser::ARMATURE;
    lVar51 = (ulong)uVar13 * 0x30;
    do {
      iVar21 = *piVar46;
      if ((*(ushort *)((long)piVar46 + 0x16) & 0x1000) != 0) {
        iVar21 = 0x15 - *(char *)((long)piVar46 + 0x15);
      }
      if (iVar21 == (int)uVar48) {
        piVar52 = *(int **)(piVar46 + 2);
        if ((*(ushort *)((long)piVar46 + 0x16) & 0x1000) != 0) {
          piVar52 = piVar46;
        }
        piVar50 = piVar46;
        if ((piVar52 == (int *)puVar19) ||
           (iVar21 = memcmp(puVar19,piVar52,uVar48 & 0xffffffff), iVar21 == 0)) break;
      }
      lVar51 = lVar51 + -0x30;
      piVar46 = piVar46 + 0xc;
      piVar50 = piVar49;
    } while (lVar51 != 0);
  }
  if (piVar49 != piVar50) {
    *(DragonBonesData **)(param_1 + 0x28) = this;
    (**(code **)(*(long *)param_1 + 0x108))();
    puVar19 = DataParser::ARMATURE;
    pcVar26 = DataParser::ARMATURE + -1;
    do {
      pcVar26 = pcVar26 + 1;
    } while (*pcVar26 != '\0');
    uVar13 = *(uint *)in_x1;
    piVar50 = *(int **)(in_x1 + 8);
    piVar46 = piVar50;
    if (uVar13 == 0) {
LAB_00d4c934:
      if (piVar46 == piVar50 + (ulong)uVar13 * 0xc) goto LAB_00d4c99c;
      uVar13 = piVar46[6];
      if (uVar13 != 0) {
        lVar51 = 0;
        do {
          pAVar22 = (ArmatureData *)
                    (**(code **)(*(long *)param_1 + 0x20))
                              (CONCAT44(in_register_00005004,param_2),param_1,
                               *(long *)(piVar46 + 8) + lVar51);
          DragonBonesData::addArmature(this,pAVar22);
          lVar51 = lVar51 + 0x18;
        } while ((ulong)uVar13 * 0x18 - lVar51 != 0);
      }
      lVar51 = *(long *)(this + 0xa8);
    }
    else {
      uVar48 = (long)pcVar26 - (long)DataParser::ARMATURE;
      lVar51 = (ulong)uVar13 * 0x30;
      do {
        iVar21 = *piVar46;
        if ((*(ushort *)((long)piVar46 + 0x16) & 0x1000) != 0) {
          iVar21 = 0x15 - *(char *)((long)piVar46 + 0x15);
        }
        if (iVar21 == (int)uVar48) {
          piVar49 = *(int **)(piVar46 + 2);
          if ((*(ushort *)((long)piVar46 + 0x16) & 0x1000) != 0) {
            piVar49 = piVar46;
          }
          if ((piVar49 == (int *)puVar19) ||
             (iVar21 = memcmp(puVar19,piVar49,uVar48 & 0xffffffff), iVar21 == 0)) goto LAB_00d4c934;
        }
        lVar51 = lVar51 + -0x30;
        piVar46 = piVar46 + 0xc;
      } while (lVar51 != 0);
LAB_00d4c99c:
      rapidjson::
      GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
      operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
      ::buffer = 0;
      DAT_01d38c18 = 0;
      DAT_01d38c20 = 0;
      lVar51 = *(long *)(this + 0xa8);
    }
    if (lVar51 == 0) {
      puVar36 = *(undefined2 **)(param_1 + 0x110);
      dVar53 = fmod((double)(ulong)((long)puVar36 - *(long *)(param_1 + 0x108) >> 1),2.0);
      if (dVar53 != 0.0) {
        local_c8 = local_c8 & 0xffffffffffff0000;
        if (puVar36 < *(undefined2 **)(param_1 + 0x118)) {
          *puVar36 = 0;
          *(undefined2 **)(param_1 + 0x110) = puVar36 + 1;
        }
        else {
          std::__ndk1::vector<short,std::__ndk1::allocator<short>>::__push_back_slow_path<short>
                    ((vector<short,std::__ndk1::allocator<short>> *)(param_1 + 0x108),
                     (short *)&local_c8);
        }
      }
      puVar36 = *(undefined2 **)(param_1 + 0x140);
      dVar53 = fmod((double)(ulong)((long)puVar36 - *(long *)(param_1 + 0x138) >> 1),2.0);
      if (dVar53 != 0.0) {
        local_c8 = local_c8 & 0xffffffffffff0000;
        if (puVar36 < *(undefined2 **)(param_1 + 0x148)) {
          *puVar36 = 0;
          *(undefined2 **)(param_1 + 0x140) = puVar36 + 1;
        }
        else {
          std::__ndk1::vector<short,std::__ndk1::allocator<short>>::__push_back_slow_path<short>
                    ((vector<short,std::__ndk1::allocator<short>> *)(param_1 + 0x138),
                     (short *)&local_c8);
        }
      }
      puVar36 = *(undefined2 **)(param_1 + 0x170);
      dVar53 = fmod((double)(ulong)((long)puVar36 - *(long *)(param_1 + 0x168) >> 1),2.0);
      if (dVar53 != 0.0) {
        local_c8 = local_c8 & 0xffffffffffff0000;
        if (puVar36 < *(undefined2 **)(param_1 + 0x178)) {
          *puVar36 = 0;
          *(undefined2 **)(param_1 + 0x170) = puVar36 + 1;
        }
        else {
          std::__ndk1::vector<short,std::__ndk1::allocator<short>>::__push_back_slow_path<short>
                    ((vector<short,std::__ndk1::allocator<short>> *)(param_1 + 0x168),
                     (short *)&local_c8);
        }
      }
      uVar48 = *(ulong *)(param_1 + 0x180);
      puVar36 = *(undefined2 **)(param_1 + 0x188);
      lVar51 = (long)puVar36 - uVar48;
      uVar45 = lVar51 >> 1;
      dVar53 = fmod((double)uVar45,2.0);
      if (dVar53 != 0.0) {
        local_c8 = local_c8 & 0xffffffffffff0000;
        if (puVar36 < *(undefined2 **)(param_1 + 400)) {
          puVar42 = puVar36 + 1;
          *puVar36 = 0;
          *(undefined2 **)(param_1 + 0x188) = puVar42;
        }
        else {
          std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::
          __push_back_slow_path<unsigned_short>
                    ((vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *)
                     (param_1 + 0x180),(ushort *)&local_c8);
          uVar48 = *(ulong *)(param_1 + 0x180);
          puVar42 = *(undefined2 **)(param_1 + 0x188);
        }
        lVar51 = (long)puVar42 - uVar48;
        uVar45 = lVar51 >> 1;
      }
      pvVar4 = *(void **)(param_1 + 0x108);
      lVar27 = *(long *)(param_1 + 0x110);
      uVar5 = *(ulong *)(param_1 + 0x120);
      lVar9 = *(long *)(param_1 + 0x128);
      uVar6 = *(ulong *)(param_1 + 0x138);
      lVar10 = *(long *)(param_1 + 0x140);
      uVar7 = *(ulong *)(param_1 + 0x150);
      lVar11 = *(long *)(param_1 + 0x158);
      uVar8 = *(ulong *)(param_1 + 0x168);
      lVar12 = *(long *)(param_1 + 0x170);
      lVar43 = lVar27 - (long)pvVar4;
      lVar44 = lVar9 - uVar5;
      lVar39 = lVar10 - uVar6;
      lVar30 = lVar11 - uVar7;
      lVar28 = lVar12 - uVar8;
      pvVar23 = operator_new__(lVar44 + lVar43 + lVar39 + lVar30 + lVar28 + lVar51);
      uVar1 = (long)pvVar23 + lVar43;
      if (lVar43 != 0) {
        uVar29 = lVar43 >> 1;
        uVar3 = uVar29;
        if (uVar29 < 2) {
          uVar3 = 1;
        }
        if (uVar3 < 0x10) {
LAB_00d4cb80:
          uVar31 = 0;
        }
        else {
          uVar31 = uVar29;
          if (uVar29 < 2) {
            uVar31 = 1;
          }
          if ((pvVar23 < (void *)((long)pvVar4 + uVar31 * 2)) &&
             (pvVar4 < (void *)((long)pvVar23 + uVar31 * 2))) goto LAB_00d4cb80;
          uVar31 = uVar3 & 0xfffffffffffffff0;
          puVar35 = (undefined8 *)((long)pvVar4 + 0x10);
          puVar38 = (undefined8 *)((long)pvVar23 + 0x10);
          uVar33 = uVar31;
          do {
            puVar16 = puVar35 + -1;
            uVar54 = puVar35[-2];
            uVar56 = puVar35[1];
            uVar55 = *puVar35;
            puVar35 = puVar35 + 4;
            uVar33 = uVar33 - 0x10;
            puVar38[-1] = *puVar16;
            puVar38[-2] = uVar54;
            puVar38[1] = uVar56;
            *puVar38 = uVar55;
            puVar38 = puVar38 + 4;
          } while (uVar33 != 0);
          if (uVar3 == uVar31) goto LAB_00d4cb9c;
        }
        do {
          lVar43 = uVar31 * 2;
          uVar31 = uVar31 + 1;
          *(undefined2 *)((long)pvVar23 + lVar43) = *(undefined2 *)((long)pvVar4 + lVar43);
        } while (uVar31 < uVar29);
      }
LAB_00d4cb9c:
      uVar3 = uVar1 + lVar44;
      if (lVar44 != 0) {
        uVar31 = lVar44 >> 2;
        uVar29 = uVar31;
        if (uVar31 < 2) {
          uVar29 = 1;
        }
        if (uVar29 < 8) {
LAB_00d4cbec:
          uVar33 = 0;
        }
        else {
          uVar33 = uVar31;
          if (uVar31 < 2) {
            uVar33 = 1;
          }
          if ((uVar1 < uVar5 + uVar33 * 4) &&
             (uVar5 < (long)pvVar23 + ((lVar27 + uVar33 * 4) - (long)pvVar4))) goto LAB_00d4cbec;
          uVar33 = uVar29 & 0xfffffffffffffff8;
          puVar35 = (undefined8 *)(uVar5 + 0x10);
          puVar38 = (undefined8 *)((long)pvVar23 + ((lVar27 + 0x10) - (long)pvVar4));
          uVar34 = uVar33;
          do {
            puVar16 = puVar35 + -1;
            uVar54 = puVar35[-2];
            uVar56 = puVar35[1];
            uVar55 = *puVar35;
            puVar35 = puVar35 + 4;
            uVar34 = uVar34 - 8;
            puVar38[-1] = *puVar16;
            puVar38[-2] = uVar54;
            puVar38[1] = uVar56;
            *puVar38 = uVar55;
            puVar38 = puVar38 + 4;
          } while (uVar34 != 0);
          if (uVar29 == uVar33) goto LAB_00d4cc08;
        }
        do {
          lVar43 = uVar33 * 4;
          uVar33 = uVar33 + 1;
          *(undefined4 *)(uVar1 + lVar43) = *(undefined4 *)(uVar5 + lVar43);
        } while (uVar33 < uVar31);
      }
LAB_00d4cc08:
      uVar29 = uVar3 + lVar39;
      if (lVar39 != 0) {
        uVar33 = lVar39 >> 1;
        uVar31 = uVar33;
        if (uVar33 < 2) {
          uVar31 = 1;
        }
        if (uVar31 < 0x10) {
LAB_00d4cc60:
          uVar34 = 0;
        }
        else {
          uVar34 = uVar33;
          if (uVar33 < 2) {
            uVar34 = 1;
          }
          if ((uVar3 < uVar6 + uVar34 * 2) &&
             (uVar6 < (long)pvVar23 + (((lVar9 + lVar27 + uVar34 * 2) - uVar5) - (long)pvVar4)))
          goto LAB_00d4cc60;
          uVar34 = uVar31 & 0xfffffffffffffff0;
          puVar35 = (undefined8 *)(uVar6 + 0x10);
          puVar38 = (undefined8 *)
                    ((long)pvVar23 + (((lVar9 + lVar27 + 0x10) - uVar5) - (long)pvVar4));
          uVar37 = uVar34;
          do {
            puVar16 = puVar35 + -1;
            uVar54 = puVar35[-2];
            uVar56 = puVar35[1];
            uVar55 = *puVar35;
            uVar37 = uVar37 - 0x10;
            puVar35 = puVar35 + 4;
            puVar38[-1] = *puVar16;
            puVar38[-2] = uVar54;
            puVar38[1] = uVar56;
            *puVar38 = uVar55;
            puVar38 = puVar38 + 4;
          } while (uVar37 != 0);
          if (uVar31 == uVar34) goto LAB_00d4cc8c;
        }
        puVar36 = (undefined2 *)
                  ((long)pvVar23 + (((lVar9 + lVar27 + uVar34 * 2) - uVar5) - (long)pvVar4));
        do {
          lVar39 = uVar34 * 2;
          uVar34 = uVar34 + 1;
          *puVar36 = *(undefined2 *)(uVar6 + lVar39);
          puVar36 = puVar36 + 1;
        } while (uVar34 < uVar33);
      }
LAB_00d4cc8c:
      uVar31 = uVar29 + lVar30;
      if (lVar30 != 0) {
        uVar34 = lVar30 >> 2;
        uVar33 = uVar34;
        if (uVar34 < 2) {
          uVar33 = 1;
        }
        if (uVar33 < 8) {
LAB_00d4cce8:
          uVar37 = 0;
        }
        else {
          uVar37 = uVar34;
          if (uVar34 < 2) {
            uVar37 = 1;
          }
          lVar30 = lVar10 + lVar9 + lVar27;
          if ((uVar29 < uVar7 + uVar37 * 4) &&
             (uVar7 < (long)pvVar23 + ((((lVar30 + uVar37 * 4) - uVar6) - uVar5) - (long)pvVar4)))
          goto LAB_00d4cce8;
          uVar37 = uVar33 & 0xfffffffffffffff8;
          puVar35 = (undefined8 *)(uVar7 + 0x10);
          puVar38 = (undefined8 *)
                    ((long)pvVar23 + ((((lVar30 + 0x10) - uVar6) - uVar5) - (long)pvVar4));
          uVar24 = uVar37;
          do {
            puVar16 = puVar35 + -1;
            uVar54 = puVar35[-2];
            uVar56 = puVar35[1];
            uVar55 = *puVar35;
            uVar24 = uVar24 - 8;
            puVar35 = puVar35 + 4;
            puVar38[-1] = *puVar16;
            puVar38[-2] = uVar54;
            puVar38[1] = uVar56;
            *puVar38 = uVar55;
            puVar38 = puVar38 + 4;
          } while (uVar24 != 0);
          if (uVar33 == uVar37) goto LAB_00d4cd1c;
        }
        puVar40 = (undefined4 *)
                  ((long)pvVar23 +
                  ((((lVar10 + lVar9 + lVar27 + uVar37 * 4) - uVar6) - uVar5) - (long)pvVar4));
        do {
          lVar30 = uVar37 * 4;
          uVar37 = uVar37 + 1;
          *puVar40 = *(undefined4 *)(uVar7 + lVar30);
          puVar40 = puVar40 + 1;
        } while (uVar37 < uVar34);
      }
LAB_00d4cd1c:
      if (lVar28 != 0) {
        uVar34 = lVar28 >> 1;
        uVar33 = uVar34;
        if (uVar34 < 2) {
          uVar33 = 1;
        }
        if (uVar33 < 0x10) {
LAB_00d4cd80:
          uVar37 = 0;
        }
        else {
          uVar37 = uVar34;
          if (uVar34 < 2) {
            uVar37 = 1;
          }
          lVar30 = lVar11 + lVar10 + lVar9 + lVar27;
          if ((uVar31 < uVar8 + uVar37 * 2) &&
             (uVar8 < (long)pvVar23 +
                      (((((lVar30 + uVar37 * 2) - uVar7) - uVar6) - uVar5) - (long)pvVar4)))
          goto LAB_00d4cd80;
          uVar37 = uVar33 & 0xfffffffffffffff0;
          puVar35 = (undefined8 *)(uVar8 + 0x10);
          puVar38 = (undefined8 *)
                    ((long)pvVar23 + (((((lVar30 + 0x10) - uVar7) - uVar6) - uVar5) - (long)pvVar4))
          ;
          uVar24 = uVar37;
          do {
            puVar16 = puVar35 + -1;
            uVar54 = puVar35[-2];
            uVar56 = puVar35[1];
            uVar55 = *puVar35;
            uVar24 = uVar24 - 0x10;
            puVar35 = puVar35 + 4;
            puVar38[-1] = *puVar16;
            puVar38[-2] = uVar54;
            puVar38[1] = uVar56;
            *puVar38 = uVar55;
            puVar38 = puVar38 + 4;
          } while (uVar24 != 0);
          if (uVar33 == uVar37) goto LAB_00d4cdbc;
        }
        puVar36 = (undefined2 *)
                  ((long)pvVar23 +
                  (((((lVar11 + lVar10 + lVar9 + lVar27 + uVar37 * 2) - uVar7) - uVar6) - uVar5) -
                  (long)pvVar4));
        do {
          lVar30 = uVar37 * 2;
          uVar37 = uVar37 + 1;
          *puVar36 = *(undefined2 *)(uVar8 + lVar30);
          puVar36 = puVar36 + 1;
        } while (uVar37 < uVar34);
      }
LAB_00d4cdbc:
      if (lVar51 != 0) {
        uVar33 = uVar45;
        if (uVar45 < 2) {
          uVar33 = 1;
        }
        if (uVar33 < 0x10) {
LAB_00d4ce24:
          uVar34 = 0;
        }
        else {
          uVar34 = uVar45;
          if (uVar45 < 2) {
            uVar34 = 1;
          }
          lVar51 = lVar12 + lVar11 + lVar10 + lVar9 + lVar27;
          if ((uVar31 + lVar28 < uVar48 + uVar34 * 2) &&
             (uVar48 < (long)pvVar23 +
                       ((((((lVar51 + uVar34 * 2) - uVar8) - uVar7) - uVar6) - uVar5) - (long)pvVar4
                       ))) goto LAB_00d4ce24;
          uVar34 = uVar33 & 0xfffffffffffffff0;
          puVar35 = (undefined8 *)(uVar48 + 0x10);
          puVar38 = (undefined8 *)
                    ((long)pvVar23 +
                    ((((((lVar51 + 0x10) - uVar8) - uVar7) - uVar6) - uVar5) - (long)pvVar4));
          uVar37 = uVar34;
          do {
            puVar16 = puVar35 + -1;
            uVar54 = puVar35[-2];
            uVar56 = puVar35[1];
            uVar55 = *puVar35;
            uVar37 = uVar37 - 0x10;
            puVar35 = puVar35 + 4;
            puVar38[-1] = *puVar16;
            puVar38[-2] = uVar54;
            puVar38[1] = uVar56;
            *puVar38 = uVar55;
            puVar38 = puVar38 + 4;
          } while (uVar37 != 0);
          if (uVar33 == uVar34) goto LAB_00d4ce6c;
        }
        puVar36 = (undefined2 *)
                  ((long)pvVar23 +
                  ((((((lVar12 + lVar11 + lVar10 + lVar9 + lVar27 + uVar34 * 2) - uVar8) - uVar7) -
                    uVar6) - uVar5) - (long)pvVar4));
        do {
          lVar51 = uVar34 * 2;
          uVar34 = uVar34 + 1;
          *puVar36 = *(undefined2 *)(uVar48 + lVar51);
          puVar36 = puVar36 + 1;
        } while (uVar34 < uVar45);
      }
LAB_00d4ce6c:
      *(void **)(this + 0xa8) = pvVar23;
      *(void **)(this + 0xb0) = pvVar23;
      *(ulong *)(this + 0xb8) = uVar1;
      *(ulong *)(this + 0xc0) = uVar3;
      *(ulong *)(this + 200) = uVar29;
      *(ulong *)(this + 0xd0) = uVar31;
      *(ulong *)(this + 0xd8) = uVar31 + lVar28;
    }
    *(undefined4 *)(param_1 + 0x70) = 0xffffffff;
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  puVar19 = DataParser::TEXTURE_ATLAS;
  pcVar47 = DataParser::TEXTURE_ATLAS + -1;
  pcVar26 = pcVar47;
  do {
    pcVar26 = pcVar26 + 1;
  } while (*pcVar26 != '\0');
  piVar46 = *(int **)(in_x1 + 8);
  uVar13 = *(uint *)in_x1;
  uVar48 = (ulong)uVar13;
  piVar49 = piVar46 + uVar48 * 0xc;
  piVar50 = piVar46;
  if (uVar13 != 0) {
    uVar45 = (long)pcVar26 - (long)DataParser::TEXTURE_ATLAS;
    lVar51 = uVar48 * 0x30;
    piVar52 = piVar46;
    do {
      iVar21 = *piVar52;
      if ((*(ushort *)((long)piVar52 + 0x16) & 0x1000) != 0) {
        iVar21 = 0x15 - *(char *)((long)piVar52 + 0x15);
      }
      if (iVar21 == (int)uVar45) {
        __s2 = *(int **)(piVar52 + 2);
        if ((*(ushort *)((long)piVar52 + 0x16) & 0x1000) != 0) {
          __s2 = piVar52;
        }
        piVar50 = piVar52;
        if ((__s2 == (int *)puVar19) ||
           (iVar21 = memcmp(puVar19,__s2,uVar45 & 0xffffffff), iVar21 == 0)) break;
      }
      lVar51 = lVar51 + -0x30;
      piVar52 = piVar52 + 0xc;
      piVar50 = piVar49;
    } while (lVar51 != 0);
  }
  if (piVar49 == piVar50) goto joined_r0x00d4c72c;
  do {
    pcVar47 = pcVar47 + 1;
  } while (*pcVar47 != '\0');
  if (uVar13 == 0) {
LAB_00d4cfa8:
    if (piVar46 == piVar49) goto LAB_00d4cfb8;
    piVar46 = piVar46 + 6;
  }
  else {
    lVar51 = uVar48 * 0x30;
    do {
      iVar21 = *piVar46;
      if ((*(ushort *)((long)piVar46 + 0x16) & 0x1000) != 0) {
        iVar21 = 0x15 - *(char *)((long)piVar46 + 0x15);
      }
      if (iVar21 == (int)((long)pcVar47 - (long)puVar19)) {
        piVar50 = *(int **)(piVar46 + 2);
        if ((*(ushort *)((long)piVar46 + 0x16) & 0x1000) != 0) {
          piVar50 = piVar46;
        }
        if ((piVar50 == (int *)puVar19) ||
           (iVar21 = memcmp(puVar19,piVar50,(long)pcVar47 - (long)puVar19 & 0xffffffff), iVar21 == 0
           )) goto LAB_00d4cfa8;
      }
      lVar51 = lVar51 + -0x30;
      piVar46 = piVar46 + 0xc;
    } while (lVar51 != 0);
LAB_00d4cfb8:
    piVar46 = (int *)&rapidjson::
                      GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                      ::
                      operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
                      ::buffer;
    rapidjson::
    GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
    operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
    ::buffer = 0;
    DAT_01d38c18 = 0;
    DAT_01d38c20 = 0;
  }
  *(int **)(param_1 + 0x68) = piVar46;
joined_r0x00d4c72c:
  if ((local_b0 & 1) != 0) {
    operator_delete(local_a0);
  }
  if (((byte)local_98[0] & 1) != 0) {
    operator_delete(local_88);
  }
  if (*(long *)(lVar15 + 0x28) == local_80) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

