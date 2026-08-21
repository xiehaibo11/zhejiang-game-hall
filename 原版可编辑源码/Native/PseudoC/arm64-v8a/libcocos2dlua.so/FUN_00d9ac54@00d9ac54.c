
DragonBonesData * FUN_00d9ac54(void)

{
  byte *pbVar1;
  size_t sVar2;
  int *__s2;
  ulong uVar3;
  void *pvVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  byte bVar10;
  undefined8 *puVar11;
  byte *pbVar12;
  undefined *puVar13;
  int iVar14;
  int iVar15;
  DragonBonesData *this;
  ArmatureData *pAVar16;
  void *pvVar17;
  void *pvVar18;
  ulong uVar19;
  basic_string *in_x3;
  size_t sVar20;
  char *pcVar21;
  ulong uVar22;
  long lVar23;
  byte *pbVar24;
  long lVar25;
  ulong uVar26;
  long lVar27;
  ulong uVar28;
  byte *pbVar29;
  long lVar30;
  long lVar31;
  ulong uVar32;
  ulong uVar33;
  undefined8 *puVar34;
  long lVar35;
  undefined2 *puVar36;
  ulong uVar37;
  undefined8 *puVar38;
  undefined4 *puVar39;
  long unaff_x19;
  DragonBonesData *pDVar40;
  long lVar41;
  JSONDataParser *unaff_x20;
  long lVar42;
  byte *pbVar43;
  size_t sVar44;
  ulong uVar45;
  int *piVar46;
  undefined2 *puVar47;
  char *pcVar48;
  ulong uVar49;
  int *piVar50;
  int *piVar51;
  ulong uVar52;
  long *unaff_x28;
  long lVar53;
  int *piVar54;
  long unaff_x29;
  double dVar55;
  undefined8 uVar56;
  undefined8 uVar57;
  undefined8 uVar58;
  ulong in_stack_00000060;
  undefined8 in_stack_00000068;
  void *in_stack_00000070;
  ulong in_stack_00000078;
  undefined8 in_stack_00000080;
  void *in_stack_00000088;
  byte in_stack_00000090;
  size_t in_stack_00000098;
  byte *in_stack_000000a0;
  
  if ((in_stack_00000078 & 1) != 0) {
    operator_delete(in_stack_00000088);
  }
  lVar53 = dragonBones::DataParser::DATA_VERSIONS;
  if (DAT_01787d08 - dragonBones::DataParser::DATA_VERSIONS != 0) {
    uVar45 = (DAT_01787d08 - dragonBones::DataParser::DATA_VERSIONS >> 3) * -0x5555555555555555;
    pbVar43 = (byte *)(unaff_x29 - 0x88U | 1);
    uVar49 = 0;
    sVar44 = (ulong)(*(byte *)(unaff_x29 + -0x88) >> 1);
    pbVar1 = pbVar43;
    if ((*(byte *)(unaff_x29 + -0x88) & 1) != 0) {
      sVar44 = *(size_t *)(unaff_x29 + -0x80);
      pbVar1 = *(byte **)(unaff_x29 + -0x78);
    }
    do {
      pbVar24 = (byte *)(lVar53 + uVar49 * 0x18);
      bVar10 = *pbVar24;
      sVar20 = (size_t)(bVar10 >> 1);
      sVar2 = sVar20;
      if ((bVar10 & 1) != 0) {
        sVar2 = *(size_t *)(pbVar24 + 8);
      }
      if (sVar2 == sVar44) {
        pbVar29 = *(byte **)(lVar53 + uVar49 * 0x18 + 0x10);
        if ((bVar10 & 1) == 0) {
          pbVar29 = pbVar24 + 1;
        }
        pbVar12 = pbVar1;
        sVar2 = sVar44;
        if ((bVar10 & 1) == 0) {
          while( true ) {
            if (sVar2 == 0) goto LAB_00d9ad38;
            pbVar24 = pbVar24 + 1;
            if (*pbVar24 != *pbVar12) break;
            sVar20 = sVar20 - 1;
            pbVar12 = pbVar12 + 1;
            sVar2 = sVar20;
          }
        }
        else if ((sVar44 == 0) || (iVar15 = memcmp(pbVar29,pbVar1,sVar44), iVar15 == 0)) {
LAB_00d9ad38:
          if (-1 < (int)uVar49) goto LAB_00d9adf0;
          break;
        }
      }
      uVar49 = uVar49 + 1;
    } while (uVar49 < uVar45);
    uVar49 = 0;
    sVar44 = (ulong)(in_stack_00000090 >> 1);
    pbVar1 = (byte *)((ulong)&stack0x00000090 | 1);
    if ((in_stack_00000090 & 1) != 0) {
      sVar44 = in_stack_00000098;
      pbVar1 = in_stack_000000a0;
    }
    do {
      pbVar24 = (byte *)(lVar53 + uVar49 * 0x18);
      bVar10 = *pbVar24;
      sVar20 = (size_t)(bVar10 >> 1);
      sVar2 = sVar20;
      if ((bVar10 & 1) != 0) {
        sVar2 = *(size_t *)(pbVar24 + 8);
      }
      if (sVar2 == sVar44) {
        pbVar29 = *(byte **)(lVar53 + uVar49 * 0x18 + 0x10);
        if ((bVar10 & 1) == 0) {
          pbVar29 = pbVar24 + 1;
        }
        pbVar12 = pbVar1;
        sVar2 = sVar44;
        if ((bVar10 & 1) == 0) {
          while( true ) {
            if (sVar2 == 0) goto LAB_00d9adec;
            pbVar24 = pbVar24 + 1;
            if (*pbVar24 != *pbVar12) break;
            sVar20 = sVar20 - 1;
            pbVar12 = pbVar12 + 1;
            sVar2 = sVar20;
          }
        }
        else if ((sVar44 == 0) || (iVar15 = memcmp(pbVar29,pbVar1,sVar44), iVar15 == 0)) {
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
  this = dragonBones::BaseObject::borrowObject<dragonBones::DragonBonesData>();
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (this + 0x18) !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (unaff_x29 + -0x88)) {
    uVar49 = (ulong)(*(byte *)(unaff_x29 + -0x88) >> 1);
    if ((*(byte *)(unaff_x29 + -0x88) & 1) != 0) {
      uVar49 = *(ulong *)(unaff_x29 + -0x80);
      pbVar43 = *(byte **)(unaff_x29 + -0x78);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x18),(char *)pbVar43,uVar49);
  }
  in_stack_00000068 = 0;
  in_stack_00000070 = (void *)0x0;
                    /* try { // try from 00d9ae44 to 00e9ae53 has its CatchHandler @ 00d9bbd0 */
  in_stack_00000060 = 0;
  dragonBones::JSONDataParser::_getString
            (unaff_x20,(GenericValue *)dragonBones::DataParser::NAME,(char *)&stack0x00000060,in_x3)
  ;
  pDVar40 = this + 0x30;
  if (((byte)*pDVar40 & 1) == 0) {
    *(undefined2 *)pDVar40 = 0;
  }
  else {
    **(undefined1 **)(this + 0x40) = 0;
    *(undefined8 *)(this + 0x38) = 0;
    if (((byte)this[0x30] & 1) != 0) {
      operator_delete(*(void **)(this + 0x40));
      *(undefined8 *)(this + 0x30) = 0;
    }
  }
                    /* try { // try from 00d9aee0 to 00e9aee7 has its CatchHandler @ 00d9bbd0 */
  *(void **)(this + 0x40) = in_stack_00000088;
                    /* try { // try from 00d9aee8 to 00e9af13 has its CatchHandler @ 00d9a254 */
  *(undefined8 *)(this + 0x38) = in_stack_00000080;
  *(ulong *)pDVar40 = in_stack_00000078;
  in_stack_00000080 = 0;
  in_stack_00000088 = (void *)0x0;
  in_stack_00000078 = 0;
  if ((in_stack_00000060 & 1) != 0) {
    operator_delete(in_stack_00000070);
  }
                    /* try { // try from 00d9af14 to 00e9af1f has its CatchHandler @ 00d9bbd4 */
  iVar14 = dragonBones::JSONDataParser::_getNumber
                     ((GenericValue *)unaff_x20,dragonBones::DataParser::FRAME_RATE,0x18);
  iVar15 = 0x18;
  if (iVar14 != 0) {
    iVar15 = iVar14;
  }
  *(int *)(this + 0x10) = iVar15;
  puVar13 = dragonBones::DataParser::ARMATURE;
  pcVar21 = dragonBones::DataParser::ARMATURE + -1;
  do {
    pcVar21 = pcVar21 + 1;
  } while (*pcVar21 != '\0');
  piVar46 = *(int **)(unaff_x20 + 8);
  uVar9 = *(uint *)unaff_x20;
  piVar50 = piVar46 + (ulong)uVar9 * 0xc;
  piVar51 = piVar46;
  if (uVar9 != 0) {
    uVar49 = (long)pcVar21 - (long)dragonBones::DataParser::ARMATURE;
                    /* try { // try from 00d9af64 to 00e9afdb has its CatchHandler @ 00d9bc24 */
    lVar53 = (ulong)uVar9 * 0x30;
    do {
      iVar15 = *piVar46;
      if ((*(ushort *)((long)piVar46 + 0x16) & 0x1000) != 0) {
        iVar15 = 0x15 - *(char *)((long)piVar46 + 0x15);
      }
      if (iVar15 == (int)uVar49) {
        piVar54 = *(int **)(piVar46 + 2);
        if ((*(ushort *)((long)piVar46 + 0x16) & 0x1000) != 0) {
          piVar54 = piVar46;
        }
        piVar51 = piVar46;
        if ((piVar54 == (int *)puVar13) ||
           (iVar15 = memcmp(puVar13,piVar54,uVar49 & 0xffffffff), iVar15 == 0)) break;
      }
      lVar53 = lVar53 + -0x30;
      piVar46 = piVar46 + 0xc;
      piVar51 = piVar50;
    } while (lVar53 != 0);
  }
  if (piVar50 != piVar51) {
                    /* try { // try from 00d9afe0 to 00e9afeb has its CatchHandler @ 00d9bbbc */
    unaff_x28[5] = (long)this;
                    /* try { // try from 00d9aff0 to 00e9aff7 has its CatchHandler @ 00d9bbc4 */
    (**(code **)(*unaff_x28 + 0x108))();
    puVar13 = dragonBones::DataParser::ARMATURE;
                    /* try { // try from 00d9aff8 to 00e9afff has its CatchHandler @ 00d9bbc0 */
    pcVar21 = dragonBones::DataParser::ARMATURE + -1;
    do {
      pcVar21 = pcVar21 + 1;
                    /* try { // try from 00d9b000 to 00e9b007 has its CatchHandler @ 00d9bbc8 */
    } while (*pcVar21 != '\0');
    uVar9 = *(uint *)unaff_x20;
    piVar51 = *(int **)(unaff_x20 + 8);
    piVar46 = piVar51;
    if (uVar9 == 0) {
LAB_00d9b084:
      if (piVar46 == piVar51 + (ulong)uVar9 * 0xc) goto LAB_00d9b0ec;
      uVar9 = piVar46[6];
      if (uVar9 != 0) {
        lVar53 = 0;
        do {
          pAVar16 = (ArmatureData *)
                    (**(code **)(*unaff_x28 + 0x20))(unaff_x28,*(long *)(piVar46 + 8) + lVar53);
          dragonBones::DragonBonesData::addArmature(this,pAVar16);
          lVar53 = lVar53 + 0x18;
        } while ((ulong)uVar9 * 0x18 - lVar53 != 0);
      }
      lVar53 = *(long *)(this + 0xa8);
    }
    else {
      uVar49 = (long)pcVar21 - (long)dragonBones::DataParser::ARMATURE;
                    /* try { // try from 00d9b01c to 00e9b023 has its CatchHandler @ 00d9bbe4 */
      lVar53 = (ulong)uVar9 * 0x30;
      do {
                    /* try { // try from 00d9b044 to 00e9b063 has its CatchHandler @ 00d9bc00 */
        iVar15 = *piVar46;
        if ((*(ushort *)((long)piVar46 + 0x16) & 0x1000) != 0) {
          iVar15 = 0x15 - *(char *)((long)piVar46 + 0x15);
        }
        if (iVar15 == (int)uVar49) {
          piVar50 = *(int **)(piVar46 + 2);
          if ((*(ushort *)((long)piVar46 + 0x16) & 0x1000) != 0) {
            piVar50 = piVar46;
          }
          if ((piVar50 == (int *)puVar13) ||
             (iVar15 = memcmp(puVar13,piVar50,uVar49 & 0xffffffff), iVar15 == 0)) goto LAB_00d9b084;
        }
                    /* try { // try from 00d9b02c to 00e9b043 has its CatchHandler @ 00d9bc20 */
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
      pvVar4 = (void *)unaff_x28[0x21];
      puVar36 = (undefined2 *)unaff_x28[0x22];
      sVar44 = (long)puVar36 - (long)pvVar4;
      uVar49 = (long)sVar44 >> 1;
      dVar55 = fmod((double)uVar49,2.0);
      if (dVar55 != 0.0) {
        if (puVar36 < (undefined2 *)unaff_x28[0x23]) {
          *puVar36 = 0;
          unaff_x28[0x22] = (long)(puVar36 + 1);
        }
        else {
          uVar45 = uVar49 + 1;
          if ((long)uVar45 < 0) goto LAB_00d9ba6c;
          uVar22 = unaff_x28[0x23] - (long)pvVar4;
          if (uVar45 <= uVar22) {
            uVar45 = uVar22;
          }
          if (0x3ffffffffffffffe < (ulong)((long)uVar22 >> 1)) {
            uVar45 = 0x7fffffffffffffff;
          }
          if (uVar45 == 0) {
            pvVar17 = (void *)0x0;
          }
          else {
            if ((long)uVar45 < 0) goto LAB_00d9ba6c;
            pvVar17 = operator_new(uVar45 << 1);
          }
          puVar36 = (undefined2 *)((long)pvVar17 + uVar49 * 2);
          *puVar36 = 0;
          if (0 < (long)sVar44) {
            memcpy(pvVar17,pvVar4,sVar44);
          }
          unaff_x28[0x21] = (long)pvVar17;
          unaff_x28[0x22] = (long)(puVar36 + 1);
          unaff_x28[0x23] = (long)((long)pvVar17 + uVar45 * 2);
          if (pvVar4 != (void *)0x0) {
            operator_delete(pvVar4);
          }
        }
      }
      pvVar4 = (void *)unaff_x28[0x27];
      puVar36 = (undefined2 *)unaff_x28[0x28];
      sVar44 = (long)puVar36 - (long)pvVar4;
      uVar49 = (long)sVar44 >> 1;
      dVar55 = fmod((double)uVar49,2.0);
      if (dVar55 != 0.0) {
        if (puVar36 < (undefined2 *)unaff_x28[0x29]) {
          *puVar36 = 0;
          unaff_x28[0x28] = (long)(puVar36 + 1);
        }
        else {
          uVar45 = uVar49 + 1;
          if ((long)uVar45 < 0) goto LAB_00d9ba6c;
          uVar22 = unaff_x28[0x29] - (long)pvVar4;
          if (uVar45 <= uVar22) {
            uVar45 = uVar22;
          }
          if (0x3ffffffffffffffe < (ulong)((long)uVar22 >> 1)) {
            uVar45 = 0x7fffffffffffffff;
          }
          if (uVar45 == 0) {
            pvVar17 = (void *)0x0;
          }
          else {
            if ((long)uVar45 < 0) goto LAB_00d9ba6c;
            pvVar17 = operator_new(uVar45 << 1);
          }
          puVar36 = (undefined2 *)((long)pvVar17 + uVar49 * 2);
          *puVar36 = 0;
          if (0 < (long)sVar44) {
            memcpy(pvVar17,pvVar4,sVar44);
          }
          unaff_x28[0x27] = (long)pvVar17;
          unaff_x28[0x28] = (long)(puVar36 + 1);
          unaff_x28[0x29] = (long)((long)pvVar17 + uVar45 * 2);
          if (pvVar4 != (void *)0x0) {
            operator_delete(pvVar4);
          }
        }
      }
      pvVar4 = (void *)unaff_x28[0x2d];
      puVar36 = (undefined2 *)unaff_x28[0x2e];
      sVar44 = (long)puVar36 - (long)pvVar4;
      uVar49 = (long)sVar44 >> 1;
      dVar55 = fmod((double)uVar49,2.0);
      if (dVar55 != 0.0) {
        if (puVar36 < (undefined2 *)unaff_x28[0x2f]) {
          *puVar36 = 0;
          unaff_x28[0x2e] = (long)(puVar36 + 1);
        }
        else {
          uVar45 = uVar49 + 1;
          if ((long)uVar45 < 0) goto LAB_00d9ba6c;
          uVar22 = unaff_x28[0x2f] - (long)pvVar4;
          if (uVar45 <= uVar22) {
            uVar45 = uVar22;
          }
          if (0x3ffffffffffffffe < (ulong)((long)uVar22 >> 1)) {
            uVar45 = 0x7fffffffffffffff;
          }
          if (uVar45 == 0) {
            pvVar17 = (void *)0x0;
          }
          else {
            if ((long)uVar45 < 0) goto LAB_00d9ba6c;
            pvVar17 = operator_new(uVar45 << 1);
          }
          puVar36 = (undefined2 *)((long)pvVar17 + uVar49 * 2);
          *puVar36 = 0;
          if (0 < (long)sVar44) {
            memcpy(pvVar17,pvVar4,sVar44);
          }
          unaff_x28[0x2d] = (long)pvVar17;
          unaff_x28[0x2e] = (long)(puVar36 + 1);
          unaff_x28[0x2f] = (long)((long)pvVar17 + uVar45 * 2);
          if (pvVar4 != (void *)0x0) {
            operator_delete(pvVar4);
          }
        }
      }
      pvVar4 = (void *)unaff_x28[0x30];
      puVar36 = (undefined2 *)unaff_x28[0x31];
      sVar44 = (long)puVar36 - (long)pvVar4;
                    /* try { // try from 00d9b324 to 00e9b477 has its CatchHandler @ 00d9bbe8 */
      uVar49 = (long)sVar44 >> 1;
      dVar55 = fmod((double)uVar49,2.0);
      pvVar17 = pvVar4;
      puVar47 = puVar36;
      if (dVar55 != 0.0) {
        if (puVar36 < (undefined2 *)unaff_x28[0x32]) {
          puVar47 = puVar36 + 1;
          *puVar36 = 0;
          unaff_x28[0x31] = (long)puVar47;
        }
        else {
          uVar45 = uVar49 + 1;
          if ((long)uVar45 < 0) {
LAB_00d9ba6c:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00d9ba6c to 00e9ba73 has its CatchHandler @ 00d9bb38 */
            abort();
          }
          uVar22 = unaff_x28[0x32] - (long)pvVar4;
          if (uVar45 <= uVar22) {
            uVar45 = uVar22;
          }
          if (0x3ffffffffffffffe < (ulong)((long)uVar22 >> 1)) {
            uVar45 = 0x7fffffffffffffff;
          }
          if (uVar45 == 0) {
            pvVar17 = (void *)0x0;
          }
          else {
            if ((long)uVar45 < 0) goto LAB_00d9ba6c;
            pvVar17 = operator_new(uVar45 << 1);
          }
          puVar36 = (undefined2 *)((long)pvVar17 + uVar49 * 2);
          puVar47 = puVar36 + 1;
          *puVar36 = 0;
          if (0 < (long)sVar44) {
            memcpy(pvVar17,pvVar4,sVar44);
          }
          unaff_x28[0x30] = (long)pvVar17;
          unaff_x28[0x31] = (long)puVar47;
          unaff_x28[0x32] = (long)((long)pvVar17 + uVar45 * 2);
          if (pvVar4 != (void *)0x0) {
            operator_delete(pvVar4);
            pvVar17 = (void *)unaff_x28[0x30];
            puVar47 = (undefined2 *)unaff_x28[0x31];
          }
        }
      }
      pvVar4 = (void *)unaff_x28[0x21];
      lVar53 = unaff_x28[0x22];
      uVar45 = unaff_x28[0x24];
      lVar6 = unaff_x28[0x25];
      lVar35 = unaff_x28[0x2b];
      uVar22 = unaff_x28[0x2d];
      lVar7 = unaff_x28[0x2e];
      uVar5 = unaff_x28[0x27];
      lVar8 = unaff_x28[0x28];
      uVar52 = unaff_x28[0x2a];
      lVar41 = lVar53 - (long)pvVar4;
      lVar42 = lVar6 - uVar45;
      lVar23 = lVar7 - uVar22;
      lVar27 = lVar8 - uVar5;
      lVar30 = (long)puVar47 - (long)pvVar17;
      lVar25 = lVar35 - uVar52;
      pvVar18 = operator_new__(lVar42 + lVar41 + lVar27 + lVar25 + lVar23 + lVar30);
      uVar49 = (long)pvVar18 + lVar41;
      if (lVar41 != 0) {
        uVar26 = lVar41 >> 1;
        uVar3 = uVar26;
        if (uVar26 < 2) {
          uVar3 = 1;
        }
        if (uVar3 < 0x10) {
LAB_00d9b478:
          uVar28 = 0;
        }
        else {
          uVar28 = uVar26;
          if (uVar26 < 2) {
            uVar28 = 1;
          }
          if ((pvVar18 < (void *)((long)pvVar4 + uVar28 * 2)) &&
             (pvVar4 < (void *)((long)pvVar18 + uVar28 * 2))) goto LAB_00d9b478;
          uVar28 = uVar3 & 0xfffffffffffffff0;
          puVar34 = (undefined8 *)((long)pvVar4 + 0x10);
          puVar38 = (undefined8 *)((long)pvVar18 + 0x10);
          uVar32 = uVar28;
          do {
            puVar11 = puVar34 + -1;
            uVar56 = puVar34[-2];
            uVar58 = puVar34[1];
            uVar57 = *puVar34;
            puVar34 = puVar34 + 4;
            uVar32 = uVar32 - 0x10;
            puVar38[-1] = *puVar11;
            puVar38[-2] = uVar56;
            puVar38[1] = uVar58;
            *puVar38 = uVar57;
            puVar38 = puVar38 + 4;
          } while (uVar32 != 0);
          if (uVar3 == uVar28) goto LAB_00d9b494;
        }
        do {
          lVar31 = uVar28 * 2;
          uVar28 = uVar28 + 1;
          *(undefined2 *)((long)pvVar18 + lVar31) = *(undefined2 *)((long)pvVar4 + lVar31);
        } while (uVar28 < uVar26);
      }
LAB_00d9b494:
      uVar3 = uVar49 + lVar42;
                    /* try { // try from 00d9b4a8 to 00e9b4db has its CatchHandler @ 00d9bbcc */
      if (lVar42 != 0) {
        uVar28 = lVar42 >> 2;
        uVar26 = uVar28;
        if (uVar28 < 2) {
          uVar26 = 1;
        }
        if (uVar26 < 8) {
LAB_00d9b4ec:
          uVar32 = 0;
        }
        else {
          uVar32 = uVar28;
          if (uVar28 < 2) {
            uVar32 = 1;
          }
          if ((uVar49 < uVar45 + uVar32 * 4) &&
             (uVar45 < (long)pvVar18 + ((lVar53 + uVar32 * 4) - (long)pvVar4))) goto LAB_00d9b4ec;
          uVar32 = uVar26 & 0xfffffffffffffff8;
          puVar34 = (undefined8 *)(uVar45 + 0x10);
          puVar38 = (undefined8 *)((long)pvVar18 + lVar41 + 0x10);
                    /* try { // try from 00d9b928 to 00e9b92f has its CatchHandler @ 00d9bba8 */
          uVar33 = uVar32;
          do {
            puVar11 = puVar34 + -1;
            uVar56 = puVar34[-2];
            uVar58 = puVar34[1];
            uVar57 = *puVar34;
                    /* try { // try from 00d9b930 to 00e9b933 has its CatchHandler @ 00d9bbac */
            puVar34 = puVar34 + 4;
                    /* try { // try from 00d9b934 to 00e9b93b has its CatchHandler @ 00d9bba0 */
            uVar33 = uVar33 - 8;
            puVar38[-1] = *puVar11;
            puVar38[-2] = uVar56;
            puVar38[1] = uVar58;
            *puVar38 = uVar57;
                    /* try { // try from 00d9b93c to 00e9b93f has its CatchHandler @ 00d9bbac */
            puVar38 = puVar38 + 4;
                    /* try { // try from 00d9b940 to 00e9b947 has its CatchHandler @ 00d9bb9c */
          } while (uVar33 != 0);
                    /* try { // try from 00d9b948 to 00e9b94f has its CatchHandler @ 00d9bbac */
          if (uVar26 == uVar32) goto LAB_00d9b508;
        }
        do {
                    /* try { // try from 00d9b4f0 to 00e9b51f has its CatchHandler @ 00d9bc24 */
          lVar41 = uVar32 * 4;
          uVar32 = uVar32 + 1;
          *(undefined4 *)(uVar49 + lVar41) = *(undefined4 *)(uVar45 + lVar41);
        } while (uVar32 < uVar28);
      }
LAB_00d9b508:
      uVar26 = uVar3 + lVar27;
      if (lVar27 != 0) {
        uVar32 = lVar27 >> 1;
        uVar28 = uVar32;
        if (uVar32 < 2) {
          uVar28 = 1;
        }
        if (uVar28 < 0x10) {
LAB_00d9b55c:
          uVar33 = 0;
        }
        else {
          uVar33 = uVar32;
          if (uVar32 < 2) {
            uVar33 = 1;
          }
                    /* try { // try from 00d9b530 to 00e9b53b has its CatchHandler @ 00d9bbcc */
                    /* try { // try from 00d9b550 to 00e9b827 has its CatchHandler @ 00d9bc24 */
          if ((uVar3 < uVar5 + uVar33 * 2) &&
             (uVar5 < (long)pvVar18 + (((lVar6 + lVar53 + uVar33 * 2) - uVar45) - (long)pvVar4)))
          goto LAB_00d9b55c;
                    /* try { // try from 00d9b950 to 00e9b957 has its CatchHandler @ 00d9bb98 */
                    /* try { // try from 00d9b958 to 00e9b95f has its CatchHandler @ 00d9bb94 */
          uVar33 = uVar28 & 0xfffffffffffffff0;
                    /* try { // try from 00d9b960 to 00e9b967 has its CatchHandler @ 00d9bb90 */
          puVar34 = (undefined8 *)(uVar5 + 0x10);
          puVar38 = (undefined8 *)
                    ((long)pvVar18 + (((lVar6 + lVar53) - uVar45) - (long)pvVar4) + 0x10);
                    /* try { // try from 00d9b968 to 00e9b96f has its CatchHandler @ 00d9bb8c */
          uVar37 = uVar33;
          do {
            puVar11 = puVar34 + -1;
            uVar56 = puVar34[-2];
            uVar58 = puVar34[1];
            uVar57 = *puVar34;
                    /* try { // try from 00d9b970 to 00e9b977 has its CatchHandler @ 00d9bbac */
            uVar37 = uVar37 - 0x10;
            puVar34 = puVar34 + 4;
                    /* try { // try from 00d9b978 to 00e9b97f has its CatchHandler @ 00d9bb88 */
            puVar38[-1] = *puVar11;
            puVar38[-2] = uVar56;
            puVar38[1] = uVar58;
            *puVar38 = uVar57;
            puVar38 = puVar38 + 4;
                    /* try { // try from 00d9b980 to 00e9b987 has its CatchHandler @ 00d9bb84 */
          } while (uVar37 != 0);
                    /* try { // try from 00d9b988 to 00e9b98b has its CatchHandler @ 00d9bba4 */
          if (uVar28 == uVar33) goto LAB_00d9b588;
        }
        puVar36 = (undefined2 *)
                  ((long)pvVar18 + (((lVar6 + lVar53 + uVar33 * 2) - uVar45) - (long)pvVar4));
        do {
          lVar27 = uVar33 * 2;
          uVar33 = uVar33 + 1;
          *puVar36 = *(undefined2 *)(uVar5 + lVar27);
          puVar36 = puVar36 + 1;
        } while (uVar33 < uVar32);
      }
LAB_00d9b588:
      uVar28 = uVar26 + lVar25;
      if (lVar25 != 0) {
        uVar33 = lVar25 >> 2;
        uVar32 = uVar33;
        if (uVar33 < 2) {
          uVar32 = 1;
        }
        if (uVar32 < 8) {
LAB_00d9b5e4:
          uVar37 = 0;
        }
        else {
          uVar37 = uVar33;
          if (uVar33 < 2) {
            uVar37 = 1;
          }
          lVar25 = lVar8 + lVar6 + lVar53;
          if ((uVar26 < uVar52 + uVar37 * 4) &&
             (uVar52 < (long)pvVar18 + ((((lVar25 + uVar37 * 4) - uVar5) - uVar45) - (long)pvVar4)))
          goto LAB_00d9b5e4;
                    /* try { // try from 00d9b990 to 00e9b997 has its CatchHandler @ 00d9bb80 */
                    /* try { // try from 00d9b998 to 00e9b9a3 has its CatchHandler @ 00d9bbac */
          uVar37 = uVar32 & 0xfffffffffffffff8;
                    /* try { // try from 00d9b9a4 to 00e9b9a7 has its CatchHandler @ 00d9bba4 */
          puVar34 = (undefined8 *)(uVar52 + 0x10);
                    /* try { // try from 00d9b9a8 to 00e9b9b7 has its CatchHandler @ 00d9bbac */
          puVar38 = (undefined8 *)
                    ((long)pvVar18 + (((lVar25 - uVar5) - uVar45) - (long)pvVar4) + 0x10);
          uVar19 = uVar37;
          do {
            puVar11 = puVar34 + -1;
            uVar56 = puVar34[-2];
            uVar58 = puVar34[1];
            uVar57 = *puVar34;
            uVar19 = uVar19 - 8;
                    /* try { // try from 00d9b9b8 to 00e9b9bf has its CatchHandler @ 00d9bb7c */
            puVar34 = puVar34 + 4;
            puVar38[-1] = *puVar11;
            puVar38[-2] = uVar56;
            puVar38[1] = uVar58;
            *puVar38 = uVar57;
                    /* try { // try from 00d9b9c0 to 00e9b9c3 has its CatchHandler @ 00d9bb78 */
            puVar38 = puVar38 + 4;
                    /* try { // try from 00d9b9c4 to 00e9b9c7 has its CatchHandler @ 00d9bbac */
          } while (uVar19 != 0);
                    /* try { // try from 00d9b9c8 to 00e9b9cf has its CatchHandler @ 00d9bb74 */
          if (uVar32 == uVar37) goto LAB_00d9b618;
        }
        puVar39 = (undefined4 *)
                  ((long)pvVar18 +
                  ((((lVar8 + lVar6 + lVar53 + uVar37 * 4) - uVar5) - uVar45) - (long)pvVar4));
        do {
          lVar25 = uVar37 * 4;
          uVar37 = uVar37 + 1;
          *puVar39 = *(undefined4 *)(uVar52 + lVar25);
          puVar39 = puVar39 + 1;
        } while (uVar37 < uVar33);
      }
LAB_00d9b618:
      if (lVar23 != 0) {
        uVar33 = lVar23 >> 1;
        uVar32 = uVar33;
        if (uVar33 < 2) {
          uVar32 = 1;
        }
        if (uVar32 < 0x10) {
LAB_00d9b678:
          uVar37 = 0;
        }
        else {
          uVar37 = uVar33;
          if (uVar33 < 2) {
            uVar37 = 1;
          }
          lVar25 = lVar35 + lVar8 + lVar6 + lVar53;
          if ((uVar28 < uVar22 + uVar37 * 2) &&
             (uVar22 < (long)pvVar18 +
                       (((((lVar25 + uVar37 * 2) - uVar52) - uVar5) - uVar45) - (long)pvVar4)))
          goto LAB_00d9b678;
                    /* try { // try from 00d9b9d8 to 00e9b9df has its CatchHandler @ 00d9bb6c */
                    /* try { // try from 00d9b9e0 to 00e9b9e3 has its CatchHandler @ 00d9bbac */
                    /* try { // try from 00d9b9e4 to 00e9b9eb has its CatchHandler @ 00d9bb68 */
          uVar37 = uVar32 & 0xfffffffffffffff0;
                    /* try { // try from 00d9b9ec to 00e9b9ef has its CatchHandler @ 00d9bba4 */
          puVar34 = (undefined8 *)(uVar22 + 0x10);
                    /* try { // try from 00d9b9f0 to 00e9b9f7 has its CatchHandler @ 00d9bbac */
          puVar38 = (undefined8 *)
                    ((long)pvVar18 + ((((lVar25 - uVar52) - uVar5) - uVar45) - (long)pvVar4) + 0x10)
          ;
          uVar19 = uVar37;
          do {
            puVar11 = puVar34 + -1;
                    /* try { // try from 00d9b9f8 to 00e9b9ff has its CatchHandler @ 00d9bb64 */
            uVar56 = puVar34[-2];
            uVar58 = puVar34[1];
            uVar57 = *puVar34;
            uVar19 = uVar19 - 0x10;
                    /* try { // try from 00d9ba00 to 00e9ba07 has its CatchHandler @ 00d9bb60 */
            puVar34 = puVar34 + 4;
            puVar38[-1] = *puVar11;
            puVar38[-2] = uVar56;
            puVar38[1] = uVar58;
            *puVar38 = uVar57;
                    /* try { // try from 00d9ba08 to 00e9ba0f has its CatchHandler @ 00d9bb5c */
            puVar38 = puVar38 + 4;
          } while (uVar19 != 0);
                    /* try { // try from 00d9ba10 to 00e9ba17 has its CatchHandler @ 00d9bba4 */
          if (uVar32 == uVar37) goto LAB_00d9b6b4;
        }
        puVar36 = (undefined2 *)
                  ((long)pvVar18 +
                  (((((lVar35 + lVar8 + lVar6 + lVar53 + uVar37 * 2) - uVar52) - uVar5) - uVar45) -
                  (long)pvVar4));
        do {
          lVar25 = uVar37 * 2;
          uVar37 = uVar37 + 1;
          *puVar36 = *(undefined2 *)(uVar22 + lVar25);
          puVar36 = puVar36 + 1;
        } while (uVar37 < uVar33);
      }
LAB_00d9b6b4:
      if (lVar30 != 0) {
        uVar33 = lVar30 >> 1;
        uVar32 = uVar33;
        if (uVar33 < 2) {
          uVar32 = 1;
        }
        if (uVar32 < 0x10) {
LAB_00d9b720:
          uVar37 = 0;
        }
        else {
          uVar37 = uVar33;
          if (uVar33 < 2) {
            uVar37 = 1;
          }
          lVar25 = lVar7 + lVar35 + lVar8 + lVar6 + lVar53;
          if (((void *)(uVar28 + lVar23) < (void *)((long)pvVar17 + uVar37 * 2)) &&
             (pvVar17 < (void *)((long)pvVar18 +
                                ((((((lVar25 + uVar37 * 2) - uVar22) - uVar52) - uVar5) - uVar45) -
                                (long)pvVar4)))) goto LAB_00d9b720;
                    /* try { // try from 00d9ba1c to 00e9ba23 has its CatchHandler @ 00d9bb58 */
                    /* try { // try from 00d9ba24 to 00e9ba27 has its CatchHandler @ 00d9bbac */
                    /* try { // try from 00d9ba28 to 00e9ba2f has its CatchHandler @ 00d9bb54 */
                    /* try { // try from 00d9ba30 to 00e9ba37 has its CatchHandler @ 00d9bb50 */
          uVar37 = uVar32 & 0xfffffffffffffff0;
                    /* try { // try from 00d9ba38 to 00e9ba3b has its CatchHandler @ 00d9bba4 */
          puVar34 = (undefined8 *)((long)pvVar17 + 0x10);
                    /* try { // try from 00d9ba3c to 00e9ba3f has its CatchHandler @ 00d9bb4c */
          puVar38 = (undefined8 *)
                    ((long)pvVar18 +
                    (((((lVar25 - uVar22) - uVar52) - uVar5) - uVar45) - (long)pvVar4) + 0x10);
                    /* try { // try from 00d9ba40 to 00e9ba43 has its CatchHandler @ 00d9bba4 */
          uVar19 = uVar37;
          do {
            puVar11 = puVar34 + -1;
                    /* try { // try from 00d9ba44 to 00e9ba4b has its CatchHandler @ 00d9bbac */
            uVar56 = puVar34[-2];
            uVar58 = puVar34[1];
            uVar57 = *puVar34;
            uVar19 = uVar19 - 0x10;
                    /* try { // try from 00d9ba4c to 00e9ba53 has its CatchHandler @ 00d9bb48 */
            puVar34 = puVar34 + 4;
            puVar38[-1] = *puVar11;
            puVar38[-2] = uVar56;
            puVar38[1] = uVar58;
            *puVar38 = uVar57;
                    /* try { // try from 00d9ba54 to 00e9ba5b has its CatchHandler @ 00d9bb44 */
            puVar38 = puVar38 + 4;
          } while (uVar19 != 0);
                    /* try { // try from 00d9ba5c to 00e9ba63 has its CatchHandler @ 00d9bb40 */
          if (uVar32 == uVar37) goto LAB_00d9b768;
        }
        puVar36 = (undefined2 *)
                  ((long)pvVar18 +
                  ((((((lVar7 + lVar35 + lVar8 + lVar6 + lVar53 + uVar37 * 2) - uVar22) - uVar52) -
                    uVar5) - uVar45) - (long)pvVar4));
        do {
          lVar53 = uVar37 * 2;
          uVar37 = uVar37 + 1;
          *puVar36 = *(undefined2 *)((long)pvVar17 + lVar53);
          puVar36 = puVar36 + 1;
        } while (uVar37 < uVar33);
      }
LAB_00d9b768:
      *(void **)(this + 0xa8) = pvVar18;
      *(void **)(this + 0xb0) = pvVar18;
      *(ulong *)(this + 0xb8) = uVar49;
      *(ulong *)(this + 0xc0) = uVar3;
      *(ulong *)(this + 200) = uVar26;
      *(ulong *)(this + 0xd0) = uVar28;
      *(void **)(this + 0xd8) = (void *)(uVar28 + lVar23);
    }
    *(undefined4 *)(unaff_x28 + 0xe) = 0xffffffff;
    unaff_x28[5] = 0;
  }
  puVar13 = dragonBones::DataParser::TEXTURE_ATLAS;
  pcVar48 = dragonBones::DataParser::TEXTURE_ATLAS + -1;
  pcVar21 = pcVar48;
  do {
    pcVar21 = pcVar21 + 1;
  } while (*pcVar21 != '\0');
  piVar46 = *(int **)(unaff_x20 + 8);
  uVar9 = *(uint *)unaff_x20;
  uVar49 = (ulong)uVar9;
  piVar50 = piVar46 + uVar49 * 0xc;
  piVar51 = piVar46;
  if (uVar9 != 0) {
    uVar45 = (long)pcVar21 - (long)dragonBones::DataParser::TEXTURE_ATLAS;
    lVar53 = uVar49 * 0x30;
    piVar54 = piVar46;
    do {
      iVar15 = *piVar54;
      if ((*(ushort *)((long)piVar54 + 0x16) & 0x1000) != 0) {
        iVar15 = 0x15 - *(char *)((long)piVar54 + 0x15);
      }
      if (iVar15 == (int)uVar45) {
        __s2 = *(int **)(piVar54 + 2);
        if ((*(ushort *)((long)piVar54 + 0x16) & 0x1000) != 0) {
          __s2 = piVar54;
        }
        piVar51 = piVar54;
        if ((__s2 == (int *)puVar13) ||
           (iVar15 = memcmp(puVar13,__s2,uVar45 & 0xffffffff), iVar15 == 0)) break;
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
  if (uVar9 == 0) {
LAB_00d9b8b0:
    if (piVar46 == piVar50) goto LAB_00d9b8c0;
                    /* try { // try from 00d9b8b8 to 00e9b8df has its CatchHandler @ 00d9bbb0 */
    piVar46 = piVar46 + 6;
  }
  else {
    lVar53 = uVar49 * 0x30;
    do {
      iVar15 = *piVar46;
      if ((*(ushort *)((long)piVar46 + 0x16) & 0x1000) != 0) {
        iVar15 = 0x15 - *(char *)((long)piVar46 + 0x15);
      }
                    /* try { // try from 00d9b884 to 00e9b897 has its CatchHandler @ 00d9bc24 */
      if (iVar15 == (int)((long)pcVar48 - (long)puVar13)) {
        piVar51 = *(int **)(piVar46 + 2);
        if ((*(ushort *)((long)piVar46 + 0x16) & 0x1000) != 0) {
          piVar51 = piVar46;
        }
                    /* try { // try from 00d9b8ac to 00e9b8b3 has its CatchHandler @ 00d9bbb4 */
        if ((piVar51 == (int *)puVar13) ||
           (iVar15 = memcmp(puVar13,piVar51,(long)pcVar48 - (long)puVar13 & 0xffffffff), iVar15 == 0
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
  unaff_x28[0xd] = (long)piVar46;
joined_r0x00d9b8dc:
  if ((in_stack_00000090 & 1) != 0) {
    operator_delete(in_stack_000000a0);
  }
  if ((*(byte *)(unaff_x29 + -0x88) & 1) != 0) {
    operator_delete(*(void **)(unaff_x29 + -0x78));
  }
                    /* try { // try from 00d9ae90 to 00e9aed3 has its CatchHandler @ 00d9bc24 */
  if (*(long *)(unaff_x19 + 0x28) == *(long *)(unaff_x29 + -0x70)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

