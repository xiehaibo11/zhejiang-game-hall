.class public final Lcom/mbridge/msdk/advanced/c/d;
.super Ljava/lang/Object;
.source "NativeAdvancedShowListenerImpl.java"


# instance fields
.field private a:Lcom/mbridge/msdk/out/NativeAdvancedAdListener;

.field private b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

.field private c:Z

.field private d:Lcom/mbridge/msdk/advanced/c/c;


# direct methods
.method public constructor <init>(Lcom/mbridge/msdk/advanced/c/c;Lcom/mbridge/msdk/out/NativeAdvancedAdListener;DLcom/mbridge/msdk/foundation/entity/CampaignEx;)V
    .locals 0

    .line 28
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 29
    iput-object p1, p0, Lcom/mbridge/msdk/advanced/c/d;->d:Lcom/mbridge/msdk/advanced/c/c;

    .line 30
    iput-object p2, p0, Lcom/mbridge/msdk/advanced/c/d;->a:Lcom/mbridge/msdk/out/NativeAdvancedAdListener;

    .line 31
    iput-object p5, p0, Lcom/mbridge/msdk/advanced/c/d;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    .line 32
    invoke-direct {p0, p3, p4, p5}, Lcom/mbridge/msdk/advanced/c/d;->a(DLcom/mbridge/msdk/foundation/entity/CampaignEx;)Z

    move-result p1

    iput-boolean p1, p0, Lcom/mbridge/msdk/advanced/c/d;->c:Z

    return-void
.end method

.method private a(DLcom/mbridge/msdk/foundation/entity/CampaignEx;)Z
    .locals 9

    const-string v0, "NativeAdvancedShowListenerImpl"

    const/4 v1, 0x0

    .line 115
    :try_start_0
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/controller/a;->k()Ljava/lang/String;

    move-result-object v2

    .line 116
    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    const-wide/16 v4, 0x0

    if-nez v3, :cond_0

    .line 117
    invoke-static {}, Lcom/mbridge/msdk/c/b;->a()Lcom/mbridge/msdk/c/b;

    move-result-object v3

    invoke-virtual {v3, v2}, Lcom/mbridge/msdk/c/b;->b(Ljava/lang/String;)Lcom/mbridge/msdk/c/a;

    move-result-object v2

    if-eqz v2, :cond_0

    .line 119
    invoke-virtual {v2}, Lcom/mbridge/msdk/c/a;->W()J

    move-result-wide v3

    const-wide/16 v5, 0x3e8

    mul-long/2addr v3, v5

    .line 120
    invoke-virtual {v2}, Lcom/mbridge/msdk/c/a;->ag()J

    move-result-wide v7

    mul-long/2addr v5, v7

    move-wide v2, v3

    move-wide v4, v5

    goto :goto_0

    :cond_0
    move-wide v2, v4

    .line 124
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

    .line 127
    invoke-virtual {p3, v4, v5, v2, v3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isSpareOffer(JJ)Z

    move-result v2

    if-eqz v2, :cond_1

    .line 128
    invoke-virtual {p3, v6}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setSpareOfferFlag(I)V

    return v6

    .line 131
    :cond_1
    invoke-virtual {p3, v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setSpareOfferFlag(I)V

    :cond_2
    if-eqz p3, :cond_5

    .line 135
    invoke-virtual {p3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isBidCampaign()Z

    move-result p3

    if-nez p3, :cond_5

    const-wide/high16 v2, 0x3ff0000000000000L    # 1.0

    cmpl-double p3, p1, v2

    if-nez p3, :cond_3

    return v1

    .line 140
    :cond_3
    new-instance p3, Ljava/util/Random;

    invoke-direct {p3}, Ljava/util/Random;-><init>()V

    invoke-virtual {p3}, Ljava/util/Random;->nextDouble()D

    move-result-wide v2

    .line 142
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

    .line 150
    invoke-static {v0, p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    return v1
.end method


# virtual methods
.method public final a(Lcom/mbridge/msdk/out/MBridgeIds;)V
    .locals 4

    .line 37
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/c/d;->d:Lcom/mbridge/msdk/advanced/c/c;

    if-eqz v0, :cond_0

    const/4 v1, 0x1

    .line 38
    iput-boolean v1, v0, Lcom/mbridge/msdk/advanced/c/c;->a:Z

    .line 40
    :cond_0
    new-instance v0, Ljava/lang/StringBuffer;

    invoke-direct {v0}, Ljava/lang/StringBuffer;-><init>()V

    const-string v1, "load_to="

    .line 41
    invoke-virtual {v0, v1}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    const-string v1, "0"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    const-string v1, "&"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    const-string v2, "allow_skip="

    .line 42
    invoke-virtual {v0, v2}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    iget-object v2, p0, Lcom/mbridge/msdk/advanced/c/d;->d:Lcom/mbridge/msdk/advanced/c/c;

    invoke-virtual {v2}, Lcom/mbridge/msdk/advanced/c/c;->c()I

    move-result v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuffer;->append(I)Ljava/lang/StringBuffer;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    .line 44
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v1

    iget-object v2, p0, Lcom/mbridge/msdk/advanced/c/d;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p1}, Lcom/mbridge/msdk/out/MBridgeIds;->getUnitId()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0}, Ljava/lang/StringBuffer;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v1, v2, v3, v0}, Lcom/mbridge/msdk/foundation/same/report/e;->a(Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Ljava/lang/String;)V

    .line 45
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/c/d;->a:Lcom/mbridge/msdk/out/NativeAdvancedAdListener;

    if-eqz v0, :cond_1

    .line 46
    iget-boolean v1, p0, Lcom/mbridge/msdk/advanced/c/d;->c:Z

    if-nez v1, :cond_1

    .line 47
    invoke-interface {v0, p1}, Lcom/mbridge/msdk/out/NativeAdvancedAdListener;->onLogImpression(Lcom/mbridge/msdk/out/MBridgeIds;)V

    :cond_1
    return-void
.end method

.method public final a(Lcom/mbridge/msdk/out/MBridgeIds;Ljava/lang/String;)V
    .locals 2

    .line 54
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/advanced/c/d;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p1}, Lcom/mbridge/msdk/out/MBridgeIds;->getUnitId()Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, v1, p1, p2}, Lcom/mbridge/msdk/foundation/same/report/e;->b(Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public final b(Lcom/mbridge/msdk/out/MBridgeIds;)V
    .locals 2

    .line 59
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/c/d;->a:Lcom/mbridge/msdk/out/NativeAdvancedAdListener;

    if-eqz v0, :cond_0

    .line 60
    iget-boolean v1, p0, Lcom/mbridge/msdk/advanced/c/d;->c:Z

    if-nez v1, :cond_0

    .line 61
    invoke-interface {v0, p1}, Lcom/mbridge/msdk/out/NativeAdvancedAdListener;->onClick(Lcom/mbridge/msdk/out/MBridgeIds;)V

    :cond_0
    return-void
.end method

.method public final c(Lcom/mbridge/msdk/out/MBridgeIds;)V
    .locals 1

    .line 68
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/c/d;->a:Lcom/mbridge/msdk/out/NativeAdvancedAdListener;

    if-eqz v0, :cond_0

    .line 69
    invoke-interface {v0, p1}, Lcom/mbridge/msdk/out/NativeAdvancedAdListener;->onClose(Lcom/mbridge/msdk/out/MBridgeIds;)V

    .line 70
    iget-object p1, p0, Lcom/mbridge/msdk/advanced/c/d;->d:Lcom/mbridge/msdk/advanced/c/c;

    if-eqz p1, :cond_0

    const/4 v0, 0x0

    .line 71
    iput-boolean v0, p1, Lcom/mbridge/msdk/advanced/c/c;->a:Z

    :cond_0
    return-void
.end method

.method public final d(Lcom/mbridge/msdk/out/MBridgeIds;)V
    .locals 1

    .line 78
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/c/d;->a:Lcom/mbridge/msdk/out/NativeAdvancedAdListener;

    if-eqz v0, :cond_0

    .line 79
    invoke-interface {v0, p1}, Lcom/mbridge/msdk/out/NativeAdvancedAdListener;->onLeaveApp(Lcom/mbridge/msdk/out/MBridgeIds;)V

    :cond_0
    return-void
.end method

.method public final e(Lcom/mbridge/msdk/out/MBridgeIds;)V
    .locals 1

    .line 85
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/c/d;->a:Lcom/mbridge/msdk/out/NativeAdvancedAdListener;

    if-eqz v0, :cond_0

    .line 86
    invoke-interface {v0, p1}, Lcom/mbridge/msdk/out/NativeAdvancedAdListener;->showFullScreen(Lcom/mbridge/msdk/out/MBridgeIds;)V

    :cond_0
    return-void
.end method

.method public final f(Lcom/mbridge/msdk/out/MBridgeIds;)V
    .locals 1

    .line 92
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/c/d;->a:Lcom/mbridge/msdk/out/NativeAdvancedAdListener;

    if-eqz v0, :cond_0

    .line 93
    invoke-interface {v0, p1}, Lcom/mbridge/msdk/out/NativeAdvancedAdListener;->closeFullScreen(Lcom/mbridge/msdk/out/MBridgeIds;)V

    :cond_0
    return-void
.end method
