.class public Lcom/tkay/network/ks/KSATDrawAd;
.super Lcom/tkay/nativead/unitgroup/api/CustomNativeAd;


# instance fields
.field a:Landroid/content/Context;

.field b:Lcom/kwad/sdk/api/KsDrawAd;

.field c:Landroid/view/View;


# direct methods
.method public constructor <init>(Landroid/content/Context;Lcom/kwad/sdk/api/KsDrawAd;)V
    .locals 0

    .line 28
    invoke-direct {p0}, Lcom/tkay/nativead/unitgroup/api/CustomNativeAd;-><init>()V

    .line 29
    iput-object p1, p0, Lcom/tkay/network/ks/KSATDrawAd;->a:Landroid/content/Context;

    .line 30
    iput-object p2, p0, Lcom/tkay/network/ks/KSATDrawAd;->b:Lcom/kwad/sdk/api/KsDrawAd;

    .line 32
    new-instance p1, Lcom/tkay/network/ks/KSATDrawAd$1;

    invoke-direct {p1, p0, p2}, Lcom/tkay/network/ks/KSATDrawAd$1;-><init>(Lcom/tkay/network/ks/KSATDrawAd;Lcom/kwad/sdk/api/KsDrawAd;)V

    invoke-interface {p2, p1}, Lcom/kwad/sdk/api/KsDrawAd;->setAdInteractionListener(Lcom/kwad/sdk/api/KsDrawAd$AdInteractionListener;)V

    return-void
.end method


# virtual methods
.method public clear(Landroid/view/View;)V
    .locals 0

    return-void
.end method

.method public destroy()V
    .locals 2

    .line 104
    iget-object v0, p0, Lcom/tkay/network/ks/KSATDrawAd;->b:Lcom/kwad/sdk/api/KsDrawAd;

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    .line 105
    invoke-interface {v0, v1}, Lcom/kwad/sdk/api/KsDrawAd;->setAdInteractionListener(Lcom/kwad/sdk/api/KsDrawAd$AdInteractionListener;)V

    .line 106
    iput-object v1, p0, Lcom/tkay/network/ks/KSATDrawAd;->b:Lcom/kwad/sdk/api/KsDrawAd;

    .line 108
    :cond_0
    iput-object v1, p0, Lcom/tkay/network/ks/KSATDrawAd;->a:Landroid/content/Context;

    return-void
.end method

.method public varargs getAdMediaView([Ljava/lang/Object;)Landroid/view/View;
    .locals 1

    .line 82
    :try_start_0
    iget-object p1, p0, Lcom/tkay/network/ks/KSATDrawAd;->c:Landroid/view/View;

    if-nez p1, :cond_0

    .line 83
    iget-object p1, p0, Lcom/tkay/network/ks/KSATDrawAd;->b:Lcom/kwad/sdk/api/KsDrawAd;

    iget-object v0, p0, Lcom/tkay/network/ks/KSATDrawAd;->a:Landroid/content/Context;

    invoke-interface {p1, v0}, Lcom/kwad/sdk/api/KsDrawAd;->getDrawView(Landroid/content/Context;)Landroid/view/View;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/network/ks/KSATDrawAd;->c:Landroid/view/View;

    .line 85
    :cond_0
    iget-object p1, p0, Lcom/tkay/network/ks/KSATDrawAd;->c:Landroid/view/View;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object p1

    :catch_0
    const/4 p1, 0x0

    return-object p1
.end method

.method public isNativeExpress()Z
    .locals 1

    const/4 v0, 0x1

    return v0
.end method

.method public prepare(Landroid/view/View;Lcom/tkay/nativead/api/TYNativePrepareInfo;)V
    .locals 0

    return-void
.end method
