local YaZiUI = CF.gameClass("YaZiUI", CF.ViewBase)

local KW_CLASS_NAME = "YaZiUI"

function YaZiUI:getCSBPath()
    return "cocosStudio/MahjongNew/GameLayer/CSB/JinYun/YaZiLayer.csb"
end

function YaZiUI:getBindingInfo()
    return {
        ["_KW_BTN_YA_ZI_0"] = { varName = "_btnYaZi_0", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventYaZi" },
        ["_KW_BTN_YA_ZI_1"] = { varName = "_btnYaZi_1", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventYaZi" },
        ["_KW_BTN_YA_ZI_2"] = { varName = "_btnYaZi_2", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventYaZi" },
    }
end

function YaZiUI:getProxyEvents()
    return {
        {module = CF.game:getModule("Player"), eventKeyName = "EVENT_YAZI_INFO_BACK", callBack = "onYaZiInfoBack"},
    }
end

function YaZiUI:ctor(param)
    param = param or {}
    YaZiUI.super.ctor(self, param)
    self._param = param
    self:createChildren()
end

function YaZiUI:createChildren()
    self:initYaZiUI(self._param.anteNum, self._param.seat, self._param.anteMinNum)
end

function YaZiUI:onTouchEventYaZi(send, eventType)
    local btnName = send:getName()
    local anteNum = CF.StringTool.getNumberSuffixByString(btnName)
    CF.msgManager:sendPlayerYaZi(anteNum)
    print("jingyun : sendPlayerYaZi" .. anteNum)
    self:close()
end

function YaZiUI:initYaZiUI(anteNum, seat, anteMinNum)
    if seat ~= CF.roomData:getSelfSeat() then
        return
    end

    local YaZiEnum = { NONE = -1, ZERO = 0, ONE = 1, TWO = 2 }

    if anteNum == YaZiEnum.NONE then
        self._btnYaZi_0:setEnabled(anteMinNum == YaZiEnum.ZERO)
        self._btnYaZi_1:setEnabled(anteMinNum ~= YaZiEnum.TWO)
        self._btnYaZi_2:setEnabled(anteMinNum ~= YaZiEnum.ZERO)
    end
end

function YaZiUI:showSelf(zorder)
	zorder = zorder or CF.ZORDER.WINDOW
	local runningScene = display.getRunningScene()
	self:setName(KW_CLASS_NAME)
	if runningScene then
        runningScene:addChild(self, zorder)
	end
	return self
end

function YaZiUI:onYaZiInfoBack(event)
    self:close()
end

function YaZiUI.isShow()
    local runningScene = display.getRunningScene()
    local yaZiUI = runningScene:getChildByName(KW_CLASS_NAME)
    return yaZiUI and true or false
end

return YaZiUI