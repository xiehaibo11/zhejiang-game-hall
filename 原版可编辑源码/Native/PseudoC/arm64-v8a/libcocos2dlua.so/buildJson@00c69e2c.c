
/* cocostudio::TriggerMng::buildJson(rapidjson::GenericDocument<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAllocator>&,
   cocostudio::CocoLoader*, cocostudio::stExpCocoNode*) */

void __thiscall
cocostudio::TriggerMng::buildJson
          (TriggerMng *this,GenericDocument *param_1,CocoLoader *param_2,stExpCocoNode *param_3)

{
  uint uVar1;
  ulong uVar2;
  size_t sVar3;
  void *pvVar4;
  long lVar5;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  long lVar15;
  long lVar16;
  char *pcVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  stExpCocoNode *psVar21;
  stExpCocoNode *this_00;
  undefined8 uVar22;
  void *pvVar23;
  void *pvVar24;
  undefined8 *puVar25;
  ushort uVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  MemoryPoolAllocator<rapidjson::CrtAllocator> *this_01;
  byte bVar30;
  ulong uVar31;
  ulong uVar32;
  ulong uVar33;
  double dVar34;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_170 [8];
  ulong local_168;
  void *local_160;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_158 [8];
  ulong local_150;
  void *local_148;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_140 [8];
  ulong local_138;
  void *local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 local_110;
  void *local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  ulong local_e8;
  undefined8 local_e0;
  void *local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  char *local_a8;
  undefined8 local_a0;
  double local_98;
  char *local_90;
  long local_88;
  long local_80;
  
  lVar5 = tpidr_el0;
  local_80 = *(long *)(lVar5 + 0x28);
  uVar7 = stExpCocoNode::GetChildNum(param_3 + 0xd0);
  lVar15 = stExpCocoNode::GetChildArray(param_3 + 0xd0,param_2);
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0x4000000000000;
  if (0 < (int)uVar7) {
    this_01 = *(MemoryPoolAllocator<rapidjson::CrtAllocator> **)(param_1 + 0x18);
    pvVar23 = (void *)((ulong)local_140 | 1);
    uVar28 = 0;
    pvVar24 = (void *)((ulong)local_158 | 1);
    do {
      uStack_c0 = 0;
      local_b8 = 0x3000000000000;
      local_c8 = 0;
      psVar21 = (stExpCocoNode *)(lVar15 + uVar28 * 0x10);
      uVar8 = stExpCocoNode::GetChildNum(psVar21);
      lVar16 = stExpCocoNode::GetChildArray(psVar21,param_2);
      if (0 < (int)uVar8) {
        uVar31 = 0;
        do {
          psVar21 = (stExpCocoNode *)(lVar16 + uVar31 * 0x10);
          pcVar17 = (char *)stExpCocoNode::GetName(psVar21,param_2);
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          basic_string<decltype(nullptr)>(local_140,pcVar17);
          pcVar17 = (char *)stExpCocoNode::GetValue(psVar21,param_2);
          bVar6 = local_140[0];
          uVar27 = (ulong)((byte)local_140[0] >> 1);
          if (((byte)local_140[0] & 1) != 0) {
            uVar27 = local_138;
          }
          sVar3 = 7;
          if (uVar27 < 8) {
            sVar3 = uVar27;
          }
          if (sVar3 == 0) {
LAB_00c69fc0:
            if (7 < uVar27 == 6 < uVar27) goto LAB_00c6a558;
            local_d8 = (void *)0x0;
            uStack_d0 = 0x4000000000000;
            local_e0 = 0;
            uVar10 = stExpCocoNode::GetChildNum(psVar21);
            lVar18 = stExpCocoNode::GetChildArray(psVar21,param_2);
            if (0 < (int)uVar10) {
              uVar27 = 0;
              do {
                uStack_f0 = 0;
                local_e8 = 0x3000000000000;
                local_f8 = 0;
                psVar21 = (stExpCocoNode *)(lVar18 + uVar27 * 0x10);
                uVar11 = stExpCocoNode::GetChildNum(psVar21);
                lVar19 = stExpCocoNode::GetChildArray(psVar21,param_2);
                if (0 < (int)uVar11) {
                  uVar32 = 0;
                  do {
                    psVar21 = (stExpCocoNode *)(lVar19 + uVar32 * 0x10);
                    pcVar17 = (char *)stExpCocoNode::GetName(psVar21,param_2);
                    std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    basic_string<decltype(nullptr)>(local_158,pcVar17);
                    pcVar17 = (char *)stExpCocoNode::GetValue(psVar21,param_2);
                    bVar6 = local_158[0];
                    uVar29 = (ulong)((byte)local_158[0] >> 1);
                    if (((byte)local_158[0] & 1) != 0) {
                      uVar29 = local_150;
                    }
                    sVar3 = 9;
                    if (uVar29 < 10) {
                      sVar3 = uVar29;
                    }
                    if (sVar3 == 0) {
LAB_00c6a158:
                      if (9 < uVar29 == 8 < uVar29) {
                        if (sVar3 != 0) goto LAB_00c6a1bc;
                        goto LAB_00c6a1e0;
                      }
                      if (pcVar17 != (char *)0x0) {
                        rapidjson::
                        GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                        ::GenericValue((GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                                        *)&local_b0,pcVar17,(MemoryPoolAllocator *)this_01);
                        local_98 = 4.44659081257122e-323;
                        local_88 = 0x405000000000000;
                        local_90 = "classname";
                        rapidjson::
                        GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                        ::AddMember((GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                                     *)&local_f8,(GenericValue *)&local_98,(GenericValue *)&local_b0
                                    ,(MemoryPoolAllocator *)this_01);
                      }
                    }
                    else {
                      pvVar4 = pvVar24;
                      if (((byte)local_158[0] & 1) != 0) {
                        pvVar4 = local_148;
                      }
                      iVar9 = memcmp(pvVar4,"classname",sVar3);
                      if (iVar9 == 0) goto LAB_00c6a158;
LAB_00c6a1bc:
                      pvVar4 = pvVar24;
                      if (((byte)bVar6 & 1) != 0) {
                        pvVar4 = local_148;
                      }
                      iVar9 = memcmp(pvVar4,"dataitems",sVar3);
                      if (iVar9 == 0) {
LAB_00c6a1e0:
                        if (9 < uVar29 != 8 < uVar29) {
                          local_108 = (void *)0x0;
                          uStack_100 = 0x4000000000000;
                          local_110 = 0;
                          uVar12 = stExpCocoNode::GetChildNum(psVar21);
                          lVar20 = stExpCocoNode::GetChildArray(psVar21,param_2);
                          if (0 < (int)uVar12) {
                            uVar29 = 0;
                            do {
                              uStack_120 = 0;
                              local_118 = 0x3000000000000;
                              local_128 = 0;
                              psVar21 = (stExpCocoNode *)(lVar20 + uVar29 * 0x10);
                              uVar13 = stExpCocoNode::GetChildNum(psVar21);
                              uVar33 = (ulong)uVar13;
                              psVar21 = (stExpCocoNode *)
                                        stExpCocoNode::GetChildArray(psVar21,param_2);
                              if (0 < (int)uVar13) {
                                do {
                                  pcVar17 = (char *)stExpCocoNode::GetName(psVar21,param_2);
                                  std::__ndk1::
                                  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                  ::basic_string<decltype(nullptr)>(local_170,pcVar17);
                                  pcVar17 = (char *)stExpCocoNode::GetValue(psVar21,param_2);
                                  uVar2 = (ulong)((byte)local_170[0] >> 1);
                                  if (((byte)local_170[0] & 1) != 0) {
                                    uVar2 = local_168;
                                  }
                                  sVar3 = 3;
                                  if (uVar2 < 4) {
                                    sVar3 = uVar2;
                                  }
                                  if (sVar3 == 0) {
LAB_00c6a348:
                                    if (3 < uVar2 == 2 < uVar2) goto LAB_00c6a3a0;
                                    if (pcVar17 != (char *)0x0) {
                                      rapidjson::
                                      GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                                      ::GenericValue((
                                                  GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                                                  *)&local_b0,pcVar17,(MemoryPoolAllocator *)this_01
                                                  );
                                      local_88 = 0x405000000000000;
                                      local_98 = 1.48219693752374e-323;
                                      local_90 = "key";
                                      rapidjson::
                                      GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                                      ::AddMember((
                                                  GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                                                  *)&local_128,(GenericValue *)&local_98,
                                                  (GenericValue *)&local_b0,
                                                  (MemoryPoolAllocator *)this_01);
                                    }
                                  }
                                  else {
                                    pvVar4 = (void *)((ulong)local_170 | 1);
                                    if (((byte)local_170[0] & 1) != 0) {
                                      pvVar4 = local_160;
                                    }
                                    iVar9 = memcmp(pvVar4,"key",sVar3);
                                    if (iVar9 == 0) goto LAB_00c6a348;
LAB_00c6a3a0:
                                    iVar9 = stExpCocoNode::GetType(psVar21,param_2);
                                    if (iVar9 == 5) {
                                      rapidjson::
                                      GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                                      ::GenericValue((
                                                  GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                                                  *)&local_b0,pcVar17,(MemoryPoolAllocator *)this_01
                                                  );
                                      local_98 = 2.47032822920623e-323;
                                      local_88 = 0x405000000000000;
                                      local_90 = "value";
                                      rapidjson::
                                      GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                                      ::AddMember((
                                                  GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                                                  *)&local_128,(GenericValue *)&local_98,
                                                  (GenericValue *)&local_b0,
                                                  (MemoryPoolAllocator *)this_01);
                                    }
                                    else {
                                      iVar9 = atoi(pcVar17);
                                      dVar34 = (double)cocos2d::utils::atof(pcVar17);
                                      if (1e-07 <= ABS((float)iVar9 - (float)dVar34)) {
                                        local_b0 = 5;
                                        local_a0 = 0x405000000000000;
                                        local_a8 = "value";
                                        local_98 = (double)(float)dVar34;
                                        local_90 = (char *)0x0;
                                        local_88 = 0x216000000000000;
                                        rapidjson::
                                        GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                                        ::AddMember((
                                                  GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                                                  *)&local_128,(GenericValue *)&local_b0,
                                                  (GenericValue *)&local_98,
                                                  (MemoryPoolAllocator *)this_01);
                                      }
                                      else {
                                        local_b0 = 5;
                                        local_a0 = 0x405000000000000;
                                        local_a8 = "value";
                                        local_98 = (double)(long)iVar9;
                                        local_90 = (char *)0x0;
                                        uVar26 = 0x1f6;
                                        if (iVar9 < 0) {
                                          uVar26 = 0xb6;
                                        }
                                        local_88 = (ulong)uVar26 << 0x30;
                                        rapidjson::
                                        GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                                        ::AddMember((
                                                  GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                                                  *)&local_128,(GenericValue *)&local_b0,
                                                  (GenericValue *)&local_98,
                                                  (MemoryPoolAllocator *)this_01);
                                      }
                                    }
                                  }
                                  if (((byte)local_170[0] & 1) != 0) {
                                    operator_delete(local_160);
                                  }
                                  uVar33 = uVar33 - 1;
                                  psVar21 = psVar21 + 0x10;
                                } while (uVar33 != 0);
                              }
                              uVar13 = (uint)local_110;
                              if (local_110._4_4_ <= (uint)local_110) {
                                if (local_110._4_4_ == 0) {
                                  uVar33 = 0x10;
                                }
                                else {
                                  uVar1 = local_110._4_4_ + (local_110._4_4_ + 1 >> 1);
                                  uVar33 = (ulong)uVar1;
                                  if (uVar1 <= local_110._4_4_) goto LAB_00c6a264;
                                }
                                local_108 = (void *)rapidjson::
                                                    MemoryPoolAllocator<rapidjson::CrtAllocator>::
                                                    Realloc(this_01,local_108,
                                                            (ulong)local_110._4_4_ * 0x18,
                                                            uVar33 * 0x18);
                                uVar13 = (uint)local_110;
                                local_110 = uVar33 << 0x20;
                              }
LAB_00c6a264:
                              local_110 = CONCAT44(local_110._4_4_,uVar13 + 1);
                              uVar29 = uVar29 + 1;
                              puVar25 = (undefined8 *)((long)local_108 + (ulong)uVar13 * 0x18);
                              puVar25[2] = local_118;
                              puVar25[1] = uStack_120;
                              *puVar25 = local_128;
                            } while (uVar29 != uVar12);
                          }
                          local_98 = 4.44659081257122e-323;
                          local_88 = 0x405000000000000;
                          local_90 = "dataitems";
                          rapidjson::
                          GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                          ::AddMember((GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                                       *)&local_f8,(GenericValue *)&local_98,
                                      (GenericValue *)&local_110,(MemoryPoolAllocator *)this_01);
                        }
                      }
                    }
                    if (((byte)local_158[0] & 1) != 0) {
                      operator_delete(local_148);
                    }
                    uVar32 = uVar32 + 1;
                  } while (uVar32 != uVar11);
                }
                uVar11 = (uint)local_e0;
                if (local_e0._4_4_ <= (uint)local_e0) {
                  if (local_e0._4_4_ == 0) {
                    uVar32 = 0x10;
                  }
                  else {
                    uVar12 = local_e0._4_4_ + (local_e0._4_4_ + 1 >> 1);
                    uVar32 = (ulong)uVar12;
                    if (uVar12 <= local_e0._4_4_) goto LAB_00c6a044;
                  }
                  local_d8 = (void *)rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>::
                                     Realloc(this_01,local_d8,(ulong)local_e0._4_4_ * 0x18,
                                             uVar32 * 0x18);
                  uVar11 = (uint)local_e0;
                  local_e0 = uVar32 << 0x20;
                }
LAB_00c6a044:
                local_e0 = CONCAT44(local_e0._4_4_,uVar11 + 1);
                uVar27 = uVar27 + 1;
                puVar25 = (undefined8 *)((long)local_d8 + (ulong)uVar11 * 0x18);
                puVar25[2] = local_e8;
                puVar25[1] = uStack_f0;
                *puVar25 = local_f8;
              } while (uVar27 != uVar10);
            }
            local_98 = 3.45845952088873e-323;
            local_88 = 0x405000000000000;
            local_90 = "actions";
            rapidjson::
            GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
            ::AddMember((GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                         *)&local_c8,(GenericValue *)&local_98,(GenericValue *)&local_e0,
                        (MemoryPoolAllocator *)this_01);
          }
          else {
            pvVar4 = pvVar23;
            if (((byte)local_140[0] & 1) != 0) {
              pvVar4 = local_130;
            }
            iVar9 = memcmp(pvVar4,"actions",sVar3);
            if (iVar9 == 0) goto LAB_00c69fc0;
LAB_00c6a558:
            sVar3 = 10;
            if (uVar27 < 0xb) {
              sVar3 = uVar27;
            }
            if (sVar3 == 0) {
LAB_00c6a588:
              if (10 < uVar27 != 9 < uVar27) {
                local_d8 = (void *)0x0;
                uStack_d0 = 0x4000000000000;
                local_e0 = 0;
                uVar10 = stExpCocoNode::GetChildNum(psVar21);
                lVar18 = stExpCocoNode::GetChildArray(psVar21,param_2);
                if (0 < (int)uVar10) {
                  uVar27 = 0;
                  do {
                    uStack_f0 = 0;
                    local_e8 = 0x3000000000000;
                    local_f8 = 0;
                    psVar21 = (stExpCocoNode *)(lVar18 + uVar27 * 0x10);
                    uVar11 = stExpCocoNode::GetChildNum(psVar21);
                    lVar19 = stExpCocoNode::GetChildArray(psVar21,param_2);
                    if (0 < (int)uVar11) {
                      uVar32 = 0;
                      do {
                        psVar21 = (stExpCocoNode *)(lVar19 + uVar32 * 0x10);
                        pcVar17 = (char *)stExpCocoNode::GetName(psVar21,param_2);
                        std::__ndk1::
                        basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        ::basic_string<decltype(nullptr)>(local_158,pcVar17);
                        pcVar17 = (char *)stExpCocoNode::GetValue(psVar21,param_2);
                        bVar6 = local_158[0];
                        uVar29 = (ulong)((byte)local_158[0] >> 1);
                        if (((byte)local_158[0] & 1) != 0) {
                          uVar29 = local_150;
                        }
                        sVar3 = 9;
                        if (uVar29 < 10) {
                          sVar3 = uVar29;
                        }
                        if (sVar3 == 0) {
LAB_00c6a720:
                          if (9 < uVar29 == 8 < uVar29) {
                            if (sVar3 != 0) goto LAB_00c6a784;
                            goto LAB_00c6a7a8;
                          }
                          if (pcVar17 != (char *)0x0) {
                            rapidjson::
                            GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                            ::GenericValue((GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                                            *)&local_b0,pcVar17,(MemoryPoolAllocator *)this_01);
                            local_98 = 4.44659081257122e-323;
                            local_88 = 0x405000000000000;
                            local_90 = "classname";
                            rapidjson::
                            GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                            ::AddMember((GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                                         *)&local_f8,(GenericValue *)&local_98,
                                        (GenericValue *)&local_b0,(MemoryPoolAllocator *)this_01);
                          }
                        }
                        else {
                          pvVar4 = pvVar24;
                          if (((byte)local_158[0] & 1) != 0) {
                            pvVar4 = local_148;
                          }
                          iVar9 = memcmp(pvVar4,"classname",sVar3);
                          if (iVar9 == 0) goto LAB_00c6a720;
LAB_00c6a784:
                          pvVar4 = pvVar24;
                          if (((byte)bVar6 & 1) != 0) {
                            pvVar4 = local_148;
                          }
                          iVar9 = memcmp(pvVar4,"dataitems",sVar3);
                          if (iVar9 == 0) {
LAB_00c6a7a8:
                            if (9 < uVar29 != 8 < uVar29) {
                              local_108 = (void *)0x0;
                              uStack_100 = 0x4000000000000;
                              local_110 = 0;
                              uVar12 = stExpCocoNode::GetChildNum(psVar21);
                              lVar20 = stExpCocoNode::GetChildArray(psVar21,param_2);
                              if (0 < (int)uVar12) {
                                uVar29 = 0;
                                do {
                                  uStack_120 = 0;
                                  local_118 = 0x3000000000000;
                                  local_128 = 0;
                                  psVar21 = (stExpCocoNode *)(lVar20 + uVar29 * 0x10);
                                  uVar13 = stExpCocoNode::GetChildNum(psVar21);
                                  uVar33 = (ulong)uVar13;
                                  psVar21 = (stExpCocoNode *)
                                            stExpCocoNode::GetChildArray(psVar21,param_2);
                                  if (0 < (int)uVar13) {
                                    do {
                                      pcVar17 = (char *)stExpCocoNode::GetName(psVar21,param_2);
                                      std::__ndk1::
                                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                      ::basic_string<decltype(nullptr)>(local_170,pcVar17);
                                      pcVar17 = (char *)stExpCocoNode::GetValue(psVar21,param_2);
                                      uVar2 = (ulong)((byte)local_170[0] >> 1);
                                      if (((byte)local_170[0] & 1) != 0) {
                                        uVar2 = local_168;
                                      }
                                      sVar3 = 3;
                                      if (uVar2 < 4) {
                                        sVar3 = uVar2;
                                      }
                                      if (sVar3 == 0) {
LAB_00c6a910:
                                        if (3 < uVar2 == 2 < uVar2) goto LAB_00c6a968;
                                        if (pcVar17 != (char *)0x0) {
                                          rapidjson::
                                          GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                                          ::GenericValue((
                                                  GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                                                  *)&local_b0,pcVar17,(MemoryPoolAllocator *)this_01
                                                  );
                                          local_88 = 0x405000000000000;
                                          local_98 = 1.48219693752374e-323;
                                          local_90 = "key";
                                          rapidjson::
                                          GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                                          ::AddMember((
                                                  GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                                                  *)&local_128,(GenericValue *)&local_98,
                                                  (GenericValue *)&local_b0,
                                                  (MemoryPoolAllocator *)this_01);
                                        }
                                      }
                                      else {
                                        pvVar4 = (void *)((ulong)local_170 | 1);
                                        if (((byte)local_170[0] & 1) != 0) {
                                          pvVar4 = local_160;
                                        }
                                        iVar9 = memcmp(pvVar4,"key",sVar3);
                                        if (iVar9 == 0) goto LAB_00c6a910;
LAB_00c6a968:
                                        iVar9 = stExpCocoNode::GetType(psVar21,param_2);
                                        if (iVar9 == 5) {
                                          rapidjson::
                                          GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                                          ::GenericValue((
                                                  GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                                                  *)&local_b0,pcVar17,(MemoryPoolAllocator *)this_01
                                                  );
                                          local_98 = 2.47032822920623e-323;
                                          local_88 = 0x405000000000000;
                                          local_90 = "value";
                                          rapidjson::
                                          GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                                          ::AddMember((
                                                  GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                                                  *)&local_128,(GenericValue *)&local_98,
                                                  (GenericValue *)&local_b0,
                                                  (MemoryPoolAllocator *)this_01);
                                        }
                                        else {
                                          iVar9 = atoi(pcVar17);
                                          dVar34 = (double)cocos2d::utils::atof(pcVar17);
                                          if (1e-07 <= ABS((float)iVar9 - (float)dVar34)) {
                                            local_b0 = 5;
                                            local_a0 = 0x405000000000000;
                                            local_a8 = "value";
                                            local_98 = (double)(float)dVar34;
                                            local_90 = (char *)0x0;
                                            local_88 = 0x216000000000000;
                                            rapidjson::
                                            GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                                            ::AddMember((
                                                  GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                                                  *)&local_128,(GenericValue *)&local_b0,
                                                  (GenericValue *)&local_98,
                                                  (MemoryPoolAllocator *)this_01);
                                          }
                                          else {
                                            local_b0 = 5;
                                            local_a0 = 0x405000000000000;
                                            local_a8 = "value";
                                            local_98 = (double)(long)iVar9;
                                            local_90 = (char *)0x0;
                                            uVar26 = 0x1f6;
                                            if (iVar9 < 0) {
                                              uVar26 = 0xb6;
                                            }
                                            local_88 = (ulong)uVar26 << 0x30;
                                            rapidjson::
                                            GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                                            ::AddMember((
                                                  GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                                                  *)&local_128,(GenericValue *)&local_b0,
                                                  (GenericValue *)&local_98,
                                                  (MemoryPoolAllocator *)this_01);
                                          }
                                        }
                                      }
                                      if (((byte)local_170[0] & 1) != 0) {
                                        operator_delete(local_160);
                                      }
                                      uVar33 = uVar33 - 1;
                                      psVar21 = psVar21 + 0x10;
                                    } while (uVar33 != 0);
                                  }
                                  uVar13 = (uint)local_110;
                                  if (local_110._4_4_ <= (uint)local_110) {
                                    if (local_110._4_4_ == 0) {
                                      uVar33 = 0x10;
                                    }
                                    else {
                                      uVar1 = local_110._4_4_ + (local_110._4_4_ + 1 >> 1);
                                      uVar33 = (ulong)uVar1;
                                      if (uVar1 <= local_110._4_4_) goto LAB_00c6a82c;
                                    }
                                    local_108 = (void *)rapidjson::
                                                        MemoryPoolAllocator<rapidjson::CrtAllocator>
                                                        ::Realloc(this_01,local_108,
                                                                  (ulong)local_110._4_4_ * 0x18,
                                                                  uVar33 * 0x18);
                                    uVar13 = (uint)local_110;
                                    local_110 = uVar33 << 0x20;
                                  }
LAB_00c6a82c:
                                  local_110 = CONCAT44(local_110._4_4_,uVar13 + 1);
                                  uVar29 = uVar29 + 1;
                                  puVar25 = (undefined8 *)((long)local_108 + (ulong)uVar13 * 0x18);
                                  puVar25[2] = local_118;
                                  puVar25[1] = uStack_120;
                                  *puVar25 = local_128;
                                } while (uVar29 != uVar12);
                              }
                              local_98 = 4.44659081257122e-323;
                              local_88 = 0x405000000000000;
                              local_90 = "dataitems";
                              rapidjson::
                              GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                              ::AddMember((GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                                           *)&local_f8,(GenericValue *)&local_98,
                                          (GenericValue *)&local_110,(MemoryPoolAllocator *)this_01)
                              ;
                            }
                          }
                        }
                        if (((byte)local_158[0] & 1) != 0) {
                          operator_delete(local_148);
                        }
                        uVar32 = uVar32 + 1;
                      } while (uVar32 != uVar11);
                    }
                    uVar11 = (uint)local_e0;
                    if (local_e0._4_4_ <= (uint)local_e0) {
                      if (local_e0._4_4_ == 0) {
                        uVar32 = 0x10;
                      }
                      else {
                        uVar12 = local_e0._4_4_ + (local_e0._4_4_ + 1 >> 1);
                        uVar32 = (ulong)uVar12;
                        if (uVar12 <= local_e0._4_4_) goto LAB_00c6a60c;
                      }
                      local_d8 = (void *)rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>::
                                         Realloc(this_01,local_d8,(ulong)local_e0._4_4_ * 0x18,
                                                 uVar32 * 0x18);
                      uVar11 = (uint)local_e0;
                      local_e0 = uVar32 << 0x20;
                    }
LAB_00c6a60c:
                    local_e0 = CONCAT44(local_e0._4_4_,uVar11 + 1);
                    uVar27 = uVar27 + 1;
                    puVar25 = (undefined8 *)((long)local_d8 + (ulong)uVar11 * 0x18);
                    puVar25[2] = local_e8;
                    puVar25[1] = uStack_f0;
                    *puVar25 = local_f8;
                  } while (uVar27 != uVar10);
                }
                local_98 = 4.94065645841247e-323;
                local_88 = 0x405000000000000;
                local_90 = "conditions";
                rapidjson::
                GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                ::AddMember((GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                             *)&local_c8,(GenericValue *)&local_98,(GenericValue *)&local_e0,
                            (MemoryPoolAllocator *)this_01);
                goto LAB_00c6ae70;
              }
            }
            else {
              pvVar4 = pvVar23;
              if (((byte)bVar6 & 1) != 0) {
                pvVar4 = local_130;
              }
              iVar9 = memcmp(pvVar4,"conditions",sVar3);
              if (iVar9 == 0) goto LAB_00c6a588;
            }
            sVar3 = 6;
            if (uVar27 < 7) {
              sVar3 = uVar27;
            }
            if (sVar3 == 0) {
LAB_00c6ab50:
              if (6 < uVar27 != 5 < uVar27) {
                local_d8 = (void *)0x0;
                uStack_d0 = 0x4000000000000;
                local_e0 = 0;
                iVar9 = stExpCocoNode::GetChildNum(psVar21);
                psVar21 = (stExpCocoNode *)stExpCocoNode::GetChildArray(psVar21,param_2);
                if (0 < iVar9) {
                  do {
                    uStack_f0 = 0;
                    local_e8 = 0x3000000000000;
                    local_f8 = 0;
                    this_00 = (stExpCocoNode *)stExpCocoNode::GetChildArray(psVar21,param_2);
                    pcVar17 = (char *)stExpCocoNode::GetName(this_00,param_2);
                    std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    basic_string<decltype(nullptr)>(local_158,pcVar17);
                    pcVar17 = (char *)stExpCocoNode::GetValue(this_00,param_2);
                    uVar27 = (ulong)((byte)local_158[0] >> 1);
                    if (((byte)local_158[0] & 1) != 0) {
                      uVar27 = local_150;
                    }
                    sVar3 = 2;
                    if (uVar27 < 3) {
                      sVar3 = uVar27;
                    }
                    bVar30 = (byte)local_158[0] & 1;
                    if (sVar3 == 0) {
LAB_00c6ac2c:
                      if ((pcVar17 != (char *)0x0) && (2 < uVar27 != 1 < uVar27)) {
                        iVar14 = atoi(pcVar17);
                        local_b0 = 2;
                        local_a0 = 0x405000000000000;
                        local_a8 = "id";
                        local_98 = (double)(long)iVar14;
                        local_90 = (char *)0x0;
                        uVar26 = 0x1f6;
                        if (iVar14 < 0) {
                          uVar26 = 0xb6;
                        }
                        local_88 = (ulong)uVar26 << 0x30;
                        rapidjson::
                        GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                        ::AddMember((GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                                     *)&local_f8,(GenericValue *)&local_b0,(GenericValue *)&local_98
                                    ,(MemoryPoolAllocator *)this_01);
                        uVar10 = (uint)local_e0;
                        if (local_e0._4_4_ <= (uint)local_e0) {
                          if (local_e0._4_4_ == 0) {
                            uVar11 = 0x10;
                          }
                          else {
                            uVar11 = local_e0._4_4_ + (local_e0._4_4_ + 1 >> 1);
                            if (uVar11 <= local_e0._4_4_) goto LAB_00c6acf0;
                          }
                          local_d8 = (void *)rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>
                                             ::Realloc(this_01,local_d8,(ulong)local_e0._4_4_ * 0x18
                                                       ,(ulong)uVar11 * 0x18);
                          uVar10 = (uint)local_e0;
                          local_e0 = (ulong)uVar11 << 0x20;
                        }
LAB_00c6acf0:
                        local_e0 = CONCAT44(local_e0._4_4_,uVar10 + 1);
                        puVar25 = (undefined8 *)((long)local_d8 + (ulong)uVar10 * 0x18);
                        puVar25[2] = local_e8;
                        puVar25[1] = uStack_f0;
                        *puVar25 = local_f8;
                        local_e8 = local_e8 & 0xffffffffffff;
                        bVar30 = (byte)local_158[0] & 1;
                      }
                    }
                    else {
                      pvVar4 = pvVar24;
                      if (((byte)local_158[0] & 1) != 0) {
                        pvVar4 = local_148;
                      }
                      iVar14 = memcmp(pvVar4,"id",sVar3);
                      if (iVar14 == 0) goto LAB_00c6ac2c;
                    }
                    if (bVar30 != 0) {
                      operator_delete(local_148);
                    }
                    iVar9 = iVar9 + -1;
                  } while (iVar9 != 0);
                }
                local_98 = 2.96439387504748e-323;
                local_88 = 0x405000000000000;
                local_90 = "events";
                rapidjson::
                GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                ::AddMember((GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                             *)&local_c8,(GenericValue *)&local_98,(GenericValue *)&local_e0,
                            (MemoryPoolAllocator *)this_01);
                goto LAB_00c6ae70;
              }
            }
            else {
              pvVar4 = pvVar23;
              if (((byte)bVar6 & 1) != 0) {
                pvVar4 = local_130;
              }
              iVar9 = memcmp(pvVar4,"events",sVar3);
              if (iVar9 == 0) goto LAB_00c6ab50;
            }
            sVar3 = 2;
            if (uVar27 < 3) {
              sVar3 = uVar27;
            }
            if (sVar3 != 0) {
              pvVar4 = pvVar23;
              if (((byte)bVar6 & 1) != 0) {
                pvVar4 = local_130;
              }
              iVar9 = memcmp(pvVar4,"id",sVar3);
              if (iVar9 != 0) goto LAB_00c6ae70;
            }
            if ((pcVar17 != (char *)0x0) && (2 < uVar27 != 1 < uVar27)) {
              iVar9 = atoi(pcVar17);
              local_b0 = 2;
              local_a0 = 0x405000000000000;
              local_a8 = "id";
              local_98 = (double)(long)iVar9;
              local_90 = (char *)0x0;
              uVar26 = 0x1f6;
              if (iVar9 < 0) {
                uVar26 = 0xb6;
              }
              local_88 = (ulong)uVar26 << 0x30;
              rapidjson::
              GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
              ::AddMember((GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                           *)&local_c8,(GenericValue *)&local_b0,(GenericValue *)&local_98,
                          (MemoryPoolAllocator *)this_01);
            }
          }
LAB_00c6ae70:
          if (((byte)local_140[0] & 1) != 0) {
            operator_delete(local_130);
          }
          uVar31 = uVar31 + 1;
        } while (uVar31 != uVar8);
      }
      uVar8 = *(uint *)param_1;
      uVar10 = *(uint *)(param_1 + 4);
      if (uVar10 <= uVar8) {
        if (uVar10 == 0) {
          uVar11 = 0x10;
        }
        else {
          uVar11 = uVar10 + (uVar10 + 1 >> 1);
          if (uVar11 <= uVar10) goto LAB_00c6aee4;
        }
        uVar22 = rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>::Realloc
                           (this_01,*(void **)(param_1 + 8),(ulong)uVar10 * 0x18,
                            (ulong)uVar11 * 0x18);
        uVar8 = *(uint *)param_1;
        *(undefined8 *)(param_1 + 8) = uVar22;
        *(uint *)(param_1 + 4) = uVar11;
      }
LAB_00c6aee4:
      *(uint *)param_1 = uVar8 + 1;
      uVar28 = uVar28 + 1;
      puVar25 = (undefined8 *)(*(long *)(param_1 + 8) + (ulong)uVar8 * 0x18);
      puVar25[2] = local_b8;
      puVar25[1] = uStack_c0;
      *puVar25 = local_c8;
    } while (uVar28 != uVar7);
  }
  if (*(long *)(lVar5 + 0x28) == local_80) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

