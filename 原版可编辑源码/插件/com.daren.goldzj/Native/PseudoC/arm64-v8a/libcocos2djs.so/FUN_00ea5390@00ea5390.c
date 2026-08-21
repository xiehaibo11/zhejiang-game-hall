
FunctionTemplate *
FUN_00ea5390(Factory *param_1,long param_2,undefined8 param_3,ulong *param_4,int param_5,
            uint param_6,Factory *param_7,undefined4 param_8)

{
  uint uVar1;
  uint uVar2;
  Factory *pFVar3;
  FunctionTemplate *pFVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  pFVar4 = (FunctionTemplate *)v8::internal::Factory::NewStruct(param_1,0x4e,1);
  *(undefined4 *)(*(long *)pFVar4 + 0xb) = 0;
  iVar5 = 0;
  *(undefined4 *)(*(long *)pFVar4 + 3) = 0;
  *(undefined4 *)(*(long *)pFVar4 + 0x2b) = 0;
  *(int *)(*(long *)pFVar4 + 0x2f) = param_5 << 1;
  uVar1 = *(int *)(*(long *)pFVar4 + 0x2b) >> 1;
  uVar2 = uVar1 | 0x10;
  if ((param_6 & 1) == 0) {
    uVar2 = uVar1 & 0x7fffffef;
  }
  *(int *)(*(long *)pFVar4 + 0x2b) = uVar2 << 1;
  if ((param_6 & 1) == 0) {
    uVar1 = (*(int *)(param_1 + 0xfe8) >> 1) + 1;
    iVar5 = uVar1 * 2;
    *(ulong *)(param_1 + 0xfe8) = -(ulong)(uVar1 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar1 << 1;
  }
  *(int *)(*(long *)pFVar4 + 7) = iVar5;
  if (param_2 != 0) {
    v8::FunctionTemplate::SetCallHandler(pFVar4,param_2,param_3,param_8);
  }
  *(uint *)(*(long *)pFVar4 + 0x2b) = *(uint *)(*(long *)pFVar4 + 0x2b) & 0xfffffffc;
  *(uint *)(*(long *)pFVar4 + 0x2b) = *(uint *)(*(long *)pFVar4 + 0x2b) & 0xfffffffa;
  *(uint *)(*(long *)pFVar4 + 0x2b) = *(uint *)(*(long *)pFVar4 + 0x2b) & 0xfffffffe | 0x40;
  if (param_4 != (ulong *)0x0) {
    uVar8 = *(ulong *)pFVar4;
    uVar7 = *param_4;
    *(int *)(uVar8 + 0x1f) = (int)uVar7;
    if ((uVar7 & 1) != 0) {
      uVar6 = *(ulong *)((uVar7 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar6 >> 0x12 & 1) != 0) {
        v8::internal::Heap_MarkingBarrierSlow(uVar8,uVar8 + 0x1f,uVar7);
        uVar6 = *(ulong *)(uVar7 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar6 & 0x18) != 0) && ((*(byte *)((uVar8 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        v8::internal::Heap_GenerationalBarrierSlow(uVar8,uVar8 + 0x1f,uVar7);
      }
    }
  }
  pFVar3 = param_1 + 0xa8;
  if (param_7 != (Factory *)0x0) {
    pFVar3 = param_7;
  }
  uVar8 = *(ulong *)pFVar4;
  uVar7 = *(ulong *)pFVar3;
  *(int *)(uVar8 + 0x33) = (int)uVar7;
  if ((uVar7 & 1) != 0) {
    uVar6 = *(ulong *)((uVar7 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar6 >> 0x12 & 1) != 0) {
      v8::internal::Heap_MarkingBarrierSlow(uVar8,uVar8 + 0x33,uVar7);
      uVar6 = *(ulong *)(uVar7 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar6 & 0x18) != 0) && ((*(byte *)((uVar8 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      v8::internal::Heap_GenerationalBarrierSlow(uVar8,uVar8 + 0x33,uVar7);
    }
  }
  return pFVar4;
}

