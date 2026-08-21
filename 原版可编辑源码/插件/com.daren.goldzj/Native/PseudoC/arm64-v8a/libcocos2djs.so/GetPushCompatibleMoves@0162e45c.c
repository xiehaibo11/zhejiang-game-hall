
/* v8::internal::compiler::CodeGenerator::GetPushCompatibleMoves(v8::internal::compiler::Instruction*,
   v8::base::Flags<v8::internal::compiler::CodeGenerator::PushTypeFlag, int>,
   v8::internal::ZoneVector<v8::internal::compiler::MoveOperands*>*) */

void v8::internal::compiler::CodeGenerator::GetPushCompatibleMoves
               (long param_1,uint param_2,
               vector<v8::internal::compiler::MoveOperands*,v8::internal::ZoneAllocator<v8::internal::compiler::MoveOperands*>>
               *param_3)

{
  undefined8 *puVar1;
  size_t __n;
  bool bVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  ulong *puVar10;
  int iVar11;
  
  *(undefined8 *)(param_3 + 8) = *(undefined8 *)param_3;
  puVar3 = *(undefined8 **)(param_1 + 8);
  if (puVar3 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)puVar3[1];
    for (puVar3 = (undefined8 *)*puVar3; puVar3 != puVar1; puVar3 = puVar3 + 1) {
      puVar10 = (ulong *)*puVar3;
      uVar8 = *puVar10;
      uVar5 = puVar10[1];
      uVar7 = uVar8 & 0x1c;
      bVar2 = ((uint)uVar8 >> 5 & 0xff) < 0xb;
      if ((uVar7 == 0xc && bVar2) && (-1 < (long)uVar8)) goto LAB_0162e5cc;
      if (((uVar5 & 0x1c) == 0xc) && (((uint)(uVar5 >> 5) & 0xff) < 0xb)) {
        iVar11 = (int)((long)uVar5 >> 0x23);
        if (-1 < iVar11) {
          if (((param_2 & 1) == 0) || ((uVar8 & 7) != 3)) {
            if ((uVar7 == 4) && (((uint)(uVar8 >> 5) & 0xff) < 0xb)) {
              if ((param_2 >> 1 & 1) != 0) goto LAB_0162e550;
            }
            else if (((param_2 >> 2 & 1) != 0) && (uVar7 == 0xc && bVar2)) goto LAB_0162e550;
          }
          else {
LAB_0162e550:
            lVar4 = *(long *)param_3;
            uVar8 = *(long *)(param_3 + 8) - lVar4 >> 3;
            if ((int)uVar8 <= iVar11) {
              uVar7 = ((long)uVar5 >> 0x23) + 1;
              if (uVar8 <= uVar7 && uVar7 - uVar8 != 0) {
                std::__ndk1::
                vector<v8::internal::compiler::MoveOperands*,v8::internal::ZoneAllocator<v8::internal::compiler::MoveOperands*>>
                ::__append(param_3,uVar7 - uVar8);
                lVar4 = *(long *)param_3;
              }
              else if (uVar8 > uVar7) {
                *(ulong *)(param_3 + 8) = lVar4 + uVar7 * 8;
              }
            }
            *(ulong **)(lVar4 + ((long)uVar5 >> 0x23 & 0xffffffffU) * 8) = puVar10;
          }
        }
      }
    }
  }
  plVar6 = *(long **)(param_1 + 0x10);
  if (plVar6 != (long *)0x0) {
    for (puVar3 = (undefined8 *)*plVar6; puVar3 != (undefined8 *)plVar6[1]; puVar3 = puVar3 + 1) {
      uVar8 = *(ulong *)*puVar3;
      if ((((uVar8 & 0x1c) == 0xc) && (((uint)(uVar8 >> 5) & 0xff) < 0xb)) && (-1 < (long)uVar8))
      goto LAB_0162e5cc;
    }
  }
  plVar6 = *(long **)param_3;
  plVar9 = *(long **)(param_3 + 8);
  lVar4 = (long)plVar9 - (long)plVar6;
  uVar5 = lVar4 >> 3;
  uVar8 = uVar5;
  if (lVar4 != 0) {
    do {
      plVar9 = plVar9 + -1;
      uVar8 = uVar8 - (*plVar9 != 0);
      if (*plVar9 == 0) break;
    } while (plVar6 != plVar9);
  }
  __n = lVar4 + uVar8 * -8;
  uVar7 = uVar5 - uVar8;
  if (__n != 0) {
    memmove(plVar6,plVar6 + uVar8,__n);
    plVar6 = *(long **)param_3;
    uVar5 = *(long *)(param_3 + 8) - (long)plVar6 >> 3;
  }
  if (uVar5 <= uVar7 && uVar7 - uVar5 != 0) {
    std::__ndk1::
    vector<v8::internal::compiler::MoveOperands*,v8::internal::ZoneAllocator<v8::internal::compiler::MoveOperands*>>
    ::__append(param_3,uVar7 - uVar5);
    return;
  }
  if (uVar5 <= uVar7) {
    return;
  }
  plVar6 = plVar6 + uVar7;
LAB_0162e660:
  *(long **)(param_3 + 8) = plVar6;
  return;
LAB_0162e5cc:
  plVar6 = *(long **)param_3;
  goto LAB_0162e660;
}

