local CURRENT_MOUDLE_NAME = ...
local CellProtocol = import("...GameTea.CellProtocol",CURRENT_MOUDLE_NAME)
local CellReqTaskConfig = class("CellReqTaskConfig", CellProtocol)
require("lfs")

function CellReqTaskConfig:ctor()
    CellReqTaskConfig.super.ctor(self)
    self._appID = 0
    self._taskConfigCache = {}
    self._reqFileName = ""
end

function CellReqTaskConfig:start(numberID,timeoutTime,srsGroupID,appID ,processID,taskId)
    processID = processID or 0
    self._appID = appID or 0
    srsGroupID = nil
    if CellReqTaskConfig.super.start(self, timeoutTime, srsGroupID,processID) == false then
        return
    end
    -- 请求列表文件夹区分
    self._taskConfigCache = {}
    lfs.rmdir(cc.FileUtils:getInstance():getWritablePath() .. appID)

    local reqTaskConfig = XH.bf.TaskXY.ReqTaskConfig:new()
    reqTaskConfig.nAskId = os.time()
    reqTaskConfig.getAll = 1  --1全部 ，0指定
    reqTaskConfig.filename = ""
    XH.GT.addProtocolScriptFuncByObj(self,self.onReceiveTaskConfig,srsGroupID,processID)
    XH.GT.sendPacket(reqTaskConfig,self._appID,srsGroupID,processID)
end

function CellReqTaskConfig:onReceiveTaskConfig(XYID, buff, len, processID)
    if processID ~= self._processID then
        return
    end
    if XYID ~= XH.bf.TaskXY.RespTaskConfig.XY_ID then
        return
    end

    local respTaskConfig = XH.bf.TaskXY.RespTaskConfig:new()
    respTaskConfig:bistream(buff, len)
    
    -- 请求中 文件名
    if self._reqFileName ~= respTaskConfig.acFileName then
        self._reqFileName = respTaskConfig.acFileName
    end
    if respTaskConfig.ucFlag == XH.bf.TaskXY.RespTaskConfig.FLAG.SUCCESS then
        self._taskConfigCache[self._reqFileName] = self._taskConfigCache[self._reqFileName] or ""
        self._taskConfigCache[self._reqFileName] = self._taskConfigCache[self._reqFileName] .. respTaskConfig.acData
        if respTaskConfig.nCurPkg == respTaskConfig.nTotalPkg then
            -- 文件接收完成，文件名置空
            self._reqFileName = ""
            if respTaskConfig.nCurFile == respTaskConfig.nTotalFile then
                -- 最后一个文件接收完成
                lfs.mkdir(cc.FileUtils:getInstance():getWritablePath() .. self._appID)
                for key, var in pairs(self._taskConfigCache) do
                    self:saveTaskConfigFile(key, var)
                end
                
                local taskConfig = {}
                local tempPackagePath = clone(package.path)
                for key, var in pairs(self._taskConfigCache) do
                    package.path = cc.FileUtils:getInstance():getWritablePath() .. self._appID .. "/" .. "?.lua" .. package.path
                    local tempConfig = dofile(cc.FileUtils:getInstance():getWritablePath() .. self._appID .. "/" .. key)
                    table.insert(taskConfig, tempConfig)
                end
                package.path = tempPackagePath
                local finalDta = taskConfig 
                self:success(finalDta)   
            end
        end
    elseif respTaskConfig.ucFlag == XH.bf.TaskXY.RespTaskConfig.FLAG.FILE_NOT_EXIST then
        self:setMessage("文件不存在！")
        self:fail()
    elseif respTaskConfig.ucFlag == XH.bf.TaskXY.RespTaskConfig.FLAG.ERROR then
        self:setMessage("请求错误！")
        self:fail()
    elseif respTaskConfig.ucFlag == XH.bf.TaskXY.RespTaskConfig.FLAG.NO_FILE then
        self:setMessage("没有文件！")
        self:fail()
    end
end

function CellReqTaskConfig:saveTaskConfigFile(fileName, saveMsg)
    local filePath = cc.FileUtils:getInstance():getWritablePath() .. self._appID .. "/" .. fileName
    local txtFile, errMsg = io.open(filePath,"wb")
    --local txtFile = io.open(filePath,"wb")
    if not txtFile then
        print("io.open errmsg=" .. errMsg);
    end
    
    local f,errmsg = txtFile:write(saveMsg)
    if(not f) then 
        print("saveTaskConfigFile errmsg=" .. errmsg);
    end
    txtFile:flush()
    txtFile:close()
end

return CellReqTaskConfig(