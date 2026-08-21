
void _INIT_19(void)

{
  cocos2d::renderer::Pass::DEFAULT_STATES = operator_new__(0x6c);
  cocos2d::renderer::Pass::DEFAULT_STATES[1] = 0x30200008006;
  *cocos2d::renderer::Pass::DEFAULT_STATES = 0x405;
  cocos2d::renderer::Pass::DEFAULT_STATES[3] = 0x30300000302;
  cocos2d::renderer::Pass::DEFAULT_STATES[2] = 0x800600000303;
  cocos2d::renderer::Pass::DEFAULT_STATES[0xc] = 0x1e0000001e00;
  cocos2d::renderer::Pass::DEFAULT_STATES[5] = 0x20100000000;
  cocos2d::renderer::Pass::DEFAULT_STATES[4] = 0xffffffff;
  cocos2d::renderer::Pass::DEFAULT_STATES[7] = 0xff00000000;
  cocos2d::renderer::Pass::DEFAULT_STATES[6] = 0x20700000002;
  *(undefined4 *)(cocos2d::renderer::Pass::DEFAULT_STATES + 0xd) = 0xff;
  cocos2d::renderer::Pass::DEFAULT_STATES[9] = 0xff00001e00;
  cocos2d::renderer::Pass::DEFAULT_STATES[8] = 0x1e0000001e00;
  cocos2d::renderer::Pass::DEFAULT_STATES[0xb] = 0x1e00000000ff;
  cocos2d::renderer::Pass::DEFAULT_STATES[10] = 0x207;
  return;
}

