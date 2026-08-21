.class public Lcom/sigmob/sdk/mraid/d;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/sigmob/sdk/mraid/d$c;,
        Lcom/sigmob/sdk/mraid/d$d;,
        Lcom/sigmob/sdk/mraid/d$b;,
        Lcom/sigmob/sdk/mraid/d$e;,
        Lcom/sigmob/sdk/mraid/d$f;,
        Lcom/sigmob/sdk/mraid/d$a;
    }
.end annotation


# instance fields
.field private A:Z

.field private B:Lcom/sigmob/sdk/base/common/e;

.field private final a:Lcom/sigmob/sdk/base/models/PlacementType;

.field private final b:Lcom/sigmob/sdk/base/models/BaseAdUnit;

.field private final c:Landroid/widget/FrameLayout;

.field private final d:Lcom/sigmob/sdk/mraid/d$d;

.field private final e:Lcom/sigmob/sdk/mraid/k;

.field private final f:Lcom/sigmob/sdk/mraid/b;

.field private final g:Lcom/sigmob/sdk/mraid/h;

.field private h:Z

.field private i:Ljava/lang/Integer;

.field private j:Ljava/lang/String;

.field private k:Landroid/view/ViewGroup;

.field private l:Lcom/sigmob/sdk/base/models/ViewState;

.field private m:Lcom/sigmob/sdk/mraid/d$a;

.field private n:Lcom/sigmob/sdk/mraid/d$e;

.field private o:Lcom/sigmob/sdk/mraid/q;

.field private p:Lcom/sigmob/sdk/mraid/d$f;

.field private q:Lcom/sigmob/sdk/mraid/o;

.field private r:Lcom/sigmob/sdk/mraid/d$c;

.field private s:Ljava/lang/Integer;

.field private t:Z

.field private u:Lcom/sigmob/sdk/mraid/j;

.field private v:Z

.field private w:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/String;",
            "Lcom/sigmob/sdk/mraid/i;",
            ">;"
        }
    .end annotation
.end field

.field private final x:Lcom/sigmob/sdk/mraid/b$c;

.field private final y:Lcom/sigmob/sdk/mraid/b$b;

.field private z:Lcom/sigmob/sdk/nativead/APKStatusBroadcastReceiver;


# direct methods
.method public constructor <init>(Landroid/content/Context;Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/base/models/PlacementType;)V
    .locals 7

    new-instance v4, Lcom/sigmob/sdk/mraid/b;

    invoke-direct {v4, p2, p3}, Lcom/sigmob/sdk/mraid/b;-><init>(Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/base/models/PlacementType;)V

    new-instance v6, Lcom/sigmob/sdk/mraid/d$d;

    invoke-direct {v6}, Lcom/sigmob/sdk/mraid/d$d;-><init>()V

    const/4 v5, 0x0

    move-object v0, p0

    move-object v1, p1

    move-object v2, p2

    move-object v3, p3

    invoke-direct/range {v0 .. v6}, Lcom/sigmob/sdk/mraid/d;-><init>(Landroid/content/Context;Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/base/models/PlacementType;Lcom/sigmob/sdk/mraid/b;Lcom/sigmob/sdk/mraid/b;Lcom/sigmob/sdk/mraid/d$d;)V

    return-void
.end method

.method constructor <init>(Landroid/content/Context;Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/base/models/PlacementType;Lcom/sigmob/sdk/mraid/b;Lcom/sigmob/sdk/mraid/b;Lcom/sigmob/sdk/mraid/d$d;)V
    .locals 2

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 p5, 0x0

    iput-boolean p5, p0, Lcom/sigmob/sdk/mraid/d;->h:Z

    sget-object v0, Lcom/sigmob/sdk/base/models/ViewState;->LOADING:Lcom/sigmob/sdk/base/models/ViewState;

    iput-object v0, p0, Lcom/sigmob/sdk/mraid/d;->l:Lcom/sigmob/sdk/base/models/ViewState;

    new-instance v0, Lcom/sigmob/sdk/mraid/d$c;

    invoke-direct {v0, p0}, Lcom/sigmob/sdk/mraid/d$c;-><init>(Lcom/sigmob/sdk/mraid/d;)V

    iput-object v0, p0, Lcom/sigmob/sdk/mraid/d;->r:Lcom/sigmob/sdk/mraid/d$c;

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/sigmob/sdk/mraid/d;->t:Z

    sget-object v1, Lcom/sigmob/sdk/mraid/j;->c:Lcom/sigmob/sdk/mraid/j;

    iput-object v1, p0, Lcom/sigmob/sdk/mraid/d;->u:Lcom/sigmob/sdk/mraid/j;

    iput-boolean v0, p0, Lcom/sigmob/sdk/mraid/d;->v:Z

    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    iput-object v0, p0, Lcom/sigmob/sdk/mraid/d;->w:Ljava/util/HashMap;

    new-instance v0, Lcom/sigmob/sdk/mraid/d$1;

    invoke-direct {v0, p0}, Lcom/sigmob/sdk/mraid/d$1;-><init>(Lcom/sigmob/sdk/mraid/d;)V

    iput-object v0, p0, Lcom/sigmob/sdk/mraid/d;->x:Lcom/sigmob/sdk/mraid/b$c;

    new-instance v0, Lcom/sigmob/sdk/mraid/d$2;

    invoke-direct {v0, p0}, Lcom/sigmob/sdk/mraid/d$2;-><init>(Lcom/sigmob/sdk/mraid/d;)V

    iput-object v0, p0, Lcom/sigmob/sdk/mraid/d;->y:Lcom/sigmob/sdk/mraid/b$b;

    invoke-static {p1}, Lcom/czhj/sdk/common/utils/Preconditions;->checkNotNull(Ljava/lang/Object;)V

    new-instance v0, Landroid/widget/FrameLayout;

    invoke-direct {v0, p1}, Landroid/widget/FrameLayout;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/sigmob/sdk/mraid/d;->c:Landroid/widget/FrameLayout;

    iput-object p2, p0, Lcom/sigmob/sdk/mraid/d;->b:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    iput-object p3, p0, Lcom/sigmob/sdk/mraid/d;->a:Lcom/sigmob/sdk/base/models/PlacementType;

    iput-object p4, p0, Lcom/sigmob/sdk/mraid/d;->f:Lcom/sigmob/sdk/mraid/b;

    iput-object p6, p0, Lcom/sigmob/sdk/mraid/d;->d:Lcom/sigmob/sdk/mraid/d$d;

    sget-object p2, Lcom/sigmob/sdk/base/models/ViewState;->LOADING:Lcom/sigmob/sdk/base/models/ViewState;

    iput-object p2, p0, Lcom/sigmob/sdk/mraid/d;->l:Lcom/sigmob/sdk/base/models/ViewState;

    invoke-virtual {p1}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object p2

    invoke-virtual {p2}, Landroid/content/res/Resources;->getDisplayMetrics()Landroid/util/DisplayMetrics;

    move-result-object p2

    new-instance p3, Lcom/sigmob/sdk/mraid/k;

    iget p2, p2, Landroid/util/DisplayMetrics;->density:F

    invoke-direct {p3, p1, p2}, Lcom/sigmob/sdk/mraid/k;-><init>(Landroid/content/Context;F)V

    iput-object p3, p0, Lcom/sigmob/sdk/mraid/d;->e:Lcom/sigmob/sdk/mraid/k;

    iget-object p2, p0, Lcom/sigmob/sdk/mraid/d;->c:Landroid/widget/FrameLayout;

    invoke-virtual {p2, p5}, Landroid/widget/FrameLayout;->setBackgroundColor(I)V

    new-instance p2, Landroid/view/View;

    invoke-direct {p2, p1}, Landroid/view/View;-><init>(Landroid/content/Context;)V

    new-instance p3, Lcom/sigmob/sdk/mraid/d$3;

    invoke-direct {p3, p0}, Lcom/sigmob/sdk/mraid/d$3;-><init>(Lcom/sigmob/sdk/mraid/d;)V

    invoke-virtual {p2, p3}, Landroid/view/View;->setOnTouchListener(Landroid/view/View$OnTouchListener;)V

    iget-object p2, p0, Lcom/sigmob/sdk/mraid/d;->r:Lcom/sigmob/sdk/mraid/d$c;

    invoke-virtual {p2, p1}, Lcom/sigmob/sdk/mraid/d$c;->a(Landroid/content/Context;)V

    iget-object p1, p0, Lcom/sigmob/sdk/mraid/d;->f:Lcom/sigmob/sdk/mraid/b;

    iget-object p2, p0, Lcom/sigmob/sdk/mraid/d;->y:Lcom/sigmob/sdk/mraid/b$b;

    invoke-virtual {p1, p2}, Lcom/sigmob/sdk/mraid/b;->a(Lcom/sigmob/sdk/mraid/b$b;)V

    iget-object p1, p0, Lcom/sigmob/sdk/mraid/d;->f:Lcom/sigmob/sdk/mraid/b;

    iget-object p2, p0, Lcom/sigmob/sdk/mraid/d;->x:Lcom/sigmob/sdk/mraid/b$c;

    invoke-virtual {p1, p2}, Lcom/sigmob/sdk/mraid/b;->a(Lcom/sigmob/sdk/mraid/b$c;)V

    new-instance p1, Lcom/sigmob/sdk/mraid/h;

    invoke-direct {p1}, Lcom/sigmob/sdk/mraid/h;-><init>()V

    iput-object p1, p0, Lcom/sigmob/sdk/mraid/d;->g:Lcom/sigmob/sdk/mraid/h;

    return-void
.end method

.method static synthetic a(Lcom/sigmob/sdk/mraid/d;Ljava/lang/Integer;)Ljava/lang/Integer;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/mraid/d;->i:Ljava/lang/Integer;

    return-object p1
.end method

.method static synthetic a(Lcom/sigmob/sdk/mraid/d;)Ljava/util/HashMap;
    .locals 0

    iget-object p0, p0, Lcom/sigmob/sdk/mraid/d;->w:Ljava/util/HashMap;

    return-object p0
.end method

.method static a(Lcom/sigmob/sdk/mraid/d$a;Lcom/sigmob/sdk/base/models/ViewState;Lcom/sigmob/sdk/base/models/ViewState;)V
    .locals 0

    invoke-static {p0}, Lcom/czhj/sdk/common/utils/Preconditions;->checkNotNull(Ljava/lang/Object;)V

    invoke-static {p1}, Lcom/czhj/sdk/common/utils/Preconditions;->checkNotNull(Ljava/lang/Object;)V

    invoke-static {p2}, Lcom/czhj/sdk/common/utils/Preconditions;->checkNotNull(Ljava/lang/Object;)V

    return-void
.end method

.method static synthetic a(Lcom/sigmob/sdk/mraid/d;Ljava/lang/String;Ljava/util/Map;)V
    .locals 0

    invoke-direct {p0, p1, p2}, Lcom/sigmob/sdk/mraid/d;->b(Ljava/lang/String;Ljava/util/Map;)V

    return-void
.end method

.method private a(Ljava/lang/Runnable;)V
    .locals 10

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/d;->d:Lcom/sigmob/sdk/mraid/d$d;

    invoke-virtual {v0}, Lcom/sigmob/sdk/mraid/d$d;->a()V

    invoke-virtual {p0}, Lcom/sigmob/sdk/mraid/d;->f()Lcom/sigmob/sdk/mraid/o;

    move-result-object v0

    if-nez v0, :cond_0

    return-void

    :cond_0
    invoke-direct {p0}, Lcom/sigmob/sdk/mraid/d;->v()Landroid/content/Context;

    move-result-object v1

    invoke-virtual {v1}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v1

    invoke-virtual {v1}, Landroid/content/res/Resources;->getDisplayMetrics()Landroid/util/DisplayMetrics;

    move-result-object v1

    iget-object v2, p0, Lcom/sigmob/sdk/mraid/d;->B:Lcom/sigmob/sdk/base/common/e;

    if-eqz v2, :cond_1

    iget-object v1, p0, Lcom/sigmob/sdk/mraid/d;->e:Lcom/sigmob/sdk/mraid/k;

    invoke-virtual {v2}, Lcom/sigmob/sdk/base/common/e;->a()I

    move-result v2

    iget-object v3, p0, Lcom/sigmob/sdk/mraid/d;->B:Lcom/sigmob/sdk/base/common/e;

    invoke-virtual {v3}, Lcom/sigmob/sdk/base/common/e;->b()I

    move-result v3

    invoke-virtual {v1, v2, v3}, Lcom/sigmob/sdk/mraid/k;->a(II)V

    goto :goto_0

    :cond_1
    iget-object v2, p0, Lcom/sigmob/sdk/mraid/d;->e:Lcom/sigmob/sdk/mraid/k;

    iget v3, v1, Landroid/util/DisplayMetrics;->widthPixels:I

    iget v1, v1, Landroid/util/DisplayMetrics;->heightPixels:I

    invoke-virtual {v2, v3, v1}, Lcom/sigmob/sdk/mraid/k;->a(II)V

    :goto_0
    const/4 v1, 0x2

    new-array v1, v1, [I

    invoke-direct {p0}, Lcom/sigmob/sdk/mraid/d;->y()Landroid/view/ViewGroup;

    move-result-object v2

    invoke-virtual {v2, v1}, Landroid/view/View;->getLocationOnScreen([I)V

    iget-object v3, p0, Lcom/sigmob/sdk/mraid/d;->e:Lcom/sigmob/sdk/mraid/k;

    const/4 v4, 0x0

    aget v5, v1, v4

    const/4 v6, 0x1

    aget v7, v1, v6

    invoke-virtual {v2}, Landroid/view/View;->getWidth()I

    move-result v8

    invoke-virtual {v2}, Landroid/view/View;->getHeight()I

    move-result v9

    invoke-virtual {v3, v5, v7, v8, v9}, Lcom/sigmob/sdk/mraid/k;->a(IIII)V

    iget-object v3, p0, Lcom/sigmob/sdk/mraid/d;->e:Lcom/sigmob/sdk/mraid/k;

    aget v5, v1, v4

    aget v7, v1, v6

    invoke-virtual {v2}, Landroid/view/View;->getWidth()I

    move-result v8

    invoke-virtual {v2}, Landroid/view/View;->getHeight()I

    move-result v2

    invoke-virtual {v3, v5, v7, v8, v2}, Lcom/sigmob/sdk/mraid/k;->c(IIII)V

    invoke-virtual {v0, v1}, Landroid/view/View;->getLocationOnScreen([I)V

    iget-object v2, p0, Lcom/sigmob/sdk/mraid/d;->e:Lcom/sigmob/sdk/mraid/k;

    aget v3, v1, v4

    aget v1, v1, v6

    invoke-virtual {v0}, Landroid/view/View;->getWidth()I

    move-result v4

    invoke-virtual {v0}, Landroid/view/View;->getHeight()I

    move-result v0

    invoke-virtual {v2, v3, v1, v4, v0}, Lcom/sigmob/sdk/mraid/k;->b(IIII)V

    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->getInstance()Lcom/czhj/sdk/common/ClientMetadata;

    move-result-object v0

    invoke-virtual {v0}, Lcom/czhj/sdk/common/ClientMetadata;->getOrientationInt()Ljava/lang/Integer;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    if-ne v0, v6, :cond_2

    const-string v0, "portrait"

    goto :goto_1

    :cond_2
    const-string v0, "landscape"

    :goto_1
    new-instance v1, Lcom/sigmob/sdk/base/models/CurrentAppOrientation;

    invoke-direct {v1, v0, v6}, Lcom/sigmob/sdk/base/models/CurrentAppOrientation;-><init>(Ljava/lang/String;Z)V

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/d;->f:Lcom/sigmob/sdk/mraid/b;

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/mraid/b;->a(Lcom/sigmob/sdk/base/models/CurrentAppOrientation;)V

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/d;->f:Lcom/sigmob/sdk/mraid/b;

    iget-object v1, p0, Lcom/sigmob/sdk/mraid/d;->e:Lcom/sigmob/sdk/mraid/k;

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/mraid/b;->a(Lcom/sigmob/sdk/mraid/k;)V

    if-eqz p1, :cond_3

    invoke-interface {p1}, Ljava/lang/Runnable;->run()V

    :cond_3
    return-void
.end method

.method private a(Ljava/lang/String;Ljava/util/Map;)V
    .locals 10
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/d;->m:Lcom/sigmob/sdk/mraid/d$a;

    if-nez v0, :cond_0

    return-void

    :cond_0
    :try_start_0
    const-string v0, "ext"

    invoke-interface {p2, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    invoke-static {v0}, Lcom/sigmob/sdk/mraid/b;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    const-string v1, "ctime"

    invoke-interface {p2, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    invoke-static {v1}, Lcom/sigmob/sdk/mraid/b;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    const-string v2, "state"

    invoke-interface {p2, v2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p2

    check-cast p2, Ljava/lang/String;

    invoke-static {p2}, Lcom/sigmob/sdk/mraid/b;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    const/4 v2, -0x1

    invoke-virtual {p1}, Ljava/lang/String;->hashCode()I

    move-result v3

    const/4 v4, 0x0

    const/4 v5, 0x5

    const/4 v6, 0x4

    const/4 v7, 0x3

    const/4 v8, 0x2

    const/4 v9, 0x1

    sparse-switch v3, :sswitch_data_0

    goto :goto_0

    :sswitch_0
    const-string v3, "showSkipTime"

    invoke-virtual {p1, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_1

    move v2, v5

    goto :goto_0

    :sswitch_1
    const-string v3, "voice"

    invoke-virtual {p1, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_1

    move v2, v8

    goto :goto_0

    :sswitch_2
    const-string v3, "skipAd"

    invoke-virtual {p1, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_1

    move v2, v4

    goto :goto_0

    :sswitch_3
    const-string v3, "reward"

    invoke-virtual {p1, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_1

    move v2, v9

    goto :goto_0

    :sswitch_4
    const-string v3, "companionClick"

    invoke-virtual {p1, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_1

    move v2, v6

    goto :goto_0

    :sswitch_5
    const-string v3, "endcardShow"

    invoke-virtual {p1, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_1

    move v2, v7

    :cond_1
    :goto_0
    const/4 p1, 0x0

    if-eqz v2, :cond_9

    if-eq v2, v9, :cond_8

    if-eq v2, v8, :cond_5

    if-eq v2, v7, :cond_4

    if-eq v2, v6, :cond_3

    if-eq v2, v5, :cond_2

    goto :goto_1

    :cond_2
    iget-object p1, p0, Lcom/sigmob/sdk/mraid/d;->m:Lcom/sigmob/sdk/mraid/d$a;

    invoke-interface {p1}, Lcom/sigmob/sdk/mraid/d$a;->b()V

    goto :goto_1

    :cond_3
    iget-object p1, p0, Lcom/sigmob/sdk/mraid/d;->m:Lcom/sigmob/sdk/mraid/d$a;

    invoke-interface {p1, v0}, Lcom/sigmob/sdk/mraid/d$a;->a(Ljava/lang/String;)V

    goto :goto_1

    :cond_4
    iget-object p1, p0, Lcom/sigmob/sdk/mraid/d;->m:Lcom/sigmob/sdk/mraid/d$a;

    invoke-interface {p1}, Lcom/sigmob/sdk/mraid/d$a;->a()V

    goto :goto_1

    :cond_5
    const-string p1, "true"

    invoke-virtual {p2, p1}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result p1

    if-nez p1, :cond_6

    const-string p1, "1"

    invoke-virtual {p2, p1}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result p1

    if-eqz p1, :cond_7

    :cond_6
    move v4, v9

    :cond_7
    iget-object p1, p0, Lcom/sigmob/sdk/mraid/d;->m:Lcom/sigmob/sdk/mraid/d$a;

    invoke-interface {p1, v4}, Lcom/sigmob/sdk/mraid/d$a;->a(Z)V

    goto :goto_1

    :cond_8
    invoke-static {p1}, Ljava/lang/Float;->valueOf(F)Ljava/lang/Float;

    move-result-object p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_2

    :try_start_1
    invoke-static {v1}, Ljava/lang/Float;->valueOf(Ljava/lang/String;)Ljava/lang/Float;

    move-result-object p1
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :catchall_0
    :try_start_2
    iget-object p2, p0, Lcom/sigmob/sdk/mraid/d;->m:Lcom/sigmob/sdk/mraid/d$a;

    invoke-virtual {p1}, Ljava/lang/Float;->floatValue()F

    move-result p1

    invoke-interface {p2, p1}, Lcom/sigmob/sdk/mraid/d$a;->a(F)V

    goto :goto_1

    :cond_9
    invoke-static {p1}, Ljava/lang/Float;->valueOf(F)Ljava/lang/Float;

    move-result-object p1
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_2

    :try_start_3
    invoke-static {v1}, Ljava/lang/Float;->valueOf(Ljava/lang/String;)Ljava/lang/Float;

    move-result-object p1
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_1

    :catchall_1
    :try_start_4
    iget-object p2, p0, Lcom/sigmob/sdk/mraid/d;->m:Lcom/sigmob/sdk/mraid/d$a;

    invoke-virtual {p1}, Ljava/lang/Float;->floatValue()F

    move-result p1

    invoke-interface {p2, p1}, Lcom/sigmob/sdk/mraid/d$a;->b(F)V
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_2

    :catchall_2
    :goto_1
    return-void

    :sswitch_data_0
    .sparse-switch
        -0x5ff9bff8 -> :sswitch_5
        -0x41b70624 -> :sswitch_4
        -0x37b0b0d1 -> :sswitch_3
        -0x35ad75fe -> :sswitch_2
        0x6b2e132 -> :sswitch_1
        0x4d18c709 -> :sswitch_0
    .end sparse-switch
.end method

.method static synthetic b(Lcom/sigmob/sdk/mraid/d;)Lcom/sigmob/sdk/mraid/b;
    .locals 0

    iget-object p0, p0, Lcom/sigmob/sdk/mraid/d;->f:Lcom/sigmob/sdk/mraid/b;

    return-object p0
.end method

.method private b(Lcom/sigmob/sdk/base/models/ViewState;)V
    .locals 2

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "MRAID state set to "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/d;->l:Lcom/sigmob/sdk/base/models/ViewState;

    iput-object p1, p0, Lcom/sigmob/sdk/mraid/d;->l:Lcom/sigmob/sdk/base/models/ViewState;

    iget-object v1, p0, Lcom/sigmob/sdk/mraid/d;->f:Lcom/sigmob/sdk/mraid/b;

    invoke-virtual {v1, p1}, Lcom/sigmob/sdk/mraid/b;->a(Lcom/sigmob/sdk/base/models/ViewState;)V

    iget-object v1, p0, Lcom/sigmob/sdk/mraid/d;->m:Lcom/sigmob/sdk/mraid/d$a;

    if-eqz v1, :cond_0

    invoke-static {v1, v0, p1}, Lcom/sigmob/sdk/mraid/d;->a(Lcom/sigmob/sdk/mraid/d$a;Lcom/sigmob/sdk/base/models/ViewState;Lcom/sigmob/sdk/base/models/ViewState;)V

    :cond_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "setViewState state set to "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    const/4 p1, 0x0

    invoke-direct {p0, p1}, Lcom/sigmob/sdk/mraid/d;->a(Ljava/lang/Runnable;)V

    return-void
.end method

.method static synthetic b(Lcom/sigmob/sdk/mraid/d;Ljava/lang/String;Ljava/util/Map;)V
    .locals 0

    invoke-direct {p0, p1, p2}, Lcom/sigmob/sdk/mraid/d;->a(Ljava/lang/String;Ljava/util/Map;)V

    return-void
.end method

.method private b(Ljava/lang/String;Ljava/util/Map;)V
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/d;->p:Lcom/sigmob/sdk/mraid/d$f;

    if-nez v0, :cond_0

    return-void

    :cond_0
    const/4 v0, -0x1

    invoke-virtual {p1}, Ljava/lang/String;->hashCode()I

    move-result v1

    sparse-switch v1, :sswitch_data_0

    goto/16 :goto_0

    :sswitch_0
    const-string v1, "AdPlaying"

    invoke-virtual {p1, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_1

    const/4 v0, 0x4

    goto :goto_0

    :sswitch_1
    const-string v1, "AdClickThru"

    invoke-virtual {p1, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_1

    const/4 v0, 0x0

    goto :goto_0

    :sswitch_2
    const-string v1, "AdVideoStart"

    invoke-virtual {p1, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_1

    const/16 v0, 0x9

    goto :goto_0

    :sswitch_3
    const-string v1, "AdError"

    invoke-virtual {p1, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_1

    const/4 v0, 0x1

    goto :goto_0

    :sswitch_4
    const-string v1, "AdVideoFirstQuartile"

    invoke-virtual {p1, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_1

    const/4 v0, 0x6

    goto :goto_0

    :sswitch_5
    const-string v1, "AdVideoComplete"

    invoke-virtual {p1, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_1

    const/4 v0, 0x5

    goto :goto_0

    :sswitch_6
    const-string v1, "AdVideoMidpoint"

    invoke-virtual {p1, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_1

    const/16 v0, 0x8

    goto :goto_0

    :sswitch_7
    const-string v1, "AdVideoThirdQuartile"

    invoke-virtual {p1, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_1

    const/4 v0, 0x7

    goto :goto_0

    :sswitch_8
    const-string v1, "AdImpression"

    invoke-virtual {p1, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_1

    const/4 v0, 0x2

    goto :goto_0

    :sswitch_9
    const-string v1, "AdPaused"

    invoke-virtual {p1, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_1

    const/4 v0, 0x3

    :cond_1
    :goto_0
    packed-switch v0, :pswitch_data_0

    goto :goto_1

    :pswitch_0
    iget-object p1, p0, Lcom/sigmob/sdk/mraid/d;->p:Lcom/sigmob/sdk/mraid/d$f;

    invoke-interface {p1}, Lcom/sigmob/sdk/mraid/d$f;->h()V

    goto :goto_1

    :pswitch_1
    iget-object p1, p0, Lcom/sigmob/sdk/mraid/d;->p:Lcom/sigmob/sdk/mraid/d$f;

    invoke-interface {p1}, Lcom/sigmob/sdk/mraid/d$f;->g()V

    goto :goto_1

    :pswitch_2
    iget-object p1, p0, Lcom/sigmob/sdk/mraid/d;->p:Lcom/sigmob/sdk/mraid/d$f;

    invoke-interface {p1}, Lcom/sigmob/sdk/mraid/d$f;->f()V

    goto :goto_1

    :pswitch_3
    iget-object p1, p0, Lcom/sigmob/sdk/mraid/d;->p:Lcom/sigmob/sdk/mraid/d$f;

    invoke-interface {p1}, Lcom/sigmob/sdk/mraid/d$f;->e()V

    goto :goto_1

    :pswitch_4
    iget-object p1, p0, Lcom/sigmob/sdk/mraid/d;->p:Lcom/sigmob/sdk/mraid/d$f;

    invoke-interface {p1}, Lcom/sigmob/sdk/mraid/d$f;->d()V

    goto :goto_1

    :pswitch_5
    iget-object p1, p0, Lcom/sigmob/sdk/mraid/d;->p:Lcom/sigmob/sdk/mraid/d$f;

    invoke-interface {p1}, Lcom/sigmob/sdk/mraid/d$f;->c()V

    goto :goto_1

    :pswitch_6
    iget-object p1, p0, Lcom/sigmob/sdk/mraid/d;->p:Lcom/sigmob/sdk/mraid/d$f;

    invoke-interface {p1}, Lcom/sigmob/sdk/mraid/d$f;->b()V

    goto :goto_1

    :pswitch_7
    iget-object p1, p0, Lcom/sigmob/sdk/mraid/d;->p:Lcom/sigmob/sdk/mraid/d$f;

    invoke-interface {p1}, Lcom/sigmob/sdk/mraid/d$f;->a()V

    goto :goto_1

    :pswitch_8
    iget-object p1, p0, Lcom/sigmob/sdk/mraid/d;->p:Lcom/sigmob/sdk/mraid/d$f;

    invoke-interface {p1, p2}, Lcom/sigmob/sdk/mraid/d$f;->b(Ljava/util/Map;)V

    goto :goto_1

    :pswitch_9
    iget-object p1, p0, Lcom/sigmob/sdk/mraid/d;->p:Lcom/sigmob/sdk/mraid/d$f;

    invoke-interface {p1, p2}, Lcom/sigmob/sdk/mraid/d$f;->a(Ljava/util/Map;)V

    :goto_1
    return-void

    :sswitch_data_0
    .sparse-switch
        -0x67d2f0af -> :sswitch_9
        -0x648cc154 -> :sswitch_8
        -0x5b14d70e -> :sswitch_7
        -0x369ee9a0 -> :sswitch_6
        0x754eb51 -> :sswitch_5
        0x160d1d3b -> :sswitch_4
        0x1d1b8b85 -> :sswitch_3
        0x332b014a -> :sswitch_2
        0x3d13385c -> :sswitch_1
        0x7f231e6b -> :sswitch_0
    .end sparse-switch

    :pswitch_data_0
    .packed-switch 0x0
        :pswitch_9
        :pswitch_8
        :pswitch_7
        :pswitch_6
        :pswitch_5
        :pswitch_4
        :pswitch_3
        :pswitch_2
        :pswitch_1
        :pswitch_0
    .end packed-switch
.end method

.method static synthetic c(Lcom/sigmob/sdk/mraid/d;)Lcom/sigmob/sdk/mraid/o;
    .locals 0

    iget-object p0, p0, Lcom/sigmob/sdk/mraid/d;->q:Lcom/sigmob/sdk/mraid/o;

    return-object p0
.end method

.method static synthetic d(Lcom/sigmob/sdk/mraid/d;)Landroid/widget/FrameLayout;
    .locals 0

    iget-object p0, p0, Lcom/sigmob/sdk/mraid/d;->c:Landroid/widget/FrameLayout;

    return-object p0
.end method

.method static synthetic e(Lcom/sigmob/sdk/mraid/d;)Lcom/sigmob/sdk/mraid/d$a;
    .locals 0

    iget-object p0, p0, Lcom/sigmob/sdk/mraid/d;->m:Lcom/sigmob/sdk/mraid/d$a;

    return-object p0
.end method

.method static synthetic f(Lcom/sigmob/sdk/mraid/d;)Lcom/sigmob/sdk/mraid/d$e;
    .locals 0

    iget-object p0, p0, Lcom/sigmob/sdk/mraid/d;->n:Lcom/sigmob/sdk/mraid/d$e;

    return-object p0
.end method

.method static synthetic g(Lcom/sigmob/sdk/mraid/d;)Z
    .locals 0

    iget-boolean p0, p0, Lcom/sigmob/sdk/mraid/d;->h:Z

    return p0
.end method

.method static synthetic h(Lcom/sigmob/sdk/mraid/d;)Lcom/sigmob/sdk/mraid/d$f;
    .locals 0

    iget-object p0, p0, Lcom/sigmob/sdk/mraid/d;->p:Lcom/sigmob/sdk/mraid/d$f;

    return-object p0
.end method

.method static synthetic i(Lcom/sigmob/sdk/mraid/d;)Ljava/lang/Integer;
    .locals 0

    iget-object p0, p0, Lcom/sigmob/sdk/mraid/d;->i:Ljava/lang/Integer;

    return-object p0
.end method

.method static synthetic j(Lcom/sigmob/sdk/mraid/d;)Landroid/content/Context;
    .locals 0

    invoke-direct {p0}, Lcom/sigmob/sdk/mraid/d;->v()Landroid/content/Context;

    move-result-object p0

    return-object p0
.end method

.method static synthetic k(Lcom/sigmob/sdk/mraid/d;)Lcom/sigmob/sdk/mraid/h;
    .locals 0

    iget-object p0, p0, Lcom/sigmob/sdk/mraid/d;->g:Lcom/sigmob/sdk/mraid/h;

    return-object p0
.end method

.method static synthetic l(Lcom/sigmob/sdk/mraid/d;)Lcom/sigmob/sdk/base/models/PlacementType;
    .locals 0

    iget-object p0, p0, Lcom/sigmob/sdk/mraid/d;->a:Lcom/sigmob/sdk/base/models/PlacementType;

    return-object p0
.end method

.method static synthetic m(Lcom/sigmob/sdk/mraid/d;)Lcom/sigmob/sdk/base/models/BaseAdUnit;
    .locals 0

    iget-object p0, p0, Lcom/sigmob/sdk/mraid/d;->b:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    return-object p0
.end method

.method static synthetic n(Lcom/sigmob/sdk/mraid/d;)Z
    .locals 0

    iget-boolean p0, p0, Lcom/sigmob/sdk/mraid/d;->A:Z

    return p0
.end method

.method static synthetic o(Lcom/sigmob/sdk/mraid/d;)I
    .locals 0

    invoke-direct {p0}, Lcom/sigmob/sdk/mraid/d;->w()I

    move-result p0

    return p0
.end method

.method private v()Landroid/content/Context;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/d;->c:Landroid/widget/FrameLayout;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Landroid/widget/FrameLayout;->getContext()Landroid/content/Context;

    move-result-object v0

    return-object v0

    :cond_0
    const/4 v0, 0x0

    return-object v0
.end method

.method private w()I
    .locals 2

    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->getInstance()Lcom/czhj/sdk/common/ClientMetadata;

    move-result-object v0

    invoke-direct {p0}, Lcom/sigmob/sdk/mraid/d;->v()Landroid/content/Context;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/czhj/sdk/common/ClientMetadata;->getScreenOrientation(Landroid/content/Context;)I

    move-result v0

    return v0
.end method

.method private x()V
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/d;->f:Lcom/sigmob/sdk/mraid/b;

    invoke-virtual {v0}, Lcom/sigmob/sdk/mraid/b;->b()V

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/sigmob/sdk/mraid/d;->q:Lcom/sigmob/sdk/mraid/o;

    return-void
.end method

.method private y()Landroid/view/ViewGroup;
    .locals 2

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/d;->k:Landroid/view/ViewGroup;

    if-eqz v0, :cond_0

    return-object v0

    :cond_0
    invoke-direct {p0}, Lcom/sigmob/sdk/mraid/d;->v()Landroid/content/Context;

    move-result-object v0

    iget-object v1, p0, Lcom/sigmob/sdk/mraid/d;->c:Landroid/widget/FrameLayout;

    invoke-static {v0, v1}, Lcom/czhj/sdk/common/utils/ViewUtil;->getTopmostView(Landroid/content/Context;Landroid/view/View;)Landroid/view/View;

    move-result-object v0

    instance-of v1, v0, Landroid/view/ViewGroup;

    if-eqz v1, :cond_1

    check-cast v0, Landroid/view/ViewGroup;

    goto :goto_0

    :cond_1
    iget-object v0, p0, Lcom/sigmob/sdk/mraid/d;->c:Landroid/widget/FrameLayout;

    :goto_0
    iput-object v0, p0, Lcom/sigmob/sdk/mraid/d;->k:Landroid/view/ViewGroup;

    return-object v0
.end method


# virtual methods
.method a(III)I
    .locals 0

    invoke-static {p2, p3}, Ljava/lang/Math;->min(II)I

    move-result p2

    invoke-static {p1, p2}, Ljava/lang/Math;->max(II)I

    move-result p1

    return p1
.end method

.method public a()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/d;->f:Lcom/sigmob/sdk/mraid/b;

    invoke-virtual {v0}, Lcom/sigmob/sdk/mraid/b;->a()Ljava/lang/String;

    move-result-object v0

    return-object v0
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

    const/4 p1, 0x0

    invoke-direct {p0, p1}, Lcom/sigmob/sdk/mraid/d;->a(Ljava/lang/Runnable;)V

    return-void
.end method

.method a(II)V
    .locals 2
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/d;->e:Lcom/sigmob/sdk/mraid/k;

    const/4 v1, 0x0

    invoke-virtual {v0, v1, v1, p1, p2}, Lcom/sigmob/sdk/mraid/k;->a(IIII)V

    return-void
.end method

.method a(IIIILcom/sigmob/sdk/mraid/a$a;Z)V
    .locals 0
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/sigmob/sdk/mraid/c;
        }
    .end annotation

    return-void
.end method

.method public a(Landroid/app/Activity;)V
    .locals 4

    iget-object p1, p0, Lcom/sigmob/sdk/mraid/d;->b:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getRvAdSetting()Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;

    move-result-object p1

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/sigmob/sdk/mraid/d;->b:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getSkipSeconds()I

    move-result p1

    const/4 v0, -0x1

    if-eq p1, v0, :cond_0

    iget-object p1, p0, Lcom/sigmob/sdk/mraid/d;->b:Lcom/sigmob/sdk/base/models/BaseAdUnit;

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

    new-instance v1, Lcom/sigmob/sdk/mraid/d$4;

    invoke-direct {v1, p0}, Lcom/sigmob/sdk/mraid/d$4;-><init>(Lcom/sigmob/sdk/mraid/d;)V

    mul-int/lit16 p1, p1, 0x3e8

    int-to-long v2, p1

    invoke-virtual {v0, v1, v2, v3}, Landroid/os/Handler;->postDelayed(Ljava/lang/Runnable;J)Z

    return-void
.end method

.method public a(Landroid/webkit/ValueCallback;)V
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/d;->f:Lcom/sigmob/sdk/mraid/b;

    invoke-virtual {v0, p1}, Lcom/sigmob/sdk/mraid/b;->a(Landroid/webkit/ValueCallback;)V

    return-void
.end method

.method public a(Lcom/sigmob/sdk/base/common/e;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/mraid/d;->B:Lcom/sigmob/sdk/base/common/e;

    return-void
.end method

.method a(Lcom/sigmob/sdk/base/models/ViewState;)V
    .locals 0
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    iput-object p1, p0, Lcom/sigmob/sdk/mraid/d;->l:Lcom/sigmob/sdk/base/models/ViewState;

    return-void
.end method

.method public a(Lcom/sigmob/sdk/mraid/d$a;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/mraid/d;->m:Lcom/sigmob/sdk/mraid/d$a;

    return-void
.end method

.method a(Lcom/sigmob/sdk/mraid/d$c;)V
    .locals 0
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    iput-object p1, p0, Lcom/sigmob/sdk/mraid/d;->r:Lcom/sigmob/sdk/mraid/d$c;

    return-void
.end method

.method public a(Lcom/sigmob/sdk/mraid/d$e;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/mraid/d;->n:Lcom/sigmob/sdk/mraid/d$e;

    return-void
.end method

.method public a(Lcom/sigmob/sdk/mraid/d$f;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/mraid/d;->p:Lcom/sigmob/sdk/mraid/d$f;

    return-void
.end method

.method public a(Lcom/sigmob/sdk/mraid/q;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/mraid/d;->o:Lcom/sigmob/sdk/mraid/q;

    return-void
.end method

.method a(Lcom/sigmob/windad/WindAdError;)V
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/d;->m:Lcom/sigmob/sdk/mraid/d$a;

    if-eqz v0, :cond_0

    invoke-interface {v0, p1}, Lcom/sigmob/sdk/mraid/d$a;->a(Lcom/sigmob/windad/WindAdError;)V

    :cond_0
    return-void
.end method

.method a(Ljava/lang/String;)V
    .locals 0

    return-void
.end method

.method public a(Ljava/lang/String;Lcom/sigmob/sdk/mraid/d$b;)V
    .locals 3

    new-instance v0, Lcom/sigmob/sdk/mraid/o;

    invoke-direct {p0}, Lcom/sigmob/sdk/mraid/d;->v()Landroid/content/Context;

    move-result-object v1

    invoke-direct {v0, v1}, Lcom/sigmob/sdk/mraid/o;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/sigmob/sdk/mraid/d;->q:Lcom/sigmob/sdk/mraid/o;

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/mraid/o;->a(Z)V

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/d;->q:Lcom/sigmob/sdk/mraid/o;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/mraid/o;->setBackgroundColor(I)V

    if-eqz p2, :cond_0

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/d;->q:Lcom/sigmob/sdk/mraid/o;

    const/4 v1, 0x0

    invoke-interface {p2, v0, v1}, Lcom/sigmob/sdk/mraid/d$b;->a(Lcom/sigmob/sdk/mraid/o;Lcom/sigmob/sdk/base/common/r;)V

    :cond_0
    iget-object p2, p0, Lcom/sigmob/sdk/mraid/d;->f:Lcom/sigmob/sdk/mraid/b;

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/d;->q:Lcom/sigmob/sdk/mraid/o;

    invoke-virtual {p2, v0}, Lcom/sigmob/sdk/mraid/b;->a(Lcom/sigmob/sdk/mraid/o;)V

    iget-object p2, p0, Lcom/sigmob/sdk/mraid/d;->c:Landroid/widget/FrameLayout;

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/d;->q:Lcom/sigmob/sdk/mraid/o;

    new-instance v1, Landroid/widget/FrameLayout$LayoutParams;

    const/4 v2, -0x1

    invoke-direct {v1, v2, v2}, Landroid/widget/FrameLayout$LayoutParams;-><init>(II)V

    invoke-virtual {p2, v0, v1}, Landroid/widget/FrameLayout;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    iget-object p2, p0, Lcom/sigmob/sdk/mraid/d;->f:Lcom/sigmob/sdk/mraid/b;

    invoke-direct {p0}, Lcom/sigmob/sdk/mraid/d;->v()Landroid/content/Context;

    move-result-object v0

    invoke-virtual {p2, v0, p1}, Lcom/sigmob/sdk/mraid/b;->a(Landroid/content/Context;Ljava/lang/String;)V

    return-void
.end method

.method public a(Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/d;->f:Lcom/sigmob/sdk/mraid/b;

    invoke-virtual {v0, p1, p2}, Lcom/sigmob/sdk/mraid/b;->a(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method a(Ljava/net/URI;ILjava/lang/String;)V
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/d;->m:Lcom/sigmob/sdk/mraid/d$a;

    if-eqz v0, :cond_0

    invoke-interface {v0, p1, p2, p3}, Lcom/sigmob/sdk/mraid/d$a;->a(Ljava/net/URI;ILjava/lang/String;)V

    :cond_0
    return-void
.end method

.method a(Ljava/net/URI;Z)V
    .locals 0
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/sigmob/sdk/mraid/c;
        }
    .end annotation

    return-void
.end method

.method public a(Z)V
    .locals 0

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/sigmob/sdk/mraid/d;->f:Lcom/sigmob/sdk/mraid/b;

    invoke-virtual {p1}, Lcom/sigmob/sdk/mraid/b;->f()V

    goto :goto_0

    :cond_0
    iget-object p1, p0, Lcom/sigmob/sdk/mraid/d;->f:Lcom/sigmob/sdk/mraid/b;

    invoke-virtual {p1}, Lcom/sigmob/sdk/mraid/b;->g()V

    :goto_0
    return-void
.end method

.method a(ZLcom/sigmob/sdk/mraid/j;)V
    .locals 2
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/sigmob/sdk/mraid/c;
        }
    .end annotation

    invoke-virtual {p0, p2}, Lcom/sigmob/sdk/mraid/d;->a(Lcom/sigmob/sdk/mraid/j;)Z

    move-result v0

    if-eqz v0, :cond_2

    iput-boolean p1, p0, Lcom/sigmob/sdk/mraid/d;->t:Z

    iput-object p2, p0, Lcom/sigmob/sdk/mraid/d;->u:Lcom/sigmob/sdk/mraid/j;

    iget-object p1, p0, Lcom/sigmob/sdk/mraid/d;->l:Lcom/sigmob/sdk/base/models/ViewState;

    sget-object p2, Lcom/sigmob/sdk/base/models/ViewState;->EXPANDED:Lcom/sigmob/sdk/base/models/ViewState;

    if-eq p1, p2, :cond_0

    iget-object p1, p0, Lcom/sigmob/sdk/mraid/d;->a:Lcom/sigmob/sdk/base/models/PlacementType;

    sget-object p2, Lcom/sigmob/sdk/base/models/PlacementType;->INTERSTITIAL:Lcom/sigmob/sdk/base/models/PlacementType;

    if-ne p1, p2, :cond_1

    iget-boolean p1, p0, Lcom/sigmob/sdk/mraid/d;->v:Z

    if-nez p1, :cond_1

    :cond_0
    invoke-virtual {p0}, Lcom/sigmob/sdk/mraid/d;->n()V

    :cond_1
    return-void

    :cond_2
    new-instance p1, Lcom/sigmob/sdk/mraid/c;

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "Unable to force orientation to "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-direct {p1, p2}, Lcom/sigmob/sdk/mraid/c;-><init>(Ljava/lang/String;)V

    throw p1
.end method

.method a(Landroid/webkit/ConsoleMessage;)Z
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/d;->o:Lcom/sigmob/sdk/mraid/q;

    if-eqz v0, :cond_0

    invoke-interface {v0, p1}, Lcom/sigmob/sdk/mraid/q;->a(Landroid/webkit/ConsoleMessage;)Z

    move-result p1

    return p1

    :cond_0
    const/4 p1, 0x1

    return p1
.end method

.method a(Lcom/sigmob/sdk/mraid/j;)Z
    .locals 6

    sget-object v0, Lcom/sigmob/sdk/mraid/j;->c:Lcom/sigmob/sdk/mraid/j;

    const/4 v1, 0x1

    if-ne p1, v0, :cond_0

    return v1

    :cond_0
    iget-object v0, p0, Lcom/sigmob/sdk/mraid/d;->c:Landroid/widget/FrameLayout;

    invoke-static {v0}, Lcom/czhj/sdk/common/utils/ViewUtil;->getActivityFromViewTop(Landroid/view/View;)Landroid/app/Activity;

    move-result-object v0

    const/4 v2, 0x0

    if-nez v0, :cond_1

    return v2

    :cond_1
    :try_start_0
    invoke-virtual {v0}, Landroid/app/Activity;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object v3

    new-instance v4, Landroid/content/ComponentName;

    invoke-virtual {v0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v5

    invoke-direct {v4, v0, v5}, Landroid/content/ComponentName;-><init>(Landroid/content/Context;Ljava/lang/Class;)V

    invoke-virtual {v3, v4, v2}, Landroid/content/pm/PackageManager;->getActivityInfo(Landroid/content/ComponentName;I)Landroid/content/pm/ActivityInfo;

    move-result-object v0
    :try_end_0
    .catch Landroid/content/pm/PackageManager$NameNotFoundException; {:try_start_0 .. :try_end_0} :catch_0

    iget v0, v0, Landroid/content/pm/ActivityInfo;->screenOrientation:I

    const/4 v3, -0x1

    if-eq v0, v3, :cond_3

    invoke-virtual {p1}, Lcom/sigmob/sdk/mraid/j;->a()I

    move-result p1

    if-ne v0, p1, :cond_2

    goto :goto_0

    :cond_2
    move v1, v2

    :cond_3
    :goto_0
    return v1

    :catch_0
    return v2
.end method

.method a(Ljava/lang/String;Landroid/webkit/JsResult;)Z
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/d;->o:Lcom/sigmob/sdk/mraid/q;

    if-eqz v0, :cond_0

    invoke-interface {v0, p1, p2}, Lcom/sigmob/sdk/mraid/q;->a(Ljava/lang/String;Landroid/webkit/JsResult;)Z

    move-result p1

    return p1

    :cond_0
    invoke-virtual {p2}, Landroid/webkit/JsResult;->confirm()V

    const/4 p1, 0x1

    return p1
.end method

.method public b()V
    .locals 2

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/d;->f:Lcom/sigmob/sdk/mraid/b;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/mraid/b;->a(Z)V

    return-void
.end method

.method b(I)V
    .locals 2
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/sigmob/sdk/mraid/c;
        }
    .end annotation

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/d;->c:Landroid/widget/FrameLayout;

    invoke-static {v0}, Lcom/czhj/sdk/common/utils/ViewUtil;->getActivityFromViewTop(Landroid/view/View;)Landroid/app/Activity;

    move-result-object v0

    if-eqz v0, :cond_1

    iget-object v1, p0, Lcom/sigmob/sdk/mraid/d;->u:Lcom/sigmob/sdk/mraid/j;

    invoke-virtual {p0, v1}, Lcom/sigmob/sdk/mraid/d;->a(Lcom/sigmob/sdk/mraid/j;)Z

    move-result v1

    if-eqz v1, :cond_1

    iget-object v1, p0, Lcom/sigmob/sdk/mraid/d;->s:Ljava/lang/Integer;

    if-nez v1, :cond_0

    invoke-virtual {v0}, Landroid/app/Activity;->getRequestedOrientation()I

    move-result v1

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    iput-object v1, p0, Lcom/sigmob/sdk/mraid/d;->s:Ljava/lang/Integer;

    :cond_0
    :try_start_0
    invoke-virtual {v0, p1}, Landroid/app/Activity;->setRequestedOrientation(I)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "lockOrientation: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    :goto_0
    return-void

    :cond_1
    new-instance p1, Lcom/sigmob/sdk/mraid/c;

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "Attempted to lock orientation to unsupported value: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/mraid/d;->u:Lcom/sigmob/sdk/mraid/j;

    invoke-virtual {v1}, Lcom/sigmob/sdk/mraid/j;->name()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-direct {p1, v0}, Lcom/sigmob/sdk/mraid/c;-><init>(Ljava/lang/String;)V

    throw p1
.end method

.method public b(Ljava/lang/String;)V
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/d;->f:Lcom/sigmob/sdk/mraid/b;

    invoke-virtual {v0, p1}, Lcom/sigmob/sdk/mraid/b;->c(Ljava/lang/String;)V

    return-void
.end method

.method public b(Ljava/lang/String;Lcom/sigmob/sdk/mraid/d$b;)V
    .locals 3

    new-instance v0, Lcom/sigmob/sdk/mraid/o;

    invoke-direct {p0}, Lcom/sigmob/sdk/mraid/d;->v()Landroid/content/Context;

    move-result-object v1

    invoke-direct {v0, v1}, Lcom/sigmob/sdk/mraid/o;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/sigmob/sdk/mraid/d;->q:Lcom/sigmob/sdk/mraid/o;

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/mraid/o;->a(Z)V

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/d;->q:Lcom/sigmob/sdk/mraid/o;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/mraid/o;->setBackgroundColor(I)V

    if-eqz p2, :cond_0

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/d;->q:Lcom/sigmob/sdk/mraid/o;

    const/4 v1, 0x0

    invoke-interface {p2, v0, v1}, Lcom/sigmob/sdk/mraid/d$b;->a(Lcom/sigmob/sdk/mraid/o;Lcom/sigmob/sdk/base/common/r;)V

    :cond_0
    iget-object p2, p0, Lcom/sigmob/sdk/mraid/d;->f:Lcom/sigmob/sdk/mraid/b;

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/d;->q:Lcom/sigmob/sdk/mraid/o;

    invoke-virtual {p2, v0}, Lcom/sigmob/sdk/mraid/b;->a(Lcom/sigmob/sdk/mraid/o;)V

    iget-object p2, p0, Lcom/sigmob/sdk/mraid/d;->c:Landroid/widget/FrameLayout;

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/d;->q:Lcom/sigmob/sdk/mraid/o;

    new-instance v1, Landroid/widget/FrameLayout$LayoutParams;

    const/4 v2, -0x1

    invoke-direct {v1, v2, v2}, Landroid/widget/FrameLayout$LayoutParams;-><init>(II)V

    invoke-virtual {p2, v0, v1}, Landroid/widget/FrameLayout;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    iget-object p2, p0, Lcom/sigmob/sdk/mraid/d;->f:Lcom/sigmob/sdk/mraid/b;

    invoke-virtual {p2, p1}, Lcom/sigmob/sdk/mraid/b;->b(Ljava/lang/String;)V

    return-void
.end method

.method public b(Z)V
    .locals 0

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/sigmob/sdk/mraid/d;->f:Lcom/sigmob/sdk/mraid/b;

    invoke-virtual {p1}, Lcom/sigmob/sdk/mraid/b;->h()V

    goto :goto_0

    :cond_0
    iget-object p1, p0, Lcom/sigmob/sdk/mraid/d;->f:Lcom/sigmob/sdk/mraid/b;

    invoke-virtual {p1}, Lcom/sigmob/sdk/mraid/b;->g()V

    :goto_0
    return-void
.end method

.method public c()V
    .locals 2

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/d;->q:Lcom/sigmob/sdk/mraid/o;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/sigmob/sdk/mraid/o;->resumeTimers()V

    :cond_0
    iget-object v0, p0, Lcom/sigmob/sdk/mraid/d;->f:Lcom/sigmob/sdk/mraid/b;

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/mraid/b;->a(Z)V

    return-void
.end method

.method public c(Z)V
    .locals 0

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/sigmob/sdk/mraid/d;->f:Lcom/sigmob/sdk/mraid/b;

    invoke-virtual {p1}, Lcom/sigmob/sdk/mraid/b;->i()V

    :cond_0
    return-void
.end method

.method public d()V
    .locals 5

    new-instance v0, Lcom/sigmob/sdk/base/models/ExposureChange;

    new-instance v1, Landroid/graphics/Rect;

    invoke-direct {p0}, Lcom/sigmob/sdk/mraid/d;->y()Landroid/view/ViewGroup;

    move-result-object v2

    invoke-virtual {v2}, Landroid/view/ViewGroup;->getWidth()I

    move-result v2

    invoke-direct {p0}, Lcom/sigmob/sdk/mraid/d;->y()Landroid/view/ViewGroup;

    move-result-object v3

    invoke-virtual {v3}, Landroid/view/ViewGroup;->getHeight()I

    move-result v3

    const/4 v4, 0x0

    invoke-direct {v1, v4, v4, v2, v3}, Landroid/graphics/Rect;-><init>(IIII)V

    const/high16 v2, 0x42c80000    # 100.0f

    const/4 v3, 0x0

    invoke-direct {v0, v2, v1, v3}, Lcom/sigmob/sdk/base/models/ExposureChange;-><init>(FLandroid/graphics/Rect;Ljava/util/List;)V

    iget-object v1, p0, Lcom/sigmob/sdk/mraid/d;->f:Lcom/sigmob/sdk/mraid/b;

    invoke-virtual {v1, v0}, Lcom/sigmob/sdk/mraid/b;->a(Lcom/sigmob/sdk/base/models/ExposureChange;)V

    return-void
.end method

.method public d(Z)V
    .locals 1

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/sigmob/sdk/mraid/d;->v:Z

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/d;->q:Lcom/sigmob/sdk/mraid/o;

    if-eqz v0, :cond_0

    invoke-virtual {v0, p1}, Lcom/sigmob/sdk/mraid/o;->b(Z)V

    :cond_0
    return-void
.end method

.method public e()Ljava/lang/Integer;
    .locals 2

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/d;->i:Ljava/lang/Integer;

    if-eqz v0, :cond_0

    return-object v0

    :cond_0
    iget-object v0, p0, Lcom/sigmob/sdk/mraid/d;->f:Lcom/sigmob/sdk/mraid/b;

    new-instance v1, Lcom/sigmob/sdk/mraid/d$5;

    invoke-direct {v1, p0}, Lcom/sigmob/sdk/mraid/d$5;-><init>(Lcom/sigmob/sdk/mraid/d;)V

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/mraid/b;->b(Landroid/webkit/ValueCallback;)V

    const/4 v0, 0x0

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    return-object v0
.end method

.method protected e(Z)V
    .locals 1

    iput-boolean p1, p0, Lcom/sigmob/sdk/mraid/d;->h:Z

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/d;->n:Lcom/sigmob/sdk/mraid/d$e;

    if-eqz v0, :cond_0

    invoke-interface {v0, p1}, Lcom/sigmob/sdk/mraid/d$e;->a(Z)V

    :cond_0
    return-void
.end method

.method public f()Lcom/sigmob/sdk/mraid/o;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/d;->q:Lcom/sigmob/sdk/mraid/o;

    return-object v0
.end method

.method g()Z
    .locals 3

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/d;->c:Landroid/widget/FrameLayout;

    invoke-static {v0}, Lcom/czhj/sdk/common/utils/ViewUtil;->getActivityFromViewTop(Landroid/view/View;)Landroid/app/Activity;

    move-result-object v0

    if-eqz v0, :cond_2

    invoke-virtual {p0}, Lcom/sigmob/sdk/mraid/d;->f()Lcom/sigmob/sdk/mraid/o;

    move-result-object v1

    if-nez v1, :cond_0

    goto :goto_0

    :cond_0
    iget-object v1, p0, Lcom/sigmob/sdk/mraid/d;->a:Lcom/sigmob/sdk/base/models/PlacementType;

    sget-object v2, Lcom/sigmob/sdk/base/models/PlacementType;->INLINE:Lcom/sigmob/sdk/base/models/PlacementType;

    if-eq v1, v2, :cond_1

    const/4 v0, 0x1

    return v0

    :cond_1
    iget-object v1, p0, Lcom/sigmob/sdk/mraid/d;->g:Lcom/sigmob/sdk/mraid/h;

    invoke-virtual {p0}, Lcom/sigmob/sdk/mraid/d;->f()Lcom/sigmob/sdk/mraid/o;

    move-result-object v2

    invoke-virtual {v1, v0, v2}, Lcom/sigmob/sdk/mraid/h;->a(Landroid/app/Activity;Landroid/view/View;)Z

    move-result v0

    return v0

    :cond_2
    :goto_0
    const/4 v0, 0x0

    return v0
.end method

.method h()V
    .locals 7

    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->getInstance()Lcom/czhj/sdk/common/ClientMetadata;

    move-result-object v0

    invoke-virtual {v0}, Lcom/czhj/sdk/common/ClientMetadata;->getOrientationInt()Ljava/lang/Integer;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    const/4 v1, 0x1

    if-ne v0, v1, :cond_0

    const-string v0, "portrait"

    goto :goto_0

    :cond_0
    const-string v0, "landscape"

    :goto_0
    invoke-direct {p0}, Lcom/sigmob/sdk/mraid/d;->v()Landroid/content/Context;

    move-result-object v2

    invoke-virtual {v2}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v2

    invoke-virtual {v2}, Landroid/content/res/Resources;->getDisplayMetrics()Landroid/util/DisplayMetrics;

    move-result-object v2

    iget-object v3, p0, Lcom/sigmob/sdk/mraid/d;->B:Lcom/sigmob/sdk/base/common/e;

    if-eqz v3, :cond_1

    iget-object v2, p0, Lcom/sigmob/sdk/mraid/d;->e:Lcom/sigmob/sdk/mraid/k;

    invoke-virtual {v3}, Lcom/sigmob/sdk/base/common/e;->a()I

    move-result v3

    iget-object v4, p0, Lcom/sigmob/sdk/mraid/d;->B:Lcom/sigmob/sdk/base/common/e;

    invoke-virtual {v4}, Lcom/sigmob/sdk/base/common/e;->b()I

    move-result v4

    invoke-virtual {v2, v3, v4}, Lcom/sigmob/sdk/mraid/k;->a(II)V

    goto :goto_1

    :cond_1
    iget-object v3, p0, Lcom/sigmob/sdk/mraid/d;->e:Lcom/sigmob/sdk/mraid/k;

    iget v4, v2, Landroid/util/DisplayMetrics;->widthPixels:I

    iget v2, v2, Landroid/util/DisplayMetrics;->heightPixels:I

    invoke-virtual {v3, v4, v2}, Lcom/sigmob/sdk/mraid/k;->a(II)V

    :goto_1
    invoke-direct {p0}, Lcom/sigmob/sdk/mraid/d;->y()Landroid/view/ViewGroup;

    move-result-object v2

    iget-object v3, p0, Lcom/sigmob/sdk/mraid/d;->e:Lcom/sigmob/sdk/mraid/k;

    invoke-virtual {v2}, Landroid/view/View;->getMeasuredWidth()I

    move-result v4

    invoke-virtual {v2}, Landroid/view/View;->getMeasuredHeight()I

    move-result v5

    const/4 v6, 0x0

    invoke-virtual {v3, v6, v6, v4, v5}, Lcom/sigmob/sdk/mraid/k;->a(IIII)V

    iget-object v3, p0, Lcom/sigmob/sdk/mraid/d;->e:Lcom/sigmob/sdk/mraid/k;

    invoke-virtual {v2}, Landroid/view/View;->getMeasuredWidth()I

    move-result v4

    invoke-virtual {v2}, Landroid/view/View;->getMeasuredHeight()I

    move-result v5

    invoke-virtual {v3, v6, v6, v4, v5}, Lcom/sigmob/sdk/mraid/k;->c(IIII)V

    iget-object v3, p0, Lcom/sigmob/sdk/mraid/d;->e:Lcom/sigmob/sdk/mraid/k;

    invoke-virtual {v2}, Landroid/view/View;->getMeasuredWidth()I

    move-result v4

    invoke-virtual {v2}, Landroid/view/View;->getMeasuredHeight()I

    move-result v2

    invoke-virtual {v3, v6, v6, v4, v2}, Lcom/sigmob/sdk/mraid/k;->b(IIII)V

    new-instance v2, Lcom/sigmob/sdk/base/models/CurrentAppOrientation;

    invoke-direct {v2, v0, v1}, Lcom/sigmob/sdk/base/models/CurrentAppOrientation;-><init>(Ljava/lang/String;Z)V

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/d;->f:Lcom/sigmob/sdk/mraid/b;

    invoke-virtual {v0, v2}, Lcom/sigmob/sdk/mraid/b;->a(Lcom/sigmob/sdk/base/models/CurrentAppOrientation;)V

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/d;->f:Lcom/sigmob/sdk/mraid/b;

    iget-object v1, p0, Lcom/sigmob/sdk/mraid/d;->e:Lcom/sigmob/sdk/mraid/k;

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/mraid/b;->a(Lcom/sigmob/sdk/mraid/k;)V

    return-void
.end method

.method i()V
    .locals 2

    invoke-static {}, Lcom/sigmob/windad/WindAds;->sharedAds()Lcom/sigmob/windad/WindAds;

    move-result-object v0

    invoke-virtual {v0}, Lcom/sigmob/windad/WindAds;->getHandler()Landroid/os/Handler;

    move-result-object v0

    new-instance v1, Lcom/sigmob/sdk/mraid/d$6;

    invoke-direct {v1, p0}, Lcom/sigmob/sdk/mraid/d$6;-><init>(Lcom/sigmob/sdk/mraid/d;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method j()V
    .locals 2

    const/4 v0, 0x1

    :try_start_0
    iput-boolean v0, p0, Lcom/sigmob/sdk/mraid/d;->A:Z

    invoke-virtual {p0}, Lcom/sigmob/sdk/mraid/d;->h()V

    sget-object v1, Lcom/sigmob/sdk/base/models/ViewState;->DEFAULT:Lcom/sigmob/sdk/base/models/ViewState;

    invoke-direct {p0, v1}, Lcom/sigmob/sdk/mraid/d;->b(Lcom/sigmob/sdk/base/models/ViewState;)V

    invoke-virtual {p0}, Lcom/sigmob/sdk/mraid/d;->d()V

    iget-object v1, p0, Lcom/sigmob/sdk/mraid/d;->f:Lcom/sigmob/sdk/mraid/b;

    invoke-virtual {v1}, Lcom/sigmob/sdk/mraid/b;->e()V

    iget-object v1, p0, Lcom/sigmob/sdk/mraid/d;->f:Lcom/sigmob/sdk/mraid/b;

    invoke-virtual {v1, v0}, Lcom/sigmob/sdk/mraid/b;->a(Z)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    :try_start_1
    iget-object v0, p0, Lcom/sigmob/sdk/mraid/d;->f:Lcom/sigmob/sdk/mraid/b;

    invoke-virtual {v0}, Lcom/sigmob/sdk/mraid/b;->j()V

    invoke-virtual {p0}, Lcom/sigmob/sdk/mraid/d;->n()V

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/d;->f:Lcom/sigmob/sdk/mraid/b;

    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->getInstance()Lcom/czhj/sdk/common/ClientMetadata;

    move-result-object v1

    invoke-virtual {v1}, Lcom/czhj/sdk/common/ClientMetadata;->getLocation()Landroid/location/Location;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/mraid/b;->a(Landroid/location/Location;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_0

    :catchall_0
    :try_start_2
    const-string v0, "Failed to apply orientation."

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    goto :goto_0

    :catchall_1
    move-exception v0

    const-string v1, "handlePageLoad error"

    invoke-static {v1, v0}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;Ljava/lang/Throwable;)V

    :goto_0
    return-void
.end method

.method public k()V
    .locals 1

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/sigmob/sdk/mraid/d;->v:Z

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/d;->q:Lcom/sigmob/sdk/mraid/o;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/sigmob/sdk/mraid/o;->onResume()V

    :cond_0
    return-void
.end method

.method public l()V
    .locals 2

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/d;->d:Lcom/sigmob/sdk/mraid/d$d;

    invoke-virtual {v0}, Lcom/sigmob/sdk/mraid/d$d;->a()V

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/d;->w:Ljava/util/HashMap;

    invoke-virtual {v0}, Ljava/util/HashMap;->values()Ljava/util/Collection;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Collection;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/sigmob/sdk/mraid/i;

    invoke-virtual {v1}, Lcom/sigmob/sdk/mraid/i;->c()V

    goto :goto_0

    :cond_0
    iget-object v0, p0, Lcom/sigmob/sdk/mraid/d;->w:Ljava/util/HashMap;

    invoke-virtual {v0}, Ljava/util/HashMap;->clear()V

    :try_start_0
    iget-object v0, p0, Lcom/sigmob/sdk/mraid/d;->r:Lcom/sigmob/sdk/mraid/d$c;

    invoke-virtual {v0}, Lcom/sigmob/sdk/mraid/d$c;->a()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :try_start_1
    iget-object v0, p0, Lcom/sigmob/sdk/mraid/d;->z:Lcom/sigmob/sdk/nativead/APKStatusBroadcastReceiver;

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/d;->z:Lcom/sigmob/sdk/nativead/APKStatusBroadcastReceiver;

    iget-object v1, p0, Lcom/sigmob/sdk/mraid/d;->z:Lcom/sigmob/sdk/nativead/APKStatusBroadcastReceiver;

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/nativead/APKStatusBroadcastReceiver;->b(Landroid/content/BroadcastReceiver;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    :catchall_1
    :cond_1
    iget-boolean v0, p0, Lcom/sigmob/sdk/mraid/d;->v:Z

    if-nez v0, :cond_2

    const/4 v0, 0x1

    invoke-virtual {p0, v0}, Lcom/sigmob/sdk/mraid/d;->d(Z)V

    :cond_2
    invoke-direct {p0}, Lcom/sigmob/sdk/mraid/d;->x()V

    invoke-virtual {p0}, Lcom/sigmob/sdk/mraid/d;->o()V

    return-void
.end method

.method protected m()V
    .locals 4

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/d;->q:Lcom/sigmob/sdk/mraid/o;

    if-nez v0, :cond_0

    return-void

    :cond_0
    iget-object v0, p0, Lcom/sigmob/sdk/mraid/d;->l:Lcom/sigmob/sdk/base/models/ViewState;

    sget-object v1, Lcom/sigmob/sdk/base/models/ViewState;->LOADING:Lcom/sigmob/sdk/base/models/ViewState;

    if-eq v0, v1, :cond_6

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/d;->l:Lcom/sigmob/sdk/base/models/ViewState;

    sget-object v1, Lcom/sigmob/sdk/base/models/ViewState;->HIDDEN:Lcom/sigmob/sdk/base/models/ViewState;

    if-ne v0, v1, :cond_1

    goto :goto_2

    :cond_1
    iget-object v0, p0, Lcom/sigmob/sdk/mraid/d;->l:Lcom/sigmob/sdk/base/models/ViewState;

    sget-object v1, Lcom/sigmob/sdk/base/models/ViewState;->EXPANDED:Lcom/sigmob/sdk/base/models/ViewState;

    if-eq v0, v1, :cond_2

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/d;->a:Lcom/sigmob/sdk/base/models/PlacementType;

    sget-object v1, Lcom/sigmob/sdk/base/models/PlacementType;->INTERSTITIAL:Lcom/sigmob/sdk/base/models/PlacementType;

    if-ne v0, v1, :cond_3

    :cond_2
    invoke-virtual {p0}, Lcom/sigmob/sdk/mraid/d;->o()V

    :cond_3
    iget-object v0, p0, Lcom/sigmob/sdk/mraid/d;->l:Lcom/sigmob/sdk/base/models/ViewState;

    sget-object v1, Lcom/sigmob/sdk/base/models/ViewState;->RESIZED:Lcom/sigmob/sdk/base/models/ViewState;

    if-eq v0, v1, :cond_5

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/d;->l:Lcom/sigmob/sdk/base/models/ViewState;

    sget-object v1, Lcom/sigmob/sdk/base/models/ViewState;->EXPANDED:Lcom/sigmob/sdk/base/models/ViewState;

    if-ne v0, v1, :cond_4

    goto :goto_0

    :cond_4
    iget-object v0, p0, Lcom/sigmob/sdk/mraid/d;->l:Lcom/sigmob/sdk/base/models/ViewState;

    sget-object v1, Lcom/sigmob/sdk/base/models/ViewState;->DEFAULT:Lcom/sigmob/sdk/base/models/ViewState;

    if-ne v0, v1, :cond_6

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/d;->c:Landroid/widget/FrameLayout;

    const/4 v1, 0x4

    invoke-virtual {v0, v1}, Landroid/widget/FrameLayout;->setVisibility(I)V

    sget-object v0, Lcom/sigmob/sdk/base/models/ViewState;->HIDDEN:Lcom/sigmob/sdk/base/models/ViewState;

    goto :goto_1

    :cond_5
    :goto_0
    iget-object v0, p0, Lcom/sigmob/sdk/mraid/d;->c:Landroid/widget/FrameLayout;

    iget-object v1, p0, Lcom/sigmob/sdk/mraid/d;->q:Lcom/sigmob/sdk/mraid/o;

    new-instance v2, Landroid/widget/FrameLayout$LayoutParams;

    const/4 v3, -0x1

    invoke-direct {v2, v3, v3}, Landroid/widget/FrameLayout$LayoutParams;-><init>(II)V

    invoke-virtual {v0, v1, v2}, Landroid/widget/FrameLayout;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/d;->c:Landroid/widget/FrameLayout;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/widget/FrameLayout;->setVisibility(I)V

    sget-object v0, Lcom/sigmob/sdk/base/models/ViewState;->DEFAULT:Lcom/sigmob/sdk/base/models/ViewState;

    :goto_1
    invoke-direct {p0, v0}, Lcom/sigmob/sdk/mraid/d;->b(Lcom/sigmob/sdk/base/models/ViewState;)V

    :cond_6
    :goto_2
    return-void
.end method

.method n()V
    .locals 2
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/sigmob/sdk/mraid/c;
        }
    .end annotation

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/d;->u:Lcom/sigmob/sdk/mraid/j;

    sget-object v1, Lcom/sigmob/sdk/mraid/j;->c:Lcom/sigmob/sdk/mraid/j;

    if-ne v0, v1, :cond_2

    iget-boolean v0, p0, Lcom/sigmob/sdk/mraid/d;->t:Z

    if-eqz v0, :cond_0

    invoke-virtual {p0}, Lcom/sigmob/sdk/mraid/d;->o()V

    goto :goto_1

    :cond_0
    iget-object v0, p0, Lcom/sigmob/sdk/mraid/d;->c:Landroid/widget/FrameLayout;

    invoke-static {v0}, Lcom/czhj/sdk/common/utils/ViewUtil;->getActivityFromViewTop(Landroid/view/View;)Landroid/app/Activity;

    move-result-object v0

    if-eqz v0, :cond_1

    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->getInstance()Lcom/czhj/sdk/common/ClientMetadata;

    move-result-object v1

    invoke-virtual {v1, v0}, Lcom/czhj/sdk/common/ClientMetadata;->getScreenOrientation(Landroid/content/Context;)I

    move-result v0

    goto :goto_0

    :cond_1
    new-instance v0, Lcom/sigmob/sdk/mraid/c;

    const-string v1, "Unable to set MRAID expand orientation to \'none\'; expected passed in Activity Context."

    invoke-direct {v0, v1}, Lcom/sigmob/sdk/mraid/c;-><init>(Ljava/lang/String;)V

    throw v0

    :cond_2
    iget-object v0, p0, Lcom/sigmob/sdk/mraid/d;->u:Lcom/sigmob/sdk/mraid/j;

    invoke-virtual {v0}, Lcom/sigmob/sdk/mraid/j;->a()I

    move-result v0

    :goto_0
    invoke-virtual {p0, v0}, Lcom/sigmob/sdk/mraid/d;->b(I)V

    :goto_1
    return-void
.end method

.method o()V
    .locals 3

    :try_start_0
    iget-object v0, p0, Lcom/sigmob/sdk/mraid/d;->c:Landroid/widget/FrameLayout;

    invoke-static {v0}, Lcom/czhj/sdk/common/utils/ViewUtil;->getActivityFromViewTop(Landroid/view/View;)Landroid/app/Activity;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v1, p0, Lcom/sigmob/sdk/mraid/d;->s:Ljava/lang/Integer;

    if-eqz v1, :cond_0

    iget-object v1, p0, Lcom/sigmob/sdk/mraid/d;->s:Ljava/lang/Integer;

    invoke-virtual {v1}, Ljava/lang/Integer;->intValue()I

    move-result v1

    invoke-virtual {v0, v1}, Landroid/app/Activity;->setRequestedOrientation(I)V

    :cond_0
    const/4 v0, 0x0

    iput-object v0, p0, Lcom/sigmob/sdk/mraid/d;->s:Ljava/lang/Integer;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "unApplyOrientation: "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method public p()Landroid/widget/FrameLayout;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/d;->c:Landroid/widget/FrameLayout;

    return-object v0
.end method

.method q()Lcom/sigmob/sdk/base/models/ViewState;
    .locals 1
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/d;->l:Lcom/sigmob/sdk/base/models/ViewState;

    return-object v0
.end method

.method r()Ljava/lang/Integer;
    .locals 1
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/d;->s:Ljava/lang/Integer;

    return-object v0
.end method

.method s()Z
    .locals 1
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    iget-boolean v0, p0, Lcom/sigmob/sdk/mraid/d;->t:Z

    return v0
.end method

.method t()Lcom/sigmob/sdk/mraid/j;
    .locals 1
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/d;->u:Lcom/sigmob/sdk/mraid/j;

    return-object v0
.end method

.method u()Lcom/sigmob/sdk/mraid/o;
    .locals 1
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/d;->q:Lcom/sigmob/sdk/mraid/o;

    return-object v0
.end method
