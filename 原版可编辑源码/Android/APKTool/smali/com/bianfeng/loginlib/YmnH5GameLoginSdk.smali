.class public Lcom/bianfeng/loginlib/YmnH5GameLoginSdk;
.super Ljava/lang/Object;
.source "YmnH5GameLoginSdk.java"


# static fields
.field private static ymnH5GameSdk:Lcom/bianfeng/loginlib/YmnH5GameLoginSdk;


# instance fields
.field private activity:Landroid/app/Activity;

.field private loginCallBack:Lcom/bianfeng/loginlib/YmnH5LoginCallBack;

.field private map:Ljava/util/TreeMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/TreeMap<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method private constructor <init>()V
    .locals 0

    .line 14
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static getInstance()Lcom/bianfeng/loginlib/YmnH5GameLoginSdk;
    .locals 2

    .line 24
    sget-object v0, Lcom/bianfeng/loginlib/YmnH5GameLoginSdk;->ymnH5GameSdk:Lcom/bianfeng/loginlib/YmnH5GameLoginSdk;

    if-nez v0, :cond_1

    .line 25
    const-class v0, Lcom/bianfeng/loginlib/YmnH5GameLoginSdk;

    monitor-enter v0

    .line 26
    :try_start_0
    sget-object v1, Lcom/bianfeng/loginlib/YmnH5GameLoginSdk;->ymnH5GameSdk:Lcom/bianfeng/loginlib/YmnH5GameLoginSdk;

    if-nez v1, :cond_0

    .line 27
    new-instance v1, Lcom/bianfeng/loginlib/YmnH5GameLoginSdk;

    invoke-direct {v1}, Lcom/bianfeng/loginlib/YmnH5GameLoginSdk;-><init>()V

    sput-object v1, Lcom/bianfeng/loginlib/YmnH5GameLoginSdk;->ymnH5GameSdk:Lcom/bianfeng/loginlib/YmnH5GameLoginSdk;

    .line 29
    :cond_0
    monitor-exit v0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1

    .line 31
    :cond_1
    :goto_0
    sget-object v0, Lcom/bianfeng/loginlib/YmnH5GameLoginSdk;->ymnH5GameSdk:Lcom/bianfeng/loginlib/YmnH5GameLoginSdk;

    return-object v0
.end method

.method private loginStart(Ljava/util/TreeMap;)V
    .locals 5
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/TreeMap<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    .line 86
    invoke-static {}, Lcom/bianfeng/thridlibrary/ThridSdk;->getYmnDatafun()Lcom/bianfeng/thridlibrary/datafun/YmnDatafunUtils;

    move-result-object v0

    const-string v1, "userid"

    invoke-virtual {p1, v1}, Ljava/util/TreeMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    const-string v2, "gameid"

    invoke-virtual {p1, v2}, Ljava/util/TreeMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    .line 87
    invoke-static {}, Lcom/bianfeng/loginlib/utils/YmnLoginUtils;->getInstance()Lcom/bianfeng/loginlib/utils/YmnLoginUtils;

    move-result-object v3

    const-string v4, "ext"

    invoke-virtual {p1, v4}, Ljava/util/TreeMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/lang/String;

    invoke-virtual {v3, v4}, Lcom/bianfeng/loginlib/utils/YmnLoginUtils;->getCpFromExt(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    .line 86
    invoke-virtual {v0, v1, v2, v3}, Lcom/bianfeng/thridlibrary/datafun/YmnDatafunUtils;->onClickWithSingle(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    .line 88
    iget-object v0, p0, Lcom/bianfeng/loginlib/YmnH5GameLoginSdk;->activity:Landroid/app/Activity;

    invoke-static {v0, p1}, Lcom/bianfeng/loginlib/ui/LoginRequest;->start(Landroid/app/Activity;Ljava/util/TreeMap;)V

    return-void
.end method


# virtual methods
.method public endPay()V
    .locals 1

    .line 100
    invoke-static {}, Lcom/bianfeng/splitscreenwindow/SplitScreenSdk;->getInstance()Lcom/bianfeng/splitscreenwindow/SplitScreenSdk;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/splitscreenwindow/SplitScreenSdk;->endPay()V

    return-void
.end method

.method public getCallback()Lcom/bianfeng/loginlib/YmnH5LoginCallBack;
    .locals 2

    .line 60
    iget-object v0, p0, Lcom/bianfeng/loginlib/YmnH5GameLoginSdk;->loginCallBack:Lcom/bianfeng/loginlib/YmnH5LoginCallBack;

    if-eqz v0, :cond_0

    return-object v0

    .line 63
    :cond_0
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getLogger()Lcom/bianfeng/utilslib/Logger;

    move-result-object v0

    const-string v1, "YmnH5LoginCallBack \u5bf9\u8c61\u4e3anull"

    invoke-virtual {v0, v1}, Lcom/bianfeng/utilslib/Logger;->i(Ljava/lang/String;)I

    const/4 v0, 0x0

    return-object v0
.end method

.method public onDestory()V
    .locals 1

    .line 92
    invoke-static {}, Lcom/bianfeng/splitscreenwindow/SplitScreenSdk;->getInstance()Lcom/bianfeng/splitscreenwindow/SplitScreenSdk;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/splitscreenwindow/SplitScreenSdk;->onDestory()V

    return-void
.end method

.method public onWindowFocusChanged(ZLandroid/app/Activity;)V
    .locals 1

    .line 96
    invoke-static {}, Lcom/bianfeng/splitscreenwindow/SplitScreenSdk;->getInstance()Lcom/bianfeng/splitscreenwindow/SplitScreenSdk;

    move-result-object v0

    invoke-virtual {v0, p1, p2}, Lcom/bianfeng/splitscreenwindow/SplitScreenSdk;->onWindowFocusChanged(ZLandroid/app/Activity;)V

    return-void
.end method

.method public setCallback(Lcom/bianfeng/loginlib/YmnH5LoginCallBack;)Lcom/bianfeng/loginlib/YmnH5GameLoginSdk;
    .locals 0

    .line 35
    iput-object p1, p0, Lcom/bianfeng/loginlib/YmnH5GameLoginSdk;->loginCallBack:Lcom/bianfeng/loginlib/YmnH5LoginCallBack;

    return-object p0
.end method

.method public startGame(Landroid/app/Activity;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 2

    .line 44
    iput-object p1, p0, Lcom/bianfeng/loginlib/YmnH5GameLoginSdk;->activity:Landroid/app/Activity;

    .line 45
    new-instance v0, Ljava/util/TreeMap;

    invoke-direct {v0}, Ljava/util/TreeMap;-><init>()V

    iput-object v0, p0, Lcom/bianfeng/loginlib/YmnH5GameLoginSdk;->map:Ljava/util/TreeMap;

    const-string v1, "gameid"

    .line 46
    invoke-virtual {v0, v1, p2}, Ljava/util/TreeMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 47
    iget-object p2, p0, Lcom/bianfeng/loginlib/YmnH5GameLoginSdk;->map:Ljava/util/TreeMap;

    const-string v0, "userid"

    invoke-virtual {p2, v0, p3}, Ljava/util/TreeMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 48
    iget-object p2, p0, Lcom/bianfeng/loginlib/YmnH5GameLoginSdk;->map:Ljava/util/TreeMap;

    const-string p3, "nickname"

    invoke-virtual {p2, p3, p4}, Ljava/util/TreeMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 49
    iget-object p2, p0, Lcom/bianfeng/loginlib/YmnH5GameLoginSdk;->map:Ljava/util/TreeMap;

    const-string p3, "sex"

    invoke-virtual {p2, p3, p5}, Ljava/util/TreeMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 50
    iget-object p2, p0, Lcom/bianfeng/loginlib/YmnH5GameLoginSdk;->map:Ljava/util/TreeMap;

    const-string p3, "avatar"

    invoke-virtual {p2, p3, p6}, Ljava/util/TreeMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 51
    iget-object p2, p0, Lcom/bianfeng/loginlib/YmnH5GameLoginSdk;->map:Ljava/util/TreeMap;

    const-string p3, "ext"

    invoke-virtual {p2, p3, p8}, Ljava/util/TreeMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 52
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getAppConfig()Lcom/bianfeng/utilslib/AppConfigUtils;

    move-result-object p2

    invoke-virtual {p2, p8}, Lcom/bianfeng/utilslib/AppConfigUtils;->setExt(Ljava/lang/String;)V

    .line 53
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getAppConfig()Lcom/bianfeng/utilslib/AppConfigUtils;

    move-result-object p2

    const-string p3, ""

    invoke-virtual {p2, p3}, Lcom/bianfeng/utilslib/AppConfigUtils;->setCp(Ljava/lang/String;)V

    .line 54
    invoke-static {}, Lcom/bianfeng/loginlib/utils/YmnLoginUtils;->getInstance()Lcom/bianfeng/loginlib/utils/YmnLoginUtils;

    move-result-object p2

    invoke-virtual {p2, p8}, Lcom/bianfeng/loginlib/utils/YmnLoginUtils;->setDirection(Ljava/lang/String;)V

    .line 55
    invoke-static {}, Lcom/bianfeng/splitscreenwindow/SplitScreenSdk;->getInstance()Lcom/bianfeng/splitscreenwindow/SplitScreenSdk;

    move-result-object p2

    invoke-static {}, Lcom/bianfeng/loginlib/utils/YmnLoginUtils;->getInstance()Lcom/bianfeng/loginlib/utils/YmnLoginUtils;

    move-result-object p3

    invoke-virtual {p3}, Lcom/bianfeng/loginlib/utils/YmnLoginUtils;->getDirection()Lcom/bianfeng/splitscreenwindow/ShowType;

    move-result-object p3

    invoke-virtual {p2, p1, p7, p3}, Lcom/bianfeng/splitscreenwindow/SplitScreenSdk;->init(Landroid/app/Activity;Ljava/lang/String;Lcom/bianfeng/splitscreenwindow/ShowType;)V

    .line 56
    iget-object p1, p0, Lcom/bianfeng/loginlib/YmnH5GameLoginSdk;->map:Ljava/util/TreeMap;

    invoke-direct {p0, p1}, Lcom/bianfeng/loginlib/YmnH5GameLoginSdk;->loginStart(Ljava/util/TreeMap;)V

    return-void
.end method

.method public startGame(Ljava/lang/String;Ljava/lang/String;II)V
    .locals 2

    .line 79
    iget-object v0, p0, Lcom/bianfeng/loginlib/YmnH5GameLoginSdk;->map:Ljava/util/TreeMap;

    const-string v1, "gameid"

    invoke-virtual {v0, v1, p1}, Ljava/util/TreeMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 80
    invoke-static {}, Lcom/bianfeng/loginlib/utils/YmnLoginUtils;->getInstance()Lcom/bianfeng/loginlib/utils/YmnLoginUtils;

    move-result-object p1

    invoke-virtual {p1, p3, p4}, Lcom/bianfeng/loginlib/utils/YmnLoginUtils;->setDirection(II)V

    .line 81
    invoke-static {}, Lcom/bianfeng/splitscreenwindow/SplitScreenSdk;->getInstance()Lcom/bianfeng/splitscreenwindow/SplitScreenSdk;

    move-result-object p1

    iget-object p3, p0, Lcom/bianfeng/loginlib/YmnH5GameLoginSdk;->activity:Landroid/app/Activity;

    invoke-static {}, Lcom/bianfeng/loginlib/utils/YmnLoginUtils;->getInstance()Lcom/bianfeng/loginlib/utils/YmnLoginUtils;

    move-result-object p4

    invoke-virtual {p4}, Lcom/bianfeng/loginlib/utils/YmnLoginUtils;->getDirection()Lcom/bianfeng/splitscreenwindow/ShowType;

    move-result-object p4

    invoke-virtual {p1, p3, p2, p4}, Lcom/bianfeng/splitscreenwindow/SplitScreenSdk;->init(Landroid/app/Activity;Ljava/lang/String;Lcom/bianfeng/splitscreenwindow/ShowType;)V

    .line 82
    iget-object p1, p0, Lcom/bianfeng/loginlib/YmnH5GameLoginSdk;->map:Ljava/util/TreeMap;

    invoke-direct {p0, p1}, Lcom/bianfeng/loginlib/YmnH5GameLoginSdk;->loginStart(Ljava/util/TreeMap;)V

    return-void
.end method

.method public startRoom(Landroid/app/Activity;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    .line 69
    new-instance v0, Ljava/util/TreeMap;

    invoke-direct {v0}, Ljava/util/TreeMap;-><init>()V

    iput-object v0, p0, Lcom/bianfeng/loginlib/YmnH5GameLoginSdk;->map:Ljava/util/TreeMap;

    .line 70
    iput-object p1, p0, Lcom/bianfeng/loginlib/YmnH5GameLoginSdk;->activity:Landroid/app/Activity;

    const-string p1, "userid"

    .line 71
    invoke-virtual {v0, p1, p3}, Ljava/util/TreeMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 72
    iget-object p1, p0, Lcom/bianfeng/loginlib/YmnH5GameLoginSdk;->map:Ljava/util/TreeMap;

    const-string p3, "nickname"

    invoke-virtual {p1, p3, p4}, Ljava/util/TreeMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 73
    iget-object p1, p0, Lcom/bianfeng/loginlib/YmnH5GameLoginSdk;->map:Ljava/util/TreeMap;

    const-string p3, "sex"

    invoke-virtual {p1, p3, p5}, Ljava/util/TreeMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 74
    iget-object p1, p0, Lcom/bianfeng/loginlib/YmnH5GameLoginSdk;->map:Ljava/util/TreeMap;

    const-string p3, "avatar"

    invoke-virtual {p1, p3, p6}, Ljava/util/TreeMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 75
    iget-object p1, p0, Lcom/bianfeng/loginlib/YmnH5GameLoginSdk;->map:Ljava/util/TreeMap;

    invoke-static {}, Lcom/bianfeng/loginlib/utils/YmnLoginUtils;->getInstance()Lcom/bianfeng/loginlib/utils/YmnLoginUtils;

    move-result-object p3

    invoke-virtual {p3, p7, p2}, Lcom/bianfeng/loginlib/utils/YmnLoginUtils;->getExt(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    const-string p3, "ext"

    invoke-virtual {p1, p3, p2}, Ljava/util/TreeMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    return-void
.end method
