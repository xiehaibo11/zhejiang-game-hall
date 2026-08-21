
/* cocos2d::renderer::Effect::~Effect() */

void __thiscall cocos2d::renderer::Effect::~Effect(Effect *this)

{
  ~Effect(this);
                    /* try { // try from 009bfb28 to 00abfb7b has its CatchHandler @ 009bfb28
                       catch() { ... } // from try @ 009bfb28 with catch @ 009bfb28
                       catch() { ... } // from try @ 009bfcb8 with catch @ 009bfb28 */
  operator_delete(this);
  return;
}

