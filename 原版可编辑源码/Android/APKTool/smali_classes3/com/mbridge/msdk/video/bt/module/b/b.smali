.class public final Lcom/mbridge/msdk/video/bt/module/b/b;
.super Lcom/mbridge/msdk/video/bt/module/b/c;
.source "DeductionShowRewardListener.java"


# instance fields
.field private a:Lcom/mbridge/msdk/video/bt/module/b/h;

.field private b:Lcom/mbridge/msdk/videocommon/d/c;

.field private c:Ljava/lang/String;

.field private d:Ljava/lang/String;

.field private e:Z

.field private f:Landroid/content/Context;

.field private g:Z

.field private h:Z

.field private i:Z

.field private j:Z

.field private k:Z


# direct methods
.method public constructor <init>(Landroid/content/Context;ZLcom/mbridge/msdk/videocommon/d/c;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Lcom/mbridge/msdk/video/bt/module/b/h;Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    .line 58
    invoke-direct {p0}, Lcom/mbridge/msdk/video/bt/module/b/c;-><init>()V

    const/4 v0, 0x0

    .line 39
    iput-boolean v0, p0, Lcom/mbridge/msdk/video/bt/module/b/b;->g:Z

    .line 44
    iput-boolean v0, p0, Lcom/mbridge/msdk/video/bt/module/b/b;->h:Z

    .line 49
    iput-boolean v0, p0, Lcom/mbridge/msdk/video/bt/module/b/b;->i:Z

    .line 54
    iput-boolean v0, p0, Lcom/mbridge/msdk/video/bt/module/b/b;->j:Z

    .line 56
    iput-boolean v0, p0, Lcom/mbridge/msdk/video/bt/module/b/b;->k:Z

    .line 59
    iput-object p5, p0, Lcom/mbridge/msdk/video/bt/module/b/b;->a:Lcom/mbridge/msdk/video/bt/module/b/h;

    .line 60
    invoke-direct {p0, p3, p4}, Lcom/mbridge/msdk/video/bt/module/b/b;->a(Lcom/mbridge/msdk/videocommon/d/c;Lcom/mbridge/msdk/foundation/entity/CampaignEx;)Z

    move-result p4

    iput-boolean p4, p0, Lcom/mbridge/msdk/video/bt/module/b/b;->g:Z

    .line 61
    iput-object p3, p0, Lcom/mbridge/msdk/video/bt/module/b/b;->b:Lcom/mbridge/msdk/videocommon/d/c;

    .line 62
    iput-object p7, p0, Lcom/mbridge/msdk/video/bt/module/b/b;->c:Ljava/lang/String;

    .line 63
    iput-object p6, p0, Lcom/mbridge/msdk/video/bt/module/b/b;->d:Ljava/lang/String;

    .line 64
    iput-boolean p2, p0, Lcom/mbridge/msdk/video/bt/module/b/b;->e:Z

    .line 65
    iput-object p1, p0, Lcom/mbridge/msdk/video/bt/module/b/b;->f:Landroid/content/Context;

    return-void
.end method

.method private a(I)Z
    .locals 5

    .line 263
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/b/b;->b:Lcom/mbridge/msdk/videocommon/d/c;

    const/4 v1, 0x0

    const/4 v2, 0x1

    const/4 v3, 0x4

    if-eqz v0, :cond_2

    .line 264
    invoke-virtual {v0}, Lcom/mbridge/msdk/videocommon/d/c;->z()Lcom/mbridge/msdk/videocommon/b/c;

    move-result-object v0

    if-eqz v0, :cond_2

    .line 266
    invoke-virtual {v0}, Lcom/mbridge/msdk/videocommon/b/c;->a()I

    move-result v4

    if-nez v4, :cond_1

    if-le p1, v3, :cond_0

    return v1

    :cond_0
    return v2

    .line 273
    :cond_1
    invoke-virtual {v0}, Lcom/mbridge/msdk/videocommon/b/c;->b()Ljava/util/List;

    move-result-object v0

    if-eqz v0, :cond_2

    .line 275
    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    invoke-interface {v0, p1}, Ljava/util/List;->contains(Ljava/lang/Object;)Z

    move-result p1

    return p1

    :cond_2
    if-le p1, v3, :cond_3

    return v1

    :cond_3
    return v2
.end method

.method private a(Lcom/mbridge/msdk/videocommon/d/c;Lcom/mbridge/msdk/foundation/entity/CampaignEx;)Z
    .locals 7

    const/4 v0, 0x0

    .line 186
    :try_start_0
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/controller/a;->k()Ljava/lang/String;

    move-result-object v1

    .line 187
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    const-wide/16 v3, 0x0

    if-nez v2, :cond_1

    .line 188
    invoke-static {}, Lcom/mbridge/msdk/c/b;->a()Lcom/mbridge/msdk/c/b;

    move-result-object v2

    invoke-virtual {v2, v1}, Lcom/mbridge/msdk/c/b;->b(Ljava/lang/String;)Lcom/mbridge/msdk/c/a;

    move-result-object v1

    if-nez v1, :cond_0

    .line 190
    invoke-static {}, Lcom/mbridge/msdk/c/b;->a()Lcom/mbridge/msdk/c/b;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/c/b;->b()Lcom/mbridge/msdk/c/a;

    move-result-object v1

    :cond_0
    if-eqz v1, :cond_1

    .line 194
    invoke-virtual {v1}, Lcom/mbridge/msdk/c/a;->W()J

    move-result-wide v1

    const-wide/16 v5, 0x3e8

    mul-long/2addr v1, v5

    goto :goto_0

    :cond_1
    move-wide v1, v3

    .line 197
    :goto_0
    invoke-static {}, Lcom/mbridge/msdk/videocommon/d/b;->a()Lcom/mbridge/msdk/videocommon/d/b;

    move-result-object v5

    invoke-virtual {v5}, Lcom/mbridge/msdk/videocommon/d/b;->b()Lcom/mbridge/msdk/videocommon/d/a;

    move-result-object v5

    if-eqz v5, :cond_2

    .line 199
    invoke-virtual {v5}, Lcom/mbridge/msdk/videocommon/d/a;->e()J

    move-result-wide v3

    :cond_2
    const/4 v5, 0x1

    if-eqz p2, :cond_5

    .line 202
    invoke-virtual {p2, v3, v4, v1, v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isSpareOffer(JJ)Z

    move-result v1

    if-eqz v1, :cond_4

    .line 203
    invoke-virtual {p2, v5}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setSpareOfferFlag(I)V

    .line 205
    invoke-virtual {p1}, Lcom/mbridge/msdk/videocommon/d/c;->C()I

    move-result p1

    if-ne p1, v5, :cond_3

    .line 206
    invoke-virtual {p2, v5}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setCbt(I)V

    return v5

    .line 209
    :cond_3
    invoke-virtual {p2, v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setCbt(I)V

    return v0

    .line 213
    :cond_4
    invoke-virtual {p2, v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setSpareOfferFlag(I)V

    :cond_5
    if-eqz p2, :cond_7

    .line 217
    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isBidCampaign()Z

    move-result v1

    if-nez v1, :cond_7

    if-eqz p1, :cond_7

    .line 224
    invoke-virtual {p1}, Lcom/mbridge/msdk/videocommon/d/c;->d()I

    move-result p1

    .line 228
    invoke-virtual {p2, p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setCbt(I)V

    if-ne p1, v5, :cond_6

    move v0, v5

    :cond_6
    return v0

    :cond_7
    if-eqz p2, :cond_8

    .line 232
    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isBidCampaign()Z

    move-result p1

    if-eqz p1, :cond_8

    .line 233
    invoke-virtual {p2, v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setCbt(I)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    :cond_8
    return v0
.end method

.method private a(Z)Z
    .locals 4

    const/4 v0, 0x0

    .line 340
    :try_start_0
    iget-object v1, p0, Lcom/mbridge/msdk/video/bt/module/b/b;->b:Lcom/mbridge/msdk/videocommon/d/c;

    if-nez v1, :cond_0

    return v0

    .line 343
    :cond_0
    iget-object v1, p0, Lcom/mbridge/msdk/video/bt/module/b/b;->b:Lcom/mbridge/msdk/videocommon/d/c;

    invoke-virtual {v1}, Lcom/mbridge/msdk/videocommon/d/c;->A()I

    move-result v1

    const/4 v2, 0x1

    if-eq v1, v2, :cond_4

    const/4 v3, 0x2

    if-eq v1, v3, :cond_2

    const/4 p1, 0x3

    if-eq v1, p1, :cond_1

    goto :goto_0

    .line 351
    :cond_1
    invoke-direct {p0}, Lcom/mbridge/msdk/video/bt/module/b/b;->d()Z

    move-result p1

    return p1

    :cond_2
    if-eqz p1, :cond_3

    .line 348
    invoke-direct {p0}, Lcom/mbridge/msdk/video/bt/module/b/b;->d()Z

    move-result p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-eqz p1, :cond_3

    move v0, v2

    :cond_3
    return v0

    :cond_4
    return p1

    :catchall_0
    move-exception p1

    const-string v1, "DeductionShowRewardListener"

    const-string v2, ""

    .line 354
    invoke-static {v1, v2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :goto_0
    return v0
.end method

.method private c()I
    .locals 1

    .line 247
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/b/b;->b:Lcom/mbridge/msdk/videocommon/d/c;

    if-eqz v0, :cond_0

    .line 248
    invoke-virtual {v0}, Lcom/mbridge/msdk/videocommon/d/c;->z()Lcom/mbridge/msdk/videocommon/b/c;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 250
    invoke-virtual {v0}, Lcom/mbridge/msdk/videocommon/b/c;->a()I

    move-result v0

    return v0

    :cond_0
    const/4 v0, 0x1

    return v0
.end method

.method private d()Z
    .locals 5

    const/4 v0, 0x0

    .line 368
    :try_start_0
    iget-object v1, p0, Lcom/mbridge/msdk/video/bt/module/b/b;->b:Lcom/mbridge/msdk/videocommon/d/c;

    if-nez v1, :cond_0

    return v0

    .line 371
    :cond_0
    iget-object v1, p0, Lcom/mbridge/msdk/video/bt/module/b/b;->b:Lcom/mbridge/msdk/videocommon/d/c;

    invoke-virtual {v1}, Lcom/mbridge/msdk/videocommon/d/c;->B()D

    move-result-wide v1

    const-wide/high16 v3, 0x3ff0000000000000L    # 1.0

    cmpl-double v3, v1, v3

    if-nez v3, :cond_1

    return v0

    .line 375
    :cond_1
    new-instance v3, Ljava/util/Random;

    invoke-direct {v3}, Ljava/util/Random;-><init>()V

    invoke-virtual {v3}, Ljava/util/Random;->nextDouble()D

    move-result-wide v3
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    cmpl-double v1, v3, v1

    if-lez v1, :cond_2

    const/4 v0, 0x1

    :cond_2
    return v0

    :catchall_0
    move-exception v1

    const-string v2, "DeductionShowRewardListener"

    const-string v3, ""

    .line 378
    invoke-static {v2, v3, v1}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    return v0
.end method


# virtual methods
.method public final a()V
    .locals 5

    .line 71
    invoke-super {p0}, Lcom/mbridge/msdk/video/bt/module/b/c;->a()V

    .line 72
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/b/b;->a:Lcom/mbridge/msdk/video/bt/module/b/h;

    if-eqz v0, :cond_2

    iget-boolean v0, p0, Lcom/mbridge/msdk/video/bt/module/b/b;->h:Z

    if-nez v0, :cond_2

    .line 73
    iget-boolean v0, p0, Lcom/mbridge/msdk/video/bt/module/b/b;->g:Z

    const/4 v1, 0x1

    if-eqz v0, :cond_0

    if-eqz v0, :cond_1

    invoke-direct {p0, v1}, Lcom/mbridge/msdk/video/bt/module/b/b;->a(I)Z

    move-result v0

    if-nez v0, :cond_1

    .line 74
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/b/b;->a:Lcom/mbridge/msdk/video/bt/module/b/h;

    invoke-interface {v0}, Lcom/mbridge/msdk/video/bt/module/b/h;->a()V

    .line 77
    :cond_1
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/b/b;->a:Lcom/mbridge/msdk/video/bt/module/b/h;

    const/4 v2, 0x2

    iget-object v3, p0, Lcom/mbridge/msdk/video/bt/module/b/b;->d:Ljava/lang/String;

    iget-object v4, p0, Lcom/mbridge/msdk/video/bt/module/b/b;->c:Ljava/lang/String;

    invoke-interface {v0, v2, v3, v4}, Lcom/mbridge/msdk/video/bt/module/b/h;->a(ILjava/lang/String;Ljava/lang/String;)V

    .line 79
    iput-boolean v1, p0, Lcom/mbridge/msdk/video/bt/module/b/b;->h:Z

    :cond_2
    return-void
.end method

.method public final a(Ljava/lang/String;)V
    .locals 4

    .line 128
    invoke-super {p0, p1}, Lcom/mbridge/msdk/video/bt/module/b/c;->a(Ljava/lang/String;)V

    .line 129
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/b/b;->a:Lcom/mbridge/msdk/video/bt/module/b/h;

    if-eqz v0, :cond_2

    iget-boolean v0, p0, Lcom/mbridge/msdk/video/bt/module/b/b;->i:Z

    if-nez v0, :cond_2

    .line 130
    iget-boolean v0, p0, Lcom/mbridge/msdk/video/bt/module/b/b;->g:Z

    const/4 v1, 0x1

    if-eqz v0, :cond_0

    if-eqz v0, :cond_1

    invoke-direct {p0, v1}, Lcom/mbridge/msdk/video/bt/module/b/b;->a(I)Z

    move-result v0

    if-nez v0, :cond_1

    .line 131
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/b/b;->a:Lcom/mbridge/msdk/video/bt/module/b/h;

    invoke-interface {v0, p1}, Lcom/mbridge/msdk/video/bt/module/b/h;->a(Ljava/lang/String;)V

    .line 134
    :cond_1
    iget-object p1, p0, Lcom/mbridge/msdk/video/bt/module/b/b;->a:Lcom/mbridge/msdk/video/bt/module/b/h;

    const/4 v0, 0x4

    iget-object v2, p0, Lcom/mbridge/msdk/video/bt/module/b/b;->d:Ljava/lang/String;

    iget-object v3, p0, Lcom/mbridge/msdk/video/bt/module/b/b;->c:Ljava/lang/String;

    invoke-interface {p1, v0, v2, v3}, Lcom/mbridge/msdk/video/bt/module/b/h;->a(ILjava/lang/String;Ljava/lang/String;)V

    .line 136
    iput-boolean v1, p0, Lcom/mbridge/msdk/video/bt/module/b/b;->i:Z

    :cond_2
    return-void
.end method

.method public final a(Ljava/lang/String;Ljava/lang/String;)V
    .locals 2

    .line 164
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/bt/module/b/c;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 165
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/b/b;->a:Lcom/mbridge/msdk/video/bt/module/b/h;

    if-eqz v0, :cond_1

    iget-boolean v0, p0, Lcom/mbridge/msdk/video/bt/module/b/b;->g:Z

    if-eqz v0, :cond_0

    if-eqz v0, :cond_1

    const/4 v0, 0x2

    invoke-direct {p0, v0}, Lcom/mbridge/msdk/video/bt/module/b/b;->a(I)Z

    move-result v0

    if-nez v0, :cond_1

    .line 166
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/b/b;->a:Lcom/mbridge/msdk/video/bt/module/b/h;

    invoke-interface {v0, p1, p2}, Lcom/mbridge/msdk/video/bt/module/b/h;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 169
    :cond_1
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/b/b;->a:Lcom/mbridge/msdk/video/bt/module/b/h;

    if-eqz v0, :cond_2

    const/4 v1, 0x5

    .line 170
    invoke-interface {v0, v1, p1, p2}, Lcom/mbridge/msdk/video/bt/module/b/h;->a(ILjava/lang/String;Ljava/lang/String;)V

    :cond_2
    return-void
.end method

.method public final a(ZI)V
    .locals 2

    .line 111
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/bt/module/b/c;->a(ZI)V

    .line 112
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/b/b;->a:Lcom/mbridge/msdk/video/bt/module/b/h;

    if-eqz v0, :cond_2

    iget-boolean v1, p0, Lcom/mbridge/msdk/video/bt/module/b/b;->j:Z

    if-nez v1, :cond_2

    .line 113
    iget-boolean v1, p0, Lcom/mbridge/msdk/video/bt/module/b/b;->g:Z

    if-nez v1, :cond_0

    .line 114
    invoke-interface {v0, p1, p2}, Lcom/mbridge/msdk/video/bt/module/b/h;->a(ZI)V

    return-void

    :cond_0
    const/4 v0, 0x5

    .line 117
    invoke-direct {p0, v0}, Lcom/mbridge/msdk/video/bt/module/b/b;->a(I)Z

    move-result v0

    if-nez v0, :cond_2

    .line 118
    invoke-direct {p0}, Lcom/mbridge/msdk/video/bt/module/b/b;->c()I

    move-result v0

    if-nez v0, :cond_1

    const/4 v0, 0x1

    invoke-direct {p0, v0}, Lcom/mbridge/msdk/video/bt/module/b/b;->a(I)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 119
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/b/b;->a:Lcom/mbridge/msdk/video/bt/module/b/h;

    const-string v1, ""

    invoke-interface {v0, v1}, Lcom/mbridge/msdk/video/bt/module/b/h;->a(Ljava/lang/String;)V

    .line 121
    :cond_1
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/b/b;->a:Lcom/mbridge/msdk/video/bt/module/b/h;

    invoke-interface {v0, p1, p2}, Lcom/mbridge/msdk/video/bt/module/b/h;->a(ZI)V

    :cond_2
    return-void
.end method

.method public final a(ZLcom/mbridge/msdk/videocommon/b/d;)V
    .locals 4

    .line 85
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/bt/module/b/c;->a(ZLcom/mbridge/msdk/videocommon/b/d;)V

    .line 86
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/b/b;->a:Lcom/mbridge/msdk/video/bt/module/b/h;

    if-eqz v0, :cond_3

    iget-boolean v1, p0, Lcom/mbridge/msdk/video/bt/module/b/b;->j:Z

    if-nez v1, :cond_3

    const/4 v1, 0x7

    .line 87
    iget-object v2, p0, Lcom/mbridge/msdk/video/bt/module/b/b;->d:Ljava/lang/String;

    iget-object v3, p0, Lcom/mbridge/msdk/video/bt/module/b/b;->c:Ljava/lang/String;

    invoke-interface {v0, v1, v2, v3}, Lcom/mbridge/msdk/video/bt/module/b/h;->a(ILjava/lang/String;Ljava/lang/String;)V

    .line 89
    iget-boolean v0, p0, Lcom/mbridge/msdk/video/bt/module/b/b;->g:Z

    const/4 v1, 0x1

    if-nez v0, :cond_0

    .line 90
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/b/b;->a:Lcom/mbridge/msdk/video/bt/module/b/h;

    invoke-interface {v0, p1, p2}, Lcom/mbridge/msdk/video/bt/module/b/h;->a(ZLcom/mbridge/msdk/videocommon/b/d;)V

    .line 91
    iput-boolean v1, p0, Lcom/mbridge/msdk/video/bt/module/b/b;->j:Z

    return-void

    :cond_0
    const/4 v0, 0x5

    .line 95
    invoke-direct {p0, v0}, Lcom/mbridge/msdk/video/bt/module/b/b;->a(I)Z

    move-result v0

    if-nez v0, :cond_2

    .line 96
    invoke-direct {p0}, Lcom/mbridge/msdk/video/bt/module/b/b;->c()I

    move-result v0

    if-nez v0, :cond_1

    invoke-direct {p0, v1}, Lcom/mbridge/msdk/video/bt/module/b/b;->a(I)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 97
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/b/b;->a:Lcom/mbridge/msdk/video/bt/module/b/h;

    const-string v2, ""

    invoke-interface {v0, v2}, Lcom/mbridge/msdk/video/bt/module/b/h;->a(Ljava/lang/String;)V

    .line 99
    :cond_1
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/b/b;->a:Lcom/mbridge/msdk/video/bt/module/b/h;

    invoke-interface {v0, p1, p2}, Lcom/mbridge/msdk/video/bt/module/b/h;->a(ZLcom/mbridge/msdk/videocommon/b/d;)V

    goto :goto_0

    .line 101
    :cond_2
    iput-boolean v1, p0, Lcom/mbridge/msdk/video/bt/module/b/b;->k:Z

    .line 104
    :goto_0
    iput-boolean v1, p0, Lcom/mbridge/msdk/video/bt/module/b/b;->j:Z

    :cond_3
    return-void
.end method

.method public final a(ZLjava/lang/String;Ljava/lang/String;)V
    .locals 1

    .line 142
    invoke-super {p0, p1, p2, p3}, Lcom/mbridge/msdk/video/bt/module/b/c;->a(ZLjava/lang/String;Ljava/lang/String;)V

    .line 143
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/b/b;->a:Lcom/mbridge/msdk/video/bt/module/b/h;

    if-eqz v0, :cond_1

    iget-boolean v0, p0, Lcom/mbridge/msdk/video/bt/module/b/b;->g:Z

    if-eqz v0, :cond_0

    if-eqz v0, :cond_1

    const/4 v0, 0x4

    invoke-direct {p0, v0}, Lcom/mbridge/msdk/video/bt/module/b/b;->a(I)Z

    move-result v0

    if-nez v0, :cond_1

    .line 144
    :cond_0
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/video/bt/module/b/b;->a(Z)Z

    move-result v0

    if-nez v0, :cond_1

    .line 145
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/b/b;->a:Lcom/mbridge/msdk/video/bt/module/b/h;

    invoke-interface {v0, p1, p2, p3}, Lcom/mbridge/msdk/video/bt/module/b/h;->a(ZLjava/lang/String;Ljava/lang/String;)V

    :cond_1
    return-void
.end method

.method public final b(Ljava/lang/String;Ljava/lang/String;)V
    .locals 2

    .line 152
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/bt/module/b/c;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 153
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/b/b;->a:Lcom/mbridge/msdk/video/bt/module/b/h;

    if-eqz v0, :cond_1

    iget-boolean v0, p0, Lcom/mbridge/msdk/video/bt/module/b/b;->g:Z

    if-eqz v0, :cond_0

    if-eqz v0, :cond_1

    const/4 v0, 0x3

    invoke-direct {p0, v0}, Lcom/mbridge/msdk/video/bt/module/b/b;->a(I)Z

    move-result v0

    if-nez v0, :cond_1

    .line 154
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/b/b;->a:Lcom/mbridge/msdk/video/bt/module/b/h;

    invoke-interface {v0, p1, p2}, Lcom/mbridge/msdk/video/bt/module/b/h;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 157
    :cond_1
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/b/b;->a:Lcom/mbridge/msdk/video/bt/module/b/h;

    if-eqz v0, :cond_2

    const/4 v1, 0x6

    .line 158
    invoke-interface {v0, v1, p1, p2}, Lcom/mbridge/msdk/video/bt/module/b/h;->a(ILjava/lang/String;Ljava/lang/String;)V

    :cond_2
    return-void
.end method

.method public final b()Z
    .locals 1

    .line 325
    iget-boolean v0, p0, Lcom/mbridge/msdk/video/bt/module/b/b;->k:Z

    return v0
.end method
