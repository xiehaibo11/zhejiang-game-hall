.class public final Lcom/tkay/expressad/mbbanner/a/d/c;
.super Ljava/lang/Object;


# static fields
.field private static c:Ljava/lang/String; = "BannerShowManager"


# instance fields
.field private A:F

.field private B:Landroid/view/View$OnClickListener;

.field private C:Lcom/tkay/expressad/mbbanner/a/c/a;

.field private D:Lcom/tkay/expressad/atsignalcommon/a/b;

.field a:Lcom/tkay/expressad/a/a;

.field b:Lcom/tkay/expressad/out/c;

.field private d:Lcom/tkay/expressad/mbbanner/a/c/c;

.field private e:Z

.field private f:Lcom/tkay/expressad/foundation/d/c;

.field private g:Lcom/tkay/expressad/out/TemplateBannerView;

.field private h:Landroid/widget/ImageView;

.field private i:Lcom/tkay/expressad/mbbanner/view/TYBannerWebView;

.field private j:Landroid/widget/ImageView;

.field private k:Z

.field private l:Z

.field private m:Z

.field private n:Z

.field private o:Z

.field private p:Z

.field private q:Z

.field private r:Ljava/lang/String;

.field private s:Ljava/lang/String;

.field private t:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/tkay/expressad/foundation/d/c;",
            ">;"
        }
    .end annotation
.end field

.field private u:I

.field private v:J

.field private w:Lcom/tkay/expressad/mbbanner/a/a/c;

.field private x:Landroid/os/Handler;

.field private y:Lcom/tkay/expressad/foundation/g/g/a;

.field private z:F


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public constructor <init>(Lcom/tkay/expressad/out/TemplateBannerView;Lcom/tkay/expressad/mbbanner/a/c/c;Ljava/lang/String;Ljava/lang/String;ZLcom/tkay/expressad/d/c;)V
    .locals 2

    .line 219
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const-wide/16 v0, 0x3a98

    .line 96
    iput-wide v0, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->v:J

    .line 99
    new-instance v0, Lcom/tkay/expressad/mbbanner/a/d/c$1;

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v1

    invoke-direct {v0, p0, v1}, Lcom/tkay/expressad/mbbanner/a/d/c$1;-><init>(Lcom/tkay/expressad/mbbanner/a/d/c;Landroid/os/Looper;)V

    iput-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->x:Landroid/os/Handler;

    .line 110
    new-instance v0, Lcom/tkay/expressad/mbbanner/a/d/c$4;

    invoke-direct {v0, p0}, Lcom/tkay/expressad/mbbanner/a/d/c$4;-><init>(Lcom/tkay/expressad/mbbanner/a/d/c;)V

    iput-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->y:Lcom/tkay/expressad/foundation/g/g/a;

    .line 132
    new-instance v0, Lcom/tkay/expressad/mbbanner/a/d/c$5;

    invoke-direct {v0, p0}, Lcom/tkay/expressad/mbbanner/a/d/c$5;-><init>(Lcom/tkay/expressad/mbbanner/a/d/c;)V

    iput-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->B:Landroid/view/View$OnClickListener;

    .line 150
    new-instance v0, Lcom/tkay/expressad/mbbanner/a/d/c$6;

    invoke-direct {v0, p0}, Lcom/tkay/expressad/mbbanner/a/d/c$6;-><init>(Lcom/tkay/expressad/mbbanner/a/d/c;)V

    iput-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->C:Lcom/tkay/expressad/mbbanner/a/c/a;

    .line 970
    new-instance v0, Lcom/tkay/expressad/mbbanner/a/d/c$2;

    invoke-direct {v0, p0}, Lcom/tkay/expressad/mbbanner/a/d/c$2;-><init>(Lcom/tkay/expressad/mbbanner/a/d/c;)V

    iput-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->D:Lcom/tkay/expressad/atsignalcommon/a/b;

    .line 220
    iput-boolean p5, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->e:Z

    .line 221
    iput-object p1, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->g:Lcom/tkay/expressad/out/TemplateBannerView;

    .line 222
    iput-object p4, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->r:Ljava/lang/String;

    .line 223
    iput-object p3, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->s:Ljava/lang/String;

    .line 224
    new-instance p1, Lcom/tkay/expressad/mbbanner/a/c/e;

    invoke-direct {p1, p2, p6}, Lcom/tkay/expressad/mbbanner/a/c/e;-><init>(Lcom/tkay/expressad/mbbanner/a/c/c;Lcom/tkay/expressad/d/c;)V

    iput-object p1, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->d:Lcom/tkay/expressad/mbbanner/a/c/c;

    return-void
.end method

.method static synthetic a(Lcom/tkay/expressad/mbbanner/a/d/c;F)F
    .locals 0

    .line 69
    iput p1, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->z:F

    return p1
.end method

.method private static a(Lcom/tkay/expressad/foundation/d/c;)Ljava/lang/String;
    .locals 4

    const-string v0, ""

    if-eqz p0, :cond_2

    .line 442
    invoke-virtual {p0}, Lcom/tkay/expressad/foundation/d/c;->p()Ljava/lang/String;

    move-result-object v1

    .line 443
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/h;->a()Lcom/tkay/expressad/videocommon/b/h;

    move-result-object v2

    invoke-virtual {v2, v1}, Lcom/tkay/expressad/videocommon/b/h;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_1

    .line 444
    invoke-virtual {p0}, Lcom/tkay/expressad/foundation/d/c;->q()Ljava/lang/String;

    move-result-object v1

    .line 445
    invoke-virtual {p0}, Lcom/tkay/expressad/foundation/d/c;->ay()Z

    move-result p0

    const-string v2, "file:////"

    if-eqz p0, :cond_0

    .line 448
    :try_start_0
    new-instance p0, Ljava/io/File;

    invoke-direct {p0, v1}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 449
    invoke-virtual {p0}, Ljava/io/File;->exists()Z

    move-result v3

    if-eqz v3, :cond_2

    .line 450
    invoke-static {p0}, Lcom/tkay/expressad/foundation/h/m;->a(Ljava/io/File;)Ljava/lang/String;

    move-result-object p0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :goto_0
    move-object v0, p0

    goto :goto_1

    .line 454
    :catch_0
    new-instance p0, Ljava/io/File;

    invoke-direct {p0, v1}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 455
    invoke-virtual {p0}, Ljava/io/File;->exists()Z

    move-result v0

    if-eqz v0, :cond_1

    invoke-virtual {p0}, Ljava/io/File;->isFile()Z

    move-result v0

    if-eqz v0, :cond_1

    invoke-virtual {p0}, Ljava/io/File;->canRead()Z

    move-result p0

    if-eqz p0, :cond_1

    .line 456
    invoke-static {v1}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v2, p0}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    goto :goto_0

    .line 460
    :cond_0
    new-instance p0, Ljava/io/File;

    invoke-direct {p0, v1}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 461
    invoke-virtual {p0}, Ljava/io/File;->exists()Z

    move-result v0

    if-eqz v0, :cond_1

    invoke-virtual {p0}, Ljava/io/File;->isFile()Z

    move-result v0

    if-eqz v0, :cond_1

    invoke-virtual {p0}, Ljava/io/File;->canRead()Z

    move-result p0

    if-eqz p0, :cond_1

    .line 462
    invoke-static {v1}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v2, p0}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    goto :goto_1

    :cond_1
    move-object v0, v1

    :cond_2
    :goto_1
    return-object v0
.end method

.method private static a(Lcom/tkay/expressad/foundation/d/c;Landroid/content/Context;Ljava/lang/String;)V
    .locals 3

    if-eqz p0, :cond_0

    .line 755
    :try_start_0
    invoke-virtual {p0}, Lcom/tkay/expressad/foundation/d/c;->e()Ljava/util/List;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 756
    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v1

    if-lez v1, :cond_0

    .line 757
    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    const/4 v2, 0x1

    .line 758
    invoke-static {p1, p0, p2, v1, v2}, Lcom/tkay/expressad/a/a;->a(Landroid/content/Context;Lcom/tkay/expressad/foundation/d/c;Ljava/lang/String;Ljava/lang/String;Z)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p0

    .line 763
    invoke-virtual {p0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    :cond_0
    return-void
.end method

.method static synthetic a(Lcom/tkay/expressad/mbbanner/a/d/c;Ljava/lang/String;)V
    .locals 0

    .line 69
    invoke-direct {p0, p1}, Lcom/tkay/expressad/mbbanner/a/d/c;->a(Ljava/lang/String;)V

    return-void
.end method

.method private a(Ljava/lang/String;)V
    .locals 2

    .line 477
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->f:Lcom/tkay/expressad/foundation/d/c;

    if-eqz v0, :cond_0

    invoke-direct {p0}, Lcom/tkay/expressad/mbbanner/a/d/c;->i()Z

    move-result v0

    if-nez v0, :cond_0

    .line 478
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->x:Landroid/os/Handler;

    iget-object v1, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->y:Lcom/tkay/expressad/foundation/g/g/a;

    invoke-virtual {v0, v1}, Landroid/os/Handler;->removeCallbacks(Ljava/lang/Runnable;)V

    .line 479
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->d:Lcom/tkay/expressad/mbbanner/a/c/c;

    if-eqz v0, :cond_0

    .line 480
    invoke-interface {v0, p1}, Lcom/tkay/expressad/mbbanner/a/c/c;->a(Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method static synthetic a(Lcom/tkay/expressad/mbbanner/a/d/c;)Z
    .locals 0

    .line 69
    iget-boolean p0, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->q:Z

    return p0
.end method

.method static synthetic a(Lcom/tkay/expressad/mbbanner/a/d/c;Z)Z
    .locals 0

    .line 69
    iput-boolean p1, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->p:Z

    return p1
.end method

.method static synthetic b(Lcom/tkay/expressad/mbbanner/a/d/c;F)F
    .locals 0

    .line 69
    iput p1, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->A:F

    return p1
.end method

.method private b(Lcom/tkay/expressad/foundation/d/d;)Lcom/tkay/expressad/foundation/d/c;
    .locals 1

    if-eqz p1, :cond_0

    .line 3374
    iget-object p1, p1, Lcom/tkay/expressad/foundation/d/d;->J:Ljava/util/ArrayList;

    .line 425
    iput-object p1, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->t:Ljava/util/List;

    if-eqz p1, :cond_0

    .line 426
    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result p1

    if-lez p1, :cond_0

    .line 427
    iget-object p1, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->t:Ljava/util/List;

    const/4 v0, 0x0

    invoke-interface {p1, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/tkay/expressad/foundation/d/c;

    goto :goto_0

    :cond_0
    const/4 p1, 0x0

    :goto_0
    return-object p1
.end method

.method static synthetic b()V
    .locals 0

    return-void
.end method

.method private b(Lcom/tkay/expressad/foundation/d/c;)V
    .locals 2

    if-eqz p1, :cond_0

    .line 746
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->r:Ljava/lang/String;

    invoke-static {p1, v0, v1}, Lcom/tkay/expressad/mbbanner/a/d/c;->c(Lcom/tkay/expressad/foundation/d/c;Landroid/content/Context;Ljava/lang/String;)V

    .line 747
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->r:Ljava/lang/String;

    invoke-static {p1, v0, v1}, Lcom/tkay/expressad/mbbanner/a/d/c;->b(Lcom/tkay/expressad/foundation/d/c;Landroid/content/Context;Ljava/lang/String;)V

    .line 748
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->r:Ljava/lang/String;

    invoke-static {p1, v0, v1}, Lcom/tkay/expressad/mbbanner/a/d/c;->a(Lcom/tkay/expressad/foundation/d/c;Landroid/content/Context;Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method private static b(Lcom/tkay/expressad/foundation/d/c;Landroid/content/Context;Ljava/lang/String;)V
    .locals 8

    if-eqz p0, :cond_0

    .line 769
    :try_start_0
    invoke-virtual {p0}, Lcom/tkay/expressad/foundation/d/c;->ai()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 770
    invoke-virtual {p0}, Lcom/tkay/expressad/foundation/d/c;->ai()Ljava/lang/String;

    move-result-object v4

    const/4 v5, 0x0

    const/4 v6, 0x1

    sget v7, Lcom/tkay/expressad/a/a/a;->j:I

    move-object v1, p1

    move-object v2, p0

    move-object v3, p2

    invoke-static/range {v1 .. v7}, Lcom/tkay/expressad/a/a;->a(Landroid/content/Context;Lcom/tkay/expressad/foundation/d/c;Ljava/lang/String;Ljava/lang/String;ZZI)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p0

    .line 773
    invoke-virtual {p0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    :cond_0
    :goto_0
    return-void
.end method

.method static synthetic b(Lcom/tkay/expressad/mbbanner/a/d/c;)V
    .locals 0

    .line 4627
    iget-object p0, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->d:Lcom/tkay/expressad/mbbanner/a/c/c;

    if-eqz p0, :cond_0

    .line 4628
    invoke-interface {p0}, Lcom/tkay/expressad/mbbanner/a/c/c;->d()V

    :cond_0
    return-void
.end method

.method static synthetic c()Ljava/lang/String;
    .locals 1

    .line 69
    sget-object v0, Lcom/tkay/expressad/mbbanner/a/d/c;->c:Ljava/lang/String;

    return-object v0
.end method

.method private static c(Lcom/tkay/expressad/foundation/d/c;Landroid/content/Context;Ljava/lang/String;)V
    .locals 8

    .line 779
    invoke-virtual {p0}, Lcom/tkay/expressad/foundation/d/c;->ag()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 800
    invoke-virtual {p0}, Lcom/tkay/expressad/foundation/d/c;->ag()Ljava/lang/String;

    move-result-object v4

    const/4 v5, 0x0

    const/4 v6, 0x1

    sget v7, Lcom/tkay/expressad/a/a/a;->i:I

    move-object v1, p1

    move-object v2, p0

    move-object v3, p2

    invoke-static/range {v1 .. v7}, Lcom/tkay/expressad/a/a;->a(Landroid/content/Context;Lcom/tkay/expressad/foundation/d/c;Ljava/lang/String;Ljava/lang/String;ZZI)V

    .line 802
    :cond_0
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    invoke-virtual {p0}, Lcom/tkay/expressad/foundation/d/c;->L()Lcom/tkay/expressad/foundation/d/n;

    move-result-object v0

    if-eqz v0, :cond_1

    invoke-virtual {p0}, Lcom/tkay/expressad/foundation/d/c;->L()Lcom/tkay/expressad/foundation/d/n;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/n;->o()[Ljava/lang/String;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 806
    invoke-virtual {p0}, Lcom/tkay/expressad/foundation/d/c;->L()Lcom/tkay/expressad/foundation/d/n;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/n;->o()[Ljava/lang/String;

    move-result-object v0

    const/4 v1, 0x0

    invoke-static {p1, p0, p2, v0, v1}, Lcom/tkay/expressad/a/a;->a(Landroid/content/Context;Lcom/tkay/expressad/foundation/d/c;Ljava/lang/String;[Ljava/lang/String;Z)V

    :cond_1
    return-void
.end method

.method static synthetic c(Lcom/tkay/expressad/mbbanner/a/d/c;)V
    .locals 2

    .line 4682
    iget-boolean v0, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->e:Z

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->j:Landroid/widget/ImageView;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Landroid/widget/ImageView;->getVisibility()I

    move-result v0

    if-nez v0, :cond_0

    .line 4683
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->j:Landroid/widget/ImageView;

    const/16 v1, 0x8

    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setVisibility(I)V

    .line 4684
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->j:Landroid/widget/ImageView;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 4685
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->g:Lcom/tkay/expressad/out/TemplateBannerView;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->j:Landroid/widget/ImageView;

    invoke-virtual {v0}, Landroid/widget/ImageView;->getParent()Landroid/view/ViewParent;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 4686
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->g:Lcom/tkay/expressad/out/TemplateBannerView;

    iget-object p0, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->j:Landroid/widget/ImageView;

    invoke-virtual {v0, p0}, Lcom/tkay/expressad/out/TemplateBannerView;->removeView(Landroid/view/View;)V

    :cond_0
    return-void
.end method

.method static synthetic d(Lcom/tkay/expressad/mbbanner/a/d/c;)V
    .locals 0

    .line 69
    invoke-direct {p0}, Lcom/tkay/expressad/mbbanner/a/d/c;->l()V

    return-void
.end method

.method private d(Z)V
    .locals 3

    .line 994
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->g:Lcom/tkay/expressad/out/TemplateBannerView;

    if-eqz v0, :cond_3

    .line 995
    invoke-static {}, Lcom/tkay/expressad/foundation/f/b;->a()Lcom/tkay/expressad/foundation/f/b;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->r:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/foundation/f/b;->b(Ljava/lang/String;)Lcom/tkay/expressad/widget/FeedBackButton;

    move-result-object v0

    .line 996
    invoke-static {}, Lcom/tkay/expressad/foundation/f/b;->a()Lcom/tkay/expressad/foundation/f/b;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/f/b;->b()Z

    move-result v1

    if-eqz v1, :cond_2

    if-eqz p1, :cond_2

    if-eqz v0, :cond_2

    .line 997
    invoke-virtual {v0}, Lcom/tkay/expressad/widget/FeedBackButton;->getParent()Landroid/view/ViewParent;

    move-result-object p1

    check-cast p1, Landroid/view/ViewGroup;

    if-eqz p1, :cond_0

    .line 999
    invoke-virtual {p1, v0}, Landroid/view/ViewGroup;->removeView(Landroid/view/View;)V

    :cond_0
    const/4 p1, 0x0

    .line 1001
    invoke-virtual {v0, p1}, Lcom/tkay/expressad/widget/FeedBackButton;->setVisibility(I)V

    .line 1002
    invoke-virtual {v0}, Lcom/tkay/expressad/widget/FeedBackButton;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object p1

    check-cast p1, Landroid/widget/RelativeLayout$LayoutParams;

    if-nez p1, :cond_1

    .line 1004
    new-instance p1, Landroid/widget/RelativeLayout$LayoutParams;

    sget v1, Lcom/tkay/expressad/foundation/f/b;->a:I

    sget v2, Lcom/tkay/expressad/foundation/f/b;->b:I

    invoke-direct {p1, v1, v2}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    :cond_1
    const/16 v1, 0xc

    .line 1006
    invoke-virtual {p1, v1}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    .line 1007
    invoke-virtual {v0, p1}, Lcom/tkay/expressad/widget/FeedBackButton;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 1008
    iget-object p1, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->g:Lcom/tkay/expressad/out/TemplateBannerView;

    invoke-virtual {p1, v0}, Lcom/tkay/expressad/out/TemplateBannerView;->addView(Landroid/view/View;)V

    .line 1011
    :cond_2
    invoke-static {}, Lcom/tkay/expressad/foundation/f/b;->a()Lcom/tkay/expressad/foundation/f/b;

    move-result-object p1

    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->r:Ljava/lang/String;

    new-instance v1, Lcom/tkay/expressad/mbbanner/a/d/c$3;

    invoke-direct {v1, p0}, Lcom/tkay/expressad/mbbanner/a/d/c$3;-><init>(Lcom/tkay/expressad/mbbanner/a/d/c;)V

    invoke-virtual {p1, v0, v1}, Lcom/tkay/expressad/foundation/f/b;->a(Ljava/lang/String;Lcom/tkay/expressad/foundation/f/a;)V

    .line 1066
    iget-object p1, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->f:Lcom/tkay/expressad/foundation/d/c;

    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->r:Ljava/lang/String;

    invoke-virtual {p1, v0}, Lcom/tkay/expressad/foundation/d/c;->l(Ljava/lang/String;)V

    .line 1067
    invoke-static {}, Lcom/tkay/expressad/foundation/f/b;->a()Lcom/tkay/expressad/foundation/f/b;

    move-result-object p1

    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->r:Ljava/lang/String;

    iget-object v1, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->f:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {p1, v0, v1}, Lcom/tkay/expressad/foundation/f/b;->a(Ljava/lang/String;Lcom/tkay/expressad/foundation/d/c;)V

    :cond_3
    return-void
.end method

.method private d()Z
    .locals 7

    .line 289
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->f:Lcom/tkay/expressad/foundation/d/c;

    invoke-static {v0}, Lcom/tkay/expressad/mbbanner/a/d/c;->a(Lcom/tkay/expressad/foundation/d/c;)Ljava/lang/String;

    move-result-object v3

    .line 290
    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    const/4 v1, 0x0

    if-nez v0, :cond_6

    .line 291
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->g:Lcom/tkay/expressad/out/TemplateBannerView;

    if-eqz v0, :cond_5

    .line 292
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->i:Lcom/tkay/expressad/mbbanner/view/TYBannerWebView;

    if-nez v0, :cond_0

    .line 293
    new-instance v0, Lcom/tkay/expressad/mbbanner/view/TYBannerWebView;

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v2

    invoke-direct {v0, v2}, Lcom/tkay/expressad/mbbanner/view/TYBannerWebView;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->i:Lcom/tkay/expressad/mbbanner/view/TYBannerWebView;

    .line 294
    new-instance v2, Landroid/widget/RelativeLayout$LayoutParams;

    const/4 v4, -0x1

    invoke-direct {v2, v4, v4}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    invoke-virtual {v0, v2}, Lcom/tkay/expressad/mbbanner/view/TYBannerWebView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 296
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->i:Lcom/tkay/expressad/mbbanner/view/TYBannerWebView;

    new-instance v2, Lcom/tkay/expressad/mbbanner/view/a;

    iget-object v4, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->r:Ljava/lang/String;

    iget-object v5, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->t:Ljava/util/List;

    iget-object v6, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->C:Lcom/tkay/expressad/mbbanner/a/c/a;

    invoke-direct {v2, v4, v5, v6}, Lcom/tkay/expressad/mbbanner/view/a;-><init>(Ljava/lang/String;Ljava/util/List;Lcom/tkay/expressad/mbbanner/a/c/a;)V

    invoke-virtual {v0, v2}, Lcom/tkay/expressad/mbbanner/view/TYBannerWebView;->setWebViewClient(Landroid/webkit/WebViewClient;)V

    .line 298
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->h:Landroid/widget/ImageView;

    if-eqz v0, :cond_1

    const/16 v2, 0x8

    .line 299
    invoke-virtual {v0, v2}, Landroid/widget/ImageView;->setVisibility(I)V

    .line 301
    :cond_1
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->i:Lcom/tkay/expressad/mbbanner/view/TYBannerWebView;

    invoke-virtual {v0}, Lcom/tkay/expressad/mbbanner/view/TYBannerWebView;->getVisibility()I

    move-result v0

    if-eqz v0, :cond_2

    .line 302
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->i:Lcom/tkay/expressad/mbbanner/view/TYBannerWebView;

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/mbbanner/view/TYBannerWebView;->setVisibility(I)V

    .line 304
    :cond_2
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->i:Lcom/tkay/expressad/mbbanner/view/TYBannerWebView;

    invoke-virtual {v0}, Lcom/tkay/expressad/mbbanner/view/TYBannerWebView;->getParent()Landroid/view/ViewParent;

    move-result-object v0

    if-nez v0, :cond_3

    .line 305
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->g:Lcom/tkay/expressad/out/TemplateBannerView;

    iget-object v1, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->i:Lcom/tkay/expressad/mbbanner/view/TYBannerWebView;

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/out/TemplateBannerView;->addView(Landroid/view/View;)V

    .line 306
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->f:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->H()Z

    move-result v0

    invoke-direct {p0, v0}, Lcom/tkay/expressad/mbbanner/a/d/c;->d(Z)V

    .line 320
    :cond_3
    invoke-direct {p0}, Lcom/tkay/expressad/mbbanner/a/d/c;->l()V

    .line 322
    new-instance v0, Lcom/tkay/expressad/mbbanner/a/a/c;

    iget-object v1, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->g:Lcom/tkay/expressad/out/TemplateBannerView;

    invoke-virtual {v1}, Lcom/tkay/expressad/out/TemplateBannerView;->getContext()Landroid/content/Context;

    move-result-object v1

    iget-object v2, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->s:Ljava/lang/String;

    iget-object v4, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->r:Ljava/lang/String;

    invoke-direct {v0, v1, v2, v4}, Lcom/tkay/expressad/mbbanner/a/a/c;-><init>(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V

    iput-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->w:Lcom/tkay/expressad/mbbanner/a/a/c;

    .line 323
    iget-object v1, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->t:Ljava/util/List;

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/mbbanner/a/a/c;->a(Ljava/util/List;)V

    .line 324
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->w:Lcom/tkay/expressad/mbbanner/a/a/c;

    iget-object v1, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->C:Lcom/tkay/expressad/mbbanner/a/c/a;

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/mbbanner/a/a/c;->a(Lcom/tkay/expressad/mbbanner/a/c/a;)V

    .line 325
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->w:Lcom/tkay/expressad/mbbanner/a/a/c;

    iget v1, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->u:I

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/mbbanner/a/a/c;->a(I)V

    .line 326
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->i:Lcom/tkay/expressad/mbbanner/view/TYBannerWebView;

    iget-object v1, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->D:Lcom/tkay/expressad/atsignalcommon/a/b;

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/mbbanner/view/TYBannerWebView;->setWebViewListener(Lcom/tkay/expressad/atsignalcommon/windvane/e;)V

    .line 327
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->i:Lcom/tkay/expressad/mbbanner/view/TYBannerWebView;

    iget-object v1, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->w:Lcom/tkay/expressad/mbbanner/a/a/c;

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/mbbanner/view/TYBannerWebView;->setObject(Ljava/lang/Object;)V

    const-string v0, "file"

    .line 328
    invoke-virtual {v3, v0}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_4

    .line 329
    iget-object v1, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->i:Lcom/tkay/expressad/mbbanner/view/TYBannerWebView;

    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->f:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->p()Ljava/lang/String;

    move-result-object v2

    const/4 v6, 0x0

    const-string v4, "text/html"

    const-string v5, "utf-8"

    invoke-virtual/range {v1 .. v6}, Lcom/tkay/expressad/mbbanner/view/TYBannerWebView;->loadDataWithBaseURL(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    .line 331
    :cond_4
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->i:Lcom/tkay/expressad/mbbanner/view/TYBannerWebView;

    invoke-virtual {v0, v3}, Lcom/tkay/expressad/mbbanner/view/TYBannerWebView;->loadUrl(Ljava/lang/String;)V

    goto :goto_0

    :cond_5
    const-string v0, "banner show failed because banner view is exception"

    .line 335
    invoke-direct {p0, v0}, Lcom/tkay/expressad/mbbanner/a/d/c;->a(Ljava/lang/String;)V

    :goto_0
    const/4 v0, 0x1

    return v0

    :cond_6
    return v1
.end method

.method private e()V
    .locals 3

    .line 348
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->g:Lcom/tkay/expressad/out/TemplateBannerView;

    if-eqz v0, :cond_3

    .line 349
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->i:Lcom/tkay/expressad/mbbanner/view/TYBannerWebView;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/tkay/expressad/mbbanner/view/TYBannerWebView;->getParent()Landroid/view/ViewParent;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 350
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->g:Lcom/tkay/expressad/out/TemplateBannerView;

    iget-object v1, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->i:Lcom/tkay/expressad/mbbanner/view/TYBannerWebView;

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/out/TemplateBannerView;->removeView(Landroid/view/View;)V

    .line 352
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->h:Landroid/widget/ImageView;

    if-nez v0, :cond_1

    .line 353
    new-instance v0, Landroid/widget/ImageView;

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v1

    invoke-direct {v0, v1}, Landroid/widget/ImageView;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->h:Landroid/widget/ImageView;

    .line 354
    new-instance v1, Lcom/tkay/expressad/mbbanner/a/d/c$7;

    invoke-direct {v1, p0}, Lcom/tkay/expressad/mbbanner/a/d/c$7;-><init>(Lcom/tkay/expressad/mbbanner/a/d/c;)V

    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setOnTouchListener(Landroid/view/View$OnTouchListener;)V

    .line 364
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->h:Landroid/widget/ImageView;

    new-instance v1, Lcom/tkay/expressad/mbbanner/a/d/c$8;

    invoke-direct {v1, p0}, Lcom/tkay/expressad/mbbanner/a/d/c$8;-><init>(Lcom/tkay/expressad/mbbanner/a/d/c;)V

    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 376
    :cond_1
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->f:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->be()Ljava/lang/String;

    move-result-object v0

    .line 377
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_2

    .line 378
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Lcom/tkay/expressad/foundation/g/d/b;->a(Landroid/content/Context;)Lcom/tkay/expressad/foundation/g/d/b;

    move-result-object v1

    new-instance v2, Lcom/tkay/expressad/mbbanner/a/d/c$9;

    invoke-direct {v2, p0}, Lcom/tkay/expressad/mbbanner/a/d/c$9;-><init>(Lcom/tkay/expressad/mbbanner/a/d/c;)V

    invoke-virtual {v1, v0, v2}, Lcom/tkay/expressad/foundation/g/d/b;->a(Ljava/lang/String;Lcom/tkay/expressad/foundation/g/d/c;)V

    return-void

    :cond_2
    const-string v0, "banner show failed because campain is exception"

    .line 396
    invoke-direct {p0, v0}, Lcom/tkay/expressad/mbbanner/a/d/c;->a(Ljava/lang/String;)V

    return-void

    :cond_3
    const-string v0, "banner show failed because banner view is exception"

    .line 399
    invoke-direct {p0, v0}, Lcom/tkay/expressad/mbbanner/a/d/c;->a(Ljava/lang/String;)V

    return-void
.end method

.method static synthetic e(Lcom/tkay/expressad/mbbanner/a/d/c;)V
    .locals 0

    .line 69
    invoke-direct {p0}, Lcom/tkay/expressad/mbbanner/a/d/c;->h()V

    return-void
.end method

.method private f()V
    .locals 4

    .line 408
    iget-boolean v0, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->e:Z

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->j:Landroid/widget/ImageView;

    if-nez v0, :cond_0

    .line 409
    new-instance v0, Landroid/widget/ImageView;

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v1

    invoke-direct {v0, v1}, Landroid/widget/ImageView;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->j:Landroid/widget/ImageView;

    .line 410
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v1

    const-string v2, "tkay_banner_close"

    const-string v3, "drawable"

    invoke-static {v1, v2, v3}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v1

    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setBackgroundResource(I)V

    .line 411
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->j:Landroid/widget/ImageView;

    const/16 v1, 0x8

    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setVisibility(I)V

    .line 412
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->j:Landroid/widget/ImageView;

    const-string v1, "closeButton"

    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setContentDescription(Ljava/lang/CharSequence;)V

    :cond_0
    return-void
.end method

.method static synthetic f(Lcom/tkay/expressad/mbbanner/a/d/c;)V
    .locals 0

    .line 69
    invoke-direct {p0}, Lcom/tkay/expressad/mbbanner/a/d/c;->e()V

    return-void
.end method

.method static synthetic g(Lcom/tkay/expressad/mbbanner/a/d/c;)Lcom/tkay/expressad/mbbanner/a/c/c;
    .locals 0

    .line 69
    iget-object p0, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->d:Lcom/tkay/expressad/mbbanner/a/c/c;

    return-object p0
.end method

.method private g()Z
    .locals 2

    .line 487
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->g:Lcom/tkay/expressad/out/TemplateBannerView;

    const/4 v1, 0x0

    if-nez v0, :cond_0

    return v1

    .line 491
    :cond_0
    invoke-static {v0}, Lcom/tkay/expressad/foundation/h/y;->a(Landroid/view/View;)Z

    move-result v0

    if-nez v0, :cond_1

    iget-boolean v0, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->p:Z

    if-nez v0, :cond_1

    const/4 v0, 0x1

    return v0

    :cond_1
    return v1
.end method

.method static synthetic h(Lcom/tkay/expressad/mbbanner/a/d/c;)Lcom/tkay/expressad/foundation/d/c;
    .locals 0

    .line 69
    iget-object p0, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->f:Lcom/tkay/expressad/foundation/d/c;

    return-object p0
.end method

.method private h()V
    .locals 10

    .line 505
    iget-boolean v0, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->m:Z

    const/4 v1, 0x1

    if-eqz v0, :cond_0

    iget-boolean v0, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->n:Z

    if-nez v0, :cond_0

    .line 506
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->d:Lcom/tkay/expressad/mbbanner/a/c/c;

    if-eqz v0, :cond_0

    .line 507
    iput-boolean v1, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->n:Z

    .line 508
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->x:Landroid/os/Handler;

    iget-object v2, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->y:Lcom/tkay/expressad/foundation/g/g/a;

    invoke-virtual {v0, v2}, Landroid/os/Handler;->removeCallbacks(Ljava/lang/Runnable;)V

    .line 509
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->f:Lcom/tkay/expressad/foundation/d/c;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->am()Z

    move-result v0

    if-nez v0, :cond_0

    .line 510
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->f:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->an()V

    .line 511
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->d:Lcom/tkay/expressad/mbbanner/a/c/c;

    iget-object v2, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->t:Ljava/util/List;

    invoke-interface {v0, v2}, Lcom/tkay/expressad/mbbanner/a/c/c;->a(Ljava/util/List;)V

    .line 516
    :cond_0
    iget-boolean v0, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->m:Z

    if-eqz v0, :cond_c

    iget-boolean v0, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->k:Z

    if-eqz v0, :cond_c

    iget-boolean v0, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->l:Z

    if-eqz v0, :cond_c

    iget-boolean v0, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->n:Z

    if-eqz v0, :cond_c

    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->f:Lcom/tkay/expressad/foundation/d/c;

    if-eqz v0, :cond_c

    invoke-direct {p0}, Lcom/tkay/expressad/mbbanner/a/d/c;->i()Z

    move-result v0

    if-nez v0, :cond_c

    .line 3487
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->g:Lcom/tkay/expressad/out/TemplateBannerView;

    const/4 v2, 0x0

    if-eqz v0, :cond_1

    .line 3491
    invoke-static {v0}, Lcom/tkay/expressad/foundation/h/y;->a(Landroid/view/View;)Z

    move-result v0

    if-nez v0, :cond_1

    iget-boolean v0, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->p:Z

    if-nez v0, :cond_1

    move v0, v1

    goto :goto_0

    :cond_1
    move v0, v2

    :goto_0
    const-wide/16 v3, 0x3e8

    if-nez v0, :cond_2

    .line 521
    iget-object v5, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->g:Lcom/tkay/expressad/out/TemplateBannerView;

    if-eqz v5, :cond_2

    .line 522
    new-instance v6, Lcom/tkay/expressad/mbbanner/a/d/c$10;

    invoke-direct {v6, p0}, Lcom/tkay/expressad/mbbanner/a/d/c$10;-><init>(Lcom/tkay/expressad/mbbanner/a/d/c;)V

    invoke-virtual {v5, v6, v3, v4}, Lcom/tkay/expressad/out/TemplateBannerView;->postDelayed(Ljava/lang/Runnable;J)Z

    .line 531
    :cond_2
    iget-boolean v5, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->o:Z

    if-eqz v5, :cond_3

    if-eqz v0, :cond_3

    const/4 v5, 0x2

    new-array v5, v5, [I

    .line 534
    iget-object v6, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->g:Lcom/tkay/expressad/out/TemplateBannerView;

    invoke-virtual {v6, v5}, Lcom/tkay/expressad/out/TemplateBannerView;->getLocationInWindow([I)V

    .line 535
    iget-object v6, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->i:Lcom/tkay/expressad/mbbanner/view/TYBannerWebView;

    aget v7, v5, v2

    int-to-float v7, v7

    aget v8, v5, v1

    int-to-float v8, v8

    invoke-static {v6, v7, v8}, Lcom/tkay/expressad/mbbanner/a/a/a;->a(Landroid/webkit/WebView;FF)V

    .line 536
    iget-object v6, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->i:Lcom/tkay/expressad/mbbanner/view/TYBannerWebView;

    aget v7, v5, v2

    aget v5, v5, v1

    iget-object v8, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->g:Lcom/tkay/expressad/out/TemplateBannerView;

    .line 537
    invoke-virtual {v8}, Lcom/tkay/expressad/out/TemplateBannerView;->getWidth()I

    move-result v8

    iget-object v9, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->g:Lcom/tkay/expressad/out/TemplateBannerView;

    invoke-virtual {v9}, Lcom/tkay/expressad/out/TemplateBannerView;->getHeight()I

    move-result v9

    .line 536
    invoke-static {v6, v7, v5, v8, v9}, Lcom/tkay/expressad/mbbanner/a/a/a;->a(Landroid/webkit/WebView;IIII)V

    .line 538
    iput-boolean v2, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->o:Z

    .line 539
    iget-object v5, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->f:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v5}, Lcom/tkay/expressad/foundation/d/c;->be()Ljava/lang/String;

    move-result-object v5

    invoke-static {v5}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v5

    if-nez v5, :cond_3

    .line 541
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v5

    invoke-virtual {v5}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v5

    invoke-static {v5}, Lcom/tkay/expressad/foundation/g/d/b;->a(Landroid/content/Context;)Lcom/tkay/expressad/foundation/g/d/b;

    move-result-object v5

    iget-object v6, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->f:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v6}, Lcom/tkay/expressad/foundation/d/c;->be()Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v5, v6}, Lcom/tkay/expressad/foundation/g/d/b;->c(Ljava/lang/String;)V

    .line 545
    :cond_3
    new-instance v5, Ljava/lang/StringBuilder;

    const-string v6, "showSuccessed:"

    invoke-direct {v5, v6}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v6, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->f:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v6}, Lcom/tkay/expressad/foundation/d/c;->aZ()Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    if-eqz v0, :cond_b

    .line 549
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->h:Landroid/widget/ImageView;

    const-string v5, "banner"

    if-eqz v0, :cond_5

    invoke-virtual {v0}, Landroid/widget/ImageView;->getVisibility()I

    move-result v0

    if-nez v0, :cond_5

    .line 550
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->f:Lcom/tkay/expressad/foundation/d/c;

    if-eqz v0, :cond_9

    if-eqz v0, :cond_4

    .line 3746
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v6

    invoke-virtual {v6}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v6

    iget-object v7, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->r:Ljava/lang/String;

    invoke-static {v0, v6, v7}, Lcom/tkay/expressad/mbbanner/a/d/c;->c(Lcom/tkay/expressad/foundation/d/c;Landroid/content/Context;Ljava/lang/String;)V

    .line 3747
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v6

    invoke-virtual {v6}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v6

    iget-object v7, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->r:Ljava/lang/String;

    invoke-static {v0, v6, v7}, Lcom/tkay/expressad/mbbanner/a/d/c;->b(Lcom/tkay/expressad/foundation/d/c;Landroid/content/Context;Ljava/lang/String;)V

    .line 3748
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v6

    invoke-virtual {v6}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v6

    iget-object v7, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->r:Ljava/lang/String;

    invoke-static {v0, v6, v7}, Lcom/tkay/expressad/mbbanner/a/d/c;->a(Lcom/tkay/expressad/foundation/d/c;Landroid/content/Context;Ljava/lang/String;)V

    .line 552
    :cond_4
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->f:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/foundation/d/c;->c(Z)V

    .line 553
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->r:Ljava/lang/String;

    iget-object v6, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->f:Lcom/tkay/expressad/foundation/d/c;

    invoke-static {v0, v6, v5}, Lcom/tkay/expressad/foundation/g/a/f;->a(Ljava/lang/String;Lcom/tkay/expressad/foundation/d/c;Ljava/lang/String;)V

    goto/16 :goto_2

    .line 556
    :cond_5
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->t:Ljava/util/List;

    if-eqz v0, :cond_9

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_9

    move v0, v2

    move v6, v0

    move v7, v6

    .line 561
    :goto_1
    iget-object v8, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->t:Ljava/util/List;

    invoke-interface {v8}, Ljava/util/List;->size()I

    move-result v8

    if-ge v0, v8, :cond_8

    .line 562
    iget-object v8, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->t:Ljava/util/List;

    invoke-interface {v8, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v8

    check-cast v8, Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v8}, Lcom/tkay/expressad/foundation/d/c;->s()Z

    move-result v8

    if-nez v8, :cond_7

    if-eqz v0, :cond_6

    .line 563
    iget-object v8, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->t:Ljava/util/List;

    invoke-interface {v8, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v8

    check-cast v8, Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v8}, Lcom/tkay/expressad/foundation/d/c;->V()Z

    move-result v8

    if-nez v8, :cond_7

    .line 566
    :cond_6
    iget-object v6, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->t:Ljava/util/List;

    invoke-interface {v6, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v6

    check-cast v6, Lcom/tkay/expressad/foundation/d/c;

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v7

    invoke-virtual {v7}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v7

    iget-object v8, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->r:Ljava/lang/String;

    invoke-static {v6, v7, v8}, Lcom/tkay/expressad/mbbanner/a/d/c;->c(Lcom/tkay/expressad/foundation/d/c;Landroid/content/Context;Ljava/lang/String;)V

    .line 567
    iget-object v6, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->t:Ljava/util/List;

    invoke-interface {v6, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v6

    check-cast v6, Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v6, v1}, Lcom/tkay/expressad/foundation/d/c;->c(Z)V

    .line 568
    iget-object v6, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->r:Ljava/lang/String;

    iget-object v7, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->t:Ljava/util/List;

    invoke-interface {v7, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v7

    check-cast v7, Lcom/tkay/expressad/foundation/d/c;

    invoke-static {v6, v7, v5}, Lcom/tkay/expressad/foundation/g/a/f;->a(Ljava/lang/String;Lcom/tkay/expressad/foundation/d/c;Ljava/lang/String;)V

    move v7, v0

    move v6, v1

    :cond_7
    add-int/lit8 v0, v0, 0x1

    goto :goto_1

    :cond_8
    if-eqz v6, :cond_9

    .line 575
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->t:Ljava/util/List;

    invoke-interface {v0, v7}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/expressad/foundation/d/c;

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v5

    invoke-virtual {v5}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v5

    iget-object v6, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->r:Ljava/lang/String;

    invoke-static {v0, v5, v6}, Lcom/tkay/expressad/mbbanner/a/d/c;->b(Lcom/tkay/expressad/foundation/d/c;Landroid/content/Context;Ljava/lang/String;)V

    .line 576
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->t:Ljava/util/List;

    invoke-interface {v0, v7}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/expressad/foundation/d/c;

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v5

    invoke-virtual {v5}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v5

    iget-object v6, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->r:Ljava/lang/String;

    invoke-static {v0, v5, v6}, Lcom/tkay/expressad/mbbanner/a/d/c;->a(Lcom/tkay/expressad/foundation/d/c;Landroid/content/Context;Ljava/lang/String;)V

    .line 581
    :cond_9
    :goto_2
    iput-boolean v1, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->q:Z

    .line 583
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->d:Lcom/tkay/expressad/mbbanner/a/c/c;

    if-eqz v0, :cond_a

    .line 584
    iget-object v5, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->f:Lcom/tkay/expressad/foundation/d/c;

    invoke-interface {v0, v5, v2}, Lcom/tkay/expressad/mbbanner/a/c/c;->a(Lcom/tkay/expressad/foundation/d/c;Z)V

    .line 587
    :cond_a
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->x:Landroid/os/Handler;

    invoke-virtual {v0, v1, v3, v4}, Landroid/os/Handler;->sendEmptyMessageDelayed(IJ)Z

    return-void

    .line 591
    :cond_b
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->f:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0, v2}, Lcom/tkay/expressad/foundation/d/c;->c(Z)V

    :cond_c
    return-void
.end method

.method static synthetic i(Lcom/tkay/expressad/mbbanner/a/d/c;)F
    .locals 0

    .line 69
    iget p0, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->z:F

    return p0
.end method

.method private declared-synchronized i()Z
    .locals 3

    monitor-enter p0

    .line 598
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->f:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->V()Z

    move-result v0

    if-nez v0, :cond_0

    .line 601
    iget-object v1, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->f:Lcom/tkay/expressad/foundation/d/c;

    const/4 v2, 0x1

    invoke-virtual {v1, v2}, Lcom/tkay/expressad/foundation/d/c;->c(Z)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 603
    :cond_0
    monitor-exit p0

    return v0

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method

.method static synthetic j(Lcom/tkay/expressad/mbbanner/a/d/c;)F
    .locals 0

    .line 69
    iget p0, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->A:F

    return p0
.end method

.method private j()V
    .locals 1

    .line 627
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->d:Lcom/tkay/expressad/mbbanner/a/c/c;

    if-eqz v0, :cond_0

    .line 628
    invoke-interface {v0}, Lcom/tkay/expressad/mbbanner/a/c/c;->d()V

    :cond_0
    return-void
.end method

.method static synthetic k(Lcom/tkay/expressad/mbbanner/a/d/c;)Landroid/widget/ImageView;
    .locals 0

    .line 69
    iget-object p0, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->h:Landroid/widget/ImageView;

    return-object p0
.end method

.method private k()V
    .locals 3

    .line 636
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->h:Landroid/widget/ImageView;

    if-eqz v0, :cond_3

    .line 637
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->i:Lcom/tkay/expressad/mbbanner/view/TYBannerWebView;

    if-eqz v0, :cond_0

    const/16 v1, 0x8

    .line 638
    invoke-virtual {v0, v1}, Lcom/tkay/expressad/mbbanner/view/TYBannerWebView;->setVisibility(I)V

    .line 640
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->h:Landroid/widget/ImageView;

    invoke-virtual {v0}, Landroid/widget/ImageView;->getVisibility()I

    move-result v0

    if-eqz v0, :cond_1

    .line 641
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->h:Landroid/widget/ImageView;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setVisibility(I)V

    .line 644
    :cond_1
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->g:Lcom/tkay/expressad/out/TemplateBannerView;

    if-eqz v0, :cond_3

    .line 645
    new-instance v0, Landroid/widget/RelativeLayout$LayoutParams;

    const/4 v1, -0x1

    invoke-direct {v0, v1, v1}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    const/16 v1, 0xa

    .line 646
    invoke-virtual {v0, v1}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    .line 647
    iget-object v1, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->h:Landroid/widget/ImageView;

    sget-object v2, Landroid/widget/ImageView$ScaleType;->FIT_XY:Landroid/widget/ImageView$ScaleType;

    invoke-virtual {v1, v2}, Landroid/widget/ImageView;->setScaleType(Landroid/widget/ImageView$ScaleType;)V

    .line 648
    iget-object v1, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->h:Landroid/widget/ImageView;

    invoke-virtual {v1}, Landroid/widget/ImageView;->getParent()Landroid/view/ViewParent;

    move-result-object v1

    if-nez v1, :cond_2

    .line 649
    iget-object v1, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->g:Lcom/tkay/expressad/out/TemplateBannerView;

    iget-object v2, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->h:Landroid/widget/ImageView;

    invoke-virtual {v1, v2, v0}, Lcom/tkay/expressad/out/TemplateBannerView;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    :cond_2
    const/4 v0, 0x1

    .line 651
    invoke-direct {p0, v0}, Lcom/tkay/expressad/mbbanner/a/d/c;->d(Z)V

    :cond_3
    return-void
.end method

.method private l()V
    .locals 4

    .line 660
    iget-boolean v0, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->e:Z

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->j:Landroid/widget/ImageView;

    if-eqz v0, :cond_1

    .line 662
    invoke-virtual {v0}, Landroid/widget/ImageView;->getVisibility()I

    move-result v0

    if-eqz v0, :cond_0

    .line 663
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->j:Landroid/widget/ImageView;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setVisibility(I)V

    .line 664
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->j:Landroid/widget/ImageView;

    iget-object v1, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->B:Landroid/view/View$OnClickListener;

    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 667
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->j:Landroid/widget/ImageView;

    invoke-virtual {v0}, Landroid/widget/ImageView;->getParent()Landroid/view/ViewParent;

    move-result-object v0

    if-nez v0, :cond_1

    .line 668
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->g:Lcom/tkay/expressad/out/TemplateBannerView;

    if-eqz v0, :cond_1

    .line 669
    new-instance v0, Landroid/widget/RelativeLayout$LayoutParams;

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v1

    const/high16 v2, 0x41400000    # 12.0f

    invoke-static {v1, v2}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v1

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v3

    invoke-virtual {v3}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v3

    invoke-static {v3, v2}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v2

    invoke-direct {v0, v1, v2}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    const/16 v1, 0xb

    .line 670
    invoke-virtual {v0, v1}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    const/16 v1, 0xa

    .line 671
    invoke-virtual {v0, v1}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    .line 672
    iget-object v1, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->g:Lcom/tkay/expressad/out/TemplateBannerView;

    iget-object v2, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->j:Landroid/widget/ImageView;

    invoke-virtual {v1, v2, v0}, Lcom/tkay/expressad/out/TemplateBannerView;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    :cond_1
    return-void
.end method

.method static synthetic l(Lcom/tkay/expressad/mbbanner/a/d/c;)Z
    .locals 1

    const/4 v0, 0x1

    .line 69
    iput-boolean v0, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->m:Z

    return v0
.end method

.method private m()V
    .locals 2

    .line 682
    iget-boolean v0, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->e:Z

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->j:Landroid/widget/ImageView;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Landroid/widget/ImageView;->getVisibility()I

    move-result v0

    if-nez v0, :cond_0

    .line 683
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->j:Landroid/widget/ImageView;

    const/16 v1, 0x8

    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setVisibility(I)V

    .line 684
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->j:Landroid/widget/ImageView;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 685
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->g:Lcom/tkay/expressad/out/TemplateBannerView;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->j:Landroid/widget/ImageView;

    invoke-virtual {v0}, Landroid/widget/ImageView;->getParent()Landroid/view/ViewParent;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 686
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->g:Lcom/tkay/expressad/out/TemplateBannerView;

    iget-object v1, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->j:Landroid/widget/ImageView;

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/out/TemplateBannerView;->removeView(Landroid/view/View;)V

    :cond_0
    return-void
.end method

.method static synthetic m(Lcom/tkay/expressad/mbbanner/a/d/c;)V
    .locals 3

    .line 5636
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->h:Landroid/widget/ImageView;

    if-eqz v0, :cond_3

    .line 5637
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->i:Lcom/tkay/expressad/mbbanner/view/TYBannerWebView;

    if-eqz v0, :cond_0

    const/16 v1, 0x8

    .line 5638
    invoke-virtual {v0, v1}, Lcom/tkay/expressad/mbbanner/view/TYBannerWebView;->setVisibility(I)V

    .line 5640
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->h:Landroid/widget/ImageView;

    invoke-virtual {v0}, Landroid/widget/ImageView;->getVisibility()I

    move-result v0

    if-eqz v0, :cond_1

    .line 5641
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->h:Landroid/widget/ImageView;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setVisibility(I)V

    .line 5644
    :cond_1
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->g:Lcom/tkay/expressad/out/TemplateBannerView;

    if-eqz v0, :cond_3

    .line 5645
    new-instance v0, Landroid/widget/RelativeLayout$LayoutParams;

    const/4 v1, -0x1

    invoke-direct {v0, v1, v1}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    const/16 v1, 0xa

    .line 5646
    invoke-virtual {v0, v1}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    .line 5647
    iget-object v1, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->h:Landroid/widget/ImageView;

    sget-object v2, Landroid/widget/ImageView$ScaleType;->FIT_XY:Landroid/widget/ImageView$ScaleType;

    invoke-virtual {v1, v2}, Landroid/widget/ImageView;->setScaleType(Landroid/widget/ImageView$ScaleType;)V

    .line 5648
    iget-object v1, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->h:Landroid/widget/ImageView;

    invoke-virtual {v1}, Landroid/widget/ImageView;->getParent()Landroid/view/ViewParent;

    move-result-object v1

    if-nez v1, :cond_2

    .line 5649
    iget-object v1, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->g:Lcom/tkay/expressad/out/TemplateBannerView;

    iget-object v2, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->h:Landroid/widget/ImageView;

    invoke-virtual {v1, v2, v0}, Lcom/tkay/expressad/out/TemplateBannerView;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    :cond_2
    const/4 v0, 0x1

    .line 5651
    invoke-direct {p0, v0}, Lcom/tkay/expressad/mbbanner/a/d/c;->d(Z)V

    :cond_3
    return-void
.end method

.method private static n()V
    .locals 0

    return-void
.end method

.method static synthetic n(Lcom/tkay/expressad/mbbanner/a/d/c;)Z
    .locals 1

    const/4 v0, 0x1

    .line 69
    iput-boolean v0, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->o:Z

    return v0
.end method

.method static synthetic o(Lcom/tkay/expressad/mbbanner/a/d/c;)Lcom/tkay/expressad/out/TemplateBannerView;
    .locals 0

    .line 69
    iget-object p0, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->g:Lcom/tkay/expressad/out/TemplateBannerView;

    return-object p0
.end method

.method static synthetic p(Lcom/tkay/expressad/mbbanner/a/d/c;)Lcom/tkay/expressad/mbbanner/view/TYBannerWebView;
    .locals 0

    .line 69
    iget-object p0, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->i:Lcom/tkay/expressad/mbbanner/view/TYBannerWebView;

    return-object p0
.end method


# virtual methods
.method public final a()V
    .locals 2

    .line 695
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->d:Lcom/tkay/expressad/mbbanner/a/c/c;

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    .line 696
    iput-object v1, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->d:Lcom/tkay/expressad/mbbanner/a/c/c;

    .line 698
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->i:Lcom/tkay/expressad/mbbanner/view/TYBannerWebView;

    if-eqz v0, :cond_1

    .line 699
    invoke-virtual {v0, v1}, Lcom/tkay/expressad/mbbanner/view/TYBannerWebView;->setWebViewListener(Lcom/tkay/expressad/atsignalcommon/windvane/e;)V

    .line 701
    :cond_1
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->D:Lcom/tkay/expressad/atsignalcommon/a/b;

    if-eqz v0, :cond_2

    .line 702
    iput-object v1, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->D:Lcom/tkay/expressad/atsignalcommon/a/b;

    .line 704
    :cond_2
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->j:Landroid/widget/ImageView;

    if-eqz v0, :cond_3

    .line 705
    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 707
    :cond_3
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->h:Landroid/widget/ImageView;

    if-eqz v0, :cond_4

    .line 708
    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 710
    :cond_4
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->g:Lcom/tkay/expressad/out/TemplateBannerView;

    if-eqz v0, :cond_5

    .line 711
    invoke-virtual {v0}, Lcom/tkay/expressad/out/TemplateBannerView;->removeAllViews()V

    .line 713
    :cond_5
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->i:Lcom/tkay/expressad/mbbanner/view/TYBannerWebView;

    if-eqz v0, :cond_6

    .line 714
    invoke-virtual {v0}, Lcom/tkay/expressad/mbbanner/view/TYBannerWebView;->release()V

    .line 716
    :cond_6
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->w:Lcom/tkay/expressad/mbbanner/a/a/c;

    if-eqz v0, :cond_7

    .line 717
    invoke-virtual {v0}, Lcom/tkay/expressad/mbbanner/a/a/c;->a()V

    .line 719
    :cond_7
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->C:Lcom/tkay/expressad/mbbanner/a/c/a;

    if-eqz v0, :cond_8

    .line 720
    iput-object v1, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->C:Lcom/tkay/expressad/mbbanner/a/c/a;

    .line 722
    :cond_8
    invoke-static {}, Lcom/tkay/expressad/foundation/f/b;->a()Lcom/tkay/expressad/foundation/f/b;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->r:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/foundation/f/b;->c(Ljava/lang/String;)V

    return-void
.end method

.method public final a(IIII)V
    .locals 0

    if-ne p1, p3, :cond_0

    if-ne p2, p4, :cond_0

    return-void

    .line 957
    :cond_0
    iget-object p3, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->i:Lcom/tkay/expressad/mbbanner/view/TYBannerWebView;

    .line 4069
    :try_start_0
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;->getInstance()Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;

    move-result-object p4

    int-to-float p1, p1

    int-to-float p2, p2

    invoke-virtual {p4, p3, p1, p2}, Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;->fireSizeChangeEvent(Landroid/webkit/WebView;FF)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    return-void
.end method

.method public final a(Lcom/tkay/expressad/foundation/d/c;ZLjava/lang/String;)V
    .locals 3

    .line 811
    iget-boolean v0, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->q:Z

    if-nez v0, :cond_0

    return-void

    .line 814
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->a:Lcom/tkay/expressad/a/a;

    if-nez v0, :cond_1

    .line 815
    new-instance v0, Lcom/tkay/expressad/a/a;

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v1

    iget-object v2, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->r:Ljava/lang/String;

    invoke-direct {v0, v1, v2}, Lcom/tkay/expressad/a/a;-><init>(Landroid/content/Context;Ljava/lang/String;)V

    iput-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->a:Lcom/tkay/expressad/a/a;

    .line 817
    :cond_1
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->a:Lcom/tkay/expressad/a/a;

    new-instance v1, Lcom/tkay/expressad/mbbanner/a/d/c$11;

    invoke-direct {v1, p0}, Lcom/tkay/expressad/mbbanner/a/d/c$11;-><init>(Lcom/tkay/expressad/mbbanner/a/d/c;)V

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/a/a;->a(Lcom/tkay/expressad/out/j$c;)V

    .line 923
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->r:Ljava/lang/String;

    invoke-virtual {p1, v0}, Lcom/tkay/expressad/foundation/d/c;->l(Ljava/lang/String;)V

    .line 926
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->f:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->W()Z

    move-result v0

    if-nez v0, :cond_2

    .line 927
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->f:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->X()V

    .line 930
    :cond_2
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->d:Lcom/tkay/expressad/mbbanner/a/c/c;

    if-eqz v0, :cond_3

    .line 931
    invoke-interface {v0, p1}, Lcom/tkay/expressad/mbbanner/a/c/c;->a(Lcom/tkay/expressad/foundation/d/c;)V

    :cond_3
    if-eqz p2, :cond_4

    .line 933
    invoke-static {p3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    :cond_4
    return-void
.end method

.method public final a(Lcom/tkay/expressad/foundation/d/d;)V
    .locals 8

    const/4 v0, 0x0

    if-eqz p1, :cond_0

    .line 2374
    iget-object p1, p1, Lcom/tkay/expressad/foundation/d/d;->J:Ljava/util/ArrayList;

    .line 1425
    iput-object p1, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->t:Ljava/util/List;

    if-eqz p1, :cond_0

    .line 1426
    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result p1

    if-lez p1, :cond_0

    .line 1427
    iget-object p1, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->t:Ljava/util/List;

    invoke-interface {p1, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/tkay/expressad/foundation/d/c;

    goto :goto_0

    :cond_0
    const/4 p1, 0x0

    .line 258
    :goto_0
    iput-object p1, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->f:Lcom/tkay/expressad/foundation/d/c;

    if-nez p1, :cond_1

    const-string p1, "banner show failed because campain is exception"

    .line 260
    invoke-direct {p0, p1}, Lcom/tkay/expressad/mbbanner/a/d/c;->a(Ljava/lang/String;)V

    return-void

    .line 263
    :cond_1
    iget-object p1, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->x:Landroid/os/Handler;

    iget-object v1, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->y:Lcom/tkay/expressad/foundation/g/g/a;

    invoke-virtual {p1, v1}, Landroid/os/Handler;->removeCallbacks(Ljava/lang/Runnable;)V

    .line 2408
    iget-boolean p1, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->e:Z

    const/16 v1, 0x8

    if-eqz p1, :cond_2

    iget-object p1, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->j:Landroid/widget/ImageView;

    if-nez p1, :cond_2

    .line 2409
    new-instance p1, Landroid/widget/ImageView;

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v2

    invoke-direct {p1, v2}, Landroid/widget/ImageView;-><init>(Landroid/content/Context;)V

    iput-object p1, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->j:Landroid/widget/ImageView;

    .line 2410
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v2

    const-string v3, "tkay_banner_close"

    const-string v4, "drawable"

    invoke-static {v2, v3, v4}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v2

    invoke-virtual {p1, v2}, Landroid/widget/ImageView;->setBackgroundResource(I)V

    .line 2411
    iget-object p1, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->j:Landroid/widget/ImageView;

    invoke-virtual {p1, v1}, Landroid/widget/ImageView;->setVisibility(I)V

    .line 2412
    iget-object p1, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->j:Landroid/widget/ImageView;

    const-string v2, "closeButton"

    invoke-virtual {p1, v2}, Landroid/widget/ImageView;->setContentDescription(Ljava/lang/CharSequence;)V

    .line 265
    :cond_2
    iput-boolean v0, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->m:Z

    .line 266
    iput-boolean v0, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->n:Z

    .line 267
    iput-boolean v0, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->q:Z

    .line 269
    iget-object p1, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->f:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->q()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_3

    iget-object p1, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->f:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->p()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    .line 274
    :cond_3
    iget-object p1, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->x:Landroid/os/Handler;

    iget-object v2, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->y:Lcom/tkay/expressad/foundation/g/g/a;

    iget-wide v3, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->v:J

    invoke-virtual {p1, v2, v3, v4}, Landroid/os/Handler;->postDelayed(Ljava/lang/Runnable;J)Z

    .line 3289
    iget-object p1, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->f:Lcom/tkay/expressad/foundation/d/c;

    invoke-static {p1}, Lcom/tkay/expressad/mbbanner/a/d/c;->a(Lcom/tkay/expressad/foundation/d/c;)Ljava/lang/String;

    move-result-object v4

    .line 3290
    invoke-static {v4}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_a

    .line 3291
    iget-object p1, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->g:Lcom/tkay/expressad/out/TemplateBannerView;

    if-eqz p1, :cond_9

    .line 3292
    iget-object p1, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->i:Lcom/tkay/expressad/mbbanner/view/TYBannerWebView;

    if-nez p1, :cond_4

    .line 3293
    new-instance p1, Lcom/tkay/expressad/mbbanner/view/TYBannerWebView;

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v2

    invoke-direct {p1, v2}, Lcom/tkay/expressad/mbbanner/view/TYBannerWebView;-><init>(Landroid/content/Context;)V

    iput-object p1, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->i:Lcom/tkay/expressad/mbbanner/view/TYBannerWebView;

    .line 3294
    new-instance v2, Landroid/widget/RelativeLayout$LayoutParams;

    const/4 v3, -0x1

    invoke-direct {v2, v3, v3}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    invoke-virtual {p1, v2}, Lcom/tkay/expressad/mbbanner/view/TYBannerWebView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 3296
    iget-object p1, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->i:Lcom/tkay/expressad/mbbanner/view/TYBannerWebView;

    new-instance v2, Lcom/tkay/expressad/mbbanner/view/a;

    iget-object v3, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->r:Ljava/lang/String;

    iget-object v5, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->t:Ljava/util/List;

    iget-object v6, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->C:Lcom/tkay/expressad/mbbanner/a/c/a;

    invoke-direct {v2, v3, v5, v6}, Lcom/tkay/expressad/mbbanner/view/a;-><init>(Ljava/lang/String;Ljava/util/List;Lcom/tkay/expressad/mbbanner/a/c/a;)V

    invoke-virtual {p1, v2}, Lcom/tkay/expressad/mbbanner/view/TYBannerWebView;->setWebViewClient(Landroid/webkit/WebViewClient;)V

    .line 3298
    :cond_4
    iget-object p1, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->h:Landroid/widget/ImageView;

    if-eqz p1, :cond_5

    .line 3299
    invoke-virtual {p1, v1}, Landroid/widget/ImageView;->setVisibility(I)V

    .line 3301
    :cond_5
    iget-object p1, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->i:Lcom/tkay/expressad/mbbanner/view/TYBannerWebView;

    invoke-virtual {p1}, Lcom/tkay/expressad/mbbanner/view/TYBannerWebView;->getVisibility()I

    move-result p1

    if-eqz p1, :cond_6

    .line 3302
    iget-object p1, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->i:Lcom/tkay/expressad/mbbanner/view/TYBannerWebView;

    invoke-virtual {p1, v0}, Lcom/tkay/expressad/mbbanner/view/TYBannerWebView;->setVisibility(I)V

    .line 3304
    :cond_6
    iget-object p1, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->i:Lcom/tkay/expressad/mbbanner/view/TYBannerWebView;

    invoke-virtual {p1}, Lcom/tkay/expressad/mbbanner/view/TYBannerWebView;->getParent()Landroid/view/ViewParent;

    move-result-object p1

    if-nez p1, :cond_7

    .line 3305
    iget-object p1, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->g:Lcom/tkay/expressad/out/TemplateBannerView;

    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->i:Lcom/tkay/expressad/mbbanner/view/TYBannerWebView;

    invoke-virtual {p1, v0}, Lcom/tkay/expressad/out/TemplateBannerView;->addView(Landroid/view/View;)V

    .line 3306
    iget-object p1, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->f:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->H()Z

    move-result p1

    invoke-direct {p0, p1}, Lcom/tkay/expressad/mbbanner/a/d/c;->d(Z)V

    .line 3320
    :cond_7
    invoke-direct {p0}, Lcom/tkay/expressad/mbbanner/a/d/c;->l()V

    .line 3322
    new-instance p1, Lcom/tkay/expressad/mbbanner/a/a/c;

    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->g:Lcom/tkay/expressad/out/TemplateBannerView;

    invoke-virtual {v0}, Lcom/tkay/expressad/out/TemplateBannerView;->getContext()Landroid/content/Context;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->s:Ljava/lang/String;

    iget-object v2, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->r:Ljava/lang/String;

    invoke-direct {p1, v0, v1, v2}, Lcom/tkay/expressad/mbbanner/a/a/c;-><init>(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V

    iput-object p1, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->w:Lcom/tkay/expressad/mbbanner/a/a/c;

    .line 3323
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->t:Ljava/util/List;

    invoke-virtual {p1, v0}, Lcom/tkay/expressad/mbbanner/a/a/c;->a(Ljava/util/List;)V

    .line 3324
    iget-object p1, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->w:Lcom/tkay/expressad/mbbanner/a/a/c;

    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->C:Lcom/tkay/expressad/mbbanner/a/c/a;

    invoke-virtual {p1, v0}, Lcom/tkay/expressad/mbbanner/a/a/c;->a(Lcom/tkay/expressad/mbbanner/a/c/a;)V

    .line 3325
    iget-object p1, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->w:Lcom/tkay/expressad/mbbanner/a/a/c;

    iget v0, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->u:I

    invoke-virtual {p1, v0}, Lcom/tkay/expressad/mbbanner/a/a/c;->a(I)V

    .line 3326
    iget-object p1, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->i:Lcom/tkay/expressad/mbbanner/view/TYBannerWebView;

    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->D:Lcom/tkay/expressad/atsignalcommon/a/b;

    invoke-virtual {p1, v0}, Lcom/tkay/expressad/mbbanner/view/TYBannerWebView;->setWebViewListener(Lcom/tkay/expressad/atsignalcommon/windvane/e;)V

    .line 3327
    iget-object p1, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->i:Lcom/tkay/expressad/mbbanner/view/TYBannerWebView;

    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->w:Lcom/tkay/expressad/mbbanner/a/a/c;

    invoke-virtual {p1, v0}, Lcom/tkay/expressad/mbbanner/view/TYBannerWebView;->setObject(Ljava/lang/Object;)V

    const-string p1, "file"

    .line 3328
    invoke-virtual {v4, p1}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result p1

    if-nez p1, :cond_8

    .line 3329
    iget-object v2, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->i:Lcom/tkay/expressad/mbbanner/view/TYBannerWebView;

    iget-object p1, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->f:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->p()Ljava/lang/String;

    move-result-object v3

    const/4 v7, 0x0

    const-string v5, "text/html"

    const-string v6, "utf-8"

    invoke-virtual/range {v2 .. v7}, Lcom/tkay/expressad/mbbanner/view/TYBannerWebView;->loadDataWithBaseURL(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_1

    .line 3331
    :cond_8
    iget-object p1, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->i:Lcom/tkay/expressad/mbbanner/view/TYBannerWebView;

    invoke-virtual {p1, v4}, Lcom/tkay/expressad/mbbanner/view/TYBannerWebView;->loadUrl(Ljava/lang/String;)V

    goto :goto_1

    :cond_9
    const-string p1, "banner show failed because banner view is exception"

    .line 3335
    invoke-direct {p0, p1}, Lcom/tkay/expressad/mbbanner/a/d/c;->a(Ljava/lang/String;)V

    :goto_1
    const/4 v0, 0x1

    :cond_a
    if-nez v0, :cond_c

    .line 276
    iget-object p1, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->f:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->q()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_b

    iget-object p1, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->f:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->p()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    .line 279
    :cond_b
    invoke-direct {p0}, Lcom/tkay/expressad/mbbanner/a/d/c;->e()V

    :cond_c
    return-void
.end method

.method public final a(Lcom/tkay/expressad/out/c;)V
    .locals 0

    .line 230
    iput-object p1, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->b:Lcom/tkay/expressad/out/c;

    return-void
.end method

.method public final a(Z)V
    .locals 0

    .line 249
    iput-boolean p1, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->e:Z

    return-void
.end method

.method public final a(ZI)V
    .locals 1

    .line 234
    iput p2, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->u:I

    const/4 v0, 0x1

    if-eqz p2, :cond_0

    goto :goto_0

    .line 238
    :cond_0
    invoke-static {}, Lcom/tkay/expressad/d/b;->a()Lcom/tkay/expressad/d/b;

    .line 239
    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object p1

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/b/b;->e()Ljava/lang/String;

    move-result-object p1

    iget-object p2, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->r:Ljava/lang/String;

    invoke-static {p1, p2}, Lcom/tkay/expressad/d/b;->c(Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/expressad/d/c;

    move-result-object p1

    if-eqz p1, :cond_2

    .line 241
    invoke-virtual {p1}, Lcom/tkay/expressad/d/c;->d()I

    move-result p1

    if-ne p1, v0, :cond_1

    move p1, v0

    goto :goto_0

    :cond_1
    const/4 p1, 0x0

    :goto_0
    iput-boolean p1, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->e:Z

    :cond_2
    return-void
.end method

.method public final b(Z)V
    .locals 0

    .line 731
    iput-boolean p1, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->k:Z

    .line 732
    invoke-direct {p0}, Lcom/tkay/expressad/mbbanner/a/d/c;->h()V

    return-void
.end method

.method public final c(Z)V
    .locals 0

    .line 739
    iput-boolean p1, p0, Lcom/tkay/expressad/mbbanner/a/d/c;->l:Z

    .line 740
    invoke-direct {p0}, Lcom/tkay/expressad/mbbanner/a/d/c;->h()V

    return-void
.end method
