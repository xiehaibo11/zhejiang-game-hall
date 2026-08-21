
/* cocos2d::Physics3DShape::~Physics3DShape() */

void __thiscall cocos2d::Physics3DShape::~Physics3DShape(Physics3DShape *this)

{
                    /* catch() { ... } // from try @ 010174ac with catch @ 010174f0 */
  ~Physics3DShape(this);
                    /* try { // try from 01017504 to 01117567 has its CatchHandler @ 01017504
                       catch() { ... } // from try @ 01017504 with catch @ 01017504
                       catch() { ... } // from try @ 010175d4 with catch @ 01017504 */
  operator_delete(this);
  return;
}

