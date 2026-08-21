
/* cocos2d::Sprite3DMaterial::createBuiltInMaterial(cocos2d::Sprite3DMaterial::MaterialType, bool)
    */

undefined8 cocos2d::Sprite3DMaterial::createBuiltInMaterial(undefined4 param_1,ulong param_2)

{
  undefined8 uVar1;
  long *plVar2;
  long *plVar3;
  
  if (_diffuseMaterial == 0) {
    createBuiltInMaterial();
  }
  switch(param_1) {
  case 0:
    plVar2 = &_unLitMaterialSkin;
    plVar3 = &_unLitMaterial;
    goto LAB_00d33ac8;
  case 1:
    plVar2 = _unLitNoTexMaterial;
    if (_unLitNoTexMaterial == (long *)0x0) {
      return 0;
    }
    goto LAB_00d33ad8;
  default:
    goto switchD_00d33a4c_caseD_2;
  case 3:
    plVar2 = &_diffuseMaterialSkin;
    if ((param_2 & 1) == 0) {
      plVar2 = &_diffuseMaterial;
    }
    plVar2 = (long *)*plVar2;
    break;
  case 4:
    plVar2 = _diffuseNoTexMaterial;
    break;
  case 5:
    plVar2 = &_bumpedDiffuseMaterialSkin;
    plVar3 = &_bumpedDiffuseMaterial;
LAB_00d33ac8:
    if ((param_2 & 1) == 0) {
      plVar2 = plVar3;
    }
    plVar2 = (long *)*plVar2;
  }
  if (plVar2 != (long *)0x0) {
LAB_00d33ad8:
                    /* WARNING: Could not recover jumptable at 0x00d33aec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*plVar2 + 0x10))();
    return uVar1;
  }
switchD_00d33a4c_caseD_2:
  return 0;
}

