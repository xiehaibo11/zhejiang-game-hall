.class public Lcom/tkay/network/myoffer/MyOfferTYNativeAd;
.super Lcom/tkay/nativead/unitgroup/api/CustomNativeAd;


# instance fields
.field a:Lcom/tkay/basead/f/e;

.field b:Landroid/content/Context;

.field c:Landroid/view/View;


# direct methods
.method public constructor <init>(Landroid/content/Context;Lcom/tkay/basead/f/e;)V
    .locals 0

    .line 29
    invoke-direct {p0}, Lcom/tkay/nativead/unitgroup/api/CustomNativeAd;-><init>()V

    .line 30
    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/network/myoffer/MyOfferTYNativeAd;->b:Landroid/content/Context;

    .line 31
    iput-object p2, p0, Lcom/tkay/network/myoffer/MyOfferTYNativeAd;->a:Lcom/tkay/basead/f/e;

    .line 32
    new-instance p1, Lcom/tkay/network/myoffer/MyOfferTYNativeAd$1;

    invoke-direct {p1, p0}, Lcom/tkay/network/myoffer/MyOfferTYNativeAd$1;-><init>(Lcom/tkay/network/myoffer/MyOfferTYNativeAd;)V

    invoke-virtual {p2, p1}, Lcom/tkay/basead/f/e;->a(Lcom/tkay/basead/e/a;)V

    .line 64
    iget-object p1, p0, Lcom/tkay/network/myoffer/MyOfferTYNativeAd;->a:Lcom/tkay/basead/f/e;

    invoke-virtual {p1}, Lcom/tkay/basead/f/e;->e()Lcom/tkay/core/common/f/r;

    move-result-object p1

    invoke-static {p1}, Lcom/tkay/basead/b;->a(Lcom/tkay/core/common/f/h;)Ljava/util/Map;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/tkay/network/myoffer/MyOfferTYNativeAd;->setNetworkInfoMap(Ljava/util/Map;)V

    .line 65
    iget-object p1, p0, Lcom/tkay/network/myoffer/MyOfferTYNativeAd;->a:Lcom/tkay/basead/f/e;

    invoke-virtual {p1}, Lcom/tkay/basead/f/e;->j()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/tkay/network/myoffer/MyOfferTYNativeAd;->setAdChoiceIconUrl(Ljava/lang/String;)V

    .line 66
    iget-object p1, p0, Lcom/tkay/network/myoffer/MyOfferTYNativeAd;->a:Lcom/tkay/basead/f/e;

    invoke-virtual {p1}, Lcom/tkay/basead/f/e;->b()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/tkay/network/myoffer/MyOfferTYNativeAd;->setTitle(Ljava/lang/String;)V

    .line 67
    iget-object p1, p0, Lcom/tkay/network/myoffer/MyOfferTYNativeAd;->a:Lcom/tkay/basead/f/e;

    invoke-virtual {p1}, Lcom/tkay/basead/f/e;->f()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/tkay/network/myoffer/MyOfferTYNativeAd;->setDescriptionText(Ljava/lang/String;)V

    .line 68
    iget-object p1, p0, Lcom/tkay/network/myoffer/MyOfferTYNativeAd;->a:Lcom/tkay/basead/f/e;

    invoke-virtual {p1}, Lcom/tkay/basead/f/e;->h()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/tkay/network/myoffer/MyOfferTYNativeAd;->setIconImageUrl(Ljava/lang/String;)V

    .line 69
    iget-object p1, p0, Lcom/tkay/network/myoffer/MyOfferTYNativeAd;->a:Lcom/tkay/basead/f/e;

    invoke-virtual {p1}, Lcom/tkay/basead/f/e;->i()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/tkay/network/myoffer/MyOfferTYNativeAd;->setMainImageUrl(Ljava/lang/String;)V

    .line 70
    iget-object p1, p0, Lcom/tkay/network/myoffer/MyOfferTYNativeAd;->a:Lcom/tkay/basead/f/e;

    invoke-virtual {p1}, Lcom/tkay/basead/f/e;->g()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/tkay/network/myoffer/MyOfferTYNativeAd;->setCallToActionText(Ljava/lang/String;)V

    return-void
.end method


# virtual methods
.method public clear(Landroid/view/View;)V
    .locals 0

    .line 96
    iget-object p1, p0, Lcom/tkay/network/myoffer/MyOfferTYNativeAd;->a:Lcom/tkay/basead/f/e;

    if-eqz p1, :cond_0

    .line 97
    invoke-virtual {p1}, Lcom/tkay/basead/f/e;->l()V

    :cond_0
    return-void
.end method

.method public destroy()V
    .locals 2

    .line 103
    iget-object v0, p0, Lcom/tkay/network/myoffer/MyOfferTYNativeAd;->a:Lcom/tkay/basead/f/e;

    if-eqz v0, :cond_0

    const/4 v1, 0x0

    .line 104
    invoke-virtual {v0, v1}, Lcom/tkay/basead/f/e;->a(Lcom/tkay/basead/e/a;)V

    .line 105
    iget-object v0, p0, Lcom/tkay/network/myoffer/MyOfferTYNativeAd;->a:Lcom/tkay/basead/f/e;

    invoke-virtual {v0}, Lcom/tkay/basead/f/e;->m()V

    :cond_0
    return-void
.end method

.method public varargs getAdMediaView([Ljava/lang/Object;)Landroid/view/View;
    .locals 0

    .line 75
    iget-object p1, p0, Lcom/tkay/network/myoffer/MyOfferTYNativeAd;->c:Landroid/view/View;

    if-nez p1, :cond_0

    .line 76
    invoke-static {}, Lcom/tkay/basead/f/e;->k()Landroid/view/View;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/network/myoffer/MyOfferTYNativeAd;->c:Landroid/view/View;

    .line 78
    :cond_0
    iget-object p1, p0, Lcom/tkay/network/myoffer/MyOfferTYNativeAd;->c:Landroid/view/View;

    return-object p1
.end method

.method public prepare(Landroid/view/View;Lcom/tkay/nativead/api/TYNativePrepareInfo;)V
    .locals 1

    .line 83
    iget-object v0, p0, Lcom/tkay/network/myoffer/MyOfferTYNativeAd;->a:Lcom/tkay/basead/f/e;

    if-eqz v0, :cond_1

    .line 85
    invoke-virtual {p2}, Lcom/tkay/nativead/api/TYNativePrepareInfo;->getClickViewList()Ljava/util/List;

    move-result-object p2

    if-eqz p2, :cond_0

    .line 86
    invoke-interface {p2}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_0

    .line 87
    iget-object v0, p0, Lcom/tkay/network/myoffer/MyOfferTYNativeAd;->a:Lcom/tkay/basead/f/e;

    invoke-virtual {v0, p1, p2}, Lcom/tkay/basead/f/e;->a(Landroid/view/View;Ljava/util/List;)V

    return-void

    .line 89
    :cond_0
    iget-object p2, p0, Lcom/tkay/network/myoffer/MyOfferTYNativeAd;->a:Lcom/tkay/basead/f/e;

    invoke-virtual {p2, p1}, Lcom/tkay/basead/f/e;->a(Landroid/view/View;)V

    :cond_1
    return-void
.end method
