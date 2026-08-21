local CURRENT_MOUDLE_NAME = ...
local UITipsLayer = class("UITipsLayer")

local KW_UI_TIPS_BACK       =   "KW_UI_TIPS_BACK"
local KW_TEXT_TIPS          =   "KW_TEXT_TIPS"
local KW_UI_TIPS            = "KW_UI_TIPS"
local fadeInTime            = 0.2
local fadeOutTime           = 0.2
local showTipsTime          = 3
local beforeShowTipsTime    = 1
local tipsHeight            = 35
local tipsBackMargin        = 80

local MiniTipTable = {

        "心态要稳，算牌要准，下手要狠",
        "一炸善等待，多炸应果断！",
        "压上家，顶下家，放对家",
        "关注丽水茶苑公众号免费领福利",
        "选择顺子的头牌和尾牌，可以立起该顺子",
        "点击非牌区可以落下所有选中的牌",
        "有2的循环炸弹是同牌型中最小的循环炸弹",

        "双扣是一个团队游戏，互相配合才是取胜的关键",
        "一盘接一盘，炸弹越炸越多",
        "双扣游戏，七分牌技，三分运气",

        "点击一头一尾两张牌，就可以提起长顺子",
        "点击右下角的“排序”按钮，自由切换排序方式",
        "逃跑的人需要承包所有玩家的得分！",
        "”三王”是最小的6线炸弹",
        "”四王”是最小的7线炸弹",
        "单局打出4个4线，将获得1个6线的贡献分",
        "单局打出2个5线，将获得1个6线的贡献分",
        "单局打出2个6线，将获得1个7线的贡献分",
        "7线贡献分为18！",
        "8线贡献分为30！",
        "9线贡献分为45！",
        "10线贡献分为60！",
        "11线贡献分为75！",
        "12线贡献分为90！"
}

function UITipsLayer:ctor()
    self._tipsLayer = nil
    self._curTip = 1
end

function UITipsLayer:init(node)
    self._tipsLayer = node
    self:randomTips()
end

function UITipsLayer:showMiniTips(bShow)
    if self._tipsLayer == nil then
        return
    end
    if #MiniTipTable > 0 then
        if bShow then
            Game.UIFunction.setVisible(self._tipsLayer,KW_UI_TIPS,true)
            local fadeInAction      = cc.FadeIn:create(fadeInTime)
            local delayAction       = cc.DelayTime:create(showTipsTime)
            local delayBeforeAction = cc.DelayTime:create(beforeShowTipsTime)
            local fadeOutAction     = cc.FadeOut:create(fadeOutTime)
            local sequenceAction    = cc.Sequence:create({delayBeforeAction ,cc.CallFunc:create(
                function ()
                    local tipsText   = ccui.Helper:seekWidgetByName(self._tipsLayer,KW_TEXT_TIPS)
                    if tipsText then
                        tipsText:setString(MiniTipTable[self._curTip])
                        local sizeOfTips = {}
                        sizeOfTips = tipsText:getCustomSize()
                    end
                    if self._curTip == #MiniTipTable then
                        self._curTip = 1
                        UITipsLayer:randomTips()
                    elseif self._curTip < #MiniTipTable then
                        self._curTip = self._curTip + 1
                    end         
                end
            ), fadeInAction , delayAction, fadeOutAction})
            local repeatAction = cc.RepeatForever:create(sequenceAction)
            self._tipsLayer:stopAllActions()
            self._tipsLayer:runAction(repeatAction)
        else
            Game.UIFunction.setVisible(self._tipsLayer,KW_UI_TIPS,false)
            self._tipsLayer:stopAllActions()
        end
    end
end

function UITipsLayer:randomTips()
    math.randomseed(tostring(os.time()):reverse():sub(1, 7)) 
    if #MiniTipTable > 1 then   
        for  i = 1 , #MiniTipTable do
            local temp = nil
            local randomnum = 0
            if i == 1 then
                randomnum = math.random(#MiniTipTable - i -1)
            elseif i > 1 and i < #MiniTipTable then
                randomnum = math.random(#MiniTipTable - i)
            end
            temp = MiniTipTable[i]
            MiniTipTable[i] = MiniTipTable[i + randomnum]
            MiniTipTable[i + randomnum] = temp
        end
    end
end


function UITipsLayer:setMiniTips(tipstable)
    if tipstable then
        MiniTipTable = tipstable
    end
end


return UITipsLayer)