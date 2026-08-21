local GameScene = class("GameScene")
local CURRENT_MODULE_NAME = ...
local GameSceneDefine = import(".GameSceneDefine", CURRENT_MODULE_NAME)

function GameScene:reqPlayerHeadEffectProps()
    local CellReqPlayerPropsClass = import("GameCommon.Code.GameTeaBusiness.CellReqPlayerProps")
    local cellReqPlayerProps = CellReqPlayerPropsClass:new()
    cellReqPlayerProps:addCellCallBack(self, self.onReqPlayerHeadEffectPropsCallBack);
    cellReqPlayerProps:start(self._gameID, 15)
end

function GameScene:reqLedger()
    -- local CellReqLedger = import("GameCommon.Code.GameTeaBusiness.CellReqLedger")
    -- local cellReqLedger = CellReqLedger:new()
    -- cellReqLedger:start(-1, 1, self._gameID, XH.areaData:getAreaID(), XH.playerData:getNumberID(), 10)
end

function GameScene:reqSR()
    local CellSR = import("GameCommon.Code.GameTeaBusiness.CellReqSR")
    local cellSR = CellSR:new()
    cellSR:addCellCallBack(self, self.onCellSRCallBack, 0)
    cellSR:start(KW_CONFIG_GAME_ID, 15)
end


function GameScene:reqAMap()
    -- local CellYMNReqAMap = import("GameCommon.Code.GameTeaBusiness.CellYMNReqAMap")
    -- local cellYMNReqAMap = CellYMNReqAMap.new()
    -- cellYMNReqAMap:addCellCallBack(self, self.onReqAMapCallBack)
    -- cellYMNReqAMap:start(CellYMNReqAMap.Accuracy.MID, 10)
end

function GameScene:reqHeadImg()
  local CellWXImageDownload = import("GameCommon.Code.GameTeaBusiness.CellWXImageDownload")
    for sSeat = 0, Game.FrameworkFunction.getMaxPlayer() - 1 do
        local localSeat = Game.FrameworkFunction.seatToLocal(sSeat)
        local player = Game.FrameworkFunction.getPlayerBySeat(sSeat)
        if player then
            self._numidList[#self._numidList + 1] = player:getNumberID()
            self._numidToSeat[player:getNumberID()] = localSeat
            local url = player:getAvatarUrl()
            if url ~= "" then
                local cellWXImageDownload = CellWXImageDownload:new()
                cellWXImageDownload:addCellCallBack(self, function(self, cell, type, data)
                    if type == 1 then
                        Game.UIFunction.loadTexture(self:getUIPlayerHead(localSeat), GameSceneDefine.KW_UI_HEAD_PIC, data, ccui.TextureResType.localType)
                        local picAreaSize = Game.UIFunction.getContentSize(self:getUIPlayerHead(localSeat), GameSceneDefine.KW_UI_HEAD_PIC_AREA)
                        local picSize = Game.UIFunction.getContentSize(self:getUIPlayerHead(localSeat), GameSceneDefine.KW_UI_HEAD_PIC)
                        Game.UIFunction.setScaleX(self:getUIPlayerHead(localSeat), GameSceneDefine.KW_UI_HEAD_PIC, picAreaSize.width / picSize.width)
                        Game.UIFunction.setScaleY(self:getUIPlayerHead(localSeat), GameSceneDefine.KW_UI_HEAD_PIC, picAreaSize.height / picSize.height)

                        Game.UIFunction.loadTexture(self:getUIPlayerHead(localSeat), GameSceneDefine.KW_UI_INFO_PIC, data, ccui.TextureResType.localType)
                        local bigPicAreaSize = Game.UIFunction.getContentSize(self:getUIPlayerHead(localSeat), GameSceneDefine.KW_UI_INFO_PIC_AREA)
                        local bigPicSize = Game.UIFunction.getContentSize(self:getUIPlayerHead(localSeat), GameSceneDefine.KW_UI_INFO_PIC)
                        Game.UIFunction.setScaleX(self:getUIPlayerHead(localSeat), GameSceneDefine.KW_UI_INFO_PIC, bigPicAreaSize.width / bigPicSize.width)
                        Game.UIFunction.setScaleY(self:getUIPlayerHead(localSeat), GameSceneDefine.KW_UI_INFO_PIC, bigPicAreaSize.height / bigPicSize.height)
                    end
                end)
                cellWXImageDownload:start(url, 60)
            end
        end
    end

end

function GameScene:reqShuffleProps()
    local CellReqPlayerPropsClass = import("GameCommon.Code.GameTeaBusiness.CellReqPlayerProps", CURRENT_MODULE_NAME)
    local cellReqPlayerProps = CellReqPlayerPropsClass:new()
    cellReqPlayerProps:addCellCallBack(self, self.onReqShufflePropsCallBack)
    cellReqPlayerProps:start(self._gameID, 15)
end

function GameScene:reqTaskAward(taskId)
    -- taskId = taskId or 0
    -- if taskId == 0 then
    --     return
    -- end
    -- local CellTaskAward = require("Lobby32.src.Common.GameTeaBusiness.Task.CellReqTaskAward")
    -- local celltaskaward = CellTaskAward:new()
    -- celltaskaward:addCellCallBack(self, self.onReqTaskAwardCallBack)
    -- celltaskaward:start(XH.GT.CellLogin.getNumberID(),10, XH.GT.CellLogin.getSessionID(false), KW_TASK_APPID, XH.bf.ProcessIDList.Task, taskId)
end

function GameScene:reqOldPlayerInfo()
    -- local CellReqReturnInfo = require("LiangBang.Code.GameTeaBusiness.ReturnAward.CellReqReturnAwardInfo")
    -- local cellreqinfo = CellReqReturnInfo:new()
    -- cellreqinfo:addCellCallBack(self, self.onGetIsOldPlayer)
    -- cellreqinfo:start(10)
end

function GameScene:reqPlayerPropTaskProtocol(nid)
    -- local cellTaskPercent = require("Lobby32.src.Common.GameTeaBusiness.Task.CellReqTaskProtocol")
    -- if cellTaskPercent == nil then
    --     return
    -- end
    -- local TaskPercent = cellTaskPercent:new()
    -- local acData = ""
    -- TaskPercent:addCellCallBack(self,self.reqPlayerPropTaskProtocolCallBack) 
    -- acData = "nTaskId = " .. ActTaskConfig.TASK_TYPE_GER_OTHER_PROP .. ";nid = '" .. nid .. ";'"
    -- TaskPercent:start(0,10,0, KW_TASK_APPID, XH.bf.ProcessIDList.Task,0,acData)
end

return GameScene