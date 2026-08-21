local BoxGuideModule = class("BoxGuideModule", XH.ModuleBase)

function BoxGuideModule:ctor()
    BoxGuideModule.super.ctor(self)

    self._createFreeActId = nil
    self._boxConversionActId = nil
    self._haveTryWxdjk = false   --防止服务返回免费道具存在  但是一直使用不成功 死循环问题
end

function BoxGuideModule:setCreateFreeActId(id)
    self._createFreeActId = id
end

function BoxGuideModule:getCreateFreeActId()
    return self._createFreeActId
end

function BoxGuideModule:setBoxConversionActId(id)
    self._boxConversionActId = id
end

function BoxGuideModule:getBoxConversionActId()
    return self._boxConversionActId
end

function BoxGuideModule:getReqConfig()
    return {
        CellReqBoxGuideInfo = {reqPath = "lobby.Req.BoxGuide.CellReqBoxGuideInfo", callBack = self.respBoxGuideInfo},
        CellReqBoxCreateFreeGain = {reqPath = "lobby.Req.BoxGuide.CellReqBoxCreateFreeGain", callBack = self.respBoxCreateFreeGain},
        CellReqBoxCreateFreeCheck = {reqPath = "lobby.Req.BoxGuide.CellReqBoxCreateFreeCheck", callBack = self.respBoxCreateFreeCheck}
    }
end

function BoxGuideModule:reqBoxCreateFreeGain()
    if not self._createFreeActId then 
        XH.lobby:getModule("BoxQuickRecharge"):quickBuyBoxRoomcard(true)
        return
    end
    XH.TipTool.showLoading()
    local data = {
        act_id = self._createFreeActId
    }
    self:startReq("CellReqBoxCreateFreeGain", data)
end

function BoxGuideModule:reqBoxCreateFreeCheck(callback)
    if not self._createFreeActId then 
        XH.lobby:getModule("BoxQuickRecharge"):quickBuyBoxRoomcard(true)
        return
    end
    XH.TipTool.showLoading()
    local data = {
        act_id = self._createFreeActId
    }
    self:startReq("CellReqBoxCreateFreeCheck", data)
end


function BoxGuideModule:respBoxCreateFreeGain(cell, type, data)
    XH.TipTool.hideLoading()
    local isOk = false
    if type == XH.Req.TYPE.SUCCESS then
        isOk = data and data.isOk or false
    end
    if isOk then
        XH.lobby:getModule("CreateBoxRoom"):quickCreateLastGame(true)
    else
        XH.lobby:getModule("BoxQuickRecharge"):quickBuyBoxRoomcard(true)
    end
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.oh25062605, {block_item_id = "创建包厢", page_item_id = isOk and "成功" or "失败"})
end

function BoxGuideModule:respBoxCreateFreeCheck(cell, type, data)
    XH.TipTool.hideLoading()
    local isOk = false
    local haveWxdjk = false
    if type == XH.Req.TYPE.SUCCESS then
        isOk = data and data.isOk or false
        haveWxdjk = data and data.haveWxdjk or false
    end
    if haveWxdjk and not self._haveTryWxdjk then
        XH.lobby:getModule("CreateBoxRoom"):quickCreateLastGame(true)
        self._haveTryWxdjk = true
    elseif isOk then
        XH.viewManager:openView("BoxGuideView")
    else    
        XH.lobby:getModule("BoxQuickRecharge"):quickBuyBoxRoomcard(true)
    end
end

function BoxGuideModule:resetTryWxdjk()
    self._haveTryWxdjk = false
end

return BoxGuideModule
