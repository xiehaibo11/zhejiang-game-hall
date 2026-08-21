.class public final Lcom/mbridge/msdk/videocommon/c/b;
.super Lcom/mbridge/msdk/foundation/same/net/g/b;
.source "RewardSettingRequest.java"


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 0

    .line 15
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/foundation/same/net/g/b;-><init>(Landroid/content/Context;)V

    return-void
.end method


# virtual methods
.method public final addExtraParams(Ljava/lang/String;Lcom/mbridge/msdk/foundation/same/net/g/d;)V
    .locals 4

    const-string v0, ""

    .line 21
    :try_start_0
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/foundation/same/net/g/b;->addExtraParams(Ljava/lang/String;Lcom/mbridge/msdk/foundation/same/net/g/d;)V

    const-string p1, "platform"

    const-string v1, "1"

    .line 22
    invoke-virtual {p2, p1, v1}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    const-string p1, "os_version"

    .line 23
    sget-object v1, Landroid/os/Build$VERSION;->RELEASE:Ljava/lang/String;

    invoke-virtual {p2, p1, v1}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    const-string p1, "package_name"

    .line 24
    iget-object v1, p0, Lcom/mbridge/msdk/videocommon/c/b;->mContext:Landroid/content/Context;

    invoke-static {v1}, Lcom/mbridge/msdk/foundation/tools/v;->A(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p2, p1, v1}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    const-string p1, "app_version_name"

    .line 25
    iget-object v1, p0, Lcom/mbridge/msdk/videocommon/c/b;->mContext:Landroid/content/Context;

    .line 26
    invoke-static {v1}, Lcom/mbridge/msdk/foundation/tools/v;->v(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v1

    .line 25
    invoke-virtual {p2, p1, v1}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    const-string p1, "app_version_code"

    .line 27
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v2, p0, Lcom/mbridge/msdk/videocommon/c/b;->mContext:Landroid/content/Context;

    .line 28
    invoke-static {v2}, Lcom/mbridge/msdk/foundation/tools/v;->u(Landroid/content/Context;)I

    move-result v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    .line 27
    invoke-virtual {p2, p1, v1}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    const-string p1, "orientation"

    .line 29
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v2, p0, Lcom/mbridge/msdk/videocommon/c/b;->mContext:Landroid/content/Context;

    invoke-static {v2}, Lcom/mbridge/msdk/foundation/tools/v;->t(Landroid/content/Context;)I

    move-result v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p2, p1, v1}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    const-string p1, "model"

    .line 30
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/v;->x()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p2, p1, v1}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    const-string p1, "brand"

    .line 31
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/v;->z()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p2, p1, v1}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    const-string p1, "gaid"

    .line 32
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/v;->E()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p2, p1, v1}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    const-string p1, "mnc"

    .line 33
    iget-object v1, p0, Lcom/mbridge/msdk/videocommon/c/b;->mContext:Landroid/content/Context;

    invoke-static {v1}, Lcom/mbridge/msdk/foundation/tools/v;->e(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p2, p1, v1}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    const-string p1, "mcc"

    .line 34
    iget-object v1, p0, Lcom/mbridge/msdk/videocommon/c/b;->mContext:Landroid/content/Context;

    invoke-static {v1}, Lcom/mbridge/msdk/foundation/tools/v;->d(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p2, p1, v1}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 35
    iget-object p1, p0, Lcom/mbridge/msdk/videocommon/c/b;->mContext:Landroid/content/Context;

    invoke-static {p1}, Lcom/mbridge/msdk/foundation/tools/v;->D(Landroid/content/Context;)I

    move-result p1

    const-string v1, "network_type"

    .line 36
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p2, v1, v2}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    const-string v1, "network_str"

    .line 37
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v3, p0, Lcom/mbridge/msdk/videocommon/c/b;->mContext:Landroid/content/Context;

    invoke-static {v3, p1}, Lcom/mbridge/msdk/foundation/tools/v;->a(Landroid/content/Context;I)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p2, v1, p1}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    const-string p1, "language"

    .line 38
    iget-object v0, p0, Lcom/mbridge/msdk/videocommon/c/b;->mContext:Landroid/content/Context;

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/tools/v;->s(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p2, p1, v0}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    const-string p1, "timezone"

    .line 39
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/v;->B()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p2, p1, v0}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    const-string p1, "useragent"

    .line 40
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/v;->A()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p2, p1, v0}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    const-string p1, "sdk_version"

    const-string v0, "MAL_16.3.67"

    .line 41
    invoke-virtual {p2, p1, v0}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    const-string p1, "gp_version"

    .line 42
    iget-object v0, p0, Lcom/mbridge/msdk/videocommon/c/b;->mContext:Landroid/content/Context;

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/tools/v;->j(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p2, p1, v0}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    const-string p1, "screen_size"

    .line 43
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v1, p0, Lcom/mbridge/msdk/videocommon/c/b;->mContext:Landroid/content/Context;

    invoke-static {v1}, Lcom/mbridge/msdk/foundation/tools/v;->x(Landroid/content/Context;)I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, "x"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/mbridge/msdk/videocommon/c/b;->mContext:Landroid/content/Context;

    .line 44
    invoke-static {v1}, Lcom/mbridge/msdk/foundation/tools/v;->y(Landroid/content/Context;)I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 43
    invoke-virtual {p2, p1, v0}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 45
    invoke-static {p2}, Lcom/mbridge/msdk/foundation/same/net/g/e;->d(Lcom/mbridge/msdk/foundation/same/net/g/d;)V

    const-string p1, "is_clever"

    .line 46
    sget-object v0, Lcom/mbridge/msdk/foundation/same/a;->l:Ljava/lang/String;

    invoke-virtual {p2, p1, v0}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 48
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-void
.end method
