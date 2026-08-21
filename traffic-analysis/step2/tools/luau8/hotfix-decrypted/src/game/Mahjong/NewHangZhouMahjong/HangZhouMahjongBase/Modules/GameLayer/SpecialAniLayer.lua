local SpecialAniLayer = CF.gameClass("SpecialAniLayer", CF.ViewBase)

function SpecialAniLayer:getCSBPath()
    return "cocosStudio/MahjongNew/GameLayer/CSB/HangZhou/AniLayer.csb"
end

function SpecialAniLayer:getBindingInfo()
    return {
        ["_KW_POS_ANI_"] = { varName = "_aniPos", beginIndex = 1, endIndex = 4 },
        ["_KW_POS_GEN_"] = { varName = "_KW_POS_GEN_", beginIndex = 1, endIndex = 4 },
    }
end

function SpecialAniLayer:ctor(param)
    param = param or {}
	SpecialAniLayer.super.ctor(self,param)
end

function SpecialAniLayer:getProxyEvents()
    return {
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_REPLAYCE_SHOW_ANI", callBack = "onShowPlayReplaceAni"},
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_SHOW_GENZHUANG_SCORE", callBack = "onShowPlayGenZhuang"},
    }
end

function SpecialAniLayer:onShowPlayReplaceAni(event)
    if CF.roomData and CF.roomData:getIsFastPlay() then
        return
    end
    local msg = event.msg
    local aniPanel = {"_aniPos1", "_aniPos2", "_aniPos3", "_aniPos4"}
    local playAniNode = self[aniPanel[msg.seat]]
    if playAniNode then
        playAniNode:stopAllActions()
        playAniNode:removeAllChildren()
        playAniNode:setVisible(true)
        local aniPath = "res/animation/GameCommon/cardtype_ani_buhua/cardtype_ani_buhua.ExportJson"
        local aniName = "cardtype_ani_buhua"
        CF.UITool.playJsonAnimation(playAniNode, aniName, aniPath, 0, nil, nil, function()
            playAniNode:setVisible(false)
        end)
    end
end

function SpecialAniLayer:onShowPlayGenZhuang(event)
    local msg = event.data
    local loseSeat = CF.roomData:seatToLocal(msg.seat)
    for i = 1, 4 do
        local node = self["_KW_POS_GEN_" .. i]
        local winNode = node:getChildByName("KW_TEXT_WIN")
        local loseNode = node:getChildByName("KW_TEXT_LOSE")
        winNode:setVisible(i ~= loseSeat)
        loseNode:setVisible(i == loseSeat)
        if i == loseSeat then
            loseNode:setString("跟庄-" .. (msg.score + msg.score2) * 3)
        else
            winNode:setString("跟庄+" .. (msg.score + msg.score2))
        end
        node:setVisible(true)
        node:runAction(cc.Sequence:create(
        cc.FadeIn:create(0.1),
        cc.DelayTime:create(3),
        cc.FadeOut:create(1),
        cc.CallFunc:create(function()
            node:setVisible(false)
        end)
        ))
    end
end

return SpecialAniLayer�	