------------------------------芜湖玩法当前战绩界面----------------------------
local wuhuGameCurrentResults = class("wuhuGameCurrentResults", cc.load("mvc").ViewBase)

local netObj,eventObj = unpack(require("newgold.GoldLobby.Modules.PeakRaceGame.XZDD.msg_obj"))
--csb文件
wuhuGameCurrentResults.RESOURCE_FILENAME = "wuhuGameCurrentResults.csb"

--节点绑定及事件
wuhuGameCurrentResults.RESOURCE_BINDING = {
	["Panel_1/Image_1"] = {
        varname="Bg",
    },
    ["Panel_1/Image_1/closeBtn"] = {
        varname="closeBtn",
        events={
            {event="click",method="on_btn_click"}
        }
    },
    ["Panel_1/Image_1/Itm"] = {
        varname="Itm",
    },
}

local Bgwidth = {619,619,889,1159}
local starepos = {0,110,125,131}
function wuhuGameCurrentResults:ctor(msg)

    wuhuGameCurrentResults.super.ctor(self)
    self:fixPos()
    self:showMask()
    self:netEvent()
    local maxNum = g_gameGlobal:getMaxPlayerNum()
    self.Bg:setContentSize(Bgwidth[maxNum],578)
    self.closeBtn:setPositionX(self.Bg:getContentSize().width-35)
    self.Itm:hide()
    for i=1,#msg.simplePlayer do
        self:getResultItm(msg.simplePlayer[i],i)
    end
end

function wuhuGameCurrentResults:netEvent()
    
end

function wuhuGameCurrentResults:getResultItm(data,number)
    local resultItem = self.Itm:clone()
    resultItem:show()
    local name = resultItem:getChildByName("name")
    local ID = resultItem:getChildByName("ID")
    local headbg = resultItem:getChildByName("Image_head_bg")
    local hupaicount = resultItem:getChildByName("hepai")
    local zimocount = resultItem:getChildByName("zimo")
    local zongjiaocount = resultItem:getChildByName("zongjiao")
    local difencount = resultItem:getChildByName("difen")
    local zongfencount = resultItem:getChildByName("zongfen")
    name:setString('')
    name:setString(g_gameGlobal:cutStringLength(data.playerName))
    ID:setString("账号: "..data.palyerIndex)

    local player = g_gameGlobal:getMyselfInfo()
    local isMe = false
    if player.playerIndex == data.palyerIndex then 
        isMe = true
    end

    local offset = {x = 0 , y = 0}
    if isMe then 
        g_gameGlobal:requestHttpImage(data.headImgUrl, headbg , true, nil , 0.95 , nil ,  offset)
    elseif string.len(data.headImgUrl)>5 then
        g_gameGlobal:requestHttpImage(data.headImgUrl, headbg , false , nil , 0.95 , nil , offset)
    end

    hupaicount:setString(data.winCount)
    zimocount:setString(data.dianpaoCount)
    zongjiaocount:setString(data.gangCount)
    difencount:setString(data.desc)
    if data.gold and tonumber(data.gold) > 0 then
        zongfencount:setString("+"..data.gold)
    else
        zongfencount:setString(data.gold)
    end
    local maxNum = g_gameGlobal:getMaxPlayerNum()
    resultItem:setPositionX(285*number-starepos[maxNum])
    resultItem:addTo(self.Bg)
end

function wuhuGameCurrentResults:on_btn_click(sender)

    if sender == self.closeBtn then 
        self:removeSelf()
    end
end

return wuhuGameCurrentResults
