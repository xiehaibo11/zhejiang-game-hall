.class public final Lcom/tkay/banner/a/b;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;


# instance fields
.field a:Ljava/lang/ref/WeakReference;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/lang/ref/WeakReference<",
            "Lcom/tkay/banner/a/e;",
            ">;"
        }
    .end annotation
.end field

.field b:Lcom/tkay/banner/unitgroup/api/CustomBannerAdapter;

.field c:Z


# direct methods
.method public constructor <init>(Lcom/tkay/banner/a/e;Lcom/tkay/banner/unitgroup/api/CustomBannerAdapter;Z)V
    .locals 1

    .line 31
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    .line 29
    iput-boolean v0, p0, Lcom/tkay/banner/a/b;->c:Z

    .line 32
    new-instance v0, Ljava/lang/ref/WeakReference;

    invoke-direct {v0, p1}, Ljava/lang/ref/WeakReference;-><init>(Ljava/lang/Object;)V

    iput-object v0, p0, Lcom/tkay/banner/a/b;->a:Ljava/lang/ref/WeakReference;

    .line 33
    iput-object p2, p0, Lcom/tkay/banner/a/b;->b:Lcom/tkay/banner/unitgroup/api/CustomBannerAdapter;

    .line 34
    iput-boolean p3, p0, Lcom/tkay/banner/a/b;->c:Z

    return-void
.end method


# virtual methods
.method public final onBannerAdClicked()V
    .locals 4

    .line 75
    iget-object v0, p0, Lcom/tkay/banner/a/b;->b:Lcom/tkay/banner/unitgroup/api/CustomBannerAdapter;

    if-eqz v0, :cond_0

    .line 76
    invoke-virtual {v0}, Lcom/tkay/banner/unitgroup/api/CustomBannerAdapter;->getTrackingInfo()Lcom/tkay/core/common/f/d;

    move-result-object v0

    .line 78
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Lcom/tkay/core/common/k/a;->a(Landroid/content/Context;)Lcom/tkay/core/common/k/a;

    move-result-object v1

    const/4 v2, 0x6

    invoke-virtual {v1, v2, v0}, Lcom/tkay/core/common/k/a;->a(ILcom/tkay/core/common/f/ai;)V

    .line 81
    sget-object v1, Lcom/tkay/core/common/b/f$i;->d:Ljava/lang/String;

    sget-object v2, Lcom/tkay/core/common/b/f$i;->l:Ljava/lang/String;

    const-string v3, ""

    invoke-static {v0, v1, v2, v3}, Lcom/tkay/core/common/l/g;->a(Lcom/tkay/core/common/f/d;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    .line 82
    iget-object v0, p0, Lcom/tkay/banner/a/b;->a:Ljava/lang/ref/WeakReference;

    invoke-virtual {v0}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/banner/a/e;

    if-eqz v0, :cond_0

    .line 84
    iget-object v1, p0, Lcom/tkay/banner/a/b;->b:Lcom/tkay/banner/unitgroup/api/CustomBannerAdapter;

    invoke-interface {v0, v1}, Lcom/tkay/banner/a/e;->onBannerClicked(Lcom/tkay/banner/unitgroup/api/CustomBannerAdapter;)V

    :cond_0
    return-void
.end method

.method public final onBannerAdClose()V
    .locals 4

    .line 39
    iget-object v0, p0, Lcom/tkay/banner/a/b;->b:Lcom/tkay/banner/unitgroup/api/CustomBannerAdapter;

    if-eqz v0, :cond_1

    .line 40
    iget-object v0, p0, Lcom/tkay/banner/a/b;->a:Ljava/lang/ref/WeakReference;

    invoke-virtual {v0}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/banner/a/e;

    if-eqz v0, :cond_0

    .line 42
    iget-object v1, p0, Lcom/tkay/banner/a/b;->b:Lcom/tkay/banner/unitgroup/api/CustomBannerAdapter;

    invoke-interface {v0, v1}, Lcom/tkay/banner/a/e;->onBannerClose(Lcom/tkay/banner/unitgroup/api/CustomBannerAdapter;)V

    .line 44
    :cond_0
    iget-object v0, p0, Lcom/tkay/banner/a/b;->b:Lcom/tkay/banner/unitgroup/api/CustomBannerAdapter;

    invoke-virtual {v0}, Lcom/tkay/banner/unitgroup/api/CustomBannerAdapter;->getTrackingInfo()Lcom/tkay/core/common/f/d;

    move-result-object v0

    .line 46
    sget-object v1, Lcom/tkay/core/common/b/f$i;->e:Ljava/lang/String;

    sget-object v2, Lcom/tkay/core/common/b/f$i;->l:Ljava/lang/String;

    const-string v3, ""

    invoke-static {v0, v1, v2, v3}, Lcom/tkay/core/common/l/g;->a(Lcom/tkay/core/common/f/d;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    if-eqz v0, :cond_1

    const/4 v1, 0x0

    .line 49
    invoke-static {v0, v1}, Lcom/tkay/core/common/k/c;->a(Lcom/tkay/core/common/f/d;Z)V

    :cond_1
    return-void
.end method

.method public final onBannerAdShow()V
    .locals 4

    .line 58
    iget-object v0, p0, Lcom/tkay/banner/a/b;->b:Lcom/tkay/banner/unitgroup/api/CustomBannerAdapter;

    if-eqz v0, :cond_1

    .line 59
    iget-object v0, p0, Lcom/tkay/banner/a/b;->a:Ljava/lang/ref/WeakReference;

    invoke-virtual {v0}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/banner/a/e;

    if-eqz v0, :cond_0

    .line 61
    iget-object v1, p0, Lcom/tkay/banner/a/b;->b:Lcom/tkay/banner/unitgroup/api/CustomBannerAdapter;

    iget-boolean v2, p0, Lcom/tkay/banner/a/b;->c:Z

    invoke-interface {v0, v1, v2}, Lcom/tkay/banner/a/e;->onBannerShow(Lcom/tkay/banner/unitgroup/api/CustomBannerAdapter;Z)V

    .line 63
    :cond_0
    iget-object v0, p0, Lcom/tkay/banner/a/b;->b:Lcom/tkay/banner/unitgroup/api/CustomBannerAdapter;

    invoke-virtual {v0}, Lcom/tkay/banner/unitgroup/api/CustomBannerAdapter;->getTrackingInfo()Lcom/tkay/core/common/f/d;

    move-result-object v0

    .line 65
    sget-object v1, Lcom/tkay/core/common/b/f$i;->c:Ljava/lang/String;

    sget-object v2, Lcom/tkay/core/common/b/f$i;->l:Ljava/lang/String;

    const-string v3, ""

    invoke-static {v0, v1, v2, v3}, Lcom/tkay/core/common/l/g;->a(Lcom/tkay/core/common/f/d;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    .line 66
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Lcom/tkay/core/common/k/a;->a(Landroid/content/Context;)Lcom/tkay/core/common/k/a;

    move-result-object v1

    const/4 v2, 0x4

    iget-object v3, p0, Lcom/tkay/banner/a/b;->b:Lcom/tkay/banner/unitgroup/api/CustomBannerAdapter;

    invoke-virtual {v3}, Lcom/tkay/banner/unitgroup/api/CustomBannerAdapter;->getUnitGroupInfo()Lcom/tkay/core/common/f/aj;

    move-result-object v3

    invoke-virtual {v1, v2, v0, v3}, Lcom/tkay/core/common/k/a;->a(ILcom/tkay/core/common/f/ai;Lcom/tkay/core/common/f/aj;)V

    :cond_1
    return-void
.end method

.method public final onDeeplinkCallback(Z)V
    .locals 3

    .line 93
    iget-object v0, p0, Lcom/tkay/banner/a/b;->a:Ljava/lang/ref/WeakReference;

    invoke-virtual {v0}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/banner/a/e;

    if-eqz v0, :cond_0

    .line 95
    iget-object v1, p0, Lcom/tkay/banner/a/b;->b:Lcom/tkay/banner/unitgroup/api/CustomBannerAdapter;

    invoke-interface {v0, v1, p1}, Lcom/tkay/banner/a/e;->onDeeplinkCallback(Lcom/tkay/banner/unitgroup/api/CustomBannerAdapter;Z)V

    .line 97
    :cond_0
    iget-object v0, p0, Lcom/tkay/banner/a/b;->b:Lcom/tkay/banner/unitgroup/api/CustomBannerAdapter;

    if-eqz v0, :cond_2

    .line 98
    invoke-virtual {v0}, Lcom/tkay/banner/unitgroup/api/CustomBannerAdapter;->getTrackingInfo()Lcom/tkay/core/common/f/d;

    move-result-object v0

    if-eqz p1, :cond_1

    .line 99
    sget-object p1, Lcom/tkay/core/common/b/f$i;->l:Ljava/lang/String;

    goto :goto_0

    :cond_1
    sget-object p1, Lcom/tkay/core/common/b/f$i;->m:Ljava/lang/String;

    .line 100
    :goto_0
    sget-object v1, Lcom/tkay/core/common/b/f$i;->i:Ljava/lang/String;

    const-string v2, ""

    invoke-static {v0, v1, p1, v2}, Lcom/tkay/core/common/l/g;->a(Lcom/tkay/core/common/f/d;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    :cond_2
    return-void
.end method

.method public final onDownloadConfirm(Landroid/content/Context;Lcom/tkay/core/api/TYNetworkConfirmInfo;)V
    .locals 2

    .line 106
    iget-object v0, p0, Lcom/tkay/banner/a/b;->a:Ljava/lang/ref/WeakReference;

    invoke-virtual {v0}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/banner/a/e;

    if-eqz v0, :cond_0

    .line 108
    iget-object v1, p0, Lcom/tkay/banner/a/b;->b:Lcom/tkay/banner/unitgroup/api/CustomBannerAdapter;

    invoke-interface {v0, p1, v1, p2}, Lcom/tkay/banner/a/e;->onDownloadConfirm(Landroid/content/Context;Lcom/tkay/banner/unitgroup/api/CustomBannerAdapter;Lcom/tkay/core/api/TYNetworkConfirmInfo;)V

    .line 110
    :cond_0
    iget-object p1, p0, Lcom/tkay/banner/a/b;->b:Lcom/tkay/banner/unitgroup/api/CustomBannerAdapter;

    if-eqz p1, :cond_1

    .line 111
    invoke-virtual {p1}, Lcom/tkay/banner/unitgroup/api/CustomBannerAdapter;->getTrackingInfo()Lcom/tkay/core/common/f/d;

    move-result-object p1

    .line 112
    sget-object p2, Lcom/tkay/core/common/b/f$i;->j:Ljava/lang/String;

    sget-object v0, Lcom/tkay/core/common/b/f$i;->l:Ljava/lang/String;

    const-string v1, ""

    invoke-static {p1, p2, v0, v1}, Lcom/tkay/core/common/l/g;->a(Lcom/tkay/core/common/f/d;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    :cond_1
    return-void
.end method
