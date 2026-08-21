local CURRENT_MODULE_NAME = ...
local GameScene = class("GameScene")
local GameMXY = import("GameCommon.Code.GameProtocol.GameMXY")
local GameLogicProtocol = import("..GameProtocol.GameLogicProtocol",CURRENT_MODULE_NAME)

function GameScene:onAdjustRecordGameMsgList(gameMsgList,msgAllDirCardsData)
    if self._roomMode ~= Game.FrameworkFunction.ROOM_MODE.BOXROOM then
        return
    end

    local insertPos = #gameMsgList
    for i = #gameMsgList,1,-1 do
        --gameMsgList[i].subXYID,gameMsgList[i].subBuff,gameMsgList[i].subLen
        local XYID = gameMsgList[i].subXYID
        local buff = gameMsgList[i].subBuff
        local len = gameMsgList[i].subLen
        if XYID ~= GameMXY.ServerToClientMessage.XY_ID and XYID ~= GameMXY.TableInfo.XY_ID then
            return
        end

        local tServerToClientMessageData = GameMXY.ServerToClientMessage:new()
        tServerToClientMessageData:bistream(buff, len)

        local subXYID = tServerToClientMessageData.cmdid
        local subBuff = tServerToClientMessageData.message
        local subLen = tServerToClientMessageData.msglen

        if subXYID == GameLogicProtocol.msgHandCard.XY_ID then
            table.remove(gameMsgList,i)
            insertPos = i - 1
        end
    end
    --在其之后插入其他玩家手牌的展示
    local tServerToClientMessageDataNew = GameMXY.ServerToClientMessage:new()
    tServerToClientMessageDataNew.cmdid = GameLogicProtocol.msgAllHandCards.XY_ID
    tServerToClientMessageDataNew.message = msgAllDirCardsData.subBuff
    tServerToClientMessageDataNew.msglen = msgAllDirCardsData.subLen

    local buffMessageDataNew = tServerToClientMessageDataNew:bostream()
    local bis = un.network.OStream.new(buffMessageDataNew:getBytes())

    local writeBuff = bis:read(buffMessageDataNew:getLength())

    local newGameMsg = {}
    newGameMsg.subXYID = GameMXY.ServerToClientMessage.XY_ID
    newGameMsg.subBuff = writeBuff
    newGameMsg.subLen = buffMessageDataNew:getLength()
    newGameMsg.time = gameMsgList[insertPos].time + 1
    table.insert(gameMsgList,insertPos, newGameMsg)
    
end

return GameScene