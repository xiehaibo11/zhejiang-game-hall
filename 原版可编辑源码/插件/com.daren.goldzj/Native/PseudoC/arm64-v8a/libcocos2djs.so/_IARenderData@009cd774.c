
/* cocos2d::renderer::Assembler::IARenderData::~IARenderData() */

void __thiscall cocos2d::renderer::Assembler::IARenderData::~IARenderData(IARenderData *this)

{
                    /* catch() { ... } // from try @ 009cd540 with catch @ 009cd774 */
                    /* catch() { ... } // from try @ 009cd534 with catch @ 009cd778 */
                    /* catch() { ... } // from try @ 009cd514 with catch @ 009cd77c */
  if (*(Ref **)this != (Ref *)0x0) {
    Ref::release(*(Ref **)this);
  }
                    /* catch() { ... } // from try @ 009cd54c with catch @ 009cd78c */
  return;
}

