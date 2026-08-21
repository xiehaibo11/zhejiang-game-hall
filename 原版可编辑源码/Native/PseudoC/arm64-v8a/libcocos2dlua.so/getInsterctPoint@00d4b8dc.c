
/* cocos2d::Terrain::Triangle::getInsterctPoint(cocos2d::Ray const&, cocos2d::Vec3&) const */

void cocos2d::Terrain::Triangle::getInsterctPoint(Ray *param_1,Vec3 *param_2)

{
  Vec3 *in_x2;
  
  getIntersectPoint((Triangle *)param_1,(Ray *)param_2,in_x2);
  return;
}

