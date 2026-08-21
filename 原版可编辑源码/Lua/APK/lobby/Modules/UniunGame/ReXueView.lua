local ViewBase = require("lobby.Modules.UniunGame.View")
local ReXueView = class("ReXueView",ViewBase)
local UnionGamePath = "cocosStudio/hall/Image/UnionGame/"

local H5GameNameList = {
    REXUEFENGSHEN = "REXUEFENGSHEN",
}

function ReXueView:ctor()
    ReXueView.super.ctor(self)
    XH.UITool.loadTexture(self._panelBg, "_KW_IMG_BG", UnionGamePath.."union_rexue.png", ccui.TextureResType.localType)
end

function ReXueView:onTouchEventBG(send, event)
    XH.lobby:getModule("H5GameWidget"):startH5Game(H5GameNameList.REXUEFENGSHEN)
    --点击进入游戏的埋点信息
    XH.throwDataManager:recordButtonClick(XH.ThrowDataDefine.ButtonEnumTable.TABS_ACTIVITY_ENTER_UNIUN_GAME)
end

return ReXueView