return {
    CMDID = {
        Start_Game = 20000,
        SyncRoomStatus_Req = 20005,
        SyncRoomStatus_Resp = 20006,
        StartGameVote_Req = 20007,
        StartGameVote_Resp = 20008,
        Notice_Start_Game_Vote = 20116,
        Auto_cancel_Req = 20021,
        Auto_cancel_Resp = 20022,
        Auto_do_Req = 20025,
        Auto_do_Resp = 20026,
        Notice_Start = 20100,
        Notice_Person = 20104,
        Notice_Sync_Room_Status = 20110,
        Notice_Finish = 20111,
        Notice_End = 20112
    },

    ROOM_STATUS_TYPE = {
        ROOM_STATUS_IDLE = 0,
        ROOM_STATUS_WAIT = 1,
        ROOM_STATUS_DEAL = 2,
        ROOM_STATUS_TING = 4,
        ROOM_STATUS_PLAY = 3,
        ROOM_STATUS_SPLIT = 5,
        ROOM_STATUS_SETTLE = 6,
        ROOM_STATUS_CONTINUE = 7,
        ROOM_STATUS_OVER = 8,
        ROOM_STATUS_REPLAY = 9,
        ROOM_STATUS_ROB = 10,
        ROOM_STATUS_SHOW = 11,
        ROOM_STATUS_MULTIPLE = 12,
        ROOM_STATUS_KOUPAI = 13
    }
}