local PlayerInfoModule = CF.gameClass("PlayerInfoModule", CF.ModuleBase)
PlayerInfoModule.EVENT_UPDATE_PROPANI = "EVENT_UPDATE_PROPANI"

local BlockType = {
    Voice = 0,
    Chat = 1,
    Emojis = 2
}

local blockedKeys = {
    [BlockType.Voice] = "blockedVoice_%d_%d",
    [BlockType.Chat] = "blockedPhrase_%d_%d",
    [BlockType.Emojis] = "blockedEmojis_%d_%d"
}

function PlayerInfoModule:ctor(param)
    PlayerInfoModule.super.ctor(self, param)
    self._emojiPropsConfig = {}

    self._blockedData = {
        [BlockType.Voice] = {},
        [BlockType.Chat] = {},
        [BlockType.Emojis] = {}
    }
    self._sxvipFriendInfo = {}
end

function PlayerInfoModule:reqEmojiPropFreeTimes(isgold)
    self._emojiPropsConfig = XH.lobby:getModule("InteractiveProps"):getboxEmojiPropsConfig()
    if isgold then
        self._emojiPropsConfig = XH.lobby:getModule("InteractiveProps"):getgoldEmojiPropsConfig()
    end
    local vipFreeProps = XH.lobby:getModule("Sxvip"):getFreeProps()
    for _, v in pairs(self._emojiPropsConfig) do
        for i = 1, #v do
            v[i].vipProp = table.has(vipFreeProps, v[i].propID) ~= nil
        end
    end

    -- 与产运讨论，不要免费的逻辑了
    -- local freeemoji = {}
    -- for i = 1, #(self._emojiPropsConfig.single) do
    --     table.insert(freeemoji, tonumber(self._emojiPropsConfig.single[i].propID))
    --     self._emojiPropsConfig.single[i].isfreeemoji = true
    -- end
    -- if #freeemoji == 0 then
    --     return
    -- end
    -- CF.reqEmojiPropFreeTimes(freeemoji, self, self.onUseEmojiPropsInfoDataCallback)
end

-- function PlayerInfoModule:onUseEmojiPropsInfoDataCallback(cell, type, data)
--     if type == CF.REQ_TYPE_SUCCESS then
--         if data.PropUseLastTime and data.PropUseLastTime ~= "" then
--             for n = 1, #data.PropUseLastTime do
--                 for i = 1, #(self._emojiPropsConfig.single) do
--                     if data.PropUseLastTime[n].propid == tonumber(self._emojiPropsConfig.single[i].propID) then
--                         self._emojiPropsConfig.single[i].isfreeemoji = false
--                     end
--                 end
--             end
--         end
--     end
-- end

function PlayerInfoModule:getEmojiPropsConfig()
    return self._emojiPropsConfig
end

function PlayerInfoModule:getEmojiPropsFreeConfig(index)
    return false
    -- 不要免费
    -- if CF.roomData:isBianChaDKGoldRoom() or CF.roomData:is50() then
    --     return false
    -- end
    -- if not index then
    --     return 0
    -- end

    -- if self._emojiPropsConfig.single then
    --     for i = 1, #(self._emojiPropsConfig.single) do
    --         if self._emojiPropsConfig.single[i].propID == index then
    --             return self._emojiPropsConfig.single[i].isfreeemoji
    --         end
    --     end
    -- end
    -- return 0
end

function PlayerInfoModule:getFreePropInfo()
    local freeProp, hasFree = self:getFreePropIdFirst()
    if hasFree == false then
        freeProp, hasFree = self:getFreePropId()
    end
    local showGuide = false
    if CF.roomData:isStartGame() then
        -- 包厢，金币场出现的几率
        local chance = {Box = 5, Gold = 15}
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

--对他人的头像显示的免费道具以最新的为准（恭喜发财＞爆竹＞其他）
function PlayerInfoModule:getFreePropIdFirst()
    local freeProp = 0
    local hasFree = false
    -- local tempFreeProps = {150692, 150693}
    -- if self._emojiPropsConfig then
    --     for _, v in pairs(self._emojiPropsConfig) do
    --         for _, tempFreePropsId in pairs(tempFreeProps) do
    --             if v.to_prop_id == tempFreePropsId then
    --                 if v.isfreeemoji then
    --                     freeProp = tempFreePropsId
    --                     hasFree = true
    --                     return freeProp, hasFree
    --                 end
    --             end
    --         end
    --     end
    -- end
    return freeProp, hasFree
end

function PlayerInfoModule:getFreePropId()
    local tempFreeProps = {}
    local freeProp = 0
    local maxIndex = 10
    local hasFree = false
    local randomIndex = math.random(1, maxIndex)
    if self._emojiPropsConfig and randomIndex <= #self._emojiPropsConfig then
        freeProp = self._emojiPropsConfig[randomIndex].to_prop_id
        for i = 1, #self._emojiPropsConfig do
            if i > maxIndex then
                break
            end
            if self._emojiPropsConfig[i].isfreeemoji then
                tempFreeProps[#tempFreeProps + 1] = self._emojiPropsConfig[i]
            end
        end
        if #tempFreeProps > 0 then
            randomIndex = math.random(1, #tempFreeProps)
            freeProp = tempFreeProps[randomIndex].to_prop_id
            hasFree = true
        end
    end
    return freeProp, hasFree
end

--获取本地道具配置信息
function PlayerInfoModule:getPropInfoByIndex(index)
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
        if index == tonumber(v.Propid) then
            return v
        end
    end
    return ""
end

function PlayerInfoModule:getPropsCostValueByIndex(index)
    if not index then
        return nil
    end
    if self._emojiPropsConfig then
        for i = 1, #self._emojiPropsConfig do
            if self._emojiPropsConfig[i].to_prop_id == index then
                return self._emojiPropsConfig[i].belong_to
            end
        end
    end
    return nil
end

function PlayerInfoModule:getPropAniList()
    if self._propAniList and #self._propAniList > 0 then
        for i = 1, #self._propAniList do
            self._propAniList[i].belong_to = self._propAniList[i].mark
            if self._propAniList[i].belong_to == "" and self._propAniList[i].price_config and self._propAniList[i].price_config[1] then
                self._propAniList[i].belong_to = self._propAniList[i].price_config[1].value .. self._propAniList[i].price_config[1].name
            end
            self._propAniList[i].from_prop_id = self._propAniList[i].needPropId
            self._propAniList[i].Propid = tonumber(self._propAniList[i].value)
        end
        return self._propAniList
    end
    CF.reqPropAniList(self, self.onPropAniList)
    return {}
end

function PlayerInfoModule:onPropAniList(req, type, data)
    if type == CF.REQ_TYPE_SUCCESS then
        self._propAniList = data
        local aniList
        local configer = CF.gameRequire("Modules.PlayerInfo.PropAniConfiger").new()
        if CF.roomData:isGoldRoom() then
            aniList = configer:getAniInfoByLobbyID("Config")
        end
        for i = 1, #aniList do
            for j = 1, #self._propAniList do
                if aniList[i].Propid == tonumber(self._propAniList[j].value) then
                    self._propAniList[j].Index = aniList[i].Index
                    self._propAniList[j].AniPicName = aniList[i].AniPicName
                    self._propAniList[j].Flag = aniList[i].Flag
                end
            end
        end
        self:dispatchEvent({ name = self.EVENT_UPDATE_PROPANI })
    end
end

function PlayerInfoModule:setBlockedEmojis(numid, isBlock)
    self:setBlocked(BlockType.Emojis, numid, isBlock)
end

function PlayerInfoModule:getBlockedEmojis(numid)
    return self:getBlocked(BlockType.Emojis, numid) and (not XH.lobby:getModule("Sxvip"):isExpire())
end

function PlayerInfoModule:setBlockedVoice(numid, isBlock)
    self:setBlocked(BlockType.Voice, numid, isBlock)
end

function PlayerInfoModule:getBlockedVoice(numid)
    return self:getBlocked(BlockType.Voice, numid) and (not XH.lobby:getModule("Sxvip"):isExpire())
end

function PlayerInfoModule:setBlockedChat(numid, isBlock)
    self:setBlocked(BlockType.Chat, numid, isBlock)
end

function PlayerInfoModule:getBlockedChat(numid)
    return self:getBlocked(BlockType.Chat, numid) and (not XH.lobby:getModule("Sxvip"):isExpire())
end

function PlayerInfoModule:setBlocked(type, numid, isBlock)
    local key = string.format(blockedKeys[type], XH.playerData:getNumberID(), numid)
    self._blockedData[type][key] = isBlock
    cc.UserDefault:getInstance():setBoolForKey(key, isBlock)
end

function PlayerInfoModule:getBlocked(type, numid)
    local key = string.format(blockedKeys[type], XH.playerData:getNumberID(), numid)
    if self._blockedData[type][key] == nil then
        self._blockedData[type][key] = cc.UserDefault:getInstance():getBoolForKey(key, false)
    end
    return self._blockedData[type][key]
end

function PlayerInfoModule:getFriendInfo(numid)
    return self._sxvipFriendInfo[numid .. ""]
end

function PlayerInfoModule:setFriendInfo(numid, info)
    self._sxvipFriendInfo[numid .. ""] = info
end
return PlayerInfoModule
l'  