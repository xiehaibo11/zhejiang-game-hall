
/* JSB_glGetParameterRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void JSB_glGetParameterRegistry(FunctionCallbackInfo *param_1)

{
  ulong uVar1;
  long lVar2;
  Value *pVVar3;
  byte bVar4;
  int iVar5;
  void *pvVar6;
  undefined8 *puVar7;
  Value *pVVar8;
  char *pcVar9;
  Object *pOVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long *plVar17;
  ulong uVar18;
  Isolate *pIVar19;
  Value *local_d0;
  Value *local_c8;
  undefined8 local_c0;
  HandleScope aHStack_b8 [24];
  Object *local_a0;
  undefined8 uStack_98;
  float local_8c;
  State aSStack_88 [40];
  Value local_60;
  undefined7 uStack_5f;
  undefined8 uStack_58;
  uint local_48;
  int local_44;
  int local_40;
  int local_3c;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar19 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_b8,pIVar19);
  local_d0 = (Value *)0x0;
  local_c8 = (Value *)0x0;
  local_c0 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_d0,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_d0);
  pvVar6 = (void *)se::internal::getPrivate(pIVar19,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_88,pvVar6,(vector *)&local_d0);
  puVar7 = (undefined8 *)se::State::args(aSStack_88);
  if ((int)((ulong)(puVar7[1] - (long)*puVar7) >> 4) < 1) {
    __android_log_print(6,"jswrapper",
                        "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp, 3871): Wrong argument count passed to gl.getParameter, expected: %d, get: %d\n"
                        ,1);
    __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                        "JSB_glGetParameter",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                        ,0x1058);
    goto LAB_008d0024;
  }
  iVar5 = se::Value::toInt32((Value *)*puVar7);
  pVVar8 = (Value *)se::State::rval(aSStack_88);
  if (0x80a9 < iVar5) {
    if (iVar5 < 0x8869) {
      if (iVar5 < 0x84e8) {
        if (iVar5 < 0x8192) {
          if (3 < iVar5 - 0x80c8U) {
            if (iVar5 == 0x80aa) goto switchD_008cfd58_caseD_b73;
            if (iVar5 == 0x80ab) goto switchD_008cfd58_caseD_b44;
            goto switchD_008cfd58_caseD_b47;
          }
        }
        else {
          if (iVar5 - 0x846dU < 2) goto switchD_008cfd58_caseD_b70;
          if (iVar5 != 0x8192) {
            iVar13 = 0x84e0;
            goto LAB_008d0004;
          }
        }
      }
      else if (iVar5 < 0x86a2) {
        if (iVar5 != 0x84e8) {
          if (iVar5 == 0x8514) {
LAB_008d01a0:
            glGetIntegerv(iVar5,&local_48);
            uVar14 = (ulong)local_48;
            if ((int)local_48 < 1) {
              se::Value::setNull(pVVar8);
            }
            else if (DAT_01d36e10 != 0) {
              uVar15 = DAT_01d36e10 - 1;
              if ((uVar15 & DAT_01d36e10) == 0) {
                uVar16 = uVar15 & uVar14;
              }
              else {
                uVar16 = uVar14;
                if (DAT_01d36e10 <= uVar14) {
                  uVar16 = 0;
                  if (DAT_01d36e10 != 0) {
                    uVar16 = uVar14 / DAT_01d36e10;
                  }
                  uVar16 = uVar14 - uVar16 * DAT_01d36e10;
                }
              }
              plVar17 = *(long **)(DAT_01d36e08 + uVar16 * 8);
              if (plVar17 != (long *)0x0) {
                do {
                  while( true ) {
                    plVar17 = (long *)*plVar17;
                    if (plVar17 == (long *)0x0) goto LAB_008d0024;
                    uVar18 = plVar17[1];
                    if (uVar18 != uVar14) break;
                    if (*(uint *)(plVar17 + 2) == local_48) {
                      lVar11 = se::NativePtrToObjectMap::find((void *)plVar17[3]);
                      lVar12 = se::NativePtrToObjectMap::end();
                      pVVar8 = (Value *)se::State::rval(aSStack_88);
                      if (lVar11 == lVar12) {
                        se::Value::setNull(pVVar8);
                      }
                      else {
                        se::Value::setObject(pVVar8,*(Object **)(lVar11 + 0x18),false);
                      }
                      goto LAB_008d0024;
                    }
                  }
                  if ((uVar15 & DAT_01d36e10) == 0) {
                    uVar18 = uVar18 & uVar15;
                  }
                  else if (DAT_01d36e10 <= uVar18) {
                    uVar1 = 0;
                    if (DAT_01d36e10 != 0) {
                      uVar1 = uVar18 / DAT_01d36e10;
                    }
                    uVar18 = uVar18 - uVar1 * DAT_01d36e10;
                  }
                } while (uVar18 == uVar16);
              }
            }
            goto LAB_008d0024;
          }
          iVar13 = 0x851c;
LAB_008d0004:
          if (iVar5 != iVar13) goto switchD_008cfd58_caseD_b47;
        }
      }
      else if (((0x3d < iVar5 - 0x8800U) ||
               ((1L << ((ulong)(iVar5 - 0x8800U) & 0x3f) & 0x200000000000000fU) == 0)) &&
              (iVar5 != 0x86a2)) {
        if (iVar5 == 0x86a3) {
          pOVar10 = (Object *)se::Object::createTypedArray(8,0,0);
          se::Value::setObject(pVVar8,pOVar10,true);
          goto LAB_008d0024;
        }
        goto switchD_008cfd58_caseD_b47;
      }
    }
    else {
      if (0x8ca2 < iVar5) {
        if (iVar5 < 0x8dfb) {
          switch(iVar5) {
          case 0x8ca3:
            goto switchD_008cfd58_caseD_b45;
          case 0x8ca4:
          case 0x8ca5:
            goto switchD_008cfd58_caseD_b93;
          case 0x8ca6:
            glGetIntegerv(0x8ca6,&local_48);
            uVar14 = (ulong)local_48;
            if ((int)local_48 < 1) {
              se::Value::setNull(pVVar8);
            }
            else if (DAT_01d36e88 != 0) {
              uVar15 = DAT_01d36e88 - 1;
              if ((uVar15 & DAT_01d36e88) == 0) {
                uVar16 = uVar15 & uVar14;
              }
              else {
                uVar16 = uVar14;
                if (DAT_01d36e88 <= uVar14) {
                  uVar16 = 0;
                  if (DAT_01d36e88 != 0) {
                    uVar16 = uVar14 / DAT_01d36e88;
                  }
                  uVar16 = uVar14 - uVar16 * DAT_01d36e88;
                }
              }
              plVar17 = *(long **)(DAT_01d36e80 + uVar16 * 8);
              if (plVar17 != (long *)0x0) {
                do {
                  while( true ) {
                    plVar17 = (long *)*plVar17;
                    if (plVar17 == (long *)0x0) goto LAB_008d0024;
                    uVar18 = plVar17[1];
                    if (uVar18 != uVar14) break;
                    if (*(uint *)(plVar17 + 2) == local_48) {
                      lVar11 = se::NativePtrToObjectMap::find((void *)plVar17[3]);
                      lVar12 = se::NativePtrToObjectMap::end();
                      pVVar8 = (Value *)se::State::rval(aSStack_88);
                      if (lVar11 == lVar12) {
                        se::Value::setNull(pVVar8);
                      }
                      else {
                        se::Value::setObject(pVVar8,*(Object **)(lVar11 + 0x18),false);
                      }
                      goto LAB_008d0024;
                    }
                  }
                  if ((uVar15 & DAT_01d36e88) == 0) {
                    uVar18 = uVar18 & uVar15;
                  }
                  else if (DAT_01d36e88 <= uVar18) {
                    uVar1 = 0;
                    if (DAT_01d36e88 != 0) {
                      uVar1 = uVar18 / DAT_01d36e88;
                    }
                    uVar18 = uVar18 - uVar1 * DAT_01d36e88;
                  }
                } while (uVar18 == uVar16);
              }
            }
            break;
          case 0x8ca7:
            glGetIntegerv(0x8ca7,&local_48);
            uVar14 = (ulong)local_48;
            if ((int)local_48 < 1) {
              se::Value::setNull(pVVar8);
            }
            else if (DAT_01d36e60 != 0) {
              uVar15 = DAT_01d36e60 - 1;
              if ((uVar15 & DAT_01d36e60) == 0) {
                uVar16 = uVar15 & uVar14;
              }
              else {
                uVar16 = uVar14;
                if (DAT_01d36e60 <= uVar14) {
                  uVar16 = 0;
                  if (DAT_01d36e60 != 0) {
                    uVar16 = uVar14 / DAT_01d36e60;
                  }
                  uVar16 = uVar14 - uVar16 * DAT_01d36e60;
                }
              }
              plVar17 = *(long **)(DAT_01d36e58 + uVar16 * 8);
              if (plVar17 != (long *)0x0) {
                do {
                  while( true ) {
                    plVar17 = (long *)*plVar17;
                    if (plVar17 == (long *)0x0) goto LAB_008d0024;
                    uVar18 = plVar17[1];
                    if (uVar18 != uVar14) break;
                    if (*(uint *)(plVar17 + 2) == local_48) {
                      lVar11 = se::NativePtrToObjectMap::find((void *)plVar17[3]);
                      lVar12 = se::NativePtrToObjectMap::end();
                      pVVar8 = (Value *)se::State::rval(aSStack_88);
                      if (lVar11 == lVar12) {
                        se::Value::setNull(pVVar8);
                      }
                      else {
                        se::Value::setObject(pVVar8,*(Object **)(lVar11 + 0x18),false);
                      }
                      goto LAB_008d0024;
                    }
                  }
                  if ((uVar15 & DAT_01d36e60) == 0) {
                    uVar18 = uVar18 & uVar15;
                  }
                  else if (DAT_01d36e60 <= uVar18) {
                    uVar1 = 0;
                    if (DAT_01d36e60 != 0) {
                      uVar1 = uVar18 / DAT_01d36e60;
                    }
                    uVar18 = uVar18 - uVar1 * DAT_01d36e60;
                  }
                } while (uVar18 == uVar16);
              }
            }
            break;
          default:
            goto switchD_008cfd58_caseD_b47;
          }
          goto LAB_008d0024;
        }
        if (iVar5 < 0x9240) {
          if (iVar5 == 0x8dfb) {
            glGetIntegerv(0x8dfb,&local_48);
            pVVar8 = (Value *)se::State::rval(aSStack_88);
            se::Value::setInt32(pVVar8,local_48);
            goto LAB_008d0024;
          }
          if (iVar5 == 0x8dfc) {
            glGetIntegerv(0x8dfc,&local_48);
            pVVar8 = (Value *)se::State::rval(aSStack_88);
            se::Value::setInt32(pVVar8,local_48);
            goto LAB_008d0024;
          }
          if (iVar5 == 0x8dfd) {
            glGetIntegerv(0x8dfd,&local_48);
            pVVar8 = (Value *)se::State::rval(aSStack_88);
            se::Value::setInt32(pVVar8,local_48);
            goto LAB_008d0024;
          }
        }
        else {
          if (iVar5 == 0x9240) {
            bVar4 = cocos2d::ccIsUnpackFlipY();
            se::Value::setBoolean(pVVar8,(bool)(bVar4 & 1));
            goto LAB_008d0024;
          }
          if (iVar5 == 0x9241) {
            bVar4 = cocos2d::ccIsPremultiplyAlpha();
            se::Value::setBoolean(pVVar8,(bool)(bVar4 & 1));
            goto LAB_008d0024;
          }
          if (iVar5 == 0x9243) {
            se::Value::setBoolean(pVVar8,false);
            goto LAB_008d0024;
          }
        }
        goto switchD_008cfd58_caseD_b47;
      }
      if (iVar5 < 0x8b4d) {
        if (iVar5 - 0x8894U < 2) {
          glGetIntegerv(iVar5,&local_48);
          uVar14 = (ulong)local_48;
          if ((int)local_48 < 1) {
            se::Value::setNull(pVVar8);
          }
          else if (DAT_01d36e38 != 0) {
            uVar15 = DAT_01d36e38 - 1;
            if ((uVar15 & DAT_01d36e38) == 0) {
              uVar16 = uVar15 & uVar14;
            }
            else {
              uVar16 = uVar14;
              if (DAT_01d36e38 <= uVar14) {
                uVar16 = 0;
                if (DAT_01d36e38 != 0) {
                  uVar16 = uVar14 / DAT_01d36e38;
                }
                uVar16 = uVar14 - uVar16 * DAT_01d36e38;
              }
            }
            plVar17 = *(long **)(DAT_01d36e30 + uVar16 * 8);
            if (plVar17 != (long *)0x0) {
              do {
                while( true ) {
                  plVar17 = (long *)*plVar17;
                  if (plVar17 == (long *)0x0) goto LAB_008d0024;
                  uVar18 = plVar17[1];
                  if (uVar18 != uVar14) break;
                  if (*(uint *)(plVar17 + 2) == local_48) {
                    lVar11 = se::NativePtrToObjectMap::find((void *)plVar17[3]);
                    lVar12 = se::NativePtrToObjectMap::end();
                    pVVar8 = (Value *)se::State::rval(aSStack_88);
                    if (lVar11 == lVar12) {
                      se::Value::setNull(pVVar8);
                    }
                    else {
                      se::Value::setObject(pVVar8,*(Object **)(lVar11 + 0x18),false);
                    }
                    goto LAB_008d0024;
                  }
                }
                if ((uVar15 & DAT_01d36e38) == 0) {
                  uVar18 = uVar18 & uVar15;
                }
                else if (DAT_01d36e38 <= uVar18) {
                  uVar1 = 0;
                  if (DAT_01d36e38 != 0) {
                    uVar1 = uVar18 / DAT_01d36e38;
                  }
                  uVar18 = uVar18 - uVar1 * DAT_01d36e38;
                }
              } while (uVar18 == uVar16);
            }
          }
          goto LAB_008d0024;
        }
        if (iVar5 != 0x8869) {
          iVar13 = 0x8872;
          goto LAB_008d0004;
        }
      }
      else if (iVar5 != 0x8b4d) {
        if (iVar5 == 0x8b8c) goto LAB_008d0110;
        if (iVar5 == 0x8b8d) {
          glGetIntegerv(0x8b8d,&local_48);
          uVar14 = (ulong)local_48;
          if ((int)local_48 < 1) {
            se::Value::setNull(pVVar8);
          }
          else if (DAT_01d36eb0 != 0) {
            uVar15 = DAT_01d36eb0 - 1;
            if ((uVar15 & DAT_01d36eb0) == 0) {
              uVar16 = uVar15 & uVar14;
            }
            else {
              uVar16 = uVar14;
              if (DAT_01d36eb0 <= uVar14) {
                uVar16 = 0;
                if (DAT_01d36eb0 != 0) {
                  uVar16 = uVar14 / DAT_01d36eb0;
                }
                uVar16 = uVar14 - uVar16 * DAT_01d36eb0;
              }
            }
            plVar17 = *(long **)(DAT_01d36ea8 + uVar16 * 8);
            if (plVar17 != (long *)0x0) {
              do {
                while( true ) {
                  plVar17 = (long *)*plVar17;
                  if (plVar17 == (long *)0x0) goto LAB_008d0024;
                  uVar18 = plVar17[1];
                  if (uVar18 != uVar14) break;
                  if (*(uint *)(plVar17 + 2) == local_48) {
                    lVar11 = se::NativePtrToObjectMap::find((void *)plVar17[3]);
                    lVar12 = se::NativePtrToObjectMap::end();
                    pVVar8 = (Value *)se::State::rval(aSStack_88);
                    if (lVar11 == lVar12) {
                      se::Value::setNull(pVVar8);
                    }
                    else {
                      se::Value::setObject(pVVar8,*(Object **)(lVar11 + 0x18),false);
                    }
                    goto LAB_008d0024;
                  }
                }
                if ((uVar15 & DAT_01d36eb0) == 0) {
                  uVar18 = uVar18 & uVar15;
                }
                else if (DAT_01d36eb0 <= uVar18) {
                  uVar1 = 0;
                  if (DAT_01d36eb0 != 0) {
                    uVar1 = uVar18 / DAT_01d36eb0;
                  }
                  uVar18 = uVar18 - uVar1 * DAT_01d36eb0;
                }
              } while (uVar18 == uVar16);
            }
          }
          goto LAB_008d0024;
        }
        goto switchD_008cfd58_caseD_b47;
      }
    }
switchD_008cfd58_caseD_b45:
    glGetIntegerv(iVar5,&local_48);
    se::Value::setInt32(pVVar8,local_48);
    goto LAB_008d0024;
  }
  if (iVar5 < 0xcf5) {
    switch(iVar5) {
    case 0xb44:
    case 0xb71:
    case 0xb72:
    case 0xb90:
    case 0xbd0:
    case 0xbe2:
    case 0xc11:
switchD_008cfd58_caseD_b44:
      glGetBooleanv(iVar5,&local_60);
      se::Value::setBoolean(pVVar8,local_60 != (Value)0x0);
      break;
    case 0xb45:
    case 0xb46:
    case 0xb74:
    case 0xb91:
    case 0xb92:
    case 0xb94:
    case 0xb95:
    case 0xb96:
    case 0xb97:
      goto switchD_008cfd58_caseD_b45;
    case 0xb70:
switchD_008cfd58_caseD_b70:
      glGetFloatv(iVar5,&local_60);
      pOVar10 = (Object *)se::Object::createTypedArray(8,&local_60,8);
      se::Value::setObject(pVVar8,pOVar10,true);
      break;
    case 0xb73:
      goto switchD_008cfd58_caseD_b73;
    case 0xb93:
    case 0xb98:
switchD_008cfd58_caseD_b93:
      glGetIntegerv(iVar5,&local_48);
      se::Value::setUint32(pVVar8,local_48);
      break;
    case 0xba2:
    case 0xc10:
      glGetFloatv(iVar5,&local_60);
      local_a0 = (Object *)
                 CONCAT44((int)(float)((uint7)uStack_5f >> 0x18),
                          (int)(float)CONCAT71(uStack_5f,local_60));
      uStack_98 = CONCAT44((int)(float)((ulong)uStack_58 >> 0x20),(int)(float)uStack_58);
      pOVar10 = (Object *)se::Object::createTypedArray(3,&local_a0,0x10);
      se::Value::setObject(pVVar8,pOVar10,true);
      break;
    case 0xc22:
switchD_008cfd58_caseD_c22:
      glGetFloatv(iVar5,&local_60);
      pOVar10 = (Object *)se::Object::createTypedArray(8,&local_60,0x10);
      se::Value::setObject(pVVar8,pOVar10,true);
      break;
    case 0xc23:
      glGetIntegerv(0xc23,&local_48);
      pOVar10 = (Object *)se::Object::createArrayObject(4);
      se::HandleObject::HandleObject((HandleObject *)&local_a0,pOVar10);
      pOVar10 = local_a0;
      se::Value::Value(&local_60,local_48 != 0);
      se::Object::setArrayElement(pOVar10,0,&local_60);
      se::Value::~Value(&local_60);
      pOVar10 = local_a0;
      se::Value::Value(&local_60,local_44 != 0);
      se::Object::setArrayElement(pOVar10,1,&local_60);
      se::Value::~Value(&local_60);
      pOVar10 = local_a0;
      se::Value::Value(&local_60,local_40 != 0);
      se::Object::setArrayElement(pOVar10,2,&local_60);
      se::Value::~Value(&local_60);
      pOVar10 = local_a0;
      se::Value::Value(&local_60,local_3c != 0);
      se::Object::setArrayElement(pOVar10,3,&local_60);
      se::Value::~Value(&local_60);
      se::Value::setObject(pVVar8,(HandleObject *)&local_a0,true);
      se::HandleObject::~HandleObject((HandleObject *)&local_a0);
      break;
    default:
      if (iVar5 == 0xb21) goto switchD_008cfd58_caseD_b73;
    case 0xb47:
    case 0xb48:
    case 0xb49:
    case 0xb4a:
    case 0xb4b:
    case 0xb4c:
    case 0xb4d:
    case 0xb4e:
    case 0xb4f:
    case 0xb50:
    case 0xb51:
    case 0xb52:
    case 0xb53:
    case 0xb54:
    case 0xb55:
    case 0xb56:
    case 0xb57:
    case 0xb58:
    case 0xb59:
    case 0xb5a:
    case 0xb5b:
    case 0xb5c:
    case 0xb5d:
    case 0xb5e:
    case 0xb5f:
    case 0xb60:
    case 0xb61:
    case 0xb62:
    case 0xb63:
    case 0xb64:
    case 0xb65:
    case 0xb66:
    case 0xb67:
    case 0xb68:
    case 0xb69:
    case 0xb6a:
    case 0xb6b:
    case 0xb6c:
    case 0xb6d:
    case 0xb6e:
    case 0xb6f:
    case 0xb75:
    case 0xb76:
    case 0xb77:
    case 0xb78:
    case 0xb79:
    case 0xb7a:
    case 0xb7b:
    case 0xb7c:
    case 0xb7d:
    case 0xb7e:
    case 0xb7f:
    case 0xb80:
    case 0xb81:
    case 0xb82:
    case 0xb83:
    case 0xb84:
    case 0xb85:
    case 0xb86:
    case 0xb87:
    case 0xb88:
    case 0xb89:
    case 0xb8a:
    case 0xb8b:
    case 0xb8c:
    case 0xb8d:
    case 0xb8e:
    case 0xb8f:
    case 0xb99:
    case 0xb9a:
    case 0xb9b:
    case 0xb9c:
    case 0xb9d:
    case 0xb9e:
    case 0xb9f:
    case 0xba0:
    case 0xba1:
    case 0xba3:
    case 0xba4:
    case 0xba5:
    case 0xba6:
    case 0xba7:
    case 0xba8:
    case 0xba9:
    case 0xbaa:
    case 0xbab:
    case 0xbac:
    case 0xbad:
    case 0xbae:
    case 0xbaf:
    case 0xbb0:
    case 0xbb1:
    case 0xbb2:
    case 0xbb3:
    case 0xbb4:
    case 0xbb5:
    case 0xbb6:
    case 2999:
    case 3000:
    case 0xbb9:
    case 0xbba:
    case 0xbbb:
    case 0xbbc:
    case 0xbbd:
    case 0xbbe:
    case 0xbbf:
    case 0xbc0:
    case 0xbc1:
    case 0xbc2:
    case 0xbc3:
    case 0xbc4:
    case 0xbc5:
    case 0xbc6:
    case 0xbc7:
    case 0xbc8:
    case 0xbc9:
    case 0xbca:
    case 0xbcb:
    case 0xbcc:
    case 0xbcd:
    case 0xbce:
    case 0xbcf:
    case 0xbd1:
    case 0xbd2:
    case 0xbd3:
    case 0xbd4:
    case 0xbd5:
    case 0xbd6:
    case 0xbd7:
    case 0xbd8:
    case 0xbd9:
    case 0xbda:
    case 0xbdb:
    case 0xbdc:
    case 0xbdd:
    case 0xbde:
    case 0xbdf:
    case 0xbe0:
    case 0xbe1:
    case 0xbe3:
    case 0xbe4:
    case 0xbe5:
    case 0xbe6:
    case 0xbe7:
    case 0xbe8:
    case 0xbe9:
    case 0xbea:
    case 0xbeb:
    case 0xbec:
    case 0xbed:
    case 0xbee:
    case 0xbef:
    case 0xbf0:
    case 0xbf1:
    case 0xbf2:
    case 0xbf3:
    case 0xbf4:
    case 0xbf5:
    case 0xbf6:
    case 0xbf7:
    case 0xbf8:
    case 0xbf9:
    case 0xbfa:
    case 0xbfb:
    case 0xbfc:
    case 0xbfd:
    case 0xbfe:
    case 0xbff:
    case 0xc00:
    case 0xc01:
    case 0xc02:
    case 0xc03:
    case 0xc04:
    case 0xc05:
    case 0xc06:
    case 0xc07:
    case 0xc08:
    case 0xc09:
    case 0xc0a:
    case 0xc0b:
    case 0xc0c:
    case 0xc0d:
    case 0xc0e:
    case 0xc0f:
    case 0xc12:
    case 0xc13:
    case 0xc14:
    case 0xc15:
    case 0xc16:
    case 0xc17:
    case 0xc18:
    case 0xc19:
    case 0xc1a:
    case 0xc1b:
    case 0xc1c:
    case 0xc1d:
    case 0xc1e:
    case 0xc1f:
    case 0xc20:
    case 0xc21:
switchD_008cfd58_caseD_b47:
      __android_log_print(3,"jswrapper","glGetIntegerv: pname: 0x%x\n",iVar5);
      se::Value::setNull(pVVar8);
    }
  }
  else {
    if (iVar5 < 0x2a00) {
      if (iVar5 < 0xd57) {
        if ((iVar5 != 0xcf5) && (iVar5 != 0xd33)) {
          if (iVar5 == 0xd3a) {
            glGetFloatv(0xd3a,&local_60);
            local_a0 = (Object *)
                       CONCAT44((int)(float)((uint7)uStack_5f >> 0x18),
                                (int)(float)CONCAT71(uStack_5f,local_60));
            pOVar10 = (Object *)se::Object::createTypedArray(3,&local_a0,8);
            se::Value::setObject(pVVar8,pOVar10,true);
            goto LAB_008d0024;
          }
          goto switchD_008cfd58_caseD_b47;
        }
      }
      else {
        if (iVar5 - 0x1f00U < 3) {
LAB_008d0110:
          pcVar9 = (char *)glGetString(iVar5);
          se::Value::setString(pVVar8,pcVar9);
          goto LAB_008d0024;
        }
        if (iVar5 != 0xd57) goto switchD_008cfd58_caseD_b47;
      }
      goto switchD_008cfd58_caseD_b45;
    }
    if (iVar5 < 0x8037) {
      if (iVar5 != 0x2a00) {
        if (iVar5 != 0x8005) {
          iVar13 = 0x8009;
          goto LAB_008d0004;
        }
        goto switchD_008cfd58_caseD_c22;
      }
    }
    else {
      if (iVar5 == 0x8037) goto switchD_008cfd58_caseD_b44;
      if (iVar5 != 0x8038) {
        if (iVar5 == 0x8069) goto LAB_008d01a0;
        goto switchD_008cfd58_caseD_b47;
      }
    }
switchD_008cfd58_caseD_b73:
    glGetFloatv(iVar5,&local_8c);
    se::Value::setFloat(pVVar8,local_8c);
  }
LAB_008d0024:
  pVVar8 = (Value *)se::State::rval(aSStack_88);
  se::internal::setReturnValue(pVVar8,param_1);
  se::State::~State(aSStack_88);
  pVVar3 = local_d0;
  pVVar8 = local_c8;
  if (local_d0 != (Value *)0x0) {
    while (pVVar8 != pVVar3) {
      se::Value::~Value(pVVar8 + -0x10);
      pVVar8 = pVVar8 + -0x10;
    }
    local_c8 = pVVar3;
    operator_delete(local_d0);
  }
  v8::HandleScope::~HandleScope(aHStack_b8);
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

