
/* v8::internal::compiler::Linkage::GetJSCallDescriptor(v8::internal::Zone*, bool, int,
   v8::base::Flags<v8::internal::compiler::CallDescriptor::Flag, int>) */

undefined4 *
v8::internal::compiler::Linkage::GetJSCallDescriptor
          (Zone *param_1,ulong param_2,uint param_3,undefined4 param_4)

{
  undefined8 uVar1;
  uint uVar2;
  uint *puVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  uint *puVar10;
  uint uVar11;
  ulong uVar12;
  long lVar13;
  
  puVar3 = *(uint **)(param_1 + 0x10);
  lVar13 = (long)(int)param_3;
  uVar6 = (lVar13 << 0x20) + 0x400000000 >> 0x1d;
  if ((ulong)(*(long *)(param_1 + 0x18) - (long)puVar3) < uVar6) {
    puVar3 = (uint *)Zone::NewExpand(param_1,uVar6);
  }
  else {
    *(ulong *)(param_1 + 0x10) = (long)puVar3 + uVar6;
  }
  *puVar3 = 0;
  *(undefined2 *)(puVar3 + 1) = 0x708;
  if ((int)param_3 < 1) {
    uVar6 = 1;
  }
  else {
    uVar7 = (ulong)param_3;
    if (param_3 == 1) {
      uVar9 = 0;
      uVar6 = 1;
    }
    else {
      uVar9 = uVar7 & 0xfffffffe;
      uVar6 = uVar7 | 1;
      uVar11 = param_3 * -2;
      uVar12 = uVar9;
      puVar10 = puVar3;
      do {
        *(undefined2 *)(puVar10 + 3) = 0x708;
        *(undefined2 *)(puVar10 + 5) = 0x708;
        uVar12 = uVar12 - 2;
        puVar10[2] = uVar11 | 1;
        puVar10[4] = uVar11 + 2 | 1;
        uVar11 = uVar11 + 4;
        puVar10 = puVar10 + 4;
      } while (uVar12 != 0);
      if (uVar9 == uVar7) goto LAB_01767e54;
    }
    lVar8 = uVar7 - uVar9;
    uVar11 = (int)uVar9 * 2 + param_3 * -2;
    puVar10 = puVar3 + uVar6 * 2;
    do {
      uVar2 = uVar11 | 1;
      *(undefined2 *)(puVar10 + 1) = 0x708;
      uVar6 = uVar6 + 1;
      uVar11 = uVar11 + 2;
      lVar8 = lVar8 + -1;
      *puVar10 = uVar2;
      puVar10 = puVar10 + 2;
    } while (lVar8 != 0);
  }
LAB_01767e54:
  puVar10 = puVar3 + uVar6 * 2;
  *puVar10 = 6;
  *(undefined2 *)(puVar10 + 1) = 0x708;
  puVar10[2] = 0;
  *(undefined2 *)(puVar10 + 3) = 0x204;
  *(undefined2 *)(puVar10 + 5) = 0x708;
  puVar10[4] = 0x36;
  puVar4 = *(undefined4 **)(param_1 + 0x10);
  lVar8 = *(long *)(param_1 + 0x18);
  uVar1 = 0x70800000007;
  if ((param_2 & 1) == 0) {
    uVar1 = 0x70800000002;
  }
  if ((ulong)(lVar8 - (long)puVar4) < 0x58) {
    puVar4 = (undefined4 *)Zone::NewExpand(param_1,0x58);
    puVar5 = *(undefined8 **)(param_1 + 0x10);
    lVar8 = *(long *)(param_1 + 0x18);
  }
  else {
    puVar5 = (undefined8 *)(puVar4 + 0x16);
    *(undefined8 **)(param_1 + 0x10) = puVar5;
  }
  if ((ulong)(lVar8 - (long)puVar5) < 0x18) {
    puVar5 = (undefined8 *)Zone::NewExpand(param_1,0x18);
  }
  else {
    *(undefined8 **)(param_1 + 0x10) = puVar5 + 3;
  }
  puVar5[1] = lVar13 + 3;
  puVar5[2] = puVar3;
  *puVar5 = 1;
  *puVar4 = 1;
  *(undefined2 *)(puVar4 + 1) = 0x708;
  *(undefined8 *)(puVar4 + 2) = uVar1;
  *(undefined8 **)(puVar4 + 4) = puVar5;
  *(long *)(puVar4 + 6) = lVar13;
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 *)(puVar4 + 10) = 0;
  *(undefined8 *)(puVar4 + 0xe) = 0;
  *(undefined8 *)(puVar4 + 0x10) = 0;
  *(undefined8 *)(puVar4 + 0xc) = 0;
  puVar4[0x12] = param_4;
  *(char **)(puVar4 + 0x14) = "js-call";
  return puVar4;
}

