
/* cocos2d::network::HttpClient::getInstance() */

HttpClient * cocos2d::network::HttpClient::getInstance(void)

{
  HttpClient *this;
  
  this = DAT_0178f4a0;
  if ((DAT_0178f4a0 == (HttpClient *)0x0) &&
     (this = operator_new(0x370,(nothrow_t *)&std::nothrow), this != (HttpClient *)0x0)) {
    HttpClient(this);
  }
  DAT_0178f4a0 = this;
  return DAT_0178f4a0;
}

