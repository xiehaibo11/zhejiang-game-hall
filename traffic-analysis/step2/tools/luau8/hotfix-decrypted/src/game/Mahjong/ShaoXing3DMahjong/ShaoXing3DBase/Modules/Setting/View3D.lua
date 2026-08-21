local SettingView3D = CF.gameClass("SettingView3D", "game.Mahjong.BasicMahjong.Modules.Setting.View3D")

function SettingView3D:initUI()
    SettingView3D.super.initUI(self)
    self._visualAnglePanel:setVisible(true)
    self._scrollViewContent:setInnerContainerSize(cc.size(
        self._scrollViewContent:getInnerContainerSize().width, -- 保持原始宽度
        self._scrollViewContent:getInnerContainerSize().height + 200 -- 设置内容高度
    ))
    self._panelContentRoot:setPositionY(self._panelContentRoot:getPositionY() + 200)
end

return SettingView3DF