local UITrackingModule = class("UITrackingModule",XH.ModuleBase)

local UITrackingConfig = require("lobby.Modules.UITracking.Config")

function UITrackingModule:ctor()
    UITrackingModule.super.ctor(self)
end

function UITrackingModule:track(send,eventType)
    if not send or tolua.isnull(send) then return end
    local sendName = send:getName()
    local findTrackingViewName , view = self:recursionParentNode(send)
    if findTrackingViewName then
        local sceneNameList ={
            ["GoldView"] = "金币场大厅",
            ["LobbyView"] = "大厅",
            ["TeaHouseMainView"] = "比赛场大厅",
            ["TeaHouseOnlineListView"] = "比赛场大厅"
        } 
        local sceneName = sceneNameList[findTrackingViewName]
        -- 因金币长大厅和大厅 是公用UI 所以没办法区分，只能通过金币长的UI的显示隐藏处理
        if findTrackingViewName == "LobbyView" then
            if view._goldLayer and view._goldLayer:isVisible() then
                sceneName = "金币场大厅"
            end
        end
        findTrackingViewName = findTrackingViewName == "GoldView" and "LobbyView" or findTrackingViewName
        if UITrackingConfig[findTrackingViewName] then
            local btnName
            local cfg = UITrackingConfig[findTrackingViewName]
            local tmpStrOrFunc = cfg[sendName] 
            if tmpStrOrFunc then
                if type(tmpStrOrFunc) == "string" then
                    btnName = tmpStrOrFunc
                elseif type(tmpStrOrFunc) == "function" then
                    btnName = tmpStrOrFunc(send)
                end
            elseif string.find(sendName , "KWA_BTND_CREATE_") then
                btnName = cfg["KWA_BTND_CREATE_"](send)
            end
            -- 都找不到就去找通用的活动
            if UITrackingConfig["ActivityIcon"][sendName] then
                btnName = UITrackingConfig["ActivityIcon"][sendName]
            end
            if btnName and type(btnName) == "string" then
                self:trackingCommonClick(btnName,sceneName)
            end
        end
    end
end

function UITrackingModule:recursionParentNode(node)
    if not node then
        return nil,nil
    end
    local parent = node:getParent()
    if parent and parent.class and parent.class.__cname then
        -- 检查特定的视图类型
        local cnameList = {
            "LobbyView","TeaHouseMainView","GoldView","TeaHouseOnlineListView"
        }
        local idx = table.indexof(cnameList , parent.class.__cname)
        if idx then
            return cnameList[idx],parent
        end
    end
    -- 这里需要返回递归调用的结果
    return self:recursionParentNode(parent)
end

function UITrackingModule:trackingCommonClick(btnName,sceneName)
    if not btnName or type(btnName) ~= "string" then
        return 
    end
    local throwDataManager = XH.NewThrowDataManager
    local cfg = throwDataManager:AnalyseJsonName(XH.NewThrowDataDefine.ty24112501)
    if not cfg then
        return
    end
    local content = {
        block_item_id = btnName,
        page_item_id = sceneName
    }
    throwDataManager:throwData(XH.NewThrowDataDefine.ty24112501, content)
end

return UITrackingModule