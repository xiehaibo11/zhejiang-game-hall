.class public Lcom/mbridge/msdk/video/module/a/a/j;
.super Lcom/mbridge/msdk/video/module/a/a/e;
.source "StatisticsOnNotifyListener.java"


# instance fields
.field protected a:Z

.field protected b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

.field protected c:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/mbridge/msdk/foundation/entity/CampaignEx;",
            ">;"
        }
    .end annotation
.end field

.field protected d:Z

.field protected e:Lcom/mbridge/msdk/videocommon/download/a;

.field protected f:Lcom/mbridge/msdk/videocommon/b/d;

.field protected g:Ljava/lang/String;

.field protected h:Ljava/lang/String;

.field protected i:Lcom/mbridge/msdk/video/module/a/a;

.field protected j:I

.field private k:Z

.field private l:Z

.field private m:Z


# direct methods
.method public constructor <init>(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Lcom/mbridge/msdk/videocommon/download/a;Lcom/mbridge/msdk/videocommon/b/d;Ljava/lang/String;Ljava/lang/String;Lcom/mbridge/msdk/video/module/a/a;IZ)V
    .locals 3

    .line 77
    invoke-direct {p0}, Lcom/mbridge/msdk/video/module/a/a/e;-><init>()V

    const/4 v0, 0x0

    .line 56
    iput-boolean v0, p0, Lcom/mbridge/msdk/video/module/a/a/j;->d:Z

    .line 69
    new-instance v1, Lcom/mbridge/msdk/video/module/a/a/e;

    invoke-direct {v1}, Lcom/mbridge/msdk/video/module/a/a/e;-><init>()V

    iput-object v1, p0, Lcom/mbridge/msdk/video/module/a/a/j;->i:Lcom/mbridge/msdk/video/module/a/a;

    const/4 v1, 0x1

    .line 71
    iput v1, p0, Lcom/mbridge/msdk/video/module/a/a/j;->j:I

    .line 73
    iput-boolean v0, p0, Lcom/mbridge/msdk/video/module/a/a/j;->k:Z

    .line 74
    iput-boolean v0, p0, Lcom/mbridge/msdk/video/module/a/a/j;->l:Z

    .line 75
    iput-boolean v0, p0, Lcom/mbridge/msdk/video/module/a/a/j;->m:Z

    if-nez p8, :cond_0

    if-eqz p1, :cond_0

    .line 78
    invoke-static {p5}, Lcom/mbridge/msdk/foundation/tools/ai;->b(Ljava/lang/String;)Z

    move-result v2

    if-eqz v2, :cond_0

    if-eqz p2, :cond_0

    if-eqz p6, :cond_0

    .line 79
    iput-object p1, p0, Lcom/mbridge/msdk/video/module/a/a/j;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    .line 80
    iput-object p4, p0, Lcom/mbridge/msdk/video/module/a/a/j;->h:Ljava/lang/String;

    .line 81
    iput-object p5, p0, Lcom/mbridge/msdk/video/module/a/a/j;->g:Ljava/lang/String;

    .line 82
    iput-object p2, p0, Lcom/mbridge/msdk/video/module/a/a/j;->e:Lcom/mbridge/msdk/videocommon/download/a;

    .line 83
    iput-object p3, p0, Lcom/mbridge/msdk/video/module/a/a/j;->f:Lcom/mbridge/msdk/videocommon/b/d;

    .line 84
    iput-object p6, p0, Lcom/mbridge/msdk/video/module/a/a/j;->i:Lcom/mbridge/msdk/video/module/a/a;

    .line 85
    iput-boolean v1, p0, Lcom/mbridge/msdk/video/module/a/a/j;->a:Z

    .line 86
    iput p7, p0, Lcom/mbridge/msdk/video/module/a/a/j;->j:I

    .line 87
    iput-boolean v0, p0, Lcom/mbridge/msdk/video/module/a/a/j;->d:Z

    goto :goto_0

    :cond_0
    if-eqz p8, :cond_1

    if-eqz p1, :cond_1

    .line 88
    invoke-static {p5}, Lcom/mbridge/msdk/foundation/tools/ai;->b(Ljava/lang/String;)Z

    move-result p8

    if-eqz p8, :cond_1

    if-eqz p6, :cond_1

    .line 89
    iput-object p1, p0, Lcom/mbridge/msdk/video/module/a/a/j;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    .line 90
    iput-object p4, p0, Lcom/mbridge/msdk/video/module/a/a/j;->h:Ljava/lang/String;

    .line 91
    iput-object p5, p0, Lcom/mbridge/msdk/video/module/a/a/j;->g:Ljava/lang/String;

    .line 92
    iput-object p2, p0, Lcom/mbridge/msdk/video/module/a/a/j;->e:Lcom/mbridge/msdk/videocommon/download/a;

    .line 93
    iput-object p3, p0, Lcom/mbridge/msdk/video/module/a/a/j;->f:Lcom/mbridge/msdk/videocommon/b/d;

    .line 94
    iput-object p6, p0, Lcom/mbridge/msdk/video/module/a/a/j;->i:Lcom/mbridge/msdk/video/module/a/a;

    .line 95
    iput-boolean v1, p0, Lcom/mbridge/msdk/video/module/a/a/j;->a:Z

    .line 96
    iput p7, p0, Lcom/mbridge/msdk/video/module/a/a/j;->j:I

    .line 97
    iput-boolean v1, p0, Lcom/mbridge/msdk/video/module/a/a/j;->d:Z

    :cond_1
    :goto_0
    return-void
.end method


# virtual methods
.method public final a()V
    .locals 8

    .line 119
    iget-boolean v0, p0, Lcom/mbridge/msdk/video/module/a/a/j;->a:Z

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/mbridge/msdk/video/module/a/a/j;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v0, :cond_1

    .line 120
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/tools/v;->D(Landroid/content/Context;)I

    move-result v7

    .line 121
    new-instance v0, Lcom/mbridge/msdk/foundation/entity/p;

    iget-object v1, p0, Lcom/mbridge/msdk/video/module/a/a/j;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    .line 122
    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object v3

    iget-object v1, p0, Lcom/mbridge/msdk/video/module/a/a/j;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestId()Ljava/lang/String;

    move-result-object v4

    iget-object v1, p0, Lcom/mbridge/msdk/video/module/a/a/j;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestIdNotice()Ljava/lang/String;

    move-result-object v5

    iget-object v6, p0, Lcom/mbridge/msdk/video/module/a/a/j;->g:Ljava/lang/String;

    const-string v2, "2000061"

    move-object v1, v0

    invoke-direct/range {v1 .. v7}, Lcom/mbridge/msdk/foundation/entity/p;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;I)V

    .line 123
    iget-object v1, p0, Lcom/mbridge/msdk/video/module/a/a/j;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isMraid()Z

    move-result v1

    if-eqz v1, :cond_0

    sget v1, Lcom/mbridge/msdk/foundation/entity/p;->a:I

    goto :goto_0

    :cond_0
    sget v1, Lcom/mbridge/msdk/foundation/entity/p;->b:I

    :goto_0
    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/entity/p;->a(I)V

    .line 124
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v1

    iget-object v2, p0, Lcom/mbridge/msdk/video/module/a/a/j;->g:Ljava/lang/String;

    invoke-static {v0, v1, v2}, Lcom/mbridge/msdk/foundation/same/report/c;->b(Lcom/mbridge/msdk/foundation/entity/p;Landroid/content/Context;Ljava/lang/String;)V

    :cond_1
    return-void
.end method

.method public final a(I)V
    .locals 3

    .line 108
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/a/a/j;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v0, :cond_1

    const/4 v0, 0x1

    if-eq p1, v0, :cond_0

    const/4 v0, 0x2

    if-eq p1, v0, :cond_0

    goto :goto_0

    .line 112
    :cond_0
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/video/module/a/a/j;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iget v2, p0, Lcom/mbridge/msdk/video/module/a/a/j;->j:I

    invoke-static {v0, v1, p1, v2}, Lcom/mbridge/msdk/video/module/b/b;->a(Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;II)V

    :cond_1
    :goto_0
    return-void
.end method

.method public a(ILjava/lang/Object;)V
    .locals 1

    .line 103
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/module/a/a/e;->a(ILjava/lang/Object;)V

    .line 104
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/a/a/j;->i:Lcom/mbridge/msdk/video/module/a/a;

    invoke-interface {v0, p1, p2}, Lcom/mbridge/msdk/video/module/a/a;->a(ILjava/lang/Object;)V

    return-void
.end method

.method public final a(ILjava/lang/String;)V
    .locals 10

    .line 129
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/a/a/j;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v0, :cond_0

    .line 130
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/tools/v;->D(Landroid/content/Context;)I

    move-result v7

    .line 131
    new-instance v0, Lcom/mbridge/msdk/foundation/entity/p;

    iget-object v1, p0, Lcom/mbridge/msdk/video/module/a/a/j;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    .line 132
    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object v3

    iget-object v1, p0, Lcom/mbridge/msdk/video/module/a/a/j;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestId()Ljava/lang/String;

    move-result-object v4

    iget-object v1, p0, Lcom/mbridge/msdk/video/module/a/a/j;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestIdNotice()Ljava/lang/String;

    move-result-object v5

    iget-object v6, p0, Lcom/mbridge/msdk/video/module/a/a/j;->g:Ljava/lang/String;

    const-string v2, "2000062"

    move-object v1, v0

    move v8, p1

    move-object v9, p2

    invoke-direct/range {v1 .. v9}, Lcom/mbridge/msdk/foundation/entity/p;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;IILjava/lang/String;)V

    .line 133
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object p1

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object p1

    iget-object p2, p0, Lcom/mbridge/msdk/video/module/a/a/j;->g:Ljava/lang/String;

    invoke-static {v0, p1, p2}, Lcom/mbridge/msdk/foundation/same/report/c;->c(Lcom/mbridge/msdk/foundation/entity/p;Landroid/content/Context;Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public final a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V
    .locals 0

    .line 63
    iput-object p1, p0, Lcom/mbridge/msdk/video/module/a/a/j;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    return-void
.end method

.method protected final a(Ljava/lang/String;)V
    .locals 8

    .line 431
    :try_start_0
    iget-boolean v0, p0, Lcom/mbridge/msdk/video/module/a/a/j;->a:Z

    if-eqz v0, :cond_2

    .line 432
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/db/i;->a(Landroid/content/Context;)Lcom/mbridge/msdk/foundation/db/i;

    move-result-object v0

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/db/t;->a(Lcom/mbridge/msdk/foundation/db/h;)Lcom/mbridge/msdk/foundation/db/t;

    move-result-object v0

    const/4 v1, 0x0

    .line 434
    iget-object v2, p0, Lcom/mbridge/msdk/video/module/a/a/j;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getNoticeUrl()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_0

    .line 435
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Lcom/mbridge/msdk/foundation/tools/v;->D(Landroid/content/Context;)I

    move-result v4

    .line 436
    new-instance v1, Lcom/mbridge/msdk/foundation/entity/p;

    const-string v3, "2000021"

    iget-object v2, p0, Lcom/mbridge/msdk/video/module/a/a/j;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    .line 437
    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getNoticeUrl()Ljava/lang/String;

    move-result-object v5

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v2

    invoke-static {v2, v4}, Lcom/mbridge/msdk/foundation/tools/v;->a(Landroid/content/Context;I)Ljava/lang/String;

    move-result-object v7

    move-object v2, v1

    move-object v6, p1

    invoke-direct/range {v2 .. v7}, Lcom/mbridge/msdk/foundation/entity/p;-><init>(Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    .line 440
    :cond_0
    iget-object v2, p0, Lcom/mbridge/msdk/video/module/a/a/j;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getClickURL()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_1

    .line 441
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Lcom/mbridge/msdk/foundation/tools/v;->D(Landroid/content/Context;)I

    move-result v4

    .line 442
    new-instance v1, Lcom/mbridge/msdk/foundation/entity/p;

    const-string v3, "2000021"

    iget-object v2, p0, Lcom/mbridge/msdk/video/module/a/a/j;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    .line 443
    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getClickURL()Ljava/lang/String;

    move-result-object v5

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v2

    invoke-static {v2, v4}, Lcom/mbridge/msdk/foundation/tools/v;->a(Landroid/content/Context;I)Ljava/lang/String;

    move-result-object v7

    move-object v2, v1

    move-object v6, p1

    invoke-direct/range {v2 .. v7}, Lcom/mbridge/msdk/foundation/entity/p;-><init>(Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    :cond_1
    :goto_0
    if-eqz v1, :cond_2

    .line 447
    iget-object v2, p0, Lcom/mbridge/msdk/video/module/a/a/j;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/mbridge/msdk/foundation/entity/p;->n(Ljava/lang/String;)V

    .line 448
    iget-object v2, p0, Lcom/mbridge/msdk/video/module/a/a/j;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getVideoUrlEncode()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/mbridge/msdk/foundation/entity/p;->e(Ljava/lang/String;)V

    .line 449
    invoke-virtual {v1, p1}, Lcom/mbridge/msdk/foundation/entity/p;->p(Ljava/lang/String;)V

    .line 450
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/a/a/j;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestId()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v1, p1}, Lcom/mbridge/msdk/foundation/entity/p;->k(Ljava/lang/String;)V

    .line 451
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/a/a/j;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestIdNotice()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v1, p1}, Lcom/mbridge/msdk/foundation/entity/p;->l(Ljava/lang/String;)V

    .line 452
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/a/a/j;->g:Ljava/lang/String;

    invoke-virtual {v1, p1}, Lcom/mbridge/msdk/foundation/entity/p;->m(Ljava/lang/String;)V

    .line 453
    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/db/t;->a(Lcom/mbridge/msdk/foundation/entity/p;)J
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_1

    :catch_0
    move-exception p1

    .line 457
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_2
    :goto_1
    return-void
.end method

.method public final a(Ljava/util/List;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/mbridge/msdk/foundation/entity/CampaignEx;",
            ">;)V"
        }
    .end annotation

    .line 66
    iput-object p1, p0, Lcom/mbridge/msdk/video/module/a/a/j;->c:Ljava/util/List;

    return-void
.end method

.method public final b()V
    .locals 2

    .line 175
    new-instance v0, Lcom/mbridge/msdk/video/module/a/a/j$1;

    invoke-direct {v0, p0}, Lcom/mbridge/msdk/video/module/a/a/j$1;-><init>(Lcom/mbridge/msdk/video/module/a/a/j;)V

    .line 193
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/b;->a()Lcom/mbridge/msdk/foundation/controller/b;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/controller/b;->d()Z

    move-result v1

    if-eqz v1, :cond_0

    .line 194
    invoke-static {}, Lcom/mbridge/msdk/foundation/same/f/b;->a()Ljava/util/concurrent/ThreadPoolExecutor;

    move-result-object v1

    invoke-virtual {v1, v0}, Ljava/util/concurrent/ThreadPoolExecutor;->execute(Ljava/lang/Runnable;)V

    goto :goto_0

    .line 196
    :cond_0
    invoke-interface {v0}, Ljava/lang/Runnable;->run()V

    :goto_0
    return-void
.end method

.method public final b(I)V
    .locals 4

    .line 141
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/a/a/j;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v0, :cond_5

    .line 142
    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getNoticeUrl()Ljava/lang/String;

    move-result-object v0

    .line 144
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_5

    const/4 v1, 0x1

    const/4 v2, 0x2

    if-eq p1, v1, :cond_0

    if-ne p1, v2, :cond_5

    :cond_0
    const-string v1, "endscreen_type"

    .line 145
    invoke-virtual {v0, v1}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_2

    const-string v1, "endscreen_type=1"

    const-string v3, "endscreen_type=2"

    if-ne p1, v2, :cond_1

    .line 147
    invoke-virtual {v0, v1}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_4

    .line 148
    invoke-virtual {v0, v1, v3}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object v0

    goto :goto_1

    .line 151
    :cond_1
    invoke-virtual {v0, v3}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_4

    .line 152
    invoke-virtual {v0, v3, v1}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object v0

    goto :goto_1

    .line 156
    :cond_2
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    const-string v2, "?"

    .line 157
    invoke-virtual {v0, v2}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_3

    const-string v0, "&endscreen_type="

    .line 158
    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    goto :goto_0

    :cond_3
    const-string v0, "?endscreen_type="

    .line 160
    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    .line 162
    :goto_0
    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 164
    :cond_4
    :goto_1
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/a/a/j;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setNoticeUrl(Ljava/lang/String;)V

    :cond_5
    return-void
.end method

.method protected final b(Ljava/lang/String;)V
    .locals 2

    const-string v0, "camp_position"

    .line 497
    iget-object v1, p0, Lcom/mbridge/msdk/video/module/a/a/j;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-nez v1, :cond_0

    return-void

    .line 500
    :cond_0
    iget-object v1, p0, Lcom/mbridge/msdk/video/module/a/a/j;->c:Ljava/util/List;

    if-nez v1, :cond_1

    return-void

    .line 503
    :cond_1
    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result v1

    if-nez v1, :cond_2

    return-void

    .line 507
    :cond_2
    :try_start_0
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p1}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    .line 511
    invoke-virtual {v1, v0}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result p1

    if-eqz p1, :cond_3

    .line 512
    invoke-virtual {v1, v0}, Lorg/json/JSONObject;->getInt(Ljava/lang/String;)I

    move-result p1

    .line 513
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/a/a/j;->c:Ljava/util/List;

    invoke-interface {v0, p1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iput-object p1, p0, Lcom/mbridge/msdk/video/module/a/a/j;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 516
    invoke-virtual {p1}, Lorg/json/JSONException;->printStackTrace()V

    :cond_3
    :goto_0
    return-void
.end method

.method public final c()V
    .locals 3

    .line 207
    :try_start_0
    new-instance v0, Lcom/mbridge/msdk/video/module/a/a/j$2;

    invoke-direct {v0, p0}, Lcom/mbridge/msdk/video/module/a/a/j$2;-><init>(Lcom/mbridge/msdk/video/module/a/a/j;)V

    .line 229
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/b;->a()Lcom/mbridge/msdk/foundation/controller/b;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/controller/b;->d()Z

    move-result v1

    if-eqz v1, :cond_0

    .line 230
    invoke-static {}, Lcom/mbridge/msdk/foundation/same/f/b;->a()Ljava/util/concurrent/ThreadPoolExecutor;

    move-result-object v1

    invoke-virtual {v1, v0}, Ljava/util/concurrent/ThreadPoolExecutor;->execute(Ljava/lang/Runnable;)V

    goto :goto_0

    .line 232
    :cond_0
    invoke-interface {v0}, Ljava/lang/Runnable;->run()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    .line 235
    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v1

    const-string v2, "NotifyListener"

    invoke-static {v2, v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :goto_0
    return-void
.end method

.method protected final d()V
    .locals 2

    .line 250
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/a/a/j;->e:Lcom/mbridge/msdk/videocommon/download/a;

    if-eqz v0, :cond_0

    const/4 v1, 0x1

    .line 251
    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/videocommon/download/a;->b(Z)V

    :cond_0
    return-void
.end method

.method protected final e()V
    .locals 11

    .line 260
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/a/a/j;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    const/4 v1, 0x1

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/mbridge/msdk/video/module/a/a/j;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isDynamicView()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 261
    iget-boolean v0, p0, Lcom/mbridge/msdk/video/module/a/a/j;->d:Z

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/mbridge/msdk/video/module/a/a/j;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isCampaignIsFiltered()Z

    move-result v0

    if-nez v0, :cond_0

    .line 262
    iput-boolean v1, p0, Lcom/mbridge/msdk/video/module/a/a/j;->l:Z

    return-void

    .line 267
    :cond_0
    iget-boolean v0, p0, Lcom/mbridge/msdk/video/module/a/a/j;->a:Z

    if-eqz v0, :cond_4

    iget-object v0, p0, Lcom/mbridge/msdk/video/module/a/a/j;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getOnlyImpressionURL()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_4

    sget-object v0, Lcom/mbridge/msdk/foundation/same/a/d;->a:Ljava/util/Map;

    if-eqz v0, :cond_4

    sget-object v0, Lcom/mbridge/msdk/foundation/same/a/d;->a:Ljava/util/Map;

    iget-object v2, p0, Lcom/mbridge/msdk/video/module/a/a/j;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    .line 269
    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getOnlyImpressionURL()Ljava/lang/String;

    move-result-object v2

    invoke-interface {v0, v2}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_4

    iget-boolean v0, p0, Lcom/mbridge/msdk/video/module/a/a/j;->l:Z

    if-nez v0, :cond_4

    .line 272
    sget-object v0, Lcom/mbridge/msdk/foundation/same/a/d;->a:Ljava/util/Map;

    iget-object v2, p0, Lcom/mbridge/msdk/video/module/a/a/j;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getOnlyImpressionURL()Ljava/lang/String;

    move-result-object v2

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v3

    invoke-static {v3, v4}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v3

    invoke-interface {v0, v2, v3}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const/4 v8, 0x0

    const/4 v9, 0x1

    .line 276
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/a/a/j;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getOnlyImpressionURL()Ljava/lang/String;

    move-result-object v0

    .line 277
    iget-object v2, p0, Lcom/mbridge/msdk/video/module/a/a/j;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getSpareOfferFlag()I

    move-result v2
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    const-string v3, "&tmorl="

    if-ne v2, v1, :cond_1

    .line 278
    :try_start_1
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, "&to=1&cbt="

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v0, p0, Lcom/mbridge/msdk/video/module/a/a/j;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getCbt()I

    move-result v0

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v0, p0, Lcom/mbridge/msdk/video/module/a/a/j;->j:I

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    goto :goto_0

    .line 280
    :cond_1
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, "&to=0&cbt="

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v0, p0, Lcom/mbridge/msdk/video/module/a/a/j;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getCbt()I

    move-result v0

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v0, p0, Lcom/mbridge/msdk/video/module/a/a/j;->j:I

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    :goto_0
    move-object v7, v0

    .line 282
    iget-boolean v0, p0, Lcom/mbridge/msdk/video/module/a/a/j;->d:Z

    if-eqz v0, :cond_2

    .line 283
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/a/a/j;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isCampaignIsFiltered()Z

    move-result v0

    if-eqz v0, :cond_3

    .line 288
    :cond_2
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v4

    iget-object v5, p0, Lcom/mbridge/msdk/video/module/a/a/j;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iget-object v6, p0, Lcom/mbridge/msdk/video/module/a/a/j;->g:Ljava/lang/String;

    sget v10, Lcom/mbridge/msdk/click/a/a;->h:I

    invoke-static/range {v4 .. v10}, Lcom/mbridge/msdk/click/b;->a(Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Ljava/lang/String;ZZI)V

    .line 289
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/module/a/a/j;->c()V

    .line 291
    :cond_3
    iput-boolean v1, p0, Lcom/mbridge/msdk/video/module/a/a/j;->l:Z
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    goto :goto_1

    :catch_0
    move-exception v0

    .line 294
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_4
    :goto_1
    return-void
.end method

.method protected final f()V
    .locals 9

    .line 303
    :try_start_0
    iget-boolean v0, p0, Lcom/mbridge/msdk/video/module/a/a/j;->a:Z

    if-eqz v0, :cond_3

    iget-boolean v0, p0, Lcom/mbridge/msdk/video/module/a/a/j;->k:Z

    if-nez v0, :cond_3

    iget-object v0, p0, Lcom/mbridge/msdk/video/module/a/a/j;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getImpressionURL()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_3

    const/4 v0, 0x1

    .line 304
    iput-boolean v0, p0, Lcom/mbridge/msdk/video/module/a/a/j;->k:Z

    const/4 v5, 0x0

    const/4 v6, 0x1

    .line 308
    iget-object v1, p0, Lcom/mbridge/msdk/video/module/a/a/j;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isBidCampaign()Z

    move-result v1

    if-eqz v1, :cond_1

    const-string v1, "encrypt_p="

    const-string v2, "irlfa="

    .line 1464
    iget-object v3, p0, Lcom/mbridge/msdk/video/module/a/a/j;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-eqz v3, :cond_1

    .line 1466
    :try_start_1
    new-instance v3, Ljava/util/HashMap;

    invoke-direct {v3}, Ljava/util/HashMap;-><init>()V

    .line 1467
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v4

    invoke-virtual {v4}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v4

    invoke-static {v4}, Lcom/mbridge/msdk/foundation/db/b;->a(Landroid/content/Context;)Lcom/mbridge/msdk/foundation/db/b;

    move-result-object v4

    iget-object v7, p0, Lcom/mbridge/msdk/video/module/a/a/j;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v7}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getCampaignUnitId()Ljava/lang/String;

    move-result-object v7

    iget-object v8, p0, Lcom/mbridge/msdk/video/module/a/a/j;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v8}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestId()Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v4, v7, v8}, Lcom/mbridge/msdk/foundation/db/b;->b(Ljava/lang/String;Ljava/lang/String;)Ljava/util/List;

    move-result-object v4

    if-eqz v4, :cond_1

    .line 1468
    invoke-interface {v4}, Ljava/util/List;->size()I

    move-result v7

    if-lez v7, :cond_1

    const/4 v7, 0x0

    invoke-interface {v4, v7}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v8

    if-eqz v8, :cond_1

    .line 1469
    invoke-interface {v4, v7}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v8

    check-cast v8, Lcom/mbridge/msdk/foundation/entity/d;

    invoke-virtual {v8}, Lcom/mbridge/msdk/foundation/entity/d;->d()I

    move-result v8

    .line 1470
    invoke-interface {v4, v7}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/mbridge/msdk/foundation/entity/d;

    invoke-virtual {v4}, Lcom/mbridge/msdk/foundation/entity/d;->b()Ljava/lang/String;

    move-result-object v4

    if-ne v8, v0, :cond_0

    .line 1472
    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v7, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v1, v4}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 1473
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v3, v2, v1}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 1474
    invoke-virtual {v3}, Ljava/util/HashMap;->entrySet()Ljava/util/Set;

    move-result-object v1

    invoke-interface {v1}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :goto_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_0

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/util/Map$Entry;

    .line 1475
    invoke-interface {v2}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/String;

    .line 1476
    invoke-interface {v2}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    .line 1477
    iget-object v4, p0, Lcom/mbridge/msdk/video/module/a/a/j;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iget-object v7, p0, Lcom/mbridge/msdk/video/module/a/a/j;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v7}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getImpressionURL()Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v7, v3, v2}, Ljava/lang/String;->replaceAll(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v4, v7}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setImpressionURL(Ljava/lang/String;)V

    .line 1478
    iget-object v4, p0, Lcom/mbridge/msdk/video/module/a/a/j;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iget-object v7, p0, Lcom/mbridge/msdk/video/module/a/a/j;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v7}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getOnlyImpressionURL()Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v7, v3, v2}, Ljava/lang/String;->replaceAll(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v4, v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setOnlyImpressionURL(Ljava/lang/String;)V

    goto :goto_0

    .line 1481
    :cond_0
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Lcom/mbridge/msdk/foundation/db/b;->a(Landroid/content/Context;)Lcom/mbridge/msdk/foundation/db/b;

    move-result-object v1

    iget-object v2, p0, Lcom/mbridge/msdk/video/module/a/a/j;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestId()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/mbridge/msdk/foundation/db/b;->a(Ljava/lang/String;)I

    move-result v1

    const-string v2, "BidReplaceCampignDao"

    .line 1482
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "removeReplace count "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v2, v1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_1

    :catch_0
    move-exception v1

    .line 1485
    :try_start_2
    invoke-virtual {v1}, Ljava/lang/Exception;->printStackTrace()V

    .line 311
    :cond_1
    :goto_1
    iget-object v1, p0, Lcom/mbridge/msdk/video/module/a/a/j;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getImpressionURL()Ljava/lang/String;

    move-result-object v1

    .line 312
    iget-object v2, p0, Lcom/mbridge/msdk/video/module/a/a/j;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getSpareOfferFlag()I

    move-result v2
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    const-string v3, "&tmorl="

    if-ne v2, v0, :cond_2

    .line 313
    :try_start_3
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "&to=1&cbt="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/mbridge/msdk/video/module/a/a/j;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getCbt()I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v1, p0, Lcom/mbridge/msdk/video/module/a/a/j;->j:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    goto :goto_2

    .line 315
    :cond_2
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "&to=0&cbt="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/mbridge/msdk/video/module/a/a/j;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getCbt()I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v1, p0, Lcom/mbridge/msdk/video/module/a/a/j;->j:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    :goto_2
    move-object v4, v0

    .line 317
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v1

    iget-object v2, p0, Lcom/mbridge/msdk/video/module/a/a/j;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iget-object v3, p0, Lcom/mbridge/msdk/video/module/a/a/j;->g:Ljava/lang/String;

    sget v7, Lcom/mbridge/msdk/click/a/a;->g:I

    invoke-static/range {v1 .. v7}, Lcom/mbridge/msdk/click/b;->a(Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Ljava/lang/String;ZZI)V

    .line 318
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/video/module/a/a/j;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-static {v0, v1}, Lcom/mbridge/msdk/video/module/b/b;->a(Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    .line 2357
    new-instance v0, Ljava/lang/Thread;

    new-instance v1, Lcom/mbridge/msdk/video/module/a/a/j$3;

    invoke-direct {v1, p0}, Lcom/mbridge/msdk/video/module/a/a/j$3;-><init>(Lcom/mbridge/msdk/video/module/a/a/j;)V

    invoke-direct {v0, v1}, Ljava/lang/Thread;-><init>(Ljava/lang/Runnable;)V

    .line 2367
    invoke-virtual {v0}, Ljava/lang/Thread;->start()V

    .line 2374
    iget-boolean v0, p0, Lcom/mbridge/msdk/video/module/a/a/j;->a:Z

    if-eqz v0, :cond_3

    sget-object v0, Lcom/mbridge/msdk/foundation/same/a/d;->d:Ljava/util/Map;

    if-eqz v0, :cond_3

    iget-object v0, p0, Lcom/mbridge/msdk/video/module/a/a/j;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    .line 2375
    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_3

    .line 2376
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/a/a/j;->g:Ljava/lang/String;

    iget-object v1, p0, Lcom/mbridge/msdk/video/module/a/a/j;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    const-string v2, "reward"

    invoke-static {v0, v1, v2}, Lcom/mbridge/msdk/foundation/same/a/d;->a(Ljava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;)V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    goto :goto_3

    :catchall_0
    move-exception v0

    .line 323
    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v1

    const-string v2, "NotifyListener"

    invoke-static {v2, v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :cond_3
    :goto_3
    return-void
.end method

.method protected final g()V
    .locals 8

    .line 329
    :try_start_0
    iget-boolean v0, p0, Lcom/mbridge/msdk/video/module/a/a/j;->a:Z

    if-eqz v0, :cond_1

    iget-boolean v0, p0, Lcom/mbridge/msdk/video/module/a/a/j;->m:Z

    if-nez v0, :cond_1

    iget-object v0, p0, Lcom/mbridge/msdk/video/module/a/a/j;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v0, :cond_1

    const/4 v0, 0x1

    .line 330
    iput-boolean v0, p0, Lcom/mbridge/msdk/video/module/a/a/j;->m:Z

    .line 331
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/a/a/j;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isDynamicView()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 332
    iget-boolean v0, p0, Lcom/mbridge/msdk/video/module/a/a/j;->d:Z

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/mbridge/msdk/video/module/a/a/j;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isCampaignIsFiltered()Z

    move-result v0

    if-nez v0, :cond_0

    return-void

    .line 336
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/a/a/j;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getPv_urls()Ljava/util/List;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 337
    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v1

    if-lez v1, :cond_1

    .line 338
    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    move-object v5, v1

    check-cast v5, Ljava/lang/String;

    .line 339
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v2

    iget-object v3, p0, Lcom/mbridge/msdk/video/module/a/a/j;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iget-object v4, p0, Lcom/mbridge/msdk/video/module/a/a/j;->g:Ljava/lang/String;

    const/4 v6, 0x0

    const/4 v7, 0x1

    invoke-static/range {v2 .. v7}, Lcom/mbridge/msdk/click/b;->a(Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Ljava/lang/String;ZZ)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    .line 344
    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    const-string v1, "NotifyListener"

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_1
    return-void
.end method

.method protected final h()V
    .locals 7

    .line 349
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/a/a/j;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v0, :cond_0

    .line 350
    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getCampaignUnitId()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/mbridge/msdk/video/module/a/a/j;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getNativeVideoTracking()Lcom/mbridge/msdk/foundation/entity/l;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/mbridge/msdk/video/module/a/a/j;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getNativeVideoTracking()Lcom/mbridge/msdk/foundation/entity/l;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/l;->k()[Ljava/lang/String;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 351
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v1

    iget-object v2, p0, Lcom/mbridge/msdk/video/module/a/a/j;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getCampaignUnitId()Ljava/lang/String;

    move-result-object v3

    iget-object v0, p0, Lcom/mbridge/msdk/video/module/a/a/j;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getNativeVideoTracking()Lcom/mbridge/msdk/foundation/entity/l;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/l;->k()[Ljava/lang/String;

    move-result-object v4

    const/4 v5, 0x0

    const/4 v6, 0x0

    invoke-static/range {v1 .. v6}, Lcom/mbridge/msdk/click/b;->a(Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;[Ljava/lang/String;ZZ)V

    :cond_0
    return-void
.end method
