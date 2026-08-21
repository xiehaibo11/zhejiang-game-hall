
/* v8::internal::JsonParser<unsigned char>::Parse(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::String>, v8::internal::Handle<v8::internal::Object>) */

long v8::internal::JsonParser<unsigned_char>::Parse
               (undefined8 param_1,undefined8 param_2,ulong *param_3)

{
  byte *pbVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  long local_78 [2];
  char local_68;
  ulong *local_50;
  byte *local_48;
  byte *pbStack_40;
  
  JsonParser((JsonParser<unsigned_char> *)local_78,param_1,param_2);
  lVar3 = ParseJsonValue((JsonParser<unsigned_char> *)local_78);
  local_68 = '\r';
  pbVar1 = local_48;
  do {
    if (local_48 == pbStack_40) {
      local_48 = pbVar1 + 1;
LAB_0104246c:
      if ((*(ulong *)(local_78[0] + 0x2bd8) & 1) == 0) {
        lVar3 = 0;
        bVar2 = false;
      }
      else {
        if ((int)*(ulong *)(local_78[0] + 0x2bd8) != *(int *)(local_78[0] + 0xa8)) {
          lVar3 = 0;
        }
        bVar2 = lVar3 != 0;
      }
      if ((*(ushort *)((*local_50 & 0xffffffff00000000 | (ulong)*(uint *)(*local_50 - 1)) + 7) & 7)
          != 2) {
        Heap::RemoveGCEpilogueCallback
                  ((Heap *)(local_78[0] + 0x8850),UpdatePointersCallback,local_78);
      }
      if (bVar2) {
        uVar4 = *param_3;
        if (((uVar4 & 1) != 0) &&
           ((*(byte *)((uVar4 & 0xffffffff00000000 | 9) + (ulong)*(uint *)(uVar4 - 1)) >> 1 & 1) !=
            0)) {
          lVar3 = JsonParseInternalizer::Internalize(param_1,lVar3,param_3);
        }
      }
      else {
        lVar3 = 0;
      }
      return lVar3;
    }
    if ((&DAT_019cbf74)[*local_48] != '\t') {
      local_68 = (&DAT_019cbf74)[*local_48];
      ReportUnexpectedToken((JsonParser<unsigned_char> *)local_78);
      goto LAB_0104246c;
    }
    local_48 = local_48 + 1;
    pbVar1 = pbStack_40;
  } while( true );
}

