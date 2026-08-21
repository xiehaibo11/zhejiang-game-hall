
/* v8::internal::Map::FindRootMap(v8::internal::Isolate*) const */

Isolate * __thiscall v8::internal::Map::FindRootMap(Map *this,Isolate *param_1)

{
  Isolate *pIVar1;
  Isolate *pIVar2;
  
  pIVar2 = *(Isolate **)this;
LAB_010ea4a4:
  do {
    pIVar1 = pIVar2;
    pIVar2 = param_1 + *(uint *)(pIVar2 + 0x13);
    if ((((ulong)pIVar2 & 1) == 0) ||
       (*(short *)(((ulong)param_1 | 7) + (ulong)*(uint *)(pIVar2 + -1)) != 0xa2)) {
      pIVar2 = *(Isolate **)(param_1 + 0xa0);
      if (((ulong)pIVar2 & 1) == 0) goto LAB_010ea4a4;
    }
    if ((int)pIVar2 == *(int *)(param_1 + 0xa0)) {
      return pIVar1;
    }
  } while( true );
}

