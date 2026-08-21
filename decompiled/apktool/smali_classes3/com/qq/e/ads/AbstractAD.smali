.class public abstract Lcom/qq/e/ads/AbstractAD;
.super Ljava/lang/Object;
.source ""


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "<T:",
        "Ljava/lang/Object;",
        ">",
        "Ljava/lang/Object;"
    }
.end annotation


# instance fields
.field protected a:Ljava/lang/Object;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "TT;"
        }
    .end annotation
.end field

.field private final b:Landroid/os/Handler;

.field private volatile c:Z

.field private volatile d:Z

.field private volatile e:Z


# direct methods
.method public constructor <init>()V
    .locals 2

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/qq/e/ads/AbstractAD;->c:Z

    iput-boolean v0, p0, Lcom/qq/e/ads/AbstractAD;->d:Z

    new-instance v0, Landroid/os/Handler;

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v1

    invoke-direct {v0, v1}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    iput-object v0, p0, Lcom/qq/e/ads/AbstractAD;->b:Landroid/os/Handler;

    return-void
.end method

.method static synthetic a(Lcom/qq/e/ads/AbstractAD;)Landroid/os/Handler;
    .locals 0

    iget-object p0, p0, Lcom/qq/e/ads/AbstractAD;->b:Landroid/os/Handler;

    return-object p0
.end method

.method static synthetic a(Lcom/qq/e/ads/AbstractAD;Z)Z
    .locals 0

    iput-boolean p1, p0, Lcom/qq/e/ads/AbstractAD;->c:Z

    return p1
.end method

.method private b(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V
    .locals 8

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/qq/e/ads/AbstractAD;->e:Z

    invoke-static {}, Lcom/qq/e/comm/managers/b;->b()Lcom/qq/e/comm/managers/b;

    move-result-object v1

    invoke-virtual {v1}, Lcom/qq/e/comm/managers/b;->d()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-static {}, Lcom/qq/e/comm/managers/b;->b()Lcom/qq/e/comm/managers/b;

    move-result-object v1

    invoke-virtual {v1}, Lcom/qq/e/comm/managers/b;->a()Ljava/lang/String;

    move-result-object v5

    .line 1
    invoke-static {p1}, Lcom/qq/e/comm/a;->a(Landroid/content/Context;)Z

    move-result v1

    if-nez v1, :cond_0

    const-string p1, "Manifest\u6587\u4ef6\u4e2dActivity/Service/Permission\u7684\u58f0\u660e\u6709\u95ee\u9898\u6216\u8005Permission\u6743\u9650\u672a\u6388\u4e88"

    invoke-static {p1}, Lcom/qq/e/comm/util/GDTLogger;->e(Ljava/lang/String;)V

    const/16 p1, 0xfa2

    invoke-virtual {p0, p1}, Lcom/qq/e/ads/AbstractAD;->a(I)V

    goto :goto_0

    :cond_0
    iput-boolean v0, p0, Lcom/qq/e/ads/AbstractAD;->d:Z

    sget-object v0, Lcom/qq/e/comm/managers/b;->g:Ljava/util/concurrent/ExecutorService;

    new-instance v1, Lcom/qq/e/ads/AbstractAD$1;

    move-object v2, v1

    move-object v3, p0

    move-object v4, p1

    move-object v6, p2

    move-object v7, p3

    invoke-direct/range {v2 .. v7}, Lcom/qq/e/ads/AbstractAD$1;-><init>(Lcom/qq/e/ads/AbstractAD;Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    invoke-interface {v0, v1}, Ljava/util/concurrent/ExecutorService;->execute(Ljava/lang/Runnable;)V

    goto :goto_0

    :cond_1
    const/16 p1, 0x7d3

    .line 2
    invoke-virtual {p0, p1}, Lcom/qq/e/ads/AbstractAD;->a(I)V

    :goto_0
    return-void
.end method


# virtual methods
.method protected abstract a(Landroid/content/Context;Lcom/qq/e/comm/pi/POFactory;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/Object;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/content/Context;",
            "Lcom/qq/e/comm/pi/POFactory;",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ")TT;"
        }
    .end annotation
.end method

.method protected final a(I)V
    .locals 2

    invoke-static {}, Ljava/lang/Thread;->currentThread()Ljava/lang/Thread;

    move-result-object v0

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v1

    invoke-virtual {v1}, Landroid/os/Looper;->getThread()Ljava/lang/Thread;

    move-result-object v1

    if-ne v0, v1, :cond_0

    invoke-virtual {p0, p1}, Lcom/qq/e/ads/AbstractAD;->b(I)V

    goto :goto_0

    :cond_0
    iget-object v0, p0, Lcom/qq/e/ads/AbstractAD;->b:Landroid/os/Handler;

    new-instance v1, Lcom/qq/e/ads/AbstractAD$2;

    invoke-direct {v1, p0, p1}, Lcom/qq/e/ads/AbstractAD$2;-><init>(Lcom/qq/e/ads/AbstractAD;I)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    :goto_0
    return-void
.end method

.method protected final a(Landroid/content/Context;Ljava/lang/String;)V
    .locals 1

    if-eqz p1, :cond_1

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_0

    :cond_0
    const-string v0, ""

    invoke-direct {p0, p1, p2, v0}, Lcom/qq/e/ads/AbstractAD;->b(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V

    return-void

    :cond_1
    :goto_0
    const-string p1, "\u521d\u59cb\u5316\u9519\u8bef\uff1a\u53c2\u6570\u9519\u8befcontext\u6216posId\u4e3a\u7a7a"

    invoke-static {p1}, Lcom/qq/e/comm/util/GDTLogger;->e(Ljava/lang/String;)V

    const/16 p1, 0x7d1

    invoke-virtual {p0, p1}, Lcom/qq/e/ads/AbstractAD;->a(I)V

    return-void
.end method

.method protected final a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    if-eqz p1, :cond_1

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    invoke-static {p3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_0

    :cond_0
    invoke-direct {p0, p1, p2, p3}, Lcom/qq/e/ads/AbstractAD;->b(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V

    return-void

    :cond_1
    :goto_0
    const-string p1, "\u521d\u59cb\u5316\u9519\u8bef\uff1a\u53c2\u6570\u9519\u8bef\uff0ccontext\u3001posId\u3001token \u4e0d\u53ef\u4e3a\u7a7a"

    invoke-static {p1}, Lcom/qq/e/comm/util/GDTLogger;->e(Ljava/lang/String;)V

    const/16 p1, 0x7d1

    invoke-virtual {p0, p1}, Lcom/qq/e/ads/AbstractAD;->a(I)V

    return-void
.end method

.method protected abstract a(Ljava/lang/Object;)V
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(TT;)V"
        }
    .end annotation
.end method

.method protected final a(Ljava/lang/String;)V
    .locals 2

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, ":\u8c03\u7528\u65b9\u6cd5 "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, "\u5f02\u5e38\uff0c\u5e7f\u544a\u5b9e\u4f8b\u8fd8\u672a\u521d\u59cb\u5316"

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/qq/e/comm/util/GDTLogger;->e(Ljava/lang/String;)V

    return-void
.end method

.method protected final a()Z
    .locals 1

    iget-boolean v0, p0, Lcom/qq/e/ads/AbstractAD;->e:Z

    if-eqz v0, :cond_0

    iget-boolean v0, p0, Lcom/qq/e/ads/AbstractAD;->d:Z

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return v0
.end method

.method protected abstract b(I)V
.end method

.method protected final b()Z
    .locals 1

    iget-boolean v0, p0, Lcom/qq/e/ads/AbstractAD;->c:Z

    return v0
.end method
