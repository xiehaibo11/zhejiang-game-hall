
/* v8::internal::SnapshotData::Payload() const */

undefined1  [16] __thiscall v8::internal::SnapshotData::Payload(SnapshotData *this)

{
  long lVar1;
  undefined1 auVar2 [16];
  
  lVar1 = *(long *)(this + 8);
  auVar2._8_4_ = *(undefined4 *)(lVar1 + 8);
  auVar2._0_8_ = lVar1 + (ulong)(*(int *)(lVar1 + 4) * 4 + 0x13U & 0xfffffff8);
  auVar2._12_4_ = 0;
  return auVar2;
}

