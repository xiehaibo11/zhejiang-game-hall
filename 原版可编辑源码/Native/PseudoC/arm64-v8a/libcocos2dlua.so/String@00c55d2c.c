
/* rapidjson::GenericDocument<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAllocator>::String(char
   const*, unsigned int, bool) */

undefined8 __thiscall
rapidjson::
GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>
::String(GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>
         *this,char *param_1,uint param_2,bool param_3)

{
  ulong uVar1;
  void *pvVar2;
  ulong *puVar3;
  void *pvVar4;
  uint *puVar5;
  uint *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong *puVar9;
  
  puVar6 = *(uint **)(this + 0x40);
  puVar5 = *(uint **)(this + 0x48);
  if (puVar5 < puVar6 + 6) {
    pvVar2 = *(void **)(this + 0x38);
    if (pvVar2 == (void *)0x0) {
      if (*(long *)(this + 0x28) == 0) {
        pvVar4 = operator_new(1);
        *(void **)(this + 0x28) = pvVar4;
        *(void **)(this + 0x30) = pvVar4;
      }
      uVar8 = *(ulong *)(this + 0x50);
    }
    else {
      uVar8 = (long)puVar5 + (((ulong)((long)puVar5 + (1 - (long)pvVar2)) >> 1) - (long)pvVar2);
    }
    uVar1 = ((long)puVar6 - (long)pvVar2) + 0x18;
    if (uVar1 <= uVar8) {
      uVar1 = uVar8;
    }
    if (uVar1 == 0) {
      free(pvVar2);
      pvVar4 = (void *)0x0;
    }
    else {
      pvVar4 = realloc(pvVar2,uVar1);
    }
    puVar6 = (uint *)((long)pvVar4 + ((long)puVar6 - (long)pvVar2));
    *(void **)(this + 0x38) = pvVar4;
    *(uint **)(this + 0x40) = puVar6;
    *(ulong *)(this + 0x48) = (long)pvVar4 + uVar1;
  }
  *(uint **)(this + 0x40) = puVar6 + 6;
  if (!param_3) {
    puVar6[0] = 0;
    puVar6[1] = 0;
    *(char **)(puVar6 + 2) = param_1;
    puVar6[4] = 0;
    puVar6[5] = 0x4050000;
    *puVar6 = param_2;
    return 1;
  }
  puVar7 = *(undefined8 **)(this + 0x18);
  puVar6[0] = 0;
  puVar6[1] = 0;
  puVar6[2] = 0;
  puVar6[3] = 0;
  puVar6[4] = 0;
  puVar6[5] = 0;
  if (param_2 < 0x16) {
    *(undefined2 *)((long)puVar6 + 0x16) = 0x1c05;
    *(char *)((long)puVar6 + 0x15) = '\x15' - (char)param_2;
    puVar5 = puVar6;
    goto LAB_00c55e4c;
  }
  *(undefined2 *)((long)puVar6 + 0x16) = 0xc05;
  *puVar6 = param_2;
  if (param_2 < 0xffffffff) {
    puVar9 = (ulong *)*puVar7;
    uVar8 = (ulong)(param_2 + 1) + 7 & 0x1fffffff8;
    if ((puVar9 == (ulong *)0x0) ||
       (puVar5 = (uint *)puVar9[1], puVar3 = puVar9, *puVar9 < (long)puVar5 + uVar8)) {
      uVar1 = puVar7[1];
      if ((ulong)puVar7[1] <= uVar8) {
        uVar1 = uVar8;
      }
      if (puVar7[3] == 0) {
        pvVar2 = operator_new(1);
        puVar7[3] = pvVar2;
        puVar7[4] = pvVar2;
      }
      if (uVar1 + 0x18 == 0) goto LAB_00c55e40;
      puVar3 = malloc(uVar1 + 0x18);
      puVar5 = (uint *)0x0;
      if (puVar3 != (ulong *)0x0) {
        puVar3[2] = (ulong)puVar9;
        *puVar3 = uVar1;
        puVar3[1] = 0;
        *puVar7 = puVar3;
        goto LAB_00c55e2c;
      }
    }
    else {
LAB_00c55e2c:
      uVar8 = (long)puVar5 + uVar8;
      puVar5 = (uint *)((long)puVar3 + (long)puVar5 + 0x18);
      puVar3[1] = uVar8;
    }
  }
  else {
LAB_00c55e40:
    puVar5 = (uint *)0x0;
  }
  *(uint **)(puVar6 + 2) = puVar5;
LAB_00c55e4c:
  memcpy(puVar5,param_1,(ulong)param_2);
  *(undefined1 *)((long)puVar5 + (ulong)param_2) = 0;
  return 1;
}

