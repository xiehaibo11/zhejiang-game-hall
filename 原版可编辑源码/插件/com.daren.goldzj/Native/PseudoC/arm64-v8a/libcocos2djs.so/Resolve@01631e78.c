
/* v8::internal::compiler::GapResolver::Resolve(v8::internal::compiler::ParallelMove*) */

void __thiscall
v8::internal::compiler::GapResolver::Resolve(GapResolver *this,ParallelMove *param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  uint uVar12;
  long *plVar13;
  uint uVar14;
  long *plVar15;
  
  lVar6 = *(long *)param_1;
  if (*(long *)(param_1 + 8) - lVar6 != 0) {
    uVar3 = 0;
    uVar12 = 0;
    uVar14 = 0;
    uVar2 = *(long *)(param_1 + 8) - lVar6 >> 3;
    do {
      puVar8 = *(ulong **)(lVar6 + uVar3 * 8);
      uVar10 = *puVar8;
      if ((uVar10 & 7) == 0) {
LAB_01631f28:
        uVar2 = uVar2 - 1;
        if (uVar2 <= uVar3) goto LAB_01631fc8;
        *(undefined8 *)(lVar6 + uVar3 * 8) = *(undefined8 *)(lVar6 + uVar2 * 8);
      }
      else {
        uVar5 = (uint)uVar10;
        uVar11 = uVar10;
        if ((uVar5 >> 2 & 1) != 0) {
          uVar11 = 0x180;
          if ((uVar5 >> 5 & 0xff) < 0xb || (uVar10 & 0x1c) != 4) {
            uVar11 = 0;
          }
          uVar11 = uVar10 & 0xffffffffffffe018 | uVar11 | 4;
        }
        uVar9 = puVar8[1];
        uVar7 = (uint)uVar9;
        uVar1 = uVar9;
        if ((uVar7 >> 2 & 1) != 0) {
          uVar1 = 0x180;
          if ((uVar7 >> 5 & 0xff) < 0xb || (uVar9 & 0x1c) != 4) {
            uVar1 = 0;
          }
          uVar1 = uVar9 & 0xffffffffffffe018 | uVar1 | 4;
        }
        if (uVar11 == uVar1) goto LAB_01631f28;
        if ((uVar10 & 7) == 2) {
          uVar4 = 0;
        }
        else if ((uVar10 & 0x18) == 0) {
          uVar4 = 1;
          if (10 < (uVar5 >> 5 & 0xff)) {
            uVar4 = 2;
          }
        }
        else {
          uVar4 = 3;
        }
        uVar5 = 1;
        uVar3 = uVar3 + 1;
        uVar12 = uVar12 | 1 << (ulong)uVar4;
        if ((uVar9 & 7) == 2) {
          uVar5 = 0;
        }
        else if ((uVar9 & 0x18) == 0) {
          if (10 < (uVar7 >> 5 & 0xff)) {
            uVar5 = 2;
          }
        }
        else {
          uVar5 = 3;
        }
        uVar14 = uVar14 | 1 << (ulong)uVar5;
        if (uVar2 <= uVar3) goto LAB_01631fc8;
      }
      lVar6 = *(long *)param_1;
    } while( true );
  }
  uVar12 = 0;
  uVar14 = 0;
LAB_01631ff4:
  if ((uVar12 & uVar14 & 0xff) == 0) {
    plVar13 = *(long **)param_1;
    plVar15 = *(long **)(param_1 + 8);
  }
  else {
    plVar13 = *(long **)param_1;
    plVar15 = *(long **)(param_1 + 8);
    if (1 < (ulong)((long)plVar15 - (long)plVar13 >> 3)) {
      if (plVar15 == plVar13) {
        return;
      }
      uVar3 = 0;
      do {
        if (((byte)*(MoveOperands *)plVar13[uVar3] & 7) != 0) {
          PerformMove(this,param_1,(MoveOperands *)plVar13[uVar3]);
          plVar13 = *(long **)param_1;
          plVar15 = *(long **)(param_1 + 8);
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < (ulong)((long)plVar15 - (long)plVar13 >> 3));
      return;
    }
  }
  for (; plVar13 != plVar15; plVar13 = plVar13 + 1) {
    (**(code **)(**(long **)this + 0x10))(*(long **)this,*plVar13,*plVar13 + 8);
  }
  return;
LAB_01631fc8:
  uVar3 = *(long *)(param_1 + 8) - *(long *)param_1 >> 3;
  if (uVar2 - uVar3 != 0) {
    if (uVar2 < uVar3) {
      if (uVar2 < uVar3) {
        *(ulong *)(param_1 + 8) = *(long *)param_1 + uVar2 * 8;
      }
    }
    else {
      std::__ndk1::
      vector<v8::internal::compiler::MoveOperands*,v8::internal::ZoneAllocator<v8::internal::compiler::MoveOperands*>>
      ::__append((vector<v8::internal::compiler::MoveOperands*,v8::internal::ZoneAllocator<v8::internal::compiler::MoveOperands*>>
                  *)param_1,uVar2 - uVar3);
    }
  }
  goto LAB_01631ff4;
}

