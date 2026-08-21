local UIMahLayer = CF.gameClass("UIMahLayer", "game.Mahjong.BasicMahjong.Modules.GameLayer.View2D.UIMahLayer")


function UIMahLayer:onEventSetLaoZhuang()
    UIMahLayer.super.onEventSetLaoZhuang(self)
    local gameData = CF.game:getModule("GameLayer"):getGameData()
    self._bankerZhuangType:setVisible(gameData:getIsShowLaoZhuang())
    --该资源已经被删除
    --self._bankerZhuangType:loadTexture("res/cocosStudio/MahjongNew/MahLayer/Image/YuYao/mah_img_zhuang_yuyao.png", ccui.TextureResType.localType)
end


return UIMahLayer'