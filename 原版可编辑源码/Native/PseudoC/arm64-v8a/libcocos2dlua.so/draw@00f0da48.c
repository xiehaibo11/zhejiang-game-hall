
/* cocos2d::Label::draw(cocos2d::Renderer*, cocos2d::Mat4 const&, unsigned int) */

void __thiscall cocos2d::Label::draw(Label *this,Renderer *param_1,Mat4 *param_2,uint param_3)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  Texture2D *pTVar5;
  GLProgramState *pGVar6;
  V3F_C4B_T2F_Quad *pVVar7;
  QuadCommand *this_00;
  long *plVar8;
  TextureAtlas *this_01;
  float fVar9;
  code *local_e0;
  undefined8 uStack_d8;
  Label *local_d0;
  Mat4 aMStack_c8 [64];
  undefined1 local_88;
  long local_78;
  
  lVar1 = tpidr_el0;
                    /* try { // try from 00f0da70 to 0100da77 has its CatchHandler @ 00f0db44 */
  local_78 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00f0da78 to 0100db57 has its CatchHandler @ 00f0d92c */
  if ((*(long *)(this + 0x3d8) != *(long *)(this + 0x3e0)) && (0 < *(int *)(this + 0x420))) {
    lVar3 = Camera::getVisitingCamera();
    lVar4 = Camera::getDefaultCamera();
    if ((lVar3 == lVar4) && (((param_3 & 1) == 0 && (*(char *)(lVar3 + 0x429) == '\0')))) {
      bVar2 = this[0x63c] != (Label)0x0;
    }
    else {
      bVar2 = Renderer::checkVisibility((Mat4 *)param_1,(Size *)param_2);
    }
    this[0x63c] = (Label)(bVar2 & 1);
    if ((bVar2 & 1) != 0) {
      if ((this[0x60f] == (Label)0x0) && (*(int *)(this + 0x308) - 1U < 2)) {
        for (plVar8 = *(long **)(this + 0x650); plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
          (**(code **)(*(long *)plVar8[3] + 0x3e0))();
        }
        this_01 = *(TextureAtlas **)(**(long **)(this + 0x3d8) + 0x300);
        pTVar5 = (Texture2D *)TextureAtlas::getTexture(this_01);
        fVar9 = *(float *)(this + 0x170);
        this_00 = (QuadCommand *)(this + 0x4c8);
        pGVar6 = (GLProgramState *)Node::getGLProgramState((Node *)this);
                    /* catch() { ... } // from try @ 00f0da70 with catch @ 00f0db44 */
        pVVar7 = (V3F_C4B_T2F_Quad *)TextureAtlas::getQuads(this_01);
        lVar3 = TextureAtlas::getTotalQuads(this_01);
        QuadCommand::init(this_00,fVar9,pTVar5,pGVar6,(BlendFunc *)(this + 0x634),pVVar7,lVar3,
                          param_2,param_3);
      }
      else {
        this_00 = (QuadCommand *)(this + 0x570);
        CustomCommand::init(*(float *)(this + 0x170),(Mat4 *)this_00,(uint)param_2);
        uStack_d8 = 0;
        local_e0 = onDraw;
        local_d0 = this;
        Mat4::Mat4(aMStack_c8,param_2);
        local_88 = (undefined1)(param_3 & 1);
        std::__ndk1::function<void()>::operator=
                  ((function<void()> *)(this + 0x590),(__bind *)&local_e0);
        Mat4::~Mat4(aMStack_c8);
      }
      Renderer::addCommand(param_1,(RenderCommand *)this_00);
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

