local GameManager = CF.gameClass("DarkShuangKouManager", CF.gameScriptRootPath .. ".GameBase.GameManager")

function GameManager:ctor(param)
    GameManager.super.ctor(self, param)
    if param.roomData.teaching then
        CF.game:getModule("Teaching"):startTeaching(param)
    end
end

function GameManager:doH5GameWidget()
end

function GameManager:getPermanentModules()
    local conf = GameManager.super.getPermanentModules() or {}
    table.insert(conf, "DarkShuangKouDebug")
    return conf
end

function GameManager:onReqPlayerPlace(reqJoin, type, data)
    if type == CF.REQ_TYPE_SUCCESS then
        if CF.roomData:is50Match() then
            CF.roomData:setIsGameStart(false)
            CF.roomData:clearAllPlayerData(true)
            CF.game:getModule("GameLayer"):onClearTable()
            if self._tipNode then
                return
            end
            self._tipNode = true
            CF.TipTool.showTip(
                {
                    type = CF.TIP_LAYER_TYPE.OK,
                    funcOK = function()
                        self._tipNode = nil
                        CF.game:getModule("CenterBtns"):onStartGameEvent()
                    end,
                    funcClose = function()
                        self._tipNode = nil
                        self:leaveGame()
                    end
                },
                "游戏已结束，是否为您重新匹配队友？"
            )
        else
            CF.TipTool.showTip(
                {
                    type = CF.TIP_LAYER_TYPE.OK,
                    funcOK = function()
                        self:leaveGame()
                    end,
                    funcClose = function()
                        self:leaveGame()
                    end
                },
                "房间已经解散！"
            )
        end
    elseif type == CF.REQ_TYPE_TIMEOUT then
        CF.TipTool.showTip(
            {
                type = CF.TIP_LAYER_TYPE.OK,
                funcOK = function()
                    self:leaveGame()
                end,
                funcClose = function()
                    self:leaveGame()
                end
            },
            "请求位置信息超时，请离开房间后重新尝试！"
        )
    end
end

function GameManager:doRelink(msg)
    if CF.roomData:isTeaching() then
        return
    end
    GameManager.super.doRelink(self, msg)
end

return GameManager
