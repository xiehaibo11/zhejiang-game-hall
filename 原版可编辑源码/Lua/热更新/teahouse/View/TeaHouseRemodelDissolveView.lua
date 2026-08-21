local TeaHouseQuitTeaHouseLayer = import(".TeaHouseQuitTeaHouseLayer")
local TeaHouseRemodelDissolveView = class("TeaHouseRemodelDissolveView", TeaHouseQuitTeaHouseLayer)

function TeaHouseRemodelDissolveView:ctor(isShowQuanCard)
    TeaHouseRemodelDissolveView.super.ctor(self)
    self._textUserDeal:setText("我已知晓上述情况")
    self._textQuit:setVisible(false)
    self._textDissolve:setVisible(true)
    self._btnSure:loadTextureNormal("owner_dissolve_btn_1.png", ccui.TextureResType.plistType)
    self._btnSure:loadTextureDisabled("owner_dissolve_btn_2.png", ccui.TextureResType.plistType)
end

function TeaHouseRemodelDissolveView:onQuitClicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    
    local funcOK = function()
        local teaNumber = TeaHouse.manager.teahouseSetup:getTeaNumber()
        TeaHouse.manager.teahouseList:closeTeaHouse(teaNumber)
        self:close()        
    end

    local tData = TeaHouse.manager.teahouseData    
    local teaNumber = TeaHouse.manager.teahouseSetup:getTeaNumber()
    local maxPlayerCnt = 0
    if tData:getTeaNumber() == teaNumber then
        maxPlayerCnt = tData:getMaxPlayerCount()
    else    
        local teahouseData = TeaHouse.manager.teahouseData:getTeaHouseInfoByID(teaNumber)
        if teahouseData and teahouseData.maxPlayerCnt then
            maxPlayerCnt = teahouseData.maxPlayerCnt
        end
    end
    local SwitchConfig = TeaHouse.manager.configManager.SwitchConfig
    if SwitchConfig and SwitchConfig.InactiveMember == 1 then
        if maxPlayerCnt > 0 then
            TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK_CANEL,
            funcOK = funcOK}, "DISSOLVE_PLAYER_MAX_TIP",maxPlayerCnt)  
        else
            XH.TipTool.showLoading()
            local netReqTeaHouseInfo = TeaHouse.manager.reqManager:createReq("NetReqTeaHouseInfoDis")
            netReqTeaHouseInfo:addReqCallBack(self, function (s,req, type, data)
                XH.TipTool.hideLoading()
                if type == TeaHouse.Req.TYPE.SUCCESS then
                    if data.maxPlayerCnt and data.maxPlayerCnt >= 0 then
                        TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK_CANEL,
                        funcOK = funcOK}, "DISSOLVE_PLAYER_MAX_TIP",data.maxPlayerCnt)  
                    else
                        funcOK()
                    end
                else
                    TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK,
                    funcOK = funcOK}, "DISSOLVE_PLAYER_MAX_FAIL")  
                end
            end)
            netReqTeaHouseInfo:start(teaNumber)
        end
    else
        funcOK()
    end
end

return TeaHouseRemodelDissolveView
