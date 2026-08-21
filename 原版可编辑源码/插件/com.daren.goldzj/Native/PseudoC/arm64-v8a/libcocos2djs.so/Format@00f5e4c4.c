
/* v8::internal::MessageFormatter::Format(v8::internal::Isolate*, v8::internal::MessageTemplate,
   v8::internal::Handle<v8::internal::String>, v8::internal::Handle<v8::internal::String>,
   v8::internal::Handle<v8::internal::String>) */

undefined8
v8::internal::MessageFormatter::Format
          (Isolate *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5)

{
  ulong uVar1;
  byte bVar2;
  byte *pbVar3;
  undefined8 uVar4;
  long lVar5;
  byte *pbVar6;
  uint uVar7;
  undefined8 local_80 [3];
  IncrementalStringBuilder aIStack_68 [8];
  int local_60;
  int local_58;
  int local_54;
  long *local_48;
  
  pbVar3 = (byte *)TemplateString(param_2);
  if (pbVar3 == (byte *)0x0) {
    Isolate::ThrowIllegalOperation(param_1);
    return 0;
  }
  IncrementalStringBuilder::IncrementalStringBuilder(aIStack_68,param_1);
  uVar7 = 0;
  local_80[0] = param_3;
  local_80[1] = param_4;
  local_80[2] = param_5;
  do {
    while (bVar2 = *pbVar3, pbVar6 = pbVar3, bVar2 != 0x25) {
      if (bVar2 == 0) {
        uVar4 = IncrementalStringBuilder::Finish(aIStack_68);
        return uVar4;
      }
      lVar5 = (long)local_54;
      local_54 = local_54 + 1;
      if (local_60 == 0) {
        *(byte *)(*local_48 + lVar5 + 0xb) = bVar2;
      }
      else {
        *(ushort *)(*local_48 + lVar5 * 2 + 0xb) = (ushort)bVar2;
      }
      if (local_54 == local_58) {
        IncrementalStringBuilder::Extend(aIStack_68);
      }
LAB_00f5e534:
      pbVar3 = pbVar6 + 1;
    }
    if (pbVar3[1] != 0x25) {
      uVar1 = (ulong)uVar7;
      uVar7 = uVar7 + 1;
      IncrementalStringBuilder::AppendString(aIStack_68,local_80[uVar1]);
      goto LAB_00f5e534;
    }
    lVar5 = (long)local_54;
    local_54 = local_54 + 1;
    if (local_60 == 0) {
      *(undefined1 *)(*local_48 + lVar5 + 0xb) = 0x25;
    }
    else {
      *(undefined2 *)(*local_48 + lVar5 * 2 + 0xb) = 0x25;
    }
    pbVar6 = pbVar3 + 1;
    if (local_54 != local_58) goto LAB_00f5e534;
    IncrementalStringBuilder::Extend(aIStack_68);
    pbVar3 = pbVar3 + 2;
  } while( true );
}

