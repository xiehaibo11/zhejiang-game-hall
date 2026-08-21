
/* v8::internal::JSObject::AllCanRead(v8::internal::LookupIterator*) */

undefined8 v8::internal::JSObject::AllCanRead(LookupIterator *param_1)

{
  int iVar1;
  byte bVar2;
  long *plVar3;
  ulong *puVar4;
  ulong uVar5;
  
LAB_010d1fc4:
  do {
    while( true ) {
      LookupIterator::Next(param_1);
      iVar1 = *(int *)(param_1 + 4);
      if (iVar1 != 2) break;
      plVar3 = (long *)LookupIterator::GetInterceptor(param_1);
      bVar2 = *(byte *)(*plVar3 + 0x23) >> 2;
joined_r0x010d1fbc:
      if ((bVar2 & 1) != 0) {
        return 1;
      }
    }
    if (iVar1 == 5) {
      puVar4 = (ulong *)LookupIterator::GetAccessors();
      uVar5 = *puVar4;
      if (((uVar5 & 1) != 0) &&
         (*(short *)((uVar5 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar5 - 1)) == 0x51)) {
        bVar2 = *(byte *)(uVar5 + 7) >> 1;
        goto joined_r0x010d1fbc;
      }
      goto LAB_010d1fc4;
    }
    if (iVar1 - 3U < 2) {
      return 0;
    }
  } while( true );
}

