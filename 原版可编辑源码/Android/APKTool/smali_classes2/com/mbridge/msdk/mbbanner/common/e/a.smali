.class public final Lcom/mbridge/msdk/mbbanner/common/e/a;
.super Lcom/mbridge/msdk/foundation/same/net/g/a;
.source "BannerRequest.java"


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 0

    .line 16
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/foundation/same/net/g/a;-><init>(Landroid/content/Context;)V

    return-void
.end method


# virtual methods
.method public final addExtraParams(Ljava/lang/String;Lcom/mbridge/msdk/foundation/same/net/g/d;)V
    .locals 4

    .line 27
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/foundation/same/net/g/a;->addExtraParams(Ljava/lang/String;Lcom/mbridge/msdk/foundation/same/net/g/d;)V

    const-string p1, "1"

    const-string v0, "platform"

    .line 29
    invoke-virtual {p2, v0, p1}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 30
    sget-object v0, Landroid/os/Build$VERSION;->RELEASE:Ljava/lang/String;

    const-string v1, "os_version"

    invoke-virtual {p2, v1, v0}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 31
    iget-object v0, p0, Lcom/mbridge/msdk/mbbanner/common/e/a;->mContext:Landroid/content/Context;

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/tools/v;->A(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v0

    const-string v1, "package_name"

    invoke-virtual {p2, v1, v0}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 32
    iget-object v0, p0, Lcom/mbridge/msdk/mbbanner/common/e/a;->mContext:Landroid/content/Context;

    .line 33
    invoke-static {v0}, Lcom/mbridge/msdk/foundation/tools/v;->v(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v0

    const-string v1, "app_version_name"

    .line 32
    invoke-virtual {p2, v1, v0}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 34
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v1, p0, Lcom/mbridge/msdk/mbbanner/common/e/a;->mContext:Landroid/content/Context;

    .line 35
    invoke-static {v1}, Lcom/mbridge/msdk/foundation/tools/v;->u(Landroid/content/Context;)I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, ""

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v2, "app_version_code"

    .line 34
    invoke-virtual {p2, v2, v0}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 36
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v2, p0, Lcom/mbridge/msdk/mbbanner/common/e/a;->mContext:Landroid/content/Context;

    invoke-static {v2}, Lcom/mbridge/msdk/foundation/tools/v;->t(Landroid/content/Context;)I

    move-result v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v2, "orientation"

    invoke-virtual {p2, v2, v0}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 37
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/v;->x()Ljava/lang/String;

    move-result-object v0

    const-string v2, "model"

    invoke-virtual {p2, v2, v0}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 38
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/v;->z()Ljava/lang/String;

    move-result-object v0

    const-string v2, "brand"

    invoke-virtual {p2, v2, v0}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    const-string v0, "gaid"

    .line 39
    invoke-virtual {p2, v0, v1}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 40
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/v;->F()Ljava/lang/String;

    move-result-object v0

    const-string v2, "gaid2"

    invoke-virtual {p2, v2, v0}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 41
    iget-object v0, p0, Lcom/mbridge/msdk/mbbanner/common/e/a;->mContext:Landroid/content/Context;

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/tools/v;->e(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v0

    const-string v2, "mnc"

    invoke-virtual {p2, v2, v0}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 42
    iget-object v0, p0, Lcom/mbridge/msdk/mbbanner/common/e/a;->mContext:Landroid/content/Context;

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/tools/v;->d(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v0

    const-string v2, "mcc"

    invoke-virtual {p2, v2, v0}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 43
    iget-object v0, p0, Lcom/mbridge/msdk/mbbanner/common/e/a;->mContext:Landroid/content/Context;

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/tools/v;->D(Landroid/content/Context;)I

    move-result v0

    .line 44
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    const-string v3, "network_type"

    invoke-virtual {p2, v3, v2}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 45
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v3, p0, Lcom/mbridge/msdk/mbbanner/common/e/a;->mContext:Landroid/content/Context;

    invoke-static {v3, v0}, Lcom/mbridge/msdk/foundation/tools/v;->a(Landroid/content/Context;I)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "network_str"

    invoke-virtual {p2, v1, v0}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 46
    iget-object v0, p0, Lcom/mbridge/msdk/mbbanner/common/e/a;->mContext:Landroid/content/Context;

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/tools/v;->s(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v0

    const-string v1, "language"

    invoke-virtual {p2, v1, v0}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 47
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/v;->B()Ljava/lang/String;

    move-result-object v0

    const-string v1, "timezone"

    invoke-virtual {p2, v1, v0}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 48
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/v;->A()Ljava/lang/String;

    move-result-object v0

    const-string v1, "useragent"

    invoke-virtual {p2, v1, v0}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    const-string v0, "sdk_version"

    const-string v1, "MAL_16.3.67"

    .line 49
    invoke-virtual {p2, v0, v1}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 50
    iget-object v0, p0, Lcom/mbridge/msdk/mbbanner/common/e/a;->mContext:Landroid/content/Context;

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/tools/v;->j(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v0

    const-string v1, "gp_version"

    invoke-virtual {p2, v1, v0}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 51
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v1, p0, Lcom/mbridge/msdk/mbbanner/common/e/a;->mContext:Landroid/content/Context;

    invoke-static {v1}, Lcom/mbridge/msdk/foundation/tools/v;->x(Landroid/content/Context;)I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, "x"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/mbridge/msdk/mbbanner/common/e/a;->mContext:Landroid/content/Context;

    .line 52
    invoke-static {v1}, Lcom/mbridge/msdk/foundation/tools/v;->y(Landroid/content/Context;)I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "screen_size"

    .line 51
    invoke-virtual {p2, v1, v0}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 53
    sget-object v0, Lcom/mbridge/msdk/foundation/same/a;->l:Ljava/lang/String;

    const-string v1, "is_clever"

    invoke-virtual {p2, v1, v0}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    const-string v0, "version_flag"

    .line 54
    invoke-virtual {p2, v0, p1}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 56
    iget-object p1, p0, Lcom/mbridge/msdk/mbbanner/common/e/a;->mContext:Landroid/content/Context;

    invoke-static {p2, p1}, Lcom/mbridge/msdk/foundation/same/net/g/e;->a(Lcom/mbridge/msdk/foundation/same/net/g/d;Landroid/content/Context;)V

    .line 57
    invoke-static {p2}, Lcom/mbridge/msdk/foundation/same/net/g/e;->a(Lcom/mbridge/msdk/foundation/same/net/g/d;)V

    .line 58
    invoke-static {p2}, Lcom/mbridge/msdk/foundation/same/net/g/e;->c(Lcom/mbridge/msdk/foundation/same/net/g/d;)V

    return-void
.end method
