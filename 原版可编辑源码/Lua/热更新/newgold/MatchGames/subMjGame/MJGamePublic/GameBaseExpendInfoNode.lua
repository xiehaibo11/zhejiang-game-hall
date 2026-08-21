
local GameBaseExpendInfoNode = class("GameBaseExpendInfoNode", cc.Node)

function GameBaseExpendInfoNode:ctor()
    self.roomId = nil
    self.timeDesc = nil
    self.netTypeGeted = false
end

function GameBaseExpendInfoNode:setRoomId(value)
    self.roomId = value
    local roomIdLabel = g_gameGlobal:findChildWithName(self, "roomId")
    roomIdLabel:setString(self.roomId==nil and "" or tostring(self.roomId))
end

function GameBaseExpendInfoNode:setTimeDesc(value)
    self.timeDesc = value or ""
    self.timeDesc = string.gsub(self.timeDesc, " ", " ")
    local timeLabel =g_gameGlobal:findChildWithName(self, "timeLabel")
    timeLabel:setString(self.timeDesc~=nil and tostring(self.timeDesc) or "")
end

function GameBaseExpendInfoNode:setMode(value)
    self:removeAllChildren()
    if value then
        local rootNode = cc.CSLoader:createNode("Match/GameBaseExpendInfo.csb")
        self:addChild(rootNode)
        
        local roomIdLabel =g_gameGlobal:findChildWithName(rootNode, "roomId")
        roomIdLabel:setString(self.roomId==nil and "" or tostring(self.roomId))

        -- 时间
        local timeLabel =g_gameGlobal:findChildWithName(rootNode, "timeLabel")
        local netTypeMark =g_gameGlobal:findChildWithName(rootNode, "netTypeMark")
        local batteryLvMark =g_gameGlobal:findChildWithName(rootNode, "batterySt")
        
        local scheduler = cc.Director:getInstance():getScheduler()
        local function scheduleFunc(dt)
            if timeLabel then
                -- timeLabel:setString(os.date("%H:%M"))
                timeLabel:setString(os.date("%m-%d %H:%M"))
            end
        
            display.loadSpriteFrames("game/game0.plist", "game/game0.png")        
            if netTypeMark and not self.netTypeGeted then
                -- 网络类型
                local networkSpf = {"game/netMarkUnconnect.png","game/netMarkWifi.png","game/netMarkMobile.png"}
                local idx = 2
                local spf = networkSpf[idx]
                if spf and cc.SpriteFrameCache:getInstance():getSpriteFrame(spf) then
                    netTypeMark:loadTexture("Match/"..spf, ccui.TextureResType.plistType)
                    self.netTypeGeted = idx~=1
                end
            end        
            if batteryLvMark then
                local battery = NG.SysTool:GetCurBattery()
                if type(battery) == "number" then
                    batteryLvMark:setPercent(battery)
                end
            end
        end
        scheduleFunc()
        schedule(rootNode, scheduleFunc, 60)
    else
        local rootNode = cc.CSLoader:createNode("Match/GameBaseRecordExpendInfo.csb")
        self:addChild(rootNode)
        
        -- 时间
        local timeLabel =g_gameGlobal:findChildWithName(rootNode, "timeLabel")
        local roomIdLabel =g_gameGlobal:findChildWithName(rootNode, "roomId")

        timeLabel:setString(self.timeDesc==nil and os.date("%H:%M") or tostring(self.timeDesc))
        roomIdLabel:setString(self.roomId==nil and "" or tostring(self.roomId))
    end
end

return GameBaseExpendInfoNode