local SpecialAniLayer = CF.gameClass("SpecialAniLayer", CF.ViewBase)

function SpecialAniLayer:getCSBPath()
    return "cocosStudio/MahjongNew/GameLayer/CSB/NingBo/catchBirdAniLayer.csb"
end

function SpecialAniLayer:getBindingInfo()
    return {
        ["_KW_CATCHBIRD_NODE"] = { varName = "_catchBirdBeginNode" },
        ["_KW_PLAYER_HEAD_"] = { varName = "_aniPlayerHead", beginIndex = 1, endIndex = 4 },
    }
end

function SpecialAniLayer:getProxyEvents()
    return {
        { module = CF.game:getModule("WinLost"), eventKeyName = "EVENT_CATCHBIRD_SHOW_ANI", callBack = "showCatchBirdAni" }
    }
end

function SpecialAniLayer:showCatchBirdAni(event)
    if CF.roomData and CF.roomData:getIsFastPlay() then
        return
    end
    if not self._catchBirdBeginNode then
        return
    end

    local localSeat = event.msg.seat
    local targetHead = self["_aniPlayerHead" .. (localSeat)]
    if not targetHead then
        return
    end

    local function getAngleByPos(p1, p2)
        local p = {}
        p.x = p2.x - p1.x
        p.y = p2.y - p1.y
        local r = math.atan2(p.y, p.x) * 180 / math.pi
        return r
    end

    if not cc.FileUtils:getInstance():isFileExist("res/animation/Mahjong/NingBo/catchbird/zhuaniao/zhuaniao.ExportJson") or 
    not cc.FileUtils:getInstance():isFileExist("res/animation/Mahjong/NingBo/catchbird/zhuaniao_daoda/zhuaniao_daoda.ExportJson") or 
    not cc.FileUtils:getInstance():isFileExist("res/animation/Mahjong/NingBo/catchbird/zhuaniao_zi/zhuaniao_zi.ExportJson") then
        return
    end

    ccs.ArmatureDataManager:getInstance():addArmatureFileInfo(
    "res/animation/Mahjong/NingBo/catchbird/zhuaniao/zhuaniao0.png",
    "res/animation/Mahjong/NingBo/catchbird/zhuaniao/zhuaniao0.plist",
    "res/animation/Mahjong/NingBo/catchbird/zhuaniao/zhuaniao.ExportJson")
    ccs.ArmatureDataManager:getInstance():addArmatureFileInfo(
    "res/animation/Mahjong/NingBo/catchbird/zhuaniao_daoda/zhuaniao_daoda0.png",
    "res/animation/Mahjong/NingBo/catchbird/zhuaniao_daoda/zhuaniao_daoda0.plist",
    "res/animation/Mahjong/NingBo/catchbird/zhuaniao_daoda/zhuaniao_daoda.ExportJson")
    ccs.ArmatureDataManager:getInstance():addArmatureFileInfo(
    "res/animation/Mahjong/NingBo/catchbird/zhuaniao_zi/zhuaniao_zi0.png",
    "res/animation/Mahjong/NingBo/catchbird/zhuaniao_zi/zhuaniao_zi0.plist",
    "res/animation/Mahjong/NingBo/catchbird/zhuaniao_zi/zhuaniao_zi.ExportJson")

    local lastArmature1 = ccs.Armature:create("zhuaniao_zi")
    if lastArmature1 then
        self._catchBirdBeginNode:addChild(lastArmature1)
        local beginPos = self._catchBirdBeginNode:convertToNodeSpace(self._catchBirdBeginNode:getWorldPosition())
        local endPos = self._catchBirdBeginNode:convertToNodeSpace(targetHead:getWorldPosition())

        local RotaAngel = getAngleByPos(beginPos, endPos)
        local RotaList = { 0, -RotaAngel - 180, 0, -RotaAngel }
        local distance = cc.pGetDistance(beginPos, endPos)
        lastArmature1:setAnchorPoint(cc.p(0.5, 0.5))
        lastArmature1:setPosition(beginPos.x, beginPos.y)
        lastArmature1:getAnimation():playWithIndex(0, -1, -1)
        lastArmature1:getAnimation():setMovementEventCallFunc(function()
            self._catchBirdBeginNode:removeChild(lastArmature1)

            local lastArmature2 = ccs.Armature:create("zhuaniao")
            if lastArmature2 then
                self._catchBirdBeginNode:addChild(lastArmature2)
                lastArmature2:setAnchorPoint(cc.p(0.5, 0.5))
                lastArmature2:setPosition(beginPos)
                lastArmature2:setScale(0.7)
                if localSeat == 3 or localSeat == 4 then  --镜像翻转
                    lastArmature2:setScaleX(-1)
                end
                lastArmature2:setRotation(RotaList[localSeat])
                lastArmature2:getAnimation():playWithIndex(0, -1, 1)
                local moveTime = (distance / 150) * 0.1
                local action = cc.Sequence:create(
                cc.MoveTo:create(moveTime, endPos),
                cc.CallFunc:create(function()
                    self._catchBirdBeginNode:removeChild(lastArmature2)
                    local lastArmature3 = ccs.Armature:create("zhuaniao_daoda")
                    self._catchBirdBeginNode:addChild(lastArmature3)
                    lastArmature3:setAnchorPoint(cc.p(0.5, 0.5))
                    lastArmature3:setPosition(endPos)
                    lastArmature3:getAnimation():playWithIndex(0, -1, -1)
                    lastArmature3:getAnimation():setMovementEventCallFunc(function()
                        self._catchBirdBeginNode:removeChild(lastArmature3)
                    end)
                end))
                lastArmature2:runAction(action)
            end
        end)
    end
end

return SpecialAniLayerJ