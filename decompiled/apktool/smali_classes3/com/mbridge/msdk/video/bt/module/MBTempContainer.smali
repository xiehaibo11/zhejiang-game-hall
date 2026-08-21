.class public Lcom/mbridge/msdk/video/bt/module/MBTempContainer;
.super Lcom/mbridge/msdk/video/js/container/AbstractJSContainer;
.source "MBTempContainer.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/mbridge/msdk/video/bt/module/MBTempContainer$b;,
        Lcom/mbridge/msdk/video/bt/module/MBTempContainer$e;,
        Lcom/mbridge/msdk/video/bt/module/MBTempContainer$d;,
        Lcom/mbridge/msdk/video/bt/module/MBTempContainer$c;,
        Lcom/mbridge/msdk/video/bt/module/MBTempContainer$f;,
        Lcom/mbridge/msdk/video/bt/module/MBTempContainer$a;
    }
.end annotation


# static fields
.field private static final y:Ljava/lang/String;


# instance fields
.field private A:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

.field private B:Lcom/mbridge/msdk/videocommon/download/a;

.field private C:Lcom/mbridge/msdk/video/bt/module/b/h;

.field private D:Lcom/mbridge/msdk/video/bt/module/a/c;

.field private E:Lcom/mbridge/msdk/video/dynview/e/a;

.field private F:I

.field private G:Ljava/lang/String;

.field private H:Lcom/mbridge/msdk/video/js/factory/b;

.field private I:I

.field private J:I

.field private K:Lcom/mbridge/msdk/video/bt/module/a/b;

.field private L:Z

.field private M:I

.field private N:I

.field private O:I

.field private P:I

.field private Q:I

.field private R:Ljava/lang/String;

.field private S:Ljava/lang/String;

.field private T:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/mbridge/msdk/foundation/entity/CampaignEx;",
            ">;"
        }
    .end annotation
.end field

.field private U:I

.field private V:Landroid/view/LayoutInflater;

.field private W:I

.field protected a:Z

.field private aa:I

.field private ab:I

.field private ac:Landroid/view/View;

.field private ad:Z

.field private ae:Z

.field private af:Z

.field private ag:Z

.field private ah:Z

.field private ai:Z

.field private aj:Z

.field private ak:Z

.field private al:Z

.field private am:Z

.field private an:Lcom/mbridge/msdk/mbjscommon/mraid/d;

.field private ao:Lcom/iab/omid/library/mmadbridge/adsession/AdSession;

.field private ap:Lcom/iab/omid/library/mmadbridge/adsession/media/MediaEvents;

.field private aq:Ljava/lang/Runnable;

.field private ar:Z

.field protected b:Z

.field protected c:Lcom/mbridge/msdk/video/bt/module/MBTempContainer$a;

.field protected d:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

.field protected e:Lcom/mbridge/msdk/video/module/MBridgeVideoView;

.field protected f:Lcom/mbridge/msdk/video/module/MBridgeContainerView;

.field protected g:Landroid/os/Handler;

.field protected h:Ljava/lang/Runnable;

.field protected i:Ljava/lang/Runnable;

.field private z:Landroid/view/View;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 98
    const-class v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->y:Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;)V
    .locals 2

    .line 127
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/video/js/container/AbstractJSContainer;-><init>(Landroid/content/Context;)V

    const/4 v0, 0x1

    .line 108
    iput v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->F:I

    const-string v0, ""

    .line 109
    iput-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->G:Ljava/lang/String;

    .line 112
    sget v1, Lcom/mbridge/msdk/foundation/same/a;->A:I

    iput v1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->I:I

    const/4 v1, 0x0

    .line 116
    iput-boolean v1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->L:Z

    .line 119
    iput-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->R:Ljava/lang/String;

    .line 122
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->T:Ljava/util/List;

    .line 123
    iput v1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->U:I

    .line 136
    iput-boolean v1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->a:Z

    .line 186
    iput-boolean v1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->b:Z

    .line 190
    new-instance v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$a$a;

    invoke-direct {v0}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$a$a;-><init>()V

    iput-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->c:Lcom/mbridge/msdk/video/bt/module/MBTempContainer$a;

    .line 279
    new-instance v0, Landroid/os/Handler;

    invoke-direct {v0}, Landroid/os/Handler;-><init>()V

    iput-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->g:Landroid/os/Handler;

    .line 284
    iput v1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->W:I

    .line 286
    iput v1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->aa:I

    .line 287
    iput v1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->ab:I

    .line 292
    new-instance v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$1;

    invoke-direct {v0, p0}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$1;-><init>(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;)V

    iput-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->h:Ljava/lang/Runnable;

    .line 308
    new-instance v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$2;

    invoke-direct {v0, p0}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$2;-><init>(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;)V

    iput-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->i:Ljava/lang/Runnable;

    .line 488
    iput-boolean v1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->ad:Z

    .line 493
    iput-boolean v1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->ae:Z

    .line 494
    iput-boolean v1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->af:Z

    .line 501
    iput-boolean v1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->ah:Z

    .line 502
    iput-boolean v1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->ai:Z

    .line 505
    iput-boolean v1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->aj:Z

    .line 507
    iput-boolean v1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->ak:Z

    .line 509
    iput-boolean v1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->al:Z

    .line 511
    iput-boolean v1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->am:Z

    const/4 v0, 0x0

    .line 514
    iput-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->ao:Lcom/iab/omid/library/mmadbridge/adsession/AdSession;

    .line 515
    iput-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->ap:Lcom/iab/omid/library/mmadbridge/adsession/media/MediaEvents;

    .line 518
    new-instance v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$4;

    invoke-direct {v0, p0}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$4;-><init>(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;)V

    iput-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->aq:Ljava/lang/Runnable;

    .line 1765
    iput-boolean v1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->ar:Z

    .line 128
    invoke-virtual {p0, p1}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->init(Landroid/content/Context;)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 1

    .line 132
    invoke-direct {p0, p1, p2}, Lcom/mbridge/msdk/video/js/container/AbstractJSContainer;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    const/4 p2, 0x1

    .line 108
    iput p2, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->F:I

    const-string p2, ""

    .line 109
    iput-object p2, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->G:Ljava/lang/String;

    .line 112
    sget v0, Lcom/mbridge/msdk/foundation/same/a;->A:I

    iput v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->I:I

    const/4 v0, 0x0

    .line 116
    iput-boolean v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->L:Z

    .line 119
    iput-object p2, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->R:Ljava/lang/String;

    .line 122
    new-instance p2, Ljava/util/ArrayList;

    invoke-direct {p2}, Ljava/util/ArrayList;-><init>()V

    iput-object p2, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->T:Ljava/util/List;

    .line 123
    iput v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->U:I

    .line 136
    iput-boolean v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->a:Z

    .line 186
    iput-boolean v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->b:Z

    .line 190
    new-instance p2, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$a$a;

    invoke-direct {p2}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$a$a;-><init>()V

    iput-object p2, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->c:Lcom/mbridge/msdk/video/bt/module/MBTempContainer$a;

    .line 279
    new-instance p2, Landroid/os/Handler;

    invoke-direct {p2}, Landroid/os/Handler;-><init>()V

    iput-object p2, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->g:Landroid/os/Handler;

    .line 284
    iput v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->W:I

    .line 286
    iput v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->aa:I

    .line 287
    iput v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->ab:I

    .line 292
    new-instance p2, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$1;

    invoke-direct {p2, p0}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$1;-><init>(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;)V

    iput-object p2, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->h:Ljava/lang/Runnable;

    .line 308
    new-instance p2, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$2;

    invoke-direct {p2, p0}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$2;-><init>(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;)V

    iput-object p2, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->i:Ljava/lang/Runnable;

    .line 488
    iput-boolean v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->ad:Z

    .line 493
    iput-boolean v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->ae:Z

    .line 494
    iput-boolean v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->af:Z

    .line 501
    iput-boolean v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->ah:Z

    .line 502
    iput-boolean v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->ai:Z

    .line 505
    iput-boolean v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->aj:Z

    .line 507
    iput-boolean v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->ak:Z

    .line 509
    iput-boolean v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->al:Z

    .line 511
    iput-boolean v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->am:Z

    const/4 p2, 0x0

    .line 514
    iput-object p2, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->ao:Lcom/iab/omid/library/mmadbridge/adsession/AdSession;

    .line 515
    iput-object p2, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->ap:Lcom/iab/omid/library/mmadbridge/adsession/media/MediaEvents;

    .line 518
    new-instance p2, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$4;

    invoke-direct {p2, p0}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$4;-><init>(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;)V

    iput-object p2, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->aq:Ljava/lang/Runnable;

    .line 1765
    iput-boolean v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->ar:Z

    .line 133
    invoke-virtual {p0, p1}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->init(Landroid/content/Context;)V

    return-void
.end method

.method static synthetic A(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;)Ljava/lang/String;
    .locals 0

    .line 97
    iget-object p0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->l:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic B(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;)Ljava/lang/String;
    .locals 0

    .line 97
    iget-object p0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->k:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic C(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;)Ljava/lang/String;
    .locals 0

    .line 97
    iget-object p0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->l:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic D(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;)Ljava/lang/String;
    .locals 0

    .line 97
    iget-object p0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->k:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic E(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;)Z
    .locals 0

    .line 97
    iget-boolean p0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->r:Z

    return p0
.end method

.method static synthetic F(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;)Ljava/lang/Runnable;
    .locals 0

    .line 97
    iget-object p0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->aq:Ljava/lang/Runnable;

    return-object p0
.end method

.method static synthetic G(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;)Ljava/lang/String;
    .locals 0

    .line 97
    iget-object p0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->l:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic H(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;)Ljava/lang/String;
    .locals 0

    .line 97
    iget-object p0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->k:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic I(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;)Ljava/lang/String;
    .locals 0

    .line 97
    iget-object p0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->l:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic J(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;)Ljava/lang/String;
    .locals 0

    .line 97
    iget-object p0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->k:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic K(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;)Ljava/lang/String;
    .locals 0

    .line 97
    iget-object p0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->l:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic L(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;)Ljava/lang/String;
    .locals 0

    .line 97
    iget-object p0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->k:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic M(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;)V
    .locals 2

    .line 9289
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->isLoadSuccess()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 9290
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->j:Landroid/app/Activity;

    new-instance v1, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$8;

    invoke-direct {v1, p0}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$8;-><init>(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;)V

    invoke-virtual {v0, v1}, Landroid/app/Activity;->runOnUiThread(Ljava/lang/Runnable;)V

    :cond_0
    return-void
.end method

.method static synthetic N(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;)Z
    .locals 0

    .line 97
    iget-boolean p0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->ar:Z

    return p0
.end method

.method static synthetic O(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;)V
    .locals 2

    .line 9302
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->isLoadSuccess()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 9303
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->j:Landroid/app/Activity;

    new-instance v1, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$9;

    invoke-direct {v1, p0}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$9;-><init>(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;)V

    invoke-virtual {v0, v1}, Landroid/app/Activity;->runOnUiThread(Ljava/lang/Runnable;)V

    :cond_0
    return-void
.end method

.method static synthetic P(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;)Landroid/app/Activity;
    .locals 0

    .line 97
    iget-object p0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->j:Landroid/app/Activity;

    return-object p0
.end method

.method static synthetic Q(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;)Z
    .locals 0

    .line 97
    iget-boolean p0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->w:Z

    return p0
.end method

.method static synthetic R(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;)Landroid/app/Activity;
    .locals 0

    .line 97
    iget-object p0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->j:Landroid/app/Activity;

    return-object p0
.end method

.method static synthetic S(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;)Ljava/lang/String;
    .locals 0

    .line 97
    iget-object p0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->l:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic T(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;)Ljava/lang/String;
    .locals 0

    .line 97
    iget-object p0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->k:Ljava/lang/String;

    return-object p0
.end method

.method private a(II)I
    .locals 5

    if-gez p1, :cond_0

    return p1

    .line 1324
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->T:Ljava/util/List;

    if-nez v0, :cond_1

    return p1

    .line 1327
    :cond_1
    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    if-nez v0, :cond_2

    return p1

    :cond_2
    const/4 v0, 0x1

    if-gt p2, v0, :cond_3

    return p1

    :cond_3
    const/4 v1, 0x0

    move v2, v1

    move v3, v2

    :goto_0
    add-int/lit8 v4, p2, -0x1

    if-ge v2, v4, :cond_5

    .line 1336
    iget-object v4, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->T:Ljava/util/List;

    invoke-interface {v4, v2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v4

    if-eqz v4, :cond_4

    .line 1337
    iget-object v4, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->T:Ljava/util/List;

    invoke-interface {v4, v2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v4}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getVideoLength()I

    move-result v4

    add-int/2addr v3, v4

    :cond_4
    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    :cond_5
    if-le p1, v3, :cond_6

    sub-int v1, p1, v3

    :cond_6
    return v1
.end method

.method static synthetic a(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;I)I
    .locals 0

    .line 97
    iput p1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->W:I

    return p1
.end method

.method static synthetic a(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;)Landroid/view/View;
    .locals 0

    .line 97
    iget-object p0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->ac:Landroid/view/View;

    return-object p0
.end method

.method static synthetic a(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;Lcom/mbridge/msdk/video/bt/module/a/b;)Lcom/mbridge/msdk/video/bt/module/a/b;
    .locals 0

    .line 97
    iput-object p1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->K:Lcom/mbridge/msdk/video/bt/module/a/b;

    return-object p1
.end method

.method static synthetic a()Ljava/lang/String;
    .locals 1

    .line 97
    sget-object v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->y:Ljava/lang/String;

    return-object v0
.end method

.method private a(ILjava/lang/String;)V
    .locals 3

    .line 1237
    :try_start_0
    new-instance v0, Lcom/mbridge/msdk/foundation/entity/p;

    invoke-direct {v0}, Lcom/mbridge/msdk/foundation/entity/p;-><init>()V

    const-string v1, "2000037"

    .line 1238
    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/entity/p;->o(Ljava/lang/String;)V

    .line 1239
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "code="

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p1, ",desc="

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/foundation/entity/p;->j(Ljava/lang/String;)V

    .line 1241
    iget-object p1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->A:Lcom/mbridge/msdk/foundation/entity/CampaignEx;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const-string p2, ""

    if-eqz p1, :cond_0

    :try_start_1
    iget-object p1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->A:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRewardTemplateMode()Lcom/mbridge/msdk/foundation/entity/CampaignEx$c;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 1242
    iget-object p1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->A:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRewardTemplateMode()Lcom/mbridge/msdk/foundation/entity/CampaignEx$c;

    move-result-object p1

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx$c;->e()Ljava/lang/String;

    move-result-object p1

    goto :goto_0

    :cond_0
    move-object p1, p2

    .line 1244
    :goto_0
    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/foundation/entity/p;->i(Ljava/lang/String;)V

    .line 1245
    iget-object p1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->k:Ljava/lang/String;

    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/foundation/entity/p;->m(Ljava/lang/String;)V

    .line 1247
    iget-object p1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->A:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz p1, :cond_1

    .line 1248
    iget-object p1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->A:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object p2

    .line 1250
    :cond_1
    invoke-virtual {v0, p2}, Lcom/mbridge/msdk/foundation/entity/p;->n(Ljava/lang/String;)V

    .line 1251
    iget-object p1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->A:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz p1, :cond_2

    iget-object p1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->A:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestId()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_2

    .line 1252
    iget-object p1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->A:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestId()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/foundation/entity/p;->k(Ljava/lang/String;)V

    .line 1254
    :cond_2
    iget-object p1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->A:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz p1, :cond_3

    iget-object p1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->A:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestIdNotice()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_3

    .line 1255
    iget-object p1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->A:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestIdNotice()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/foundation/entity/p;->l(Ljava/lang/String;)V

    .line 1257
    :cond_3
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->getContext()Landroid/content/Context;

    move-result-object p1

    invoke-static {p1}, Lcom/mbridge/msdk/foundation/tools/v;->D(Landroid/content/Context;)I

    move-result p1

    .line 1258
    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/foundation/entity/p;->c(I)V

    .line 1259
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->getContext()Landroid/content/Context;

    move-result-object p2

    invoke-static {p2, p1}, Lcom/mbridge/msdk/foundation/tools/v;->a(Landroid/content/Context;I)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/foundation/entity/p;->r(Ljava/lang/String;)V

    .line 1260
    invoke-static {v0}, Lcom/mbridge/msdk/foundation/entity/p;->e(Lcom/mbridge/msdk/foundation/entity/p;)Ljava/lang/String;

    move-result-object p1

    .line 1261
    iget-object p2, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->k:Ljava/lang/String;

    invoke-static {p1, p2}, Lcom/mbridge/msdk/video/module/b/b;->a(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_1

    :catchall_0
    move-exception p1

    .line 1263
    sget-object p2, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->y:Ljava/lang/String;

    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {p2, v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :goto_1
    return-void
.end method

.method static synthetic a(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;Z)Z
    .locals 0

    .line 97
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->aj:Z

    return p1
.end method

.method static synthetic b(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;I)I
    .locals 0

    .line 97
    iput p1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->I:I

    return p1
.end method

.method static synthetic b(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;)Landroid/app/Activity;
    .locals 0

    .line 97
    iget-object p0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->j:Landroid/app/Activity;

    return-object p0
.end method

.method static synthetic b(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;Z)Z
    .locals 0

    .line 97
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->ae:Z

    return p1
.end method

.method private c()I
    .locals 1

    .line 321
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->A:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->b(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)Lcom/mbridge/msdk/video/js/a/j;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 323
    invoke-virtual {v0}, Lcom/mbridge/msdk/video/js/a/j;->k()I

    move-result v0

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method static synthetic c(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;I)I
    .locals 0

    .line 97
    iput p1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->J:I

    return p1
.end method

.method static synthetic c(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;)Landroid/app/Activity;
    .locals 0

    .line 97
    iget-object p0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->j:Landroid/app/Activity;

    return-object p0
.end method

.method static synthetic c(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;Z)Z
    .locals 0

    .line 97
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->ak:Z

    return p1
.end method

.method static synthetic d(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;)Lcom/mbridge/msdk/foundation/entity/CampaignEx;
    .locals 0

    .line 97
    iget-object p0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->A:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    return-object p0
.end method

.method private d()Z
    .locals 1

    .line 344
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->A:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->b(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)Lcom/mbridge/msdk/video/js/a/j;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 346
    invoke-virtual {v0}, Lcom/mbridge/msdk/video/js/a/j;->n()Z

    move-result v0

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method static synthetic d(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;Z)Z
    .locals 0

    .line 97
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->al:Z

    return p1
.end method

.method private e()Z
    .locals 2

    .line 352
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->e:Lcom/mbridge/msdk/video/module/MBridgeVideoView;

    const/4 v1, 0x0

    if-eqz v0, :cond_1

    .line 353
    invoke-virtual {v0}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->isShowingAlertView()Z

    move-result v0

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->e:Lcom/mbridge/msdk/video/module/MBridgeVideoView;

    invoke-virtual {v0}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->isInstallDialogShowing()Z

    move-result v0

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->e:Lcom/mbridge/msdk/video/module/MBridgeVideoView;

    invoke-virtual {v0}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->isRewardPopViewShowing()Z

    move-result v0

    if-eqz v0, :cond_1

    :cond_0
    const/4 v1, 0x1

    :cond_1
    return v1
.end method

.method static synthetic e(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;)Z
    .locals 0

    .line 97
    iget-boolean p0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->r:Z

    return p0
.end method

.method static synthetic e(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;Z)Z
    .locals 0

    .line 97
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->ai:Z

    return p1
.end method

.method private f()V
    .locals 7

    .line 774
    new-instance v0, Lcom/mbridge/msdk/foundation/same/report/d;

    invoke-virtual {p0}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-direct {v0, v1}, Lcom/mbridge/msdk/foundation/same/report/d;-><init>(Landroid/content/Context;)V

    .line 775
    iget-object v1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->A:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v1, :cond_0

    .line 776
    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestId()Ljava/lang/String;

    move-result-object v1

    iget-object v2, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->A:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestIdNotice()Ljava/lang/String;

    move-result-object v2

    iget-object v3, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->A:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object v3

    iget-object v4, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->k:Ljava/lang/String;

    iget-object v5, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->A:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v5}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object v5

    invoke-static {v5}, Lcom/mbridge/msdk/mbjscommon/mraid/c;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    iget-object v6, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->A:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v6}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isBidCampaign()Z

    move-result v6

    invoke-virtual/range {v0 .. v6}, Lcom/mbridge/msdk/foundation/same/report/d;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Z)V

    .line 777
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->A:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/mbridge/msdk/mbjscommon/mraid/c;->b(Ljava/lang/String;)V

    const/4 v0, 0x1

    .line 778
    iput-boolean v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->ag:Z

    :cond_0
    return-void
.end method

.method static synthetic f(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;)Z
    .locals 0

    .line 97
    iget-boolean p0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->w:Z

    return p0
.end method

.method static synthetic g(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;)Lcom/mbridge/msdk/video/bt/module/b/h;
    .locals 0

    .line 97
    iget-object p0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->C:Lcom/mbridge/msdk/video/bt/module/b/h;

    return-object p0
.end method

.method private g()V
    .locals 4

    .line 992
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->ao:Lcom/iab/omid/library/mmadbridge/adsession/AdSession;

    if-eqz v0, :cond_2

    .line 995
    :try_start_0
    iget-object v1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->f:Lcom/mbridge/msdk/video/module/MBridgeContainerView;

    sget-object v2, Lcom/iab/omid/library/mmadbridge/adsession/FriendlyObstructionPurpose;->OTHER:Lcom/iab/omid/library/mmadbridge/adsession/FriendlyObstructionPurpose;

    const/4 v3, 0x0

    invoke-virtual {v0, v1, v2, v3}, Lcom/iab/omid/library/mmadbridge/adsession/AdSession;->addFriendlyObstruction(Landroid/view/View;Lcom/iab/omid/library/mmadbridge/adsession/FriendlyObstructionPurpose;Ljava/lang/String;)V

    .line 996
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->ac:Landroid/view/View;

    if-eqz v0, :cond_0

    .line 997
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->ao:Lcom/iab/omid/library/mmadbridge/adsession/AdSession;

    iget-object v1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->ac:Landroid/view/View;

    sget-object v2, Lcom/iab/omid/library/mmadbridge/adsession/FriendlyObstructionPurpose;->OTHER:Lcom/iab/omid/library/mmadbridge/adsession/FriendlyObstructionPurpose;

    invoke-virtual {v0, v1, v2, v3}, Lcom/iab/omid/library/mmadbridge/adsession/AdSession;->addFriendlyObstruction(Landroid/view/View;Lcom/iab/omid/library/mmadbridge/adsession/FriendlyObstructionPurpose;Ljava/lang/String;)V

    .line 999
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->d:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    if-eqz v0, :cond_1

    .line 1000
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->ao:Lcom/iab/omid/library/mmadbridge/adsession/AdSession;

    iget-object v1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->d:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    sget-object v2, Lcom/iab/omid/library/mmadbridge/adsession/FriendlyObstructionPurpose;->OTHER:Lcom/iab/omid/library/mmadbridge/adsession/FriendlyObstructionPurpose;

    invoke-virtual {v0, v1, v2, v3}, Lcom/iab/omid/library/mmadbridge/adsession/AdSession;->addFriendlyObstruction(Landroid/view/View;Lcom/iab/omid/library/mmadbridge/adsession/FriendlyObstructionPurpose;Ljava/lang/String;)V

    .line 1002
    :cond_1
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->ao:Lcom/iab/omid/library/mmadbridge/adsession/AdSession;

    invoke-static {v0}, Lcom/iab/omid/library/mmadbridge/adsession/AdEvents;->createAdEvents(Lcom/iab/omid/library/mmadbridge/adsession/AdSession;)Lcom/iab/omid/library/mmadbridge/adsession/AdEvents;

    move-result-object v0

    .line 1003
    iget-object v1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->ao:Lcom/iab/omid/library/mmadbridge/adsession/AdSession;

    invoke-static {v1}, Lcom/iab/omid/library/mmadbridge/adsession/media/MediaEvents;->createMediaEvents(Lcom/iab/omid/library/mmadbridge/adsession/AdSession;)Lcom/iab/omid/library/mmadbridge/adsession/media/MediaEvents;

    move-result-object v1

    iput-object v1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->ap:Lcom/iab/omid/library/mmadbridge/adsession/media/MediaEvents;

    .line 1004
    iget-object v1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->ao:Lcom/iab/omid/library/mmadbridge/adsession/AdSession;

    invoke-virtual {v1}, Lcom/iab/omid/library/mmadbridge/adsession/AdSession;->start()V

    const/4 v1, 0x1

    .line 1005
    sget-object v2, Lcom/iab/omid/library/mmadbridge/adsession/media/Position;->STANDALONE:Lcom/iab/omid/library/mmadbridge/adsession/media/Position;

    invoke-static {v1, v2}, Lcom/iab/omid/library/mmadbridge/adsession/media/VastProperties;->createVastPropertiesForNonSkippableMedia(ZLcom/iab/omid/library/mmadbridge/adsession/media/Position;)Lcom/iab/omid/library/mmadbridge/adsession/media/VastProperties;

    move-result-object v1

    .line 1006
    invoke-virtual {v0, v1}, Lcom/iab/omid/library/mmadbridge/adsession/AdEvents;->loaded(Lcom/iab/omid/library/mmadbridge/adsession/media/VastProperties;)V

    .line 1007
    iget-object v1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->e:Lcom/mbridge/msdk/video/module/MBridgeVideoView;

    iget-object v2, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->ap:Lcom/iab/omid/library/mmadbridge/adsession/media/MediaEvents;

    invoke-virtual {v1, v2}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->setVideoEvents(Lcom/iab/omid/library/mmadbridge/adsession/media/MediaEvents;)V

    if-eqz v0, :cond_2

    .line 1009
    invoke-virtual {v0}, Lcom/iab/omid/library/mmadbridge/adsession/AdEvents;->impressionOccurred()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 1012
    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v0

    const-string v1, "omsdk"

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    :cond_2
    :goto_0
    return-void
.end method

.method private h()I
    .locals 4

    const/4 v0, 0x5

    .line 1274
    :try_start_0
    invoke-static {}, Lcom/mbridge/msdk/videocommon/d/b;->a()Lcom/mbridge/msdk/videocommon/d/b;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/videocommon/d/b;->b()Lcom/mbridge/msdk/videocommon/d/a;

    move-result-object v1

    if-nez v1, :cond_0

    .line 1276
    invoke-static {}, Lcom/mbridge/msdk/videocommon/d/b;->a()Lcom/mbridge/msdk/videocommon/d/b;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mbridge/msdk/videocommon/d/b;->c()Lcom/mbridge/msdk/videocommon/d/a;

    :cond_0
    if-eqz v1, :cond_1

    .line 1279
    invoke-virtual {v1}, Lcom/mbridge/msdk/videocommon/d/a;->g()J

    move-result-wide v0

    long-to-int v0, v0

    .line 1281
    :cond_1
    sget-object v1, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->y:Ljava/lang/String;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "MBridgeBaseView buffetTimeout:"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v1

    .line 1283
    invoke-virtual {v1}, Ljava/lang/Throwable;->printStackTrace()V

    :goto_0
    return v0
.end method

.method static synthetic h(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;)Ljava/lang/String;
    .locals 0

    .line 97
    iget-object p0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->k:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic i(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;)I
    .locals 0

    .line 97
    iget p0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->F:I

    return p0
.end method

.method static synthetic j(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;)Ljava/lang/String;
    .locals 0

    .line 97
    iget-object p0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->k:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic k(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;)Z
    .locals 0

    .line 97
    iget-boolean p0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->aj:Z

    return p0
.end method

.method static synthetic l(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;)Lcom/mbridge/msdk/videocommon/d/c;
    .locals 0

    .line 97
    iget-object p0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->m:Lcom/mbridge/msdk/videocommon/d/c;

    return-object p0
.end method

.method static synthetic m(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;)V
    .locals 4

    .line 8755
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->D:Lcom/mbridge/msdk/video/bt/module/a/c;

    if-eqz v0, :cond_3

    .line 8756
    iget-boolean v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->r:Z

    if-eqz v0, :cond_2

    iget v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->t:I

    sget v1, Lcom/mbridge/msdk/foundation/same/a;->w:I

    if-eq v0, v1, :cond_0

    iget v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->t:I

    sget v1, Lcom/mbridge/msdk/foundation/same/a;->x:I

    if-ne v0, v1, :cond_2

    .line 8757
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->D:Lcom/mbridge/msdk/video/bt/module/a/c;

    iget v1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->J:I

    const/4 v2, 0x1

    if-ne v1, v2, :cond_1

    goto :goto_0

    :cond_1
    const/4 v2, 0x0

    :goto_0
    iget v1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->I:I

    invoke-interface {v0, v2, v1}, Lcom/mbridge/msdk/video/bt/module/a/c;->a(ZI)V

    .line 8760
    :cond_2
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->D:Lcom/mbridge/msdk/video/bt/module/a/c;

    iget-object v1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->G:Ljava/lang/String;

    iget-boolean v2, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->ae:Z

    iget-object v3, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->o:Lcom/mbridge/msdk/videocommon/b/d;

    invoke-interface {v0, v1, v2, v3}, Lcom/mbridge/msdk/video/bt/module/a/c;->a(Ljava/lang/String;ZLcom/mbridge/msdk/videocommon/b/d;)V

    goto :goto_1

    .line 8762
    :cond_3
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->j:Landroid/app/Activity;

    if-eqz v0, :cond_4

    .line 8763
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->j:Landroid/app/Activity;

    invoke-virtual {v0}, Landroid/app/Activity;->finish()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_1

    .line 8767
    :catch_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->j:Landroid/app/Activity;

    if-eqz v0, :cond_4

    .line 8768
    iget-object p0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->j:Landroid/app/Activity;

    invoke-virtual {p0}, Landroid/app/Activity;->finish()V

    :cond_4
    :goto_1
    return-void
.end method

.method static synthetic n(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;)Z
    .locals 0

    .line 97
    iget-boolean p0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->w:Z

    return p0
.end method

.method static synthetic o(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;)Lcom/iab/omid/library/mmadbridge/adsession/media/MediaEvents;
    .locals 0

    .line 97
    iget-object p0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->ap:Lcom/iab/omid/library/mmadbridge/adsession/media/MediaEvents;

    return-object p0
.end method

.method static synthetic p(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;)Ljava/lang/String;
    .locals 0

    .line 97
    iget-object p0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->l:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic q(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;)Ljava/lang/String;
    .locals 0

    .line 97
    iget-object p0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->k:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic r(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;)Lcom/mbridge/msdk/video/bt/module/a/b;
    .locals 0

    .line 97
    iget-object p0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->K:Lcom/mbridge/msdk/video/bt/module/a/b;

    return-object p0
.end method

.method static synthetic s(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;)Lcom/mbridge/msdk/video/bt/module/a/c;
    .locals 0

    .line 97
    iget-object p0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->D:Lcom/mbridge/msdk/video/bt/module/a/c;

    return-object p0
.end method

.method static synthetic t(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;)Ljava/lang/String;
    .locals 0

    .line 97
    iget-object p0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->G:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic u(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;)Ljava/lang/String;
    .locals 0

    .line 97
    iget-object p0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->l:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic v(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;)Ljava/lang/String;
    .locals 0

    .line 97
    iget-object p0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->k:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic w(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;)Ljava/lang/String;
    .locals 0

    .line 97
    iget-object p0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->l:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic x(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;)Ljava/lang/String;
    .locals 0

    .line 97
    iget-object p0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->k:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic y(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;)Ljava/lang/String;
    .locals 0

    .line 97
    iget-object p0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->l:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic z(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;)Ljava/lang/String;
    .locals 0

    .line 97
    iget-object p0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->k:Ljava/lang/String;

    return-object p0
.end method


# virtual methods
.method protected final a(Ljava/lang/String;)V
    .locals 1

    .line 588
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->C:Lcom/mbridge/msdk/video/bt/module/b/h;

    if-eqz v0, :cond_0

    .line 589
    invoke-interface {v0, p1}, Lcom/mbridge/msdk/video/bt/module/b/h;->a(Ljava/lang/String;)V

    .line 591
    :cond_0
    invoke-super {p0, p1}, Lcom/mbridge/msdk/video/js/container/AbstractJSContainer;->a(Ljava/lang/String;)V

    return-void
.end method

.method public canBackPress()Z
    .locals 1

    .line 1153
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->f:Lcom/mbridge/msdk/video/module/MBridgeContainerView;

    if-eqz v0, :cond_1

    invoke-virtual {v0}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->canBackPress()Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    goto :goto_1

    :cond_1
    :goto_0
    const/4 v0, 0x1

    :goto_1
    return v0
.end method

.method public defaultLoad(ILjava/lang/String;)V
    .locals 20

    move-object/from16 v0, p0

    .line 1025
    invoke-virtual/range {p0 .. p2}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->superDefaultLoad(ILjava/lang/String;)V

    .line 1026
    sget-object v1, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->y:Ljava/lang/String;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "hybrid load error ,start defaultLoad,desc:"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-object/from16 v3, p2

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 1027
    invoke-virtual/range {p0 .. p0}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->isLoadSuccess()Z

    move-result v1

    if-eqz v1, :cond_6

    .line 1028
    iget-object v1, v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->A:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getPlayable_ads_without_video()I

    move-result v1

    const/4 v2, 0x2

    const/4 v4, 0x0

    const/4 v5, -0x2

    if-ne v1, v2, :cond_1

    .line 1029
    iget-object v1, v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->f:Lcom/mbridge/msdk/video/module/MBridgeContainerView;

    iget-object v2, v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->A:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v1, v2}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->setCampaign(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    .line 1030
    iget-object v1, v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->f:Lcom/mbridge/msdk/video/module/MBridgeContainerView;

    iget-object v2, v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->T:Ljava/util/List;

    invoke-virtual {v1, v2}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->addOrderViewData(Ljava/util/List;)V

    .line 1031
    iget-object v1, v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->f:Lcom/mbridge/msdk/video/module/MBridgeContainerView;

    iget-object v2, v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->k:Ljava/lang/String;

    invoke-virtual {v1, v2}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->setUnitID(Ljava/lang/String;)V

    .line 1033
    iget-object v1, v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->A:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getCbd()I

    move-result v1

    if-le v1, v5, :cond_0

    .line 1034
    iget-object v1, v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->A:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getCbd()I

    move-result v1

    goto :goto_0

    .line 1036
    :cond_0
    iget-object v1, v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->m:Lcom/mbridge/msdk/videocommon/d/c;

    invoke-virtual {v1}, Lcom/mbridge/msdk/videocommon/d/c;->p()I

    move-result v1

    .line 1038
    :goto_0
    iget-object v2, v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->f:Lcom/mbridge/msdk/video/module/MBridgeContainerView;

    invoke-virtual {v2, v1}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->setCloseDelayTime(I)V

    .line 1039
    iget-object v1, v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->f:Lcom/mbridge/msdk/video/module/MBridgeContainerView;

    iget-object v2, v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->m:Lcom/mbridge/msdk/videocommon/d/c;

    invoke-virtual {v2}, Lcom/mbridge/msdk/videocommon/d/c;->j()I

    move-result v2

    invoke-virtual {v1, v2}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->setPlayCloseBtnTm(I)V

    .line 1040
    iget-object v1, v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->f:Lcom/mbridge/msdk/video/module/MBridgeContainerView;

    new-instance v2, Lcom/mbridge/msdk/video/module/a/a/g;

    iget-object v6, v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->A:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iget-object v7, v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->B:Lcom/mbridge/msdk/videocommon/download/a;

    iget-object v8, v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->o:Lcom/mbridge/msdk/videocommon/b/d;

    invoke-virtual/range {p0 .. p0}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->b()Ljava/lang/String;

    move-result-object v9

    iget-object v10, v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->k:Ljava/lang/String;

    new-instance v11, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$d;

    invoke-direct {v11, v0, v4}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$d;-><init>(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;Lcom/mbridge/msdk/video/bt/module/MBTempContainer$1;)V

    iget-object v3, v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->m:Lcom/mbridge/msdk/videocommon/d/c;

    invoke-virtual {v3}, Lcom/mbridge/msdk/videocommon/d/c;->C()I

    move-result v12

    iget-boolean v13, v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->w:Z

    move-object v5, v2

    invoke-direct/range {v5 .. v13}, Lcom/mbridge/msdk/video/module/a/a/g;-><init>(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Lcom/mbridge/msdk/videocommon/download/a;Lcom/mbridge/msdk/videocommon/b/d;Ljava/lang/String;Ljava/lang/String;Lcom/mbridge/msdk/video/module/a/a;IZ)V

    invoke-virtual {v1, v2}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->setNotifyListener(Lcom/mbridge/msdk/video/module/a/a;)V

    .line 1042
    iget-object v1, v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->f:Lcom/mbridge/msdk/video/module/MBridgeContainerView;

    iget-object v2, v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->H:Lcom/mbridge/msdk/video/js/factory/b;

    invoke-virtual {v1, v2}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->preLoadData(Lcom/mbridge/msdk/video/js/factory/b;)V

    .line 1043
    iget-object v1, v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->f:Lcom/mbridge/msdk/video/module/MBridgeContainerView;

    invoke-virtual {v1}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->showPlayableView()V

    goto/16 :goto_3

    .line 1045
    :cond_1
    invoke-direct/range {p0 .. p2}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->a(ILjava/lang/String;)V

    .line 1046
    iget-object v1, v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->ac:Landroid/view/View;

    const/16 v2, 0x8

    invoke-virtual {v1, v2}, Landroid/view/View;->setVisibility(I)V

    .line 1047
    invoke-virtual/range {p0 .. p0}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->loadModuleDatas()V

    .line 1048
    iget-object v1, v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->m:Lcom/mbridge/msdk/videocommon/d/c;

    invoke-virtual {v1}, Lcom/mbridge/msdk/videocommon/d/c;->h()I

    move-result v1

    .line 1049
    invoke-direct/range {p0 .. p0}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->c()I

    move-result v2

    if-eqz v2, :cond_2

    move v14, v2

    goto :goto_1

    :cond_2
    move v14, v1

    .line 1053
    :goto_1
    iget-object v1, v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->A:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v1, :cond_3

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isDynamicView()Z

    move-result v1

    if-eqz v1, :cond_3

    .line 1054
    iget-object v1, v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->e:Lcom/mbridge/msdk/video/module/MBridgeVideoView;

    new-instance v2, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$c;

    iget-object v3, v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->j:Landroid/app/Activity;

    iget-object v6, v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->A:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-direct {v2, v0, v3, v6}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$c;-><init>(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;Landroid/app/Activity;Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    invoke-virtual {v1, v2}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->setContainerViewOnNotifyListener(Lcom/mbridge/msdk/video/module/a/a;)V

    .line 1057
    :cond_3
    iget-object v1, v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->A:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v1, :cond_4

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getVst()I

    move-result v1

    if-le v1, v5, :cond_4

    .line 1058
    iget-object v1, v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->A:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getVst()I

    move-result v1

    goto :goto_2

    .line 1060
    :cond_4
    iget-object v1, v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->m:Lcom/mbridge/msdk/videocommon/d/c;

    invoke-virtual {v1}, Lcom/mbridge/msdk/videocommon/d/c;->g()I

    move-result v1

    .line 1063
    :goto_2
    iget-object v2, v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->A:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getDynamicTempCode()I

    move-result v2

    const/4 v3, 0x5

    if-ne v2, v3, :cond_5

    iget v2, v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->F:I

    const/4 v3, 0x1

    if-le v2, v3, :cond_5

    .line 1064
    invoke-direct {v0, v1, v2}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->a(II)I

    move-result v1

    .line 1065
    iget-object v2, v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->A:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v2, v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setVst(I)V

    :cond_5
    move v15, v1

    .line 1067
    iget-object v1, v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->e:Lcom/mbridge/msdk/video/module/MBridgeVideoView;

    invoke-virtual {v1, v15}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->setVideoSkipTime(I)V

    .line 1068
    iget-object v1, v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->e:Lcom/mbridge/msdk/video/module/MBridgeVideoView;

    new-instance v2, Lcom/mbridge/msdk/video/module/a/a/l;

    iget-object v8, v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->f:Lcom/mbridge/msdk/video/module/MBridgeContainerView;

    iget-object v9, v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->A:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iget-object v10, v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->o:Lcom/mbridge/msdk/videocommon/b/d;

    iget-object v11, v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->B:Lcom/mbridge/msdk/videocommon/download/a;

    invoke-virtual/range {p0 .. p0}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->b()Ljava/lang/String;

    move-result-object v12

    iget-object v13, v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->k:Ljava/lang/String;

    new-instance v3, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$f;

    invoke-direct {v3, v0, v4}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$f;-><init>(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;Lcom/mbridge/msdk/video/bt/module/MBTempContainer$1;)V

    iget-object v4, v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->m:Lcom/mbridge/msdk/videocommon/d/c;

    invoke-virtual {v4}, Lcom/mbridge/msdk/videocommon/d/c;->C()I

    move-result v17

    iget-boolean v4, v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->w:Z

    iget-object v5, v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->m:Lcom/mbridge/msdk/videocommon/d/c;

    invoke-virtual {v5}, Lcom/mbridge/msdk/videocommon/d/c;->I()I

    move-result v19

    move-object v6, v2

    move-object v7, v1

    move-object/from16 v16, v3

    move/from16 v18, v4

    invoke-direct/range {v6 .. v19}, Lcom/mbridge/msdk/video/module/a/a/l;-><init>(Lcom/mbridge/msdk/video/module/MBridgeVideoView;Lcom/mbridge/msdk/video/module/MBridgeContainerView;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Lcom/mbridge/msdk/videocommon/b/d;Lcom/mbridge/msdk/videocommon/download/a;Ljava/lang/String;Ljava/lang/String;IILcom/mbridge/msdk/video/module/a/a;IZI)V

    invoke-virtual {v1, v2}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->setNotifyListener(Lcom/mbridge/msdk/video/module/a/a;)V

    .line 1070
    iget-object v1, v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->e:Lcom/mbridge/msdk/video/module/MBridgeVideoView;

    invoke-virtual {v1}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->defaultShow()V

    .line 1071
    iget-object v1, v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->f:Lcom/mbridge/msdk/video/module/MBridgeContainerView;

    new-instance v13, Lcom/mbridge/msdk/video/module/a/a/a;

    iget-object v3, v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->e:Lcom/mbridge/msdk/video/module/MBridgeVideoView;

    iget-object v5, v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->A:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iget-object v6, v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->o:Lcom/mbridge/msdk/videocommon/b/d;

    iget-object v7, v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->B:Lcom/mbridge/msdk/videocommon/download/a;

    invoke-virtual/range {p0 .. p0}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->b()Ljava/lang/String;

    move-result-object v8

    iget-object v9, v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->k:Ljava/lang/String;

    new-instance v10, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$c;

    iget-object v2, v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->j:Landroid/app/Activity;

    iget-object v4, v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->A:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-direct {v10, v0, v2, v4}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$c;-><init>(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;Landroid/app/Activity;Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    iget-object v2, v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->m:Lcom/mbridge/msdk/videocommon/d/c;

    invoke-virtual {v2}, Lcom/mbridge/msdk/videocommon/d/c;->C()I

    move-result v11

    iget-boolean v12, v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->w:Z

    move-object v2, v13

    move-object v4, v1

    invoke-direct/range {v2 .. v12}, Lcom/mbridge/msdk/video/module/a/a/a;-><init>(Lcom/mbridge/msdk/video/module/MBridgeVideoView;Lcom/mbridge/msdk/video/module/MBridgeContainerView;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Lcom/mbridge/msdk/videocommon/b/d;Lcom/mbridge/msdk/videocommon/download/a;Ljava/lang/String;Ljava/lang/String;Lcom/mbridge/msdk/video/module/a/a;IZ)V

    invoke-virtual {v1, v13}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->setNotifyListener(Lcom/mbridge/msdk/video/module/a/a;)V

    .line 1073
    iget-object v1, v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->f:Lcom/mbridge/msdk/video/module/MBridgeContainerView;

    invoke-virtual {v1}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->defaultShow()V

    .line 1075
    :goto_3
    invoke-direct/range {p0 .. p0}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->g()V

    goto :goto_4

    .line 1077
    :cond_6
    invoke-direct/range {p0 .. p2}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->a(ILjava/lang/String;)V

    .line 1078
    iget-object v1, v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->j:Landroid/app/Activity;

    if-eqz v1, :cond_7

    .line 1079
    iget-object v1, v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->j:Landroid/app/Activity;

    invoke-virtual {v1}, Landroid/app/Activity;->finish()V

    :cond_7
    :goto_4
    return-void
.end method

.method public findID(Ljava/lang/String;)I
    .locals 2

    .line 197
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->getContext()Landroid/content/Context;

    move-result-object v0

    const-string v1, "id"

    invoke-static {v0, p1, v1}, Lcom/mbridge/msdk/foundation/tools/s;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result p1

    return p1
.end method

.method public findLayout(Ljava/lang/String;)I
    .locals 2

    .line 201
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->getContext()Landroid/content/Context;

    move-result-object v0

    const-string v1, "layout"

    invoke-static {v0, p1, v1}, Lcom/mbridge/msdk/foundation/tools/s;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result p1

    return p1
.end method

.method public findMBridgeContainerView()Lcom/mbridge/msdk/video/module/MBridgeContainerView;
    .locals 1

    const-string v0, "mbridge_video_templete_container"

    .line 1134
    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->findID(Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;

    return-object v0
.end method

.method public findMBridgeVideoView()Lcom/mbridge/msdk/video/module/MBridgeVideoView;
    .locals 1

    const-string v0, "mbridge_video_templete_videoview"

    .line 1130
    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->findID(Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;

    return-object v0
.end method

.method public findWindVaneWebView()Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;
    .locals 4

    const-string v0, "_"

    .line 1091
    :try_start_0
    iget-boolean v1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->w:Z

    if-eqz v1, :cond_0

    .line 1092
    sget-object v1, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->y:Ljava/lang/String;

    const-string v2, "\u5f53\u524d\u5927\u6a21\u677f"

    invoke-static {v1, v2}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 1093
    iget-object v1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->A:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v1, :cond_4

    iget-object v1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->A:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRewardTemplateMode()Lcom/mbridge/msdk/foundation/entity/CampaignEx$c;

    move-result-object v1

    if-eqz v1, :cond_4

    .line 1094
    sget-object v1, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->y:Ljava/lang/String;

    const-string v2, "\u5f53\u524d\u5927\u6a21\u677f\uff0c\u5b58\u5728\u64ad\u653e\u6a21\u677f"

    invoke-static {v1, v2}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 1095
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v2, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->k:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->A:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->A:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestId()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->A:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRewardTemplateMode()Lcom/mbridge/msdk/foundation/entity/CampaignEx$c;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx$c;->e()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 1096
    invoke-static {v0}, Lcom/mbridge/msdk/videocommon/a;->a(Ljava/lang/String;)Lcom/mbridge/msdk/videocommon/a$a;

    move-result-object v0

    if-eqz v0, :cond_4

    .line 1098
    invoke-virtual {v0}, Lcom/mbridge/msdk/videocommon/a$a;->a()Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    move-result-object v0

    return-object v0

    .line 1102
    :cond_0
    sget-object v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->y:Ljava/lang/String;

    const-string v1, "\u5f53\u524d\u975e\u5927\u6a21\u677f"

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 1103
    iget-boolean v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->r:Z

    const/16 v1, 0x11f

    const/16 v2, 0x5e

    if-eqz v0, :cond_1

    .line 1104
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->A:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-static {v1, v0}, Lcom/mbridge/msdk/videocommon/a;->a(ILcom/mbridge/msdk/foundation/entity/CampaignEx;)Lcom/mbridge/msdk/videocommon/a$a;

    move-result-object v0

    goto :goto_0

    .line 1106
    :cond_1
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->A:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-static {v2, v0}, Lcom/mbridge/msdk/videocommon/a;->a(ILcom/mbridge/msdk/foundation/entity/CampaignEx;)Lcom/mbridge/msdk/videocommon/a$a;

    move-result-object v0

    :goto_0
    if-eqz v0, :cond_4

    .line 1108
    invoke-virtual {v0}, Lcom/mbridge/msdk/videocommon/a$a;->c()Z

    move-result v3

    if-eqz v3, :cond_4

    .line 1109
    iget-boolean v3, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->r:Z

    if-eqz v3, :cond_2

    .line 1110
    iget-object v2, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->A:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-static {v1, v2}, Lcom/mbridge/msdk/videocommon/a;->b(ILcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    goto :goto_1

    .line 1112
    :cond_2
    iget-object v1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->A:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-static {v2, v1}, Lcom/mbridge/msdk/videocommon/a;->b(ILcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    .line 1114
    :goto_1
    invoke-virtual {v0}, Lcom/mbridge/msdk/videocommon/a$a;->a()Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    move-result-object v0

    .line 1115
    iget-boolean v1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->ah:Z

    if-eqz v1, :cond_3

    .line 1116
    invoke-virtual {v0}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->setWebViewTransparent()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :cond_3
    return-object v0

    :catch_0
    move-exception v0

    .line 1122
    sget-boolean v1, Lcom/mbridge/msdk/MBridgeConstans;->DEBUG:Z

    if-eqz v1, :cond_4

    .line 1123
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_4
    const/4 v0, 0x0

    return-object v0
.end method

.method public getCampaign()Lcom/mbridge/msdk/foundation/entity/CampaignEx;
    .locals 1

    .line 1786
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->A:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    return-object v0
.end method

.method public getInstanceId()Ljava/lang/String;
    .locals 1

    .line 1852
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->G:Ljava/lang/String;

    return-object v0
.end method

.method public getLayoutID()I
    .locals 1

    .line 1085
    iget-boolean v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->ah:Z

    if-eqz v0, :cond_0

    const-string v0, "mbridge_reward_activity_video_templete_transparent"

    goto :goto_0

    :cond_0
    const-string v0, "mbridge_reward_activity_video_templete"

    :goto_0
    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->findLayout(Ljava/lang/String;)I

    move-result v0

    return v0
.end method

.method public init(Landroid/content/Context;)V
    .locals 0

    .line 141
    invoke-static {p1}, Landroid/view/LayoutInflater;->from(Landroid/content/Context;)Landroid/view/LayoutInflater;

    move-result-object p1

    iput-object p1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->V:Landroid/view/LayoutInflater;

    return-void
.end method

.method public initViews()Z
    .locals 1

    const-string v0, "mbridge_video_templete_progressbar"

    .line 1138
    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->findID(Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->findViewById(I)Landroid/view/View;

    move-result-object v0

    iput-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->ac:Landroid/view/View;

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return v0
.end method

.method public isLoadSuccess()Z
    .locals 1

    .line 238
    iget-boolean v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->b:Z

    return v0
.end method

.method public loadModuleDatas()V
    .locals 19

    move-object/from16 v0, p0

    .line 6336
    iget-object v1, v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->A:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->b(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)Lcom/mbridge/msdk/video/js/a/j;

    move-result-object v1

    if-eqz v1, :cond_0

    .line 6338
    invoke-virtual {v1}, Lcom/mbridge/msdk/video/js/a/j;->l()I

    move-result v1

    goto :goto_0

    :cond_0
    const/4 v1, 0x0

    :goto_0
    if-eqz v1, :cond_1

    .line 926
    iput v1, v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->q:I

    .line 928
    :cond_1
    iget-object v1, v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->m:Lcom/mbridge/msdk/videocommon/d/c;

    invoke-virtual {v1}, Lcom/mbridge/msdk/videocommon/d/c;->h()I

    move-result v1

    .line 929
    invoke-direct/range {p0 .. p0}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->c()I

    move-result v2

    if-eqz v2, :cond_2

    move v10, v2

    goto :goto_1

    :cond_2
    move v10, v1

    .line 934
    :goto_1
    iget-object v1, v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->e:Lcom/mbridge/msdk/video/module/MBridgeVideoView;

    iget v2, v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->q:I

    invoke-virtual {v1, v2}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->setSoundState(I)V

    .line 935
    iget-object v1, v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->e:Lcom/mbridge/msdk/video/module/MBridgeVideoView;

    iget-object v2, v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->A:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v1, v2}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->setCampaign(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    .line 937
    iget-object v1, v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->e:Lcom/mbridge/msdk/video/module/MBridgeVideoView;

    iget-object v2, v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->B:Lcom/mbridge/msdk/videocommon/download/a;

    invoke-virtual {v2}, Lcom/mbridge/msdk/videocommon/download/a;->n()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->setPlayURL(Ljava/lang/String;)V

    .line 940
    iget-object v1, v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->A:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    const/4 v2, -0x2

    if-eqz v1, :cond_3

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getVst()I

    move-result v1

    if-le v1, v2, :cond_3

    .line 941
    iget-object v1, v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->A:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getVst()I

    move-result v1

    goto :goto_2

    .line 943
    :cond_3
    iget-object v1, v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->m:Lcom/mbridge/msdk/videocommon/d/c;

    invoke-virtual {v1}, Lcom/mbridge/msdk/videocommon/d/c;->g()I

    move-result v1

    .line 946
    :goto_2
    iget-object v3, v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->A:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getDynamicTempCode()I

    move-result v3

    const/4 v4, 0x5

    const/4 v15, 0x1

    if-ne v3, v4, :cond_4

    iget v3, v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->F:I

    if-le v3, v15, :cond_4

    .line 947
    invoke-direct {v0, v1, v3}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->a(II)I

    move-result v1

    .line 948
    iget-object v3, v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->A:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v3, v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setVst(I)V

    .line 950
    :cond_4
    iget-object v3, v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->e:Lcom/mbridge/msdk/video/module/MBridgeVideoView;

    invoke-virtual {v3, v1}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->setVideoSkipTime(I)V

    .line 951
    iget-object v3, v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->e:Lcom/mbridge/msdk/video/module/MBridgeVideoView;

    iget-object v4, v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->m:Lcom/mbridge/msdk/videocommon/d/c;

    invoke-virtual {v4}, Lcom/mbridge/msdk/videocommon/d/c;->k()I

    move-result v4

    invoke-virtual {v3, v4}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->setCloseAlert(I)V

    .line 952
    iget-object v3, v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->e:Lcom/mbridge/msdk/video/module/MBridgeVideoView;

    invoke-direct/range {p0 .. p0}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->h()I

    move-result v4

    invoke-virtual {v3, v4}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->setBufferTimeout(I)V

    .line 953
    iget-object v14, v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->e:Lcom/mbridge/msdk/video/module/MBridgeVideoView;

    new-instance v13, Lcom/mbridge/msdk/video/module/a/a/m;

    iget-object v4, v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->H:Lcom/mbridge/msdk/video/js/factory/b;

    iget-object v5, v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->A:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iget-object v6, v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->o:Lcom/mbridge/msdk/videocommon/b/d;

    iget-object v7, v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->B:Lcom/mbridge/msdk/videocommon/download/a;

    invoke-virtual/range {p0 .. p0}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->b()Ljava/lang/String;

    move-result-object v8

    iget-object v9, v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->k:Ljava/lang/String;

    new-instance v12, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$f;

    const/4 v11, 0x0

    invoke-direct {v12, v0, v11}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$f;-><init>(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;Lcom/mbridge/msdk/video/bt/module/MBTempContainer$1;)V

    iget-object v3, v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->m:Lcom/mbridge/msdk/videocommon/d/c;

    invoke-virtual {v3}, Lcom/mbridge/msdk/videocommon/d/c;->C()I

    move-result v16

    iget-boolean v3, v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->w:Z

    iget-object v11, v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->m:Lcom/mbridge/msdk/videocommon/d/c;

    invoke-virtual {v11}, Lcom/mbridge/msdk/videocommon/d/c;->I()I

    move-result v17

    move/from16 v18, v3

    move-object v3, v13

    move v11, v1

    move-object v2, v13

    move/from16 v13, v16

    move/from16 v16, v1

    move-object v1, v14

    move/from16 v14, v18

    move/from16 v18, v15

    move/from16 v15, v17

    invoke-direct/range {v3 .. v15}, Lcom/mbridge/msdk/video/module/a/a/m;-><init>(Lcom/mbridge/msdk/video/js/factory/IJSFactory;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Lcom/mbridge/msdk/videocommon/b/d;Lcom/mbridge/msdk/videocommon/download/a;Ljava/lang/String;Ljava/lang/String;IILcom/mbridge/msdk/video/module/a/a;IZI)V

    invoke-virtual {v1, v2}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->setNotifyListener(Lcom/mbridge/msdk/video/module/a/a;)V

    .line 954
    iget-object v1, v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->e:Lcom/mbridge/msdk/video/module/MBridgeVideoView;

    iget-boolean v2, v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->ah:Z

    invoke-virtual {v1, v2}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->setShowingTransparent(Z)V

    .line 955
    iget-object v1, v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->e:Lcom/mbridge/msdk/video/module/MBridgeVideoView;

    iget-object v2, v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->ao:Lcom/iab/omid/library/mmadbridge/adsession/AdSession;

    invoke-virtual {v1, v2}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->setAdSession(Lcom/iab/omid/library/mmadbridge/adsession/AdSession;)V

    .line 956
    iget-boolean v1, v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->r:Z

    if-eqz v1, :cond_7

    iget v1, v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->t:I

    sget v2, Lcom/mbridge/msdk/foundation/same/a;->w:I

    if-eq v1, v2, :cond_5

    iget v1, v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->t:I

    sget v2, Lcom/mbridge/msdk/foundation/same/a;->x:I

    if-ne v1, v2, :cond_7

    .line 957
    :cond_5
    iget-object v1, v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->e:Lcom/mbridge/msdk/video/module/MBridgeVideoView;

    iget v2, v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->t:I

    iget v3, v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->u:I

    iget v4, v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->v:I

    invoke-virtual {v1, v2, v3, v4}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->setIVRewardEnable(III)V

    .line 958
    iget-object v1, v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->e:Lcom/mbridge/msdk/video/module/MBridgeVideoView;

    .line 7329
    invoke-virtual/range {p0 .. p0}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->getJSCommon()Lcom/mbridge/msdk/video/js/c;

    move-result-object v2

    if-eqz v2, :cond_6

    .line 7330
    invoke-virtual/range {p0 .. p0}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->getJSCommon()Lcom/mbridge/msdk/video/js/c;

    move-result-object v2

    invoke-interface {v2}, Lcom/mbridge/msdk/video/js/c;->i()I

    move-result v15

    goto :goto_3

    :cond_6
    move/from16 v15, v18

    .line 958
    :goto_3
    invoke-virtual {v1, v15}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->setDialogRole(I)V

    .line 960
    :cond_7
    iget-object v1, v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->f:Lcom/mbridge/msdk/video/module/MBridgeContainerView;

    iget-object v2, v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->A:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v1, v2}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->setCampaign(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    .line 961
    iget-object v1, v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->f:Lcom/mbridge/msdk/video/module/MBridgeContainerView;

    iget-object v2, v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->T:Ljava/util/List;

    invoke-virtual {v1, v2}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->addOrderViewData(Ljava/util/List;)V

    .line 962
    iget-object v1, v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->f:Lcom/mbridge/msdk/video/module/MBridgeContainerView;

    iget-object v2, v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->k:Ljava/lang/String;

    invoke-virtual {v1, v2}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->setUnitID(Ljava/lang/String;)V

    .line 964
    iget-object v1, v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->A:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getCbd()I

    move-result v1

    const/4 v2, -0x2

    if-le v1, v2, :cond_8

    .line 965
    iget-object v1, v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->A:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getCbd()I

    move-result v1

    goto :goto_4

    .line 967
    :cond_8
    iget-object v1, v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->m:Lcom/mbridge/msdk/videocommon/d/c;

    invoke-virtual {v1}, Lcom/mbridge/msdk/videocommon/d/c;->p()I

    move-result v1

    .line 969
    :goto_4
    iget-object v2, v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->f:Lcom/mbridge/msdk/video/module/MBridgeContainerView;

    invoke-virtual {v2, v1}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->setCloseDelayTime(I)V

    .line 970
    iget-object v1, v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->f:Lcom/mbridge/msdk/video/module/MBridgeContainerView;

    iget-object v2, v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->m:Lcom/mbridge/msdk/videocommon/d/c;

    invoke-virtual {v2}, Lcom/mbridge/msdk/videocommon/d/c;->j()I

    move-result v2

    invoke-virtual {v1, v2}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->setPlayCloseBtnTm(I)V

    .line 972
    iget-object v1, v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->f:Lcom/mbridge/msdk/video/module/MBridgeContainerView;

    iget-object v2, v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->m:Lcom/mbridge/msdk/videocommon/d/c;

    invoke-virtual {v2}, Lcom/mbridge/msdk/videocommon/d/c;->i()I

    move-result v2

    invoke-virtual {v1, v2}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->setVideoInteractiveType(I)V

    .line 973
    iget-object v1, v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->f:Lcom/mbridge/msdk/video/module/MBridgeContainerView;

    iget-object v2, v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->m:Lcom/mbridge/msdk/videocommon/d/c;

    invoke-virtual {v2}, Lcom/mbridge/msdk/videocommon/d/c;->q()I

    move-result v2

    invoke-virtual {v1, v2}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->setEndscreenType(I)V

    .line 974
    iget-object v1, v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->f:Lcom/mbridge/msdk/video/module/MBridgeContainerView;

    move/from16 v2, v16

    invoke-virtual {v1, v2}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->setVideoSkipTime(I)V

    .line 975
    iget-object v1, v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->f:Lcom/mbridge/msdk/video/module/MBridgeContainerView;

    iget-boolean v2, v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->ah:Z

    invoke-virtual {v1, v2}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->setShowingTransparent(Z)V

    .line 976
    iget-object v1, v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->f:Lcom/mbridge/msdk/video/module/MBridgeContainerView;

    iget-object v2, v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->H:Lcom/mbridge/msdk/video/js/factory/b;

    invoke-virtual {v1, v2}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->setJSFactory(Lcom/mbridge/msdk/video/js/factory/b;)V

    .line 977
    iget-object v1, v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->A:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getPlayable_ads_without_video()I

    move-result v1

    const/4 v2, 0x2

    if-ne v1, v2, :cond_9

    .line 978
    iget-object v1, v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->f:Lcom/mbridge/msdk/video/module/MBridgeContainerView;

    new-instance v11, Lcom/mbridge/msdk/video/module/a/a/g;

    iget-object v3, v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->A:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iget-object v4, v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->B:Lcom/mbridge/msdk/videocommon/download/a;

    iget-object v5, v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->o:Lcom/mbridge/msdk/videocommon/b/d;

    invoke-virtual/range {p0 .. p0}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->b()Ljava/lang/String;

    move-result-object v6

    iget-object v7, v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->k:Ljava/lang/String;

    new-instance v8, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$d;

    const/4 v2, 0x0

    invoke-direct {v8, v0, v2}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$d;-><init>(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;Lcom/mbridge/msdk/video/bt/module/MBTempContainer$1;)V

    iget-object v2, v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->m:Lcom/mbridge/msdk/videocommon/d/c;

    invoke-virtual {v2}, Lcom/mbridge/msdk/videocommon/d/c;->C()I

    move-result v9

    iget-boolean v10, v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->w:Z

    move-object v2, v11

    invoke-direct/range {v2 .. v10}, Lcom/mbridge/msdk/video/module/a/a/g;-><init>(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Lcom/mbridge/msdk/videocommon/download/a;Lcom/mbridge/msdk/videocommon/b/d;Ljava/lang/String;Ljava/lang/String;Lcom/mbridge/msdk/video/module/a/a;IZ)V

    invoke-virtual {v1, v11}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->setNotifyListener(Lcom/mbridge/msdk/video/module/a/a;)V

    .line 979
    iget-object v1, v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->f:Lcom/mbridge/msdk/video/module/MBridgeContainerView;

    iget-object v2, v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->H:Lcom/mbridge/msdk/video/js/factory/b;

    invoke-virtual {v1, v2}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->preLoadData(Lcom/mbridge/msdk/video/js/factory/b;)V

    .line 980
    iget-object v1, v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->f:Lcom/mbridge/msdk/video/module/MBridgeContainerView;

    invoke-virtual {v1}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->showPlayableView()V

    goto :goto_5

    .line 982
    :cond_9
    iget-object v1, v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->f:Lcom/mbridge/msdk/video/module/MBridgeContainerView;

    new-instance v12, Lcom/mbridge/msdk/video/module/a/a/b;

    iget-object v3, v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->H:Lcom/mbridge/msdk/video/js/factory/b;

    iget-object v4, v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->A:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iget-object v5, v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->o:Lcom/mbridge/msdk/videocommon/b/d;

    iget-object v6, v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->B:Lcom/mbridge/msdk/videocommon/download/a;

    invoke-virtual/range {p0 .. p0}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->b()Ljava/lang/String;

    move-result-object v7

    iget-object v8, v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->k:Ljava/lang/String;

    new-instance v9, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$c;

    iget-object v2, v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->j:Landroid/app/Activity;

    iget-object v10, v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->A:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-direct {v9, v0, v2, v10}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$c;-><init>(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;Landroid/app/Activity;Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    iget-object v2, v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->m:Lcom/mbridge/msdk/videocommon/d/c;

    invoke-virtual {v2}, Lcom/mbridge/msdk/videocommon/d/c;->C()I

    move-result v10

    iget-boolean v11, v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->w:Z

    move-object v2, v12

    invoke-direct/range {v2 .. v11}, Lcom/mbridge/msdk/video/module/a/a/b;-><init>(Lcom/mbridge/msdk/video/js/factory/IJSFactory;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Lcom/mbridge/msdk/videocommon/b/d;Lcom/mbridge/msdk/videocommon/download/a;Ljava/lang/String;Ljava/lang/String;Lcom/mbridge/msdk/video/module/a/a;IZ)V

    invoke-virtual {v1, v12}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->setNotifyListener(Lcom/mbridge/msdk/video/module/a/a;)V

    .line 983
    iget-object v1, v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->f:Lcom/mbridge/msdk/video/module/MBridgeContainerView;

    iget-object v2, v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->H:Lcom/mbridge/msdk/video/js/factory/b;

    invoke-virtual {v1, v2}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->preLoadData(Lcom/mbridge/msdk/video/js/factory/b;)V

    .line 984
    iget-object v1, v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->e:Lcom/mbridge/msdk/video/module/MBridgeVideoView;

    iget-object v2, v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->H:Lcom/mbridge/msdk/video/js/factory/b;

    invoke-virtual {v1, v2}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->preLoadData(Lcom/mbridge/msdk/video/js/factory/b;)V

    .line 986
    :goto_5
    iget-boolean v1, v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->ah:Z

    if-eqz v1, :cond_a

    .line 987
    iget-object v1, v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->f:Lcom/mbridge/msdk/video/module/MBridgeContainerView;

    invoke-virtual {v1}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->setMBridgeClickMiniCardViewTransparent()V

    :cond_a
    return-void
.end method

.method public notifyEvent(Ljava/lang/String;)V
    .locals 4

    .line 1864
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->d:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    if-eqz v0, :cond_0

    .line 1865
    iget-object v1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->G:Ljava/lang/String;

    .line 8178
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a()Lcom/mbridge/msdk/mbjscommon/windvane/h;

    move-result-object v2

    invoke-virtual {v1}, Ljava/lang/String;->getBytes()[B

    move-result-object v1

    const/4 v3, 0x2

    invoke-static {v1, v3}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v2, v0, p1, v1}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public onBackPressed()V
    .locals 2

    .line 1157
    iget-boolean v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->ah:Z

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->e:Lcom/mbridge/msdk/video/module/MBridgeVideoView;

    if-eqz v0, :cond_0

    .line 1158
    invoke-virtual {v0}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->notifyVideoClose()V

    return-void

    .line 1161
    :cond_0
    iget-boolean v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->aj:Z

    if-eqz v0, :cond_3

    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->e:Lcom/mbridge/msdk/video/module/MBridgeVideoView;

    if-eqz v0, :cond_3

    .line 1162
    invoke-virtual {v0}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->isMiniCardShowing()Z

    move-result v0

    if-eqz v0, :cond_2

    .line 1163
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->f:Lcom/mbridge/msdk/video/module/MBridgeContainerView;

    if-eqz v0, :cond_1

    .line 1164
    invoke-virtual {v0}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->onMiniEndcardBackPress()V

    :cond_1
    return-void

    .line 1168
    :cond_2
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->e:Lcom/mbridge/msdk/video/module/MBridgeVideoView;

    invoke-virtual {v0}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->onBackPress()V

    return-void

    .line 1171
    :cond_3
    iget-boolean v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->al:Z

    if-eqz v0, :cond_4

    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->f:Lcom/mbridge/msdk/video/module/MBridgeContainerView;

    if-eqz v0, :cond_4

    .line 1172
    invoke-virtual {v0}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->onPlayableBackPress()V

    return-void

    .line 1175
    :cond_4
    iget-boolean v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->ak:Z

    if-eqz v0, :cond_5

    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->f:Lcom/mbridge/msdk/video/module/MBridgeContainerView;

    if-eqz v0, :cond_5

    .line 1176
    invoke-virtual {v0}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->onEndcardBackPress()V

    .line 1179
    :cond_5
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->getJSCommon()Lcom/mbridge/msdk/video/js/c;

    move-result-object v0

    invoke-interface {v0}, Lcom/mbridge/msdk/video/js/c;->c()Z

    move-result v0

    if-eqz v0, :cond_7

    .line 1181
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->getJSContainerModule()Lcom/mbridge/msdk/video/js/e;

    move-result-object v0

    if-eqz v0, :cond_6

    invoke-virtual {p0}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->getJSContainerModule()Lcom/mbridge/msdk/video/js/e;

    move-result-object v0

    invoke-interface {v0}, Lcom/mbridge/msdk/video/js/e;->miniCardShowing()Z

    move-result v0

    if-eqz v0, :cond_6

    goto :goto_0

    .line 1184
    :cond_6
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->getActivityProxy()Lcom/mbridge/msdk/video/js/a;

    move-result-object v0

    invoke-interface {v0}, Lcom/mbridge/msdk/video/js/a;->g()V

    goto :goto_0

    .line 1187
    :cond_7
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->canBackPress()Z

    move-result v0

    if-eqz v0, :cond_8

    .line 1188
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->j:Landroid/app/Activity;

    if-eqz v0, :cond_9

    iget-boolean v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->w:Z

    if-nez v0, :cond_9

    iget-boolean v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->am:Z

    if-nez v0, :cond_9

    const/4 v0, 0x1

    .line 1189
    iput-boolean v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->am:Z

    .line 1190
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->j:Landroid/app/Activity;

    invoke-virtual {v0}, Landroid/app/Activity;->onBackPressed()V

    goto :goto_0

    .line 1193
    :cond_8
    sget-object v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->y:Ljava/lang/String;

    const-string v1, "onBackPressed can\'t excute"

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    :cond_9
    :goto_0
    return-void
.end method

.method public onConfigurationChanged(Landroid/content/res/Configuration;)V
    .locals 0

    .line 529
    invoke-super {p0, p1}, Lcom/mbridge/msdk/video/js/container/AbstractJSContainer;->onConfigurationChanged(Landroid/content/res/Configuration;)V

    return-void
.end method

.method public onCreate()V
    .locals 15

    const-string v0, "mbridge_video_templete_webview_parent"

    const-string v1, "id"

    .line 533
    sget-object v2, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->y:Ljava/lang/String;

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "onCreate isBigOffer: "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-boolean v4, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->w:Z

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v2, v3}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 2595
    iget-object v2, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->m:Lcom/mbridge/msdk/videocommon/d/c;

    if-nez v2, :cond_0

    .line 2596
    invoke-static {}, Lcom/mbridge/msdk/videocommon/d/b;->a()Lcom/mbridge/msdk/videocommon/d/b;

    move-result-object v2

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v3

    invoke-virtual {v3}, Lcom/mbridge/msdk/foundation/controller/a;->k()Ljava/lang/String;

    move-result-object v3

    iget-object v4, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->k:Ljava/lang/String;

    iget-boolean v5, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->r:Z

    invoke-virtual {v2, v3, v4, v5}, Lcom/mbridge/msdk/videocommon/d/b;->a(Ljava/lang/String;Ljava/lang/String;Z)Lcom/mbridge/msdk/videocommon/d/c;

    move-result-object v2

    iput-object v2, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->m:Lcom/mbridge/msdk/videocommon/d/c;

    :cond_0
    const/4 v2, 0x0

    const/4 v3, 0x0

    .line 2737
    :try_start_0
    iget-object v4, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->A:Lcom/mbridge/msdk/foundation/entity/CampaignEx;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_2

    if-nez v4, :cond_1

    goto :goto_1

    .line 2742
    :cond_1
    :try_start_1
    invoke-static {}, Lcom/mbridge/msdk/scheme/applet/AppletModelManager;->getInstance()Lcom/mbridge/msdk/scheme/applet/AppletModelManager;

    move-result-object v4

    iget-object v5, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->A:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v4, v5}, Lcom/mbridge/msdk/scheme/applet/AppletModelManager;->get(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)Lcom/mbridge/msdk/scheme/applet/AppletsModel;

    move-result-object v4
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    goto :goto_0

    :catch_0
    move-exception v4

    .line 2744
    :try_start_2
    sget-boolean v5, Lcom/mbridge/msdk/MBridgeConstans;->DEBUG:Z

    if-eqz v5, :cond_2

    .line 2745
    invoke-virtual {v4}, Ljava/lang/Exception;->printStackTrace()V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_2

    :cond_2
    move-object v4, v2

    :goto_0
    if-eqz v4, :cond_5

    .line 2750
    :try_start_3
    invoke-virtual {v4, v3}, Lcom/mbridge/msdk/scheme/applet/AppletsModel;->can(I)Z

    move-result v5

    if-nez v5, :cond_3

    goto :goto_1

    .line 2753
    :cond_3
    invoke-virtual {v4, v3}, Lcom/mbridge/msdk/scheme/applet/AppletsModel;->setUserClick(Z)V

    .line 2754
    new-instance v5, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$b;

    iget-object v6, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->A:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-direct {v5, v6}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$b;-><init>(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    invoke-virtual {v4, v3, v5}, Lcom/mbridge/msdk/scheme/applet/AppletsModel;->requestWxAppletsScheme(ILcom/mbridge/msdk/scheme/applet/IAppletSchemeCallBack;)V
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_1

    goto :goto_1

    :catch_1
    move-exception v5

    if-eqz v4, :cond_4

    .line 2757
    :try_start_4
    invoke-virtual {v4}, Lcom/mbridge/msdk/scheme/applet/AppletsModel;->clearRequestState()V

    .line 2759
    :cond_4
    sget-boolean v4, Lcom/mbridge/msdk/MBridgeConstans;->DEBUG:Z

    if-eqz v4, :cond_5

    .line 2760
    invoke-virtual {v5}, Ljava/lang/Exception;->printStackTrace()V
    :try_end_4
    .catch Ljava/lang/Exception; {:try_start_4 .. :try_end_4} :catch_2

    goto :goto_1

    :catch_2
    move-exception v4

    .line 538
    sget-boolean v5, Lcom/mbridge/msdk/MBridgeConstans;->DEBUG:Z

    if-eqz v5, :cond_5

    .line 539
    invoke-virtual {v4}, Ljava/lang/Exception;->printStackTrace()V

    .line 542
    :cond_5
    :goto_1
    iput-boolean v3, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->am:Z

    .line 545
    :try_start_5
    iget-boolean v4, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->w:Z

    if-eqz v4, :cond_7

    .line 546
    iget-object v4, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->A:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v4, :cond_6

    iget-object v4, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->A:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v4}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isDynamicView()Z

    move-result v4

    if-eqz v4, :cond_6

    .line 547
    new-instance v4, Lcom/mbridge/msdk/video/bt/module/b/b;

    invoke-virtual {p0}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->getContext()Landroid/content/Context;

    move-result-object v6

    iget-boolean v7, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->r:Z

    iget-object v8, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->m:Lcom/mbridge/msdk/videocommon/d/c;

    iget-object v9, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->A:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iget-object v10, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->C:Lcom/mbridge/msdk/video/bt/module/b/h;

    invoke-virtual {p0}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->b()Ljava/lang/String;

    move-result-object v11

    iget-object v12, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->k:Ljava/lang/String;

    move-object v5, v4

    invoke-direct/range {v5 .. v12}, Lcom/mbridge/msdk/video/bt/module/b/b;-><init>(Landroid/content/Context;ZLcom/mbridge/msdk/videocommon/d/c;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Lcom/mbridge/msdk/video/bt/module/b/h;Ljava/lang/String;Ljava/lang/String;)V

    iput-object v4, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->C:Lcom/mbridge/msdk/video/bt/module/b/h;

    goto :goto_2

    .line 549
    :cond_6
    new-instance v4, Lcom/mbridge/msdk/video/bt/module/b/d;

    iget-object v5, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->D:Lcom/mbridge/msdk/video/bt/module/a/c;

    iget-object v6, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->G:Ljava/lang/String;

    invoke-direct {v4, v5, v6}, Lcom/mbridge/msdk/video/bt/module/b/d;-><init>(Lcom/mbridge/msdk/video/bt/module/a/c;Ljava/lang/String;)V

    iput-object v4, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->C:Lcom/mbridge/msdk/video/bt/module/b/h;

    goto :goto_2

    .line 552
    :cond_7
    new-instance v12, Lcom/mbridge/msdk/video/bt/module/b/b;

    invoke-virtual {p0}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->getContext()Landroid/content/Context;

    move-result-object v5

    iget-boolean v6, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->r:Z

    iget-object v7, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->m:Lcom/mbridge/msdk/videocommon/d/c;

    iget-object v8, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->A:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iget-object v9, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->C:Lcom/mbridge/msdk/video/bt/module/b/h;

    invoke-virtual {p0}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->b()Ljava/lang/String;

    move-result-object v10

    iget-object v11, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->k:Ljava/lang/String;

    move-object v4, v12

    invoke-direct/range {v4 .. v11}, Lcom/mbridge/msdk/video/bt/module/b/b;-><init>(Landroid/content/Context;ZLcom/mbridge/msdk/videocommon/d/c;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Lcom/mbridge/msdk/video/bt/module/b/h;Ljava/lang/String;Ljava/lang/String;)V

    iput-object v12, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->C:Lcom/mbridge/msdk/video/bt/module/b/h;

    .line 554
    :goto_2
    iget-object v4, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->A:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v4, :cond_8

    iget-object v4, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->A:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v4}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isActiveOm()Z

    move-result v4

    if-eqz v4, :cond_8

    .line 555
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->getContext()Landroid/content/Context;

    move-result-object v5

    const/4 v6, 0x0

    iget-object v4, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->A:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v4}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getOmid()Ljava/lang/String;

    move-result-object v7

    iget-object v4, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->A:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v4}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestId()Ljava/lang/String;

    move-result-object v8

    iget-object v4, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->A:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v4}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object v9

    iget-object v10, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->k:Ljava/lang/String;

    iget-object v4, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->B:Lcom/mbridge/msdk/videocommon/download/a;

    invoke-virtual {v4}, Lcom/mbridge/msdk/videocommon/download/a;->n()Ljava/lang/String;

    move-result-object v11

    iget-object v4, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->A:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v4}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestIdNotice()Ljava/lang/String;

    move-result-object v12

    invoke-static/range {v5 .. v12}, Lcom/mbridge/msdk/a/b;->a(Landroid/content/Context;ZLjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lcom/iab/omid/library/mmadbridge/adsession/AdSession;

    move-result-object v4

    iput-object v4, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->ao:Lcom/iab/omid/library/mmadbridge/adsession/AdSession;

    .line 558
    :cond_8
    new-instance v4, Lcom/mbridge/msdk/video/bt/module/b/e;

    iget-object v5, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->C:Lcom/mbridge/msdk/video/bt/module/b/h;

    invoke-direct {v4, v5}, Lcom/mbridge/msdk/video/bt/module/b/e;-><init>(Lcom/mbridge/msdk/video/bt/module/b/h;)V

    invoke-virtual {p0, v4}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->registerErrorListener(Lcom/mbridge/msdk/video/bt/module/MBTempContainer$a;)V

    .line 560
    iget-object v4, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->m:Lcom/mbridge/msdk/videocommon/d/c;

    iget-object v5, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->A:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p0, v4, v5}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->a(Lcom/mbridge/msdk/videocommon/d/c;Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    .line 561
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->setShowingTransparent()V

    .line 563
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->getLayoutID()I

    move-result v4

    if-gtz v4, :cond_9

    const-string v0, "layoutID not found"

    .line 565
    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->a(Ljava/lang/String;)V

    goto/16 :goto_7

    .line 567
    :cond_9
    iget-object v5, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->V:Landroid/view/LayoutInflater;

    invoke-virtual {v5, v4, v2}, Landroid/view/LayoutInflater;->inflate(ILandroid/view/ViewGroup;)Landroid/view/View;

    move-result-object v4

    iput-object v4, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->z:Landroid/view/View;

    .line 3149
    new-instance v5, Landroid/widget/RelativeLayout$LayoutParams;

    const/4 v6, -0x1

    invoke-direct {v5, v6, v6}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    .line 568
    invoke-virtual {p0, v4, v5}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    .line 3153
    iget-boolean v4, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->a:Z

    if-eqz v4, :cond_a

    .line 3154
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->setMatchParent()V

    .line 3461
    :cond_a
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->findWindVaneWebView()Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    move-result-object v4

    iput-object v4, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->d:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    .line 3462
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->findMBridgeVideoView()Lcom/mbridge/msdk/video/module/MBridgeVideoView;

    move-result-object v4

    iput-object v4, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->e:Lcom/mbridge/msdk/video/module/MBridgeVideoView;

    .line 3463
    iget-object v5, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->A:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v4, v5}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->setVideoLayout(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    .line 3464
    iget-object v4, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->e:Lcom/mbridge/msdk/video/module/MBridgeVideoView;

    iget-boolean v5, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->r:Z

    invoke-virtual {v4, v5}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->setIsIV(Z)V

    .line 3465
    iget-object v4, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->e:Lcom/mbridge/msdk/video/module/MBridgeVideoView;

    iget-object v5, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->k:Ljava/lang/String;

    invoke-virtual {v4, v5}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->setUnitId(Ljava/lang/String;)V

    .line 3466
    iget-object v4, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->e:Lcom/mbridge/msdk/video/module/MBridgeVideoView;

    iget-object v5, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->E:Lcom/mbridge/msdk/video/dynview/e/a;

    iget-object v7, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->T:Ljava/util/List;

    iget v8, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->F:I

    iget v9, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->U:I

    invoke-virtual {v4, v5, v7, v8, v9}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->setCamPlayOrderCallback(Lcom/mbridge/msdk/video/dynview/e/a;Ljava/util/List;II)V

    .line 3467
    iget-boolean v4, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->w:Z

    if-eqz v4, :cond_b

    .line 3468
    iget-object v4, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->e:Lcom/mbridge/msdk/video/module/MBridgeVideoView;

    iget v5, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->N:I

    iget v7, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->O:I

    iget v8, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->P:I

    iget v9, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->Q:I

    invoke-virtual {v4, v5, v7, v8, v9}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->setNotchPadding(IIII)V

    .line 3470
    :cond_b
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->findMBridgeContainerView()Lcom/mbridge/msdk/video/module/MBridgeContainerView;

    move-result-object v4

    iput-object v4, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->f:Lcom/mbridge/msdk/video/module/MBridgeContainerView;

    .line 3471
    iget-boolean v4, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->w:Z

    if-eqz v4, :cond_c

    .line 3472
    iget-object v7, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->f:Lcom/mbridge/msdk/video/module/MBridgeContainerView;

    iget v8, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->M:I

    iget v9, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->N:I

    iget v10, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->O:I

    iget v11, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->P:I

    iget v12, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->Q:I

    invoke-virtual/range {v7 .. v12}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->setNotchPadding(IIIII)V

    .line 3474
    :cond_c
    iget-object v4, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->e:Lcom/mbridge/msdk/video/module/MBridgeVideoView;

    const/4 v5, 0x1

    if-eqz v4, :cond_d

    iget-object v4, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->f:Lcom/mbridge/msdk/video/module/MBridgeContainerView;

    if-eqz v4, :cond_d

    invoke-virtual {p0}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->initViews()Z

    move-result v4

    if-eqz v4, :cond_d

    move v4, v5

    goto :goto_3

    :cond_d
    move v4, v3

    :goto_3
    if-nez v4, :cond_e

    .line 572
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->c:Lcom/mbridge/msdk/video/bt/module/MBTempContainer$a;

    const-string v1, "not found View IDS"

    invoke-interface {v0, v1}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$a;->a(Ljava/lang/String;)V

    .line 573
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->j:Landroid/app/Activity;

    if-eqz v0, :cond_1d

    .line 574
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->j:Landroid/app/Activity;

    invoke-virtual {v0}, Landroid/app/Activity;->finish()V

    goto/16 :goto_7

    .line 577
    :cond_e
    iput-boolean v5, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->b:Z

    .line 3793
    iget-object v4, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->d:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    .line 3794
    new-instance v14, Lcom/mbridge/msdk/video/js/factory/b;

    iget-object v8, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->j:Landroid/app/Activity;

    iget-object v10, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->e:Lcom/mbridge/msdk/video/module/MBridgeVideoView;

    iget-object v11, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->f:Lcom/mbridge/msdk/video/module/MBridgeContainerView;

    iget-object v12, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->A:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    new-instance v13, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$e;

    invoke-direct {v13, p0, v2}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$e;-><init>(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;Lcom/mbridge/msdk/video/bt/module/MBTempContainer$1;)V

    move-object v7, v14

    move-object v9, v4

    invoke-direct/range {v7 .. v13}, Lcom/mbridge/msdk/video/js/factory/b;-><init>(Landroid/app/Activity;Landroid/webkit/WebView;Lcom/mbridge/msdk/video/module/MBridgeVideoView;Lcom/mbridge/msdk/video/module/MBridgeContainerView;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Lcom/mbridge/msdk/video/js/c$a;)V

    iput-object v14, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->H:Lcom/mbridge/msdk/video/js/factory/b;

    .line 3796
    iget-object v7, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->A:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v7, :cond_f

    iget-object v7, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->A:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v7}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getDynamicTempCode()I

    move-result v7

    const/4 v8, 0x5

    if-ne v7, v8, :cond_f

    iget-object v7, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->T:Ljava/util/List;

    if-eqz v7, :cond_f

    .line 3797
    iget-object v7, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->H:Lcom/mbridge/msdk/video/js/factory/b;

    iget-object v8, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->T:Ljava/util/List;

    invoke-virtual {v7, v8}, Lcom/mbridge/msdk/video/js/factory/b;->a(Ljava/util/List;)V

    .line 3799
    :cond_f
    iget-object v7, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->H:Lcom/mbridge/msdk/video/js/factory/b;

    invoke-virtual {p0, v7}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->registerJsFactory(Lcom/mbridge/msdk/video/js/factory/IJSFactory;)V

    .line 3800
    invoke-static {}, Lcom/mbridge/msdk/foundation/b/b;->a()Lcom/mbridge/msdk/foundation/b/b;

    move-result-object v7

    new-instance v8, Ljava/lang/StringBuilder;

    invoke-direct {v8}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v9, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->k:Ljava/lang/String;

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v9, "_"

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v8

    new-instance v9, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$6;

    invoke-direct {v9, p0}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$6;-><init>(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;)V

    invoke-virtual {v7, v8, v9}, Lcom/mbridge/msdk/foundation/b/b;->a(Ljava/lang/String;Lcom/mbridge/msdk/foundation/b/a;)V
    :try_end_5
    .catchall {:try_start_5 .. :try_end_5} :catchall_0

    const-string v7, "preload template webview is null or load error"

    if-eqz v4, :cond_1c

    .line 3856
    :try_start_6
    iget-object v8, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->z:Landroid/view/View;

    invoke-virtual {p0}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->getContext()Landroid/content/Context;

    move-result-object v9

    invoke-static {v9, v0, v1}, Lcom/mbridge/msdk/foundation/tools/s;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v9

    invoke-virtual {v8, v9}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v8

    check-cast v8, Landroid/view/ViewGroup;

    .line 3857
    iget-object v9, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->H:Lcom/mbridge/msdk/video/js/factory/b;

    invoke-virtual {v4, v9}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->setApiManagerJSFactory(Ljava/lang/Object;)V

    .line 3858
    invoke-virtual {v4}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->getParent()Landroid/view/ViewParent;

    move-result-object v9

    if-eqz v9, :cond_10

    .line 3859
    invoke-virtual {p0, v3, v7}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->defaultLoad(ILjava/lang/String;)V

    goto/16 :goto_7

    .line 3862
    :cond_10
    invoke-virtual {v4}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->getObject()Ljava/lang/Object;

    move-result-object v7

    instance-of v7, v7, Lcom/mbridge/msdk/video/js/a/j;

    if-eqz v7, :cond_1a

    .line 3863
    iget-object v7, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->H:Lcom/mbridge/msdk/video/js/factory/b;

    invoke-virtual {v4}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->getObject()Ljava/lang/Object;

    move-result-object v9

    check-cast v9, Lcom/mbridge/msdk/video/js/a/j;

    invoke-virtual {v7, v9}, Lcom/mbridge/msdk/video/js/factory/b;->a(Lcom/mbridge/msdk/video/js/a/j;)V

    .line 3895
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->getJSCommon()Lcom/mbridge/msdk/video/js/c;

    move-result-object v7

    iget v9, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->q:I

    invoke-interface {v7, v9}, Lcom/mbridge/msdk/video/js/c;->a(I)V

    .line 3896
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->getJSCommon()Lcom/mbridge/msdk/video/js/c;

    move-result-object v7

    iget-object v9, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->k:Ljava/lang/String;

    invoke-interface {v7, v9}, Lcom/mbridge/msdk/video/js/c;->a(Ljava/lang/String;)V

    .line 3897
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->getJSCommon()Lcom/mbridge/msdk/video/js/c;

    move-result-object v7

    iget-object v9, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->m:Lcom/mbridge/msdk/videocommon/d/c;

    invoke-interface {v7, v9}, Lcom/mbridge/msdk/video/js/c;->a(Lcom/mbridge/msdk/videocommon/d/c;)V

    .line 3898
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->getJSCommon()Lcom/mbridge/msdk/video/js/c;

    move-result-object v7

    new-instance v9, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$e;

    invoke-direct {v9, p0, v2}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$e;-><init>(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;Lcom/mbridge/msdk/video/bt/module/MBTempContainer$1;)V

    invoke-interface {v7, v9}, Lcom/mbridge/msdk/video/js/c;->a(Lcom/mbridge/msdk/video/js/c$a;)V

    .line 3901
    iget-object v2, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->A:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v2, :cond_12

    iget-object v2, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->A:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isMraid()Z

    move-result v2

    if-nez v2, :cond_11

    iget-object v2, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->A:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isActiveOm()Z

    move-result v2

    if-eqz v2, :cond_12

    .line 3902
    :cond_11
    new-instance v2, Lcom/mbridge/msdk/mbjscommon/mraid/d;

    invoke-virtual {p0}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->getContext()Landroid/content/Context;

    move-result-object v7

    invoke-direct {v2, v7}, Lcom/mbridge/msdk/mbjscommon/mraid/d;-><init>(Landroid/content/Context;)V

    iput-object v2, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->an:Lcom/mbridge/msdk/mbjscommon/mraid/d;

    .line 3903
    invoke-virtual {v2}, Lcom/mbridge/msdk/mbjscommon/mraid/d;->c()V

    .line 3904
    iget-object v2, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->an:Lcom/mbridge/msdk/mbjscommon/mraid/d;

    invoke-virtual {v2}, Lcom/mbridge/msdk/mbjscommon/mraid/d;->a()D

    .line 3905
    iget-object v2, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->an:Lcom/mbridge/msdk/mbjscommon/mraid/d;

    new-instance v7, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$7;

    invoke-direct {v7, p0}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$7;-><init>(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;)V

    invoke-virtual {v2, v7}, Lcom/mbridge/msdk/mbjscommon/mraid/d;->a(Lcom/mbridge/msdk/mbjscommon/mraid/d$b;)V

    .line 3865
    :cond_12
    invoke-virtual {v4}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->getObject()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/mbridge/msdk/video/js/a/j;

    invoke-virtual {v2}, Lcom/mbridge/msdk/video/js/a/j;->p()I

    move-result v2

    .line 3866
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->getJSContainerModule()Lcom/mbridge/msdk/video/js/e;

    move-result-object v7

    invoke-interface {v7, v2}, Lcom/mbridge/msdk/video/js/e;->readyStatus(I)V
    :try_end_6
    .catchall {:try_start_6 .. :try_end_6} :catchall_0

    .line 4360
    :try_start_7
    iget-object v2, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->d:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    if-eqz v2, :cond_19

    .line 4361
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->getResources()Landroid/content/res/Resources;

    move-result-object v2

    invoke-virtual {v2}, Landroid/content/res/Resources;->getConfiguration()Landroid/content/res/Configuration;

    move-result-object v2

    iget v2, v2, Landroid/content/res/Configuration;->orientation:I

    .line 4364
    invoke-direct {p0}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->d()Z

    move-result v7

    if-eqz v7, :cond_14

    .line 4365
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->getContext()Landroid/content/Context;

    move-result-object v7

    invoke-static {v7}, Lcom/mbridge/msdk/foundation/tools/ae;->i(Landroid/content/Context;)I

    move-result v7

    .line 4366
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->getContext()Landroid/content/Context;

    move-result-object v9

    invoke-static {v9}, Lcom/mbridge/msdk/foundation/tools/ae;->j(Landroid/content/Context;)I

    move-result v9

    .line 4367
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->getContext()Landroid/content/Context;

    move-result-object v10

    invoke-static {v10}, Lcom/mbridge/msdk/foundation/tools/ae;->a(Landroid/content/Context;)Z

    move-result v10

    if-eqz v10, :cond_15

    .line 4368
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->getContext()Landroid/content/Context;

    move-result-object v10

    invoke-static {v10}, Lcom/mbridge/msdk/foundation/tools/ae;->k(Landroid/content/Context;)I

    move-result v10

    const/4 v11, 0x2

    if-ne v2, v11, :cond_13

    add-int/2addr v7, v10

    goto :goto_4

    :cond_13
    add-int/2addr v9, v10

    goto :goto_4

    .line 4376
    :cond_14
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->getContext()Landroid/content/Context;

    move-result-object v7

    invoke-static {v7}, Lcom/mbridge/msdk/foundation/tools/ae;->h(Landroid/content/Context;)I

    move-result v7

    .line 4377
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->getContext()Landroid/content/Context;

    move-result-object v9

    invoke-static {v9}, Lcom/mbridge/msdk/foundation/tools/ae;->g(Landroid/content/Context;)I

    move-result v9

    .line 4379
    :cond_15
    :goto_4
    iget-object v10, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->A:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v10}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRewardTemplateMode()Lcom/mbridge/msdk/foundation/entity/CampaignEx$c;

    move-result-object v10

    invoke-virtual {v10}, Lcom/mbridge/msdk/foundation/entity/CampaignEx$c;->c()I

    move-result v10

    .line 4381
    iget-object v11, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->A:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p0, v11}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->c(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)I

    move-result v11

    if-ne v11, v5, :cond_16

    move v10, v2

    .line 4384
    :cond_16
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->getJSNotifyProxy()Lcom/mbridge/msdk/video/js/f;

    move-result-object v11

    invoke-interface {v11, v2, v10, v7, v9}, Lcom/mbridge/msdk/video/js/f;->a(IIII)V

    .line 4385
    new-instance v2, Lorg/json/JSONObject;

    invoke-direct {v2}, Lorg/json/JSONObject;-><init>()V

    .line 4386
    sget-object v7, Lcom/mbridge/msdk/foundation/same/a;->s:Ljava/lang/String;

    invoke-virtual {p0}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->getContext()Landroid/content/Context;

    move-result-object v9

    invoke-static {v9}, Lcom/mbridge/msdk/foundation/tools/ae;->d(Landroid/content/Context;)F

    move-result v9

    float-to-double v9, v9

    invoke-virtual {v2, v7, v9, v10}, Lorg/json/JSONObject;->put(Ljava/lang/String;D)Lorg/json/JSONObject;
    :try_end_7
    .catch Ljava/lang/Exception; {:try_start_7 .. :try_end_7} :catch_5
    .catchall {:try_start_7 .. :try_end_7} :catchall_0

    .line 4388
    :try_start_8
    iget-object v7, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->o:Lcom/mbridge/msdk/videocommon/b/d;

    if-eqz v7, :cond_17

    .line 4389
    new-instance v7, Lorg/json/JSONObject;

    invoke-direct {v7}, Lorg/json/JSONObject;-><init>()V

    const-string v9, "name"

    .line 4390
    iget-object v10, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->o:Lcom/mbridge/msdk/videocommon/b/d;

    invoke-virtual {v10}, Lcom/mbridge/msdk/videocommon/b/d;->a()Ljava/lang/String;

    move-result-object v10

    invoke-virtual {v7, v9, v10}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v9, "amount"

    .line 4391
    iget-object v10, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->o:Lcom/mbridge/msdk/videocommon/b/d;

    invoke-virtual {v10}, Lcom/mbridge/msdk/videocommon/b/d;->b()I

    move-result v10

    invoke-virtual {v7, v9, v10}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 4392
    iget-object v9, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->p:Ljava/lang/String;

    invoke-virtual {v7, v1, v9}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v9, "userId"

    .line 4393
    iget-object v10, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->n:Ljava/lang/String;

    invoke-virtual {v2, v9, v10}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v9, "reward"

    .line 4394
    invoke-virtual {v2, v9, v7}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v7, "playVideoMute"

    .line 4395
    iget v9, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->q:I

    invoke-virtual {v2, v7, v9}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v7, "extra"

    .line 4396
    iget-object v9, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->S:Ljava/lang/String;

    invoke-virtual {v2, v7, v9}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_8
    .catch Lorg/json/JSONException; {:try_start_8 .. :try_end_8} :catch_4
    .catch Ljava/lang/Exception; {:try_start_8 .. :try_end_8} :catch_3
    .catchall {:try_start_8 .. :try_end_8} :catchall_0

    goto :goto_5

    :catch_3
    move-exception v7

    .line 4401
    :try_start_9
    sget-object v9, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->y:Ljava/lang/String;

    invoke-virtual {v7}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v7

    invoke-static {v9, v7}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_5

    :catch_4
    move-exception v7

    .line 4399
    sget-object v9, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->y:Ljava/lang/String;

    invoke-virtual {v7}, Lorg/json/JSONException;->getMessage()Ljava/lang/String;

    move-result-object v7

    invoke-static {v9, v7}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 4403
    :cond_17
    :goto_5
    invoke-virtual {v2}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v2

    .line 4404
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->getJSNotifyProxy()Lcom/mbridge/msdk/video/js/f;

    move-result-object v7

    invoke-interface {v7, v2}, Lcom/mbridge/msdk/video/js/f;->a(Ljava/lang/Object;)V

    .line 4405
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a()Lcom/mbridge/msdk/mbjscommon/windvane/h;

    move-result-object v2

    iget-object v7, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->d:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    const-string v9, "oncutoutfetched"

    iget-object v10, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->R:Ljava/lang/String;

    invoke-virtual {v10}, Ljava/lang/String;->getBytes()[B

    move-result-object v10

    invoke-static {v10, v3}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v7, v9, v3}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;)V

    .line 4406
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->getJSCommon()Lcom/mbridge/msdk/video/js/c;

    move-result-object v2

    invoke-interface {v2, v5}, Lcom/mbridge/msdk/video/js/c;->b(Z)V

    .line 4407
    iget-object v2, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->K:Lcom/mbridge/msdk/video/bt/module/a/b;

    if-nez v2, :cond_18

    .line 4408
    new-instance v2, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$3;

    invoke-direct {v2, p0}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$3;-><init>(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;)V

    iput-object v2, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->K:Lcom/mbridge/msdk/video/bt/module/a/b;

    .line 4426
    :cond_18
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->getJSCommon()Lcom/mbridge/msdk/video/js/c;

    move-result-object v2

    iget-object v3, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->K:Lcom/mbridge/msdk/video/bt/module/a/b;

    invoke-interface {v2, v3}, Lcom/mbridge/msdk/video/js/c;->a(Lcom/mbridge/msdk/video/bt/module/a/b;)V

    .line 4427
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->loadModuleDatas()V

    .line 4428
    iget-object v2, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->g:Landroid/os/Handler;

    iget-object v3, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->h:Ljava/lang/Runnable;

    const-wide/16 v9, 0x7d0

    invoke-virtual {v2, v3, v9, v10}, Landroid/os/Handler;->postDelayed(Ljava/lang/Runnable;J)Z
    :try_end_9
    .catch Ljava/lang/Exception; {:try_start_9 .. :try_end_9} :catch_5
    .catchall {:try_start_9 .. :try_end_9} :catchall_0

    goto :goto_6

    :catch_5
    move-exception v2

    .line 4431
    :try_start_a
    sget-boolean v3, Lcom/mbridge/msdk/MBridgeConstans;->DEBUG:Z

    if-eqz v3, :cond_19

    .line 4432
    invoke-virtual {v2}, Ljava/lang/Exception;->printStackTrace()V

    .line 3868
    :cond_19
    :goto_6
    invoke-virtual {v4}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->getObject()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/mbridge/msdk/video/js/a/j;

    iget-object v2, v2, Lcom/mbridge/msdk/video/js/a/j;->m:Lcom/mbridge/msdk/video/js/c$a;

    invoke-interface {v2}, Lcom/mbridge/msdk/video/js/c$a;->a()V

    .line 3870
    iget-boolean v2, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->w:Z

    if-eqz v2, :cond_1a

    .line 3871
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->getJSCommon()Lcom/mbridge/msdk/video/js/c;

    move-result-object v2

    iget v3, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->aa:I

    invoke-interface {v2, v3}, Lcom/mbridge/msdk/video/js/c;->f(I)V

    .line 3872
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->getJSCommon()Lcom/mbridge/msdk/video/js/c;

    move-result-object v2

    iget v3, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->ab:I

    invoke-interface {v2, v3}, Lcom/mbridge/msdk/video/js/c;->e(I)V

    .line 3877
    :cond_1a
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->getJSCommon()Lcom/mbridge/msdk/video/js/c;

    move-result-object v2

    invoke-interface {v2}, Lcom/mbridge/msdk/video/js/c;->b()I

    move-result v2

    if-ne v2, v5, :cond_1b

    .line 3878
    iget-object v2, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->z:Landroid/view/View;

    invoke-virtual {p0}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->getContext()Landroid/content/Context;

    move-result-object v3

    invoke-static {v3, v0, v1}, Lcom/mbridge/msdk/foundation/tools/s;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    invoke-virtual {v2, v0}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/view/ViewGroup;

    if-eqz v0, :cond_1b

    .line 3880
    iget-object v1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->z:Landroid/view/View;

    check-cast v1, Landroid/view/ViewGroup;

    invoke-virtual {v1, v0}, Landroid/view/ViewGroup;->removeView(Landroid/view/View;)V

    .line 3881
    iget-object v1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->z:Landroid/view/View;

    check-cast v1, Landroid/view/ViewGroup;

    invoke-virtual {v1, v0, v5}, Landroid/view/ViewGroup;->addView(Landroid/view/View;I)V

    .line 3884
    :cond_1b
    new-instance v0, Landroid/view/ViewGroup$LayoutParams;

    invoke-direct {v0, v6, v6}, Landroid/view/ViewGroup$LayoutParams;-><init>(II)V

    invoke-virtual {v8, v4, v0}, Landroid/view/ViewGroup;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    .line 3885
    invoke-direct {p0}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->g()V

    goto :goto_7

    .line 3887
    :cond_1c
    sget-object v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->y:Ljava/lang/String;

    const-string v1, "template webview is null"

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 3888
    invoke-virtual {p0, v3, v7}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->defaultLoad(ILjava/lang/String;)V
    :try_end_a
    .catchall {:try_start_a .. :try_end_a} :catchall_0

    goto :goto_7

    :catchall_0
    move-exception v0

    .line 582
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "onCreate error"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->a(Ljava/lang/String;)V

    :cond_1d
    :goto_7
    return-void
.end method

.method public onDestroy()V
    .locals 6

    .line 671
    iget-boolean v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->L:Z

    if-eqz v0, :cond_0

    return-void

    :cond_0
    const/4 v0, 0x1

    .line 674
    iput-boolean v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->L:Z

    .line 675
    invoke-super {p0}, Lcom/mbridge/msdk/video/js/container/AbstractJSContainer;->onDestroy()V

    .line 677
    :try_start_0
    iget-object v1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->K:Lcom/mbridge/msdk/video/bt/module/a/b;

    const/4 v2, 0x0

    if-eqz v1, :cond_1

    .line 678
    iput-object v2, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->K:Lcom/mbridge/msdk/video/bt/module/a/b;

    .line 681
    :cond_1
    iget-object v1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->e:Lcom/mbridge/msdk/video/module/MBridgeVideoView;

    if-eqz v1, :cond_2

    .line 682
    iget-object v1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->e:Lcom/mbridge/msdk/video/module/MBridgeVideoView;

    invoke-virtual {v1}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->releasePlayer()V

    .line 685
    :cond_2
    iget-object v1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->d:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    if-eqz v1, :cond_4

    .line 686
    iget-object v1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->d:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    invoke-virtual {v1}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->getParent()Landroid/view/ViewParent;

    move-result-object v1

    check-cast v1, Landroid/view/ViewGroup;

    if-eqz v1, :cond_3

    .line 688
    invoke-virtual {v1}, Landroid/view/ViewGroup;->removeAllViews()V

    .line 690
    :cond_3
    iget-object v1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->d:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    invoke-virtual {v1}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->clearWebView()V

    .line 691
    iget-object v1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->d:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    invoke-virtual {v1}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->release()V

    .line 693
    :cond_4
    iget-object v1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->D:Lcom/mbridge/msdk/video/bt/module/a/c;

    if-eqz v1, :cond_5

    .line 694
    iput-object v2, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->D:Lcom/mbridge/msdk/video/bt/module/a/c;

    .line 697
    :cond_5
    iget-object v1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->g:Landroid/os/Handler;

    iget-object v3, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->h:Ljava/lang/Runnable;

    invoke-virtual {v1, v3}, Landroid/os/Handler;->removeCallbacks(Ljava/lang/Runnable;)V

    .line 698
    iget-object v1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->g:Landroid/os/Handler;

    iget-object v3, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->i:Ljava/lang/Runnable;

    invoke-virtual {v1, v3}, Landroid/os/Handler;->removeCallbacks(Ljava/lang/Runnable;)V

    .line 700
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->getJSCommon()Lcom/mbridge/msdk/video/js/c;

    move-result-object v1

    invoke-interface {v1}, Lcom/mbridge/msdk/video/js/c;->f()V

    .line 702
    iget-boolean v1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->r:Z

    if-eqz v1, :cond_6

    .line 703
    invoke-static {}, Lcom/mbridge/msdk/c/b;->a()Lcom/mbridge/msdk/c/b;

    move-result-object v1

    iget-object v3, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->k:Ljava/lang/String;

    invoke-virtual {v1, v3}, Lcom/mbridge/msdk/c/b;->f(Ljava/lang/String;)V

    .line 707
    :cond_6
    iget-boolean v1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->ad:Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    if-nez v1, :cond_13

    .line 5200
    :try_start_1
    iput-boolean v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->ad:Z

    .line 5203
    iget-object v1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->A:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v1, :cond_7

    iget-object v1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->A:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getPlayable_ads_without_video()I

    move-result v1

    const/4 v3, 0x2

    if-ne v1, v3, :cond_7

    .line 5204
    iput-boolean v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->ae:Z

    .line 5207
    :cond_7
    iget-object v1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->C:Lcom/mbridge/msdk/video/bt/module/b/h;

    if-eqz v1, :cond_c

    .line 5208
    iget-boolean v1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->r:Z

    const/4 v3, 0x0

    if-eqz v1, :cond_a

    iget v1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->t:I

    sget v4, Lcom/mbridge/msdk/foundation/same/a;->w:I

    if-eq v1, v4, :cond_8

    iget v1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->t:I

    sget v4, Lcom/mbridge/msdk/foundation/same/a;->x:I

    if-ne v1, v4, :cond_a

    .line 5209
    :cond_8
    iget-object v1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->C:Lcom/mbridge/msdk/video/bt/module/b/h;

    iget v4, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->J:I

    if-ne v4, v0, :cond_9

    goto :goto_0

    :cond_9
    move v0, v3

    :goto_0
    iget v4, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->I:I

    invoke-interface {v1, v0, v4}, Lcom/mbridge/msdk/video/bt/module/b/h;->a(ZI)V

    .line 5211
    :cond_a
    iget-boolean v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->ae:Z

    if-nez v0, :cond_b

    .line 5212
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->o:Lcom/mbridge/msdk/videocommon/b/d;

    invoke-virtual {v0, v3}, Lcom/mbridge/msdk/videocommon/b/d;->a(I)V

    .line 5214
    :cond_b
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->C:Lcom/mbridge/msdk/video/bt/module/b/h;

    iget-boolean v1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->ae:Z

    iget-object v3, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->o:Lcom/mbridge/msdk/videocommon/b/d;

    invoke-interface {v0, v1, v3}, Lcom/mbridge/msdk/video/bt/module/b/h;->a(ZLcom/mbridge/msdk/videocommon/b/d;)V

    .line 5216
    :cond_c
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->g:Landroid/os/Handler;

    iget-object v1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->aq:Ljava/lang/Runnable;

    invoke-virtual {v0, v1}, Landroid/os/Handler;->removeCallbacks(Ljava/lang/Runnable;)V

    .line 5217
    iget-boolean v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->r:Z

    if-nez v0, :cond_d

    iget-boolean v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->w:Z

    if-eqz v0, :cond_e

    :cond_d
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->A:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v0, :cond_10

    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->A:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isDynamicView()Z

    move-result v0

    if-eqz v0, :cond_10

    .line 6143
    :cond_e
    iget-boolean v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->ae:Z

    if-eqz v0, :cond_10

    .line 6144
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->C:Lcom/mbridge/msdk/video/bt/module/b/h;

    if-eqz v0, :cond_f

    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->C:Lcom/mbridge/msdk/video/bt/module/b/h;

    invoke-interface {v0}, Lcom/mbridge/msdk/video/bt/module/b/h;->b()Z

    move-result v0

    if-eqz v0, :cond_f

    goto :goto_1

    .line 6147
    :cond_f
    sget-object v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->y:Ljava/lang/String;

    const-string v1, "sendToServerRewardInfo"

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 6148
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->A:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iget-object v1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->o:Lcom/mbridge/msdk/videocommon/b/d;

    iget-object v3, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->k:Ljava/lang/String;

    iget-object v4, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->n:Ljava/lang/String;

    iget-object v5, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->S:Ljava/lang/String;

    invoke-static {v0, v1, v3, v4, v5}, Lcom/mbridge/msdk/video/module/b/b;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Lcom/mbridge/msdk/videocommon/b/d;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    .line 5220
    :cond_10
    :goto_1
    iget-boolean v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->w:Z

    if-nez v0, :cond_12

    .line 5221
    iget-boolean v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->r:Z

    if-eqz v0, :cond_11

    const/16 v0, 0x11f

    .line 5222
    iget-object v1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->A:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-static {v0, v1}, Lcom/mbridge/msdk/videocommon/a;->b(ILcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    goto :goto_2

    :cond_11
    const/16 v0, 0x5e

    .line 5224
    iget-object v1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->A:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-static {v0, v1}, Lcom/mbridge/msdk/videocommon/a;->b(ILcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    .line 5227
    :cond_12
    :goto_2
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->f:Lcom/mbridge/msdk/video/module/MBridgeContainerView;

    if-eqz v0, :cond_13

    .line 5228
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->f:Lcom/mbridge/msdk/video/module/MBridgeContainerView;

    invoke-virtual {v0}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->release()V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_3

    :catchall_0
    move-exception v0

    .line 5231
    :try_start_2
    sget-object v1, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->y:Ljava/lang/String;

    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v3

    invoke-static {v1, v3, v0}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    .line 710
    :cond_13
    :goto_3
    iget-boolean v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->ag:Z

    if-nez v0, :cond_14

    .line 711
    invoke-direct {p0}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->f()V

    .line 714
    :cond_14
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->an:Lcom/mbridge/msdk/mbjscommon/mraid/d;

    if-eqz v0, :cond_15

    .line 715
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->an:Lcom/mbridge/msdk/mbjscommon/mraid/d;

    invoke-virtual {v0}, Lcom/mbridge/msdk/mbjscommon/mraid/d;->d()V

    .line 717
    :cond_15
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->ao:Lcom/iab/omid/library/mmadbridge/adsession/AdSession;

    if-eqz v0, :cond_16

    .line 718
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->ao:Lcom/iab/omid/library/mmadbridge/adsession/AdSession;

    invoke-virtual {v0}, Lcom/iab/omid/library/mmadbridge/adsession/AdSession;->removeAllFriendlyObstructions()V

    .line 719
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->ao:Lcom/iab/omid/library/mmadbridge/adsession/AdSession;

    invoke-virtual {v0}, Lcom/iab/omid/library/mmadbridge/adsession/AdSession;->finish()V

    .line 720
    iput-object v2, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->ao:Lcom/iab/omid/library/mmadbridge/adsession/AdSession;

    .line 722
    :cond_16
    iget-boolean v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->w:Z

    if-nez v0, :cond_18

    .line 723
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->isLoadSuccess()Z

    move-result v0

    if-eqz v0, :cond_17

    .line 724
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->g:Landroid/os/Handler;

    new-instance v1, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$5;

    invoke-direct {v1, p0}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$5;-><init>(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;)V

    const-wide/16 v2, 0x64

    invoke-virtual {v0, v1, v2, v3}, Landroid/os/Handler;->postDelayed(Ljava/lang/Runnable;J)Z

    goto :goto_4

    .line 733
    :cond_17
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->j:Landroid/app/Activity;

    if-eqz v0, :cond_18

    .line 734
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->j:Landroid/app/Activity;

    invoke-virtual {v0}, Landroid/app/Activity;->finish()V

    .line 739
    :cond_18
    :goto_4
    iget-boolean v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->ag:Z

    if-nez v0, :cond_19

    .line 740
    invoke-direct {p0}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->f()V

    .line 742
    :cond_19
    invoke-static {}, Lcom/mbridge/msdk/video/bt/a/c;->a()Lcom/mbridge/msdk/video/bt/a/c;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->G:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/video/bt/a/c;->g(Ljava/lang/String;)V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    goto :goto_5

    :catchall_1
    move-exception v0

    .line 745
    sget-object v1, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->y:Ljava/lang/String;

    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    :goto_5
    return-void
.end method

.method protected onDetachedFromWindow()V
    .locals 0

    .line 657
    invoke-super {p0}, Lcom/mbridge/msdk/video/js/container/AbstractJSContainer;->onDetachedFromWindow()V

    return-void
.end method

.method public onPause()V
    .locals 3

    .line 602
    invoke-super {p0}, Lcom/mbridge/msdk/video/js/container/AbstractJSContainer;->onPause()V

    const/4 v0, 0x1

    .line 604
    iput-boolean v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->af:Z

    .line 606
    :try_start_0
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->getJSVideoModule()Lcom/mbridge/msdk/video/js/i;

    move-result-object v0

    const/4 v1, 0x2

    invoke-interface {v0, v1}, Lcom/mbridge/msdk/video/js/i;->videoOperate(I)V

    .line 608
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->f:Lcom/mbridge/msdk/video/module/MBridgeContainerView;

    if-eqz v0, :cond_0

    .line 609
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->f:Lcom/mbridge/msdk/video/module/MBridgeContainerView;

    invoke-virtual {v0}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->setOnPause()V

    .line 612
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->e:Lcom/mbridge/msdk/video/module/MBridgeVideoView;

    if-eqz v0, :cond_1

    .line 613
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->e:Lcom/mbridge/msdk/video/module/MBridgeVideoView;

    invoke-virtual {v0}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->onActivityPause()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    .line 616
    sget-object v1, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->y:Ljava/lang/String;

    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2, v0}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :cond_1
    :goto_0
    return-void
.end method

.method public onResume()V
    .locals 3

    .line 622
    invoke-super {p0}, Lcom/mbridge/msdk/video/js/container/AbstractJSContainer;->onResume()V

    .line 4439
    iget v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->W:I

    const/4 v1, -0x3

    if-ne v0, v1, :cond_0

    .line 4440
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->h:Ljava/lang/Runnable;

    goto :goto_0

    :cond_0
    const/4 v1, -0x4

    if-ne v0, v1, :cond_1

    .line 4442
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->i:Ljava/lang/Runnable;

    goto :goto_0

    :cond_1
    const/4 v0, 0x0

    :goto_0
    const/4 v1, 0x0

    if-eqz v0, :cond_2

    .line 4445
    invoke-interface {v0}, Ljava/lang/Runnable;->run()V

    .line 4446
    iput v1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->W:I

    .line 627
    :cond_2
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->e:Lcom/mbridge/msdk/video/module/MBridgeVideoView;

    if-eqz v0, :cond_3

    invoke-direct {p0}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->e()Z

    move-result v0

    if-nez v0, :cond_3

    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->e:Lcom/mbridge/msdk/video/module/MBridgeVideoView;

    invoke-virtual {v0}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->isMiniCardShowing()Z

    move-result v0

    if-nez v0, :cond_3

    sget-boolean v0, Lcom/mbridge/msdk/foundation/b/b;->c:Z

    if-nez v0, :cond_3

    .line 628
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->e:Lcom/mbridge/msdk/video/module/MBridgeVideoView;

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->setCover(Z)V

    .line 631
    :cond_3
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->e:Lcom/mbridge/msdk/video/module/MBridgeVideoView;

    if-eqz v0, :cond_4

    .line 632
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->e:Lcom/mbridge/msdk/video/module/MBridgeVideoView;

    invoke-virtual {v0}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->onActivityResume()V

    .line 635
    :cond_4
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->f:Lcom/mbridge/msdk/video/module/MBridgeContainerView;

    if-eqz v0, :cond_5

    .line 636
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->f:Lcom/mbridge/msdk/video/module/MBridgeContainerView;

    invoke-virtual {v0}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->setOnResume()V

    .line 639
    :cond_5
    iget-boolean v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->af:Z

    if-eqz v0, :cond_6

    invoke-direct {p0}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->e()Z

    move-result v0

    if-nez v0, :cond_6

    sget-boolean v0, Lcom/mbridge/msdk/foundation/b/b;->c:Z

    if-nez v0, :cond_6

    .line 640
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->getJSVideoModule()Lcom/mbridge/msdk/video/js/i;

    move-result-object v0

    const/4 v1, 0x1

    invoke-interface {v0, v1}, Lcom/mbridge/msdk/video/js/i;->videoOperate(I)V

    .line 642
    :cond_6
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->j:Landroid/app/Activity;

    if-eqz v0, :cond_7

    .line 643
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->j:Landroid/app/Activity;

    invoke-virtual {v0}, Landroid/app/Activity;->getWindow()Landroid/view/Window;

    move-result-object v0

    invoke-virtual {v0}, Landroid/view/Window;->getDecorView()Landroid/view/View;

    move-result-object v0

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/tools/ae;->a(Landroid/view/View;)V

    .line 645
    :cond_7
    iget-boolean v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->ah:Z

    if-eqz v0, :cond_8

    iget-boolean v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->ai:Z

    if-eqz v0, :cond_8

    .line 646
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->j:Landroid/app/Activity;

    if-eqz v0, :cond_8

    .line 647
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->j:Landroid/app/Activity;

    invoke-virtual {v0}, Landroid/app/Activity;->finish()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_1

    :catchall_0
    move-exception v0

    .line 651
    sget-object v1, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->y:Ljava/lang/String;

    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2, v0}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :cond_8
    :goto_1
    return-void
.end method

.method public onStop()V
    .locals 2

    .line 662
    invoke-super {p0}, Lcom/mbridge/msdk/video/js/container/AbstractJSContainer;->onStop()V

    .line 663
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->e:Lcom/mbridge/msdk/video/module/MBridgeVideoView;

    if-eqz v0, :cond_0

    const/4 v1, 0x1

    .line 664
    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->setCover(Z)V

    .line 665
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->e:Lcom/mbridge/msdk/video/module/MBridgeVideoView;

    invoke-virtual {v0}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->onActivityStop()V

    :cond_0
    return-void
.end method

.method public preload()V
    .locals 0

    return-void
.end method

.method public receiveSuccess()V
    .locals 4

    .line 1018
    sget-object v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->y:Ljava/lang/String;

    const-string v1, "receiveSuccess ,start hybrid"

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 1019
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->g:Landroid/os/Handler;

    iget-object v1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->i:Ljava/lang/Runnable;

    invoke-virtual {v0, v1}, Landroid/os/Handler;->removeCallbacks(Ljava/lang/Runnable;)V

    .line 1020
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->g:Landroid/os/Handler;

    iget-object v1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->aq:Ljava/lang/Runnable;

    const-wide/16 v2, 0xfa

    invoke-virtual {v0, v1, v2, v3}, Landroid/os/Handler;->postDelayed(Ljava/lang/Runnable;J)Z

    return-void
.end method

.method public registerErrorListener(Lcom/mbridge/msdk/video/bt/module/MBTempContainer$a;)V
    .locals 0

    .line 193
    iput-object p1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->c:Lcom/mbridge/msdk/video/bt/module/MBTempContainer$a;

    return-void
.end method

.method public setCamPlayOrderCallback(Lcom/mbridge/msdk/video/dynview/e/a;I)V
    .locals 0

    .line 1839
    iput-object p1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->E:Lcom/mbridge/msdk/video/dynview/e/a;

    .line 1840
    iput p2, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->F:I

    return-void
.end method

.method public setCampOrderViewData(Ljava/util/List;I)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/mbridge/msdk/foundation/entity/CampaignEx;",
            ">;I)V"
        }
    .end annotation

    if-eqz p1, :cond_0

    .line 171
    iput-object p1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->T:Ljava/util/List;

    .line 173
    :cond_0
    iput p2, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->U:I

    return-void
.end method

.method public setCampaign(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V
    .locals 3

    .line 1772
    iput-object p1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->A:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz p1, :cond_2

    .line 1774
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getCampaignUnitId()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->k:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 1775
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->k:Ljava/lang/String;

    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setCampaignUnitId(Ljava/lang/String;)V

    .line 1777
    :cond_0
    invoke-static {}, Lcom/mbridge/msdk/scheme/applet/AppletModelManager;->getInstance()Lcom/mbridge/msdk/scheme/applet/AppletModelManager;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/scheme/applet/AppletModelManager;->get(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)Lcom/mbridge/msdk/scheme/applet/AppletsModel;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 1779
    invoke-virtual {v0}, Lcom/mbridge/msdk/scheme/applet/AppletsModel;->isSupportWxScheme()Z

    move-result v0

    iput-boolean v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->ar:Z

    .line 1781
    :cond_1
    invoke-static {}, Lcom/mbridge/msdk/foundation/b/b;->a()Lcom/mbridge/msdk/foundation/b/b;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getCampaignUnitId()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "_"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/4 v2, 0x1

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1, p1}, Lcom/mbridge/msdk/foundation/b/b;->a(Ljava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    :cond_2
    return-void
.end method

.method public setCampaignDownLoadTask(Lcom/mbridge/msdk/videocommon/download/a;)V
    .locals 0

    .line 1827
    iput-object p1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->B:Lcom/mbridge/msdk/videocommon/download/a;

    return-void
.end method

.method public setCampaignExpired(Z)V
    .locals 2

    .line 1791
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->A:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v0, :cond_4

    const/4 v0, 0x0

    if-eqz p1, :cond_2

    .line 1794
    iget-object p1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->A:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    const/4 v1, 0x1

    invoke-virtual {p1, v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setSpareOfferFlag(I)V

    .line 1795
    iget-boolean p1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->s:Z

    if-eqz p1, :cond_0

    .line 1796
    iget-object p1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->A:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setCbt(I)V

    goto :goto_0

    .line 1798
    :cond_0
    iget-object p1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->m:Lcom/mbridge/msdk/videocommon/d/c;

    if-eqz p1, :cond_4

    .line 1799
    iget-object p1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->m:Lcom/mbridge/msdk/videocommon/d/c;

    invoke-virtual {p1}, Lcom/mbridge/msdk/videocommon/d/c;->C()I

    move-result p1

    if-ne p1, v1, :cond_1

    .line 1800
    iget-object p1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->A:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p1, v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setCbt(I)V

    goto :goto_0

    .line 1802
    :cond_1
    iget-object p1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->A:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setCbt(I)V

    goto :goto_0

    .line 1807
    :cond_2
    iget-object p1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->A:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setSpareOfferFlag(I)V

    .line 1809
    iget-object p1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->A:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isBidCampaign()Z

    move-result p1

    if-eqz p1, :cond_3

    .line 1810
    iget-object p1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->A:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setCbt(I)V

    goto :goto_0

    .line 1812
    :cond_3
    iget-object p1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->m:Lcom/mbridge/msdk/videocommon/d/c;

    if-eqz p1, :cond_4

    .line 1813
    iget-object p1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->m:Lcom/mbridge/msdk/videocommon/d/c;

    invoke-virtual {p1}, Lcom/mbridge/msdk/videocommon/d/c;->d()I

    move-result p1

    .line 1816
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->A:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setCbt(I)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 1822
    sget-object v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->y:Ljava/lang/String;

    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_4
    :goto_0
    return-void
.end method

.method public setDeveloperExtraData(Ljava/lang/String;)V
    .locals 0

    .line 1898
    iput-object p1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->S:Ljava/lang/String;

    return-void
.end method

.method public setH5Cbp(I)V
    .locals 0

    .line 1856
    iput p1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->ab:I

    return-void
.end method

.method public setInstanceId(Ljava/lang/String;)V
    .locals 0

    .line 1848
    iput-object p1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->G:Ljava/lang/String;

    return-void
.end method

.method public setJSFactory(Lcom/mbridge/msdk/video/js/factory/b;)V
    .locals 0

    .line 1844
    iput-object p1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->H:Lcom/mbridge/msdk/video/js/factory/b;

    return-void
.end method

.method public setMBridgeTempCallback(Lcom/mbridge/msdk/video/bt/module/a/c;)V
    .locals 0

    .line 1835
    iput-object p1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->D:Lcom/mbridge/msdk/video/bt/module/a/c;

    return-void
.end method

.method public setMatchParent()V
    .locals 2

    .line 159
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v0

    const/4 v1, -0x1

    if-nez v0, :cond_0

    .line 161
    new-instance v0, Landroid/view/ViewGroup$LayoutParams;

    invoke-direct {v0, v1, v1}, Landroid/view/ViewGroup$LayoutParams;-><init>(II)V

    .line 162
    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    goto :goto_0

    .line 164
    :cond_0
    iput v1, v0, Landroid/view/ViewGroup$LayoutParams;->height:I

    .line 165
    iput v1, v0, Landroid/view/ViewGroup$LayoutParams;->width:I

    :goto_0
    return-void
.end method

.method public setMediaPlayerUrl(Ljava/lang/String;)V
    .locals 0

    return-void
.end method

.method public setNotchPadding(IIIII)V
    .locals 7

    .line 1870
    iput p1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->M:I

    .line 1871
    iput p2, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->N:I

    .line 1872
    iput p3, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->O:I

    .line 1873
    iput p4, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->P:I

    .line 1874
    iput p5, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->Q:I

    .line 1876
    invoke-static {p1, p2, p3, p4, p5}, Lcom/mbridge/msdk/foundation/tools/m;->a(IIIII)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->R:Ljava/lang/String;

    .line 1878
    sget-object v1, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->y:Ljava/lang/String;

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 1880
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->getJSCommon()Lcom/mbridge/msdk/video/js/c;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->R:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 1881
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->getJSCommon()Lcom/mbridge/msdk/video/js/c;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->R:Ljava/lang/String;

    invoke-interface {v0, v1}, Lcom/mbridge/msdk/video/js/c;->b(Ljava/lang/String;)V

    .line 1883
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->d:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->R:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 1884
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a()Lcom/mbridge/msdk/mbjscommon/windvane/h;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->d:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    iget-object v2, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->R:Ljava/lang/String;

    invoke-virtual {v2}, Ljava/lang/String;->getBytes()[B

    move-result-object v2

    const/4 v3, 0x0

    invoke-static {v2, v3}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object v2

    const-string v3, "oncutoutfetched"

    invoke-virtual {v0, v1, v3, v2}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;)V

    .line 1888
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->e:Lcom/mbridge/msdk/video/module/MBridgeVideoView;

    if-eqz v0, :cond_1

    .line 1889
    invoke-virtual {v0, p2, p3, p4, p5}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->setNotchPadding(IIII)V

    .line 1892
    :cond_1
    iget-object v1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->f:Lcom/mbridge/msdk/video/module/MBridgeContainerView;

    if-eqz v1, :cond_2

    move v2, p1

    move v3, p2

    move v4, p3

    move v5, p4

    move v6, p5

    .line 1893
    invoke-virtual/range {v1 .. v6}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->setNotchPadding(IIIII)V

    :cond_2
    return-void
.end method

.method public setShowRewardListener(Lcom/mbridge/msdk/video/bt/module/b/h;)V
    .locals 0

    .line 1831
    iput-object p1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->C:Lcom/mbridge/msdk/video/bt/module/b/h;

    return-void
.end method

.method public setShowingTransparent()V
    .locals 3

    .line 783
    invoke-direct {p0}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->d()Z

    move-result v0

    iput-boolean v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->ah:Z

    if-nez v0, :cond_0

    .line 785
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->getContext()Landroid/content/Context;

    move-result-object v0

    const-string v1, "mbridge_reward_theme"

    const-string v2, "style"

    invoke-static {v0, v1, v2}, Lcom/mbridge/msdk/foundation/tools/s;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    const/4 v1, 0x1

    if-le v0, v1, :cond_0

    .line 786
    iget-object v1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->j:Landroid/app/Activity;

    if-eqz v1, :cond_0

    .line 787
    iget-object v1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->j:Landroid/app/Activity;

    invoke-virtual {v1, v0}, Landroid/app/Activity;->setTheme(I)V

    :cond_0
    return-void
.end method

.method public setWebViewFront(I)V
    .locals 0

    .line 1860
    iput p1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->aa:I

    return-void
.end method

.method public superDefaultLoad(ILjava/lang/String;)V
    .locals 3

    .line 451
    sget-object v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->y:Ljava/lang/String;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "receiveError:"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p1, ",descroption:"

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 452
    iget-object p1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->g:Landroid/os/Handler;

    iget-object p2, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->h:Ljava/lang/Runnable;

    invoke-virtual {p1, p2}, Landroid/os/Handler;->removeCallbacks(Ljava/lang/Runnable;)V

    .line 453
    iget-object p1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->g:Landroid/os/Handler;

    iget-object p2, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->i:Ljava/lang/Runnable;

    invoke-virtual {p1, p2}, Landroid/os/Handler;->removeCallbacks(Ljava/lang/Runnable;)V

    .line 454
    iget-object p1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->c:Lcom/mbridge/msdk/video/bt/module/MBTempContainer$a;

    const/4 p2, 0x1

    invoke-interface {p1, p2}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$a;->a(Z)V

    .line 455
    iget-object p1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->d:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    if-eqz p1, :cond_0

    const/16 p2, 0x8

    .line 456
    invoke-virtual {p1, p2}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->setVisibility(I)V

    :cond_0
    return-void
.end method
