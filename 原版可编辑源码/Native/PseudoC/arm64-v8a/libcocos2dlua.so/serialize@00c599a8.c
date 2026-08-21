
/* cocostudio::ComAttribute::serialize(void*) */

uint __thiscall cocostudio::ComAttribute::serialize(ComAttribute *this,void *param_1)

{
  long lVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  DictionaryHelper *pDVar5;
  char *pcVar6;
  char *pcVar7;
  GenericValue *pGVar8;
  ulong uVar9;
  char *pcVar10;
  stExpCocoNode *this_00;
  char *__nptr;
  long *plVar11;
  CocoLoader *pCVar12;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_a0 [16];
  void *local_90;
  ulong local_88;
  undefined8 uStack_80;
  undefined1 *local_78;
  ulong local_70;
  undefined8 uStack_68;
  undefined1 *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if (param_1 == (void *)0x0) {
    uVar4 = 0;
    goto LAB_00c59b44;
  }
  pGVar8 = *(GenericValue **)param_1;
  lVar1 = *(long *)((long)param_1 + 8);
  pCVar12 = *(CocoLoader **)((long)param_1 + 0x10);
  uStack_68 = 0;
  local_60 = (undefined1 *)0x0;
  local_70 = 0;
  if (pGVar8 == (GenericValue *)0x0) {
    if (lVar1 != 0) {
      pcVar6 = (char *)stExpCocoNode::GetValue((stExpCocoNode *)(lVar1 + 0x10),pCVar12);
      if (pcVar6 != (char *)0x0) {
        pcVar7 = (char *)stExpCocoNode::GetValue((stExpCocoNode *)(lVar1 + 0x20),pCVar12);
        this_00 = (stExpCocoNode *)
                  stExpCocoNode::GetChildArray((stExpCocoNode *)(lVar1 + 0x30),pCVar12);
        if ((this_00 != (stExpCocoNode *)0x0) &&
           (pcVar10 = (char *)stExpCocoNode::GetValue(this_00,pCVar12), pcVar10 != (char *)0x0)) {
          __nptr = (char *)stExpCocoNode::GetValue(this_00 + 0x20,pCVar12);
          iVar3 = atoi(__nptr);
          goto joined_r0x00c59b2c;
        }
      }
      goto LAB_00c59b30;
    }
    pcVar6 = (char *)0x0;
    pcVar10 = (char *)0x0;
LAB_00c59b7c:
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_88,pcVar6);
    (**(code **)(*(long *)this + 0x20))(this,&local_88);
    if ((local_88 & 1) != 0) {
      operator_delete(local_78);
    }
    if (pcVar10 != (char *)0x0) {
LAB_00c59bb0:
      plVar11 = (long *)cocos2d::FileUtils::getInstance();
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_a0,pcVar10);
      (**(code **)(*plVar11 + 0x50))(&local_88,plVar11,local_a0);
      if ((local_70 & 1) != 0) {
        *local_60 = 0;
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
      local_78 = (undefined1 *)0x0;
      if (((byte)local_a0[0] & 1) != 0) {
        operator_delete(local_90);
      }
    }
    uVar4 = parse(this,(basic_string *)&local_70);
  }
  else {
    pDVar5 = (DictionaryHelper *)DictionaryHelper::getInstance();
    pcVar6 = (char *)DictionaryHelper::getStringValue_json(pDVar5,pGVar8,"classname",(char *)0x0);
    if (pcVar6 != (char *)0x0) {
      pDVar5 = (DictionaryHelper *)DictionaryHelper::getInstance();
      pcVar7 = (char *)DictionaryHelper::getStringValue_json(pDVar5,pGVar8,"name",(char *)0x0);
      pDVar5 = (DictionaryHelper *)DictionaryHelper::getInstance();
      pGVar8 = (GenericValue *)DictionaryHelper::getSubDictionary_json(pDVar5,pGVar8,"fileData");
      pDVar5 = (DictionaryHelper *)DictionaryHelper::getInstance();
      uVar9 = DictionaryHelper::checkObjectExist_json(pDVar5,pGVar8);
      if ((uVar9 & 1) != 0) {
        pDVar5 = (DictionaryHelper *)DictionaryHelper::getInstance();
        pcVar10 = (char *)DictionaryHelper::getStringValue_json(pDVar5,pGVar8,"path",(char *)0x0);
        if (pcVar10 != (char *)0x0) {
          pDVar5 = (DictionaryHelper *)DictionaryHelper::getInstance();
          iVar3 = DictionaryHelper::getIntValue_json(pDVar5,pGVar8,"resourceType",-1);
joined_r0x00c59b2c:
          if (iVar3 == 0) {
            if (pcVar7 == (char *)0x0) goto LAB_00c59b7c;
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            basic_string<decltype(nullptr)>
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)&local_88,pcVar7);
            (**(code **)(*(long *)this + 0x20))(this,&local_88);
            if ((local_88 & 1) != 0) {
              operator_delete(local_78);
            }
            goto LAB_00c59bb0;
          }
        }
      }
    }
LAB_00c59b30:
    uVar4 = 0;
  }
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
LAB_00c59b44:
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4 & 1;
}

