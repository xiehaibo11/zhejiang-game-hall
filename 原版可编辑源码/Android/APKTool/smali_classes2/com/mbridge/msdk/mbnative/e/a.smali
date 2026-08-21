.class public Lcom/mbridge/msdk/mbnative/e/a;
.super Ljava/lang/Object;
.source "NativeProvider.java"


# instance fields
.field private a:Lcom/mbridge/msdk/mbnative/controller/NativeController;

.field private b:Landroid/os/Handler;

.field private c:Lcom/mbridge/msdk/mbnative/c/a;

.field private d:Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;


# direct methods
.method public constructor <init>()V
    .locals 2

    .line 47
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 34
    new-instance v0, Landroid/os/Handler;

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v1

    invoke-direct {v0, v1}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    iput-object v0, p0, Lcom/mbridge/msdk/mbnative/e/a;->b:Landroid/os/Handler;

    return-void
.end method

.method public constructor <init>(Lcom/mbridge/msdk/mbnative/c/a;Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;)V
    .locals 2

    .line 50
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 34
    new-instance v0, Landroid/os/Handler;

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v1

    invoke-direct {v0, v1}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    iput-object v0, p0, Lcom/mbridge/msdk/mbnative/e/a;->b:Landroid/os/Handler;

    .line 51
    iput-object p1, p0, Lcom/mbridge/msdk/mbnative/e/a;->c:Lcom/mbridge/msdk/mbnative/c/a;

    .line 52
    iput-object p2, p0, Lcom/mbridge/msdk/mbnative/e/a;->d:Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;

    return-void
.end method

.method private a(ILjava/lang/String;)V
    .locals 1

    .line 144
    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/e/a;->a:Lcom/mbridge/msdk/mbnative/controller/NativeController;

    if-eqz v0, :cond_3

    .line 146
    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/e/a;->c:Lcom/mbridge/msdk/mbnative/c/a;

    if-eqz v0, :cond_1

    invoke-virtual {v0}, Lcom/mbridge/msdk/mbnative/c/a;->a()Z

    move-result v0

    if-eqz v0, :cond_1

    .line 147
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/ae;->b()Z

    move-result p1

    if-eqz p1, :cond_0

    .line 149
    invoke-direct {p0}, Lcom/mbridge/msdk/mbnative/e/a;->f()V

    goto :goto_0

    .line 151
    :cond_0
    iget-object p1, p0, Lcom/mbridge/msdk/mbnative/e/a;->b:Landroid/os/Handler;

    new-instance p2, Lcom/mbridge/msdk/mbnative/e/a$1;

    invoke-direct {p2, p0}, Lcom/mbridge/msdk/mbnative/e/a$1;-><init>(Lcom/mbridge/msdk/mbnative/e/a;)V

    invoke-virtual {p1, p2}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    goto :goto_0

    .line 159
    :cond_1
    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/e/a;->c:Lcom/mbridge/msdk/mbnative/c/a;

    if-eqz v0, :cond_2

    .line 160
    invoke-virtual {v0}, Lcom/mbridge/msdk/mbnative/c/a;->b()V

    .line 162
    :cond_2
    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/e/a;->a:Lcom/mbridge/msdk/mbnative/controller/NativeController;

    invoke-virtual {v0, p1, p2}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->a(ILjava/lang/String;)V

    :cond_3
    :goto_0
    return-void
.end method

.method static synthetic a(Lcom/mbridge/msdk/mbnative/e/a;)V
    .locals 0

    .line 28
    invoke-direct {p0}, Lcom/mbridge/msdk/mbnative/e/a;->f()V

    return-void
.end method

.method private f()V
    .locals 2

    .line 139
    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/e/a;->c:Lcom/mbridge/msdk/mbnative/c/a;

    const-string v1, "current request is loading"

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/mbnative/c/a;->onAdLoadError(Ljava/lang/String;)V

    .line 140
    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/e/a;->c:Lcom/mbridge/msdk/mbnative/c/a;

    invoke-virtual {v0}, Lcom/mbridge/msdk/mbnative/c/a;->b()V

    return-void
.end method

.method public static preload(Ljava/util/Map;ILcom/mbridge/msdk/out/AdMobClickListener;)V
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;I",
            "Lcom/mbridge/msdk/out/AdMobClickListener;",
            ")V"
        }
    .end annotation

    const-string v0, "NativeProvider"

    const-string v1, "native provider preload"

    .line 133
    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 134
    new-instance v0, Lcom/mbridge/msdk/mbnative/controller/b;

    invoke-direct {v0}, Lcom/mbridge/msdk/mbnative/controller/b;-><init>()V

    invoke-virtual {v0, p0, p1, p2}, Lcom/mbridge/msdk/mbnative/controller/b;->a(Ljava/util/Map;ILcom/mbridge/msdk/out/AdMobClickListener;)V

    return-void
.end method


# virtual methods
.method public final a()V
    .locals 2

    const/4 v0, 0x0

    const-string v1, ""

    .line 60
    invoke-direct {p0, v0, v1}, Lcom/mbridge/msdk/mbnative/e/a;->a(ILjava/lang/String;)V

    return-void
.end method

.method public final a(Landroid/content/Context;Landroid/content/res/Resources;Ljava/util/Map;)V
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/content/Context;",
            "Landroid/content/res/Resources;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;)V"
        }
    .end annotation

    .line 56
    new-instance p2, Lcom/mbridge/msdk/mbnative/controller/NativeController;

    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/e/a;->c:Lcom/mbridge/msdk/mbnative/c/a;

    iget-object v1, p0, Lcom/mbridge/msdk/mbnative/e/a;->d:Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;

    invoke-direct {p2, v0, v1, p3, p1}, Lcom/mbridge/msdk/mbnative/controller/NativeController;-><init>(Lcom/mbridge/msdk/mbnative/c/a;Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;Ljava/util/Map;Landroid/content/Context;)V

    iput-object p2, p0, Lcom/mbridge/msdk/mbnative/e/a;->a:Lcom/mbridge/msdk/mbnative/controller/NativeController;

    return-void
.end method

.method public final a(Landroid/view/View;Lcom/mbridge/msdk/out/Campaign;)V
    .locals 2

    const-string v0, "NativeProvider"

    const-string v1, "native provider registerView"

    .line 105
    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 106
    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/e/a;->a:Lcom/mbridge/msdk/mbnative/controller/NativeController;

    if-nez v0, :cond_0

    return-void

    .line 109
    :cond_0
    invoke-virtual {v0, p2, p1}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->a(Lcom/mbridge/msdk/out/Campaign;Landroid/view/View;)V

    return-void
.end method

.method public final a(Landroid/view/View;Ljava/util/List;Lcom/mbridge/msdk/out/Campaign;)V
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/view/View;",
            "Ljava/util/List<",
            "Landroid/view/View;",
            ">;",
            "Lcom/mbridge/msdk/out/Campaign;",
            ")V"
        }
    .end annotation

    const-string v0, "NativeProvider"

    const-string v1, "native provider registerView"

    .line 92
    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 93
    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/e/a;->a:Lcom/mbridge/msdk/mbnative/controller/NativeController;

    if-nez v0, :cond_0

    return-void

    .line 96
    :cond_0
    invoke-virtual {v0, p3, p1, p2}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->a(Lcom/mbridge/msdk/out/Campaign;Landroid/view/View;Ljava/util/List;)V

    return-void
.end method

.method public final a(Lcom/mbridge/msdk/mbnative/c/a;)V
    .locals 0

    .line 39
    iput-object p1, p0, Lcom/mbridge/msdk/mbnative/e/a;->c:Lcom/mbridge/msdk/mbnative/c/a;

    return-void
.end method

.method public final a(Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;)V
    .locals 0

    .line 45
    iput-object p1, p0, Lcom/mbridge/msdk/mbnative/e/a;->d:Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;

    return-void
.end method

.method public final a(Ljava/lang/String;)V
    .locals 1

    const/4 v0, 0x0

    .line 64
    invoke-direct {p0, v0, p1}, Lcom/mbridge/msdk/mbnative/e/a;->a(ILjava/lang/String;)V

    return-void
.end method

.method public final b()V
    .locals 2

    const/4 v0, 0x1

    const-string v1, ""

    .line 68
    invoke-direct {p0, v0, v1}, Lcom/mbridge/msdk/mbnative/e/a;->a(ILjava/lang/String;)V

    return-void
.end method

.method public final b(Landroid/view/View;Lcom/mbridge/msdk/out/Campaign;)V
    .locals 2

    const-string v0, "NativeProvider"

    const-string v1, "native provider unregisterView"

    .line 113
    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 114
    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/e/a;->a:Lcom/mbridge/msdk/mbnative/controller/NativeController;

    if-nez v0, :cond_0

    return-void

    .line 117
    :cond_0
    invoke-virtual {v0, p2, p1}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->b(Lcom/mbridge/msdk/out/Campaign;Landroid/view/View;)V

    return-void
.end method

.method public final b(Landroid/view/View;Ljava/util/List;Lcom/mbridge/msdk/out/Campaign;)V
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/view/View;",
            "Ljava/util/List<",
            "Landroid/view/View;",
            ">;",
            "Lcom/mbridge/msdk/out/Campaign;",
            ")V"
        }
    .end annotation

    const-string v0, "NativeProvider"

    const-string v1, "native provider unregisterView"

    .line 121
    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 122
    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/e/a;->a:Lcom/mbridge/msdk/mbnative/controller/NativeController;

    if-nez v0, :cond_0

    return-void

    .line 125
    :cond_0
    invoke-virtual {v0, p3, p1, p2}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->b(Lcom/mbridge/msdk/out/Campaign;Landroid/view/View;Ljava/util/List;)V

    return-void
.end method

.method public final c()V
    .locals 2

    .line 3406
    :try_start_0
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/x;->a()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    const-string v0, "NativeProvider"

    const-string v1, "clear cache failed"

    .line 75
    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method public final d()V
    .locals 2

    .line 80
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/e/a;->a:Lcom/mbridge/msdk/mbnative/controller/NativeController;

    invoke-virtual {v0}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->a()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    const-string v0, "NativeProvider"

    const-string v1, "release failed"

    .line 82
    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method public final e()Ljava/lang/String;
    .locals 1

    .line 168
    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/e/a;->a:Lcom/mbridge/msdk/mbnative/controller/NativeController;

    if-eqz v0, :cond_0

    .line 169
    invoke-virtual {v0}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->b()Ljava/lang/String;

    move-result-object v0

    return-object v0

    :cond_0
    const-string v0, ""

    return-object v0
.end method
