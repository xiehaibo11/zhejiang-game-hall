.class public Lcom/bianfeng/h5library/H5EventUtils;
.super Ljava/lang/Object;
.source "H5EventUtils.java"


# static fields
.field private static volatile event:Lcom/bianfeng/h5library/H5EventUtils;


# instance fields
.field private channelName:Ljava/lang/String;

.field private eventUrl:Ljava/lang/String;

.field private responseData:Lcom/bianfeng/datafunsdk/net/ResponseData;

.field private userid:Ljava/lang/String;


# direct methods
.method private constructor <init>()V
    .locals 4

    .line 22
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const-string v0, "https://bfas.bianfeng.com/bfrd/json?charset=utf-8"

    .line 12
    iput-object v0, p0, Lcom/bianfeng/h5library/H5EventUtils;->eventUrl:Ljava/lang/String;

    .line 14
    new-instance v0, Lcom/bianfeng/datafunsdk/net/ResponseData;

    const-string v1, "result"

    const-string v2, ""

    const/4 v3, 0x0

    invoke-direct {v0, v1, v2, v3}, Lcom/bianfeng/datafunsdk/net/ResponseData;-><init>(Ljava/lang/String;Ljava/lang/String;I)V

    iput-object v0, p0, Lcom/bianfeng/h5library/H5EventUtils;->responseData:Lcom/bianfeng/datafunsdk/net/ResponseData;

    .line 15
    iput-object v2, p0, Lcom/bianfeng/h5library/H5EventUtils;->userid:Ljava/lang/String;

    return-void
.end method

.method public static getInstance()Lcom/bianfeng/h5library/H5EventUtils;
    .locals 2

    .line 26
    sget-object v0, Lcom/bianfeng/h5library/H5EventUtils;->event:Lcom/bianfeng/h5library/H5EventUtils;

    if-nez v0, :cond_1

    .line 27
    const-class v0, Lcom/bianfeng/h5library/H5EventUtils;

    monitor-enter v0

    .line 28
    :try_start_0
    sget-object v1, Lcom/bianfeng/h5library/H5EventUtils;->event:Lcom/bianfeng/h5library/H5EventUtils;

    if-nez v1, :cond_0

    .line 29
    new-instance v1, Lcom/bianfeng/h5library/H5EventUtils;

    invoke-direct {v1}, Lcom/bianfeng/h5library/H5EventUtils;-><init>()V

    sput-object v1, Lcom/bianfeng/h5library/H5EventUtils;->event:Lcom/bianfeng/h5library/H5EventUtils;

    .line 31
    :cond_0
    monitor-exit v0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1

    .line 33
    :cond_1
    :goto_0
    sget-object v0, Lcom/bianfeng/h5library/H5EventUtils;->event:Lcom/bianfeng/h5library/H5EventUtils;

    return-object v0
.end method

.method private postEvent(Ljava/lang/String;)V
    .locals 9

    .line 85
    :try_start_0
    invoke-static {}, Lcom/bianfeng/datafunsdk/PostDatalib;->getInstance()Lcom/bianfeng/datafunsdk/PostDatalib;

    move-result-object v0

    new-instance v8, Lcom/bianfeng/datafunsdk/bean/DataFunBean;

    iget-object v2, p0, Lcom/bianfeng/h5library/H5EventUtils;->eventUrl:Ljava/lang/String;

    const/4 v1, 0x0

    move-object v4, v1

    check-cast v4, Ljava/lang/String;

    move-object v5, v1

    check-cast v5, Ljava/lang/String;

    move-object v6, v1

    check-cast v6, Ljava/lang/String;

    iget-object v1, p0, Lcom/bianfeng/h5library/H5EventUtils;->responseData:Lcom/bianfeng/datafunsdk/net/ResponseData;

    invoke-virtual {v1}, Lcom/bianfeng/datafunsdk/net/ResponseData;->toString()Ljava/lang/String;

    move-result-object v7

    move-object v1, v8

    move-object v3, p1

    invoke-direct/range {v1 .. v7}, Lcom/bianfeng/datafunsdk/bean/DataFunBean;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {v0, v8}, Lcom/bianfeng/datafunsdk/PostDatalib;->postByteData(Lcom/bianfeng/datafunsdk/bean/DataFunBean;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 87
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "\u8c03postByteData\u51fa\u9519"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/bianfeng/h5library/utils/H5libLogger;->i(Ljava/lang/String;)V

    :goto_0
    return-void
.end method


# virtual methods
.method public getVersion()Ljava/lang/String;
    .locals 1

    const-string v0, "1.1.0"

    return-object v0
.end method

.method public init(Landroid/app/Activity;Ljava/lang/String;)V
    .locals 1

    .line 37
    invoke-static {p1}, Lcom/bianfeng/ymnsdk/utilslib/UtilsSdk;->initContext(Landroid/content/Context;)V

    .line 38
    invoke-static {}, Lcom/bianfeng/datafunsdk/PostDatalib;->getInstance()Lcom/bianfeng/datafunsdk/PostDatalib;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/bianfeng/datafunsdk/PostDatalib;->init(Landroid/content/Context;)V

    .line 39
    iput-object p2, p0, Lcom/bianfeng/h5library/H5EventUtils;->channelName:Ljava/lang/String;

    return-void
.end method

.method public postGameEvent(Ljava/lang/String;)V
    .locals 10

    .line 71
    new-instance v9, Lcom/bianfeng/h5library/H5ClickEvent;

    iget-object v2, p0, Lcom/bianfeng/h5library/H5EventUtils;->channelName:Ljava/lang/String;

    const-string v3, "\u5ba2\u6237\u7aef\u6e38\u620f\u4e0a\u629b"

    const-string v4, "810005"

    const-string v5, ""

    const-string v6, ""

    const-string v7, ""

    const-string v8, ""

    move-object v0, v9

    move-object v1, p1

    invoke-direct/range {v0 .. v8}, Lcom/bianfeng/h5library/H5ClickEvent;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {v9}, Lcom/bianfeng/h5library/H5ClickEvent;->toString()Ljava/lang/String;

    move-result-object p1

    .line 72
    invoke-direct {p0, p1}, Lcom/bianfeng/h5library/H5EventUtils;->postEvent(Ljava/lang/String;)V

    return-void
.end method

.method public postH5ClickEvent(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 10

    .line 76
    new-instance v9, Lcom/bianfeng/h5library/H5ClickEvent;

    iget-object v2, p0, Lcom/bianfeng/h5library/H5EventUtils;->channelName:Ljava/lang/String;

    iget-object v5, p0, Lcom/bianfeng/h5library/H5EventUtils;->userid:Ljava/lang/String;

    const-string v3, "\u81ea\u5b9a\u4e49\u4e8b\u4ef6"

    move-object v0, v9

    move-object v1, p5

    move-object v4, p1

    move-object v6, p2

    move-object v7, p3

    move-object v8, p4

    invoke-direct/range {v0 .. v8}, Lcom/bianfeng/h5library/H5ClickEvent;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {v9}, Lcom/bianfeng/h5library/H5ClickEvent;->toString()Ljava/lang/String;

    move-result-object p1

    .line 77
    invoke-direct {p0, p1}, Lcom/bianfeng/h5library/H5EventUtils;->postEvent(Ljava/lang/String;)V

    return-void
.end method

.method public postH5ClickEvent(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 11

    move-object v0, p0

    .line 80
    new-instance v10, Lcom/bianfeng/h5library/H5ClickEvent;

    iget-object v3, v0, Lcom/bianfeng/h5library/H5EventUtils;->channelName:Ljava/lang/String;

    iget-object v6, v0, Lcom/bianfeng/h5library/H5EventUtils;->userid:Ljava/lang/String;

    move-object v1, v10

    move-object/from16 v2, p6

    move-object v4, p3

    move-object v5, p1

    move-object v7, p2

    move-object v8, p4

    move-object/from16 v9, p5

    invoke-direct/range {v1 .. v9}, Lcom/bianfeng/h5library/H5ClickEvent;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {v10}, Lcom/bianfeng/h5library/H5ClickEvent;->toString()Ljava/lang/String;

    move-result-object v1

    .line 81
    invoke-direct {p0, v1}, Lcom/bianfeng/h5library/H5EventUtils;->postEvent(Ljava/lang/String;)V

    return-void
.end method

.method public postH5GameButtonClick(Ljava/lang/String;Ljava/lang/String;)V
    .locals 10

    .line 65
    iput-object p1, p0, Lcom/bianfeng/h5library/H5EventUtils;->userid:Ljava/lang/String;

    .line 66
    new-instance v9, Lcom/bianfeng/h5library/H5ClickEvent;

    iget-object v2, p0, Lcom/bianfeng/h5library/H5EventUtils;->channelName:Ljava/lang/String;

    const-string v3, "\u5355\u6b3e"

    const-string v4, "810007"

    const-string v6, ""

    const-string v7, ""

    const-string v8, ""

    move-object v0, v9

    move-object v1, p2

    move-object v5, p1

    invoke-direct/range {v0 .. v8}, Lcom/bianfeng/h5library/H5ClickEvent;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {v9}, Lcom/bianfeng/h5library/H5ClickEvent;->toString()Ljava/lang/String;

    move-result-object p1

    .line 67
    invoke-direct {p0, p1}, Lcom/bianfeng/h5library/H5EventUtils;->postEvent(Ljava/lang/String;)V

    return-void
.end method

.method public postH5Login(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 7

    .line 47
    iput-object p1, p0, Lcom/bianfeng/h5library/H5EventUtils;->userid:Ljava/lang/String;

    .line 48
    new-instance p1, Lcom/bianfeng/h5library/H5LoginEventUtils;

    iget-object v4, p0, Lcom/bianfeng/h5library/H5EventUtils;->channelName:Ljava/lang/String;

    iget-object v5, p0, Lcom/bianfeng/h5library/H5EventUtils;->userid:Ljava/lang/String;

    move-object v0, p1

    move-object v1, p2

    move-object v2, p3

    move-object v3, p4

    move-object v6, p5

    invoke-direct/range {v0 .. v6}, Lcom/bianfeng/h5library/H5LoginEventUtils;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {p1}, Lcom/bianfeng/h5library/H5LoginEventUtils;->toString()Ljava/lang/String;

    move-result-object p1

    .line 49
    invoke-direct {p0, p1}, Lcom/bianfeng/h5library/H5EventUtils;->postEvent(Ljava/lang/String;)V

    return-void
.end method

.method public postH5Reg(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 7

    .line 53
    iput-object p1, p0, Lcom/bianfeng/h5library/H5EventUtils;->userid:Ljava/lang/String;

    .line 54
    new-instance v6, Lcom/bianfeng/h5library/H5RegisterEvent;

    iget-object v4, p0, Lcom/bianfeng/h5library/H5EventUtils;->channelName:Ljava/lang/String;

    move-object v0, v6

    move-object v1, p4

    move-object v2, p3

    move-object v3, p2

    move-object v5, p1

    invoke-direct/range {v0 .. v5}, Lcom/bianfeng/h5library/H5RegisterEvent;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {v6}, Lcom/bianfeng/h5library/H5RegisterEvent;->toString()Ljava/lang/String;

    move-result-object p1

    .line 55
    invoke-direct {p0, p1}, Lcom/bianfeng/h5library/H5EventUtils;->postEvent(Ljava/lang/String;)V

    return-void
.end method

.method public postH5RoomClick(Ljava/lang/String;Ljava/lang/String;)V
    .locals 9

    .line 59
    iput-object p1, p0, Lcom/bianfeng/h5library/H5EventUtils;->userid:Ljava/lang/String;

    .line 60
    new-instance p1, Lcom/bianfeng/h5library/H5ClickEvent;

    iget-object v2, p0, Lcom/bianfeng/h5library/H5EventUtils;->channelName:Ljava/lang/String;

    iget-object v5, p0, Lcom/bianfeng/h5library/H5EventUtils;->userid:Ljava/lang/String;

    const-string v3, "\u5927\u5385"

    const-string v4, "810006"

    const-string v6, ""

    const-string v7, ""

    const-string v8, ""

    move-object v0, p1

    move-object v1, p2

    invoke-direct/range {v0 .. v8}, Lcom/bianfeng/h5library/H5ClickEvent;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {p1}, Lcom/bianfeng/h5library/H5ClickEvent;->toString()Ljava/lang/String;

    move-result-object p1

    .line 61
    invoke-direct {p0, p1}, Lcom/bianfeng/h5library/H5EventUtils;->postEvent(Ljava/lang/String;)V

    return-void
.end method

.method public setChannelName(Ljava/lang/String;)V
    .locals 0

    .line 43
    iput-object p1, p0, Lcom/bianfeng/h5library/H5EventUtils;->channelName:Ljava/lang/String;

    return-void
.end method

.method public setEventUrl(Ljava/lang/String;)V
    .locals 0

    .line 19
    iput-object p1, p0, Lcom/bianfeng/h5library/H5EventUtils;->eventUrl:Ljava/lang/String;

    return-void
.end method
