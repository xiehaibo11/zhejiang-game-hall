
/* cocostudio::SceneReader::createObject(rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > const&, cocos2d::Node*,
   cocostudio::SceneReader::AttachComponentType) */

Node * __thiscall
cocostudio::SceneReader::createObject
          (SceneReader *this,GenericValue *param_1,long *param_2,int param_4)

{
  int *__s2;
  uint uVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  DictionaryHelper *pDVar5;
  char *pcVar6;
  SceneReader *this_00;
  GenericValue *pGVar7;
  Component *pCVar8;
  undefined8 *puVar9;
  ulong uVar10;
  Component *pCVar11;
  long *plVar12;
  undefined8 *puVar13;
  Ref *this_01;
  int *piVar14;
  int *piVar15;
  Component *pCVar16;
  long lVar17;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_b0 [16];
  void *local_a0;
  Component *local_98;
  undefined8 *local_90;
  undefined8 *local_88;
  undefined8 *puStack_80;
  undefined8 local_78;
  Component *local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  pDVar5 = (DictionaryHelper *)DictionaryHelper::getInstance();
  pcVar6 = (char *)DictionaryHelper::getStringValue_json(pDVar5,param_1,"classname",(char *)0x0);
  iVar3 = strcmp(pcVar6,"CCNode");
  this_01 = (Ref *)0x0;
  if (iVar3 == 0) {
    if (param_2 == (long *)0x0) {
      this_01 = (Ref *)cocos2d::Node::create();
    }
    else {
      this_01 = (Ref *)0x0;
    }
    local_88 = (undefined8 *)0x0;
    puStack_80 = (undefined8 *)0x0;
    local_90 = (undefined8 *)0x0;
    pDVar5 = (DictionaryHelper *)DictionaryHelper::getInstance();
    this_00 = (SceneReader *)DictionaryHelper::getArrayCount_json(pDVar5,param_1,"components",0);
    iVar3 = (int)this_00;
    if (iVar3 < 1) {
      pCVar16 = (Component *)0x0;
    }
    else {
      pCVar16 = (Component *)0x0;
      iVar4 = 0;
      do {
        pDVar5 = (DictionaryHelper *)DictionaryHelper::getInstance();
        pGVar7 = (GenericValue *)
                 DictionaryHelper::getSubDictionary_json(pDVar5,param_1,"components",iVar4);
        pDVar5 = (DictionaryHelper *)DictionaryHelper::getInstance();
        this_00 = (SceneReader *)DictionaryHelper::checkObjectExist_json(pDVar5,pGVar7);
        if (((ulong)this_00 & 1) == 0) break;
        pDVar5 = (DictionaryHelper *)DictionaryHelper::getInstance();
        pcVar6 = (char *)DictionaryHelper::getStringValue_json
                                   (pDVar5,pGVar7,"classname",(char *)0x0);
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string<decltype(nullptr)>(local_b0,pcVar6);
        pCVar8 = (Component *)createComponent(this,local_b0);
        if (((byte)local_b0[0] & 1) != 0) {
          operator_delete(local_a0);
        }
        local_98 = pCVar8;
        puVar9 = operator_new(0x18,(nothrow_t *)&std::nothrow);
        pCVar11 = pCVar16;
        if (puVar9 == (undefined8 *)0x0) {
          puVar13 = (undefined8 *)0x0;
          if (pCVar8 == (Component *)0x0) goto LAB_00c67a34;
LAB_00c679c4:
          puVar13[1] = 0;
          puVar13[2] = 0;
          *puVar13 = pGVar7;
          uVar10 = (**(code **)(*(long *)pCVar8 + 0x38))(pCVar8,puVar9);
          pCVar8 = local_98;
          if (((uVar10 & 1) != 0) &&
             ((local_98 == (Component *)0x0 ||
              (pCVar11 = (Component *)
                         __dynamic_cast(local_98,&cocos2d::Component::typeinfo,&ComRender::typeinfo,
                                        0), pCVar11 == (Component *)0x0)))) {
            if (local_88 == puStack_80) {
              std::__ndk1::vector<cocos2d::Component*,std::__ndk1::allocator<cocos2d::Component*>>::
              __push_back_slow_path<cocos2d::Component*const&>
                        ((vector<cocos2d::Component*,std::__ndk1::allocator<cocos2d::Component*>> *)
                         &local_90,&local_98);
              pCVar11 = pCVar16;
            }
            else {
              *local_88 = pCVar8;
              pCVar11 = pCVar16;
              local_88 = local_88 + 1;
            }
          }
LAB_00c67a58:
          pCVar16 = pCVar11;
          operator_delete(puVar9);
          plVar12 = *(long **)(this + 0x30);
          this_00 = (SceneReader *)0x0;
          if (plVar12 != (long *)0x0) {
LAB_00c67a6c:
            local_78 = 0;
            local_70 = local_98;
            this_00 = (SceneReader *)(**(code **)(*plVar12 + 0x30))(plVar12,&local_70,&local_78);
          }
        }
        else {
          *puVar9 = 0;
          puVar9[1] = 0;
          puVar9[2] = 0;
          puVar13 = puVar9;
          if (pCVar8 != (Component *)0x0) goto LAB_00c679c4;
LAB_00c67a34:
          if (puVar13 != (undefined8 *)0x0) goto LAB_00c67a58;
          plVar12 = *(long **)(this + 0x30);
          if (plVar12 != (long *)0x0) goto LAB_00c67a6c;
          this_00 = (SceneReader *)0x0;
        }
        iVar4 = iVar4 + 1;
      } while (iVar3 != iVar4);
    }
    if (param_2 != (long *)0x0) {
      if ((param_4 == 0) || (pCVar16 == (Component *)0x0)) {
        this_01 = (Ref *)cocos2d::Node::create();
        if (pCVar16 != (Component *)0x0) {
          local_70 = pCVar16;
          if (local_88 < puStack_80) {
            *local_88 = pCVar16;
            local_88 = local_88 + 1;
          }
          else {
            std::__ndk1::vector<cocos2d::Component*,std::__ndk1::allocator<cocos2d::Component*>>::
            __push_back_slow_path<cocos2d::Component*>
                      ((vector<cocos2d::Component*,std::__ndk1::allocator<cocos2d::Component*>> *)
                       &local_90,&local_70);
          }
        }
      }
      else {
        this_01 = (Ref *)(**(code **)(*(long *)pCVar16 + 0x60))(pCVar16);
        cocos2d::Ref::retain(this_01);
        (**(code **)(*(long *)pCVar16 + 0x68))(pCVar16,0);
      }
      this_00 = (SceneReader *)(**(code **)(*param_2 + 0x208))(param_2,this_01);
    }
    setPropertyFromJsonDict(this_00,param_1,(Node *)this_01);
    puVar9 = local_90;
    if (local_90 != local_88) {
      do {
        (**(code **)(*(long *)this_01 + 0x460))(this_01,*puVar9);
        puVar9 = puVar9 + 1;
      } while (puVar9 != local_88);
    }
    pDVar5 = (DictionaryHelper *)DictionaryHelper::getInstance();
    iVar3 = DictionaryHelper::getArrayCount_json(pDVar5,param_1,"gameobjects",0);
    if (0 < iVar3) {
      iVar4 = 0;
      do {
        pDVar5 = (DictionaryHelper *)DictionaryHelper::getInstance();
        pGVar7 = (GenericValue *)
                 DictionaryHelper::getSubDictionary_json(pDVar5,param_1,"gameobjects",iVar4);
        pDVar5 = (DictionaryHelper *)DictionaryHelper::getInstance();
        uVar10 = DictionaryHelper::checkObjectExist_json(pDVar5,pGVar7);
        if ((uVar10 & 1) == 0) break;
        createObject(this,pGVar7,this_01,param_4);
        iVar4 = iVar4 + 1;
      } while (iVar3 != iVar4);
    }
    piVar14 = *(int **)(param_1 + 8);
    uVar1 = *(uint *)param_1;
    piVar15 = piVar14 + (ulong)uVar1 * 0xc;
    if (uVar1 == 0) {
LAB_00c67c48:
      if (piVar15 != piVar14) {
        pDVar5 = (DictionaryHelper *)DictionaryHelper::getInstance();
        pGVar7 = (GenericValue *)
                 DictionaryHelper::getSubDictionary_json(pDVar5,param_1,"CanvasSize");
        pDVar5 = (DictionaryHelper *)DictionaryHelper::getInstance();
        uVar10 = DictionaryHelper::checkObjectExist_json(pDVar5,pGVar7);
        if ((uVar10 & 1) != 0) {
          pDVar5 = (DictionaryHelper *)DictionaryHelper::getInstance();
          iVar3 = DictionaryHelper::getIntValue_json(pDVar5,pGVar7,"_width",0);
          pDVar5 = (DictionaryHelper *)DictionaryHelper::getInstance();
          iVar4 = DictionaryHelper::getIntValue_json(pDVar5,pGVar7,"_height",0);
          cocos2d::Size::Size((Size *)&local_70,(float)iVar3,(float)iVar4);
          (**(code **)(*(long *)this_01 + 0x160))(this_01,&local_70);
        }
      }
    }
    else {
      lVar17 = (ulong)uVar1 * 0x30;
      do {
        iVar3 = *piVar14;
        if ((*(ushort *)((long)piVar14 + 0x16) & 0x1000) != 0) {
          iVar3 = 0x15 - *(char *)((long)piVar14 + 0x15);
        }
        if (iVar3 == 10) {
          __s2 = *(int **)(piVar14 + 2);
          if ((*(ushort *)((long)piVar14 + 0x16) & 0x1000) != 0) {
            __s2 = piVar14;
          }
          if ((__s2 == (int *)"CanvasSize") || (iVar3 = memcmp("CanvasSize",__s2,10), iVar3 == 0))
          goto LAB_00c67c48;
        }
        lVar17 = lVar17 + -0x30;
        piVar14 = piVar14 + 0xc;
      } while (lVar17 != 0);
    }
    if (local_90 != (undefined8 *)0x0) {
      local_88 = local_90;
      operator_delete(local_90);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return (Node *)this_01;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

