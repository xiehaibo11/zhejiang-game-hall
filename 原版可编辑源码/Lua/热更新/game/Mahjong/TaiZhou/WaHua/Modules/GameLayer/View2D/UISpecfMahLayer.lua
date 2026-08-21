local UISpecfMahLayer = CF.gameClass("UISpecfMahLayer", "game.Mahjong.BasicMahjong.Modules.GameLayer.View2D.UISpecfMahLayer")

function UISpecfMahLayer:getCSBPath()
    return "cocosStudio/MahjongNew/MahLayer/CSB/TaiZhouWaHua/SpecfMahLayer.csb"
end

function UISpecfMahLayer:getBindingInfo()
    return {
        ["_KW_LAYER_SPECF_MAH"] = {varName="_specfMahLayer",class="panel"},
        ["_KW_PANEL_HAND_MAH"] = {varName="_handMah",class="panel"},
        ["_KW_PANEL_SPECF_MAH"] = {varName="_specfMah",class="panel"},

        ["_KW_BTN_SPECF_HAND"] = {varName="_specfHand",onTouchEnded = "onTouchEventSpecfHand"},
        ["_KW_BTN_SPECF_WALL"] = {varName="_specfWall",onTouchEnded = "onTouchEventSpecfWall"},
        ["_KW_BTN_SPECF_TAKE"] = {varName="_specfTake",onTouchEnded = "onTouchEventSpecfTake"},
        ["_KW_BTN_SPECF_REQ"] = {varName="_specfReq",onTouchEnded = "onTouchEventSpecfReq"},
        ["_KW_BTN_SPECF_END"] = {varName="_specfEnd",onTouchEnded = "onTouchEventSpecfEnd"},
        ["_KW_BTN_SPECF_CANCEL"] = {varName="_specfCancel",onTouchEnded = "onTouchEventSpecfCancel"},
        ["_KW_MAH_"] = { varName = "_mah", beginIndex = 21, endIndex = 105,onTouch = "onTouchEventSpecfMah"},
        ["_KW_HAND_MAH_"] = { varName = "_KW_HAND_MAH_", beginIndex = 1, endIndex = 21,onTouch = "onTouchEventHandMah"},
    }
end

function UISpecfMahLayer:onTouchEventSpecfHand(send,eventType)
    if eventType == ccui.TouchEventType.began then
        send:setScale(0.4)
        send:setColor(cc.c3b(160,160,160))
    elseif eventType == ccui.TouchEventType.ended or
        eventType == ccui.TouchEventType.canceled then
        send:setScale(0.55)
        send:setColor(cc.c3b(255,255,255))
    end
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    CF.msgManager:sendSpecfHandMahs(self._handMahTable, #self._handMahTable, CF.GameDefine.MAX_HAND_COUNT_TYPE.TWENTYONE)
    self:clearHandMah()
end

function UISpecfMahLayer:updateSpecfMah(mahs, nCount)
    self._specfMahTable = {}
    for i = 21, 105 do
        self._specfMahTable[i] = 0
    end
    for i = 1,#mahs do
        self._specfMahTable[mahs[i]] = (self._specfMahTable[mahs[i]] or 0) + 1
    end

    self:showSpecfMah()
end

function UISpecfMahLayer:showHandMah()
    if self._handMah then
        local children = self._handMah:getChildren()
        for j = 1, #children do
            if j <=  #self._handMahTable then
                children[j]:setVisible(true)             
                local faceNode = children[j]:getChildByName("KW_FACE")
                if faceNode then
                    faceNode:loadTexture(string.format("%s%d.png","wahua_mah_", self._handMahTable[j]),ccui.TextureResType.plistType)
                end
            else
                children[j]:setVisible(false)
            end         
        end
    end
end

return UISpecfMahLayer