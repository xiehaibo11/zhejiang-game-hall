
/* cocostudio::ComAudio::serialize(void*) */

undefined8 __thiscall cocostudio::ComAudio::serialize(ComAudio *this,void *param_1)

{
  GenericValue *pGVar1;
  long lVar2;
  char cVar3;
  long lVar4;
  ComAudio CVar5;
  int iVar6;
  DictionaryHelper *pDVar7;
  char *pcVar8;
  char *pcVar9;
  GenericValue *pGVar10;
  ulong uVar11;
  char *pcVar12;
  stExpCocoNode *this_00;
  char *pcVar13;
  long *plVar14;
  size_t sVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  CocoLoader *pCVar18;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_a0 [16];
  void *local_90;
  ulong local_88;
  undefined8 uStack_80;
  char *local_78;
  ulong local_70;
  undefined8 uStack_68;
  char *local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  if (param_1 == (void *)0x0) {
    uVar17 = 0;
    goto LAB_00c5a4a4;
  }
  pGVar1 = *(GenericValue **)param_1;
  lVar2 = *(long *)((long)param_1 + 8);
  pCVar18 = *(CocoLoader **)((long)param_1 + 0x10);
  uStack_68 = 0;
  local_60 = (char *)0x0;
  local_70 = 0;
  if (pGVar1 == (GenericValue *)0x0) {
    if (lVar2 == 0) {
      uVar17 = 0;
      pcVar8 = (char *)0x0;
      CVar5 = (ComAudio)0x0;
      pcVar12 = (char *)0x0;
LAB_00c5a2c8:
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_88,pcVar8);
      (**(code **)(*(long *)this + 0x20))(this,&local_88);
      if ((local_88 & 1) != 0) {
        operator_delete(local_78);
      }
      if (pcVar12 != (char *)0x0) {
LAB_00c5a2fc:
        cVar3 = *pcVar12;
joined_r0x00c5a300:
        if (cVar3 == '\0') goto joined_r0x00c5a498;
        plVar14 = (long *)cocos2d::FileUtils::getInstance();
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string<decltype(nullptr)>(local_a0,pcVar12);
        (**(code **)(*plVar14 + 0x50))(&local_88,plVar14,local_a0);
        if ((local_70 & 1) != 0) {
          *local_60 = '\0';
          uStack_68 = 0;
          if ((local_70 & 1) != 0) {
            operator_delete(local_60);
          }
        }
        uStack_68 = uStack_80;
        local_70 = local_88;
        local_88 = 0;
        uStack_80 = 0;
        local_60 = local_78;
        local_78 = (char *)0x0;
        if (((byte)local_a0[0] & 1) != 0) {
          operator_delete(local_90);
        }
      }
      iVar6 = strcmp(pcVar8,"CCBackgroundAudio");
      if (iVar6 == 0) {
        pcVar8 = (char *)((ulong)&local_70 | 1);
        if ((local_70 & 1) != 0) {
          pcVar8 = local_60;
        }
        puVar16 = (undefined8 *)CocosDenshion::SimpleAudioEngine::getInstance();
        (**(code **)*puVar16)(puVar16,pcVar8);
        sVar15 = strlen(pcVar8);
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (this + 0x58),pcVar8,sVar15);
        pcVar12 = local_60;
        uVar11 = local_70;
        this[0x70] = CVar5;
        plVar14 = (long *)CocosDenshion::SimpleAudioEngine::getInstance();
        pcVar8 = (char *)((ulong)&local_70 | 1);
        if ((uVar11 & 1) != 0) {
          pcVar8 = pcVar12;
        }
        (**(code **)(*plVar14 + 8))(plVar14,pcVar8,CVar5);
      }
      else {
        pcVar12 = DAT_01785920;
        if ((COMPONENT_NAME & 1) == 0) {
          pcVar12 = &DAT_01785911;
        }
        iVar6 = strcmp(pcVar8,pcVar12);
        if (iVar6 != 0) goto joined_r0x00c5a498;
        pcVar8 = (char *)((ulong)&local_70 | 1);
        if ((local_70 & 1) != 0) {
          pcVar8 = local_60;
        }
        plVar14 = (long *)CocosDenshion::SimpleAudioEngine::getInstance();
        (**(code **)(*plVar14 + 0x98))(plVar14,pcVar8);
        sVar15 = strlen(pcVar8);
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (this + 0x58),pcVar8,sVar15);
        this[0x70] = (ComAudio)0x0;
      }
      uVar17 = 1;
    }
    else {
      pcVar8 = (char *)stExpCocoNode::GetValue((stExpCocoNode *)(lVar2 + 0x10),pCVar18);
      if (pcVar8 == (char *)0x0) goto LAB_00c5a2a8;
      pcVar9 = (char *)stExpCocoNode::GetValue((stExpCocoNode *)(lVar2 + 0x20),pCVar18);
      this_00 = (stExpCocoNode *)
                stExpCocoNode::GetChildArray((stExpCocoNode *)(lVar2 + 0x40),pCVar18);
      uVar17 = 0;
      if (this_00 != (stExpCocoNode *)0x0) {
        pcVar12 = (char *)stExpCocoNode::GetValue(this_00,pCVar18);
        if (pcVar12 != (char *)0x0) {
          pcVar13 = (char *)stExpCocoNode::GetValue(this_00 + 0x20,pCVar18);
          iVar6 = atoi(pcVar13);
          if (iVar6 == 0) {
            pcVar13 = (char *)stExpCocoNode::GetValue((stExpCocoNode *)(lVar2 + 0x50),pCVar18);
            iVar6 = atoi(pcVar13);
            uVar17 = 1;
            goto LAB_00c5a4e8;
          }
          goto LAB_00c5a2a8;
        }
        uVar17 = 0;
      }
    }
  }
  else {
    pDVar7 = (DictionaryHelper *)DictionaryHelper::getInstance();
    pcVar8 = (char *)DictionaryHelper::getStringValue_json(pDVar7,pGVar1,"classname",(char *)0x0);
    if (pcVar8 != (char *)0x0) {
      pDVar7 = (DictionaryHelper *)DictionaryHelper::getInstance();
      pcVar9 = (char *)DictionaryHelper::getStringValue_json(pDVar7,pGVar1,"name",(char *)0x0);
      pDVar7 = (DictionaryHelper *)DictionaryHelper::getInstance();
      pGVar10 = (GenericValue *)DictionaryHelper::getSubDictionary_json(pDVar7,pGVar1,"fileData");
      pDVar7 = (DictionaryHelper *)DictionaryHelper::getInstance();
      uVar11 = DictionaryHelper::checkObjectExist_json(pDVar7,pGVar10);
      if ((uVar11 & 1) != 0) {
        pDVar7 = (DictionaryHelper *)DictionaryHelper::getInstance();
        pcVar12 = (char *)DictionaryHelper::getStringValue_json(pDVar7,pGVar10,"path",(char *)0x0);
        if (pcVar12 != (char *)0x0) {
          pDVar7 = (DictionaryHelper *)DictionaryHelper::getInstance();
          iVar6 = DictionaryHelper::getIntValue_json(pDVar7,pGVar10,"resourceType",-1);
          if (iVar6 == 0) {
            pDVar7 = (DictionaryHelper *)DictionaryHelper::getInstance();
            iVar6 = DictionaryHelper::getIntValue_json(pDVar7,pGVar1,"loop",0);
            uVar17 = 0;
LAB_00c5a4e8:
            CVar5 = (ComAudio)(iVar6 != 0);
            if (pcVar9 == (char *)0x0) goto LAB_00c5a2c8;
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            basic_string<decltype(nullptr)>
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)&local_88,pcVar9);
            (**(code **)(*(long *)this + 0x20))(this,&local_88);
            if ((local_88 & 1) == 0) goto LAB_00c5a2fc;
            operator_delete(local_78);
            cVar3 = *pcVar12;
            goto joined_r0x00c5a300;
          }
        }
      }
    }
LAB_00c5a2a8:
    uVar17 = 0;
  }
joined_r0x00c5a498:
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
LAB_00c5a4a4:
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return uVar17;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

