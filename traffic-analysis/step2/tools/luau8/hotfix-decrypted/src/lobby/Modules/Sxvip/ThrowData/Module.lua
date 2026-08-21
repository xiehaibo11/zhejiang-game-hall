local SxvipThrowDataModule = class("SxvipThrowDataModule", XH.ModuleBase)

function SxvipThrowDataModule:ctor()
    SxvipThrowDataModule.super.ctor(self)
end

function SxvipThrowDataModule:getReqConfig()
    return {
    }
end

function SxvipThrowDataModule:getProxyEvents()
    return {
    }
end

function SxvipThrowDataModule:setThrowDataSource(source)
    self._source = source
end

function SxvipThrowDataModule:getThrowDataSource()
    return self._source
end

function SxvipThrowDataModule:setBeforeGameStartStr(str)
    self._beforeGameStart = str
end

function SxvipThrowDataModule:getBeforeGameStartStr()
    return self._beforeGameStart or "对局前"
end

function SxvipThrowDataModule:setKickUser(userId)
    self._kickUserId = userId
end

function SxvipThrowDataModule:getKickUser()
    return self._kickUserId or 0
end

function SxvipThrowDataModule:roomType()
    if not CF or not CF.roomData then
        return '大厅'
    end
    if CF.roomData:isGoldRoom() or CF.roomData:isNewGoldRoom() then
        return '金币场'
    elseif CF.roomData:isBoxRoom() and CF.teaHouseManager and CF.teaHouseManager:isInTeaHouse() then
        return '比赛场'
    elseif CF.roomData:isBoxRoom() then
        return '好友房'
    else
        return '大厅'
    end
end

function SxvipThrowDataModule:throwData(key, customize)
    local throwDataManager = XH.NewThrowDataManager
    local cfg = throwDataManager:AnalyseJsonName(key)
    if not cfg then
        print("throwData error key:" .. key)
        return
    end
    customize = clone(customize or {})

    local content = {
        block_item_id = customize.block_item_id or self:roomType(),
        block_label = customize.block_label,
        item_id = customize.item_id,
        page_item_id = customize.page_item_id,
    }
    customize.block_item_id = nil
    customize.block_label = nil
    customize.item_id = nil
    customize.page_item_id = nil
    if cfg and cfg.customize then
        if string.find(cfg.customize, 'role')  then
            customize['role'] = XH.lobby:getModule("Sxvip"):isExpire() and "非会员" or "是会员"
        end
        if string.find(cfg.customize, 'source') then
            local source = self:getThrowDataSource() or {name=''}
            customize['source'] = source.name
        end
    end
    throwDataManager:throwData(key, content, customize)
end
return SxvipThrowDataModule�	