
/* v8::internal::StubFrame::LookupExceptionHandlerInTable() */

void __thiscall v8::internal::StubFrame::LookupExceptionHandlerInTable(StubFrame *this)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  HandlerTable aHStack_38 [16];
  long local_28;
  
  lVar2 = InnerPointerToCodeCache::GetCacheEntry
                    (*(InnerPointerToCodeCache **)(*(long *)(this + 0x10) + 0x95d8),
                     **(ulong **)(this + 0x28));
  lVar2 = *(long *)(lVar2 + 8);
  local_28 = lVar2;
  HandlerTable::HandlerTable(aHStack_38,lVar2);
  uVar3 = **(undefined8 **)(this + 0x28);
  if (*(int *)(lVar2 + 0x17) < 0) {
    iVar1 = Code::OffHeapInstructionStart((Code *)&local_28);
  }
  else {
    iVar1 = (int)lVar2 + 0x3f;
  }
  HandlerTable::LookupReturn(aHStack_38,(int)uVar3 - iVar1);
  return;
}

