local GameBagUILogic = CF.gameClass("GameBagUILogic")
local BagPropConfig = CF.gameRequire("game.Common.Config.BagPropConfig")
local BagConfig = require("lobby.Modules.BagSysNew.Config")

local HEAD_FRAME_NAME = "KW_DEFAULT_HEAD_IMG_FRAME"
local LOCAL_SEAT_SELF = CF.GameDefine and CF.GameDefine.LOCAL_SEAT.BOTTOM or 2

function GameBagUILogic.showHeadFrame(parentNode, frameUrl, positionOffset, contentSizeOffset, propid)
    if not parentNode then
        return
    end

    local isShow = true
    if CF.settingData and CF.settingData:getIsClearModel() then
        isShow = false
    end
    if not isShow or not frameUrl then
        parentNode:removeChildByName(HEAD_FRAME_NAME)
        return
    end
    parentNode:removeChildByName(HEAD_FRAME_NAME)
    local parentSize = parentNode:getContentSize()
    local posOffsetW = positionOffset and positionOffset.width or 0
    local posOffsetH = positionOffset and positionOffset.height or 0
    local conOffsetW = contentSizeOffset and contentSizeOffset.width or 0
    local conOffsetH = contentSizeOffset and contentSizeOffset.height or 0
    if not GameBagUILogic.createHeadFrameAni(parentNode,propid,1.8,HEAD_FRAME_NAME) then
        local headImgFrame = CF.RemoteImage.new()
        headImgFrame:ignoreContentAdaptWithSize(false)
        headImgFrame:setName(HEAD_FRAME_NAME)
        headImgFrame:addTo(parentNode)
        headImgFrame:setPosition(parentSize.width / 2 + posOffsetW, parentSize.height / 2 + posOffsetH)
        headImgFrame:setContentSize(parentSize.width + conOffsetW, parentSize.height + conOffsetH)
        headImgFrame:setUrl(frameUrl)
    end
end

function GameBagUILogic.showCaiShenHeadFrame(parentNode, positionOffset, contentSizeOffset, isHide)
    if not parentNode then
        return
    end

    local isShow = not isHide and not CF.settingData:getIsClearModel()
    if not isShow then
        parentNode:removeChildByName(HEAD_FRAME_NAME)
        return
    end
    parentNode:removeChildByName(HEAD_FRAME_NAME)
    local parentSize = parentNode:getContentSize()
    local posOffsetW = positionOffset and positionOffset.width or 0
    local posOffsetH = positionOffset and positionOffset.height or 0
    local conOffsetW = contentSizeOffset and contentSizeOffset.width or 0
    local conOffsetH = contentSizeOffset and contentSizeOffset.height or 0
    
    local headImgFrame = ccui.ImageView:create()
    headImgFrame:ignoreContentAdaptWithSize(false)
    headImgFrame:setName(HEAD_FRAME_NAME)
    headImgFrame:addTo(parentNode)
    headImgFrame:setPosition(parentSize.width / 2 + posOffsetW, parentSize.height / 2 + posOffsetH)
    headImgFrame:setContentSize(parentSize.width + conOffsetW, parentSize.height + conOffsetH)
    headImgFrame:loadTexture("cocosStudio/Common/Image/caiyun_bigwinlost_head_bg.png", ccui.TextureResType.localType)
end

function GameBagUILogic.createHeadFrameAni(node, propid, scale, name)
    scale = scale or 0.6
    name = name or "_KW_HEAD_FRAME_ANI"
    if propid and node and BagPropConfig.HEAD_FRAM_ANI[propid] then
        if BagPropConfig.HEAD_FRAM_ANI[propid].AniInfo then
            local aniInfo = BagPropConfig.HEAD_FRAM_ANI[propid].AniInfo
            local nodeSize = node:getContentSize()
            ccs.ArmatureDataManager:getInstance():addArmatureFileInfo(aniInfo.File)
            local showArmature = ccs.Armature:create(aniInfo.ArmatureName)
            if showArmature then
                showArmature:setName(name)
                node:addChild(showArmature)
                showArmature:setAnchorPoint(cc.p(0.5, 0.5))
                showArmature:getAnimation():play(aniInfo.AniName, -1, 1)
                showArmature:setScale(nodeSize.width/showArmature:getContentSize().width*scale)
                showArmature:setPosition(nodeSize.width/2,nodeSize.height/2)
            end
            return true
        elseif BagPropConfig.HEAD_FRAM_ANI[propid].SpineInfo then
            local cfg = clone(BagPropConfig.HEAD_FRAM_ANI[propid].SpineInfo)
            local nodeSize = node:getContentSize()
            local showArmature = display.playDargonBonesSpine(cfg)
            local child = node:getChildByName(name)
            if child then
                child:removeFromParent()
            end
            if showArmature and node then
                node:addChild(showArmature)
                showArmature:setName(name)
                showArmature:setAnchorPoint(cc.p(0.5, 0.5))
                showArmature:setPosition(node:getContentSize().width/2,node:getContentSize().height/2)
                showArmature:setScale(nodeSize.width/cfg.size.width)
            end
            return true
        elseif BagPropConfig.HEAD_FRAM_ANI[propid].DargonBonesInfo then
            return false
        end
    end
    return false
end

local CARD_HOLDER_DRAGON_NAME = "CARD_HOLDER_DRAGON_NAME"
function GameBagUILogic.showCardHolderAni(parentNode, propId, position)
    if not parentNode or not propId or not position then
        return
    end

    local dragonAniNode = CF.UITool.seekNodeByName(parentNode, CARD_HOLDER_DRAGON_NAME)
    if dragonAniNode then
        return
    end

    local params = BagPropConfig.YPQ_ANI_CONFIG[propId]
    if not params then
        return 
    end

    local dragonAni = display.playDargonBonesAnimByTimes(params, 1)
    if dragonAni then
        dragonAni:setName(CARD_HOLDER_DRAGON_NAME)
        parentNode:addChild(dragonAni)
        dragonAni:setLocalZOrder(-1)
        dragonAni:setPosition(cc.p(position.x, position.y))
        dragonAni:runAction(
            cc.Sequence:create(
                cc.DelayTime:create(1.2),
                cc.CallFunc:create(
                    function()
            if dragonAni and (not tolua.isnull(dragonAni)) then
                dragonAni:removeSelf()
            end
    end
                )
            )
        )
    end
end

--显示压牌器
-- local t_left    = CF.GameDefine.LOCAL_SEAT.LEFT
-- local t_bottom  = CF.GameDefine.LOCAL_SEAT.BOTTOM
-- local t_right   = CF.GameDefine.LOCAL_SEAT.RIGHT
-- local t_top     = CF.GameDefine.LOCAL_SEAT.TOP

-- local POS_TABLE = {
--     [t_left] = cc.p(display.width * 0.2, display.height * 0.55),
--     [t_bottom] = cc.p(display.width * 0.5, display.height * 0.3),
--     [t_right] = cc.p(display.width * 0.8, display.height * 0.55),
--     [t_top] = cc.p(display.width * 0.5, display.height * 0.7)
-- }
-- local SCALE_TABLE = {[t_left] = 0.65, [t_bottom] = 1, [t_right] = 0.65, [t_top] = 0.65}
-- local ANI_POS_TABLE = {
--     [t_left] = cc.p(POS_TABLE[t_left].x, POS_TABLE[t_left].y - 53),
--     [t_bottom] = cc.p(POS_TABLE[t_bottom].x, POS_TABLE[t_bottom].y - 80),
--     [t_right] = cc.p(POS_TABLE[t_right].x, POS_TABLE[t_right].y - 53),
--     [t_top] = cc.p(POS_TABLE[t_top].x, POS_TABLE[t_top].y - 53)
-- }
local CARD_HOLDER_NAME = "CARD_HOLDER_NAME"
function GameBagUILogic.showCardHolder(parentNode, localSeat, yqpUrl, ypqPropId, positionOffset)
    if not parentNode then
        return
    end

    local isShow = not CF.settingData:getIsClearModel()
    if not isShow or not yqpUrl then
        parentNode:removeChildByName(CARD_HOLDER_NAME)
        parentNode:removeChildByName(CARD_HOLDER_DRAGON_NAME)
        return
    end

    if not localSeat then
        return
    end

    local posOffsetW = positionOffset and positionOffset.width or 0
    local posOffsetH = positionOffset and positionOffset.height or 0
    local pSize = parentNode:getContentSize()
    local cardHolderPos = cc.p(pSize.width* 0.5 + posOffsetW , pSize.height * 0.29 + posOffsetH)
    local cardHolderAniPos = cc.p(cardHolderPos.x ,cardHolderPos.y - 80)
    parentNode:removeChildByName(CARD_HOLDER_NAME)
    local holderImg = CF.RemoteImage:new()
    holderImg:setTouchEnabled(false)
    holderImg:ignoreContentAdaptWithSize(false)
    holderImg:setName(CARD_HOLDER_NAME)
    holderImg:addTo(parentNode)
    holderImg:setLocalZOrder(1)
    holderImg:setPosition(cardHolderPos)
    holderImg:setUrl(yqpUrl)
    holderImg:setVisible(isShow)
    GameBagUILogic.showCardHolderAni(parentNode, ypqPropId, cardHolderAniPos, isShow)
end

--显示桌布
--scaleOffset: {x=1,y=1}
local TABLE_BG_NAME = "TABLE_BG_NAME"
function GameBagUILogic.showTableBg(parentNode, tableUrl, positionOffset, contentSizeOffset, scaleOffset)
    if not parentNode then
        return
    end

    local isShow = not CF.settingData:getIsClearModel()
    if not isShow or not tableUrl then
        parentNode:removeChildByName(TABLE_BG_NAME)
        return
    end

    local tableImg = parentNode:getChildByName(TABLE_BG_NAME)
    if tableImg then tableImg:removeSelf() end
    
    local parentSize = parentNode:getContentSize()
    local posOffsetW = positionOffset and positionOffset.width or 0
    local posOffsetH = positionOffset and positionOffset.height or 0
    local conOffsetW = contentSizeOffset and contentSizeOffset.width or 0
    local conOffsetH = contentSizeOffset and contentSizeOffset.height or 0
    local scaleX = scaleOffset and scaleOffset.x or 1
    local scaleY = scaleOffset and scaleOffset.y or 1

    tableImg = CF.RemoteImage.new()
    tableImg:ignoreContentAdaptWithSize(false)
    tableImg:setName(TABLE_BG_NAME)
    tableImg:addTo(parentNode)
    tableImg:setPosition(parentSize.width / 2 + posOffsetW, parentSize.height / 2 + posOffsetH)
    tableImg:setContentSize(parentSize.width + conOffsetW, parentSize.height + conOffsetH)
    tableImg:setCallBack(function()
        tableImg:setScale(scaleX, scaleY)
    end)
    tableImg:setUrl(tableUrl)
    tableImg:setOpacity(100)
end

--入场动画位置
local W,H = display.width , display.height
local ENTER_ANI_POS = {
    [150300] = {[1] = cc.p(-W*0.30, H*0.05),[2] = cc.p(0, -H*0.45),[3] = cc.p(W*0.35, H*0.05),[4] = cc.p(0, H*0.10),},
    [150301] = {[1] = cc.p(-W*0.35, H*0.15),[2] = cc.p(0, -H*0.35),[3] = cc.p(W*0.35, H*0.15),[4] = cc.p(0, H*0.23),},
    [150302] = {[1] = cc.p(-W*0.30, H*0.15),[2] = cc.p(0, -H*0.35),[3] = cc.p(W*0.30, H*0.15),[4] = cc.p(0, H*0.25),},
    [150303] = {[1] = cc.p(-W*0.35, H*0.15),[2] = cc.p(0, -H*0.30),[3] = cc.p(W*0.35, H*0.15),[4] = cc.p(0, H*0.23),},
    [150355] = {[1] = cc.p(-W*0.35, H*0.15),[2] = cc.p(0, -H*0.35),[3] = cc.p(W*0.35, H*0.15),[4] = cc.p(0, H*0.23),},
    [150671] = {[1] = cc.p(-W*0.30, H*0.15),[2] = cc.p(0, -H*0.35),[3] = cc.p(W*0.30, H*0.15),[4] = cc.p(0, H*0.25),},
    [150691] = {[1] = cc.p(-W*0.30, H*0.15),[2] = cc.p(0, -H*0.20),[3] = cc.p(W*0.30, H*0.15),[4] = cc.p(0, H*0.25),},
}

--入场动画位置，6人
local ENTER_ANI_POS_SIX = {
    [150300] = {[1] = cc.p(-W*0.30, -H*0.15),[2] = cc.p(0, -H*0.45),[3] = cc.p(W*0.35, -H*0.10),[4] = cc.p(W*0.35, H*0.15),[5] = cc.p(0, H*0.10),[6] = cc.p(-W*0.30, H*0.15),},
    [150301] = {[1] = cc.p(-W*0.30, -H*0.00),[2] = cc.p(0, -H*0.35),[3] = cc.p(W*0.35, -H*0.00),[4] = cc.p(W*0.35, H*0.20),[5] = cc.p(0, H*0.23),[6] = cc.p(-W*0.30, H*0.20),},
    [150302] = {[1] = cc.p(-W*0.30, H*0.05),[2] = cc.p(0, -H*0.35),[3] = cc.p(W*0.25, H*0.05),[4] = cc.p(W*0.25, H*0.25),[5] = cc.p(0, H*0.25),[6] = cc.p(-W*0.30, H*0.25),},
    [150303] = {[1] = cc.p(-W*0.30, H*0.05),[2] = cc.p(0, -H*0.30),[3] = cc.p(W*0.30, H*0.05),[4] = cc.p(W*0.30, H*0.25),[5] = cc.p(0, H*0.23),[6] = cc.p(-W*0.30, H*0.25),},
    [150355] = {[1] = cc.p(-W*0.30, -H*0.00),[2] = cc.p(0, -H*0.35),[3] = cc.p(W*0.35, -H*0.00),[4] = cc.p(W*0.35, H*0.20),[5] = cc.p(0, H*0.23),[6] = cc.p(-W*0.30, H*0.20),},
    [150671] = {[1] = cc.p(-W*0.30, H*0.05),[2] = cc.p(0, -H*0.35),[3] = cc.p(W*0.25, H*0.05),[4] = cc.p(W*0.25, H*0.25),[5] = cc.p(0, H*0.25),[6] = cc.p(-W*0.30, H*0.25),},
    [150691] = {[1] = cc.p(-W*0.30, H*0.05),[2] = cc.p(0, -H*0.30),[3] = cc.p(W*0.30, H*0.05),[4] = cc.p(W*0.30, H*0.25),[5] = cc.p(0, H*0.23),[6] = cc.p(-W*0.30, H*0.25),},
}

--入场动画
local ENTER_ANI_NAME  = "ENTER_ANI_NAME_"
local DEFAULT_PLAYER_COUNT = 4
function GameBagUILogic.showEnterAni(parentNode, localSeat, propsid, playerCount, posTable, toHeadNodePos)
    if not parentNode then
        return
    end

    playerCount = playerCount or CF.roomData:getMaxPlayer()
    local aniPosTable = playerCount <= DEFAULT_PLAYER_COUNT and ENTER_ANI_POS or ENTER_ANI_POS_SIX

    if posTable then
        aniPosTable = posTable
    end

    local bStart = CF.roomData:isStartGame()
    if bStart then
        return
    end

    local isShow = not CF.settingData:getIsClearModel()
    if not isShow then
        return
    end
    local aniParams = BagConfig.getZuoJiaAniCfg(propsid)
    if not aniParams then return end
-- propsid = 150803
    local aniPos = propsid < 150801 and aniPosTable[propsid] or aniPosTable[150691]
    if not aniPos then return end
    if not aniPos[localSeat] then return end

    local aniName = ENTER_ANI_NAME .. localSeat
    local propAniTmp = parentNode:getChildByName(aniName)
    if propAniTmp then
        return --某个玩家已经在播放动画了，不能再次播放，播放完成后会自动删除
    end
    local isSelf = localSeat == LOCAL_SEAT_SELF

    local playAniFunc = function()
        local propAni
        local aniTime = 2.1
        if aniParams.spine then
            propAni = cc.Node:create()
            propAni:setScale(isSelf and 1.5 or 1)
            if not isSelf and aniPos[localSeat].x < 0 then
                propAni:setScaleX(-1)
            end

            aniParams.armatureName = "hou"
            aniParams.scale = 1.2
            local ani = display.playDargonBonesSpine(aniParams)
            propAni:addChild(ani)

            local id = propsid
            local cardNode = cc.Node:create()
            cardNode:setCascadeOpacityEnabled(true)
            cardNode:setPosition(260,0)
            local car = cc.Sprite:create("animation/GameCommon/EnterAni/car/icon/"..id..".png")
            car:setAnchorPoint(0.5, 0.5)
            cardNode:addChild(car)
            propAni:addChild(cardNode)
            car:tryAddLuaComponent(cc.ext.CompSpineAction,
                                {jsonFilePath = "animation/GameCommon/EnterAni/car/zzb_rcdj_xqc2.json", animationName = "qian", isLoop = false, boneName = "che", slotName = "che"})

            aniParams.armatureName = "qian"
            aniParams.scale = 1
            ani = display.playDargonBonesSpine(aniParams)
            propAni:addChild(ani)
        else
            propAni, aniTime = display.playDargonBonesAnimByTimes(aniParams,1)
        end
        if propAni then
            parentNode:addChild(propAni)
            propAni:stopAllActions()
            propAni:setName(aniName)
            if aniPos[localSeat] then
                propAni:setPosition(aniPos[localSeat])
            end

            local delay =  cc.DelayTime:create(aniTime)
            local endFunc = cc.CallFunc:create(function()
                if not tolua.isnull(propAni) then
                    propAni:removeSelf()
                end
            end)
            if aniParams.spine then
                propAni:setCascadeOpacityEnabled(true)
                propAni:setOpacity(0)
                propAni:runAction(cc.Sequence:create(cc.DelayTime:create(0.1), cc.CallFunc:create(function() 
                    propAni:setOpacity(255)
                end)))   
            end
            if toHeadNodePos and localSeat == LOCAL_SEAT_SELF and not aniParams.spine then
                local moveToAction = cc.MoveTo:create(0.5,toHeadNodePos)
                local scaleTo = cc.ScaleTo:create(0.5,0.1)
                local spawn = cc.Spawn:create(scaleTo, moveToAction)
                propAni:runAction(cc.Sequence:create(delay,spawn,endFunc))
            else
                propAni:runAction(cc.Sequence:create(delay, endFunc))
            end
        end
    end
    pcall(playAniFunc)
end

return GameBagUILogic�>