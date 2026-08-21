
/* cocos2d::Bundle3D::loadNodes(cocos2d::NodeDatas&) */

undefined8 __thiscall cocos2d::Bundle3D::loadNodes(Bundle3D *this,NodeDatas *param_1)

{
  undefined8 *puVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar2;
  NodeData **ppNVar3;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar4;
  int *piVar5;
  Bundle3D BVar6;
  long lVar7;
  bool bVar8;
  int iVar9;
  ulong uVar10;
  void *pvVar11;
  undefined8 *puVar12;
  NodeData *pNVar13;
  ModelData *pMVar14;
  long *plVar15;
  long lVar16;
  ulong uVar17;
  Bundle3D *__s1;
  long lVar18;
  long *plVar19;
  int *piVar20;
  ulong uVar21;
  long lVar22;
  ulong uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  ModelData *local_130;
  NodeData *local_128 [2];
  void *local_118;
  basic_string *local_110;
  basic_string *pbStack_108;
  undefined8 uStack_100;
  long local_f8;
  long local_f0;
  undefined8 uStack_e8;
  Mat4 *local_e0;
  Mat4 *pMStack_d8;
  undefined8 local_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  long *local_98;
  long local_90;
  undefined8 local_88;
  int local_80;
  long local_70;
  
  lVar7 = tpidr_el0;
  local_70 = *(long *)(lVar7 + 0x28);
  BVar6 = this[0x38];
  uVar10 = (ulong)((byte)BVar6 >> 1);
  if (((byte)BVar6 & 1) != 0) {
    uVar10 = *(ulong *)(this + 0x40);
  }
  if (uVar10 == 3) {
    __s1 = *(Bundle3D **)(this + 0x48);
    if (((byte)BVar6 & 1) == 0) {
      __s1 = this + 0x39;
    }
    iVar9 = memcmp(__s1,&DAT_0149b808,3);
    if (((iVar9 == 0) || (iVar9 = memcmp(__s1,&DAT_013d2af7,3), iVar9 == 0)) ||
       (iVar9 = memcmp(__s1,&DAT_012f2699,3), iVar9 == 0)) {
      local_90 = 0;
      local_88 = 0;
      pbStack_108 = (basic_string *)0x0;
      local_110 = (basic_string *)0x0;
      local_f8 = 0;
      uStack_100 = 0;
      uStack_e8 = 0;
      local_f0 = 0;
      pMStack_d8 = (Mat4 *)0x0;
      local_e0 = (Mat4 *)0x0;
      lStack_c8 = 0;
      local_d0 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      uStack_a8 = 0;
      local_b0 = 0;
      local_a0 = 0;
      local_98 = &local_90;
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 local_128,"");
      uVar10 = (**(code **)(*(long *)this + 0x10))(this,local_128,&local_110);
      if (((byte)local_128[0]._0_1_ & 1) != 0) {
        operator_delete(local_118);
      }
      if ((uVar10 & 1) == 0) {
        pNVar13 = operator_new(0x90,(nothrow_t *)&std::nothrow);
        if (pNVar13 != (NodeData *)0x0) {
          *(undefined8 *)(pNVar13 + 0x28) = 0;
          *(undefined8 *)(pNVar13 + 0x20) = 0;
          *(undefined ***)pNVar13 = &PTR__NodeData_016d3488;
          *(undefined8 *)(pNVar13 + 0x78) = 0;
          *(undefined8 *)(pNVar13 + 0x70) = 0;
          *(undefined8 *)(pNVar13 + 0x88) = 0;
          *(undefined8 *)(pNVar13 + 0x80) = 0;
          *(undefined8 *)(pNVar13 + 0x58) = 0;
          *(undefined8 *)(pNVar13 + 0x50) = 0;
          *(undefined8 *)(pNVar13 + 0x68) = 0;
          *(undefined8 *)(pNVar13 + 0x60) = 0;
          *(undefined8 *)(pNVar13 + 0x38) = 0;
          *(undefined8 *)(pNVar13 + 0x30) = 0;
          *(undefined8 *)(pNVar13 + 0x48) = 0;
          *(undefined8 *)(pNVar13 + 0x40) = 0;
          *(undefined8 *)(pNVar13 + 8) = 0;
          *(undefined8 *)(pNVar13 + 0x10) = 0;
          *(undefined8 *)(pNVar13 + 0x18) = 0;
          Mat4::Mat4((Mat4 *)(pNVar13 + 0x20));
          *(undefined8 *)(pNVar13 + 0x78) = 0;
          *(undefined8 *)(pNVar13 + 0x70) = 0;
          *(undefined8 *)(pNVar13 + 0x88) = 0;
          *(undefined8 *)(pNVar13 + 0x80) = 0;
          *(undefined8 *)(pNVar13 + 0x68) = 0;
          *(undefined8 *)(pNVar13 + 0x60) = 0;
        }
        local_128[0] = pNVar13;
        pMVar14 = operator_new(0x68,(nothrow_t *)&std::nothrow);
        if (pMVar14 != (ModelData *)0x0) {
          *(undefined8 *)(pMVar14 + 0x10) = 0;
          *(undefined8 *)(pMVar14 + 8) = 0;
          *(undefined8 *)(pMVar14 + 0x20) = 0;
          *(undefined8 *)(pMVar14 + 0x18) = 0;
          *(undefined8 *)(pMVar14 + 0x30) = 0;
          *(undefined8 *)(pMVar14 + 0x28) = 0;
          *(undefined8 *)(pMVar14 + 0x40) = 0;
          *(undefined8 *)(pMVar14 + 0x38) = 0;
          *(undefined8 *)(pMVar14 + 0x50) = 0;
          *(undefined8 *)(pMVar14 + 0x48) = 0;
          *(undefined ***)pMVar14 = &PTR__ModelData_016d34c0;
          *(undefined8 *)(pMVar14 + 0x60) = 0;
          *(undefined8 *)(pMVar14 + 0x58) = 0;
        }
        local_130 = pMVar14;
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (pMVar14 + 0x20),"",0);
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (pMVar14 + 8),"",0);
        puVar12 = *(undefined8 **)(pNVar13 + 0x68);
        if (puVar12 == *(undefined8 **)(pNVar13 + 0x70)) {
          std::__ndk1::vector<cocos2d::ModelData*,std::__ndk1::allocator<cocos2d::ModelData*>>::
          __push_back_slow_path<cocos2d::ModelData*const&>
                    ((vector<cocos2d::ModelData*,std::__ndk1::allocator<cocos2d::ModelData*>> *)
                     (pNVar13 + 0x60),&local_130);
        }
        else {
          *puVar12 = pMVar14;
          *(undefined8 **)(pNVar13 + 0x68) = puVar12 + 1;
        }
        puVar12 = *(undefined8 **)(param_1 + 0x28);
        if (puVar12 == *(undefined8 **)(param_1 + 0x30)) {
          std::__ndk1::vector<cocos2d::NodeData*,std::__ndk1::allocator<cocos2d::NodeData*>>::
          __push_back_slow_path<cocos2d::NodeData*const&>
                    ((vector<cocos2d::NodeData*,std::__ndk1::allocator<cocos2d::NodeData*>> *)
                     (param_1 + 0x20),local_128);
        }
        else {
          *puVar12 = local_128[0];
          *(undefined8 **)(param_1 + 0x28) = puVar12 + 1;
        }
      }
      else {
        lVar18 = (long)pbStack_108 - (long)local_110;
        lVar16 = local_f0 - local_f8;
        uVar23 = (lVar18 >> 3) * -0x5555555555555555;
        uVar21 = (lVar16 >> 3) * -0x5555555555555555;
        uVar10 = uVar21 + uVar23;
        uVar17 = uVar10 * 8;
        if (uVar10 >> 0x3d != 0) {
          uVar17 = 0xffffffffffffffff;
        }
        pvVar11 = operator_new__(uVar17,(nothrow_t *)&std::nothrow);
        if (lVar18 == 0) {
          uVar10 = 0;
        }
        else {
          lVar18 = 0;
          lVar22 = 0;
          uVar10 = 0;
          do {
            puVar12 = operator_new(0x90,(nothrow_t *)&std::nothrow);
            if (puVar12 != (undefined8 *)0x0) {
              puVar12[0xf] = 0;
              puVar12[0xe] = 0;
              puVar12[0x11] = 0;
              puVar12[0x10] = 0;
              puVar12[0xb] = 0;
              puVar12[10] = 0;
              puVar12[0xd] = 0;
              puVar12[0xc] = 0;
              puVar12[7] = 0;
              puVar12[6] = 0;
              puVar12[9] = 0;
              puVar12[8] = 0;
              puVar12[5] = 0;
              puVar12[4] = 0;
              *puVar12 = &PTR__NodeData_016d3488;
              puVar12[1] = 0;
              puVar12[2] = 0;
              puVar12[3] = 0;
              Mat4::Mat4((Mat4 *)(puVar12 + 4));
              puVar12[0xf] = 0;
              puVar12[0xe] = 0;
              puVar12[0x11] = 0;
              puVar12[0x10] = 0;
              puVar12[0xd] = 0;
              puVar12[0xc] = 0;
            }
            *(undefined8 **)((long)pvVar11 + lVar22) = puVar12;
            pbVar2 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)(local_110 + lVar18);
            if (pbVar2 != (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                           *)(puVar12 + 1)) {
              uVar17 = *(ulong *)(pbVar2 + 8);
              pbVar4 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                         **)(pbVar2 + 0x10);
              if (((byte)*pbVar2 & 1) == 0) {
                pbVar4 = pbVar2 + 1;
                uVar17 = (ulong)((byte)*pbVar2 >> 1);
              }
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                        ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                          *)(puVar12 + 1),(char *)pbVar4,uVar17);
              puVar12 = *(undefined8 **)((long)pvVar11 + lVar22);
            }
            uVar10 = uVar10 + 1;
            lVar18 = lVar18 + 0x18;
            puVar1 = (undefined8 *)(lStack_c8 + lVar22 * 8);
            uVar24 = puVar1[4];
            uVar26 = puVar1[7];
            uVar25 = puVar1[6];
            uVar28 = puVar1[1];
            uVar27 = *puVar1;
            uVar30 = puVar1[3];
            uVar29 = puVar1[2];
            lVar22 = lVar22 + 8;
            puVar12[9] = puVar1[5];
            puVar12[8] = uVar24;
            puVar12[0xb] = uVar26;
            puVar12[10] = uVar25;
            puVar12[5] = uVar28;
            puVar12[4] = uVar27;
            puVar12[7] = uVar30;
            puVar12[6] = uVar29;
          } while (uVar10 < uVar23);
        }
        plVar19 = local_98;
        if (lVar16 != 0) {
          lVar16 = 0;
          lVar18 = 0;
          uVar17 = 0;
          do {
            puVar12 = operator_new(0x90,(nothrow_t *)&std::nothrow);
            if (puVar12 != (undefined8 *)0x0) {
              puVar12[0xf] = 0;
              puVar12[0xe] = 0;
              puVar12[0x11] = 0;
              puVar12[0x10] = 0;
              puVar12[0xb] = 0;
              puVar12[10] = 0;
              puVar12[0xd] = 0;
              puVar12[0xc] = 0;
              puVar12[7] = 0;
              puVar12[6] = 0;
              puVar12[9] = 0;
              puVar12[8] = 0;
              puVar12[5] = 0;
              puVar12[4] = 0;
              *puVar12 = &PTR__NodeData_016d3488;
              puVar12[1] = 0;
              puVar12[2] = 0;
              puVar12[3] = 0;
              Mat4::Mat4((Mat4 *)(puVar12 + 4));
              puVar12[0xf] = 0;
              puVar12[0xe] = 0;
              puVar12[0x11] = 0;
              puVar12[0x10] = 0;
              puVar12[0xd] = 0;
              puVar12[0xc] = 0;
            }
            *(undefined8 **)((long)pvVar11 + uVar17 * 8 + (uVar10 & 0xffffffff) * 8) = puVar12;
            pbVar2 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)(local_f8 + lVar16);
            if (pbVar2 != (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                           *)(puVar12 + 1)) {
              uVar23 = *(ulong *)(pbVar2 + 8);
              pbVar4 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                         **)(pbVar2 + 0x10);
              if (((byte)*pbVar2 & 1) == 0) {
                pbVar4 = pbVar2 + 1;
                uVar23 = (ulong)((byte)*pbVar2 >> 1);
              }
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                        ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                          *)(puVar12 + 1),(char *)pbVar4,uVar23);
              puVar12 = *(undefined8 **)((long)pvVar11 + uVar17 * 8 + (uVar10 & 0xffffffff) * 8);
            }
            uVar17 = uVar17 + 1;
            lVar16 = lVar16 + 0x18;
            puVar1 = (undefined8 *)(local_b0 + lVar18);
            uVar24 = puVar1[4];
            uVar26 = puVar1[7];
            uVar25 = puVar1[6];
            uVar28 = puVar1[1];
            uVar27 = *puVar1;
            uVar30 = puVar1[3];
            uVar29 = puVar1[2];
            lVar18 = lVar18 + 0x40;
            puVar12[9] = puVar1[5];
            puVar12[8] = uVar24;
            puVar12[0xb] = uVar26;
            puVar12[10] = uVar25;
            puVar12[5] = uVar28;
            puVar12[4] = uVar27;
            puVar12[7] = uVar30;
            puVar12[6] = uVar29;
            plVar19 = local_98;
          } while (uVar17 < uVar21);
        }
        while (plVar19 != &local_90) {
          piVar20 = (int *)plVar19[5];
          piVar5 = (int *)plVar19[6];
          if (piVar20 != piVar5) {
            lVar16 = *(long *)((long)pvVar11 + (long)(int)plVar19[4] * 8);
            do {
              puVar12 = *(undefined8 **)(lVar16 + 0x80);
              ppNVar3 = (NodeData **)((long)pvVar11 + (long)*piVar20 * 8);
              if (puVar12 == *(undefined8 **)(lVar16 + 0x88)) {
                std::__ndk1::vector<cocos2d::NodeData*,std::__ndk1::allocator<cocos2d::NodeData*>>::
                __push_back_slow_path<cocos2d::NodeData*const&>
                          ((vector<cocos2d::NodeData*,std::__ndk1::allocator<cocos2d::NodeData*>> *)
                           (lVar16 + 0x78),ppNVar3);
              }
              else {
                *puVar12 = *ppNVar3;
                *(undefined8 **)(lVar16 + 0x80) = puVar12 + 1;
              }
              piVar20 = piVar20 + 1;
            } while (piVar5 != piVar20);
          }
          plVar15 = (long *)plVar19[1];
          if ((long *)plVar19[1] == (long *)0x0) {
            plVar15 = plVar19 + 2;
            bVar8 = *(long **)*plVar15 != plVar19;
            plVar19 = (long *)*plVar15;
            if (bVar8) {
              do {
                lVar16 = *plVar15;
                plVar15 = (long *)(lVar16 + 0x10);
                plVar19 = (long *)*plVar15;
              } while (*plVar19 != lVar16);
            }
          }
          else {
            do {
              plVar19 = plVar15;
              plVar15 = (long *)*plVar19;
            } while ((long *)*plVar19 != (long *)0x0);
          }
        }
        puVar12 = *(undefined8 **)(param_1 + 0x10);
        ppNVar3 = (NodeData **)((long)pvVar11 + (long)local_80 * 8);
        if (puVar12 == *(undefined8 **)(param_1 + 0x18)) {
          std::__ndk1::vector<cocos2d::NodeData*,std::__ndk1::allocator<cocos2d::NodeData*>>::
          __push_back_slow_path<cocos2d::NodeData*const&>
                    ((vector<cocos2d::NodeData*,std::__ndk1::allocator<cocos2d::NodeData*>> *)
                     (param_1 + 8),ppNVar3);
        }
        else {
          *puVar12 = *ppNVar3;
          *(undefined8 **)(param_1 + 0x10) = puVar12 + 1;
        }
        local_128[0] = operator_new(0x90,(nothrow_t *)&std::nothrow);
        if (local_128[0] != (NodeData *)0x0) {
          *(undefined8 *)(local_128[0] + 0x28) = 0;
          *(undefined8 *)(local_128[0] + 0x20) = 0;
          *(undefined ***)local_128[0] = &PTR__NodeData_016d3488;
          *(undefined8 *)(local_128[0] + 0x78) = 0;
          *(undefined8 *)(local_128[0] + 0x70) = 0;
          *(undefined8 *)(local_128[0] + 0x88) = 0;
          *(undefined8 *)(local_128[0] + 0x80) = 0;
          *(undefined8 *)(local_128[0] + 0x58) = 0;
          *(undefined8 *)(local_128[0] + 0x50) = 0;
          *(undefined8 *)(local_128[0] + 0x68) = 0;
          *(undefined8 *)(local_128[0] + 0x60) = 0;
          *(undefined8 *)(local_128[0] + 0x38) = 0;
          *(undefined8 *)(local_128[0] + 0x30) = 0;
          *(undefined8 *)(local_128[0] + 0x48) = 0;
          *(undefined8 *)(local_128[0] + 0x40) = 0;
          *(undefined8 *)(local_128[0] + 8) = 0;
          *(undefined8 *)(local_128[0] + 0x10) = 0;
          *(undefined8 *)(local_128[0] + 0x18) = 0;
          Mat4::Mat4((Mat4 *)(local_128[0] + 0x20));
          *(undefined8 *)(local_128[0] + 0x78) = 0;
          *(undefined8 *)(local_128[0] + 0x70) = 0;
          *(undefined8 *)(local_128[0] + 0x88) = 0;
          *(undefined8 *)(local_128[0] + 0x80) = 0;
          *(undefined8 *)(local_128[0] + 0x68) = 0;
          *(undefined8 *)(local_128[0] + 0x60) = 0;
        }
        pMVar14 = operator_new(0x68,(nothrow_t *)&std::nothrow);
        if (pMVar14 != (ModelData *)0x0) {
          *(undefined8 *)(pMVar14 + 0x10) = 0;
          *(undefined8 *)(pMVar14 + 8) = 0;
          *(undefined8 *)(pMVar14 + 0x20) = 0;
          *(undefined8 *)(pMVar14 + 0x18) = 0;
          *(undefined8 *)(pMVar14 + 0x30) = 0;
          *(undefined8 *)(pMVar14 + 0x28) = 0;
          *(undefined8 *)(pMVar14 + 0x40) = 0;
          *(undefined8 *)(pMVar14 + 0x38) = 0;
          *(undefined8 *)(pMVar14 + 0x50) = 0;
          *(undefined8 *)(pMVar14 + 0x48) = 0;
          *(undefined ***)pMVar14 = &PTR__ModelData_016d34c0;
          *(undefined8 *)(pMVar14 + 0x60) = 0;
          *(undefined8 *)(pMVar14 + 0x58) = 0;
        }
        local_130 = pMVar14;
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (pMVar14 + 0x20),"",0);
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (pMVar14 + 8),"",0);
        if ((vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
             *)(pMVar14 + 0x38) !=
            (vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
             *)&local_110) {
          std::__ndk1::
          vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
          ::
          assign<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>*>
                    ((vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                      *)(pMVar14 + 0x38),local_110,pbStack_108);
          pMVar14 = local_130;
        }
        if ((vector<cocos2d::Mat4,std::__ndk1::allocator<cocos2d::Mat4>> *)(pMVar14 + 0x50) !=
            (vector<cocos2d::Mat4,std::__ndk1::allocator<cocos2d::Mat4>> *)&local_e0) {
          std::__ndk1::vector<cocos2d::Mat4,std::__ndk1::allocator<cocos2d::Mat4>>::
          assign<cocos2d::Mat4*>
                    ((vector<cocos2d::Mat4,std::__ndk1::allocator<cocos2d::Mat4>> *)(pMVar14 + 0x50)
                     ,local_e0,pMStack_d8);
        }
        puVar12 = *(undefined8 **)(local_128[0] + 0x68);
        if (puVar12 == *(undefined8 **)(local_128[0] + 0x70)) {
          std::__ndk1::vector<cocos2d::ModelData*,std::__ndk1::allocator<cocos2d::ModelData*>>::
          __push_back_slow_path<cocos2d::ModelData*const&>
                    ((vector<cocos2d::ModelData*,std::__ndk1::allocator<cocos2d::ModelData*>> *)
                     (local_128[0] + 0x60),&local_130);
        }
        else {
          *puVar12 = local_130;
          *(undefined8 **)(local_128[0] + 0x68) = puVar12 + 1;
        }
        puVar12 = *(undefined8 **)(param_1 + 0x28);
        if (puVar12 == *(undefined8 **)(param_1 + 0x30)) {
          std::__ndk1::vector<cocos2d::NodeData*,std::__ndk1::allocator<cocos2d::NodeData*>>::
          __push_back_slow_path<cocos2d::NodeData*const&>
                    ((vector<cocos2d::NodeData*,std::__ndk1::allocator<cocos2d::NodeData*>> *)
                     (param_1 + 0x20),local_128);
        }
        else {
          *puVar12 = local_128[0];
          *(undefined8 **)(param_1 + 0x28) = puVar12 + 1;
        }
        if (pvVar11 != (void *)0x0) {
          operator_delete__(pvVar11);
        }
      }
      SkinData::~SkinData((SkinData *)&local_110);
      goto LAB_00d23458;
    }
  }
  if (this[0x130] == (Bundle3D)0x0) {
    loadNodesJson(this,param_1);
  }
  else {
    loadNodesBinary(this,param_1);
  }
LAB_00d23458:
  if (*(long *)(lVar7 + 0x28) == local_70) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

