.class public final Lcom/mbridge/msdk/video/module/c/a;
.super Lcom/mbridge/msdk/foundation/same/net/g/b;
.source "VideoViewRequest.java"


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 0

    .line 26
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/foundation/same/net/g/b;-><init>(Landroid/content/Context;)V

    return-void
.end method


# virtual methods
.method public final addExtraParams(Ljava/lang/String;Lcom/mbridge/msdk/foundation/same/net/g/d;)V
    .locals 4

    .line 32
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/foundation/same/net/g/b;->addExtraParams(Ljava/lang/String;Lcom/mbridge/msdk/foundation/same/net/g/d;)V

    const-string p1, "platform"

    const-string v0, "1"

    .line 34
    invoke-virtual {p2, p1, v0}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 35
    sget-object p1, Landroid/os/Build$VERSION;->RELEASE:Ljava/lang/String;

    const-string v0, "os_version"

    invoke-virtual {p2, v0, p1}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 36
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/c/a;->mContext:Landroid/content/Context;

    invoke-static {p1}, Lcom/mbridge/msdk/foundation/tools/v;->A(Landroid/content/Context;)Ljava/lang/String;

    move-result-object p1

    const-string v0, "package_name"

    invoke-virtual {p2, v0, p1}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 37
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/c/a;->mContext:Landroid/content/Context;

    .line 38
    invoke-static {p1}, Lcom/mbridge/msdk/foundation/tools/v;->v(Landroid/content/Context;)Ljava/lang/String;

    move-result-object p1

    const-string v0, "app_version_name"

    .line 37
    invoke-virtual {p2, v0, p1}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 39
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v0, p0, Lcom/mbridge/msdk/video/module/c/a;->mContext:Landroid/content/Context;

    .line 40
    invoke-static {v0}, Lcom/mbridge/msdk/foundation/tools/v;->u(Landroid/content/Context;)I

    move-result v0

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v0, ""

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string v1, "app_version_code"

    .line 39
    invoke-virtual {p2, v1, p1}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 41
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v1, p0, Lcom/mbridge/msdk/video/module/c/a;->mContext:Landroid/content/Context;

    invoke-static {v1}, Lcom/mbridge/msdk/foundation/tools/v;->t(Landroid/content/Context;)I

    move-result v1

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string v1, "orientation"

    invoke-virtual {p2, v1, p1}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 42
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/v;->x()Ljava/lang/String;

    move-result-object p1

    const-string v1, "model"

    invoke-virtual {p2, v1, p1}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 43
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/v;->z()Ljava/lang/String;

    move-result-object p1

    const-string v1, "brand"

    invoke-virtual {p2, v1, p1}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    const-string p1, "gaid"

    .line 44
    invoke-virtual {p2, p1, v0}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 45
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/v;->F()Ljava/lang/String;

    move-result-object p1

    const-string v1, "gaid2"

    invoke-virtual {p2, v1, p1}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 46
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/c/a;->mContext:Landroid/content/Context;

    invoke-static {p1}, Lcom/mbridge/msdk/foundation/tools/v;->e(Landroid/content/Context;)Ljava/lang/String;

    move-result-object p1

    const-string v1, "mnc"

    invoke-virtual {p2, v1, p1}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 47
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/c/a;->mContext:Landroid/content/Context;

    invoke-static {p1}, Lcom/mbridge/msdk/foundation/tools/v;->d(Landroid/content/Context;)Ljava/lang/String;

    move-result-object p1

    const-string v1, "mcc"

    invoke-virtual {p2, v1, p1}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 48
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/c/a;->mContext:Landroid/content/Context;

    invoke-static {p1}, Lcom/mbridge/msdk/foundation/tools/v;->D(Landroid/content/Context;)I

    move-result p1

    .line 49
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "network_type"

    invoke-virtual {p2, v2, v1}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 50
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v2, p0, Lcom/mbridge/msdk/video/module/c/a;->mContext:Landroid/content/Context;

    invoke-static {v2, p1}, Lcom/mbridge/msdk/foundation/tools/v;->a(Landroid/content/Context;I)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string v0, "network_str"

    invoke-virtual {p2, v0, p1}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 51
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/c/a;->mContext:Landroid/content/Context;

    invoke-static {p1}, Lcom/mbridge/msdk/foundation/tools/v;->s(Landroid/content/Context;)Ljava/lang/String;

    move-result-object p1

    const-string v0, "language"

    invoke-virtual {p2, v0, p1}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 52
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/v;->B()Ljava/lang/String;

    move-result-object p1

    const-string v0, "timezone"

    invoke-virtual {p2, v0, p1}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 53
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/v;->A()Ljava/lang/String;

    move-result-object p1

    const-string v0, "useragent"

    invoke-virtual {p2, v0, p1}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    const-string p1, "sdk_version"

    const-string v0, "MAL_16.3.67"

    .line 54
    invoke-virtual {p2, p1, v0}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 55
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/c/a;->mContext:Landroid/content/Context;

    invoke-static {p1}, Lcom/mbridge/msdk/foundation/tools/v;->j(Landroid/content/Context;)Ljava/lang/String;

    move-result-object p1

    const-string v0, "gp_version"

    invoke-virtual {p2, v0, p1}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 56
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v0, p0, Lcom/mbridge/msdk/video/module/c/a;->mContext:Landroid/content/Context;

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/tools/v;->x(Landroid/content/Context;)I

    move-result v0

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v0, "x"

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v0, p0, Lcom/mbridge/msdk/video/module/c/a;->mContext:Landroid/content/Context;

    .line 57
    invoke-static {v0}, Lcom/mbridge/msdk/foundation/tools/v;->y(Landroid/content/Context;)I

    move-result v0

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string v0, "screen_size"

    .line 56
    invoke-virtual {p2, v0, p1}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 58
    invoke-static {}, Lcom/mbridge/msdk/c/b;->a()Lcom/mbridge/msdk/c/b;

    move-result-object p1

    .line 59
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->k()Ljava/lang/String;

    move-result-object v0

    .line 58
    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/c/b;->b(Ljava/lang/String;)Lcom/mbridge/msdk/c/a;

    move-result-object p1

    if-eqz p1, :cond_3

    .line 62
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    .line 64
    :try_start_0
    invoke-virtual {p1}, Lcom/mbridge/msdk/c/a;->Z()I

    move-result v1

    const/4 v2, 0x1

    if-ne v1, v2, :cond_1

    .line 65
    iget-object v1, p0, Lcom/mbridge/msdk/video/module/c/a;->mContext:Landroid/content/Context;

    invoke-static {v1}, Lcom/mbridge/msdk/foundation/tools/v;->b(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v1

    if-eqz v1, :cond_0

    const-string v1, "imei"

    .line 66
    iget-object v3, p0, Lcom/mbridge/msdk/video/module/c/a;->mContext:Landroid/content/Context;

    invoke-static {v3}, Lcom/mbridge/msdk/foundation/tools/v;->b(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0, v1, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 68
    :cond_0
    iget-object v1, p0, Lcom/mbridge/msdk/video/module/c/a;->mContext:Landroid/content/Context;

    invoke-static {v1}, Lcom/mbridge/msdk/foundation/tools/v;->i(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v1

    if-eqz v1, :cond_1

    const-string v1, "mac"

    .line 69
    iget-object v3, p0, Lcom/mbridge/msdk/video/module/c/a;->mContext:Landroid/content/Context;

    invoke-static {v3}, Lcom/mbridge/msdk/foundation/tools/v;->i(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0, v1, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 73
    :cond_1
    invoke-virtual {p1}, Lcom/mbridge/msdk/c/a;->aa()I

    move-result p1

    if-ne p1, v2, :cond_2

    .line 74
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/c/a;->mContext:Landroid/content/Context;

    invoke-static {p1}, Lcom/mbridge/msdk/foundation/tools/v;->g(Landroid/content/Context;)Ljava/lang/String;

    move-result-object p1

    if-eqz p1, :cond_2

    const-string p1, "android_id"

    .line 75
    iget-object v1, p0, Lcom/mbridge/msdk/video/module/c/a;->mContext:Landroid/content/Context;

    .line 76
    invoke-static {v1}, Lcom/mbridge/msdk/foundation/tools/v;->g(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v1

    .line 75
    invoke-virtual {v0, p1, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 79
    :cond_2
    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_3

    .line 81
    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p1

    .line 80
    invoke-static {p1}, Lcom/mbridge/msdk/foundation/tools/t;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    .line 82
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_3

    const-string v0, "dvi"

    .line 83
    invoke-virtual {p2, v0, p1}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 87
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_3
    :goto_0
    return-void
.end method
