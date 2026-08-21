
/* dragonBones::JSONDataParser::_parseDragonBonesData(rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > const&, float) */

DragonBonesData *
dragonBones::JSONDataParser::_parseDragonBonesData(GenericValue *param_1,float param_2)

{
  size_t sVar1;
  int *__s2;
  ulong uVar2;
  void *pvVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  byte bVar9;
  long lVar10;
  undefined8 *puVar11;
  byte *pbVar12;
  byte *pbVar13;
  undefined *puVar14;
  int iVar15;
  int iVar16;
  DragonBonesData *this;
  ArmatureData *pAVar17;
  void *pvVar18;
  void *pvVar19;
  JSONDataParser *in_x1;
  ulong uVar20;
  basic_string *in_x3;
  size_t sVar21;
  char *pcVar22;
  ulong uVar23;
  long lVar24;
  byte *pbVar25;
  long lVar26;
  ulong uVar27;
  long lVar28;
  ulong uVar29;
  byte *pbVar30;
  long lVar31;
  long lVar32;
  ulong uVar33;
  ulong uVar34;
  undefined8 *puVar35;
  long lVar36;
  undefined2 *puVar37;
  ulong uVar38;
  undefined8 *puVar39;
  undefined4 *puVar40;
  DragonBonesData *pDVar41;
  long lVar42;
  long lVar43;
  size_t sVar44;
  ulong uVar45;
  int *piVar46;
  undefined2 *puVar47;
  char *pcVar48;
  ulong uVar49;
  int *piVar50;
  int *piVar51;
  ulong uVar52;
  long lVar53;
  int *piVar54;
  undefined4 in_register_00005004;
  double dVar55;
  undefined8 uVar56;
  undefined8 uVar57;
  undefined8 uVar58;
  ulong uStack_e0;
  undefined8 uStack_d8;
  void *pvStack_d0;
  ulong local_c8;
  undefined8 local_c0;
  void *pvStack_b8;
  ulong local_b0;
  size_t local_a8;
  byte *local_a0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> abStack_98 [8];
  ulong uStack_90;
  byte *pbStack_88;
  long local_80;
  
  lVar10 = tpidr_el0;
  local_80 = *(long *)(lVar10 + 0x28);
  local_a8 = 0;
  local_a0 = (byte *)0x0;
  local_b0 = 0;
  _getString(in_x1,(GenericValue *)DataParser::VERSION,(char *)&local_b0,in_x3);
  if ((local_b0 & 1) != 0) {
    operator_delete(local_a0);
  }
  local_c0 = 0;
  pvStack_b8 = (void *)0x0;
  local_c8 = 0;
  _getString(in_x1,(GenericValue *)DataParser::COMPATIBLE_VERSION,(char *)&local_c8,in_x3);
  if ((local_c8 & 1) != 0) {
    operator_delete(pvStack_b8);
  }
  lVar53 = DataParser::DATA_VERSIONS;
  if (DAT_01787d08 - DataParser::DATA_VERSIONS != 0) {
    uVar45 = (DAT_01787d08 - DataParser::DATA_VERSIONS >> 3) * -0x5555555555555555;
    uVar49 = 0;
    sVar44 = (ulong)((byte)abStack_98[0] >> 1);
    pbVar12 = (byte *)((ulong)abStack_98 | 1);
    if (((byte)abStack_98[0] & 1) != 0) {
      sVar44 = uStack_90;
      pbVar12 = pbStack_88;
    }
    do {
      pbVar25 = (byte *)(lVar53 + uVar49 * 0x18);
      bVar9 = *pbVar25;
      sVar21 = (size_t)(bVar9 >> 1);
      sVar1 = sVar21;
      if ((bVar9 & 1) != 0) {
        sVar1 = *(size_t *)(pbVar25 + 8);
      }
      if (sVar1 == sVar44) {
        pbVar30 = *(byte **)(lVar53 + uVar49 * 0x18 + 0x10);
        if ((bVar9 & 1) == 0) {
          pbVar30 = pbVar25 + 1;
        }
        pbVar13 = pbVar12;
        sVar1 = sVar44;
        if ((bVar9 & 1) == 0) {
          while( true ) {
            if (sVar1 == 0) goto LAB_00d9ad38;
            pbVar25 = pbVar25 + 1;
            if (*pbVar25 != *pbVar13) break;
            sVar21 = sVar21 - 1;
            pbVar13 = pbVar13 + 1;
            sVar1 = sVar21;
          }
        }
        else if ((sVar44 == 0) || (iVar16 = memcmp(pbVar30,pbVar12,sVar44), iVar16 == 0)) {
LAB_00d9ad38:
          if (-1 < (int)uVar49) goto LAB_00d9adf0;
          break;
        }
      }
      uVar49 = uVar49 + 1;
    } while (uVar49 < uVar45);
    uVar49 = 0;
    sVar44 = local_b0 >> 1 & 0x7f;
    pbVar12 = (byte *)((ulong)&local_b0 | 1);
    if ((local_b0 & 1) != 0) {
      sVar44 = local_a8;
      pbVar12 = local_a0;
    }
    do {
      pbVar25 = (byte *)(lVar53 + uVar49 * 0x18);
      bVar9 = *pbVar25;
      sVar21 = (size_t)(bVar9 >> 1);
      sVar1 = sVar21;
      if ((bVar9 & 1) != 0) {
        sVar1 = *(size_t *)(pbVar25 + 8);
      }
      if (sVar1 == sVar44) {
        pbVar30 = *(byte **)(lVar53 + uVar49 * 0x18 + 0x10);
        if ((bVar9 & 1) == 0) {
          pbVar30 = pbVar25 + 1;
        }
        pbVar13 = pbVar12;
        sVar1 = sVar44;
        if ((bVar9 & 1) == 0) {
          while( true ) {
            if (sVar1 == 0) goto LAB_00d9adec;
            pbVar25 = pbVar25 + 1;
            if (*pbVar25 != *pbVar13) break;
            sVar21 = sVar21 - 1;
            pbVar13 = pbVar13 + 1;
            sVar1 = sVar21;
          }
        }
        else if ((sVar44 == 0) || (iVar16 = memcmp(pbVar30,pbVar12,sVar44), iVar16 == 0)) {
LAB_00d9adec:
          if (-1 < (int)uVar49) goto LAB_00d9adf0;
          break;
        }
      }
      uVar49 = uVar49 + 1;
    } while (uVar49 < uVar45);
  }
  this = (DragonBonesData *)0x0;
  goto joined_r0x00d9b8dc;
LAB_00d9adf0:
  this = BaseObject::borrowObject<dragonBones::DragonBonesData>();
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (this + 0x18) != abStack_98) {
    uVar49 = (ulong)((byte)abStack_98[0] >> 1);
    pbVar12 = (byte *)((ulong)abStack_98 | 1);
    if (((byte)abStack_98[0] & 1) != 0) {
      uVar49 = uStack_90;
      pbVar12 = pbStack_88;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x18),(char *)pbVar12,uVar49);
  }
  uStack_d8 = 0;
  pvStack_d0 = (void *)0x0;
  uStack_e0 = 0;
  _getString(in_x1,(GenericValue *)DataParser::NAME,(char *)&uStack_e0,in_x3);
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
  *(void **)(this + 0x40) = pvStack_b8;
  *(undefined8 *)(this + 0x38) = local_c0;
  *(ulong *)pDVar41 = local_c8;
  local_c0 = 0;
  pvStack_b8 = (void *)0x0;
  local_c8 = 0;
  if ((uStack_e0 & 1) != 0) {
    operator_delete(pvStack_d0);
  }
  iVar15 = _getNumber((GenericValue *)in_x1,DataParser::FRAME_RATE,0x18);
  iVar16 = 0x18;
  if (iVar15 != 0) {
    iVar16 = iVar15;
  }
  *(int *)(this + 0x10) = iVar16;
  puVar14 = DataParser::ARMATURE;
  pcVar22 = DataParser::ARMATURE + -1;
  do {
    pcVar22 = pcVar22 + 1;
  } while (*pcVar22 != '\0');
  piVar46 = *(int **)(in_x1 + 8);
  uVar8 = *(uint *)in_x1;
  piVar50 = piVar46 + (ulong)uVar8 * 0xc;
  piVar51 = piVar46;
  if (uVar8 != 0) {
    uVar49 = (long)pcVar22 - (long)DataParser::ARMATURE;
    lVar53 = (ulong)uVar8 * 0x30;
    do {
      iVar16 = *piVar46;
      if ((*(ushort *)((long)piVar46 + 0x16) & 0x1000) != 0) {
        iVar16 = 0x15 - *(char *)((long)piVar46 + 0x15);
      }
      if (iVar16 == (int)uVar49) {
        piVar54 = *(int **)(piVar46 + 2);
        if ((*(ushort *)((long)piVar46 + 0x16) & 0x1000) != 0) {
          piVar54 = piVar46;
        }
        piVar51 = piVar46;
        if ((piVar54 == (int *)puVar14) ||
           (iVar16 = memcmp(puVar14,piVar54,uVar49 & 0xffffffff), iVar16 == 0)) break;
      }
      lVar53 = lVar53 + -0x30;
      piVar46 = piVar46 + 0xc;
      piVar51 = piVar50;
    } while (lVar53 != 0);
  }
  if (piVar50 != piVar51) {
    *(DragonBonesData **)(param_1 + 0x28) = this;
    (**(code **)(*(long *)param_1 + 0x108))();
    puVar14 = DataParser::ARMATURE;
    pcVar22 = DataParser::ARMATURE + -1;
    do {
      pcVar22 = pcVar22 + 1;
    } while (*pcVar22 != '\0');
    uVar8 = *(uint *)in_x1;
    piVar51 = *(int **)(in_x1 + 8);
    piVar46 = piVar51;
    if (uVar8 == 0) {
LAB_00d9b084:
      if (piVar46 == piVar51 + (ulong)uVar8 * 0xc) goto LAB_00d9b0ec;
      uVar8 = piVar46[6];
      if (uVar8 != 0) {
        lVar53 = 0;
        do {
          pAVar17 = (ArmatureData *)
                    (**(code **)(*(long *)param_1 + 0x20))
                              (CONCAT44(in_register_00005004,param_2),param_1,
                               *(long *)(piVar46 + 8) + lVar53);
          DragonBonesData::addArmature(this,pAVar17);
          lVar53 = lVar53 + 0x18;
        } while ((ulong)uVar8 * 0x18 - lVar53 != 0);
      }
      lVar53 = *(long *)(this + 0xa8);
    }
    else {
      uVar49 = (long)pcVar22 - (long)DataParser::ARMATURE;
      lVar53 = (ulong)uVar8 * 0x30;
      do {
        iVar16 = *piVar46;
        if ((*(ushort *)((long)piVar46 + 0x16) & 0x1000) != 0) {
          iVar16 = 0x15 - *(char *)((long)piVar46 + 0x15);
        }
        if (iVar16 == (int)uVar49) {
          piVar50 = *(int **)(piVar46 + 2);
          if ((*(ushort *)((long)piVar46 + 0x16) & 0x1000) != 0) {
            piVar50 = piVar46;
          }
          if ((piVar50 == (int *)puVar14) ||
             (iVar16 = memcmp(puVar14,piVar50,uVar49 & 0xffffffff), iVar16 == 0)) goto LAB_00d9b084;
        }
        lVar53 = lVar53 + -0x30;
        piVar46 = piVar46 + 0xc;
      } while (lVar53 != 0);
LAB_00d9b0ec:
      rapidjson::
      GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
      operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
      ::buffer = 0;
      DAT_01785a58 = 0;
      DAT_01785a60 = 0;
      lVar53 = *(long *)(this + 0xa8);
    }
    if (lVar53 == 0) {
      pvVar3 = *(void **)(param_1 + 0x108);
      puVar37 = *(undefined2 **)(param_1 + 0x110);
      sVar44 = (long)puVar37 - (long)pvVar3;
      uVar49 = (long)sVar44 >> 1;
      dVar55 = fmod((double)uVar49,2.0);
      if (dVar55 != 0.0) {
        if (puVar37 < *(undefined2 **)(param_1 + 0x118)) {
          *puVar37 = 0;
          *(undefined2 **)(param_1 + 0x110) = puVar37 + 1;
        }
        else {
          uVar45 = uVar49 + 1;
          if ((long)uVar45 < 0) goto LAB_00d9ba6c;
          uVar23 = (long)*(undefined2 **)(param_1 + 0x118) - (long)pvVar3;
          if (uVar45 <= uVar23) {
            uVar45 = uVar23;
          }
          if (0x3ffffffffffffffe < (ulong)((long)uVar23 >> 1)) {
            uVar45 = 0x7fffffffffffffff;
          }
          if (uVar45 == 0) {
            pvVar18 = (void *)0x0;
          }
          else {
            if ((long)uVar45 < 0) goto LAB_00d9ba6c;
            pvVar18 = operator_new(uVar45 << 1);
          }
          puVar37 = (undefined2 *)((long)pvVar18 + uVar49 * 2);
          *puVar37 = 0;
          if (0 < (long)sVar44) {
            memcpy(pvVar18,pvVar3,sVar44);
          }
          *(void **)(param_1 + 0x108) = pvVar18;
          *(undefined2 **)(param_1 + 0x110) = puVar37 + 1;
          *(void **)(param_1 + 0x118) = (void *)((long)pvVar18 + uVar45 * 2);
          if (pvVar3 != (void *)0x0) {
            operator_delete(pvVar3);
          }
        }
      }
      pvVar3 = *(void **)(param_1 + 0x138);
      puVar37 = *(undefined2 **)(param_1 + 0x140);
      sVar44 = (long)puVar37 - (long)pvVar3;
      uVar49 = (long)sVar44 >> 1;
      dVar55 = fmod((double)uVar49,2.0);
      if (dVar55 != 0.0) {
        if (puVar37 < *(undefined2 **)(param_1 + 0x148)) {
          *puVar37 = 0;
          *(undefined2 **)(param_1 + 0x140) = puVar37 + 1;
        }
        else {
          uVar45 = uVar49 + 1;
          if ((long)uVar45 < 0) goto LAB_00d9ba6c;
          uVar23 = (long)*(undefined2 **)(param_1 + 0x148) - (long)pvVar3;
          if (uVar45 <= uVar23) {
            uVar45 = uVar23;
          }
          if (0x3ffffffffffffffe < (ulong)((long)uVar23 >> 1)) {
            uVar45 = 0x7fffffffffffffff;
          }
          if (uVar45 == 0) {
            pvVar18 = (void *)0x0;
          }
          else {
            if ((long)uVar45 < 0) goto LAB_00d9ba6c;
            pvVar18 = operator_new(uVar45 << 1);
          }
          puVar37 = (undefined2 *)((long)pvVar18 + uVar49 * 2);
          *puVar37 = 0;
          if (0 < (long)sVar44) {
            memcpy(pvVar18,pvVar3,sVar44);
          }
          *(void **)(param_1 + 0x138) = pvVar18;
          *(undefined2 **)(param_1 + 0x140) = puVar37 + 1;
          *(void **)(param_1 + 0x148) = (void *)((long)pvVar18 + uVar45 * 2);
          if (pvVar3 != (void *)0x0) {
            operator_delete(pvVar3);
          }
        }
      }
      pvVar3 = *(void **)(param_1 + 0x168);
      puVar37 = *(undefined2 **)(param_1 + 0x170);
      sVar44 = (long)puVar37 - (long)pvVar3;
      uVar49 = (long)sVar44 >> 1;
      dVar55 = fmod((double)uVar49,2.0);
      if (dVar55 != 0.0) {
        if (puVar37 < *(undefined2 **)(param_1 + 0x178)) {
          *puVar37 = 0;
          *(undefined2 **)(param_1 + 0x170) = puVar37 + 1;
        }
        else {
          uVar45 = uVar49 + 1;
          if ((long)uVar45 < 0) goto LAB_00d9ba6c;
          uVar23 = (long)*(undefined2 **)(param_1 + 0x178) - (long)pvVar3;
          if (uVar45 <= uVar23) {
            uVar45 = uVar23;
          }
          if (0x3ffffffffffffffe < (ulong)((long)uVar23 >> 1)) {
            uVar45 = 0x7fffffffffffffff;
          }
          if (uVar45 == 0) {
            pvVar18 = (void *)0x0;
          }
          else {
            if ((long)uVar45 < 0) goto LAB_00d9ba6c;
            pvVar18 = operator_new(uVar45 << 1);
          }
          puVar37 = (undefined2 *)((long)pvVar18 + uVar49 * 2);
          *puVar37 = 0;
          if (0 < (long)sVar44) {
            memcpy(pvVar18,pvVar3,sVar44);
          }
          *(void **)(param_1 + 0x168) = pvVar18;
          *(undefined2 **)(param_1 + 0x170) = puVar37 + 1;
          *(void **)(param_1 + 0x178) = (void *)((long)pvVar18 + uVar45 * 2);
          if (pvVar3 != (void *)0x0) {
            operator_delete(pvVar3);
          }
        }
      }
      pvVar3 = *(void **)(param_1 + 0x180);
      puVar37 = *(undefined2 **)(param_1 + 0x188);
      sVar44 = (long)puVar37 - (long)pvVar3;
      uVar49 = (long)sVar44 >> 1;
      dVar55 = fmod((double)uVar49,2.0);
      pvVar18 = pvVar3;
      puVar47 = puVar37;
      if (dVar55 != 0.0) {
        if (puVar37 < *(undefined2 **)(param_1 + 400)) {
          puVar47 = puVar37 + 1;
          *puVar37 = 0;
          *(undefined2 **)(param_1 + 0x188) = puVar47;
        }
        else {
          uVar45 = uVar49 + 1;
          if ((long)uVar45 < 0) {
LAB_00d9ba6c:
                    /* WARNING: Subroutine does not return */
            abort();
          }
          uVar23 = (long)*(undefined2 **)(param_1 + 400) - (long)pvVar3;
          if (uVar45 <= uVar23) {
            uVar45 = uVar23;
          }
          if (0x3ffffffffffffffe < (ulong)((long)uVar23 >> 1)) {
            uVar45 = 0x7fffffffffffffff;
          }
          if (uVar45 == 0) {
            pvVar18 = (void *)0x0;
          }
          else {
            if ((long)uVar45 < 0) goto LAB_00d9ba6c;
            pvVar18 = operator_new(uVar45 << 1);
          }
          puVar37 = (undefined2 *)((long)pvVar18 + uVar49 * 2);
          puVar47 = puVar37 + 1;
          *puVar37 = 0;
          if (0 < (long)sVar44) {
            memcpy(pvVar18,pvVar3,sVar44);
          }
          *(void **)(param_1 + 0x180) = pvVar18;
          *(undefined2 **)(param_1 + 0x188) = puVar47;
          *(void **)(param_1 + 400) = (void *)((long)pvVar18 + uVar45 * 2);
          if (pvVar3 != (void *)0x0) {
            operator_delete(pvVar3);
            pvVar18 = *(void **)(param_1 + 0x180);
            puVar47 = *(undefined2 **)(param_1 + 0x188);
          }
        }
      }
      pvVar3 = *(void **)(param_1 + 0x108);
      lVar53 = *(long *)(param_1 + 0x110);
      uVar45 = *(ulong *)(param_1 + 0x120);
      lVar5 = *(long *)(param_1 + 0x128);
      lVar36 = *(long *)(param_1 + 0x158);
      uVar23 = *(ulong *)(param_1 + 0x168);
      lVar6 = *(long *)(param_1 + 0x170);
      uVar4 = *(ulong *)(param_1 + 0x138);
      lVar7 = *(long *)(param_1 + 0x140);
      uVar52 = *(ulong *)(param_1 + 0x150);
      lVar42 = lVar53 - (long)pvVar3;
      lVar43 = lVar5 - uVar45;
      lVar24 = lVar6 - uVar23;
      lVar28 = lVar7 - uVar4;
      lVar31 = (long)puVar47 - (long)pvVar18;
      lVar26 = lVar36 - uVar52;
      pvVar19 = operator_new__(lVar43 + lVar42 + lVar28 + lVar26 + lVar24 + lVar31);
      uVar49 = (long)pvVar19 + lVar42;
      if (lVar42 != 0) {
        uVar27 = lVar42 >> 1;
        uVar2 = uVar27;
        if (uVar27 < 2) {
          uVar2 = 1;
        }
        if (uVar2 < 0x10) {
LAB_00d9b478:
          uVar29 = 0;
        }
        else {
          uVar29 = uVar27;
          if (uVar27 < 2) {
            uVar29 = 1;
          }
          if ((pvVar19 < (void *)((long)pvVar3 + uVar29 * 2)) &&
             (pvVar3 < (void *)((long)pvVar19 + uVar29 * 2))) goto LAB_00d9b478;
          uVar29 = uVar2 & 0xfffffffffffffff0;
          puVar35 = (undefined8 *)((long)pvVar3 + 0x10);
          puVar39 = (undefined8 *)((long)pvVar19 + 0x10);
          uVar33 = uVar29;
          do {
            puVar11 = puVar35 + -1;
            uVar56 = puVar35[-2];
            uVar58 = puVar35[1];
            uVar57 = *puVar35;
            puVar35 = puVar35 + 4;
            uVar33 = uVar33 - 0x10;
            puVar39[-1] = *puVar11;
            puVar39[-2] = uVar56;
            puVar39[1] = uVar58;
            *puVar39 = uVar57;
            puVar39 = puVar39 + 4;
          } while (uVar33 != 0);
          if (uVar2 == uVar29) goto LAB_00d9b494;
        }
        do {
          lVar32 = uVar29 * 2;
          uVar29 = uVar29 + 1;
          *(undefined2 *)((long)pvVar19 + lVar32) = *(undefined2 *)((long)pvVar3 + lVar32);
        } while (uVar29 < uVar27);
      }
LAB_00d9b494:
      uVar2 = uVar49 + lVar43;
      if (lVar43 != 0) {
        uVar29 = lVar43 >> 2;
        uVar27 = uVar29;
        if (uVar29 < 2) {
          uVar27 = 1;
        }
        if (uVar27 < 8) {
LAB_00d9b4ec:
          uVar33 = 0;
        }
        else {
          uVar33 = uVar29;
          if (uVar29 < 2) {
            uVar33 = 1;
          }
          if ((uVar49 < uVar45 + uVar33 * 4) &&
             (uVar45 < (long)pvVar19 + ((lVar53 + uVar33 * 4) - (long)pvVar3))) goto LAB_00d9b4ec;
          uVar33 = uVar27 & 0xfffffffffffffff8;
          puVar35 = (undefined8 *)(uVar45 + 0x10);
          puVar39 = (undefined8 *)((long)pvVar19 + lVar42 + 0x10);
          uVar34 = uVar33;
          do {
            puVar11 = puVar35 + -1;
            uVar56 = puVar35[-2];
            uVar58 = puVar35[1];
            uVar57 = *puVar35;
            puVar35 = puVar35 + 4;
            uVar34 = uVar34 - 8;
            puVar39[-1] = *puVar11;
            puVar39[-2] = uVar56;
            puVar39[1] = uVar58;
            *puVar39 = uVar57;
            puVar39 = puVar39 + 4;
          } while (uVar34 != 0);
          if (uVar27 == uVar33) goto LAB_00d9b508;
        }
        do {
          lVar42 = uVar33 * 4;
          uVar33 = uVar33 + 1;
          *(undefined4 *)(uVar49 + lVar42) = *(undefined4 *)(uVar45 + lVar42);
        } while (uVar33 < uVar29);
      }
LAB_00d9b508:
      uVar27 = uVar2 + lVar28;
      if (lVar28 != 0) {
        uVar33 = lVar28 >> 1;
        uVar29 = uVar33;
        if (uVar33 < 2) {
          uVar29 = 1;
        }
        if (uVar29 < 0x10) {
LAB_00d9b55c:
          uVar34 = 0;
        }
        else {
          uVar34 = uVar33;
          if (uVar33 < 2) {
            uVar34 = 1;
          }
          if ((uVar2 < uVar4 + uVar34 * 2) &&
             (uVar4 < (long)pvVar19 + (((lVar5 + lVar53 + uVar34 * 2) - uVar45) - (long)pvVar3)))
          goto LAB_00d9b55c;
          uVar34 = uVar29 & 0xfffffffffffffff0;
          puVar35 = (undefined8 *)(uVar4 + 0x10);
          puVar39 = (undefined8 *)
                    ((long)pvVar19 + (((lVar5 + lVar53) - uVar45) - (long)pvVar3) + 0x10);
          uVar38 = uVar34;
          do {
            puVar11 = puVar35 + -1;
            uVar56 = puVar35[-2];
            uVar58 = puVar35[1];
            uVar57 = *puVar35;
            uVar38 = uVar38 - 0x10;
            puVar35 = puVar35 + 4;
            puVar39[-1] = *puVar11;
            puVar39[-2] = uVar56;
            puVar39[1] = uVar58;
            *puVar39 = uVar57;
            puVar39 = puVar39 + 4;
          } while (uVar38 != 0);
          if (uVar29 == uVar34) goto LAB_00d9b588;
        }
        puVar37 = (undefined2 *)
                  ((long)pvVar19 + (((lVar5 + lVar53 + uVar34 * 2) - uVar45) - (long)pvVar3));
        do {
          lVar28 = uVar34 * 2;
          uVar34 = uVar34 + 1;
          *puVar37 = *(undefined2 *)(uVar4 + lVar28);
          puVar37 = puVar37 + 1;
        } while (uVar34 < uVar33);
      }
LAB_00d9b588:
      uVar29 = uVar27 + lVar26;
      if (lVar26 != 0) {
        uVar34 = lVar26 >> 2;
        uVar33 = uVar34;
        if (uVar34 < 2) {
          uVar33 = 1;
        }
        if (uVar33 < 8) {
LAB_00d9b5e4:
          uVar38 = 0;
        }
        else {
          uVar38 = uVar34;
          if (uVar34 < 2) {
            uVar38 = 1;
          }
          lVar26 = lVar7 + lVar5 + lVar53;
          if ((uVar27 < uVar52 + uVar38 * 4) &&
             (uVar52 < (long)pvVar19 + ((((lVar26 + uVar38 * 4) - uVar4) - uVar45) - (long)pvVar3)))
          goto LAB_00d9b5e4;
          uVar38 = uVar33 & 0xfffffffffffffff8;
          puVar35 = (undefined8 *)(uVar52 + 0x10);
          puVar39 = (undefined8 *)
                    ((long)pvVar19 + (((lVar26 - uVar4) - uVar45) - (long)pvVar3) + 0x10);
          uVar20 = uVar38;
          do {
            puVar11 = puVar35 + -1;
            uVar56 = puVar35[-2];
            uVar58 = puVar35[1];
            uVar57 = *puVar35;
            uVar20 = uVar20 - 8;
            puVar35 = puVar35 + 4;
            puVar39[-1] = *puVar11;
            puVar39[-2] = uVar56;
            puVar39[1] = uVar58;
            *puVar39 = uVar57;
            puVar39 = puVar39 + 4;
          } while (uVar20 != 0);
          if (uVar33 == uVar38) goto LAB_00d9b618;
        }
        puVar40 = (undefined4 *)
                  ((long)pvVar19 +
                  ((((lVar7 + lVar5 + lVar53 + uVar38 * 4) - uVar4) - uVar45) - (long)pvVar3));
        do {
          lVar26 = uVar38 * 4;
          uVar38 = uVar38 + 1;
          *puVar40 = *(undefined4 *)(uVar52 + lVar26);
          puVar40 = puVar40 + 1;
        } while (uVar38 < uVar34);
      }
LAB_00d9b618:
      if (lVar24 != 0) {
        uVar34 = lVar24 >> 1;
        uVar33 = uVar34;
        if (uVar34 < 2) {
          uVar33 = 1;
        }
        if (uVar33 < 0x10) {
LAB_00d9b678:
          uVar38 = 0;
        }
        else {
          uVar38 = uVar34;
          if (uVar34 < 2) {
            uVar38 = 1;
          }
          lVar26 = lVar36 + lVar7 + lVar5 + lVar53;
          if ((uVar29 < uVar23 + uVar38 * 2) &&
             (uVar23 < (long)pvVar19 +
                       (((((lVar26 + uVar38 * 2) - uVar52) - uVar4) - uVar45) - (long)pvVar3)))
          goto LAB_00d9b678;
          uVar38 = uVar33 & 0xfffffffffffffff0;
          puVar35 = (undefined8 *)(uVar23 + 0x10);
          puVar39 = (undefined8 *)
                    ((long)pvVar19 + ((((lVar26 - uVar52) - uVar4) - uVar45) - (long)pvVar3) + 0x10)
          ;
          uVar20 = uVar38;
          do {
            puVar11 = puVar35 + -1;
            uVar56 = puVar35[-2];
            uVar58 = puVar35[1];
            uVar57 = *puVar35;
            uVar20 = uVar20 - 0x10;
            puVar35 = puVar35 + 4;
            puVar39[-1] = *puVar11;
            puVar39[-2] = uVar56;
            puVar39[1] = uVar58;
            *puVar39 = uVar57;
            puVar39 = puVar39 + 4;
          } while (uVar20 != 0);
          if (uVar33 == uVar38) goto LAB_00d9b6b4;
        }
        puVar37 = (undefined2 *)
                  ((long)pvVar19 +
                  (((((lVar36 + lVar7 + lVar5 + lVar53 + uVar38 * 2) - uVar52) - uVar4) - uVar45) -
                  (long)pvVar3));
        do {
          lVar26 = uVar38 * 2;
          uVar38 = uVar38 + 1;
          *puVar37 = *(undefined2 *)(uVar23 + lVar26);
          puVar37 = puVar37 + 1;
        } while (uVar38 < uVar34);
      }
LAB_00d9b6b4:
      if (lVar31 != 0) {
        uVar34 = lVar31 >> 1;
        uVar33 = uVar34;
        if (uVar34 < 2) {
          uVar33 = 1;
        }
        if (uVar33 < 0x10) {
LAB_00d9b720:
          uVar38 = 0;
        }
        else {
          uVar38 = uVar34;
          if (uVar34 < 2) {
            uVar38 = 1;
          }
          lVar26 = lVar6 + lVar36 + lVar7 + lVar5 + lVar53;
          if (((void *)(uVar29 + lVar24) < (void *)((long)pvVar18 + uVar38 * 2)) &&
             (pvVar18 < (void *)((long)pvVar19 +
                                ((((((lVar26 + uVar38 * 2) - uVar23) - uVar52) - uVar4) - uVar45) -
                                (long)pvVar3)))) goto LAB_00d9b720;
          uVar38 = uVar33 & 0xfffffffffffffff0;
          puVar35 = (undefined8 *)((long)pvVar18 + 0x10);
          puVar39 = (undefined8 *)
                    ((long)pvVar19 +
                    (((((lVar26 - uVar23) - uVar52) - uVar4) - uVar45) - (long)pvVar3) + 0x10);
          uVar20 = uVar38;
          do {
            puVar11 = puVar35 + -1;
            uVar56 = puVar35[-2];
            uVar58 = puVar35[1];
            uVar57 = *puVar35;
            uVar20 = uVar20 - 0x10;
            puVar35 = puVar35 + 4;
            puVar39[-1] = *puVar11;
            puVar39[-2] = uVar56;
            puVar39[1] = uVar58;
            *puVar39 = uVar57;
            puVar39 = puVar39 + 4;
          } while (uVar20 != 0);
          if (uVar33 == uVar38) goto LAB_00d9b768;
        }
        puVar37 = (undefined2 *)
                  ((long)pvVar19 +
                  ((((((lVar6 + lVar36 + lVar7 + lVar5 + lVar53 + uVar38 * 2) - uVar23) - uVar52) -
                    uVar4) - uVar45) - (long)pvVar3));
        do {
          lVar53 = uVar38 * 2;
          uVar38 = uVar38 + 1;
          *puVar37 = *(undefined2 *)((long)pvVar18 + lVar53);
          puVar37 = puVar37 + 1;
        } while (uVar38 < uVar34);
      }
LAB_00d9b768:
      *(void **)(this + 0xa8) = pvVar19;
      *(void **)(this + 0xb0) = pvVar19;
      *(ulong *)(this + 0xb8) = uVar49;
      *(ulong *)(this + 0xc0) = uVar2;
      *(ulong *)(this + 200) = uVar27;
      *(ulong *)(this + 0xd0) = uVar29;
      *(void **)(this + 0xd8) = (void *)(uVar29 + lVar24);
    }
    *(undefined4 *)(param_1 + 0x70) = 0xffffffff;
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  puVar14 = DataParser::TEXTURE_ATLAS;
  pcVar48 = DataParser::TEXTURE_ATLAS + -1;
  pcVar22 = pcVar48;
  do {
    pcVar22 = pcVar22 + 1;
  } while (*pcVar22 != '\0');
  piVar46 = *(int **)(in_x1 + 8);
  uVar8 = *(uint *)in_x1;
  uVar49 = (ulong)uVar8;
  piVar50 = piVar46 + uVar49 * 0xc;
  piVar51 = piVar46;
  if (uVar8 != 0) {
    uVar45 = (long)pcVar22 - (long)DataParser::TEXTURE_ATLAS;
    lVar53 = uVar49 * 0x30;
    piVar54 = piVar46;
    do {
      iVar16 = *piVar54;
      if ((*(ushort *)((long)piVar54 + 0x16) & 0x1000) != 0) {
        iVar16 = 0x15 - *(char *)((long)piVar54 + 0x15);
      }
      if (iVar16 == (int)uVar45) {
        __s2 = *(int **)(piVar54 + 2);
        if ((*(ushort *)((long)piVar54 + 0x16) & 0x1000) != 0) {
          __s2 = piVar54;
        }
        piVar51 = piVar54;
        if ((__s2 == (int *)puVar14) ||
           (iVar16 = memcmp(puVar14,__s2,uVar45 & 0xffffffff), iVar16 == 0)) break;
      }
      lVar53 = lVar53 + -0x30;
      piVar54 = piVar54 + 0xc;
      piVar51 = piVar50;
    } while (lVar53 != 0);
  }
  if (piVar50 == piVar51) goto joined_r0x00d9b8dc;
  do {
    pcVar48 = pcVar48 + 1;
  } while (*pcVar48 != '\0');
  if (uVar8 == 0) {
LAB_00d9b8b0:
    if (piVar46 == piVar50) goto LAB_00d9b8c0;
    piVar46 = piVar46 + 6;
  }
  else {
    lVar53 = uVar49 * 0x30;
    do {
      iVar16 = *piVar46;
      if ((*(ushort *)((long)piVar46 + 0x16) & 0x1000) != 0) {
        iVar16 = 0x15 - *(char *)((long)piVar46 + 0x15);
      }
      if (iVar16 == (int)((long)pcVar48 - (long)puVar14)) {
        piVar51 = *(int **)(piVar46 + 2);
        if ((*(ushort *)((long)piVar46 + 0x16) & 0x1000) != 0) {
          piVar51 = piVar46;
        }
        if ((piVar51 == (int *)puVar14) ||
           (iVar16 = memcmp(puVar14,piVar51,(long)pcVar48 - (long)puVar14 & 0xffffffff), iVar16 == 0
           )) goto LAB_00d9b8b0;
      }
      lVar53 = lVar53 + -0x30;
      piVar46 = piVar46 + 0xc;
    } while (lVar53 != 0);
LAB_00d9b8c0:
    piVar46 = (int *)&rapidjson::
                      GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                      ::
                      operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
                      ::buffer;
    rapidjson::
    GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
    operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
    ::buffer = 0;
    DAT_01785a58 = 0;
    DAT_01785a60 = 0;
  }
  *(int **)(param_1 + 0x68) = piVar46;
joined_r0x00d9b8dc:
  if ((local_b0 & 1) != 0) {
    operator_delete(local_a0);
  }
  if (((byte)abStack_98[0] & 1) != 0) {
    operator_delete(pbStack_88);
  }
  if (*(long *)(lVar10 + 0x28) == local_80) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

