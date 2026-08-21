.class public Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;
.super Lcom/tkay/basead/ui/BaseScreenATView;


# static fields
.field public static final TAG:Ljava/lang/String;


# instance fields
.field ae:Landroid/view/View;

.field af:Ljava/util/Timer;

.field private ag:Lcom/tkay/core/api/BaseAd;

.field private final ah:Lcom/tkay/core/common/j/a;

.field private final ai:Lcom/tkay/core/common/j/b;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 41
    const-class v0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->TAG:Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;)V
    .locals 0

    .line 55
    invoke-direct {p0, p1}, Lcom/tkay/basead/ui/BaseScreenATView;-><init>(Landroid/content/Context;)V

    .line 1016
    invoke-static {}, Lcom/tkay/core/common/j/c;->a()Lcom/tkay/core/common/j/a;

    move-result-object p1

    .line 46
    iput-object p1, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->ah:Lcom/tkay/core/common/j/a;

    .line 47
    new-instance p1, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView$1;

    invoke-direct {p1, p0}, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView$1;-><init>(Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;)V

    iput-object p1, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->ai:Lcom/tkay/core/common/j/b;

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Lcom/tkay/core/common/f/i;Lcom/tkay/core/common/f/h;Ljava/lang/String;IILcom/tkay/core/api/BaseAd;)V
    .locals 0

    .line 59
    invoke-direct/range {p0 .. p6}, Lcom/tkay/basead/ui/BaseScreenATView;-><init>(Landroid/content/Context;Lcom/tkay/core/common/f/i;Lcom/tkay/core/common/f/h;Ljava/lang/String;II)V

    .line 2016
    invoke-static {}, Lcom/tkay/core/common/j/c;->a()Lcom/tkay/core/common/j/a;

    move-result-object p1

    .line 46
    iput-object p1, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->ah:Lcom/tkay/core/common/j/a;

    .line 47
    new-instance p1, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView$1;

    invoke-direct {p1, p0}, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView$1;-><init>(Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;)V

    iput-object p1, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->ai:Lcom/tkay/core/common/j/b;

    .line 60
    iput-object p7, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->ag:Lcom/tkay/core/api/BaseAd;

    const/4 p1, 0x0

    new-array p2, p1, [Ljava/lang/Object;

    .line 61
    invoke-virtual {p7, p2}, Lcom/tkay/core/api/BaseAd;->getAdMediaView([Ljava/lang/Object;)Landroid/view/View;

    move-result-object p2

    iput-object p2, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->ae:Landroid/view/View;

    .line 63
    invoke-virtual {p0}, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->getContext()Landroid/content/Context;

    move-result-object p2

    const-string p3, "myoffer_thirdparty_full_screen_view_id"

    const-string p4, "id"

    invoke-static {p2, p3, p4}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result p2

    invoke-virtual {p0, p2}, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->setId(I)V

    .line 64
    iput p1, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->G:I

    return-void
.end method

.method private K()V
    .locals 5

    .line 167
    iget v0, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->L:I

    if-gez v0, :cond_0

    return-void

    .line 170
    :cond_0
    iget v0, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->L:I

    if-lez v0, :cond_1

    .line 171
    iget-object v0, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->ah:Lcom/tkay/core/common/j/a;

    iget-object v1, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->ai:Lcom/tkay/core/common/j/b;

    iget v2, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->L:I

    int-to-long v2, v2

    const/4 v4, 0x1

    invoke-interface {v0, v1, v2, v3, v4}, Lcom/tkay/core/common/j/a;->a(Lcom/tkay/core/common/j/b;JZ)V

    return-void

    .line 173
    :cond_1
    invoke-virtual {p0}, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->G()V

    return-void
.end method

.method private L()V
    .locals 3

    .line 191
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    .line 193
    iget-object v1, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->c:Lcom/tkay/core/common/f/i;

    iget-object v1, v1, Lcom/tkay/core/common/f/i;->m:Lcom/tkay/core/common/f/j;

    invoke-virtual {v1}, Lcom/tkay/core/common/f/j;->x()I

    move-result v1

    if-eqz v1, :cond_2

    const/4 v2, 0x1

    if-eq v1, v2, :cond_1

    const/4 v2, 0x2

    if-eq v1, v2, :cond_0

    goto :goto_0

    .line 207
    :cond_0
    iget-object v1, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->y:Lcom/tkay/basead/ui/PanelView;

    invoke-virtual {v1}, Lcom/tkay/basead/ui/PanelView;->getClickViews()Ljava/util/List;

    move-result-object v1

    invoke-interface {v0, v1}, Ljava/util/List;->addAll(Ljava/util/Collection;)Z

    .line 208
    iget-object v1, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->y:Lcom/tkay/basead/ui/PanelView;

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_0

    .line 202
    :cond_1
    iget-object v1, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->y:Lcom/tkay/basead/ui/PanelView;

    invoke-virtual {v1}, Lcom/tkay/basead/ui/PanelView;->getCTAButton()Landroid/view/View;

    move-result-object v1

    if-eqz v1, :cond_3

    .line 203
    iget-object v1, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->y:Lcom/tkay/basead/ui/PanelView;

    invoke-virtual {v1}, Lcom/tkay/basead/ui/PanelView;->getCTAButton()Landroid/view/View;

    move-result-object v1

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_0

    .line 195
    :cond_2
    iget-object v1, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->y:Lcom/tkay/basead/ui/PanelView;

    invoke-virtual {v1}, Lcom/tkay/basead/ui/PanelView;->getClickViews()Ljava/util/List;

    move-result-object v1

    invoke-interface {v0, v1}, Ljava/util/List;->addAll(Ljava/util/Collection;)Z

    .line 196
    iget-object v1, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->y:Lcom/tkay/basead/ui/PanelView;

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 197
    iget-object v1, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->z:Lcom/tkay/basead/ui/BaseEndCardView;

    if-eqz v1, :cond_3

    .line 198
    iget-object v1, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->z:Lcom/tkay/basead/ui/BaseEndCardView;

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 211
    :cond_3
    :goto_0
    iget-object v1, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->ag:Lcom/tkay/core/api/BaseAd;

    const/4 v2, 0x0

    invoke-virtual {v1, p0, v0, v2}, Lcom/tkay/core/api/BaseAd;->registerListener(Landroid/view/View;Ljava/util/List;Landroid/widget/FrameLayout$LayoutParams;)V

    return-void
.end method

.method private M()V
    .locals 7

    .line 502
    iget-object v0, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->af:Ljava/util/Timer;

    if-nez v0, :cond_0

    .line 503
    new-instance v1, Ljava/util/Timer;

    invoke-direct {v1}, Ljava/util/Timer;-><init>()V

    iput-object v1, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->af:Ljava/util/Timer;

    .line 504
    new-instance v2, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView$5;

    invoke-direct {v2, p0}, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView$5;-><init>(Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;)V

    const-wide/16 v3, 0x0

    const-wide/16 v5, 0x12c

    invoke-virtual/range {v1 .. v6}, Ljava/util/Timer;->schedule(Ljava/util/TimerTask;JJ)V

    :cond_0
    return-void
.end method

.method private N()V
    .locals 1

    .line 514
    iget-object v0, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->af:Ljava/util/Timer;

    if-eqz v0, :cond_0

    .line 515
    invoke-virtual {v0}, Ljava/util/Timer;->cancel()V

    :cond_0
    return-void
.end method

.method private O()V
    .locals 2

    .line 520
    iget-object v0, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->af:Ljava/util/Timer;

    if-eqz v0, :cond_0

    .line 521
    invoke-virtual {v0}, Ljava/util/Timer;->cancel()V

    const/4 v0, 0x0

    .line 522
    iput-object v0, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->af:Ljava/util/Timer;

    .line 524
    :cond_0
    iget-object v0, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->ah:Lcom/tkay/core/common/j/a;

    iget-object v1, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->ai:Lcom/tkay/core/common/j/b;

    invoke-interface {v0, v1}, Lcom/tkay/core/common/j/a;->a(Lcom/tkay/core/common/j/b;)V

    return-void
.end method

.method static synthetic a(Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;)V
    .locals 7

    .line 3502
    iget-object v0, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->af:Ljava/util/Timer;

    if-nez v0, :cond_0

    .line 3503
    new-instance v1, Ljava/util/Timer;

    invoke-direct {v1}, Ljava/util/Timer;-><init>()V

    iput-object v1, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->af:Ljava/util/Timer;

    .line 3504
    new-instance v2, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView$5;

    invoke-direct {v2, p0}, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView$5;-><init>(Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;)V

    const-wide/16 v3, 0x0

    const-wide/16 v5, 0x12c

    invoke-virtual/range {v1 .. v6}, Ljava/util/Timer;->schedule(Ljava/util/TimerTask;JJ)V

    :cond_0
    return-void
.end method

.method static synthetic a(Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;I)V
    .locals 1

    .line 4178
    new-instance v0, Lcom/tkay/basead/ui/-$$Lambda$ThirdPartyFullScreenATView$KGTMASoqLZMXr69F-klAnlgxrX4;

    invoke-direct {v0, p0, p1}, Lcom/tkay/basead/ui/-$$Lambda$ThirdPartyFullScreenATView$KGTMASoqLZMXr69F-klAnlgxrX4;-><init>(Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;I)V

    invoke-virtual {p0, v0}, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method static synthetic b(Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;)V
    .locals 0

    .line 3514
    iget-object p0, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->af:Ljava/util/Timer;

    if-eqz p0, :cond_0

    .line 3515
    invoke-virtual {p0}, Ljava/util/Timer;->cancel()V

    :cond_0
    return-void
.end method

.method static synthetic c(Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;)Lcom/tkay/core/api/BaseAd;
    .locals 0

    .line 39
    iget-object p0, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->ag:Lcom/tkay/core/api/BaseAd;

    return-object p0
.end method

.method private e(I)V
    .locals 1

    .line 178
    new-instance v0, Lcom/tkay/basead/ui/-$$Lambda$ThirdPartyFullScreenATView$KGTMASoqLZMXr69F-klAnlgxrX4;

    invoke-direct {v0, p0, p1}, Lcom/tkay/basead/ui/-$$Lambda$ThirdPartyFullScreenATView$KGTMASoqLZMXr69F-klAnlgxrX4;-><init>(Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;I)V

    invoke-virtual {p0, v0}, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method private synthetic f(I)V
    .locals 1

    mul-int/lit16 p1, p1, 0x3e8

    .line 180
    iget-object v0, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->H:Lcom/tkay/basead/ui/CountDownView;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->H:Lcom/tkay/basead/ui/CountDownView;

    invoke-virtual {v0}, Lcom/tkay/basead/ui/CountDownView;->isShown()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 181
    iget-object v0, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->H:Lcom/tkay/basead/ui/CountDownView;

    invoke-virtual {v0, p1}, Lcom/tkay/basead/ui/CountDownView;->refresh(I)V

    .line 184
    :cond_0
    iget v0, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->L:I

    if-ltz v0, :cond_1

    iget v0, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->L:I

    if-lt p1, v0, :cond_1

    .line 185
    invoke-virtual {p0}, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->G()V

    :cond_1
    return-void
.end method

.method public static synthetic lambda$KGTMASoqLZMXr69F-klAnlgxrX4(Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;I)V
    .locals 0

    invoke-direct {p0, p1}, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->f(I)V

    return-void
.end method


# virtual methods
.method protected final A()V
    .locals 0

    .line 492
    invoke-super {p0}, Lcom/tkay/basead/ui/BaseScreenATView;->C()V

    return-void
.end method

.method protected final G()V
    .locals 2

    .line 330
    invoke-super {p0}, Lcom/tkay/basead/ui/BaseScreenATView;->G()V

    .line 331
    iget-object v0, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->ah:Lcom/tkay/core/common/j/a;

    iget-object v1, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->ai:Lcom/tkay/core/common/j/b;

    invoke-interface {v0, v1}, Lcom/tkay/core/common/j/a;->a(Lcom/tkay/core/common/j/b;)V

    return-void
.end method

.method protected final H()V
    .locals 6

    .line 368
    iget-object v0, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->w:Landroid/widget/RelativeLayout;

    if-eqz v0, :cond_6

    iget-object v0, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->z:Lcom/tkay/basead/ui/BaseEndCardView;

    if-eqz v0, :cond_6

    .line 370
    new-instance v0, Landroid/widget/RelativeLayout$LayoutParams;

    const/4 v1, -0x1

    invoke-direct {v0, v1, v1}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    .line 371
    iget-object v2, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->z:Lcom/tkay/basead/ui/BaseEndCardView;

    invoke-virtual {v2, v0}, Lcom/tkay/basead/ui/BaseEndCardView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 377
    iget v0, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->Q:I

    invoke-virtual {p0, v0}, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->c(I)Z

    move-result v0

    const/4 v2, 0x1

    if-eqz v0, :cond_5

    .line 379
    iget v0, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->Q:I

    const/high16 v3, 0x3f000000    # 0.5f

    if-eq v0, v2, :cond_3

    const/4 v4, 0x2

    if-eq v0, v4, :cond_2

    const/4 v4, 0x5

    if-eq v0, v4, :cond_1

    const/4 v3, 0x6

    if-eq v0, v3, :cond_2

    const/16 v1, 0x8

    if-eq v0, v1, :cond_0

    goto/16 :goto_1

    .line 439
    :cond_0
    iget-object v0, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->y:Lcom/tkay/basead/ui/PanelView;

    invoke-virtual {v0}, Lcom/tkay/basead/ui/PanelView;->getShakeView()Landroid/view/View;

    move-result-object v0

    if-eqz v0, :cond_5

    .line 441
    invoke-virtual {v0, v1}, Landroid/view/View;->setVisibility(I)V

    goto/16 :goto_1

    .line 381
    :cond_1
    iget v0, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->D:I

    int-to-float v0, v0

    mul-float/2addr v0, v3

    float-to-int v0, v0

    .line 382
    iget v3, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->D:I

    sub-int/2addr v3, v0

    .line 384
    iget-object v4, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->z:Lcom/tkay/basead/ui/BaseEndCardView;

    new-instance v5, Landroid/widget/RelativeLayout$LayoutParams;

    invoke-direct {v5, v1, v3}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    invoke-virtual {v4, v5}, Lcom/tkay/basead/ui/BaseEndCardView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 386
    iget-object v1, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->y:Lcom/tkay/basead/ui/PanelView;

    invoke-virtual {v1}, Lcom/tkay/basead/ui/PanelView;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v1

    check-cast v1, Landroid/widget/RelativeLayout$LayoutParams;

    if-eqz v1, :cond_5

    .line 388
    iget v3, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->C:I

    iput v3, v1, Landroid/widget/RelativeLayout$LayoutParams;->width:I

    .line 389
    iput v0, v1, Landroid/widget/RelativeLayout$LayoutParams;->height:I

    .line 391
    iget-object v0, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->y:Lcom/tkay/basead/ui/PanelView;

    invoke-virtual {v0, v1}, Lcom/tkay/basead/ui/PanelView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 392
    iget-object v0, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->y:Lcom/tkay/basead/ui/PanelView;

    invoke-virtual {v0}, Lcom/tkay/basead/ui/PanelView;->removeAllViews()V

    .line 393
    iget-object v0, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->y:Lcom/tkay/basead/ui/PanelView;

    iget v1, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->Q:I

    invoke-virtual {v0, v1}, Lcom/tkay/basead/ui/PanelView;->setLayoutType(I)V

    goto/16 :goto_1

    .line 422
    :cond_2
    invoke-virtual {p0}, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->getContext()Landroid/content/Context;

    move-result-object v0

    const/high16 v3, 0x43960000    # 300.0f

    invoke-static {v0, v3}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;F)I

    move-result v0

    .line 423
    iget v3, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->C:I

    sub-int/2addr v3, v0

    .line 425
    iget-object v4, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->z:Lcom/tkay/basead/ui/BaseEndCardView;

    new-instance v5, Landroid/widget/RelativeLayout$LayoutParams;

    invoke-direct {v5, v3, v1}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    invoke-virtual {v4, v5}, Lcom/tkay/basead/ui/BaseEndCardView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 427
    iget-object v3, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->y:Lcom/tkay/basead/ui/PanelView;

    invoke-virtual {v3}, Lcom/tkay/basead/ui/PanelView;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v3

    check-cast v3, Landroid/widget/RelativeLayout$LayoutParams;

    if-eqz v3, :cond_5

    .line 429
    iput v0, v3, Landroid/widget/RelativeLayout$LayoutParams;->width:I

    .line 430
    iput v1, v3, Landroid/widget/RelativeLayout$LayoutParams;->height:I

    .line 432
    iget-object v0, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->y:Lcom/tkay/basead/ui/PanelView;

    invoke-virtual {v0, v3}, Lcom/tkay/basead/ui/PanelView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 433
    iget-object v0, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->y:Lcom/tkay/basead/ui/PanelView;

    invoke-virtual {v0}, Lcom/tkay/basead/ui/PanelView;->removeAllViews()V

    .line 434
    iget-object v0, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->y:Lcom/tkay/basead/ui/PanelView;

    iget v1, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->Q:I

    invoke-virtual {v0, v1}, Lcom/tkay/basead/ui/PanelView;->setLayoutType(I)V

    goto :goto_1

    .line 397
    :cond_3
    iget-object v0, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->w:Landroid/widget/RelativeLayout;

    invoke-virtual {v0, v1}, Landroid/widget/RelativeLayout;->setBackgroundColor(I)V

    .line 399
    iget v0, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->D:I

    int-to-float v0, v0

    mul-float/2addr v0, v3

    float-to-int v0, v0

    .line 400
    iget-object v3, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->d:Lcom/tkay/core/common/f/h;

    invoke-virtual {v3}, Lcom/tkay/core/common/f/h;->t()Ljava/lang/String;

    move-result-object v3

    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-eqz v3, :cond_4

    .line 401
    iget v3, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->D:I

    sub-int/2addr v3, v0

    goto :goto_0

    .line 403
    :cond_4
    iget v3, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->D:I

    sub-int/2addr v3, v0

    invoke-virtual {p0}, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->getContext()Landroid/content/Context;

    move-result-object v4

    const/high16 v5, 0x42480000    # 50.0f

    invoke-static {v4, v5}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;F)I

    move-result v4

    add-int/2addr v3, v4

    .line 406
    :goto_0
    iget-object v4, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->z:Lcom/tkay/basead/ui/BaseEndCardView;

    new-instance v5, Landroid/widget/RelativeLayout$LayoutParams;

    invoke-direct {v5, v1, v0}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    invoke-virtual {v4, v5}, Lcom/tkay/basead/ui/BaseEndCardView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 407
    iget-object v0, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->z:Lcom/tkay/basead/ui/BaseEndCardView;

    invoke-virtual {v0, v2}, Lcom/tkay/basead/ui/BaseEndCardView;->setNeedArc(Z)V

    .line 409
    iget-object v0, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->y:Lcom/tkay/basead/ui/PanelView;

    invoke-virtual {v0}, Lcom/tkay/basead/ui/PanelView;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v0

    check-cast v0, Landroid/widget/RelativeLayout$LayoutParams;

    if-eqz v0, :cond_5

    .line 411
    iget v1, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->C:I

    iput v1, v0, Landroid/widget/RelativeLayout$LayoutParams;->width:I

    .line 412
    iput v3, v0, Landroid/widget/RelativeLayout$LayoutParams;->height:I

    .line 414
    iget-object v1, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->y:Lcom/tkay/basead/ui/PanelView;

    invoke-virtual {v1, v0}, Lcom/tkay/basead/ui/PanelView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 415
    iget-object v0, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->y:Lcom/tkay/basead/ui/PanelView;

    invoke-virtual {v0}, Lcom/tkay/basead/ui/PanelView;->removeAllViews()V

    .line 416
    iget-object v0, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->y:Lcom/tkay/basead/ui/PanelView;

    iget v1, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->Q:I

    invoke-virtual {v0, v1}, Lcom/tkay/basead/ui/PanelView;->setLayoutType(I)V

    .line 449
    :cond_5
    :goto_1
    iget-object v0, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->w:Landroid/widget/RelativeLayout;

    iget-object v1, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->z:Lcom/tkay/basead/ui/BaseEndCardView;

    invoke-virtual {v0, v1, v2}, Landroid/widget/RelativeLayout;->addView(Landroid/view/View;I)V

    .line 451
    invoke-direct {p0}, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->L()V

    :cond_6
    return-void
.end method

.method protected final I()V
    .locals 2

    .line 314
    iget-object v0, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->ae:Landroid/view/View;

    if-eqz v0, :cond_0

    .line 315
    invoke-virtual {v0}, Landroid/view/View;->getParent()Landroid/view/ViewParent;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 316
    iget-object v0, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->ae:Landroid/view/View;

    invoke-virtual {v0}, Landroid/view/View;->getParent()Landroid/view/ViewParent;

    move-result-object v0

    check-cast v0, Landroid/view/ViewGroup;

    iget-object v1, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->ae:Landroid/view/View;

    invoke-virtual {v0, v1}, Landroid/view/ViewGroup;->removeView(Landroid/view/View;)V

    .line 320
    :cond_0
    iget-object v0, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->H:Lcom/tkay/basead/ui/CountDownView;

    const/16 v1, 0x8

    if-eqz v0, :cond_1

    .line 321
    iget-object v0, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->H:Lcom/tkay/basead/ui/CountDownView;

    invoke-virtual {v0, v1}, Lcom/tkay/basead/ui/CountDownView;->setVisibility(I)V

    .line 323
    :cond_1
    iget-object v0, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->K:Lcom/tkay/basead/ui/MuteImageView;

    if-eqz v0, :cond_2

    .line 324
    iget-object v0, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->K:Lcom/tkay/basead/ui/MuteImageView;

    invoke-virtual {v0, v1}, Lcom/tkay/basead/ui/MuteImageView;->setVisibility(I)V

    :cond_2
    return-void
.end method

.method protected final J()V
    .locals 1

    .line 308
    iget v0, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->C:I

    iput v0, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->O:I

    .line 309
    iget v0, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->D:I

    iput v0, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->P:I

    return-void
.end method

.method protected final a()V
    .locals 4

    .line 69
    invoke-virtual {p0}, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Landroid/view/LayoutInflater;->from(Landroid/content/Context;)Landroid/view/LayoutInflater;

    move-result-object v0

    invoke-virtual {p0}, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->getContext()Landroid/content/Context;

    move-result-object v1

    const-string v2, "myoffer_thirdparty_full_screen"

    const-string v3, "layout"

    invoke-static {v1, v2, v3}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v1

    invoke-virtual {v0, v1, p0}, Landroid/view/LayoutInflater;->inflate(ILandroid/view/ViewGroup;)Landroid/view/View;

    return-void
.end method

.method protected final c()V
    .locals 5

    .line 216
    iget-object v0, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->ae:Landroid/view/View;

    if-eqz v0, :cond_0

    .line 217
    iget-object v0, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->w:Landroid/widget/RelativeLayout;

    iget-object v1, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->ae:Landroid/view/View;

    const/4 v2, 0x0

    new-instance v3, Landroid/widget/RelativeLayout$LayoutParams;

    const/4 v4, -0x1

    invoke-direct {v3, v4, v4}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    invoke-virtual {v0, v1, v2, v3}, Landroid/widget/RelativeLayout;->addView(Landroid/view/View;ILandroid/view/ViewGroup$LayoutParams;)V

    .line 219
    iget-object v0, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->ag:Lcom/tkay/core/api/BaseAd;

    invoke-virtual {v0}, Lcom/tkay/core/api/BaseAd;->getVideoDuration()D

    move-result-wide v0

    double-to-int v0, v0

    mul-int/lit16 v0, v0, 0x3e8

    invoke-virtual {p0, v0}, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->d(I)V

    .line 220
    invoke-virtual {p0}, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->D()V

    .line 221
    invoke-direct {p0}, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->L()V

    :cond_0
    return-void
.end method

.method protected final c(I)Z
    .locals 2

    if-eqz p1, :cond_1

    const/4 v0, 0x1

    if-eq p1, v0, :cond_1

    const/4 v1, 0x2

    if-eq p1, v1, :cond_1

    const/4 v1, 0x5

    if-eq p1, v1, :cond_1

    const/4 v1, 0x6

    if-eq p1, v1, :cond_1

    const/16 v1, 0x8

    if-eq p1, v1, :cond_0

    const/4 p1, 0x0

    return p1

    :cond_0
    return v0

    .line 281
    :cond_1
    iget-object p1, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->d:Lcom/tkay/core/common/f/h;

    invoke-static {p1}, Lcom/tkay/basead/a/e;->a(Lcom/tkay/core/common/f/h;)Z

    move-result p1

    return p1
.end method

.method protected destroy()V
    .locals 2

    .line 497
    invoke-super {p0}, Lcom/tkay/basead/ui/BaseScreenATView;->destroy()V

    .line 2520
    iget-object v0, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->af:Ljava/util/Timer;

    if-eqz v0, :cond_0

    .line 2521
    invoke-virtual {v0}, Ljava/util/Timer;->cancel()V

    const/4 v0, 0x0

    .line 2522
    iput-object v0, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->af:Ljava/util/Timer;

    .line 2524
    :cond_0
    iget-object v0, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->ah:Lcom/tkay/core/common/j/a;

    iget-object v1, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->ai:Lcom/tkay/core/common/j/b;

    invoke-interface {v0, v1}, Lcom/tkay/core/common/j/a;->a(Lcom/tkay/core/common/j/b;)V

    return-void
.end method

.method public init()V
    .locals 5

    .line 75
    invoke-virtual {p0}, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->b()V

    .line 77
    iget v0, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->Q:I

    invoke-virtual {p0, v0}, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->c(I)Z

    move-result v0

    iput-boolean v0, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->F:Z

    .line 79
    iget-object v0, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->ag:Lcom/tkay/core/api/BaseAd;

    new-instance v1, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView$2;

    invoke-direct {v1, p0}, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView$2;-><init>(Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;)V

    invoke-virtual {v0, v1}, Lcom/tkay/core/api/BaseAd;->setNativeEventListener(Lcom/tkay/core/common/b/k;)V

    .line 138
    iget-boolean v0, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->u:Z

    if-nez v0, :cond_2

    .line 141
    iget v0, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->a:I

    const/4 v1, 0x1

    if-eq v1, v0, :cond_3

    const/4 v0, 0x3

    .line 152
    iget v2, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->a:I

    if-ne v0, v2, :cond_3

    .line 154
    iget-object v0, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->ag:Lcom/tkay/core/api/BaseAd;

    invoke-virtual {v0}, Lcom/tkay/core/api/BaseAd;->getAdType()Ljava/lang/String;

    move-result-object v0

    const-string v2, "1"

    invoke-static {v0, v2}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_2

    iget-object v0, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->ae:Landroid/view/View;

    if-eqz v0, :cond_2

    .line 155
    invoke-virtual {p0}, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->J()V

    .line 156
    invoke-virtual {p0}, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->c()V

    .line 2167
    iget v0, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->L:I

    if-ltz v0, :cond_1

    .line 2170
    iget v0, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->L:I

    if-lez v0, :cond_0

    .line 2171
    iget-object v0, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->ah:Lcom/tkay/core/common/j/a;

    iget-object v2, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->ai:Lcom/tkay/core/common/j/b;

    iget v3, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->L:I

    int-to-long v3, v3

    invoke-interface {v0, v2, v3, v4, v1}, Lcom/tkay/core/common/j/a;->a(Lcom/tkay/core/common/j/b;JZ)V

    return-void

    .line 2173
    :cond_0
    invoke-virtual {p0}, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->G()V

    :cond_1
    return-void

    .line 159
    :cond_2
    invoke-virtual {p0}, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->J()V

    .line 160
    invoke-virtual {p0}, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->p()V

    :cond_3
    return-void
.end method

.method protected final q()I
    .locals 2

    .line 348
    iget v0, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->Q:I

    const/16 v1, 0x8

    if-ne v0, v1, :cond_0

    .line 349
    iget v0, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->Q:I

    return v0

    .line 351
    :cond_0
    iget v0, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->C:I

    iget v1, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->D:I

    if-ge v0, v1, :cond_2

    .line 352
    iget v0, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->ac:I

    iget v1, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->ad:I

    if-lt v0, v1, :cond_1

    const/4 v0, 0x1

    return v0

    :cond_1
    const/4 v0, 0x5

    return v0

    .line 358
    :cond_2
    iget v0, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->ac:I

    iget v1, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->ad:I

    if-ge v0, v1, :cond_3

    const/4 v0, 0x2

    return v0

    :cond_3
    const/4 v0, 0x6

    return v0
.end method

.method protected final u()V
    .locals 2

    .line 336
    iget-object v0, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->d:Lcom/tkay/core/common/f/h;

    invoke-virtual {v0}, Lcom/tkay/core/common/f/h;->u()Ljava/lang/String;

    move-result-object v0

    .line 337
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    .line 338
    invoke-static {}, Lcom/tkay/basead/a/f;->a()Lcom/tkay/basead/a/f;

    const/4 v1, 0x2

    invoke-static {v1, v0}, Lcom/tkay/basead/a/f;->a(ILjava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/core/common/l/b;->a(Ljava/lang/String;)[I

    move-result-object v0

    if-eqz v0, :cond_0

    const/4 v1, 0x0

    .line 340
    aget v1, v0, v1

    iput v1, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->ac:I

    const/4 v1, 0x1

    .line 341
    aget v0, v0, v1

    iput v0, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->ad:I

    :cond_0
    return-void
.end method

.method protected final v()V
    .locals 8

    .line 227
    iget-object v0, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->y:Lcom/tkay/basead/ui/PanelView;

    if-eqz v0, :cond_0

    .line 228
    iget-object v0, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->y:Lcom/tkay/basead/ui/PanelView;

    const/4 v1, 0x4

    invoke-virtual {v0, v1}, Lcom/tkay/basead/ui/PanelView;->setVisibility(I)V

    .line 229
    iget-object v2, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->y:Lcom/tkay/basead/ui/PanelView;

    iget-object v3, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->d:Lcom/tkay/core/common/f/h;

    iget-object v4, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->c:Lcom/tkay/core/common/f/i;

    iget v5, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->t:I

    const/4 v6, 0x0

    new-instance v7, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView$3;

    invoke-direct {v7, p0}, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView$3;-><init>(Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;)V

    invoke-virtual/range {v2 .. v7}, Lcom/tkay/basead/ui/PanelView;->init(Lcom/tkay/core/common/f/h;Lcom/tkay/core/common/f/i;IZLcom/tkay/basead/ui/PanelView$a;)V

    .line 241
    :cond_0
    invoke-virtual {p0}, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->w()V

    return-void
.end method

.method protected final w()V
    .locals 4

    .line 292
    iget-object v0, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->y:Lcom/tkay/basead/ui/PanelView;

    if-eqz v0, :cond_2

    .line 293
    iget-object v0, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->d:Lcom/tkay/core/common/f/h;

    invoke-static {v0}, Lcom/tkay/basead/a/e;->a(Lcom/tkay/core/common/f/h;)Z

    move-result v0

    const/4 v1, 0x0

    const/16 v2, 0x8

    if-nez v0, :cond_0

    .line 294
    iput v2, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->Q:I

    goto :goto_0

    .line 296
    :cond_0
    iput v1, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->Q:I

    .line 298
    :goto_0
    iget-object v0, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->y:Lcom/tkay/basead/ui/PanelView;

    iget v3, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->Q:I

    invoke-virtual {v0, v3}, Lcom/tkay/basead/ui/PanelView;->setLayoutType(I)V

    .line 299
    iget v0, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->Q:I

    if-ne v0, v2, :cond_1

    iget-object v0, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->c:Lcom/tkay/core/common/f/i;

    iget-object v0, v0, Lcom/tkay/core/common/f/i;->m:Lcom/tkay/core/common/f/j;

    invoke-virtual {v0}, Lcom/tkay/core/common/f/j;->x()I

    move-result v0

    if-nez v0, :cond_1

    .line 300
    iget-object v0, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->y:Lcom/tkay/basead/ui/PanelView;

    invoke-virtual {v0}, Lcom/tkay/basead/ui/PanelView;->getCTAButton()Landroid/view/View;

    move-result-object v0

    invoke-virtual {v0, v2}, Landroid/view/View;->setVisibility(I)V

    .line 302
    :cond_1
    iget-object v0, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->y:Lcom/tkay/basead/ui/PanelView;

    invoke-virtual {v0, v1}, Lcom/tkay/basead/ui/PanelView;->setVisibility(I)V

    :cond_2
    return-void
.end method

.method protected final z()V
    .locals 2

    .line 246
    iget-object v0, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->K:Lcom/tkay/basead/ui/MuteImageView;

    if-nez v0, :cond_0

    return-void

    .line 250
    :cond_0
    iget-boolean v0, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->M:Z

    if-eqz v0, :cond_1

    .line 251
    iget-object v0, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->K:Lcom/tkay/basead/ui/MuteImageView;

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Lcom/tkay/basead/ui/MuteImageView;->setMute(Z)V

    goto :goto_0

    .line 253
    :cond_1
    iget-object v0, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->K:Lcom/tkay/basead/ui/MuteImageView;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/tkay/basead/ui/MuteImageView;->setMute(Z)V

    .line 256
    :goto_0
    iget-object v0, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->K:Lcom/tkay/basead/ui/MuteImageView;

    const/4 v1, 0x4

    invoke-virtual {v0, v1}, Lcom/tkay/basead/ui/MuteImageView;->setVisibility(I)V

    .line 257
    iget-object v0, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->K:Lcom/tkay/basead/ui/MuteImageView;

    new-instance v1, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView$4;

    invoke-direct {v1, p0}, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView$4;-><init>(Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;)V

    invoke-virtual {v0, v1}, Lcom/tkay/basead/ui/MuteImageView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    return-void
.end method
