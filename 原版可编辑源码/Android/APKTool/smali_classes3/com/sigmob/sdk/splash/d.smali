.class Lcom/sigmob/sdk/splash/d;
.super Landroid/widget/RelativeLayout;


# instance fields
.field protected a:I


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 0

    invoke-direct {p0, p1}, Landroid/widget/RelativeLayout;-><init>(Landroid/content/Context;)V

    return-void
.end method

.method public static a(Landroid/content/Context;Lcom/sigmob/sdk/base/models/BaseAdUnit;)Lcom/sigmob/sdk/splash/d;
    .locals 2

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getMaterial()Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;

    move-result-object v0

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->creative_type:Ljava/lang/Integer;

    if-nez v0, :cond_0

    const/4 p0, 0x0

    return-object p0

    :cond_0
    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getMaterial()Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;

    move-result-object v0

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->creative_type:Ljava/lang/Integer;

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    sget-object v1, Lcom/sigmob/sdk/base/common/l;->g:Lcom/sigmob/sdk/base/common/l;

    invoke-virtual {v1}, Lcom/sigmob/sdk/base/common/l;->a()I

    move-result v1

    if-ne v0, v1, :cond_1

    new-instance v0, Lcom/sigmob/sdk/splash/h;

    invoke-direct {v0, p0, p1}, Lcom/sigmob/sdk/splash/h;-><init>(Landroid/content/Context;Lcom/sigmob/sdk/base/models/BaseAdUnit;)V

    return-object v0

    :cond_1
    new-instance p1, Lcom/sigmob/sdk/splash/e;

    invoke-direct {p1, p0}, Lcom/sigmob/sdk/splash/e;-><init>(Landroid/content/Context;)V

    return-object p1
.end method


# virtual methods
.method public a()V
    .locals 1

    const/4 v0, 0x0

    invoke-virtual {p0, v0}, Lcom/sigmob/sdk/splash/d;->setVisibility(I)V

    return-void
.end method

.method public a(Lcom/sigmob/sdk/base/models/BaseAdUnit;)Z
    .locals 0

    const/4 p1, 0x0

    return p1
.end method

.method public b()V
    .locals 0

    return-void
.end method

.method public c()V
    .locals 0

    return-void
.end method

.method public getDuration()I
    .locals 1

    iget v0, p0, Lcom/sigmob/sdk/splash/d;->a:I

    return v0
.end method
