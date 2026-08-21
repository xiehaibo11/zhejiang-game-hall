
/* cocostudio::DataReaderHelper::decodeBoneDisplay(rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > const&,
   cocostudio::DataReaderHelper::_DataInfo*) */

SpriteDisplayData *
cocostudio::DataReaderHelper::decodeBoneDisplay(GenericValue *param_1,_DataInfo *param_2)

{
  int *piVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  DictionaryHelper *pDVar6;
  SpriteDisplayData *this;
  char *pcVar7;
  size_t sVar8;
  GenericValue *pGVar9;
  _DataInfo *p_Var10;
  ParticleDisplayData *pPVar11;
  int *piVar12;
  int *piVar13;
  long lVar14;
  float fVar15;
  undefined4 uVar16;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  long local_78;
  
  lVar3 = tpidr_el0;
  local_78 = *(long *)(lVar3 + 0x28);
  pDVar6 = (DictionaryHelper *)DictionaryHelper::getInstance();
  iVar4 = DictionaryHelper::getIntValue_json(pDVar6,param_1,"displayType",0);
  if (iVar4 == 2) {
    this = operator_new(0x40,(nothrow_t *)&std::nothrow);
    if (this != (SpriteDisplayData *)0x0) {
      ParticleDisplayData::ParticleDisplayData((ParticleDisplayData *)this);
    }
    pDVar6 = (DictionaryHelper *)DictionaryHelper::getInstance();
    lVar14 = DictionaryHelper::getStringValue_json(pDVar6,param_1,"plist",(char *)0x0);
    if (lVar14 != 0) {
      if (*(long *)param_2 == 0) {
        p_Var10 = param_2 + 0x58;
      }
      else {
        p_Var10 = (_DataInfo *)(*(long *)param_2 + 0x38);
      }
      FUN_007c1fb0(&local_90,p_Var10,lVar14);
      pPVar11 = (ParticleDisplayData *)(this + 0x28);
      if (((byte)*pPVar11 & 1) == 0) {
        *(undefined2 *)pPVar11 = 0;
      }
      else {
        **(undefined1 **)(this + 0x38) = 0;
        *(undefined8 *)(this + 0x30) = 0;
        if (((byte)*(ParticleDisplayData *)(this + 0x28) & 1) != 0) {
          operator_delete(*(void **)(this + 0x38));
          *(undefined8 *)(this + 0x28) = 0;
        }
      }
      *(undefined8 *)(this + 0x38) = local_80;
      *(undefined8 *)(this + 0x30) = uStack_88;
      *(undefined8 *)pPVar11 = local_90;
    }
  }
  else if (iVar4 == 1) {
    this = operator_new(0x40,(nothrow_t *)&std::nothrow);
    if (this != (SpriteDisplayData *)0x0) {
      ArmatureDisplayData::ArmatureDisplayData((ArmatureDisplayData *)this);
    }
    pDVar6 = (DictionaryHelper *)DictionaryHelper::getInstance();
    pcVar7 = (char *)DictionaryHelper::getStringValue_json(pDVar6,param_1,"name",(char *)0x0);
    if (pcVar7 != (char *)0x0) {
      sVar8 = strlen(pcVar7);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (this + 0x28),pcVar7,sVar8);
    }
  }
  else if (iVar4 == 0) {
    this = operator_new(0x98,(nothrow_t *)&std::nothrow);
    if (this != (SpriteDisplayData *)0x0) {
      SpriteDisplayData::SpriteDisplayData(this);
    }
    pDVar6 = (DictionaryHelper *)DictionaryHelper::getInstance();
    pcVar7 = (char *)DictionaryHelper::getStringValue_json(pDVar6,param_1,"name",(char *)0x0);
    if (pcVar7 != (char *)0x0) {
      sVar8 = strlen(pcVar7);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (this + 0x28),pcVar7,sVar8);
    }
    piVar12 = *(int **)(param_1 + 8);
    uVar2 = *(uint *)param_1;
    piVar13 = piVar12;
    if (uVar2 != 0) {
      lVar14 = (ulong)uVar2 * 0x30;
      piVar1 = piVar12;
      do {
        piVar13 = piVar1;
        iVar5 = *piVar13;
        if ((*(ushort *)((long)piVar13 + 0x16) & 0x1000) != 0) {
          iVar5 = 0x15 - *(char *)((long)piVar13 + 0x15);
        }
        if (iVar5 == 9) {
          piVar1 = *(int **)(piVar13 + 2);
          if ((*(ushort *)((long)piVar13 + 0x16) & 0x1000) != 0) {
            piVar1 = piVar13;
          }
          if ((piVar1 == (int *)"skin_data") || (iVar5 = memcmp("skin_data",piVar1,9), iVar5 == 0))
          break;
        }
        lVar14 = lVar14 + -0x30;
        piVar1 = piVar13 + 0xc;
        piVar13 = piVar12 + (ulong)uVar2 * 0xc;
      } while (lVar14 != 0);
    }
    if (piVar12 + (ulong)uVar2 * 0xc != piVar13) {
      pDVar6 = (DictionaryHelper *)DictionaryHelper::getInstance();
      pGVar9 = (GenericValue *)DictionaryHelper::getSubDictionary_json(pDVar6,param_1,"skin_data");
      if (*(short *)(pGVar9 + 0x16) != 0) {
        pDVar6 = (DictionaryHelper *)DictionaryHelper::getInstance();
        pGVar9 = (GenericValue *)DictionaryHelper::getSubDictionary_json(pDVar6,pGVar9,0);
        if (*(short *)(pGVar9 + 0x16) != 0) {
          pDVar6 = (DictionaryHelper *)DictionaryHelper::getInstance();
          fVar15 = (float)DictionaryHelper::getFloatValue_json(pDVar6,pGVar9,"x",0.0);
          *(float *)(this + 100) = fVar15 * s_PositionReadScale;
          pDVar6 = (DictionaryHelper *)DictionaryHelper::getInstance();
          fVar15 = (float)DictionaryHelper::getFloatValue_json(pDVar6,pGVar9,"y",0.0);
          *(float *)(this + 0x68) = fVar15 * s_PositionReadScale;
          pDVar6 = (DictionaryHelper *)DictionaryHelper::getInstance();
          uVar16 = DictionaryHelper::getFloatValue_json(pDVar6,pGVar9,"cX",1.0);
          *(undefined4 *)(this + 0x78) = uVar16;
          pDVar6 = (DictionaryHelper *)DictionaryHelper::getInstance();
          uVar16 = DictionaryHelper::getFloatValue_json(pDVar6,pGVar9,"cY",1.0);
          *(undefined4 *)(this + 0x7c) = uVar16;
          pDVar6 = (DictionaryHelper *)DictionaryHelper::getInstance();
          uVar16 = DictionaryHelper::getFloatValue_json(pDVar6,pGVar9,"kX",1.0);
          *(undefined4 *)(this + 0x70) = uVar16;
          pDVar6 = (DictionaryHelper *)DictionaryHelper::getInstance();
          uVar16 = DictionaryHelper::getFloatValue_json(pDVar6,pGVar9,"kY",1.0);
          *(undefined4 *)(this + 0x74) = uVar16;
          *(ulong *)(this + 100) =
               CONCAT44((float)((ulong)*(undefined8 *)(this + 100) >> 0x20) *
                        *(float *)(param_2 + 0x38),
                        (float)*(undefined8 *)(this + 100) * *(float *)(param_2 + 0x38));
        }
      }
    }
  }
  else {
    this = operator_new(0x98,(nothrow_t *)&std::nothrow);
    if (this != (SpriteDisplayData *)0x0) {
      SpriteDisplayData::SpriteDisplayData(this);
    }
  }
  *(int *)(this + 0x24) = iVar4;
  if (*(long *)(lVar3 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}

