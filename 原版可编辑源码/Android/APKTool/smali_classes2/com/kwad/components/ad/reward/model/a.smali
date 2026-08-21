.class public final Lcom/kwad/components/ad/reward/model/a;
.super Ljava/lang/Object;


# instance fields
.field private liveStartTime:Ljava/lang/String;

.field private mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

.field private originPrice:Ljava/lang/String;

.field private playableStyle:I

.field private price:Ljava/lang/String;

.field private ql:Ljava/lang/String;

.field private qm:Ljava/lang/String;

.field private rM:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private rN:Ljava/lang/String;

.field private rO:Ljava/lang/String;

.field private rP:Ljava/lang/String;

.field private rQ:Z

.field private rR:Ljava/lang/String;

.field private rS:Ljava/lang/String;

.field private rT:Ljava/lang/String;

.field private rU:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private rV:Lcom/kwad/sdk/core/response/model/AdTemplate;

.field private title:Ljava/lang/String;


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const-string v0, "\u67e5\u770b\u8be6\u60c5"

    iput-object v0, p0, Lcom/kwad/components/ad/reward/model/a;->rS:Ljava/lang/String;

    const-string v0, "\u7acb\u5373\u9884\u7ea6"

    iput-object v0, p0, Lcom/kwad/components/ad/reward/model/a;->rT:Ljava/lang/String;

    return-void
.end method

.method private P(Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/reward/model/a;->rO:Ljava/lang/String;

    return-void
.end method

.method private Q(Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/reward/model/a;->rP:Ljava/lang/String;

    return-void
.end method

.method public static a(Lcom/kwad/components/ad/reward/m/r;Z)Lcom/kwad/components/ad/reward/model/a;
    .locals 4

    const/4 v0, 0x0

    if-nez p0, :cond_0

    return-object v0

    :cond_0
    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/m/r;->getAdTemplate()Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object v1

    if-nez v1, :cond_1

    return-object v0

    :cond_1
    invoke-static {v1}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    new-instance v2, Lcom/kwad/components/ad/reward/model/a;

    invoke-direct {v2}, Lcom/kwad/components/ad/reward/model/a;-><init>()V

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->bO(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v3

    iput-object v3, v2, Lcom/kwad/components/ad/reward/model/a;->title:Ljava/lang/String;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->bQ(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v3

    iput-object v3, v2, Lcom/kwad/components/ad/reward/model/a;->ql:Ljava/lang/String;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->an(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v3

    iput-object v3, v2, Lcom/kwad/components/ad/reward/model/a;->qm:Ljava/lang/String;

    invoke-static {v1}, Lcom/kwad/sdk/core/response/b/c;->bX(Lcom/kwad/sdk/core/response/model/AdTemplate;)Ljava/util/List;

    move-result-object v3

    iput-object v3, v2, Lcom/kwad/components/ad/reward/model/a;->rM:Ljava/util/List;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->aw(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, v2, Lcom/kwad/components/ad/reward/model/a;->rN:Ljava/lang/String;

    invoke-static {v1, p1}, Lcom/kwad/sdk/core/response/b/d;->g(Lcom/kwad/sdk/core/response/model/AdTemplate;Z)I

    move-result p1

    iput p1, v2, Lcom/kwad/components/ad/reward/model/a;->playableStyle:I

    iput-object v1, v2, Lcom/kwad/components/ad/reward/model/a;->rV:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/m/r;->hi()Lcom/kwad/components/core/e/d/c;

    move-result-object p0

    iput-object p0, v2, Lcom/kwad/components/ad/reward/model/a;->mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

    return-object v2
.end method

.method public static v(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/components/ad/reward/model/a;
    .locals 3

    if-nez p0, :cond_0

    const/4 p0, 0x0

    return-object p0

    :cond_0
    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object p0

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/a;->cy(Lcom/kwad/sdk/core/response/model/AdInfo;)Lcom/kwad/sdk/core/response/model/AdProductInfo;

    move-result-object v0

    new-instance v1, Lcom/kwad/components/ad/reward/model/a;

    invoke-direct {v1}, Lcom/kwad/components/ad/reward/model/a;-><init>()V

    invoke-virtual {v0}, Lcom/kwad/sdk/core/response/model/AdProductInfo;->getName()Ljava/lang/String;

    move-result-object v2

    iput-object v2, v1, Lcom/kwad/components/ad/reward/model/a;->title:Ljava/lang/String;

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_1

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/a;->ap(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v2

    iput-object v2, v1, Lcom/kwad/components/ad/reward/model/a;->title:Ljava/lang/String;

    :cond_1
    invoke-virtual {v0}, Lcom/kwad/sdk/core/response/model/AdProductInfo;->getIcon()Ljava/lang/String;

    move-result-object v2

    iput-object v2, v1, Lcom/kwad/components/ad/reward/model/a;->ql:Ljava/lang/String;

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/a;->an(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object p0

    iput-object p0, v1, Lcom/kwad/components/ad/reward/model/a;->qm:Ljava/lang/String;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/response/model/AdProductInfo;->getPrice()Ljava/lang/String;

    move-result-object p0

    iput-object p0, v1, Lcom/kwad/components/ad/reward/model/a;->price:Ljava/lang/String;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/response/model/AdProductInfo;->getOriginPrice()Ljava/lang/String;

    move-result-object p0

    iput-object p0, v1, Lcom/kwad/components/ad/reward/model/a;->originPrice:Ljava/lang/String;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/response/model/AdProductInfo;->isCouponListEmpty()Z

    move-result p0

    if-nez p0, :cond_2

    invoke-virtual {v0}, Lcom/kwad/sdk/core/response/model/AdProductInfo;->getFirstCouponList()Lcom/kwad/sdk/core/response/model/CouponInfo;

    move-result-object p0

    if-eqz p0, :cond_2

    invoke-static {p0}, Lcom/kwad/sdk/core/response/model/CouponInfo;->jinniuFormatCoupon(Lcom/kwad/sdk/core/response/model/CouponInfo;)Ljava/lang/String;

    move-result-object v0

    invoke-direct {v1, v0}, Lcom/kwad/components/ad/reward/model/a;->Q(Ljava/lang/String;)V

    invoke-virtual {p0}, Lcom/kwad/sdk/core/response/model/CouponInfo;->getFormattedJinniuPrefix()Ljava/lang/String;

    move-result-object p0

    invoke-direct {v1, p0}, Lcom/kwad/components/ad/reward/model/a;->P(Ljava/lang/String;)V

    :cond_2
    return-object v1
.end method

.method public static w(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/components/ad/reward/model/a;
    .locals 3

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/b;->bL(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdMatrixInfo$MerchantLiveReservationInfo;

    move-result-object v0

    new-instance v1, Lcom/kwad/components/ad/reward/model/a;

    invoke-direct {v1}, Lcom/kwad/components/ad/reward/model/a;-><init>()V

    iget-object v2, v0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$MerchantLiveReservationInfo;->userHeadUrl:Ljava/lang/String;

    iput-object v2, v1, Lcom/kwad/components/ad/reward/model/a;->ql:Ljava/lang/String;

    iget-object v2, v0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$MerchantLiveReservationInfo;->liveStartTime:Ljava/lang/String;

    iput-object v2, v1, Lcom/kwad/components/ad/reward/model/a;->liveStartTime:Ljava/lang/String;

    iget-object v2, v0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$MerchantLiveReservationInfo;->title:Ljava/lang/String;

    iput-object v2, v1, Lcom/kwad/components/ad/reward/model/a;->title:Ljava/lang/String;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$MerchantLiveReservationInfo;->needShowSubscriberCount()Z

    move-result v2

    iput-boolean v2, v1, Lcom/kwad/components/ad/reward/model/a;->rQ:Z

    invoke-virtual {v0}, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$MerchantLiveReservationInfo;->getFormattedLiveSubscribeCount()Ljava/lang/String;

    move-result-object v2

    iput-object v2, v1, Lcom/kwad/components/ad/reward/model/a;->rR:Ljava/lang/String;

    iget-object v2, v0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$MerchantLiveReservationInfo;->bookUserUrlList:Ljava/util/List;

    iput-object v2, v1, Lcom/kwad/components/ad/reward/model/a;->rU:Ljava/util/List;

    iget-object v2, v0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$MerchantLiveReservationInfo;->playEndCard:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$MerchantLiveReservationInfo$LiveReservationPlayEndInfo;

    iget-object v2, v2, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$MerchantLiveReservationInfo$LiveReservationPlayEndInfo;->detailBtnTitle:Ljava/lang/String;

    iput-object v2, v1, Lcom/kwad/components/ad/reward/model/a;->rS:Ljava/lang/String;

    iget-object v0, v0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$MerchantLiveReservationInfo;->playEndCard:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$MerchantLiveReservationInfo$LiveReservationPlayEndInfo;

    iget-object v0, v0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$MerchantLiveReservationInfo$LiveReservationPlayEndInfo;->reservationBtnTitle:Ljava/lang/String;

    iput-object v0, v1, Lcom/kwad/components/ad/reward/model/a;->rT:Ljava/lang/String;

    iput-object p0, v1, Lcom/kwad/components/ad/reward/model/a;->rV:Lcom/kwad/sdk/core/response/model/AdTemplate;

    return-object v1
.end method


# virtual methods
.method public final getOriginPrice()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/model/a;->originPrice:Ljava/lang/String;

    return-object v0
.end method

.method public final getPrice()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/model/a;->price:Ljava/lang/String;

    return-object v0
.end method

.method public final getTitle()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/model/a;->title:Ljava/lang/String;

    return-object v0
.end method

.method public final gu()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/model/a;->ql:Ljava/lang/String;

    return-object v0
.end method

.method public final gv()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/model/a;->qm:Ljava/lang/String;

    return-object v0
.end method

.method public final hf()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/model/a;->rP:Ljava/lang/String;

    return-object v0
.end method

.method public final hg()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/model/a;->rO:Ljava/lang/String;

    return-object v0
.end method

.method public final hh()Lcom/kwad/sdk/core/response/model/AdTemplate;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/model/a;->rV:Lcom/kwad/sdk/core/response/model/AdTemplate;

    return-object v0
.end method

.method public final hi()Lcom/kwad/components/core/e/d/c;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/model/a;->mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

    return-object v0
.end method

.method public final hj()Ljava/util/List;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    iget-object v0, p0, Lcom/kwad/components/ad/reward/model/a;->rM:Ljava/util/List;

    return-object v0
.end method

.method public final hk()Z
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/model/a;->rM:Ljava/util/List;

    if-eqz v0, :cond_1

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    if-nez v0, :cond_0

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    return v0

    :cond_1
    :goto_0
    const/4 v0, 0x1

    return v0
.end method

.method public final hl()I
    .locals 1

    iget v0, p0, Lcom/kwad/components/ad/reward/model/a;->playableStyle:I

    return v0
.end method

.method public final hm()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/model/a;->rR:Ljava/lang/String;

    return-object v0
.end method

.method public final hn()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/model/a;->rT:Ljava/lang/String;

    return-object v0
.end method

.method public final ho()Z
    .locals 1

    iget-boolean v0, p0, Lcom/kwad/components/ad/reward/model/a;->rQ:Z

    return v0
.end method

.method public final hp()Ljava/util/List;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    iget-object v0, p0, Lcom/kwad/components/ad/reward/model/a;->rU:Ljava/util/List;

    return-object v0
.end method

.method public final hq()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/model/a;->liveStartTime:Ljava/lang/String;

    return-object v0
.end method
