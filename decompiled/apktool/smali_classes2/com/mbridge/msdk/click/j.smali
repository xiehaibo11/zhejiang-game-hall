.class public final Lcom/mbridge/msdk/click/j;
.super Lcom/mbridge/msdk/click/d;
.source "WebViewSpiderLoader.java"

# interfaces
.implements Lcom/mbridge/msdk/foundation/same/e/a$b;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/mbridge/msdk/click/j$a;
    }
.end annotation


# instance fields
.field private a:Z

.field private b:J

.field private c:Lcom/mbridge/msdk/click/e;

.field private d:Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;

.field private e:Z

.field private f:Z

.field private g:Landroid/content/Context;

.field private h:Lcom/mbridge/msdk/foundation/same/e/b;

.field private i:Lcom/mbridge/msdk/click/g$a;

.field private j:Landroid/os/Handler;

.field private k:Z


# direct methods
.method public constructor <init>(Landroid/content/Context;Z)V
    .locals 2

    .line 52
    invoke-direct {p0}, Lcom/mbridge/msdk/click/d;-><init>()V

    const/4 v0, 0x0

    .line 32
    iput-boolean v0, p0, Lcom/mbridge/msdk/click/j;->a:Z

    const-wide/16 v0, 0x0

    .line 33
    iput-wide v0, p0, Lcom/mbridge/msdk/click/j;->b:J

    const/4 v0, 0x1

    .line 38
    iput-boolean v0, p0, Lcom/mbridge/msdk/click/j;->e:Z

    .line 45
    new-instance v0, Landroid/os/Handler;

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v1

    invoke-direct {v0, v1}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    iput-object v0, p0, Lcom/mbridge/msdk/click/j;->j:Landroid/os/Handler;

    .line 53
    iput-object p1, p0, Lcom/mbridge/msdk/click/j;->g:Landroid/content/Context;

    .line 54
    iput-boolean p2, p0, Lcom/mbridge/msdk/click/j;->k:Z

    if-eqz p2, :cond_0

    .line 56
    new-instance p2, Lcom/mbridge/msdk/foundation/same/e/b;

    const/4 v0, 0x2

    invoke-direct {p2, p1, v0}, Lcom/mbridge/msdk/foundation/same/e/b;-><init>(Landroid/content/Context;I)V

    iput-object p2, p0, Lcom/mbridge/msdk/click/j;->h:Lcom/mbridge/msdk/foundation/same/e/b;

    goto :goto_0

    .line 58
    :cond_0
    new-instance p2, Lcom/mbridge/msdk/foundation/same/e/b;

    invoke-direct {p2, p1}, Lcom/mbridge/msdk/foundation/same/e/b;-><init>(Landroid/content/Context;)V

    iput-object p2, p0, Lcom/mbridge/msdk/click/j;->h:Lcom/mbridge/msdk/foundation/same/e/b;

    :goto_0
    return-void
.end method

.method static synthetic a(Lcom/mbridge/msdk/click/j;J)J
    .locals 0

    .line 27
    iput-wide p1, p0, Lcom/mbridge/msdk/click/j;->b:J

    return-wide p1
.end method

.method static synthetic a(Lcom/mbridge/msdk/click/j;Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;)Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;
    .locals 0

    .line 27
    iput-object p1, p0, Lcom/mbridge/msdk/click/j;->d:Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;

    return-object p1
.end method

.method static synthetic a(Lcom/mbridge/msdk/click/j;Lcom/mbridge/msdk/click/g$a;)Lcom/mbridge/msdk/click/g$a;
    .locals 0

    .line 27
    iput-object p1, p0, Lcom/mbridge/msdk/click/j;->i:Lcom/mbridge/msdk/click/g$a;

    return-object p1
.end method

.method static synthetic a(Lcom/mbridge/msdk/click/j;)Z
    .locals 0

    .line 27
    iget-boolean p0, p0, Lcom/mbridge/msdk/click/j;->f:Z

    return p0
.end method

.method static synthetic a(Lcom/mbridge/msdk/click/j;Z)Z
    .locals 0

    .line 27
    iput-boolean p1, p0, Lcom/mbridge/msdk/click/j;->a:Z

    return p1
.end method

.method static synthetic b(Lcom/mbridge/msdk/click/j;)Z
    .locals 0

    .line 27
    iget-boolean p0, p0, Lcom/mbridge/msdk/click/j;->e:Z

    return p0
.end method

.method static synthetic c(Lcom/mbridge/msdk/click/j;)Lcom/mbridge/msdk/click/g$a;
    .locals 0

    .line 27
    iget-object p0, p0, Lcom/mbridge/msdk/click/j;->i:Lcom/mbridge/msdk/click/g$a;

    return-object p0
.end method

.method static synthetic d(Lcom/mbridge/msdk/click/j;)J
    .locals 2

    .line 27
    iget-wide v0, p0, Lcom/mbridge/msdk/click/j;->b:J

    return-wide v0
.end method

.method static synthetic e(Lcom/mbridge/msdk/click/j;)Z
    .locals 0

    .line 27
    iget-boolean p0, p0, Lcom/mbridge/msdk/click/j;->a:Z

    return p0
.end method

.method static synthetic f(Lcom/mbridge/msdk/click/j;)Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;
    .locals 0

    .line 27
    iget-object p0, p0, Lcom/mbridge/msdk/click/j;->d:Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;

    return-object p0
.end method

.method static synthetic g(Lcom/mbridge/msdk/click/j;)Lcom/mbridge/msdk/click/e;
    .locals 0

    .line 27
    iget-object p0, p0, Lcom/mbridge/msdk/click/j;->c:Lcom/mbridge/msdk/click/e;

    return-object p0
.end method

.method static synthetic h(Lcom/mbridge/msdk/click/j;)Z
    .locals 0

    .line 27
    iget-boolean p0, p0, Lcom/mbridge/msdk/click/j;->k:Z

    return p0
.end method


# virtual methods
.method public final a()V
    .locals 1

    const/4 v0, 0x0

    .line 71
    iput-boolean v0, p0, Lcom/mbridge/msdk/click/j;->e:Z

    return-void
.end method

.method public final a(Lcom/mbridge/msdk/foundation/same/e/a$a;)V
    .locals 1

    .line 464
    sget-object v0, Lcom/mbridge/msdk/foundation/same/e/a$a;->e:Lcom/mbridge/msdk/foundation/same/e/a$a;

    if-ne p1, v0, :cond_1

    .line 467
    iget-boolean p1, p0, Lcom/mbridge/msdk/click/j;->e:Z

    if-nez p1, :cond_0

    return-void

    .line 471
    :cond_0
    iget-object p1, p0, Lcom/mbridge/msdk/click/j;->j:Landroid/os/Handler;

    new-instance v0, Lcom/mbridge/msdk/click/j$1;

    invoke-direct {v0, p0}, Lcom/mbridge/msdk/click/j$1;-><init>(Lcom/mbridge/msdk/click/j;)V

    invoke-virtual {p1, v0}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    :cond_1
    return-void
.end method

.method public final a(Ljava/lang/String;Lcom/mbridge/msdk/click/e;ZLjava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/mbridge/msdk/rover/d;Lcom/mbridge/msdk/foundation/entity/CampaignEx;ZZI)V
    .locals 15

    move-object v12, p0

    move-object/from16 v0, p2

    .line 65
    iput-object v0, v12, Lcom/mbridge/msdk/click/j;->c:Lcom/mbridge/msdk/click/e;

    move/from16 v0, p3

    .line 66
    iput-boolean v0, v12, Lcom/mbridge/msdk/click/j;->f:Z

    .line 67
    iget-object v13, v12, Lcom/mbridge/msdk/click/j;->h:Lcom/mbridge/msdk/foundation/same/e/b;

    new-instance v14, Lcom/mbridge/msdk/click/j$a;

    iget-object v2, v12, Lcom/mbridge/msdk/click/j;->g:Landroid/content/Context;

    move-object v0, v14

    move-object v1, p0

    move-object/from16 v3, p1

    move-object/from16 v4, p4

    move-object/from16 v5, p5

    move-object/from16 v6, p6

    move-object/from16 v7, p7

    move-object/from16 v8, p8

    move/from16 v9, p9

    move/from16 v10, p10

    move/from16 v11, p11

    invoke-direct/range {v0 .. v11}, Lcom/mbridge/msdk/click/j$a;-><init>(Lcom/mbridge/msdk/click/j;Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/mbridge/msdk/rover/d;Lcom/mbridge/msdk/foundation/entity/CampaignEx;ZZI)V

    invoke-virtual {v13, v14, p0}, Lcom/mbridge/msdk/foundation/same/e/b;->a(Lcom/mbridge/msdk/foundation/same/e/a;Lcom/mbridge/msdk/foundation/same/e/a$b;)V

    return-void
.end method
