
/* JSB_glFlushCommandRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void JSB_glFlushCommandRegistry(FunctionCallbackInfo *param_1)

{
  float *pfVar1;
  uint uVar2;
  long lVar3;
  float *pfVar4;
  Value *pVVar5;
  void *pvVar6;
  long *plVar7;
  ulong uVar8;
  Value *pVVar9;
  undefined8 *puVar10;
  long lVar11;
  int *piVar12;
  ulong uVar13;
  float *pfVar14;
  ulong uVar15;
  int iVar16;
  int iVar17;
  Isolate *pIVar18;
  uint uVar19;
  int iVar20;
  float *pfVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  float fVar25;
  Value *local_d8;
  Value *local_d0;
  undefined8 local_c8;
  HandleScope aHStack_c0 [24];
  uint local_a8;
  uint local_a4;
  float *local_a0;
  undefined4 local_98;
  uint local_94;
  State aSStack_90 [40];
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar18 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_c0,pIVar18);
  local_d8 = (Value *)0x0;
  local_d0 = (Value *)0x0;
  local_c8 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_d8,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_d8);
  pvVar6 = (void *)se::internal::getPrivate(pIVar18,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_90,pvVar6,(vector *)&local_d8);
  plVar7 = (long *)se::State::args(aSStack_90);
  if ((plVar7[1] - *plVar7 & 0xffffffff0U) == 0x30) {
    local_94 = 0;
    uVar8 = seval_to_uint32((Value *)*plVar7,&local_94);
    if ((uVar8 & 1) == 0) {
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                          ,0x10d0,"JSB_glFlushCommand");
      __android_log_print(6,"jswrapper","arg0 isn\'t a number!");
    }
    else {
      local_98 = 0;
      local_a0 = (float *)0x0;
      uVar8 = FUN_008d33a4(*plVar7 + 0x10,&local_98,&local_a0);
      if ((uVar8 & 1) == 0) {
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                            ,0x10d4,"JSB_glFlushCommand");
        __android_log_print(6,"jswrapper","Convert arg1 as typed array failed!");
      }
      else {
        local_a4 = 0;
        uVar8 = seval_to_uint32((Value *)(*plVar7 + 0x20),&local_a4);
        if ((uVar8 & 1) != 0) {
          if (local_94 != 0) {
            pfVar1 = local_a0 + local_94;
            pfVar21 = local_a0;
            do {
              switch((int)*pfVar21) {
              case 0:
                cocos2d::ccActiveTexture((int)pfVar21[1]);
                break;
              case 1:
                glAttachShader((int)pfVar21[1],(int)pfVar21[2]);
                goto LAB_008d208c;
              default:
                goto switchD_008d17e4_caseD_2;
              case 3:
                cocos2d::ccBindBuffer((int)pfVar21[1],(int)pfVar21[2]);
                goto LAB_008d208c;
              case 4:
                if ((int)pfVar21[1] == 0x8d40) {
                  uVar19 = DAT_01d36ef8;
                  if ((int)pfVar21[2] != 0) {
                    uVar19 = (int)pfVar21[2];
                  }
                  cocos2d::ccBindFramebuffer(0x8d40,uVar19);
                  goto LAB_008d208c;
                }
                __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                                    "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                                    ,0x10f8,"JSB_glFlushCommand");
                DAT_01d36f40 = 0x500;
                goto LAB_008d14dc;
              case 5:
                glBindRenderbuffer((int)pfVar21[1],(int)pfVar21[2]);
                goto LAB_008d208c;
              case 6:
                cocos2d::ccBindTexture((int)pfVar21[1],(int)pfVar21[2]);
                goto LAB_008d208c;
              case 7:
                glBlendColor(pfVar21[1],pfVar21[2],pfVar21[3],pfVar21[4]);
                goto LAB_008d21ac;
              case 8:
                glBlendEquation((int)pfVar21[1]);
                break;
              case 9:
                glBlendEquationSeparate((int)pfVar21[1],(int)pfVar21[2]);
                goto LAB_008d208c;
              case 10:
                glBlendFunc((int)pfVar21[1],(int)pfVar21[2]);
                goto LAB_008d208c;
              case 0xb:
                glBlendFuncSeparate((int)pfVar21[1],(int)pfVar21[2],(int)pfVar21[3],(int)pfVar21[4])
                ;
                goto LAB_008d21ac;
              case 0xe:
                glClear((int)pfVar21[1]);
                break;
              case 0xf:
                glClearColor(pfVar21[1],pfVar21[2],pfVar21[3],pfVar21[4]);
                goto LAB_008d21ac;
              case 0x10:
                glClearDepthf(pfVar21[1]);
                break;
              case 0x11:
                glClearStencil((int)pfVar21[1]);
                break;
              case 0x12:
                glColorMask((int)pfVar21[1],(int)pfVar21[2],(int)pfVar21[3],(int)pfVar21[4]);
                goto LAB_008d21ac;
              case 0x14:
                glCompileShader((int)pfVar21[1]);
                break;
              case 0x17:
                glCopyTexImage2D((int)pfVar21[1],(int)pfVar21[2],(int)pfVar21[3],(int)pfVar21[4],
                                 (int)pfVar21[5],(int)pfVar21[6],(int)pfVar21[7],(int)pfVar21[8]);
                goto LAB_008d1ea8;
              case 0x18:
                glCopyTexSubImage2D((int)pfVar21[1],(int)pfVar21[2],(int)pfVar21[3],(int)pfVar21[4],
                                    (int)pfVar21[5],(int)pfVar21[6],(int)pfVar21[7],(int)pfVar21[8])
                ;
LAB_008d1ea8:
                pfVar21 = pfVar21 + 9;
                goto switchD_008d17e4_caseD_2;
              case 0x19:
                glCullFace((int)pfVar21[1]);
                break;
              case 0x1a:
                local_a8 = (uint)pfVar21[1];
                cocos2d::ccDeleteBuffers(1,&local_a8);
                puVar10 = &DAT_01d36e30;
                uVar19 = local_a8;
                goto LAB_008d1f8c;
              case 0x1b:
                local_a8 = (uint)pfVar21[1];
                glDeleteFramebuffers(1,&local_a8);
                puVar10 = &DAT_01d36e80;
                uVar19 = local_a8;
                goto LAB_008d1f8c;
              case 0x1c:
                uVar19 = (uint)pfVar21[1];
                glDeleteProgram(uVar19);
                puVar10 = &DAT_01d36ea8;
                goto LAB_008d1f8c;
              case 0x1d:
                local_a8 = (uint)pfVar21[1];
                glDeleteRenderbuffers(1,&local_a8);
                puVar10 = &DAT_01d36e58;
                uVar19 = local_a8;
                goto LAB_008d1f8c;
              case 0x1e:
                uVar19 = (uint)pfVar21[1];
                glDeleteShader(uVar19);
                puVar10 = &DAT_01d36ed0;
                goto LAB_008d1f8c;
              case 0x1f:
                local_a8 = (uint)pfVar21[1];
                glDeleteTextures(1,&local_a8);
                puVar10 = &DAT_01d36e08;
                uVar19 = local_a8;
LAB_008d1f8c:
                FUN_008d3790(puVar10,uVar19);
                pfVar21 = pfVar21 + 2;
                goto switchD_008d17e4_caseD_2;
              case 0x20:
                glDepthFunc((int)pfVar21[1]);
                break;
              case 0x21:
                glDepthMask((int)pfVar21[1]);
                break;
              case 0x22:
                glDepthRangef(pfVar21[1],pfVar21[2]);
                goto LAB_008d208c;
              case 0x23:
                glDetachShader((int)pfVar21[1],(int)pfVar21[2]);
                goto LAB_008d208c;
              case 0x24:
                glDisable((int)pfVar21[1]);
                break;
              case 0x25:
                cocos2d::ccDisableVertexAttribArray((int)pfVar21[1]);
                break;
              case 0x26:
                glDrawArrays((int)pfVar21[1],(int)pfVar21[2],(int)pfVar21[3]);
                goto LAB_008d1fb0;
              case 0x27:
                glDrawElements((int)pfVar21[1],(int)pfVar21[2],(int)pfVar21[3],(long)pfVar21[4]);
                goto LAB_008d21ac;
              case 0x28:
                glEnable((int)pfVar21[1]);
                break;
              case 0x29:
                cocos2d::ccEnableVertexAttribArray((int)pfVar21[1]);
                break;
              case 0x2a:
                glFinish();
                goto LAB_008d1db8;
              case 0x2b:
                glFlush();
LAB_008d1db8:
                pfVar21 = pfVar21 + 1;
                goto switchD_008d17e4_caseD_2;
              case 0x2c:
                iVar20 = (int)pfVar21[1];
                iVar16 = (int)pfVar21[3];
                iVar17 = (int)pfVar21[4];
                if ((int)pfVar21[2] == 0x821a) {
                  glFramebufferRenderbuffer(iVar20,0x8d00,iVar16,iVar17);
                  glFramebufferRenderbuffer(iVar20,0x8d20,iVar16,iVar17);
                }
                else {
                  glFramebufferRenderbuffer(iVar20,(int)pfVar21[2],iVar16,iVar17);
                }
                goto LAB_008d21ac;
              case 0x2d:
                glFramebufferTexture2D
                          ((int)pfVar21[1],(int)pfVar21[2],(int)pfVar21[3],(int)pfVar21[4],
                           (int)pfVar21[5]);
                goto LAB_008d2138;
              case 0x2e:
                glFrontFace((int)pfVar21[1]);
                break;
              case 0x2f:
                glGenerateMipmap((int)pfVar21[1]);
                break;
              case 0x30:
                glHint((int)pfVar21[1],(int)pfVar21[2]);
                goto LAB_008d208c;
              case 0x31:
                glLineWidth(pfVar21[1]);
                break;
              case 0x32:
                glLinkProgram((int)pfVar21[1]);
                break;
              case 0x33:
                cocos2d::ccPixelStorei((int)pfVar21[1],(int)pfVar21[2]);
                goto LAB_008d208c;
              case 0x34:
                glPolygonOffset(pfVar21[1],pfVar21[2]);
                goto LAB_008d208c;
              case 0x35:
                iVar16 = 0x88f0;
                if ((int)pfVar21[2] != 0x84f9) {
                  iVar16 = (int)pfVar21[2];
                }
                glRenderbufferStorage((int)pfVar21[1],iVar16,(int)pfVar21[3],(int)pfVar21[4]);
                goto LAB_008d21ac;
              case 0x36:
                glSampleCoverage(pfVar21[1],(int)pfVar21[2]);
                goto LAB_008d208c;
              case 0x37:
                cocos2d::ccScissor((int)pfVar21[1],(int)pfVar21[2],(int)pfVar21[3],(int)pfVar21[4]);
                goto LAB_008d21ac;
              case 0x39:
                glStencilFunc((int)pfVar21[1],(int)pfVar21[2],(int)pfVar21[3]);
                goto LAB_008d1fb0;
              case 0x3a:
                glStencilFuncSeparate
                          ((int)pfVar21[1],(int)pfVar21[2],(int)pfVar21[3],(int)pfVar21[4]);
                goto LAB_008d21ac;
              case 0x3b:
                glStencilMask((int)pfVar21[1]);
                break;
              case 0x3c:
                glStencilMaskSeparate((int)pfVar21[1],(int)pfVar21[2]);
                goto LAB_008d208c;
              case 0x3d:
                glStencilOp((int)pfVar21[1],(int)pfVar21[2],(int)pfVar21[3]);
                goto LAB_008d1fb0;
              case 0x3e:
                glStencilOpSeparate((int)pfVar21[1],(int)pfVar21[2],(int)pfVar21[3],(int)pfVar21[4])
                ;
                goto LAB_008d21ac;
              case 0x40:
                glTexParameterf(pfVar21[3],(int)pfVar21[1],(int)pfVar21[2]);
                goto LAB_008d1fb0;
              case 0x41:
                glTexParameteri((int)pfVar21[1],(int)pfVar21[2],(int)pfVar21[3]);
                goto LAB_008d1fb0;
              case 0x43:
                glUniform1f(pfVar21[2],(int)pfVar21[1]);
                goto LAB_008d208c;
              case 0x44:
                iVar16 = (int)pfVar21[2];
                glUniform1fv((int)pfVar21[1],iVar16,pfVar21 + 3);
                goto LAB_008d2158;
              case 0x45:
                glUniform1i((int)pfVar21[1],(int)pfVar21[2]);
                goto LAB_008d208c;
              case 0x46:
                uVar19 = (uint)pfVar21[2];
                pvVar6 = malloc(-(ulong)(uVar19 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar19 << 2);
                if (0 < (int)uVar19) {
                  uVar8 = (ulong)uVar19;
                  if (uVar19 < 8) {
                    uVar13 = 0;
                  }
                  else {
                    uVar13 = uVar8 & 0xfffffff8;
                    pfVar14 = pfVar21 + 7;
                    puVar10 = (undefined8 *)((long)pvVar6 + 0x10);
                    uVar15 = uVar13;
                    do {
                      pfVar4 = pfVar14 + -2;
                      uVar22 = *(undefined8 *)(pfVar14 + -4);
                      uVar24 = *(undefined8 *)(pfVar14 + 2);
                      uVar23 = *(undefined8 *)pfVar14;
                      pfVar14 = pfVar14 + 8;
                      uVar15 = uVar15 - 8;
                      puVar10[-1] = CONCAT44((int)(float)((ulong)*(undefined8 *)pfVar4 >> 0x20),
                                             (int)(float)*(undefined8 *)pfVar4);
                      puVar10[-2] = CONCAT44((int)(float)((ulong)uVar22 >> 0x20),(int)(float)uVar22)
                      ;
                      puVar10[1] = CONCAT44((int)(float)((ulong)uVar24 >> 0x20),(int)(float)uVar24);
                      *puVar10 = CONCAT44((int)(float)((ulong)uVar23 >> 0x20),(int)(float)uVar23);
                      puVar10 = puVar10 + 4;
                    } while (uVar15 != 0);
                    if (uVar13 == uVar8) goto LAB_008d17a0;
                  }
                  lVar11 = uVar8 - uVar13;
                  piVar12 = (int *)((long)pvVar6 + uVar13 * 4);
                  pfVar14 = pfVar21 + uVar13 + 3;
                  do {
                    lVar11 = lVar11 + -1;
                    *piVar12 = (int)*pfVar14;
                    piVar12 = piVar12 + 1;
                    pfVar14 = pfVar14 + 1;
                  } while (lVar11 != 0);
                }
LAB_008d17a0:
                glUniform1iv((int)pfVar21[1],(ulong)uVar19,pvVar6);
                free(pvVar6);
                pfVar21 = pfVar21 + (int)(uVar19 + 3);
                goto switchD_008d17e4_caseD_2;
              case 0x47:
                glUniform2f(pfVar21[2],pfVar21[3],(int)pfVar21[1]);
                goto LAB_008d1fb0;
              case 0x48:
                iVar16 = (int)pfVar21[2];
                iVar17 = iVar16;
                if (iVar16 < 0) {
                  iVar17 = iVar16 + 1;
                }
                glUniform2fv((int)pfVar21[1],iVar17 >> 1,pfVar21 + 3);
                goto LAB_008d2158;
              case 0x49:
                glUniform2i((int)pfVar21[1],(int)pfVar21[2],(int)pfVar21[3]);
                goto LAB_008d1fb0;
              case 0x4a:
                uVar19 = (uint)pfVar21[2];
                pvVar6 = malloc(-(ulong)(uVar19 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar19 << 2);
                if (0 < (int)uVar19) {
                  uVar8 = (ulong)uVar19;
                  if (uVar19 < 8) {
                    uVar13 = 0;
                  }
                  else {
                    uVar13 = uVar8 & 0xfffffff8;
                    pfVar14 = pfVar21 + 7;
                    puVar10 = (undefined8 *)((long)pvVar6 + 0x10);
                    uVar15 = uVar13;
                    do {
                      pfVar4 = pfVar14 + -2;
                      uVar22 = *(undefined8 *)(pfVar14 + -4);
                      uVar24 = *(undefined8 *)(pfVar14 + 2);
                      uVar23 = *(undefined8 *)pfVar14;
                      pfVar14 = pfVar14 + 8;
                      uVar15 = uVar15 - 8;
                      puVar10[-1] = CONCAT44((int)(float)((ulong)*(undefined8 *)pfVar4 >> 0x20),
                                             (int)(float)*(undefined8 *)pfVar4);
                      puVar10[-2] = CONCAT44((int)(float)((ulong)uVar22 >> 0x20),(int)(float)uVar22)
                      ;
                      puVar10[1] = CONCAT44((int)(float)((ulong)uVar24 >> 0x20),(int)(float)uVar24);
                      *puVar10 = CONCAT44((int)(float)((ulong)uVar23 >> 0x20),(int)(float)uVar23);
                      puVar10 = puVar10 + 4;
                    } while (uVar15 != 0);
                    if (uVar13 == uVar8) goto LAB_008d1710;
                  }
                  lVar11 = uVar8 - uVar13;
                  piVar12 = (int *)((long)pvVar6 + uVar13 * 4);
                  pfVar14 = pfVar21 + uVar13 + 3;
                  do {
                    lVar11 = lVar11 + -1;
                    *piVar12 = (int)*pfVar14;
                    piVar12 = piVar12 + 1;
                    pfVar14 = pfVar14 + 1;
                  } while (lVar11 != 0);
                }
LAB_008d1710:
                uVar2 = uVar19;
                if ((int)uVar19 < 0) {
                  uVar2 = uVar19 + 1;
                }
                glUniform2iv((int)pfVar21[1],(int)uVar2 >> 1,pvVar6);
                goto LAB_008d172c;
              case 0x4b:
                glUniform3f(pfVar21[2],pfVar21[3],pfVar21[4],(int)pfVar21[1]);
                goto LAB_008d21ac;
              case 0x4c:
                iVar16 = (int)pfVar21[2];
                glUniform3fv((int)pfVar21[1],iVar16 / 3,pfVar21 + 3);
LAB_008d2158:
                pfVar21 = pfVar21 + (iVar16 + 3);
                goto switchD_008d17e4_caseD_2;
              case 0x4d:
                glUniform3i((int)pfVar21[1],(int)pfVar21[2],(int)pfVar21[3],(int)pfVar21[4]);
                goto LAB_008d21ac;
              case 0x4e:
                uVar19 = (uint)pfVar21[2];
                pvVar6 = malloc(-(ulong)(uVar19 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar19 << 2);
                if (0 < (int)uVar19) {
                  uVar8 = (ulong)uVar19;
                  if (uVar19 < 8) {
                    uVar13 = 0;
                  }
                  else {
                    uVar13 = uVar8 & 0xfffffff8;
                    pfVar14 = pfVar21 + 7;
                    puVar10 = (undefined8 *)((long)pvVar6 + 0x10);
                    uVar15 = uVar13;
                    do {
                      pfVar4 = pfVar14 + -2;
                      uVar22 = *(undefined8 *)(pfVar14 + -4);
                      uVar24 = *(undefined8 *)(pfVar14 + 2);
                      uVar23 = *(undefined8 *)pfVar14;
                      pfVar14 = pfVar14 + 8;
                      uVar15 = uVar15 - 8;
                      puVar10[-1] = CONCAT44((int)(float)((ulong)*(undefined8 *)pfVar4 >> 0x20),
                                             (int)(float)*(undefined8 *)pfVar4);
                      puVar10[-2] = CONCAT44((int)(float)((ulong)uVar22 >> 0x20),(int)(float)uVar22)
                      ;
                      puVar10[1] = CONCAT44((int)(float)((ulong)uVar24 >> 0x20),(int)(float)uVar24);
                      *puVar10 = CONCAT44((int)(float)((ulong)uVar23 >> 0x20),(int)(float)uVar23);
                      puVar10 = puVar10 + 4;
                    } while (uVar15 != 0);
                    if (uVar13 == uVar8) goto LAB_008d1684;
                  }
                  lVar11 = uVar8 - uVar13;
                  piVar12 = (int *)((long)pvVar6 + uVar13 * 4);
                  pfVar14 = pfVar21 + uVar13 + 3;
                  do {
                    lVar11 = lVar11 + -1;
                    *piVar12 = (int)*pfVar14;
                    piVar12 = piVar12 + 1;
                    pfVar14 = pfVar14 + 1;
                  } while (lVar11 != 0);
                }
LAB_008d1684:
                glUniform3iv((int)pfVar21[1],(int)uVar19 / 3,pvVar6);
LAB_008d172c:
                free(pvVar6);
                pfVar21 = pfVar21 + (int)(uVar19 + 3);
                goto switchD_008d17e4_caseD_2;
              case 0x4f:
                glUniform4f(pfVar21[2],pfVar21[3],pfVar21[4],pfVar21[5],(int)pfVar21[1]);
                goto LAB_008d2138;
              case 0x50:
                iVar17 = (int)pfVar21[2];
                iVar16 = iVar17 + 3;
                if (-1 < iVar17) {
                  iVar16 = iVar17;
                }
                glUniform4fv((int)pfVar21[1],iVar16 >> 2,pfVar21 + 3);
                pfVar21 = pfVar21 + (iVar17 + 3);
                goto switchD_008d17e4_caseD_2;
              case 0x51:
                glUniform4i((int)pfVar21[1],(int)pfVar21[2],(int)pfVar21[3],(int)pfVar21[4],
                            (int)pfVar21[5]);
                goto LAB_008d2138;
              case 0x52:
                uVar19 = (uint)pfVar21[2];
                pvVar6 = malloc(-(ulong)(uVar19 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar19 << 2);
                if (0 < (int)uVar19) {
                  uVar8 = (ulong)uVar19;
                  if (uVar19 < 8) {
                    uVar13 = 0;
                  }
                  else {
                    uVar13 = uVar8 & 0xfffffff8;
                    pfVar14 = pfVar21 + 7;
                    puVar10 = (undefined8 *)((long)pvVar6 + 0x10);
                    uVar15 = uVar13;
                    do {
                      pfVar4 = pfVar14 + -2;
                      uVar22 = *(undefined8 *)(pfVar14 + -4);
                      uVar24 = *(undefined8 *)(pfVar14 + 2);
                      uVar23 = *(undefined8 *)pfVar14;
                      pfVar14 = pfVar14 + 8;
                      uVar15 = uVar15 - 8;
                      puVar10[-1] = CONCAT44((int)(float)((ulong)*(undefined8 *)pfVar4 >> 0x20),
                                             (int)(float)*(undefined8 *)pfVar4);
                      puVar10[-2] = CONCAT44((int)(float)((ulong)uVar22 >> 0x20),(int)(float)uVar22)
                      ;
                      puVar10[1] = CONCAT44((int)(float)((ulong)uVar24 >> 0x20),(int)(float)uVar24);
                      *puVar10 = CONCAT44((int)(float)((ulong)uVar23 >> 0x20),(int)(float)uVar23);
                      puVar10 = puVar10 + 4;
                    } while (uVar15 != 0);
                    if (uVar13 == uVar8) goto LAB_008d15f4;
                  }
                  lVar11 = uVar8 - uVar13;
                  piVar12 = (int *)((long)pvVar6 + uVar13 * 4);
                  pfVar14 = pfVar21 + uVar13 + 3;
                  do {
                    lVar11 = lVar11 + -1;
                    *piVar12 = (int)*pfVar14;
                    piVar12 = piVar12 + 1;
                    pfVar14 = pfVar14 + 1;
                  } while (lVar11 != 0);
                }
LAB_008d15f4:
                uVar2 = uVar19 + 3;
                if (-1 < (int)uVar19) {
                  uVar2 = uVar19;
                }
                glUniform4iv((int)pfVar21[1],(int)uVar2 >> 2,pvVar6);
                free(pvVar6);
                pfVar21 = pfVar21 + (int)(uVar19 + 3);
                goto switchD_008d17e4_caseD_2;
              case 0x53:
                iVar17 = (int)pfVar21[3];
                iVar16 = iVar17 + 3;
                if (-1 < iVar17) {
                  iVar16 = iVar17;
                }
                glUniformMatrix2fv((int)pfVar21[1],iVar16 >> 2,(int)pfVar21[2],pfVar21 + 4);
                goto LAB_008d2190;
              case 0x54:
                iVar17 = (int)pfVar21[3];
                glUniformMatrix3fv((int)pfVar21[1],iVar17 / 9,(int)pfVar21[2],pfVar21 + 4);
                goto LAB_008d2190;
              case 0x55:
                iVar17 = (int)pfVar21[3];
                iVar16 = iVar17 + 0xf;
                if (-1 < iVar17) {
                  iVar16 = iVar17;
                }
                glUniformMatrix4fv((int)pfVar21[1],iVar16 >> 4,(int)pfVar21[2],pfVar21 + 4);
LAB_008d2190:
                pfVar21 = pfVar21 + (iVar17 + 4);
                goto switchD_008d17e4_caseD_2;
              case 0x56:
                glUseProgram((int)pfVar21[1]);
                break;
              case 0x57:
                glValidateProgram((int)pfVar21[1]);
                break;
              case 0x58:
                glVertexAttrib1f(pfVar21[2],(int)pfVar21[1]);
LAB_008d208c:
                pfVar21 = pfVar21 + 3;
                goto switchD_008d17e4_caseD_2;
              case 0x59:
                glVertexAttrib2f(pfVar21[2],pfVar21[3],(int)pfVar21[1]);
LAB_008d1fb0:
                pfVar21 = pfVar21 + 4;
                goto switchD_008d17e4_caseD_2;
              case 0x5a:
                glVertexAttrib3f(pfVar21[2],pfVar21[3],pfVar21[4],(int)pfVar21[1]);
                goto LAB_008d21ac;
              case 0x5b:
                glVertexAttrib4f(pfVar21[2],pfVar21[3],pfVar21[4],pfVar21[5],(int)pfVar21[1]);
LAB_008d2138:
                pfVar21 = pfVar21 + 6;
                goto switchD_008d17e4_caseD_2;
              case 0x5c:
                fVar25 = pfVar21[2];
                glVertexAttrib1fv((int)pfVar21[1],pfVar21 + 3);
                goto LAB_008d20c4;
              case 0x5d:
                fVar25 = pfVar21[2];
                glVertexAttrib2fv((int)pfVar21[1],pfVar21 + 3);
                goto LAB_008d20c4;
              case 0x5e:
                fVar25 = pfVar21[2];
                glVertexAttrib3fv((int)pfVar21[1],pfVar21 + 3);
                goto LAB_008d20c4;
              case 0x5f:
                fVar25 = pfVar21[2];
                glVertexAttrib4fv((int)pfVar21[1],pfVar21 + 3);
LAB_008d20c4:
                pfVar21 = pfVar21 + ((int)fVar25 + 3);
                goto switchD_008d17e4_caseD_2;
              case 0x60:
                cocos2d::ccVertexAttribPointer
                          ((int)pfVar21[1],(int)pfVar21[2],(int)pfVar21[3],(uchar)(int)pfVar21[4],
                           (int)pfVar21[5],(void *)(long)pfVar21[6]);
                pfVar21 = pfVar21 + 7;
                goto switchD_008d17e4_caseD_2;
              case 0x61:
                cocos2d::ccViewport((int)pfVar21[1],(int)pfVar21[2],(int)pfVar21[3],(int)pfVar21[4])
                ;
LAB_008d21ac:
                pfVar21 = pfVar21 + 5;
                goto switchD_008d17e4_caseD_2;
              }
              pfVar21 = pfVar21 + 2;
switchD_008d17e4_caseD_2:
            } while (pfVar21 < pfVar1);
          }
          goto LAB_008d1508;
        }
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                            ,0x10d8,"JSB_glFlushCommand");
        __android_log_print(6,"jswrapper","arg2 isn\'t a number!");
      }
    }
  }
  else {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                        ,0x10cb,"JSB_glFlushCommand");
    __android_log_print(6,"jswrapper","Invalid number of arguments");
  }
LAB_008d14dc:
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "JSB_glFlushCommand",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                      ,0x130d);
LAB_008d1508:
  pVVar9 = (Value *)se::State::rval(aSStack_90);
  se::internal::setReturnValue(pVVar9,param_1);
  se::State::~State(aSStack_90);
  pVVar5 = local_d8;
  pVVar9 = local_d0;
  if (local_d8 != (Value *)0x0) {
    while (pVVar9 != pVVar5) {
      se::Value::~Value(pVVar9 + -0x10);
      pVVar9 = pVVar9 + -0x10;
    }
    local_d0 = pVVar5;
    operator_delete(local_d8);
  }
  v8::HandleScope::~HandleScope(aHStack_c0);
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

