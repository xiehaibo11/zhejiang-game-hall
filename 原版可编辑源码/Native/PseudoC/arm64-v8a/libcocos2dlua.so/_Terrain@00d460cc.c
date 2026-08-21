
/* cocos2d::Terrain::~Terrain() */

void __thiscall cocos2d::Terrain::~Terrain(Terrain *this)

{
  ~Terrain(this);
  operator_delete(this);
  return;
}

