local AddMultipleLayer = CF.gameClass("AddMultipleLayer", "game.GameBase.Modules.AddMultiple.View")


function AddMultipleLayer:onSuperAddMultipleBtnClicked(send, eventType)
local areaIDAndGameID = CF.areaData:getAreaID() .. "_" .. CF.roomData:getGameID() 
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.fsjb24090501, {page_item_id = '超级加倍',game_id = areaIDAndGameID ,room_level = CF.roomData:getRoomLevel()})
    if not CF.game:getModule("AddMultiple"):canUseAddMultipleProp() then 
        CF.TipTool.showToast("钻石不足，无法使用！") 
        return 
    end
    self:showPanelAddMultipleBtns(false)
    CF.msgManager:sendAddMultiple(CF.GameProtocol.msgAddMulti.ADDMULTITYPE.SUPER)
    
end


return AddMultipleLayer