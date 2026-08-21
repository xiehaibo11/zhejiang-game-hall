
/* dragonBones::JSONDataParser::_parseBoneAllFrame(rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > const&, unsigned int, unsigned int) */

undefined4 __thiscall
dragonBones::JSONDataParser::_parseBoneAllFrame
          (JSONDataParser *this,GenericValue *param_1,uint param_2,uint param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int *__s2;
  uint uVar3;
  undefined4 uVar4;
  undefined *__s1;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
  int *piVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  int *piVar13;
  int *piVar14;
  char *pcVar15;
  float fVar16;
  undefined8 uVar17;
  float fVar18;
  float fVar19;
  
  uVar17 = NEON_fmov(0x3f800000,4);
  *(undefined8 *)(this + 0xac) = 0;
  *(undefined8 *)(this + 0xb4) = 0;
  *(undefined8 *)(this + 0xbc) = uVar17;
  __s1 = DataParser::TRANSFORM;
  pcVar15 = DataParser::TRANSFORM + -1;
  pcVar7 = pcVar15;
  do {
    pcVar7 = pcVar7 + 1;
  } while (*pcVar7 != '\0');
  piVar14 = *(int **)(param_1 + 8);
  uVar3 = *(uint *)param_1;
  uVar11 = (ulong)uVar3;
  piVar8 = piVar14 + uVar11 * 0xc;
  piVar13 = piVar14;
  if (uVar3 != 0) {
    uVar9 = (long)pcVar7 - (long)DataParser::TRANSFORM;
    lVar10 = uVar11 * 0x30;
    piVar12 = piVar14;
    do {
      iVar5 = *piVar12;
      if ((*(ushort *)((long)piVar12 + 0x16) & 0x1000) != 0) {
        iVar5 = 0x15 - *(char *)((long)piVar12 + 0x15);
      }
      if (iVar5 == (int)uVar9) {
        __s2 = *(int **)(piVar12 + 2);
        if ((*(ushort *)((long)piVar12 + 0x16) & 0x1000) != 0) {
          __s2 = piVar12;
        }
        piVar13 = piVar12;
        if ((__s2 == (int *)__s1) || (iVar5 = memcmp(__s1,__s2,uVar9 & 0xffffffff), iVar5 == 0))
        break;
      }
      lVar10 = lVar10 + -0x30;
      piVar12 = piVar12 + 0xc;
      piVar13 = piVar8;
    } while (lVar10 != 0);
  }
  if (piVar8 == piVar13) {
    fVar18 = 0.0;
  }
  else {
    do {
      pcVar15 = pcVar15 + 1;
    } while (*pcVar15 != '\0');
    if (uVar3 == 0) {
LAB_00d48e1c:
      if (piVar14 == piVar8) goto LAB_00d48e34;
      piVar14 = piVar14 + 6;
    }
    else {
      lVar10 = uVar11 * 0x30;
      do {
        iVar5 = *piVar14;
        if ((*(ushort *)((long)piVar14 + 0x16) & 0x1000) != 0) {
          iVar5 = 0x15 - *(char *)((long)piVar14 + 0x15);
        }
        if (iVar5 == (int)((long)pcVar15 - (long)__s1)) {
          piVar13 = *(int **)(piVar14 + 2);
          if ((*(ushort *)((long)piVar14 + 0x16) & 0x1000) != 0) {
            piVar13 = piVar14;
          }
          if ((piVar13 == (int *)__s1) ||
             (iVar5 = memcmp(__s1,piVar13,(long)pcVar15 - (long)__s1 & 0xffffffff), iVar5 == 0))
          goto LAB_00d48e1c;
        }
        lVar10 = lVar10 + -0x30;
        piVar14 = piVar14 + 0xc;
      } while (lVar10 != 0);
LAB_00d48e34:
      piVar14 = (int *)&rapidjson::
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
    (**(code **)(*(long *)this + 0xf8))(0x3f800000,this,piVar14,this + 0xac);
    fVar18 = *(float *)(this + 0xb8);
  }
  if (param_2 == 0) goto LAB_00d48ef8;
  iVar5 = *(int *)(this + 0x74);
  if (iVar5 == 0) {
    fVar19 = *(float *)(this + 0x78);
    fVar16 = fmodf((fVar18 - fVar19) + 3.1415927,6.2831855);
    fVar18 = -3.1415927;
    if (fVar16 <= 0.0) {
      fVar18 = 3.1415927;
    }
    fVar18 = fVar19 + fVar16 + fVar18;
    goto LAB_00d48ef8;
  }
  fVar16 = *(float *)(this + 0x78);
  if (iVar5 < 1) {
    if (fVar18 <= fVar16) goto LAB_00d48e8c;
  }
  else if (fVar16 <= fVar18) {
LAB_00d48e8c:
    iVar2 = 1;
    if (0 < iVar5) {
      iVar2 = -1;
    }
    iVar5 = iVar2 + iVar5;
    *(int *)(this + 0x74) = iVar5;
  }
  fVar18 = ((fVar18 + fVar16) - fVar16) + (float)iVar5 * 6.2831855;
LAB_00d48ef8:
  fVar16 = (float)_getNumber(param_1,DataParser::TWEEN_ROTATE,0.0);
  *(int *)(this + 0x74) = (int)fVar16;
  *(float *)(this + 0x78) = fVar18;
  uVar6 = (**(code **)(*(long *)this + 0x98))(this,param_1,param_2,param_3);
  lVar10 = *(long *)(this + 0x150);
  uVar11 = *(long *)(this + 0x158) - lVar10 >> 2;
  if (uVar11 < 0xfffffffffffffffa) {
    std::__ndk1::vector<float,std::__ndk1::allocator<float>>::__append
              ((vector<float,std::__ndk1::allocator<float>> *)(this + 0x150),6);
    lVar10 = *(long *)(this + 0x150);
  }
  else {
    *(ulong *)(this + 0x158) = lVar10 + uVar11 * 4 + 0x18;
  }
  puVar1 = (undefined4 *)(lVar10 + uVar11 * 4);
  *puVar1 = *(undefined4 *)(this + 0xac);
  uVar4 = *(undefined4 *)(this + 0xb0);
  puVar1[2] = fVar18;
  puVar1[1] = uVar4;
  puVar1[3] = *(undefined4 *)(this + 0xb4);
  puVar1[4] = *(undefined4 *)(this + 0xbc);
  puVar1[5] = *(undefined4 *)(this + 0xc0);
  _parseActionDataInFrame
            (this,param_1,param_2,*(BoneData **)(this + 0x38),*(SlotData **)(this + 0x40));
  return uVar6;
}

