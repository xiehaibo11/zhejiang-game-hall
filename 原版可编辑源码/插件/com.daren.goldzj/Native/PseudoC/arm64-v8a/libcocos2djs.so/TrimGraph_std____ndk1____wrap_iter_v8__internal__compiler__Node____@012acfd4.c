
/* void 
   v8::internal::compiler::GraphTrimmer::TrimGraph<std::__ndk1::__wrap_iter<v8::internal::compiler::Node**>
   >(std::__ndk1::__wrap_iter<v8::internal::compiler::Node**>,
   std::__ndk1::__wrap_iter<v8::internal::compiler::Node**>) */

void __thiscall
v8::internal::compiler::GraphTrimmer::
TrimGraph<std::__ndk1::__wrap_iter<v8::internal::compiler::Node**>>
          (GraphTrimmer *this,long *param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  Zone *this_00;
  uint uVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  
  while( true ) {
    while( true ) {
      do {
        if (param_2 == param_3) {
          TrimGraph(this);
          return;
        }
        plVar8 = param_2 + 1;
        lVar9 = *param_2;
        uVar4 = *(byte *)(lVar9 + 0x17) & 0xf;
        plVar2 = (long *)(lVar9 + 0x20);
        if (uVar4 == 0xf) {
          uVar4 = *(uint *)(*plVar2 + 8);
          plVar2 = (long *)(*plVar2 + 0x10);
        }
        param_2 = plVar8;
      } while (((0 < (int)uVar4) && (*plVar2 == 0)) ||
              (*(uint *)(this + 8) < *(uint *)(lVar9 + 0x10)));
      *(uint *)(lVar9 + 0x10) = *(uint *)(this + 8) + 1;
      plVar2 = *(long **)(this + 0x18);
      if (plVar2 == *(long **)(this + 0x20)) break;
      *plVar2 = lVar9;
      *(long *)(this + 0x18) = *(long *)(this + 0x18) + 8;
    }
    lVar10 = (long)plVar2 - *(long *)(this + 0x10) >> 3;
    uVar1 = lVar10 + 1;
    if (uVar1 >> 0x1c != 0) break;
    lVar3 = (long)*(long **)(this + 0x20) - *(long *)(this + 0x10);
    uVar6 = lVar3 >> 2;
    if (uVar1 <= uVar6) {
      uVar1 = uVar6;
    }
    if (0x7fffffe < (ulong)(lVar3 >> 3)) {
      uVar1 = 0xfffffff;
    }
    if (uVar1 == 0) {
      lVar3 = 0;
    }
    else {
      this_00 = *(Zone **)(this + 0x28);
      uVar6 = uVar1 * 8;
      lVar3 = *(long *)(this_00 + 0x10);
      if (uVar6 < (ulong)(*(long *)(this_00 + 0x18) - lVar3) ||
          uVar6 - (*(long *)(this_00 + 0x18) - lVar3) == 0) {
        *(ulong *)(this_00 + 0x10) = lVar3 + uVar6;
      }
      else {
        lVar3 = Zone::NewExpand(this_00,uVar6);
      }
    }
    plVar2 = (long *)(lVar3 + lVar10 * 8);
    plVar5 = plVar2 + 1;
    *plVar2 = lVar9;
    plVar8 = *(long **)(this + 0x10);
    plVar7 = *(long **)(this + 0x18);
    while (plVar7 != plVar8) {
      plVar7 = plVar7 + -1;
      plVar2 = plVar2 + -1;
      *plVar2 = *plVar7;
    }
    *(long **)(this + 0x10) = plVar2;
    *(long **)(this + 0x18) = plVar5;
    *(ulong *)(this + 0x20) = lVar3 + uVar1 * 8;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

