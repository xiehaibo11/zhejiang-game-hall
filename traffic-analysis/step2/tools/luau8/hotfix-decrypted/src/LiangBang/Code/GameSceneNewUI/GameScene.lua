local CURRENT_MODULE_NAME = ...
local GameSceneBase = import("..GameScene.GameScene",CURRENT_MODULE_NAME)
local GameScene = class("GameScene",GameSceneBase)
local GameSceneDefine = import("..GameScene.GameSceneDefine",CURRENT_MODULE_NAME)

function GameScene:setMetaTable(path)
    local scriptPath = path or {}
    table.insert(scriptPath,".GameEventDispatcher")
    table.insert(scriptPath,".GameSceneInterface")
    table.insert(scriptPath,".GameSceneUI")
    table.insert(scriptPath,".GameSceneCallBack")
    table.insert(scriptPath,".GameSceneReceiveGameMsg")
    table.insert(scriptPath,".GameSceneTouchEvent")
    table.insert(scriptPath,".GameSceneShowUI")

    for i,v in ipairs(scriptPath) do
        scriptPath[i] = self.getFullPathName(v,CURRENT_MODULE_NAME)
    end
    GameScene.super.setMetaTable(self, scriptPath)
end

function GameScene:start(roomID,gameID,sessionID,roomMode, boxRoomID, linkNet, matchInfo, matchPlazaInfo, playerCount)
    GameScene.super.start(self,roomID,gameID,sessionID,roomMode, boxRoomID, linkNet, matchInfo, matchPlazaInfo, playerCount)
    
    Game.UIFunction.addTouchEventListenerByObj(self:getRootNode(),GameSceneDefine.KW_ROOM_RULE_BTN_SHOW,self,self.onTouchEventRuleInfoShow)
    Game.UIFunction.addTouchEventListenerByObj(self:getRootNode(),GameSceneDefine.KW_ROOM_RULE_BTN_RETRACT,self,self.onTouchEventRuleInfoRetract)

    if self._roomMode ~= Game.FrameworkFunction.ROOM_MODE.MATCHROOM and self._roomMode ~= Game.FrameworkFunction.ROOM_MODE.BOXROOM then
        self:adaptGoldRoomInfo()
        Game.UIFunction.setVisible(self:getRootNode(),"KW_ROOM_RULE_LAYOUT",false)
    end
end

function GameScene.getFullPathName(moduleName, currentModuleName)
    local currentModuleNameParts
    local moduleFullName = moduleName
    local offset = 1

    while true do
        if string.byte(moduleName, offset) ~= 46 then -- .
            moduleFullName = string.sub(moduleName, offset)
            if currentModuleNameParts and #currentModuleNameParts > 0 then
                moduleFullName = table.concat(currentModuleNameParts, ".") .. "." .. moduleFullName
            end
            break
        end
        offset = offset + 1

        if not currentModuleNameParts then
            if not currentModuleName then
                local n,v = debug.getlocal(3, 1)
                currentModuleName = v
            end

            currentModuleNameParts = string.split(currentModuleName, ".")
        end
        table.remove(currentModuleNameParts, #currentModuleNameParts)
    end

    return moduleFullName
end

return GameSceneU
