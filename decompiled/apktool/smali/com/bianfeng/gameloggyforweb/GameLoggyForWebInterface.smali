.class public Lcom/bianfeng/gameloggyforweb/GameLoggyForWebInterface;
.super Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;
.source "GameLoggyForWebInterface.java"


# annotations
.annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin;
    entrance = .enum Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Entrance;->ACTIVITY:Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Entrance;
    strategy = .enum Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Policy;->FORCE:Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Policy;
.end annotation


# static fields
.field private static final ENTER_GAME:Ljava/lang/String; = "h5game_enter_game"

.field private static final FINISH_GAME:Ljava/lang/String; = "h5game_finish_game"

.field private static final FLAG_GAME_LOGOUT:I = 0xde2bb

.field private static final FLAG_GAME_START:I = 0xde2ba

.field private static final FULL_SCREEN:I = 0xde2b9

.field private static final PAY_FAIL:I = 0xde2b7

.field private static final PAY_SUCCESS:I = 0xde2b6

.field private static final SPLIT_SCREEN:I = 0xde2b8

.field private static final START_GAME_FINISH:I = 0xde2b5

.field private static final START_GAME_LOGIN:Ljava/lang/String; = "start_game_login"

.field private static final START_GAME_LOGIN_FAIL:I = 0xde2b4

.field private static final START_GAME_LOGIN_SUCCESS:I = 0xde2b3

.field private static final START_GAME_ROOM:Ljava/lang/String; = "start_game_room"

.field private static final START_GAME_ROOM_CLOSE:I = 0xde2b2

.field private static final START_GAME_ROOM_FAIL:I = 0xde2b1

.field private static final START_GAME_ROOM_SUCCESS:I = 0xde2b0

.field private static final START_GAME_ROOM_WEB:Ljava/lang/String; = "start_game_room_web"


# instance fields
.field private callback:Lcom/bianfeng/splitscreenlib/YmnH5Callback;


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 16
    invoke-direct {p0}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;-><init>()V

    .line 101
    new-instance v0, Lcom/bianfeng/gameloggyforweb/GameLoggyForWebInterface$1;

    invoke-direct {v0, p0}, Lcom/bianfeng/gameloggyforweb/GameLoggyForWebInterface$1;-><init>(Lcom/bianfeng/gameloggyforweb/GameLoggyForWebInterface;)V

    iput-object v0, p0, Lcom/bianfeng/gameloggyforweb/GameLoggyForWebInterface;->callback:Lcom/bianfeng/splitscreenlib/YmnH5Callback;

    return-void
.end method


# virtual methods
.method public gameFinish()V
    .locals 2
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "h5game_finish_game"
    .end annotation

    const-string v0, "\u7ed3\u675f\u6e38\u620f"

    .line 96
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 97
    invoke-static {}, Lcom/bianfeng/splitscreenlib/YmnH5GameSdk;->getInstance()Lcom/bianfeng/splitscreenlib/YmnH5GameSdk;

    move-result-object v1

    invoke-virtual {v1}, Lcom/bianfeng/splitscreenlib/YmnH5GameSdk;->finishGame()V

    const v1, 0xde2bb

    .line 98
    invoke-virtual {p0, v1, v0}, Lcom/bianfeng/gameloggyforweb/GameLoggyForWebInterface;->sendResult(ILjava/lang/String;)V

    return-void
.end method

.method public gameStart()V
    .locals 2
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "h5game_enter_game"
    .end annotation

    const-string v0, "\u8fdb\u5165\u6e38\u620f"

    .line 89
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 90
    invoke-static {}, Lcom/bianfeng/splitscreenlib/YmnH5GameSdk;->getInstance()Lcom/bianfeng/splitscreenlib/YmnH5GameSdk;

    move-result-object v1

    invoke-virtual {v1}, Lcom/bianfeng/splitscreenlib/YmnH5GameSdk;->enterGame()V

    const v1, 0xde2ba

    .line 91
    invoke-virtual {p0, v1, v0}, Lcom/bianfeng/gameloggyforweb/GameLoggyForWebInterface;->sendResult(ILjava/lang/String;)V

    return-void
.end method

.method public getPluginId()Ljava/lang/String;
    .locals 1

    const-string v0, "134"

    return-object v0
.end method

.method public getPluginName()Ljava/lang/String;
    .locals 1

    const-string v0, "gameloggyforweb"

    return-object v0
.end method

.method public getPluginVersion()I
    .locals 1

    const/4 v0, 0x3

    return v0
.end method

.method public getSdkVersion()Ljava/lang/String;
    .locals 1

    const-string v0, "4.3.0"

    return-object v0
.end method

.method public onCreate(Landroid/app/Activity;)V
    .locals 1

    .line 67
    invoke-super {p0, p1}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->onCreate(Landroid/app/Activity;)V

    const/4 p1, 0x1

    .line 68
    invoke-static {p1}, Lcom/bianfeng/ymnsdk/utilslib/log/UtilsLogger;->setDebugLog(Z)V

    const-string p1, "\u8c03\u5230web\u5927\u5385\u4e86 onCreate"

    .line 69
    invoke-static {p1}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 70
    invoke-static {}, Lcom/bianfeng/splitscreenlib/YmnH5GameSdk;->getInstance()Lcom/bianfeng/splitscreenlib/YmnH5GameSdk;

    move-result-object p1

    invoke-virtual {p0}, Lcom/bianfeng/gameloggyforweb/GameLoggyForWebInterface;->getActivity()Landroid/app/Activity;

    move-result-object v0

    invoke-virtual {p1, v0}, Lcom/bianfeng/splitscreenlib/YmnH5GameSdk;->onCreate(Landroid/app/Activity;)V

    return-void
.end method

.method public onDestroy()V
    .locals 1

    .line 165
    invoke-super {p0}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->onDestroy()V

    .line 166
    invoke-static {}, Lcom/bianfeng/splitscreenlib/YmnH5GameSdk;->getInstance()Lcom/bianfeng/splitscreenlib/YmnH5GameSdk;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/splitscreenlib/YmnH5GameSdk;->onDestory()V

    return-void
.end method

.method public onInit(Landroid/content/Context;)V
    .locals 1

    .line 61
    invoke-super {p0, p1}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->onInit(Landroid/content/Context;)V

    .line 62
    invoke-static {}, Lcom/bianfeng/splitscreenlib/YmnH5GameSdk;->getInstance()Lcom/bianfeng/splitscreenlib/YmnH5GameSdk;

    move-result-object p1

    invoke-virtual {p0}, Lcom/bianfeng/gameloggyforweb/GameLoggyForWebInterface;->getActivity()Landroid/app/Activity;

    move-result-object v0

    invoke-virtual {p1, v0}, Lcom/bianfeng/splitscreenlib/YmnH5GameSdk;->onCreate(Landroid/app/Activity;)V

    return-void
.end method

.method public onResume()V
    .locals 1

    .line 171
    invoke-super {p0}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->onResume()V

    const-string v0, "onResume"

    .line 172
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 174
    invoke-static {}, Lcom/bianfeng/splitscreenlib/YmnH5GameSdk;->getInstance()Lcom/bianfeng/splitscreenlib/YmnH5GameSdk;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/splitscreenlib/YmnH5GameSdk;->onResume()V

    return-void
.end method

.method public onWindowFocusChanged(ZLandroid/app/Activity;)V
    .locals 1

    .line 179
    invoke-super {p0, p1, p2}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->onWindowFocusChanged(ZLandroid/app/Activity;)V

    .line 180
    invoke-static {}, Lcom/bianfeng/splitscreenlib/YmnH5GameSdk;->getInstance()Lcom/bianfeng/splitscreenlib/YmnH5GameSdk;

    move-result-object v0

    invoke-virtual {v0, p1, p2}, Lcom/bianfeng/splitscreenlib/YmnH5GameSdk;->onWindowFocusChanged(ZLandroid/app/Activity;)V

    return-void
.end method

.method public startGameLogin(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 10
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "start_game_login"
    .end annotation

    const-string v0, "\u70b9\u51fb\u5355\u6b3e\u4e86"

    .line 82
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 84
    invoke-static {}, Lcom/bianfeng/splitscreenlib/YmnH5GameSdk;->getInstance()Lcom/bianfeng/splitscreenlib/YmnH5GameSdk;

    move-result-object v1

    move-object v0, p0

    iget-object v9, v0, Lcom/bianfeng/gameloggyforweb/GameLoggyForWebInterface;->callback:Lcom/bianfeng/splitscreenlib/YmnH5Callback;

    move-object v2, p1

    move-object v3, p2

    move-object v4, p3

    move-object v5, p4

    move-object v6, p5

    move-object/from16 v7, p6

    move-object/from16 v8, p7

    invoke-virtual/range {v1 .. v9}, Lcom/bianfeng/splitscreenlib/YmnH5GameSdk;->startGameLogin(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/bianfeng/splitscreenlib/YmnH5Callback;)V

    return-void
.end method

.method public startGameRoom(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 9
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "start_game_room"
    .end annotation

    .line 75
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "\u8c03\u5230web\u5927\u5385\u4e86"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 77
    invoke-static {}, Lcom/bianfeng/splitscreenlib/YmnH5GameSdk;->getInstance()Lcom/bianfeng/splitscreenlib/YmnH5GameSdk;

    move-result-object v1

    iget-object v8, p0, Lcom/bianfeng/gameloggyforweb/GameLoggyForWebInterface;->callback:Lcom/bianfeng/splitscreenlib/YmnH5Callback;

    move-object v2, p1

    move-object v3, p2

    move-object v4, p3

    move-object v5, p4

    move-object v6, p5

    move-object v7, p6

    invoke-virtual/range {v1 .. v8}, Lcom/bianfeng/splitscreenlib/YmnH5GameSdk;->startGameRoomWeb(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/bianfeng/splitscreenlib/YmnH5Callback;)V

    return-void
.end method
