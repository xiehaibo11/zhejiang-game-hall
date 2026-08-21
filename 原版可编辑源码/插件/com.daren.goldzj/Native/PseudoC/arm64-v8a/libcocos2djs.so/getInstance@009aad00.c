
/* cocos2d::network::HttpClient::getInstance() */

HttpClient * cocos2d::network::HttpClient::getInstance(void)

{
  HttpClient *this;
  
                    /* try { // try from 009aad08 to 00aaad1f has its CatchHandler @ 009aae90 */
  this = DAT_01d38008;
                    /* try { // try from 009aad28 to 00aaad33 has its CatchHandler @ 009aae8c */
  if ((DAT_01d38008 == (HttpClient *)0x0) &&
     (this = operator_new(0x318,(nothrow_t *)&std::nothrow), this != (HttpClient *)0x0)) {
                    /* try { // try from 009aad34 to 00aaad3f has its CatchHandler @ 009aae88 */
    HttpClient(this);
  }
  DAT_01d38008 = this;
                    /* try { // try from 009aad40 to 00aaae13 has its CatchHandler @ 009aaea0 */
  return DAT_01d38008;
}

