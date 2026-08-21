.class public final Lcom/mbridge/msdk/splash/d/d;
.super Ljava/lang/Object;
.source "SplashShowListenerImpl.java"


# instance fields
.field private a:Lcom/mbridge/msdk/out/MBSplashShowListener;

.field private b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

.field private c:Z

.field private d:Lcom/mbridge/msdk/splash/d/c;


# direct methods
.method public constructor <init>(Lcom/mbridge/msdk/splash/d/c;Lcom/mbridge/msdk/out/MBSplashShowListener;DLcom/mbridge/msdk/foundation/entity/CampaignEx;)V
    .locals 0

    .line 26
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 27
    iput-object p1, p0, Lcom/mbridge/msdk/splash/d/d;->d:Lcom/mbridge/msdk/splash/d/c;

    .line 28
    iput-object p2, p0, Lcom/mbridge/msdk/splash/d/d;->a:Lcom/mbridge/msdk/out/MBSplashShowListener;

    .line 29
    iput-object p5, p0, Lcom/mbridge/msdk/splash/d/d;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    .line 30
    invoke-direct {p0, p3, p4, p5}, Lcom/mbridge/msdk/splash/d/d;->a(DLcom/mbridge/msdk/foundation/entity/CampaignEx;)Z

    move-result p1

    iput-boolean p1, p0, Lcom/mbridge/msdk/splash/d/d;->c:Z

    return-void
.end method

.method private a(DLcom/mbridge/msdk/foundation/entity/CampaignEx;)Z
    .locals 9

    const-string v0, "SplashShowListenerImpl"

    const/4 v1, 0x0

    .line 122
    :try_start_0
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/controller/a;->k()Ljava/lang/String;

    move-result-object v2

    .line 123
    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    const-wide/16 v4, 0x0

    if-nez v3, :cond_0

    .line 124
    invoke-static {}, Lcom/mbridge/msdk/c/b;->a()Lcom/mbridge/msdk/c/b;

    move-result-object v3

    invoke-virtual {v3, v2}, Lcom/mbridge/msdk/c/b;->b(Ljava/lang/String;)Lcom/mbridge/msdk/c/a;

    move-result-object v2

    if-eqz v2, :cond_0

    .line 126
    invoke-virtual {v2}, Lcom/mbridge/msdk/c/a;->W()J

    move-result-wide v3

    const-wide/16 v5, 0x3e8

    mul-long/2addr v3, v5

    .line 127
    invoke-virtual {v2}, Lcom/mbridge/msdk/c/a;->ag()J

    move-result-wide v7

    mul-long/2addr v5, v7

    move-wide v2, v3

    move-wide v4, v5

    goto :goto_0

    :cond_0
    move-wide v2, v4

    .line 131
    :goto_0
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    const-string v7, "cbp : "

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, p1, p2}, Ljava/lang/StringBuilder;->append(D)Ljava/lang/StringBuilder;

    const-string v7, " plct : "

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v4, v5}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v7, " plctb : "

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v2, v3}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    invoke-static {v0, v6}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    const/4 v6, 0x1

    if-eqz p3, :cond_2

    .line 134
    invoke-virtual {p3, v4, v5, v2, v3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isSpareOffer(JJ)Z

    move-result v2

    if-eqz v2, :cond_1

    .line 135
    invoke-virtual {p3, v6}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setSpareOfferFlag(I)V

    return v6

    .line 138
    :cond_1
    invoke-virtual {p3, v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setSpareOfferFlag(I)V

    :cond_2
    if-eqz p3, :cond_5

    .line 142
    invoke-virtual {p3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isBidCampaign()Z

    move-result p3

    if-nez p3, :cond_5

    const-wide/high16 v2, 0x3ff0000000000000L    # 1.0

    cmpl-double p3, p1, v2

    if-nez p3, :cond_3

    return v1

    .line 147
    :cond_3
    new-instance p3, Ljava/util/Random;

    invoke-direct {p3}, Ljava/util/Random;-><init>()V

    invoke-virtual {p3}, Ljava/util/Random;->nextDouble()D

    move-result-wide v2

    .line 149
    new-instance p3, Ljava/lang/StringBuilder;

    invoke-direct {p3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "hit : "

    invoke-virtual {p3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p3, v2, v3}, Ljava/lang/StringBuilder;->append(D)Ljava/lang/StringBuilder;

    const-string v4, " "

    invoke-virtual {p3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    cmpl-double p1, v2, p1

    if-lez p1, :cond_4

    move p2, v6

    goto :goto_1

    :cond_4
    move p2, v1

    :goto_1
    invoke-virtual {p3, p2}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {p3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-static {v0, p2}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    if-lez p1, :cond_5

    move v1, v6

    :cond_5
    return v1

    :catch_0
    move-exception p1

    const-string p2, "CBPERROR"

    .line 157
    invoke-static {v0, p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    return v1
.end method


# virtual methods
.method public final a(Lcom/mbridge/msdk/out/MBridgeIds;)V
    .locals 4

    .line 35
    iget-object v0, p0, Lcom/mbridge/msdk/splash/d/d;->d:Lcom/mbridge/msdk/splash/d/c;

    if-eqz v0, :cond_0

    const/4 v1, 0x1

    .line 36
    iput-boolean v1, v0, Lcom/mbridge/msdk/splash/d/c;->a:Z

    .line 38
    :cond_0
    new-instance v0, Ljava/lang/StringBuffer;

    invoke-direct {v0}, Ljava/lang/StringBuffer;-><init>()V

    const-string v1, "load_to="

    .line 39
    invoke-virtual {v0, v1}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    iget-object v1, p0, Lcom/mbridge/msdk/splash/d/d;->d:Lcom/mbridge/msdk/splash/d/c;

    invoke-virtual {v1}, Lcom/mbridge/msdk/splash/d/c;->b()J

    move-result-wide v1

    invoke-virtual {v0, v1, v2}, Ljava/lang/StringBuffer;->append(J)Ljava/lang/StringBuffer;

    const-string v1, "&"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    const-string v2, "allow_skip="

    .line 40
    invoke-virtual {v0, v2}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    iget-object v2, p0, Lcom/mbridge/msdk/splash/d/d;->d:Lcom/mbridge/msdk/splash/d/c;

    invoke-virtual {v2}, Lcom/mbridge/msdk/splash/d/c;->c()Z

    move-result v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuffer;->append(I)Ljava/lang/StringBuffer;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    const-string v2, "countdown="

    .line 41
    invoke-virtual {v0, v2}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    iget-object v2, p0, Lcom/mbridge/msdk/splash/d/d;->d:Lcom/mbridge/msdk/splash/d/c;

    invoke-virtual {v2}, Lcom/mbridge/msdk/splash/d/c;->d()I

    move-result v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuffer;->append(I)Ljava/lang/StringBuffer;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    .line 42
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v1

    iget-object v2, p0, Lcom/mbridge/msdk/splash/d/d;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p1}, Lcom/mbridge/msdk/out/MBridgeIds;->getUnitId()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0}, Ljava/lang/StringBuffer;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v1, v2, v3, v0}, Lcom/mbridge/msdk/foundation/same/report/e;->a(Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Ljava/lang/String;)V

    .line 43
    iget-object v0, p0, Lcom/mbridge/msdk/splash/d/d;->a:Lcom/mbridge/msdk/out/MBSplashShowListener;

    if-eqz v0, :cond_1

    .line 44
    iget-boolean v1, p0, Lcom/mbridge/msdk/splash/d/d;->c:Z

    if-nez v1, :cond_1

    .line 45
    invoke-interface {v0, p1}, Lcom/mbridge/msdk/out/MBSplashShowListener;->onShowSuccessed(Lcom/mbridge/msdk/out/MBridgeIds;)V

    :cond_1
    return-void
.end method

.method public final a(Lcom/mbridge/msdk/out/MBridgeIds;I)V
    .locals 5

    .line 73
    iget-object v0, p0, Lcom/mbridge/msdk/splash/d/d;->a:Lcom/mbridge/msdk/out/MBSplashShowListener;

    if-eqz v0, :cond_0

    .line 74
    invoke-interface {v0, p1, p2}, Lcom/mbridge/msdk/out/MBSplashShowListener;->onDismiss(Lcom/mbridge/msdk/out/MBridgeIds;I)V

    .line 76
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/splash/d/d;->d:Lcom/mbridge/msdk/splash/d/c;

    if-eqz v0, :cond_1

    const/4 v1, 0x0

    .line 77
    iput-boolean v1, v0, Lcom/mbridge/msdk/splash/d/c;->a:Z

    :cond_1
    const/4 v0, 0x6

    if-eq p2, v0, :cond_2

    const/4 v0, 0x4

    if-eq p2, v0, :cond_2

    const/4 v0, 0x5

    if-ne p2, v0, :cond_4

    .line 80
    :cond_2
    iget-object v0, p0, Lcom/mbridge/msdk/splash/d/d;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p1}, Lcom/mbridge/msdk/out/MBridgeIds;->getUnitId()Ljava/lang/String;

    move-result-object p1

    const/4 v1, 0x0

    if-eqz v0, :cond_3

    .line 1303
    :try_start_0
    invoke-static {}, Lcom/mbridge/msdk/splash/a/b;->a()Lcom/mbridge/msdk/splash/a/b;

    move-result-object v1

    invoke-virtual {v1, p1}, Lcom/mbridge/msdk/splash/a/b;->b(Ljava/lang/String;)Lcom/mbridge/msdk/splash/a/b;

    move-result-object v1

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestId()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/mbridge/msdk/splash/a/b;->d(Ljava/lang/String;)Lcom/mbridge/msdk/splash/a/b;

    move-result-object v1

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestIdNotice()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/mbridge/msdk/splash/a/b;->g(Ljava/lang/String;)Lcom/mbridge/msdk/splash/a/b;

    move-result-object v1

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/mbridge/msdk/splash/a/b;->c(Ljava/lang/String;)Lcom/mbridge/msdk/splash/a/b;

    move-result-object v1

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getCreativeId()J

    move-result-wide v3

    invoke-virtual {v2, v3, v4}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v3, ""

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/mbridge/msdk/splash/a/b;->e(Ljava/lang/String;)Lcom/mbridge/msdk/splash/a/b;

    move-result-object v1

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isBidCampaign()Z

    move-result v0

    invoke-virtual {v1, v0}, Lcom/mbridge/msdk/splash/a/b;->a(Z)Lcom/mbridge/msdk/splash/a/b;

    move-result-object v1

    .line 1306
    :cond_3
    invoke-static {v1, p1, p2}, Lcom/mbridge/msdk/splash/e/a;->a(Lcom/mbridge/msdk/splash/a/b;Ljava/lang/String;I)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 1308
    sget-boolean p2, Lcom/mbridge/msdk/MBridgeConstans;->DEBUG:Z

    if-eqz p2, :cond_4

    .line 1309
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_4
    :goto_0
    return-void
.end method

.method public final a(Lcom/mbridge/msdk/out/MBridgeIds;III)V
    .locals 3

    .line 92
    iget-object v0, p0, Lcom/mbridge/msdk/splash/d/d;->a:Lcom/mbridge/msdk/out/MBSplashShowListener;

    if-eqz v0, :cond_0

    .line 93
    invoke-interface {v0, p1}, Lcom/mbridge/msdk/out/MBSplashShowListener;->onZoomOutPlayStart(Lcom/mbridge/msdk/out/MBridgeIds;)V

    .line 95
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/splash/d/d;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p1}, Lcom/mbridge/msdk/out/MBridgeIds;->getUnitId()Ljava/lang/String;

    move-result-object p1

    .line 2244
    :try_start_0
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "flb_size="

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p3, "x"

    invoke-virtual {v1, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p2, "&flb_type="

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p2, "&"

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    .line 2247
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object p3

    invoke-virtual {p3}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object p3

    invoke-static {p3, v0, p1, p2}, Lcom/mbridge/msdk/foundation/same/report/e;->a(Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 2249
    :try_start_1
    sget-boolean p2, Lcom/mbridge/msdk/MBridgeConstans;->DEBUG:Z

    if-eqz p2, :cond_1

    .line 2250
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    goto :goto_0

    :catch_1
    move-exception p1

    .line 2254
    sget-boolean p2, Lcom/mbridge/msdk/MBridgeConstans;->DEBUG:Z

    if-eqz p2, :cond_1

    .line 2255
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_1
    :goto_0
    return-void
.end method

.method public final a(Lcom/mbridge/msdk/out/MBridgeIds;J)V
    .locals 1

    .line 86
    iget-object v0, p0, Lcom/mbridge/msdk/splash/d/d;->a:Lcom/mbridge/msdk/out/MBSplashShowListener;

    if-eqz v0, :cond_0

    .line 87
    invoke-interface {v0, p1, p2, p3}, Lcom/mbridge/msdk/out/MBSplashShowListener;->onAdTick(Lcom/mbridge/msdk/out/MBridgeIds;J)V

    :cond_0
    return-void
.end method

.method public final a(Lcom/mbridge/msdk/out/MBridgeIds;Ljava/lang/String;)V
    .locals 3

    .line 52
    iget-object v0, p0, Lcom/mbridge/msdk/splash/d/d;->d:Lcom/mbridge/msdk/splash/d/c;

    if-eqz v0, :cond_0

    const/4 v1, 0x0

    .line 53
    iput-boolean v1, v0, Lcom/mbridge/msdk/splash/d/c;->a:Z

    .line 55
    :cond_0
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/splash/d/d;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p1}, Lcom/mbridge/msdk/out/MBridgeIds;->getUnitId()Ljava/lang/String;

    move-result-object v2

    invoke-static {v0, v1, v2, p2}, Lcom/mbridge/msdk/foundation/same/report/e;->b(Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Ljava/lang/String;)V

    .line 56
    iget-object v0, p0, Lcom/mbridge/msdk/splash/d/d;->a:Lcom/mbridge/msdk/out/MBSplashShowListener;

    if-eqz v0, :cond_1

    .line 57
    invoke-interface {v0, p1, p2}, Lcom/mbridge/msdk/out/MBSplashShowListener;->onShowFailed(Lcom/mbridge/msdk/out/MBridgeIds;Ljava/lang/String;)V

    :cond_1
    return-void
.end method

.method public final b(Lcom/mbridge/msdk/out/MBridgeIds;)V
    .locals 2

    .line 63
    iget-object v0, p0, Lcom/mbridge/msdk/splash/d/d;->a:Lcom/mbridge/msdk/out/MBSplashShowListener;

    if-eqz v0, :cond_0

    .line 64
    iget-boolean v1, p0, Lcom/mbridge/msdk/splash/d/d;->c:Z

    if-nez v1, :cond_0

    .line 65
    invoke-interface {v0, p1}, Lcom/mbridge/msdk/out/MBSplashShowListener;->onAdClicked(Lcom/mbridge/msdk/out/MBridgeIds;)V

    :cond_0
    return-void
.end method
