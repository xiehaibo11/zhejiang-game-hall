
/* v8::internal::Parser::ArrayLiteralFromListWithSpread(v8::internal::ScopedList<v8::internal::Expression*,
   void*> const&) */

undefined8 * __thiscall
v8::internal::Parser::ArrayLiteralFromListWithSpread(Parser *this,ScopedList *param_1)

{
  Zone *pZVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  
  iVar3 = (int)*(undefined8 *)(param_1 + 0x10) - (int)*(long *)(param_1 + 8);
  if (iVar3 < 1) {
    lVar4 = 0;
  }
  else {
    lVar4 = 0;
    do {
      if ((*(uint *)(*(long *)(**(long **)param_1 + *(long *)(param_1 + 8) * 8 + lVar4 * 8) + 4) &
          0x3f) == 0x2d) break;
      lVar4 = lVar4 + 1;
    } while (lVar4 < iVar3);
  }
  pZVar1 = *(Zone **)(this + 0x68);
  puVar2 = *(undefined8 **)(pZVar1 + 0x10);
  if ((ulong)(*(long *)(pZVar1 + 0x18) - (long)puVar2) < 0x28) {
    puVar2 = (undefined8 *)Zone::NewExpand(pZVar1,0x28);
  }
  else {
    *(undefined8 **)(pZVar1 + 0x10) = puVar2 + 5;
  }
  pZVar1 = *(Zone **)(this + 0x68);
  *puVar2 = 0x17ffffffff;
  *(uint *)(puVar2 + 1) = *(uint *)(puVar2 + 1) & 0x80000000;
  *(int *)((long)puVar2 + 0xc) = (int)lVar4;
  puVar2[3] = 0;
  puVar2[2] = 0;
  puVar2[4] = 0;
  ScopedList<v8::internal::Expression*,void*>::CopyTo
            ((ScopedList<v8::internal::Expression*,void*> *)param_1,(ZoneList *)(puVar2 + 3),pZVar1)
  ;
  return puVar2;
}

