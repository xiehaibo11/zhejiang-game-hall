--ganpengjin
------------------------------计分界面----------------------------
local netObj,eventObj       = unpack(require("newgold.GoldLobby.Modules.PeakRaceGame.XZDD.msg_obj"))
local baseLayer             = require("newgold.MatchGames.PDK.LYPDK.common.baseLayer")
local LYPDKBigResultData    = class("LYPDKBigResultData", baseLayer)
function LYPDKBigResultData:onCreate(  )
    -- body
    LYPDKBigResultData.super.onCreate(self);
    self.csbName    = LYPDKResource.BigResultRes;
    self.playerNode = {}
end

local LYPDKBigResultView = class("LYPDKBigResultView", LYPDKBigResultData)

function LYPDKBigResultView:ctor(resultdata, gameRequestData, curGameModle)
    self.resultdata = resultdata
    self.curGameModle = curGameModle;
    self.gameRequestData = gameRequestData or {}
    LYPDKBigResultView.super.ctor(self)
end

function LYPDKBigResultView:onCreate()
    -- body
    LYPDKBigResultView.super.onCreate(self);
    self:initUIS();
    self:onStart();
    self.audio:pauseBG();
end

function LYPDKBigResultView:initUIS( ... )
    -- body
    LYPDKBigResultView.super.initUIS(self);
    self:createBaseMap();
    self:createPDKResoueceNode(self.csbName);

    --房间号
    self.room_id_text = self:findChildWithName(self.resourceNode_, "Text_room_id");
    if self.room_id_text then
        self.room_id_text:setString("")
    end

    --列表容器
    self.ListView_record = self:findChildWithName(self.resourceNode_, "ListView_record");
    if self.ListView_record then
        self.ListView_record:setItemsMargin(6);
        self.ListView_record:setScrollBarEnabled(false);
        self.ListView_record:removeAllItems();
    end

    --日期
    self.date_text = self:findChildWithName(self.resourceNode_, "Text_time_desc");
    if self.date_text then
        self.date_text:setString("")
    end    

    --获取玩家模板
    self.playerItemPanel = self:findChildWithName(self.resourceNode_, "Panel_PlayerItem");
    if self.playerItemPanel then
        self.playerItemPanel:setVisible(false);
    end

    --获取自己模板
    self.Panel_PlayerItem_mine = self:findChildWithName(self.resourceNode_, "Panel_PlayerItem_mine");
    if self.Panel_PlayerItem_mine then
        self.Panel_PlayerItem_mine:setVisible(false);
    end

    --几人场
    self.Text_people = self:findChildWithName(self.resourceNode_, "Text_people");
    if self.Text_people then
        self.Text_people:setVisible(false);
    end

    --局数
    self.jushu = self:findChildWithName(self.resourceNode_, "jushu");
    if self.jushu then
        self.jushu:setVisible(false);
    end

    --玩法
    self.wanfa = self:findChildWithName(self.resourceNode_, "wanfa");
    if self.wanfa then
        self.wanfa:setVisible(false);
    end
    
    self:addButtonTouchedEventByBtnName("Button_share", handler(self, self.shareCallBack));
    self:addButtonTouchedEventByBtnName("Button_bakcLobby", handler(self, self.backToLobbyCallBack));

    self.daikaifang = self:findChildWithName(self.resourceNode_, "daikaifang"); 
    if self.daikaifang then
        self.daikaifang:setVisible(false);
    end
end

function LYPDKBigResultView:createPlayerItem( ... )
    -- body
    if not self.playerItemPanel then
        return nil;
    end
    
    local panel = self.playerItemPanel:clone();
    if panel then
        panel:setVisible(true);
    end

    return panel;
end

function LYPDKBigResultView:createMineItem()
    -- body
    if not self.Panel_PlayerItem_mine then
        return nil;
    end
    
    local panel = self.Panel_PlayerItem_mine:clone();
    if panel then
        panel:setVisible(true);
    end

    return panel;
end

function LYPDKBigResultView:shareCallBack( sender )
    
end

function LYPDKBigResultView:backToLobbyCallBack( sender )
    -- body
    --release_print("LYPDKBigResultView:backToLobbyCallBack")
    g_gameGlobal:backToLobby();
end

function LYPDKBigResultView:updateGameResultUIS()
    -- body
    --release_print("LYPDKBigResult:updateGameResultUIS");
    if not self.resultdata then
        return;
    end

    local totalJuShu = g_gameGlobal:getCurTotalJuShu();
    
    --房间id
    if self.room_id_text then 
        self.room_id_text:setString(self.resultdata.unused0)
    end

    --日期
    local dateT = os.date("*t")
    local timeStr = string.format("%s-%s-%s %s:%02d",
            dateT.year,
            dateT.month,
            dateT.day,
            dateT.hour,
            dateT.min)

    if self.date_text then 
        self.date_text:setVisible(true);
        self.date_text:setString(timeStr)
    end   
    
    --几人场
    local people_num = g_gameGlobal:getMaxPlayerNum() .. "人"  
    if self.Text_people then
        self.Text_people:setString(people_num)
        self.Text_people:setVisible(true);
    end

    --局数
    local msgGameStart = g_msgCache:getMsgByCmd(g_msgDefinitions.MSG_GAME_START_GAME)
    local currentHand = 0;
    if msgGameStart then
        currentHand  = msgGameStart.quanNum;
    end
    if self.jushu then
        self.jushu:setString((currentHand or 0) .. "/" ..(totalJuShu or 0));
        self.jushu:setVisible(true);
    end

    --玩法
    local otherDesc = "";
    -- local desc = g_gameGlobal:parseWanfaList(self.gameRequestData.MainGamePlayRule, self.gameRequestData.MinorGamePlayRuleList, " ", false, false, false)
    local way, wanfa2 = self.gameRequestData.newPlayWay, self.gameRequestData.unused0
    local desc = g_gameGlobal:parseWanfa(way, " ",nil,nil,nil,wanfa2)

    if g_gameGlobal:getFangFeiJunTan() == 1 then
        otherDesc = otherDesc .. " " .. "房卡均摊"   
    end
    if totalJuShu > 0 then
        otherDesc = otherDesc
    end
    if self.wanfa then
        self.wanfa:setString(desc..otherDesc)
        local fontAreaSize = self.wanfa:getContentSize();
        if fontAreaSize.width > 600 then
            local add_offsetY = self.wanfa:getFontSize() + 10
            fontAreaSize.height = add_offsetY + fontAreaSize.height;
            fontAreaSize.width  = 620;
            self.wanfa:ignoreContentAdaptWithSize(false);
            self.wanfa:setContentSize(fontAreaSize)
            self.wanfa:setTextAreaSize(fontAreaSize)
            self.wanfa:setPositionY(self.wanfa:getPositionY() + add_offsetY / 2);
        end
        self.wanfa:setVisible(true);
    end

    local playerData = self.resultdata.players or {}

    --填充数据
    for k, v in pairs(playerData or {}) do
        if v then
            if g_gameGlobal:getMyselfInfo().playerIndex == v.palyerIndex then
                if v.gold > 0 then
                    self.audio:playSFX(LYPDKResource.SoundWinRes);
                else
                    self.audio:playSFX(LYPDKResource.SoundLostRes);
                end
            end
        end
    end

    local players = self.resultdata.players or {}
    local playersCount = #players;
    for i = 1, playersCount do
        local is_big_win = self:isBigWiner(players[i]);
        local player = nil;
        if is_big_win == true then
            player = self:createMineItem()
        else
            player = self:createPlayerItem()
        end

        if player then
            self.ListView_record:pushBackCustomItem(player);
            self:_fillItemPlayer(player, players[i]);
        end 
    end  

    --判断代开房
    local isDaiKai = (self.resultdata.unused0 >= 600000 and self.resultdata.unused0 < 900000)
    local isClub   = (self.resultdata.unused0 >= 300000 and self.resultdata.unused0 < 600000)
    if isDaiKai then
        local frame = cc.SpriteFrameCache:getInstance():getSpriteFrame(LYPDKResource.fzCreateRoomImageRes)
        if frame then
            self.daikaifang:loadTexture("MatchAH/"..LYPDKResource.fzCreateRoomImageRes, LYPDKResource.TexturePlistType)
            self.daikaifang:setVisible(true)
        end
    elseif isClub then
        local frame = cc.SpriteFrameCache:getInstance():getSpriteFrame(LYPDKResource.clubCreateRoomImageRes)
        if frame then
            self.daikaifang:loadTexture("MatchAH/"..LYPDKResource.clubCreateRoomImageRes, LYPDKResource.TexturePlistType)
            self.daikaifang:setVisible(true)
        end
    end
end

function LYPDKBigResultView:_fillItemPlayer(playerNode, playerData)
    -- body
    if not playerNode then
        return;
    end

    if not playerData then
        return;
    end

    local startGameRequestAck = g_msgCache:getMsgByCmd(g_msgDefinitions.MSG_GAME_START_GAME_REQUEST_ACK)

    playerNode:setVisible(true);
    local player    = g_gameGlobal:getMyselfInfo();
    local isWin     = self:isWin(playerData);
    local socrePngFile = LYPDKResource.ResultYiShuFontResLostRes
    if isWin == true then
        socrePngFile   = LYPDKResource.ResultYiShuFontResWinRes
    end
    --头像
    local headbg = self:findChildWithName(playerNode, "Image_head_frame");
    local Image_head = self:findChildWithName(playerNode, "Image_head");
    local Image_head_crown = self:findChildWithName(playerNode, "Image_creator");
    if Image_head_crown then
        local is_BigWiner = self:isBigWiner(playerData);
        Image_head_crown:setVisible(is_BigWiner);
        if playerData.gold > 0 then
            Image_head_crown:ignoreContentAdaptWithSize(true);
            Image_head_crown:setScale(0.8)
            Image_head_crown:loadTexture("MatchAH/"..LYPDKResource.BigWinerRes, LYPDKResource.TexturePlistType);
        end
    end

    --是否是房主
    local isCreateRoomPlayer = startGameRequestAck.createPlayerID == playerData.playerID;
    local Image_host = self:findChildWithName(playerNode, "Image_host");
    if Image_host then
        Image_host:setVisible(isCreateRoomPlayer);
    end
    
    local Image_head_scale = 1
    if Image_head then
        -- Image_head:setVisible(false);
        Image_head_scale = Image_head:getScale();
    end

    if headbg then
        if string.len(playerData.headImgUrl)>5 then
            if player.playerIndex == playerData.palyerIndex then 
                g_gameGlobal:requestHttpImage(playerData.headImgUrl, Image_head , true, nil)
            elseif string.len(playerData.headImgUrl)>5 then
                g_gameGlobal:requestHttpImage(playerData.headImgUrl, Image_head , false, nil)
            end
    
        else
            Image_head:setVisible(true);
        end
    end

    local record_Image_bg = self:findChildWithName(playerNode, "record_Image_bg");
    if record_Image_bg then
        local image_path = "";
        if isWin == true then
            image_path = "game_result/z_004.png";
        else            
            image_path = "game_result/z_004b.png";
        end
        record_Image_bg:loadTexture("MatchAH/"..image_path, ccui.TextureResType.plistType);
    end

    --名字
    local Text_niceName = self:findChildWithName(playerNode, "Text_niceName");
    if Text_niceName then
        Text_niceName:setString(g_gameGlobal:cutStringLength(playerData.playerName));
        Text_niceName:setVisible(true);
    end

    --ID
    local Text_userID = self:findChildWithName(playerNode, "Text_userID");
    if Text_userID then
        Text_userID:setString(playerData.palyerIndex);
    end

    --被春天次数
    local Text_beifuji_count = self:findChildWithName(playerNode, "Text_beifuji_count");
    if Text_beifuji_count then
        Text_beifuji_count:setString(playerData.totalBeiFuJiNum or 0);
    end

    --春天次数
    local Text_beifuji_count = self:findChildWithName(playerNode, "Text_fuji_count");
    if Text_beifuji_count then
        Text_beifuji_count:setString(playerData.totalFujiNum or 0);
    end
    
    --炸弹次数
    local Text_zhadan_count = self:findChildWithName(playerNode, "Text_zhadan_count");
    if Text_zhadan_count then
        Text_zhadan_count:setString(playerData.bombNum or 0);
    end

    --总余牌数
    local Text_cards_count = self:findChildWithName(playerNode, "Text_cards_count");
    if Text_cards_count then
        Text_cards_count:setString(playerData.totalLeftNum or 0);
    end

    --胜负局数
    local Text_win_lost_count = self:findChildWithName(playerNode, "Text_win_lost_count");
    if Text_win_lost_count then
        local str = (playerData.winCount or 0) .. "赢" .. (playerData.totalLostNum or 0) .. "输"
        Text_win_lost_count:setString(str);
    end

    --分数
    local Text_cj_count = self:findChildWithName(playerNode, "Text_cj_count");
    if Text_cj_count then
        Text_cj_count:setProperty(( playerData.gold ~= 0 and "/" or "").. tostring(math.abs(playerData.gold)), socrePngFile, 37, 50, "/");
    end
end

function LYPDKBigResultView:isBigWiner(playerData)
    if not playerData then
        return false;
    end

    if playerData.gold <= 0 then
        return false;
    end

    local isBigWiner = false;
    local temp_gold = playerData.gold;
    local temp_player = nil;
    for k, v in pairs(self.resultdata.players) do
        if v.gold > playerData.gold then
            temp_gold = v.gold;
            temp_player = v;
        end
    end

    if temp_player == nil then
        return true;
    end

    return false;
end

function LYPDKBigResultView:isLiuJu(playerData)
    -- body
    if not playerData then
        return false;
    end

    if playerData.gold == 0  then --胜
        return true;
    end

    return false;

end

function LYPDKBigResultView:isWin(playerData)
    -- body
    if not playerData then
        return false;
    end

    if playerData.gold > 0  then --胜
        return true;

    elseif playerData.gold < 0 then --负
        return false

    else
        return false --平局

    end

    return false 
end

function LYPDKBigResultView:updateGameResultData()
    --release_print("LYPDKBigResult:updateGameResultData");
end

local LYPDKBigResult = class("LYPDKBigResult", LYPDKBigResultView);
function LYPDKBigResult:onStart()
    -- body
    g_UserDataTable.gameEmojCount = 0
    self:initResigterMsg();
    self:initGameResultData();
end

function LYPDKBigResult:initGameResultData( ... )
    -- body
    self:updateGameLayer();
end

function LYPDKBigResult:initResigterMsg()
    -- body
end

function LYPDKBigResult:updateGameLayer( )
    -- body
    --release_print("LYPDKBigResult:updateGameLayer");
    self:updateGameResultData();
    self:updateGameResultUIS();
end

--监听手机返回键
function LYPDKBigResult:onBackEvent(keyCode, event)
    --release_print("LYPDKBigResult:onBackEvent");
    if event then event:stopPropagation(); end
    self:onPlayTouchedSFX();
end

function cc.exports.LYPDKBigResult_createLYPDKBigResult(...)
    -- body
    return LYPDKBigResult:create(...);
end

return LYPDKBigResult;;  