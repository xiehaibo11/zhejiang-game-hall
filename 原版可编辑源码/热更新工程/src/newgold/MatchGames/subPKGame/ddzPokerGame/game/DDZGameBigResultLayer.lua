--[[
 * @Author: zhoufan
 * @Date: 2017年11月4日 11:31:19
 ]]

------------------------------大计分界面----------------------------
local gameBigResultLayer = require("newgold.MatchGames.subMjGame.MJGamePublic.GameBigResultLayer")
local DDZGameBigResultLayer = class("DDZGameBigResultLayer", gameBigResultLayer)

DDZGameBigResultLayer.RESOURCE_FILENAME = "GameBigResultLayer.csb"
local tmps = {
    "单局最高：       %s",
    "炸弹个数：       %s",
    "胜利局数：       %s",
}





function DDZGameBigResultLayer:ctor(params)

    DDZGameBigResultLayer.super.ctor(self)

    local params = params or {}
    --self.cachePlayers={}

    self.gameRequestAck = params.gameRequestAck or nil
    
    self.isFromLobby = params and params.isFromLobby

    -- self:netEvent()
    -- self:initUi()
    -- g_gameGlobal:setGameStart(false)
    -- g_msgCache:cleanMsgByCmd(g_msgDefinitions.MSG_GAME_VIP_ROOM_CLOSE)
end

function DDZGameBigResultLayer:listItemSetData(listitem , data)
    listitem:show()
    local Image_fangzhu  = self:findChildWithName(listitem,"fangzhu")  
    local Image_win     = self:findChildWithName(listitem,"big_winner") 
    local Label_name  = self:findChildWithName(listitem,"Text_name")
    local Label_id    = self:findChildWithName(listitem,"Text_id")
    local AtlasLabel_score = self:findChildWithName(listitem,"score") 
    local kuang = self:findChildWithName(listitem,"kuang")
    kuang:setVisible(false)
    
    local Text_flower = self:findChildWithName(listitem,"Text_flower")
    if data.supportFlower and Text_flower and data.costFlowerNum and data.costFlowerNum > 0 and data.supportFlower == 1 then
        Text_flower:setVisible(true)
        Text_flower:setString(string.format("乐卡消耗%d张", data.costFlowerNum or 0))
    end
    
    local listView = self:findChildWithName(listitem,"ListView") 
    listView:setScrollBarEnabled(false)
   
    local vipRoomClose = g_msgCache:getMsgByCmd(g_msgDefinitions.MSG_GAME_VIP_ROOM_CLOSE)
    local startGameRequestAck = self.gameRequestAck or g_msgCache:getMsgByCmd(g_msgDefinitions.MSG_GAME_START_GAME_REQUEST_ACK)

    local txtCount = 5
    if startGameRequestAck.__bigResultInfoType == 2 then
        txtCount = 7
    end

    -- for i=1,txtCount do
    --     ListView_txts:pushBackDefaultItem()
    --     local txtItem = ListView_txts:getItem(#ListView_txts:getItems()-1)
    --     txtItem:setName("Label_txt_"..i)
    -- end



    local Label_txt_1 = self:findChildWithName(listitem,"zimo_txt") 
    local Label_txt_2 = self:findChildWithName(listitem,"jiepao_txt") 
    local Label_txt_3 = self:findChildWithName(listitem,"dianpao_txt") 
    local Label_txt_4 = self:findChildWithName(listitem,"angang_txt") 
    Label_txt_4:setVisible(false)
    local Label_txt_5 = self:findChildWithName(listitem,"minggang_txt") 
    Label_txt_5:setVisible(false)
    local Label_txt_6 = self:findChildWithName(listitem,"chadajiao_txt")
    Label_txt_6:setVisible(false)

    
    -- if txtCount>1 then
    --     local margin = (ListView_txts:getContentSize().height-txtCount*Label_txt_1:getContentSize().height)/(txtCount-1)
    --     ListView_txts:setItemsMargin(margin>0 and margin or 0)
    -- end

    local Image_zjps = self:findChildWithName(listitem,"zuijiapaoshou") 

    local headbg = self:findChildWithName(listitem,"head_img")

    

    Image_fangzhu:setVisible(startGameRequestAck.createPlayerID==data.playerID and (not startGameRequestAck.clubId or startGameRequestAck.clubId==0))
    -- 大赢家显示
    Image_win:setVisible(false)
    kuang:setVisible(false)
    for i,v in ipairs(vipRoomClose.winPos) do
        if v == data.tablePos then
            -- Image_win:setVisible(true)
            -- kuang:setVisible(true)
        end
    end
    
    Image_zjps:setVisible(false)
    -- for i,v in ipairs(vipRoomClose.paoPos) do
    --     if v == data.tablePos then
    --         Image_zjps:setVisible(true)
    --     end
    -- end

    Label_name:setString(g_gameGlobal:cutStringLength(data.playerName))
    
    Label_id:setString("账号:"..(data.playerIndex or "0"))
    
    local socrePngFile = "game_result/scmj/pic_num_red.png"
    if data.gold < 0 then
        socrePngFile = "game_result/scmj/pic_num_blue.png"
    end
    AtlasLabel_score:setProperty("/".. tostring(math.abs(data.gold)), socrePngFile, 38, 54, ".");
    AtlasLabel_score:setPositionX(AtlasLabel_score:getPositionX() - 25)

    if Label_txt_1 then
        Label_txt_1:setString(string.format(tmps[1], data.canFriend))
    end
    if Label_txt_2 then
        Label_txt_2:setString(string.format(tmps[2], data.bombNum))
    end
    if Label_txt_3 then
        Label_txt_3:setString(string.format(tmps[3], data.winCount))
    end
   

    local headImg = headbg:getChildByName("head_icon")--display.newSprite("empty_frame.png"):addTo(headbg):pos(headbg:getw()/2-2,headbg:geth()/2+3)


    local player = g_gameGlobal:getMyselfInfo()
    local frameKind = data.headImg
    if player.playerIndex == data.playerIndex then 
        g_gameGlobal:requestHttpImageWithNoCut(frameKind, data.headImgUrl, headImg , true, nil, "common/headframe_stencil.png")
    else
        if data.headImgUrl == "" then data.headImgUrl = string.format("robotHeadImg/%d.jpg", data.playerIndex%100+1) end
        g_gameGlobal:requestHttpImageWithNoCut(frameKind, data.headImgUrl, headImg , false, nil, "common/headframe_stencil.png")
    end
end

return DDZGameBigResultLayer