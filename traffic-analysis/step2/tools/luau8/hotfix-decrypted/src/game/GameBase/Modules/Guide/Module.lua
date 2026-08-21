local GuideModule = CF.gameClass("GuideModule", CF.ModuleBase)

GuideModule.EVENT_UPDATE_PROP_GUIDE = "EVENT_UPDATE_PROP_GUIDE"

GuideModule.GUIDE_TYPE = {
    NONE = 0,
    FIRST_GUIDE = 1,
    SECOND_GUIDE = 2,
}

function GuideModule:getProxyEvents()
    return {
        { module = CF.roomData, eventKeyName = "EVENT_GAMESTART_CHANGED", callBack = "onGameStartChanged" },
    }
end

function GuideModule:ctor(param)
    GuideModule.super.ctor(self, param)
    self._freePropConf = nil
    self:reqPropFreeTimes()
end

-- getType = 0 是获取玩家信息，getType = 1 是消耗一次使用次数
function GuideModule:reqPropFreeTimes(propIndex,completeGuide)
    local specialStr = ";getConfig=1;"
    if propIndex and propIndex > 0 then
        specialStr = ";useProp=1;propIndex=" .. propIndex
    elseif completeGuide then
        specialStr = ";completeGuide=1;"
    end
    
    CF.reqTaskProtocolByIdAndStr(CF.TaskDefine.TASK_ID.TASK_PROP_FREE_TIMES, specialStr, self, self.onPropFreeTimesCallBack)
end

function GuideModule:onPropFreeTimesCallBack(cell, type, data)
    -- "{"rel":0,"sendMax":1,"errcode":0,"sendTimes":0}"
    if type == CF.REQ_TYPE_SUCCESS then
        if data.acData and data.acData ~= "" then
            local result = json.decode(data.acData)
            if result then
                self._freePropConf = result
                self:resetGuideData()
            end
        end
    end
end

function GuideModule:resetGuideData()
    if self:isGuideFree() > 0 then
        local lobbyID = CF.areaData:getLobbyID()
        cc.UserDefault:getInstance():setBoolForKey("PROP_SELF_ANI_" .. lobbyID, false)
        cc.UserDefault:getInstance():setBoolForKey("PROP_FREE_ANI_" .. lobbyID, false)
    end
end

function GuideModule:getGuideType()
    if not self._freePropConf then
        return GuideModule.GUIDE_TYPE.NONE
    end
    if self._freePropConf.firstGuide then
        return GuideModule.GUIDE_TYPE.FIRST_GUIDE
    end
    if self._freePropConf.secondGuide then
        return GuideModule.GUIDE_TYPE.SECOND_GUIDE
    end
    return GuideModule.GUIDE_TYPE.NONE
end

function GuideModule:isGuideFree()
    if self._freePropConf  then
        if self._freePropConf.firstGuide or self._freePropConf.secondGuide then
            return 1
        end
    end
    return 0
end

function GuideModule:getFreeTimes(index)
    if not index then
        return 0
    end

    if self._freePropConf and #self._freePropConf.freeProp > 0 then
        for i = 1, #self._freePropConf.freeProp do
            if self._freePropConf.freeProp[i].propid == index then
                return self._freePropConf.freeProp[i].leftfree
            end
        end
    end
    return 0
end

function GuideModule:onGameStartChanged(event)
    if not event or not event.msg then
        return
    end
    if event.msg.nowState then
        self:dispatchEvent( { name = self.EVENT_UPDATE_PROP_GUIDE })
    end
end

function GuideModule:getFreePropInfo()
    local freeProp,hasFree = self:getFreePropIdFirst()
    if hasFree == false then 
        freeProp,hasFree = self:getFreePropId()
    end
    local showGuide = false
    if CF.roomData:isStartGame() then
        -- 包厢，金币场出现的几率
        local chance = {Box = 5,Gold = 15}
        local randomChance = math.random(1, 100)
        if CF.roomData:isGoldRoom() then
            if randomChance <= chance.Gold then
                showGuide = true
            end
        else
            if randomChance <= chance.Box then
                showGuide = true
            end
            -- 包厢有免费道具、第一局必然显示
            if hasFree and CF.roomData:getPlayCount() == 1 then
                showGuide = true
            end
        end
        print("getFreePropInfo ... randomChance " .. randomChance)
    end
    if not hasFree then
        showGuide = false
    end
    local costInfo = self:getPropInfoByIndex(freeProp)
    return costInfo, hasFree, showGuide
end

function GuideModule:getFreePropId()
    local tempFreeProps = {}
    local freeProp = 0
    local hasFree = false
    local maxIndex = 10
    local randomIndex = math.random(1, maxIndex)
    if self._freePropConf and randomIndex <= #self._freePropConf.freeProp then
        freeProp = self._freePropConf.freeProp[randomIndex].propid
        for i = 1, #self._freePropConf.freeProp do
            if self._freePropConf.freeProp[i].leftfree > 0 and self._freePropConf.freeProp[i].propid <= maxIndex then
                tempFreeProps[#tempFreeProps + 1] = self._freePropConf.freeProp[i]
            end
        end
        if #tempFreeProps > 0 then
            randomIndex = math.random(1, #tempFreeProps)
            freeProp = tempFreeProps[randomIndex].propid
            hasFree = true
        end
    end
    return freeProp,hasFree
end

--对他人的头像显示的免费道具以最新的为准（恭喜发财＞爆竹＞其他）
function GuideModule:getFreePropIdFirst()
    local freeProp = 0
    local hasFree = false
    local tempFreeProps = {150692,150693} 
    if  self._freePropConf then 
        for _,v in pairs( self._freePropConf) do 
            for _, tempFreePropsId in pairs(tempFreeProps) do 
                if v.propid == tempFreePropsId then 
                    freeProp = tempFreePropsId 
                    hasFree = true
                    return freeProp,hasFree
                end
            end 
        end
    end
    return freeProp,hasFree
end

function GuideModule:getPropInfoByIndex(index)
    local aniList
    local configer = CF.gameRequire("Modules.PlayerInfo.PropAniConfiger").new()
    if CF.roomData:isGoldRoom() then
        aniList = configer:getAniInfoByLobbyID("Gold")
    else
        aniList = configer:getAniInfoByLobbyID(CF.areaData:getLobbyID())
    end

    for i = #aniList, 1, -1 do
        if (tonumber(aniList[i].IsSelf) or 1) < 1 then
            table.remove(aniList, i)
        end
    end

    for _, v in pairs(aniList) do
        if index == tonumber(v.Index) then
            return v
        end
    end
    return ""
end

return GuideModule�