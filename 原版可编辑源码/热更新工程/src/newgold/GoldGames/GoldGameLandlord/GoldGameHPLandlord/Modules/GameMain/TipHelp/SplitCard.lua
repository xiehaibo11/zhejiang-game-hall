local SplitCard = class("SplitCard")

function SplitCard:ctor(param)
    self:clear()
end

function SplitCard:clear()
    self.single = {} --只有一个
    self.pairs={}
    self.three={}
    self.four={}--四个相同牌
    self.five={}--五个相同牌
    self.six={}--六个相同牌
    self.seven={}--七个相同牌
    self.eight={}--八个相同牌
    self.sj={}--大王
    self.bj={}--小王
    self.cardList = {} --牌值
    self.cardLen = {} --牌长度 --[[{}],[[1],[2]],[[1,2],[2,3],[4,5]],[[1,2,3],[3,4,5]]
end

function SplitCard:printSelf()
    dump(self.bj,"bj")
    dump(self.cardLen,"cardLen")
    dump(self.cardList,"cardList")
    dump(self.eight,"eight")
    dump(self.five,"five")
    dump(self.four,"four")
    dump(self.pairs,"pairs")
    dump(self.seven,"seven")
    dump(self.single,"single")
    dump(self.six,"six")
    dump(self.sj,"sj")
    dump(self.three,"three")
end



return SplitCard