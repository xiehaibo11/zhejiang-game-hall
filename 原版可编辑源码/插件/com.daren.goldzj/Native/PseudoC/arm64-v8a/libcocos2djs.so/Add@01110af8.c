
/* v8::internal::PrototypeUsers::Add(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::WeakArrayList>, v8::internal::Handle<v8::internal::Map>, int*)
    */

ulong * v8::internal::PrototypeUsers::Add
                  (Factory *param_1,ulong *param_2,ulong *param_3,int *param_4)

{
  int iVar1;
  uint *puVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  
  uVar9 = *param_2;
  uVar7 = *(uint *)(uVar9 + 7);
  uVar8 = *(uint *)(uVar9 + 3);
  iVar4 = (int)uVar7 >> 1;
  iVar1 = (int)uVar8 >> 1;
  if (iVar4 == 0) {
    if ((int)uVar8 < 4) {
      param_2 = (ulong *)Factory::CopyWeakArrayListAndGrow(param_1,param_2,4 - iVar1,0);
      uVar9 = *param_2;
    }
    *(undefined4 *)(uVar9 + 0xb) = 0;
    uVar10 = *param_3;
    uVar9 = *param_2;
    uVar7 = (uint)uVar10 | 2;
    *(uint *)(uVar9 + 0xf) = uVar7;
    if (((uVar10 & 1) != 0) && (uVar7 != 3)) {
      if ((*(byte *)((uVar10 & 0xfffffffffffc0000) + 10) >> 2 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar9,uVar9 + 0xf,uVar10 & 0xfffffffffffffffd);
      }
      if (((*(byte *)((uVar10 & 0xfffffffffffc0000) + 8) & 0x18) != 0) &&
         ((*(byte *)((uVar9 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar9,uVar9 + 0xf,uVar10 & 0xfffffffffffffffd);
      }
    }
    *(undefined4 *)(*param_2 + 7) = 4;
    if (param_4 != (int *)0x0) {
      *param_4 = 1;
    }
  }
  else {
    if ((uVar8 ^ uVar7) < 2) {
      iVar5 = *(int *)(uVar9 + 0xb) >> 1;
      if (iVar5 != 0) {
        if (iVar5 < iVar4) {
          puVar2 = (uint *)(uVar9 + 0xb + (long)(iVar5 << 2));
          uVar7 = *puVar2;
          uVar10 = *param_3;
          uVar8 = (uint)uVar10 | 2;
          *puVar2 = uVar8;
          if (((uVar10 & 1) != 0) && (uVar8 != 3)) {
            if ((*(byte *)((uVar10 & 0xfffffffffffc0000) + 10) >> 2 & 1) != 0) {
              Heap_MarkingBarrierSlow(uVar9,puVar2,uVar10 & 0xfffffffffffffffd);
            }
            if (((*(byte *)((uVar10 & 0xfffffffffffc0000) + 8) & 0x18) != 0) &&
               ((*(byte *)((uVar9 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
              Heap_GenerationalBarrierSlow(uVar9,puVar2,uVar10 & 0xfffffffffffffffd);
            }
          }
          if (param_4 != (int *)0x0) {
            *param_4 = iVar5;
          }
          *(uint *)(*param_2 + 0xb) = uVar7 & 0xfffffffe;
          return param_2;
        }
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","empty_slot < array->length()");
      }
      iVar5 = iVar4 + 1;
      if (iVar1 <= iVar4) {
        iVar6 = iVar5;
        if (iVar5 < 0) {
          iVar6 = iVar4 + 2;
        }
        iVar6 = iVar6 >> 1;
        if (iVar6 < 3) {
          iVar6 = 2;
        }
        param_2 = (ulong *)Factory::CopyWeakArrayListAndGrow
                                     (param_1,param_2,(iVar5 - iVar1) + iVar6,0);
        uVar9 = *param_2;
      }
      uVar10 = *param_3;
      lVar3 = uVar9 + (long)(iVar4 << 2);
      uVar7 = (uint)uVar10 | 2;
      *(uint *)(lVar3 + 0xb) = uVar7;
      if (((uVar10 & 1) != 0) && (uVar7 != 3)) {
        lVar3 = lVar3 + 0xb;
        if ((*(byte *)((uVar10 & 0xfffffffffffc0000) + 10) >> 2 & 1) != 0) {
          Heap_MarkingBarrierSlow(uVar9,lVar3,uVar10 & 0xfffffffffffffffd);
        }
        if (((*(byte *)((uVar10 & 0xfffffffffffc0000) + 8) & 0x18) != 0) &&
           ((*(byte *)((uVar9 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
          Heap_GenerationalBarrierSlow(uVar9,lVar3,uVar10 & 0xfffffffffffffffd);
        }
      }
      *(int *)(*param_2 + 7) = iVar5 * 2;
    }
    else {
      uVar10 = *param_3;
      lVar3 = uVar9 + (long)(iVar4 << 2);
      uVar8 = (uint)uVar10 | 2;
      *(uint *)(lVar3 + 0xb) = uVar8;
      if (((uVar10 & 1) != 0) && (uVar8 != 3)) {
        lVar3 = lVar3 + 0xb;
        if ((*(byte *)((uVar10 & 0xfffffffffffc0000) + 10) >> 2 & 1) != 0) {
          Heap_MarkingBarrierSlow(uVar9,lVar3,uVar10 & 0xfffffffffffffffd);
        }
        if (((*(byte *)((uVar10 & 0xfffffffffffc0000) + 8) & 0x18) != 0) &&
           ((*(byte *)((uVar9 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
          Heap_GenerationalBarrierSlow(uVar9,lVar3,uVar10 & 0xfffffffffffffffd);
        }
      }
      *(uint *)(*param_2 + 7) = uVar7 + 2 & 0xfffffffe;
    }
    if (param_4 != (int *)0x0) {
      *param_4 = iVar4;
    }
  }
  return param_2;
}

