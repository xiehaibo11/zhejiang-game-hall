local PlayerHead = NG.GAME.gameClass("PlayerHead", NG.ViewBase)
local GameMainDefine = NG.GAME.gameRequire("Modules.GameMain.Define.GameMainDefine")
local GoldSoundConfig = NG.GAME.gameRequire("Config.GoldSoundConfig")

function PlayerHead:ctor(params)
    params = params or {}
    PlayerHead.super.ctor(self)

    self._localSeat = params.localSeat
    self:initView()
end

function PlayerHead:getCSBPath()
    return "cocosStudio/GoldNew/Game/HPLandlord/CSB/Player/PlayerHead_1.csb"
end

function PlayerHead:getBindingInfo()
    return {
        --
        ["_KW_PANEL_WIRE_BREAK"] = {varName = "_panelBreak"},
        ["_KW_NODE_NAME"] = {varName = "_nameNode"},
        ["_KW_TEXT_NICKNAME"] = {varName = "_nameText"},
        ["_KW_NODE_GOLD"] = {varName = "_goldNode"},
        ["_KW_TEXT_GOLD"] = {varName = "_goldText"},
        ["_KW_IMG_CARDNUM_BG"] = {varName = "_cardNumBg"},
        ["_KW_TEXT_CARDNUM"] = {varName = "_cardNumText"},
        ["_KW_NODE_JBANI"] = {varName = "_jbAniNode"},
        ["_KW_ICON_LANDLORD"] = {varName = "_landlordIcon"},
        ["_KW_IMG_ADD_DOUBLE"] = {varName = "_addDoubleIcon"},
        ["_KW_IMG_HEAD_FRAME"] = {varName = "_imgHeadFrame", type = NG.UI_TYPE.BUTTON, onTouchEnded = "onClickHead"},
        ["_KW_TALK_BG"] = {varName = "_talkBg"},
        ["_KW_TALK_TEXT"] = {varName = "_talkText"},
        ["_KW_IMG_TRUST"] = {varName = "_trustImg"},
        ["_KW_SG_ANI"] = {varName = "_KW_SG_ANI"},
        ["_KW_IMG_GOLD"] = {varName = "_KW_IMG_GOLD"},
    }
end

function PlayerHead:getProxyEvents()
    return {
        --
        {module = NG.goldGame:getModule("GameMain"), eventKeyName = "EVENT_CALL_DOUBLE", callBack = "onAddDoublePower"},
        {module = NG.goldGame:getModule("GameMain"), eventKeyName = "EVENT_SG_ANI", callBack = "onPlaySGAni"}
    }
end

function PlayerHead:initView()
    if self._cardNumBg then
        self._cardNumBg:setVisible(false)
    end

    if self._localSeat == 1 then
        self._cardNumBg:setPositionX(115)
    elseif self._localSeat == 3 then
        self._cardNumBg:setPositionX(-115)
    end

    if self._landlordIcon then
        self._landlordIcon:setVisible(false)
    end
    if self._addDoubleIcon then
        self._addDoubleIcon:setVisible(false)
    end
    self._trustImg:setVisible(false)
    self._headImg = nil

    -- 俏皮话
    if self._localSeat == 3 then
        self._talkBg:setFlippedX(true)
        self._talkText:setFlippedX(true)
        self._talkBg:setPositionX(-self._talkBg:getPositionX())
    end
end

function PlayerHead:showTrust(isTrust)
    self._trustImg:setVisible(isTrust)
end

local SexHeadImg = {
    WoMan = "newgold_hp_player_main_img_face_0.png",
    Man = "newgold_hp_player_main_img_face_1.png",
}
function PlayerHead:setSex(sex)
    local headImgName = SexHeadImg.WoMan
    if sex == 1 or sex == 49 then
        headImgName = SexHeadImg.Man
    end
    if not self._headImg then
        local size = self._imgHeadFrame:getContentSize()
        self._headImg = NG.RemoteImage.new()
            :setTouchEnabled(false)
            :setPosition(size.width/2, size.height/2)
            :ignoreContentAdaptWithSize(false)
            :setContentSize(size.width - 10, size.height - 10)
            :addTo(self._imgHeadFrame)
    end
    self._headImg:setDefaultTexture(headImgName, ccui.TextureResType.plistType)
    self._headImg:setUrl()
end

function PlayerHead:setGoldNum(goldNum)
    if not self._goldText then
        return
    end
    self._goldText:setString(NG.StringTool.getScoreStr(goldNum))
end

function PlayerHead:setPlayerName(nameStr)
    if not self._nameText then
        return
    end
    if string.len(nameStr) > 12 then
        local validBytes = NG.StringTool.getMinimumValidBytesUTF8(nameStr, 12)
        nameStr = string.sub(nameStr, 1, validBytes) .. "..."
    end
    self._nameText:setString(nameStr)
end

function PlayerHead:showLandlordIcon(isShow)
    if self._landlordIcon then
        self._landlordIcon:setVisible(isShow or false)
    end
end

function PlayerHead:showCardNum(isShow, cardNum)
    if not self._cardNumBg or not self._cardNumText then
        return
    end
    cardNum = cardNum or 0
    local lastCardNum = tonumber(self._cardNumText:getString())
    self._cardNumBg:setVisible(isShow or false)
    self._cardNumText:setString(cardNum)

    if cardNum <= 2 then
        if cardNum == 2 and lastCardNum ~= 2 then
            NG.soundManager:playOtherEffect(GoldSoundConfig.otherBaojing2)
        elseif cardNum == 1 and lastCardNum ~= 1 then
            NG.soundManager:playOtherEffect(GoldSoundConfig.otherBaojing1)
        end
        local spineNode = NG.UITool.playDargonBonesSpine("NewGoldRes/Spine/HPLandlord/GameMain/", "Hp_jb.json", "Hp_jb.atlas", "animation", true)
        if spineNode then
            self._jbAniNode:addChild(spineNode)
        end
    else
        self._jbAniNode:removeAllChildren()
    end
end

function PlayerHead:onClickHead()
    local playInfo = {}
    local playerdata = NG.GAME.roomTableData:getPlayerByLocalSeat(self._localSeat)
    if playerdata ~= nil then
        playInfo.NickName = playerdata._nickname
        playInfo.NumId = playerdata._numid
        playInfo.JoyBean = playerdata._sr
        playInfo.GameCount = playerdata._win + playerdata._lose + playerdata._draw + playerdata._escape
        playInfo.WinRate = "0%"
        if playInfo.GameCount > 0 then
            playInfo.WinRate = math.floor(playerdata._win * 100 / playInfo.GameCount) .. "%"
        end
        playInfo.Sex = playerdata._sex
        playInfo.headUrl = playerdata._headUrl
    end
    NG.GAME.gameRequire("Modules.PlayerInfo.PlayerInfoLayer").new():showSelf(playInfo)
end

function PlayerHead:showTalkMsg(msgIndex)
    print("get talk index:" .. msgIndex)
    local chatlist = GameMainDefine.ChatList
    print("get talk msg:" .. chatlist[msgIndex])

    self._talkBg:setVisible(true)
    self._talkText:setString(chatlist[msgIndex])
    self._talkBg:stopAllActions()

    local delayTime = 2
    local delayAction = cc.DelayTime:create(delayTime)
    local callFunc = cc.CallFunc:create(function()
        self._talkBg:setVisible(false)
    end)
    self._talkBg:runAction(cc.Sequence:create(delayAction, callFunc))
end

function PlayerHead:onAddDoublePower(event)
    if event == nil or event.data == nil then
        return
    end
    local localSeat = NG.GAME.roomTableData:seatToLocal(event.data.nSeat)
    if localSeat == self._localSeat then
        self._addDoubleIcon:setVisible(false)
        if event.data.nType == 2 then
            self._addDoubleIcon:loadTexture("newgold_hp_player_img_jb.png", ccui.TextureResType.plistType) -- 加倍
            self._addDoubleIcon:setVisible(true)
        elseif event.data.nType == 4 then
            self._addDoubleIcon:loadTexture("newgold_hp_player_img_cjjb.png", ccui.TextureResType.plistType) -- 超级加倍
            self._addDoubleIcon:setVisible(true)
        end
    end
end

function PlayerHead:onPlaySGAni()
    self._KW_SG_ANI:removeAllChildren()
    local params = {path = "NewGoldRes/Spine/HPLandlord/Result/", tex = "Hp_sg.json", ske = "Hp_sg.atlas", armatureName = "animation"}
    local spineNode = NG.UITool.playDargonBonesSpine(params.path, params.tex, params.ske, params.armatureName, false)
    if spineNode then
        self._KW_SG_ANI:addChild(spineNode)
    end
end

function PlayerHead:setHeadUrl(url)
    if url == "" then
        return
    end
    if not self._headImg then
        local size = self._imgHeadFrame:getContentSize()
        self._headImg = NG.RemoteImage.new()
            :setTouchEnabled(false)
            :setPosition(size.width/2, size.height/2)
            :ignoreContentAdaptWithSize(false)
            :setContentSize(size.width - 10, size.height - 10)
            :addTo(self._imgHeadFrame)
    end
    self._headImg:setUrl(url)
end

return PlayerHead
 �  