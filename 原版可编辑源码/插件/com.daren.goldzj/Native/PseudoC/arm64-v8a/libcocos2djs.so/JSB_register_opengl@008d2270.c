
/* JSB_register_opengl(se::Object*) */

undefined8 JSB_register_opengl(Object *param_1)

{
  long lVar1;
  Object *pOVar2;
  ScriptEngine *this;
  code *pcVar3;
  basic_string local_70;
  undefined7 uStack_6f;
  undefined1 uStack_68;
  undefined4 uStack_67;
  undefined1 uStack_63;
  undefined2 uStack_62;
  undefined1 uStack_60;
  undefined1 uStack_5f;
  undefined1 uStack_5e;
  undefined5 uStack_5d;
  long *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  glGetIntegerv(0x8ca6,&DAT_01d36ef8);
  uStack_63 = 0;
  uStack_62 = 0;
  local_70 = (basic_string)0x16;
  uStack_60 = 0;
  uStack_5f = 0;
  uStack_5e = 0;
  uStack_5d = 0;
  uStack_67 = 0x746365;
  uStack_6f = 0x624f4c47626557;
  uStack_68 = 0x6a;
  DAT_01d36f00 = (Class *)se::Class::create(&local_70,param_1,(Object *)0x0,
                                            (_func_void_FunctionCallbackInfo_ptr *)0x0);
  if (((byte)local_70 & 1) != 0) {
    operator_delete((void *)CONCAT53(uStack_5d,CONCAT12(uStack_5e,CONCAT11(uStack_5f,uStack_60))));
  }
  se::Class::install(DAT_01d36f00);
  pOVar2 = (Object *)se::Class::getProto(DAT_01d36f00);
  uStack_62 = 0;
  uStack_60 = 0;
  uStack_5f = 0;
  uStack_5e = 0;
  uStack_5d = 0;
  local_70 = (basic_string)0x18;
  uStack_67 = 0x65727574;
  uStack_6f = 0x65544c47626557;
  uStack_68 = 0x78;
  uStack_63 = 0;
  DAT_01d36f08 = (Class *)se::Class::create(&local_70,param_1,pOVar2,
                                            (_func_void_FunctionCallbackInfo_ptr *)0x0);
  if (((byte)local_70 & 1) != 0) {
    operator_delete((void *)CONCAT53(uStack_5d,CONCAT12(uStack_5e,CONCAT11(uStack_5f,uStack_60))));
  }
  se::Class::defineFinalizeFunction(DAT_01d36f08,JSB_glTextureFinalizeRegistry);
  se::Class::install(DAT_01d36f08);
  uStack_62 = 0;
  uStack_60 = 0;
  uStack_5f = 0;
  uStack_5e = 0;
  uStack_5d = 0;
  local_70 = (basic_string)0x18;
  uStack_67 = 0x6d617267;
  uStack_6f = 0x72504c47626557;
  uStack_68 = 0x6f;
  uStack_63 = 0;
  DAT_01d36f10 = (Class *)se::Class::create(&local_70,param_1,pOVar2,
                                            (_func_void_FunctionCallbackInfo_ptr *)0x0);
  if (((byte)local_70 & 1) != 0) {
    operator_delete((void *)CONCAT53(uStack_5d,CONCAT12(uStack_5e,CONCAT11(uStack_5f,uStack_60))));
  }
  se::Class::defineFinalizeFunction(DAT_01d36f10,JSB_glProgramFinalizeRegistry);
  se::Class::install(DAT_01d36f10);
  uStack_63 = 0;
  uStack_62 = 0;
  local_70 = (basic_string)0x16;
  uStack_60 = 0;
  uStack_5f = 0;
  uStack_5e = 0;
  uStack_5d = 0;
  uStack_67 = 0x726566;
  uStack_6f = 0x75424c47626557;
  uStack_68 = 0x66;
  DAT_01d36f18 = (Class *)se::Class::create(&local_70,param_1,pOVar2,
                                            (_func_void_FunctionCallbackInfo_ptr *)0x0);
  if (((byte)local_70 & 1) != 0) {
    operator_delete((void *)CONCAT53(uStack_5d,CONCAT12(uStack_5e,CONCAT11(uStack_5f,uStack_60))));
  }
  se::Class::defineFinalizeFunction(DAT_01d36f18,JSB_glBufferFinalizeRegistry);
  se::Class::install(DAT_01d36f18);
  uStack_5d = 0;
  local_70 = (basic_string)0x22;
  uStack_67 = 0x62726564;
  uStack_63 = 0x75;
  uStack_62 = 0x6666;
  uStack_60 = 0x65;
  uStack_6f = 0x65524c47626557;
  uStack_68 = 0x6e;
  uStack_5f = 0x72;
  uStack_5e = 0;
  DAT_01d36f20 = (Class *)se::Class::create(&local_70,param_1,pOVar2,
                                            (_func_void_FunctionCallbackInfo_ptr *)0x0);
  if (((byte)local_70 & 1) != 0) {
    operator_delete((void *)CONCAT53(uStack_5d,CONCAT12(uStack_5e,CONCAT11(uStack_5f,uStack_60))));
  }
  se::Class::defineFinalizeFunction(DAT_01d36f20,JSB_glRenderbufferFinalizeRegistry);
  se::Class::install(DAT_01d36f20);
  uStack_5e = 0;
  uStack_5d = 0;
  local_70 = (basic_string)0x20;
  uStack_67 = 0x7562656d;
  uStack_63 = 0x66;
  uStack_62 = 0x6566;
  uStack_60 = 0x72;
  uStack_6f = 0x72464c47626557;
  uStack_68 = 0x61;
  uStack_5f = 0;
  DAT_01d36f28 = (Class *)se::Class::create(&local_70,param_1,pOVar2,
                                            (_func_void_FunctionCallbackInfo_ptr *)0x0);
  if (((byte)local_70 & 1) != 0) {
    operator_delete((void *)CONCAT53(uStack_5d,CONCAT12(uStack_5e,CONCAT11(uStack_5f,uStack_60))));
  }
  se::Class::defineFinalizeFunction(DAT_01d36f28,JSB_glFramebufferFinalizeRegistry);
  se::Class::install(DAT_01d36f28);
  uStack_63 = 0;
  uStack_62 = 0;
  local_70 = (basic_string)0x16;
  uStack_60 = 0;
  uStack_5f = 0;
  uStack_5e = 0;
  uStack_5d = 0;
  uStack_67 = 0x726564;
  uStack_6f = 0x68534c47626557;
  uStack_68 = 0x61;
  DAT_01d36f30 = (Class *)se::Class::create(&local_70,param_1,pOVar2,
                                            (_func_void_FunctionCallbackInfo_ptr *)0x0);
  if (((byte)local_70 & 1) != 0) {
    operator_delete((void *)CONCAT53(uStack_5d,CONCAT12(uStack_5e,CONCAT11(uStack_5f,uStack_60))));
  }
  se::Class::defineFinalizeFunction(DAT_01d36f30,JSB_glShaderFinalizeRegistry);
  se::Class::install(DAT_01d36f30);
  local_70 = (basic_string)0x1e;
  uStack_67 = 0x49657669;
  uStack_63 = 0x6e;
  uStack_62 = 0x6f66;
  uStack_5f = 0;
  uStack_5e = 0;
  uStack_5d = 0;
  uStack_6f = 0x63414c47626557;
  uStack_68 = 0x74;
  uStack_60 = 0;
  DAT_01d36f38 = (Class *)se::Class::create(&local_70,param_1,(Object *)0x0,
                                            (_func_void_FunctionCallbackInfo_ptr *)0x0);
  if (((byte)local_70 & 1) != 0) {
    operator_delete((void *)CONCAT53(uStack_5d,CONCAT12(uStack_5e,CONCAT11(uStack_5f,uStack_60))));
  }
  se::Class::install(DAT_01d36f38);
  se::Object::defineFunction(__glObj,"getSupportedExtensions",JSB_glGetSupportedExtensionsRegistry);
  se::Object::defineFunction(__glObj,"activeTexture",JSB_glActiveTextureRegistry);
  se::Object::defineFunction(__glObj,"attachShader",JSB_glAttachShaderRegistry);
  se::Object::defineFunction(__glObj,"bindAttribLocation",JSB_glBindAttribLocationRegistry);
  se::Object::defineFunction(__glObj,"bindBuffer",JSB_glBindBufferRegistry);
  se::Object::defineFunction(__glObj,"bindFramebuffer",JSB_glBindFramebufferRegistry);
  se::Object::defineFunction(__glObj,"bindRenderbuffer",JSB_glBindRenderbufferRegistry);
  se::Object::defineFunction(__glObj,"bindTexture",JSB_glBindTextureRegistry);
  se::Object::defineFunction(__glObj,"blendColor",JSB_glBlendColorRegistry);
  se::Object::defineFunction(__glObj,"blendEquation",JSB_glBlendEquationRegistry);
  se::Object::defineFunction(__glObj,"blendEquationSeparate",JSB_glBlendEquationSeparateRegistry);
  se::Object::defineFunction(__glObj,"blendFunc",JSB_glBlendFuncRegistry);
  se::Object::defineFunction(__glObj,"blendFuncSeparate",JSB_glBlendFuncSeparateRegistry);
  se::Object::defineFunction(__glObj,"bufferData",JSB_glBufferDataRegistry);
  se::Object::defineFunction(__glObj,"bufferSubData",JSB_glBufferSubDataRegistry);
  se::Object::defineFunction(__glObj,"checkFramebufferStatus",JSB_glCheckFramebufferStatusRegistry);
  se::Object::defineFunction(__glObj,"clear",JSB_glClearRegistry);
  se::Object::defineFunction(__glObj,"clearColor",JSB_glClearColorRegistry);
  se::Object::defineFunction(__glObj,"clearDepth",JSB_glClearDepthfRegistry);
  se::Object::defineFunction(__glObj,"clearStencil",JSB_glClearStencilRegistry);
  se::Object::defineFunction(__glObj,"colorMask",JSB_glColorMaskRegistry);
  se::Object::defineFunction(__glObj,"compileShader",JSB_glCompileShaderRegistry);
  se::Object::defineFunction(__glObj,"compressedTexImage2D",JSB_glCompressedTexImage2DRegistry);
  se::Object::defineFunction
            (__glObj,"compressedTexSubImage2D",JSB_glCompressedTexSubImage2DRegistry);
  se::Object::defineFunction(__glObj,"copyTexImage2D",JSB_glCopyTexImage2DRegistry);
  se::Object::defineFunction(__glObj,"copyTexSubImage2D",JSB_glCopyTexSubImage2DRegistry);
  se::Object::defineFunction(__glObj,"createProgram",JSB_glCreateProgramRegistry);
  se::Object::defineFunction(__glObj,"createShader",JSB_glCreateShaderRegistry);
  se::Object::defineFunction(__glObj,"cullFace",JSB_glCullFaceRegistry);
  se::Object::defineFunction(__glObj,"deleteBuffer",JSB_glDeleteBufferRegistry);
  se::Object::defineFunction(__glObj,"deleteFramebuffer",JSB_glDeleteFramebufferRegistry);
  se::Object::defineFunction(__glObj,"deleteProgram",JSB_glDeleteProgramRegistry);
  se::Object::defineFunction(__glObj,"deleteRenderbuffer",JSB_glDeleteRenderbufferRegistry);
  se::Object::defineFunction(__glObj,"deleteShader",JSB_glDeleteShaderRegistry);
  se::Object::defineFunction(__glObj,"deleteTexture",JSB_glDeleteTexturesRegistry);
  se::Object::defineFunction(__glObj,"depthFunc",JSB_glDepthFuncRegistry);
  se::Object::defineFunction(__glObj,"depthMask",JSB_glDepthMaskRegistry);
  se::Object::defineFunction(__glObj,"depthRange",JSB_glDepthRangefRegistry);
  se::Object::defineFunction(__glObj,"detachShader",JSB_glDetachShaderRegistry);
  se::Object::defineFunction(__glObj,"disable",JSB_glDisableRegistry);
  se::Object::defineFunction
            (__glObj,"disableVertexAttribArray",JSB_glDisableVertexAttribArrayRegistry);
  se::Object::defineFunction(__glObj,"drawArrays",JSB_glDrawArraysRegistry);
  se::Object::defineFunction(__glObj,"drawElements",JSB_glDrawElementsRegistry);
  se::Object::defineFunction(__glObj,"enable",JSB_glEnableRegistry);
  se::Object::defineFunction
            (__glObj,"enableVertexAttribArray",JSB_glEnableVertexAttribArrayRegistry);
  se::Object::defineFunction(__glObj,"finish",JSB_glFinishRegistry);
  se::Object::defineFunction(__glObj,"flush",JSB_glFlushRegistry);
  se::Object::defineFunction
            (__glObj,"framebufferRenderbuffer",JSB_glFramebufferRenderbufferRegistry);
  se::Object::defineFunction(__glObj,"framebufferTexture2D",JSB_glFramebufferTexture2DRegistry);
  se::Object::defineFunction(__glObj,"frontFace",JSB_glFrontFaceRegistry);
  se::Object::defineFunction(__glObj,"createBuffer",JSB_glCreateBufferRegistry);
  se::Object::defineFunction(__glObj,"createFramebuffer",JSB_glCreateFramebufferRegistry);
  se::Object::defineFunction(__glObj,"createRenderbuffer",JSB_glCreateRenderbufferRegistry);
  se::Object::defineFunction(__glObj,"createTexture",JSB_glCreateTextureRegistry);
  se::Object::defineFunction(__glObj,"generateMipmap",JSB_glGenerateMipmapRegistry);
  se::Object::defineFunction(__glObj,"getActiveAttrib",JSB_glGetActiveAttribRegistry);
  se::Object::defineFunction(__glObj,"getActiveUniform",JSB_glGetActiveUniformRegistry);
  se::Object::defineFunction(__glObj,"getAttachedShaders",JSB_glGetAttachedShadersRegistry);
  se::Object::defineFunction(__glObj,"getAttribLocation",JSB_glGetAttribLocationRegistry);
  se::Object::defineFunction(__glObj,"getError",JSB_glGetErrorRegistry);
  se::Object::defineFunction(__glObj,"getProgramInfoLog",JSB_glGetProgramInfoLogRegistry);
  se::Object::defineFunction(__glObj,"getProgramParameter",JSB_glGetProgramParameterRegistry);
  se::Object::defineFunction(__glObj,"getShaderInfoLog",JSB_glGetShaderInfoLogRegistry);
  se::Object::defineFunction(__glObj,"getShaderSource",JSB_glGetShaderSourceRegistry);
  se::Object::defineFunction(__glObj,"getShaderParameter",JSB_glGetShaderParameterRegistry);
  se::Object::defineFunction(__glObj,"getTexParameter",JSB_glGetTexParameterfvRegistry);
  se::Object::defineFunction
            (__glObj,"getFramebufferAttachmentParameter",
             JSB_glGetFramebufferAttachmentParameterRegistry);
  se::Object::defineFunction(__glObj,"getUniformLocation",JSB_glGetUniformLocationRegistry);
  se::Object::defineFunction(__glObj,"getUniform",JSB_glGetUniformfvRegistry);
  se::Object::defineFunction(__glObj,"hint",JSB_glHintRegistry);
  se::Object::defineFunction(__glObj,"isBuffer",JSB_glIsBufferRegistry);
  se::Object::defineFunction(__glObj,"isEnabled",JSB_glIsEnabledRegistry);
  se::Object::defineFunction(__glObj,"isFramebuffer",JSB_glIsFramebufferRegistry);
  se::Object::defineFunction(__glObj,"isProgram",JSB_glIsProgramRegistry);
  se::Object::defineFunction(__glObj,"isRenderbuffer",JSB_glIsRenderbufferRegistry);
  se::Object::defineFunction(__glObj,"isShader",JSB_glIsShaderRegistry);
  se::Object::defineFunction(__glObj,"isTexture",JSB_glIsTextureRegistry);
  se::Object::defineFunction(__glObj,"lineWidth",JSB_glLineWidthRegistry);
  se::Object::defineFunction(__glObj,"linkProgram",JSB_glLinkProgramRegistry);
  se::Object::defineFunction(__glObj,"pixelStorei",JSB_glPixelStoreiRegistry);
  se::Object::defineFunction(__glObj,"polygonOffset",JSB_glPolygonOffsetRegistry);
  se::Object::defineFunction(__glObj,"readPixels",JSB_glReadPixelsRegistry);
  se::Object::defineFunction(__glObj,"releaseShaderCompiler",JSB_glReleaseShaderCompilerRegistry);
  se::Object::defineFunction(__glObj,"renderbufferStorage",JSB_glRenderbufferStorageRegistry);
  se::Object::defineFunction(__glObj,"sampleCoverage",JSB_glSampleCoverageRegistry);
  se::Object::defineFunction(__glObj,"scissor",JSB_glScissorRegistry);
  se::Object::defineFunction(__glObj,"shaderSource",JSB_glShaderSourceRegistry);
  se::Object::defineFunction(__glObj,"stencilFunc",JSB_glStencilFuncRegistry);
  se::Object::defineFunction(__glObj,"stencilFuncSeparate",JSB_glStencilFuncSeparateRegistry);
  se::Object::defineFunction(__glObj,"stencilMask",JSB_glStencilMaskRegistry);
  se::Object::defineFunction(__glObj,"stencilMaskSeparate",JSB_glStencilMaskSeparateRegistry);
  se::Object::defineFunction(__glObj,"stencilOp",JSB_glStencilOpRegistry);
  se::Object::defineFunction(__glObj,"stencilOpSeparate",JSB_glStencilOpSeparateRegistry);
  se::Object::defineFunction(__glObj,"texImage2D",JSB_glTexImage2DRegistry);
  se::Object::defineFunction(__glObj,"texParameterf",JSB_glTexParameterfRegistry);
  se::Object::defineFunction(__glObj,"texParameteri",JSB_glTexParameteriRegistry);
  se::Object::defineFunction(__glObj,"texSubImage2D",JSB_glTexSubImage2DRegistry);
  se::Object::defineFunction(__glObj,"uniform1f",JSB_glUniform1fRegistry);
  se::Object::defineFunction(__glObj,"uniform1fv",JSB_glUniform1fvRegistry);
  se::Object::defineFunction(__glObj,"uniform1i",JSB_glUniform1iRegistry);
  se::Object::defineFunction(__glObj,"uniform1iv",JSB_glUniform1ivRegistry);
  se::Object::defineFunction(__glObj,"uniform2f",JSB_glUniform2fRegistry);
  se::Object::defineFunction(__glObj,"uniform2fv",JSB_glUniform2fvRegistry);
  se::Object::defineFunction(__glObj,"uniform2i",JSB_glUniform2iRegistry);
  se::Object::defineFunction(__glObj,"uniform2iv",JSB_glUniform2ivRegistry);
  se::Object::defineFunction(__glObj,"uniform3f",JSB_glUniform3fRegistry);
  se::Object::defineFunction(__glObj,"uniform3fv",JSB_glUniform3fvRegistry);
  se::Object::defineFunction(__glObj,"uniform3i",JSB_glUniform3iRegistry);
  se::Object::defineFunction(__glObj,"uniform3iv",JSB_glUniform3ivRegistry);
  se::Object::defineFunction(__glObj,"uniform4f",JSB_glUniform4fRegistry);
  se::Object::defineFunction(__glObj,"uniform4fv",JSB_glUniform4fvRegistry);
  se::Object::defineFunction(__glObj,"uniform4i",JSB_glUniform4iRegistry);
  se::Object::defineFunction(__glObj,"uniform4iv",JSB_glUniform4ivRegistry);
  se::Object::defineFunction(__glObj,"uniformMatrix2fv",JSB_glUniformMatrix2fvRegistry);
  se::Object::defineFunction(__glObj,"uniformMatrix3fv",JSB_glUniformMatrix3fvRegistry);
  se::Object::defineFunction(__glObj,"uniformMatrix4fv",JSB_glUniformMatrix4fvRegistry);
  se::Object::defineFunction(__glObj,"useProgram",JSB_glUseProgramRegistry);
  se::Object::defineFunction(__glObj,"validateProgram",JSB_glValidateProgramRegistry);
  se::Object::defineFunction(__glObj,"vertexAttrib1f",JSB_glVertexAttrib1fRegistry);
  se::Object::defineFunction(__glObj,"vertexAttrib1fv",JSB_glVertexAttrib1fvRegistry);
  se::Object::defineFunction(__glObj,"vertexAttrib2f",JSB_glVertexAttrib2fRegistry);
  se::Object::defineFunction(__glObj,"vertexAttrib2fv",JSB_glVertexAttrib2fvRegistry);
  se::Object::defineFunction(__glObj,"vertexAttrib3f",JSB_glVertexAttrib3fRegistry);
  se::Object::defineFunction(__glObj,"vertexAttrib3fv",JSB_glVertexAttrib3fvRegistry);
  se::Object::defineFunction(__glObj,"vertexAttrib4f",JSB_glVertexAttrib4fRegistry);
  se::Object::defineFunction(__glObj,"vertexAttrib4fv",JSB_glVertexAttrib4fvRegistry);
  se::Object::defineFunction(__glObj,"vertexAttribPointer",JSB_glVertexAttribPointerRegistry);
  se::Object::defineFunction(__glObj,"getVertexAttrib",JSB_glGetVertexAttribRegistry);
  se::Object::defineFunction(__glObj,"getVertexAttribOffset",JSB_glGetVertexAttribOffsetRegistry);
  se::Object::defineFunction(__glObj,"viewport",JSB_glViewportRegistry);
  se::Object::defineFunction(__glObj,"getParameter",JSB_glGetParameterRegistry);
  se::Object::defineFunction
            (__glObj,"getShaderPrecisionFormat",JSB_glGetShaderPrecisionFormatRegistry);
  se::Object::defineFunction(__glObj,"getBufferParameter",JSB_glGetBufferParameterRegistry);
  se::Object::defineFunction
            (__glObj,"getRenderbufferParameter",JSB_glGetRenderbufferParameterRegistry);
  se::Object::defineFunction(__glObj,"_flushCommands",JSB_glFlushCommandRegistry);
  this = (ScriptEngine *)se::ScriptEngine::getInstance();
  local_70 = (basic_string)0xe8;
  uStack_6f = 0x1c677;
  local_50 = (long *)&local_70;
  se::ScriptEngine::addBeforeCleanupHook(this,&local_70);
  if (&local_70 == (basic_string *)local_50) {
    pcVar3 = *(code **)(*local_50 + 0x20);
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_008d3300;
    pcVar3 = *(code **)(*local_50 + 0x28);
  }
  (*pcVar3)();
LAB_008d3300:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

