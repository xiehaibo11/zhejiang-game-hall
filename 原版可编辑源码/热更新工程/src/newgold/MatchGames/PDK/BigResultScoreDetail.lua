
local BigResultScoreDetail = class("BigResultScoreDetail", cc.load("mvc").ViewBase)

local netObj,eventObj = unpack(require("newgold.GoldLobby.Modules.PeakRaceGame.XZDD.msg_obj"))
--csb文件
BigResultScoreDetail.RESOURCE_FILENAME = "BigResultScoreDetail.csb"

--节点绑定及事件
BigResultScoreDetail.RESOURCE_BINDING = {
    
    ["tipBg_1/Image_16"] = {
        varname="quanPanel_16",
    },

    ["tipBg_1/Image_8"] = {
        varname="quanPanel_8",
    },

    ["tipBg_1/Image_4"] = {
        varname="quanPanel_4",
    },

    
    btn_close = {
        varname="btn_close",
        events={
            {event="click",method="on_btn_click"}
        }
    },
 
}

function BigResultScoreDetail:ctor(params)
    BigResultScoreDetail.super.ctor(self)

    self:showMask()
    self:fixPos()

    local params = params or {}

    local quanNum = params.quanNum
    local scores = params.scores

    local quanPanel = self["quanPanel_"..quanNum]

    quanPanel:show()

    for i=1,quanNum do
        local score =  scores[i] or 0
        local text = quanPanel:getChildByName("Text_".. i )
        local scoreText = text:clone()
        scoreText:setString(score)

        local y = -124
        if quanNum == 8 then 
            y = -95
        elseif quanNum == 16 then 
            y = -83
        end

        scoreText:addTo(text):setPosition( text:getContentSize().width/2 , y )
    end
    

end




function BigResultScoreDetail:on_btn_click(sender)

    if sender == self.btn_close then 
        self:removeSelf()
    end

end



function BigResultScoreDetail:onExit()

end


return BigResultScoreDetail