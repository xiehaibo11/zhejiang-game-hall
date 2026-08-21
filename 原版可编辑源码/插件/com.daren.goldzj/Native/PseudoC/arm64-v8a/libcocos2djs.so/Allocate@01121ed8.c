
/* v8::internal::OrderedHashSet::Allocate(v8::internal::Isolate*, int, v8::internal::AllocationType)
    */

long * v8::internal::OrderedHashSet::Allocate(undefined8 param_1,uint param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  
  if ((int)param_2 < 5) {
    param_2 = 4;
  }
  iVar3 = base::bits::RoundUpToPowerOfTwo32(param_2);
  if (iVar3 < 0x1999999) {
    iVar2 = iVar3;
    if (iVar3 < 0) {
      iVar2 = iVar3 + 1;
    }
    uVar1 = iVar2 >> 1;
    uVar6 = (ulong)uVar1;
    plVar4 = (long *)Factory::NewFixedArrayWithMap<v8::internal::FixedArray>
                               (param_1,0x36,uVar1 + iVar3 * 2 + 3,param_3);
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

