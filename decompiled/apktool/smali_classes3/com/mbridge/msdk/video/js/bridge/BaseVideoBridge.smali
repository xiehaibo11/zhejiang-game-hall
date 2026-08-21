.class public Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;
.super Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;
.source "BaseVideoBridge.java"

# interfaces
.implements Lcom/mbridge/msdk/video/js/bridge/IVideoBridge;


# instance fields
.field protected a:Lcom/mbridge/msdk/video/js/factory/IJSFactory;

.field private b:Lcom/mbridge/msdk/foundation/tools/FastKV;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 52
    invoke-direct {p0}, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;-><init>()V

    return-void
.end method

.method private a(I)Ljava/lang/String;
    .locals 0

    packed-switch p1, :pswitch_data_0

    const-string p1, ""

    goto :goto_0

    :pswitch_0
    const-string p1, "sdkSetting"

    goto :goto_0

    :pswitch_1
    const-string p1, "device"

    goto :goto_0

    :pswitch_2
    const-string p1, "unitSetting"

    goto :goto_0

    :pswitch_3
    const-string p1, "appSetting"

    goto :goto_0

    :pswitch_4
    const-string p1, "unit_id"

    goto :goto_0

    :pswitch_5
    const-string p1, "sdk_info"

    :goto_0
    return-object p1

    :pswitch_data_0
    .packed-switch 0x1
        :pswitch_5
        :pswitch_4
        :pswitch_3
        :pswitch_2
        :pswitch_1
        :pswitch_0
    .end packed-switch
.end method

.method private a(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 814
    :try_start_0
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p2

    if-eqz p2, :cond_0

    .line 815
    new-instance p2, Lorg/json/JSONObject;

    invoke-direct {p2}, Lorg/json/JSONObject;-><init>()V

    const-string v0, "code"

    const/4 v1, 0x1

    .line 816
    invoke-virtual {p2, v0, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v0, "message"

    const-string v1, "params is null"

    .line 817
    invoke-virtual {p2, v0, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 818
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a()Lcom/mbridge/msdk/mbjscommon/windvane/h;

    move-result-object v0

    invoke-virtual {p2}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p2}, Ljava/lang/String;->getBytes()[B

    move-result-object p2

    const/4 v1, 0x2

    invoke-static {p2, v1}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object p2

    invoke-virtual {v0, p1, p2}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception p1

    .line 822
    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p1

    const-string p2, "JS-Video-Brigde"

    invoke-static {p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method private b(I)Ljava/lang/String;
    .locals 3

    const-string v0, ""

    .line 651
    :try_start_0
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1}, Lorg/json/JSONObject;-><init>()V

    const-string v2, "code"

    .line 652
    invoke-virtual {v1, v2, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 653
    invoke-virtual {v1}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p1

    .line 654
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    .line 655
    invoke-virtual {p1}, Ljava/lang/String;->getBytes()[B

    move-result-object p1

    const/4 v1, 0x2

    invoke-static {p1, v1}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    move-object v0, p1

    goto :goto_0

    :catchall_0
    const-string p1, "JS-Video-Brigde"

    const-string v1, "code to string is error"

    .line 659
    invoke-static {p1, v1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    :goto_0
    return-object v0
.end method


# virtual methods
.method public appendSubView(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 925
    invoke-direct {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->a(Ljava/lang/Object;Ljava/lang/String;)V

    .line 927
    :try_start_0
    invoke-static {}, Lcom/mbridge/msdk/video/bt/a/c;->a()Lcom/mbridge/msdk/video/bt/a/c;

    move-result-object v0

    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1, v1}, Lcom/mbridge/msdk/video/bt/a/c;->i(Ljava/lang/Object;Lorg/json/JSONObject;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 929
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "appendSubView error "

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string p2, "JS-Video-Brigde"

    invoke-static {p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method public appendViewTo(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 935
    invoke-direct {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->a(Ljava/lang/Object;Ljava/lang/String;)V

    .line 937
    :try_start_0
    invoke-static {}, Lcom/mbridge/msdk/video/bt/a/c;->a()Lcom/mbridge/msdk/video/bt/a/c;

    move-result-object v0

    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1, v1}, Lcom/mbridge/msdk/video/bt/a/c;->j(Ljava/lang/Object;Lorg/json/JSONObject;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 939
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "appendViewTo error "

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string p2, "JS-Video-Brigde"

    invoke-static {p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method public bringViewToFront(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 964
    invoke-direct {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->a(Ljava/lang/Object;Ljava/lang/String;)V

    .line 966
    :try_start_0
    invoke-static {}, Lcom/mbridge/msdk/video/bt/a/c;->a()Lcom/mbridge/msdk/video/bt/a/c;

    move-result-object v0

    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1, v1}, Lcom/mbridge/msdk/video/bt/a/c;->m(Ljava/lang/Object;Lorg/json/JSONObject;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 968
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "bringViewToFront error "

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string p2, "JS-Video-Brigde"

    invoke-static {p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method public broadcast(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 1254
    invoke-direct {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->a(Ljava/lang/Object;Ljava/lang/String;)V

    .line 1256
    :try_start_0
    invoke-static {}, Lcom/mbridge/msdk/video/bt/a/c;->a()Lcom/mbridge/msdk/video/bt/a/c;

    move-result-object v0

    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1, v1}, Lcom/mbridge/msdk/video/bt/a/c;->K(Ljava/lang/Object;Lorg/json/JSONObject;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 1258
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "broadcast error "

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string p2, "JS-Video-Brigde"

    invoke-static {p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method public cai(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 7

    const-string v0, "cai"

    const-string v1, "exception: "

    .line 455
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "cai:"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    const-string v3, "JS-Video-Brigde"

    invoke-static {v3, v2}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 456
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_2

    .line 459
    :try_start_0
    new-instance v2, Lorg/json/JSONObject;

    invoke-direct {v2, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string p2, "packageName"

    .line 460
    invoke-virtual {v2, p2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    .line 461
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_0

    const-string v2, "packageName is empty"

    .line 462
    invoke-static {p1, v2}, Lcom/mbridge/msdk/mbjscommon/bridge/b;->a(Ljava/lang/Object;Ljava/lang/String;)V

    .line 464
    :cond_0
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v2

    invoke-static {v2, p2}, Lcom/mbridge/msdk/foundation/tools/ae;->c(Landroid/content/Context;Ljava/lang/String;)Z

    move-result p2
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_1
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const/4 v2, 0x2

    if-eqz p2, :cond_1

    const/4 p2, 0x1

    goto :goto_0

    :cond_1
    move p2, v2

    .line 467
    :goto_0
    :try_start_1
    new-instance v4, Lorg/json/JSONObject;

    invoke-direct {v4}, Lorg/json/JSONObject;-><init>()V

    const-string v5, "code"

    .line 468
    sget v6, Lcom/mbridge/msdk/mbjscommon/bridge/b;->b:I

    invoke-virtual {v4, v5, v6}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 469
    new-instance v5, Lorg/json/JSONObject;

    invoke-direct {v5}, Lorg/json/JSONObject;-><init>()V

    const-string v6, "result"

    .line 470
    invoke-virtual {v5, v6, p2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string p2, "data"

    .line 471
    invoke-virtual {v4, p2, v5}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 472
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a()Lcom/mbridge/msdk/mbjscommon/windvane/h;

    move-result-object p2

    invoke-virtual {v4}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v4}, Ljava/lang/String;->getBytes()[B

    move-result-object v4

    invoke-static {v4, v2}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p2, p1, v2}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0
    .catch Lorg/json/JSONException; {:try_start_1 .. :try_end_1} :catch_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_1

    :catch_0
    move-exception p2

    .line 474
    :try_start_2
    invoke-virtual {p2}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v2

    invoke-static {p1, v2}, Lcom/mbridge/msdk/mbjscommon/bridge/b;->a(Ljava/lang/Object;Ljava/lang/String;)V

    .line 475
    invoke-virtual {p2}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p2

    invoke-static {v3, p2}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_2
    .catch Lorg/json/JSONException; {:try_start_2 .. :try_end_2} :catch_1
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    goto :goto_1

    :catchall_0
    move-exception p2

    .line 481
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/Throwable;->getLocalizedMessage()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {p1, v1}, Lcom/mbridge/msdk/mbjscommon/bridge/b;->a(Ljava/lang/Object;Ljava/lang/String;)V

    .line 482
    invoke-static {v3, v0, p2}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    goto :goto_1

    :catch_1
    move-exception p2

    .line 478
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Lorg/json/JSONException;->getLocalizedMessage()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {p1, v1}, Lcom/mbridge/msdk/mbjscommon/bridge/b;->a(Ljava/lang/Object;Ljava/lang/String;)V

    .line 479
    invoke-static {v3, v0, p2}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :cond_2
    :goto_1
    return-void
.end method

.method public clearAllCache(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 8

    .line 1563
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/b;->a()Lcom/mbridge/msdk/foundation/controller/b;

    move-result-object p2

    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/controller/b;->d()Z

    move-result p2

    const-string v0, "MBridgeH5CacheSP"

    if-eqz p2, :cond_0

    iget-object p2, p0, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->b:Lcom/mbridge/msdk/foundation/tools/FastKV;

    if-nez p2, :cond_0

    .line 1565
    :try_start_0
    new-instance p2, Lcom/mbridge/msdk/foundation/tools/FastKV$Builder;

    sget-object v1, Lcom/mbridge/msdk/foundation/same/b/c;->m:Lcom/mbridge/msdk/foundation/same/b/c;

    invoke-static {v1}, Lcom/mbridge/msdk/foundation/same/b/e;->b(Lcom/mbridge/msdk/foundation/same/b/c;)Ljava/lang/String;

    move-result-object v1

    invoke-direct {p2, v1, v0}, Lcom/mbridge/msdk/foundation/tools/FastKV$Builder;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/tools/FastKV$Builder;->build()Lcom/mbridge/msdk/foundation/tools/FastKV;

    move-result-object p2

    iput-object p2, p0, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->b:Lcom/mbridge/msdk/foundation/tools/FastKV;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    const/4 p2, 0x0

    .line 1567
    iput-object p2, p0, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->b:Lcom/mbridge/msdk/foundation/tools/FastKV;

    .line 1571
    :cond_0
    :goto_0
    iget-object p2, p0, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->b:Lcom/mbridge/msdk/foundation/tools/FastKV;

    const/4 v1, 0x2

    const-string v2, "Success"

    const-string v3, "message"

    const-string v4, "code"

    const-string v5, "getAllCache error "

    const-string v6, "JS-Video-Brigde"

    const/4 v7, 0x0

    if-eqz p2, :cond_1

    .line 1573
    :try_start_1
    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/tools/FastKV;->clear()V

    if-eqz p1, :cond_2

    .line 1575
    new-instance p2, Lorg/json/JSONObject;

    invoke-direct {p2}, Lorg/json/JSONObject;-><init>()V

    .line 1576
    invoke-virtual {p2, v4, v7}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 1577
    invoke-virtual {p2, v3, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 1578
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a()Lcom/mbridge/msdk/mbjscommon/windvane/h;

    move-result-object v0

    invoke-virtual {p2}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p2}, Ljava/lang/String;->getBytes()[B

    move-result-object p2

    invoke-static {p2, v1}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object p2

    invoke-virtual {v0, p1, p2}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_1

    :catchall_0
    move-exception p1

    .line 1581
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p2, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v6, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_1

    .line 1585
    :cond_1
    :try_start_2
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object p2

    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object p2

    .line 1586
    invoke-virtual {p2, v0, v7}, Landroid/content/Context;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object p2

    .line 1587
    invoke-interface {p2}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object p2

    invoke-interface {p2}, Landroid/content/SharedPreferences$Editor;->clear()Landroid/content/SharedPreferences$Editor;

    move-result-object p2

    invoke-interface {p2}, Landroid/content/SharedPreferences$Editor;->apply()V

    if-eqz p1, :cond_2

    .line 1589
    new-instance p2, Lorg/json/JSONObject;

    invoke-direct {p2}, Lorg/json/JSONObject;-><init>()V

    .line 1590
    invoke-virtual {p2, v4, v7}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 1591
    invoke-virtual {p2, v3, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 1592
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a()Lcom/mbridge/msdk/mbjscommon/windvane/h;

    move-result-object v0

    invoke-virtual {p2}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p2}, Ljava/lang/String;->getBytes()[B

    move-result-object p2

    invoke-static {p2, v1}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object p2

    invoke-virtual {v0, p1, p2}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    goto :goto_1

    :catchall_1
    move-exception p1

    .line 1595
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p2, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v6, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_2
    :goto_1
    return-void
.end method

.method public click(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 5

    const-string v0, "JS-Video-Brigde"

    const-string v1, "click"

    .line 157
    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 159
    :try_start_0
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-nez v1, :cond_3

    .line 164
    :try_start_1
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string p2, "type"

    .line 165
    invoke-virtual {v1, p2}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result p2

    const-string v2, "pt"

    .line 166
    invoke-virtual {v1, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1
    :try_end_1
    .catch Lorg/json/JSONException; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_0

    :catch_0
    move-exception p2

    const/4 v1, 0x1

    :try_start_2
    const-string v2, ""

    .line 170
    invoke-virtual {p2}, Lorg/json/JSONException;->printStackTrace()V

    move p2, v1

    move-object v1, v2

    .line 173
    :goto_0
    new-instance v2, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge$1;

    invoke-direct {v2, p0, p1}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge$1;-><init>(Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;Ljava/lang/Object;)V

    .line 194
    iget-object v3, p0, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->a:Lcom/mbridge/msdk/video/js/factory/IJSFactory;

    if-eqz v3, :cond_1

    if-eqz p1, :cond_0

    .line 196
    check-cast p1, Lcom/mbridge/msdk/mbjscommon/windvane/a;

    .line 197
    iget-object v3, p1, Lcom/mbridge/msdk/mbjscommon/windvane/a;->a:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    if-eqz v3, :cond_0

    iget-object v3, p1, Lcom/mbridge/msdk/mbjscommon/windvane/a;->a:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    invoke-virtual {v3}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->getContext()Landroid/content/Context;

    move-result-object v3

    if-eqz v3, :cond_0

    .line 198
    iget-object p1, p1, Lcom/mbridge/msdk/mbjscommon/windvane/a;->a:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    invoke-virtual {p1}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->getContext()Landroid/content/Context;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 199
    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v3

    if-eq p1, v3, :cond_0

    .line 200
    iget-object v3, p0, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->a:Lcom/mbridge/msdk/video/js/factory/IJSFactory;

    invoke-interface {v3}, Lcom/mbridge/msdk/video/js/factory/IJSFactory;->getJSCommon()Lcom/mbridge/msdk/video/js/c;

    move-result-object v3

    invoke-interface {v3, p1}, Lcom/mbridge/msdk/video/js/c;->a(Landroid/content/Context;)V

    .line 204
    :cond_0
    iget-object p1, p0, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->a:Lcom/mbridge/msdk/video/js/factory/IJSFactory;

    invoke-interface {p1}, Lcom/mbridge/msdk/video/js/factory/IJSFactory;->getJSCommon()Lcom/mbridge/msdk/video/js/c;

    move-result-object p1

    invoke-interface {p1, v2}, Lcom/mbridge/msdk/video/js/c;->a(Lcom/mbridge/msdk/video/bt/module/a/b;)V

    .line 205
    iget-object p1, p0, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->a:Lcom/mbridge/msdk/video/js/factory/IJSFactory;

    invoke-interface {p1}, Lcom/mbridge/msdk/video/js/factory/IJSFactory;->getJSCommon()Lcom/mbridge/msdk/video/js/c;

    move-result-object p1

    invoke-interface {p1, p2, v1}, Lcom/mbridge/msdk/video/js/c;->click(ILjava/lang/String;)V

    goto :goto_1

    :cond_1
    if-eqz p1, :cond_3

    .line 208
    check-cast p1, Lcom/mbridge/msdk/mbjscommon/windvane/a;

    .line 209
    iget-object v3, p1, Lcom/mbridge/msdk/mbjscommon/windvane/a;->a:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    invoke-virtual {v3}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->getObject()Ljava/lang/Object;

    move-result-object v3

    instance-of v3, v3, Lcom/mbridge/msdk/video/js/a/j;

    if-eqz v3, :cond_3

    .line 210
    iget-object v3, p1, Lcom/mbridge/msdk/mbjscommon/windvane/a;->a:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    invoke-virtual {v3}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->getObject()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/mbridge/msdk/video/js/a/j;

    if-eqz v3, :cond_3

    .line 212
    iget-object p1, p1, Lcom/mbridge/msdk/mbjscommon/windvane/a;->a:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    invoke-virtual {p1}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->getContext()Landroid/content/Context;

    move-result-object p1

    if-eqz p1, :cond_2

    .line 213
    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v4

    if-eq p1, v4, :cond_2

    .line 214
    invoke-virtual {v3, p1}, Lcom/mbridge/msdk/video/js/a/j;->a(Landroid/content/Context;)V

    .line 216
    :cond_2
    invoke-virtual {v3, v2}, Lcom/mbridge/msdk/video/js/a/j;->a(Lcom/mbridge/msdk/video/bt/module/a/b;)V

    .line 217
    invoke-virtual {v3, p2, v1}, Lcom/mbridge/msdk/video/js/a/j;->click(ILjava/lang/String;)V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    goto :goto_1

    :catchall_0
    move-exception p1

    const-string p2, "click error"

    .line 224
    invoke-static {v0, p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :cond_3
    :goto_1
    return-void
.end method

.method public closeAd(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 1244
    invoke-direct {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->a(Ljava/lang/Object;Ljava/lang/String;)V

    .line 1246
    :try_start_0
    invoke-static {}, Lcom/mbridge/msdk/video/bt/a/c;->a()Lcom/mbridge/msdk/video/bt/a/c;

    move-result-object v0

    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1, v1}, Lcom/mbridge/msdk/video/bt/a/c;->J(Ljava/lang/Object;Lorg/json/JSONObject;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 1248
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "closeAd error "

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string p2, "JS-Video-Brigde"

    invoke-static {p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method public closeVideoOperte(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 4

    const-string v0, "JS-Video-Brigde"

    .line 328
    :try_start_0
    iget-object v1, p0, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->a:Lcom/mbridge/msdk/video/js/factory/IJSFactory;

    if-eqz v1, :cond_0

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    .line 329
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string p2, "close"

    .line 330
    invoke-virtual {v1, p2}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result p2

    const-string v2, "view_visible"

    .line 331
    invoke-virtual {v1, v2}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v1

    .line 332
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "closeVideoOperte,close:"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v3, ",viewVisible:"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v0, v2}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 333
    iget-object v2, p0, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->a:Lcom/mbridge/msdk/video/js/factory/IJSFactory;

    invoke-interface {v2}, Lcom/mbridge/msdk/video/js/factory/IJSFactory;->getJSVideoModule()Lcom/mbridge/msdk/video/js/i;

    move-result-object v2

    invoke-interface {v2, p2, v1}, Lcom/mbridge/msdk/video/js/i;->closeVideoOperate(II)V

    .line 335
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a()Lcom/mbridge/msdk/mbjscommon/windvane/h;

    move-result-object p2

    const/4 v1, 0x0

    invoke-direct {p0, v1}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->b(I)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p2, p1, v1}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    const-string p2, "closeOperte error"

    .line 338
    invoke-static {v0, p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :cond_0
    :goto_0
    return-void
.end method

.method public closeWeb(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 1

    .line 1264
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "type"

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string v0, "JS-Video-Brigde"

    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 1266
    :try_start_0
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_0

    return-void

    .line 1269
    :cond_0
    iget-object p1, p0, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->a:Lcom/mbridge/msdk/video/js/factory/IJSFactory;

    if-eqz p1, :cond_1

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_1

    .line 1270
    new-instance p1, Lorg/json/JSONObject;

    invoke-direct {p1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string p2, "status"

    .line 1271
    invoke-virtual {p1, p2}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result p1

    .line 1272
    iget-object p2, p0, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->a:Lcom/mbridge/msdk/video/js/factory/IJSFactory;

    invoke-interface {p2}, Lcom/mbridge/msdk/video/js/factory/IJSFactory;->getJSContainerModule()Lcom/mbridge/msdk/video/js/e;

    move-result-object p2

    invoke-interface {p2}, Lcom/mbridge/msdk/video/js/e;->hideAlertWebview()V

    .line 1273
    iget-object p2, p0, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->a:Lcom/mbridge/msdk/video/js/factory/IJSFactory;

    invoke-interface {p2}, Lcom/mbridge/msdk/video/js/factory/IJSFactory;->getJSVideoModule()Lcom/mbridge/msdk/video/js/i;

    move-result-object p2

    invoke-interface {p2, p1}, Lcom/mbridge/msdk/video/js/i;->hideAlertView(I)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    const-string p2, "closeWeb"

    .line 1276
    invoke-static {v0, p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :cond_1
    :goto_0
    return-void
.end method

.method public createNativeEC(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 1359
    invoke-direct {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->a(Ljava/lang/Object;Ljava/lang/String;)V

    .line 1361
    :try_start_0
    invoke-static {}, Lcom/mbridge/msdk/video/bt/a/c;->a()Lcom/mbridge/msdk/video/bt/a/c;

    move-result-object v0

    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1, v1}, Lcom/mbridge/msdk/video/bt/a/c;->P(Ljava/lang/Object;Lorg/json/JSONObject;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 1363
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "createNativeEC error "

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string p2, "JS-Video-Brigde"

    invoke-static {p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method public createPlayerView(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 853
    invoke-direct {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->a(Ljava/lang/Object;Ljava/lang/String;)V

    .line 855
    :try_start_0
    invoke-static {}, Lcom/mbridge/msdk/video/bt/a/c;->a()Lcom/mbridge/msdk/video/bt/a/c;

    move-result-object v0

    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1, v1}, Lcom/mbridge/msdk/video/bt/a/c;->c(Ljava/lang/Object;Lorg/json/JSONObject;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 857
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "createPlayerView error "

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string p2, "JS-Video-Brigde"

    invoke-static {p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method public createSubPlayTemplateView(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 863
    invoke-direct {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->a(Ljava/lang/Object;Ljava/lang/String;)V

    .line 865
    :try_start_0
    invoke-static {}, Lcom/mbridge/msdk/video/bt/a/c;->a()Lcom/mbridge/msdk/video/bt/a/c;

    move-result-object v0

    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1, v1}, Lcom/mbridge/msdk/video/bt/a/c;->d(Ljava/lang/Object;Lorg/json/JSONObject;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 867
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "createSubPlayTemplateView error "

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string p2, "JS-Video-Brigde"

    invoke-static {p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method public createView(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 843
    invoke-direct {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->a(Ljava/lang/Object;Ljava/lang/String;)V

    .line 845
    :try_start_0
    invoke-static {}, Lcom/mbridge/msdk/video/bt/a/c;->a()Lcom/mbridge/msdk/video/bt/a/c;

    move-result-object v0

    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1, v1}, Lcom/mbridge/msdk/video/bt/a/c;->a(Ljava/lang/Object;Lorg/json/JSONObject;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 847
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "createWebview error "

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string p2, "JS-Video-Brigde"

    invoke-static {p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method public createWebview(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 834
    invoke-direct {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->a(Ljava/lang/Object;Ljava/lang/String;)V

    .line 836
    :try_start_0
    invoke-static {}, Lcom/mbridge/msdk/video/bt/a/c;->a()Lcom/mbridge/msdk/video/bt/a/c;

    move-result-object v0

    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1, v1}, Lcom/mbridge/msdk/video/bt/a/c;->b(Ljava/lang/Object;Lorg/json/JSONObject;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 838
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "createWebview error "

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string p2, "JS-Video-Brigde"

    invoke-static {p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method public destroyComponent(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 879
    invoke-direct {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->a(Ljava/lang/Object;Ljava/lang/String;)V

    .line 881
    :try_start_0
    invoke-static {}, Lcom/mbridge/msdk/video/bt/a/c;->a()Lcom/mbridge/msdk/video/bt/a/c;

    move-result-object v0

    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1, v1}, Lcom/mbridge/msdk/video/bt/a/c;->e(Ljava/lang/Object;Lorg/json/JSONObject;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 883
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "destroyComponent error "

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string p2, "JS-Video-Brigde"

    invoke-static {p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method public getAllCache(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 8

    .line 1502
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/b;->a()Lcom/mbridge/msdk/foundation/controller/b;

    move-result-object p2

    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/controller/b;->d()Z

    move-result p2

    const-string v0, "MBridgeH5CacheSP"

    const/4 v1, 0x0

    if-eqz p2, :cond_0

    iget-object p2, p0, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->b:Lcom/mbridge/msdk/foundation/tools/FastKV;

    if-nez p2, :cond_0

    .line 1504
    :try_start_0
    new-instance p2, Lcom/mbridge/msdk/foundation/tools/FastKV$Builder;

    sget-object v2, Lcom/mbridge/msdk/foundation/same/b/c;->m:Lcom/mbridge/msdk/foundation/same/b/c;

    invoke-static {v2}, Lcom/mbridge/msdk/foundation/same/b/e;->b(Lcom/mbridge/msdk/foundation/same/b/c;)Ljava/lang/String;

    move-result-object v2

    invoke-direct {p2, v2, v0}, Lcom/mbridge/msdk/foundation/tools/FastKV$Builder;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/tools/FastKV$Builder;->build()Lcom/mbridge/msdk/foundation/tools/FastKV;

    move-result-object p2

    iput-object p2, p0, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->b:Lcom/mbridge/msdk/foundation/tools/FastKV;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    .line 1506
    :catch_0
    iput-object v1, p0, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->b:Lcom/mbridge/msdk/foundation/tools/FastKV;

    .line 1510
    :cond_0
    :goto_0
    iget-object p2, p0, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->b:Lcom/mbridge/msdk/foundation/tools/FastKV;

    const-string v2, "getAllCache Success"

    const/4 v3, 0x0

    const-string v4, "getAllCache Error, reason is : "

    const-string v5, "getAllCache error "

    const-string v6, "JS-Video-Brigde"

    if-eqz p2, :cond_1

    .line 1512
    :try_start_1
    new-instance p2, Lorg/json/JSONObject;

    invoke-direct {p2}, Lorg/json/JSONObject;-><init>()V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    .line 1515
    :try_start_2
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->b:Lcom/mbridge/msdk/foundation/tools/FastKV;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/tools/FastKV;->getAll()Ljava/util/Map;

    move-result-object v1
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_1
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    goto :goto_1

    :catchall_0
    move-exception v0

    move-object v1, p2

    goto :goto_3

    :catch_1
    :goto_1
    if-eqz v1, :cond_3

    .line 1520
    :try_start_3
    invoke-interface {v1}, Ljava/util/Map;->entrySet()Ljava/util/Set;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_2
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_3

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/util/Map$Entry;

    .line 1521
    invoke-interface {v1}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v7

    check-cast v7, Ljava/lang/String;

    invoke-interface {v1}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v1

    invoke-virtual {p2, v7, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    goto :goto_2

    :catchall_1
    move-exception v0

    .line 1526
    :goto_3
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p2, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-static {v6, p2}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 1527
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    goto :goto_6

    .line 1531
    :cond_1
    :try_start_4
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object p2

    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object p2

    .line 1532
    invoke-virtual {p2, v0, v3}, Landroid/content/Context;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object p2

    .line 1533
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_3

    .line 1534
    :try_start_5
    invoke-interface {p2}, Landroid/content/SharedPreferences;->getAll()Ljava/util/Map;

    move-result-object p2

    .line 1535
    invoke-interface {p2}, Ljava/util/Map;->entrySet()Ljava/util/Set;

    move-result-object p2

    invoke-interface {p2}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object p2

    :goto_4
    invoke-interface {p2}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_2

    invoke-interface {p2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/util/Map$Entry;

    .line 1536
    invoke-interface {v1}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v7

    check-cast v7, Ljava/lang/String;

    invoke-interface {v1}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v1

    invoke-virtual {v0, v7, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_5
    .catchall {:try_start_5 .. :try_end_5} :catchall_2

    goto :goto_4

    :cond_2
    move-object p2, v0

    goto :goto_7

    :catchall_2
    move-exception p2

    move-object v1, v0

    goto :goto_5

    :catchall_3
    move-exception p2

    .line 1540
    :goto_5
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v6, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 1541
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    :goto_6
    move-object p2, v1

    .line 1545
    :cond_3
    :goto_7
    :try_start_6
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    const-string v1, "code"

    .line 1546
    invoke-virtual {v0, v1, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "message"

    .line 1547
    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_6
    .catchall {:try_start_6 .. :try_end_6} :catchall_4

    const-string v1, "data"

    if-eqz p2, :cond_4

    .line 1549
    :try_start_7
    invoke-virtual {v0, v1, p2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    goto :goto_8

    :cond_4
    const-string p2, "{}"

    .line 1551
    invoke-virtual {v0, v1, p2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    :goto_8
    if-eqz p1, :cond_5

    .line 1554
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a()Lcom/mbridge/msdk/mbjscommon/windvane/h;

    move-result-object p2

    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/String;->getBytes()[B

    move-result-object v0

    const/4 v1, 0x2

    invoke-static {v0, v1}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p2, p1, v0}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_7
    .catchall {:try_start_7 .. :try_end_7} :catchall_4

    goto :goto_9

    :catchall_4
    move-exception p1

    .line 1557
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p2, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v6, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_5
    :goto_9
    return-void
.end method

.method public getAppSetting(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 6

    .line 1622
    :try_start_0
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string p2, "appid"

    const-string v1, ""

    .line 1623
    invoke-virtual {v0, p2, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    .line 1626
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    .line 1628
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const/4 v2, 0x1

    const-string v3, "message"

    const-string v4, "code"

    if-nez v1, :cond_2

    .line 1629
    :try_start_1
    invoke-static {}, Lcom/mbridge/msdk/c/b;->a()Lcom/mbridge/msdk/c/b;

    move-result-object v1

    invoke-virtual {v1, p2}, Lcom/mbridge/msdk/c/b;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    .line 1630
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    const/4 v5, 0x0

    if-eqz v1, :cond_0

    .line 1631
    invoke-static {}, Lcom/mbridge/msdk/c/b;->a()Lcom/mbridge/msdk/c/b;

    move-result-object p2

    invoke-virtual {p2}, Lcom/mbridge/msdk/c/b;->b()Lcom/mbridge/msdk/c/a;

    move-result-object p2

    .line 1632
    invoke-virtual {p2}, Lcom/mbridge/msdk/c/a;->bd()Ljava/lang/String;

    move-result-object p2

    .line 1633
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    goto :goto_0

    .line 1635
    :cond_0
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string p2, "isDefault"

    .line 1636
    invoke-virtual {v1, p2, v5}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    :goto_0
    if-eqz p1, :cond_1

    .line 1640
    invoke-virtual {v0, v4, v5}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string p2, "Success"

    .line 1641
    invoke-virtual {v0, v3, p2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string p2, "data"

    .line 1642
    invoke-virtual {v0, p2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    goto :goto_1

    .line 1644
    :cond_1
    invoke-virtual {v0, v4, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string p2, "Get App Setting error, plz try again later."

    .line 1645
    invoke-virtual {v0, v3, p2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    goto :goto_1

    .line 1648
    :cond_2
    invoke-virtual {v0, v4, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string p2, "Get App Setting error, because must give a appId."

    .line 1649
    invoke-virtual {v0, v3, p2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 1651
    :goto_1
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a()Lcom/mbridge/msdk/mbjscommon/windvane/h;

    move-result-object p2

    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/String;->getBytes()[B

    move-result-object v0

    const/4 v1, 0x2

    invoke-static {v0, v1}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p2, p1, v0}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_2

    :catchall_0
    move-exception p1

    .line 1653
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "getAppSetting error : "

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string p2, "JS-Video-Brigde"

    invoke-static {p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :goto_2
    return-void
.end method

.method public getComponentOptions(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 889
    invoke-direct {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->a(Ljava/lang/Object;Ljava/lang/String;)V

    .line 891
    :try_start_0
    invoke-static {}, Lcom/mbridge/msdk/video/bt/a/c;->a()Lcom/mbridge/msdk/video/bt/a/c;

    move-result-object v0

    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1, v1}, Lcom/mbridge/msdk/video/bt/a/c;->f(Ljava/lang/Object;Lorg/json/JSONObject;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 893
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "getComponentOptions error "

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string p2, "JS-Video-Brigde"

    invoke-static {p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method public getCurrentProgress(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 3

    const-string p2, "JS-Video-Brigde"

    .line 377
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->a:Lcom/mbridge/msdk/video/js/factory/IJSFactory;

    if-eqz v0, :cond_1

    .line 378
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->a:Lcom/mbridge/msdk/video/js/factory/IJSFactory;

    invoke-interface {v0}, Lcom/mbridge/msdk/video/js/factory/IJSFactory;->getJSVideoModule()Lcom/mbridge/msdk/video/js/i;

    move-result-object v0

    invoke-interface {v0}, Lcom/mbridge/msdk/video/js/i;->getCurrentProgress()Ljava/lang/String;

    move-result-object v0

    .line 379
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "getCurrentProgress:"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {p2, v1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 380
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    .line 381
    invoke-virtual {v0}, Ljava/lang/String;->getBytes()[B

    move-result-object v0

    const/4 v1, 0x2

    invoke-static {v0, v1}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object v0

    .line 383
    :cond_0
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a()Lcom/mbridge/msdk/mbjscommon/windvane/h;

    move-result-object v1

    invoke-virtual {v1, p1, v0}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    const-string v0, "getCurrentProgress error"

    .line 386
    invoke-static {p2, v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :cond_1
    :goto_0
    return-void
.end method

.method public getCutout(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 4

    const-string p2, "JS-Video-Brigde"

    .line 1603
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->a:Lcom/mbridge/msdk/video/js/factory/IJSFactory;

    invoke-interface {v0}, Lcom/mbridge/msdk/video/js/factory/IJSFactory;->getJSCommon()Lcom/mbridge/msdk/video/js/c;

    move-result-object v0

    invoke-interface {v0}, Lcom/mbridge/msdk/video/js/c;->j()Ljava/lang/String;

    move-result-object v0

    .line 1604
    invoke-static {p2, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    const/4 v1, 0x2

    if-eqz p1, :cond_0

    .line 1606
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_0

    .line 1607
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a()Lcom/mbridge/msdk/mbjscommon/windvane/h;

    move-result-object v2

    invoke-virtual {v0}, Ljava/lang/String;->getBytes()[B

    move-result-object v0

    invoke-static {v0, v1}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v2, p1, v0}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a(Ljava/lang/Object;Ljava/lang/String;)V

    goto :goto_0

    .line 1609
    :cond_0
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    const-string v2, "code"

    const/4 v3, 0x1

    .line 1610
    invoke-virtual {v0, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v2, "message"

    const-string v3, "No notch data, plz try again later."

    .line 1611
    invoke-virtual {v0, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 1612
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a()Lcom/mbridge/msdk/mbjscommon/windvane/h;

    move-result-object v2

    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/String;->getBytes()[B

    move-result-object v0

    invoke-static {v0, v1}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v2, p1, v0}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->b(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 1615
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "getCutout error : "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method public getEncryptPrice(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 7

    const-string v0, ""

    :try_start_0
    const-string v1, "not replaced"

    .line 1732
    new-instance v2, Lorg/json/JSONObject;

    invoke-direct {v2}, Lorg/json/JSONObject;-><init>()V

    .line 1733
    new-instance v3, Lorg/json/JSONObject;

    invoke-direct {v3}, Lorg/json/JSONObject;-><init>()V

    .line 1734
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    const/4 v5, 0x1

    if-eqz v4, :cond_0

    const-string p2, "params is null"

    goto :goto_0

    .line 1737
    :cond_0
    new-instance v4, Lorg/json/JSONObject;

    invoke-direct {v4, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string p2, "unitid"

    .line 1738
    invoke-virtual {v4, p2, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    const-string v6, "requestId"

    .line 1739
    invoke-virtual {v4, v6, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 1740
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-nez v4, :cond_2

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-nez v4, :cond_2

    .line 1741
    invoke-static {p2, v0}, Lcom/mbridge/msdk/foundation/same/a/d;->b(Ljava/lang/String;Ljava/lang/String;)Lcom/mbridge/msdk/foundation/entity/d;

    move-result-object p2

    if-eqz p2, :cond_1

    .line 1743
    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/entity/d;->d()I

    move-result v0

    if-ne v0, v5, :cond_1

    const/4 v0, 0x0

    const-string v1, "success"

    const-string v4, "encrypt_p"

    .line 1748
    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/entity/d;->b()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {v3, v4, p2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string p2, "irlfa"

    .line 1749
    invoke-virtual {v3, p2, v5}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    move v5, v0

    :cond_1
    move-object p2, v1

    goto :goto_0

    :cond_2
    const-string p2, "params parsing exception"

    :goto_0
    const-string v0, "code"

    .line 1756
    invoke-virtual {v2, v0, v5}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v0, "message"

    .line 1757
    invoke-virtual {v2, v0, p2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string p2, "data"

    .line 1758
    invoke-virtual {v2, p2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 1759
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a()Lcom/mbridge/msdk/mbjscommon/windvane/h;

    move-result-object p2

    invoke-virtual {v2}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/String;->getBytes()[B

    move-result-object v0

    const/4 v1, 0x2

    invoke-static {v0, v1}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p2, p1, v0}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_1

    :catchall_0
    move-exception p1

    .line 1761
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "getEncryptPrice error : "

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string p2, "JS-Video-Brigde"

    invoke-static {p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :goto_1
    return-void
.end method

.method public getFileInfo(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 704
    invoke-direct {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->a(Ljava/lang/Object;Ljava/lang/String;)V

    .line 706
    :try_start_0
    invoke-static {}, Lcom/mbridge/msdk/video/bt/a/c;->a()Lcom/mbridge/msdk/video/bt/a/c;

    move-result-object v0

    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1, v1}, Lcom/mbridge/msdk/video/bt/a/c;->O(Ljava/lang/Object;Lorg/json/JSONObject;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    const-string p2, "JS-Video-Brigde"

    const-string v0, "getFileInfo error"

    .line 708
    invoke-static {p2, v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :goto_0
    return-void
.end method

.method public getRewardSetting(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 4

    .line 1660
    :try_start_0
    invoke-static {}, Lcom/mbridge/msdk/videocommon/d/b;->a()Lcom/mbridge/msdk/videocommon/d/b;

    move-result-object p2

    invoke-virtual {p2}, Lcom/mbridge/msdk/videocommon/d/b;->b()Lcom/mbridge/msdk/videocommon/d/a;

    move-result-object p2

    .line 1661
    invoke-virtual {p2}, Lcom/mbridge/msdk/videocommon/d/a;->k()Lorg/json/JSONObject;

    move-result-object p2

    .line 1662
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const-string v1, "message"

    const-string v2, "code"

    if-eqz p1, :cond_0

    if-eqz p2, :cond_0

    const/4 v3, 0x0

    .line 1665
    :try_start_1
    invoke-virtual {v0, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v2, "Success"

    .line 1666
    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "data"

    .line 1667
    invoke-virtual {v0, v1, p2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    goto :goto_0

    :cond_0
    const/4 p2, 0x1

    .line 1669
    invoke-virtual {v0, v2, p2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string p2, "Get Reward Setting error, plz try again later."

    .line 1670
    invoke-virtual {v0, v1, p2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 1672
    :goto_0
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a()Lcom/mbridge/msdk/mbjscommon/windvane/h;

    move-result-object p2

    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/String;->getBytes()[B

    move-result-object v0

    const/4 v1, 0x2

    invoke-static {v0, v1}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p2, p1, v0}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_1

    :catchall_0
    move-exception p1

    .line 1674
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "getRewardSetting error : "

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string p2, "JS-Video-Brigde"

    invoke-static {p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :goto_1
    return-void
.end method

.method public getRewardUnitSetting(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 6

    const-string v0, ""

    .line 1681
    :try_start_0
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string p2, "appid"

    .line 1682
    invoke-virtual {v1, p2, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    const-string v2, "unitid"

    .line 1683
    invoke-virtual {v1, v2, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 1685
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1}, Lorg/json/JSONObject;-><init>()V

    .line 1687
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const/4 v3, 0x1

    const-string v4, "message"

    const-string v5, "code"

    if-nez v2, :cond_1

    :try_start_1
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_1

    .line 1688
    invoke-static {}, Lcom/mbridge/msdk/videocommon/d/b;->a()Lcom/mbridge/msdk/videocommon/d/b;

    move-result-object v2

    invoke-virtual {v2, p2, v0}, Lcom/mbridge/msdk/videocommon/d/b;->a(Ljava/lang/String;Ljava/lang/String;)Lcom/mbridge/msdk/videocommon/d/c;

    move-result-object p2

    .line 1689
    invoke-virtual {p2}, Lcom/mbridge/msdk/videocommon/d/c;->G()Lorg/json/JSONObject;

    move-result-object p2

    if-eqz p1, :cond_0

    if-eqz p2, :cond_0

    const/4 v0, 0x0

    .line 1692
    invoke-virtual {v1, v5, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v0, "Success"

    .line 1693
    invoke-virtual {v1, v4, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v0, "data"

    .line 1694
    invoke-virtual {v1, v0, p2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    goto :goto_0

    .line 1696
    :cond_0
    invoke-virtual {v1, v5, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string p2, "Get Reward Unit Setting error, plz try again later."

    .line 1697
    invoke-virtual {v1, v4, p2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    goto :goto_0

    .line 1700
    :cond_1
    invoke-virtual {v1, v5, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string p2, "Get reward unit Setting error, because must give appId and unitId."

    .line 1701
    invoke-virtual {v1, v4, p2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 1703
    :goto_0
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a()Lcom/mbridge/msdk/mbjscommon/windvane/h;

    move-result-object p2

    invoke-virtual {v1}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/String;->getBytes()[B

    move-result-object v0

    const/4 v1, 0x2

    invoke-static {v0, v1}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p2, p1, v0}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_1

    :catchall_0
    move-exception p1

    .line 1705
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "getRewardUnitSetting error : "

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string p2, "JS-Video-Brigde"

    invoke-static {p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :goto_1
    return-void
.end method

.method public getSDKInfo(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 6

    const-string v0, "JS-Video-Brigde"

    const-string v1, "getSDKInfo"

    .line 727
    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 730
    :try_start_0
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_3

    .line 731
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string p2, "type"

    .line 732
    invoke-virtual {v1, p2}, Lorg/json/JSONObject;->getJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object p2

    .line 733
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1}, Lorg/json/JSONObject;-><init>()V

    .line 734
    iget-object v2, p0, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->a:Lcom/mbridge/msdk/video/js/factory/IJSFactory;

    const/4 v3, 0x0

    if-eqz v2, :cond_0

    .line 735
    :goto_0
    invoke-virtual {p2}, Lorg/json/JSONArray;->length()I

    move-result v2

    if-ge v3, v2, :cond_2

    .line 736
    invoke-virtual {p2, v3}, Lorg/json/JSONArray;->getInt(I)I

    move-result v2

    .line 737
    iget-object v4, p0, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->a:Lcom/mbridge/msdk/video/js/factory/IJSFactory;

    invoke-interface {v4}, Lcom/mbridge/msdk/video/js/factory/IJSFactory;->getJSCommon()Lcom/mbridge/msdk/video/js/c;

    move-result-object v4

    invoke-interface {v4, v2}, Lcom/mbridge/msdk/video/js/c;->h(I)Ljava/lang/String;

    move-result-object v4

    .line 738
    invoke-direct {p0, v2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->a(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    add-int/lit8 v3, v3, 0x1

    goto :goto_0

    :cond_0
    if-eqz p1, :cond_2

    .line 742
    :goto_1
    invoke-virtual {p2}, Lorg/json/JSONArray;->length()I

    move-result v2

    if-ge v3, v2, :cond_2

    .line 743
    invoke-virtual {p2, v3}, Lorg/json/JSONArray;->getInt(I)I

    move-result v2

    .line 744
    move-object v4, p1

    check-cast v4, Lcom/mbridge/msdk/mbjscommon/windvane/a;

    .line 745
    iget-object v5, v4, Lcom/mbridge/msdk/mbjscommon/windvane/a;->a:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    invoke-virtual {v5}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->getObject()Ljava/lang/Object;

    move-result-object v5

    instance-of v5, v5, Lcom/mbridge/msdk/video/js/a/j;

    if-eqz v5, :cond_1

    .line 746
    iget-object v4, v4, Lcom/mbridge/msdk/mbjscommon/windvane/a;->a:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    invoke-virtual {v4}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->getObject()Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/mbridge/msdk/video/js/a/j;

    .line 747
    invoke-direct {p0, v2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->a(I)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v4, v2}, Lcom/mbridge/msdk/video/js/a/j;->h(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v5, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    :cond_1
    add-int/lit8 v3, v3, 0x1

    goto :goto_1

    .line 752
    :cond_2
    invoke-virtual {v1}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p2

    .line 753
    invoke-virtual {p2}, Ljava/lang/String;->getBytes()[B

    move-result-object p2

    const/4 v1, 0x2

    invoke-static {p2, v1}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object p2

    .line 754
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a()Lcom/mbridge/msdk/mbjscommon/windvane/h;

    move-result-object v1

    invoke-virtual {v1, p1, p2}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a(Ljava/lang/Object;Ljava/lang/String;)V

    goto :goto_2

    .line 756
    :cond_3
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a()Lcom/mbridge/msdk/mbjscommon/windvane/h;

    move-result-object p2

    const-string v1, "params is null"

    invoke-virtual {p2, p1, v1}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->b(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_2

    :catchall_0
    move-exception p2

    const-string v1, "getSDKInfo error"

    .line 759
    invoke-static {v0, v1, p2}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    .line 760
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a()Lcom/mbridge/msdk/mbjscommon/windvane/h;

    move-result-object p2

    const-string v0, "exception"

    invoke-virtual {p2, p1, v0}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->b(Ljava/lang/Object;Ljava/lang/String;)V

    :goto_2
    return-void
.end method

.method public getUnitSetting(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 1712
    :try_start_0
    new-instance p2, Lorg/json/JSONObject;

    invoke-direct {p2}, Lorg/json/JSONObject;-><init>()V

    const-string v0, "code"

    const/4 v1, 0x1

    .line 1713
    invoke-virtual {p2, v0, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v0, "message"

    const-string v1, "Get Unit Setting error, RV/IV can not support this method."

    .line 1714
    invoke-virtual {p2, v0, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 1715
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a()Lcom/mbridge/msdk/mbjscommon/windvane/h;

    move-result-object v0

    invoke-virtual {p2}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p2}, Ljava/lang/String;->getBytes()[B

    move-result-object p2

    const/4 v1, 0x2

    invoke-static {p2, v1}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object p2

    invoke-virtual {v0, p1, p2}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 1717
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "getUnitSetting error : "

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string p2, "JS-Video-Brigde"

    invoke-static {p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method public gial(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 7

    .line 489
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "gial:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    const-string v0, "JS-Video-Brigde"

    invoke-static {v0, p2}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 491
    :try_start_0
    new-instance p2, Lorg/json/JSONObject;

    invoke-direct {p2}, Lorg/json/JSONObject;-><init>()V

    const-string v1, "code"

    .line 492
    sget v2, Lcom/mbridge/msdk/mbjscommon/bridge/b;->b:I

    invoke-virtual {p2, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 493
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1}, Lorg/json/JSONObject;-><init>()V

    .line 494
    sget-object v2, Lcom/mbridge/msdk/foundation/controller/a;->c:Ljava/util/List;

    .line 495
    new-instance v3, Lorg/json/JSONArray;

    invoke-direct {v3}, Lorg/json/JSONArray;-><init>()V

    if-eqz v2, :cond_0

    .line 496
    invoke-interface {v2}, Ljava/util/List;->size()I

    move-result v4

    if-lez v4, :cond_0

    .line 497
    invoke-interface {v2}, Ljava/util/List;->size()I

    move-result v4

    const/4 v5, 0x0

    :goto_0
    if-ge v5, v4, :cond_0

    .line 499
    invoke-interface {v2, v5}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v6

    invoke-virtual {v3, v6}, Lorg/json/JSONArray;->put(Ljava/lang/Object;)Lorg/json/JSONArray;

    add-int/lit8 v5, v5, 0x1

    goto :goto_0

    :cond_0
    const-string v2, "packageNameList"

    .line 502
    invoke-virtual {v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v2, "data"

    .line 503
    invoke-virtual {p2, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 504
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a()Lcom/mbridge/msdk/mbjscommon/windvane/h;

    move-result-object v1

    invoke-virtual {p2}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p2}, Ljava/lang/String;->getBytes()[B

    move-result-object p2

    const/4 v2, 0x2

    invoke-static {p2, v2}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object p2

    invoke-virtual {v1, p1, p2}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_1

    :catchall_0
    move-exception p2

    .line 509
    invoke-virtual {p2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v1

    invoke-static {p1, v1}, Lcom/mbridge/msdk/mbjscommon/bridge/b;->a(Ljava/lang/Object;Ljava/lang/String;)V

    .line 510
    invoke-virtual {p2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_1

    :catch_0
    move-exception p2

    .line 506
    invoke-virtual {p2}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v1

    invoke-static {p1, v1}, Lcom/mbridge/msdk/mbjscommon/bridge/b;->a(Ljava/lang/Object;Ljava/lang/String;)V

    .line 507
    invoke-virtual {p2}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    :goto_1
    return-void
.end method

.method public handleNativeObject(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 1329
    invoke-direct {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->a(Ljava/lang/Object;Ljava/lang/String;)V

    .line 1331
    :try_start_0
    invoke-static {}, Lcom/mbridge/msdk/video/bt/a/b;->a()Lcom/mbridge/msdk/video/bt/a/b;

    move-result-object v0

    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1, v1}, Lcom/mbridge/msdk/video/bt/a/b;->a(Ljava/lang/Object;Lorg/json/JSONObject;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 1333
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "handleNativeObject error "

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string p2, "JS-Video-Brigde"

    invoke-static {p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method public handlerH5Exception(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 3

    const-string p1, "JS-Video-Brigde"

    .line 576
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->a:Lcom/mbridge/msdk/video/js/factory/IJSFactory;

    if-eqz v0, :cond_0

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 577
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    .line 578
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "handlerH5Exception,params:"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-static {p1, p2}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    const-string p2, "code"

    const/16 v1, -0x3e7

    .line 579
    invoke-virtual {v0, p2, v1}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result p2

    const-string v1, "message"

    const-string v2, "h5 error"

    .line 580
    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 581
    iget-object v1, p0, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->a:Lcom/mbridge/msdk/video/js/factory/IJSFactory;

    invoke-interface {v1}, Lcom/mbridge/msdk/video/js/factory/IJSFactory;->getJSCommon()Lcom/mbridge/msdk/video/js/c;

    move-result-object v1

    invoke-interface {v1, p2, v0}, Lcom/mbridge/msdk/video/js/c;->handlerH5Exception(ILjava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p2

    const-string v0, "handlerH5Exception"

    .line 584
    invoke-static {p1, v0, p2}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :cond_0
    :goto_0
    return-void
.end method

.method public hideView(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 974
    invoke-direct {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->a(Ljava/lang/Object;Ljava/lang/String;)V

    .line 976
    :try_start_0
    invoke-static {}, Lcom/mbridge/msdk/video/bt/a/c;->a()Lcom/mbridge/msdk/video/bt/a/c;

    move-result-object v0

    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1, v1}, Lcom/mbridge/msdk/video/bt/a/c;->n(Ljava/lang/Object;Lorg/json/JSONObject;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 978
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "hideView error "

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string p2, "JS-Video-Brigde"

    invoke-static {p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method public increaseOfferFrequence(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 1319
    invoke-direct {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->a(Ljava/lang/Object;Ljava/lang/String;)V

    .line 1321
    :try_start_0
    invoke-static {}, Lcom/mbridge/msdk/video/bt/a/c;->a()Lcom/mbridge/msdk/video/bt/a/c;

    move-result-object v0

    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1, v1}, Lcom/mbridge/msdk/video/bt/a/c;->N(Ljava/lang/Object;Lorg/json/JSONObject;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 1323
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "increaseOfferFrequence error "

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string p2, "JS-Video-Brigde"

    invoke-static {p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method public init(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 17

    move-object/from16 v1, p0

    move-object/from16 v0, p1

    move-object/from16 v2, p2

    const-string v3, "JS-Video-Brigde"

    const-string v4, "init"

    .line 93
    invoke-static {v3, v4}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 95
    :try_start_0
    iget-object v4, v1, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->a:Lcom/mbridge/msdk/video/js/factory/IJSFactory;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const-string v6, "showAlertRole"

    const-string v7, "webfront"

    const-string v8, "h5cbp"

    const-string v9, "orientationType"

    const-string v10, "closeType"

    const-string v11, "mute"

    const-string v12, "showTransparent"

    const/4 v13, 0x2

    const/4 v14, 0x1

    if-eqz v4, :cond_3

    .line 96
    :try_start_1
    iget-object v4, v1, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->a:Lcom/mbridge/msdk/video/js/factory/IJSFactory;

    invoke-interface {v4}, Lcom/mbridge/msdk/video/js/factory/IJSFactory;->getJSCommon()Lcom/mbridge/msdk/video/js/c;

    move-result-object v4

    invoke-interface {v4}, Lcom/mbridge/msdk/video/js/c;->d()Ljava/lang/String;

    move-result-object v4

    .line 97
    invoke-static {v4}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v15

    if-nez v15, :cond_0

    .line 98
    invoke-virtual {v4}, Ljava/lang/String;->getBytes()[B

    move-result-object v4

    invoke-static {v4, v13}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object v4

    .line 100
    :cond_0
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a()Lcom/mbridge/msdk/mbjscommon/windvane/h;

    move-result-object v13

    invoke-virtual {v13, v0, v4}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a(Ljava/lang/Object;Ljava/lang/String;)V

    .line 102
    iget-object v0, v1, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->a:Lcom/mbridge/msdk/video/js/factory/IJSFactory;

    invoke-interface {v0}, Lcom/mbridge/msdk/video/js/factory/IJSFactory;->getJSCommon()Lcom/mbridge/msdk/video/js/c;

    move-result-object v0

    invoke-interface {v0, v14}, Lcom/mbridge/msdk/video/js/c;->b(Z)V

    .line 103
    invoke-static/range {p2 .. p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_7

    .line 104
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0, v2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    .line 105
    invoke-virtual {v0, v12}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v2

    .line 106
    invoke-virtual {v0, v11}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v4

    .line 107
    invoke-virtual {v0, v10}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v10

    .line 108
    invoke-virtual {v0, v9}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v9

    .line 109
    invoke-virtual {v0, v8}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v8

    .line 110
    invoke-virtual {v0, v7}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v7

    .line 111
    invoke-virtual {v0, v6}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    .line 112
    iget-object v6, v1, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->a:Lcom/mbridge/msdk/video/js/factory/IJSFactory;

    invoke-interface {v6}, Lcom/mbridge/msdk/video/js/factory/IJSFactory;->getJSCommon()Lcom/mbridge/msdk/video/js/c;

    move-result-object v6

    if-ne v2, v14, :cond_1

    move v5, v14

    goto :goto_0

    :cond_1
    const/4 v5, 0x0

    :goto_0
    invoke-interface {v6, v5}, Lcom/mbridge/msdk/video/js/c;->a(Z)V

    .line 113
    iget-object v2, v1, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->a:Lcom/mbridge/msdk/video/js/factory/IJSFactory;

    invoke-interface {v2}, Lcom/mbridge/msdk/video/js/factory/IJSFactory;->getJSCommon()Lcom/mbridge/msdk/video/js/c;

    move-result-object v2

    invoke-interface {v2, v4}, Lcom/mbridge/msdk/video/js/c;->b(I)V

    .line 114
    iget-object v2, v1, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->a:Lcom/mbridge/msdk/video/js/factory/IJSFactory;

    invoke-interface {v2}, Lcom/mbridge/msdk/video/js/factory/IJSFactory;->getJSCommon()Lcom/mbridge/msdk/video/js/c;

    move-result-object v2

    invoke-interface {v2, v10}, Lcom/mbridge/msdk/video/js/c;->c(I)V

    .line 115
    iget-object v2, v1, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->a:Lcom/mbridge/msdk/video/js/factory/IJSFactory;

    invoke-interface {v2}, Lcom/mbridge/msdk/video/js/factory/IJSFactory;->getJSCommon()Lcom/mbridge/msdk/video/js/c;

    move-result-object v2

    invoke-interface {v2, v9}, Lcom/mbridge/msdk/video/js/c;->d(I)V

    .line 116
    iget-object v2, v1, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->a:Lcom/mbridge/msdk/video/js/factory/IJSFactory;

    invoke-interface {v2}, Lcom/mbridge/msdk/video/js/factory/IJSFactory;->getJSCommon()Lcom/mbridge/msdk/video/js/c;

    move-result-object v2

    invoke-interface {v2, v8}, Lcom/mbridge/msdk/video/js/c;->e(I)V

    .line 117
    iget-object v2, v1, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->a:Lcom/mbridge/msdk/video/js/factory/IJSFactory;

    invoke-interface {v2}, Lcom/mbridge/msdk/video/js/factory/IJSFactory;->getJSCommon()Lcom/mbridge/msdk/video/js/c;

    move-result-object v2

    invoke-interface {v2, v7}, Lcom/mbridge/msdk/video/js/c;->f(I)V

    .line 118
    iget-object v2, v1, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->a:Lcom/mbridge/msdk/video/js/factory/IJSFactory;

    invoke-interface {v2}, Lcom/mbridge/msdk/video/js/factory/IJSFactory;->getJSCommon()Lcom/mbridge/msdk/video/js/c;

    move-result-object v2

    if-nez v0, :cond_2

    goto :goto_1

    :cond_2
    move v14, v0

    :goto_1
    invoke-interface {v2, v14}, Lcom/mbridge/msdk/video/js/c;->i(I)V

    goto/16 :goto_4

    :cond_3
    if-eqz v0, :cond_7

    .line 123
    move-object v4, v0

    check-cast v4, Lcom/mbridge/msdk/mbjscommon/windvane/a;

    .line 124
    iget-object v15, v4, Lcom/mbridge/msdk/mbjscommon/windvane/a;->a:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    invoke-virtual {v15}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->getObject()Ljava/lang/Object;

    move-result-object v15

    instance-of v15, v15, Lcom/mbridge/msdk/video/js/a/j;

    if-eqz v15, :cond_7

    .line 125
    iget-object v4, v4, Lcom/mbridge/msdk/mbjscommon/windvane/a;->a:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    invoke-virtual {v4}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->getObject()Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/mbridge/msdk/video/js/a/j;

    .line 126
    invoke-virtual {v4}, Lcom/mbridge/msdk/video/js/a/j;->d()Ljava/lang/String;

    move-result-object v15

    .line 127
    invoke-static/range {p2 .. p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v16

    if-nez v16, :cond_6

    .line 128
    new-instance v5, Lorg/json/JSONObject;

    invoke-direct {v5, v2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    .line 129
    invoke-virtual {v5, v12}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v2

    .line 130
    invoke-virtual {v5, v11}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v11

    .line 131
    invoke-virtual {v5, v10}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v10

    .line 132
    invoke-virtual {v5, v9}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v9

    .line 133
    invoke-virtual {v5, v8}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v8

    .line 134
    invoke-virtual {v5, v7}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v7

    .line 135
    invoke-virtual {v5, v6}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v5

    if-ne v2, v14, :cond_4

    move v6, v14

    goto :goto_2

    :cond_4
    const/4 v6, 0x0

    .line 136
    :goto_2
    invoke-virtual {v4, v6}, Lcom/mbridge/msdk/video/js/a/j;->a(Z)V

    .line 137
    invoke-virtual {v4, v11}, Lcom/mbridge/msdk/video/js/a/j;->b(I)V

    .line 138
    invoke-virtual {v4, v10}, Lcom/mbridge/msdk/video/js/a/j;->c(I)V

    .line 139
    invoke-virtual {v4, v9}, Lcom/mbridge/msdk/video/js/a/j;->d(I)V

    .line 140
    invoke-virtual {v4, v8}, Lcom/mbridge/msdk/video/js/a/j;->e(I)V

    .line 141
    invoke-virtual {v4, v7}, Lcom/mbridge/msdk/video/js/a/j;->f(I)V

    if-nez v5, :cond_5

    goto :goto_3

    :cond_5
    move v14, v5

    .line 142
    :goto_3
    invoke-virtual {v4, v14}, Lcom/mbridge/msdk/video/js/a/j;->i(I)V

    .line 143
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "init jsCommon.setIsShowingTransparent = "

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v3, v2}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 145
    :cond_6
    invoke-virtual {v15}, Ljava/lang/String;->getBytes()[B

    move-result-object v2

    invoke-static {v2, v13}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object v2

    .line 146
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a()Lcom/mbridge/msdk/mbjscommon/windvane/h;

    move-result-object v4

    invoke-virtual {v4, v0, v2}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_4

    :catchall_0
    move-exception v0

    const-string v2, "init error"

    .line 151
    invoke-static {v3, v2, v0}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :cond_7
    :goto_4
    return-void
.end method

.method public initialize(Ljava/lang/Object;Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;)V
    .locals 0

    .line 85
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;->initialize(Ljava/lang/Object;Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;)V

    .line 86
    instance-of p2, p1, Lcom/mbridge/msdk/video/js/factory/IJSFactory;

    if-eqz p2, :cond_0

    .line 87
    check-cast p1, Lcom/mbridge/msdk/video/js/factory/IJSFactory;

    iput-object p1, p0, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->a:Lcom/mbridge/msdk/video/js/factory/IJSFactory;

    :cond_0
    return-void
.end method

.method public insertViewAbove(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 1024
    invoke-direct {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->a(Ljava/lang/Object;Ljava/lang/String;)V

    .line 1026
    :try_start_0
    invoke-static {}, Lcom/mbridge/msdk/video/bt/a/c;->a()Lcom/mbridge/msdk/video/bt/a/c;

    move-result-object v0

    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const/4 p2, 0x1

    invoke-virtual {v0, p1, v1, p2}, Lcom/mbridge/msdk/video/bt/a/c;->a(Ljava/lang/Object;Lorg/json/JSONObject;Z)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 1028
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "insertViewAbove error "

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string p2, "JS-Video-Brigde"

    invoke-static {p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method public insertViewBelow(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 1034
    invoke-direct {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->a(Ljava/lang/Object;Ljava/lang/String;)V

    .line 1036
    :try_start_0
    invoke-static {}, Lcom/mbridge/msdk/video/bt/a/c;->a()Lcom/mbridge/msdk/video/bt/a/c;

    move-result-object v0

    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const/4 p2, 0x1

    invoke-virtual {v0, p1, v1, p2}, Lcom/mbridge/msdk/video/bt/a/c;->b(Ljava/lang/Object;Lorg/json/JSONObject;Z)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 1038
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "insertViewBelow error "

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string p2, "JS-Video-Brigde"

    invoke-static {p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method public isSystemResume(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 3

    const-string v0, "JS-Video-Brigde"

    .line 591
    :try_start_0
    iget-object v1, p0, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->a:Lcom/mbridge/msdk/video/js/factory/IJSFactory;

    if-eqz v1, :cond_0

    .line 592
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "isSystemResume,params:"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-static {v0, p2}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 593
    iget-object p2, p0, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->a:Lcom/mbridge/msdk/video/js/factory/IJSFactory;

    invoke-interface {p2}, Lcom/mbridge/msdk/video/js/factory/IJSFactory;->getActivityProxy()Lcom/mbridge/msdk/video/js/a;

    move-result-object p2

    invoke-interface {p2}, Lcom/mbridge/msdk/video/js/a;->h()I

    move-result p2

    .line 594
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a()Lcom/mbridge/msdk/mbjscommon/windvane/h;

    move-result-object v1

    invoke-direct {p0, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->b(I)Ljava/lang/String;

    move-result-object p2

    invoke-virtual {v1, p1, p2}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    const-string p2, "isSystemResume"

    .line 597
    invoke-static {v0, p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :cond_0
    :goto_0
    return-void
.end method

.method public ivRewardAdsWithoutVideo(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 1

    .line 1282
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "ivRewardAdsWithoutVideo \uff1a params"

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string v0, "JS-Video-Brigde"

    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 1284
    :try_start_0
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_0

    return-void

    .line 1288
    :cond_0
    iget-object p1, p0, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->a:Lcom/mbridge/msdk/video/js/factory/IJSFactory;

    if-eqz p1, :cond_1

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_1

    .line 1289
    iget-object p1, p0, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->a:Lcom/mbridge/msdk/video/js/factory/IJSFactory;

    invoke-interface {p1}, Lcom/mbridge/msdk/video/js/factory/IJSFactory;->getJSContainerModule()Lcom/mbridge/msdk/video/js/e;

    move-result-object p1

    invoke-interface {p1, p2}, Lcom/mbridge/msdk/video/js/e;->ivRewardAdsWithoutVideo(Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    const-string p2, "ivRewardAdsWithoutVideo"

    .line 1292
    invoke-static {v0, p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :cond_1
    :goto_0
    return-void
.end method

.method public loadads(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 8

    const-string v0, "JS-Video-Brigde"

    const-string v1, "loadads"

    .line 773
    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    const/4 v1, 0x1

    .line 779
    :try_start_0
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const-string v3, ""

    if-nez v2, :cond_1

    .line 780
    :try_start_1
    new-instance v2, Lorg/json/JSONObject;

    invoke-direct {v2, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    .line 781
    sget-object p2, Lcom/mbridge/msdk/MBridgeConstans;->PLACEMENT_ID:Ljava/lang/String;

    invoke-virtual {v2, p2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    const-string p2, "unitId"

    .line 782
    invoke-virtual {v2, p2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    const-string v4, "type"

    .line 783
    invoke-virtual {v2, v4, v1}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v4

    const/4 v5, 0x2

    if-le v4, v5, :cond_0

    move v4, v1

    :cond_0
    const-string v5, "adtype"

    .line 788
    invoke-virtual {v2, v5, v1}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v2

    move-object v5, p2

    move v7, v2

    move v6, v4

    move-object v4, v3

    goto :goto_0

    :cond_1
    move v6, v1

    move v7, v6

    move-object v4, v3

    move-object v5, v4

    .line 790
    :goto_0
    invoke-static {v5}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p2

    if-eqz p2, :cond_2

    .line 791
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a()Lcom/mbridge/msdk/mbjscommon/windvane/h;

    move-result-object p2

    invoke-direct {p0, v1}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->b(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p2, p1, v2}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    :cond_2
    if-eqz p1, :cond_3

    .line 795
    move-object p2, p1

    check-cast p2, Lcom/mbridge/msdk/mbjscommon/windvane/a;

    .line 796
    iget-object v2, p2, Lcom/mbridge/msdk/mbjscommon/windvane/a;->a:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    instance-of v2, v2, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    if-eqz v2, :cond_3

    .line 797
    iget-object v3, p2, Lcom/mbridge/msdk/mbjscommon/windvane/a;->a:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    .line 798
    invoke-virtual {v3}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->getWebViewListener()Lcom/mbridge/msdk/mbjscommon/windvane/d;

    move-result-object p2

    if-eqz p2, :cond_3

    .line 799
    invoke-virtual {v3}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->getWebViewListener()Lcom/mbridge/msdk/mbjscommon/windvane/d;

    move-result-object p2

    move-object v2, p2

    check-cast v2, Lcom/mbridge/msdk/mbjscommon/c/a;

    invoke-virtual/range {v2 .. v7}, Lcom/mbridge/msdk/mbjscommon/c/a;->a(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;II)V

    .line 803
    :cond_3
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a()Lcom/mbridge/msdk/mbjscommon/windvane/h;

    move-result-object p2

    const/4 v2, 0x0

    invoke-direct {p0, v2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->b(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p2, p1, v2}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_1

    :catchall_0
    move-exception p2

    const-string v2, "loadads error"

    .line 805
    invoke-static {v0, v2, p2}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    .line 806
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a()Lcom/mbridge/msdk/mbjscommon/windvane/h;

    move-result-object p2

    invoke-direct {p0, v1}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->b(I)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p2, p1, v0}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a(Ljava/lang/Object;Ljava/lang/String;)V

    :goto_1
    return-void
.end method

.method public loadingResourceStatus(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 1339
    invoke-direct {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->a(Ljava/lang/Object;Ljava/lang/String;)V

    if-eqz p1, :cond_0

    .line 1342
    :try_start_0
    check-cast p1, Lcom/mbridge/msdk/mbjscommon/windvane/a;

    .line 1343
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string p2, "isReady"

    const/4 v1, 0x1

    .line 1344
    invoke-virtual {v0, p2, v1}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result p2

    .line 1345
    iget-object v0, p1, Lcom/mbridge/msdk/mbjscommon/windvane/a;->a:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    if-eqz v0, :cond_0

    .line 1346
    iget-object p1, p1, Lcom/mbridge/msdk/mbjscommon/windvane/a;->a:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    .line 1347
    invoke-virtual {p1}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->getWebViewListener()Lcom/mbridge/msdk/mbjscommon/windvane/d;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 1348
    invoke-virtual {p1}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->getWebViewListener()Lcom/mbridge/msdk/mbjscommon/windvane/d;

    move-result-object v0

    invoke-interface {v0, p1, p2}, Lcom/mbridge/msdk/mbjscommon/windvane/d;->c(Landroid/webkit/WebView;I)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 1353
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "loadingResourceStatus error "

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string p2, "JS-Video-Brigde"

    invoke-static {p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    :goto_0
    return-void
.end method

.method public notifyCloseBtn(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    const-string p1, "JS-Video-Brigde"

    .line 421
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->a:Lcom/mbridge/msdk/video/js/factory/IJSFactory;

    if-eqz v0, :cond_0

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 422
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string p2, "state"

    .line 423
    invoke-virtual {v0, p2}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result p2

    .line 424
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "notifyCloseBtn,result:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {p1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 425
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->a:Lcom/mbridge/msdk/video/js/factory/IJSFactory;

    invoke-interface {v0}, Lcom/mbridge/msdk/video/js/factory/IJSFactory;->getJSVideoModule()Lcom/mbridge/msdk/video/js/i;

    move-result-object v0

    invoke-interface {v0, p2}, Lcom/mbridge/msdk/video/js/i;->notifyCloseBtn(I)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p2

    const-string v0, "notifyCloseBtn"

    .line 428
    invoke-static {p1, v0, p2}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :cond_0
    :goto_0
    return-void
.end method

.method public onlyAppendSubView(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 944
    invoke-direct {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->a(Ljava/lang/Object;Ljava/lang/String;)V

    .line 946
    :try_start_0
    invoke-static {}, Lcom/mbridge/msdk/video/bt/a/c;->a()Lcom/mbridge/msdk/video/bt/a/c;

    move-result-object v0

    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1, v1}, Lcom/mbridge/msdk/video/bt/a/c;->k(Ljava/lang/Object;Lorg/json/JSONObject;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 948
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "appendSubView error "

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string p2, "JS-Video-Brigde"

    invoke-static {p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method public onlyAppendViewTo(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 954
    invoke-direct {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->a(Ljava/lang/Object;Ljava/lang/String;)V

    .line 956
    :try_start_0
    invoke-static {}, Lcom/mbridge/msdk/video/bt/a/c;->a()Lcom/mbridge/msdk/video/bt/a/c;

    move-result-object v0

    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1, v1}, Lcom/mbridge/msdk/video/bt/a/c;->l(Ljava/lang/Object;Lorg/json/JSONObject;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 958
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "appendViewTo error "

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string p2, "JS-Video-Brigde"

    invoke-static {p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method public onlyInsertViewAbove(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 1043
    invoke-direct {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->a(Ljava/lang/Object;Ljava/lang/String;)V

    .line 1045
    :try_start_0
    invoke-static {}, Lcom/mbridge/msdk/video/bt/a/c;->a()Lcom/mbridge/msdk/video/bt/a/c;

    move-result-object v0

    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1, v1}, Lcom/mbridge/msdk/video/bt/a/c;->s(Ljava/lang/Object;Lorg/json/JSONObject;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 1047
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "insertViewAbove error "

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string p2, "JS-Video-Brigde"

    invoke-static {p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method public onlyInsertViewBelow(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 1053
    invoke-direct {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->a(Ljava/lang/Object;Ljava/lang/String;)V

    .line 1055
    :try_start_0
    invoke-static {}, Lcom/mbridge/msdk/video/bt/a/c;->a()Lcom/mbridge/msdk/video/bt/a/c;

    move-result-object v0

    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1, v1}, Lcom/mbridge/msdk/video/bt/a/c;->t(Ljava/lang/Object;Lorg/json/JSONObject;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 1057
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "insertViewBelow error "

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string p2, "JS-Video-Brigde"

    invoke-static {p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method public openURL(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 434
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "openURL:"

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string v0, "JS-Video-Brigde"

    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 435
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_1

    .line 437
    :try_start_0
    new-instance p1, Lorg/json/JSONObject;

    invoke-direct {p1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string p2, "url"

    .line 438
    invoke-virtual {p1, p2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    const-string v1, "type"

    .line 439
    invoke-virtual {p1, v1}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result p1

    const/4 v1, 0x1

    if-ne p1, v1, :cond_0

    .line 441
    iget-object p1, p0, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->mContext:Landroid/content/Context;

    invoke-static {p1, p2}, Lcom/mbridge/msdk/click/c;->a(Landroid/content/Context;Ljava/lang/String;)V

    goto :goto_0

    :cond_0
    const/4 v1, 0x2

    if-ne p1, v1, :cond_1

    .line 443
    iget-object p1, p0, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->mContext:Landroid/content/Context;

    invoke-static {p1, p2}, Lcom/mbridge/msdk/click/c;->b(Landroid/content/Context;Ljava/lang/String;)V
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 448
    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    :catch_0
    move-exception p1

    .line 446
    invoke-virtual {p1}, Lorg/json/JSONException;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_1
    :goto_0
    return-void
.end method

.method public playVideoFinishOperate(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    const-string p1, "JS-Video-Brigde"

    .line 634
    :try_start_0
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    return-void

    .line 637
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->a:Lcom/mbridge/msdk/video/js/factory/IJSFactory;

    if-eqz v0, :cond_1

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    .line 638
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string p2, "type"

    .line 639
    invoke-virtual {v0, p2}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result p2

    .line 640
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "playVideoFinishOperate,type: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {p1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 641
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->a:Lcom/mbridge/msdk/video/js/factory/IJSFactory;

    invoke-interface {v0}, Lcom/mbridge/msdk/video/js/factory/IJSFactory;->getJSCommon()Lcom/mbridge/msdk/video/js/c;

    move-result-object v0

    invoke-interface {v0, p2}, Lcom/mbridge/msdk/video/js/c;->g(I)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p2

    const-string v0, "playVideoFinishOperate error"

    .line 644
    invoke-static {p1, v0, p2}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :cond_1
    :goto_0
    return-void
.end method

.method public playerGetMuteState(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 1185
    invoke-direct {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->a(Ljava/lang/Object;Ljava/lang/String;)V

    .line 1187
    :try_start_0
    invoke-static {}, Lcom/mbridge/msdk/video/bt/a/c;->a()Lcom/mbridge/msdk/video/bt/a/c;

    move-result-object v0

    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1, v1}, Lcom/mbridge/msdk/video/bt/a/c;->F(Ljava/lang/Object;Lorg/json/JSONObject;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 1189
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "playerGetMuteState error "

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string p2, "JS-Video-Brigde"

    invoke-static {p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method public playerMute(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 1165
    invoke-direct {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->a(Ljava/lang/Object;Ljava/lang/String;)V

    .line 1167
    :try_start_0
    invoke-static {}, Lcom/mbridge/msdk/video/bt/a/c;->a()Lcom/mbridge/msdk/video/bt/a/c;

    move-result-object v0

    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1, v1}, Lcom/mbridge/msdk/video/bt/a/c;->D(Ljava/lang/Object;Lorg/json/JSONObject;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 1169
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "playerMute error "

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string p2, "JS-Video-Brigde"

    invoke-static {p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method public playerPause(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 1125
    invoke-direct {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->a(Ljava/lang/Object;Ljava/lang/String;)V

    .line 1127
    :try_start_0
    invoke-static {}, Lcom/mbridge/msdk/video/bt/a/c;->a()Lcom/mbridge/msdk/video/bt/a/c;

    move-result-object v0

    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1, v1}, Lcom/mbridge/msdk/video/bt/a/c;->z(Ljava/lang/Object;Lorg/json/JSONObject;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 1129
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "playerPause error "

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string p2, "JS-Video-Brigde"

    invoke-static {p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method public playerPlay(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 1115
    invoke-direct {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->a(Ljava/lang/Object;Ljava/lang/String;)V

    .line 1117
    :try_start_0
    invoke-static {}, Lcom/mbridge/msdk/video/bt/a/c;->a()Lcom/mbridge/msdk/video/bt/a/c;

    move-result-object v0

    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1, v1}, Lcom/mbridge/msdk/video/bt/a/c;->y(Ljava/lang/Object;Lorg/json/JSONObject;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 1119
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "playerPlay error "

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string p2, "JS-Video-Brigde"

    invoke-static {p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method public playerResume(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 1135
    invoke-direct {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->a(Ljava/lang/Object;Ljava/lang/String;)V

    .line 1137
    :try_start_0
    invoke-static {}, Lcom/mbridge/msdk/video/bt/a/c;->a()Lcom/mbridge/msdk/video/bt/a/c;

    move-result-object v0

    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1, v1}, Lcom/mbridge/msdk/video/bt/a/c;->A(Ljava/lang/Object;Lorg/json/JSONObject;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 1139
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "playerResume error "

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string p2, "JS-Video-Brigde"

    invoke-static {p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method public playerSetRenderType(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 1205
    invoke-direct {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->a(Ljava/lang/Object;Ljava/lang/String;)V

    .line 1207
    :try_start_0
    invoke-static {}, Lcom/mbridge/msdk/video/bt/a/c;->a()Lcom/mbridge/msdk/video/bt/a/c;

    move-result-object v0

    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1, v1}, Lcom/mbridge/msdk/video/bt/a/c;->H(Ljava/lang/Object;Lorg/json/JSONObject;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 1209
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "playerSetRenderType error "

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string p2, "JS-Video-Brigde"

    invoke-static {p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method public playerSetSource(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 1195
    invoke-direct {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->a(Ljava/lang/Object;Ljava/lang/String;)V

    .line 1197
    :try_start_0
    invoke-static {}, Lcom/mbridge/msdk/video/bt/a/c;->a()Lcom/mbridge/msdk/video/bt/a/c;

    move-result-object v0

    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1, v1}, Lcom/mbridge/msdk/video/bt/a/c;->G(Ljava/lang/Object;Lorg/json/JSONObject;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 1199
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "playerSetSource error "

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string p2, "JS-Video-Brigde"

    invoke-static {p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method public playerStop(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 1145
    invoke-direct {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->a(Ljava/lang/Object;Ljava/lang/String;)V

    .line 1147
    :try_start_0
    invoke-static {}, Lcom/mbridge/msdk/video/bt/a/c;->a()Lcom/mbridge/msdk/video/bt/a/c;

    move-result-object v0

    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1, v1}, Lcom/mbridge/msdk/video/bt/a/c;->B(Ljava/lang/Object;Lorg/json/JSONObject;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 1149
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "playerStop error "

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string p2, "JS-Video-Brigde"

    invoke-static {p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method public playerUnmute(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 1175
    invoke-direct {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->a(Ljava/lang/Object;Ljava/lang/String;)V

    .line 1177
    :try_start_0
    invoke-static {}, Lcom/mbridge/msdk/video/bt/a/c;->a()Lcom/mbridge/msdk/video/bt/a/c;

    move-result-object v0

    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1, v1}, Lcom/mbridge/msdk/video/bt/a/c;->E(Ljava/lang/Object;Lorg/json/JSONObject;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 1179
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "playerUnmute error "

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string p2, "JS-Video-Brigde"

    invoke-static {p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method public playerUpdateFrame(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 1155
    invoke-direct {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->a(Ljava/lang/Object;Ljava/lang/String;)V

    .line 1157
    :try_start_0
    invoke-static {}, Lcom/mbridge/msdk/video/bt/a/c;->a()Lcom/mbridge/msdk/video/bt/a/c;

    move-result-object v0

    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1, v1}, Lcom/mbridge/msdk/video/bt/a/c;->C(Ljava/lang/Object;Lorg/json/JSONObject;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 1159
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "playerUpdateFrame error "

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string p2, "JS-Video-Brigde"

    invoke-static {p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method public preloadSubPlayTemplateView(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 3

    const-string v0, "JS-Video-Brigde"

    .line 1221
    invoke-direct {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->a(Ljava/lang/Object;Ljava/lang/String;)V

    .line 1223
    :try_start_0
    iget-object v1, p0, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->a:Lcom/mbridge/msdk/video/js/factory/IJSFactory;

    if-eqz v1, :cond_0

    .line 1224
    invoke-static {}, Lcom/mbridge/msdk/video/bt/a/c;->a()Lcom/mbridge/msdk/video/bt/a/c;

    move-result-object v1

    new-instance v2, Lorg/json/JSONObject;

    invoke-direct {v2, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-virtual {v1, p1, v2}, Lcom/mbridge/msdk/video/bt/a/c;->I(Ljava/lang/Object;Lorg/json/JSONObject;)V

    goto :goto_0

    .line 1226
    :cond_0
    move-object v1, p1

    check-cast v1, Lcom/mbridge/msdk/mbjscommon/windvane/a;

    .line 1227
    iget-object v2, v1, Lcom/mbridge/msdk/mbjscommon/windvane/a;->a:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    instance-of v2, v2, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    if-eqz v2, :cond_2

    .line 1228
    iget-object v1, v1, Lcom/mbridge/msdk/mbjscommon/windvane/a;->a:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    .line 1229
    invoke-virtual {v1}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->getWebViewListener()Lcom/mbridge/msdk/mbjscommon/windvane/d;

    move-result-object v2

    if-eqz v2, :cond_1

    .line 1230
    invoke-virtual {v1}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->getWebViewListener()Lcom/mbridge/msdk/mbjscommon/windvane/d;

    move-result-object v1

    check-cast v1, Lcom/mbridge/msdk/mbjscommon/c/a;

    invoke-virtual {v1, p1, p2}, Lcom/mbridge/msdk/mbjscommon/c/a;->a(Ljava/lang/Object;Ljava/lang/String;)V

    const-string p1, "preloadSubPlayTemplateView: RVWebViewListener"

    .line 1231
    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    :cond_1
    const-string p1, "preloadSubPlayTemplateView: failed"

    .line 1233
    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 1238
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "preloadSubPlayTemplateView error "

    invoke-virtual {p2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_2
    :goto_0
    return-void
.end method

.method public progressBarOperate(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 1

    .line 362
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->a:Lcom/mbridge/msdk/video/js/factory/IJSFactory;

    if-eqz v0, :cond_0

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 363
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string p2, "view_visible"

    .line 364
    invoke-virtual {v0, p2}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result p2

    .line 365
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->a:Lcom/mbridge/msdk/video/js/factory/IJSFactory;

    invoke-interface {v0}, Lcom/mbridge/msdk/video/js/factory/IJSFactory;->getJSVideoModule()Lcom/mbridge/msdk/video/js/i;

    move-result-object v0

    invoke-interface {v0, p2}, Lcom/mbridge/msdk/video/js/i;->progressBarOperate(I)V

    .line 367
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a()Lcom/mbridge/msdk/mbjscommon/windvane/h;

    move-result-object p2

    const/4 v0, 0x0

    invoke-direct {p0, v0}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->b(I)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p2, p1, v0}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    const-string p2, "JS-Video-Brigde"

    const-string v0, "progressOperate error"

    .line 370
    invoke-static {p2, v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :cond_0
    :goto_0
    return-void
.end method

.method public progressOperate(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 4

    const-string v0, "JS-Video-Brigde"

    .line 345
    :try_start_0
    iget-object v1, p0, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->a:Lcom/mbridge/msdk/video/js/factory/IJSFactory;

    if-eqz v1, :cond_0

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    .line 346
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string p2, "progress"

    .line 347
    invoke-virtual {v1, p2}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result p2

    const-string v2, "view_visible"

    .line 348
    invoke-virtual {v1, v2}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v1

    .line 349
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "progressOperate,progress:"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v3, ",viewVisible:"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v0, v2}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 350
    iget-object v2, p0, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->a:Lcom/mbridge/msdk/video/js/factory/IJSFactory;

    invoke-interface {v2}, Lcom/mbridge/msdk/video/js/factory/IJSFactory;->getJSVideoModule()Lcom/mbridge/msdk/video/js/i;

    move-result-object v2

    invoke-interface {v2, p2, v1}, Lcom/mbridge/msdk/video/js/i;->progressOperate(II)V

    .line 352
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a()Lcom/mbridge/msdk/mbjscommon/windvane/h;

    move-result-object p2

    const/4 v1, 0x0

    invoke-direct {p0, v1}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->b(I)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p2, p1, v1}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    const-string p2, "progressOperate error"

    .line 355
    invoke-static {v0, p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :cond_0
    :goto_0
    return-void
.end method

.method public reactDeveloper(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    const-string v0, "JS-Video-Brigde"

    const-string v1, "reactDeveloper"

    .line 676
    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 678
    :try_start_0
    iget-object v1, p0, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->a:Lcom/mbridge/msdk/video/js/factory/IJSFactory;

    if-eqz v1, :cond_0

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    .line 679
    iget-object v1, p0, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->a:Lcom/mbridge/msdk/video/js/factory/IJSFactory;

    invoke-interface {v1}, Lcom/mbridge/msdk/video/js/factory/IJSFactory;->getJSBTModule()Lcom/mbridge/msdk/video/js/b;

    move-result-object v1

    invoke-interface {v1, p1, p2}, Lcom/mbridge/msdk/video/js/b;->reactDeveloper(Ljava/lang/Object;Ljava/lang/String;)V

    goto :goto_0

    .line 681
    :cond_0
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a()Lcom/mbridge/msdk/mbjscommon/windvane/h;

    move-result-object p2

    const/4 v1, 0x1

    invoke-direct {p0, v1}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->b(I)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p2, p1, v1}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->b(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 684
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "reactDeveloper error "

    invoke-virtual {p2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method public readyStatus(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    if-eqz p1, :cond_1

    .line 611
    :try_start_0
    check-cast p1, Lcom/mbridge/msdk/mbjscommon/windvane/a;

    .line 612
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string p2, "isReady"

    const/4 v1, 0x1

    .line 613
    invoke-virtual {v0, p2, v1}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result p2

    .line 614
    iget-object v0, p1, Lcom/mbridge/msdk/mbjscommon/windvane/a;->a:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    invoke-virtual {v0}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->getObject()Ljava/lang/Object;

    move-result-object v0

    instance-of v0, v0, Lcom/mbridge/msdk/video/js/a/j;

    if-eqz v0, :cond_0

    .line 615
    iget-object v0, p1, Lcom/mbridge/msdk/mbjscommon/windvane/a;->a:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    invoke-virtual {v0}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->getObject()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/mbridge/msdk/video/js/a/j;

    .line 616
    invoke-virtual {v0, p2}, Lcom/mbridge/msdk/video/js/a/j;->j(I)V

    .line 618
    :cond_0
    iget-object v0, p1, Lcom/mbridge/msdk/mbjscommon/windvane/a;->a:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    if-eqz v0, :cond_1

    .line 619
    iget-object p1, p1, Lcom/mbridge/msdk/mbjscommon/windvane/a;->a:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    .line 620
    invoke-virtual {p1}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->getWebViewListener()Lcom/mbridge/msdk/mbjscommon/windvane/d;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 621
    invoke-virtual {p1}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->getWebViewListener()Lcom/mbridge/msdk/mbjscommon/windvane/d;

    move-result-object v0

    invoke-interface {v0, p1, p2}, Lcom/mbridge/msdk/mbjscommon/windvane/d;->a(Landroid/webkit/WebView;I)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    const-string p2, "JS-Video-Brigde"

    const-string v0, "readyStatus"

    .line 627
    invoke-static {p2, v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :cond_1
    :goto_0
    return-void
.end method

.method public removeCacheItem(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 10

    .line 1440
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/b;->a()Lcom/mbridge/msdk/foundation/controller/b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/b;->d()Z

    move-result v0

    const-string v1, "MBridgeH5CacheSP"

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->b:Lcom/mbridge/msdk/foundation/tools/FastKV;

    if-nez v0, :cond_0

    .line 1442
    :try_start_0
    new-instance v0, Lcom/mbridge/msdk/foundation/tools/FastKV$Builder;

    sget-object v2, Lcom/mbridge/msdk/foundation/same/b/c;->m:Lcom/mbridge/msdk/foundation/same/b/c;

    invoke-static {v2}, Lcom/mbridge/msdk/foundation/same/b/e;->b(Lcom/mbridge/msdk/foundation/same/b/c;)Ljava/lang/String;

    move-result-object v2

    invoke-direct {v0, v2, v1}, Lcom/mbridge/msdk/foundation/tools/FastKV$Builder;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/tools/FastKV$Builder;->build()Lcom/mbridge/msdk/foundation/tools/FastKV;

    move-result-object v0

    iput-object v0, p0, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->b:Lcom/mbridge/msdk/foundation/tools/FastKV;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    const/4 v0, 0x0

    .line 1444
    iput-object v0, p0, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->b:Lcom/mbridge/msdk/foundation/tools/FastKV;

    .line 1447
    :cond_0
    :goto_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->b:Lcom/mbridge/msdk/foundation/tools/FastKV;

    const-string v2, "Delete Success"

    const-string v3, "key"

    const-string v4, "Delete Error, reason is : "

    const/4 v5, 0x1

    const-string v6, "removeCacheItem error "

    const-string v7, "JS-Video-Brigde"

    const/4 v8, 0x0

    const-string v9, ""

    if-eqz v0, :cond_3

    .line 1449
    :try_start_1
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_2

    .line 1450
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    .line 1451
    invoke-virtual {v0, v3}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    .line 1452
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    .line 1453
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->b:Lcom/mbridge/msdk/foundation/tools/FastKV;

    invoke-virtual {v0, p2}, Lcom/mbridge/msdk/foundation/tools/FastKV;->remove(Ljava/lang/String;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :cond_1
    :goto_1
    move p2, v5

    goto/16 :goto_3

    :cond_2
    move p2, v8

    move-object v2, v9

    goto/16 :goto_3

    :catchall_0
    move-exception p2

    .line 1459
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v7, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 1460
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    goto :goto_2

    .line 1465
    :cond_3
    :try_start_2
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v0

    .line 1466
    invoke-virtual {v0, v1, v8}, Landroid/content/Context;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object v0

    .line 1467
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_2

    .line 1468
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    .line 1469
    invoke-virtual {v1, v3}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    .line 1470
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_1

    .line 1471
    invoke-interface {v0}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object v0

    invoke-interface {v0, p2}, Landroid/content/SharedPreferences$Editor;->remove(Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    move-result-object p2

    invoke-interface {p2}, Landroid/content/SharedPreferences$Editor;->apply()V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    goto :goto_1

    :catchall_1
    move-exception p2

    .line 1477
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v7, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 1478
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    :goto_2
    move p2, v8

    .line 1484
    :goto_3
    :try_start_3
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    const-string v1, "code"

    if-eqz p2, :cond_4

    move v5, v8

    .line 1485
    :cond_4
    invoke-virtual {v0, v1, v5}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "message"

    .line 1486
    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const/4 v1, 0x2

    if-eqz p1, :cond_5

    if-eqz p2, :cond_5

    .line 1488
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a()Lcom/mbridge/msdk/mbjscommon/windvane/h;

    move-result-object p2

    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/String;->getBytes()[B

    move-result-object v0

    invoke-static {v0, v1}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p2, p1, v0}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a(Ljava/lang/Object;Ljava/lang/String;)V

    goto :goto_4

    .line 1490
    :cond_5
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a()Lcom/mbridge/msdk/mbjscommon/windvane/h;

    move-result-object p2

    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/String;->getBytes()[B

    move-result-object v0

    invoke-static {v0, v1}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p2, p1, v0}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->b(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_2

    goto :goto_4

    .line 1493
    :catchall_2
    invoke-static {v7, v6}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :goto_4
    return-void
.end method

.method public removeFromSuperView(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 915
    invoke-direct {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->a(Ljava/lang/Object;Ljava/lang/String;)V

    .line 917
    :try_start_0
    invoke-static {}, Lcom/mbridge/msdk/video/bt/a/c;->a()Lcom/mbridge/msdk/video/bt/a/c;

    move-result-object v0

    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1, v1}, Lcom/mbridge/msdk/video/bt/a/c;->h(Ljava/lang/Object;Lorg/json/JSONObject;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 919
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "removeFromSuperView error "

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string p2, "JS-Video-Brigde"

    invoke-static {p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method public reportUrls(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    const-string v0, "JS-Video-Brigde"

    const-string v1, "reportUrls"

    .line 690
    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 692
    :try_start_0
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    .line 693
    invoke-static {}, Lcom/mbridge/msdk/video/bt/a/c;->a()Lcom/mbridge/msdk/video/bt/a/c;

    move-result-object v1

    invoke-virtual {v1, p1, p2}, Lcom/mbridge/msdk/video/bt/a/c;->b(Ljava/lang/Object;Ljava/lang/String;)V

    goto :goto_0

    .line 695
    :cond_0
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a()Lcom/mbridge/msdk/mbjscommon/windvane/h;

    move-result-object p2

    const/4 v1, 0x1

    invoke-direct {p0, v1}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->b(I)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p2, p1, v1}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->b(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 698
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "reportUrls error "

    invoke-virtual {p2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method public sendNoticeAndCallBackClick(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 1723
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "{ \"type\":1,\"pt\":"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p2, "}"

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    .line 1724
    invoke-virtual {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->click(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method public setCacheItem(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 11

    .line 1372
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/b;->a()Lcom/mbridge/msdk/foundation/controller/b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/b;->d()Z

    move-result v0

    const-string v1, "MBridgeH5CacheSP"

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->b:Lcom/mbridge/msdk/foundation/tools/FastKV;

    if-nez v0, :cond_0

    .line 1374
    :try_start_0
    new-instance v0, Lcom/mbridge/msdk/foundation/tools/FastKV$Builder;

    sget-object v2, Lcom/mbridge/msdk/foundation/same/b/c;->m:Lcom/mbridge/msdk/foundation/same/b/c;

    invoke-static {v2}, Lcom/mbridge/msdk/foundation/same/b/e;->b(Lcom/mbridge/msdk/foundation/same/b/c;)Ljava/lang/String;

    move-result-object v2

    invoke-direct {v0, v2, v1}, Lcom/mbridge/msdk/foundation/tools/FastKV$Builder;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/tools/FastKV$Builder;->build()Lcom/mbridge/msdk/foundation/tools/FastKV;

    move-result-object v0

    iput-object v0, p0, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->b:Lcom/mbridge/msdk/foundation/tools/FastKV;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    const/4 v0, 0x0

    .line 1376
    iput-object v0, p0, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->b:Lcom/mbridge/msdk/foundation/tools/FastKV;

    .line 1380
    :cond_0
    :goto_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->b:Lcom/mbridge/msdk/foundation/tools/FastKV;

    const-string v2, "Save Success"

    const-string v3, "value"

    const-string v4, "key"

    const-string v5, "Save Error, reason is : "

    const/4 v6, 0x1

    const-string v7, "setCacheItem error "

    const-string v8, "JS-Video-Brigde"

    const/4 v9, 0x0

    const-string v10, ""

    if-eqz v0, :cond_3

    .line 1382
    :try_start_1
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_2

    .line 1383
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    .line 1384
    invoke-virtual {v0, v4}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    .line 1385
    invoke-virtual {v0, v3}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 1386
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_1

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    if-nez v1, :cond_1

    .line 1388
    :try_start_2
    iget-object v1, p0, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->b:Lcom/mbridge/msdk/foundation/tools/FastKV;

    invoke-virtual {v1, p2, v0}, Lcom/mbridge/msdk/foundation/tools/FastKV;->putString(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_1
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    :catch_1
    :cond_1
    :goto_1
    move p2, v6

    goto/16 :goto_3

    :cond_2
    move p2, v9

    move-object v2, v10

    goto/16 :goto_3

    :catchall_0
    move-exception p2

    .line 1397
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v8, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 1398
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    goto :goto_2

    .line 1403
    :cond_3
    :try_start_3
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v0

    .line 1404
    invoke-virtual {v0, v1, v9}, Landroid/content/Context;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object v0

    .line 1405
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_2

    .line 1406
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    .line 1407
    invoke-virtual {v1, v4}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    .line 1408
    invoke-virtual {v1, v3}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 1409
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_1

    .line 1410
    invoke-interface {v0}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object v0

    invoke-interface {v0, p2, v1}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    move-result-object p2

    invoke-interface {p2}, Landroid/content/SharedPreferences$Editor;->apply()V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_1

    goto :goto_1

    :catchall_1
    move-exception p2

    .line 1416
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v8, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 1417
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    :goto_2
    move p2, v9

    .line 1423
    :goto_3
    :try_start_4
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    const-string v1, "code"

    if-eqz p2, :cond_4

    move v6, v9

    .line 1424
    :cond_4
    invoke-virtual {v0, v1, v6}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "message"

    .line 1425
    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const/4 v1, 0x2

    if-eqz p1, :cond_5

    if-eqz p2, :cond_5

    .line 1427
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a()Lcom/mbridge/msdk/mbjscommon/windvane/h;

    move-result-object p2

    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/String;->getBytes()[B

    move-result-object v0

    invoke-static {v0, v1}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p2, p1, v0}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a(Ljava/lang/Object;Ljava/lang/String;)V

    goto :goto_4

    .line 1429
    :cond_5
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a()Lcom/mbridge/msdk/mbjscommon/windvane/h;

    move-result-object p2

    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/String;->getBytes()[B

    move-result-object v0

    invoke-static {v0, v1}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p2, p1, v0}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->b(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_2

    goto :goto_4

    .line 1432
    :catchall_2
    invoke-static {v8, v7}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :goto_4
    return-void
.end method

.method public setScaleFitXY(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    const-string p1, "JS-Video-Brigde"

    .line 407
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->a:Lcom/mbridge/msdk/video/js/factory/IJSFactory;

    if-eqz v0, :cond_0

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 408
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string p2, "fitxy"

    .line 409
    invoke-virtual {v0, p2}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result p2

    .line 410
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "setScaleFitXY,type:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {p1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 411
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->a:Lcom/mbridge/msdk/video/js/factory/IJSFactory;

    invoke-interface {v0}, Lcom/mbridge/msdk/video/js/factory/IJSFactory;->getJSVideoModule()Lcom/mbridge/msdk/video/js/i;

    move-result-object v0

    invoke-interface {v0, p2}, Lcom/mbridge/msdk/video/js/i;->setScaleFitXY(I)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p2

    const-string v0, "showVideoClickView error"

    .line 414
    invoke-static {p1, v0, p2}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :cond_0
    :goto_0
    return-void
.end method

.method public setSubPlayTemplateInfo(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 3

    .line 1298
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "setSubPlayTemplateInfo : "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "JS-Video-Brigde"

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 1299
    invoke-direct {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->a(Ljava/lang/Object;Ljava/lang/String;)V

    .line 1301
    :try_start_0
    invoke-static {}, Lcom/mbridge/msdk/video/bt/a/c;->a()Lcom/mbridge/msdk/video/bt/a/c;

    move-result-object v0

    new-instance v2, Lorg/json/JSONObject;

    invoke-direct {v2, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1, v2}, Lcom/mbridge/msdk/video/bt/a/c;->L(Ljava/lang/Object;Lorg/json/JSONObject;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 1303
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "setSubPlayTemplateInfo error "

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v1, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method public setViewAlpha(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 1004
    invoke-direct {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->a(Ljava/lang/Object;Ljava/lang/String;)V

    .line 1006
    :try_start_0
    invoke-static {}, Lcom/mbridge/msdk/video/bt/a/c;->a()Lcom/mbridge/msdk/video/bt/a/c;

    move-result-object v0

    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1, v1}, Lcom/mbridge/msdk/video/bt/a/c;->q(Ljava/lang/Object;Lorg/json/JSONObject;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 1008
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "setViewAlpha error "

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string p2, "JS-Video-Brigde"

    invoke-static {p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method public setViewBgColor(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 994
    invoke-direct {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->a(Ljava/lang/Object;Ljava/lang/String;)V

    .line 996
    :try_start_0
    invoke-static {}, Lcom/mbridge/msdk/video/bt/a/c;->a()Lcom/mbridge/msdk/video/bt/a/c;

    move-result-object v0

    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1, v1}, Lcom/mbridge/msdk/video/bt/a/c;->p(Ljava/lang/Object;Lorg/json/JSONObject;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 998
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "setViewBgColor error "

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string p2, "JS-Video-Brigde"

    invoke-static {p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method public setViewRect(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 905
    invoke-direct {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->a(Ljava/lang/Object;Ljava/lang/String;)V

    .line 907
    :try_start_0
    invoke-static {}, Lcom/mbridge/msdk/video/bt/a/c;->a()Lcom/mbridge/msdk/video/bt/a/c;

    move-result-object v0

    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1, v1}, Lcom/mbridge/msdk/video/bt/a/c;->g(Ljava/lang/Object;Lorg/json/JSONObject;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 909
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "setViewRect error "

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string p2, "JS-Video-Brigde"

    invoke-static {p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method public setViewScale(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 1014
    invoke-direct {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->a(Ljava/lang/Object;Ljava/lang/String;)V

    .line 1016
    :try_start_0
    invoke-static {}, Lcom/mbridge/msdk/video/bt/a/c;->a()Lcom/mbridge/msdk/video/bt/a/c;

    move-result-object v0

    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1, v1}, Lcom/mbridge/msdk/video/bt/a/c;->r(Ljava/lang/Object;Lorg/json/JSONObject;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 1018
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "setViewScale error "

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string p2, "JS-Video-Brigde"

    invoke-static {p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method public showAlertView(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 3

    const-string v0, "JS-Video-Brigde"

    const-string v1, "showAlertView"

    .line 516
    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 518
    :try_start_0
    iget-object v2, p0, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->a:Lcom/mbridge/msdk/video/js/factory/IJSFactory;

    if-eqz v2, :cond_0

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_0

    .line 519
    iget-object v2, p0, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->a:Lcom/mbridge/msdk/video/js/factory/IJSFactory;

    invoke-interface {v2}, Lcom/mbridge/msdk/video/js/factory/IJSFactory;->getJSVideoModule()Lcom/mbridge/msdk/video/js/i;

    move-result-object v2

    invoke-interface {v2, p2}, Lcom/mbridge/msdk/video/js/i;->showIVRewardAlertView(Ljava/lang/String;)V

    .line 520
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a()Lcom/mbridge/msdk/mbjscommon/windvane/h;

    move-result-object p2

    const-string v2, ""

    invoke-virtual {p2, p1, v1, v2}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 523
    invoke-static {v0, v1, p1}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :cond_0
    :goto_0
    return-void
.end method

.method public showVideoClickView(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    const-string p1, "JS-Video-Brigde"

    .line 393
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->a:Lcom/mbridge/msdk/video/js/factory/IJSFactory;

    if-eqz v0, :cond_0

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 394
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string p2, "type"

    .line 395
    invoke-virtual {v0, p2}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result p2

    .line 396
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "showVideoClickView,type:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {p1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 397
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->a:Lcom/mbridge/msdk/video/js/factory/IJSFactory;

    invoke-interface {v0}, Lcom/mbridge/msdk/video/js/factory/IJSFactory;->getJSContainerModule()Lcom/mbridge/msdk/video/js/e;

    move-result-object v0

    invoke-interface {v0, p2}, Lcom/mbridge/msdk/video/js/e;->showVideoClickView(I)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p2

    const-string v0, "showVideoClickView error"

    .line 400
    invoke-static {p1, v0, p2}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :cond_0
    :goto_0
    return-void
.end method

.method public showVideoLocation(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 12

    const-string p1, "JS-Video-Brigde"

    .line 265
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->a:Lcom/mbridge/msdk/video/js/factory/IJSFactory;

    if-eqz v0, :cond_0

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 266
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string p2, "margin_top"

    const/4 v1, 0x0

    .line 267
    invoke-virtual {v0, p2, v1}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v3

    const-string p2, "margin_left"

    .line 268
    invoke-virtual {v0, p2, v1}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v4

    const-string p2, "view_width"

    .line 269
    invoke-virtual {v0, p2, v1}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v5

    const-string p2, "view_height"

    .line 270
    invoke-virtual {v0, p2, v1}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v6

    const-string p2, "radius"

    .line 271
    invoke-virtual {v0, p2, v1}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v7

    const-string p2, "border_top"

    .line 272
    invoke-virtual {v0, p2, v1}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v8

    const-string p2, "border_left"

    .line 273
    invoke-virtual {v0, p2, v1}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v9

    const-string p2, "border_width"

    .line 274
    invoke-virtual {v0, p2, v1}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v10

    const-string p2, "border_height"

    .line 275
    invoke-virtual {v0, p2, v1}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v11

    .line 277
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "showVideoLocation,margin_top:"

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v0, ",marginLeft:"

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v0, ",viewWidth:"

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v0, ",viewHeight:"

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v0, ",radius:"

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, v7}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v0, ",borderTop: "

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, v8}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v0, ",borderLeft: "

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, v9}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v0, ",borderWidth: "

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, v10}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v0, ",borderHeight: "

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, v11}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-static {p1, p2}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 279
    iget-object p2, p0, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->a:Lcom/mbridge/msdk/video/js/factory/IJSFactory;

    invoke-interface {p2}, Lcom/mbridge/msdk/video/js/factory/IJSFactory;->getJSVideoModule()Lcom/mbridge/msdk/video/js/i;

    move-result-object v2

    invoke-interface/range {v2 .. v11}, Lcom/mbridge/msdk/video/js/i;->showVideoLocation(IIIIIIIII)V

    .line 280
    iget-object p2, p0, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->a:Lcom/mbridge/msdk/video/js/factory/IJSFactory;

    invoke-interface {p2}, Lcom/mbridge/msdk/video/js/factory/IJSFactory;->getJSCommon()Lcom/mbridge/msdk/video/js/c;

    move-result-object p2

    invoke-interface {p2}, Lcom/mbridge/msdk/video/js/c;->g()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p2

    const-string v0, "showVideoLocation error"

    .line 283
    invoke-static {p1, v0, p2}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :cond_0
    :goto_0
    return-void
.end method

.method public showView(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 984
    invoke-direct {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->a(Ljava/lang/Object;Ljava/lang/String;)V

    .line 986
    :try_start_0
    invoke-static {}, Lcom/mbridge/msdk/video/bt/a/c;->a()Lcom/mbridge/msdk/video/bt/a/c;

    move-result-object v0

    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1, v1}, Lcom/mbridge/msdk/video/bt/a/c;->o(Ljava/lang/Object;Lorg/json/JSONObject;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 988
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "showView error "

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string p2, "JS-Video-Brigde"

    invoke-static {p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method public soundOperate(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 5

    const-string v0, "JS-Video-Brigde"

    .line 290
    :try_start_0
    iget-object v1, p0, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->a:Lcom/mbridge/msdk/video/js/factory/IJSFactory;

    if-eqz v1, :cond_1

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_1

    .line 291
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string p2, "mute"

    .line 292
    invoke-virtual {v1, p2}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result p2

    const-string v2, "view_visible"

    .line 293
    invoke-virtual {v1, v2}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v2

    const-string v3, "pt"

    const-string v4, ""

    .line 294
    invoke-virtual {v1, v3, v4}, Lorg/json/JSONObject;->optString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 295
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "soundOperate,mute:"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v4, ",viewVisible:"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v4, ",pt:"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v0, v3}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 296
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-eqz v3, :cond_0

    .line 297
    iget-object v1, p0, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->a:Lcom/mbridge/msdk/video/js/factory/IJSFactory;

    invoke-interface {v1}, Lcom/mbridge/msdk/video/js/factory/IJSFactory;->getJSVideoModule()Lcom/mbridge/msdk/video/js/i;

    move-result-object v1

    invoke-interface {v1, p2, v2}, Lcom/mbridge/msdk/video/js/i;->soundOperate(II)V

    goto :goto_0

    .line 299
    :cond_0
    iget-object v3, p0, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->a:Lcom/mbridge/msdk/video/js/factory/IJSFactory;

    invoke-interface {v3}, Lcom/mbridge/msdk/video/js/factory/IJSFactory;->getJSVideoModule()Lcom/mbridge/msdk/video/js/i;

    move-result-object v3

    invoke-interface {v3, p2, v2, v1}, Lcom/mbridge/msdk/video/js/i;->soundOperate(IILjava/lang/String;)V

    .line 302
    :goto_0
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a()Lcom/mbridge/msdk/mbjscommon/windvane/h;

    move-result-object p2

    const/4 v1, 0x0

    invoke-direct {p0, v1}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->b(I)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p2, p1, v1}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_1

    :catchall_0
    move-exception p1

    const-string p2, "soundOperate error"

    .line 305
    invoke-static {v0, p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :cond_1
    :goto_1
    return-void
.end method

.method public statistics(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 230
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "statistics,params:"

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string v0, "JS-Video-Brigde"

    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 232
    :try_start_0
    iget-object p1, p0, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->a:Lcom/mbridge/msdk/video/js/factory/IJSFactory;

    if-eqz p1, :cond_0

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_0

    .line 233
    new-instance p1, Lorg/json/JSONObject;

    invoke-direct {p1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string p2, "type"

    .line 234
    invoke-virtual {p1, p2}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result p2

    const-string v1, "data"

    .line 235
    invoke-virtual {p1, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    .line 236
    iget-object v1, p0, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->a:Lcom/mbridge/msdk/video/js/factory/IJSFactory;

    invoke-interface {v1}, Lcom/mbridge/msdk/video/js/factory/IJSFactory;->getJSCommon()Lcom/mbridge/msdk/video/js/c;

    move-result-object v1

    invoke-interface {v1, p2, p1}, Lcom/mbridge/msdk/video/js/c;->a(ILjava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    const-string p2, "statistics error"

    .line 239
    invoke-static {v0, p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :cond_0
    :goto_0
    return-void
.end method

.method public toggleCloseBtn(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 3

    const-string p1, "JS-Video-Brigde"

    .line 555
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->a:Lcom/mbridge/msdk/video/js/factory/IJSFactory;

    if-eqz v0, :cond_2

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_2

    .line 556
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string p2, "state"

    .line 557
    invoke-virtual {v0, p2}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result p2

    .line 558
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "toggleCloseBtn,result:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {p1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    const/4 v0, 0x0

    const/4 v1, 0x2

    const/4 v2, 0x1

    if-ne p2, v2, :cond_0

    goto :goto_0

    :cond_0
    if-ne p2, v1, :cond_1

    move v1, v2

    goto :goto_0

    :cond_1
    move v1, v0

    .line 566
    :goto_0
    iget-object p2, p0, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->a:Lcom/mbridge/msdk/video/js/factory/IJSFactory;

    invoke-interface {p2}, Lcom/mbridge/msdk/video/js/factory/IJSFactory;->getJSVideoModule()Lcom/mbridge/msdk/video/js/i;

    move-result-object p2

    invoke-interface {p2, v0, v1}, Lcom/mbridge/msdk/video/js/i;->closeVideoOperate(II)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_1

    :catchall_0
    move-exception p2

    const-string v0, "toggleCloseBtn"

    .line 569
    invoke-static {p1, v0, p2}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :cond_2
    :goto_1
    return-void
.end method

.method public triggerCloseBtn(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 3

    const-string v0, "JS-Video-Brigde"

    const-string v1, "triggerCloseBtn"

    .line 246
    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 248
    :try_start_0
    iget-object v1, p0, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->a:Lcom/mbridge/msdk/video/js/factory/IJSFactory;

    if-eqz v1, :cond_0

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    .line 249
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string p2, "state"

    .line 250
    invoke-virtual {v1, p2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    const-string v1, "click"

    .line 251
    invoke-virtual {p2, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p2

    if-eqz p2, :cond_0

    .line 253
    iget-object p2, p0, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->a:Lcom/mbridge/msdk/video/js/factory/IJSFactory;

    invoke-interface {p2}, Lcom/mbridge/msdk/video/js/factory/IJSFactory;->getJSVideoModule()Lcom/mbridge/msdk/video/js/i;

    move-result-object p2

    const/4 v1, 0x1

    const/4 v2, -0x1

    invoke-interface {p2, v1, v2}, Lcom/mbridge/msdk/video/js/i;->closeVideoOperate(II)V

    .line 254
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a()Lcom/mbridge/msdk/mbjscommon/windvane/h;

    move-result-object p2

    const/4 v1, 0x0

    invoke-direct {p0, v1}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->b(I)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p2, p1, v1}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    const-string p2, "triggerCloseBtn error"

    .line 258
    invoke-static {v0, p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :cond_0
    :goto_0
    return-void
.end method

.method public videoOperate(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 3

    const-string v0, "JS-Video-Brigde"

    .line 312
    :try_start_0
    iget-object v1, p0, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->a:Lcom/mbridge/msdk/video/js/factory/IJSFactory;

    if-eqz v1, :cond_0

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    .line 313
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string p2, "pause_or_resume"

    .line 314
    invoke-virtual {v1, p2}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result p2

    .line 315
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "videoOperate,pauseOrResume:"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 316
    iget-object v1, p0, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->a:Lcom/mbridge/msdk/video/js/factory/IJSFactory;

    invoke-interface {v1}, Lcom/mbridge/msdk/video/js/factory/IJSFactory;->getJSVideoModule()Lcom/mbridge/msdk/video/js/i;

    move-result-object v1

    invoke-interface {v1, p2}, Lcom/mbridge/msdk/video/js/i;->videoOperate(I)V

    .line 318
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a()Lcom/mbridge/msdk/mbjscommon/windvane/h;

    move-result-object p2

    const/4 v1, 0x0

    invoke-direct {p0, v1}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->b(I)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p2, p1, v1}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    const-string p2, "videoOperate error"

    .line 321
    invoke-static {v0, p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :cond_0
    :goto_0
    return-void
.end method

.method public webviewFireEvent(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 1309
    invoke-direct {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->a(Ljava/lang/Object;Ljava/lang/String;)V

    .line 1311
    :try_start_0
    invoke-static {}, Lcom/mbridge/msdk/video/bt/a/c;->a()Lcom/mbridge/msdk/video/bt/a/c;

    move-result-object v0

    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1, v1}, Lcom/mbridge/msdk/video/bt/a/c;->M(Ljava/lang/Object;Lorg/json/JSONObject;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 1313
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "setSubPlayTemplateInfo error "

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string p2, "JS-Video-Brigde"

    invoke-static {p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method public webviewGoBack(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 1089
    invoke-direct {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->a(Ljava/lang/Object;Ljava/lang/String;)V

    .line 1091
    :try_start_0
    invoke-static {}, Lcom/mbridge/msdk/video/bt/a/c;->a()Lcom/mbridge/msdk/video/bt/a/c;

    move-result-object v0

    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1, v1}, Lcom/mbridge/msdk/video/bt/a/c;->w(Ljava/lang/Object;Lorg/json/JSONObject;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 1093
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "webviewGoBack error "

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string p2, "JS-Video-Brigde"

    invoke-static {p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method public webviewGoForward(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 1099
    invoke-direct {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->a(Ljava/lang/Object;Ljava/lang/String;)V

    .line 1101
    :try_start_0
    invoke-static {}, Lcom/mbridge/msdk/video/bt/a/c;->a()Lcom/mbridge/msdk/video/bt/a/c;

    move-result-object v0

    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1, v1}, Lcom/mbridge/msdk/video/bt/a/c;->x(Ljava/lang/Object;Lorg/json/JSONObject;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 1103
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "webviewGoForward error "

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string p2, "JS-Video-Brigde"

    invoke-static {p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method public webviewLoad(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 1069
    invoke-direct {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->a(Ljava/lang/Object;Ljava/lang/String;)V

    .line 1071
    :try_start_0
    invoke-static {}, Lcom/mbridge/msdk/video/bt/a/c;->a()Lcom/mbridge/msdk/video/bt/a/c;

    move-result-object v0

    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1, v1}, Lcom/mbridge/msdk/video/bt/a/c;->u(Ljava/lang/Object;Lorg/json/JSONObject;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 1073
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "webviewLoad error "

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string p2, "JS-Video-Brigde"

    invoke-static {p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method public webviewReload(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 1079
    invoke-direct {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->a(Ljava/lang/Object;Ljava/lang/String;)V

    .line 1081
    :try_start_0
    invoke-static {}, Lcom/mbridge/msdk/video/bt/a/c;->a()Lcom/mbridge/msdk/video/bt/a/c;

    move-result-object v0

    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1, v1}, Lcom/mbridge/msdk/video/bt/a/c;->v(Ljava/lang/Object;Lorg/json/JSONObject;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 1083
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "webviewReload error "

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string p2, "JS-Video-Brigde"

    invoke-static {p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :goto_0
    return-void
.end method
