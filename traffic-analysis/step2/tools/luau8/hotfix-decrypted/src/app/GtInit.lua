local GT = {}

function GT.getGroupIDByGameID(gameid)
    return 0
end

function GT.setAppID(appID)
    GT.nAppID = appID
end

function GT.getAppID()
    return GT.nAppID or 0
end

function GT.addProtocolScriptFuncByObj(object, callBackFunc, srsGroupID, processid)
    if srsGroupID == 0 then
        srsGroupID = XH.areaData:getSrsGroupID()
    end
    XH.netEngine:addProtocolScriptFuncByObj(object, callBackFunc, processid, srsGroupID)
end

function GT.removeProtocolScriptFuncByObj(object, callBackFunc, srsGroupID)
    if srsGroupID == 0 then
        srsGroupID = XH.areaData:getSrsGroupID()
    end
    XH.netEngine:removeProtocolScriptFuncByObj(object, callBackFunc, srsGroupID)
end

function GT.sendPacket(packet, appID, srsGroupID, processID)
    if srsGroupID == 0 then
        srsGroupID = XH.areaData:getSrsGroupID()
    end
    appID = appID or GT.getAppID()
    XH.netEngine:sendProtocol(packet, processID, appID, srsGroupID)
end

--对ip进行模糊处理 例如196.168.7.22 -- *96.*68.*.22
function GT.dimIpName(ipName)
    local ipInfoTable = GT.spiltStringByFlag(ipName, "%.") or {}
    local ret = ""
    for i = 1, #ipInfoTable - 1 do
        local str = ipInfoTable[i]
        local len = string.len(str)
        ret = ret .. "*" .. string.sub(str, 2, len) .. "."
    end
    ret = ret .. (ipInfoTable[#ipInfoTable] or "")
    return ret
end

function GT.spiltStringByFlag(str, cFlag)
    local splitStr = {}
    local tmpStr = clone(str)
    while true do
        local a, b = string.find(tmpStr, cFlag)
        if a == nil then
            if string.len(tmpStr) ~= 0 then
                table.insert(splitStr, tmpStr)
            end
            break
        end
        table.insert(splitStr, string.sub(tmpStr, 1, a - 1))

        tmpStr = string.sub(tmpStr, b + 1, -1)
    end
    return splitStr
end

local CURRENT_MOUDEL_NAME = ...
function GT.showPopLayer(layerClassName, initArvg, ...)
    local PopLayerClass = import("." .. layerClassName, CURRENT_MOUDEL_NAME)
    local popLayerClass = PopLayerClass.new()
    popLayerClass:init(unpack(initArvg or {}))

    if popLayerClass.show then
        popLayerClass:show()
    end

    popLayerClass:showLayer(true)
    GT.RootLayer:getInstance():pushLayer(popLayerClass)
    if GT.RootLayer.setLocalZOrder then
        GT.RootLayer:getInstance():setLocalZOrder(layerClassName, 0)
    end

    local function afterCloseLayerFunc()
        if popLayerClass.hide then
            popLayerClass:hide()
        end
        GT.popLayer(layerClassName)
    end
    popLayerClass:setAfterCloseLayerFunc(afterCloseLayerFunc)
    return popLayerClass
end

function GT.popLayer(layerClassName)
    GT.RootLayer:getInstance():popLayer(layerClassName)
end

function GT.getLayer(layerClassName)
    return GT.RootLayer:getInstance():getLayer(layerClassName)
end

function GT.getPopLayerClass(layerClassName)
    local PopLayerClass = import("." .. layerClassName, CURRENT_MOUDEL_NAME)
    return PopLayerClass
end

function GT.clearLayers()
    return GT.RootLayer:getInstance():clearLayers()
end

function GT.setVisibleLayer(layerClassName, isVisible)
    GT.RootLayer:getInstance():setVisibleLayer(layerClassName, isVisible)
end

GT.RootLayer = import("app.Lobby32.RootLayer")
--------------分割

local bf = {}

bf.ProcessIDList = {}
bf.ProcessIDList.SRS = 0
bf.ProcessIDList.Game = 1
bf.ProcessIDList.TallyCli = 4
bf.ProcessIDList.Active = 30
bf.ProcessIDList.Tool = 62
bf.ProcessIDList.RoomDispatch = 63
bf.ProcessIDList.MatchList = 72
bf.ProcessIDList.Match = 73
bf.ProcessIDList.TeaHouse = 116
bf.ProcessIDList.MatchLink = 1006
bf.ProcessIDList.MatchServer = 118
bf.ProcessIDList.Task = 120
bf.ProcessIDList.BoxDataProcess = 113
bf.ProcessIDList.Lobby = 84
bf.ProcessIDList.GameGT = 140

GT.bf = bf

return GTN