TeaHouse = TeaHouse or {}
---桥接
require("teahouse.Bridge.init")

---导入网络请求
TeaHouse.NetReq = require("teahouse.Base.NetReq")
---导入基础模块
TeaHouse.Module = require("teahouse.Base.Module")
---导入基础视图
TeaHouse.View = require("teahouse.Base.View")
---导入场景
TeaHouse.TeaHouseScene = require("teahouse.Scene.TeaHouseScene")
---导入协议
TeaHouse.TeaHouseProtocol = require("teahouse.Protocol.TeaHouseProtocol")
---导入文本配置
TeaHouse.TextConfig = require("teahouse.Config.TextConfig")
---导入字符串工具
TeaHouse.StringTool = require("teahouse.Tool.StringTool")
---导入系统工具
TeaHouse.SysTool = require("teahouse.Tool.SysTool")
---导入提示工具
TeaHouse.TipTool = require("teahouse.Tool.TipTool")
---导入UI工具
TeaHouse.UITool = require("teahouse.Tool.UITool")
---导入账单工具
TeaHouse.BillTool = require("teahouse.Tool.BillTool")
---导入存储工具
TeaHouse.StorageTool = require("teahouse.Tool.StorageTool")
---导入比赛场管理
TeaHouse.manager = require("teahouse.Manager.TeaHouseManager").new()

---导出初始化接口
function TeaHouse.init()
    TeaHouse.manager:init()
end

---导出销毁接口
function TeaHouse.destroy()
    TeaHouse.manager:destroy()
end

---导出加入比赛场接口
function TeaHouse.joinTeaHouse(teaHousePwd, tableID, inTeaFunc)
    TeaHouse.manager.teahouseGeneral:reqAskAppidByPassword(teaHousePwd, tableID, inTeaFunc)
end

---导出重新加入比赛场接口
function TeaHouse.reJoinTeaHouse(param)
    if not param then
        return
    end
    local teaHousePwd = param.teaHousePwd
    local tableID = param.tableID
    local inTeaFunc = param.inTeaFunc
    local playModeId = param.playModeId
    local teahouseData = TeaHouse.manager.teahouseData
    if teahouseData:isInTeahouse() and tonumber(teahouseData:getTeaHousePwd()) == tonumber(teaHousePwd) then
        local teahouseMain = TeaHouse.manager.teahouseMain
        if not teahouseMain:checkSelfInTable() then
            if tableID ~= nil then
                TeaHouse.manager.teahouseMain:tryToJoinTable(tableID, 0)
            elseif playModeId ~= nil then
                TeaHouse.manager.teahouseMain:quickCreatePlayMode({ playModeId = playModeId, playerCount = param.playerCount })
            end
        end
    else
        local teahouseGeneral = TeaHouse.manager.teahouseGeneral
        if teahouseData:isInTeahouse() then
            teahouseGeneral:levealTeaHouse()
            TeaHouse.SysTool.performWithDelay(0.3, function()
                teahouseGeneral:reqAskAppidByPassword(teaHousePwd, tableID, inTeaFunc, playModeId)
            end)
        else
            teahouseGeneral:reqAskAppidByPassword(teaHousePwd, tableID, inTeaFunc, playModeId)
        end
    end
end

---导出打开视图接口
function TeaHouse.openTeaHouseList()
    TeaHouse.manager.teahouseList:initReq()
    TeaHouse.manager.teahouseList:openSuitableTeaHouseListView()
end

---导出关闭视图接口
function TeaHouse.closeView(viewName)
    TeaHouse.manager.viewManager:closeView(viewName)
end

---导出是否在比赛场中接口
function TeaHouse.isInTeahouse()
    return TeaHouse.manager.teahouseData:isInTeahouse()
end

---导出获取比赛场口令接口
function TeaHouse.getTeaHousePwd()
    return TeaHouse.manager.teahouseData:getTeaHousePwd()
end

---导出是否显示比赛场在线列表
function TeaHouse.isShowTeaHouseOnlineListInGame()
    local SwitchConfig = TeaHouse.manager.configManager.SwitchConfig
    if SwitchConfig and SwitchConfig.GameOnline == 1 then
        return true
    end
    return false
end

---导出比赛场在线列表
function TeaHouse.openTeaHouseOnlineListInGame(inviteOfflineFunc)
    TeaHouse.manager.teaHouseOnline:openTeaHouseOnlineListInGame(inviteOfflineFunc)
end

---只请求比赛场列表数据
function TeaHouse.reqTeaHouseList()
    TeaHouse.manager.teahouseList:initReq()
    TeaHouse.manager.teahouseList:reqInit()
end

---刷新比赛场房卡数据
function TeaHouse.refreshTeaHouseProp()
    if TeaHouse.manager.teahouseData:getTeaNumber() then
        TeaHouse.manager.teahouseMain:reqDailyProp(TeaHouse.manager.teahouseData:getTeaNumber())
    end
end

---分享比赛场
function TeaHouse.shareToTeaFriends()
    local teahouseData = TeaHouse.manager.teahouseData
    local name = teahouseData:getOwnerName()
    local nameExt = teahouseData:getTeaHouseNameExt()
    local title = string.format("%s的比赛场", TeaHouse.StringTool.getTrimName(name, 12))
    if nameExt and #nameExt > 0 then
        title = title .. string.format("(%s)", nameExt)
    end
    TeaHouse.SysTool.shareTeaHouse(teahouseData:getTeaHousePwd(), title)
end

--创建比赛场
function TeaHouse.onCreateTeaHouse(data)
    TeaHouse.manager.teahouseList:setIsCreateTeaHouse(true) --插到第一个
    TeaHouse.manager.teahouseSetup:createTeaHouse(data)
end