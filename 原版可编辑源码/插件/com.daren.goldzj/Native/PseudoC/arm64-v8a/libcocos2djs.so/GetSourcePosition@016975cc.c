
/* v8::internal::compiler::SourcePositionTable::GetSourcePosition(v8::internal::compiler::Node*)
   const */

undefined8 __thiscall
v8::internal::compiler::SourcePositionTable::GetSourcePosition
          (SourcePositionTable *this,Node *param_1)

{
  if (((ulong)*(uint *)(param_1 + 0x14) & 0xffffff) <
      (ulong)(*(long *)(this + 0x20) - *(long *)(this + 0x18) >> 3)) {
    return *(undefined8 *)
            (*(long *)(this + 0x18) + ((ulong)*(uint *)(param_1 + 0x14) & 0xffffff) * 8);
  }
  return 0;
}

