
/* cocosbuilder::ParticleSystemQuadLoader::onHandlePropTypeFloatVar(cocos2d::Node*, cocos2d::Node*,
   char const*, float*, cocosbuilder::CCBReader*) */

void cocosbuilder::ParticleSystemQuadLoader::onHandlePropTypeFloatVar
               (Node *param_1,Node *param_2,char *param_3,float *param_4,CCBReader *param_5)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uVar2;
  
  iVar1 = strcmp((char *)param_4,"life");
  if (iVar1 == 0) {
    *(undefined4 *)(param_2 + 0x490) = *(undefined4 *)param_5;
    *(undefined4 *)(param_2 + 0x494) = *(undefined4 *)(param_5 + 4);
  }
  else {
    iVar1 = strcmp((char *)param_4,"startSize");
    if (iVar1 == 0) {
      *(undefined4 *)(param_2 + 0x4a4) = *(undefined4 *)param_5;
      *(undefined4 *)(param_2 + 0x4a8) = *(undefined4 *)(param_5 + 4);
    }
    else {
      iVar1 = strcmp((char *)param_4,"endSize");
      if (iVar1 == 0) {
        *(undefined4 *)(param_2 + 0x4ac) = *(undefined4 *)param_5;
        *(undefined4 *)(param_2 + 0x4b0) = *(undefined4 *)(param_5 + 4);
      }
      else {
        iVar1 = strcmp((char *)param_4,"startSpin");
        if (iVar1 == 0) {
          *(undefined4 *)(param_2 + 0x4f4) = *(undefined4 *)param_5;
          *(undefined4 *)(param_2 + 0x4f8) = *(undefined4 *)(param_5 + 4);
        }
        else {
          iVar1 = strcmp((char *)param_4,"endSpin");
          if (iVar1 == 0) {
            *(undefined4 *)(param_2 + 0x4fc) = *(undefined4 *)param_5;
            *(undefined4 *)(param_2 + 0x500) = *(undefined4 *)(param_5 + 4);
          }
          else {
            iVar1 = strcmp((char *)param_4,"angle");
            if (iVar1 != 0) {
              iVar1 = strcmp((char *)param_4,"speed");
              if (iVar1 == 0) {
                (**(code **)(*(long *)param_2 + 0x570))(*(undefined4 *)param_5,param_2);
                uVar2 = *(undefined4 *)(param_5 + 4);
                UNRECOVERED_JUMPTABLE = *(code **)(*(long *)param_2 + 0x580);
              }
              else {
                iVar1 = strcmp((char *)param_4,"tangentialAccel");
                if (iVar1 == 0) {
                  (**(code **)(*(long *)param_2 + 0x590))(*(undefined4 *)param_5,param_2);
                  uVar2 = *(undefined4 *)(param_5 + 4);
                  UNRECOVERED_JUMPTABLE = *(code **)(*(long *)param_2 + 0x5a0);
                }
                else {
                  iVar1 = strcmp((char *)param_4,"radialAccel");
                  if (iVar1 == 0) {
                    (**(code **)(*(long *)param_2 + 0x5b0))(*(undefined4 *)param_5,param_2);
                    uVar2 = *(undefined4 *)(param_5 + 4);
                    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)param_2 + 0x5c0);
                  }
                  else {
                    iVar1 = strcmp((char *)param_4,"startRadius");
                    if (iVar1 == 0) {
                      (**(code **)(*(long *)param_2 + 0x5e0))(*(undefined4 *)param_5,param_2);
                      uVar2 = *(undefined4 *)(param_5 + 4);
                      UNRECOVERED_JUMPTABLE = *(code **)(*(long *)param_2 + 0x5f0);
                    }
                    else {
                      iVar1 = strcmp((char *)param_4,"endRadius");
                      if (iVar1 == 0) {
                        (**(code **)(*(long *)param_2 + 0x600))(*(undefined4 *)param_5,param_2);
                        uVar2 = *(undefined4 *)(param_5 + 4);
                        UNRECOVERED_JUMPTABLE = *(code **)(*(long *)param_2 + 0x610);
                      }
                      else {
                        iVar1 = strcmp((char *)param_4,"rotatePerSecond");
                        if (iVar1 != 0) {
                          NodeLoader::onHandlePropTypeFloatVar
                                    (param_1,param_2,param_3,param_4,param_5);
                          return;
                        }
                        (**(code **)(*(long *)param_2 + 0x620))(*(undefined4 *)param_5,param_2);
                        uVar2 = *(undefined4 *)(param_5 + 4);
                        UNRECOVERED_JUMPTABLE = *(code **)(*(long *)param_2 + 0x630);
                      }
                    }
                  }
                }
              }
                    /* WARNING: Could not recover jumptable at 0x00cfe47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*UNRECOVERED_JUMPTABLE)(uVar2,param_2);
              return;
            }
            *(undefined4 *)(param_2 + 0x498) = *(undefined4 *)param_5;
            *(undefined4 *)(param_2 + 0x49c) = *(undefined4 *)(param_5 + 4);
          }
        }
      }
    }
  }
  return;
}

