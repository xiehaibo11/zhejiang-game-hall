.class public Lcom/mbridge/msdk/mbbanner/common/a/d;
.super Ljava/lang/Object;
.source "BannerV3Params.java"


# static fields
.field private static final a:Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 21
    const-class v0, Lcom/mbridge/msdk/mbbanner/common/a/d;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mbridge/msdk/mbbanner/common/a/d;->a:Ljava/lang/String;

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 20
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static a(ZLandroid/content/Context;Ljava/lang/String;Ljava/lang/String;ILcom/mbridge/msdk/mbbanner/common/a/b;)Lcom/mbridge/msdk/foundation/same/net/g/d;
    .locals 7

    .line 32
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object p0

    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/controller/a;->k()Ljava/lang/String;

    move-result-object p0

    .line 33
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    .line 34
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/controller/a;->k()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/controller/a;->l()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 33
    invoke-static {v0}, Lcom/mbridge/msdk/foundation/tools/SameMD5;->getMD5(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 36
    invoke-static {p1, p2}, Lcom/mbridge/msdk/mbbanner/common/util/BannerUtils;->getTtcIds(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 37
    invoke-static {p1, p2}, Lcom/mbridge/msdk/foundation/tools/ae;->b(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    .line 38
    invoke-static {}, Lcom/mbridge/msdk/mbbanner/common/util/BannerUtils;->getInstallIds()Ljava/lang/String;

    move-result-object v2

    const-string v3, "banner"

    .line 39
    invoke-static {p2, v3}, Lcom/mbridge/msdk/foundation/same/a/d;->a(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    .line 40
    invoke-static {p2}, Lcom/mbridge/msdk/mbbanner/common/util/BannerUtils;->getCloseIds(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    .line 42
    new-instance v5, Lcom/mbridge/msdk/foundation/same/net/g/d;

    invoke-direct {v5}, Lcom/mbridge/msdk/foundation/same/net/g/d;-><init>()V

    const-string v6, "app_id"

    .line 44
    invoke-static {v5, v6, p0}, Lcom/mbridge/msdk/foundation/same/net/f/b;->a(Lcom/mbridge/msdk/foundation/same/net/g/d;Ljava/lang/String;Ljava/lang/String;)V

    const-string p0, "unit_id"

    .line 45
    invoke-static {v5, p0, p2}, Lcom/mbridge/msdk/foundation/same/net/f/b;->a(Lcom/mbridge/msdk/foundation/same/net/g/d;Ljava/lang/String;Ljava/lang/String;)V

    .line 47
    invoke-virtual {p5}, Lcom/mbridge/msdk/mbbanner/common/a/b;->d()Ljava/lang/String;

    move-result-object p0

    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p0

    if-nez p0, :cond_0

    .line 48
    sget-object p0, Lcom/mbridge/msdk/MBridgeConstans;->PLACEMENT_ID:Ljava/lang/String;

    invoke-virtual {p5}, Lcom/mbridge/msdk/mbbanner/common/a/b;->d()Ljava/lang/String;

    move-result-object p2

    invoke-static {v5, p0, p2}, Lcom/mbridge/msdk/foundation/same/net/f/b;->a(Lcom/mbridge/msdk/foundation/same/net/g/d;Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    const-string p0, "sign"

    .line 51
    invoke-static {v5, p0, v0}, Lcom/mbridge/msdk/foundation/same/net/f/b;->a(Lcom/mbridge/msdk/foundation/same/net/g/d;Ljava/lang/String;Ljava/lang/String;)V

    const-string p0, "1"

    const-string p2, "only_impression"

    .line 53
    invoke-static {v5, p2, p0}, Lcom/mbridge/msdk/foundation/same/net/f/b;->a(Lcom/mbridge/msdk/foundation/same/net/g/d;Ljava/lang/String;Ljava/lang/String;)V

    const-string p2, "ping_mode"

    .line 54
    invoke-static {v5, p2, p0}, Lcom/mbridge/msdk/foundation/same/net/f/b;->a(Lcom/mbridge/msdk/foundation/same/net/g/d;Ljava/lang/String;Ljava/lang/String;)V

    const-string p2, "ttc_ids"

    .line 55
    invoke-static {v5, p2, v1}, Lcom/mbridge/msdk/foundation/same/net/f/b;->a(Lcom/mbridge/msdk/foundation/same/net/g/d;Ljava/lang/String;Ljava/lang/String;)V

    .line 56
    sget-object p2, Lcom/mbridge/msdk/foundation/same/net/g/d;->c:Ljava/lang/String;

    invoke-static {v5, p2, p1}, Lcom/mbridge/msdk/foundation/same/net/f/b;->a(Lcom/mbridge/msdk/foundation/same/net/g/d;Ljava/lang/String;Ljava/lang/String;)V

    const-string p1, "install_ids"

    .line 57
    invoke-static {v5, p1, v2}, Lcom/mbridge/msdk/foundation/same/net/f/b;->a(Lcom/mbridge/msdk/foundation/same/net/g/d;Ljava/lang/String;Ljava/lang/String;)V

    const-string p1, "ad_source_id"

    .line 58
    invoke-static {v5, p1, p0}, Lcom/mbridge/msdk/foundation/same/net/f/b;->a(Lcom/mbridge/msdk/foundation/same/net/g/d;Ljava/lang/String;Ljava/lang/String;)V

    .line 59
    sget-object p0, Lcom/mbridge/msdk/foundation/same/net/g/d;->a:Ljava/lang/String;

    invoke-static {v5, p0, p3}, Lcom/mbridge/msdk/foundation/same/net/f/b;->a(Lcom/mbridge/msdk/foundation/same/net/g/d;Ljava/lang/String;Ljava/lang/String;)V

    const-string p0, "ad_type"

    const-string p1, "296"

    .line 60
    invoke-static {v5, p0, p1}, Lcom/mbridge/msdk/foundation/same/net/f/b;->a(Lcom/mbridge/msdk/foundation/same/net/g/d;Ljava/lang/String;Ljava/lang/String;)V

    .line 61
    new-instance p0, Ljava/lang/StringBuilder;

    invoke-direct {p0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p0, p4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p1, ""

    invoke-virtual {p0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    const-string p2, "offset"

    invoke-static {v5, p2, p0}, Lcom/mbridge/msdk/foundation/same/net/f/b;->a(Lcom/mbridge/msdk/foundation/same/net/g/d;Ljava/lang/String;Ljava/lang/String;)V

    .line 64
    sget-object p0, Lcom/mbridge/msdk/foundation/same/net/g/d;->b:Ljava/lang/String;

    invoke-static {v5, p0, v3}, Lcom/mbridge/msdk/foundation/same/net/f/b;->a(Lcom/mbridge/msdk/foundation/same/net/g/d;Ljava/lang/String;Ljava/lang/String;)V

    const-string p0, "close_id"

    .line 65
    invoke-static {v5, p0, v4}, Lcom/mbridge/msdk/foundation/same/net/f/b;->a(Lcom/mbridge/msdk/foundation/same/net/g/d;Ljava/lang/String;Ljava/lang/String;)V

    .line 66
    new-instance p0, Ljava/lang/StringBuilder;

    invoke-direct {p0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p5}, Lcom/mbridge/msdk/mbbanner/common/a/b;->a()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    const-string p2, "unit_size"

    invoke-static {v5, p2, p0}, Lcom/mbridge/msdk/foundation/same/net/f/b;->a(Lcom/mbridge/msdk/foundation/same/net/g/d;Ljava/lang/String;Ljava/lang/String;)V

    .line 67
    new-instance p0, Ljava/lang/StringBuilder;

    invoke-direct {p0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p5}, Lcom/mbridge/msdk/mbbanner/common/a/b;->b()I

    move-result p2

    invoke-virtual {p0, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    const-string p2, "refresh_time"

    invoke-static {v5, p2, p0}, Lcom/mbridge/msdk/foundation/same/net/f/b;->a(Lcom/mbridge/msdk/foundation/same/net/g/d;Ljava/lang/String;Ljava/lang/String;)V

    .line 69
    invoke-virtual {p5}, Lcom/mbridge/msdk/mbbanner/common/a/b;->c()Ljava/lang/String;

    move-result-object p0

    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p0

    if-nez p0, :cond_1

    .line 70
    new-instance p0, Ljava/lang/StringBuilder;

    invoke-direct {p0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p5}, Lcom/mbridge/msdk/mbbanner/common/a/b;->c()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    const-string p1, "token"

    invoke-static {v5, p1, p0}, Lcom/mbridge/msdk/foundation/same/net/f/b;->a(Lcom/mbridge/msdk/foundation/same/net/g/d;Ljava/lang/String;Ljava/lang/String;)V

    :cond_1
    return-object v5
.end method
