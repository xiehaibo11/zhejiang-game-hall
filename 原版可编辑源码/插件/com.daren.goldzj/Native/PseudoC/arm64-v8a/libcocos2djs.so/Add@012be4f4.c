
/* v8::internal::compiler::FunctionalSet<v8::internal::compiler::VirtualBoundFunction,
   std::__ndk1::equal_to<v8::internal::compiler::VirtualBoundFunction>
   >::Add(v8::internal::compiler::VirtualBoundFunction const&, v8::internal::Zone*) */

void __thiscall
v8::internal::compiler::
FunctionalSet<v8::internal::compiler::VirtualBoundFunction,std::__ndk1::equal_to<v8::internal::compiler::VirtualBoundFunction>>
::Add(FunctionalSet<v8::internal::compiler::VirtualBoundFunction,std::__ndk1::equal_to<v8::internal::compiler::VirtualBoundFunction>>
      *this,VirtualBoundFunction *param_1,Zone *param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  Hints *this_00;
  Zone *this_01;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  
  for (this_00 = *(Hints **)this; this_00 != (Hints *)0x0; this_00 = *(Hints **)(this_00 + 0x28)) {
    if ((*(long *)(this_00 + 0x10) - *(long *)(this_00 + 8) ==
         *(long *)(param_1 + 0x10) - *(long *)(param_1 + 8)) &&
       (uVar1 = Hints::operator==(this_00,(Hints *)param_1), (uVar1 & 1) != 0)) {
      lVar8 = *(long *)(this_00 + 8);
      if (*(long *)(this_00 + 0x10) == lVar8) {
        return;
      }
      lVar7 = 0;
      uVar1 = 0;
      while (uVar2 = Hints::operator==((Hints *)(lVar8 + lVar7),
                                       (Hints *)(*(long *)(param_1 + 8) + lVar7)), (uVar2 & 1) != 0)
      {
        lVar8 = *(long *)(this_00 + 8);
        uVar1 = uVar1 + 1;
        lVar7 = lVar7 + 8;
        if ((ulong)(*(long *)(this_00 + 0x10) - lVar8 >> 3) <= uVar1) {
          return;
        }
      }
    }
  }
  uVar9 = *(undefined8 *)param_1;
  this_01 = *(Zone **)(param_1 + 0x20);
  uVar1 = *(long *)(param_1 + 0x10) - *(long *)(param_1 + 8);
  if (uVar1 == 0) {
    puVar5 = (undefined8 *)0x0;
    puVar10 = (undefined8 *)0x0;
  }
  else {
    if ((ulong)((long)uVar1 >> 3) >> 0x1c != 0) goto LAB_012be758;
    puVar5 = *(undefined8 **)(this_01 + 0x10);
    if ((ulong)(*(long *)(this_01 + 0x18) - (long)puVar5) < uVar1) {
      puVar5 = (undefined8 *)Zone::NewExpand(this_01,uVar1);
    }
    else {
      *(ulong *)(this_01 + 0x10) = (long)puVar5 + uVar1;
    }
    puVar4 = *(undefined8 **)(param_1 + 0x10);
    puVar10 = puVar5;
    for (puVar3 = *(undefined8 **)(param_1 + 8); puVar3 != puVar4; puVar3 = puVar3 + 1) {
      *puVar10 = *puVar3;
      puVar10 = puVar10 + 1;
    }
  }
  puVar3 = *(undefined8 **)(param_2 + 0x10);
  if ((ulong)(*(long *)(param_2 + 0x18) - (long)puVar3) < 0x38) {
    puVar3 = (undefined8 *)Zone::NewExpand(param_2,0x38);
    uVar1 = (long)puVar10 - (long)puVar5;
    if (uVar1 != 0) goto LAB_012be61c;
LAB_012be678:
    puVar4 = (undefined8 *)0x0;
    puVar6 = (undefined8 *)0x0;
  }
  else {
    *(undefined8 **)(param_2 + 0x10) = puVar3 + 7;
    uVar1 = (long)puVar10 - (long)puVar5;
    if (uVar1 == 0) goto LAB_012be678;
LAB_012be61c:
    if ((ulong)((long)uVar1 >> 3) >> 0x1c != 0) goto LAB_012be758;
    puVar4 = *(undefined8 **)(this_01 + 0x10);
    if ((ulong)(*(long *)(this_01 + 0x18) - (long)puVar4) < uVar1) {
      puVar4 = (undefined8 *)Zone::NewExpand(this_01,uVar1);
      puVar6 = puVar4;
    }
    else {
      *(ulong *)(this_01 + 0x10) = (long)puVar4 + uVar1;
      puVar6 = puVar4;
    }
    for (; puVar5 != puVar10; puVar5 = puVar5 + 1) {
      *puVar4 = *puVar5;
      puVar4 = puVar4 + 1;
    }
  }
  lVar8 = *(long *)this;
  uVar1 = (long)puVar4 - (long)puVar6;
  *puVar3 = uVar9;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[4] = this_01;
  if (uVar1 != 0) {
    if ((ulong)((long)uVar1 >> 3) >> 0x1c != 0) {
LAB_012be758:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    puVar5 = *(undefined8 **)(this_01 + 0x10);
    if ((ulong)(*(long *)(this_01 + 0x18) - (long)puVar5) < uVar1) {
      puVar5 = (undefined8 *)Zone::NewExpand(this_01,uVar1);
    }
    else {
      *(ulong *)(this_01 + 0x10) = (long)puVar5 + uVar1;
    }
    puVar3[1] = puVar5;
    puVar3[2] = puVar5;
    puVar3[3] = puVar5 + ((long)uVar1 >> 3);
    for (; puVar6 != puVar4; puVar6 = puVar6 + 1) {
      *puVar5 = *puVar6;
      puVar5 = (undefined8 *)(puVar3[2] + 8);
      puVar3[2] = puVar5;
    }
  }
  puVar3[5] = lVar8;
  if (lVar8 == 0) {
    lVar8 = 1;
  }
  else {
    lVar8 = *(long *)(lVar8 + 0x30) + 1;
  }
  puVar3[6] = lVar8;
  *(undefined8 **)this = puVar3;
  return;
}

