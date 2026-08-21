
/* v8::internal::compiler::Linkage::GetBytecodeDispatchCallDescriptor(v8::internal::Zone*,
   v8::internal::CallInterfaceDescriptor const&, int) */

undefined4 *
v8::internal::compiler::Linkage::GetBytecodeDispatchCallDescriptor
          (Zone *param_1,CallInterfaceDescriptor *param_2,int param_3)

{
  uint uVar1;
  undefined2 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  
  puVar5 = *(undefined4 **)(param_1 + 0x10);
  iVar3 = **(int **)(param_2 + 8);
  uVar1 = iVar3 + param_3;
  uVar8 = ((long)(int)uVar1 << 0x20) + 0x100000000 >> 0x1d;
  if ((ulong)(*(long *)(param_1 + 0x18) - (long)puVar5) < uVar8) {
    puVar5 = (undefined4 *)Zone::NewExpand(param_1,uVar8);
  }
  else {
    *(ulong *)(param_1 + 0x10) = uVar8 + (long)puVar5;
  }
  uVar2 = **(undefined2 **)(*(long *)(param_2 + 8) + 0x20);
  *puVar5 = 0;
  *(undefined2 *)(puVar5 + 1) = uVar2;
  if (0 < (int)uVar1) {
    uVar8 = 0;
    if (0 < (long)iVar3) goto LAB_01768694;
    do {
      uVar9 = (ulong)(((int)uVar8 - uVar1) * 2) | 0x70800000001;
      while( true ) {
        uVar8 = uVar8 + 1;
        *(short *)(puVar5 + uVar8 * 2 + 1) = (short)(uVar9 >> 0x20);
        puVar5[uVar8 * 2] = (int)uVar9;
        if (uVar8 == uVar1) goto LAB_017686bc;
        if ((long)iVar3 <= (long)uVar8) break;
LAB_01768694:
        lVar10 = *(long *)(param_2 + 8);
        uVar9 = (ulong)CONCAT24(*(undefined2 *)
                                 (*(long *)(lVar10 + 0x20) +
                                 (long)(*(int *)(lVar10 + 4) + (int)uVar8) * 2),
                                *(int *)(*(long *)(lVar10 + 0x18) + uVar8 * 0xc) << 1);
      }
    } while( true );
  }
LAB_017686bc:
  puVar6 = *(undefined4 **)(param_1 + 0x10);
  lVar10 = *(long *)(param_1 + 0x18);
  if ((ulong)(lVar10 - (long)puVar6) < 0x58) {
    puVar6 = (undefined4 *)Zone::NewExpand(param_1,0x58);
    puVar7 = *(undefined8 **)(param_1 + 0x10);
    lVar10 = *(long *)(param_1 + 0x18);
  }
  else {
    puVar7 = (undefined8 *)(puVar6 + 0x16);
    *(undefined8 **)(param_1 + 0x10) = puVar7;
  }
  if ((ulong)(lVar10 - (long)puVar7) < 0x18) {
    puVar7 = (undefined8 *)Zone::NewExpand(param_1,0x18);
  }
  else {
    *(undefined8 **)(param_1 + 0x10) = puVar7 + 3;
  }
  puVar7[1] = (long)(int)uVar1;
  puVar7[2] = puVar5;
  *puVar7 = 1;
  uVar4 = CallInterfaceDescriptor::DebugName(param_2);
  *puVar6 = 2;
  *(undefined2 *)(puVar6 + 1) = 5;
  *(long *)(puVar6 + 6) = (long)param_3;
  *(undefined8 *)(puVar6 + 8) = 0;
  *(undefined1 *)(puVar6 + 10) = 0;
  *(undefined8 *)(puVar6 + 0xe) = 0;
  *(undefined8 *)(puVar6 + 0x10) = 0;
  *(undefined8 *)(puVar6 + 0xc) = 0;
  *(undefined8 *)(puVar6 + 2) = 0x5fffffffe;
  *(undefined8 **)(puVar6 + 4) = puVar7;
  puVar6[0x12] = 0x84;
  *(undefined8 *)(puVar6 + 0x14) = uVar4;
  return puVar6;
}

