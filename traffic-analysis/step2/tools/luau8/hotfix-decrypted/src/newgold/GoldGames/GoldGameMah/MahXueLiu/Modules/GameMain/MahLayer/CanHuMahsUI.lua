local CanHuMahsUI = NG.GAME.gameClass("CanHuMahsUI", NG.ViewBase)
local UIMah = NG.GAME.gameRequire("Modules.GameMain.MahLayer.View2D.UIMah")
local UIMahConfig = NG.GAME.gameRequire("Modules.GameMain.MahLayer.Config.UIMahConfig2D")

function CanHuMahsUI:getCSBPath()
    return "cocosStudio/GoldNew/Game/MahXueLiu/CSB/GameMain/CanHuMahs.csb"
end

function CanHuMahsUI:getBindingInfo()
    return {
        -- ["_KW_PANEL_ROOT"] = {varName = "_rootNode", onTouch = "onBgClick"},
        ["_bg"] = {varName = "_canHuMahsBg"},
        ["_line1"] = {varName = "_line1"},
        ["_line2"] = {varName = "_line2"},
        ["_leftTitle"] = {varName = "_leftTitle"},
        ["_model"] = {varName = "_model"},
        ["_item"] = {varName = "_item"},
        ["_sv"] = {varName = "_sv"},
        ["_text"] = { varName = "_text", beginIndex = 1, endIndex = 5},
        ["_checkbox"] = {varName = "_checkbox",type = NG.UI_TYPE.CHECKBOX,onSelect = "onTouchEventCheckAutoHu"},
    }
end

function CanHuMahsUI:getProxyEvents()
    return {
        {module = NG.goldGame:getModule("GameMain.MahLayer"), eventKeyName = "EVENT_HIDE_CAN_HU_MAHS", callBack = "close"},
        {module = NG.goldGame:getModule("GameMain.MahLayer"), eventKeyName = "EVENT_FLUSH_CAN_HU_MAH_DATA", callBack = "flushData"},
        {module = NG.goldGame:getModule("GameMain"), eventKeyName = "EVENT_BG_CLICK", callBack = "onBgClick"},
    }
end

function CanHuMahsUI:ctor(param)
    param = param or {}
	CanHuMahsUI.super.ctor(self, param)
	self._gameData = NG.goldGame:getModule("GameMain.MahLayer"):getGameData()
    self:updateUI(param)
end

function CanHuMahsUI:updateUI(param)
    param = param or {}
    self._tingMahID = param.tingMahID or 0
    self._mahConfig = param.mahConfig
    self:initUI()
end

function CanHuMahsUI:onBgClick(send, event)
    self:close()
    return true
end

--将窗体显示到屏幕
function CanHuMahsUI:showSelf(zorder)
	zorder = zorder or NG.ZORDER.WINDOW
	self:setName("CanHuMahsUI")
    local runningScene = display.getRunningScene()
	if runningScene then
        runningScene:addChild(self, zorder)
	end
	return self
end

function CanHuMahsUI:getMahConfig()
    if self._mahConfig then
        return self._mahConfig
    end
    return NG.GAME.settingData:getDefaultData(nil, true)
end

function CanHuMahsUI:initUI(bNotReqFan)
    self._item:setVisible(false)
    local isAutoHu = self._gameData:getAutoHu()
    self._checkbox:setSelected(isAutoHu)
    local data = {}
    if self._tingMahID ~= 0 then        --选中牌的听牌提示
        local seat = NG.GAME.roomTableData:localToSeat(NG.GAME.GameDefine.LOCAL_SEAT.BOTTOM)
        local allData = self._gameData:getCanHuMahsData(seat)
        for i, v in pairs(allData[self._tingMahID] or {}) do
            if v.huMahID and v.huMahID > 0 then
                table.insert(data, v)
            end
        end
    else                                --点击听按钮的听牌听是
        self._canHuMahsBg:setAnchorPoint(cc.p(1, 0.5))
        self._canHuMahsBg:setPosition(self._model:getPositionX(), self._model:getPositionY())
        data = clone(self._gameData:getLastTingData()) or {}
    end

    if (#data == 0 or data[1].huFan == -1 or self._tingMahID == 0) and not bNotReqFan then
        --if self._tingMahID ~= 0 then
            NG.msgManager:sendOutTingInfo(self._tingMahID)
        --end
        -- return
    end
    --整理一下数据
    -- local tmpData = {}
    -- for i, v in pairs(data) do
    --     if v.huMahID and v.huMahID > 0 then
    --         table.insert(tmpData, v)
    --     end
    -- end
    -- dump(tmpData)
    -- data = tmpData
    --测试用例
--     data = {
--        [1] = {huMahID = 17, huInfoNum = "999", huInfo = "台"},
--        [2] = {huMahID = 17, huInfoNum = "2,2", huInfo = "台,倍"},
--        [3] = {huMahID = 17, huInfoNum = "300,3,3",huInfo = "台,倍,张"},
--        [4] = {huMahID = 17, huInfoNum = "4,4", huInfo = "台,倍"},[5] = {huMahID = 17, huInfoNum = "5,5", huInfo = "台,倍"},[6] = {huMahID = NG.GAME.GameDefine.MAH_VALUE.JIAN_BAI, huInfoNum = "6,6",huInfo = "台,倍"},
--        [7] = {huMahID = 17, huInfoNum = "7,7", huInfo = "台,倍"},[8] = {huMahID = 17, huInfoNum = "8,8", huInfo = "台,倍"},[9] = {huMahID = 17, huInfoNum = "9,9",huInfo = "台,倍"},
--        [10] = {huMahID = 17, huInfoNum = "10,10", huInfo = "台,倍"},[11] = {huMahID = 17, huInfoNum = "11,11", huInfo = "台,倍"},[12] = {huMahID = 17, huInfoNum = "12,12", huInfo = "台,倍"},
--        [13] = {huMahID = 17, huInfoNum = "13,13", huInfo = "台,倍"},[14] = {huMahID = 17, huInfoNum = "14,14", huInfo = "台,倍"},[15] = {huMahID = 17, huInfoNum = "15,15", huInfo = "台,倍"},
--        [16] = {huMahID = 17, huInfoNum = "16,16", huInfo = "台,倍"},[17] = {huMahID = 17, huInfoNum = "17,17", huInfo = "台,倍"},[18] = {huMahID = 17, huInfoNum = "18,18", huInfo = "台,倍"},
--        [19] = {huMahID = 17, huInfoNum = "19,19", huInfo = "台,倍"},[20] = {huMahID = 17, huInfoNum = "20,20", huInfo = "台,倍"},[21] = {huMahID = 17, huInfoNum = "21,21", huInfo = "台,倍"},
--        [22] = {huMahID = 17, huInfoNum = "22,22", huInfo = "台,倍"},[23] = {huMahID = 17, huInfoNum = "23,23", huInfo = "台,倍"},[24] = {huMahID = 17, huInfoNum = "24,24", huInfo = "台,倍"},
--        [25] = {huMahID = 17, huInfoNum = "25,25", huInfo = "台,倍"},[26] = {huMahID = 17, huInfoNum = "26,26", huInfo = "台,倍"},[27] = {huMahID = 17, huInfoNum = "27,27", huInfo = "台,倍"},
--        [28] = {huMahID = 17, huInfoNum = "28,28", huInfo = "台,倍"},[29] = {huMahID = 17, huInfoNum = "29,29", huInfo = "台,倍"},[30] = {huMahID = 17, huInfoNum = "30,30", huInfo = "台,倍"},
--        [31] = {huMahID = 17, huInfoNum = "31,31", huInfo = "台,倍"},[32] = {huMahID = 17, huInfoNum = "32,32", huInfo = "台,倍"},[33] = {huMahID = 17, huInfoNum = "33,33", huInfo = "台,倍"},
--        [34] = {huMahID = 17, huInfoNum = "34,34", huInfo = "台,倍"},[35] = {huMahID = 17, huInfoNum = "35,35", huInfo = "台,倍"},[36] = {huMahID = 17, huInfoNum = "36,36", huInfo = "台,倍"},
--    }
   --data = {[1] = {huMahID = 255, huInfoNum = "999,111", huInfo = "台,倍"}}
    --计算框体大小宽高容纳麻将个数及框体大小
    local itemSize = cc.size(120, 200)
    local lineMahCnt = 6    --一行的麻将子个数
    local lineNum           --行数
    local bgWidth           --框体宽度
    local bgHeight          --框体高度
    if #data < 6 then
        lineMahCnt = #data
    end
    if #data % lineMahCnt == 0 then
        lineNum = #data / lineMahCnt
    else
        lineNum = math.ceil(#data / lineMahCnt)
    end
    --背景显示行数，超过滚动
    local bgLineNum = lineNum > 2 and 2 or lineNum
    bgWidth = (lineMahCnt-1) * itemSize.width
    bgHeight = (bgLineNum-1) * itemSize.height

    --胡任意牌
    -- if #data == 1 and data[1].huMahID == 255 then
    --     bgWidth = 375
    -- end
    self._canHuMahsBg:setContentSize(bgWidth + 600, bgHeight + 227)
    self._sv:setContentSize(bgWidth + itemSize.width, bgHeight + itemSize.height)
    self._sv:setInnerContainerSize(cc.size(bgWidth + itemSize.width,  (lineNum-1) * itemSize.height + itemSize.height))

    --分割线
    self._line1:setPosition(243, 113 + (bgLineNum-1) * itemSize.height)
    self._line2:setPosition(409 + (lineMahCnt-1) * itemSize.width, self._line1:getPositionY())
    self._leftTitle:setPosition(75, 151 + (bgLineNum-1) * itemSize.height)
    
    self._sv:removeAllChildren()
    for i = 1, #data do
        local item = self._item:clone()
        local x = (i-1)%lineMahCnt * itemSize.width
        local y = (lineNum - 1 - math.floor((i-1)/lineMahCnt)) * itemSize.height
        item:setPosition(x, y)
        item:setVisible(true)

        local temp = UIMah.new("default", UIMahConfig.SimpleMah.QuePai)
        temp:setAnchorPoint(cc.p(0.5, 0.5))
        --计算麻将子位置
        temp:setMahValue(data[i].huMahID)
        --财神标记
        local jokerData = self._gameData:getJokerData()
        for j = 1, #jokerData do
            if jokerData[j] == data[i].huMahID then
                    temp:showJokerIcon()
                break
            end
        end
        local child = item:getChildren();
        local pos = item:getChildByName("_mahPos")
        -- temp:setPosition(cc.p(pos:getPosition()))
        pos:addChild(temp)
        temp:setScale(1.5)
        self._sv:addChild(item)
        --计算剩余张数
        local fan = data[i].huFan < 0 and '-' or data[i].huFan
        local txtFan = item:getChildByName("_beiShu")
        txtFan:setString(fan)
        txtFan:setFontSize(data[i].huFan>1000 and 26 or 30)
        txtFan:setPositionX(data[i].huFan>1000 and 29 or 39)
        local leftCnt = self:getSurplusMahs(data[i].huMahID)
        item:getChildByName("_zhangshu"):setString(leftCnt)
        data[i].huCnt = leftCnt
        -- item:getChildByName("_zhangshu"):setString(data[i].huCnt)
    end
    self:updateTextInfo(data)
    -- if #data == 1 and data[1].huMahID == 255 then
    --     return
    -- end
    
    -- self:setHuInfo(data)
end

function CanHuMahsUI:flushData(event)
    local mahID = event.msg.nMah
    if self._tingMahID == mahID then
        -- local seat = NG.GAME.roomTableData:localToSeat(NG.GAME.GameDefine.LOCAL_SEAT.BOTTOM)

        -- local allData = self._gameData:getCanHuMahsData(seat)
        -- local data = clone(allData[mahID]) or {}
        -- self:setHuInfo(data)
        
        self:initUI(true)
    end
end

--移除窗口
function CanHuMahsUI:close()
	-- self:removeSelf()
    CanHuMahsUI.super.close(self)
end

function CanHuMahsUI:onTouchEventCheckAutoHu(send,eventType)
    local bSelect = self._checkbox:isSelected()
    self._gameData:setAutoHu(bSelect)
end

function CanHuMahsUI:updateTextInfo(data)
    local fdInfo = self._gameData:getData("FengDing") or {}
    local info = {0,0,0,[4]=fdInfo.nMaxFan or 128,[5]=fdInfo.nMaxYingFan or 256}
    for i, v in pairs(data) do
        info[2] = info[2] + v.huCnt * v.huFan
        info[3] = info[3] + v.huCnt
        print(i,v)
    end
    local preWin = info[2] * (fdInfo.nBaseScore or 1)
    info[1] = info[2] < 0 and '-' or NG.StringTool.getScoreStr(preWin, preWin>=1000000 and "%d" or "%.2f")
    info[2] = info[2] < 0 and '-' or info[2]
    for i=1, 5 do
        if i>= 4 then
            if info[i] == -1 then
                info[i] = "无限制"
            end
        end
        self["_text"..i]:setString(info[i] or tostring(i))
    end
end


function CanHuMahsUI:getSurplusMahs(mahID)
    local excMahs = self._gameData:getExcludeMah()
    for i = 1, #excMahs do
        if excMahs[i] == mahID then
            return 0
        end
    end
    
    local count = 6
    local seat = NG.GAME.roomTableData:localToSeat(NG.GAME.GameDefine.LOCAL_SEAT.BOTTOM)
    --花牌数量
    if mahID >= 97 then
        --补花区
        for i = 0, 3 do
            local replaceMah = self._gameData:getFlowerMahData(i)
            if #replaceMah > 0 then
                for j = 1, #replaceMah do
                    if replaceMah[j] == mahID then
                        count = count - 1
                    end
                end
            end
        end
    end

    --手牌
    local handMahs = self._gameData:getHandMahData(seat)
    if #handMahs > 0 then
        for i = 1, #handMahs do
            if handMahs[i] == mahID then
                count = count - 1
            end
        end
    end

    --单放
    local dfMah = self._gameData:getHandDfData(seat)
    if dfMah and dfMah ~= 0 then
        if dfMah == mahID then
            count = count - 1
        end
    end

    --comb
    for i = 0, 3 do
        local combs = clone(self._gameData:getAllCombMahData(i))
        for j = 1, #combs do
            if #combs[j].nMahs == 4 then
                local gangMah = NG.GAME.GameDefine.MAH_VALUE.BACK
                for k = 1, #combs[j].nMahs do
                    if combs[j].nMahs[k] ~= NG.GAME.GameDefine.MAH_VALUE.BACK then
                        gangMah = combs[j].nMahs[k]
                        break
                    end
                end
                if gangMah ~= NG.GAME.GameDefine.MAH_VALUE.BACK then
                    for k = 1, #combs[j].nMahs do
                        combs[j].nMahs[k] = gangMah
                    end
                end
            end
            for k = 1, #combs[j].nMahs do
                if combs[j].nMahs[k] == mahID then
                    count = count - 1
                end
            end
        end
    end

    --出牌区
    for i = 0, 3 do
        local outMahs = self._gameData:getOutMahData(i)
        if #outMahs > 0 then
            for j = 1, #outMahs do
                if outMahs[j] == mahID then
                    count = count - 1
                end
            end
        end
        local huMahs = self._gameData:getHuMahDataXueLiu(i)
        if #huMahs > 0 then
            for j = 1, #huMahs do
                if huMahs[j] == mahID then
                    count = count - 1
                end
            end
        end
    end

    if count < 0 then
        count = 0
    end
    return count
end

return CanHuMahsUI�4