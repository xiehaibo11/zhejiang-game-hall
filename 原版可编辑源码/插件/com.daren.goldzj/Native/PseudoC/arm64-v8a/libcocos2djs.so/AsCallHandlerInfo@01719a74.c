
/* v8::internal::compiler::ObjectRef::AsCallHandlerInfo() const */

undefined1  [16] __thiscall v8::internal::compiler::ObjectRef::AsCallHandlerInfo(ObjectRef *this)

{
  short sVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  long local_30;
  undefined8 uStack_28;
  
  uVar4 = *(undefined8 *)(this + 8);
  auVar5._0_8_ = data(this);
  local_30 = auVar5._0_8_;
  uStack_28 = uVar4;
  if (auVar5._0_8_ == 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","(data_) != nullptr");
  }
  puVar2 = (undefined8 *)data((ObjectRef *)&local_30);
  if (*(int *)(puVar2 + 1) == 2) {
    uVar3 = *(ulong *)*puVar2;
    if ((uVar3 & 1) == 0) goto LAB_01719b00;
    sVar1 = *(short *)((uVar3 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar3 - 1));
  }
  else {
    if (*(int *)(puVar2 + 1) == 0) goto LAB_01719b00;
    sVar1 = *(short *)(puVar2[2] + 0x18);
  }
  if (sVar1 == 0x59) {
    auVar5._8_8_ = uVar4;
    return auVar5;
  }
LAB_01719b00:
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","IsCallHandlerInfo()");
}

