
/* cocos2d::RenderTexture::~RenderTexture() */

void __thiscall cocos2d::RenderTexture::~RenderTexture(RenderTexture *this)

{
  ~RenderTexture(this);
  operator_delete(this);
  return;
}

