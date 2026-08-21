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
    return "cocosStudio/GoldNew/Game/MahXueLiu/CSB/Player/PlayerHead.csb"
end

function PlayerHead:getBindingInfo()
    return {
        --
        ["_KW_PANEL_WIRE_BREAK"] = {varName = "_panelBreak"},
        ["_KW_NODE_NAME"] = {varName = "_nameNode"},
        ["_KW_TEXT_NICKNAME"] = {varName = "_nameText"},
        ["_KW_NODE_GOLD"] = {varName = "_goldNode"},
        ["_KW_TEXT_GOLD"] = {varName = "_goldText"},
        ["_KW_NODE_HU"] = {varName = "_huNode"},
        ["_KW_TEXT_HU"] = {varName = "_huText"},
        -- ["_KW_IMG_CARDNUM_BG"] = {varName = "_cardNumBg"},
        -- ["_KW_TEXT_CARDNUM"] = {varName = "_cardNumText"},
        ["_KW_NODE_JBANI"] = {varName = "_jbAniNode"},
        -- ["_KW_ICON_LANDLORD"] = {varName = "_landlordIcon"},
        -- ["_KW_IMG_ADD_DOUBLE"] = {varName = "_addDoubleIcon"},
        ["_KW_IMG_HEAD_FRAME"] = {varName = "_imgHeadFrame", type = NG.UI_TYPE.BUTTON, onTouchEnded = "onClickHead"},
        ["_KW_TALK_BG"] = {varName = "_talkBg"},
        ["_KW_TALK_TEXT"] = {varName = "_talkText"},
        ["_KW_IMG_TRUST"] = {varName = "_trustImg"},
        ["_KW_SG_ANI"] = {varName = "_KW_SG_ANI"},
        -- ["_KW_IMG_GOLD"] = {varName = "_KW_IMG_GOLD"},
    }
end

function PlayerHead:getProxyEvents()
    return {
        --
        {module = NG.goldGame:getModule("GameMain.MahLayer"), eventKeyName = "EVENT_GAME_START", callBack = "onGameStart"},
        {module = NG.goldGame:getModule("GameMain"):getData(), eventKeyName = "EVENT_MAHLAYER_SET_HU_XUELIU", callBack = "onHeadInfo"},
        {module = NG.goldGame:getModule("GameMain"):getData(), eventKeyName = "EVENT_MAHLAYER_ADD_HU_XUELIU", callBack = "onHeadInfo"},
    }
end

function PlayerHead:initView()
    self._trustImg:setVisible(false)
    self._headImg = nil
    self._huNode:setVisible(false)
    -- 俏皮话
    if self._localSeat == 3 then
        self._talkBg:setFlippedX(true)
        self._talkText:setFlippedX(true)
        self._talkBg:setPositionX(-self._talkBg:getPositionX())
    end
    local seat = NG.GAME.roomTableData:localToSeat(self._localSeat)
    local mahs = NG.goldGame:getModule("GameMain"):getData():getHuMahDataXueLiu(seat)
    self._huNode:setVisible(#mahs >= 1)
    self._huText:setString("h" .. #mahs .. "c")


    self._spineNode = NG.UITool.playDargonBonesSpine("NewGoldRes/Spine/Common/Fire/", "Hp_zdtp.json", "Hp_zdtp.atlas", "animation0", true)
    self._spineNode:setScale(1.2)
    self._spineNode:setPositionY(-10)
    self._spineNode:setOpacity(155)
    self._spineNode:setVisible(#mahs >= 3)
    self._huNode:addChild(self._spineNode, 0)
    self._huText:setLocalZOrder(1)
    if self._localSeat == GameMainDefine.SELF_LOCAL_SEAT then
        local winSize = cc.Director:getInstance():getWinSize()
        if winSize.width/winSize.height > 2 then
            self:setPositionY(self:getPositionY() + 100)
        end
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
            :setContentSize(size.width - 1, size.height - 1)
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
end

function PlayerHead:showCardNum(isShow, cardNum)

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

end

function PlayerHead:onGameStart(event)
    self._huNode:setVisible(false)
end
function PlayerHead:onHeadInfo(event)
    if event.data.localSeat == self._localSeat then
        local huNum = event.data.total
        self._huNode:setVisible(huNum >= 1)
        self._huText:setString("h" .. huNum .. "c")
        self._spineNode:setVisible(huNum >= 3)
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
            :setContentSize(size.width -1, size.height -1)
            :addTo(self._imgHeadFrame)
    end
    self._headImg:setUrl(url)
end

return PlayerHead
