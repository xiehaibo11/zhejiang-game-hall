local PlayerInfoLayer = NG.GAME.gameClass("PlayerInfoLayer", NG.ViewBase)

local IMG_SEX_MAN = "newgold_game_playerinfo_tc_image_09.png"
local IMG_SEX_WOMAN = "newgold_game_playerinfo_tc_image_08.png"

function PlayerInfoLayer:ctor()
    PlayerInfoLayer.super.ctor(self)
    self._playerData = {}
end

function PlayerInfoLayer:getCSBPath()
    return "cocosStudio/GoldNew/Game/GameBase/CSB/PlayerInfo/PlayerInfoLayer.csb"
end

function PlayerInfoLayer:getBindingInfo()
    return {
        ["_KW_BTN_CLOSE"] = { varName = "_btnClose", onTouchEnded = "onBtnCloseClicked" },
        ["_KW_TEXT_GAME_COUNT"] = { varName = "_txtGameCount" },
        ["_KW_TEXT_WIN_RATE"] = { varName = "_txtWinRate" },
        ["_KW_TEXT_NAME"] = { varName = "_txtName" },
        ["_KW_TEXT_ID"] = { varName = "_txtId" },
        ["_KW_TEXT_GOLD"] = { varName = "_txtGold" },
        ["_KW_IMG_SEX"] = { varName = "_imgSex" },
        ["_KW_IMG_HEAD_FRAME"] = { varName = "_imgHeadFrame" },
    }
end

function PlayerInfoLayer:initView()
    local name = self._playerData.NickName or ""
    if string.len(name) > 12 then
        local validBytes = NG.StringTool.getMinimumValidBytesUTF8(name, 12)
        name = string.sub(name, 1, validBytes) .. "..."
    end
    self._txtName:setString(name)

    local id = tostring(self._playerData.NumId or "--")
    self._txtId:setString(id)

    local gold = tostring(self._playerData.JoyBean or 0)
    self._txtGold:setString(NG.StringTool.getScoreStr(gold))

    local gameCount = tostring(self._playerData.GameCount or "--")
    self._txtGameCount:setString(gameCount)

    local winRate = tostring(self._playerData.WinRate or "--")
    self._txtWinRate:setString(winRate)

    self:updateSex()

    if self._playerData.headUrl ~= "" then
        self:updateHead()
    end
end

function PlayerInfoLayer:updateHead()
    if not self._headImg then
        local size = self._imgHeadFrame:getContentSize()
        self._headImg = NG.RemoteImage.new()
        :setTouchEnabled(false)
        :setPosition(size.width / 2, size.height / 2)
        :ignoreContentAdaptWithSize(false)
        :setContentSize(size.width - 10, size.height - 10)
        :addTo(self._imgHeadFrame)
    end
    self._headImg:setUrl(self._playerData.headUrl)
end

function PlayerInfoLayer:updateSex()
    if self._playerData.Sex == 1 or self._playerData.Sex == 49 then
        self._imgSex:loadTexture(IMG_SEX_MAN, ccui.TextureResType.plistType)
    else
        self._imgSex:loadTexture(IMG_SEX_WOMAN, ccui.TextureResType.plistType)
    end
end

function PlayerInfoLayer:onBtnCloseClicked()
    self:close()
end

function PlayerInfoLayer:showSelf(playerData)
    local parent = display.getRunningScene()
    parent:addChild(self, NG.ZORDER.WINDOW)
    self._playerData = playerData
    self:initView()
end

return PlayerInfoLayer`