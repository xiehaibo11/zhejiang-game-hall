.class public Lcom/sigmob/sdk/nativead/t;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/sigmob/sdk/base/network/d$a;


# static fields
.field public static final a:I = 0x1

.field public static final b:I = 0x2

.field public static final c:I = 0x3


# instance fields
.field private d:Landroid/os/Handler;

.field private e:Lcom/sigmob/sdk/nativead/v;

.field private f:Lcom/sigmob/windad/natives/WindNativeAdRequest;

.field private g:Z

.field private final h:I

.field private i:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/sigmob/sdk/base/models/BaseAdUnit;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method public constructor <init>(Lcom/sigmob/windad/natives/WindNativeAdRequest;Lcom/sigmob/sdk/nativead/v;)V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/16 v0, 0x5001

    iput v0, p0, Lcom/sigmob/sdk/nativead/t;->h:I

    iput-object p1, p0, Lcom/sigmob/sdk/nativead/t;->f:Lcom/sigmob/windad/natives/WindNativeAdRequest;

    iput-object p2, p0, Lcom/sigmob/sdk/nativead/t;->e:Lcom/sigmob/sdk/nativead/v;

    new-instance p1, Lcom/sigmob/sdk/nativead/t$1;

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object p2

    invoke-direct {p1, p0, p2}, Lcom/sigmob/sdk/nativead/t$1;-><init>(Lcom/sigmob/sdk/nativead/t;Landroid/os/Looper;)V

    iput-object p1, p0, Lcom/sigmob/sdk/nativead/t;->d:Landroid/os/Handler;

    return-void
.end method

.method private a(Lcom/sigmob/sdk/base/models/BaseAdUnit;)Lcom/sigmob/windad/natives/WindNativeAdData;
    .locals 1

    new-instance v0, Lcom/sigmob/sdk/nativead/ab;

    invoke-direct {v0, p1}, Lcom/sigmob/sdk/nativead/ab;-><init>(Lcom/sigmob/sdk/base/models/BaseAdUnit;)V

    return-object v0
.end method

.method static synthetic a(Lcom/sigmob/sdk/nativead/t;Ljava/util/List;ILjava/lang/String;)V
    .locals 0

    invoke-direct {p0, p1, p2, p3}, Lcom/sigmob/sdk/nativead/t;->a(Ljava/util/List;ILjava/lang/String;)V

    return-void
.end method

.method private a(Ljava/util/List;ILjava/lang/String;)V
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/sigmob/windad/natives/WindNativeAdData;",
            ">;I",
            "Ljava/lang/String;",
            ")V"
        }
    .end annotation

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/sigmob/sdk/nativead/t;->g:Z

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/t;->d:Landroid/os/Handler;

    const/16 v1, 0x5001

    invoke-virtual {v0, v1}, Landroid/os/Handler;->removeMessages(I)V

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/t;->d:Landroid/os/Handler;

    new-instance v1, Lcom/sigmob/sdk/nativead/t$2;

    invoke-direct {v1, p0, p2, p3, p1}, Lcom/sigmob/sdk/nativead/t$2;-><init>(Lcom/sigmob/sdk/nativead/t;ILjava/lang/String;Ljava/util/List;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method static synthetic a(Lcom/sigmob/sdk/nativead/t;)Z
    .locals 0

    iget-boolean p0, p0, Lcom/sigmob/sdk/nativead/t;->g:Z

    return p0
.end method

.method static synthetic b(Lcom/sigmob/sdk/nativead/t;)Landroid/os/Handler;
    .locals 0

    iget-object p0, p0, Lcom/sigmob/sdk/nativead/t;->d:Landroid/os/Handler;

    return-object p0
.end method

.method static synthetic c(Lcom/sigmob/sdk/nativead/t;)Lcom/sigmob/sdk/nativead/v;
    .locals 0

    iget-object p0, p0, Lcom/sigmob/sdk/nativead/t;->e:Lcom/sigmob/sdk/nativead/v;

    return-object p0
.end method


# virtual methods
.method public a()Ljava/lang/String;
    .locals 2

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/t;->i:Ljava/util/List;

    if-eqz v0, :cond_0

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_0

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/t;->i:Ljava/util/List;

    const/4 v1, 0x0

    invoke-interface {v0, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/sigmob/sdk/base/models/BaseAdUnit;

    if-eqz v0, :cond_0

    iget-object v1, v0, Lcom/sigmob/sdk/base/models/BaseAdUnit;->bidding_response:Lcom/sigmob/sdk/base/models/rtb/BiddingResponse;

    if-eqz v1, :cond_0

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/BaseAdUnit;->bidding_response:Lcom/sigmob/sdk/base/models/rtb/BiddingResponse;

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/rtb/BiddingResponse;->ecpm:Ljava/lang/Integer;

    invoke-static {v0}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    return-object v0

    :cond_0
    const/4 v0, 0x0

    return-object v0
.end method

.method public a(ILjava/lang/String;ILjava/lang/String;)V
    .locals 4

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/sigmob/sdk/nativead/t;->g:Z

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/t;->d:Landroid/os/Handler;

    invoke-static {}, Lcom/sigmob/sdk/base/i;->a()Lcom/sigmob/sdk/base/i;

    move-result-object v1

    invoke-virtual {v1}, Lcom/sigmob/sdk/base/i;->u()J

    move-result-wide v1

    const/16 v3, 0x5001

    invoke-virtual {v0, v3, v1, v2}, Landroid/os/Handler;->sendEmptyMessageDelayed(IJ)Z

    new-instance v0, Lcom/sigmob/sdk/base/models/LoadAdRequest;

    iget-object v1, p0, Lcom/sigmob/sdk/nativead/t;->f:Lcom/sigmob/windad/natives/WindNativeAdRequest;

    invoke-direct {v0, v1}, Lcom/sigmob/sdk/base/models/LoadAdRequest;-><init>(Lcom/sigmob/windad/WindAdRequest;)V

    invoke-virtual {v0, p2}, Lcom/sigmob/sdk/base/models/LoadAdRequest;->setBidToken(Ljava/lang/String;)Lcom/sigmob/sdk/base/models/LoadAdRequest;

    invoke-virtual {v0, p3}, Lcom/sigmob/sdk/base/models/LoadAdRequest;->setBidFloor(I)V

    invoke-virtual {v0, p4}, Lcom/sigmob/sdk/base/models/LoadAdRequest;->setCurrency(Ljava/lang/String;)V

    invoke-virtual {v0, p1}, Lcom/sigmob/sdk/base/models/LoadAdRequest;->setAd_count(I)V

    invoke-static {v0, p0}, Lcom/sigmob/sdk/base/network/d;->a(Lcom/sigmob/sdk/base/models/LoadAdRequest;Lcom/sigmob/sdk/base/network/d$a;)V

    return-void
.end method

.method public a(ILjava/lang/String;Ljava/lang/String;Lcom/sigmob/sdk/base/models/LoadAdRequest;)V
    .locals 1

    const-string p3, "respond"

    const-string v0, "0"

    invoke-static {p3, v0, p4}, Lcom/sigmob/sdk/base/common/z;->a(Ljava/lang/String;Ljava/lang/String;Lcom/sigmob/sdk/base/models/LoadAdRequest;)V

    const/4 p3, 0x0

    invoke-direct {p0, p3, p1, p2}, Lcom/sigmob/sdk/nativead/t;->a(Ljava/util/List;ILjava/lang/String;)V

    return-void
.end method

.method public a(Ljava/util/List;Lcom/sigmob/sdk/base/models/LoadAdRequest;)V
    .locals 6
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/sigmob/sdk/base/models/BaseAdUnit;",
            ">;",
            "Lcom/sigmob/sdk/base/models/LoadAdRequest;",
            ")V"
        }
    .end annotation

    iput-object p1, p0, Lcom/sigmob/sdk/nativead/t;->i:Ljava/util/List;

    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    const/4 v1, 0x0

    move v2, v1

    :goto_0
    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v3

    if-ge v2, v3, :cond_0

    invoke-interface {p1, v2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-direct {p0, v3}, Lcom/sigmob/sdk/nativead/t;->a(Lcom/sigmob/sdk/base/models/BaseAdUnit;)Lcom/sigmob/windad/natives/WindNativeAdData;

    move-result-object v4

    invoke-virtual {v0, v4}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    invoke-static {}, Lcom/sigmob/sdk/base/common/f;->e()Lcom/sigmob/sdk/base/common/f;

    move-result-object v4

    invoke-virtual {v4, v3}, Lcom/sigmob/sdk/base/common/f;->e(Lcom/sigmob/sdk/base/models/BaseAdUnit;)V

    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    :cond_0
    new-instance v2, Lcom/sigmob/sdk/nativead/t$3;

    invoke-direct {v2, p0, p1}, Lcom/sigmob/sdk/nativead/t$3;-><init>(Lcom/sigmob/sdk/nativead/t;Ljava/util/List;)V

    const/4 v3, 0x0

    const-string v4, "respond"

    const-string v5, "1"

    invoke-static {v4, v5, v3, p2, v2}, Lcom/sigmob/sdk/base/common/z;->a(Ljava/lang/String;Ljava/lang/String;Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/base/models/LoadAdRequest;Lcom/sigmob/sdk/base/common/z$a;)V

    invoke-interface {p1, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/sigmob/sdk/base/models/BaseAdUnit;

    const-string v2, "ready"

    invoke-static {v2, v3, p1, p2, v3}, Lcom/sigmob/sdk/base/common/z;->a(Ljava/lang/String;Ljava/lang/String;Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/base/models/LoadAdRequest;Lcom/sigmob/sdk/base/common/z$a;)V

    invoke-direct {p0, v0, v1, v3}, Lcom/sigmob/sdk/nativead/t;->a(Ljava/util/List;ILjava/lang/String;)V

    return-void
.end method

.method public b()Ljava/util/List;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Lcom/sigmob/sdk/base/models/BaseAdUnit;",
            ">;"
        }
    .end annotation

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/t;->i:Ljava/util/List;

    return-object v0
.end method
