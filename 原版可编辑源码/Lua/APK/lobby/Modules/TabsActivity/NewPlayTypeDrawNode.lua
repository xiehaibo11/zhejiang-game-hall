local NewPlayTypeDrawNode = class("NewPlayTypeDrawNode",XH.ViewBase)

NewPlayTypeDrawNode.KW_NAME_NEW_PALY_TYPE_DRAW= "KW_NAME_NEW_PALY_TYPE_DRAW"

local KW_IMG_BG = {
    [900038] = "https://palmastatic.wenzhoushuke.com//materials/images/20220906/13582894666.png",
    [900043] = "https://palmastatic.wenzhoushuke.com//materials/images/20220914/13490249029.png",
}

function NewPlayTypeDrawNode:getCSBPath()
    return "cocosStudio/hall/CSB/Activity/NewPlayTypeDraw.csb"
end

function NewPlayTypeDrawNode:getBindingInfo()
    return {
        ["_KW_ROOT_LAYER"] = { varName="_rootLayer", onTouchEnded = "onTouchEventGo" },
    }
end

function NewPlayTypeDrawNode:ctor(param)
    param = param or {}
    NewPlayTypeDrawNode.super.ctor(self,param) 
    self.csbNode = self
    self.width = param.width or 1342
	self.height = param.height or 870
	self:setContentSize(self.width,self.height)
	self:setName(self.KW_NAME_NEW_PALY_TYPE_DRAW)
    if KW_IMG_BG[XH.areaData:getLobbyID()] then
        XH.UITool.reloadNodeRemoteImage(self._rootLayer,  KW_IMG_BG[XH.areaData:getLobbyID()], nil, true)
    end
end

function NewPlayTypeDrawNode:onTouchEventGo(send, eventType)
    XH.viewManager:openView("NewTypeDrawView")
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.ACTIVITYLAYER_ACT_CLICK,{label = self.KW_NAME_NEW_PALY_TYPE_DRAW, block_label = self.KW_NAME_NEW_PALY_TYPE_DRAW, item_id = self.KW_NAME_NEW_PALY_TYPE_DRAW})
end

return NewPlayTypeDrawNode