
/* cocostudio::DataReaderHelper::decodeMovementBone(rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > const&,
   cocostudio::DataReaderHelper::_DataInfo*) */

MovementBoneData *
cocostudio::DataReaderHelper::decodeMovementBone(GenericValue *param_1,_DataInfo *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  int iVar4;
  MovementBoneData *this;
  DictionaryHelper *pDVar5;
  char *__s;
  size_t sVar6;
  GenericValue *pGVar7;
  Ref *this_00;
  FrameData *this_01;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  int iVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  undefined8 *local_80;
  undefined8 *local_78;
  undefined8 uStack_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  this = operator_new(0x60,(nothrow_t *)&std::nothrow);
  if (this != (MovementBoneData *)0x0) {
    MovementBoneData::MovementBoneData(this);
  }
  (**(code **)(*(long *)this + 0x10))(this);
  pDVar5 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar12 = DictionaryHelper::getFloatValue_json(pDVar5,param_1,"dl",0.0);
  *(undefined4 *)(this + 0x24) = uVar12;
  pDVar5 = (DictionaryHelper *)DictionaryHelper::getInstance();
  __s = (char *)DictionaryHelper::getStringValue_json(pDVar5,param_1,"name",(char *)0x0);
  if (__s != (char *)0x0) {
    sVar6 = strlen(__s);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x30),__s,sVar6);
  }
  pDVar5 = (DictionaryHelper *)DictionaryHelper::getInstance();
  iVar4 = DictionaryHelper::getArrayCount_json(pDVar5,param_1,"frame_data",0);
  if (iVar4 == 0) {
    fVar13 = *(float *)(param_2 + 0x74);
  }
  else {
    iVar11 = 0;
    do {
      pDVar5 = (DictionaryHelper *)DictionaryHelper::getInstance();
      pGVar7 = (GenericValue *)
               DictionaryHelper::getSubDictionary_json(pDVar5,param_1,"frame_data",iVar11);
      this_00 = (Ref *)decodeFrame(pGVar7,param_2);
      MovementBoneData::addFrameData(this,(FrameData *)this_00);
      cocos2d::Ref::release(this_00);
      fVar13 = *(float *)(param_2 + 0x74);
      if (fVar13 < 0.3) {
        fVar14 = *(float *)(this + 0x2c);
        *(int *)(this_00 + 0x58) = (int)fVar14;
        *(float *)(this + 0x2c) = fVar14 + (float)*(int *)(this_00 + 0x5c);
      }
      iVar11 = iVar11 + 1;
    } while (iVar4 != iVar11);
  }
  if (fVar13 < 1.0) {
    local_78 = (undefined8 *)0x0;
    uStack_70 = 0;
    local_80 = (undefined8 *)0x0;
    if ((MovementBoneData *)&local_80 == this + 0x48) {
      puVar10 = (undefined8 *)0x0;
    }
    else {
      std::__ndk1::vector<cocostudio::FrameData*,std::__ndk1::allocator<cocostudio::FrameData*>>::
      assign<cocostudio::FrameData**>
                ((vector<cocostudio::FrameData*,std::__ndk1::allocator<cocostudio::FrameData*>> *)
                 &local_80,*(FrameData ***)(this + 0x48),*(FrameData ***)(this + 0x50));
      puVar3 = local_78;
      puVar10 = local_80;
      for (puVar1 = local_80; puVar1 != puVar3; puVar1 = puVar1 + 1) {
        cocos2d::Ref::retain((Ref *)*puVar1);
        puVar10 = local_78;
      }
    }
    puVar1 = puVar10;
    puVar3 = local_80;
    if (0 < (long)local_78 - (long)local_80) {
      uVar8 = (ulong)((long)local_78 - (long)local_80) >> 3;
      lVar9 = uVar8 - 1;
      while (0 < lVar9) {
        lVar9 = local_80[uVar8 - 2];
        fVar14 = *(float *)(local_80[uVar8 - 1] + 0x30) - *(float *)(lVar9 + 0x30);
        fVar13 = *(float *)(local_80[uVar8 - 1] + 0x34) - *(float *)(lVar9 + 0x34);
        if ((fVar14 < -3.1415927) || (3.1415927 < fVar14)) {
          *(float *)(lVar9 + 0x30) =
               (float)(*(double *)(&DAT_01412ae8 + (ulong)(fVar14 < 0.0) * 8) +
                      (double)*(float *)(lVar9 + 0x30));
        }
        if ((fVar13 < -3.1415927) || (3.1415927 < fVar13)) {
          *(float *)(lVar9 + 0x34) =
               (float)(*(double *)(&DAT_01412ae8 + (ulong)(fVar13 < 0.0) * 8) +
                      (double)*(float *)(lVar9 + 0x34));
        }
        lVar9 = uVar8 - 2;
        uVar8 = uVar8 - 1;
      }
    }
    for (; puVar3 != puVar10; puVar3 = puVar3 + 1) {
      cocos2d::Ref::release((Ref *)*puVar3);
      puVar1 = local_80;
    }
    local_78 = local_80;
    if (puVar1 != (undefined8 *)0x0) {
      local_78 = puVar1;
      operator_delete(puVar1);
    }
    fVar13 = *(float *)(param_2 + 0x74);
  }
  if ((fVar13 < 0.3) && (lVar9 = *(long *)(this + 0x50), 0 < lVar9 - *(long *)(this + 0x48))) {
    this_01 = operator_new(0xe0,(nothrow_t *)&std::nothrow);
    if (this_01 != (FrameData *)0x0) {
      FrameData::FrameData(this_01);
      lVar9 = *(long *)(this + 0x50);
    }
    (**(code **)(*(long *)this_01 + 0x10))(this_01,*(undefined8 *)(lVar9 + -8));
    MovementBoneData::addFrameData(this,this_01);
    cocos2d::Ref::release((Ref *)this_01);
    *(int *)(this_01 + 0x58) = (int)*(float *)(this + 0x2c);
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

