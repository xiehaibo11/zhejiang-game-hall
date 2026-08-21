.class public abstract Lcom/tkay/banner/unitgroup/api/CustomBannerAdapter;
.super Lcom/tkay/core/api/TYBaseAdAdapter;


# instance fields
.field protected mImpressionEventListener:Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 14
    invoke-direct {p0}, Lcom/tkay/core/api/TYBaseAdAdapter;-><init>()V

    return-void
.end method


# virtual methods
.method public abstract getBannerView()Landroid/view/View;
.end method

.method public isAdReady()Z
    .locals 1

    .line 20
    invoke-virtual {p0}, Lcom/tkay/banner/unitgroup/api/CustomBannerAdapter;->getBannerView()Landroid/view/View;

    move-result-object v0

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public final releaseLoadResource()V
    .locals 0

    .line 31
    invoke-super {p0}, Lcom/tkay/core/api/TYBaseAdAdapter;->releaseLoadResource()V

    return-void
.end method

.method public final setAdEventListener(Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;)V
    .locals 0

    .line 26
    iput-object p1, p0, Lcom/tkay/banner/unitgroup/api/CustomBannerAdapter;->mImpressionEventListener:Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;

    return-void
.end method
