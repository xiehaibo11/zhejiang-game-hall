
/* dragonBones::JSONDataParser::parseDragonBonesData(char const*, float) */

undefined8 __thiscall
dragonBones::JSONDataParser::parseDragonBonesData(JSONDataParser *this,char *param_1,float param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 in_register_00005004;
  char *local_b0;
  char *pcStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
                    /* try { // try from 00d9c178 to 00e9c187 has its CatchHandler @ 00d9c9e0 */
  puStack_88 = (undefined8 *)0x0;
  local_90 = 0;
  uStack_78 = 0;
  puStack_80 = (undefined8 *)0x0;
  uStack_98 = 0;
  local_a0 = 0;
  local_50 = 0x400;
  local_48 = 0;
  local_40 = 0;
                    /* try { // try from 00d9c18c to 00e9c19b has its CatchHandler @ 00d9c9dc */
  puStack_88 = operator_new(0x28);
  puStack_88[3] = 0;
  puStack_88[4] = 0;
  puStack_88[1] = 0x10000;
  puStack_88[2] = 0;
  *puStack_88 = 0;
  local_b0 = param_1;
  pcStack_a8 = param_1;
  puStack_80 = puStack_88;
  rapidjson::
  GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>
  ::ParseStream<0u,rapidjson::UTF8<char>,rapidjson::GenericStringStream<rapidjson::UTF8<char>>>
            ((GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>
              *)&local_a0,(GenericStringStream *)&local_b0);
  uVar2 = (**(code **)(*(long *)this + 0x110))
                    (CONCAT44(in_register_00005004,param_2),this,&local_a0);
  rapidjson::
  GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>
  ::~GenericDocument((GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>
                      *)&local_a0);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

