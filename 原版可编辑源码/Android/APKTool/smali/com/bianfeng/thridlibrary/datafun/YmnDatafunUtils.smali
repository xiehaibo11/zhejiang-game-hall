.class public Lcom/bianfeng/thridlibrary/datafun/YmnDatafunUtils;
.super Ljava/lang/Object;
.source "YmnDatafunUtils.java"


# static fields
.field private static event_h5:I = 0x2712

.field public static event_h5_finping:I = 0xc5c18

.field public static event_h5_finping_close:I = 0xc5c1a

.field public static event_h5_quanping:I = 0xc5c19

.field private static event_room:I = 0x2710

.field private static event_single_game:I = 0x2713

.field private static event_start_game:I = 0x2716

.field private static ymnDatafunUtils:Lcom/bianfeng/thridlibrary/datafun/YmnDatafunUtils;


# instance fields
.field private area_name:Ljava/lang/String;

.field private gameid:Ljava/lang/String;

.field private isInit:Z

.field private is_user_new:Ljava/lang/String;

.field private user_name:Ljava/lang/String;

.field private userid:Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method private constructor <init>()V
    .locals 1

    .line 14
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const-string v0, ""

    .line 33
    iput-object v0, p0, Lcom/bianfeng/thridlibrary/datafun/YmnDatafunUtils;->area_name:Ljava/lang/String;

    .line 34
    iput-object v0, p0, Lcom/bianfeng/thridlibrary/datafun/YmnDatafunUtils;->user_name:Ljava/lang/String;

    .line 35
    iput-object v0, p0, Lcom/bianfeng/thridlibrary/datafun/YmnDatafunUtils;->is_user_new:Ljava/lang/String;

    return-void
.end method

.method public static getInstance()Lcom/bianfeng/thridlibrary/datafun/YmnDatafunUtils;
    .locals 1

    .line 17
    sget-object v0, Lcom/bianfeng/thridlibrary/datafun/YmnDatafunUtils;->ymnDatafunUtils:Lcom/bianfeng/thridlibrary/datafun/YmnDatafunUtils;

    if-nez v0, :cond_0

    .line 18
    new-instance v0, Lcom/bianfeng/thridlibrary/datafun/YmnDatafunUtils;

    invoke-direct {v0}, Lcom/bianfeng/thridlibrary/datafun/YmnDatafunUtils;-><init>()V

    sput-object v0, Lcom/bianfeng/thridlibrary/datafun/YmnDatafunUtils;->ymnDatafunUtils:Lcom/bianfeng/thridlibrary/datafun/YmnDatafunUtils;

    .line 20
    :cond_0
    sget-object v0, Lcom/bianfeng/thridlibrary/datafun/YmnDatafunUtils;->ymnDatafunUtils:Lcom/bianfeng/thridlibrary/datafun/YmnDatafunUtils;

    return-object v0
.end method

.method private onH5Event(Ljava/lang/String;Ljava/lang/String;)V
    .locals 7

    .line 82
    :try_start_0
    invoke-static {}, Lcom/bianfeng/thridlibrary/ThridSdk;->getGson()Lcom/bianfeng/thridlibrary/GsonUtils;

    move-result-object v0

    const-class v1, Lcom/bianfeng/thridlibrary/datafun/DatafunEntity;

    invoke-virtual {v0, p1, v1}, Lcom/bianfeng/thridlibrary/GsonUtils;->fromJson(Ljava/lang/String;Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/bianfeng/thridlibrary/datafun/DatafunEntity;

    .line 83
    invoke-virtual {p1}, Lcom/bianfeng/thridlibrary/datafun/DatafunEntity;->getEvent_id()I

    move-result v0

    const/4 v1, 0x4

    if-ne v0, v1, :cond_0

    .line 84
    invoke-virtual {p1}, Lcom/bianfeng/thridlibrary/datafun/DatafunEntity;->getArea_name()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/bianfeng/thridlibrary/datafun/YmnDatafunUtils;->area_name:Ljava/lang/String;

    .line 85
    invoke-virtual {p1}, Lcom/bianfeng/thridlibrary/datafun/DatafunEntity;->getIs_user_new()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/bianfeng/thridlibrary/datafun/YmnDatafunUtils;->is_user_new:Ljava/lang/String;

    .line 86
    invoke-virtual {p1}, Lcom/bianfeng/thridlibrary/datafun/DatafunEntity;->getUser_name()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/bianfeng/thridlibrary/datafun/YmnDatafunUtils;->user_name:Ljava/lang/String;

    .line 87
    invoke-static {}, Lcom/bianfeng/h5library/H5EventUtils;->getInstance()Lcom/bianfeng/h5library/H5EventUtils;

    move-result-object v1

    iget-object v2, p0, Lcom/bianfeng/thridlibrary/datafun/YmnDatafunUtils;->userid:Ljava/lang/String;

    invoke-virtual {p1}, Lcom/bianfeng/thridlibrary/datafun/DatafunEntity;->getArea_name()Ljava/lang/String;

    move-result-object v3

    .line 88
    invoke-virtual {p1}, Lcom/bianfeng/thridlibrary/datafun/DatafunEntity;->getIs_user_new()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {p1}, Lcom/bianfeng/thridlibrary/datafun/DatafunEntity;->getUser_name()Ljava/lang/String;

    move-result-object v5

    move-object v6, p2

    .line 87
    invoke-virtual/range {v1 .. v6}, Lcom/bianfeng/h5library/H5EventUtils;->postH5Login(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    .line 89
    :cond_0
    invoke-virtual {p1}, Lcom/bianfeng/thridlibrary/datafun/DatafunEntity;->getEvent_id()I

    move-result v0

    const/4 v1, 0x6

    if-ne v0, v1, :cond_1

    .line 90
    invoke-static {}, Lcom/bianfeng/h5library/H5EventUtils;->getInstance()Lcom/bianfeng/h5library/H5EventUtils;

    move-result-object v0

    iget-object v1, p0, Lcom/bianfeng/thridlibrary/datafun/YmnDatafunUtils;->userid:Ljava/lang/String;

    invoke-virtual {p1}, Lcom/bianfeng/thridlibrary/datafun/DatafunEntity;->getArea_name()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p1}, Lcom/bianfeng/thridlibrary/datafun/DatafunEntity;->getUser_name()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, v1, v2, p1, p2}, Lcom/bianfeng/h5library/H5EventUtils;->postH5Reg(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    .line 92
    :cond_1
    invoke-static {}, Lcom/bianfeng/h5library/H5EventUtils;->getInstance()Lcom/bianfeng/h5library/H5EventUtils;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p1}, Lcom/bianfeng/thridlibrary/datafun/DatafunEntity;->getEvent_id()I

    move-result v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v2, ""

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    .line 93
    invoke-virtual {p1}, Lcom/bianfeng/thridlibrary/datafun/DatafunEntity;->getArea_name()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p1}, Lcom/bianfeng/thridlibrary/datafun/DatafunEntity;->getUser_name()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {p1}, Lcom/bianfeng/thridlibrary/datafun/DatafunEntity;->getIs_user_new()Ljava/lang/String;

    move-result-object v4

    move-object v5, p2

    .line 92
    invoke-virtual/range {v0 .. v5}, Lcom/bianfeng/h5library/H5EventUtils;->postH5ClickEvent(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 96
    invoke-static {}, Lcom/bianfeng/utilslib/Logger;->getInstance()Lcom/bianfeng/utilslib/Logger;

    move-result-object p2

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "\u4e0a\u629bH5\u6570\u636e"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p2, p1}, Lcom/bianfeng/utilslib/Logger;->i(Ljava/lang/String;)I

    :goto_0
    return-void
.end method

.method private onH5FenpingEvent(ILjava/lang/String;)V
    .locals 7

    .line 75
    invoke-static {}, Lcom/bianfeng/h5library/H5EventUtils;->getInstance()Lcom/bianfeng/h5library/H5EventUtils;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p1, ""

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    iget-object v2, p0, Lcom/bianfeng/thridlibrary/datafun/YmnDatafunUtils;->area_name:Ljava/lang/String;

    iget-object v4, p0, Lcom/bianfeng/thridlibrary/datafun/YmnDatafunUtils;->user_name:Ljava/lang/String;

    iget-object v5, p0, Lcom/bianfeng/thridlibrary/datafun/YmnDatafunUtils;->is_user_new:Ljava/lang/String;

    iget-object v6, p0, Lcom/bianfeng/thridlibrary/datafun/YmnDatafunUtils;->gameid:Ljava/lang/String;

    move-object v3, p2

    invoke-virtual/range {v0 .. v6}, Lcom/bianfeng/h5library/H5EventUtils;->postH5ClickEvent(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method


# virtual methods
.method public onClickWithH5(Ljava/lang/String;)V
    .locals 2

    .line 127
    sget v0, Lcom/bianfeng/thridlibrary/datafun/YmnDatafunUtils;->event_h5:I

    iget-object v1, p0, Lcom/bianfeng/thridlibrary/datafun/YmnDatafunUtils;->gameid:Ljava/lang/String;

    invoke-virtual {p0, v0, p1, v1}, Lcom/bianfeng/thridlibrary/datafun/YmnDatafunUtils;->postH5Event(ILjava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public onClickWithH5Fenping(I)V
    .locals 3

    .line 135
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getLogger()Lcom/bianfeng/utilslib/Logger;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "onClickWithH5Fenping"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/bianfeng/utilslib/Logger;->i(Ljava/lang/String;)I

    .line 136
    iget-object v0, p0, Lcom/bianfeng/thridlibrary/datafun/YmnDatafunUtils;->gameid:Ljava/lang/String;

    const-string v1, ""

    invoke-virtual {p0, p1, v1, v0}, Lcom/bianfeng/thridlibrary/datafun/YmnDatafunUtils;->postH5Event(ILjava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public onClickWithRoom(Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    .line 117
    iput-object p1, p0, Lcom/bianfeng/thridlibrary/datafun/YmnDatafunUtils;->userid:Ljava/lang/String;

    .line 118
    invoke-static {}, Lcom/bianfeng/h5library/H5EventUtils;->getInstance()Lcom/bianfeng/h5library/H5EventUtils;

    move-result-object p1

    invoke-virtual {p1, p2}, Lcom/bianfeng/h5library/H5EventUtils;->setChannelName(Ljava/lang/String;)V

    .line 119
    sget p1, Lcom/bianfeng/thridlibrary/datafun/YmnDatafunUtils;->event_room:I

    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getAppConfig()Lcom/bianfeng/utilslib/AppConfigUtils;

    move-result-object p2

    invoke-virtual {p2}, Lcom/bianfeng/utilslib/AppConfigUtils;->getWebPayAppId()Ljava/lang/String;

    move-result-object p2

    const-string v0, "\u5927\u5385\u89e6\u53d1"

    invoke-virtual {p0, p1, v0, p2}, Lcom/bianfeng/thridlibrary/datafun/YmnDatafunUtils;->postH5Event(ILjava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public onClickWithSingle(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 0

    .line 106
    iput-object p1, p0, Lcom/bianfeng/thridlibrary/datafun/YmnDatafunUtils;->userid:Ljava/lang/String;

    .line 107
    iput-object p2, p0, Lcom/bianfeng/thridlibrary/datafun/YmnDatafunUtils;->gameid:Ljava/lang/String;

    .line 108
    invoke-static {}, Lcom/bianfeng/h5library/H5EventUtils;->getInstance()Lcom/bianfeng/h5library/H5EventUtils;

    move-result-object p1

    invoke-virtual {p1, p3}, Lcom/bianfeng/h5library/H5EventUtils;->setChannelName(Ljava/lang/String;)V

    .line 109
    sget p1, Lcom/bianfeng/thridlibrary/datafun/YmnDatafunUtils;->event_single_game:I

    const-string p3, "\u5355\u6b3e\u6e38\u620f"

    invoke-virtual {p0, p1, p3, p2}, Lcom/bianfeng/thridlibrary/datafun/YmnDatafunUtils;->postH5Event(ILjava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public onDestory()V
    .locals 1

    .line 41
    invoke-static {}, Lcom/bianfeng/datafunsdk/PostDatalib;->getInstance()Lcom/bianfeng/datafunsdk/PostDatalib;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/datafunsdk/PostDatalib;->cancelTimer()V

    return-void
.end method

.method public onInit(Landroid/app/Activity;)V
    .locals 2

    .line 45
    iget-boolean v0, p0, Lcom/bianfeng/thridlibrary/datafun/YmnDatafunUtils;->isInit:Z

    if-nez v0, :cond_0

    const/4 v0, 0x1

    .line 46
    iput-boolean v0, p0, Lcom/bianfeng/thridlibrary/datafun/YmnDatafunUtils;->isInit:Z

    .line 47
    invoke-static {}, Lcom/bianfeng/h5library/H5EventUtils;->getInstance()Lcom/bianfeng/h5library/H5EventUtils;

    move-result-object v0

    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getAppConfig()Lcom/bianfeng/utilslib/AppConfigUtils;

    move-result-object v1

    invoke-virtual {v1}, Lcom/bianfeng/utilslib/AppConfigUtils;->getWebPayAppId()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, p1, v1}, Lcom/bianfeng/h5library/H5EventUtils;->init(Landroid/app/Activity;Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public onResume()V
    .locals 3

    .line 38
    sget v0, Lcom/bianfeng/thridlibrary/datafun/YmnDatafunUtils;->event_start_game:I

    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getAppConfig()Lcom/bianfeng/utilslib/AppConfigUtils;

    move-result-object v1

    invoke-virtual {v1}, Lcom/bianfeng/utilslib/AppConfigUtils;->getWebPayAppId()Ljava/lang/String;

    move-result-object v1

    const-string v2, "\u5ba2\u6237\u7aef\u6e38\u620f"

    invoke-virtual {p0, v0, v2, v1}, Lcom/bianfeng/thridlibrary/datafun/YmnDatafunUtils;->postH5Event(ILjava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public postH5Event(ILjava/lang/String;Ljava/lang/String;)V
    .locals 1

    .line 55
    sget v0, Lcom/bianfeng/thridlibrary/datafun/YmnDatafunUtils;->event_single_game:I

    if-ne p1, v0, :cond_0

    .line 56
    invoke-static {}, Lcom/bianfeng/h5library/H5EventUtils;->getInstance()Lcom/bianfeng/h5library/H5EventUtils;

    move-result-object p1

    iget-object p2, p0, Lcom/bianfeng/thridlibrary/datafun/YmnDatafunUtils;->userid:Ljava/lang/String;

    invoke-virtual {p1, p2, p3}, Lcom/bianfeng/h5library/H5EventUtils;->postH5GameButtonClick(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    .line 57
    :cond_0
    sget v0, Lcom/bianfeng/thridlibrary/datafun/YmnDatafunUtils;->event_room:I

    if-ne p1, v0, :cond_1

    .line 58
    invoke-static {}, Lcom/bianfeng/h5library/H5EventUtils;->getInstance()Lcom/bianfeng/h5library/H5EventUtils;

    move-result-object p1

    iget-object p2, p0, Lcom/bianfeng/thridlibrary/datafun/YmnDatafunUtils;->userid:Ljava/lang/String;

    invoke-virtual {p1, p2, p3}, Lcom/bianfeng/h5library/H5EventUtils;->postH5RoomClick(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    .line 59
    :cond_1
    sget v0, Lcom/bianfeng/thridlibrary/datafun/YmnDatafunUtils;->event_start_game:I

    if-ne p1, v0, :cond_2

    .line 60
    invoke-static {}, Lcom/bianfeng/h5library/H5EventUtils;->getInstance()Lcom/bianfeng/h5library/H5EventUtils;

    move-result-object p1

    invoke-virtual {p1, p3}, Lcom/bianfeng/h5library/H5EventUtils;->postGameEvent(Ljava/lang/String;)V

    goto :goto_0

    .line 61
    :cond_2
    sget v0, Lcom/bianfeng/thridlibrary/datafun/YmnDatafunUtils;->event_h5_finping:I

    if-ne p1, v0, :cond_3

    const-string p2, "\u5f00\u542f\u5206\u5c4f"

    .line 62
    invoke-direct {p0, p1, p2}, Lcom/bianfeng/thridlibrary/datafun/YmnDatafunUtils;->onH5FenpingEvent(ILjava/lang/String;)V

    goto :goto_0

    .line 63
    :cond_3
    sget v0, Lcom/bianfeng/thridlibrary/datafun/YmnDatafunUtils;->event_h5_quanping:I

    if-ne p1, v0, :cond_4

    const-string p2, "\u6062\u590d\u5168\u5c4f"

    .line 64
    invoke-direct {p0, p1, p2}, Lcom/bianfeng/thridlibrary/datafun/YmnDatafunUtils;->onH5FenpingEvent(ILjava/lang/String;)V

    goto :goto_0

    .line 65
    :cond_4
    sget v0, Lcom/bianfeng/thridlibrary/datafun/YmnDatafunUtils;->event_h5_finping_close:I

    if-ne p1, v0, :cond_5

    const-string p2, "\u9000\u51fa\u5206\u5c4f"

    .line 66
    invoke-direct {p0, p1, p2}, Lcom/bianfeng/thridlibrary/datafun/YmnDatafunUtils;->onH5FenpingEvent(ILjava/lang/String;)V

    goto :goto_0

    .line 67
    :cond_5
    sget v0, Lcom/bianfeng/thridlibrary/datafun/YmnDatafunUtils;->event_h5:I

    if-ne p1, v0, :cond_6

    .line 68
    invoke-direct {p0, p2, p3}, Lcom/bianfeng/thridlibrary/datafun/YmnDatafunUtils;->onH5Event(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    .line 70
    :cond_6
    invoke-static {}, Lcom/bianfeng/utilslib/Logger;->getInstance()Lcom/bianfeng/utilslib/Logger;

    move-result-object p1

    const-string p2, " \u4e8b\u4ef6\u4e0a\u629b\uff0c\u8be5\u4e8b\u4ef6\u4e0d\u5c5e\u4e8e "

    invoke-virtual {p1, p2}, Lcom/bianfeng/utilslib/Logger;->i(Ljava/lang/String;)I

    :goto_0
    return-void
.end method
