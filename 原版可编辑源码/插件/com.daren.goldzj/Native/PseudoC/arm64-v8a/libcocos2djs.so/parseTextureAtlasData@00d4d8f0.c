
/* dragonBones::JSONDataParser::parseTextureAtlasData(char const*, dragonBones::TextureAtlasData&,
   float) */

void __thiscall
dragonBones::JSONDataParser::parseTextureAtlasData
          (JSONDataParser *this,char *param_1,TextureAtlasData *param_2,float param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  int *piVar4;
  undefined4 in_register_00005004;
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
  if (param_1 == (char *)0x0) {
    piVar4 = *(int **)(this + 0x68);
    if ((piVar4 == (int *)0x0) || (*piVar4 == 0)) {
      uVar3 = 0;
      goto LAB_00d4da04;
    }
    uVar1 = *(uint *)(this + 8);
    *(uint *)(this + 8) = uVar1 + 1;
    (**(code **)(*(long *)this + 0x118))
              (CONCAT44(in_register_00005004,param_3),this,
               *(long *)(piVar4 + 2) + (ulong)uVar1 * 0x18,param_2);
    if (**(uint **)(this + 0x68) <= *(uint *)(this + 8)) {
      *(undefined4 *)(this + 8) = 0;
      *(undefined8 *)(this + 0x68) = 0;
    }
  }
  else {
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
    local_c0 = param_1;
    pcStack_b8 = param_1;
    puStack_90 = puStack_98;
    rapidjson::
    GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>
    ::ParseStream<0u,rapidjson::UTF8<char>,rapidjson::GenericStringStream<rapidjson::UTF8<char>>>
              ((GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>
                *)&local_b0,(GenericStringStream *)&local_c0);
    (**(code **)(*(long *)this + 0x118))
              (CONCAT44(in_register_00005004,param_3),this,&local_b0,param_2);
    rapidjson::
    GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>
    ::~GenericDocument((GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>
                        *)&local_b0);
  }
  uVar3 = 1;
LAB_00d4da04:
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

