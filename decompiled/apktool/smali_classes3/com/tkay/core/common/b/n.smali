.class public abstract Lcom/tkay/core/common/b/n;
.super Ljava/lang/Object;


# instance fields
.field isRefresh:Z

.field protected mActivityRef:Ljava/lang/ref/WeakReference;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/lang/ref/WeakReference<",
            "Landroid/app/Activity;",
            ">;"
        }
    .end annotation
.end field

.field private mTrackingInfo:Lcom/tkay/core/common/f/d;

.field private mUnitGroupInfo:Lcom/tkay/core/common/f/aj;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 22
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final getTrackingInfo()Lcom/tkay/core/common/f/d;
    .locals 1

    .line 34
    iget-object v0, p0, Lcom/tkay/core/common/b/n;->mTrackingInfo:Lcom/tkay/core/common/f/d;

    return-object v0
.end method

.method public final getUnitGroupInfo()Lcom/tkay/core/common/f/aj;
    .locals 1

    .line 38
    iget-object v0, p0, Lcom/tkay/core/common/b/n;->mUnitGroupInfo:Lcom/tkay/core/common/f/aj;

    return-object v0
.end method

.method public final isRefresh()Z
    .locals 1

    .line 50
    iget-boolean v0, p0, Lcom/tkay/core/common/b/n;->isRefresh:Z

    return v0
.end method

.method public final postOnMainThread(Ljava/lang/Runnable;)V
    .locals 1

    .line 58
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;)V

    return-void
.end method

.method public final postOnMainThreadDelayed(Ljava/lang/Runnable;J)V
    .locals 1

    .line 62
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0, p1, p2, p3}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;J)V

    return-void
.end method

.method public final refreshActivityContext(Landroid/app/Activity;)V
    .locals 1

    .line 54
    new-instance v0, Ljava/lang/ref/WeakReference;

    invoke-direct {v0, p1}, Ljava/lang/ref/WeakReference;-><init>(Ljava/lang/Object;)V

    iput-object v0, p0, Lcom/tkay/core/common/b/n;->mActivityRef:Ljava/lang/ref/WeakReference;

    return-void
.end method

.method public final runOnNetworkRequestThread(Ljava/lang/Runnable;)V
    .locals 2

    .line 66
    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v0

    invoke-static {}, Landroid/os/Looper;->myLooper()Landroid/os/Looper;

    move-result-object v1

    if-ne v0, v1, :cond_0

    .line 67
    invoke-static {}, Lcom/tkay/core/common/l/b/a;->a()Lcom/tkay/core/common/l/b/a;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/tkay/core/common/l/b/a;->b(Ljava/lang/Runnable;)V

    return-void

    .line 69
    :cond_0
    invoke-interface {p1}, Ljava/lang/Runnable;->run()V

    return-void
.end method

.method public final setRefresh(Z)V
    .locals 0

    .line 46
    iput-boolean p1, p0, Lcom/tkay/core/common/b/n;->isRefresh:Z

    return-void
.end method

.method public final setTrackingInfo(Lcom/tkay/core/common/f/d;)V
    .locals 0

    .line 30
    iput-object p1, p0, Lcom/tkay/core/common/b/n;->mTrackingInfo:Lcom/tkay/core/common/f/d;

    return-void
.end method

.method public final setUnitGroupInfo(Lcom/tkay/core/common/f/aj;)V
    .locals 0

    .line 42
    iput-object p1, p0, Lcom/tkay/core/common/b/n;->mUnitGroupInfo:Lcom/tkay/core/common/f/aj;

    return-void
.end method
