.class public Lcom/tkay/network/adx/AdxTYNativeAd;
.super Lcom/tkay/nativead/unitgroup/api/CustomNativeAd;


# instance fields
.field a:Lcom/tkay/basead/d/h;

.field b:Landroid/content/Context;

.field c:Z

.field d:Z

.field e:Landroid/view/View;


# direct methods
.method public constructor <init>(Landroid/content/Context;Lcom/tkay/basead/d/h;ZZ)V
    .locals 2

    .line 37
    invoke-direct {p0}, Lcom/tkay/nativead/unitgroup/api/CustomNativeAd;-><init>()V

    .line 38
    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/network/adx/AdxTYNativeAd;->b:Landroid/content/Context;

    .line 39
    iput-object p2, p0, Lcom/tkay/network/adx/AdxTYNativeAd;->a:Lcom/tkay/basead/d/h;

    .line 41
    invoke-virtual {p2}, Lcom/tkay/basead/d/h;->a()Lcom/tkay/core/common/f/h;

    move-result-object p2

    invoke-static {p2}, Lcom/tkay/basead/b;->a(Lcom/tkay/core/common/f/h;)Ljava/util/Map;

    move-result-object p2

    invoke-virtual {p0, p2}, Lcom/tkay/network/adx/AdxTYNativeAd;->setNetworkInfoMap(Ljava/util/Map;)V

    .line 43
    iget-object p2, p0, Lcom/tkay/network/adx/AdxTYNativeAd;->a:Lcom/tkay/basead/d/h;

    new-instance v0, Lcom/tkay/network/adx/AdxTYNativeAd$1;

    invoke-virtual {p2}, Lcom/tkay/basead/d/h;->a()Lcom/tkay/core/common/f/h;

    move-result-object v1

    invoke-direct {v0, p0, v1, p1}, Lcom/tkay/network/adx/AdxTYNativeAd$1;-><init>(Lcom/tkay/network/adx/AdxTYNativeAd;Lcom/tkay/core/common/f/h;Landroid/content/Context;)V

    invoke-virtual {p2, v0}, Lcom/tkay/basead/d/h;->a(Lcom/tkay/basead/e/a;)V

    .line 91
    iput-boolean p3, p0, Lcom/tkay/network/adx/AdxTYNativeAd;->c:Z

    .line 92
    iput-boolean p4, p0, Lcom/tkay/network/adx/AdxTYNativeAd;->d:Z

    if-nez p3, :cond_1

    .line 94
    iget-object p1, p0, Lcom/tkay/network/adx/AdxTYNativeAd;->a:Lcom/tkay/basead/d/h;

    invoke-virtual {p1}, Lcom/tkay/basead/d/h;->h()Z

    move-result p1

    if-eqz p1, :cond_0

    goto :goto_0

    .line 98
    :cond_0
    iget-object p1, p0, Lcom/tkay/network/adx/AdxTYNativeAd;->a:Lcom/tkay/basead/d/h;

    invoke-virtual {p1}, Lcom/tkay/basead/d/h;->g()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/tkay/network/adx/AdxTYNativeAd;->setAdChoiceIconUrl(Ljava/lang/String;)V

    .line 99
    iget-object p1, p0, Lcom/tkay/network/adx/AdxTYNativeAd;->a:Lcom/tkay/basead/d/h;

    invoke-virtual {p1}, Lcom/tkay/basead/d/h;->b()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/tkay/network/adx/AdxTYNativeAd;->setTitle(Ljava/lang/String;)V

    .line 100
    iget-object p1, p0, Lcom/tkay/network/adx/AdxTYNativeAd;->a:Lcom/tkay/basead/d/h;

    invoke-virtual {p1}, Lcom/tkay/basead/d/h;->c()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/tkay/network/adx/AdxTYNativeAd;->setDescriptionText(Ljava/lang/String;)V

    .line 101
    iget-object p1, p0, Lcom/tkay/network/adx/AdxTYNativeAd;->a:Lcom/tkay/basead/d/h;

    invoke-virtual {p1}, Lcom/tkay/basead/d/h;->e()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/tkay/network/adx/AdxTYNativeAd;->setIconImageUrl(Ljava/lang/String;)V

    .line 102
    iget-object p1, p0, Lcom/tkay/network/adx/AdxTYNativeAd;->a:Lcom/tkay/basead/d/h;

    invoke-virtual {p1}, Lcom/tkay/basead/d/h;->f()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/tkay/network/adx/AdxTYNativeAd;->setMainImageUrl(Ljava/lang/String;)V

    .line 103
    iget-object p1, p0, Lcom/tkay/network/adx/AdxTYNativeAd;->a:Lcom/tkay/basead/d/h;

    invoke-virtual {p1}, Lcom/tkay/basead/d/h;->d()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/tkay/network/adx/AdxTYNativeAd;->setCallToActionText(Ljava/lang/String;)V

    :cond_1
    :goto_0
    return-void
.end method


# virtual methods
.method public clear(Landroid/view/View;)V
    .locals 0

    .line 163
    iget-object p1, p0, Lcom/tkay/network/adx/AdxTYNativeAd;->a:Lcom/tkay/basead/d/h;

    if-eqz p1, :cond_0

    .line 164
    invoke-virtual {p1}, Lcom/tkay/basead/d/h;->i()V

    :cond_0
    return-void
.end method

.method public destroy()V
    .locals 2

    .line 170
    iget-object v0, p0, Lcom/tkay/network/adx/AdxTYNativeAd;->a:Lcom/tkay/basead/d/h;

    if-eqz v0, :cond_0

    const/4 v1, 0x0

    .line 171
    invoke-virtual {v0, v1}, Lcom/tkay/basead/d/h;->a(Lcom/tkay/basead/e/a;)V

    .line 172
    iget-object v0, p0, Lcom/tkay/network/adx/AdxTYNativeAd;->a:Lcom/tkay/basead/d/h;

    invoke-virtual {v0}, Lcom/tkay/basead/d/h;->j()V

    :cond_0
    return-void
.end method

.method public varargs getAdMediaView([Ljava/lang/Object;)Landroid/view/View;
    .locals 4

    .line 113
    iget-object p1, p0, Lcom/tkay/network/adx/AdxTYNativeAd;->e:Landroid/view/View;

    if-nez p1, :cond_0

    .line 114
    iget-object p1, p0, Lcom/tkay/network/adx/AdxTYNativeAd;->a:Lcom/tkay/basead/d/h;

    iget-object v0, p0, Lcom/tkay/network/adx/AdxTYNativeAd;->b:Landroid/content/Context;

    iget-boolean v1, p0, Lcom/tkay/network/adx/AdxTYNativeAd;->c:Z

    iget-boolean v2, p0, Lcom/tkay/network/adx/AdxTYNativeAd;->d:Z

    new-instance v3, Lcom/tkay/network/adx/AdxTYNativeAd$2;

    invoke-direct {v3, p0}, Lcom/tkay/network/adx/AdxTYNativeAd$2;-><init>(Lcom/tkay/network/adx/AdxTYNativeAd;)V

    invoke-virtual {p1, v0, v1, v2, v3}, Lcom/tkay/basead/d/h;->a(Landroid/content/Context;ZZLcom/tkay/basead/ui/BaseMediaATView$a;)Landroid/view/View;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/network/adx/AdxTYNativeAd;->e:Landroid/view/View;

    .line 122
    :cond_0
    iget-object p1, p0, Lcom/tkay/network/adx/AdxTYNativeAd;->e:Landroid/view/View;

    return-object p1
.end method

.method public getCustomAdContainer()Landroid/view/ViewGroup;
    .locals 2

    .line 127
    iget-object v0, p0, Lcom/tkay/network/adx/AdxTYNativeAd;->a:Lcom/tkay/basead/d/h;

    if-eqz v0, :cond_0

    iget-boolean v0, p0, Lcom/tkay/network/adx/AdxTYNativeAd;->c:Z

    if-nez v0, :cond_0

    .line 128
    new-instance v0, Lcom/tkay/basead/ui/OwnNativeATView;

    iget-object v1, p0, Lcom/tkay/network/adx/AdxTYNativeAd;->b:Landroid/content/Context;

    invoke-direct {v0, v1}, Lcom/tkay/basead/ui/OwnNativeATView;-><init>(Landroid/content/Context;)V

    return-object v0

    :cond_0
    const/4 v0, 0x0

    return-object v0
.end method

.method public isNativeExpress()Z
    .locals 1

    .line 108
    iget-boolean v0, p0, Lcom/tkay/network/adx/AdxTYNativeAd;->c:Z

    if-nez v0, :cond_1

    iget-object v0, p0, Lcom/tkay/network/adx/AdxTYNativeAd;->a:Lcom/tkay/basead/d/h;

    invoke-virtual {v0}, Lcom/tkay/basead/d/h;->h()Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    return v0

    :cond_1
    :goto_0
    const/4 v0, 0x1

    return v0
.end method

.method public onPause()V
    .locals 1

    .line 156
    iget-object v0, p0, Lcom/tkay/network/adx/AdxTYNativeAd;->a:Lcom/tkay/basead/d/h;

    if-eqz v0, :cond_0

    .line 157
    invoke-virtual {v0}, Lcom/tkay/basead/d/h;->l()V

    :cond_0
    return-void
.end method

.method public onResume()V
    .locals 1

    .line 149
    iget-object v0, p0, Lcom/tkay/network/adx/AdxTYNativeAd;->a:Lcom/tkay/basead/d/h;

    if-eqz v0, :cond_0

    .line 150
    invoke-virtual {v0}, Lcom/tkay/basead/d/h;->k()V

    :cond_0
    return-void
.end method

.method public prepare(Landroid/view/View;Lcom/tkay/nativead/api/TYNativePrepareInfo;)V
    .locals 1

    .line 135
    iget-object v0, p0, Lcom/tkay/network/adx/AdxTYNativeAd;->a:Lcom/tkay/basead/d/h;

    invoke-virtual {v0}, Lcom/tkay/basead/d/h;->k()V

    .line 136
    iget-boolean v0, p0, Lcom/tkay/network/adx/AdxTYNativeAd;->c:Z

    if-nez v0, :cond_1

    iget-object v0, p0, Lcom/tkay/network/adx/AdxTYNativeAd;->a:Lcom/tkay/basead/d/h;

    if-eqz v0, :cond_1

    .line 138
    invoke-virtual {p2}, Lcom/tkay/nativead/api/TYNativePrepareInfo;->getClickViewList()Ljava/util/List;

    move-result-object p2

    if-eqz p2, :cond_0

    .line 139
    invoke-interface {p2}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_0

    .line 140
    iget-object v0, p0, Lcom/tkay/network/adx/AdxTYNativeAd;->a:Lcom/tkay/basead/d/h;

    invoke-virtual {v0, p1, p2}, Lcom/tkay/basead/d/h;->a(Landroid/view/View;Ljava/util/List;)V

    return-void

    .line 142
    :cond_0
    iget-object p2, p0, Lcom/tkay/network/adx/AdxTYNativeAd;->a:Lcom/tkay/basead/d/h;

    invoke-virtual {p2, p1}, Lcom/tkay/basead/d/h;->a(Landroid/view/View;)V

    :cond_1
    return-void
.end method
