local CURRENT_MODULE_NAME = ...
local GameScene = class("GameScene")

function GameScene.showPopLayer(layerClassName,initArvg,...)
    local classNameTemp = string.gsub(layerClassName, "%.", "/")
    local luaBigWinLostPath = cc.FileUtils:getInstance():fullPathForFilename("LiangBang/Code/PopLayer/" .. classNameTemp .. ".lua")
    local luacBigWinLostPath = cc.FileUtils:getInstance():fullPathForFilename("LiangBang/Code/PopLayer/" .. classNameTemp .. ".luac")
    local PopLayerClass = {}

    if GameScene.judgeExistPath(luaBigWinLostPath, luacBigWinLostPath) then
        PopLayerClass = import("..PopLayer."..layerClassName,CURRENT_MODULE_NAME)  
    else
        return XH.GT.showPopLayer(layerClassName,initArvg,...)
    end

    local popLayerClass = PopLayerClass.new()
    popLayerClass:init(unpack(initArvg or {}))
    popLayerClass:showLayer(true)
    XH.GT.RootLayer:getInstance():pushLayer(popLayerClass)          

    local function afterCloseLayerFunc()
        XH.GT.popLayer(layerClassName)
    end
    popLayerClass:setAfterCloseLayerFunc(afterCloseLayerFunc)  
    return popLayerClass 
end


function GameScene.popLayer(...)
    XH.GT.popLayer(...)
end

function GameScene.movePopLayerToScene()
    XH.GT.RootLayer:getInstance():moveToRunningScene()
end

function GameScene.getPopLayerClass(...)
    return XH.GT.getPopLayerClass(...)   
end

function GameScene.getLayer(layerClassName)
    return XH.GT.getLayer(layerClassName)
end

function GameScene.sendMessage(packet,appID,processID)
    local srsGroupID = XH.GT.getGroupIDByGameID()
    if XH.GT.getGameSRSGroupID then
        srsGroupID = XH.GT.getGameSRSGroupID()
    end
    XH.GT.sendPacket(packet,appID,srsGroupID,processID)
end

function GameScene.addProtocolScriptFuncByObj(object,callBackFunc,processid)
    local srsGroupID = XH.GT.getGroupIDByGameID()
    if XH.GT.getGameSRSGroupID then
        srsGroupID = XH.GT.getGameSRSGroupID()
    end
    XH.GT.addProtocolScriptFuncByObj(object,callBackFunc,srsGroupID,processid)
end

function GameScene.removeProtocolScriptFuncByObj(object,callBackFunc)
    local srsGroupID = XH.GT.getGroupIDByGameID()
    if XH.GT.getGameSRSGroupID then
        srsGroupID = XH.GT.getGameSRSGroupID()
    end
    XH.GT.removeProtocolScriptFuncByObj(object,callBackFunc,srsGroupID)
end

function GameScene.getLoginData()
    return XH.GT.CellLogin
end

function GameScene.getGameNameByGameID(gameID)
    return XH.GT.GAME_NAME_LIST[gameID] or ""
end

function GameScene:addLeaveRoomCallFunc(func)
    self._leaveRoomCallFunc = func
end

function GameScene:setTeaHousePswd(pswd, name)
    self.teaHousePswd = pswd
    self.teaHouseName = name
end

function GameScene.getNickName2(brandID, numberID)
    if XH.GT.getNickName2 ~= nil then 
        return XH.GT.getNickName2(brandID, numberID)
    end  
    return nil
end

function GameScene.judgeExistPath(luaPath,luacPath)
    return cc.FileUtils:getInstance():isFileExist(luaPath) or cc.FileUtils:getInstance():isFileExist(luacPath)
end

function GameScene:isBackHandCards(handCards)
    if handCards == nil or #handCards == 0 then
        return true
    end
    for i = 1, #handCards do
        if handCards[i] ~= 55 then -- 55是牌背
            return false
        end
    end
    return true
end

function GameScene:setTeaHouse( bTeaHouse )
    self._bTeaHouse = bTeaHouse or false
end

function GameScene:setActInfoFunc(func)
    if func and type(func) == "function" then
        self._lobbyActInfoFunc = func
    end
end

return GameScene0