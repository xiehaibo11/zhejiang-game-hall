.class public Lcom/tkay/core/common/f/a;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Comparable;


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Object;",
        "Ljava/lang/Comparable<",
        "Lcom/tkay/core/common/f/a;",
        ">;"
    }
.end annotation


# instance fields
.field private a:I

.field private b:J

.field private c:Lcom/tkay/core/api/TYBaseAdAdapter;

.field private d:Lcom/tkay/core/api/BaseAd;

.field private e:I

.field private f:Z

.field private g:J

.field private h:Ljava/lang/String;

.field private i:I

.field private j:J

.field private k:Z


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 18
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method static synthetic a(Lcom/tkay/core/common/f/a;)Lcom/tkay/core/api/TYBaseAdAdapter;
    .locals 0

    .line 18
    iget-object p0, p0, Lcom/tkay/core/common/f/a;->c:Lcom/tkay/core/api/TYBaseAdAdapter;

    return-object p0
.end method

.method private b(Lcom/tkay/core/common/f/a;)I
    .locals 4

    .line 1105
    iget-object v0, p0, Lcom/tkay/core/common/f/a;->c:Lcom/tkay/core/api/TYBaseAdAdapter;

    .line 150
    invoke-virtual {v0}, Lcom/tkay/core/api/TYBaseAdAdapter;->getUnitGroupInfo()Lcom/tkay/core/common/f/aj;

    move-result-object v0

    .line 2105
    iget-object p1, p1, Lcom/tkay/core/common/f/a;->c:Lcom/tkay/core/api/TYBaseAdAdapter;

    .line 151
    invoke-virtual {p1}, Lcom/tkay/core/api/TYBaseAdAdapter;->getUnitGroupInfo()Lcom/tkay/core/common/f/aj;

    move-result-object p1

    .line 153
    invoke-static {v0}, Lcom/tkay/core/common/l/g;->a(Lcom/tkay/core/common/f/aj;)D

    move-result-wide v0

    invoke-static {p1}, Lcom/tkay/core/common/l/g;->a(Lcom/tkay/core/common/f/aj;)D

    move-result-wide v2

    cmpl-double p1, v0, v2

    if-lez p1, :cond_0

    const/4 p1, -0x1

    return p1

    :cond_0
    const/4 p1, 0x1

    return p1
.end method

.method private l()J
    .locals 2

    .line 60
    iget-wide v0, p0, Lcom/tkay/core/common/f/a;->g:J

    return-wide v0
.end method

.method private m()I
    .locals 1

    .line 88
    iget v0, p0, Lcom/tkay/core/common/f/a;->a:I

    return v0
.end method

.method private n()J
    .locals 2

    .line 96
    iget-wide v0, p0, Lcom/tkay/core/common/f/a;->b:J

    return-wide v0
.end method


# virtual methods
.method public final a(I)V
    .locals 0

    .line 80
    iput p1, p0, Lcom/tkay/core/common/f/a;->e:I

    if-lez p1, :cond_0

    const/4 p1, 0x0

    .line 83
    iput p1, p0, Lcom/tkay/core/common/f/a;->i:I

    :cond_0
    return-void
.end method

.method public final a(J)V
    .locals 0

    .line 48
    iput-wide p1, p0, Lcom/tkay/core/common/f/a;->j:J

    return-void
.end method

.method public final a(Lcom/tkay/core/api/BaseAd;)V
    .locals 0

    .line 117
    iput-object p1, p0, Lcom/tkay/core/common/f/a;->d:Lcom/tkay/core/api/BaseAd;

    return-void
.end method

.method public final a(Lcom/tkay/core/api/TYBaseAdAdapter;)V
    .locals 0

    .line 109
    iput-object p1, p0, Lcom/tkay/core/common/f/a;->c:Lcom/tkay/core/api/TYBaseAdAdapter;

    return-void
.end method

.method public final a(Ljava/lang/String;)V
    .locals 0

    .line 52
    iput-object p1, p0, Lcom/tkay/core/common/f/a;->h:Ljava/lang/String;

    return-void
.end method

.method public final a(Z)V
    .locals 0

    .line 72
    iput-boolean p1, p0, Lcom/tkay/core/common/f/a;->f:Z

    return-void
.end method

.method public final a()Z
    .locals 6

    .line 41
    iget v0, p0, Lcom/tkay/core/common/f/a;->i:I

    const/4 v1, 0x1

    if-ne v0, v1, :cond_0

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v2

    iget-wide v4, p0, Lcom/tkay/core/common/f/a;->b:J

    sub-long/2addr v2, v4

    iget-wide v4, p0, Lcom/tkay/core/common/f/a;->j:J

    cmp-long v0, v2, v4

    if-gez v0, :cond_0

    return v1

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public final b()Ljava/lang/String;
    .locals 1

    .line 56
    iget-object v0, p0, Lcom/tkay/core/common/f/a;->h:Ljava/lang/String;

    return-object v0
.end method

.method public final b(I)V
    .locals 0

    .line 92
    iput p1, p0, Lcom/tkay/core/common/f/a;->a:I

    return-void
.end method

.method public final b(J)V
    .locals 0

    .line 64
    iput-wide p1, p0, Lcom/tkay/core/common/f/a;->g:J

    return-void
.end method

.method public final c(J)V
    .locals 1

    const/4 v0, 0x1

    .line 100
    iput v0, p0, Lcom/tkay/core/common/f/a;->i:I

    .line 101
    iput-wide p1, p0, Lcom/tkay/core/common/f/a;->b:J

    return-void
.end method

.method public final c()Z
    .locals 1

    .line 68
    iget-boolean v0, p0, Lcom/tkay/core/common/f/a;->f:Z

    return v0
.end method

.method public synthetic compareTo(Ljava/lang/Object;)I
    .locals 4

    .line 18
    check-cast p1, Lcom/tkay/core/common/f/a;

    .line 3105
    iget-object v0, p0, Lcom/tkay/core/common/f/a;->c:Lcom/tkay/core/api/TYBaseAdAdapter;

    .line 2150
    invoke-virtual {v0}, Lcom/tkay/core/api/TYBaseAdAdapter;->getUnitGroupInfo()Lcom/tkay/core/common/f/aj;

    move-result-object v0

    .line 4105
    iget-object p1, p1, Lcom/tkay/core/common/f/a;->c:Lcom/tkay/core/api/TYBaseAdAdapter;

    .line 2151
    invoke-virtual {p1}, Lcom/tkay/core/api/TYBaseAdAdapter;->getUnitGroupInfo()Lcom/tkay/core/common/f/aj;

    move-result-object p1

    .line 2153
    invoke-static {v0}, Lcom/tkay/core/common/l/g;->a(Lcom/tkay/core/common/f/aj;)D

    move-result-wide v0

    invoke-static {p1}, Lcom/tkay/core/common/l/g;->a(Lcom/tkay/core/common/f/aj;)D

    move-result-wide v2

    cmpl-double p1, v0, v2

    if-lez p1, :cond_0

    const/4 p1, -0x1

    return p1

    :cond_0
    const/4 p1, 0x1

    return p1
.end method

.method public final d()I
    .locals 1

    .line 76
    iget v0, p0, Lcom/tkay/core/common/f/a;->e:I

    return v0
.end method

.method public final e()Lcom/tkay/core/api/TYBaseAdAdapter;
    .locals 1

    .line 105
    iget-object v0, p0, Lcom/tkay/core/common/f/a;->c:Lcom/tkay/core/api/TYBaseAdAdapter;

    return-object v0
.end method

.method public final f()Lcom/tkay/core/api/BaseAd;
    .locals 1

    .line 113
    iget-object v0, p0, Lcom/tkay/core/common/f/a;->d:Lcom/tkay/core/api/BaseAd;

    return-object v0
.end method

.method public final g()Z
    .locals 3

    .line 122
    :try_start_0
    iget-object v0, p0, Lcom/tkay/core/common/f/a;->c:Lcom/tkay/core/api/TYBaseAdAdapter;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/tkay/core/common/f/a;->d:Lcom/tkay/core/api/BaseAd;

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    return v0

    .line 126
    :cond_0
    iget-object v0, p0, Lcom/tkay/core/common/f/a;->c:Lcom/tkay/core/api/TYBaseAdAdapter;

    if-eqz v0, :cond_1

    .line 127
    iget-object v0, p0, Lcom/tkay/core/common/f/a;->c:Lcom/tkay/core/api/TYBaseAdAdapter;

    invoke-virtual {v0}, Lcom/tkay/core/api/TYBaseAdAdapter;->isAdReady()Z

    move-result v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return v0

    :catch_0
    move-exception v0

    .line 131
    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "isNetworkAdReady()  >>> "

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "AdCacheInfo"

    invoke-static {v1, v0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    :cond_1
    const/4 v0, 0x0

    return v0
.end method

.method public final h()Lcom/tkay/core/common/f/d;
    .locals 1

    .line 137
    iget-object v0, p0, Lcom/tkay/core/common/f/a;->d:Lcom/tkay/core/api/BaseAd;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/tkay/core/api/BaseAd;->getDetail()Lcom/tkay/core/common/f/d;

    move-result-object v0

    return-object v0

    :cond_0
    iget-object v0, p0, Lcom/tkay/core/common/f/a;->c:Lcom/tkay/core/api/TYBaseAdAdapter;

    invoke-virtual {v0}, Lcom/tkay/core/api/TYBaseAdAdapter;->getTrackingInfo()Lcom/tkay/core/common/f/d;

    move-result-object v0

    return-object v0
.end method

.method public final i()Z
    .locals 4

    .line 141
    iget-wide v0, p0, Lcom/tkay/core/common/f/a;->b:J

    iget-wide v2, p0, Lcom/tkay/core/common/f/a;->g:J

    add-long/2addr v0, v2

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v2

    cmp-long v0, v0, v2

    if-lez v0, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public final j()Z
    .locals 1

    .line 145
    invoke-virtual {p0}, Lcom/tkay/core/common/f/a;->i()Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-virtual {p0}, Lcom/tkay/core/common/f/a;->g()Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public final declared-synchronized k()V
    .locals 2

    monitor-enter p0

    .line 161
    :try_start_0
    iget-boolean v0, p0, Lcom/tkay/core/common/f/a;->k:Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-eqz v0, :cond_0

    .line 165
    monitor-exit p0

    return-void

    :cond_0
    const/4 v0, 0x1

    .line 167
    :try_start_1
    iput-boolean v0, p0, Lcom/tkay/core/common/f/a;->k:Z

    .line 168
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    new-instance v1, Lcom/tkay/core/common/f/a$1;

    invoke-direct {v1, p0}, Lcom/tkay/core/common/f/a$1;-><init>(Lcom/tkay/core/common/f/a;)V

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 180
    monitor-exit p0

    return-void

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method
