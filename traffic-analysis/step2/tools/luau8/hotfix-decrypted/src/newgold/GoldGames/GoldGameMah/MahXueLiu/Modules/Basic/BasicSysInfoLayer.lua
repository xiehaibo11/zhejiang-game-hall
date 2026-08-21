local BasicSysInfoLayer = NG.GAME.gameClass("BasicSysInfoLayer", "newgold.GoldGames.GoldGameBase.Modules.Basic.BasicSysInfoLayer")

function BasicSysInfoLayer:ctor()
    BasicSysInfoLayer.super.ctor(self)
end

function BasicSysInfoLayer:getCSBPath()
    return "cocosStudio/GoldNew/Game/MahXueLiu/CSB/Basic/BasicSysInfoLayer.csb"
end

function BasicSysInfoLayer:initNetWork()
    local netState = un.Device.getNetEnvName()
    if netState == "wifi" then
        self._netIcon:loadTexture("ng_mah_table_sign3.png", ccui.TextureResType.plistType) 
    else
        self._netIcon:loadTexture("newgold_gamebasicyidong.png", ccui.TextureResType.plistType) 
    end
end
return BasicSysInfoLayer�