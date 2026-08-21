local CanHuMahsUI = CF.gameClass("CanHuMahsUI", CF.ViewBase)
local UIMah = CF.gameRequire("Modules.GameLayer.View2D.UIMah")

function CanHuMahsUI:getCSBPath()
    return "cocosStudio/MahjongNew/GameLayer/CSB/CanHuMahsNew.csb"
end

function CanHuMahsUI:getBindingInfo()
    return {
        ["_KW_PANEL_ROOT"] = { varName = "_rootNode", onTouch = "onBgClick" },
        ["_bg"] = { varName = "_canHuMahsBg" },
        ["_model"] = { varName = "_model" },
        ["_KW_IMG_BG"] = { varName = "_KW_IMG_BG" },
        ["_KW_LEFT_TEXT"] = { varName = "_KW_LEFT_TEXT" },
        ["_KW_IMG_BG_PANEL"] = { varName = "_KW_IMG_BG_PANEL" },
        ["_KW_ZHANG"] = { varName = "_KW_ZHANG" },
        ["_line"] = { varName = "_line" },
    }
end

function CanHuMahsUI:getProxyEvents()
    return {
        { module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_HIDE_CAN_HU_MAHS", callBack = "close" },
        { module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_FLUSH_CAN_HU_MAH_DATA", callBack = "flushData" }
    }
end

function CanHuMahsUI:ctor(param)
    param = param or {}
    CanHuMahsUI.super.ctor(self, param)
    self._gameData = CF.game:getModule("GameLayer"):getGameData()
    self._tingMahID = param.tingMahID or 0
    self._mahConfig = param.mahConfig
    self:initUI()
end

function CanHuMahsUI:onBgClick(send, event)
    self:close()
end

--将窗体显示到屏幕
function CanHuMahsUI:showSelf(zorder)
    zorder = zorder or CF.ZORDER.WINDOW
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
    return CF.settingData:getDefaultData(nil, true)
end

function CanHuMahsUI:initUI()
    local data
    if self._tingMahID ~= 0 then        --选中牌的听牌提示
        local seat = CF.roomData:localToSeat(CF.GameDefine.LOCAL_SEAT.BOTTOM)
        local allData = self._gameData:getCanHuMahsData(seat)
        data = clone(allData[self._tingMahID]) or {}
    else                                --点击听按钮的听牌听是
        self._canHuMahsBg:setAnchorPoint(cc.p(1, 0.5))
        self._canHuMahsBg:setPosition(self._model:getPositionX(), self._model:getPositionY())
        data = clone(self._gameData:getLastTingData()) or {}
    end
    --整理一下数据
    local tmpData = {}
    for i = 1, #data do
        if data[i].huMahID and data[i].huMahID > 0 then
            table.insert(tmpData, data[i])
        end
    end
    data = tmpData
    --测试用例
    -- data = {
    --     [1] = { huMahID = 17, huInfoNum = "999", huInfo = "台" }, [2] = { huMahID = 17, huInfoNum = "2,2", huInfo = "台,倍" }, [3] = { huMahID = 17, huInfoNum = "300,3,3", huInfo = "台,倍,张" },
    --     [4] = { huMahID = 17, huInfoNum = "4,4", huInfo = "台,倍" }, [5] = { huMahID = 17, huInfoNum = "5,5", huInfo = "台,倍" }, [6] = { huMahID = CF.GameDefine.MAH_VALUE.JIAN_BAI, huInfoNum = "6,6", huInfo = "台,倍" },
    --     [7] = { huMahID = 17, huInfoNum = "7,7", huInfo = "台,倍" }, [8] = { huMahID = 17, huInfoNum = "8,8", huInfo = "台,倍" }, [9] = { huMahID = 17, huInfoNum = "9,9", huInfo = "台,倍" },
    --     [10] = { huMahID = 17, huInfoNum = "10,10", huInfo = "台,倍" }, [11] = { huMahID = 17, huInfoNum = "11,11", huInfo = "台,倍" }, [12] = { huMahID = 17, huInfoNum = "12,12", huInfo = "台,倍" },
    --     [13] = { huMahID = 17, huInfoNum = "13,13", huInfo = "台,倍" }, [14] = { huMahID = 17, huInfoNum = "14,14", huInfo = "台,倍" }, [15] = { huMahID = 17, huInfoNum = "15,15", huInfo = "台,倍" },
    --     [16] = { huMahID = 17, huInfoNum = "16,16", huInfo = "台,倍" }, [17] = { huMahID = 17, huInfoNum = "17,17", huInfo = "台,倍" }, [18] = { huMahID = 17, huInfoNum = "18,18", huInfo = "台,倍" },
    --     [19] = { huMahID = 17, huInfoNum = "19,19", huInfo = "台,倍" }, [20] = { huMahID = 17, huInfoNum = "20,20", huInfo = "台,倍" }, [21] = { huMahID = 17, huInfoNum = "21,21", huInfo = "台,倍" },
    --     [22] = { huMahID = 17, huInfoNum = "22,22", huInfo = "台,倍" }, [23] = { huMahID = 17, huInfoNum = "23,23", huInfo = "台,倍" }, [24] = { huMahID = 17, huInfoNum = "24,24", huInfo = "台,倍" },
    --     [25] = { huMahID = 17, huInfoNum = "25,25", huInfo = "台,倍" }, [26] = { huMahID = 17, huInfoNum = "26,26", huInfo = "台,倍" }, [27] = { huMahID = 17, huInfoNum = "27,27", huInfo = "台,倍" },
    --     [28] = { huMahID = 17, huInfoNum = "28,28", huInfo = "台,倍" }, [29] = { huMahID = 17, huInfoNum = "29,29", huInfo = "台,倍" }, [30] = { huMahID = 17, huInfoNum = "30,30", huInfo = "台,倍" },
    --     [31] = { huMahID = 17, huInfoNum = "31,31", huInfo = "台,倍" }, [32] = { huMahID = 17, huInfoNum = "32,32", huInfo = "台,倍" }, [33] = { huMahID = 17, huInfoNum = "33,33", huInfo = "台,倍" },
    --     [34] = { huMahID = 17, huInfoNum = "34,34", huInfo = "台,倍" }, [35] = { huMahID = 17, huInfoNum = "35,35", huInfo = "台,倍" }, [36] = { huMahID = 17, huInfoNum = "36,36", huInfo = "台,倍" },
    -- }
    --    data = {[1] = {huMahID = 255, huInfoNum = "999,111", huInfo = "台,倍"}}
    --计算框体大小宽高容纳麻将个数及框体大小
    local width = 4             --一行的麻将子个数
    local height            --一列的麻将子个数
    local bgWidth           --框体宽度
    local bgHeight          --框体高度
    if #data < 4 then
        width = #data
    elseif #data > 5 and #data < 9 then
        width = 4
    elseif #data > 8 and #data < 21 then
        width = 5
    elseif #data > 20 then
        width = 6
    end
    if #data % width == 0 then
        height = #data / width
    else
        height = math.ceil(#data / width)
    end
    bgWidth = (width + 1) * 235
    bgHeight = height * 200
    if height == 1 or height == 2 then
        bgHeight = bgHeight + 25
    end

    --胡任意牌
    if #data == 1 and data[1].huMahID == 255 then
        bgWidth = 375
        local huLogo = ccui.ImageView:create()
        huLogo:loadTexture("hu.png", ccui.TextureResType.plistType)
        huLogo:setAnchorPoint(cc.p(0, 0.5))
        huLogo:setScale(0.7)
        huLogo:setPosition(-35, bgHeight / 2)
        self._canHuMahsBg:addChild(huLogo)
        self._KW_IMG_BG:setVisible(false)
        self._line:setVisible(true)
    else
        --胡字
        local huLogo = self._KW_IMG_BG
        huLogo:setAnchorPoint(cc.p(0, 0.5))
        huLogo:setPosition(0, bgHeight / 2)
        huLogo:setContentSize(huLogo:getContentSize().width, bgHeight - 15)
        huLogo:setVisible(true)
        self._KW_IMG_BG_PANEL:setPositionY(bgHeight / 2)
        self._line:setVisible(false)
    end
    self._canHuMahsBg:setContentSize(bgWidth, bgHeight)

    --分割线
    self._line:setPosition(190, bgHeight)
    self._line:setContentSize(2, bgHeight)

    --创建所有麻将子
    local config = self:getMahConfig()
    for i = 1, #data do
        local temp = UIMah.new(CF.GameDefine.MAH_TYPE.STAND_FACE_FORWARD, config)
        temp:setName("KW_TING_" .. i)
        temp:setAnchorPoint(cc.p(0.5, 0.5))
        --计算麻将子位置
        local x = 290
        local y = bgHeight - 120
        if i == 1 then
            print("")
            --x = 
            --y = 
        elseif i % width == 1 then
            local preNode = self._canHuMahsBg:getChildByName("KW_TING_" .. i - width)
            x = preNode:getPositionX()
            y = preNode:getPositionY() - 190
        else
            local preNode = self._canHuMahsBg:getChildByName("KW_TING_" .. i - 1)
            x = preNode:getPositionX() + 230
            y = preNode:getPositionY()
        end
        temp:setPosition(x, y)
        temp:setMahValue(data[i].huMahID)
        --财神标记
        local jokerData = self._gameData:getJokerData()
        for j = 1, #jokerData do
            if jokerData[j] == data[i].huMahID then
                temp:showJokerIcon()
                break
            end
        end
        temp:setScale(0.7)
        self._canHuMahsBg:addChild(temp)
        --计算剩余张数
        if data[i].huMahID ~= 255 and CF.configData:needGetSurplusMahCount() then
            local count = self:getSurplusMahs(data[i].huMahID)
            data[i].huInfoNum = data[i].huInfoNum .. count
            data[i].huInfo = data[i].huInfo .. "张"
        end
    end

    if #data == 1 and data[1].huMahID == 255 then
        return
    end

    self:setHuInfo(data)
end

function CanHuMahsUI:setHuInfo(data)
    local huInfoPositionY = {
        [1] = {-30 },
        [2] = { 0, -70 },
        [3] = { 20, -30, -80 },
    }
    local count = 0
    --渲染几番，几台，几张
    for i = 1, #data do
        local infoData = string.split(data[i].huInfoNum, ",")
        local node = self._canHuMahsBg:getChildByName("KW_TING_" .. i)
        local x = node:getPositionX()
        local y = node:getPositionY()
        for j = 1, #infoData do
            local haveNode = self._canHuMahsBg:getChildByName("info_num_" .. i .. "_" .. j)
            if haveNode then
                haveNode:removeSelf()
            end
            local text = ccui.Text:create()
            :setFontName("res/cocosStudio/Common/Font/fangzhengcuyuan.TTF")
            :setFontSize(46)
            if j == 1 then
                text:setColor(cc.c3b(223, 55, 16))
            else
                count = count + tonumber(infoData[j])
                text:setColor(cc.c3b(131, 88, 34))
            end
            text:setString(infoData[j])
            text:setName("info_num_" .. i .. "_" .. j)
            text:setAnchorPoint(cc.p(0, 0))
            local textX = x + 50
            text:setPosition(textX, y + huInfoPositionY[#infoData][j])
            self._canHuMahsBg:addChild(text)
        end
    end
    for i = 1, #data do
        local infoData = string.split(data[i].huInfo, ",")
        for j = 1, #infoData do
            local node = self._canHuMahsBg:getChildByName("info_num_" .. i .. "_" .. j)
            local haveNode = self._canHuMahsBg:getChildByName("info_" .. i .. "_" .. j)
            if haveNode then
                haveNode:removeSelf()
            end
            local text = ccui.Text:create()
            :setFontName("res/cocosStudio/Common/Font/fangzhengcuyuan.TTF")
            :setFontSize(46)
            if j == 1 then
                text:setColor(cc.c3b(223, 55, 16))
            else
                text:setColor(cc.c3b(131, 88, 34))
            end
            text:setString(infoData[j])
            text:setName("info_" .. i .. "_" .. j)
            text:setAnchorPoint(cc.p(0, 0))
            local textX = node:getPositionX() + node:getContentSize().width
            text:setPosition(textX, node:getPositionY())
            self._canHuMahsBg:addChild(text)
        end
    end

    if #data > 20 and #data < 31 then
        self._canHuMahsBg:setScale(0.85)
    elseif #data > 30 then
        self._canHuMahsBg:setScale(0.7)
    end
    self._KW_LEFT_TEXT:setString(count)
    self._KW_ZHANG:setPositionX(self._KW_LEFT_TEXT:getContentSize().width)
end

function CanHuMahsUI:getSurplusMahs(mahID)
    local count = 4
    local seat = CF.roomData:localToSeat(CF.GameDefine.LOCAL_SEAT.BOTTOM)
    --花牌数量
    if mahID >= 97 then
        count = 1
        --补花区
        for i = 0, CF.roomData:getMaxPlayer() - 1 do
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
    --开牌
    local openMahs = self._gameData:getOpenData()
    if #openMahs > 0 then
        for i = 1, #openMahs do
            if openMahs[i] == mahID then
                count = count - 1
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
    for i = 0, CF.roomData:getMaxPlayer() - 1 do
        local combs = clone(self._gameData:getAllCombMahData(i))
        for j = 1, #combs do
            if #combs[j].nMahs == 4 then
                local gangMah = CF.GameDefine.MAH_VALUE.BACK
                for k = 1, #combs[j].nMahs do
                    if combs[j].nMahs[k] ~= CF.GameDefine.MAH_VALUE.BACK then
                        gangMah = combs[j].nMahs[k]
                        break
                    end
                end
                if gangMah ~= CF.GameDefine.MAH_VALUE.BACK then
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
    local outType = CF.settingData:getOutTableCardStyle()
    if outType == CF.GameDefine.OUTMAHS_PUT_TYPE.FOUR_DIRECTION then
        for i = 0, CF.roomData:getMaxPlayer() - 1 do
            local outMahs = self._gameData:getOutMahData(i)
            if #outMahs > 0 then
                for j = 1, #outMahs do
                    if outMahs[j] == mahID then
                        count = count - 1
                    end
                end
            end
        end
    else
        local outMahs = self._gameData:getOutMahData()
        if #outMahs > 0 then
            for i = 1, #outMahs do
                if outMahs[i] == mahID then
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

function CanHuMahsUI:flushData(event)
    local mahID = event.data
    local seat = CF.roomData:localToSeat(CF.GameDefine.LOCAL_SEAT.BOTTOM)

    local allData = self._gameData:getCanHuMahsData(seat)
    local data = clone(allData[mahID]) or {}
    self:setHuInfo(data)
end

--移除窗口
function CanHuMahsUI:close()
    self:removeSelf()
end


return CanHuMahsUI`: