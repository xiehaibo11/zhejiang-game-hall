
/* cocostudio::DataReaderHelper::~DataReaderHelper() */

void __thiscall cocostudio::DataReaderHelper::~DataReaderHelper(DataReaderHelper *this)

{
  thread *this_00;
  
  this[0x138] = (DataReaderHelper)0x1;
  *(undefined ***)this = &PTR__DataReaderHelper_016c9de8;
  std::__ndk1::condition_variable::notify_one((condition_variable *)(this + 0x24));
  if (*(thread **)(this + 0x58) != (thread *)0x0) {
    std::__ndk1::thread::join(*(thread **)(this + 0x58));
    this_00 = *(thread **)(this + 0x58);
    if (this_00 != (thread *)0x0) {
      std::__ndk1::thread::~thread(this_00);
      operator_delete(this_00);
    }
  }
  *(undefined8 *)(this + 0x58) = 0;
  _dataReaderHelper = 0;
  std::__ndk1::mutex::~mutex((mutex *)(this + 0x100));
  std::__ndk1::mutex::~mutex((mutex *)(this + 0xd8));
  std::__ndk1::mutex::~mutex((mutex *)(this + 0xb0));
  std::__ndk1::mutex::~mutex((mutex *)(this + 0x88));
  std::__ndk1::mutex::~mutex((mutex *)(this + 0x60));
  std::__ndk1::condition_variable::~condition_variable((condition_variable *)(this + 0x24));
  cocos2d::Ref::~Ref((Ref *)this);
  return;
}

