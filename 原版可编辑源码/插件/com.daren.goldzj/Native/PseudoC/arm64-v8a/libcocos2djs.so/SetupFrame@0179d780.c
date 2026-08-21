
/* v8::internal::compiler::OsrHelper::SetupFrame(v8::internal::compiler::Frame*) */

void __thiscall v8::internal::compiler::OsrHelper::SetupFrame(OsrHelper *this,Frame *param_1)

{
  *(ulong *)(param_1 + 4) =
       CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 4) >> 0x20) + *(int *)(this + 8),
                (int)*(undefined8 *)(param_1 + 4) + *(int *)(this + 8));
  return;
}

