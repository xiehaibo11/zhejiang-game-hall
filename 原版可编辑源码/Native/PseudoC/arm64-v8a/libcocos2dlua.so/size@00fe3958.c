
/* cocos2d::RenderQueue::size() const */

long __thiscall cocos2d::RenderQueue::size(RenderQueue *this)

{
                    /* catch() { ... } // from try @ 00fe3994 with catch @ 00fe3960 */
                    /* try { // try from 00fe398c to 010e3993 has its CatchHandler @ 00fe39f8 */
                    /* try { // try from 00fe3994 to 010e3a13 has its CatchHandler @ 00fe3960 */
  return (*(long *)(this + 0x20) - *(long *)(this + 0x18) >> 3) +
         (*(long *)(this + 8) - *(long *)this >> 3) +
         (*(long *)(this + 0x38) - *(long *)(this + 0x30) >> 3) +
         (*(long *)(this + 0x50) - *(long *)(this + 0x48) >> 3) +
         (*(long *)(this + 0x68) - *(long *)(this + 0x60) >> 3);
}

