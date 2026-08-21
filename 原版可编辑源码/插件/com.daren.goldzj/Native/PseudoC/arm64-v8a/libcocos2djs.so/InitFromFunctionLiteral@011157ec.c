
/* v8::internal::SharedFunctionInfo::InitFromFunctionLiteral(v8::internal::Handle<v8::internal::SharedFunctionInfo>,
   v8::internal::FunctionLiteral*, bool) */

void v8::internal::SharedFunctionInfo::InitFromFunctionLiteral
               (ulong *param_1,FunctionLiteral *param_2,ulong param_3)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined2 uVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  Isolate *pIVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  ulong *puVar15;
  ulong uVar16;
  FunctionLiteral *pFVar17;
  short sVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  long lVar22;
  Factory *pFVar23;
  uint uVar24;
  ulong uVar25;
  ulong uVar26;
  undefined8 uVar27;
  ulong uVar28;
  ulong local_68;
  
  uVar28 = *param_1;
  *(short *)(uVar28 + 0x15) = (short)*(undefined4 *)(param_2 + 0xc);
  uVar25 = *param_1;
  iVar8 = *(int *)(param_2 + 0x14);
  iVar6 = FunctionLiteral::start_position(param_2);
  iVar7 = 0;
  if (iVar8 != -1) {
    iVar7 = iVar6 - iVar8;
  }
  if (0xfffe < iVar7) {
    iVar7 = 0xffff;
  }
  *(short *)(uVar25 + 0x19) = (short)iVar7;
  uVar19 = *(uint *)(*param_1 + 7);
  pIVar12 = (Isolate *)(*param_1 & 0xffffffff00000000);
  if (((uVar19 & 1) == 0) ||
     (local_68 = (ulong)pIVar12 | (ulong)uVar19,
     *(short *)(((ulong)pIVar12 | 7) + (ulong)*(uint *)(local_68 - 1)) != 0x83)) {
    local_68 = ScopeInfo::Empty(pIVar12);
  }
  uVar25 = ScopeInfo::HasPositionInfo((ScopeInfo *)&local_68);
  if ((uVar25 & 1) == 0) {
    bVar5 = true;
  }
  else {
    uVar19 = *(uint *)(*param_1 + 7);
    pIVar12 = (Isolate *)(*param_1 & 0xffffffff00000000);
    if (((uVar19 & 1) == 0) ||
       (uVar25 = (ulong)pIVar12 | (ulong)uVar19,
       *(short *)(((ulong)pIVar12 | 7) + (ulong)*(uint *)(uVar25 - 1)) != 0x83)) {
      uVar25 = ScopeInfo::Empty(pIVar12);
    }
    local_68 = uVar25;
    iVar7 = FunctionLiteral::start_position(param_2);
    iVar8 = FunctionLiteral::end_position(param_2);
    ScopeInfo::SetPositionInfo((ScopeInfo *)&local_68,iVar7,iVar8);
    bVar5 = false;
  }
  uVar19 = *(uint *)(*param_1 + 0x1b);
  *(uint *)(*param_1 + 0x1b) =
       uVar19 & 0xfffffc00 | uVar19 & 0x7f | (*(uint *)(param_2 + 4) >> 7 & 7) << 7;
  uVar26 = *param_1;
  uVar25 = FunctionLiteral::AllowsLazyCompilation(param_2);
  uVar19 = 0x1000;
  if ((uVar25 & 1) == 0) {
    uVar19 = 0;
  }
  *(uint *)(uVar26 + 0x1b) = *(uint *)(uVar26 + 0x1b) & 0xffffefff | uVar19;
  uVar26 = *param_1;
  uVar25 = FunctionLiteral::language_mode(param_2);
  uVar19 = 0x40;
  if ((uVar25 & 1) == 0) {
    uVar19 = 0;
  }
  *(uint *)(uVar26 + 0x1b) = *(uint *)(uVar26 + 0x1b) & 0xffffffbf | uVar19;
  uVar4 = *(uint *)(uVar26 + 0x1b);
  uVar21 = *(uint *)(uVar26 + 0x1b);
  uVar9 = *(uint *)(uVar26 + 7);
  uVar19 = uVar21 & 0x1f;
  if (((uVar9 & 1) == 0) ||
     (uVar25 = uVar26 & 0xffffffff00000000 | (ulong)uVar9,
     *(short *)((uVar26 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar25 - 1)) != 0x83)) {
    uVar9 = (uint)(uVar9 != 0);
  }
  else {
    local_68 = uVar25;
    uVar9 = ScopeInfo::HasSharedFunctionName((ScopeInfo *)&local_68);
  }
  uVar24 = 0xb8000;
  uVar20 = 0xb8000;
  if (3 < (uVar19 - 3 & 0xff)) {
    if ((uVar19 - 0xd & 0xff) < 4) {
      iVar7 = 0xbc;
      if (4 < (uVar19 - 10 & 0xff)) {
        iVar7 = 0xb8;
      }
    }
    else {
      uVar21 = uVar21 & 0x1f;
      if (uVar21 < 0x13) {
        uVar19 = 1 << (ulong)uVar21;
        if ((uVar19 & 0x7c04) == 0) {
          if ((uVar19 & 0x70380) == 0) goto LAB_01115f40;
          iVar7 = 0xb0;
        }
        else {
          iVar7 = 0xb4;
        }
      }
      else {
LAB_01115f40:
        iVar7 = 0xa9;
        if ((uVar4 & 0x40) != 0) {
          iVar7 = 0xad;
        }
      }
    }
    uVar20 = (iVar7 + (*(uint *)(uVar26 + 0x1b) >> 0xc & 2 | ~uVar9 & 1)) * 0x8000 - 0x548000;
  }
  *(uint *)(uVar26 + 0x1b) = *(uint *)(uVar26 + 0x1b) & 0xfff07fff | uVar20;
  *(undefined4 *)(*param_1 + 0x1f) = *(undefined4 *)(param_2 + 0x1c);
  lVar22 = *(long *)(param_2 + 0x28);
  uVar25 = *param_1;
  if ((*(byte *)(lVar22 + 0x83) >> 5 & 1) == 0) {
    if ((*(byte *)(lVar22 + 0x81) >> 6 & 1) != 0) {
      uVar19 = (uint)*(byte *)(lVar22 + 0x85);
      if (((*(byte *)(lVar22 + 0x85) < 0x13) && ((1 << (ulong)(uVar19 & 0x1f) & 0x73000U) != 0)) ||
         (uVar19 - 7 < 2)) goto LAB_01115ab8;
      uVar21 = *(uint *)(uVar25 + 0x1b) & 0xffffdfff;
      if (3 < uVar19 - 3) {
        uVar19 = 0;
        goto LAB_01115ac8;
      }
      goto LAB_01115ac4;
    }
    uVar19 = 0;
    uVar21 = *(uint *)(uVar25 + 0x1b) & 0xffffdfff;
  }
  else {
LAB_01115ab8:
    uVar21 = *(uint *)(uVar25 + 0x1b) & 0xffffdfff;
LAB_01115ac4:
    uVar19 = 0x2000;
  }
LAB_01115ac8:
  puVar1 = (uint *)(uVar25 + 0x1b);
  *puVar1 = uVar19 | uVar21;
  uVar4 = *(uint *)(uVar25 + 0x1b);
  uVar21 = *(uint *)(uVar25 + 0x1b);
  uVar9 = *(uint *)(uVar25 + 7);
  uVar19 = uVar21 & 0x1f;
  if (((uVar9 & 1) == 0) ||
     (uVar26 = uVar25 & 0xffffffff00000000 | (ulong)uVar9,
     *(short *)((uVar25 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar26 - 1)) != 0x83)) {
    uVar9 = (uint)(uVar9 != 0);
  }
  else {
    local_68 = uVar26;
    uVar9 = ScopeInfo::HasSharedFunctionName((ScopeInfo *)&local_68);
  }
  if (3 < (uVar19 - 3 & 0xff)) {
    if ((uVar19 - 0xd & 0xff) < 4) {
      iVar7 = 0xbc;
      if (4 < (uVar19 - 10 & 0xff)) {
        iVar7 = 0xb8;
      }
    }
    else {
      uVar21 = uVar21 & 0x1f;
      if (uVar21 < 0x13) {
        uVar19 = 1 << (ulong)uVar21;
        if ((uVar19 & 0x7c04) == 0) {
          if ((uVar19 & 0x70380) == 0) goto LAB_01115f54;
          iVar7 = 0xb0;
        }
        else {
          iVar7 = 0xb4;
        }
      }
      else {
LAB_01115f54:
        iVar7 = 0xa9;
        if ((uVar4 & 0x40) != 0) {
          iVar7 = 0xad;
        }
      }
    }
    uVar24 = (iVar7 + (*puVar1 >> 0xc & 2 | ~uVar9 & 1)) * 0x8000 - 0x548000;
  }
  *puVar1 = *puVar1 & 0xfff07fff | uVar24;
  uVar19 = *(uint *)(*param_1 + 0x1b);
  *(uint *)(*param_1 + 0x1b) =
       uVar19 & 0xfe000000 | uVar19 & 0xffffff | (*(uint *)(param_2 + 4) >> 0x14 & 1) << 0x18;
  uVar19 = 0x10000000;
  if ((param_3 & 1) == 0) {
    uVar19 = 0;
  }
  *(uint *)(*param_1 + 0x1b) = *(uint *)(*param_1 + 0x1b) & 0xefffffff | uVar19;
  if (((param_3 & 1) == 0) &&
     (lVar22 = Scope::GetOuterScopeWithContext(*(Scope **)(param_2 + 0x28)), lVar22 != 0)) {
    uVar26 = *param_1;
    uVar25 = **(ulong **)(lVar22 + 0x68);
    *(int *)(uVar26 + 0xb) = (int)uVar25;
    if ((uVar25 & 1) != 0) {
      uVar16 = *(ulong *)((uVar25 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar16 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar26,uVar26 + 0xb,uVar25);
        uVar16 = *(ulong *)(uVar25 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar16 & 0x18) != 0) && ((*(byte *)((uVar26 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar26,uVar26 + 0xb,uVar25);
      }
    }
    *(uint *)(*param_1 + 0x1b) =
         *(uint *)(*param_1 + 0x1b) & 0x7fffffff |
         ((*(ushort *)(*(long *)(param_2 + 0x28) + 0x81) & 0x200) >> 9) << 0x1f;
  }
  *(short *)(*param_1 + 0x13) = (short)*(undefined4 *)(param_2 + 0x10);
  uVar25 = FunctionLiteral::ShouldEagerCompile(param_2);
  uVar26 = *param_1;
  if ((uVar25 & 1) == 0) {
    pFVar23 = (Factory *)(uVar28 & 0xffffffff00000000);
    *(uint *)(uVar26 + 0x1b) = *(uint *)(uVar26 + 0x1b) & 0xbfffffff;
    puVar13 = *(undefined8 **)(param_2 + 0x50);
    uVar25 = *param_1;
    if (puVar13 == (undefined8 *)0x0) {
      sVar18 = (short)*(undefined4 *)(param_2 + 8);
      if ((*(uint *)(uVar25 + 0x1b) >> 10 & 1) != 0) {
        sVar18 = sVar18 + *(short *)(uVar25 + 0x17);
      }
      *(short *)(uVar25 + 0x17) = sVar18;
      if (bVar5) {
        pFVar17 = param_2 + 0x48;
        if ((*(long *)pFVar17 == 0) &&
           (pFVar17 = *(FunctionLiteral **)(param_2 + 0x40), pFVar17 == (FunctionLiteral *)0x0))
        goto LAB_01115f68;
        uVar14 = *(undefined8 *)pFVar17;
        uVar10 = FunctionLiteral::start_position(param_2);
        uVar11 = FunctionLiteral::end_position(param_2);
        puVar15 = (ulong *)Factory::NewUncompiledDataWithoutPreparseData
                                     (pFVar23,uVar14,uVar10,uVar11);
        uVar28 = *param_1;
        uVar25 = *puVar15;
        puVar2 = (undefined4 *)(uVar28 + 3);
        *puVar2 = (int)uVar25;
        if ((uVar25 & 1) != 0) {
          uVar26 = *(ulong *)((uVar25 & 0xfffffffffffc0000) + 8);
          if (((uint)uVar26 >> 0x12 & 1) != 0) {
            Heap_MarkingBarrierSlow(uVar28,puVar2,uVar25);
            uVar26 = *(ulong *)(uVar25 & 0xfffffffffffc0000 | 8);
          }
          if (((uVar26 & 0x18) != 0) && ((*(byte *)((uVar28 & 0xfffffffffffc0000) + 8) & 0x18) == 0)
             ) {
            Heap_GenerationalBarrierSlow(uVar28,puVar2,uVar25);
          }
        }
      }
    }
    else {
      uVar14 = (**(code **)*puVar13)(puVar13,uVar25 & 0xffffffff00000000);
      pFVar17 = param_2 + 0x48;
      if ((*(long *)pFVar17 == 0) &&
         (pFVar17 = *(FunctionLiteral **)(param_2 + 0x40), pFVar17 == (FunctionLiteral *)0x0)) {
LAB_01115f68:
                    /* WARNING: Subroutine does not return */
        V8_Fatal("unreachable code");
      }
      uVar27 = *(undefined8 *)pFVar17;
      uVar10 = FunctionLiteral::start_position(param_2);
      uVar11 = FunctionLiteral::end_position(param_2);
      puVar15 = (ulong *)Factory::NewUncompiledDataWithPreparseData
                                   (pFVar23,uVar27,uVar10,uVar11,uVar14);
      uVar28 = *param_1;
      uVar25 = *puVar15;
      puVar2 = (undefined4 *)(uVar28 + 3);
      *puVar2 = (int)uVar25;
      if ((uVar25 & 1) != 0) {
        uVar26 = *(ulong *)((uVar25 & 0xfffffffffffc0000) + 8);
        if (((uint)uVar26 >> 0x12 & 1) != 0) {
          Heap_MarkingBarrierSlow(uVar28,puVar2,uVar25);
          uVar26 = *(ulong *)(uVar25 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar26 & 0x18) != 0) && ((*(byte *)((uVar28 & 0xfffffffffffc0000) + 8) & 0x18) == 0))
        {
          Heap_GenerationalBarrierSlow(uVar28,puVar2,uVar25);
        }
      }
      uVar25 = *param_1;
      sVar18 = (short)*(undefined4 *)(param_2 + 8);
      if ((*(uint *)(uVar25 + 0x1b) >> 10 & 1) != 0) {
        sVar18 = sVar18 + *(short *)(uVar25 + 0x17);
      }
      *(short *)(uVar25 + 0x17) = sVar18;
    }
  }
  else {
    *(uint *)(uVar26 + 0x1b) =
         *(uint *)(uVar26 + 0x1b) & 0xfffff000 |
         *(uint *)(uVar26 + 0x1b) & 0x7ff | (*(uint *)(param_2 + 4) >> 0xb & 1) << 0xb;
    uVar25 = *param_1;
    if (((*(uint *)(uVar25 + 0x1b) >> 0x1d & 1) == 0) || ((*(uint *)(uVar25 + 0x1b) >> 10 & 1) == 0)
       ) {
      uVar19 = *(uint *)(param_2 + 8);
      if ((*(uint *)(uVar25 + 0x1b) >> 10 & 1) != 0) {
        uVar19 = uVar19 + *(ushort *)(uVar25 + 0x17);
      }
      uVar21 = 2;
      if ((uVar19 & 0xffff) != 0) {
        uVar21 = uVar19 & 0xffff;
      }
      uVar3 = (undefined2)uVar21;
      if (0xfe < uVar21) {
        uVar3 = 0xff;
      }
      *(undefined2 *)(uVar25 + 0x17) = uVar3;
      if ((*(uint *)(uVar25 + 0x1b) >> 10 & 1) != 0) {
        *(uint *)(uVar25 + 0x1b) = *(uint *)(uVar25 + 0x1b) | 0x20000000;
      }
    }
    uVar28 = *param_1;
    uVar25 = FunctionLiteral::SafeToSkipArgumentsAdaptor(param_2);
    uVar19 = 0x40000000;
    if ((uVar25 & 1) == 0) {
      uVar19 = 0;
    }
    *(uint *)(uVar28 + 0x1b) = *(uint *)(uVar28 + 0x1b) & 0xbfffffff | uVar19;
  }
  return;
}

