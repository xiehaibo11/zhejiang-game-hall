local ReqIdentityStatus = class("ReqIdentityStatus",XH.ReqHttp)
local UrlConf = require("app.Config.UrlConf")
local HttpDefine = require("app.Define.HttpDefine")
--���֤����֤�ȼ�
ReqIdentityStatus.verifyLevel =
{
    VERIFY_LEVEL_NONE = 0,  -- ����֤
    --VERIFY_LEVEL_YEAR = 1,  --��֤���
    --VERIFY_LEVEL_YEAR = 4,  --��֤����
    VERIFY_LEVEL_YEAR = 8,  --��֤���֤��

    VERIFY_LEVEL_LOW = 16,  -- ��֤λ��
    VERIFY_LEVEL_HIGH = 17  -- ��֤��ݺ�λ��
}

function ReqIdentityStatus:start(timeout,gameid,type)
    if ReqIdentityStatus.super.start(self,timeout) == false then
        return
    end
    local numId = XH.playerData:getNumberID()
    local time = os.time()
    local appId = XH.areaData:getAppID()
    local reqtype = type or 0
    local areaID = XH.areaData:getAreaID()
    local appKey = XH.areaData:getAppKey()
    local md5Key = un.md5Encode(appId..appKey )
    local verify_level = ReqIdentityStatus.verifyLevel.VERIFY_LEVEL_HIGH
    local urlNumID = XH.SysTool.url_encode(un.StringUtils.GB_18030_2000_TO_UTF8(tostring(numId)))

    if XH.configerManager:getIsNewRealName() then
        local miyao = "8ZUf+DWIYBDala7t"
        local strjson = {}
        strjson.areaid = areaID
        strjson.numid = numId
        if gameid then
            strjson.gameid = gameid
        else
            strjson.gameid = XH.areaData:getLobbyID()
        end
        local strjsons = json.encode(strjson)
        local token = un.md5Encode(strjsons.."."..miyao)
        local tokens = {}
        tokens.token = token
        XH.httpManager:RequestPost(HttpDefine.URL_PHONE_VERIFCATION, UrlConf.URL_REAL_NAME_GET_STATUS_NEW,
        strjsons, XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON, handler(self, self.onHttpIdentityStatueNew),tokens)
    else
        local signStr = "age=1".."&appid=".. appId .."&area_id=".. areaID .."&numid=".. urlNumID .."&time="..time.."&type=" ..reqtype.."&verify_level="..verify_level.."&"..md5Key
        local sign = un.md5Encode(signStr)
        local url = UrlConf.URL_REAL_NAME_GET_STATUS.."?appid=".. appId .. "&area_id="..areaID .."&numid=".. urlNumID .."&sign="..sign.."&time="..time.."&type=" ..reqtype.. "&verify_level="..verify_level.."&age=1"
        XH.httpManager:RequestGet(HttpDefine.URL_IDENTITY_STATUS,url,XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON,handler(self,self.onHttpIdentityStatue))
    end
end

function ReqIdentityStatus:onHttpIdentityStatue(httpid, status, response)
    if status == 200 then
        print(response)
        if response.code == 0 then
            self:success(response.data)
        else
            self:setMessage(response.msg)
            self:fail()
        end
    else
        self:setMessage(XH.ConstString.getStr("IDENTITY_ERROR"))
        self:fail()
    end
end

function ReqIdentityStatus:onHttpIdentityStatueNew(httpid, status, response)
    if status == 200 then
        print(response)
        if response.errcode == 0 then
            if response.mtx.code == 0 then
                response.mtx.data.inwhitelist = response.inwhitelist
                response.mtx.data.gameid = response.gameid
                response.mtx.data.level = response.level
                self:success(response.mtx.data)
            else
                self:setMessage(response.mtx.msg)
                self:fail()
            end
        else
            self:setMessage(XH.ConstString.getStr("IDENTITY_ERROR"))
            self:fail()
        end
    else
        self:setMessage(XH.ConstString.getStr("IDENTITY_ERROR"))
        self:fail()
    end
end

return ReqIdentityStatus