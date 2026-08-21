.class public final Lcom/mbridge/msdk/mbbid/common/b/a;
.super Lcom/mbridge/msdk/foundation/same/net/g/f;
.source "BidRequest.java"


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 0

    .line 25
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/foundation/same/net/g/f;-><init>(Landroid/content/Context;)V

    return-void
.end method


# virtual methods
.method public final addExtraParams(Ljava/lang/String;Lcom/mbridge/msdk/foundation/same/net/g/d;)V
    .locals 4

    .line 30
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/foundation/same/net/g/f;->addExtraParams(Ljava/lang/String;Lcom/mbridge/msdk/foundation/same/net/g/d;)V

    .line 32
    invoke-static {}, Lcom/mbridge/msdk/c/b;->a()Lcom/mbridge/msdk/c/b;

    move-result-object p1

    .line 33
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->k()Ljava/lang/String;

    move-result-object v0

    .line 32
    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/c/b;->b(Ljava/lang/String;)Lcom/mbridge/msdk/c/a;

    move-result-object p1

    if-nez p1, :cond_0

    .line 35
    invoke-static {}, Lcom/mbridge/msdk/c/b;->a()Lcom/mbridge/msdk/c/b;

    move-result-object p1

    invoke-virtual {p1}, Lcom/mbridge/msdk/c/b;->b()Lcom/mbridge/msdk/c/a;

    move-result-object p1

    :cond_0
    const-string v0, "platform"

    const-string v1, "1"

    .line 37
    invoke-virtual {p2, v0, v1}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 38
    sget-object v0, Landroid/os/Build$VERSION;->RELEASE:Ljava/lang/String;

    const-string v1, "os_version"

    invoke-virtual {p2, v1, v0}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 39
    iget-object v0, p0, Lcom/mbridge/msdk/mbbid/common/b/a;->mContext:Landroid/content/Context;

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/tools/v;->A(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v0

    const-string v1, "package_name"

    invoke-virtual {p2, v1, v0}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 40
    iget-object v0, p0, Lcom/mbridge/msdk/mbbid/common/b/a;->mContext:Landroid/content/Context;

    .line 41
    invoke-static {v0}, Lcom/mbridge/msdk/foundation/tools/v;->v(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v0

    const-string v1, "app_version_name"

    .line 40
    invoke-virtual {p2, v1, v0}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 42
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v1, p0, Lcom/mbridge/msdk/mbbid/common/b/a;->mContext:Landroid/content/Context;

    .line 43
    invoke-static {v1}, Lcom/mbridge/msdk/foundation/tools/v;->u(Landroid/content/Context;)I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, ""

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v2, "app_version_code"

    .line 42
    invoke-virtual {p2, v2, v0}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 45
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/v;->x()Ljava/lang/String;

    move-result-object v0

    const-string v2, "model"

    invoke-virtual {p2, v2, v0}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 46
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/v;->z()Ljava/lang/String;

    move-result-object v0

    const-string v2, "brand"

    invoke-virtual {p2, v2, v0}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    const-string v0, "gaid"

    .line 47
    invoke-virtual {p2, v0, v1}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 48
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/v;->F()Ljava/lang/String;

    move-result-object v0

    const-string v2, "gaid2"

    invoke-virtual {p2, v2, v0}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 51
    invoke-virtual {p1}, Lcom/mbridge/msdk/c/a;->Z()I

    move-result v0

    const/4 v2, 0x1

    if-ne v0, v2, :cond_1

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a()Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;

    move-result-object v0

    const-string v3, "authority_imei_mac"

    invoke-virtual {v0, v3}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 52
    iget-object v0, p0, Lcom/mbridge/msdk/mbbid/common/b/a;->mContext:Landroid/content/Context;

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/tools/v;->b(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 53
    iget-object v0, p0, Lcom/mbridge/msdk/mbbid/common/b/a;->mContext:Landroid/content/Context;

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/tools/v;->b(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/tools/t;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    const-string v3, "d1"

    invoke-virtual {p2, v3, v0}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 57
    :cond_1
    invoke-virtual {p1}, Lcom/mbridge/msdk/c/a;->aa()I

    move-result p1

    if-ne p1, v2, :cond_2

    .line 58
    iget-object p1, p0, Lcom/mbridge/msdk/mbbid/common/b/a;->mContext:Landroid/content/Context;

    invoke-static {p1}, Lcom/mbridge/msdk/foundation/tools/v;->g(Landroid/content/Context;)Ljava/lang/String;

    move-result-object p1

    if-eqz p1, :cond_2

    .line 59
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a()Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;

    move-result-object p1

    const-string v0, "authority_android_id"

    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a(Ljava/lang/String;)Z

    move-result p1

    if-eqz p1, :cond_2

    .line 60
    iget-object p1, p0, Lcom/mbridge/msdk/mbbid/common/b/a;->mContext:Landroid/content/Context;

    invoke-static {p1}, Lcom/mbridge/msdk/foundation/tools/v;->f(Landroid/content/Context;)Ljava/lang/String;

    move-result-object p1

    const-string v0, "d3"

    invoke-virtual {p2, v0, p1}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 64
    :cond_2
    iget-object p1, p0, Lcom/mbridge/msdk/mbbid/common/b/a;->mContext:Landroid/content/Context;

    invoke-static {p1}, Lcom/mbridge/msdk/foundation/tools/v;->e(Landroid/content/Context;)Ljava/lang/String;

    move-result-object p1

    const-string v0, "mnc"

    invoke-virtual {p2, v0, p1}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 65
    iget-object p1, p0, Lcom/mbridge/msdk/mbbid/common/b/a;->mContext:Landroid/content/Context;

    invoke-static {p1}, Lcom/mbridge/msdk/foundation/tools/v;->d(Landroid/content/Context;)Ljava/lang/String;

    move-result-object p1

    const-string v0, "mcc"

    invoke-virtual {p2, v0, p1}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 66
    iget-object p1, p0, Lcom/mbridge/msdk/mbbid/common/b/a;->mContext:Landroid/content/Context;

    invoke-static {p1}, Lcom/mbridge/msdk/foundation/tools/v;->D(Landroid/content/Context;)I

    move-result p1

    .line 67
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v2, "network_type"

    invoke-virtual {p2, v2, v0}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 68
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v2, p0, Lcom/mbridge/msdk/mbbid/common/b/a;->mContext:Landroid/content/Context;

    invoke-static {v2, p1}, Lcom/mbridge/msdk/foundation/tools/v;->a(Landroid/content/Context;I)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string v0, "network_str"

    invoke-virtual {p2, v0, p1}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 69
    iget-object p1, p0, Lcom/mbridge/msdk/mbbid/common/b/a;->mContext:Landroid/content/Context;

    invoke-static {p1}, Lcom/mbridge/msdk/foundation/tools/v;->s(Landroid/content/Context;)Ljava/lang/String;

    move-result-object p1

    const-string v0, "language"

    invoke-virtual {p2, v0, p1}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 70
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/v;->B()Ljava/lang/String;

    move-result-object p1

    const-string v0, "timezone"

    invoke-virtual {p2, v0, p1}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 71
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/v;->A()Ljava/lang/String;

    move-result-object p1

    const-string v0, "useragent"

    invoke-virtual {p2, v0, p1}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    const-string p1, "sdk_version"

    const-string v0, "MAL_16.3.67"

    .line 72
    invoke-virtual {p2, p1, v0}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 73
    iget-object p1, p0, Lcom/mbridge/msdk/mbbid/common/b/a;->mContext:Landroid/content/Context;

    invoke-static {p1}, Lcom/mbridge/msdk/foundation/tools/v;->j(Landroid/content/Context;)Ljava/lang/String;

    move-result-object p1

    const-string v0, "gp_version"

    invoke-virtual {p2, v0, p1}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 74
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v0, p0, Lcom/mbridge/msdk/mbbid/common/b/a;->mContext:Landroid/content/Context;

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/tools/v;->x(Landroid/content/Context;)I

    move-result v0

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v0, "x"

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v0, p0, Lcom/mbridge/msdk/mbbid/common/b/a;->mContext:Landroid/content/Context;

    .line 75
    invoke-static {v0}, Lcom/mbridge/msdk/foundation/tools/v;->y(Landroid/content/Context;)I

    move-result v0

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string v0, "screen_size"

    .line 74
    invoke-virtual {p2, v0, p1}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 76
    sget-object p1, Lcom/mbridge/msdk/foundation/same/a;->l:Ljava/lang/String;

    const-string v0, "is_clever"

    invoke-virtual {p2, v0, p1}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 77
    iget-object p1, p0, Lcom/mbridge/msdk/mbbid/common/b/a;->mContext:Landroid/content/Context;

    invoke-static {p2, p1}, Lcom/mbridge/msdk/foundation/same/net/g/e;->a(Lcom/mbridge/msdk/foundation/same/net/g/d;Landroid/content/Context;)V

    .line 78
    invoke-static {p2}, Lcom/mbridge/msdk/foundation/same/net/g/e;->a(Lcom/mbridge/msdk/foundation/same/net/g/d;)V

    .line 79
    invoke-static {p2}, Lcom/mbridge/msdk/foundation/same/net/g/e;->b(Lcom/mbridge/msdk/foundation/same/net/g/d;)V

    .line 80
    invoke-static {p2}, Lcom/mbridge/msdk/foundation/same/net/g/e;->c(Lcom/mbridge/msdk/foundation/same/net/g/d;)V

    return-void
.end method
