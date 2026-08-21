local CURRENT_MODULE_NAME = ...
local GameScene = class("GameScene",CURRENT_MODULE_NAME)

function GameScene.popLayer(layerClassName)
    XH.GT.RootLayer:getInstance():popLayer(layerClassName)
end

function GameScene.getLayer(layerClassName)
    return XH.GT.RootLayer:getInstance():getLayer(layerClassName)
end

function GameScene.getPopLayerClass(layerClassName)
    local PopLayerClass = import("..PopLayer."..layerClassName,CURRENT_MODULE_NAME)
    return PopLayerClass
end

function GameScene.showPopLayer(layerClassName,initArvg,...)
    local classNameTemp = string.gsub(layerClassName, "%.", "/")
    local luaBigWinLostPath = cc.FileUtils:getInstance():fullPathForFilename("DoubleBuckle/Code/PopLayer/" .. classNameTemp .. ".lua")
    local luacBigWinLostPath = cc.FileUtils:getInstance():fullPathForFilename("DoubleBuckle/Code/PopLayer/" .. classNameTemp .. ".luac")
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



function GameScene.judgeExistPath(luaPath,luacPath)
    return cc.FileUtils:getInstance():isFileExist(luaPath) or cc.FileUtils:getInstance():isFileExist(luacPath)
end

local gameRuleText = {
    gametype = {[1] = "百变双扣", [3] = "千变双扣", [9] = "经典双扣"},
    gamezhang = {[1] = "1张分", [3] = "3张分", [4] = "4张分", [6] = "6张分", [9] = "9张分" },
    EndTypeMut = {[0] = "倍率:1,2,3倍", [1] = "倍率:1,2,4倍", [2] = "倍率:0,1,2倍" },
    ChaoDi = {[0] = "", [1] = "抄底"},
    HaveMingPai = {[0] = "全暗", [1] = "双明"},
}

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

function GameScene:getTextByGameRule(serverGameRule)
    local tableString = string.gsub(serverGameRule, ";", ",")
    tableString = "{" .. tableString .. "}" 
    local getTableFun = loadstring("return " .. tableString)
    local gameRuleTable = {}
    if getTableFun then
        gameRuleTable = getTableFun() 
    else 
        return false,serverGameRule
    end
    local strGameRule = ""
    local needExChange = false

    if gameRuleTable.gametype then
        strGameRule = gameRuleText.gametype[tonumber(gameRuleTable.gametype)]
    end

    if gameRuleTable.gamezhang then
        strGameRule = strGameRule .. "/" .. gameRuleText.gamezhang[tonumber(gameRuleTable.gamezhang)]
    end

    if gameRuleTable.EndTypeMut then
        strGameRule = strGameRule .. "/" .. gameRuleText.EndTypeMut[tonumber(gameRuleTable.EndTypeMut)]
    end

    if gameRuleTable.ChaoDi then
        if gameRuleText.ChaoDi[tonumber(gameRuleTable.ChaoDi)] ~= "" then
            strGameRule = strGameRule .. "/" .. gameRuleText.ChaoDi[tonumber(gameRuleTable.ChaoDi)]
        end
    end

    if gameRuleTable.HaveMingPai then
        strGameRule = strGameRule .. "/" .. gameRuleText.HaveMingPai[tonumber(gameRuleTable.HaveMingPai)]
    end

    return true,strGameRule
end

return GameScene