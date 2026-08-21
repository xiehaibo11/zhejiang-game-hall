
/* v8::internal::ObjectDeserializer::CommitPostProcessedObjects() */

void __thiscall
v8::internal::ObjectDeserializer::CommitPostProcessedObjects(ObjectDeserializer *this)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  uint uVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 local_78;
  long *plStack_70;
  
  if ((ulong)(*(long *)(this + 0x108) - *(long *)(this + 0x100) >> 3) >> 0x1f != 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","new_internalized_strings().size() <= kMaxInt");
  }
  StringTable::EnsureCapacityForDeserialization
            (*(Isolate **)(this + 0x50),
             (int)((ulong)(*(long *)(this + 0x108) - *(long *)(this + 0x100)) >> 3));
  puVar8 = *(undefined8 **)(this + 0x108);
  for (puVar5 = *(undefined8 **)(this + 0x100); puVar5 != puVar8; puVar5 = puVar5 + 1) {
    StringTableInsertionKey::StringTableInsertionKey
              ((StringTableInsertionKey *)&local_78,*(undefined8 *)*puVar5);
    StringTable::AddKeyNoResize(*(Isolate **)(this + 0x50),(StringTableKey *)&local_78);
  }
  puVar5 = *(undefined8 **)(this + 0x120);
  if (*(undefined8 **)(this + 0x118) != puVar5) {
    lVar6 = *(long *)(this + 0x50);
    lVar3 = lVar6;
    puVar8 = *(undefined8 **)(this + 0x118);
    while( true ) {
      plVar9 = (long *)*puVar8;
      lVar4 = *plVar9;
      iVar1 = *(int *)(lVar3 + 0xfd8) >> 1;
      uVar7 = 1;
      if (iVar1 != 0x3fffffff) {
        uVar7 = iVar1 + 1;
      }
      *(ulong *)(lVar3 + 0xfd8) = -(ulong)(uVar7 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar7 << 1;
      *(uint *)(lVar4 + 0x1f) = uVar7 << 1;
      Deserializer::LogScriptEvents((Deserializer *)this,*plVar9);
      local_78 = 0;
      plStack_70 = plVar9;
      puVar2 = (undefined8 *)
               WeakArrayList::AddToEnd(*(undefined8 *)(this + 0x50),lVar6 + 0xf58,&local_78);
      *(undefined8 *)(lVar6 + 0xf58) = *puVar2;
      if (puVar5 + -1 == puVar8) break;
      lVar3 = *(long *)(this + 0x50);
      puVar8 = puVar8 + 1;
    }
  }
  return;
}

