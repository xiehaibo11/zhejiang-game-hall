
/* cocostudio::WidgetPropertiesReader0250::widgetFromJsonDictionary(rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > const&) */

long * __thiscall
cocostudio::WidgetPropertiesReader0250::widgetFromJsonDictionary
          (WidgetPropertiesReader0250 *this,GenericValue *param_1)

{
  int iVar1;
  DictionaryHelper *pDVar2;
  char *__s1;
  undefined8 uVar3;
  long lVar4;
  code *pcVar5;
  long *plVar6;
  int iVar7;
  
  pDVar2 = (DictionaryHelper *)DictionaryHelper::getInstance();
  __s1 = (char *)DictionaryHelper::getStringValue_json(pDVar2,param_1,"classname",(char *)0x0);
  pDVar2 = (DictionaryHelper *)DictionaryHelper::getInstance();
  uVar3 = DictionaryHelper::getSubDictionary_json(pDVar2,param_1,"options");
  plVar6 = (long *)0x0;
  if (__s1 == (char *)0x0) goto LAB_00c61dcc;
  iVar1 = strcmp(__s1,"Button");
  if (iVar1 == 0) {
LAB_00c61d5c:
    plVar6 = (long *)cocos2d::ui::Button::create();
    pcVar5 = *(code **)(*(long *)this + 0x58);
  }
  else {
    iVar1 = strcmp(__s1,"CheckBox");
    if (iVar1 == 0) {
      plVar6 = (long *)cocos2d::ui::CheckBox::create();
      pcVar5 = *(code **)(*(long *)this + 0x60);
    }
    else {
      iVar1 = strcmp(__s1,"Label");
      if (iVar1 == 0) {
LAB_00c61d7c:
        plVar6 = (long *)cocos2d::ui::Text::create();
        pcVar5 = *(code **)(*(long *)this + 0x70);
      }
      else {
        iVar1 = strcmp(__s1,"LabelAtlas");
        if (iVar1 == 0) {
          plVar6 = (long *)cocos2d::ui::TextAtlas::create();
          pcVar5 = *(code **)(*(long *)this + 0x78);
        }
        else {
          iVar1 = strcmp(__s1,"LoadingBar");
          if (iVar1 == 0) {
            plVar6 = (long *)cocos2d::ui::LoadingBar::create();
            pcVar5 = *(code **)(*(long *)this + 0x88);
          }
          else {
            iVar1 = strcmp(__s1,"ScrollView");
            if (iVar1 == 0) {
LAB_00c61dac:
              plVar6 = (long *)cocos2d::ui::ScrollView::create();
              pcVar5 = *(code **)(*(long *)this + 0xa8);
            }
            else {
              iVar1 = strcmp(__s1,"TextArea");
              if (iVar1 == 0) goto LAB_00c61d7c;
              iVar1 = strcmp(__s1,"TextButton");
              if (iVar1 == 0) goto LAB_00c61d5c;
              iVar1 = strcmp(__s1,"TextField");
              if (iVar1 == 0) {
                plVar6 = (long *)cocos2d::ui::TextField::create();
                pcVar5 = *(code **)(*(long *)this + 0x98);
              }
              else {
                iVar1 = strcmp(__s1,"ImageView");
                if (iVar1 == 0) {
                  plVar6 = (long *)cocos2d::ui::ImageView::create();
                  pcVar5 = *(code **)(*(long *)this + 0x68);
                }
                else {
                  iVar1 = strcmp(__s1,"Panel");
                  if (iVar1 == 0) {
                    plVar6 = (long *)cocos2d::ui::Layout::create();
                    pcVar5 = *(code **)(*(long *)this + 0xa0);
                  }
                  else {
                    iVar1 = strcmp(__s1,"Slider");
                    if (iVar1 == 0) {
                      plVar6 = (long *)cocos2d::ui::Slider::create();
                      pcVar5 = *(code **)(*(long *)this + 0x90);
                    }
                    else {
                      iVar1 = strcmp(__s1,"LabelBMFont");
                      if (iVar1 != 0) {
                        iVar1 = strcmp(__s1,"DragPanel");
                        if (iVar1 != 0) {
                          plVar6 = (long *)0x0;
                          goto LAB_00c61dcc;
                        }
                        goto LAB_00c61dac;
                      }
                      plVar6 = (long *)cocos2d::ui::TextBMFont::create();
                      pcVar5 = *(code **)(*(long *)this + 0x80);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  (*pcVar5)(this,plVar6,uVar3);
LAB_00c61dcc:
  pDVar2 = (DictionaryHelper *)DictionaryHelper::getInstance();
  iVar1 = DictionaryHelper::getArrayCount_json(pDVar2,param_1,"children",0);
  if (0 < iVar1) {
    iVar7 = 0;
    do {
      pDVar2 = (DictionaryHelper *)DictionaryHelper::getInstance();
      uVar3 = DictionaryHelper::getDictionaryFromArray_json(pDVar2,param_1,"children",iVar7);
      lVar4 = (**(code **)(*(long *)this + 0x18))(this,uVar3);
      if (lVar4 != 0) {
        (**(code **)(*plVar6 + 0x208))(plVar6,lVar4);
      }
      iVar7 = iVar7 + 1;
    } while (iVar1 != iVar7);
  }
  return plVar6;
}

