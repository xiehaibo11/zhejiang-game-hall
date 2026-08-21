
undefined8 FUN_014ca3e8(int param_1,long param_2,Isolate *param_3)

{
  undefined8 uVar1;
  long lVar2;
  ushort uVar3;
  ulong *puVar4;
  undefined8 *puVar5;
  Isolate *pIVar6;
  ulong uVar7;
  Isolate *pIVar8;
  undefined8 uVar9;
  JsonParser<unsigned_short> aJStack_88 [72];
  
  uVar1 = *(undefined8 *)(param_3 + 0x95a0);
  lVar2 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  if (param_1 + -4 < 2) {
    pIVar6 = param_3 + 0xa0;
LAB_014ca44c:
    pIVar8 = param_3 + 0xa0;
    uVar7 = *(ulong *)pIVar6;
    if ((uVar7 & 1) == 0) goto LAB_014ca470;
LAB_014ca458:
    if (0x3f < *(ushort *)((uVar7 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar7 - 1)))
    goto LAB_014ca470;
  }
  else {
    pIVar6 = (Isolate *)(param_2 + -8);
    if (param_1 + -4 == 2) goto LAB_014ca44c;
    pIVar8 = (Isolate *)(param_2 + -0x10);
    uVar7 = *(ulong *)pIVar6;
    if ((uVar7 & 1) != 0) goto LAB_014ca458;
LAB_014ca470:
    pIVar6 = (Isolate *)v8::internal::Object::ConvertToString(param_3);
  }
  if (pIVar6 != (Isolate *)0x0) {
    puVar4 = (ulong *)v8::internal::String::Flatten(param_3,pIVar6,0);
    uVar7 = *puVar4;
    while( true ) {
      uVar3 = *(ushort *)((uVar7 & 0xffffffff00000000 | (ulong)*(uint *)(uVar7 - 1)) + 7);
      if ((uVar3 & 9) == 0) break;
      if ((uVar3 & 9) == 8) {
        v8::internal::JsonParser<unsigned_char>::JsonParser
                  ((JsonParser<unsigned_char> *)aJStack_88,param_3);
        puVar5 = (undefined8 *)
                 v8::internal::JsonParser<unsigned_char>::ParseJson
                           ((JsonParser<unsigned_char> *)aJStack_88);
        v8::internal::JsonParser<unsigned_char>::~JsonParser
                  ((JsonParser<unsigned_char> *)aJStack_88);
        goto joined_r0x014ca4e4;
      }
      uVar7 = uVar7 & 0xffffffff00000000 | (ulong)*(uint *)(uVar7 + 0xb);
    }
    v8::internal::JsonParser<unsigned_short>::JsonParser(aJStack_88,param_3,puVar4);
    puVar5 = (undefined8 *)v8::internal::JsonParser<unsigned_short>::ParseJson(aJStack_88);
    v8::internal::JsonParser<unsigned_short>::~JsonParser(aJStack_88);
joined_r0x014ca4e4:
    if ((puVar5 != (undefined8 *)0x0) &&
       (((uVar7 = *(ulong *)pIVar8, (uVar7 & 1) == 0 ||
         ((*(byte *)((uVar7 & 0xffffffff00000000 | 9) + (ulong)*(uint *)(uVar7 - 1)) >> 1 & 1) == 0)
         ) || (puVar5 = (undefined8 *)
                        v8::internal::JsonParseInternalizer::Internalize(param_3,puVar5,pIVar8),
              puVar5 != (undefined8 *)0x0)))) {
      uVar9 = *puVar5;
      if (param_3 == (Isolate *)0x0) {
        return uVar9;
      }
      goto LAB_014ca550;
    }
  }
  uVar9 = *(undefined8 *)(param_3 + 0x180);
LAB_014ca550:
  *(undefined8 *)(param_3 + 0x95a0) = uVar1;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar2) {
    *(long *)(param_3 + 0x95a8) = lVar2;
    v8::internal::HandleScope::DeleteExtensions(param_3);
  }
  return uVar9;
}

