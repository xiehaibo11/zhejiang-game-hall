
/* cocos2d::PUScriptCompiler::visit(cocos2d::PUConcreteNode*) */

void __thiscall cocos2d::PUScriptCompiler::visit(PUScriptCompiler *this,PUConcreteNode *param_1)

{
  PUConcreteNode *pPVar1;
  bool bVar2;
  ulong uVar3;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar10;
  long lVar11;
  PUConcreteNode *pPVar12;
  PUConcreteNode *pPVar13;
  long *plVar14;
  long lVar15;
  undefined1 *puVar16;
  long lVar17;
  long *local_80;
  long *local_78;
  long local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  if (*(ulong *)(param_1 + 0x48) == 0) {
    puVar6 = operator_new(0x58,(nothrow_t *)&std::nothrow);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00e42924 with catch @ 00e42a84
                        */
    if (puVar6 != (undefined8 *)0x0) {
      uVar9 = *(undefined8 *)(this + 0x58);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00e427c4 with catch @ 00e42a98
                        */
      puVar6[8] = 0;
      puVar6[9] = 0;
      puVar6[6] = 0;
      puVar6[7] = 0;
      *(undefined4 *)(puVar6 + 10) = 0;
      puVar6[4] = 0;
      puVar6[3] = 0;
      puVar6[2] = 0;
      puVar6[1] = 0;
      *puVar6 = &PTR__PUAtomAbstractNode_016f2040;
      puVar6[5] = uVar9;
      *(undefined4 *)((long)puVar6 + 0x24) = 1;
    }
    *(undefined4 *)(puVar6 + 4) = *(undefined4 *)(param_1 + 0x30);
    if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
        (puVar6 + 1) !=
        (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
        (param_1 + 0x18)) {
      uVar3 = *(ulong *)(param_1 + 0x20);
      pPVar1 = *(PUConcreteNode **)(param_1 + 0x28);
      if (((byte)param_1[0x18] & 1) == 0) {
        pPVar1 = param_1 + 0x19;
        uVar3 = (ulong)((byte)param_1[0x18] >> 1);
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (puVar6 + 1),(char *)pPVar1,uVar3);
    }
    if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
        (puVar6 + 7) !=
        (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_1) {
      uVar3 = *(ulong *)(param_1 + 8);
      pPVar1 = *(PUConcreteNode **)(param_1 + 0x10);
      if (((byte)*param_1 & 1) == 0) {
        pPVar1 = param_1 + 1;
        uVar3 = (ulong)((byte)*param_1 >> 1);
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (puVar6 + 7),(char *)pPVar1,uVar3);
    }
  }
  else {
    pPVar12 = *(PUConcreteNode **)(param_1 + 0x40);
    pPVar1 = param_1 + 0x38;
    if (pPVar1 == pPVar12) {
      lVar11 = 0;
      pPVar13 = pPVar1;
      if (pPVar12 != pPVar1) goto LAB_00e42718;
LAB_00e42b2c:
      lVar15 = 0;
    }
    else {
      pPVar13 = *(PUConcreteNode **)pPVar1;
      lVar11 = *(long *)(pPVar13 + 0x10);
      if (pPVar12 == pPVar13) goto LAB_00e42b2c;
LAB_00e42718:
      lVar15 = *(long *)(*(long *)pPVar13 + 0x10);
    }
    if ((((lVar11 == 0) || (lVar15 == 0)) || (*(int *)(lVar11 + 0x34) != 6)) ||
       (*(int *)(lVar15 + 0x34) != 5)) {
      puVar6 = operator_new(0x70,(nothrow_t *)&std::nothrow);
      if (puVar6 != (undefined8 *)0x0) {
        uVar9 = *(undefined8 *)(this + 0x58);
        puVar6[0xb] = puVar6 + 0xb;
        puVar6[0xc] = puVar6 + 0xb;
        puVar6[8] = 0;
        puVar6[9] = 0;
        puVar6[6] = 0;
        puVar6[7] = 0;
        *puVar6 = &PTR__PUPropertyAbstractNode_016f2010;
        *(undefined4 *)(puVar6 + 10) = 0;
        puVar6[0xd] = 0;
        puVar6[4] = 0;
        puVar6[3] = 0;
        puVar6[2] = 0;
        puVar6[1] = 0;
        puVar6[5] = uVar9;
        *(undefined4 *)((long)puVar6 + 0x24) = 3;
      }
      *(undefined4 *)(puVar6 + 4) = *(undefined4 *)(param_1 + 0x30);
      if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
          (puVar6 + 1) !=
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
          (param_1 + 0x18)) {
        uVar3 = *(ulong *)(param_1 + 0x20);
        pPVar12 = *(PUConcreteNode **)(param_1 + 0x28);
        if (((byte)param_1[0x18] & 1) == 0) {
          pPVar12 = param_1 + 0x19;
          uVar3 = (ulong)((byte)param_1[0x18] >> 1);
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (puVar6 + 1),(char *)pPVar12,uVar3);
      }
      if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
          (puVar6 + 7) !=
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_1)
      {
        uVar3 = *(ulong *)(param_1 + 8);
        pPVar12 = *(PUConcreteNode **)(param_1 + 0x10);
        if (((byte)*param_1 & 1) == 0) {
          pPVar12 = param_1 + 1;
          uVar3 = (ulong)((byte)*param_1 >> 1);
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (puVar6 + 7),(char *)pPVar12,uVar3);
      }
      *(undefined8 **)(this + 0x58) = puVar6;
      for (pPVar12 = *(PUConcreteNode **)(param_1 + 0x40); pPVar1 != pPVar12;
          pPVar12 = *(PUConcreteNode **)(pPVar12 + 8)) {
        visit(this,*(PUConcreteNode **)(pPVar12 + 0x10));
      }
      *(undefined8 *)(this + 0x58) = puVar6[5];
    }
    else {
      if (*(ulong *)(param_1 + 0x48) < 2) goto LAB_00e42cc0;
      puVar6 = operator_new(0xf8,(nothrow_t *)&std::nothrow);
      if (puVar6 != (undefined8 *)0x0) {
        uVar9 = *(undefined8 *)(this + 0x58);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00e425f4 with catch @ 00e42770
                        */
        *(undefined4 *)(puVar6 + 0xb) = 0x3f800000;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00e427cc with catch @ 00e42774
                       catch(type#1 @ 00000000) { ... } // from try @ 00e4298c with catch @ 00e42774
                        */
        puVar6[0x16] = puVar6 + 0x16;
        puVar6[0x17] = puVar6 + 0x16;
        puVar6[0x1c] = puVar6 + 0x1c;
        puVar6[0x1d] = puVar6 + 0x1c;
        *puVar6 = &PTR__PUObjectAbstractNode_016f1fe0;
        puVar6[0x1e] = 0;
        puVar6[4] = 0;
        puVar6[3] = 0;
        puVar6[2] = 0;
        puVar6[1] = 0;
        puVar6[8] = 0;
        puVar6[7] = 0;
        puVar6[10] = 0;
        puVar6[9] = 0;
        puVar6[0xd] = 0;
        puVar6[0xc] = 0;
        puVar6[0xf] = 0;
        puVar6[0xe] = 0;
        puVar6[0x11] = 0;
        puVar6[0x10] = 0;
        puVar6[0x13] = 0;
        puVar6[0x12] = 0;
        *(undefined8 *)((long)puVar6 + 0xa5) = 0;
        *(undefined8 *)((long)puVar6 + 0x9d) = 0;
        puVar6[0x18] = 0;
        puVar6[0x19] = puVar6 + 0x19;
        puVar6[0x1a] = puVar6 + 0x19;
        puVar6[0x1b] = 0;
        puVar6[5] = uVar9;
        puVar6[6] = 0;
                    /* try { // try from 00e427c4 to 00f427cb has its CatchHandler @ 00e42a98 */
        *(undefined4 *)((long)puVar6 + 0x24) = 2;
      }
                    /* try { // try from 00e427cc to 00f42923 has its CatchHandler @ 00e42774 */
      *(undefined4 *)(puVar6 + 4) = *(undefined4 *)(param_1 + 0x30);
      if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
          (puVar6 + 1) !=
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
          (param_1 + 0x18)) {
        uVar3 = *(ulong *)(param_1 + 0x20);
        pPVar12 = *(PUConcreteNode **)(param_1 + 0x28);
        if (((byte)param_1[0x18] & 1) == 0) {
          pPVar12 = param_1 + 0x19;
          uVar3 = (ulong)((byte)param_1[0x18] >> 1);
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (puVar6 + 1),(char *)pPVar12,uVar3);
      }
      *(undefined1 *)((long)puVar6 + 0xac) = 0;
      local_70 = 0;
      local_80 = (long *)&local_80;
      local_78 = (long *)&local_80;
      plVar7 = operator_new(0x18);
      plVar7[1] = (long)&local_80;
      plVar7[2] = (long)param_1;
      *plVar7 = (long)&local_80;
      local_70 = 1;
      pPVar12 = *(PUConcreteNode **)(param_1 + 0x40);
      local_80 = plVar7;
      local_78 = plVar7;
      if (pPVar1 != pPVar12) {
        plVar14 = plVar7;
        lVar11 = 2;
        do {
          lVar17 = lVar11;
          local_80 = plVar14;
          local_80 = operator_new(0x18);
          lVar11 = *(long *)(pPVar12 + 0x10);
          *local_80 = (long)plVar14;
          local_80[1] = (long)&local_80;
          local_80[2] = lVar11;
          plVar14[1] = (long)local_80;
          pPVar12 = *(PUConcreteNode **)(pPVar12 + 8);
          plVar14 = local_80;
          lVar11 = lVar17 + 1;
          local_70 = lVar17;
        } while (pPVar1 != pPVar12);
      }
      pbVar10 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                plVar7[2];
      if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
          (puVar6 + 0xf) != pbVar10) {
        uVar3 = *(ulong *)(pbVar10 + 8);
        pbVar4 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **
                  )(pbVar10 + 0x10);
        if (((byte)*pbVar10 & 1) == 0) {
          pbVar4 = pbVar10 + 1;
          uVar3 = (ulong)((byte)*pbVar10 >> 1);
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (puVar6 + 0xf),(char *)pbVar4,uVar3);
      }
      puVar16 = (undefined1 *)plVar7[1];
      if ((&local_80 != (long **)puVar16) &&
         (pbVar10 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      **)(puVar16 + 0x10), *(int *)(pbVar10 + 0x34) == 2)) {
        if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (puVar6 + 0xc) != pbVar10) {
          uVar3 = *(ulong *)(pbVar10 + 8);
          pbVar4 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                     **)(pbVar10 + 0x10);
          if (((byte)*pbVar10 & 1) == 0) {
            pbVar4 = pbVar10 + 1;
            uVar3 = (ulong)((byte)*pbVar10 >> 1);
          }
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)(puVar6 + 0xc),(char *)pbVar4,uVar3);
        }
        puVar16 = *(undefined1 **)(puVar16 + 8);
      }
      if (&local_80 != (long **)puVar16) {
        do {
          if (*(int *)(*(long *)(puVar16 + 0x10) + 0x34) == 5) break;
                    /* try { // try from 00e42924 to 00f4292b has its CatchHandler @ 00e42a84 */
          puVar8 = operator_new(0x58,(nothrow_t *)&std::nothrow);
          if (puVar8 != (undefined8 *)0x0) {
            puVar8[4] = 0;
            puVar8[3] = 0;
            puVar8[2] = 0;
            puVar8[1] = 0;
            puVar8[5] = puVar6;
            puVar8[6] = 0;
            *puVar8 = &PTR__PUAtomAbstractNode_016f2040;
            puVar8[8] = 0;
            puVar8[9] = 0;
            puVar8[7] = 0;
            *(undefined4 *)(puVar8 + 10) = 0;
            *(undefined4 *)((long)puVar8 + 0x24) = 1;
          }
          pbVar10 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      **)(puVar16 + 0x10);
          if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
              (puVar8 + 1) != pbVar10 + 0x18) {
            uVar3 = *(ulong *)(pbVar10 + 0x20);
            pbVar4 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                       **)(pbVar10 + 0x28);
            if (((byte)pbVar10[0x18] & 1) == 0) {
              pbVar4 = pbVar10 + 0x19;
              uVar3 = (ulong)((byte)pbVar10[0x18] >> 1);
            }
                    /* try { // try from 00e42984 to 00f4298b has its CatchHandler @ 00e42a6c */
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)(puVar8 + 1),(char *)pbVar4,uVar3);
                    /* try { // try from 00e4298c to 00f42a9b has its CatchHandler @ 00e42774 */
            pbVar10 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        **)(puVar16 + 0x10);
          }
          *(undefined4 *)(puVar8 + 4) = *(undefined4 *)(pbVar10 + 0x30);
          *(undefined4 *)((long)puVar8 + 0x24) = 1;
          if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
              (puVar8 + 7) != pbVar10) {
            uVar3 = *(ulong *)(pbVar10 + 8);
            pbVar4 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                       **)(pbVar10 + 0x10);
            if (((byte)*pbVar10 & 1) == 0) {
              pbVar4 = pbVar10 + 1;
              uVar3 = (ulong)((byte)*pbVar10 >> 1);
            }
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)(puVar8 + 7),(char *)pbVar4,uVar3);
          }
          plVar7 = operator_new(0x18);
          plVar7[1] = (long)(puVar6 + 0x19);
          plVar7[2] = (long)puVar8;
          lVar11 = puVar6[0x19];
          *plVar7 = lVar11;
          *(long **)(lVar11 + 8) = plVar7;
          puVar6[0x19] = plVar7;
          puVar6[0x1b] = puVar6[0x1b] + 1;
          puVar16 = *(undefined1 **)(puVar16 + 8);
        } while (&local_80 != (long **)puVar16);
      }
      *(undefined8 **)(this + 0x58) = puVar6;
      for (lVar11 = *(long *)(lVar15 + 0x40); lVar15 + 0x38 != lVar11;
          lVar11 = *(long *)(lVar11 + 8)) {
        visit(this,*(PUConcreteNode **)(lVar11 + 0x10));
      }
      *(undefined8 *)(this + 0x58) = puVar6[5];
      bVar2 = local_70 != 0;
      local_70 = 0;
      if (bVar2) {
        lVar11 = *local_78;
        *(long *)(lVar11 + 8) = local_80[1];
        *(long *)local_80[1] = lVar11;
        local_70 = 0;
        plVar7 = local_78;
        if ((long **)local_78 != &local_80) {
          do {
            plVar14 = (long *)plVar7[1];
            operator_delete(plVar7);
            plVar7 = plVar14;
          } while ((long **)plVar14 != &local_80);
        }
      }
    }
  }
  if (puVar6 != (undefined8 *)0x0) {
    lVar11 = *(long *)(this + 0x58);
    if (lVar11 == 0) {
      plVar14 = *(long **)(this + 0x60);
      plVar7 = operator_new(0x18);
      plVar7[1] = (long)plVar14;
      plVar7[2] = (long)puVar6;
      lVar11 = *plVar14;
      *plVar7 = lVar11;
      *(long **)(lVar11 + 8) = plVar7;
      *plVar14 = (long)plVar7;
      plVar14[2] = plVar14[2] + 1;
    }
    else if (*(int *)(lVar11 + 0x24) == 3) {
      plVar7 = operator_new(0x18);
      plVar7[1] = lVar11 + 0x58;
      plVar7[2] = (long)puVar6;
      lVar15 = *(long *)(lVar11 + 0x58);
      *plVar7 = lVar15;
      *(long **)(lVar15 + 8) = plVar7;
      *(long **)(lVar11 + 0x58) = plVar7;
      *(long *)(lVar11 + 0x68) = *(long *)(lVar11 + 0x68) + 1;
    }
    else {
      plVar7 = operator_new(0x18);
      plVar7[1] = lVar11 + 0xb0;
      plVar7[2] = (long)puVar6;
      lVar15 = *(long *)(lVar11 + 0xb0);
      *plVar7 = lVar15;
      *(long **)(lVar15 + 8) = plVar7;
      *(long **)(lVar11 + 0xb0) = plVar7;
      *(long *)(lVar11 + 0xc0) = *(long *)(lVar11 + 0xc0) + 1;
    }
  }
LAB_00e42cc0:
  if (*(long *)(lVar5 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

