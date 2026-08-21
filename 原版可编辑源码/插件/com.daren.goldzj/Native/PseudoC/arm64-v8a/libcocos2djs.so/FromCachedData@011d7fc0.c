
/* v8::internal::SerializedCodeData::FromCachedData(v8::internal::Isolate*,
   v8::internal::ScriptData*, unsigned int, v8::internal::SerializedCodeData::SanityCheckResult*) */

void __thiscall
v8::internal::SerializedCodeData::FromCachedData
          (SerializedCodeData *this,Isolate *param_1,ScriptData *param_2,uint param_3,
          SanityCheckResult *param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 *in_x8;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined **local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined1 local_54 [4];
  
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  local_54[0] = 0;
  local_68 = &PTR__SerializedData_01cbb8a0;
  uStack_60 = uVar4;
  local_58 = uVar1;
  iVar2 = SanityCheck((SerializedCodeData *)&local_68,param_1,(uint)param_2);
  *(int *)(ulong)param_3 = iVar2;
  if (iVar2 == 0) {
    puVar3 = local_54;
    in_x8[1] = uVar4;
    *(undefined4 *)(in_x8 + 2) = uVar1;
    *(undefined1 *)((long)in_x8 + 0x14) = 0;
  }
  else {
    *param_1 = (Isolate)((byte)*param_1 | 2);
    in_x8[1] = 0;
    *(undefined4 *)(in_x8 + 2) = 0;
    puVar3 = (undefined1 *)((long)in_x8 + 0x14);
  }
  *puVar3 = 0;
  *in_x8 = &PTR__SerializedData_01cbb8a0;
  return;
}

