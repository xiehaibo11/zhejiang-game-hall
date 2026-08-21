
/* v8::internal::JsonParser<unsigned short>::Parse(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::String>, v8::internal::Handle<v8::internal::Object>) */

long v8::internal::JsonParser<unsigned_short>::Parse
               (undefined8 param_1,undefined8 param_2,ulong *param_3)

{
  ushort *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  long local_78 [2];
  char local_68;
  ulong *local_50;
  ushort *local_48;
  ushort *puStack_40;
  
  JsonParser((JsonParser<unsigned_short> *)local_78,param_1,param_2);
  lVar4 = ParseJsonValue((JsonParser<unsigned_short> *)local_78);
  local_68 = '\r';
  puVar1 = local_48;
  do {
    if (local_48 == puStack_40) {
      local_48 = puVar1 + 1;
LAB_01045e0c:
      if ((*(ulong *)(local_78[0] + 0x2bd8) & 1) == 0) {
        lVar4 = 0;
        bVar3 = false;
      }
      else {
        if ((int)*(ulong *)(local_78[0] + 0x2bd8) != *(int *)(local_78[0] + 0xa8)) {
          lVar4 = 0;
        }
        bVar3 = lVar4 != 0;
      }
      if ((*(ushort *)((*local_50 & 0xffffffff00000000 | (ulong)*(uint *)(*local_50 - 1)) + 7) & 7)
          != 2) {
        Heap::RemoveGCEpilogueCallback
                  ((Heap *)(local_78[0] + 0x8850),UpdatePointersCallback,local_78);
      }
      if (bVar3) {
        uVar5 = *param_3;
        if (((uVar5 & 1) != 0) &&
           ((*(byte *)((uVar5 & 0xffffffff00000000 | 9) + (ulong)*(uint *)(uVar5 - 1)) >> 1 & 1) !=
            0)) {
          lVar4 = JsonParseInternalizer::Internalize(param_1,lVar4,param_3);
        }
      }
      else {
        lVar4 = 0;
      }
      return lVar4;
    }
    if (0xff < (ulong)*local_48) {
      cVar2 = '\f';
LAB_01045dfc:
      local_68 = cVar2;
      ReportUnexpectedToken((JsonParser<unsigned_short> *)local_78);
      goto LAB_01045e0c;
    }
    cVar2 = (&DAT_019cbf74)[*local_48];
    if ((&DAT_019cbf74)[*local_48] != '\t') goto LAB_01045dfc;
    local_48 = local_48 + 1;
    puVar1 = puStack_40;
  } while( true );
}

