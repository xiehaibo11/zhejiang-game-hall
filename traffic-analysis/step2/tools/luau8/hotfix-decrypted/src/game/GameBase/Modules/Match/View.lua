-- 匹配玩家UI
local MatchUI = CF.gameClass("MatchUI", CF.ViewBase)

function MatchUI:getCSBPath()
    return "cocosStudio/Common/CSB/GameBase/MatchUI.csb"
end

function MatchUI:getBindingInfo()
    return {
        ["_KW_PANEL_MATCH_ANI"] = {varName = "_matchAni"},
        ["_KW_TEXT_NICKNAME"] = {varName = "_nicknameLabel"},
        ["_KW_TEXT_SCORE"] = {varName = "_scoreLabel"},
        ["_KW_IMG_HEAD_FRAME"] = {varName = "_headFrame"},
        ["_KW_NAME_AND_SCORE_BG"] = {varName = "_nameAndScoreBG"},
        ["_KW_BTN_START"] = {varName = "_startBtn", class = "btn", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventStart"}
    }
end

function MatchUI:ctor(param)
    param = param or {}
    MatchUI.super.ctor(self, param)
    self:initUI()
    self:updateUI()
    self:onTableBgChanged()
end

function MatchUI:getProxyEvents()
    return {
        {module = CF.goldManager, eventKeyName = "EVENT_UPDATE_MATCHUI", callBack = "updateScore"},
        {module = CF.roomData, eventKeyName = "EVENT_HEAD_FRAME_CHANGED", callBack = "onHeadFrameChanged"},
            
        {module = CF.settingData, eventKeyName = "EVENT_CHECK_MAHLAYER_DIMENSION", callBack = "onTableBgChanged"},
        {module = CF.settingData, eventKeyName = "EVENT_TABLE_STYLE", callBack = "onTableBgChanged"},
        {module = CF.settingData, eventKeyName = "EVENT_DOUBLEKOU_TABLE_STYLE_CHANGED", callBack = "onTableBgChanged"},
        {module = CF.settingData, eventKeyName = "EVENT_TABLE_STYLE_CHANGED", callBack = "onTableBgChanged"},
        {module = CF.settingData, eventKeyName = "EVENT_LANDLORDS_TABLE_STYLE_CHANGED", callBack = "onTableBgChanged"},
        {module = CF.settingData, eventKeyName = "EVENT_HONGSHI_TABLE_STYLE_CHANGED", callBack = "onTableBgChanged"},
        {module = CF.settingData, eventKeyName = "EVENT_VISUAL_ANGLE_3D", callBack = "onTableBgChanged"}
    }
end

function MatchUI:onTableBgChanged()
    local inUse = XH.lobby:getModule("SkinBundle"):isPropInUse(XH.XGSJ_PROP_ID.TABLE)
    if self._nameAndScoreBG then
        self._nameAndScoreBG:setVisible(inUse)
    end
end

function MatchUI:initUI()
    if not self._armatureNode then
        self._armatureNode = CF.UITool.playJsonAnimationByName(self._matchAni, "find_ani", "res/animation/GameCommon/find_ani/find_ani.ExportJson", 1, "Animation1", cc.p(0, 0))
    end
end

function MatchUI:updateUI()
    self._nicknameLabel:setString(CF.selfPlayerData:getNickName())
    self._scoreLabel:setString(CF.selfPlayerData:getSR())
    self._scoreLabel:setVisible(true)
    self:updateImg()
    self:updateHeadFrame()
end

function MatchUI:onTouchEventStart(send, eventType)
    CF.goldManager:sendPlayerJoinMatch()
end

function MatchUI:updateScore(event)
    local score = event.score
    self._scoreLabel:setString(score)
end

function MatchUI:getAvatarUrl()
    local url = XH.playerData:getGoldHeadUrl() or CF.selfPlayerData:getWeChatURL()
    if url == "" then
        if CF.selfPlayerData:getSex() > 0 then
            url = "https://palmstatic.hzxuanming.com/Download/avatar/default/head_boy.png"
        else
            url = "https://palmstatic.hzxuanming.com/Download/avatar/default/head_girl.png"
        end
    end
    local rtn = CF.StringTool.urlToHttps(url)
    return rtn
end

function MatchUI:updateImg()
    local url = self:getAvatarUrl()

    if not self._headImg then
        local size = self._headFrame:getContentSize()
        self._headImg = CF.RemoteImage.new()
            :setTouchEnabled(true)
            :setPosition(size.width/2 - 0.5, size.height/2 + 0.3)
            :ignoreContentAdaptWithSize(false)
            :setContentSize(size.width - 7, size.height - 7)
            :addTo(self._headFrame)
    end

    self._headImg:setUrl(url)
end

function MatchUI:updateMatchStatus(reMatch)
    self:updateUI()
    self._startBtn:setVisible(reMatch)
    self._matchAni:setVisible(not reMatch)
end

--将窗体显示到屏幕
function MatchUI:showSelf(zOrder)
    zOrder = zOrder or 35
    CF.addViewToGameScene(self, zOrder)
    return self
end

--头像框
function MatchUI:updateHeadFrame()
    local headFrame = CF.roomData:getHeadFrameData(CF.selfPlayerData:getNumberID()) or {}
    local GameBagUILogic = CF.gameRequire("Modules.GameBag.UILogic")
    GameBagUILogic.showHeadFrame(self._headFrame, headFrame.frame_url, cc.size(0, 5), cc.size(45, 45), headFrame.propid)
end

function MatchUI:onHeadFrameChanged(event)
    self:updateHeadFrame()
end

return MatchUI
�