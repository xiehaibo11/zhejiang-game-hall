
--[[
    分享模块
]]
local ReqShare = class("ReqShare", XH.Req)

--[[
local shareInfo = {
    textTitle="",          --分享标题
    textTitleUrl="",       --微信不用
    site="",               --微信不用
    siteUrl="",            --微信不用
    imagePath="",          --微信不用
    url="",                --微信网页模式分享的链接
    type="url",            --word是文字分享，url网页模式分享，pic分享图片
    scene="1",              --0是分享到好友会话，1是分享到朋友圈
    imageUrl="",           --分享图片地址（分享网页模式，需要传安卓包名）
    text="",               --分享内容 
    comment="",            --微信不用
}
]]--

function ReqShare:ctor()
     ReqShare.super.ctor(self)
end

function ReqShare:start(info, showResoult,timeoutTime)
    timeoutTime = timeoutTime or 30

    if ReqShare.super.start(self,timeoutTime) == false then
        return
    end
    local shareInfo = info
    shareInfo.textTitle = XH.StringTool.replaceMatchStr(shareInfo.textTitle)
    shareInfo.text = XH.StringTool.replaceMatchStr(shareInfo.text)
    
    shareInfo.scene = shareInfo.scene + 1	
    self:addListener()
    if shareInfo.type == "url" then
        local XHshare  = {
            ["0"] = "3",
            ["1"] = shareInfo.textTitle ,     
            ["2"] = shareInfo.text,
            ["3"]  = shareInfo.iconUrl or XH.areaData:getShareIconUrl(),
            ["4"]  = shareInfo.url,
            ["5"]  = tostring(shareInfo.scene),      
        }
        XH.sdkManager:callFunctionWithMap("sharesdk_show_share_wx", XHshare)
        XH.sdkManager:setLastShareInfo(shareInfo)
   elseif shareInfo.type == "pic" then
        local XHshare  = {
            ["0"] = "2",
            ["1"] = shareInfo.textTitle,
            ["2"] = shareInfo.text,
            ["3"] = shareInfo.imagePath,
            ["4"] = shareInfo.sharePath,
            ["5"] = tostring(shareInfo.scene),
        }
        XH.sdkManager:callFunctionWithMap("sharesdk_show_share_wx", XHshare) 
   elseif shareInfo.type == "word" then
        local XHshare  = {
                ["0"] = "1" ,
                ["1"] = shareInfo.textTitle,
                ["2"] = shareInfo.text,
                ["3"] = shareInfo.imagePath,
                ["4"] = "",
                ["5"] = tostring(shareInfo.scene),
            }
        XH.sdkManager:callFunctionWithMap("sharesdk_show_share_wx", XHshare)
   end 
   local luckyMissionConfig = require("lobby.Modules.LuckyMission.Config")
   XH.lobby:getModule("LuckyMission"):reqTaskV2Finish(luckyMissionConfig.TaskType.Res_Fenxiang)
end

function ReqShare:success(data)
    ReqShare.super.success(self,data)
    self:removeListener()
end

function ReqShare:fail(data)
    ReqShare.super.fail(self,data)
    self:removeListener()
end

function ReqShare:timeout(data)
    ReqShare.super.timeout(self,data)
    self:removeListener()
end

function ReqShare:onShareCallback(event)
    local code = event.data.code
    local msg = event.data.msg
   if(code == XH.ThirdDefine.SHAREDSDK_CALLBACK_CODE.WX_FLAG_SHARERESULT_SUCCESS) then
        self:setMessage(msg)
        self:success(code)
   else 
        self:setMessage(msg)
        self:fail(code)
   end
end

function ReqShare:addListener()
    self._listener =  cc.EventProxy.new(XH.sdkManager)
		:addEventListener(XH.sdkManager.EVENT_SHAREDSDK_CALLBACK, handler(self,self.onShareCallback))
end

function ReqShare:removeListener()
    if self._listener then
        self._listener:removeAllEventListeners()
        self._listener = nil
    end
end

return ReqShare�