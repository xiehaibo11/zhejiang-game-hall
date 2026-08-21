
/* v8::internal::JSObject::PrintInstanceMigration(__sFILE*, v8::internal::Map, v8::internal::Map) */

void __thiscall
v8::internal::JSObject::PrintInstanceMigration
          (undefined8 param_1_00,__sFILE *param_1,ulong param_3,ulong param_4)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong local_68;
  
  if ((*(uint *)(param_4 + 0xb) >> 0x15 & 1) != 0) {
    PrintF(param_1,"[migrating to slow]\n");
    return;
  }
  PrintF(param_1,"[migrating]");
  uVar5 = (ulong)(*(uint *)(param_3 + 0xb) >> 10) & 0x3ff;
  if ((int)uVar5 != 0) {
    uVar6 = param_3 & 0xffffffff00000000;
    puVar4 = (uint *)((param_4 & 0xffffffff00000000 | (ulong)*(uint *)(param_4 + 0x17)) + 0x13);
    puVar3 = (uint *)((uVar6 | *(uint *)(param_3 + 0x17)) + 0x13);
    do {
      uVar1 = *puVar3 >> 7 & 7;
      uVar2 = *puVar4 >> 7 & 7;
      if (uVar1 == uVar2) {
        if (((*puVar3 >> 2 & 1) != 0) && ((*puVar4 >> 2 & 1) == 0)) {
          if (*(ushort *)((uVar6 | 7) + (ulong)*(uint *)((uVar6 | puVar3[-1]) - 1)) < 0x40) {
            local_68 = uVar6 | puVar3[-1];
            String::PrintOn((String *)&local_68,param_1);
          }
          else {
            PrintF(param_1,"{symbol %p}");
          }
          PrintF(param_1," ");
        }
      }
      else {
        local_68 = uVar6 | puVar3[-1];
        String::PrintOn((String *)&local_68,param_1);
        if ((4 < uVar1) || (4 < uVar2)) {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("unreachable code");
        }
        PrintF(param_1,":%s->%s ",(&PTR_DAT_01cb4c80)[uVar1],(&PTR_DAT_01cb4c80)[uVar2]);
      }
      puVar4 = puVar4 + 3;
      uVar5 = uVar5 - 1;
      puVar3 = puVar3 + 3;
    } while (uVar5 != 0);
  }
  if (*(byte *)(param_3 + 10) >> 3 != *(byte *)(param_4 + 10) >> 3) {
    PrintF(param_1,"elements_kind[%i->%i]");
  }
  PrintF(param_1,"\n");
  return;
}

