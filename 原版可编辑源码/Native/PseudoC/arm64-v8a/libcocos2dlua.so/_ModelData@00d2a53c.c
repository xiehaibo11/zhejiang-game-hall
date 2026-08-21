
/* cocos2d::ModelData::~ModelData() */

void __thiscall cocos2d::ModelData::~ModelData(ModelData *this)

{
  ~ModelData(this);
  operator_delete(this);
  return;
}

