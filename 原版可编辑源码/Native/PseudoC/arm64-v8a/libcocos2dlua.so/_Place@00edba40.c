
/* cocos2d::Place::~Place() */

void __thiscall cocos2d::Place::~Place(Place *this)

{
                    /* catch() { ... } // from try @ 00edb884 with catch @ 00edba40 */
                    /* catch() { ... } // from try @ 00edb85c with catch @ 00edba44
                       catch() { ... } // from try @ 00edba08 with catch @ 00edba44 */
                    /* catch() { ... } // from try @ 00edb7ac with catch @ 00edba48
                       catch() { ... } // from try @ 00edb9fc with catch @ 00edba48 */
  Action::~Action((Action *)this);
                    /* catch() { ... } // from try @ 00edb7d4 with catch @ 00edba58 */
  operator_delete(this);
  return;
}

