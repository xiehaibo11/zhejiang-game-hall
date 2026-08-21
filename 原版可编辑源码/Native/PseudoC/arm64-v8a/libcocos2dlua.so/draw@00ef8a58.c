
/* cocos2d::experimental::TMXLayer::draw(cocos2d::Renderer*, cocos2d::Mat4 const&, unsigned int) */

void __thiscall
cocos2d::experimental::TMXLayer::draw(TMXLayer *this,Renderer *param_1,Mat4 *param_2,uint param_3)

{
  undefined8 *puVar1;
  long lVar2;
  bool bVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  IndexBuffer *this_00;
  Ref *this_01;
  ulong uVar7;
  undefined8 uVar8;
  Mat4 *pMVar9;
  int iVar10;
  RenderCommand *pRVar11;
  undefined8 uVar12;
  long *plVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  Rect aRStack_e0 [16];
  Rect aRStack_d0 [16];
  float local_c0;
  float fStack_bc;
  Mat4 aMStack_b8 [64];
  long local_78;
  
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  pMVar9 = param_2;
  updateTotalQuads(this);
  lVar5 = Camera::getVisitingCamera();
  lVar6 = Camera::getDefaultCamera();
  if (lVar5 == lVar6) {
    bVar3 = *(char *)(lVar5 + 0x429) != '\0';
  }
  else {
    bVar3 = true;
  }
  if (((param_3 != 0) || (this[0x488] != (TMXLayer)0x0)) ||
     (!(bool)(this[0x3e4] == (TMXLayer)0x0 & (bVar3 ^ 1U)))) {
    Director::getInstance();
    Director::getVisibleSize();
    plVar13 = (long *)Camera::getVisitingCamera();
    fVar14 = (float)(**(code **)(*plVar13 + 0xe0))();
    fVar16 = local_c0 * 0.5;
    plVar13 = (long *)Camera::getVisitingCamera();
    fVar15 = (float)(**(code **)(*plVar13 + 0xf0))();
    Rect::Rect(aRStack_d0,fVar14 - fVar16,fVar15 - fStack_bc * 0.5,local_c0,fStack_bc);
    Mat4::Mat4(aMStack_b8,param_2);
    Mat4::inverse(aMStack_b8);
    RectApplyTransform((cocos2d *)aRStack_d0,aMStack_b8,pMVar9);
    Rect::operator=(aRStack_d0,aRStack_e0);
    updateTiles(this,aRStack_d0);
    this_00 = *(IndexBuffer **)(this + 0x4a0);
    if (this_00 == (IndexBuffer *)0x0) {
      this_01 = (Ref *)IndexBuffer::create(0,(ulong)(*(long *)(this + 0x420) -
                                                    *(long *)(this + 0x418)) >> 1,0x88e4,1);
      *(Ref **)(this + 0x4a0) = this_01;
      this_00 = (IndexBuffer *)0x0;
      if (this_01 != (Ref *)0x0) {
        Ref::retain(this_01);
        this_00 = *(IndexBuffer **)(this + 0x4a0);
      }
    }
    IndexBuffer::updateIndices
              (this_00,*(void **)(this + 0x418),
               (int)((ulong)(*(long *)(this + 0x420) - (long)*(void **)(this + 0x418)) >> 1),0,0);
    updatePrimitives(this);
    this[0x488] = (TMXLayer)0x0;
    Mat4::~Mat4(aMStack_b8);
  }
                    /* try { // try from 00ef8bf4 to 00ff8bfb has its CatchHandler @ 00ef8e1c */
                    /* try { // try from 00ef8bfc to 00ff8c33 has its CatchHandler @ 00ef8998 */
  lVar5 = *(long *)(this + 0x478) - *(long *)(this + 0x470) >> 3;
  uVar7 = *(ulong *)(this + 0x4c0) + lVar5 * 0x1111111111111111;
  if ((ulong)(lVar5 * -0x1111111111111111) <= *(ulong *)(this + 0x4c0) && uVar7 != 0) {
    std::__ndk1::vector<cocos2d::PrimitiveCommand,std::__ndk1::allocator<cocos2d::PrimitiveCommand>>
    ::__append((vector<cocos2d::PrimitiveCommand,std::__ndk1::allocator<cocos2d::PrimitiveCommand>>
                *)(this + 0x470),uVar7);
  }
  plVar13 = *(long **)(this + 0x4b8);
  if (plVar13 != (long *)0x0) {
    iVar10 = 0;
                    /* try { // try from 00ef8c34 to 00ff8c3f has its CatchHandler @ 00ef8e00 */
    do {
      if (0 < *(int *)(plVar13[3] + 0x3c)) {
        pRVar11 = (RenderCommand *)(*(long *)(this + 0x470) + (long)iVar10 * 0x78);
        uVar7 = Texture2D::hasPremultipliedAlpha(*(Texture2D **)(this + 0x360));
        lVar5 = plVar13[2];
        puVar1 = (undefined8 *)&BlendFunc::ALPHA_PREMULTIPLIED;
        if ((uVar7 & 1) == 0) {
          puVar1 = &BlendFunc::ALPHA_NON_PREMULTIPLIED;
        }
        uVar12 = *puVar1;
        uVar4 = Texture2D::getName(*(Texture2D **)(this + 0x360));
        uVar8 = Node::getGLProgramState((Node *)this);
        PrimitiveCommand::init
                  ((PrimitiveCommand *)(float)(int)lVar5,pRVar11,uVar4,uVar8,uVar12,plVar13[3],
                   this + 0x8c,param_3);
        Renderer::addCommand(param_1,pRVar11);
        iVar10 = iVar10 + 1;
      }
                    /* try { // try from 00ef8c40 to 00ff8d37 has its CatchHandler @ 00ef8998 */
      plVar13 = (long *)*plVar13;
    } while (plVar13 != (long *)0x0);
  }
  if (*(long *)(lVar2 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

