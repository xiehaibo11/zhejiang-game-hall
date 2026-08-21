
/* cocos2d::network::HttpRequest::~HttpRequest() */

void __thiscall cocos2d::network::HttpRequest::~HttpRequest(HttpRequest *this)

{
  ~HttpRequest(this);
                    /* catch() { ... } // from try @ 00914210 with catch @ 00914310 */
  operator_delete(this);
  return;
}

