
/* v8::internal::compiler::Hints::Union(v8::internal::compiler::Hints const&) */

void __thiscall v8::internal::compiler::Hints::Union(Hints *this,Hints *param_1)

{
  FunctionalSet<v8::internal::compiler::VirtualBoundFunction,std::__ndk1::equal_to<v8::internal::compiler::VirtualBoundFunction>>
  *this_00;
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  VirtualBoundFunction *pVVar6;
  Zone *this_01;
  VirtualBoundFunction *pVVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  
  plVar8 = *(long **)this;
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","IsAllocated()");
  }
  this_01 = (Zone *)plVar8[5];
  if (*(undefined8 **)param_1 == (undefined8 *)0x0) {
    plVar10 = (long *)0x0;
  }
  else {
    plVar10 = (long *)**(undefined8 **)param_1;
  }
  plVar1 = (long *)*plVar8;
  if (plVar1 != plVar10) {
    if (plVar1 == (long *)0x0) {
      uVar4 = 0;
    }
    else {
      uVar4 = plVar1[2];
    }
    plVar2 = plVar1;
    if ((plVar10 != (long *)0x0) && (uVar4 < (ulong)plVar10[2])) {
      *plVar8 = (long)plVar10;
      plVar2 = plVar10;
      plVar10 = plVar1;
    }
    for (; plVar10 != (long *)0x0; plVar10 = (long *)plVar10[1]) {
      lVar9 = *plVar10;
      for (plVar1 = plVar2; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[1]) {
        if (*plVar1 == lVar9) goto LAB_012be8b8;
      }
      plVar2 = *(long **)(this_01 + 0x10);
      if ((ulong)(*(long *)(this_01 + 0x18) - (long)plVar2) < 0x18) {
        plVar2 = (long *)Zone::NewExpand(this_01,0x18);
      }
      else {
        *(long **)(this_01 + 0x10) = plVar2 + 3;
      }
      lVar11 = *plVar8;
      *plVar2 = lVar9;
      plVar2[1] = lVar11;
      if (lVar11 == 0) {
        lVar9 = 1;
      }
      else {
        lVar9 = *(long *)(lVar11 + 0x10) + 1;
      }
      plVar2[2] = lVar9;
      *plVar8 = (long)plVar2;
LAB_012be8b8:
    }
  }
  lVar9 = *(long *)this;
  if (*(long *)param_1 == 0) {
    plVar8 = (long *)0x0;
  }
  else {
    plVar8 = *(long **)(*(long *)param_1 + 8);
  }
  plVar10 = *(long **)(lVar9 + 8);
  if (plVar10 != plVar8) {
    if (plVar10 == (long *)0x0) {
      uVar4 = 0;
    }
    else {
      uVar4 = plVar10[2];
    }
    plVar1 = plVar10;
    if ((plVar8 != (long *)0x0) && (uVar4 < (ulong)plVar8[2])) {
      *(long **)(lVar9 + 8) = plVar8;
      plVar1 = plVar8;
      plVar8 = plVar10;
    }
    for (; plVar8 != (long *)0x0; plVar8 = (long *)plVar8[1]) {
      lVar11 = *plVar8;
      for (plVar10 = plVar1; plVar10 != (long *)0x0; plVar10 = (long *)plVar10[1]) {
        if (*plVar10 == lVar11) goto LAB_012be980;
      }
      plVar1 = *(long **)(this_01 + 0x10);
      if ((ulong)(*(long *)(this_01 + 0x18) - (long)plVar1) < 0x18) {
        plVar1 = (long *)Zone::NewExpand(this_01,0x18);
      }
      else {
        *(long **)(this_01 + 0x10) = plVar1 + 3;
      }
      lVar5 = *(long *)(lVar9 + 8);
      *plVar1 = lVar11;
      plVar1[1] = lVar5;
      if (lVar5 == 0) {
        lVar11 = 1;
      }
      else {
        lVar11 = *(long *)(lVar5 + 0x10) + 1;
      }
      plVar1[2] = lVar11;
      *(long **)(lVar9 + 8) = plVar1;
LAB_012be980:
    }
  }
  if (*(long *)param_1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(*(long *)param_1 + 0x10);
  }
  FunctionalSet<v8::internal::compiler::VirtualClosure,std::__ndk1::equal_to<v8::internal::compiler::VirtualClosure>>
  ::Union((FunctionalSet<v8::internal::compiler::VirtualClosure,std::__ndk1::equal_to<v8::internal::compiler::VirtualClosure>>
           *)(*(long *)this + 0x10),uVar3,this_01);
  if (*(long *)param_1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(*(long *)param_1 + 0x18);
  }
  FunctionalSet<v8::internal::compiler::VirtualContext,std::__ndk1::equal_to<v8::internal::compiler::VirtualContext>>
  ::Union((FunctionalSet<v8::internal::compiler::VirtualContext,std::__ndk1::equal_to<v8::internal::compiler::VirtualContext>>
           *)(*(long *)this + 0x18),uVar3,this_01);
  this_00 = (FunctionalSet<v8::internal::compiler::VirtualBoundFunction,std::__ndk1::equal_to<v8::internal::compiler::VirtualBoundFunction>>
             *)(*(long *)this + 0x20);
  if (*(long *)param_1 == 0) {
    pVVar7 = (VirtualBoundFunction *)0x0;
  }
  else {
    pVVar7 = *(VirtualBoundFunction **)(*(long *)param_1 + 0x20);
  }
  pVVar6 = *(VirtualBoundFunction **)this_00;
  if (pVVar6 != pVVar7) {
    if (pVVar6 == (VirtualBoundFunction *)0x0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(ulong *)(pVVar6 + 0x30);
    }
    if ((pVVar7 != (VirtualBoundFunction *)0x0) && (uVar4 < *(ulong *)(pVVar7 + 0x30))) {
      *(VirtualBoundFunction **)this_00 = pVVar7;
      pVVar7 = pVVar6;
    }
    for (; pVVar7 != (VirtualBoundFunction *)0x0; pVVar7 = *(VirtualBoundFunction **)(pVVar7 + 0x28)
        ) {
      FunctionalSet<v8::internal::compiler::VirtualBoundFunction,std::__ndk1::equal_to<v8::internal::compiler::VirtualBoundFunction>>
      ::Add(this_00,pVVar7,this_01);
    }
  }
  return;
}

