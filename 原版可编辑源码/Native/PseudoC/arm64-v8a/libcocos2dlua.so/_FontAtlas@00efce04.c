
/* cocos2d::FontAtlas::~FontAtlas() */

void __thiscall cocos2d::FontAtlas::~FontAtlas(FontAtlas *this)

{
                    /* try { // try from 00efce04 to 00ffce13 has its CatchHandler @ 00efcf4c */
                    /* try { // try from 00efce14 to 00ffce23 has its CatchHandler @ 00efcf48 */
  ~FontAtlas(this);
  operator_delete(this);
  return;
}

