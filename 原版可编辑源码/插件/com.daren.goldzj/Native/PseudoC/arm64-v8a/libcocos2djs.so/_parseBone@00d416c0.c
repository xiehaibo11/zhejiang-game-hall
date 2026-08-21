
/* dragonBones::JSONDataParser::_parseBone(rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > const&) */

BoneData * dragonBones::JSONDataParser::_parseBone(GenericValue *param_1)

{
  int *__s2;
  uint uVar1;
  long lVar2;
  undefined *__s1;
  byte bVar3;
  int iVar4;
  BoneData *pBVar5;
  GenericValue *in_x1;
  basic_string *in_x3;
  char *pcVar6;
  int *piVar7;
  BoneData *pBVar8;
  long lVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  char *pcVar13;
  ulong uVar14;
  ulong uVar15;
  float fVar16;
  ulong local_98 [2];
  void *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  pBVar5 = BaseObject::borrowObject<dragonBones::BoneData>();
  bVar3 = _getBoolean(in_x1,DataParser::INHERIT_TRANSLATION,true);
  pBVar5[0xd] = (BoneData)(bVar3 & 1);
  bVar3 = _getBoolean(in_x1,DataParser::INHERIT_ROTATION,true);
  pBVar5[0xe] = (BoneData)(bVar3 & 1);
  bVar3 = _getBoolean(in_x1,DataParser::INHERIT_SCALE,true);
  pBVar5[0xf] = (BoneData)(bVar3 & 1);
  bVar3 = _getBoolean(in_x1,DataParser::INHERIT_REFLECTION,true);
  pBVar5[0x10] = (BoneData)(bVar3 & 1);
  fVar16 = (float)_getNumber(in_x1,DataParser::LENGTH,0.0);
  *(float *)(pBVar5 + 0x14) = fVar16 * *(float *)(*(long *)(param_1 + 0x30) + 0x1c);
  local_98[0] = 0;
  local_98[1] = 0;
  local_88 = (void *)0x0;
  _getString((JSONDataParser *)in_x1,(GenericValue *)DataParser::NAME,(char *)local_98,in_x3);
  pBVar8 = pBVar5 + 0x18;
  if (((byte)*pBVar8 & 1) == 0) {
    *(undefined2 *)pBVar8 = 0;
  }
  else {
    **(undefined1 **)(pBVar5 + 0x28) = 0;
    *(undefined8 *)(pBVar5 + 0x20) = 0;
    if (((byte)pBVar5[0x18] & 1) != 0) {
      operator_delete(*(void **)(pBVar5 + 0x28));
      *(undefined8 *)(pBVar5 + 0x18) = 0;
    }
  }
  *(undefined8 *)(pBVar5 + 0x28) = local_70;
  *(undefined8 *)(pBVar5 + 0x20) = uStack_78;
  *(undefined8 *)pBVar8 = local_80;
  uStack_78 = 0;
  local_70 = 0;
  local_80 = 0;
  if ((local_98[0] & 1) != 0) {
    operator_delete(local_88);
  }
  __s1 = DataParser::TRANSFORM;
  pcVar13 = DataParser::TRANSFORM + -1;
  pcVar6 = pcVar13;
  do {
    pcVar6 = pcVar6 + 1;
  } while (*pcVar6 != '\0');
  piVar10 = *(int **)(in_x1 + 8);
  uVar1 = *(uint *)in_x1;
  uVar14 = (ulong)uVar1;
  piVar7 = piVar10 + uVar14 * 0xc;
  piVar12 = piVar10;
  if (uVar1 != 0) {
    uVar15 = (long)pcVar6 - (long)DataParser::TRANSFORM;
    lVar9 = uVar14 * 0x30;
    piVar11 = piVar10;
    do {
      iVar4 = *piVar11;
      if ((*(ushort *)((long)piVar11 + 0x16) & 0x1000) != 0) {
        iVar4 = 0x15 - *(char *)((long)piVar11 + 0x15);
      }
      if (iVar4 == (int)uVar15) {
        __s2 = *(int **)(piVar11 + 2);
        if ((*(ushort *)((long)piVar11 + 0x16) & 0x1000) != 0) {
          __s2 = piVar11;
        }
        piVar12 = piVar11;
        if ((__s2 == (int *)__s1) || (iVar4 = memcmp(__s1,__s2,uVar15 & 0xffffffff), iVar4 == 0))
        break;
      }
      lVar9 = lVar9 + -0x30;
      piVar11 = piVar11 + 0xc;
      piVar12 = piVar7;
    } while (lVar9 != 0);
  }
  if (piVar7 == piVar12) goto LAB_00d4198c;
  do {
    pcVar13 = pcVar13 + 1;
  } while (*pcVar13 != '\0');
  if (uVar1 == 0) {
LAB_00d41950:
    if (piVar10 == piVar7) goto LAB_00d41960;
    piVar10 = piVar10 + 6;
  }
  else {
    lVar9 = uVar14 * 0x30;
    do {
      iVar4 = *piVar10;
      if ((*(ushort *)((long)piVar10 + 0x16) & 0x1000) != 0) {
        iVar4 = 0x15 - *(char *)((long)piVar10 + 0x15);
      }
      if (iVar4 == (int)((long)pcVar13 - (long)__s1)) {
        piVar12 = *(int **)(piVar10 + 2);
        if ((*(ushort *)((long)piVar10 + 0x16) & 0x1000) != 0) {
          piVar12 = piVar10;
        }
        if ((piVar12 == (int *)__s1) ||
           (iVar4 = memcmp(__s1,piVar12,(long)pcVar13 - (long)__s1 & 0xffffffff), iVar4 == 0))
        goto LAB_00d41950;
      }
      lVar9 = lVar9 + -0x30;
      piVar10 = piVar10 + 0xc;
    } while (lVar9 != 0);
LAB_00d41960:
    piVar10 = (int *)&rapidjson::
                      GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                      ::
                      operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
                      ::buffer;
    rapidjson::
    GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
    operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
    ::buffer = 0;
    DAT_01d38c18 = 0;
    DAT_01d38c20 = 0;
  }
  (**(code **)(*(long *)param_1 + 0xf8))
            (*(undefined4 *)(*(long *)(param_1 + 0x30) + 0x1c),param_1,piVar10,pBVar5 + 0x30);
LAB_00d4198c:
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pBVar5;
}

