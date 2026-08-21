
/* v8::internal::StringToDouble(v8::internal::Isolate*, v8::internal::Handle<v8::internal::String>,
   int, double) */

void v8::internal::StringToDouble
               (double param_1_00,undefined8 param_1,undefined8 param_3,int param_4)

{
  undefined8 *puVar1;
  ushort *puVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined8 local_30 [2];
  
  puVar1 = (undefined8 *)String::Flatten(param_1,param_3,0);
  local_30[0] = *puVar1;
  auVar4 = String::GetFlatContent((PerThreadAssertScopeDebugOnly *)local_30);
  puVar2 = auVar4._0_8_;
  lVar3 = auVar4._8_8_ << 0x20;
  if (auVar4._8_8_ >> 0x20 == 1) {
    InternalStringToDouble<unsigned_char_const*,unsigned_char_const*>
              ((uchar *)puVar2,(uchar *)((long)puVar2 + (lVar3 >> 0x20)),param_4,param_1_00);
  }
  else {
    InternalStringToDouble<unsigned_short_const*,unsigned_short_const*>
              (puVar2,(ushort *)((long)puVar2 + (lVar3 >> 0x1f)),param_4,param_1_00);
  }
  return;
}

