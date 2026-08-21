local ReqDefendIdentity = class("ReqDefendIdentity",XH.ReqHttp)
local UrlConf = require("app.Config.UrlConf")
local HttpDefine = require("app.Define.HttpDefine")

--身份证号验证，不传该参数验证全部，传 0 或空为全部不验证。目前政策要求都需要最高等级验证，请传31。
--1 是只验证年份，2 是只验证月份，4 是只验证日期，8 是只验证身份证签名，16 是只验证身份证长度。
--如需组合验证规则，可以传对上述值做按位或的结果。例如需要验证年份、月份和日期，则传入 7（1 + 2 + 4 = 7）
ReqDefendIdentity.verifyLevel =
{
    VERIFY_LEVEL_NONE = 0,
    VERIFY_LEVEL_YEAR = 8,  
    VERIFY_LEVEL_LOW = 16,  
    VERIFY_LEVEL_HIGH = 17, 
    VERIFY_LEVEL_MAX = 31 
}

function ReqDefendIdentity:start( name, identityNumber,timeout,gameid)
    if ReqDefendIdentity.super.start(self,timeout) == false then
        return
    end
    local numId = XH.playerData:getNumberID()
    local time = os.time()
    local appId = XH.areaData:getAppID()
    local reqtype = 0
    local areaID = XH.areaData:getAreaID()
    local appKey = XH.areaData:getAppKey()
    local md5Key = un.md5Encode(appId..appKey )
    local verify_level = ReqDefendIdentity.verifyLevel.VERIFY_LEVEL_MAX
    local urlName =  XH.SysTool.url_encode(name)
    
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
        strjson.name = name
        strjson.idcard = identityNumber
        strjson.iphone = ""
        strjson.exg = ""
        local strjsons = json.encode(strjson)
        local token = un.md5Encode(strjsons.."."..miyao)
        local tokens = {}
        tokens.token = token
        XH.httpManager:RequestPost(HttpDefine.URL_PHONE_VERIFCATION, UrlConf.URL_REAL_NAME_DEFINE_NEW,
        strjsons, XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON, handler(self, self.onHttpDefendNew),tokens)
    else
        local signStr = "appid=".. appId .."&area_id=".. areaID .."&identity_number="..identityNumber..
                    "&name="..urlName.."&numid=".. numId .."&time="..time.."&type=" ..reqtype.."&verify_level="..verify_level.."&"..md5Key
        local sign = un.md5Encode(signStr)
        local url = UrlConf.URL_REAL_NAME_DEFINE.."?appid=".. appId .. "&area_id="..areaID .."&identity_number="..identityNumber..
                   "&numid=".. numId .."&name="..urlName .."&sign="..sign.."&time="..time.."&type=" ..reqtype.. "&verify_level="..verify_level
        XH.httpManager:RequestGet(HttpDefine.URL_DEFEND_IDENTITY,url,XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON,handler(self,self.onHttpDefend))
    end

end

function ReqDefendIdentity:onHttpDefend(httpid, status, response)
    if status == 200 then
        print(response)
        if response.code == 0 then
            self:success(response)
        else
            self:setMessage(response.msg)
            self:fail()
        end
    else
        self:setMessage(XH.ConstString.getStr("IDENTITY_ERROR"))
        self:fail()
    end
end

function ReqDefendIdentity:onHttpDefendNew(httpid, status, response)
    if status == 200 then
        print(response)
        if response.errcode == 0 then
            if response.mtx.code == 0 then
                self:success(response)
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

return ReqDefendIdentity