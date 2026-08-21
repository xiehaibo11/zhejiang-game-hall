
/* cocos2d::PUParticleSystem3DTranslator::translate(cocos2d::PUScriptCompiler*,
   cocos2d::PUAbstractNode*) */

void __thiscall
cocos2d::PUParticleSystem3DTranslator::translate
          (PUParticleSystem3DTranslator *this,PUScriptCompiler *param_1,PUAbstractNode *param_2)

{
  size_t __n;
  size_t sVar1;
  PUAbstractNode PVar2;
  long lVar3;
  int iVar4;
  long *plVar5;
  PUAbstractNode *pPVar6;
  PUAbstractNode *pPVar7;
  ulong uVar8;
  PUAbstractNode *pPVar9;
  PUAbstractNode *pPVar10;
  ulong uVar11;
  float local_78;
  undefined4 local_74;
  undefined4 local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  if (param_2 == (PUAbstractNode *)0x0) {
    __cxa_bad_typeid();
    goto LAB_00e49f34;
  }
  if (*(char **)(*(long *)(*(long *)param_2 + -8) + 8) == "N7cocos2d20PUObjectAbstractNodeE") {
    if (((byte)param_2[0x60] & 1) == 0) {
      if ((byte)param_2[0x60] >> 1 != 0) {
LAB_00e49c2c:
        plVar5 = *(long **)(this + 8);
        *(long **)(param_2 + 0x30) = plVar5;
        (**(code **)(*plVar5 + 0x2d0))();
        for (pPVar10 = *(PUAbstractNode **)(param_2 + 0xb8); pPVar10 != param_2 + 0xb0;
            pPVar10 = *(PUAbstractNode **)(pPVar10 + 8)) {
          pPVar9 = *(PUAbstractNode **)(pPVar10 + 0x10);
          if (*(int *)(pPVar9 + 0x24) == 2) {
            PUScriptTranslator::processNode((PUScriptTranslator *)this,param_1,pPVar9);
          }
          else if (*(int *)(pPVar9 + 0x24) == 3) {
            PVar2 = pPVar9[0x38];
            uVar11 = (ulong)((byte)PVar2 >> 1);
            __n = uVar11;
            if (((byte)PVar2 & 1) != 0) {
              __n = *(size_t *)(pPVar9 + 0x40);
            }
            sVar1 = (ulong)(token[0x510] >> 1);
            if ((token[0x510] & 1) != 0) {
              sVar1 = token._1304_8_;
            }
            if (__n == sVar1) {
              pPVar7 = *(PUAbstractNode **)(pPVar9 + 0x48);
              if (((byte)PVar2 & 1) == 0) {
                pPVar7 = pPVar9 + 0x39;
              }
              pPVar6 = (PUAbstractNode *)(token + 0x511);
              if ((token[0x510] & 1) != 0) {
                pPVar6 = (PUAbstractNode *)token._1312_8_;
              }
              if (((byte)PVar2 & 1) == 0) {
                if (__n != 0) {
                  pPVar7 = pPVar9 + 0x39;
                  uVar8 = uVar11;
                  do {
                    if (*pPVar7 != *pPVar6) goto LAB_00e49d38;
                    uVar8 = uVar8 - 1;
                    pPVar7 = pPVar7 + 1;
                    pPVar6 = pPVar6 + 1;
                  } while (uVar8 != 0);
                }
              }
              else if ((__n != 0) && (iVar4 = memcmp(pPVar7,pPVar6,__n), iVar4 != 0))
              goto LAB_00e49d38;
              uVar11 = PUScriptTranslator::passValidateProperty
                                 ((PUScriptTranslator *)this,param_1,pPVar9,0x17895a0,6);
              if ((uVar11 & 1) != 0) {
                Vec3::Vec3((Vec3 *)&local_78);
                uVar11 = PUScriptTranslator::getVector3
                                   ((PUScriptTranslator *)this,*(undefined8 *)(pPVar9 + 0x60),
                                    pPVar9 + 0x58,&local_78,3);
                if ((uVar11 & 1) != 0) {
                  (**(code **)(**(long **)(this + 8) + 0x50))(local_78);
                  (**(code **)(**(long **)(this + 8) + 0x60))(local_74);
                  (**(code **)(**(long **)(this + 8) + 0x70))(local_70);
                }
              }
            }
            else {
LAB_00e49d38:
              sVar1 = (ulong)(token[0x528] >> 1);
              if ((token[0x528] & 1) != 0) {
                sVar1 = token._1328_8_;
              }
              if (__n == sVar1) {
                pPVar7 = *(PUAbstractNode **)(pPVar9 + 0x48);
                if (((byte)PVar2 & 1) == 0) {
                  pPVar7 = pPVar9 + 0x39;
                }
                pPVar6 = (PUAbstractNode *)(token + 0x529);
                if ((token[0x528] & 1) != 0) {
                  pPVar6 = (PUAbstractNode *)token._1336_8_;
                }
                if (((byte)PVar2 & 1) == 0) {
                  if (__n != 0) {
                    pPVar7 = pPVar9 + 0x39;
                    uVar8 = uVar11;
                    do {
                      if (*pPVar7 != *pPVar6) goto LAB_00e49e34;
                      uVar8 = uVar8 - 1;
                      pPVar7 = pPVar7 + 1;
                      pPVar6 = pPVar6 + 1;
                    } while (uVar8 != 0);
                  }
                }
                else if ((__n != 0) && (iVar4 = memcmp(pPVar7,pPVar6,__n), iVar4 != 0))
                goto LAB_00e49e34;
                uVar11 = PUScriptTranslator::passValidateProperty
                                   ((PUScriptTranslator *)this,param_1,pPVar9,0x17894f8,0);
                if ((uVar11 & 1) != 0) {
                  local_78 = 0.0;
                  uVar11 = PUScriptTranslator::getFloat
                                     (*(PUAbstractNode **)(*(long *)(pPVar9 + 0x60) + 0x10),
                                      &local_78);
                  if ((uVar11 & 1) != 0) {
                    *(float *)(*(long *)(this + 8) + 0x43c) = local_78;
                  }
                }
              }
              else {
LAB_00e49e34:
                sVar1 = (ulong)(token[0x2e8] >> 1);
                if ((token[0x2e8] & 1) != 0) {
                  sVar1 = token._752_8_;
                }
                if (__n == sVar1) {
                  pPVar7 = *(PUAbstractNode **)(pPVar9 + 0x48);
                  if (((byte)PVar2 & 1) == 0) {
                    pPVar7 = pPVar9 + 0x39;
                  }
                  pPVar6 = (PUAbstractNode *)(token + 0x2e9);
                  if ((token[0x2e8] & 1) != 0) {
                    pPVar6 = (PUAbstractNode *)token._760_8_;
                  }
                  if (((byte)PVar2 & 1) == 0) {
                    if (__n != 0) {
                      pPVar7 = pPVar9 + 0x39;
                      do {
                        if (*pPVar7 != *pPVar6) goto LAB_00e49c6c;
                        uVar11 = uVar11 - 1;
                        pPVar7 = pPVar7 + 1;
                        pPVar6 = pPVar6 + 1;
                      } while (uVar11 != 0);
                    }
                  }
                  else if ((__n != 0) && (iVar4 = memcmp(pPVar7,pPVar6,__n), iVar4 != 0))
                  goto LAB_00e49c6c;
                  uVar11 = PUScriptTranslator::passValidateProperty
                                     ((PUScriptTranslator *)this,param_1,pPVar9,0x1789378,1);
                  if (((uVar11 & 1) != 0) &&
                     (uVar11 = PUScriptTranslator::getBoolean
                                         (*(PUAbstractNode **)(*(long *)(pPVar9 + 0x60) + 0x10),
                                          (bool *)&local_78), (uVar11 & 1) != 0)) {
                    ParticleSystem3D::setKeepLocal
                              (*(ParticleSystem3D **)(this + 8),(bool)local_78._0_1_);
                  }
                }
              }
            }
          }
          else {
            PUScriptTranslator::errorUnexpectedToken
                      ((PUScriptCompiler *)this,(PUAbstractNode *)param_1);
          }
LAB_00e49c6c:
        }
      }
    }
    else if (*(long *)(param_2 + 0x68) != 0) goto LAB_00e49c2c;
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
LAB_00e49f34:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

