
/* cocos2d::renderer::TiledMapAssembler::renderNodes(unsigned long) */

void __thiscall
cocos2d::renderer::TiledMapAssembler::renderNodes(TiledMapAssembler *this,ulong param_1)

{
  ulong *puVar1;
  long lVar2;
  ulong *puVar3;
  int iVar4;
  void *__dest;
  TiledMapAssembler *pTVar5;
  Mat4 *pMVar6;
  TiledMapAssembler *pTVar7;
  TiledMapAssembler *pTVar8;
  RenderFlow *this_00;
  NodeProxy *pNVar9;
  ulong __n;
  void *__src;
  ulong uVar10;
  ulong local_80;
  ulong uStack_78;
  void *local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
                    /* catch() { ... } // from try @ 009cfa2c with catch @ 009cfb88 */
                    /* catch() { ... } // from try @ 009cfb54 with catch @ 009cfb90 */
  if (((DAT_01d382d8 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_01d382d8), iVar4 != 0)) {
                    /* catch() { ... } // from try @ 009cfa54 with catch @ 009cfb94 */
                    /* catch() { ... } // from try @ 009cfb00 with catch @ 009cfb98 */
    Mat4::Mat4((Mat4 *)&DAT_01d38298);
                    /* catch() { ... } // from try @ 009cfa38 with catch @ 009cfba0 */
                    /* catch() { ... } // from try @ 009cfa8c with catch @ 009cfba8 */
                    /* catch() { ... } // from try @ 009cfab4 with catch @ 009cfbb0 */
    __cxa_atexit(Mat4::~Mat4,&DAT_01d38298,&PTR_LOOP_01d1b000);
                    /* catch() { ... } // from try @ 009cfa98 with catch @ 009cfbbc */
                    /* catch() { ... } // from try @ 009cfb28 with catch @ 009cfbc4 */
    __cxa_guard_release(&DAT_01d382d8);
  }
  pTVar5 = this + 0x98;
  pTVar8 = *(TiledMapAssembler **)pTVar5;
  if (pTVar8 != (TiledMapAssembler *)0x0) {
    pNVar9 = *(NodeProxy **)(this + 0xa8);
    pMVar6 = *(Mat4 **)(pNVar9 + 0x98);
    pTVar7 = pTVar5;
    do {
      if (*(ulong *)(pTVar8 + 0x20) >= param_1) {
        pTVar7 = pTVar8;
      }
      pTVar8 = *(TiledMapAssembler **)(pTVar8 + (ulong)(*(ulong *)(pTVar8 + 0x20) < param_1) * 8);
    } while (pTVar8 != (TiledMapAssembler *)0x0);
    if ((pTVar7 != pTVar5) && (*(ulong *)(pTVar7 + 0x20) <= param_1)) {
      puVar1 = *(ulong **)(pTVar7 + 0x30);
      if (*(ulong **)(pTVar7 + 0x28) != puVar1) {
                    /* try { // try from 009cfa18 to 00acfa2b has its CatchHandler @ 009cf54c */
        this_00 = *(RenderFlow **)(*(long *)(this + 0xb0) + 0x68);
        puVar3 = *(ulong **)(pTVar7 + 0x28);
                    /* try { // try from 009cfa2c to 00acfa37 has its CatchHandler @ 009cfb88 */
        do {
          uStack_78 = 0;
          local_70 = (void *)0x0;
          local_80 = 0;
          if ((*puVar3 & 1) == 0) {
            local_70 = (void *)puVar3[2];
                    /* try { // try from 009cfa54 to 00acfa67 has its CatchHandler @ 009cfb94 */
            uStack_78 = puVar3[1];
            local_80 = *puVar3;
          }
          else {
            __n = puVar3[1];
            if (0xffffffffffffffef < __n) {
                    /* catch() { ... } // from try @ 009cfb30 with catch @ 009cfbcc */
                    /* WARNING: Subroutine does not return */
              std::__ndk1::__basic_string_common<true>::__throw_length_error();
            }
                    /* try { // try from 009cfa70 to 00acfa77 has its CatchHandler @ 009cfc08 */
            __src = (void *)puVar3[2];
                    /* try { // try from 009cfa78 to 00acfa8b has its CatchHandler @ 009cf54c */
            if (__n < 0x17) {
              local_80 = (ulong)(byte)((int)__n << 1);
              __dest = (void *)((ulong)&local_80 | 1);
              if (__n != 0) goto LAB_009cfac4;
            }
            else {
                    /* try { // try from 009cfa98 to 00acfab3 has its CatchHandler @ 009cfbbc */
              uVar10 = __n + 0x10 & 0xfffffffffffffff0;
              __dest = operator_new(uVar10);
              local_80 = uVar10 | 1;
                    /* try { // try from 009cfab4 to 00acfac7 has its CatchHandler @ 009cfbb0 */
              uStack_78 = __n;
              local_70 = __dest;
LAB_009cfac4:
              memcpy(__dest,__src,__n);
            }
            *(undefined1 *)((long)__dest + __n) = 0;
          }
                    /* try { // try from 009cfad8 to 00acfadf has its CatchHandler @ 009cfc08 */
                    /* try { // try from 009cfae0 to 00acfaf3 has its CatchHandler @ 009cf54c */
          pNVar9 = (NodeProxy *)NodeProxy::getChildByID(pNVar9,&local_80);
          if ((local_80 & 1) != 0) {
                    /* try { // try from 009cfaf4 to 00acfaff has its CatchHandler @ 009cfb80 */
            operator_delete(local_70);
          }
          if (pNVar9 != (NodeProxy *)0x0) {
                    /* try { // try from 009cfb00 to 00acfb13 has its CatchHandler @ 009cfb98 */
            *(undefined2 *)(pNVar9 + 0x40) = 1;
            NodeProxy::updateLocalMatrix(pNVar9);
            Mat4::multiply(pMVar6,*(Mat4 **)(pNVar9 + 0x90),(Mat4 *)&DAT_01d38298);
                    /* try { // try from 009cfb28 to 00acfb2f has its CatchHandler @ 009cfbc4 */
            NodeProxy::updateWorldMatrix(pNVar9,(Mat4 *)&DAT_01d38298);
                    /* try { // try from 009cfb30 to 00acfb3f has its CatchHandler @ 009cfbcc */
            RenderFlow::visit(this_00,pNVar9);
            *(undefined2 *)(pNVar9 + 0x40) = 0x100;
          }
          if (puVar1 == puVar3 + 3) break;
          pNVar9 = *(NodeProxy **)(this + 0xa8);
                    /* try { // try from 009cfa38 to 00acfa53 has its CatchHandler @ 009cfba0 */
          puVar3 = puVar3 + 3;
        } while( true );
      }
    }
  }
  ModelBatcher::changeCommitState(*(ModelBatcher **)(this + 0xb0),1);
                    /* try { // try from 009cfb54 to 00acfb67 has its CatchHandler @ 009cfb90 */
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 009cfb68 to 00acfc5f has its CatchHandler @ 009cf54c */
                    /* catch() { ... } // from try @ 009cfaf4 with catch @ 009cfb80 */
  return;
}

