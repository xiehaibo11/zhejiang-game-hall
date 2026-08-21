
/* v8::internal::interpreter::BytecodeGenerator::GlobalDeclarationsBuilder::AllocateDeclarations(v8::internal::UnoptimizedCompilationInfo*,
   v8::internal::Handle<v8::internal::Script>, v8::internal::Isolate*) */

ulong * __thiscall
v8::internal::interpreter::BytecodeGenerator::GlobalDeclarationsBuilder::AllocateDeclarations
          (GlobalDeclarationsBuilder *this,undefined8 param_2,undefined8 param_3,Factory *param_4)

{
  undefined4 *puVar1;
  Factory *pFVar2;
  undefined8 *puVar3;
  ulong *puVar4;
  long lVar5;
  Factory *pFVar6;
  ulong uVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  
  puVar4 = (ulong *)Factory::NewFixedArray
                              (param_4,(int)((ulong)(*(long *)(this + 8) - *(long *)this) >> 3) *
                                       -0x55555554,1);
  puVar11 = *(undefined8 **)this;
  puVar3 = *(undefined8 **)(this + 8);
  if (puVar11 != puVar3) {
    pFVar2 = param_4 + 0xa0;
    iVar8 = 0xf;
    lVar5 = puVar11[2];
    if (lVar5 != 0) goto LAB_0150b508;
    while (pFVar6 = pFVar2, puVar12 = puVar11, pFVar2 != (Factory *)0x0) {
      while( true ) {
        uVar10 = *puVar4;
        uVar9 = **(ulong **)*puVar12;
        puVar1 = (undefined4 *)(uVar10 + (long)(iVar8 + -8));
        *puVar1 = (int)uVar9;
        if ((uVar9 & 1) != 0) {
          uVar7 = *(ulong *)((uVar9 & 0xfffffffffffc0000) + 8);
          if (((uint)uVar7 >> 0x12 & 1) != 0) {
            Heap_MarkingBarrierSlow(uVar10,puVar1,uVar9);
            uVar7 = *(ulong *)(uVar9 & 0xfffffffffffc0000 | 8);
          }
          if (((uVar7 & 0x18) != 0) && ((*(byte *)((uVar10 & 0xfffffffffffc0000) + 8) & 0x18) == 0))
          {
            Heap_GenerationalBarrierSlow(uVar10,puVar1,uVar9);
          }
        }
        *(int *)(*puVar4 + (long)(iVar8 + -4)) = *(int *)(puVar12 + 1) << 1;
        if (*(int *)((long)puVar12 + 0xc) == -1) {
          uVar9 = *(ulong *)pFVar2;
        }
        else {
          uVar9 = (long)*(int *)((long)puVar12 + 0xc) << 1;
        }
        uVar10 = *puVar4;
        puVar1 = (undefined4 *)(uVar10 + (long)iVar8);
        *puVar1 = (int)uVar9;
        if ((uVar9 & 1) != 0) {
          uVar7 = *(ulong *)((uVar9 & 0xfffffffffffc0000) + 8);
          if (((uint)uVar7 >> 0x12 & 1) != 0) {
            Heap_MarkingBarrierSlow(uVar10,puVar1,uVar9);
            uVar7 = *(ulong *)(uVar9 & 0xfffffffffffc0000 | 8);
          }
          if (((uVar7 & 0x18) != 0) && ((*(byte *)((uVar10 & 0xfffffffffffc0000) + 8) & 0x18) == 0))
          {
            Heap_GenerationalBarrierSlow(uVar10,puVar1,uVar9);
          }
        }
        uVar10 = *puVar4;
        uVar9 = *(ulong *)pFVar6;
        lVar5 = uVar10 + (long)(iVar8 + -3);
        *(int *)(lVar5 + 7) = (int)uVar9;
        if ((uVar9 & 1) != 0) {
          uVar7 = *(ulong *)((uVar9 & 0xfffffffffffc0000) + 8);
          lVar5 = lVar5 + 7;
          if (((uint)uVar7 >> 0x12 & 1) != 0) {
            Heap_MarkingBarrierSlow(uVar10,lVar5,uVar9);
            uVar7 = *(ulong *)(uVar9 & 0xfffffffffffc0000 | 8);
          }
          if (((uVar7 & 0x18) != 0) && ((*(byte *)((uVar10 & 0xfffffffffffc0000) + 8) & 0x18) == 0))
          {
            Heap_GenerationalBarrierSlow(uVar10,lVar5,uVar9);
          }
        }
        puVar11 = puVar12 + 3;
        iVar8 = iVar8 + 0x10;
        if (puVar3 == puVar11) {
          return puVar4;
        }
        lVar5 = puVar12[5];
        if (lVar5 == 0) break;
LAB_0150b508:
        pFVar6 = (Factory *)Compiler::GetSharedFunctionInfo(lVar5,param_3,param_4);
        puVar12 = puVar11;
        if (pFVar6 == (Factory *)0x0) goto LAB_0150b68c;
      }
    }
LAB_0150b68c:
    puVar4 = (ulong *)0x0;
  }
  return puVar4;
}

