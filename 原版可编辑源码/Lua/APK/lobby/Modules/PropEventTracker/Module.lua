--道具相关事件埋点
local PropEventTrackerModule = class("PropEventTrackerModule", XH.ModuleBase)

--XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.jblb2024052904, { page_label = "破产礼包", block_item_id = self._gameID, item_id = "救济金", block_label = "领取" }, { choice = "", info = "" })
function PropEventTrackerModule:track(key, customize)
    local ok, msg = pcall(function()
        local throwDataManager = XH.NewThrowDataManager
        local cfg = throwDataManager:AnalyseJsonName(key)
        if not cfg then
            return
        end
        customize = clone(customize or {})
        if customize.costInfo then
            if (customize.costInfo.propid) then
                customize.to_props_id = customize.costInfo.propid .. '';
            end
            if customize.costInfo.costPropid then
                customize.count1 = self:getPropCnt(customize.costInfo.costPropid)
                customize.choice = self:costPropName(customize.costInfo.costPropid)
            end
            if (customize.costInfo.isFree) then
                customize.count = 0
            elseif customize.costInfo.cnt then
                customize.count = tonumber(customize.costInfo.cnt)
            end
        end

        local content = {
            block_item_id = self:roomState(),
            block_label = self:roomType(),
            item_id = (CF and CF.roomData and CF.roomData:getGameID()) or 0
        }


        customize.scene = nil
        customize.roomType = nil
        customize.gameid = nil
        customize.costInfo = nil
        if cfg and cfg.customize then
            if string.find(cfg.customize, 'source') and content.block_label == '金币场' then
                customize['source'] = (CF and CF.roomData and CF.roomData:getRoomLevel()) or 0
            end
            if string.find(cfg.customize, 'players') then
                customize['players'] = (CF and CF.roomData and CF.roomData:getChairs()) or 0
            end
            -- if string.find(cfg.customize, 'score') then
            -- end
            if string.find(cfg.customize, 'luck_score') then
                local caiyunModule = CF and CF.game and CF.game:getModule("CaiYunPropNew")
                local caiyunInfo = caiyunModule and caiyunModule:getCaiYunInfo()
                if caiyunInfo then
                    customize['luck_score'] = caiyunInfo.cai_cur or 0
                    customize['yun_score'] = caiyunInfo.yun_cur or 0
                end
            end
        end
        throwDataManager:throwData(key, content, customize)
    end)
end

function PropEventTrackerModule:getPropCnt(propid)
    if not propid or type(propid) ~= 'number' or not CF then
        return 0
    end
    return (CF.game and CF.game:getModule("PropUse"):getPropCnt(propid)) or 0
end

function PropEventTrackerModule:roomState()
    if not CF or not CF.isInGameScene() then
        return ''
    end
    if CF.roomData and CF.roomData:getIsGameStart() then
        return "对局中"
    end
    if (XH.gameManager and XH.gameManager:isGameStart()) or CF.roomData:isGoldRoom() or CF.roomData:isNewGoldRoom() then
        return "结束"
    end
    return "准备阶段"
end

function PropEventTrackerModule:roomType()
    if not CF or not CF.roomData then
        return '大厅'
    end
    if CF.roomData:isGoldRoom() or CF.roomData:isNewGoldRoom() then
        return '金币场'
    elseif CF.roomData:isBoxRoom() and CF.teaHouseManager and CF.teaHouseManager:isInTeaHouse() then
        return '比赛场'
    elseif CF.roomData:isBoxRoom() then
        return '包厢'
    else
        return '大厅'
    end
end

function PropEventTrackerModule:costPropName(propid)
    if propid == XH.areaData:getPropDiamndID() then
        return '钻石'
    elseif propid == XH.areaData:getGoldPropId() then
        return '金币'
    elseif propid == XH.areaData:getPropRoomCardID()  or  XH.areaData:getPropSmallRoomCardID() then
        return '房卡'
    elseif propid == -1 then
        return '元'
    else
        return '道具'
    end
end

return PropEventTrackerModule