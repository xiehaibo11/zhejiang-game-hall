
/* js_register_cocos2dx_particle_ParticleSimulator(se::Object*) */

undefined8 js_register_cocos2dx_particle_ParticleSimulator(Object *param_1)

{
  long lVar1;
  Class *this;
  basic_string local_40;
  undefined7 uStack_3f;
  undefined1 uStack_38;
  undefined7 uStack_37;
  undefined1 uStack_30;
  undefined2 uStack_2f;
  undefined5 uStack_2d;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uStack_2d = 0;
  local_40 = (basic_string)0x22;
  uStack_37 = 0x74616c756d6953;
  uStack_30 = 0x6f;
  uStack_3f = 0x6c636974726150;
  uStack_38 = 0x65;
  uStack_2f = 0x72;
  this = (Class *)se::Class::create(&local_40,param_1,(Object *)0x0,
                                    js_cocos2dx_particle_ParticleSimulator_constructorRegistry);
  if (((byte)local_40 & 1) != 0) {
    operator_delete((void *)CONCAT53(uStack_2d,CONCAT21(uStack_2f,uStack_30)));
  }
  se::Class::defineProperty
            (this,"positionType",js_cocos2dx_particle_ParticleSimulator_get_positionTypeRegistry,
             js_cocos2dx_particle_ParticleSimulator_set_positionTypeRegistry);
  se::Class::defineProperty
            (this,"emissionRate",js_cocos2dx_particle_ParticleSimulator_get_emissionRateRegistry,
             js_cocos2dx_particle_ParticleSimulator_set_emissionRateRegistry);
  se::Class::defineProperty
            (this,"totalParticles",js_cocos2dx_particle_ParticleSimulator_get_totalParticlesRegistry
             ,js_cocos2dx_particle_ParticleSimulator_set_totalParticlesRegistry);
  se::Class::defineProperty
            (this,"duration",js_cocos2dx_particle_ParticleSimulator_get_durationRegistry,
             js_cocos2dx_particle_ParticleSimulator_set_durationRegistry);
  se::Class::defineProperty
            (this,"emitterMode",js_cocos2dx_particle_ParticleSimulator_get_emitterModeRegistry,
             js_cocos2dx_particle_ParticleSimulator_set_emitterModeRegistry);
  se::Class::defineProperty
            (this,"life",js_cocos2dx_particle_ParticleSimulator_get_lifeRegistry,
             js_cocos2dx_particle_ParticleSimulator_set_lifeRegistry);
  se::Class::defineProperty
            (this,"lifeVar",js_cocos2dx_particle_ParticleSimulator_get_lifeVarRegistry,
             js_cocos2dx_particle_ParticleSimulator_set_lifeVarRegistry);
  se::Class::defineProperty
            (this,"startSize",js_cocos2dx_particle_ParticleSimulator_get_startSizeRegistry,
             js_cocos2dx_particle_ParticleSimulator_set_startSizeRegistry);
  se::Class::defineProperty
            (this,"startSizeVar",js_cocos2dx_particle_ParticleSimulator_get_startSizeVarRegistry,
             js_cocos2dx_particle_ParticleSimulator_set_startSizeVarRegistry);
  se::Class::defineProperty
            (this,"endSize",js_cocos2dx_particle_ParticleSimulator_get_endSizeRegistry,
             js_cocos2dx_particle_ParticleSimulator_set_endSizeRegistry);
  se::Class::defineProperty
            (this,"endSizeVar",js_cocos2dx_particle_ParticleSimulator_get_endSizeVarRegistry,
             js_cocos2dx_particle_ParticleSimulator_set_endSizeVarRegistry);
  se::Class::defineProperty
            (this,"startSpin",js_cocos2dx_particle_ParticleSimulator_get_startSpinRegistry,
             js_cocos2dx_particle_ParticleSimulator_set_startSpinRegistry);
  se::Class::defineProperty
            (this,"startSpinVar",js_cocos2dx_particle_ParticleSimulator_get_startSpinVarRegistry,
             js_cocos2dx_particle_ParticleSimulator_set_startSpinVarRegistry);
  se::Class::defineProperty
            (this,"endSpin",js_cocos2dx_particle_ParticleSimulator_get_endSpinRegistry,
             js_cocos2dx_particle_ParticleSimulator_set_endSpinRegistry);
  se::Class::defineProperty
            (this,"endSpinVar",js_cocos2dx_particle_ParticleSimulator_get_endSpinVarRegistry,
             js_cocos2dx_particle_ParticleSimulator_set_endSpinVarRegistry);
  se::Class::defineProperty
            (this,"angle",js_cocos2dx_particle_ParticleSimulator_get_angleRegistry,
             js_cocos2dx_particle_ParticleSimulator_set_angleRegistry);
  se::Class::defineProperty
            (this,"angleVar",js_cocos2dx_particle_ParticleSimulator_get_angleVarRegistry,
             js_cocos2dx_particle_ParticleSimulator_set_angleVarRegistry);
  se::Class::defineProperty
            (this,"speed",js_cocos2dx_particle_ParticleSimulator_get_speedRegistry,
             js_cocos2dx_particle_ParticleSimulator_set_speedRegistry);
  se::Class::defineProperty
            (this,"speedVar",js_cocos2dx_particle_ParticleSimulator_get_speedVarRegistry,
             js_cocos2dx_particle_ParticleSimulator_set_speedVarRegistry);
  se::Class::defineProperty
            (this,"radialAccel",js_cocos2dx_particle_ParticleSimulator_get_radialAccelRegistry,
             js_cocos2dx_particle_ParticleSimulator_set_radialAccelRegistry);
  se::Class::defineProperty
            (this,"radialAccelVar",js_cocos2dx_particle_ParticleSimulator_get_radialAccelVarRegistry
             ,js_cocos2dx_particle_ParticleSimulator_set_radialAccelVarRegistry);
  se::Class::defineProperty
            (this,"tangentialAccel",
             js_cocos2dx_particle_ParticleSimulator_get_tangentialAccelRegistry,
             js_cocos2dx_particle_ParticleSimulator_set_tangentialAccelRegistry);
  se::Class::defineProperty
            (this,"tangentialAccelVar",
             js_cocos2dx_particle_ParticleSimulator_get_tangentialAccelVarRegistry,
             js_cocos2dx_particle_ParticleSimulator_set_tangentialAccelVarRegistry);
  se::Class::defineProperty
            (this,"rotationIsDir",js_cocos2dx_particle_ParticleSimulator_get_rotationIsDirRegistry,
             js_cocos2dx_particle_ParticleSimulator_set_rotationIsDirRegistry);
  se::Class::defineProperty
            (this,"startRadius",js_cocos2dx_particle_ParticleSimulator_get_startRadiusRegistry,
             js_cocos2dx_particle_ParticleSimulator_set_startRadiusRegistry);
  se::Class::defineProperty
            (this,"startRadiusVar",js_cocos2dx_particle_ParticleSimulator_get_startRadiusVarRegistry
             ,js_cocos2dx_particle_ParticleSimulator_set_startRadiusVarRegistry);
  se::Class::defineProperty
            (this,"endRadius",js_cocos2dx_particle_ParticleSimulator_get_endRadiusRegistry,
             js_cocos2dx_particle_ParticleSimulator_set_endRadiusRegistry);
  se::Class::defineProperty
            (this,"endRadiusVar",js_cocos2dx_particle_ParticleSimulator_get_endRadiusVarRegistry,
             js_cocos2dx_particle_ParticleSimulator_set_endRadiusVarRegistry);
  se::Class::defineProperty
            (this,"rotatePerS",js_cocos2dx_particle_ParticleSimulator_get_rotatePerSRegistry,
             js_cocos2dx_particle_ParticleSimulator_set_rotatePerSRegistry);
  se::Class::defineProperty
            (this,"rotatePerSVar",js_cocos2dx_particle_ParticleSimulator_get_rotatePerSVarRegistry,
             js_cocos2dx_particle_ParticleSimulator_set_rotatePerSVarRegistry);
  se::Class::defineProperty
            (this,"aspectRatio",js_cocos2dx_particle_ParticleSimulator_get_aspectRatioRegistry,
             js_cocos2dx_particle_ParticleSimulator_set_aspectRatioRegistry);
  se::Class::defineFunction
            (this,"setGravity",js_cocos2dx_particle_ParticleSimulator_setGravityRegistry);
  se::Class::defineFunction(this,"render",js_cocos2dx_particle_ParticleSimulator_renderRegistry);
  se::Class::defineFunction
            (this,"setSourcePos",js_cocos2dx_particle_ParticleSimulator_setSourcePosRegistry);
  se::Class::defineFunction(this,"onEnable",js_cocos2dx_particle_ParticleSimulator_onEnableRegistry)
  ;
  se::Class::defineFunction
            (this,"setEffect",js_cocos2dx_particle_ParticleSimulator_setEffectRegistry);
  se::Class::defineFunction
            (this,"setPosVar",js_cocos2dx_particle_ParticleSimulator_setPosVarRegistry);
  se::Class::defineFunction
            (this,"setEndColorVar",js_cocos2dx_particle_ParticleSimulator_setEndColorVarRegistry);
  se::Class::defineFunction
            (this,"getParticleCount",js_cocos2dx_particle_ParticleSimulator_getParticleCountRegistry
            );
  se::Class::defineFunction
            (this,"setStartColorVar",js_cocos2dx_particle_ParticleSimulator_setStartColorVarRegistry
            );
  se::Class::defineFunction
            (this,"emitParticle",js_cocos2dx_particle_ParticleSimulator_emitParticleRegistry);
  se::Class::defineFunction(this,"stop",js_cocos2dx_particle_ParticleSimulator_stopRegistry);
  se::Class::defineFunction(this,"update",js_cocos2dx_particle_ParticleSimulator_updateRegistry);
  se::Class::defineFunction(this,"active",js_cocos2dx_particle_ParticleSimulator_activeRegistry);
  se::Class::defineFunction
            (this,"updateUVs",js_cocos2dx_particle_ParticleSimulator_updateUVsRegistry);
  se::Class::defineFunction
            (this,"setStartColor",js_cocos2dx_particle_ParticleSimulator_setStartColorRegistry);
  se::Class::defineFunction(this,"reset",js_cocos2dx_particle_ParticleSimulator_resetRegistry);
  se::Class::defineFunction
            (this,"onDisable",js_cocos2dx_particle_ParticleSimulator_onDisableRegistry);
  se::Class::defineFunction
            (this,"bindNodeProxy",js_cocos2dx_particle_ParticleSimulator_bindNodeProxyRegistry);
  se::Class::defineFunction
            (this,"setEndColor",js_cocos2dx_particle_ParticleSimulator_setEndColorRegistry);
  se::Class::defineFunction
            (this,"setFinishedCallback",
             js_cocos2dx_particle_ParticleSimulator_setFinishedCallbackRegistry);
  se::Class::defineFunction
            (this,"setStopCallback",js_cocos2dx_particle_ParticleSimulator_setStopCallbackRegistry);
  se::Class::defineFunction(this,"ctor",js_cocos2dx_particle_ParticleSimulator_ctorRegistry);
  se::Class::defineFinalizeFunction(this,js_cocos2d_ParticleSimulator_finalizeRegistry);
  se::Class::install(this);
  JSBClassType::registerClass<cocos2d::ParticleSimulator>(this);
  __jsb_cocos2d_ParticleSimulator_proto = se::Class::getProto(this);
  __jsb_cocos2d_ParticleSimulator_class = this;
  jsb_set_extend_property("middleware","ParticleSimulator");
  se::ScriptEngine::getInstance();
  se::ScriptEngine::clearException();
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

