
/* std::__ndk1::vector<v8::internal::MachineRepresentation,
   v8::internal::ZoneAllocator<v8::internal::MachineRepresentation> >::__append(unsigned long,
   v8::internal::MachineRepresentation const&) */

void __thiscall
std::__ndk1::
vector<v8::internal::MachineRepresentation,v8::internal::ZoneAllocator<v8::internal::MachineRepresentation>>
::__append(vector<v8::internal::MachineRepresentation,v8::internal::ZoneAllocator<v8::internal::MachineRepresentation>>
           *this,ulong param_1,MachineRepresentation *param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  Zone *this_00;
  undefined1 *puVar6;
  undefined1 *puVar7;
  ulong uVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  undefined1 *puVar11;
  long lVar12;
  
  puVar11 = *(undefined1 **)(this + 8);
  if (param_1 <= (ulong)(*(long *)(this + 0x10) - (long)puVar11)) {
    do {
      param_1 = param_1 - 1;
      *puVar11 = *param_2;
      puVar11 = (undefined1 *)(*(long *)(this + 8) + 1);
      *(undefined1 **)(this + 8) = puVar11;
    } while (param_1 != 0);
    return;
  }
  lVar12 = *(long *)this;
  puVar1 = puVar11 + (param_1 - lVar12);
  if ((ulong)puVar1 >> 0x1f != 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar5 = *(long *)(this + 0x10) - lVar12;
  puVar7 = (undefined1 *)(uVar5 * 2);
  if (puVar1 <= puVar7) {
    puVar1 = puVar7;
  }
  if (0x3ffffffe < uVar5) {
    puVar1 = (undefined1 *)0x7fffffff;
  }
  if (puVar1 == (undefined1 *)0x0) {
    lVar4 = 0;
  }
  else {
    this_00 = *(Zone **)(this + 0x18);
    uVar5 = (ulong)(puVar1 + 7) & 0xfffffffffffffff8;
    lVar4 = *(long *)(this_00 + 0x10);
    if ((ulong)(*(long *)(this_00 + 0x18) - lVar4) < uVar5) {
      lVar4 = v8::internal::Zone::NewExpand(this_00,uVar5);
    }
    else {
      *(ulong *)(this_00 + 0x10) = lVar4 + uVar5;
    }
  }
  puVar7 = puVar11 + (lVar4 - lVar12);
  puVar9 = puVar7;
  if ((0x1f < param_1) &&
     ((param_2 + 1 <= puVar7 || (puVar11 + lVar4 + (param_1 - lVar12) <= param_2)))) {
    uVar2 = *param_2;
    uVar8 = param_1 & 0xffffffffffffffe0;
    puVar6 = puVar7 + uVar8;
    puVar10 = (undefined8 *)(puVar11 + (lVar4 - lVar12) + 0x10);
    uVar5 = uVar8;
    do {
      puVar10[-1] = CONCAT17(uVar2,CONCAT16(uVar2,CONCAT15(uVar2,CONCAT14(uVar2,CONCAT13(uVar2,
                                                  CONCAT12(uVar2,CONCAT11(uVar2,uVar2)))))));
      puVar10[-2] = CONCAT17(uVar2,CONCAT16(uVar2,CONCAT15(uVar2,CONCAT14(uVar2,CONCAT13(uVar2,
                                                  CONCAT12(uVar2,CONCAT11(uVar2,uVar2)))))));
      puVar10[1] = CONCAT17(uVar2,CONCAT16(uVar2,CONCAT15(uVar2,CONCAT14(uVar2,CONCAT13(uVar2,
                                                  CONCAT12(uVar2,CONCAT11(uVar2,uVar2)))))));
      *puVar10 = CONCAT17(uVar2,CONCAT16(uVar2,CONCAT15(uVar2,CONCAT14(uVar2,CONCAT13(uVar2,CONCAT12
                                                  (uVar2,CONCAT11(uVar2,uVar2)))))));
      uVar5 = uVar5 - 0x20;
      puVar10 = puVar10 + 4;
    } while (uVar5 != 0);
    bVar3 = uVar8 == param_1;
    puVar9 = puVar6;
    param_1 = param_1 - uVar8;
    if (bVar3) goto LAB_0164b1dc;
  }
  do {
    param_1 = param_1 - 1;
    puVar6 = puVar9 + 1;
    *puVar9 = *param_2;
    puVar9 = puVar6;
  } while (param_1 != 0);
LAB_0164b1dc:
  puVar11 = *(undefined1 **)this;
  puVar9 = *(undefined1 **)(this + 8);
  while (puVar9 != puVar11) {
    puVar9 = puVar9 + -1;
    puVar7 = puVar7 + -1;
    *puVar7 = *puVar9;
  }
  *(undefined1 **)this = puVar7;
  *(undefined1 **)(this + 8) = puVar6;
  *(undefined1 **)(this + 0x10) = puVar1 + lVar4;
  return;
}

