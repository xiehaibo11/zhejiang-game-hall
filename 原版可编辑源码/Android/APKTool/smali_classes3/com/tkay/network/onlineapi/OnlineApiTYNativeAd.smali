.class public Lcom/tkay/network/onlineapi/OnlineApiTYNativeAd;
.super Lcom/tkay/nativead/unitgroup/api/CustomNativeAd;


# instance fields
.field a:Lcom/tkay/basead/d/h;

.field b:Landroid/content/Context;

.field c:Landroid/view/View;


# direct methods
.method public constructor <init>(Landroid/content/Context;Lcom/tkay/basead/d/h;)V
    .locals 0

    .line 31
    invoke-direct {p0}, Lcom/tkay/nativead/unitgroup/api/CustomNativeAd;-><init>()V

    .line 32
    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/network/onlineapi/OnlineApiTYNativeAd;->b:Landroid/content/Context;

    .line 33
    iput-object p2, p0, Lcom/tkay/network/onlineapi/OnlineApiTYNativeAd;->a:Lcom/tkay/basead/d/h;

    .line 34
    new-instance p1, Lcom/tkay/network/onlineapi/OnlineApiTYNativeAd$1;

    invoke-direct {p1, p0}, Lcom/tkay/network/onlineapi/OnlineApiTYNativeAd$1;-><init>(Lcom/tkay/network/onlineapi/OnlineApiTYNativeAd;)V

    invoke-virtual {p2, p1}, Lcom/tkay/basead/d/h;->a(Lcom/tkay/basead/e/a;)V

    .line 65
    iget-object p1, p0, Lcom/tkay/network/onlineapi/OnlineApiTYNativeAd;->a:Lcom/tkay/basead/d/h;

    invoke-virtual {p1}, Lcom/tkay/basead/d/h;->a()Lcom/tkay/core/common/f/h;

    move-result-object p1

    invoke-static {p1}, Lcom/tkay/basead/b;->a(Lcom/tkay/core/common/f/h;)Ljava/util/Map;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/tkay/network/onlineapi/OnlineApiTYNativeAd;->setNetworkInfoMap(Ljava/util/Map;)V

    .line 66
    iget-object p1, p0, Lcom/tkay/network/onlineapi/OnlineApiTYNativeAd;->a:Lcom/tkay/basead/d/h;

    invoke-virtual {p1}, Lcom/tkay/basead/d/h;->g()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/tkay/network/onlineapi/OnlineApiTYNativeAd;->setAdChoiceIconUrl(Ljava/lang/String;)V

    .line 67
    iget-object p1, p0, Lcom/tkay/network/onlineapi/OnlineApiTYNativeAd;->a:Lcom/tkay/basead/d/h;

    invoke-virtual {p1}, Lcom/tkay/basead/d/h;->b()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/tkay/network/onlineapi/OnlineApiTYNativeAd;->setTitle(Ljava/lang/String;)V

    .line 68
    iget-object p1, p0, Lcom/tkay/network/onlineapi/OnlineApiTYNativeAd;->a:Lcom/tkay/basead/d/h;

    invoke-virtual {p1}, Lcom/tkay/basead/d/h;->c()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/tkay/network/onlineapi/OnlineApiTYNativeAd;->setDescriptionText(Ljava/lang/String;)V

    .line 69
    iget-object p1, p0, Lcom/tkay/network/onlineapi/OnlineApiTYNativeAd;->a:Lcom/tkay/basead/d/h;

    invoke-virtual {p1}, Lcom/tkay/basead/d/h;->e()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/tkay/network/onlineapi/OnlineApiTYNativeAd;->setIconImageUrl(Ljava/lang/String;)V

    .line 70
    iget-object p1, p0, Lcom/tkay/network/onlineapi/OnlineApiTYNativeAd;->a:Lcom/tkay/basead/d/h;

    invoke-virtual {p1}, Lcom/tkay/basead/d/h;->f()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/tkay/network/onlineapi/OnlineApiTYNativeAd;->setMainImageUrl(Ljava/lang/String;)V

    .line 71
    iget-object p1, p0, Lcom/tkay/network/onlineapi/OnlineApiTYNativeAd;->a:Lcom/tkay/basead/d/h;

    invoke-virtual {p1}, Lcom/tkay/basead/d/h;->d()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/tkay/network/onlineapi/OnlineApiTYNativeAd;->setCallToActionText(Ljava/lang/String;)V

    return-void
.end method


# virtual methods
.method public clear(Landroid/view/View;)V
    .locals 0

    .line 105
    iget-object p1, p0, Lcom/tkay/network/onlineapi/OnlineApiTYNativeAd;->a:Lcom/tkay/basead/d/h;

    if-eqz p1, :cond_0

    .line 106
    invoke-virtual {p1}, Lcom/tkay/basead/d/h;->i()V

    :cond_0
    return-void
.end method

.method public destroy()V
    .locals 2

    .line 112
    iget-object v0, p0, Lcom/tkay/network/onlineapi/OnlineApiTYNativeAd;->a:Lcom/tkay/basead/d/h;

    if-eqz v0, :cond_0

    const/4 v1, 0x0

    .line 113
    invoke-virtual {v0, v1}, Lcom/tkay/basead/d/h;->a(Lcom/tkay/basead/e/a;)V

    .line 114
    iget-object v0, p0, Lcom/tkay/network/onlineapi/OnlineApiTYNativeAd;->a:Lcom/tkay/basead/d/h;

    invoke-virtual {v0}, Lcom/tkay/basead/d/h;->j()V

    :cond_0
    return-void
.end method

.method public varargs getAdMediaView([Ljava/lang/Object;)Landroid/view/View;
    .locals 3

    .line 84
    iget-object p1, p0, Lcom/tkay/network/onlineapi/OnlineApiTYNativeAd;->c:Landroid/view/View;

    if-nez p1, :cond_0

    .line 85
    iget-object p1, p0, Lcom/tkay/network/onlineapi/OnlineApiTYNativeAd;->a:Lcom/tkay/basead/d/h;

    iget-object v0, p0, Lcom/tkay/network/onlineapi/OnlineApiTYNativeAd;->b:Landroid/content/Context;

    const/4 v1, 0x0

    const/4 v2, 0x0

    invoke-virtual {p1, v0, v2, v2, v1}, Lcom/tkay/basead/d/h;->a(Landroid/content/Context;ZZLcom/tkay/basead/ui/BaseMediaATView$a;)Landroid/view/View;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/network/onlineapi/OnlineApiTYNativeAd;->c:Landroid/view/View;

    .line 87
    :cond_0
    iget-object p1, p0, Lcom/tkay/network/onlineapi/OnlineApiTYNativeAd;->c:Landroid/view/View;

    return-object p1
.end method

.method public getCustomAdContainer()Landroid/view/ViewGroup;
    .locals 2

    .line 76
    iget-object v0, p0, Lcom/tkay/network/onlineapi/OnlineApiTYNativeAd;->a:Lcom/tkay/basead/d/h;

    if-eqz v0, :cond_0

    .line 77
    new-instance v0, Lcom/tkay/basead/ui/OwnNativeATView;

    iget-object v1, p0, Lcom/tkay/network/onlineapi/OnlineApiTYNativeAd;->b:Landroid/content/Context;

    invoke-direct {v0, v1}, Lcom/tkay/basead/ui/OwnNativeATView;-><init>(Landroid/content/Context;)V

    return-object v0

    :cond_0
    const/4 v0, 0x0

    return-object v0
.end method

.method public prepare(Landroid/view/View;Lcom/tkay/nativead/api/TYNativePrepareInfo;)V
    .locals 1

    .line 92
    iget-object v0, p0, Lcom/tkay/network/onlineapi/OnlineApiTYNativeAd;->a:Lcom/tkay/basead/d/h;

    if-eqz v0, :cond_1

    .line 93
    invoke-virtual {p2}, Lcom/tkay/nativead/api/TYNativePrepareInfo;->getClickViewList()Ljava/util/List;

    move-result-object p2

    if-eqz p2, :cond_0

    .line 94
    invoke-interface {p2}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_0

    .line 95
    iget-object v0, p0, Lcom/tkay/network/onlineapi/OnlineApiTYNativeAd;->a:Lcom/tkay/basead/d/h;

    invoke-virtual {v0, p1, p2}, Lcom/tkay/basead/d/h;->a(Landroid/view/View;Ljava/util/List;)V

    return-void

    .line 97
    :cond_0
    iget-object p2, p0, Lcom/tkay/network/onlineapi/OnlineApiTYNativeAd;->a:Lcom/tkay/basead/d/h;

    invoke-virtual {p2, p1}, Lcom/tkay/basead/d/h;->a(Landroid/view/View;)V

    :cond_1
    return-void
.end method
