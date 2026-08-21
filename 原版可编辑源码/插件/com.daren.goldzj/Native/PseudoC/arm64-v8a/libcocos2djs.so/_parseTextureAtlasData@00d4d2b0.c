
/* dragonBones::JSONDataParser::_parseTextureAtlasData(rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > const&, dragonBones::TextureAtlasData&,
   float) */

void dragonBones::JSONDataParser::_parseTextureAtlasData
               (GenericValue *param_1,TextureAtlasData *param_2,float param_3)

{
  GenericValue *this;
  int *__s2;
  uint uVar1;
  long lVar2;
  undefined *__s1;
  byte bVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  long *in_x2;
  basic_string *in_x3;
  char *pcVar8;
  int *piVar9;
  byte *pbVar10;
  ulong *puVar11;
  char *pcVar12;
  ulong uVar13;
  ulong uVar14;
  int *piVar15;
  int *piVar16;
  int *piVar17;
  long lVar18;
  float fVar19;
  float fVar20;
  ulong local_b8 [2];
  void *local_a8;
  ulong local_a0;
  long lStack_98;
  void *local_90;
  long local_88;
  
  lVar2 = tpidr_el0;
  local_88 = *(long *)(lVar2 + 0x28);
  local_b8[0] = 0;
  local_b8[1] = 0;
  local_a8 = (void *)0x0;
  _getString((JSONDataParser *)param_2,(GenericValue *)DataParser::FORMAT,(char *)local_b8,in_x3);
  uVar4 = DataParser::_getTextureFormat((basic_string *)&local_a0);
  *(undefined4 *)(in_x2 + 2) = uVar4;
  if ((local_a0 & 1) != 0) {
    operator_delete(local_90);
  }
  if ((local_b8[0] & 1) != 0) {
    operator_delete(local_a8);
  }
  uVar4 = _getNumber((GenericValue *)param_2,DataParser::WIDTH,0);
  *(undefined4 *)((long)in_x2 + 0x14) = uVar4;
  uVar4 = _getNumber((GenericValue *)param_2,DataParser::HEIGHT,0);
  *(undefined4 *)(in_x2 + 3) = uVar4;
  if (param_3 == 1.0) {
    fVar19 = (float)_getNumber((GenericValue *)param_2,DataParser::SCALE,1.0);
    param_3 = 1.0 / fVar19;
  }
  *(float *)((long)in_x2 + 0x1c) = param_3;
  local_b8[0] = 0;
  local_b8[1] = 0;
  local_a8 = (void *)0x0;
  _getString((JSONDataParser *)param_2,(GenericValue *)DataParser::NAME,(char *)local_b8,in_x3);
  puVar11 = (ulong *)(in_x2 + 4);
  if ((*puVar11 & 1) == 0) {
    *(undefined2 *)puVar11 = 0;
  }
  else {
    *(undefined1 *)in_x2[6] = 0;
    in_x2[5] = 0;
    if ((*(byte *)(in_x2 + 4) & 1) != 0) {
      operator_delete((void *)in_x2[6]);
      in_x2[4] = 0;
    }
  }
  in_x2[6] = (long)local_90;
  in_x2[5] = lStack_98;
  *puVar11 = local_a0;
  lStack_98 = 0;
  local_90 = (void *)0x0;
  local_a0 = 0;
  if ((local_b8[0] & 1) != 0) {
    operator_delete(local_a8);
  }
  local_b8[0] = 0;
  local_b8[1] = 0;
  local_a8 = (void *)0x0;
  _getString((JSONDataParser *)param_2,(GenericValue *)DataParser::IMAGE_PATH,(char *)local_b8,in_x3
            );
  pbVar10 = (byte *)(in_x2 + 7);
  if ((*pbVar10 & 1) == 0) {
    pbVar10[0] = 0;
    pbVar10[1] = 0;
  }
  else {
    *(undefined1 *)in_x2[9] = 0;
    in_x2[8] = 0;
    if ((*(byte *)(in_x2 + 7) & 1) != 0) {
      operator_delete((void *)in_x2[9]);
      in_x2[7] = 0;
    }
  }
  in_x2[9] = (long)local_90;
  in_x2[8] = lStack_98;
  *(ulong *)pbVar10 = local_a0;
  lStack_98 = 0;
  local_90 = (void *)0x0;
  local_a0 = 0;
  if ((local_b8[0] & 1) != 0) {
    operator_delete(local_a8);
  }
  __s1 = DataParser::SUB_TEXTURE;
  pcVar12 = DataParser::SUB_TEXTURE + -1;
  pcVar8 = pcVar12;
  do {
    pcVar8 = pcVar8 + 1;
  } while (*pcVar8 != '\0');
  piVar15 = *(int **)(param_2 + 8);
  uVar1 = *(uint *)param_2;
  uVar13 = (ulong)uVar1;
  piVar9 = piVar15 + uVar13 * 0xc;
  piVar17 = piVar15;
  if (uVar1 != 0) {
    uVar14 = (long)pcVar8 - (long)DataParser::SUB_TEXTURE;
    lVar18 = uVar13 * 0x30;
    piVar16 = piVar15;
    do {
      iVar5 = *piVar16;
      if ((*(ushort *)((long)piVar16 + 0x16) & 0x1000) != 0) {
        iVar5 = 0x15 - *(char *)((long)piVar16 + 0x15);
      }
      if (iVar5 == (int)uVar14) {
        __s2 = *(int **)(piVar16 + 2);
        if ((*(ushort *)((long)piVar16 + 0x16) & 0x1000) != 0) {
          __s2 = piVar16;
        }
        piVar17 = piVar16;
        if ((__s2 == (int *)__s1) || (iVar5 = memcmp(__s1,__s2,uVar14 & 0xffffffff), iVar5 == 0))
        break;
      }
      lVar18 = lVar18 + -0x30;
      piVar16 = piVar16 + 0xc;
      piVar17 = piVar9;
    } while (lVar18 != 0);
  }
  if (piVar9 != piVar17) {
    do {
      pcVar12 = pcVar12 + 1;
    } while (*pcVar12 != '\0');
    if (uVar1 == 0) {
LAB_00d4d5cc:
      if (piVar15 != piVar9) {
        uVar1 = piVar15[6];
        if (uVar1 != 0) {
          lVar18 = 0;
          do {
            this = (GenericValue *)(*(long *)(piVar15 + 8) + lVar18);
            lVar6 = (**(code **)(*in_x2 + 0x20))();
            bVar3 = _getBoolean(this,DataParser::ROTATED,false);
            *(byte *)(lVar6 + 0xd) = bVar3 & 1;
            local_b8[0] = 0;
            local_b8[1] = 0;
            local_a8 = (void *)0x0;
            _getString((JSONDataParser *)this,(GenericValue *)DataParser::NAME,(char *)local_b8,
                       in_x3);
            pbVar10 = (byte *)(lVar6 + 0x10);
            if ((*pbVar10 & 1) == 0) {
              pbVar10[0] = 0;
              pbVar10[1] = 0;
            }
            else {
              **(undefined1 **)(lVar6 + 0x20) = 0;
              *(undefined8 *)(lVar6 + 0x18) = 0;
              if ((*(byte *)(lVar6 + 0x10) & 1) != 0) {
                operator_delete(*(void **)(lVar6 + 0x20));
                *(undefined8 *)(lVar6 + 0x10) = 0;
              }
            }
            *(void **)(lVar6 + 0x20) = local_90;
            *(long *)(lVar6 + 0x18) = lStack_98;
            *(ulong *)pbVar10 = local_a0;
            lStack_98 = 0;
            local_90 = (void *)0x0;
            local_a0 = 0;
            if ((local_b8[0] & 1) != 0) {
              operator_delete(local_a8);
            }
            uVar4 = _getNumber(this,DataParser::X,0.0);
            *(undefined4 *)(lVar6 + 0x28) = uVar4;
            uVar4 = _getNumber(this,DataParser::Y,0.0);
            *(undefined4 *)(lVar6 + 0x2c) = uVar4;
            uVar4 = _getNumber(this,DataParser::WIDTH,0.0);
            *(undefined4 *)(lVar6 + 0x30) = uVar4;
            uVar4 = _getNumber(this,DataParser::HEIGHT,0.0);
            *(undefined4 *)(lVar6 + 0x34) = uVar4;
            fVar19 = (float)_getNumber(this,DataParser::FRAME_WIDTH,-1.0);
            fVar20 = (float)_getNumber(this,DataParser::FRAME_HEIGHT,-1.0);
            if ((0.0 < fVar19) && (0.0 < fVar20)) {
              uVar7 = TextureData::createRectangle();
              *(undefined8 *)(lVar6 + 0x38) = uVar7;
              uVar4 = _getNumber(this,DataParser::FRAME_X,0.0);
              **(undefined4 **)(lVar6 + 0x38) = uVar4;
              uVar4 = _getNumber(this,DataParser::FRAME_Y,0.0);
              lVar6 = *(long *)(lVar6 + 0x38);
              *(undefined4 *)(lVar6 + 4) = uVar4;
              *(float *)(lVar6 + 8) = fVar19;
              *(float *)(lVar6 + 0xc) = fVar20;
            }
            (**(code **)(*in_x2 + 0x28))();
            lVar18 = lVar18 + 0x18;
          } while ((ulong)uVar1 * 0x18 - lVar18 != 0);
        }
        goto LAB_00d4d7e0;
      }
    }
    else {
      lVar18 = uVar13 * 0x30;
      do {
        iVar5 = *piVar15;
        if ((*(ushort *)((long)piVar15 + 0x16) & 0x1000) != 0) {
          iVar5 = 0x15 - *(char *)((long)piVar15 + 0x15);
        }
        if (iVar5 == (int)((long)pcVar12 - (long)__s1)) {
          piVar17 = *(int **)(piVar15 + 2);
          if ((*(ushort *)((long)piVar15 + 0x16) & 0x1000) != 0) {
            piVar17 = piVar15;
          }
          if ((piVar17 == (int *)__s1) ||
             (iVar5 = memcmp(__s1,piVar17,(long)pcVar12 - (long)__s1 & 0xffffffff), iVar5 == 0))
          goto LAB_00d4d5cc;
        }
        lVar18 = lVar18 + -0x30;
        piVar15 = piVar15 + 0xc;
      } while (lVar18 != 0);
    }
    rapidjson::
    GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
    operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
    ::buffer = 0;
    DAT_01d38c18 = 0;
    DAT_01d38c20 = 0;
  }
LAB_00d4d7e0:
  if (*(long *)(lVar2 + 0x28) == local_88) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

