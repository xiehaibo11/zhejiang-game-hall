
/* cocos2d::renderer::AssemblerBase::~AssemblerBase() */

void __thiscall cocos2d::renderer::AssemblerBase::~AssemblerBase(AssemblerBase *this)

{
  ~AssemblerBase(this);
                    /* try { // try from 009ce5cc to 00ace673 has its CatchHandler @ 009ce3bc */
  operator_delete(this);
  return;
}

