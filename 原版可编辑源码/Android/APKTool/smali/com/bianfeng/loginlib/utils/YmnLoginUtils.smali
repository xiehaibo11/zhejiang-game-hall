.class public Lcom/bianfeng/loginlib/utils/YmnLoginUtils;
.super Ljava/lang/Object;
.source "YmnLoginUtils.java"


# static fields
.field private static ymnLoginUtils:Lcom/bianfeng/loginlib/utils/YmnLoginUtils;


# instance fields
.field private direction:Lcom/bianfeng/splitscreenwindow/ShowType;


# direct methods
.method private constructor <init>()V
    .locals 0

    .line 12
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static getInstance()Lcom/bianfeng/loginlib/utils/YmnLoginUtils;
    .locals 2

    .line 15
    sget-object v0, Lcom/bianfeng/loginlib/utils/YmnLoginUtils;->ymnLoginUtils:Lcom/bianfeng/loginlib/utils/YmnLoginUtils;

    if-nez v0, :cond_1

    .line 16
    const-class v0, Lcom/bianfeng/loginlib/utils/YmnLoginUtils;

    monitor-enter v0

    .line 17
    :try_start_0
    sget-object v1, Lcom/bianfeng/loginlib/utils/YmnLoginUtils;->ymnLoginUtils:Lcom/bianfeng/loginlib/utils/YmnLoginUtils;

    if-nez v1, :cond_0

    .line 18
    new-instance v1, Lcom/bianfeng/loginlib/utils/YmnLoginUtils;

    invoke-direct {v1}, Lcom/bianfeng/loginlib/utils/YmnLoginUtils;-><init>()V

    sput-object v1, Lcom/bianfeng/loginlib/utils/YmnLoginUtils;->ymnLoginUtils:Lcom/bianfeng/loginlib/utils/YmnLoginUtils;

    .line 20
    :cond_0
    monitor-exit v0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1

    .line 22
    :cond_1
    :goto_0
    sget-object v0, Lcom/bianfeng/loginlib/utils/YmnLoginUtils;->ymnLoginUtils:Lcom/bianfeng/loginlib/utils/YmnLoginUtils;

    return-object v0
.end method


# virtual methods
.method public getCpFromExt(Ljava/lang/String;)Ljava/lang/String;
    .locals 1

    if-eqz p1, :cond_0

    .line 77
    invoke-virtual {p1}, Ljava/lang/String;->isEmpty()Z

    move-result v0

    if-nez v0, :cond_0

    .line 78
    invoke-static {}, Lcom/bianfeng/thridlibrary/ThridSdk;->getGson()Lcom/bianfeng/thridlibrary/GsonUtils;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/bianfeng/thridlibrary/GsonUtils;->fromJson(Ljava/lang/String;)Ljava/util/Map;

    move-result-object p1

    goto :goto_0

    .line 80
    :cond_0
    new-instance p1, Ljava/util/HashMap;

    invoke-direct {p1}, Ljava/util/HashMap;-><init>()V

    :goto_0
    const-string v0, "cp"

    .line 83
    invoke-interface {p1, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/lang/String;

    return-object p1
.end method

.method public getDirection()Lcom/bianfeng/splitscreenwindow/ShowType;
    .locals 1

    .line 27
    iget-object v0, p0, Lcom/bianfeng/loginlib/utils/YmnLoginUtils;->direction:Lcom/bianfeng/splitscreenwindow/ShowType;

    return-object v0
.end method

.method public getExt(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
    .locals 1

    if-eqz p1, :cond_0

    .line 67
    invoke-virtual {p1}, Ljava/lang/String;->isEmpty()Z

    move-result v0

    if-nez v0, :cond_0

    .line 68
    invoke-static {}, Lcom/bianfeng/thridlibrary/ThridSdk;->getGson()Lcom/bianfeng/thridlibrary/GsonUtils;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/bianfeng/thridlibrary/GsonUtils;->fromJson(Ljava/lang/String;)Ljava/util/Map;

    move-result-object p1

    goto :goto_0

    .line 70
    :cond_0
    new-instance p1, Ljava/util/HashMap;

    invoke-direct {p1}, Ljava/util/HashMap;-><init>()V

    :goto_0
    const-string v0, "cp"

    .line 72
    invoke-interface {p1, v0, p2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 73
    invoke-static {}, Lcom/bianfeng/thridlibrary/ThridSdk;->getGson()Lcom/bianfeng/thridlibrary/GsonUtils;

    move-result-object p2

    invoke-virtual {p2, p1}, Lcom/bianfeng/thridlibrary/GsonUtils;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    return-object p1
.end method

.method public setDirection(II)V
    .locals 2

    if-nez p2, :cond_0

    if-nez p1, :cond_0

    .line 32
    sget-object p1, Lcom/bianfeng/splitscreenwindow/ShowType;->ACTIVITY_PORTRAIT:Lcom/bianfeng/splitscreenwindow/ShowType;

    iput-object p1, p0, Lcom/bianfeng/loginlib/utils/YmnLoginUtils;->direction:Lcom/bianfeng/splitscreenwindow/ShowType;

    goto :goto_0

    :cond_0
    const/4 v0, 0x1

    if-nez p2, :cond_1

    if-ne p1, v0, :cond_1

    .line 34
    sget-object p1, Lcom/bianfeng/splitscreenwindow/ShowType;->ACTIVITY_LAND:Lcom/bianfeng/splitscreenwindow/ShowType;

    iput-object p1, p0, Lcom/bianfeng/loginlib/utils/YmnLoginUtils;->direction:Lcom/bianfeng/splitscreenwindow/ShowType;

    goto :goto_0

    :cond_1
    if-ne p2, v0, :cond_2

    if-nez p1, :cond_2

    .line 36
    sget-object p1, Lcom/bianfeng/splitscreenwindow/ShowType;->QUANPING_PORTRAIT:Lcom/bianfeng/splitscreenwindow/ShowType;

    iput-object p1, p0, Lcom/bianfeng/loginlib/utils/YmnLoginUtils;->direction:Lcom/bianfeng/splitscreenwindow/ShowType;

    goto :goto_0

    :cond_2
    if-ne p2, v0, :cond_3

    if-ne p1, v0, :cond_3

    .line 38
    sget-object p1, Lcom/bianfeng/splitscreenwindow/ShowType;->QUANPING_LAND:Lcom/bianfeng/splitscreenwindow/ShowType;

    iput-object p1, p0, Lcom/bianfeng/loginlib/utils/YmnLoginUtils;->direction:Lcom/bianfeng/splitscreenwindow/ShowType;

    goto :goto_0

    :cond_3
    const/4 v1, 0x2

    if-ne p2, v1, :cond_4

    if-nez p1, :cond_4

    .line 40
    sget-object p1, Lcom/bianfeng/splitscreenwindow/ShowType;->FENPING_PORTRAIT:Lcom/bianfeng/splitscreenwindow/ShowType;

    iput-object p1, p0, Lcom/bianfeng/loginlib/utils/YmnLoginUtils;->direction:Lcom/bianfeng/splitscreenwindow/ShowType;

    goto :goto_0

    :cond_4
    if-ne p2, v1, :cond_5

    if-ne p1, v0, :cond_5

    .line 42
    sget-object p1, Lcom/bianfeng/splitscreenwindow/ShowType;->FENPING_LAND:Lcom/bianfeng/splitscreenwindow/ShowType;

    iput-object p1, p0, Lcom/bianfeng/loginlib/utils/YmnLoginUtils;->direction:Lcom/bianfeng/splitscreenwindow/ShowType;

    goto :goto_0

    .line 44
    :cond_5
    sget-object p1, Lcom/bianfeng/splitscreenwindow/ShowType;->ACTIVITY_PORTRAIT:Lcom/bianfeng/splitscreenwindow/ShowType;

    iput-object p1, p0, Lcom/bianfeng/loginlib/utils/YmnLoginUtils;->direction:Lcom/bianfeng/splitscreenwindow/ShowType;

    :goto_0
    return-void
.end method

.method public setDirection(Ljava/lang/String;)V
    .locals 3

    .line 50
    :try_start_0
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0, p1}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string p1, "direction"

    .line 51
    invoke-virtual {v0, p1}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result p1

    const-string v1, "showtype"

    .line 52
    invoke-virtual {v0, v1}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    .line 53
    invoke-virtual {p0, p1, v0}, Lcom/bianfeng/loginlib/utils/YmnLoginUtils;->setDirection(II)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 55
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getLogger()Lcom/bianfeng/utilslib/Logger;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "getDirection:"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Lcom/bianfeng/utilslib/Logger;->i(Ljava/lang/String;)I

    .line 56
    sget-object p1, Lcom/bianfeng/splitscreenwindow/ShowType;->ACTIVITY_PORTRAIT:Lcom/bianfeng/splitscreenwindow/ShowType;

    iput-object p1, p0, Lcom/bianfeng/loginlib/utils/YmnLoginUtils;->direction:Lcom/bianfeng/splitscreenwindow/ShowType;

    :goto_0
    return-void
.end method
