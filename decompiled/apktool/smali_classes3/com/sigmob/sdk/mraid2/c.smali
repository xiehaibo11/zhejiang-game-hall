.class public Lcom/sigmob/sdk/mraid2/c;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/sigmob/sdk/mraid2/c$b;,
        Lcom/sigmob/sdk/mraid2/c$a;
    }
.end annotation


# instance fields
.field private final a:Landroid/widget/FrameLayout;

.field private b:Z

.field private c:Lcom/sigmob/sdk/mraid2/c$a;

.field private d:Lcom/sigmob/sdk/mraid2/e;

.field private e:Landroid/widget/LinearLayout;

.field private f:Lcom/sigmob/sdk/mraid2/i;

.field private g:Lcom/sigmob/sdk/mraid2/c$b;

.field private h:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/sigmob/sdk/mraid2/e;",
            ">;"
        }
    .end annotation
.end field

.field private i:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/sigmob/sdk/base/models/BaseAdUnit;",
            ">;"
        }
    .end annotation
.end field

.field private j:Lcom/sigmob/sdk/base/common/e;

.field private k:Lcom/sigmob/sdk/mraid2/e$b;


# direct methods
.method public constructor <init>(Landroid/content/Context;Ljava/util/List;Lcom/sigmob/sdk/base/common/e;)V
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/content/Context;",
            "Ljava/util/List<",
            "Lcom/sigmob/sdk/base/models/BaseAdUnit;",
            ">;",
            "Lcom/sigmob/sdk/base/common/e;",
            ")V"
        }
    .end annotation

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/sigmob/sdk/mraid2/c;->b:Z

    new-instance v1, Ljava/util/ArrayList;

    invoke-direct {v1}, Ljava/util/ArrayList;-><init>()V

    iput-object v1, p0, Lcom/sigmob/sdk/mraid2/c;->h:Ljava/util/List;

    new-instance v1, Lcom/sigmob/sdk/mraid2/c$2;

    invoke-direct {v1, p0}, Lcom/sigmob/sdk/mraid2/c$2;-><init>(Lcom/sigmob/sdk/mraid2/c;)V

    iput-object v1, p0, Lcom/sigmob/sdk/mraid2/c;->k:Lcom/sigmob/sdk/mraid2/e$b;

    invoke-static {p1}, Lcom/czhj/sdk/common/utils/Preconditions;->checkNotNull(Ljava/lang/Object;)V

    iput-object p2, p0, Lcom/sigmob/sdk/mraid2/c;->i:Ljava/util/List;

    iput-object p3, p0, Lcom/sigmob/sdk/mraid2/c;->j:Lcom/sigmob/sdk/base/common/e;

    new-instance v1, Landroid/widget/FrameLayout;

    invoke-direct {v1, p1}, Landroid/widget/FrameLayout;-><init>(Landroid/content/Context;)V

    iput-object v1, p0, Lcom/sigmob/sdk/mraid2/c;->a:Landroid/widget/FrameLayout;

    invoke-virtual {v1, v0}, Landroid/widget/FrameLayout;->setBackgroundColor(I)V

    new-instance v0, Lcom/sigmob/sdk/mraid2/c$b;

    invoke-direct {v0, p0}, Lcom/sigmob/sdk/mraid2/c$b;-><init>(Lcom/sigmob/sdk/mraid2/c;)V

    iput-object v0, p0, Lcom/sigmob/sdk/mraid2/c;->g:Lcom/sigmob/sdk/mraid2/c$b;

    invoke-virtual {v0, p1}, Lcom/sigmob/sdk/mraid2/c$b;->a(Landroid/content/Context;)V

    new-instance v0, Lcom/sigmob/sdk/mraid2/e;

    iget-object v1, p0, Lcom/sigmob/sdk/mraid2/c;->a:Landroid/widget/FrameLayout;

    invoke-direct {v0, p1, p2, v1}, Lcom/sigmob/sdk/mraid2/e;-><init>(Landroid/content/Context;Ljava/util/List;Landroid/widget/FrameLayout;)V

    iput-object v0, p0, Lcom/sigmob/sdk/mraid2/c;->d:Lcom/sigmob/sdk/mraid2/e;

    invoke-virtual {v0, p3}, Lcom/sigmob/sdk/mraid2/e;->setAdSize(Lcom/sigmob/sdk/base/common/e;)V

    iget-object p1, p0, Lcom/sigmob/sdk/mraid2/c;->d:Lcom/sigmob/sdk/mraid2/e;

    new-instance p2, Lcom/sigmob/sdk/mraid2/c$1;

    invoke-direct {p2, p0}, Lcom/sigmob/sdk/mraid2/c$1;-><init>(Lcom/sigmob/sdk/mraid2/c;)V

    invoke-virtual {p1, p2}, Lcom/sigmob/sdk/mraid2/e;->setLoadListener(Lcom/sigmob/sdk/mraid2/e$a;)V

    iget-object p1, p0, Lcom/sigmob/sdk/mraid2/c;->d:Lcom/sigmob/sdk/mraid2/e;

    iget-object p2, p0, Lcom/sigmob/sdk/mraid2/c;->k:Lcom/sigmob/sdk/mraid2/e$b;

    invoke-virtual {p1, p2}, Lcom/sigmob/sdk/mraid2/e;->setNextWebViewListener(Lcom/sigmob/sdk/mraid2/e$b;)V

    iget-object p1, p0, Lcom/sigmob/sdk/mraid2/c;->h:Ljava/util/List;

    invoke-interface {p1}, Ljava/util/List;->clear()V

    iget-object p1, p0, Lcom/sigmob/sdk/mraid2/c;->h:Ljava/util/List;

    iget-object p2, p0, Lcom/sigmob/sdk/mraid2/c;->d:Lcom/sigmob/sdk/mraid2/e;

    invoke-interface {p1, p2}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    iget-object p1, p0, Lcom/sigmob/sdk/mraid2/c;->a:Landroid/widget/FrameLayout;

    iget-object p2, p0, Lcom/sigmob/sdk/mraid2/c;->d:Lcom/sigmob/sdk/mraid2/e;

    new-instance p3, Landroid/widget/FrameLayout$LayoutParams;

    const/4 v0, -0x1

    invoke-direct {p3, v0, v0}, Landroid/widget/FrameLayout$LayoutParams;-><init>(II)V

    invoke-virtual {p1, p2, p3}, Landroid/widget/FrameLayout;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    return-void
.end method

.method static synthetic a(Lcom/sigmob/sdk/mraid2/c;Landroid/widget/LinearLayout;)Landroid/widget/LinearLayout;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/mraid2/c;->e:Landroid/widget/LinearLayout;

    return-object p1
.end method

.method static synthetic a(Lcom/sigmob/sdk/mraid2/c;)Lcom/sigmob/sdk/mraid2/c$a;
    .locals 0

    iget-object p0, p0, Lcom/sigmob/sdk/mraid2/c;->c:Lcom/sigmob/sdk/mraid2/c$a;

    return-object p0
.end method

.method private a(Landroid/content/Context;Lcom/sigmob/sdk/mraid2/e;Lorg/json/JSONObject;)Lcom/sigmob/sdk/mraid2/e;
    .locals 7

    new-instance v6, Lcom/sigmob/sdk/mraid2/e;

    iget-object v2, p0, Lcom/sigmob/sdk/mraid2/c;->i:Ljava/util/List;

    iget-object v3, p0, Lcom/sigmob/sdk/mraid2/c;->a:Landroid/widget/FrameLayout;

    move-object v0, v6

    move-object v1, p1

    move-object v4, p2

    move-object v5, p3

    invoke-direct/range {v0 .. v5}, Lcom/sigmob/sdk/mraid2/e;-><init>(Landroid/content/Context;Ljava/util/List;Landroid/widget/FrameLayout;Lcom/sigmob/sdk/mraid2/e;Lorg/json/JSONObject;)V

    iget-object p1, p0, Lcom/sigmob/sdk/mraid2/c;->j:Lcom/sigmob/sdk/base/common/e;

    invoke-virtual {v6, p1}, Lcom/sigmob/sdk/mraid2/e;->setAdSize(Lcom/sigmob/sdk/base/common/e;)V

    iget-object p1, p0, Lcom/sigmob/sdk/mraid2/c;->k:Lcom/sigmob/sdk/mraid2/e$b;

    invoke-virtual {v6, p1}, Lcom/sigmob/sdk/mraid2/e;->setNextWebViewListener(Lcom/sigmob/sdk/mraid2/e$b;)V

    return-object v6
.end method

.method static synthetic a(Lcom/sigmob/sdk/mraid2/c;Landroid/content/Context;Lcom/sigmob/sdk/mraid2/e;Lorg/json/JSONObject;)Lcom/sigmob/sdk/mraid2/e;
    .locals 0

    invoke-direct {p0, p1, p2, p3}, Lcom/sigmob/sdk/mraid2/c;->a(Landroid/content/Context;Lcom/sigmob/sdk/mraid2/e;Lorg/json/JSONObject;)Lcom/sigmob/sdk/mraid2/e;

    move-result-object p0

    return-object p0
.end method

.method static synthetic a(Lcom/sigmob/sdk/mraid2/c;Lcom/sigmob/sdk/mraid2/i;)Lcom/sigmob/sdk/mraid2/i;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/mraid2/c;->f:Lcom/sigmob/sdk/mraid2/i;

    return-object p1
.end method

.method static synthetic a(Lcom/sigmob/sdk/mraid2/c;Z)Z
    .locals 0

    iput-boolean p1, p0, Lcom/sigmob/sdk/mraid2/c;->b:Z

    return p1
.end method

.method static synthetic b(Lcom/sigmob/sdk/mraid2/c;)Lcom/sigmob/sdk/mraid2/e;
    .locals 0

    iget-object p0, p0, Lcom/sigmob/sdk/mraid2/c;->d:Lcom/sigmob/sdk/mraid2/e;

    return-object p0
.end method

.method static synthetic c(Lcom/sigmob/sdk/mraid2/c;)Landroid/content/Context;
    .locals 0

    invoke-direct {p0}, Lcom/sigmob/sdk/mraid2/c;->f()Landroid/content/Context;

    move-result-object p0

    return-object p0
.end method

.method static synthetic d(Lcom/sigmob/sdk/mraid2/c;)Ljava/util/List;
    .locals 0

    iget-object p0, p0, Lcom/sigmob/sdk/mraid2/c;->h:Ljava/util/List;

    return-object p0
.end method

.method static synthetic e(Lcom/sigmob/sdk/mraid2/c;)Landroid/widget/LinearLayout;
    .locals 0

    iget-object p0, p0, Lcom/sigmob/sdk/mraid2/c;->e:Landroid/widget/LinearLayout;

    return-object p0
.end method

.method private f()Landroid/content/Context;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/mraid2/c;->a:Landroid/widget/FrameLayout;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Landroid/widget/FrameLayout;->getContext()Landroid/content/Context;

    move-result-object v0

    return-object v0

    :cond_0
    const/4 v0, 0x0

    return-object v0
.end method

.method static synthetic f(Lcom/sigmob/sdk/mraid2/c;)Lcom/sigmob/sdk/mraid2/i;
    .locals 0

    iget-object p0, p0, Lcom/sigmob/sdk/mraid2/c;->f:Lcom/sigmob/sdk/mraid2/i;

    return-object p0
.end method

.method static synthetic g(Lcom/sigmob/sdk/mraid2/c;)Landroid/widget/FrameLayout;
    .locals 0

    iget-object p0, p0, Lcom/sigmob/sdk/mraid2/c;->a:Landroid/widget/FrameLayout;

    return-object p0
.end method

.method static synthetic h(Lcom/sigmob/sdk/mraid2/c;)Z
    .locals 0

    iget-boolean p0, p0, Lcom/sigmob/sdk/mraid2/c;->b:Z

    return p0
.end method


# virtual methods
.method public a()V
    .locals 4

    iget-object v0, p0, Lcom/sigmob/sdk/mraid2/c;->h:Ljava/util/List;

    if-eqz v0, :cond_1

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_1

    const/4 v0, 0x0

    move v1, v0

    :goto_0
    iget-object v2, p0, Lcom/sigmob/sdk/mraid2/c;->h:Ljava/util/List;

    invoke-interface {v2}, Ljava/util/List;->size()I

    move-result v2

    if-ge v1, v2, :cond_1

    iget-object v2, p0, Lcom/sigmob/sdk/mraid2/c;->h:Ljava/util/List;

    invoke-interface {v2, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/sigmob/sdk/mraid2/e;

    invoke-virtual {v2}, Lcom/sigmob/sdk/mraid2/e;->getMraidBridge()Lcom/sigmob/sdk/mraid2/b;

    move-result-object v3

    if-eqz v3, :cond_0

    invoke-virtual {v2}, Lcom/sigmob/sdk/mraid2/e;->getMraidBridge()Lcom/sigmob/sdk/mraid2/b;

    move-result-object v2

    invoke-virtual {v2, v0}, Lcom/sigmob/sdk/mraid2/b;->a(Z)V

    :cond_0
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    :cond_1
    return-void
.end method

.method a(I)V
    .locals 2

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "handleOrientationChange "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/czhj/sdk/logger/SigmobLog;->i(Ljava/lang/String;)V

    iget-object p1, p0, Lcom/sigmob/sdk/mraid2/c;->h:Ljava/util/List;

    if-eqz p1, :cond_1

    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result p1

    if-lez p1, :cond_1

    const/4 p1, 0x0

    :goto_0
    iget-object v0, p0, Lcom/sigmob/sdk/mraid2/c;->h:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    if-ge p1, v0, :cond_1

    iget-object v0, p0, Lcom/sigmob/sdk/mraid2/c;->h:Ljava/util/List;

    invoke-interface {v0, p1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/sigmob/sdk/mraid2/e;

    invoke-virtual {v0}, Lcom/sigmob/sdk/mraid2/e;->getMraidBridge()Lcom/sigmob/sdk/mraid2/b;

    move-result-object v1

    if-eqz v1, :cond_0

    invoke-virtual {v0}, Lcom/sigmob/sdk/mraid2/e;->getMraidBridge()Lcom/sigmob/sdk/mraid2/b;

    move-result-object v1

    invoke-virtual {v1}, Lcom/sigmob/sdk/mraid2/b;->d()V

    invoke-virtual {v0}, Lcom/sigmob/sdk/mraid2/e;->getMraidBridge()Lcom/sigmob/sdk/mraid2/b;

    move-result-object v0

    iget-object v1, p0, Lcom/sigmob/sdk/mraid2/c;->j:Lcom/sigmob/sdk/base/common/e;

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/mraid2/b;->a(Lcom/sigmob/sdk/base/common/e;)V

    :cond_0
    add-int/lit8 p1, p1, 0x1

    goto :goto_0

    :cond_1
    return-void
.end method

.method public a(Lcom/sigmob/sdk/base/models/BaseAdUnit;)V
    .locals 6

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getRvAdSetting()Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getSkipSeconds()I

    move-result v0

    const/4 v1, -0x1

    if-eq v0, v1, :cond_0

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getSkipSeconds()I

    move-result p1

    goto :goto_0

    :cond_0
    const/4 p1, 0x5

    :goto_0
    new-instance v0, Landroid/os/Handler;

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v1

    invoke-direct {v0, v1}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    new-instance v1, Lcom/sigmob/sdk/mraid2/c$3;

    invoke-direct {v1, p0}, Lcom/sigmob/sdk/mraid2/c$3;-><init>(Lcom/sigmob/sdk/mraid2/c;)V

    int-to-long v2, p1

    const-wide/16 v4, 0x3e8

    mul-long/2addr v2, v4

    invoke-virtual {v0, v1, v2, v3}, Landroid/os/Handler;->postDelayed(Ljava/lang/Runnable;J)Z

    return-void
.end method

.method public a(Lcom/sigmob/sdk/mraid2/c$a;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/mraid2/c;->c:Lcom/sigmob/sdk/mraid2/c$a;

    return-void
.end method

.method public b()V
    .locals 3

    iget-object v0, p0, Lcom/sigmob/sdk/mraid2/c;->h:Ljava/util/List;

    if-eqz v0, :cond_1

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_1

    const/4 v0, 0x0

    :goto_0
    iget-object v1, p0, Lcom/sigmob/sdk/mraid2/c;->h:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result v1

    if-ge v0, v1, :cond_1

    iget-object v1, p0, Lcom/sigmob/sdk/mraid2/c;->h:Ljava/util/List;

    invoke-interface {v1, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/sigmob/sdk/mraid2/e;

    invoke-virtual {v1}, Lcom/sigmob/sdk/mraid2/e;->resumeTimers()V

    invoke-virtual {v1}, Lcom/sigmob/sdk/mraid2/e;->getMraidBridge()Lcom/sigmob/sdk/mraid2/b;

    move-result-object v2

    if-eqz v2, :cond_0

    invoke-virtual {v1}, Lcom/sigmob/sdk/mraid2/e;->getMraidBridge()Lcom/sigmob/sdk/mraid2/b;

    move-result-object v1

    const/4 v2, 0x1

    invoke-virtual {v1, v2}, Lcom/sigmob/sdk/mraid2/b;->a(Z)V

    :cond_0
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    :cond_1
    return-void
.end method

.method public c()Lcom/sigmob/sdk/mraid2/e;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/mraid2/c;->d:Lcom/sigmob/sdk/mraid2/e;

    return-object v0
.end method

.method public d()V
    .locals 1

    :try_start_0
    iget-object v0, p0, Lcom/sigmob/sdk/mraid2/c;->g:Lcom/sigmob/sdk/mraid2/c$b;

    invoke-virtual {v0}, Lcom/sigmob/sdk/mraid2/c$b;->a()V

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/sigmob/sdk/mraid2/c;->d:Lcom/sigmob/sdk/mraid2/e;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    :goto_0
    return-void
.end method

.method public e()Landroid/widget/FrameLayout;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/mraid2/c;->a:Landroid/widget/FrameLayout;

    return-object v0
.end method
