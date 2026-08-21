
/* v8::internal::SourcePositionTableBuilder::ToSourcePositionTable(v8::internal::Isolate*) */

Isolate * __thiscall
v8::internal::SourcePositionTableBuilder::ToSourcePositionTable
          (SourcePositionTableBuilder *this,Isolate *param_1)

{
  Isolate *pIVar1;
  
  if (*(long *)(this + 8) == *(long *)(this + 0x10)) {
    pIVar1 = param_1 + 0x3c0;
  }
  else {
    pIVar1 = (Isolate *)
             Factory::NewByteArray
                       ((Factory *)param_1,(int)*(long *)(this + 0x10) - (int)*(long *)(this + 8),1)
    ;
    MemCopy((void *)(*(long *)pIVar1 + 7),*(void **)(this + 8),
            *(long *)(this + 0x10) - (long)*(void **)(this + 8));
  }
  return pIVar1;
}

