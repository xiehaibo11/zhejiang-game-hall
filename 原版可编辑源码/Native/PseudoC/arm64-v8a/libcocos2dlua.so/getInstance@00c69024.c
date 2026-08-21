
/* cocostudio::SceneReader::getInstance() */

SceneReader * cocostudio::SceneReader::getInstance(void)

{
  SceneReader *this;
  
  this = s_sharedReader;
  if ((s_sharedReader == (SceneReader *)0x0) &&
     (this = operator_new(0x50,(nothrow_t *)&std::nothrow), this != (SceneReader *)0x0)) {
    SceneReader(this);
  }
  s_sharedReader = this;
  return s_sharedReader;
}

