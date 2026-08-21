
/* v8::internal::compiler::Linkage::GetCEntryStubCallDescriptor(v8::internal::Zone*, int, int, char
   const*, v8::base::Flags<v8::internal::compiler::Operator::Property, unsigned char>,
   v8::base::Flags<v8::internal::compiler::CallDescriptor::Flag, int>) */

undefined4 *
v8::internal::compiler::Linkage::GetCEntryStubCallDescriptor
          (Zone *param_1,uint param_2,uint param_3,undefined8 param_4,undefined1 param_5,
          undefined4 param_6)

{
  long lVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  uint *puVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  
  puVar3 = *(undefined4 **)(param_1 + 0x10);
  lVar1 = (long)(int)param_3 + 3;
  uVar10 = (int)lVar1 + param_2;
  uVar6 = -(ulong)(uVar10 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar10 << 3;
  if ((ulong)(*(long *)(param_1 + 0x18) - (long)puVar3) < uVar6) {
    puVar3 = (undefined4 *)Zone::NewExpand(param_1,uVar6);
  }
  else {
    *(ulong *)(param_1 + 0x10) = (long)puVar3 + uVar6;
  }
  if (param_2 != 0) {
    *puVar3 = 0;
    *(undefined2 *)(puVar3 + 1) = 0x708;
    if (param_2 != 1) {
      puVar3[2] = 2;
      *(undefined2 *)(puVar3 + 3) = 0x708;
      if (2 < param_2) {
        puVar3[4] = 4;
        *(undefined2 *)(puVar3 + 5) = 0x708;
      }
    }
  }
  lVar12 = (long)(int)param_2;
  if ((int)param_3 < 1) {
    uVar6 = 0;
  }
  else {
    uVar6 = (ulong)param_3;
    if (param_3 == 1) {
      uVar7 = 0;
    }
    else {
      uVar7 = uVar6 & 0xfffffffe;
      uVar10 = param_3 * -2;
      puVar8 = puVar3 + lVar12 * 2 + 2;
      uVar11 = uVar7;
      do {
        *(undefined2 *)(puVar8 + -1) = 0x708;
        *(undefined2 *)(puVar8 + 1) = 0x708;
        uVar11 = uVar11 - 2;
        puVar8[-2] = uVar10 | 1;
        *puVar8 = uVar10 + 2 | 1;
        uVar10 = uVar10 + 4;
        puVar8 = puVar8 + 4;
      } while (uVar11 != 0);
      if (uVar7 == uVar6) goto LAB_0176821c;
    }
    lVar9 = uVar6 - uVar7;
    uVar10 = (int)uVar7 * 2 + param_3 * -2;
    puVar8 = puVar3 + (uVar7 + lVar12) * 2;
    do {
      uVar2 = uVar10 | 1;
      *(undefined2 *)(puVar8 + 1) = 0x708;
      uVar10 = uVar10 + 2;
      lVar9 = lVar9 + -1;
      *puVar8 = uVar2;
      puVar8 = puVar8 + 2;
    } while (lVar9 != 0);
  }
LAB_0176821c:
  puVar4 = puVar3 + (uVar6 + lVar12) * 2;
  *(undefined2 *)(puVar4 + 1) = 5;
  *puVar4 = 2;
  *(undefined2 *)(puVar4 + 3) = 0x204;
  puVar4[2] = 0;
  puVar4[4] = 0x36;
  *(undefined2 *)(puVar4 + 5) = 0x708;
  puVar4 = *(undefined4 **)(param_1 + 0x10);
  lVar9 = *(long *)(param_1 + 0x18);
  if ((ulong)(lVar9 - (long)puVar4) < 0x58) {
    puVar4 = (undefined4 *)Zone::NewExpand(param_1,0x58);
    plVar5 = *(long **)(param_1 + 0x10);
    lVar9 = *(long *)(param_1 + 0x18);
  }
  else {
    plVar5 = (long *)(puVar4 + 0x16);
    *(long **)(param_1 + 0x10) = plVar5;
  }
  if ((ulong)(lVar9 - (long)plVar5) < 0x18) {
    plVar5 = (long *)Zone::NewExpand(param_1,0x18);
  }
  else {
    *(long **)(param_1 + 0x10) = plVar5 + 3;
  }
  *plVar5 = lVar12;
  plVar5[1] = lVar1;
  plVar5[2] = (long)puVar3;
  *puVar4 = 0;
  *(long *)(puVar4 + 6) = (long)(int)param_3;
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 *)(puVar4 + 10) = param_5;
  *(undefined8 *)(puVar4 + 0xe) = 0;
  *(undefined8 *)(puVar4 + 0x10) = 0;
  *(undefined8 *)(puVar4 + 0xc) = 0;
  puVar4[0x12] = param_6;
  *(undefined2 *)(puVar4 + 1) = 0x708;
  *(undefined8 *)(puVar4 + 2) = 0x708fffffffe;
  *(long **)(puVar4 + 4) = plVar5;
  *(undefined8 *)(puVar4 + 0x14) = param_4;
  return puVar4;
}

