
/* v8::internal::Factory::NewFunction(v8::internal::NewFunctionArgs const&) */

ulong * __thiscall v8::internal::Factory::NewFunction(Factory *this,NewFunctionArgs *param_1)

{
  Factory *pFVar1;
  uint uVar2;
  Heap *pHVar20;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  short sVar7;
  uint uVar8;
  ulong *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  ulong *puVar13;
  int *piVar14;
  uint uVar15;
  ulong uVar16;
  ulong uVar17;
  Heap *pHVar21;
  int iVar18;
  ulong uVar19;
  ulong local_58;
  
  uVar16 = *(ulong *)(this + 0x2bc8) & 0xffffffff00000000;
  pFVar1 = this + 0x95a0;
  uVar16 = uVar16 | *(uint *)((uVar16 | *(uint *)(*(ulong *)(this + 0x2bc8) - 1)) + 0x13);
  if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar9 = *(ulong **)pFVar1;
    if (puVar9 == *(ulong **)(this + 0x95a8)) {
      puVar9 = (ulong *)HandleScope::Extend((Isolate *)this);
    }
    *(ulong **)pFVar1 = puVar9 + 1;
    *puVar9 = uVar16;
  }
  else {
    puVar9 = (ulong *)CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(this + 0x95b8),uVar16)
    ;
  }
  uVar10 = NewFunctionArgs::GetMap(param_1,(Isolate *)this);
  uVar11 = NewSharedFunctionInfo
                     (this,*(undefined8 *)param_1,*(undefined8 *)(param_1 + 0x10),
                      *(undefined4 *)(param_1 + 0x34),0);
  puVar9 = (ulong *)NewFunction(this,uVar10,uVar11,puVar9,1);
  if (param_1[0x24] != (NewFunctionArgs)0x0) {
    if (*(ulong **)(param_1 + 0x28) == (ulong *)0x0) goto LAB_00f761cc;
    uVar16 = *puVar9;
    uVar19 = **(ulong **)(param_1 + 0x28);
    *(int *)(uVar16 + 0x1b) = (int)uVar19;
    if ((uVar19 & 1) != 0) {
      uVar17 = *(ulong *)((uVar19 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar17 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar16,uVar16 + 0x1b,uVar19);
        uVar17 = *(ulong *)(uVar19 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar17 & 0x18) != 0) && ((*(byte *)((uVar16 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar16,uVar16 + 0x1b,uVar19);
      }
    }
  }
  if (param_1[0x30] != (NewFunctionArgs)0x0) {
    uVar16 = *puVar9 & 0xffffffff00000000;
    uVar19 = uVar16 | *(uint *)(*puVar9 + 0xb);
    *(uint *)(uVar19 + 0x1b) =
         *(uint *)(uVar19 + 0x1b) & 0xffffffbf | (uint)(byte)param_1[0x31] << 6;
    uVar5 = *(uint *)(uVar19 + 0x1b);
    uVar6 = *(uint *)(uVar19 + 0x1b);
    uVar8 = *(uint *)(uVar19 + 7);
    uVar2 = uVar6 & 0x1f;
    if (((uVar8 & 1) == 0) ||
       (*(short *)((uVar16 | 7) + (ulong)*(uint *)((uVar16 | uVar8) - 1)) != 0x83)) {
      uVar8 = (uint)(uVar8 != 0);
    }
    else {
      local_58 = uVar16 | uVar8;
      uVar8 = ScopeInfo::HasSharedFunctionName((ScopeInfo *)&local_58);
    }
    uVar15 = 0xb8000;
    if (3 < (uVar2 - 3 & 0xff)) {
      if ((uVar2 - 0xd & 0xff) < 4) {
        iVar18 = 0xbc;
        if (4 < (uVar2 - 10 & 0xff)) {
          iVar18 = 0xb8;
        }
      }
      else {
        uVar6 = uVar6 & 0x1f;
        if (uVar6 < 0x13) {
          uVar2 = 1 << (ulong)uVar6;
          if ((uVar2 & 0x7c04) == 0) {
            if ((uVar2 & 0x70380) == 0) goto LAB_00f761b8;
            iVar18 = 0xb0;
          }
          else {
            iVar18 = 0xb4;
          }
        }
        else {
LAB_00f761b8:
          iVar18 = 0xa9;
          if ((uVar5 & 0x40) != 0) {
            iVar18 = 0xad;
          }
        }
      }
      uVar15 = (iVar18 + (*(uint *)(uVar19 + 0x1b) >> 0xc & 2 | ~uVar8 & 1)) * 0x8000 - 0x548000;
    }
    *(uint *)(uVar19 + 0x1b) = *(uint *)(uVar19 + 0x1b) & 0xfff07fff | uVar15;
  }
  if (param_1[0x18] != (NewFunctionArgs)0x0) {
    sVar7 = *(short *)(param_1 + 0x1a);
    uVar3 = *(undefined4 *)(param_1 + 0x1c);
    uVar4 = *(undefined4 *)(param_1 + 0x20);
    pHVar21._0_4_ = (Heap *)0x2;
    if (sVar7 != 0x422) {
      pHVar21._0_4_ = (Heap *)0x3;
    }
    pHVar20._0_4_ = (Heap *)0x0;
    if (sVar7 != 0x423) {
      pHVar20._0_4_ = pHVar21._0_4_;
    }
    lVar12 = Heap::AllocateRawWithRetryOrFailSlowPath(pHVar21._0_4_,this + 0x8850,0x28,3,1,0);
    *(undefined4 *)(lVar12 + -1) = *(undefined4 *)(this + 0xd0);
    uVar16 = InitializeMap(this,lVar12,sVar7,uVar3,(undefined4)pHVar20._0_4_,uVar4);
    if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar13 = *(ulong **)pFVar1;
      if (puVar13 == *(ulong **)(this + 0x95a8)) {
        puVar13 = (ulong *)HandleScope::Extend((Isolate *)this);
      }
      *(ulong **)pFVar1 = puVar13 + 1;
      *puVar13 = uVar16;
    }
    else {
      puVar13 = (ulong *)CanonicalHandleScope::Lookup
                                   (*(CanonicalHandleScope **)(this + 0x95b8),uVar16);
    }
    *(short *)((*puVar9 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar9 + 0xb)) + 0x17) =
         (short)*(undefined4 *)(param_1 + 0x20);
    piVar14 = *(int **)(param_1 + 0x28);
    if (piVar14 == (int *)0x0) {
LAB_00f761cc:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","(location_) != nullptr");
    }
    uVar2 = *(uint *)((*puVar9 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar9 + 0xb)) + 0x1b) &
            0x1f;
    if (((6 < uVar2 - 10) && (1 < uVar2 - 1)) && (*piVar14 == *(int *)(this + 0xa8))) {
      piVar14 = (int *)NewFunctionPrototype(this,puVar9);
    }
    JSFunction::SetInitialMap(puVar9,puVar13,piVar14);
  }
  return puVar9;
}

