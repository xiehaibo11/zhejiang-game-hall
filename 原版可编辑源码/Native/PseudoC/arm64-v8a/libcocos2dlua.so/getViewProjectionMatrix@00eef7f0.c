
/* cocos2d::Camera::getViewProjectionMatrix() const */

Camera * __thiscall cocos2d::Camera::getViewProjectionMatrix(Camera *this)

{
  getViewMatrix(this);
                    /* try { // try from 00eef804 to 00fef81b has its CatchHandler @ 00eef8a8 */
  if (this[0x428] != (Camera)0x0) {
    this[0x428] = (Camera)0x0;
                    /* try { // try from 00eef81c to 00fef8f7 has its CatchHandler @ 00eef6e8 */
    Mat4::multiply((Mat4 *)(this + 0x300),(Mat4 *)(this + 0x340),(Mat4 *)(this + 0x3c0));
  }
  return this + 0x3c0;
}

