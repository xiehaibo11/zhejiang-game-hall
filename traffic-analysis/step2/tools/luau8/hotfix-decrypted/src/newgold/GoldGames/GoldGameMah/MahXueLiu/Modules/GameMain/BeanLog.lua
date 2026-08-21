local BeanLog = NG.GAME.gameClass("RuleLayer", NG.ViewBase)

function BeanLog:ctor()
    BeanLog.super.ctor(self)
    self:initView()
end

function BeanLog:getCSBPath()
    return "cocosStudio/GoldNew/Game/MahXueLiu/CSB/GameMain/BeanLog.csb"
end

function BeanLog:getBindingInfo()
    return {
        ["_txtTotal"] = {varName = "_txtTotal"},
        ["_item"] = {varName = "_item"},
        ["_lv"] = {varName = "_lv"},
        ["_bg"] = {varName = "_bg", onTouchEnded = "onTouchExit"},
    }
end


function BeanLog:getProxyEvents()
    return {
        {module = NG.goldGame:getModule("GameMain.MahLayer"), eventKeyName = "EVENT_GAME_MSG_RECORD", callBack = "onMsgLog"},
        {module = NG.goldGame:getModule("GameMain.MahLayer"), eventKeyName = "EVENT_GAME_START", callBack = "onGameStart"},
    }
end

function BeanLog:initView()
    -- self._panelBg:setTouchEnabled(true)
    -- self._panelBg:addTouchEventListener(handler(self, self.onTouchExit))
    self._item:setVisible(false)
    self._lv:setScrollBarEnabled(false)
    self._lv:removeAllChildren()
    self._txtTotal:setString("0")
    -- for i=1, 4 do
    --     local item = self._item:clone()
    --     item:setVisible(true)
    --     item:getChildByName("_desc"):setString("_desc")
    --     item:getChildByName("_beishu"):setString("_beishu")
    --     item:getChildByName("_win"):setString("_win")
    --     item:getChildByName("_from"):setString("_from")
    --     self._lv:pushBackCustomItem(item)
    -- end
    NG.msgManager:sendRecordReq()
end

function BeanLog:onTouchExit(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    self:close()
end

function BeanLog:showSelf()
    local parent = display.getRunningScene()
    parent:addChild(self, NG.ZORDER.WINDOW)
end

function BeanLog:onGameStart(event)
    self:close()
end

function BeanLog:onMsgLog(event)
    -- self:initView()
    local data = event.data
    self._txtTotal:setString(NG.StringTool.getScoreStr(data.total))
    self._lv:removeAllChildren()
    for i=1, data.nCount do
        local item = self._item:clone()
        item:setVisible(true)

        local record = data.records[i]
        local fanNames = {}
        if #record.nFanIds == 0 then
            local gangDes = {"胡","自摸","失败","被杠","明杠","补杠","暗杠"}
            fanNames[1] = gangDes[record.nRecordType] or ""
        else
            for j=1, #record.nFanIds do
                local fanName = NG.GAME.GameDefine.XUELIU_HU_TYPE_NAME[record.nFanIds[j]]
                if fanName then
                    fanNames[#fanNames+1] = fanName
                end
            end
        end

        local fanStr = table.concat(fanNames, ' ')
        -- if string.len(fanStr) > 18 then
        --     local validBytes = NG.StringTool.getMinimumValidBytesUTF8(fanStr, 18)
        --     fanStr = string.sub(fanStr, 1, validBytes) .. "..."
        -- end
        local descSV = item:getChildByName("_descSV")
        descSV:setScrollBarEnabled(false)
        descSV:getChildByName("_desc"):setString(fanStr)
        descSV:setInnerContainerSize(descSV:getChildByName("_desc"):getContentSize())
        item:getChildByName("_beishu"):setString(""..record.nFanNum.."倍")
        local winStr = NG.StringTool.getScoreStr(record.nWinLostNum)
        if record.nWinLostNum > 0 then
            winStr = "+"..winStr
        end
        item:getChildByName("_win"):setString(winStr)
        item:getChildByName("_from"):setString(self:getJiaName(record.nTargetSeat))
        self._lv:pushBackCustomItem(item)
    end
end


function BeanLog:getJiaName(seat)
    if seat == 4 then
        return "三家"
    end
    local selfSeat = NG.GAME.roomTableData:getSelfSeat()
    local name = {[0]="我",[1]="上家",[2]="对家",[3]="下家"}
    return name[(selfSeat-seat+4)%4]
end

return BeanLog
�