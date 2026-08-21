
/* dragonBones::BinaryDataParser::parseDragonBonesData(char const*, float) */

undefined8 __thiscall
dragonBones::BinaryDataParser::parseDragonBonesData
          (BinaryDataParser *this,char *param_1,float param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  char *local_c0;
  char *pcStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 *puStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if ((((*param_1 == 'D') && (param_1[1] == 'B')) && (param_1[2] == 'D')) && (param_1[3] == 'T')) {
    iVar1 = *(int *)(param_1 + 8);
    uStack_78 = 0;
    local_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    puStack_98 = (undefined8 *)0x0;
    local_a0 = 0;
    uStack_88 = 0;
    puStack_90 = (undefined8 *)0x0;
    uStack_a8 = 0;
    local_b0 = 0;
    local_60 = 0x400;
    local_58 = 0;
    local_50 = 0;
    puStack_98 = operator_new(0x28);
    puStack_98[3] = 0;
    puStack_98[4] = 0;
    puStack_98[1] = 0x10000;
    puStack_98[2] = 0;
    *puStack_98 = 0;
    local_c0 = param_1 + 0xc;
    pcStack_b8 = param_1 + 0xc;
    puStack_90 = puStack_98;
    rapidjson::
    GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>
    ::ParseStream<0u,rapidjson::UTF8<char>,rapidjson::GenericStringStream<rapidjson::UTF8<char>>>
              ((GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>
                *)&local_b0,(GenericStringStream *)&local_c0);
                    /* try { // try from 00d8b470 to 00e8b523 has its CatchHandler @ 00d8b470
                       catch() { ... } // from try @ 00d8b470 with catch @ 00d8b470
                       catch() { ... } // from try @ 00d8b6a4 with catch @ 00d8b470
                       catch() { ... } // from try @ 00d8b714 with catch @ 00d8b470 */
    *(int *)(this + 0x240) = iVar1 + 0xc;
    *(char **)(this + 0x248) = param_1;
    uVar3 = JSONDataParser::_parseDragonBonesData((GenericValue *)this,param_2);
    rapidjson::
    GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>
    ::~GenericDocument((GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>
                        *)&local_b0);
  }
  else {
    uVar3 = 0;
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

