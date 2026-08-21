
/* v8::V8::Eternalize(v8::Isolate*, v8::Value*) */

long v8::V8::Eternalize(Isolate *param_1,Value *param_2)

{
  int local_24;
  
  local_24 = -1;
  internal::EternalHandles::Create
            (*(EternalHandles **)(param_1 + 0x95e8),param_1,*(undefined8 *)param_2,&local_24);
  return *(long *)(*(long *)(*(long *)(param_1 + 0x95e8) + 8) + (long)(local_24 >> 8) * 8) +
         (ulong)(byte)local_24 * 8;
}

