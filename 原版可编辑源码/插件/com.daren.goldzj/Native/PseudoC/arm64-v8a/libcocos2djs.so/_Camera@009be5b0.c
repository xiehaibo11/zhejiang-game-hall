
/* cocos2d::renderer::Camera::~Camera() */

void __thiscall cocos2d::renderer::Camera::~Camera(Camera *this)

{
                    /* try { // try from 009be5b4 to 00abe5bf has its CatchHandler @ 009be750 */
                    /* try { // try from 009be5c0 to 00abe6db has its CatchHandler @ 009be768 */
  ~Camera(this);
  operator_delete(this);
  return;
}

