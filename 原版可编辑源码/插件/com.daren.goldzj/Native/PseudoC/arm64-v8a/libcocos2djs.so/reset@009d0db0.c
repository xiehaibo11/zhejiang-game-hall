
/* cocos2d::renderer::MeshAssembler::reset() */

void __thiscall cocos2d::renderer::MeshAssembler::reset(MeshAssembler *this)

{
                    /* try { // try from 009d0db0 to 00ad0dbb has its CatchHandler @ 009d0f78 */
                    /* try { // try from 009d0dbc to 00ad0f6f has its CatchHandler @ 009d0f90 */
  CustomAssembler::reset((CustomAssembler *)this);
  RenderDataList::clear((RenderDataList *)(this + 0x78));
  return;
}

