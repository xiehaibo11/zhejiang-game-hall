local UIMahLayer = CF.gameClass("UIMahLayer", "game.Mahjong.BasicMahjong.Modules.GameLayer.View2D.UIMahLayer")

function UIMahLayer:getProxyEvents()
    local proxyEvents = UIMahLayer.super.getProxyEvents(self)
    proxyEvents[#proxyEvents + 1] = {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_SHOW_CHIPS_INFO", callBack = "showChipsInfo"}
    proxyEvents[#proxyEvents + 1] = {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_CLEAR_CHIPS_INFO", callBack = "clearChipsInfo"}
    proxyEvents[#proxyEvents + 1] = {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_SHOW_HF_ANI", callBack = "showHFAni"}
    return proxyEvents
end

function UIMahLayer:showChipsInfo(event)
    if event.data.chipsInfo == nil or next(event.data.chipsInfo) == nil then
        return
    end
    self._chips = event.data.chipsInfo
    if self._KW_ADAPT_MAH_5 then
        local openMahsNode = self._KW_ADAPT_MAH_5:getChildByName(self.KW_JOKER_MAH)
        if openMahsNode then
            for i=1,#self._chips do
                local chipImg = openMahsNode:getChildByName("KW_UI_CHIP_"..i)
                if chipImg then
                    chipImg:removeSelf()
                end            
                local textureName = string.format("saizi_sz_%d.png", self._chips[i])
                local imageChip = ccui.ImageView:create()
                imageChip:setName("KW_UI_CHIP_"..i)
                imageChip:loadTexture(textureName, ccui.TextureResType.plistType)
                imageChip:setAnchorPoint(cc.p(0.5, 0.5))
                imageChip:setPosition(cc.p(100*i-150,-160))
                openMahsNode:addChild(imageChip)
            end
        end
    end
end

function UIMahLayer:clearChipsInfo(event)
    if self._KW_ADAPT_MAH_5 then
        local openMahsNode = self._KW_ADAPT_MAH_5:getChildByName(self.KW_JOKER_MAH)
        if openMahsNode then
            local bmfNode = openMahsNode:getChildByName("BMF_NODE")
            if bmfNode then
                bmfNode:removeSelf()
            end    
            local hfNode = openMahsNode:getChildByName("IMG_NOHF")
            if hfNode then
                hfNode:removeSelf()
            end    
            if self._chips then
                for i=1,#self._chips do
                    local chipImg = openMahsNode:getChildByName("KW_UI_CHIP_"..i)
                    if chipImg then
                        chipImg:removeSelf()
                    end
                end
            end
        end
    end
end

function UIMahLayer:showHFAni(event)   
    local chips = event.data.chipsInfo
    local pt = event.data.playType
    local playcount = event.data.playcount
    if #chips < 2 then
        return
    end
    -- 全黄模式下只在第一局显示黄幡动画
    if pt == 2 and playcount > 1 then
        self:setTableHuangFanVisible(true)
        return
    end

    local showHuangFan = false
    if (pt == 3 and #chips == 2 and (chips[1] == chips[2] or chips[1] + chips[2] >= 10)) or pt == 2 then
        local winLostData = CF.game:getModule("WinLost"):getWinLostData()
        winLostData:setHuangFan(true)
        self._hfAniListener = cc.Director:getInstance():getScheduler():scheduleScriptFunc( function()
            cc.Director:getInstance():getScheduler():unscheduleScriptEntry(self._hfAniListener)
            if tolua.isnull(self) then
                return
            end
            --播放黄翻动画
            if self._hfAniLayer then
                self:removeChild(self._hfAniLayer)
            end
            local HuangFanLayer = CF.gameRequire("Modules.GameLayer.HuangFanLayer")
            self._hfAniLayer = HuangFanLayer.new()
            self._hfAniLayer:showAni(chips)
            self:addChild(self._hfAniLayer)
        end , 1.0, false)
        showHuangFan = true
    end
    self:setTableHuangFanVisible(showHuangFan)
end

--桌布上的黄翻X2显示
function UIMahLayer:setTableHuangFanVisible(bVisible)
    if not self._KW_ADAPT_MAH_5 then
        return
    end
    local openMahsNode = self._KW_ADAPT_MAH_5:getChildByName(self.KW_JOKER_MAH)
    if openMahsNode then
        local bmfNode = openMahsNode:getChildByName("BMF_NODE")
        if bmfNode then
            bmfNode:removeSelf()
        end    
        local posx = 840
        if bVisible then
            local fntPath = "res/cocosStudio/MahjongNew/GameLayer/Image/HuZhou/fnt/huangfan_number-export.fnt"   
            local bmf = ccui.TextBMFont:create()
            bmf:setFntFile(fntPath)
            bmf:setString("x2")
            bmf:setPosition(cc.p(posx,-180))
            bmf:setName("BMF_NODE")
            openMahsNode:addChild(bmf)
        end

        local hfNode = openMahsNode:getChildByName("IMG_NOHF")
        if hfNode then
            hfNode:removeSelf()
        end    
        if bVisible then
            local textureName = string.format("hfnobg.png")
            local imageHF = ccui.ImageView:create()
            imageHF:loadTexture(textureName, ccui.TextureResType.plistType)
            imageHF:setAnchorPoint(cc.p(0.5, 0.5))
            imageHF:setPosition(cc.p(posx-170,-180))
            imageHF:setScale(0.7)
            imageHF:setName("IMG_NOHF")
            openMahsNode:addChild(imageHF)
        end
    end
end

return UIMahLayer