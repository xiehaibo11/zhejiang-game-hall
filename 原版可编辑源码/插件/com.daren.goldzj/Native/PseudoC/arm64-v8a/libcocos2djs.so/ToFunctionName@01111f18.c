
/* v8::internal::Name::ToFunctionName(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::Name>, v8::internal::Handle<v8::internal::String>) */

void v8::internal::Name::ToFunctionName(Isolate *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  IncrementalStringBuilder aIStack_58 [8];
  int local_50;
  int local_48;
  int local_44;
  long *local_38;
  
  lVar1 = ToFunctionName();
  if (lVar1 != 0) {
    IncrementalStringBuilder::IncrementalStringBuilder(aIStack_58,param_1);
    IncrementalStringBuilder::AppendString(aIStack_58,param_3);
    lVar2 = (long)local_44;
    local_44 = local_44 + 1;
    if (local_50 == 0) {
      *(undefined1 *)(*local_38 + lVar2 + 0xb) = 0x20;
    }
    else {
      *(undefined2 *)(*local_38 + lVar2 * 2 + 0xb) = 0x20;
    }
    if (local_44 == local_48) {
      IncrementalStringBuilder::Extend(aIStack_58);
    }
    IncrementalStringBuilder::AppendString(aIStack_58,lVar1);
    IncrementalStringBuilder::Finish(aIStack_58);
  }
  return;
}

