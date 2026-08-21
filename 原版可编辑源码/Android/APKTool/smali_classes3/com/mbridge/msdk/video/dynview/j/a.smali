.class public final Lcom/mbridge/msdk/video/dynview/j/a;
.super Ljava/lang/Object;
.source "DataEnergizeWrapper.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/mbridge/msdk/video/dynview/j/a$a;
    }
.end annotation


# static fields
.field private static j:Z


# instance fields
.field public a:Lcom/mbridge/msdk/video/dynview/d/a;

.field private b:Lcom/mbridge/msdk/video/dynview/i/c/b;

.field private c:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Landroid/graphics/Bitmap;",
            ">;"
        }
    .end annotation
.end field

.field private volatile d:Z

.field private e:Ljava/lang/String;

.field private f:Ljava/lang/String;

.field private g:Ljava/lang/String;

.field private h:Ljava/lang/String;

.field private volatile i:J

.field private k:Lcom/mbridge/msdk/video/dynview/i/c/a;

.field private l:Z

.field private m:I


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public constructor <init>()V
    .locals 2

    .line 72
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const-string v0, "#FFFFFFFF"

    .line 77
    iput-object v0, p0, Lcom/mbridge/msdk/video/dynview/j/a;->e:Ljava/lang/String;

    const-string v0, "#60000000"

    .line 78
    iput-object v0, p0, Lcom/mbridge/msdk/video/dynview/j/a;->f:Ljava/lang/String;

    const-string v0, "#FF5F5F5F"

    .line 79
    iput-object v0, p0, Lcom/mbridge/msdk/video/dynview/j/a;->g:Ljava/lang/String;

    const-string v0, "#90ECECEC"

    .line 80
    iput-object v0, p0, Lcom/mbridge/msdk/video/dynview/j/a;->h:Ljava/lang/String;

    const-wide/16 v0, 0x0

    .line 82
    iput-wide v0, p0, Lcom/mbridge/msdk/video/dynview/j/a;->i:J

    const/4 v0, 0x0

    .line 84
    iput-object v0, p0, Lcom/mbridge/msdk/video/dynview/j/a;->k:Lcom/mbridge/msdk/video/dynview/i/c/a;

    const/4 v0, 0x0

    .line 85
    iput-boolean v0, p0, Lcom/mbridge/msdk/video/dynview/j/a;->l:Z

    .line 86
    iput v0, p0, Lcom/mbridge/msdk/video/dynview/j/a;->m:I

    .line 87
    new-instance v0, Lcom/mbridge/msdk/video/dynview/j/a$1;

    invoke-direct {v0, p0}, Lcom/mbridge/msdk/video/dynview/j/a$1;-><init>(Lcom/mbridge/msdk/video/dynview/j/a;)V

    iput-object v0, p0, Lcom/mbridge/msdk/video/dynview/j/a;->a:Lcom/mbridge/msdk/video/dynview/d/a;

    return-void
.end method

.method static synthetic a(Lcom/mbridge/msdk/video/dynview/j/a;I)I
    .locals 0

    .line 72
    iput p1, p0, Lcom/mbridge/msdk/video/dynview/j/a;->m:I

    return p1
.end method

.method private a(Ljava/lang/String;)I
    .locals 2

    .line 724
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v0

    const-string v1, "id"

    invoke-static {v0, p1, v1}, Lcom/mbridge/msdk/foundation/tools/s;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result p1

    return p1
.end method

.method static synthetic a(Lcom/mbridge/msdk/video/dynview/j/a;J)J
    .locals 0

    .line 72
    iput-wide p1, p0, Lcom/mbridge/msdk/video/dynview/j/a;->i:J

    return-wide p1
.end method

.method private a()Landroid/graphics/Bitmap;
    .locals 3

    const/4 v0, 0x0

    .line 740
    :try_start_0
    sget-object v1, Landroid/graphics/Bitmap$Config;->ARGB_4444:Landroid/graphics/Bitmap$Config;

    const/4 v2, 0x1

    invoke-static {v2, v2, v1}, Landroid/graphics/Bitmap;->createBitmap(IILandroid/graphics/Bitmap$Config;)Landroid/graphics/Bitmap;

    move-result-object v0

    .line 741
    iget-object v1, p0, Lcom/mbridge/msdk/video/dynview/j/a;->h:Ljava/lang/String;

    invoke-static {v1}, Landroid/graphics/Color;->parseColor(Ljava/lang/String;)I

    move-result v1

    invoke-virtual {v0, v1}, Landroid/graphics/Bitmap;->eraseColor(I)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v1

    .line 743
    sget-boolean v2, Lcom/mbridge/msdk/MBridgeConstans;->DEBUG:Z

    if-eqz v2, :cond_0

    .line 744
    invoke-virtual {v1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_0
    :goto_0
    return-object v0
.end method

.method private a(Landroid/widget/ImageView;Ljava/lang/String;I)V
    .locals 2

    .line 591
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    return-void

    :cond_0
    if-nez p1, :cond_1

    return-void

    .line 597
    :cond_1
    invoke-virtual {p1}, Landroid/widget/ImageView;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/same/c/b;->a(Landroid/content/Context;)Lcom/mbridge/msdk/foundation/same/c/b;

    move-result-object v0

    new-instance v1, Lcom/mbridge/msdk/video/dynview/j/a$10;

    invoke-direct {v1, p0, p3, p1}, Lcom/mbridge/msdk/video/dynview/j/a$10;-><init>(Lcom/mbridge/msdk/video/dynview/j/a;ILandroid/widget/ImageView;)V

    invoke-virtual {v0, p2, v1}, Lcom/mbridge/msdk/foundation/same/c/b;->a(Ljava/lang/String;Lcom/mbridge/msdk/foundation/same/c/c;)V

    return-void
.end method

.method private a(Lcom/mbridge/msdk/video/dynview/c;Landroid/view/View;)V
    .locals 3

    .line 751
    invoke-static {}, Lcom/mbridge/msdk/video/dynview/g/a;->a()Lcom/mbridge/msdk/video/dynview/g/a$a;

    move-result-object v0

    .line 752
    invoke-virtual {p1}, Lcom/mbridge/msdk/video/dynview/c;->e()I

    move-result v1

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/video/dynview/g/a$a;->a(I)Lcom/mbridge/msdk/video/dynview/g/a$b;

    move-result-object v1

    const/4 v2, 0x1

    .line 753
    invoke-interface {v1, v2}, Lcom/mbridge/msdk/video/dynview/g/a$b;->a(Z)Lcom/mbridge/msdk/video/dynview/g/a$b;

    .line 754
    invoke-virtual {p1}, Lcom/mbridge/msdk/video/dynview/c;->e()I

    move-result v1

    const/4 v2, 0x2

    if-ne v1, v2, :cond_1

    .line 755
    invoke-virtual {p1}, Lcom/mbridge/msdk/video/dynview/c;->d()F

    move-result v1

    invoke-virtual {p1}, Lcom/mbridge/msdk/video/dynview/c;->c()F

    move-result v2

    cmpl-float v1, v1, v2

    if-lez v1, :cond_0

    .line 756
    invoke-virtual {p1}, Lcom/mbridge/msdk/video/dynview/c;->d()F

    move-result v1

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/video/dynview/g/a$a;->a(F)Lcom/mbridge/msdk/video/dynview/g/a$b;

    move-result-object v1

    .line 757
    invoke-virtual {p1}, Lcom/mbridge/msdk/video/dynview/c;->c()F

    move-result p1

    invoke-interface {v1, p1}, Lcom/mbridge/msdk/video/dynview/g/a$b;->b(F)Lcom/mbridge/msdk/video/dynview/g/a$b;

    goto :goto_0

    .line 759
    :cond_0
    invoke-virtual {p1}, Lcom/mbridge/msdk/video/dynview/c;->c()F

    move-result v1

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/video/dynview/g/a$a;->a(F)Lcom/mbridge/msdk/video/dynview/g/a$b;

    move-result-object v1

    .line 760
    invoke-virtual {p1}, Lcom/mbridge/msdk/video/dynview/c;->d()F

    move-result p1

    invoke-interface {v1, p1}, Lcom/mbridge/msdk/video/dynview/g/a$b;->b(F)Lcom/mbridge/msdk/video/dynview/g/a$b;

    goto :goto_0

    .line 763
    :cond_1
    invoke-virtual {p1}, Lcom/mbridge/msdk/video/dynview/c;->d()F

    move-result v1

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/video/dynview/g/a$a;->a(F)Lcom/mbridge/msdk/video/dynview/g/a$b;

    move-result-object v1

    .line 764
    invoke-virtual {p1}, Lcom/mbridge/msdk/video/dynview/c;->c()F

    move-result p1

    invoke-interface {v1, p1}, Lcom/mbridge/msdk/video/dynview/g/a$b;->b(F)Lcom/mbridge/msdk/video/dynview/g/a$b;

    .line 767
    :goto_0
    invoke-virtual {p2}, Landroid/view/View;->getBackground()Landroid/graphics/drawable/Drawable;

    move-result-object p1

    if-nez p1, :cond_2

    .line 768
    invoke-virtual {v0}, Lcom/mbridge/msdk/video/dynview/g/a$a;->a()Lcom/mbridge/msdk/video/dynview/g/a;

    move-result-object p1

    invoke-virtual {p2, p1}, Landroid/view/View;->setBackground(Landroid/graphics/drawable/Drawable;)V

    :cond_2
    return-void
.end method

.method static synthetic a(Lcom/mbridge/msdk/video/dynview/j/a;Lcom/mbridge/msdk/video/dynview/c;Landroid/view/View;)V
    .locals 2

    .line 3718
    iget-object v0, p0, Lcom/mbridge/msdk/video/dynview/j/a;->c:Ljava/util/Map;

    if-eqz v0, :cond_0

    invoke-interface {v0}, Ljava/util/Map;->size()I

    move-result v0

    const/4 v1, 0x1

    if-le v0, v1, :cond_0

    .line 3719
    new-instance v0, Lcom/mbridge/msdk/video/dynview/h/b;

    invoke-direct {v0}, Lcom/mbridge/msdk/video/dynview/h/b;-><init>()V

    iget-object p0, p0, Lcom/mbridge/msdk/video/dynview/j/a;->c:Ljava/util/Map;

    if-eqz p2, :cond_0

    .line 4034
    invoke-static {}, Lcom/mbridge/msdk/video/dynview/i/a/a;->a()Lcom/mbridge/msdk/video/dynview/i/a/a;

    move-result-object v0

    invoke-virtual {v0, p0, p1, p2}, Lcom/mbridge/msdk/video/dynview/i/a/a;->a(Ljava/util/Map;Lcom/mbridge/msdk/video/dynview/c;Landroid/view/View;)V

    :cond_0
    return-void
.end method

.method static synthetic a(Lcom/mbridge/msdk/video/dynview/j/a;Ljava/util/Map;)V
    .locals 2

    const-string v0, "choice_one_callback"

    if-eqz p1, :cond_0

    .line 3662
    :try_start_0
    invoke-interface {p1, v0}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_0

    .line 3663
    invoke-interface {p1, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    instance-of v1, v1, Lcom/mbridge/msdk/video/dynview/e/d;

    if-eqz v1, :cond_0

    .line 3664
    invoke-interface {p1, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/mbridge/msdk/video/dynview/e/d;

    invoke-interface {p1}, Lcom/mbridge/msdk/video/dynview/e/d;->a()V

    .line 3665
    invoke-direct {p0}, Lcom/mbridge/msdk/video/dynview/j/a;->b()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    .line 3669
    invoke-virtual {p0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p0

    const-string p1, "DataEnergizeWrapper"

    invoke-static {p1, p0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    :goto_0
    return-void
.end method

.method static synthetic a(Lcom/mbridge/msdk/video/dynview/j/a;Ljava/util/Map;Ljava/util/List;I)V
    .locals 8

    if-eqz p1, :cond_3

    if-eqz p2, :cond_3

    .line 2674
    invoke-interface {p2}, Ljava/util/List;->size()I

    move-result v0

    const/4 v1, 0x1

    if-le v0, v1, :cond_3

    const-string v0, "choice_one_callback"

    .line 2675
    invoke-interface {p1, v0}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {p1, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    instance-of v1, v1, Lcom/mbridge/msdk/video/dynview/e/d;

    if-eqz v1, :cond_1

    .line 2676
    invoke-interface {p1, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/mbridge/msdk/video/dynview/e/d;

    if-eqz p1, :cond_0

    .line 2679
    :try_start_0
    invoke-static {}, Lcom/mbridge/msdk/foundation/same/f/b;->b()Ljava/util/concurrent/ThreadPoolExecutor;

    move-result-object v0

    new-instance v7, Lcom/mbridge/msdk/video/dynview/j/a$a;

    iget-wide v4, p0, Lcom/mbridge/msdk/video/dynview/j/a;->i:J

    const/4 v6, 0x0

    move-object v1, v7

    move-object v2, p2

    move v3, p3

    invoke-direct/range {v1 .. v6}, Lcom/mbridge/msdk/video/dynview/j/a$a;-><init>(Ljava/util/List;IJI)V

    invoke-virtual {v0, v7}, Ljava/util/concurrent/ThreadPoolExecutor;->execute(Ljava/lang/Runnable;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 2683
    :catch_0
    invoke-interface {p2, p3}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p2

    check-cast p2, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-interface {p1, p2}, Lcom/mbridge/msdk/video/dynview/e/d;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    .line 2685
    :cond_0
    invoke-direct {p0}, Lcom/mbridge/msdk/video/dynview/j/a;->b()V

    goto :goto_0

    :cond_1
    const-string v0, "order_view_callback"

    .line 2688
    invoke-interface {p1, v0}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_3

    invoke-interface {p1, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    instance-of v1, v1, Lcom/mbridge/msdk/video/dynview/e/c;

    if-eqz v1, :cond_3

    .line 2689
    invoke-interface {p1, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/mbridge/msdk/video/dynview/e/c;

    if-eqz p1, :cond_2

    .line 2692
    :try_start_1
    invoke-static {}, Lcom/mbridge/msdk/foundation/same/f/b;->b()Ljava/util/concurrent/ThreadPoolExecutor;

    move-result-object v0

    new-instance v7, Lcom/mbridge/msdk/video/dynview/j/a$a;

    iget-wide v4, p0, Lcom/mbridge/msdk/video/dynview/j/a;->i:J

    const/4 v6, 0x0

    move-object v1, v7

    move-object v2, p2

    move v3, p3

    invoke-direct/range {v1 .. v6}, Lcom/mbridge/msdk/video/dynview/j/a$a;-><init>(Ljava/util/List;IJI)V

    invoke-virtual {v0, v7}, Ljava/util/concurrent/ThreadPoolExecutor;->execute(Ljava/lang/Runnable;)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    .line 2696
    :catch_1
    invoke-interface {p2, p3}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p2

    check-cast p2, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-interface {p1, p2, p3}, Lcom/mbridge/msdk/video/dynview/e/c;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;I)V

    .line 2698
    :cond_2
    invoke-direct {p0}, Lcom/mbridge/msdk/video/dynview/j/a;->b()V

    :cond_3
    :goto_0
    return-void
.end method

.method private a(Ljava/lang/String;Landroid/widget/ImageView;)V
    .locals 1

    .line 581
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    return-void

    :cond_0
    if-nez p2, :cond_1

    return-void

    :cond_1
    const/4 v0, -0x1

    .line 587
    invoke-direct {p0, p2, p1, v0}, Lcom/mbridge/msdk/video/dynview/j/a;->a(Landroid/widget/ImageView;Ljava/lang/String;I)V

    return-void
.end method

.method private a(Ljava/lang/String;Landroid/widget/ImageView;Lcom/mbridge/msdk/video/dynview/c;Landroid/view/View;)V
    .locals 8

    .line 631
    invoke-virtual {p2}, Landroid/widget/ImageView;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/same/c/b;->a(Landroid/content/Context;)Lcom/mbridge/msdk/foundation/same/c/b;

    move-result-object v0

    new-instance v7, Lcom/mbridge/msdk/video/dynview/j/a$2;

    move-object v1, v7

    move-object v2, p0

    move-object v3, p2

    move-object v4, p1

    move-object v5, p3

    move-object v6, p4

    invoke-direct/range {v1 .. v6}, Lcom/mbridge/msdk/video/dynview/j/a$2;-><init>(Lcom/mbridge/msdk/video/dynview/j/a;Landroid/widget/ImageView;Ljava/lang/String;Lcom/mbridge/msdk/video/dynview/c;Landroid/view/View;)V

    invoke-virtual {v0, p1, v7}, Lcom/mbridge/msdk/foundation/same/c/b;->a(Ljava/lang/String;Lcom/mbridge/msdk/foundation/same/c/c;)V

    .line 649
    :try_start_0
    invoke-direct {p0}, Lcom/mbridge/msdk/video/dynview/j/a;->a()Landroid/graphics/Bitmap;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 650
    invoke-virtual {p1}, Landroid/graphics/Bitmap;->isRecycled()Z

    move-result p1

    if-nez p1, :cond_0

    .line 651
    invoke-direct {p0, p3, p4}, Lcom/mbridge/msdk/video/dynview/j/a;->a(Lcom/mbridge/msdk/video/dynview/c;Landroid/view/View;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 654
    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p1

    const-string p2, "DataEnergizeWrapper"

    invoke-static {p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    :goto_0
    return-void
.end method

.method static synthetic a(Lcom/mbridge/msdk/video/dynview/j/a;)Z
    .locals 0

    .line 72
    iget-boolean p0, p0, Lcom/mbridge/msdk/video/dynview/j/a;->l:Z

    return p0
.end method

.method static synthetic a(Lcom/mbridge/msdk/video/dynview/j/a;Z)Z
    .locals 0

    .line 72
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/dynview/j/a;->l:Z

    return p1
.end method

.method private b(Ljava/lang/String;)I
    .locals 1

    .line 728
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 729
    invoke-virtual {p1}, Ljava/lang/String;->hashCode()I

    move-result p1

    return p1

    :cond_0
    const/4 p1, -0x1

    return p1
.end method

.method static synthetic b(Lcom/mbridge/msdk/video/dynview/j/a;)Lcom/mbridge/msdk/video/dynview/i/c/b;
    .locals 0

    .line 72
    iget-object p0, p0, Lcom/mbridge/msdk/video/dynview/j/a;->b:Lcom/mbridge/msdk/video/dynview/i/c/b;

    return-object p0
.end method

.method private b()V
    .locals 3

    .line 773
    invoke-static {}, Lcom/mbridge/msdk/video/dynview/i/a/a;->a()Lcom/mbridge/msdk/video/dynview/i/a/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/video/dynview/i/a/a;->b()V

    .line 774
    iget-object v0, p0, Lcom/mbridge/msdk/video/dynview/j/a;->b:Lcom/mbridge/msdk/video/dynview/i/c/b;

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    .line 775
    invoke-virtual {v0}, Lcom/mbridge/msdk/video/dynview/i/c/b;->b()V

    .line 776
    iput-object v1, p0, Lcom/mbridge/msdk/video/dynview/j/a;->b:Lcom/mbridge/msdk/video/dynview/i/c/b;

    .line 778
    :cond_0
    invoke-static {}, Lcom/mbridge/msdk/video/dynview/b/a;->a()Lcom/mbridge/msdk/video/dynview/b/a;

    move-result-object v0

    iput-object v1, v0, Lcom/mbridge/msdk/video/dynview/b/a;->a:Lcom/mbridge/msdk/video/dynview/d/a;

    .line 780
    iget-object v0, p0, Lcom/mbridge/msdk/video/dynview/j/a;->a:Lcom/mbridge/msdk/video/dynview/d/a;

    if-eqz v0, :cond_1

    .line 781
    iput-object v1, p0, Lcom/mbridge/msdk/video/dynview/j/a;->a:Lcom/mbridge/msdk/video/dynview/d/a;

    .line 783
    :cond_1
    iget-object v0, p0, Lcom/mbridge/msdk/video/dynview/j/a;->c:Ljava/util/Map;

    if-eqz v0, :cond_4

    .line 784
    invoke-interface {v0}, Ljava/util/Map;->entrySet()Ljava/util/Set;

    move-result-object v0

    if-eqz v0, :cond_3

    .line 786
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/dynview/j/a;->c:Ljava/util/Map;

    invoke-interface {v0}, Ljava/util/Map;->entrySet()Ljava/util/Set;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v0

    .line 788
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_3

    .line 789
    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/util/Map$Entry;

    if-eqz v1, :cond_2

    .line 791
    invoke-interface {v1}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v2

    if-eqz v2, :cond_2

    invoke-interface {v1}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Landroid/graphics/Bitmap;

    invoke-virtual {v2}, Landroid/graphics/Bitmap;->isRecycled()Z

    move-result v2

    if-nez v2, :cond_2

    .line 792
    invoke-interface {v1}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Landroid/graphics/Bitmap;

    invoke-virtual {v1}, Landroid/graphics/Bitmap;->recycle()V

    .line 795
    :cond_2
    invoke-interface {v0}, Ljava/util/Iterator;->remove()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 798
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 801
    :cond_3
    iget-object v0, p0, Lcom/mbridge/msdk/video/dynview/j/a;->c:Ljava/util/Map;

    invoke-interface {v0}, Ljava/util/Map;->clear()V

    :cond_4
    return-void
.end method

.method static synthetic b(Lcom/mbridge/msdk/video/dynview/j/a;Ljava/util/Map;)V
    .locals 2

    const-string v0, "order_view_callback"

    if-eqz p1, :cond_0

    .line 3706
    :try_start_0
    invoke-interface {p1, v0}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_0

    .line 3707
    invoke-interface {p1, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    instance-of v1, v1, Lcom/mbridge/msdk/video/dynview/e/c;

    if-eqz v1, :cond_0

    .line 3708
    invoke-interface {p1, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/mbridge/msdk/video/dynview/e/c;

    invoke-interface {p1}, Lcom/mbridge/msdk/video/dynview/e/c;->a()V

    .line 3709
    invoke-direct {p0}, Lcom/mbridge/msdk/video/dynview/j/a;->b()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    .line 3713
    invoke-virtual {p0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p0

    const-string p1, "DataEnergizeWrapper"

    invoke-static {p1, p0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    :goto_0
    return-void
.end method

.method static synthetic b(Lcom/mbridge/msdk/video/dynview/j/a;Z)Z
    .locals 0

    .line 72
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/dynview/j/a;->d:Z

    return p1
.end method

.method static synthetic c(Lcom/mbridge/msdk/video/dynview/j/a;)I
    .locals 0

    .line 72
    iget p0, p0, Lcom/mbridge/msdk/video/dynview/j/a;->m:I

    return p0
.end method

.method static synthetic d(Lcom/mbridge/msdk/video/dynview/j/a;)Lcom/mbridge/msdk/video/dynview/i/c/a;
    .locals 0

    .line 72
    iget-object p0, p0, Lcom/mbridge/msdk/video/dynview/j/a;->k:Lcom/mbridge/msdk/video/dynview/i/c/a;

    return-object p0
.end method

.method static synthetic e(Lcom/mbridge/msdk/video/dynview/j/a;)Z
    .locals 0

    .line 72
    iget-boolean p0, p0, Lcom/mbridge/msdk/video/dynview/j/a;->d:Z

    return p0
.end method

.method static synthetic f(Lcom/mbridge/msdk/video/dynview/j/a;)J
    .locals 2

    .line 72
    iget-wide v0, p0, Lcom/mbridge/msdk/video/dynview/j/a;->i:J

    return-wide v0
.end method

.method static synthetic g(Lcom/mbridge/msdk/video/dynview/j/a;)Ljava/lang/String;
    .locals 0

    .line 72
    iget-object p0, p0, Lcom/mbridge/msdk/video/dynview/j/a;->g:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic h(Lcom/mbridge/msdk/video/dynview/j/a;)Ljava/util/Map;
    .locals 0

    .line 72
    iget-object p0, p0, Lcom/mbridge/msdk/video/dynview/j/a;->c:Ljava/util/Map;

    return-object p0
.end method


# virtual methods
.method public final a(Lcom/mbridge/msdk/video/dynview/c;Landroid/view/View;Lcom/mbridge/msdk/video/dynview/e/e;)V
    .locals 1

    if-nez p3, :cond_0

    return-void

    :cond_0
    if-nez p1, :cond_1

    .line 419
    sget-object p1, Lcom/mbridge/msdk/video/dynview/c/a;->a:Lcom/mbridge/msdk/video/dynview/c/a;

    invoke-interface {p3, p1}, Lcom/mbridge/msdk/video/dynview/e/e;->a(Lcom/mbridge/msdk/video/dynview/c/a;)V

    return-void

    :cond_1
    :try_start_0
    const-string p1, "mbridge_iv_adbanner_bg"

    .line 423
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/video/dynview/j/a;->a(Ljava/lang/String;)I

    move-result p1

    invoke-virtual {p2, p1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object p1

    check-cast p1, Landroid/widget/ImageView;

    if-eqz p1, :cond_2

    .line 425
    iget-object v0, p0, Lcom/mbridge/msdk/video/dynview/j/a;->h:Ljava/lang/String;

    invoke-static {v0}, Landroid/graphics/Color;->parseColor(Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p1, v0}, Landroid/widget/ImageView;->setBackgroundColor(I)V

    :cond_2
    const-string p1, "mbridge_iv_adbanner"

    .line 427
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/video/dynview/j/a;->a(Ljava/lang/String;)I

    move-result p1

    invoke-virtual {p2, p1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object p1

    check-cast p1, Landroid/widget/ImageView;

    if-eqz p1, :cond_3

    .line 429
    iget-object v0, p0, Lcom/mbridge/msdk/video/dynview/j/a;->h:Ljava/lang/String;

    invoke-static {v0}, Landroid/graphics/Color;->parseColor(Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p1, v0}, Landroid/widget/ImageView;->setBackgroundColor(I)V

    .line 431
    :cond_3
    new-instance p1, Ljava/util/ArrayList;

    invoke-direct {p1}, Ljava/util/ArrayList;-><init>()V

    invoke-interface {p3, p2, p1}, Lcom/mbridge/msdk/video/dynview/e/e;->a(Landroid/view/View;Ljava/util/List;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 433
    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p1

    const-string p2, "DataEnergizeWrapper"

    invoke-static {p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 434
    sget-object p1, Lcom/mbridge/msdk/video/dynview/c/a;->a:Lcom/mbridge/msdk/video/dynview/c/a;

    invoke-interface {p3, p1}, Lcom/mbridge/msdk/video/dynview/e/e;->a(Lcom/mbridge/msdk/video/dynview/c/a;)V

    :goto_0
    return-void
.end method

.method public final a(Lcom/mbridge/msdk/video/dynview/c;Landroid/view/View;Ljava/util/Map;Lcom/mbridge/msdk/video/dynview/e/e;)V
    .locals 31

    move-object/from16 v0, p0

    move-object/from16 v1, p1

    move-object/from16 v2, p2

    move-object/from16 v3, p3

    move-object/from16 v4, p4

    .line 111
    iget-object v5, v0, Lcom/mbridge/msdk/video/dynview/j/a;->c:Ljava/util/Map;

    if-nez v5, :cond_0

    .line 112
    new-instance v5, Ljava/util/HashMap;

    invoke-direct {v5}, Ljava/util/HashMap;-><init>()V

    iput-object v5, v0, Lcom/mbridge/msdk/video/dynview/j/a;->c:Ljava/util/Map;

    .line 114
    :cond_0
    invoke-virtual/range {p1 .. p1}, Lcom/mbridge/msdk/video/dynview/c;->g()Ljava/util/List;

    move-result-object v5

    if-nez v2, :cond_1

    .line 116
    sget-object v1, Lcom/mbridge/msdk/video/dynview/c/a;->f:Lcom/mbridge/msdk/video/dynview/c/a;

    invoke-interface {v4, v1}, Lcom/mbridge/msdk/video/dynview/e/e;->a(Lcom/mbridge/msdk/video/dynview/c/a;)V

    return-void

    .line 119
    :cond_1
    invoke-virtual/range {p2 .. p2}, Landroid/view/View;->getContext()Landroid/content/Context;

    move-result-object v6

    if-nez v6, :cond_2

    .line 121
    sget-object v1, Lcom/mbridge/msdk/video/dynview/c/a;->b:Lcom/mbridge/msdk/video/dynview/c/a;

    invoke-interface {v4, v1}, Lcom/mbridge/msdk/video/dynview/e/e;->a(Lcom/mbridge/msdk/video/dynview/c/a;)V

    return-void

    :cond_2
    const/4 v7, 0x1

    const/4 v9, 0x0

    if-eqz v5, :cond_3

    .line 125
    invoke-interface {v5}, Ljava/util/List;->size()I

    move-result v10

    if-le v10, v7, :cond_3

    .line 126
    invoke-interface {v5, v9}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v10

    check-cast v10, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    .line 127
    invoke-interface {v5, v7}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v11

    check-cast v11, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    goto :goto_0

    :cond_3
    const/4 v10, 0x0

    const/4 v11, 0x0

    :goto_0
    if-nez v10, :cond_4

    if-eqz v4, :cond_4

    .line 130
    sget-object v1, Lcom/mbridge/msdk/video/dynview/c/a;->d:Lcom/mbridge/msdk/video/dynview/c/a;

    invoke-interface {v4, v1}, Lcom/mbridge/msdk/video/dynview/e/e;->a(Lcom/mbridge/msdk/video/dynview/c/a;)V

    return-void

    :cond_4
    if-nez v11, :cond_5

    if-eqz v4, :cond_5

    .line 134
    sget-object v1, Lcom/mbridge/msdk/video/dynview/c/a;->d:Lcom/mbridge/msdk/video/dynview/c/a;

    invoke-interface {v4, v1}, Lcom/mbridge/msdk/video/dynview/e/e;->a(Lcom/mbridge/msdk/video/dynview/c/a;)V

    return-void

    :cond_5
    const-string v12, "is_dy_success"

    if-eqz v3, :cond_6

    .line 150
    invoke-interface {v3, v12}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v13

    if-eqz v13, :cond_6

    .line 151
    invoke-interface {v3, v12}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v13

    check-cast v13, Ljava/lang/Boolean;

    invoke-virtual {v13}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v13

    sput-boolean v13, Lcom/mbridge/msdk/video/dynview/j/a;->j:Z

    .line 153
    :cond_6
    sget-boolean v13, Lcom/mbridge/msdk/video/dynview/j/a;->j:Z

    const-string v14, "mbridge_reward_choice_one_like_iv"

    const-string v15, "mbridge_bottom_title_tv"

    const-string v8, "mbridge_bottom_icon_iv"

    const-string v9, "mbridge_bottom_iv"

    const-string v7, "mbridge_bottom_ration"

    const-string v4, "mbridge_bottom_item_rl"

    move-object/from16 v16, v6

    const-string v6, "mbridge_top_title_tv"

    move-object/from16 v17, v12

    const-string v12, "mbridge_top_icon_iv"

    move-object/from16 v18, v11

    const-string v11, "mbridge_top_ration"

    const-string v1, "mbridge_top_iv"

    move-object/from16 v19, v10

    const-string v10, "mbridge_top_item_rl"

    if-eqz v13, :cond_7

    .line 154
    invoke-direct {v0, v10}, Lcom/mbridge/msdk/video/dynview/j/a;->b(Ljava/lang/String;)I

    move-result v10

    invoke-virtual {v2, v10}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v10

    check-cast v10, Landroid/widget/RelativeLayout;

    .line 155
    invoke-direct {v0, v1}, Lcom/mbridge/msdk/video/dynview/j/a;->b(Ljava/lang/String;)I

    move-result v1

    invoke-virtual {v2, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBridgeImageView;

    .line 156
    invoke-direct {v0, v11}, Lcom/mbridge/msdk/video/dynview/j/a;->b(Ljava/lang/String;)I

    move-result v11

    invoke-virtual {v2, v11}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v11

    check-cast v11, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBRotationView;

    .line 157
    invoke-direct {v0, v12}, Lcom/mbridge/msdk/video/dynview/j/a;->b(Ljava/lang/String;)I

    move-result v12

    invoke-virtual {v2, v12}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v12

    check-cast v12, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBCusRoundImageView;

    .line 158
    invoke-direct {v0, v6}, Lcom/mbridge/msdk/video/dynview/j/a;->b(Ljava/lang/String;)I

    move-result v6

    invoke-virtual {v2, v6}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v6

    check-cast v6, Landroid/widget/TextView;

    .line 159
    invoke-direct {v0, v4}, Lcom/mbridge/msdk/video/dynview/j/a;->b(Ljava/lang/String;)I

    move-result v4

    invoke-virtual {v2, v4}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v4

    check-cast v4, Landroid/widget/RelativeLayout;

    .line 160
    invoke-direct {v0, v7}, Lcom/mbridge/msdk/video/dynview/j/a;->b(Ljava/lang/String;)I

    move-result v7

    invoke-virtual {v2, v7}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v7

    check-cast v7, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBRotationView;

    .line 161
    invoke-direct {v0, v9}, Lcom/mbridge/msdk/video/dynview/j/a;->b(Ljava/lang/String;)I

    move-result v9

    invoke-virtual {v2, v9}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v9

    check-cast v9, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBridgeImageView;

    .line 162
    invoke-direct {v0, v8}, Lcom/mbridge/msdk/video/dynview/j/a;->b(Ljava/lang/String;)I

    move-result v8

    invoke-virtual {v2, v8}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v8

    check-cast v8, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBCusRoundImageView;

    .line 163
    invoke-direct {v0, v15}, Lcom/mbridge/msdk/video/dynview/j/a;->b(Ljava/lang/String;)I

    move-result v13

    invoke-virtual {v2, v13}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v13

    check-cast v13, Landroid/widget/TextView;

    .line 164
    invoke-direct {v0, v14}, Lcom/mbridge/msdk/video/dynview/j/a;->b(Ljava/lang/String;)I

    move-result v14

    invoke-virtual {v2, v14}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v14

    check-cast v14, Landroid/widget/ImageView;

    move-object v15, v13

    move-object/from16 v27, v14

    const/4 v13, 0x0

    move-object v14, v12

    move-object v12, v11

    move-object v11, v10

    move-object v10, v9

    move-object v9, v8

    const/4 v8, 0x0

    goto/16 :goto_1

    .line 166
    :cond_7
    invoke-direct {v0, v10}, Lcom/mbridge/msdk/video/dynview/j/a;->a(Ljava/lang/String;)I

    move-result v10

    invoke-virtual {v2, v10}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v10

    check-cast v10, Landroid/widget/RelativeLayout;

    .line 167
    invoke-direct {v0, v1}, Lcom/mbridge/msdk/video/dynview/j/a;->a(Ljava/lang/String;)I

    move-result v1

    invoke-virtual {v2, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBridgeImageView;

    .line 168
    invoke-direct {v0, v11}, Lcom/mbridge/msdk/video/dynview/j/a;->a(Ljava/lang/String;)I

    move-result v11

    invoke-virtual {v2, v11}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v11

    check-cast v11, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBRotationView;

    .line 169
    invoke-direct {v0, v12}, Lcom/mbridge/msdk/video/dynview/j/a;->a(Ljava/lang/String;)I

    move-result v12

    invoke-virtual {v2, v12}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v12

    check-cast v12, Lcom/mbridge/msdk/videocommon/view/RoundImageView;

    .line 170
    invoke-direct {v0, v6}, Lcom/mbridge/msdk/video/dynview/j/a;->a(Ljava/lang/String;)I

    move-result v6

    invoke-virtual {v2, v6}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v6

    check-cast v6, Landroid/widget/TextView;

    .line 171
    invoke-direct {v0, v4}, Lcom/mbridge/msdk/video/dynview/j/a;->a(Ljava/lang/String;)I

    move-result v4

    invoke-virtual {v2, v4}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v4

    check-cast v4, Landroid/widget/RelativeLayout;

    .line 172
    invoke-direct {v0, v7}, Lcom/mbridge/msdk/video/dynview/j/a;->a(Ljava/lang/String;)I

    move-result v7

    invoke-virtual {v2, v7}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v7

    check-cast v7, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBRotationView;

    .line 173
    invoke-direct {v0, v9}, Lcom/mbridge/msdk/video/dynview/j/a;->a(Ljava/lang/String;)I

    move-result v9

    invoke-virtual {v2, v9}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v9

    check-cast v9, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBridgeImageView;

    .line 174
    invoke-direct {v0, v8}, Lcom/mbridge/msdk/video/dynview/j/a;->a(Ljava/lang/String;)I

    move-result v8

    invoke-virtual {v2, v8}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v8

    check-cast v8, Lcom/mbridge/msdk/videocommon/view/RoundImageView;

    .line 175
    invoke-direct {v0, v15}, Lcom/mbridge/msdk/video/dynview/j/a;->a(Ljava/lang/String;)I

    move-result v13

    invoke-virtual {v2, v13}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v13

    check-cast v13, Landroid/widget/TextView;

    .line 176
    invoke-direct {v0, v14}, Lcom/mbridge/msdk/video/dynview/j/a;->a(Ljava/lang/String;)I

    move-result v14

    invoke-virtual {v2, v14}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v14

    check-cast v14, Landroid/widget/ImageView;

    move-object v15, v13

    move-object/from16 v27, v14

    const/4 v14, 0x0

    move-object v13, v12

    move-object v12, v11

    move-object v11, v10

    move-object v10, v9

    const/4 v9, 0x0

    :goto_1
    move-object/from16 v28, v15

    if-eqz v11, :cond_8

    .line 180
    new-instance v15, Lcom/mbridge/msdk/video/dynview/j/a$3;

    invoke-direct {v15, v0, v3, v5}, Lcom/mbridge/msdk/video/dynview/j/a$3;-><init>(Lcom/mbridge/msdk/video/dynview/j/a;Ljava/util/Map;Ljava/util/List;)V

    invoke-virtual {v11, v15}, Landroid/widget/RelativeLayout;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    :cond_8
    if-eqz v1, :cond_b

    const/16 v21, 0x14

    const/16 v22, 0x14

    const/16 v23, 0x0

    const/16 v24, 0x0

    const/16 v25, 0xa

    const/high16 v26, -0x1000000

    move-object/from16 v20, v1

    .line 193
    invoke-virtual/range {v20 .. v26}, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBridgeImageView;->setCustomBorder(IIIIII)V

    .line 194
    invoke-virtual/range {v19 .. v19}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getImageUrl()Ljava/lang/String;

    move-result-object v15

    move-object/from16 v11, p1

    invoke-direct {v0, v15, v1, v11, v2}, Lcom/mbridge/msdk/video/dynview/j/a;->a(Ljava/lang/String;Landroid/widget/ImageView;Lcom/mbridge/msdk/video/dynview/c;Landroid/view/View;)V

    if-eqz v12, :cond_c

    .line 196
    invoke-virtual/range {v19 .. v19}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getCanStart2C1Anim()Z

    move-result v1

    if-eqz v1, :cond_a

    .line 197
    invoke-virtual/range {v19 .. v19}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getIconUrl()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_9

    .line 198
    new-instance v1, Landroid/widget/ImageView;

    invoke-virtual/range {p1 .. p1}, Lcom/mbridge/msdk/video/dynview/c;->a()Landroid/content/Context;

    move-result-object v15

    invoke-direct {v1, v15}, Landroid/widget/ImageView;-><init>(Landroid/content/Context;)V

    .line 199
    new-instance v15, Landroid/widget/FrameLayout$LayoutParams;

    move-object/from16 v29, v9

    invoke-virtual/range {p1 .. p1}, Lcom/mbridge/msdk/video/dynview/c;->a()Landroid/content/Context;

    move-result-object v9

    move-object/from16 v30, v8

    const/high16 v8, 0x43480000    # 200.0f

    invoke-static {v9, v8}, Lcom/mbridge/msdk/foundation/tools/ae;->b(Landroid/content/Context;F)I

    move-result v9

    const/4 v8, -0x1

    invoke-direct {v15, v8, v9}, Landroid/widget/FrameLayout$LayoutParams;-><init>(II)V

    .line 200
    invoke-virtual {v1, v15}, Landroid/widget/ImageView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 201
    sget-object v8, Landroid/widget/ImageView$ScaleType;->CENTER_CROP:Landroid/widget/ImageView$ScaleType;

    invoke-virtual {v1, v8}, Landroid/widget/ImageView;->setScaleType(Landroid/widget/ImageView$ScaleType;)V

    .line 202
    invoke-virtual {v12, v1}, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBRotationView;->addView(Landroid/view/View;)V

    .line 203
    invoke-virtual/range {v19 .. v19}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getIconUrl()Ljava/lang/String;

    move-result-object v8

    invoke-direct {v0, v8, v1}, Lcom/mbridge/msdk/video/dynview/j/a;->a(Ljava/lang/String;Landroid/widget/ImageView;)V

    const v1, 0x3ee66666    # 0.45f

    .line 205
    invoke-virtual {v12, v1}, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBRotationView;->setWidthRatio(F)V

    const v1, 0x3f666666    # 0.9f

    .line 206
    invoke-virtual {v12, v1}, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBRotationView;->setHeightRatio(F)V

    const/4 v1, 0x1

    .line 207
    invoke-virtual {v12, v1}, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBRotationView;->setAutoscroll(Z)V

    goto :goto_2

    :cond_9
    move-object/from16 v30, v8

    move-object/from16 v29, v9

    const/high16 v1, 0x3f800000    # 1.0f

    .line 209
    invoke-virtual {v12, v1}, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBRotationView;->setWidthRatio(F)V

    .line 210
    invoke-virtual {v12, v1}, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBRotationView;->setHeightRatio(F)V

    const/4 v8, 0x0

    .line 211
    invoke-virtual {v12, v8}, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBRotationView;->setAutoscroll(Z)V

    goto :goto_3

    :cond_a
    move-object/from16 v30, v8

    move-object/from16 v29, v9

    const/high16 v1, 0x3f800000    # 1.0f

    const/4 v8, 0x0

    .line 214
    invoke-virtual {v12, v1}, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBRotationView;->setWidthRatio(F)V

    .line 215
    invoke-virtual {v12, v1}, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBRotationView;->setHeightRatio(F)V

    .line 216
    invoke-virtual {v12, v8}, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBRotationView;->setAutoscroll(Z)V

    goto :goto_3

    :cond_b
    move-object/from16 v11, p1

    :cond_c
    move-object/from16 v30, v8

    move-object/from16 v29, v9

    :goto_2
    const/4 v8, 0x0

    :goto_3
    if-eqz v13, :cond_d

    .line 221
    invoke-virtual {v13, v8}, Lcom/mbridge/msdk/videocommon/view/RoundImageView;->setType(I)V

    .line 222
    invoke-virtual/range {v19 .. v19}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getIconUrl()Ljava/lang/String;

    move-result-object v1

    invoke-direct {v0, v1, v13}, Lcom/mbridge/msdk/video/dynview/j/a;->a(Ljava/lang/String;Landroid/widget/ImageView;)V

    :cond_d
    if-eqz v14, :cond_e

    .line 225
    invoke-virtual/range {v19 .. v19}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getIconUrl()Ljava/lang/String;

    move-result-object v1

    invoke-direct {v0, v1, v14}, Lcom/mbridge/msdk/video/dynview/j/a;->a(Ljava/lang/String;Landroid/widget/ImageView;)V

    :cond_e
    if-eqz v6, :cond_10

    .line 230
    invoke-virtual/range {v19 .. v19}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAppName()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_f

    .line 231
    invoke-virtual/range {v19 .. v19}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAppName()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v6, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    goto :goto_4

    :cond_f
    const/16 v1, 0x8

    .line 233
    invoke-virtual {v6, v1}, Landroid/widget/TextView;->setVisibility(I)V

    :cond_10
    :goto_4
    if-eqz v4, :cond_11

    .line 238
    new-instance v1, Lcom/mbridge/msdk/video/dynview/j/a$4;

    invoke-direct {v1, v0, v3, v5}, Lcom/mbridge/msdk/video/dynview/j/a$4;-><init>(Lcom/mbridge/msdk/video/dynview/j/a;Ljava/util/Map;Ljava/util/List;)V

    invoke-virtual {v4, v1}, Landroid/widget/RelativeLayout;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    :cond_11
    if-eqz v10, :cond_14

    const/16 v21, 0x14

    const/16 v22, 0x14

    const/16 v23, 0x0

    const/16 v24, 0x0

    const/16 v25, 0xa

    const/high16 v26, -0x1000000

    move-object/from16 v20, v10

    .line 249
    invoke-virtual/range {v20 .. v26}, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBridgeImageView;->setCustomBorder(IIIIII)V

    .line 250
    invoke-virtual/range {v18 .. v18}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getImageUrl()Ljava/lang/String;

    move-result-object v1

    invoke-direct {v0, v1, v10, v11, v2}, Lcom/mbridge/msdk/video/dynview/j/a;->a(Ljava/lang/String;Landroid/widget/ImageView;Lcom/mbridge/msdk/video/dynview/c;Landroid/view/View;)V

    if-eqz v7, :cond_14

    .line 252
    invoke-virtual/range {v18 .. v18}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getCanStart2C1Anim()Z

    move-result v1

    if-eqz v1, :cond_13

    .line 253
    invoke-virtual/range {v18 .. v18}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getIconUrl()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_12

    .line 254
    new-instance v1, Landroid/widget/ImageView;

    invoke-virtual/range {p1 .. p1}, Lcom/mbridge/msdk/video/dynview/c;->a()Landroid/content/Context;

    move-result-object v4

    invoke-direct {v1, v4}, Landroid/widget/ImageView;-><init>(Landroid/content/Context;)V

    .line 255
    new-instance v4, Landroid/widget/FrameLayout$LayoutParams;

    invoke-virtual/range {p1 .. p1}, Lcom/mbridge/msdk/video/dynview/c;->a()Landroid/content/Context;

    move-result-object v5

    const/high16 v6, 0x43480000    # 200.0f

    invoke-static {v5, v6}, Lcom/mbridge/msdk/foundation/tools/ae;->b(Landroid/content/Context;F)I

    move-result v5

    const/4 v6, -0x1

    invoke-direct {v4, v6, v5}, Landroid/widget/FrameLayout$LayoutParams;-><init>(II)V

    .line 256
    invoke-virtual {v1, v4}, Landroid/widget/ImageView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 257
    sget-object v4, Landroid/widget/ImageView$ScaleType;->CENTER_CROP:Landroid/widget/ImageView$ScaleType;

    invoke-virtual {v1, v4}, Landroid/widget/ImageView;->setScaleType(Landroid/widget/ImageView$ScaleType;)V

    .line 258
    invoke-virtual {v7, v1}, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBRotationView;->addView(Landroid/view/View;)V

    .line 259
    invoke-virtual/range {v18 .. v18}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getIconUrl()Ljava/lang/String;

    move-result-object v4

    invoke-direct {v0, v4, v1}, Lcom/mbridge/msdk/video/dynview/j/a;->a(Ljava/lang/String;Landroid/widget/ImageView;)V

    const v1, 0x3ee66666    # 0.45f

    .line 261
    invoke-virtual {v7, v1}, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBRotationView;->setWidthRatio(F)V

    const v1, 0x3f666666    # 0.9f

    .line 262
    invoke-virtual {v7, v1}, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBRotationView;->setHeightRatio(F)V

    const/4 v1, 0x1

    .line 263
    invoke-virtual {v7, v1}, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBRotationView;->setAutoscroll(Z)V

    goto :goto_5

    :cond_12
    const/high16 v1, 0x3f800000    # 1.0f

    .line 265
    invoke-virtual {v7, v1}, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBRotationView;->setWidthRatio(F)V

    .line 266
    invoke-virtual {v7, v1}, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBRotationView;->setHeightRatio(F)V

    const/4 v4, 0x0

    .line 267
    invoke-virtual {v7, v4}, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBRotationView;->setAutoscroll(Z)V

    goto :goto_6

    :cond_13
    const/high16 v1, 0x3f800000    # 1.0f

    const/4 v4, 0x0

    .line 270
    invoke-virtual {v7, v1}, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBRotationView;->setWidthRatio(F)V

    .line 271
    invoke-virtual {v7, v1}, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBRotationView;->setHeightRatio(F)V

    .line 272
    invoke-virtual {v7, v4}, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBRotationView;->setAutoscroll(Z)V

    goto :goto_6

    :cond_14
    :goto_5
    const/4 v4, 0x0

    :goto_6
    if-eqz v30, :cond_15

    move-object/from16 v8, v30

    .line 278
    invoke-virtual {v8, v4}, Lcom/mbridge/msdk/videocommon/view/RoundImageView;->setType(I)V

    .line 279
    invoke-virtual/range {v18 .. v18}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getIconUrl()Ljava/lang/String;

    move-result-object v1

    invoke-direct {v0, v1, v8}, Lcom/mbridge/msdk/video/dynview/j/a;->a(Ljava/lang/String;Landroid/widget/ImageView;)V

    :cond_15
    if-eqz v29, :cond_16

    .line 282
    invoke-virtual/range {v18 .. v18}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getIconUrl()Ljava/lang/String;

    move-result-object v1

    move-object/from16 v8, v29

    invoke-direct {v0, v1, v8}, Lcom/mbridge/msdk/video/dynview/j/a;->a(Ljava/lang/String;Landroid/widget/ImageView;)V

    :cond_16
    if-eqz v28, :cond_17

    .line 286
    invoke-virtual/range {v18 .. v18}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAppName()Ljava/lang/String;

    move-result-object v1

    move-object/from16 v13, v28

    invoke-virtual {v13, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 288
    :cond_17
    invoke-virtual/range {v19 .. v19}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getCMPTEntryUrl()Ljava/lang/String;

    move-result-object v1

    invoke-virtual/range {p1 .. p1}, Lcom/mbridge/msdk/video/dynview/c;->e()I

    const-string v4, "cltp"

    .line 1442
    invoke-static {v1, v4}, Lcom/mbridge/msdk/foundation/tools/ak;->a(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 1443
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    const-wide/16 v5, 0x0

    if-nez v4, :cond_18

    .line 1444
    invoke-static {v1}, Ljava/lang/Long;->parseLong(Ljava/lang/String;)J

    move-result-wide v7

    goto :goto_7

    :cond_18
    move-wide v7, v5

    :goto_7
    cmp-long v1, v7, v5

    if-eqz v1, :cond_1c

    if-eqz v3, :cond_19

    move-object/from16 v1, v17

    .line 1448
    invoke-interface {v3, v1}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v4

    if-eqz v4, :cond_19

    .line 1449
    invoke-interface {v3, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/Boolean;

    invoke-virtual {v1}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v1

    sput-boolean v1, Lcom/mbridge/msdk/video/dynview/j/a;->j:Z

    .line 1451
    :cond_19
    sget-boolean v1, Lcom/mbridge/msdk/video/dynview/j/a;->j:Z

    const-string v4, "mbridge_choice_one_countdown_tv"

    if-eqz v1, :cond_1a

    .line 1452
    invoke-direct {v0, v4}, Lcom/mbridge/msdk/video/dynview/j/a;->b(Ljava/lang/String;)I

    move-result v1

    invoke-virtual {v2, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/TextView;

    goto :goto_8

    .line 1454
    :cond_1a
    invoke-direct {v0, v4}, Lcom/mbridge/msdk/video/dynview/j/a;->a(Ljava/lang/String;)I

    move-result v1

    invoke-virtual {v2, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/TextView;

    :goto_8
    const/high16 v4, 0x41300000    # 11.0f

    .line 1456
    invoke-virtual {v1, v4}, Landroid/widget/TextView;->setTextSize(F)V

    .line 1457
    iget-object v4, v0, Lcom/mbridge/msdk/video/dynview/j/a;->e:Ljava/lang/String;

    invoke-static {v4}, Landroid/graphics/Color;->parseColor(Ljava/lang/String;)I

    move-result v4

    invoke-virtual {v1, v4}, Landroid/widget/TextView;->setTextColor(I)V

    const/16 v4, 0xc

    .line 1458
    iget-object v5, v0, Lcom/mbridge/msdk/video/dynview/j/a;->f:Ljava/lang/String;

    if-eqz v1, :cond_1b

    .line 2022
    new-instance v6, Landroid/graphics/drawable/GradientDrawable;

    invoke-direct {v6}, Landroid/graphics/drawable/GradientDrawable;-><init>()V

    .line 2023
    invoke-static {v5}, Landroid/graphics/Color;->parseColor(Ljava/lang/String;)I

    move-result v9

    invoke-virtual {v6, v9}, Landroid/graphics/drawable/GradientDrawable;->setColor(I)V

    .line 2024
    invoke-virtual {v1}, Landroid/view/View;->getContext()Landroid/content/Context;

    move-result-object v9

    int-to-float v4, v4

    invoke-static {v9, v4}, Lcom/mbridge/msdk/foundation/tools/ae;->b(Landroid/content/Context;F)I

    move-result v4

    int-to-float v4, v4

    invoke-virtual {v6, v4}, Landroid/graphics/drawable/GradientDrawable;->setCornerRadius(F)V

    .line 2025
    invoke-virtual {v1}, Landroid/view/View;->getContext()Landroid/content/Context;

    move-result-object v4

    const/4 v9, 0x1

    int-to-float v10, v9

    invoke-static {v4, v10}, Lcom/mbridge/msdk/foundation/tools/ae;->b(Landroid/content/Context;F)I

    move-result v4

    invoke-static {v5}, Landroid/graphics/Color;->parseColor(Ljava/lang/String;)I

    move-result v5

    invoke-virtual {v6, v4, v5}, Landroid/graphics/drawable/GradientDrawable;->setStroke(II)V

    .line 2026
    invoke-virtual {v1, v6}, Landroid/view/View;->setBackground(Landroid/graphics/drawable/Drawable;)V

    :cond_1b
    if-eqz v1, :cond_1c

    const/4 v4, 0x0

    .line 1461
    invoke-virtual {v1, v4}, Landroid/widget/TextView;->setVisibility(I)V

    .line 1462
    new-instance v4, Lcom/mbridge/msdk/video/dynview/j/a$5;

    invoke-direct {v4, v0, v3}, Lcom/mbridge/msdk/video/dynview/j/a$5;-><init>(Lcom/mbridge/msdk/video/dynview/j/a;Ljava/util/Map;)V

    invoke-virtual {v1, v4}, Landroid/widget/TextView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 1472
    new-instance v4, Lcom/mbridge/msdk/video/dynview/j/a$6;

    invoke-direct {v4, v0, v1, v3}, Lcom/mbridge/msdk/video/dynview/j/a$6;-><init>(Lcom/mbridge/msdk/video/dynview/j/a;Landroid/widget/TextView;Ljava/util/Map;)V

    iput-object v4, v0, Lcom/mbridge/msdk/video/dynview/j/a;->k:Lcom/mbridge/msdk/video/dynview/i/c/a;

    .line 1487
    new-instance v1, Lcom/mbridge/msdk/video/dynview/i/c/b;

    invoke-direct {v1}, Lcom/mbridge/msdk/video/dynview/i/c/b;-><init>()V

    const-wide/16 v3, 0x3e8

    mul-long/2addr v7, v3

    .line 1488
    invoke-virtual {v1, v7, v8}, Lcom/mbridge/msdk/video/dynview/i/c/b;->b(J)Lcom/mbridge/msdk/video/dynview/i/c/b;

    move-result-object v1

    .line 1489
    invoke-virtual {v1, v3, v4}, Lcom/mbridge/msdk/video/dynview/i/c/b;->a(J)Lcom/mbridge/msdk/video/dynview/i/c/b;

    move-result-object v1

    iget-object v3, v0, Lcom/mbridge/msdk/video/dynview/j/a;->k:Lcom/mbridge/msdk/video/dynview/i/c/a;

    .line 1490
    invoke-virtual {v1, v3}, Lcom/mbridge/msdk/video/dynview/i/c/b;->a(Lcom/mbridge/msdk/video/dynview/i/c/a;)Lcom/mbridge/msdk/video/dynview/i/c/b;

    move-result-object v1

    iput-object v1, v0, Lcom/mbridge/msdk/video/dynview/j/a;->b:Lcom/mbridge/msdk/video/dynview/i/c/b;

    .line 1491
    invoke-virtual {v1}, Lcom/mbridge/msdk/video/dynview/i/c/b;->a()V

    :cond_1c
    if-eqz v11, :cond_1e

    move-object/from16 v14, v27

    if-eqz v14, :cond_1e

    .line 291
    invoke-virtual/range {p1 .. p1}, Lcom/mbridge/msdk/video/dynview/c;->e()I

    move-result v1

    const/4 v3, 0x1

    if-ne v1, v3, :cond_1d

    move-object/from16 v1, v16

    .line 292
    invoke-static {v1, v3}, Lcom/mbridge/msdk/video/dynview/i/b;->a(Landroid/content/Context;I)Ljava/lang/String;

    move-result-object v3

    .line 293
    invoke-virtual {v1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v1

    const-string v4, "drawable"

    invoke-static {v1, v3, v4}, Lcom/mbridge/msdk/foundation/tools/s;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v1

    invoke-virtual {v14, v1}, Landroid/widget/ImageView;->setImageResource(I)V

    goto :goto_9

    :cond_1d
    move-object/from16 v1, v16

    const/4 v3, 0x2

    .line 295
    invoke-static {v1, v3}, Lcom/mbridge/msdk/video/dynview/i/b;->a(Landroid/content/Context;I)Ljava/lang/String;

    move-result-object v3

    .line 296
    invoke-virtual {v1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v1

    const-string v4, "drawable"

    invoke-static {v1, v3, v4}, Lcom/mbridge/msdk/foundation/tools/s;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v1

    invoke-virtual {v14, v1}, Landroid/widget/ImageView;->setImageResource(I)V

    :cond_1e
    :goto_9
    move-object/from16 v1, p4

    if-eqz v1, :cond_1f

    const/4 v3, 0x0

    .line 300
    invoke-interface {v1, v2, v3}, Lcom/mbridge/msdk/video/dynview/e/e;->a(Landroid/view/View;Ljava/util/List;)V

    :cond_1f
    return-void
.end method

.method public final b(Lcom/mbridge/msdk/video/dynview/c;Landroid/view/View;Ljava/util/Map;Lcom/mbridge/msdk/video/dynview/e/e;)V
    .locals 22

    move-object/from16 v0, p0

    move-object/from16 v1, p2

    move-object/from16 v2, p3

    move-object/from16 v3, p4

    if-nez v3, :cond_0

    return-void

    :cond_0
    if-nez p1, :cond_1

    .line 310
    sget-object v1, Lcom/mbridge/msdk/video/dynview/c/a;->a:Lcom/mbridge/msdk/video/dynview/c/a;

    invoke-interface {v3, v1}, Lcom/mbridge/msdk/video/dynview/e/e;->a(Lcom/mbridge/msdk/video/dynview/c/a;)V

    return-void

    :cond_1
    if-eqz v2, :cond_2

    const-string v4, "is_dy_success"

    .line 313
    invoke-interface {v2, v4}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v5

    if-eqz v5, :cond_2

    .line 314
    invoke-interface {v2, v4}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/Boolean;

    invoke-virtual {v2}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v2

    sput-boolean v2, Lcom/mbridge/msdk/video/dynview/j/a;->j:Z

    :cond_2
    const/4 v2, 0x0

    .line 322
    sget-boolean v4, Lcom/mbridge/msdk/video/dynview/j/a;->j:Z

    const-string v5, "mbridge_reward_desc_tv"

    const-string v6, "mbridge_videoview_bg"

    const-string v7, "mbridge_reward_click_tv"

    const-string v8, "mbridge_reward_stars_mllv"

    const-string v9, "mbridge_reward_title_tv"

    const-string v10, "mbridge_reward_icon_riv"

    if-eqz v4, :cond_3

    .line 323
    invoke-direct {v0, v10}, Lcom/mbridge/msdk/video/dynview/j/a;->b(Ljava/lang/String;)I

    move-result v2

    invoke-virtual {v1, v2}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Landroid/widget/ImageView;

    .line 324
    invoke-direct {v0, v9}, Lcom/mbridge/msdk/video/dynview/j/a;->b(Ljava/lang/String;)I

    move-result v4

    invoke-virtual {v1, v4}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v4

    check-cast v4, Landroid/widget/TextView;

    .line 325
    invoke-direct {v0, v8}, Lcom/mbridge/msdk/video/dynview/j/a;->b(Ljava/lang/String;)I

    move-result v8

    invoke-virtual {v1, v8}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v8

    check-cast v8, Landroid/widget/LinearLayout;

    const-string v9, "mbridge_reward_heat_mllv"

    .line 326
    invoke-direct {v0, v9}, Lcom/mbridge/msdk/video/dynview/j/a;->b(Ljava/lang/String;)I

    move-result v9

    invoke-virtual {v1, v9}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v9

    check-cast v9, Landroid/widget/LinearLayout;

    .line 327
    invoke-direct {v0, v7}, Lcom/mbridge/msdk/video/dynview/j/a;->b(Ljava/lang/String;)I

    move-result v7

    invoke-virtual {v1, v7}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v7

    check-cast v7, Landroid/widget/TextView;

    .line 328
    invoke-direct {v0, v6}, Lcom/mbridge/msdk/video/dynview/j/a;->b(Ljava/lang/String;)I

    move-result v6

    invoke-virtual {v1, v6}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v6

    check-cast v6, Landroid/widget/ImageView;

    .line 329
    invoke-direct {v0, v5}, Lcom/mbridge/msdk/video/dynview/j/a;->b(Ljava/lang/String;)I

    move-result v5

    invoke-virtual {v1, v5}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v5

    check-cast v5, Landroid/widget/TextView;

    goto :goto_0

    .line 331
    :cond_3
    invoke-direct {v0, v10}, Lcom/mbridge/msdk/video/dynview/j/a;->a(Ljava/lang/String;)I

    move-result v4

    invoke-virtual {v1, v4}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v4

    check-cast v4, Landroid/widget/ImageView;

    .line 332
    invoke-direct {v0, v9}, Lcom/mbridge/msdk/video/dynview/j/a;->a(Ljava/lang/String;)I

    move-result v9

    invoke-virtual {v1, v9}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v9

    check-cast v9, Landroid/widget/TextView;

    .line 333
    invoke-direct {v0, v8}, Lcom/mbridge/msdk/video/dynview/j/a;->a(Ljava/lang/String;)I

    move-result v8

    invoke-virtual {v1, v8}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v8

    check-cast v8, Landroid/widget/LinearLayout;

    .line 334
    invoke-direct {v0, v7}, Lcom/mbridge/msdk/video/dynview/j/a;->a(Ljava/lang/String;)I

    move-result v7

    invoke-virtual {v1, v7}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v7

    check-cast v7, Landroid/widget/TextView;

    .line 335
    invoke-direct {v0, v6}, Lcom/mbridge/msdk/video/dynview/j/a;->a(Ljava/lang/String;)I

    move-result v6

    invoke-virtual {v1, v6}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v6

    check-cast v6, Landroid/widget/ImageView;

    .line 336
    invoke-direct {v0, v5}, Lcom/mbridge/msdk/video/dynview/j/a;->a(Ljava/lang/String;)I

    move-result v5

    invoke-virtual {v1, v5}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v5

    check-cast v5, Landroid/widget/TextView;

    move-object/from16 v21, v9

    move-object v9, v2

    move-object v2, v4

    move-object/from16 v4, v21

    .line 339
    :goto_0
    new-instance v10, Ljava/util/ArrayList;

    invoke-direct {v10}, Ljava/util/ArrayList;-><init>()V

    .line 340
    invoke-virtual/range {p1 .. p1}, Lcom/mbridge/msdk/video/dynview/c;->g()Ljava/util/List;

    move-result-object v11

    if-eqz v11, :cond_15

    .line 341
    invoke-interface {v11}, Ljava/util/List;->size()I

    move-result v12

    if-lez v12, :cond_15

    const/4 v12, 0x0

    .line 342
    invoke-interface {v11, v12}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v11

    check-cast v11, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v11, :cond_14

    if-eqz v2, :cond_6

    .line 345
    sget-boolean v13, Lcom/mbridge/msdk/video/dynview/j/a;->j:Z

    if-eqz v13, :cond_4

    .line 346
    instance-of v13, v2, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBCusRoundImageView;

    if-eqz v13, :cond_5

    .line 347
    move-object v14, v2

    check-cast v14, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBCusRoundImageView;

    const/16 v15, 0x1e

    const/16 v16, 0x1e

    const/16 v17, 0x1e

    const/16 v18, 0x1e

    const/16 v19, 0xa

    const/16 v20, -0x1

    invoke-virtual/range {v14 .. v20}, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBCusRoundImageView;->setCustomBorder(IIIIII)V

    goto :goto_1

    .line 350
    :cond_4
    move-object v13, v2

    check-cast v13, Lcom/mbridge/msdk/videocommon/view/RoundImageView;

    const/16 v14, 0xa

    invoke-virtual {v13, v14}, Lcom/mbridge/msdk/videocommon/view/RoundImageView;->setBorderRadius(I)V

    .line 352
    :cond_5
    :goto_1
    invoke-virtual {v11}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getIconUrl()Ljava/lang/String;

    move-result-object v13

    invoke-direct {v0, v13, v2}, Lcom/mbridge/msdk/video/dynview/j/a;->a(Ljava/lang/String;Landroid/widget/ImageView;)V

    :cond_6
    if-eqz v4, :cond_7

    .line 355
    invoke-virtual {v11}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAppName()Ljava/lang/String;

    move-result-object v13

    invoke-virtual {v4, v13}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    :cond_7
    if-eqz v5, :cond_8

    .line 358
    invoke-virtual {v11}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAppDesc()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v5, v4}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    :cond_8
    if-eqz v8, :cond_c

    .line 361
    invoke-virtual {v11}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRating()D

    move-result-wide v4

    const-wide/16 v13, 0x0

    cmpg-double v13, v4, v13

    if-gtz v13, :cond_9

    const-wide/high16 v4, 0x4014000000000000L    # 5.0

    .line 365
    :cond_9
    sget-boolean v13, Lcom/mbridge/msdk/video/dynview/j/a;->j:Z

    if-eqz v13, :cond_b

    if-eqz v8, :cond_a

    .line 366
    instance-of v13, v8, Lcom/mbridge/msdk/dycreator/baseview/MBStarLevelLayoutView;

    if-eqz v13, :cond_a

    .line 367
    check-cast v8, Lcom/mbridge/msdk/dycreator/baseview/MBStarLevelLayoutView;

    double-to-int v4, v4

    invoke-virtual {v8, v4}, Lcom/mbridge/msdk/dycreator/baseview/MBStarLevelLayoutView;->setRating(I)V

    .line 368
    invoke-virtual {v8, v12}, Lcom/mbridge/msdk/dycreator/baseview/MBStarLevelLayoutView;->setOrientation(I)V

    :cond_a
    if-eqz v9, :cond_c

    .line 370
    instance-of v4, v9, Lcom/mbridge/msdk/dycreator/baseview/MBHeatLevelLayoutView;

    if-eqz v4, :cond_c

    .line 371
    check-cast v9, Lcom/mbridge/msdk/dycreator/baseview/MBHeatLevelLayoutView;

    invoke-virtual {v11}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getNumberRating()I

    move-result v4

    invoke-virtual {v9, v4}, Lcom/mbridge/msdk/dycreator/baseview/MBHeatLevelLayoutView;->setHeatCount(I)V

    goto :goto_2

    .line 374
    :cond_b
    check-cast v8, Lcom/mbridge/msdk/video/dynview/widget/MBridgeLevelLayoutView;

    invoke-virtual {v11}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getNumberRating()I

    move-result v9

    invoke-virtual {v8, v4, v5, v9}, Lcom/mbridge/msdk/video/dynview/widget/MBridgeLevelLayoutView;->setRatingAndUser(DI)V

    :cond_c
    :goto_2
    if-eqz v7, :cond_d

    .line 378
    invoke-virtual {v11}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAdCall()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v7, v4}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 381
    :cond_d
    invoke-virtual/range {p1 .. p1}, Lcom/mbridge/msdk/video/dynview/c;->h()I

    move-result v4

    const/16 v5, 0x66

    if-eq v4, v5, :cond_12

    const/16 v5, 0xca

    if-eq v4, v5, :cond_12

    const/16 v5, 0x12e

    if-eq v4, v5, :cond_12

    const/16 v5, 0x322

    if-eq v4, v5, :cond_f

    const/16 v2, 0x388

    if-eq v4, v2, :cond_e

    goto :goto_3

    .line 391
    :cond_e
    invoke-virtual/range {p1 .. p1}, Lcom/mbridge/msdk/video/dynview/c;->k()Z

    move-result v2

    if-eqz v2, :cond_13

    .line 392
    invoke-interface {v10, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_3

    :cond_f
    if-eqz v2, :cond_10

    .line 397
    invoke-interface {v10, v2}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    :cond_10
    if-eqz v7, :cond_11

    .line 400
    invoke-interface {v10, v7}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 402
    :cond_11
    invoke-virtual {v11}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getImageUrl()Ljava/lang/String;

    move-result-object v2

    invoke-direct {v0, v6, v2, v4}, Lcom/mbridge/msdk/video/dynview/j/a;->a(Landroid/widget/ImageView;Ljava/lang/String;I)V

    goto :goto_3

    :cond_12
    if-eqz v7, :cond_13

    .line 387
    invoke-interface {v10, v7}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 405
    :cond_13
    :goto_3
    invoke-interface {v3, v1, v10}, Lcom/mbridge/msdk/video/dynview/e/e;->a(Landroid/view/View;Ljava/util/List;)V

    goto :goto_4

    .line 407
    :cond_14
    sget-object v1, Lcom/mbridge/msdk/video/dynview/c/a;->d:Lcom/mbridge/msdk/video/dynview/c/a;

    invoke-interface {v3, v1}, Lcom/mbridge/msdk/video/dynview/e/e;->a(Lcom/mbridge/msdk/video/dynview/c/a;)V

    goto :goto_4

    .line 410
    :cond_15
    sget-object v1, Lcom/mbridge/msdk/video/dynview/c/a;->d:Lcom/mbridge/msdk/video/dynview/c/a;

    invoke-interface {v3, v1}, Lcom/mbridge/msdk/video/dynview/e/e;->a(Lcom/mbridge/msdk/video/dynview/c/a;)V

    :goto_4
    return-void
.end method

.method public final c(Lcom/mbridge/msdk/video/dynview/c;Landroid/view/View;Ljava/util/Map;Lcom/mbridge/msdk/video/dynview/e/e;)V
    .locals 9

    const-string v0, "is_dy_success"

    .line 500
    :try_start_0
    iget-object v1, p0, Lcom/mbridge/msdk/video/dynview/j/a;->c:Ljava/util/Map;

    if-nez v1, :cond_0

    .line 501
    new-instance v1, Ljava/util/HashMap;

    invoke-direct {v1}, Ljava/util/HashMap;-><init>()V

    iput-object v1, p0, Lcom/mbridge/msdk/video/dynview/j/a;->c:Ljava/util/Map;

    .line 503
    :cond_0
    invoke-virtual {p1}, Lcom/mbridge/msdk/video/dynview/c;->g()Ljava/util/List;

    move-result-object v1

    .line 504
    invoke-virtual {p2}, Landroid/view/View;->getContext()Landroid/content/Context;

    move-result-object v2

    if-nez v2, :cond_1

    .line 506
    sget-object p1, Lcom/mbridge/msdk/video/dynview/c/a;->b:Lcom/mbridge/msdk/video/dynview/c/a;

    invoke-interface {p4, p1}, Lcom/mbridge/msdk/video/dynview/e/e;->a(Lcom/mbridge/msdk/video/dynview/c/a;)V

    return-void

    :cond_1
    if-eqz p3, :cond_2

    .line 509
    invoke-interface {p3, v0}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_2

    .line 510
    invoke-interface {p3, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/Boolean;

    invoke-virtual {v0}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v0

    sput-boolean v0, Lcom/mbridge/msdk/video/dynview/j/a;->j:Z

    .line 515
    :cond_2
    sget-boolean v0, Lcom/mbridge/msdk/video/dynview/j/a;->j:Z
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    const-string v2, "mbridge_order_view_iv_close"

    const-string v3, "mbridge_order_view_h_lv"

    const-string v4, "mbridge_order_view_lv"

    if-eqz v0, :cond_3

    .line 516
    :try_start_1
    invoke-direct {p0, v4}, Lcom/mbridge/msdk/video/dynview/j/a;->b(Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p2, v0}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/ListView;

    .line 517
    invoke-direct {p0, v3}, Lcom/mbridge/msdk/video/dynview/j/a;->b(Ljava/lang/String;)I

    move-result v3

    invoke-virtual {p2, v3}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v3

    check-cast v3, Landroid/widget/GridView;

    .line 518
    invoke-direct {p0, v2}, Lcom/mbridge/msdk/video/dynview/j/a;->b(Ljava/lang/String;)I

    move-result v2

    invoke-virtual {p2, v2}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Landroid/widget/ImageView;

    goto :goto_0

    .line 520
    :cond_3
    invoke-direct {p0, v4}, Lcom/mbridge/msdk/video/dynview/j/a;->a(Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p2, v0}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/ListView;

    .line 521
    invoke-direct {p0, v3}, Lcom/mbridge/msdk/video/dynview/j/a;->a(Ljava/lang/String;)I

    move-result v3

    invoke-virtual {p2, v3}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v3

    check-cast v3, Landroid/widget/GridView;

    .line 522
    invoke-direct {p0, v2}, Lcom/mbridge/msdk/video/dynview/j/a;->a(Ljava/lang/String;)I

    move-result v2

    invoke-virtual {p2, v2}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Landroid/widget/ImageView;

    .line 524
    :goto_0
    new-instance v4, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a;

    invoke-direct {v4, v1}, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a;-><init>(Ljava/util/List;)V

    .line 525
    invoke-virtual {p1}, Lcom/mbridge/msdk/video/dynview/c;->e()I

    move-result v5

    const/4 v6, 0x1

    if-ne v5, v6, :cond_4

    if-eqz v0, :cond_5

    .line 528
    invoke-virtual {v0, v4}, Landroid/widget/ListView;->setAdapter(Landroid/widget/ListAdapter;)V

    .line 529
    new-instance p1, Lcom/mbridge/msdk/video/dynview/j/a$7;

    invoke-direct {p1, p0, p3, v1}, Lcom/mbridge/msdk/video/dynview/j/a$7;-><init>(Lcom/mbridge/msdk/video/dynview/j/a;Ljava/util/Map;Ljava/util/List;)V

    invoke-virtual {v0, p1}, Landroid/widget/ListView;->setOnItemClickListener(Landroid/widget/AdapterView$OnItemClickListener;)V

    goto :goto_1

    :cond_4
    if-eqz v3, :cond_5

    .line 538
    invoke-virtual {p1}, Lcom/mbridge/msdk/video/dynview/c;->d()F

    move-result p1

    float-to-int p1, p1

    .line 539
    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result v0

    div-int v0, p1, v0

    .line 540
    div-int/lit8 v5, v0, 0x9

    .line 541
    div-int/lit8 v6, v5, 0x2

    .line 542
    invoke-virtual {v3}, Landroid/widget/GridView;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v7

    check-cast v7, Landroid/widget/LinearLayout$LayoutParams;

    mul-int/lit8 v8, v5, 0x2

    sub-int/2addr p1, v8

    .line 543
    iput p1, v7, Landroid/widget/LinearLayout$LayoutParams;->width:I

    .line 544
    invoke-virtual {v3, v7}, Landroid/widget/GridView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    sub-int/2addr v0, v5

    .line 545
    div-int/lit8 p1, v6, 0x2

    sub-int/2addr v0, p1

    invoke-virtual {v3, v0}, Landroid/widget/GridView;->setColumnWidth(I)V

    .line 546
    invoke-virtual {v3, v6}, Landroid/widget/GridView;->setHorizontalSpacing(I)V

    const/4 p1, 0x0

    .line 547
    invoke-virtual {v3, p1}, Landroid/widget/GridView;->setStretchMode(I)V

    .line 548
    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result p1

    invoke-virtual {v3, p1}, Landroid/widget/GridView;->setNumColumns(I)V

    .line 549
    invoke-virtual {v3, v4}, Landroid/widget/GridView;->setAdapter(Landroid/widget/ListAdapter;)V

    .line 550
    new-instance p1, Lcom/mbridge/msdk/video/dynview/j/a$8;

    invoke-direct {p1, p0, p3, v1}, Lcom/mbridge/msdk/video/dynview/j/a$8;-><init>(Lcom/mbridge/msdk/video/dynview/j/a;Ljava/util/Map;Ljava/util/List;)V

    invoke-virtual {v3, p1}, Landroid/widget/GridView;->setOnItemClickListener(Landroid/widget/AdapterView$OnItemClickListener;)V

    :cond_5
    :goto_1
    if-eqz v2, :cond_6

    .line 560
    new-instance p1, Lcom/mbridge/msdk/video/dynview/j/a$9;

    invoke-direct {p1, p0, p3}, Lcom/mbridge/msdk/video/dynview/j/a$9;-><init>(Lcom/mbridge/msdk/video/dynview/j/a;Ljava/util/Map;)V

    invoke-virtual {v2, p1}, Landroid/widget/ImageView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    :cond_6
    if-eqz p4, :cond_7

    const/4 p1, 0x0

    .line 569
    invoke-interface {p4, p2, p1}, Lcom/mbridge/msdk/video/dynview/e/e;->a(Landroid/view/View;Ljava/util/List;)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    goto :goto_2

    :catch_0
    if-eqz p4, :cond_7

    .line 573
    sget-object p1, Lcom/mbridge/msdk/video/dynview/c/a;->a:Lcom/mbridge/msdk/video/dynview/c/a;

    invoke-interface {p4, p1}, Lcom/mbridge/msdk/video/dynview/e/e;->a(Lcom/mbridge/msdk/video/dynview/c/a;)V

    :cond_7
    :goto_2
    return-void
.end method
