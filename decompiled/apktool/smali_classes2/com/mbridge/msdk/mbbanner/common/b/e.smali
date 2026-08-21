.class public Lcom/mbridge/msdk/mbbanner/common/b/e;
.super Ljava/lang/Object;
.source "DeductionBannerShowListener.java"

# interfaces
.implements Lcom/mbridge/msdk/mbbanner/common/b/c;


# static fields
.field private static final a:Ljava/lang/String;


# instance fields
.field private b:Lcom/mbridge/msdk/mbbanner/common/b/c;

.field private c:Lcom/mbridge/msdk/c/d;

.field private d:Z


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 12
    const-class v0, Lcom/mbridge/msdk/mbbanner/common/b/e;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mbridge/msdk/mbbanner/common/b/e;->a:Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Lcom/mbridge/msdk/mbbanner/common/b/c;Lcom/mbridge/msdk/c/d;)V
    .locals 1

    .line 18
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    .line 16
    iput-boolean v0, p0, Lcom/mbridge/msdk/mbbanner/common/b/e;->d:Z

    .line 19
    iput-object p2, p0, Lcom/mbridge/msdk/mbbanner/common/b/e;->c:Lcom/mbridge/msdk/c/d;

    .line 20
    iput-object p1, p0, Lcom/mbridge/msdk/mbbanner/common/b/e;->b:Lcom/mbridge/msdk/mbbanner/common/b/c;

    return-void
.end method


# virtual methods
.method public final a()V
    .locals 2

    .line 54
    iget-object v0, p0, Lcom/mbridge/msdk/mbbanner/common/b/e;->b:Lcom/mbridge/msdk/mbbanner/common/b/c;

    if-eqz v0, :cond_0

    iget-boolean v1, p0, Lcom/mbridge/msdk/mbbanner/common/b/e;->d:Z

    if-nez v1, :cond_0

    .line 55
    invoke-interface {v0}, Lcom/mbridge/msdk/mbbanner/common/b/c;->a()V

    :cond_0
    return-void
.end method

.method public final a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Z)V
    .locals 1

    .line 82
    iget-object p2, p0, Lcom/mbridge/msdk/mbbanner/common/b/e;->b:Lcom/mbridge/msdk/mbbanner/common/b/c;

    if-eqz p2, :cond_0

    .line 83
    iget-boolean v0, p0, Lcom/mbridge/msdk/mbbanner/common/b/e;->d:Z

    invoke-interface {p2, p1, v0}, Lcom/mbridge/msdk/mbbanner/common/b/c;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Z)V

    :cond_0
    return-void
.end method

.method public final a(Ljava/lang/String;)V
    .locals 1

    .line 47
    iget-object v0, p0, Lcom/mbridge/msdk/mbbanner/common/b/e;->b:Lcom/mbridge/msdk/mbbanner/common/b/c;

    if-eqz v0, :cond_0

    .line 48
    invoke-interface {v0, p1}, Lcom/mbridge/msdk/mbbanner/common/b/c;->a(Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public final a(Ljava/util/List;)V
    .locals 6
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/mbridge/msdk/foundation/entity/CampaignEx;",
            ">;)V"
        }
    .end annotation

    if-eqz p1, :cond_3

    .line 27
    :try_start_0
    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_3

    .line 28
    iget-object v0, p0, Lcom/mbridge/msdk/mbbanner/common/b/e;->c:Lcom/mbridge/msdk/c/d;

    const/4 v1, 0x0

    invoke-interface {p1, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isBidCampaign()Z

    move-result v2

    if-eqz v2, :cond_0

    goto :goto_0

    :cond_0
    if-eqz v0, :cond_2

    .line 1101
    invoke-virtual {v0}, Lcom/mbridge/msdk/c/d;->e()D

    move-result-wide v2

    const-wide/high16 v4, 0x3ff0000000000000L    # 1.0

    cmpl-double v2, v2, v4

    if-nez v2, :cond_1

    goto :goto_0

    .line 1104
    :cond_1
    invoke-virtual {v0}, Lcom/mbridge/msdk/c/d;->e()D

    move-result-wide v2

    .line 1105
    new-instance v0, Ljava/util/Random;

    invoke-direct {v0}, Ljava/util/Random;-><init>()V

    invoke-virtual {v0}, Ljava/util/Random;->nextDouble()D

    move-result-wide v4

    cmpl-double v0, v4, v2

    if-lez v0, :cond_2

    const/4 v0, 0x1

    move v1, v0

    .line 28
    :cond_2
    :goto_0
    iput-boolean v1, p0, Lcom/mbridge/msdk/mbbanner/common/b/e;->d:Z

    .line 29
    sget-object v0, Lcom/mbridge/msdk/mbbanner/common/b/e;->a:Ljava/lang/String;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    iget-boolean v2, p0, Lcom/mbridge/msdk/mbbanner/common/b/e;->d:Z

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v2, ""

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_1

    :catch_0
    move-exception v0

    .line 32
    sget-object v1, Lcom/mbridge/msdk/mbbanner/common/b/e;->a:Ljava/lang/String;

    const-string v2, "Exception"

    invoke-static {v1, v2, v0}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    .line 35
    :cond_3
    :goto_1
    iget-object v0, p0, Lcom/mbridge/msdk/mbbanner/common/b/e;->b:Lcom/mbridge/msdk/mbbanner/common/b/c;

    if-eqz v0, :cond_4

    .line 40
    invoke-interface {v0, p1}, Lcom/mbridge/msdk/mbbanner/common/b/c;->a(Ljava/util/List;)V

    :cond_4
    return-void
.end method

.method public final a(Z)V
    .locals 1

    .line 113
    iget-object v0, p0, Lcom/mbridge/msdk/mbbanner/common/b/e;->b:Lcom/mbridge/msdk/mbbanner/common/b/c;

    if-eqz v0, :cond_0

    .line 114
    invoke-interface {v0, p1}, Lcom/mbridge/msdk/mbbanner/common/b/c;->a(Z)V

    :cond_0
    return-void
.end method

.method public final b()V
    .locals 1

    .line 61
    iget-object v0, p0, Lcom/mbridge/msdk/mbbanner/common/b/e;->b:Lcom/mbridge/msdk/mbbanner/common/b/c;

    if-eqz v0, :cond_0

    .line 62
    invoke-interface {v0}, Lcom/mbridge/msdk/mbbanner/common/b/c;->b()V

    :cond_0
    return-void
.end method

.method public final c()V
    .locals 1

    .line 68
    iget-object v0, p0, Lcom/mbridge/msdk/mbbanner/common/b/e;->b:Lcom/mbridge/msdk/mbbanner/common/b/c;

    if-eqz v0, :cond_0

    .line 69
    invoke-interface {v0}, Lcom/mbridge/msdk/mbbanner/common/b/c;->c()V

    :cond_0
    return-void
.end method

.method public final d()V
    .locals 1

    .line 75
    iget-object v0, p0, Lcom/mbridge/msdk/mbbanner/common/b/e;->b:Lcom/mbridge/msdk/mbbanner/common/b/c;

    if-eqz v0, :cond_0

    .line 76
    invoke-interface {v0}, Lcom/mbridge/msdk/mbbanner/common/b/c;->d()V

    :cond_0
    return-void
.end method

.method public final e()V
    .locals 1

    .line 89
    iget-object v0, p0, Lcom/mbridge/msdk/mbbanner/common/b/e;->b:Lcom/mbridge/msdk/mbbanner/common/b/c;

    if-eqz v0, :cond_0

    .line 90
    invoke-interface {v0}, Lcom/mbridge/msdk/mbbanner/common/b/c;->e()V

    :cond_0
    return-void
.end method
