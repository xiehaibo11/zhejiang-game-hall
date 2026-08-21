local ChangeCardDefine = CF.gameClass("ChangeCardDefine")

ChangeCardDefine.ShowType = {
    ROOM_CARD = 1,    -- 房卡
    DIAMOND   = 2,    -- 钻石
    CHANGE_CARD = 3   -- 换牌卡
}

ChangeCardDefine.State = {
    NO_CHANGE = "NO_CHANGE",     -- 没有换牌
    RESERVED = "RESERVED",      -- 预约换牌
    SUCCESS = "SUCCESS"        -- 换牌成功
}

ChangeCardDefine.TYPE = {
    SHUFFLE = 0,	-- 洗牌
    EMOTION = 1,	-- 表情包
    SHUFFLE_BYPAYTYPE = 2,   -- 根据支付方式洗牌
    CANCEL_BYPAYTYPE = 3,	-- 撤销操作(摆牌)
    DEDUCT = 4,	-- 消耗道具
 };

ChangeCardDefine.FlagStr =  "changecard=1"
ChangeCardDefine.ParamStr =  ChangeCardDefine.FlagStr .. ";taskname='changecard';inst=150729;notbuycardid=0;"

return ChangeCardDefine