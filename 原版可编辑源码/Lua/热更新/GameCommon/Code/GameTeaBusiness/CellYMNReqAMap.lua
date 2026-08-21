local Cell = import("..GameTea.Cell")
local CellYMNReqAMap = class("CellYMNReqAMap", Cell)

CellYMNReqAMap.ACTION_RET_GPS_GET_LOCATION_SUCCESS = 1701
CellYMNReqAMap.ACTION_RET_GPS_GET_LOCATION_FAILED = 1702
CellYMNReqAMap.STRING_YMN_AMAP_FUNCTION_NAME = "amap_get_location"
CellYMNReqAMap.Accuracy ={
    LOW = "1",
    MID = "3",
    HIGH = "5"
}

function CellYMNReqAMap:ctor()
    CellYMNReqAMap.super.ctor(self)
    self._YMNResultScriptFuncID = 0
end

function CellYMNReqAMap:start(accuracy,timeoutTime)
    if CellYMNReqAMap.super.start(self,timeoutTime) == false then
        return
    end
    
    self._YMNResultScriptFuncID = XH.bf.ThirdManager:getInstance():addYMNCallBackScriptFunc(function(flag,data)
        self:onYMNResultCallBack(flag,data)
    end)
    
    XH.bf.ThirdManager:getInstance():callFunctionWithMap(CellYMNReqAMap.STRING_YMN_AMAP_FUNCTION_NAME, {["0"] = accuracy})  
end

function CellYMNReqAMap:success(data)
    CellYMNReqAMap.super.success(self,data)
    XH.bf.ThirdManager:getInstance():removeYMNCallBackScriptFunc(self._YMNResultScriptFuncID)
end

function CellYMNReqAMap:fail(data)
    CellYMNReqAMap.super.fail(self,data)
    XH.bf.ThirdManager:getInstance():removeYMNCallBackScriptFunc(self._YMNResultScriptFuncID)
end

function CellYMNReqAMap:timeout(data)
    CellYMNReqAMap.super.timeout(self,data)
    XH.bf.ThirdManager:getInstance():removeYMNCallBackScriptFunc(self._YMNResultScriptFuncID)
end
    
function CellYMNReqAMap:onYMNResultCallBack(flag,data)
    if flag == CellYMNReqAMap.ACTION_RET_GPS_GET_LOCATION_SUCCESS then
        dump(data,"GPS  onYMNResultCallBack")
        self:success(data)
    elseif flag == CellYMNReqAMap.ACTION_RET_GPS_GET_LOCATION_FAILED then
        self:setMessage("获取经纬度失败！")
        self:fail()
    end
end
return CellYMNReqAMap