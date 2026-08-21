
/* dragonBones::BinaryDataParser::parseDragonBonesData(char const*, float) */

undefined8 __thiscall
dragonBones::BinaryDataParser::parseDragonBonesData
          (BinaryDataParser *this,char *param_1,float param_2)

{
  char *pcVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  char **local_d8;
  char *local_d0;
  char *pcStack_c8;
  char *local_c0;
  ulong uStack_b8;
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
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  if ((((*param_1 == 'D') && (param_1[1] == 'B')) && (param_1[2] == 'D')) && (param_1[3] == 'T')) {
    uVar2 = *(uint *)(param_1 + 8);
    pcVar1 = param_1 + 0xc;
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
    puStack_98[1] = 0x10000;
    puStack_98[2] = 0;
    local_c0 = pcVar1 + uVar2;
    local_d8 = &local_d0;
    puStack_98[3] = 0;
    puStack_98[4] = 0;
    *puStack_98 = 0;
    local_d0 = pcVar1;
    if ((uVar2 != 0) && (*pcVar1 == -0x11)) {
      local_d0 = param_1 + 0xd;
    }
    if (local_d0 != local_c0) {
      if (*local_d0 == -0x45) {
        local_d0 = local_d0 + 1;
      }
      if ((local_d0 != local_c0) && (*local_d0 == -0x41)) {
        local_d0 = local_d0 + 1;
      }
    }
    pcStack_c8 = pcVar1;
    uStack_b8 = (ulong)uVar2;
    puStack_90 = puStack_98;
    rapidjson::
    GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>
    ::
    ParseStream<0u,rapidjson::UTF8<char>,rapidjson::EncodedInputStream<rapidjson::UTF8<char>,rapidjson::MemoryStream>>
              ((GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>
                *)&local_b0,(EncodedInputStream *)&local_d8);
    *(uint *)(this + 0x240) = uVar2 + 0xc;
    *(char **)(this + 0x248) = param_1;
    uVar4 = JSONDataParser::_parseDragonBonesData((GenericValue *)this,param_2);
    rapidjson::
    GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>
    ::~GenericDocument((GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>
                        *)&local_b0);
  }
  else {
    uVar4 = 0;
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

