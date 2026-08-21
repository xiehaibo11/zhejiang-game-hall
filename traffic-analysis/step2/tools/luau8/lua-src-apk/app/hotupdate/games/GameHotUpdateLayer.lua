--
-- 游戏热更popLayer
-- add by louis 2019/6/19
--
-- 各区游戏根据自己的美术需求，可以重写该类

local GameHotUpdateLayer = class("GameHotUpdateLayer", XH.ViewBase)

function GameHotUpdateLayer:getCSBPath()
    return "res/cocosStudio/hall/CSB/GameProgress.csb"
end

function GameHotUpdateLayer:getBindingInfo()
    return {
        ["_KW_BG_MAHJONG"] = {varName="_imgBGMahjong"},
		["_KW_MAHJONG_ROLE"] = {varName="_imgMahjongRole"},
		["_KW_BG_CARD"] = {varName="_imgBGCard"},
        ["_KW_CARD_ROLE"] = {varName="_imgCardRole"},
        ["_KW_BG_LOGO"] = {varName = "_imgBgLogo"},
    }
end

function GameHotUpdateLayer:ctor(param)
    param = param or {}
	GameHotUpdateLayer.super.ctor(self,param)
	self._gameID = param.gameID
    self:initUI(self._gameID)
end

--显示窗口
function GameHotUpdateLayer:initUI(gameID)
    if not gameID then
        return
    end

    local mahjong_bg = self._imgBGMahjong
    local mahjong_role = self._imgMahjongRole
    local card_bg = self._imgBGCard
    local card_role = self._imgCardRole
    local game_logo = self._imgBgLogo

    local configer = require("app.Config.Parse.GameSubConfiger").new()
    local key = configer:getGameTypePathByGameId(gameID) 

    if key == "Mahjong" then
        mahjong_bg:setVisible(true)
        mahjong_role:setVisible(true)
        card_bg:setVisible(false)
        card_role:setVisible(false)
    else
        mahjong_bg:setVisible(false)
        mahjong_role:setVisible(false)
        card_bg:setVisible(true)
        card_role:setVisible(true)
    end
    
    if XH.ChannelTool.checkIsWaishengChannel() or XH.ChannelTool.checkIsDoubleKouGame() then
        game_logo:setVisible(false)
    end
end

--将窗体显示到屏幕
function GameHotUpdateLayer:showSelf(zorder)
	zorder = zorder or XH.ZORDER.DIALOG
	local runningScene = display.getRunningScene()
    if runningScene and not runningScene:getChildByName("GAME_HOTUPDATE_LAYER") then
        self:setName("GAME_HOTUPDATE_LAYER")
        runningScene:addChild(self, zorder)
	end
	return self
end

return GameHotUpdateLayerq