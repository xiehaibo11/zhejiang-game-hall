
/* cocostudio::UserCameraReader::~UserCameraReader() */

void __thiscall cocostudio::UserCameraReader::~UserCameraReader(UserCameraReader *this)

{
  cocos2d::Ref::~Ref((Ref *)this);
  operator_delete(this);
  return;
}

