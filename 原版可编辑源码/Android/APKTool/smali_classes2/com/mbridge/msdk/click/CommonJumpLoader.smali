.class public final Lcom/mbridge/msdk/click/CommonJumpLoader;
.super Lcom/mbridge/msdk/click/d;
.source "CommonJumpLoader.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;
    }
.end annotation


# instance fields
.field a:Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;

.field private b:I

.field private c:Ljava/lang/String;

.field private d:I

.field private e:Lcom/mbridge/msdk/click/e;

.field private f:Z

.field private g:Lcom/mbridge/msdk/foundation/same/e/b;

.field private h:Lcom/mbridge/msdk/click/j;

.field private i:Landroid/os/Handler;


# direct methods
.method public constructor <init>(Landroid/content/Context;Z)V
    .locals 2

    .line 46
    invoke-direct {p0}, Lcom/mbridge/msdk/click/d;-><init>()V

    const/4 v0, 0x0

    .line 28
    iput v0, p0, Lcom/mbridge/msdk/click/CommonJumpLoader;->b:I

    const/4 v0, 0x0

    .line 29
    iput-object v0, p0, Lcom/mbridge/msdk/click/CommonJumpLoader;->c:Ljava/lang/String;

    .line 30
    iput-object v0, p0, Lcom/mbridge/msdk/click/CommonJumpLoader;->a:Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;

    .line 32
    iput-object v0, p0, Lcom/mbridge/msdk/click/CommonJumpLoader;->e:Lcom/mbridge/msdk/click/e;

    const/4 v0, 0x1

    .line 33
    iput-boolean v0, p0, Lcom/mbridge/msdk/click/CommonJumpLoader;->f:Z

    .line 40
    new-instance v0, Landroid/os/Handler;

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v1

    invoke-direct {v0, v1}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    iput-object v0, p0, Lcom/mbridge/msdk/click/CommonJumpLoader;->i:Landroid/os/Handler;

    if-eqz p2, :cond_0

    .line 48
    new-instance v0, Lcom/mbridge/msdk/foundation/same/e/b;

    const/4 v1, 0x2

    invoke-direct {v0, p1, v1}, Lcom/mbridge/msdk/foundation/same/e/b;-><init>(Landroid/content/Context;I)V

    iput-object v0, p0, Lcom/mbridge/msdk/click/CommonJumpLoader;->g:Lcom/mbridge/msdk/foundation/same/e/b;

    goto :goto_0

    .line 50
    :cond_0
    new-instance v0, Lcom/mbridge/msdk/foundation/same/e/b;

    invoke-direct {v0, p1}, Lcom/mbridge/msdk/foundation/same/e/b;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/mbridge/msdk/click/CommonJumpLoader;->g:Lcom/mbridge/msdk/foundation/same/e/b;

    .line 54
    :goto_0
    new-instance v0, Lcom/mbridge/msdk/click/j;

    invoke-direct {v0, p1, p2}, Lcom/mbridge/msdk/click/j;-><init>(Landroid/content/Context;Z)V

    iput-object v0, p0, Lcom/mbridge/msdk/click/CommonJumpLoader;->h:Lcom/mbridge/msdk/click/j;

    return-void
.end method


# virtual methods
.method public final a()V
    .locals 1

    const/4 v0, 0x0

    .line 132
    iput-boolean v0, p0, Lcom/mbridge/msdk/click/CommonJumpLoader;->f:Z

    return-void
.end method

.method public final a(Ljava/lang/String;Ljava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Lcom/mbridge/msdk/click/e;)V
    .locals 6

    const/4 v5, 0x0

    move-object v0, p0

    move-object v1, p1

    move-object v2, p2

    move-object v3, p3

    move-object v4, p4

    .line 66
    invoke-virtual/range {v0 .. v5}, Lcom/mbridge/msdk/click/CommonJumpLoader;->a(Ljava/lang/String;Ljava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Lcom/mbridge/msdk/click/e;Lcom/mbridge/msdk/rover/d;)V

    return-void
.end method

.method public final a(Ljava/lang/String;Ljava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Lcom/mbridge/msdk/click/e;Lcom/mbridge/msdk/rover/d;)V
    .locals 15

    move-object v0, p0

    .line 88
    new-instance v1, Ljava/lang/String;

    invoke-virtual/range {p3 .. p3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getClickURL()Ljava/lang/String;

    move-result-object v2

    invoke-direct {v1, v2}, Ljava/lang/String;-><init>(Ljava/lang/String;)V

    iput-object v1, v0, Lcom/mbridge/msdk/click/CommonJumpLoader;->c:Ljava/lang/String;

    move-object/from16 v1, p4

    .line 89
    iput-object v1, v0, Lcom/mbridge/msdk/click/CommonJumpLoader;->e:Lcom/mbridge/msdk/click/e;

    const/4 v2, 0x0

    .line 90
    iput-object v2, v0, Lcom/mbridge/msdk/click/CommonJumpLoader;->a:Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;

    .line 93
    invoke-virtual/range {p3 .. p3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getClick_mode()Ljava/lang/String;

    move-result-object v2

    const-string v3, "5"

    invoke-virtual {v3, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-nez v2, :cond_1

    invoke-virtual/range {p3 .. p3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getClick_mode()Ljava/lang/String;

    move-result-object v2

    const-string v3, "6"

    invoke-virtual {v3, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_0

    goto :goto_0

    :cond_0
    const/4 v2, 0x0

    goto :goto_1

    :cond_1
    :goto_0
    const/4 v2, 0x1

    :goto_1
    move v6, v2

    .line 94
    iget-object v3, v0, Lcom/mbridge/msdk/click/CommonJumpLoader;->h:Lcom/mbridge/msdk/click/j;

    invoke-virtual/range {p3 .. p3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getClickURL()Ljava/lang/String;

    move-result-object v4

    invoke-virtual/range {p3 .. p3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object v8

    const/4 v12, 0x1

    const/4 v13, 0x0

    sget v14, Lcom/mbridge/msdk/click/a/a;->j:I

    move-object/from16 v5, p4

    move-object/from16 v7, p1

    move-object/from16 v9, p2

    move-object/from16 v10, p5

    move-object/from16 v11, p3

    invoke-virtual/range {v3 .. v14}, Lcom/mbridge/msdk/click/j;->a(Ljava/lang/String;Lcom/mbridge/msdk/click/e;ZLjava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/mbridge/msdk/rover/d;Lcom/mbridge/msdk/foundation/entity/CampaignEx;ZZI)V

    return-void
.end method

.method public final a(Ljava/lang/String;Ljava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Lcom/mbridge/msdk/click/e;Ljava/lang/String;ZZI)V
    .locals 13

    move-object v0, p0

    move-object/from16 v2, p5

    .line 71
    iput-object v2, v0, Lcom/mbridge/msdk/click/CommonJumpLoader;->c:Ljava/lang/String;

    move-object/from16 v3, p4

    .line 72
    iput-object v3, v0, Lcom/mbridge/msdk/click/CommonJumpLoader;->e:Lcom/mbridge/msdk/click/e;

    const/4 v1, 0x0

    .line 73
    iput-object v1, v0, Lcom/mbridge/msdk/click/CommonJumpLoader;->a:Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;

    move/from16 v12, p8

    .line 74
    iput v12, v0, Lcom/mbridge/msdk/click/CommonJumpLoader;->d:I

    const/4 v1, 0x0

    if-eqz p3, :cond_2

    .line 80
    invoke-virtual/range {p3 .. p3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getClick_mode()Ljava/lang/String;

    move-result-object v4

    const-string v5, "5"

    invoke-virtual {v5, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v4

    if-nez v4, :cond_0

    invoke-virtual/range {p3 .. p3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getClick_mode()Ljava/lang/String;

    move-result-object v4

    const-string v5, "6"

    invoke-virtual {v5, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v4

    if-eqz v4, :cond_1

    :cond_0
    const/4 v1, 0x1

    .line 81
    :cond_1
    invoke-virtual/range {p3 .. p3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object v4

    goto :goto_0

    :cond_2
    const-string v4, ""

    :goto_0
    move-object v6, v4

    move v4, v1

    .line 83
    iget-object v1, v0, Lcom/mbridge/msdk/click/CommonJumpLoader;->h:Lcom/mbridge/msdk/click/j;

    const/4 v8, 0x0

    move-object/from16 v2, p5

    move-object/from16 v3, p4

    move-object v5, p1

    move-object v7, p2

    move-object/from16 v9, p3

    move/from16 v10, p6

    move/from16 v11, p7

    move/from16 v12, p8

    invoke-virtual/range {v1 .. v12}, Lcom/mbridge/msdk/click/j;->a(Ljava/lang/String;Lcom/mbridge/msdk/click/e;ZLjava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/mbridge/msdk/rover/d;Lcom/mbridge/msdk/foundation/entity/CampaignEx;ZZI)V

    return-void
.end method
