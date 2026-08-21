
/* cocostudio::DataReaderHelper::decodeContour(tinyxml2::XMLElement*,
   cocostudio::DataReaderHelper::_DataInfo*) */

ContourData * cocostudio::DataReaderHelper::decodeContour(XMLElement *param_1,_DataInfo *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ContourData *this;
  XMLNode *this_00;
  XMLAttribute *pXVar3;
  undefined8 local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  this = operator_new(0x40,(nothrow_t *)&std::nothrow);
  if (this != (ContourData *)0x0) {
    ContourData::ContourData(this);
  }
  (**(code **)(*(long *)this + 0x10))(this);
  this_00 = (XMLNode *)tinyxml2::XMLNode::FirstChildElement((XMLNode *)param_1,"con_vt");
  if (this_00 != (XMLNode *)0x0) {
    do {
      local_60 = 0;
      pXVar3 = (XMLAttribute *)tinyxml2::XMLElement::FindAttribute((XMLElement *)this_00,"x");
      if (pXVar3 != (XMLAttribute *)0x0) {
        tinyxml2::XMLAttribute::QueryFloatValue(pXVar3,(float *)&local_60);
      }
      pXVar3 = (XMLAttribute *)tinyxml2::XMLElement::FindAttribute((XMLElement *)this_00,"y");
      if (pXVar3 != (XMLAttribute *)0x0) {
        tinyxml2::XMLAttribute::QueryFloatValue(pXVar3,(float *)((ulong)&local_60 | 4));
      }
      local_60 = CONCAT44(-local_60._4_4_,(float)local_60);
      puVar1 = *(undefined8 **)(this + 0x30);
      if (puVar1 == *(undefined8 **)(this + 0x38)) {
        std::__ndk1::vector<cocos2d::Vec2,std::__ndk1::allocator<cocos2d::Vec2>>::
        __push_back_slow_path<cocos2d::Vec2_const&>
                  ((vector<cocos2d::Vec2,std::__ndk1::allocator<cocos2d::Vec2>> *)(this + 0x28),
                   (Vec2 *)&local_60);
      }
      else {
        *puVar1 = local_60;
        *(undefined8 **)(this + 0x30) = puVar1 + 1;
      }
      this_00 = (XMLNode *)tinyxml2::XMLNode::NextSiblingElement(this_00,"con_vt");
    } while (this_00 != (XMLNode *)0x0);
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

