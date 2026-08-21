
ulong * FUN_010a3ca8(Factory *param_1,ulong *param_2,uint param_3,ulong *param_4,int *param_5,
                    int param_6)

{
  long lVar1;
  uint uVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  double dVar10;
  
  if ((param_3 & 0x28) == 0) {
    uVar4 = *param_2;
    if ((int)*(uint *)(uVar4 + 0xf) >> 1 != 0) {
      lVar8 = (long)((ulong)*(uint *)(uVar4 + 0xf) << 0x20) >> 0x21;
      lVar9 = 0x1800000000;
      lVar6 = 0x1000000000;
      while( true ) {
        lVar8 = lVar8 + -1;
        uVar2 = *(uint *)(uVar4 + 7 + (lVar6 >> 0x20));
        if (((uVar2 != *(uint *)(param_1 + 0xa8)) && (uVar2 != *(uint *)(param_1 + 0xa0))) &&
           ((param_3 & 7 & *(uint *)(uVar4 + 7 + (lVar9 >> 0x20)) >> 4) == 0)) {
          if ((uVar2 & 1) == 0) {
            dVar10 = (double)((int)uVar2 >> 1);
          }
          else {
            dVar10 = *(double *)((uVar4 & 0xffffffff00000000 | (ulong)uVar2) + 3);
          }
          if ((int)dVar10 != 0xffffffff) {
            puVar3 = (ulong *)v8::internal::Factory::NewNumberFromUint(param_1,(int)dVar10);
            uVar7 = *param_4;
            uVar4 = *puVar3;
            lVar1 = uVar7 + (long)(param_6 << 2);
            *(int *)(lVar1 + 7) = (int)uVar4;
            if ((uVar4 & 1) != 0) {
              uVar5 = *(ulong *)((uVar4 & 0xfffffffffffc0000) + 8);
              lVar1 = lVar1 + 7;
              if (((uint)uVar5 >> 0x12 & 1) != 0) {
                v8::internal::Heap_MarkingBarrierSlow(uVar7,lVar1,uVar4);
                uVar5 = *(ulong *)(uVar4 & 0xfffffffffffc0000 | 8);
              }
              if (((uVar5 & 0x18) != 0) &&
                 ((*(byte *)((uVar7 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
                v8::internal::Heap_GenerationalBarrierSlow(uVar7,lVar1,uVar4);
              }
            }
            param_6 = param_6 + 1;
          }
        }
        if (lVar8 == 0) break;
        uVar4 = *param_2;
        lVar9 = lVar9 + 0xc00000000;
        lVar6 = lVar6 + 0xc00000000;
      }
    }
    *param_5 = param_6;
  }
  return param_4;
}

