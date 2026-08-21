
/* cocos2d::network::HttpResponse::~HttpResponse() */

void __thiscall cocos2d::network::HttpResponse::~HttpResponse(HttpResponse *this)

{
  ~HttpResponse(this);
                    /* try { // try from 009addc8 to 00aade0b has its CatchHandler @ 009adefc */
  operator_delete(this);
  return;
}

