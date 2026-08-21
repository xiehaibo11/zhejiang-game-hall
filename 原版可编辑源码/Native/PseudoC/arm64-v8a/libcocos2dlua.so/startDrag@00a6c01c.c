
/* fairygui::DragDropManager::startDrag(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, cocos2d::Value const&,
   int) */

void fairygui::DragDropManager::startDrag(basic_string *param_1,Value *param_2,int param_3)

{
  long lVar1;
  GRoot *pGVar2;
  int in_w3;
  long lVar3;
  float fVar4;
  float in_s1;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if (*(long *)(*(long *)param_1 + 0xa0) == 0) {
    cocos2d::Value::operator=((Value *)(param_1 + 8),(Value *)(ulong)(uint)param_3);
    GLoader::setURL(*(GLoader **)param_1,(basic_string *)param_2);
    GComponent::addChild(GRoot::_inst,*(GObject **)param_1);
    pGVar2 = (GRoot *)GRoot::_inst;
    GRoot::getTouchPosition((GRoot *)GRoot::_inst,in_w3);
    fVar4 = (float)GObject::globalToLocal(pGVar2);
    GObject::setPosition(*(GObject **)param_1,fVar4,in_s1);
    GObject::startDrag((int)*(undefined8 *)param_1);
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

