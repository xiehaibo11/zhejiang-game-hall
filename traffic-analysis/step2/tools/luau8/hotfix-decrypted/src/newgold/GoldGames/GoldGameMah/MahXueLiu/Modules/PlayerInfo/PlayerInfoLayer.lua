local PlayerInfoLayer = NG.GAME.gameClass("PlayerInfoLayer", "newgold.GoldGames.GoldGameBase.Modules.PlayerInfo.PlayerInfoLayer")

function PlayerInfoLayer:ctor()
    PlayerInfoLayer.super.ctor(self)
    self._headImg = nil
    self._txtGameCount:getParent():setVisible(false)
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

local SexHeadImg = {
    WoMan = "newgold_hp_player_main_img_face_0.png",
    Man = "newgold_hp_player_main_img_face_1.png",
}
function PlayerInfoLayer:updateSex()
    PlayerInfoLayer.super.updateSex(self)
    self:setSexHead(self._playerData.Sex)
end

function PlayerInfoLayer:setSexHead(sex)
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

return PlayerInfoLayer