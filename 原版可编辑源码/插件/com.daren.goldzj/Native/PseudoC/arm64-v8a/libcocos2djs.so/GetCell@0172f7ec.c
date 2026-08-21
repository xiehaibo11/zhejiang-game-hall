
/* v8::internal::compiler::SourceTextModuleRef::GetCell(int) const */

void v8::internal::compiler::SourceTextModuleRef::GetCell(int param_1)

{
  short sVar1;
  ObjectRef *this;
  ulong uVar2;
  ulong *puVar3;
  SourceTextModuleData *this_00;
  undefined8 *puVar4;
  int in_w1;
  undefined1 *in_x8;
  Isolate *pIVar5;
  undefined8 uVar6;
  undefined8 local_48;
  long local_40;
  undefined8 uStack_38;
  
  this = (ObjectRef *)(ulong)(uint)param_1;
  if (*(int *)(*(undefined8 **)this + 1) == 2) {
    uVar6 = *(undefined8 *)(this + 8);
    local_48 = *(undefined8 *)**(undefined8 **)this;
    uVar2 = SourceTextModule::GetCell((SourceTextModule *)&local_48,in_w1);
    pIVar5 = (Isolate *)**(undefined8 **)(this + 8);
    if (*(CanonicalHandleScope **)(pIVar5 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar3 = *(ulong **)(pIVar5 + 0x95a0);
      if (puVar3 == *(ulong **)(pIVar5 + 0x95a8)) {
        puVar3 = (ulong *)HandleScope::Extend(pIVar5);
      }
      *(ulong **)(pIVar5 + 0x95a0) = puVar3 + 1;
      *puVar3 = uVar2;
    }
    else {
      puVar3 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar5 + 0x95b8),uVar2);
    }
    ObjectRef::ObjectRef((ObjectRef *)&local_40,uVar6,puVar3,0);
  }
  else {
    this_00 = (SourceTextModuleData *)ObjectRef::data(this);
    if (*(int *)(this_00 + 8) != 1) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","kind() == kSerializedHeapObject");
    }
    if (*(short *)(*(long *)(this_00 + 0x10) + 0x18) != 0x44) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","IsSourceTextModule()");
    }
    local_40 = SourceTextModuleData::GetCell(this_00,*(JSHeapBroker **)(this + 8),in_w1);
    if (local_40 == 0) {
      *in_x8 = 0;
      in_x8[8] = 0;
      return;
    }
    uStack_38 = *(undefined8 *)(this + 8);
  }
  puVar4 = (undefined8 *)ObjectRef::data((ObjectRef *)&local_40);
  if (*(int *)(puVar4 + 1) == 2) {
    uVar2 = *(ulong *)*puVar4;
    if ((uVar2 & 1) == 0) goto LAB_0172f960;
    sVar1 = *(short *)((uVar2 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar2 - 1));
  }
  else {
    if (*(int *)(puVar4 + 1) == 0) goto LAB_0172f960;
    sVar1 = *(short *)(puVar4[2] + 0x18);
  }
  if (sVar1 == 0x99) {
    *in_x8 = 1;
    *(undefined8 *)(in_x8 + 0x10) = uStack_38;
    *(long *)(in_x8 + 8) = local_40;
    return;
  }
LAB_0172f960:
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","IsCell()");
}

