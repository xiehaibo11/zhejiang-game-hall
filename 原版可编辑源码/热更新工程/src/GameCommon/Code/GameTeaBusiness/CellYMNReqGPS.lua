local Cell = import("..GameTea.Cell")
local CellYMNReqGPS = class("CellYMNReqGPS", Cell)

CellYMNReqGPS.ACTION_RET_GPS_INIT_SUCCESS = 1100
CellYMNReqGPS.ACTION_RET_GPS_GET_LOCATION_SUCCESS = 1101
CellYMNReqGPS.ACTION_RET_GPS_GET_LOCATION_FAILED = 1102
CellYMNReqGPS.ACTION_RET_GPS_NOT_OPEN_GPS = 1103
CellYMNReqGPS.ACTION_RET_GPS_INIT_FAILED = 1104
    
function CellYMNReqGPS:ctor()
    CellYMNReqGPS.super.ctor(self)
    self._YMNResultScriptFuncID = 0
end

function CellYMNReqGPS:start(strFunction,timeoutTime)
    if CellYMNReqGPS.super.start(self,timeoutTime) == false then
        return
    end
    
    self._YMNResultScriptFuncID = XH.bf.ThirdManager:getInstance():addYMNCallBackScriptFunc(function(flag,data)
        self:onYMNResultCallBack(flag,data)
    end)
    
    XH.bf.ThirdManager:getInstance():callFunction(strFunction)
end

function CellYMNReqGPS:success(data)
    CellYMNReqGPS.super.success(self,data)
    XH.bf.ThirdManager:getInstance():removeYMNCallBackScriptFunc(self._YMNResultScriptFuncID)
end

function CellYMNReqGPS:fail(data)
    CellYMNReqGPS.super.fail(self,data)
    XH.bf.ThirdManager:getInstance():removeYMNCallBackScriptFunc(self._YMNResultScriptFuncID)
end

function CellYMNReqGPS:timeout(data)
    CellYMNReqGPS.super.timeout(self,data)
    XH.bf.ThirdManager:getInstance():removeYMNCallBackScriptFunc(self._YMNResultScriptFuncID)
end
    
function CellYMNReqGPS:onYMNResultCallBack(flag,data)
    if flag == CellYMNReqGPS.ACTION_RET_GPS_INIT_SUCCESS then
        self:setMessage("初始化成功！")
--        self:success()
    elseif flag == CellYMNReqGPS.ACTION_RET_GPS_GET_LOCATION_SUCCESS then
        dump(data,"GPS  onYMNResultCallBack")
        self:success(data)
    elseif flag == CellYMNReqGPS.ACTION_RET_GPS_GET_LOCATION_FAILED then
        self:setMessage("获取经纬度失败！")
        self:fail()
    elseif flag == CellYMNReqGPS.ACTION_RET_GPS_NOT_OPEN_GPS then
        self:setMessage("未开启定位！")
        self:fail()
    elseif flag == CellYMNReqGPS.ACTION_RET_GPS_INIT_FAILED then
        self:setMessage("初始化失败！")
        self:fail()
    end
end
return CellYMNReqGPS