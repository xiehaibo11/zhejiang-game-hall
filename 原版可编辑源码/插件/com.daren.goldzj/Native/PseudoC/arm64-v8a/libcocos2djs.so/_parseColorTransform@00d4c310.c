
/* dragonBones::JSONDataParser::_parseColorTransform(rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > const&, dragonBones::ColorTransform&)
    */

void __thiscall
dragonBones::JSONDataParser::_parseColorTransform
          (JSONDataParser *this,GenericValue *param_1,ColorTransform *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = _getNumber(param_1,DataParser::ALPHA_MULTIPLIER,100);
  *(float *)param_2 = (float)iVar1 * 0.01;
  iVar1 = _getNumber(param_1,DataParser::RED_MULTIPLIER,100);
  *(float *)(param_2 + 4) = (float)iVar1 * 0.01;
  iVar1 = _getNumber(param_1,DataParser::GREEN_MULTIPLIER,100);
  *(float *)(param_2 + 8) = (float)iVar1 * 0.01;
  iVar1 = _getNumber(param_1,DataParser::BLUE_MULTIPLIER,100);
  *(float *)(param_2 + 0xc) = (float)iVar1 * 0.01;
  uVar2 = _getNumber(param_1,DataParser::ALPHA_OFFSET,0);
  *(undefined4 *)(param_2 + 0x10) = uVar2;
  uVar2 = _getNumber(param_1,DataParser::RED_OFFSET,0);
  *(undefined4 *)(param_2 + 0x14) = uVar2;
  uVar2 = _getNumber(param_1,DataParser::GREEN_OFFSET,0);
  *(undefined4 *)(param_2 + 0x18) = uVar2;
  uVar2 = _getNumber(param_1,DataParser::BLUE_OFFSET,0);
  *(undefined4 *)(param_2 + 0x1c) = uVar2;
  return;
}

