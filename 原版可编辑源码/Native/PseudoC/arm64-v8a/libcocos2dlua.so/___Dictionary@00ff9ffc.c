
/* cocos2d::__Dictionary::~__Dictionary() */

void __thiscall cocos2d::__Dictionary::~__Dictionary(__Dictionary *this)

{
                    /* try { // try from 00ffa010 to 010fa017 has its CatchHandler @ 00ffa1a4 */
  *(undefined ***)this = &PTR____Dictionary_01724bf8;
  *(undefined ***)(this + 0x28) = &PTR_clone_01724c28;
                    /* try { // try from 00ffa024 to 010fa033 has its CatchHandler @ 00ffa120 */
  removeAllObjects(this);
                    /* try { // try from 00ffa034 to 010fa04f has its CatchHandler @ 00ffa140 */
  Ref::~Ref((Ref *)this);
  return;
}

