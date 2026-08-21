.class public final Lcom/tkay/china/common/c;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/china/api/CustomAdapterDownloadListener;


# instance fields
.field a:Lcom/tkay/core/api/TYBaseAdAdapter;

.field b:Lcom/tkay/core/api/BaseAd;

.field c:Lcom/tkay/core/api/TYAdInfo;

.field d:Ljava/lang/ref/WeakReference;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/lang/ref/WeakReference<",
            "Lcom/tkay/china/api/TYAppDownloadListener;",
            ">;"
        }
    .end annotation
.end field

.field e:J

.field f:Z

.field g:Z


# direct methods
.method public constructor <init>(Lcom/tkay/core/api/TYBaseAdAdapter;Lcom/tkay/core/api/BaseAd;Lcom/tkay/core/api/TYEventInterface;)V
    .locals 0

    .line 43
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 44
    iput-object p1, p0, Lcom/tkay/china/common/c;->a:Lcom/tkay/core/api/TYBaseAdAdapter;

    .line 45
    iput-object p2, p0, Lcom/tkay/china/common/c;->b:Lcom/tkay/core/api/BaseAd;

    if-eqz p3, :cond_0

    .line 46
    instance-of p1, p3, Lcom/tkay/china/api/TYAppDownloadListener;

    if-eqz p1, :cond_0

    .line 47
    new-instance p1, Ljava/lang/ref/WeakReference;

    check-cast p3, Lcom/tkay/china/api/TYAppDownloadListener;

    invoke-direct {p1, p3}, Ljava/lang/ref/WeakReference;-><init>(Ljava/lang/Object;)V

    iput-object p1, p0, Lcom/tkay/china/common/c;->d:Ljava/lang/ref/WeakReference;

    :cond_0
    return-void
.end method

.method private a()V
    .locals 1

    .line 133
    iget-object v0, p0, Lcom/tkay/china/common/c;->b:Lcom/tkay/core/api/BaseAd;

    if-eqz v0, :cond_0

    .line 134
    invoke-static {v0}, Lcom/tkay/core/common/b/i;->a(Lcom/tkay/core/api/BaseAd;)Lcom/tkay/core/common/b/i;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/china/common/c;->c:Lcom/tkay/core/api/TYAdInfo;

    return-void

    .line 136
    :cond_0
    iget-object v0, p0, Lcom/tkay/china/common/c;->a:Lcom/tkay/core/api/TYBaseAdAdapter;

    invoke-static {v0}, Lcom/tkay/core/common/b/i;->a(Lcom/tkay/core/common/b/n;)Lcom/tkay/core/common/b/i;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/china/common/c;->c:Lcom/tkay/core/api/TYAdInfo;

    return-void
.end method

.method private a(IJLjava/lang/String;)V
    .locals 8

    .line 141
    invoke-static {}, Lcom/tkay/core/common/l/b/a;->a()Lcom/tkay/core/common/l/b/a;

    move-result-object v0

    new-instance v7, Lcom/tkay/china/common/c$1;

    move-object v1, v7

    move-object v2, p0

    move v3, p1

    move-object v4, p4

    move-wide v5, p2

    invoke-direct/range {v1 .. v6}, Lcom/tkay/china/common/c$1;-><init>(Lcom/tkay/china/common/c;ILjava/lang/String;J)V

    invoke-virtual {v0, v7}, Lcom/tkay/core/common/l/b/a;->a(Ljava/lang/Runnable;)V

    return-void
.end method


# virtual methods
.method public final onDownloadFail(JJLjava/lang/String;Ljava/lang/String;)V
    .locals 9

    .line 106
    iget-object v0, p0, Lcom/tkay/china/common/c;->c:Lcom/tkay/core/api/TYAdInfo;

    if-nez v0, :cond_0

    .line 107
    invoke-direct {p0}, Lcom/tkay/china/common/c;->a()V

    .line 109
    :cond_0
    iget-object v0, p0, Lcom/tkay/china/common/c;->d:Ljava/lang/ref/WeakReference;

    if-eqz v0, :cond_1

    invoke-virtual {v0}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/china/api/TYAppDownloadListener;

    goto :goto_0

    :cond_1
    const/4 v0, 0x0

    :goto_0
    move-object v1, v0

    if-eqz v1, :cond_2

    .line 111
    iget-object v2, p0, Lcom/tkay/china/common/c;->c:Lcom/tkay/core/api/TYAdInfo;

    move-wide v3, p1

    move-wide v5, p3

    move-object v7, p5

    move-object v8, p6

    invoke-interface/range {v1 .. v8}, Lcom/tkay/china/api/TYAppDownloadListener;->onDownloadFail(Lcom/tkay/core/api/TYAdInfo;JJLjava/lang/String;Ljava/lang/String;)V

    :cond_2
    return-void
.end method

.method public final onDownloadFinish(JLjava/lang/String;Ljava/lang/String;)V
    .locals 7

    .line 88
    iget-object v0, p0, Lcom/tkay/china/common/c;->c:Lcom/tkay/core/api/TYAdInfo;

    if-nez v0, :cond_0

    .line 89
    invoke-direct {p0}, Lcom/tkay/china/common/c;->a()V

    .line 92
    :cond_0
    iget-wide v0, p0, Lcom/tkay/china/common/c;->e:J

    const-wide/16 v2, 0x0

    cmp-long v0, v0, v2

    if-eqz v0, :cond_1

    iget-boolean v0, p0, Lcom/tkay/china/common/c;->g:Z

    if-nez v0, :cond_1

    const/4 v0, 0x1

    .line 93
    iput-boolean v0, p0, Lcom/tkay/china/common/c;->g:Z

    .line 94
    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v0

    iget-wide v2, p0, Lcom/tkay/china/common/c;->e:J

    sub-long/2addr v0, v2

    const/16 v2, 0x13

    .line 95
    invoke-direct {p0, v2, v0, v1, p4}, Lcom/tkay/china/common/c;->a(IJLjava/lang/String;)V

    .line 98
    :cond_1
    iget-object v0, p0, Lcom/tkay/china/common/c;->d:Ljava/lang/ref/WeakReference;

    if-eqz v0, :cond_2

    invoke-virtual {v0}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/china/api/TYAppDownloadListener;

    goto :goto_0

    :cond_2
    const/4 v0, 0x0

    :goto_0
    move-object v1, v0

    if-eqz v1, :cond_3

    .line 100
    iget-object v2, p0, Lcom/tkay/china/common/c;->c:Lcom/tkay/core/api/TYAdInfo;

    move-wide v3, p1

    move-object v5, p3

    move-object v6, p4

    invoke-interface/range {v1 .. v6}, Lcom/tkay/china/api/TYAppDownloadListener;->onDownloadFinish(Lcom/tkay/core/api/TYAdInfo;JLjava/lang/String;Ljava/lang/String;)V

    :cond_3
    return-void
.end method

.method public final onDownloadPause(JJLjava/lang/String;Ljava/lang/String;)V
    .locals 9

    .line 77
    iget-object v0, p0, Lcom/tkay/china/common/c;->c:Lcom/tkay/core/api/TYAdInfo;

    if-nez v0, :cond_0

    .line 78
    invoke-direct {p0}, Lcom/tkay/china/common/c;->a()V

    .line 80
    :cond_0
    iget-object v0, p0, Lcom/tkay/china/common/c;->d:Ljava/lang/ref/WeakReference;

    if-eqz v0, :cond_1

    invoke-virtual {v0}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/china/api/TYAppDownloadListener;

    goto :goto_0

    :cond_1
    const/4 v0, 0x0

    :goto_0
    move-object v1, v0

    if-eqz v1, :cond_2

    .line 82
    iget-object v2, p0, Lcom/tkay/china/common/c;->c:Lcom/tkay/core/api/TYAdInfo;

    move-wide v3, p1

    move-wide v5, p3

    move-object v7, p5

    move-object v8, p6

    invoke-interface/range {v1 .. v8}, Lcom/tkay/china/api/TYAppDownloadListener;->onDownloadPause(Lcom/tkay/core/api/TYAdInfo;JJLjava/lang/String;Ljava/lang/String;)V

    :cond_2
    return-void
.end method

.method public final onDownloadStart(JJLjava/lang/String;Ljava/lang/String;)V
    .locals 9

    .line 53
    iget-object v0, p0, Lcom/tkay/china/common/c;->c:Lcom/tkay/core/api/TYAdInfo;

    if-nez v0, :cond_0

    .line 54
    invoke-direct {p0}, Lcom/tkay/china/common/c;->a()V

    .line 56
    :cond_0
    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/tkay/china/common/c;->e:J

    const/16 v0, 0x12

    const-wide/16 v1, 0x0

    .line 57
    invoke-direct {p0, v0, v1, v2, p6}, Lcom/tkay/china/common/c;->a(IJLjava/lang/String;)V

    .line 58
    iget-object v0, p0, Lcom/tkay/china/common/c;->d:Ljava/lang/ref/WeakReference;

    if-eqz v0, :cond_1

    invoke-virtual {v0}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/china/api/TYAppDownloadListener;

    goto :goto_0

    :cond_1
    const/4 v0, 0x0

    :goto_0
    move-object v1, v0

    if-eqz v1, :cond_2

    .line 60
    iget-object v2, p0, Lcom/tkay/china/common/c;->c:Lcom/tkay/core/api/TYAdInfo;

    move-wide v3, p1

    move-wide v5, p3

    move-object v7, p5

    move-object v8, p6

    invoke-interface/range {v1 .. v8}, Lcom/tkay/china/api/TYAppDownloadListener;->onDownloadStart(Lcom/tkay/core/api/TYAdInfo;JJLjava/lang/String;Ljava/lang/String;)V

    :cond_2
    return-void
.end method

.method public final onDownloadUpdate(JJLjava/lang/String;Ljava/lang/String;)V
    .locals 9

    .line 66
    iget-object v0, p0, Lcom/tkay/china/common/c;->c:Lcom/tkay/core/api/TYAdInfo;

    if-nez v0, :cond_0

    .line 67
    invoke-direct {p0}, Lcom/tkay/china/common/c;->a()V

    .line 69
    :cond_0
    iget-object v0, p0, Lcom/tkay/china/common/c;->d:Ljava/lang/ref/WeakReference;

    if-eqz v0, :cond_1

    invoke-virtual {v0}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/china/api/TYAppDownloadListener;

    goto :goto_0

    :cond_1
    const/4 v0, 0x0

    :goto_0
    move-object v1, v0

    if-eqz v1, :cond_2

    .line 71
    iget-object v2, p0, Lcom/tkay/china/common/c;->c:Lcom/tkay/core/api/TYAdInfo;

    move-wide v3, p1

    move-wide v5, p3

    move-object v7, p5

    move-object v8, p6

    invoke-interface/range {v1 .. v8}, Lcom/tkay/china/api/TYAppDownloadListener;->onDownloadUpdate(Lcom/tkay/core/api/TYAdInfo;JJLjava/lang/String;Ljava/lang/String;)V

    :cond_2
    return-void
.end method

.method public final onInstalled(Ljava/lang/String;Ljava/lang/String;)V
    .locals 3

    .line 117
    iget-object v0, p0, Lcom/tkay/china/common/c;->c:Lcom/tkay/core/api/TYAdInfo;

    if-nez v0, :cond_0

    .line 118
    invoke-direct {p0}, Lcom/tkay/china/common/c;->a()V

    .line 121
    :cond_0
    iget-boolean v0, p0, Lcom/tkay/china/common/c;->f:Z

    if-nez v0, :cond_1

    const/4 v0, 0x1

    .line 122
    iput-boolean v0, p0, Lcom/tkay/china/common/c;->f:Z

    const/16 v0, 0x14

    const-wide/16 v1, 0x0

    .line 123
    invoke-direct {p0, v0, v1, v2, p2}, Lcom/tkay/china/common/c;->a(IJLjava/lang/String;)V

    .line 126
    :cond_1
    iget-object v0, p0, Lcom/tkay/china/common/c;->d:Ljava/lang/ref/WeakReference;

    if-eqz v0, :cond_2

    invoke-virtual {v0}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/china/api/TYAppDownloadListener;

    goto :goto_0

    :cond_2
    const/4 v0, 0x0

    :goto_0
    if-eqz v0, :cond_3

    .line 128
    iget-object v1, p0, Lcom/tkay/china/common/c;->c:Lcom/tkay/core/api/TYAdInfo;

    invoke-interface {v0, v1, p1, p2}, Lcom/tkay/china/api/TYAppDownloadListener;->onInstalled(Lcom/tkay/core/api/TYAdInfo;Ljava/lang/String;Ljava/lang/String;)V

    :cond_3
    return-void
.end method
