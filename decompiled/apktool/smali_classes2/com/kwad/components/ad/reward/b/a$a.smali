.class final Lcom/kwad/components/ad/reward/b/a$a;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/components/ad/reward/b/a;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = "a"
.end annotation


# instance fields
.field private rf:Ljava/lang/CharSequence;

.field private rg:Ljava/lang/CharSequence;

.field private rh:Ljava/lang/CharSequence;

.field private title:Ljava/lang/CharSequence;


# direct methods
.method private constructor <init>(Lcom/kwad/sdk/core/response/model/CouponInfo;)V
    .locals 3

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    iget-object v0, p1, Lcom/kwad/sdk/core/response/model/CouponInfo;->displayTitle:Ljava/lang/String;

    iput-object v0, p0, Lcom/kwad/components/ad/reward/b/a$a;->title:Ljava/lang/CharSequence;

    iget-object v0, p1, Lcom/kwad/sdk/core/response/model/CouponInfo;->displayValue:Ljava/lang/String;

    iput-object v0, p0, Lcom/kwad/components/ad/reward/b/a$a;->rf:Ljava/lang/CharSequence;

    iget-object v0, p1, Lcom/kwad/sdk/core/response/model/CouponInfo;->displayBase:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    const/4 v0, 0x1

    new-array v0, v0, [Ljava/lang/Object;

    const/4 v1, 0x0

    iget-object v2, p1, Lcom/kwad/sdk/core/response/model/CouponInfo;->displayBase:Ljava/lang/String;

    aput-object v2, v0, v1

    const-string v1, "\u6ee1%s\u53ef\u7528"

    invoke-static {v1, v0}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    goto :goto_0

    :cond_0
    const-string v0, ""

    :goto_0
    iput-object v0, p0, Lcom/kwad/components/ad/reward/b/a$a;->rg:Ljava/lang/CharSequence;

    iget-object p1, p1, Lcom/kwad/sdk/core/response/model/CouponInfo;->displayActionWords:Ljava/lang/String;

    iput-object p1, p0, Lcom/kwad/components/ad/reward/b/a$a;->rh:Ljava/lang/CharSequence;

    return-void
.end method

.method private static a(Lcom/kwad/sdk/core/response/model/CouponInfo;)Lcom/kwad/components/ad/reward/b/a$a;
    .locals 1

    if-nez p0, :cond_0

    const/4 p0, 0x0

    return-object p0

    :cond_0
    new-instance v0, Lcom/kwad/components/ad/reward/b/a$a;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/reward/b/a$a;-><init>(Lcom/kwad/sdk/core/response/model/CouponInfo;)V

    return-object v0
.end method

.method public static u(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/components/ad/reward/b/a$a;
    .locals 1

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object p0

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/a;->cy(Lcom/kwad/sdk/core/response/model/AdInfo;)Lcom/kwad/sdk/core/response/model/AdProductInfo;

    move-result-object p0

    if-eqz p0, :cond_0

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdProductInfo;->couponList:Ljava/util/List;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdProductInfo;->couponList:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_0

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdProductInfo;->couponList:Ljava/util/List;

    const/4 v0, 0x0

    invoke-interface {p0, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Lcom/kwad/sdk/core/response/model/CouponInfo;

    invoke-static {p0}, Lcom/kwad/components/ad/reward/b/a$a;->a(Lcom/kwad/sdk/core/response/model/CouponInfo;)Lcom/kwad/components/ad/reward/b/a$a;

    move-result-object p0

    return-object p0

    :cond_0
    const/4 p0, 0x0

    return-object p0
.end method


# virtual methods
.method public final N(Landroid/content/Context;)Ljava/lang/CharSequence;
    .locals 4

    invoke-virtual {p1}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object p1

    sget v0, Lcom/kwad/sdk/R$dimen;->ksad_coupon_dialog_value_prefix_text_size:I

    invoke-virtual {p1, v0}, Landroid/content/res/Resources;->getDimensionPixelSize(I)I

    move-result p1

    new-instance v0, Landroid/text/style/AbsoluteSizeSpan;

    invoke-direct {v0, p1}, Landroid/text/style/AbsoluteSizeSpan;-><init>(I)V

    new-instance p1, Landroid/text/SpannableString;

    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "\u00a5"

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v2, p0, Lcom/kwad/components/ad/reward/b/a$a;->rf:Ljava/lang/CharSequence;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-direct {p1, v1}, Landroid/text/SpannableString;-><init>(Ljava/lang/CharSequence;)V

    const/4 v1, 0x0

    const/4 v2, 0x1

    const/16 v3, 0x11

    invoke-virtual {p1, v0, v1, v2, v3}, Landroid/text/SpannableString;->setSpan(Ljava/lang/Object;III)V

    return-object p1
.end method

.method public final gS()Ljava/lang/CharSequence;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/b/a$a;->rg:Ljava/lang/CharSequence;

    return-object v0
.end method

.method public final gT()Ljava/lang/CharSequence;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/b/a$a;->rh:Ljava/lang/CharSequence;

    return-object v0
.end method

.method public final getTitle()Ljava/lang/CharSequence;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/b/a$a;->title:Ljava/lang/CharSequence;

    return-object v0
.end method
