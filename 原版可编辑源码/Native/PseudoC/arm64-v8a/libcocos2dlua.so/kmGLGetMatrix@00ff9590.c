
/* cocos2d::kmGLGetMatrix(unsigned int, cocos2d::Mat4*) */

void cocos2d::kmGLGetMatrix(uint param_1,Mat4 *param_2)

{
  Director *pDVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  if (param_1 == 0x1702) {
    pDVar1 = (Director *)Director::getInstance();
    uVar3 = 2;
  }
  else if (param_1 == 0x1701) {
    pDVar1 = (Director *)Director::getInstance();
    uVar3 = 1;
  }
  else {
    if (param_1 != 0x1700) {
      __android_log_print(6,"cocos2d-x assert","%s function:%s line:%d",
                          "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/deprecated/CCDeprecated.cpp"
                          ,"kmGLGetMatrix",0x110);
      return;
    }
    pDVar1 = (Director *)Director::getInstance();
    uVar3 = 0;
  }
  puVar2 = (undefined8 *)Director::getMatrix(pDVar1,uVar3);
  uVar3 = puVar2[4];
  uVar5 = puVar2[7];
  uVar4 = puVar2[6];
  uVar7 = puVar2[1];
  uVar6 = *puVar2;
  uVar9 = puVar2[3];
  uVar8 = puVar2[2];
  *(undefined8 *)(param_2 + 0x28) = puVar2[5];
  *(undefined8 *)(param_2 + 0x20) = uVar3;
  *(undefined8 *)(param_2 + 0x38) = uVar5;
  *(undefined8 *)(param_2 + 0x30) = uVar4;
  *(undefined8 *)(param_2 + 8) = uVar7;
  *(undefined8 *)param_2 = uVar6;
  *(undefined8 *)(param_2 + 0x18) = uVar9;
  *(undefined8 *)(param_2 + 0x10) = uVar8;
  return;
}

