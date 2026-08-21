.class public Lcom/bianfeng/roomlib/YmnH5GameRoomSdk;
.super Ljava/lang/Object;
.source "YmnH5GameRoomSdk.java"


# static fields
.field private static ymnH5GameRoomSdk:Lcom/bianfeng/roomlib/YmnH5GameRoomSdk;


# instance fields
.field private callback:Lcom/bianfeng/roomlib/YmnH5GameRoomCallback;


# direct methods
.method private constructor <init>()V
    .locals 0

    .line 15
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static getInstance()Lcom/bianfeng/roomlib/YmnH5GameRoomSdk;
    .locals 2

    .line 21
    sget-object v0, Lcom/bianfeng/roomlib/YmnH5GameRoomSdk;->ymnH5GameRoomSdk:Lcom/bianfeng/roomlib/YmnH5GameRoomSdk;

    if-nez v0, :cond_1

    .line 22
    const-class v0, Lcom/bianfeng/roomlib/YmnH5GameRoomSdk;

    monitor-enter v0

    .line 23
    :try_start_0
    sget-object v1, Lcom/bianfeng/roomlib/YmnH5GameRoomSdk;->ymnH5GameRoomSdk:Lcom/bianfeng/roomlib/YmnH5GameRoomSdk;

    if-nez v1, :cond_0

    .line 24
    new-instance v1, Lcom/bianfeng/roomlib/YmnH5GameRoomSdk;

    invoke-direct {v1}, Lcom/bianfeng/roomlib/YmnH5GameRoomSdk;-><init>()V

    sput-object v1, Lcom/bianfeng/roomlib/YmnH5GameRoomSdk;->ymnH5GameRoomSdk:Lcom/bianfeng/roomlib/YmnH5GameRoomSdk;

    .line 26
    :cond_0
    monitor-exit v0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1

    .line 28
    :cond_1
    :goto_0
    sget-object v0, Lcom/bianfeng/roomlib/YmnH5GameRoomSdk;->ymnH5GameRoomSdk:Lcom/bianfeng/roomlib/YmnH5GameRoomSdk;

    return-object v0
.end method


# virtual methods
.method public getCallback()Lcom/bianfeng/roomlib/YmnH5GameRoomCallback;
    .locals 2

    .line 46
    iget-object v0, p0, Lcom/bianfeng/roomlib/YmnH5GameRoomSdk;->callback:Lcom/bianfeng/roomlib/YmnH5GameRoomCallback;

    if-eqz v0, :cond_0

    return-object v0

    .line 49
    :cond_0
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getLogger()Lcom/bianfeng/utilslib/Logger;

    move-result-object v0

    const-string v1, "YmnH5LoginCallBack \u5bf9\u8c61\u4e3anull"

    invoke-virtual {v0, v1}, Lcom/bianfeng/utilslib/Logger;->i(Ljava/lang/String;)I

    const/4 v0, 0x0

    return-object v0
.end method

.method public setCallback(Lcom/bianfeng/roomlib/YmnH5GameRoomCallback;)Lcom/bianfeng/roomlib/YmnH5GameRoomSdk;
    .locals 0

    .line 41
    iput-object p1, p0, Lcom/bianfeng/roomlib/YmnH5GameRoomSdk;->callback:Lcom/bianfeng/roomlib/YmnH5GameRoomCallback;

    return-object p0
.end method

.method public startGameRoomWeb(Landroid/app/Activity;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 0

    .line 34
    invoke-static {p2, p7}, Lcom/bianfeng/roomlib/utils/YmnH5GameRoomUtils;->getData(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p4

    .line 35
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getAppConfig()Lcom/bianfeng/utilslib/AppConfigUtils;

    move-result-object p5

    invoke-virtual {p5, p7}, Lcom/bianfeng/utilslib/AppConfigUtils;->setExt(Ljava/lang/String;)V

    .line 36
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getAppConfig()Lcom/bianfeng/utilslib/AppConfigUtils;

    move-result-object p5

    invoke-virtual {p5, p2}, Lcom/bianfeng/utilslib/AppConfigUtils;->setCp(Ljava/lang/String;)V

    .line 37
    invoke-static {p1, p4, p2, p3}, Lcom/bianfeng/roomlib/ui/GameRoomWebActivity;->start(Landroid/app/Activity;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method
