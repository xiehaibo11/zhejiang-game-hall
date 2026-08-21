
/* v8::internal::OrderedHashTableHandler<v8::internal::SmallOrderedHashMap,
   v8::internal::OrderedHashMap>::Allocate(v8::internal::Isolate*, int) */

long * v8::internal::
       OrderedHashTableHandler<v8::internal::SmallOrderedHashMap,v8::internal::OrderedHashMap>::
       Allocate(Isolate *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  
  if (param_2 < 0xfe) {
    plVar4 = (long *)Factory::NewSmallOrderedHashMap((Factory *)param_1,param_2,0);
    return plVar4;
  }
  iVar3 = base::bits::RoundUpToPowerOfTwo32(param_2);
  if (iVar3 < 0x1249249) {
    iVar2 = iVar3;
    if (iVar3 < 0) {
      iVar2 = iVar3 + 1;
    }
    uVar1 = iVar2 >> 1;
    uVar6 = (ulong)uVar1;
    plVar4 = (long *)Factory::NewFixedArrayWithMap<v8::internal::FixedArray>
                               (param_1,0x35,uVar1 + iVar3 * 3 + 3,0);
    lVar5 = *plVar4;
    if (1 < iVar3) {
      iVar3 = 0xc;
      do {
        *(undefined4 *)(lVar5 + iVar3 + 7) = 0xfffffffe;
        lVar5 = *plVar4;
        uVar6 = uVar6 - 1;
        iVar3 = iVar3 + 4;
      } while (uVar6 != 0);
    }
    *(uint *)(lVar5 + 0xf) = uVar1 << 1;
    *(undefined4 *)(*plVar4 + 7) = 0;
    *(undefined4 *)(*plVar4 + 0xb) = 0;
  }
  else {
    plVar4 = (long *)0x0;
  }
  return plVar4;
}

