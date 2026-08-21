
/* v8::internal::compiler::BytecodeLiveness::BytecodeLiveness(int, v8::internal::Zone*) */

void __thiscall
v8::internal::compiler::BytecodeLiveness::BytecodeLiveness
          (BytecodeLiveness *this,int param_1,Zone *param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  
  lVar3 = *(long *)(param_2 + 0x10);
  if ((ulong)(*(long *)(param_2 + 0x18) - lVar3) < 0x18) {
    lVar3 = Zone::NewExpand(param_2,0x18);
  }
  else {
    *(long *)(param_2 + 0x10) = lVar3 + 0x18;
  }
  iVar1 = param_1 + 1;
  *(int *)(lVar3 + 8) = iVar1;
  if (iVar1 < 0x41) {
    *(undefined4 *)(lVar3 + 0xc) = 1;
    *(undefined8 *)(lVar3 + 0x10) = 0;
  }
  else {
    iVar2 = ((uint)param_1 >> 6) + 1;
    *(undefined8 *)(lVar3 + 0x10) = 0;
    *(int *)(lVar3 + 0xc) = iVar2;
    puVar4 = *(undefined8 **)(param_2 + 0x10);
    uVar5 = (ulong)(uint)(iVar2 * 8);
    if ((ulong)(*(long *)(param_2 + 0x18) - (long)puVar4) < uVar5) {
      puVar4 = (undefined8 *)Zone::NewExpand(param_2,uVar5);
    }
    else {
      *(ulong *)(param_2 + 0x10) = (long)puVar4 + uVar5;
    }
    *(undefined8 **)(lVar3 + 0x10) = puVar4;
    if (*(int *)(lVar3 + 0xc) == 1) {
      *(undefined8 *)(lVar3 + 0x10) = 0;
    }
    else if ((0 < *(int *)(lVar3 + 0xc)) && (*puVar4 = 0, 1 < *(int *)(lVar3 + 0xc))) {
      lVar6 = 1;
      do {
        *(undefined8 *)(*(long *)(lVar3 + 0x10) + lVar6 * 8) = 0;
        lVar6 = lVar6 + 1;
      } while (lVar6 < *(int *)(lVar3 + 0xc));
    }
  }
  *(long *)this = lVar3;
  lVar3 = *(long *)(param_2 + 0x10);
  if ((ulong)(*(long *)(param_2 + 0x18) - lVar3) < 0x18) {
    lVar3 = Zone::NewExpand(param_2,0x18);
  }
  else {
    *(long *)(param_2 + 0x10) = lVar3 + 0x18;
  }
  *(int *)(lVar3 + 8) = iVar1;
  if (iVar1 < 0x41) {
    *(undefined4 *)(lVar3 + 0xc) = 1;
    *(undefined8 *)(lVar3 + 0x10) = 0;
  }
  else {
    iVar1 = ((uint)param_1 >> 6) + 1;
    *(undefined8 *)(lVar3 + 0x10) = 0;
    *(int *)(lVar3 + 0xc) = iVar1;
    puVar4 = *(undefined8 **)(param_2 + 0x10);
    uVar5 = (ulong)(uint)(iVar1 * 8);
    if ((ulong)(*(long *)(param_2 + 0x18) - (long)puVar4) < uVar5) {
      puVar4 = (undefined8 *)Zone::NewExpand(param_2,uVar5);
    }
    else {
      *(ulong *)(param_2 + 0x10) = (long)puVar4 + uVar5;
    }
    *(undefined8 **)(lVar3 + 0x10) = puVar4;
    if (*(int *)(lVar3 + 0xc) == 1) {
      *(undefined8 *)(lVar3 + 0x10) = 0;
    }
    else if ((0 < *(int *)(lVar3 + 0xc)) && (*puVar4 = 0, 1 < *(int *)(lVar3 + 0xc))) {
      lVar6 = 1;
      do {
        *(undefined8 *)(*(long *)(lVar3 + 0x10) + lVar6 * 8) = 0;
        lVar6 = lVar6 + 1;
      } while (lVar6 < *(int *)(lVar3 + 0xc));
    }
  }
  *(long *)(this + 8) = lVar3;
  return;
}

