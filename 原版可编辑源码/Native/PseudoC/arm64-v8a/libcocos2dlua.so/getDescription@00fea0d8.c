
/* cocos2d::Texture2D::getDescription() const */

void __thiscall cocos2d::Texture2D::getDescription(Texture2D *this)

{
                    /* try { // try from 00fea0e4 to 010ea0e7 has its CatchHandler @ 00fea150 */
                    /* try { // try from 00fea0e8 to 010ea17b has its CatchHandler @ 00fea08c */
  StringUtils::format("<Texture2D | Name = %u | Dimensions = %ld x %ld | Coordinates = (%.2f, %.2f)>"
                      ,(double)*(float *)(this + 0x34),(double)*(float *)(this + 0x38),
                      (ulong)*(uint *)(this + 0x30),(long)*(int *)(this + 0x28),
                      (long)*(int *)(this + 0x2c));
  return;
}

