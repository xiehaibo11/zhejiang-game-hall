local config = require("login.Modules.ChooseArea.Config").ChooseAreaByCityName
local ChooseAreaModule = class("ChooseAreaModule", XH.ModuleBase)

function ChooseAreaModule:ctor()
    ChooseAreaModule.super.ctor(self)
end

--获取所有的城市地区名字
function ChooseAreaModule:getAllAreaName()
    local name = {}
    for _,v in pairs(config) do
        table.insert(name, v.CityName)
    end
    return name
end

--获取某个城市地区的背景
function ChooseAreaModule:getAreaBg(cityName)
    if #config[cityName].IncludeLobbyID > 0 then
        return config[cityName].AbleImage
    else
        return config[cityName].DisableImage
    end
end

--统计一个城市地区下面有多少app
function ChooseAreaModule:countAreaIncludeApp(cityName)
    return #config[cityName].IncludeLobbyID or 0
end

--统计一个城市地区下面所有的app
function ChooseAreaModule:getAreaIncludeApp(cityName)
    return config[cityName].IncludeLobbyID or {}
end

--获取一个城市地区的lobbyid
function ChooseAreaModule:getAreaLobbyID(cityName)
    return config[cityName].IncludeLobbyID
end

function ChooseAreaModule:getAreaName(lobbyID)
    for k,v in pairs(config) do 
        for i = 1, #v.IncludeLobbyID do
            if v.IncludeLobbyID[i] == tonumber(lobbyID) then
                return k
            end
        end
    end
    return ""
end

--根据定位的位置判断是否需要显示选区地图
function ChooseAreaModule:needShowChooseArea(cityChineseName, districtChineseName)
    for k,v in pairs(config) do 
        --先判断地级市
        if v.CityChineseName == cityChineseName then
            --判断有没有app，没有app，有多个app都跳选区界面
            local lobbyid = self:getAreaLobbyID(k)
            if self:countAreaIncludeApp(k) == 0 then
                return true, nil, 0
            elseif self:countAreaIncludeApp(k) == 1 then
                XH.userDefault:setValue(XH.userDefault.KEY_ID.LAST_ENTER_AREA_NAME , k)
                for i = 1, #v.DistrictChineseName do
                    if v.DistrictChineseName[i] == districtChineseName then
                        return false, districtChineseName, lobbyid[1]
                    end
                end
                return false, cityChineseName, lobbyid[1]
            else
                XH.userDefault:setValue(XH.userDefault.KEY_ID.LAST_ENTER_AREA_NAME , k)
                for i = 1, #v.DistrictChineseName do
                    if v.DistrictChineseName[i] == districtChineseName then
                        return false, districtChineseName, config[k].DistrictLobbyID[i] or 0
                    end
                end
                return true, cityChineseName, 0
            end
        end
    end
    return true, nil, 0
end

return ChooseAreaModule=