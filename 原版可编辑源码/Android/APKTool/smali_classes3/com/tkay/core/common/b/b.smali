.class public Lcom/tkay/core/common/b/b;
.super Ljava/lang/Object;


# instance fields
.field a:Ljava/lang/ref/WeakReference;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/lang/ref/WeakReference<",
            "Lcom/tkay/core/api/TYAdSourceStatusListener;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 19
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private a()Lcom/tkay/core/api/TYAdSourceStatusListener;
    .locals 3

    .line 31
    iget-object v0, p0, Lcom/tkay/core/common/b/b;->a:Ljava/lang/ref/WeakReference;

    if-eqz v0, :cond_1

    .line 32
    invoke-virtual {v0}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/core/api/TYAdSourceStatusListener;

    if-nez v0, :cond_0

    const-string v1, "tkay"

    const-string v2, "TYAdSourceStatusListener had been released."

    .line 34
    invoke-static {v1, v2}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    :cond_0
    return-object v0

    :cond_1
    const/4 v0, 0x0

    return-object v0
.end method

.method static synthetic a(Lcom/tkay/core/common/b/b;)Lcom/tkay/core/api/TYAdSourceStatusListener;
    .locals 2

    .line 1031
    iget-object p0, p0, Lcom/tkay/core/common/b/b;->a:Ljava/lang/ref/WeakReference;

    if-eqz p0, :cond_1

    .line 1032
    invoke-virtual {p0}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Lcom/tkay/core/api/TYAdSourceStatusListener;

    if-nez p0, :cond_0

    const-string v0, "tkay"

    const-string v1, "TYAdSourceStatusListener had been released."

    .line 1034
    invoke-static {v0, v1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    :cond_0
    return-object p0

    :cond_1
    const/4 p0, 0x0

    return-object p0
.end method


# virtual methods
.method public final a(Lcom/tkay/core/api/TYAdSourceStatusListener;)V
    .locals 1

    if-nez p1, :cond_0

    return-void

    .line 27
    :cond_0
    new-instance v0, Ljava/lang/ref/WeakReference;

    invoke-direct {v0, p1}, Ljava/lang/ref/WeakReference;-><init>(Ljava/lang/Object;)V

    iput-object v0, p0, Lcom/tkay/core/common/b/b;->a:Ljava/lang/ref/WeakReference;

    return-void
.end method

.method public final a(Lcom/tkay/core/common/f/d;)V
    .locals 2

    const/4 v0, 0x0

    .line 42
    invoke-static {p1, v0}, Lcom/tkay/core/common/b/i;->a(Lcom/tkay/core/common/f/d;Lcom/tkay/core/common/b/n;)Lcom/tkay/core/common/b/i;

    move-result-object p1

    .line 43
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    new-instance v1, Lcom/tkay/core/common/b/b$1;

    invoke-direct {v1, p0, p1}, Lcom/tkay/core/common/b/b$1;-><init>(Lcom/tkay/core/common/b/b;Lcom/tkay/core/api/TYAdInfo;)V

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;)V

    return-void
.end method

.method public final a(Lcom/tkay/core/common/f/d;Lcom/tkay/core/api/AdError;)V
    .locals 2

    const/4 v0, 0x0

    .line 68
    invoke-static {p1, v0}, Lcom/tkay/core/common/b/i;->a(Lcom/tkay/core/common/f/d;Lcom/tkay/core/common/b/n;)Lcom/tkay/core/common/b/i;

    move-result-object p1

    .line 69
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    new-instance v1, Lcom/tkay/core/common/b/b$3;

    invoke-direct {v1, p0, p1, p2}, Lcom/tkay/core/common/b/b$3;-><init>(Lcom/tkay/core/common/b/b;Lcom/tkay/core/api/TYAdInfo;Lcom/tkay/core/api/AdError;)V

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;)V

    return-void
.end method

.method public final b(Lcom/tkay/core/common/f/d;)V
    .locals 2

    const/4 v0, 0x0

    .line 55
    invoke-static {p1, v0}, Lcom/tkay/core/common/b/i;->a(Lcom/tkay/core/common/f/d;Lcom/tkay/core/common/b/n;)Lcom/tkay/core/common/b/i;

    move-result-object p1

    .line 56
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    new-instance v1, Lcom/tkay/core/common/b/b$2;

    invoke-direct {v1, p0, p1}, Lcom/tkay/core/common/b/b$2;-><init>(Lcom/tkay/core/common/b/b;Lcom/tkay/core/api/TYAdInfo;)V

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;)V

    return-void
.end method

.method public final b(Lcom/tkay/core/common/f/d;Lcom/tkay/core/api/AdError;)V
    .locals 2

    const/4 v0, 0x0

    .line 107
    invoke-static {p1, v0}, Lcom/tkay/core/common/b/i;->a(Lcom/tkay/core/common/f/d;Lcom/tkay/core/common/b/n;)Lcom/tkay/core/common/b/i;

    move-result-object p1

    .line 108
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    new-instance v1, Lcom/tkay/core/common/b/b$6;

    invoke-direct {v1, p0, p1, p2}, Lcom/tkay/core/common/b/b$6;-><init>(Lcom/tkay/core/common/b/b;Lcom/tkay/core/api/TYAdInfo;Lcom/tkay/core/api/AdError;)V

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;)V

    return-void
.end method

.method public final c(Lcom/tkay/core/common/f/d;)V
    .locals 2

    const/4 v0, 0x0

    .line 81
    invoke-static {p1, v0}, Lcom/tkay/core/common/b/i;->a(Lcom/tkay/core/common/f/d;Lcom/tkay/core/common/b/n;)Lcom/tkay/core/common/b/i;

    move-result-object p1

    .line 82
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    new-instance v1, Lcom/tkay/core/common/b/b$4;

    invoke-direct {v1, p0, p1}, Lcom/tkay/core/common/b/b$4;-><init>(Lcom/tkay/core/common/b/b;Lcom/tkay/core/api/TYAdInfo;)V

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;)V

    return-void
.end method

.method public final d(Lcom/tkay/core/common/f/d;)V
    .locals 2

    const/4 v0, 0x0

    .line 94
    invoke-static {p1, v0}, Lcom/tkay/core/common/b/i;->a(Lcom/tkay/core/common/f/d;Lcom/tkay/core/common/b/n;)Lcom/tkay/core/common/b/i;

    move-result-object p1

    .line 95
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    new-instance v1, Lcom/tkay/core/common/b/b$5;

    invoke-direct {v1, p0, p1}, Lcom/tkay/core/common/b/b$5;-><init>(Lcom/tkay/core/common/b/b;Lcom/tkay/core/api/TYAdInfo;)V

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;)V

    return-void
.end method
