.class final Lcom/kwad/components/ad/reward/m/i$a;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/components/ad/reward/m/i;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = "a"
.end annotation


# instance fields
.field private ln:Ljava/lang/String;

.field private ql:Ljava/lang/String;

.field private qm:Ljava/lang/String;

.field private rO:Ljava/lang/String;

.field private rating:Ljava/lang/String;

.field private title:Ljava/lang/String;

.field private zm:Ljava/lang/String;

.field private zn:Ljava/lang/String;

.field private zo:Ljava/lang/String;

.field private zp:Ljava/lang/String;


# direct methods
.method private constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method static B(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/components/ad/reward/m/i$a;
    .locals 3

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object p0

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/a;->cy(Lcom/kwad/sdk/core/response/model/AdInfo;)Lcom/kwad/sdk/core/response/model/AdProductInfo;

    move-result-object v0

    new-instance v1, Lcom/kwad/components/ad/reward/m/i$a;

    invoke-direct {v1}, Lcom/kwad/components/ad/reward/m/i$a;-><init>()V

    invoke-virtual {v0}, Lcom/kwad/sdk/core/response/model/AdProductInfo;->getName()Ljava/lang/String;

    move-result-object v2

    iput-object v2, v1, Lcom/kwad/components/ad/reward/m/i$a;->title:Ljava/lang/String;

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_0

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/a;->ap(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v2

    iput-object v2, v1, Lcom/kwad/components/ad/reward/m/i$a;->title:Ljava/lang/String;

    :cond_0
    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/a;->aw(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v2

    iput-object v2, v1, Lcom/kwad/components/ad/reward/m/i$a;->zo:Ljava/lang/String;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/response/model/AdProductInfo;->getIcon()Ljava/lang/String;

    move-result-object v2

    iput-object v2, v1, Lcom/kwad/components/ad/reward/m/i$a;->ql:Ljava/lang/String;

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/a;->an(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object p0

    iput-object p0, v1, Lcom/kwad/components/ad/reward/m/i$a;->qm:Ljava/lang/String;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/response/model/AdProductInfo;->getPrice()Ljava/lang/String;

    move-result-object p0

    iput-object p0, v1, Lcom/kwad/components/ad/reward/m/i$a;->zm:Ljava/lang/String;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/response/model/AdProductInfo;->getOriginPrice()Ljava/lang/String;

    move-result-object p0

    iput-object p0, v1, Lcom/kwad/components/ad/reward/m/i$a;->ln:Ljava/lang/String;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/response/model/AdProductInfo;->getVolume()Ljava/lang/String;

    move-result-object p0

    iput-object p0, v1, Lcom/kwad/components/ad/reward/m/i$a;->zp:Ljava/lang/String;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/response/model/AdProductInfo;->getRating()Ljava/lang/String;

    move-result-object p0

    iput-object p0, v1, Lcom/kwad/components/ad/reward/m/i$a;->rating:Ljava/lang/String;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/response/model/AdProductInfo;->isCouponListEmpty()Z

    move-result p0

    if-nez p0, :cond_1

    invoke-virtual {v0}, Lcom/kwad/sdk/core/response/model/AdProductInfo;->getFirstCouponList()Lcom/kwad/sdk/core/response/model/CouponInfo;

    move-result-object p0

    if-eqz p0, :cond_1

    invoke-static {p0}, Lcom/kwad/sdk/core/response/model/CouponInfo;->jinniuFormatCoupon(Lcom/kwad/sdk/core/response/model/CouponInfo;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, v1, Lcom/kwad/components/ad/reward/m/i$a;->zn:Ljava/lang/String;

    invoke-virtual {p0}, Lcom/kwad/sdk/core/response/model/CouponInfo;->getFormattedJinniuPrefix()Ljava/lang/String;

    move-result-object p0

    invoke-direct {v1, p0}, Lcom/kwad/components/ad/reward/m/i$a;->P(Ljava/lang/String;)V

    :cond_1
    return-object v1
.end method

.method private P(Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/reward/m/i$a;->rO:Ljava/lang/String;

    return-void
.end method


# virtual methods
.method public final ef()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/i$a;->ln:Ljava/lang/String;

    return-object v0
.end method

.method public final getRating()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/i$a;->rating:Ljava/lang/String;

    return-object v0
.end method

.method public final getTitle()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/i$a;->title:Ljava/lang/String;

    return-object v0
.end method

.method public final gu()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/i$a;->ql:Ljava/lang/String;

    return-object v0
.end method

.method public final gv()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/i$a;->qm:Ljava/lang/String;

    return-object v0
.end method

.method public final hg()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/i$a;->rO:Ljava/lang/String;

    return-object v0
.end method

.method public final ka()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/i$a;->zm:Ljava/lang/String;

    return-object v0
.end method

.method public final kb()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/i$a;->zn:Ljava/lang/String;

    return-object v0
.end method

.method public final kc()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/i$a;->zo:Ljava/lang/String;

    return-object v0
.end method

.method public final kd()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/i$a;->zp:Ljava/lang/String;

    return-object v0
.end method
