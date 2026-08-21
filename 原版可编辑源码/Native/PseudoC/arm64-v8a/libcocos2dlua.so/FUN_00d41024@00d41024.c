
void FUN_00d41024(Sprite3D *param_1)

{
  byte bVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 8);
  bVar1 = cocos2d::Sprite3D::loadFromFile
                    (param_1,(basic_string *)(lVar2 + 0x410),*(NodeDatas **)(lVar2 + 0x450),
                     *(MeshDatas **)(lVar2 + 0x440),*(MaterialDatas **)(lVar2 + 0x448));
  *(byte *)(*(long *)(param_1 + 8) + 0x408) = bVar1 & 1;
  return;
}

