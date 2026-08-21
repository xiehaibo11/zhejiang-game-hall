.class public Lcom/bianfeng/splitscreenlib/YmnH5GameSdk;
.super Ljava/lang/Object;
.source "YmnH5GameSdk.java"


# static fields
.field private static ymnH5GameSdk:Lcom/bianfeng/splitscreenlib/YmnH5GameSdk;


# instance fields
.field private activity:Landroid/app/Activity;

.field private callback:Lcom/bianfeng/splitscreenlib/YmnH5Callback;

.field private isInitPostEvent:Z


# direct methods
.method private constructor <init>()V
    .locals 1

    .line 14
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    .line 33
    iput-boolean v0, p0, Lcom/bianfeng/splitscreenlib/YmnH5GameSdk;->isInitPostEvent:Z

    return-void
.end method

.method public static getInstance()Lcom/bianfeng/splitscreenlib/YmnH5GameSdk;
    .locals 2

    .line 18
    sget-object v0, Lcom/bianfeng/splitscreenlib/YmnH5GameSdk;->ymnH5GameSdk:Lcom/bianfeng/splitscreenlib/YmnH5GameSdk;

    if-nez v0, :cond_1

    .line 19
    const-class v0, Lcom/bianfeng/splitscreenlib/YmnH5GameSdk;

    monitor-enter v0

    .line 20
    :try_start_0
    sget-object v1, Lcom/bianfeng/splitscreenlib/YmnH5GameSdk;->ymnH5GameSdk:Lcom/bianfeng/splitscreenlib/YmnH5GameSdk;

    if-nez v1, :cond_0

    .line 21
    new-instance v1, Lcom/bianfeng/splitscreenlib/YmnH5GameSdk;

    invoke-direct {v1}, Lcom/bianfeng/splitscreenlib/YmnH5GameSdk;-><init>()V

    sput-object v1, Lcom/bianfeng/splitscreenlib/YmnH5GameSdk;->ymnH5GameSdk:Lcom/bianfeng/splitscreenlib/YmnH5GameSdk;

    .line 23
    :cond_0
    monitor-exit v0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1

    .line 25
    :cond_1
    :goto_0
    sget-object v0, Lcom/bianfeng/splitscreenlib/YmnH5GameSdk;->ymnH5GameSdk:Lcom/bianfeng/splitscreenlib/YmnH5GameSdk;

    return-object v0
.end method

.method private initPostEvent(Landroid/app/Activity;)V
    .locals 2

    .line 57
    iget-boolean v0, p0, Lcom/bianfeng/splitscreenlib/YmnH5GameSdk;->isInitPostEvent:Z

    if-nez v0, :cond_0

    .line 58
    iput-object p1, p0, Lcom/bianfeng/splitscreenlib/YmnH5GameSdk;->activity:Landroid/app/Activity;

    const/4 v0, 0x1

    .line 59
    iput-boolean v0, p0, Lcom/bianfeng/splitscreenlib/YmnH5GameSdk;->isInitPostEvent:Z

    .line 60
    invoke-static {p1}, Lcom/bianfeng/utilslib/UtilsSdk;->init(Landroid/app/Activity;)V

    .line 61
    invoke-static {p1}, Lcom/bianfeng/thridlibrary/ThridSdk;->init(Landroid/app/Activity;)V

    .line 62
    invoke-static {}, Lcom/bianfeng/roomlib/YmnH5GameRoomSdk;->getInstance()Lcom/bianfeng/roomlib/YmnH5GameRoomSdk;

    move-result-object v0

    new-instance v1, Lcom/bianfeng/splitscreenlib/gameroom/YmnGoomCallback;

    invoke-direct {v1}, Lcom/bianfeng/splitscreenlib/gameroom/YmnGoomCallback;-><init>()V

    invoke-virtual {v0, v1}, Lcom/bianfeng/roomlib/YmnH5GameRoomSdk;->setCallback(Lcom/bianfeng/roomlib/YmnH5GameRoomCallback;)Lcom/bianfeng/roomlib/YmnH5GameRoomSdk;

    .line 63
    invoke-static {}, Lcom/bianfeng/paylib/YmnWebpaySdk;->getInstance()Lcom/bianfeng/paylib/YmnWebpaySdk;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/bianfeng/paylib/YmnWebpaySdk;->init(Landroid/app/Activity;)V

    :cond_0
    return-void
.end method


# virtual methods
.method public enterGame()V
    .locals 3

    .line 111
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getSharedPreferences()Lcom/bianfeng/utilslib/SharedPreferencesUtils;

    move-result-object v0

    const-string v1, "enterGame"

    const/4 v2, 0x1

    invoke-virtual {v0, v1, v2}, Lcom/bianfeng/utilslib/SharedPreferencesUtils;->putBoolean(Ljava/lang/String;Z)V

    return-void
.end method

.method public finishGame()V
    .locals 3

    .line 118
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getSharedPreferences()Lcom/bianfeng/utilslib/SharedPreferencesUtils;

    move-result-object v0

    const-string v1, "enterGame"

    const/4 v2, 0x0

    invoke-virtual {v0, v1, v2}, Lcom/bianfeng/utilslib/SharedPreferencesUtils;->putBoolean(Ljava/lang/String;Z)V

    return-void
.end method

.method public getCallback()Lcom/bianfeng/splitscreenlib/YmnH5Callback;
    .locals 1

    .line 31
    iget-object v0, p0, Lcom/bianfeng/splitscreenlib/YmnH5GameSdk;->callback:Lcom/bianfeng/splitscreenlib/YmnH5Callback;

    return-object v0
.end method

.method public onCreate(Landroid/app/Activity;)V
    .locals 0

    .line 87
    invoke-direct {p0, p1}, Lcom/bianfeng/splitscreenlib/YmnH5GameSdk;->initPostEvent(Landroid/app/Activity;)V

    .line 88
    invoke-static {p1}, Lcom/bianfeng/utilslib/UtilsSdk;->onCreate(Landroid/app/Activity;)V

    return-void
.end method

.method public onDestory()V
    .locals 3

    .line 96
    invoke-static {}, Lcom/bianfeng/thridlibrary/ThridSdk;->onDestory()V

    .line 97
    invoke-static {}, Lcom/bianfeng/loginlib/YmnH5GameLoginSdk;->getInstance()Lcom/bianfeng/loginlib/YmnH5GameLoginSdk;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/loginlib/YmnH5GameLoginSdk;->onDestory()V

    .line 98
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getSharedPreferences()Lcom/bianfeng/utilslib/SharedPreferencesUtils;

    move-result-object v0

    const-string v1, "enterGame"

    const/4 v2, 0x0

    invoke-virtual {v0, v1, v2}, Lcom/bianfeng/utilslib/SharedPreferencesUtils;->putBoolean(Ljava/lang/String;Z)V

    return-void
.end method

.method public onResume()V
    .locals 0

    .line 92
    invoke-static {}, Lcom/bianfeng/thridlibrary/ThridSdk;->onResume()V

    return-void
.end method

.method public onWindowFocusChanged(ZLandroid/app/Activity;)V
    .locals 1

    .line 102
    iput-object p2, p0, Lcom/bianfeng/splitscreenlib/YmnH5GameSdk;->activity:Landroid/app/Activity;

    .line 103
    invoke-static {}, Lcom/bianfeng/loginlib/YmnH5GameLoginSdk;->getInstance()Lcom/bianfeng/loginlib/YmnH5GameLoginSdk;

    move-result-object v0

    invoke-virtual {v0, p1, p2}, Lcom/bianfeng/loginlib/YmnH5GameLoginSdk;->onWindowFocusChanged(ZLandroid/app/Activity;)V

    .line 104
    invoke-static {p1, p2}, Lcom/bianfeng/utilslib/UtilsSdk;->onWindowFocusChanged(ZLandroid/app/Activity;)V

    return-void
.end method

.method public startGameLogin(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/bianfeng/splitscreenlib/YmnH5Callback;)V
    .locals 12

    move-object v0, p0

    move-object/from16 v1, p8

    .line 80
    iput-object v1, v0, Lcom/bianfeng/splitscreenlib/YmnH5GameSdk;->callback:Lcom/bianfeng/splitscreenlib/YmnH5Callback;

    .line 81
    invoke-static {}, Lcom/bianfeng/loginlib/YmnH5GameLoginSdk;->getInstance()Lcom/bianfeng/loginlib/YmnH5GameLoginSdk;

    move-result-object v1

    new-instance v2, Lcom/bianfeng/splitscreenlib/login/YmnLoginCallBack;

    invoke-direct {v2}, Lcom/bianfeng/splitscreenlib/login/YmnLoginCallBack;-><init>()V

    .line 82
    invoke-virtual {v1, v2}, Lcom/bianfeng/loginlib/YmnH5GameLoginSdk;->setCallback(Lcom/bianfeng/loginlib/YmnH5LoginCallBack;)Lcom/bianfeng/loginlib/YmnH5GameLoginSdk;

    move-result-object v3

    iget-object v4, v0, Lcom/bianfeng/splitscreenlib/YmnH5GameSdk;->activity:Landroid/app/Activity;

    move-object v5, p1

    move-object v6, p2

    move-object v7, p3

    move-object/from16 v8, p4

    move-object/from16 v9, p5

    move-object/from16 v10, p6

    move-object/from16 v11, p7

    .line 83
    invoke-virtual/range {v3 .. v11}, Lcom/bianfeng/loginlib/YmnH5GameLoginSdk;->startGame(Landroid/app/Activity;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public startGameRoomWeb(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/bianfeng/splitscreenlib/YmnH5Callback;)V
    .locals 12

    move-object v0, p0

    .line 46
    iget-object v1, v0, Lcom/bianfeng/splitscreenlib/YmnH5GameSdk;->activity:Landroid/app/Activity;

    invoke-static {v1}, Lcom/bianfeng/splitscreenlib/utils/YmnH5GameUtils;->checkOnCreat(Landroid/app/Activity;)V

    move-object/from16 v1, p7

    .line 47
    iput-object v1, v0, Lcom/bianfeng/splitscreenlib/YmnH5GameSdk;->callback:Lcom/bianfeng/splitscreenlib/YmnH5Callback;

    .line 48
    invoke-static {}, Lcom/bianfeng/thridlibrary/ThridSdk;->getYmnDatafun()Lcom/bianfeng/thridlibrary/datafun/YmnDatafunUtils;

    move-result-object v1

    move-object v10, p1

    move-object v11, p2

    invoke-virtual {v1, p2, p1}, Lcom/bianfeng/thridlibrary/datafun/YmnDatafunUtils;->onClickWithRoom(Ljava/lang/String;Ljava/lang/String;)V

    .line 49
    invoke-static {}, Lcom/bianfeng/loginlib/YmnH5GameLoginSdk;->getInstance()Lcom/bianfeng/loginlib/YmnH5GameLoginSdk;

    move-result-object v1

    new-instance v2, Lcom/bianfeng/splitscreenlib/login/YmnLoginCallBack;

    invoke-direct {v2}, Lcom/bianfeng/splitscreenlib/login/YmnLoginCallBack;-><init>()V

    invoke-virtual {v1, v2}, Lcom/bianfeng/loginlib/YmnH5GameLoginSdk;->setCallback(Lcom/bianfeng/loginlib/YmnH5LoginCallBack;)Lcom/bianfeng/loginlib/YmnH5GameLoginSdk;

    move-result-object v2

    iget-object v3, v0, Lcom/bianfeng/splitscreenlib/YmnH5GameSdk;->activity:Landroid/app/Activity;

    move-object v4, p1

    move-object v5, p2

    move-object v6, p3

    move-object/from16 v7, p4

    move-object/from16 v8, p5

    move-object/from16 v9, p6

    invoke-virtual/range {v2 .. v9}, Lcom/bianfeng/loginlib/YmnH5GameLoginSdk;->startRoom(Landroid/app/Activity;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    .line 50
    invoke-static {}, Lcom/bianfeng/roomlib/YmnH5GameRoomSdk;->getInstance()Lcom/bianfeng/roomlib/YmnH5GameRoomSdk;

    move-result-object v2

    iget-object v3, v0, Lcom/bianfeng/splitscreenlib/YmnH5GameSdk;->activity:Landroid/app/Activity;

    invoke-virtual/range {v2 .. v9}, Lcom/bianfeng/roomlib/YmnH5GameRoomSdk;->startGameRoomWeb(Landroid/app/Activity;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method
