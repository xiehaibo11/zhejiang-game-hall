local AutoPopModule = class("AutoPopModule", XH.ModuleBase)
local ConfigurationDefine = require("lobby.Modules.Configuration.Define")
local LuckyTaskDefine = require("lobby.Modules.LuckyTask.Define")

AutoPopModule.EVENT_NotifyLuckyTask = "EVENT_NotifyLuckyTask"

function AutoPopModule:ctor()
    AutoPopModule.super.ctor(self)
    self._changeSceneName = ""
    self._iconPos = nil
    self._checkList = {
        {name = "InviteAct", module = XH.lobby:getModule("InviteActivity")},
        {name = "RecallNew", module = XH.lobby:getModule("RecallNew")},
        {name = "LuckyMission", module = XH.lobby:getModule("LuckyMission")},
        {name = "luckytask", module = XH.lobby:getModule("LuckyTask")},
        {name = "goldFirstRecharge", module = XH.lobby:getModule("GoldNew"):getSubModule("ActFirstRecharge")},
        {name = "goldPeGP", module = XH.lobby:getModule("GoldNew"):getSubModule("ActPeriodicGiftPackage")},
        {name = "MonthlyCard", module = XH.lobby:getModule("MonthlyCard")},
        {name = "SxvipAct", module = XH.lobby:getModule("SxvipAct")},
        {name = "TimeLoginAct", module = XH.lobby:getModule("TimeLoginAct")},
    }
    self._checkIdx = 1
    self._isGetResp = {}
    self._isInGameShowed = {}
end

function AutoPopModule:getProxyEvents()
    return {{module = XH.lobby:getModule("Configuration"), eventKeyName = "EVENT_REQ_CONFIGURATION_SUCCESS", callBack = "onGetConfiguration"}}
end

function AutoPopModule:onGetConfiguration(event)
    local key = event.data.key
    if key and key == ConfigurationDefine.Config.ALL then
        self:getClientCfg()

        self:onBackToLobby("login")
        local cfg = self._cfg

        -- 创建一个映射，将 cfg 中的 name 与其索引关联起来
        local nameToIndex = {}
        for i, item in ipairs(cfg) do
            nameToIndex[item.name] = i
        end

        -- 遍历 _checkList 并进行处理
        for i = #self._checkList, 1, -1 do
            local cfgIdx = nameToIndex[self._checkList[i].name]
            if not cfgIdx then
                table.remove(self._checkList, i)
            else
                self._checkList[i].sort = cfgIdx
            end
        end

        -- 根据 sort 属性对 _checkList 进行排序
        table.sort(self._checkList, function(a, b)
            return a.sort < b.sort
        end)
    end
end

function AutoPopModule:getReqConfig()
    return {}
end

-- 获取公用配置
function AutoPopModule:getClientCfg()
    if self._cfg then
        return self._cfg
    end
    local configModule = XH.lobby:getModule("Configuration")
    if not configModule then
        return
    end
    local configJsonData = configModule:getConfigJsonData(ConfigurationDefine.Config.ALL, "AllConfig")
    if configJsonData then
        self._cfg = configJsonData.autoPop or {}
        return self._cfg
    end
end

function AutoPopModule:onActResp(actName)
    if self._isGetResp[actName] == true then
        return
    end
    self._checkIdx = 1
    self._isGetResp[actName] = true
    self:checkPop(self._checkIdx)
end

function AutoPopModule:onBackToLobby(from)
    self:onChangeScene(from)
end

function AutoPopModule:onChangeScene(from)
    self._changeSceneName = from
    self._isInGameShowed = {}
end

function AutoPopModule:whenBackLobbyCheckPop()
    self._isGetResp = {}
    self._checkIdx = 1
    self:checkPop(self._checkIdx)
end

function AutoPopModule:checkPop(checkIdx)
    if self._changeSceneName and self._changeSceneName ~= "" then
        if checkIdx ~= nil then
            self._checkIdx = checkIdx
        end
        local module = self._checkList[self._checkIdx] and self._checkList[self._checkIdx].module
        local name = self._checkList[self._checkIdx] and self._checkList[self._checkIdx].name
        if module == nil then
            -- 所有模块检测结束，结束流程
            self:onCheckEnd()
            return
        end

        local from = self._changeSceneName
        local popCfg = self:getClientCfg()
        if popCfg == nil then
            return
        end
        local cfg = nil
        for _, v in ipairs(popCfg) do
            if v.name == name then
                cfg = v.popCfg
                break
            end
        end

        cfg = cfg or {}
        cfg = cfg[from]
        if cfg == nil or not XH.lobby:getModule("PopSystem"):checkPop(name) then
            self:checkPop(self._checkIdx + 1)
            return
        end

        if self._isGetResp[name] ~= true and module:isNeedReq(self._changeSceneName) then
            XH.SysTool.performWithDelayGlobal(function()
                if self._isGetResp[name] ~= true then
                    self._isGetResp[name] = true
                    self:checkPop(self._checkIdx)
                end
            end, 2)
            return -- 等回调
        end

        if not module:isValid() then
            self:checkPop(self._checkIdx + 1)
            return
        end
        if module:isOpening() then
            -- 已经打开，结束流程
            self:onCheckEnd()
            return
        end
        if module.checkScene and module:checkScene(from) then
            return
        end
        local isHaveAward = module:isHaveAward()
        local isInGame = from == "ingame"
        local cfgTotal = cfg["total"] or {9999, 9999}
        local localInfo = XH.userDefault:getValue(XH.userDefault.KEY_ID.KW_AURO_POP_SHOW, {})
        localInfo[name] = localInfo[name] or {}
        local showInfo = localInfo[name]
        showInfo[from] = showInfo[from] or {0, 0}
        showInfo["total"] = showInfo["total"] or {0, 0}
        local index = isHaveAward and 2 or 1
        local showCnt = showInfo[from][index]
        local totalShowCnt = showInfo["total"][index]
        if not isInGame and (showCnt >= cfg[index] or totalShowCnt >= cfgTotal[index]) then
            self:checkPop(self._checkIdx + 1)
            return
        end
        if isInGame and showCnt >= cfg[index] then
            self:checkPop(self._checkIdx + 1)
            return
        end

        local scenefrom = isInGame and LuckyTaskDefine.POP_FROM.GAME_NOTSTART or LuckyTaskDefine.POP_FROM.LOBBY
        module:openView(scenefrom, isInGame, isInGame and self._iconPos or nil, self._changeSceneName)
        showInfo[from][index] = showCnt + 1
        if not isInGame then
            showInfo["total"][index] = totalShowCnt + 1
        else
            self._isInGameShowed[name] = true
        end
        XH.userDefault:setValue(XH.userDefault.KEY_ID.KW_AURO_POP_SHOW, localInfo)
        self:onCheckEnd()
        return
    end
    self:onCheckEnd()
end

function AutoPopModule:onCheckEnd()
    self._changeSceneName = ""
    self._checkIdx = 1
end

function AutoPopModule:checkInGameAutoShow(iconPos, typeName)
    if self._isInGameShowed[typeName] ~= nil then
        return
    end
    self._changeSceneName = "ingame"
    self._iconPos = iconPos
    self:whenBackLobbyCheckPop(true)
end
return AutoPopModule
