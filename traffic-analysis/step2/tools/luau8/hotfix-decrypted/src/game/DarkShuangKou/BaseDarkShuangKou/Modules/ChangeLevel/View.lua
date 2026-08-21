local ChangeLevelView = CF.gameClass("ChangeLevelView", CF.gameScriptRootPath .. ".GameBase.Modules.ChangeLevel.View")

function ChangeLevelView:setGoldLevelMsg()
    -- print("setGoldLevelMsg goldNums .... " .. self._goldNums)
    -- if CF.roomData:isGoldRoom() and self._goldNums then
    --     local getGlobalDefine = CF.getGlobalDefine("GOLD_LEVEL_DEFAULT_NAME")
    --     local level = cc.UserDefault:getInstance():getIntegerForKey("_KW_DATA_LAST_JOIN_GOLD_LEVEL_" .. CF.areaData.getLobbyID())
    --     local getGoldRoomInfo = CF.goldConfigManager:getLastGoldRoomInfo()
    --     if getGlobalDefine[level + 1] and getGoldRoomInfo and getGoldRoomInfo.roomInfo and getGoldRoomInfo.roomInfo.SpecialPlayer == 0 then
    --         self._textGoldRoomName:setText(getGlobalDefine[level + 1])
    --         if getGoldRoomInfo and getGoldRoomInfo.roomLevelInfos[level + 1] then
    --             self._panelGoldChange:setVisible(self._goldNums >= getGoldRoomInfo.roomLevelInfos[level + 1].minrich)
    --         end
    --     end
    -- else
    --     self._panelGoldChange:setVisible(false)
    -- end

    -- if cc.UserDefault:getInstance():getBoolForKey("isNeedHideAdvertisement") then
    --     self._panelGoldChange:setVisible(false)
    -- end
end

return ChangeLevelView
