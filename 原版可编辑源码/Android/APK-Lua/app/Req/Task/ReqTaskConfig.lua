local ReqTaskConfig = class("ReqTaskConfig", XH.ReqProtocol)
function ReqTaskConfig:ctor()
    ReqTaskConfig.super.ctor(self)
    self._appID = 0
    self._taskConfigCache = {}
    self._processID = 0
    self._reqFileName = ""
end

function ReqTaskConfig:start(taskId,appID,srsGroupID,timeoutTime)
    self._processID = XH.TaskProtocol.ReqTaskConfig.processid
    self._appID = appID or 0
    if ReqTaskConfig.super.start(self, timeoutTime, srsGroupID) == false then
        return
    end
    -- �����б��ļ�������
    self._taskConfigCache = {}
    appID = XH.areaData:getIdentityID()
    os.remove(cc.FileUtils:getInstance():getWritablePath() .. appID)

    local reqTaskConfig =  XH.TaskProtocol.ReqTaskConfig:new()
    reqTaskConfig.nAskId = os.time()
    reqTaskConfig.getAll = 0  --1ȫ�� ��0ָ��
    reqTaskConfig.filename = "SevenSignInConfig"
    self:sendMsg(reqTaskConfig, XH.TaskProtocol.RespTaskConfig, srsGroupID, self._appID)
end

function ReqTaskConfig:onMsgReceive(msgData)
    -- ������ �ļ���
    if self._reqFileName ~= msgData.acFileName then
        self._reqFileName = msgData.acFileName
    end
    if msgData.ucFlag == XH.TaskProtocol.RespTaskConfig.FLAG.SUCCESS then
        self._taskConfigCache[self._reqFileName] = self._taskConfigCache[self._reqFileName] or ""
        self._taskConfigCache[self._reqFileName] = self._taskConfigCache[self._reqFileName] .. msgData.acData
        if msgData.nCurPkg == msgData.nTotalPkg then
            -- �ļ�������ɣ��ļ����ÿ�
            self._reqFileName = ""
            if msgData.nCurFile == msgData.nTotalFile then
                -- ���һ���ļ��������
                if device.platform == "windows" then
                    local str = "mkdir "..cc.FileUtils:getInstance():getWritablePath() .. self._appID
                    print(str)
                    os.execute(str)
                else
                    os.execute("mkdir -p "..cc.FileUtils:getInstance():getWritablePath() .. self._appID)
                end
                for key, var in pairs(self._taskConfigCache) do
                    self:saveTaskConfigFile(key, var)
                end
                
                local taskConfig = {}
                local tempPackagePath = clone(package.path)
                for key, _ in pairs(self._taskConfigCache) do
                    package.path = cc.FileUtils:getInstance():getWritablePath() .. self._appID .. "/" .. "?.lua" .. package.path
                    local tempConfig = dofile(cc.FileUtils:getInstance():getWritablePath() .. self._appID .. "/" .. key)
                    table.insert(taskConfig, tempConfig)
                end
                package.path = tempPackagePath
                local finalDta = taskConfig 
                self:success(finalDta)   
            end
        end
    elseif msgData.ucFlag == XH.TaskProtocol.RespTaskConfig.FLAG.FILE_NOT_EXIST then
        self:setMessage("file not exist��")
        self:fail()
    elseif msgData.ucFlag == XH.TaskProtocol.RespTaskConfig.FLAG.ERROR then
        self:setMessage("request error��")
        self:fail()
    elseif msgData.ucFlag == XH.TaskProtocol.RespTaskConfig.FLAG.NO_FILE then
        self:setMessage("not file��")
        self:fail()
    end
end

function ReqTaskConfig:saveTaskConfigFile(fileName, saveMsg)
    local filePath = cc.FileUtils:getInstance():getWritablePath() .. self._appID .. "/" .. fileName
    --if not cc.FileUtils:getInstance():isDirectoryExist(cc.FileUtils:getInstance():getWritablePath() .. sTime) then
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

return ReqTaskConfig