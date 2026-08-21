--会员特权V1
local SxvipPrivilegeItem = class("SxvipPrivilegeItem" , XH.ViewBase)

local SxvipConfig = require("lobby.Modules.Sxvip.Config")

function SxvipPrivilegeItem:getCSBPath()
    return "cocosStudio/hall/CSB/Sxvip/SxvipPrivilegeItem.csb"
end

function SxvipPrivilegeItem:getBindingInfo()
    return {
        ["_KW_VIP_ROOT"] = {varName = "_root"},
        ["_KW_PRIVILEGE_LIST"] = {varName = "_privilegeList"},
        ["_KW_PRIVILEGE_ITEM"] = {varName = "_privilegeItem"},
    }
end

function SxvipPrivilegeItem:getProxyEvents()
    return {
       { module = XH.lobby:getModule("Sxvip"), eventKeyName = "SXVIP_EVENT_STATIC_CONFIG_SUCC", callBack = "onStaticConfigSucc" },
       { module = XH.lobby:getModule("Sxvip"), eventKeyName = "SXVIP_EVENT_REWARD_STATUS", callBack = "onRewardStatus" },
    }
end

function SxvipPrivilegeItem:ctor()
    SxvipPrivilegeItem.super.ctor(self)
    
    self:initView()
    
    XH.lobby:getModule("Sxvip"):reqPrivilege()
    XH.lobby:getModule("Sxvip"):reqDailyRewardStatus()
end

function SxvipPrivilegeItem:initView()
    local size = self._root:getContentSize()
    self:setContentSize(size)

    self._privilegeList:setScrollBarEnabled(false)
end

function SxvipPrivilegeItem:refreshView()
    self._privilegeList:removeAllItems()
    local staticConfig = XH.lobby:getModule("Sxvip"):getStaticConfig()
    -- 静态资源加载完成
    if #staticConfig > 0 then
        local privilegeList = clone(XH.lobby:getModule("Sxvip"):getPrivilegeList())
        for i = #privilegeList, 1, -1 do
            if not XH.lobby:getModule("Sxvip"):getPrivilegeStaticById(privilegeList[i]) then
                table.remove(privilegeList, i)
            end
        end
        -- 计算需要多少个item
        local itemNums =  math.ceil(#privilegeList / 3)
        local itemIndex = 1
        for i = 1, itemNums do
            local item = self._privilegeItem:clone()
            self._privilegeList:pushBackCustomItem(item)
            for j = 1, 3 do
                local subItem = item:getChildByName("_KW_ITEM_PRIVILEGE_" .. j)
                if privilegeList[itemIndex] then
                    subItem:setVisible(true)
                    local privilege = XH.lobby:getModule("Sxvip"):getPrivilegeStaticById(privilegeList[itemIndex])
                    self:updateSubItem(subItem, privilege)
                else
                    subItem:setVisible(false)
                end
                itemIndex = itemIndex + 1
            end
        end
    end
end

-- 更新子类列表
function SxvipPrivilegeItem:updateSubItem(subItem , privilege)
    if not privilege then
        return
    end
    if privilege.show_name then
        subItem:getChildByName("_KW_TXT_TITLE"):setString(privilege.show_name or "")
    else
        subItem:getChildByName("_KW_TXT_TITLE"):setString(privilege.name or "")
    end
    subItem:getChildByName("_KW_TXT_DESC"):setString(privilege.desc or "")
    if XH.lobby:getModule("Sxvip"):isExpire() then
        subItem:getChildByName("_KW_TXT_LOGIC"):setString("开通会员") --
    else
        subItem:getChildByName("_KW_TXT_LOGIC"):setString(privilege.jump_desc or "")
    end
    local item = subItem:getChildByName("_KW_PRIVILEGE_ICON")
    local itemIcon = item:getChildByName("ITEM_ICON")
    if itemIcon == nil then
        local size = item:getContentSize()
        itemIcon = XH.RemoteImage.new()
        :setPosition(size.width / 2, size.height / 2)
        :ignoreContentAdaptWithSize(false)
        :setContentSize(size.width, size.height)
        :setName("ITEM_ICON")
        :addTo(item)
    end
    itemIcon:setUrl(privilege.pic)
    subItem:getChildByName("_KW_BTN_LOGIC"):addTouchEventListener(handler(self , self.subItemClick))
    subItem:getChildByName("_KW_BTN_LOGIC").customData = privilege
    -- 奖励已领取
    if privilege.id == SxvipConfig.SXVIP_POWER.GET_PROPS and XH.lobby:getModule("Sxvip"):getHadAwardStatus() == false then
        subItem:getChildByName("_KW_TXT_LOGIC"):setString("今日已领取")
        subItem:getChildByName("_KW_BTN_LOGIC"):setTouchEnabled(false)
        subItem:getChildByName("_KW_BTN_LOGIC"):setBright(false)
        subItem:getChildByName("_KW_TXT_LOGIC"):enableOutline(cc.c4b(127, 127, 127, 255), 2) 
    end
end

function SxvipPrivilegeItem:subItemClick(sender , eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    if XH.lobby:getModule("Sxvip"):isExpire() then
        local sxvipView = XH.viewManager:getView(XH.SCENE_TAG.LOBBY , "SxvipView")
        if sxvipView then
            sxvipView._defalutMenu = SxvipConfig.MENU_DEFINE.BUY_VIP
            sxvipView:updateAllView()
        end
        return
    end
    if sender.customData then
        -- 观战
        if sender.customData.id == SxvipConfig.SXVIP_POWER.WATCH then
            XH.viewManager:closeView("SxvipView")
            XH.lobby:getModule("Lobby"):openImView()
        -- 牌局统计
        elseif sender.customData.id == SxvipConfig.SXVIP_POWER.STATISTICS then
            local sxvipView = XH.viewManager:getView(XH.SCENE_TAG.LOBBY , "SxvipView")
            if sxvipView then
                sxvipView._defalutMenu = SxvipConfig.MENU_DEFINE.STAITISTICS
                sxvipView:updateAllView()
            end
        -- 牌友信息
        elseif sender.customData.id == SxvipConfig.SXVIP_POWER.FRIEND_INFO then
            local sxvipView = XH.viewManager:getView(XH.SCENE_TAG.LOBBY , "SxvipView")
            if sxvipView then
                sxvipView._defalutMenu = SxvipConfig.MENU_DEFINE.FRIEND_INFO
                sxvipView:updateAllView()
            end
        -- 网络专线
        elseif sender.customData.id == SxvipConfig.SXVIP_POWER.NETWORK_FIRST or sender.customData.id == SxvipConfig.SXVIP_POWER.FREE_PROPS  then
            local position = XH.playerData:getPlayerPosition()
            if position.gameID ~= 0 then
                XH.TipTool.showLoading()
                local func = function ()
                    if tonumber(position.teaID) ~= 0 and not XH.lobby:getModule("Im"):checkIsGroup(position.teaID) then
                        --事件分发,请求进入比赛场
                        XH.teaHouseManager:joinTeaHouse(position.teaID, position.roomID)
                    else
                        if position.teaNumber then
                            XH.lobby:getModule("Im"):getIMData():setEnterTeaHouseID(position.teaNumber)
                        end
                        local func = function( )
                            local param = {}
                            param.appID = position.gameAppID
                            param.gameID = position.gameID
                            param.roomMode = XH.ROOM_MODE.BOXROOM
                            param.roomID = position.roomID
                            param.srsGroupID = position.srsGroupID
                            param.sRoomMode = position.roomMode
                            XH.roomManager:gameStart(param)
                        end

                        if XH.lobby:getModule("Lobby"):isNeedHotUpdata(position.gameID) then
                            lobby.gameHotUpdateSuccessCallBack = func
                        else
                            func()
                        end
                    end
                    XH.TipTool.hideLoading()
                    XH.viewManager:closeView("SxvipView")
                end
                performWithDelay(self , func , 0.2)
            else
                XH.viewManager:closeView("SxvipView")
                if not XH.isEmbeddedApp() then
                    XH.viewManager:openView("CreateBoxRoomView")
                end
            end
        -- 领取道具
        elseif sender.customData.id == SxvipConfig.SXVIP_POWER.GET_PROPS then
            XH.lobby:getModule("Sxvip"):reqDailyReward()
        end
    end
end

function SxvipPrivilegeItem:onStaticConfigSucc(data)
    self:refreshView()
end

function SxvipPrivilegeItem:onRewardStatus()
    self:refreshView()
end

return SxvipPrivilegeItem