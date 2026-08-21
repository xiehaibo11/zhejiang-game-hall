
/* cocos2d::Sprite3DMaterial::releaseBuiltInMaterial() */

void cocos2d::Sprite3DMaterial::releaseBuiltInMaterial(void)

{
  if (_unLitMaterial != (Ref *)0x0) {
    Ref::release(_unLitMaterial);
    _unLitMaterial = (Ref *)0x0;
  }
  if (_unLitMaterialSkin != (Ref *)0x0) {
    Ref::release(_unLitMaterialSkin);
    _unLitMaterialSkin = (Ref *)0x0;
  }
  if (_unLitNoTexMaterial != (Ref *)0x0) {
    Ref::release(_unLitNoTexMaterial);
    _unLitNoTexMaterial = (Ref *)0x0;
  }
  if (_vertexLitMaterial != (Ref *)0x0) {
    Ref::release(_vertexLitMaterial);
    _vertexLitMaterial = (Ref *)0x0;
  }
  if (_diffuseMaterial != (Ref *)0x0) {
    Ref::release(_diffuseMaterial);
    _diffuseMaterial = (Ref *)0x0;
  }
  if (_diffuseNoTexMaterial != (Ref *)0x0) {
    Ref::release(_diffuseNoTexMaterial);
    _diffuseNoTexMaterial = (Ref *)0x0;
  }
  if (_bumpedDiffuseMaterial != (Ref *)0x0) {
    Ref::release(_bumpedDiffuseMaterial);
    _bumpedDiffuseMaterial = (Ref *)0x0;
  }
  if (_vertexLitMaterialSkin != (Ref *)0x0) {
    Ref::release(_vertexLitMaterialSkin);
    _vertexLitMaterialSkin = (Ref *)0x0;
  }
  if (_diffuseMaterialSkin != (Ref *)0x0) {
    Ref::release(_diffuseMaterialSkin);
    _diffuseMaterialSkin = (Ref *)0x0;
  }
  if (_bumpedDiffuseMaterialSkin != (Ref *)0x0) {
    Ref::release(_bumpedDiffuseMaterialSkin);
    _bumpedDiffuseMaterialSkin = (Ref *)0x0;
  }
  return;
}

