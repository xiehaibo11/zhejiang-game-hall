.class final Lcom/tkay/core/common/m/d$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/core/common/m/d;->a(Lcom/tkay/core/api/TYBaseAdAdapter;Lcom/tkay/core/common/f/aj;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/core/api/TYBaseAdAdapter;

.field final synthetic b:Lcom/tkay/core/common/f/aj;

.field final synthetic c:Ljava/util/Map;

.field final synthetic d:Lcom/tkay/core/common/m/d;


# direct methods
.method constructor <init>(Lcom/tkay/core/common/m/d;Lcom/tkay/core/api/TYBaseAdAdapter;Lcom/tkay/core/common/f/aj;Ljava/util/Map;)V
    .locals 0

    .line 263
    iput-object p1, p0, Lcom/tkay/core/common/m/d$1;->d:Lcom/tkay/core/common/m/d;

    iput-object p2, p0, Lcom/tkay/core/common/m/d$1;->a:Lcom/tkay/core/api/TYBaseAdAdapter;

    iput-object p3, p0, Lcom/tkay/core/common/m/d$1;->b:Lcom/tkay/core/common/f/aj;

    iput-object p4, p0, Lcom/tkay/core/common/m/d$1;->c:Ljava/util/Map;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 11

    .line 267
    iget-object v0, p0, Lcom/tkay/core/common/m/d$1;->d:Lcom/tkay/core/common/m/d;

    iget-object v0, v0, Lcom/tkay/core/common/m/d;->h:Lcom/tkay/core/common/m/b;

    if-eqz v0, :cond_0

    .line 268
    iget-object v0, p0, Lcom/tkay/core/common/m/d$1;->d:Lcom/tkay/core/common/m/d;

    iget-object v0, v0, Lcom/tkay/core/common/m/d;->h:Lcom/tkay/core/common/m/b;

    iget-object v1, p0, Lcom/tkay/core/common/m/d$1;->a:Lcom/tkay/core/api/TYBaseAdAdapter;

    invoke-interface {v0, v1}, Lcom/tkay/core/common/m/b;->a(Lcom/tkay/core/api/TYBaseAdAdapter;)V

    .line 272
    :cond_0
    iget-object v0, p0, Lcom/tkay/core/common/m/d$1;->d:Lcom/tkay/core/common/m/d;

    invoke-static {v0}, Lcom/tkay/core/common/m/d;->a(Lcom/tkay/core/common/m/d;)Landroid/content/Context;

    move-result-object v0

    const-string v1, ""

    const-string v2, "2006"

    const/4 v3, 0x0

    if-nez v0, :cond_2

    .line 274
    iget-object v0, p0, Lcom/tkay/core/common/m/d$1;->d:Lcom/tkay/core/common/m/d;

    iget-object v0, v0, Lcom/tkay/core/common/m/d;->h:Lcom/tkay/core/common/m/b;

    if-eqz v0, :cond_1

    .line 276
    new-instance v0, Lcom/tkay/core/common/m/a;

    invoke-direct {v0}, Lcom/tkay/core/common/m/a;-><init>()V

    .line 277
    iput v3, v0, Lcom/tkay/core/common/m/a;->a:I

    .line 278
    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v3

    iget-object v5, p0, Lcom/tkay/core/common/m/d$1;->d:Lcom/tkay/core/common/m/d;

    iget-wide v5, v5, Lcom/tkay/core/common/m/d;->k:J

    sub-long/2addr v3, v5

    iput-wide v3, v0, Lcom/tkay/core/common/m/a;->c:J

    const-string v3, "Request Context is null! Please check the Ad init Context."

    .line 279
    invoke-static {v2, v1, v3}, Lcom/tkay/core/api/ErrorCode;->getErrorCode(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/core/api/AdError;

    move-result-object v1

    iput-object v1, v0, Lcom/tkay/core/common/m/a;->b:Lcom/tkay/core/api/AdError;

    .line 281
    iget-object v1, p0, Lcom/tkay/core/common/m/d$1;->d:Lcom/tkay/core/common/m/d;

    iget-object v2, p0, Lcom/tkay/core/common/m/d$1;->a:Lcom/tkay/core/api/TYBaseAdAdapter;

    invoke-virtual {v1, v2, v0}, Lcom/tkay/core/common/m/d;->a(Lcom/tkay/core/api/TYBaseAdAdapter;Lcom/tkay/core/common/m/a;)V

    :cond_1
    return-void

    .line 286
    :cond_2
    iget-object v4, p0, Lcom/tkay/core/common/m/d$1;->d:Lcom/tkay/core/common/m/d;

    iget-object v5, p0, Lcom/tkay/core/common/m/d$1;->b:Lcom/tkay/core/common/f/aj;

    iget-object v6, p0, Lcom/tkay/core/common/m/d$1;->a:Lcom/tkay/core/api/TYBaseAdAdapter;

    invoke-static {v4, v0, v5, v6}, Lcom/tkay/core/common/m/d;->a(Lcom/tkay/core/common/m/d;Landroid/content/Context;Lcom/tkay/core/common/f/aj;Lcom/tkay/core/api/TYBaseAdAdapter;)V

    .line 289
    :try_start_0
    iget-object v4, p0, Lcom/tkay/core/common/m/d$1;->d:Lcom/tkay/core/common/m/d;

    invoke-static {v4}, Lcom/tkay/core/common/m/d;->b(Lcom/tkay/core/common/m/d;)Ljava/util/Map;

    move-result-object v4

    .line 292
    iget-object v5, p0, Lcom/tkay/core/common/m/d$1;->d:Lcom/tkay/core/common/m/d;

    iget-object v6, p0, Lcom/tkay/core/common/m/d$1;->a:Lcom/tkay/core/api/TYBaseAdAdapter;

    invoke-static {v5, v6}, Lcom/tkay/core/common/m/d;->a(Lcom/tkay/core/common/m/d;Lcom/tkay/core/api/TYBaseAdAdapter;)V

    .line 294
    iget-object v5, p0, Lcom/tkay/core/common/m/d$1;->a:Lcom/tkay/core/api/TYBaseAdAdapter;

    iget-object v6, p0, Lcom/tkay/core/common/m/d$1;->c:Ljava/util/Map;

    new-instance v7, Lcom/tkay/core/common/m/d$a;

    iget-object v8, p0, Lcom/tkay/core/common/m/d$1;->d:Lcom/tkay/core/common/m/d;

    iget-object v9, p0, Lcom/tkay/core/common/m/d$1;->d:Lcom/tkay/core/common/m/d;

    iget-object v10, p0, Lcom/tkay/core/common/m/d$1;->a:Lcom/tkay/core/api/TYBaseAdAdapter;

    invoke-direct {v7, v8, v9, v10, v3}, Lcom/tkay/core/common/m/d$a;-><init>(Lcom/tkay/core/common/m/d;Lcom/tkay/core/common/m/d;Lcom/tkay/core/api/TYBaseAdAdapter;B)V

    invoke-virtual {v5, v0, v6, v4, v7}, Lcom/tkay/core/api/TYBaseAdAdapter;->internalLoad(Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;Lcom/tkay/core/api/TYCustomLoadListener;)V

    .line 295
    iget-object v0, p0, Lcom/tkay/core/common/m/d$1;->a:Lcom/tkay/core/api/TYBaseAdAdapter;

    invoke-virtual {v0}, Lcom/tkay/core/api/TYBaseAdAdapter;->getTrackingInfo()Lcom/tkay/core/common/f/d;

    move-result-object v0

    .line 296
    iget-object v4, p0, Lcom/tkay/core/common/m/d$1;->a:Lcom/tkay/core/api/TYBaseAdAdapter;

    invoke-virtual {v4}, Lcom/tkay/core/api/TYBaseAdAdapter;->getNetworkPlacementId()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v0, v4}, Lcom/tkay/core/common/f/d;->g(Ljava/lang/String;)V

    .line 299
    iget-object v4, p0, Lcom/tkay/core/common/m/d$1;->d:Lcom/tkay/core/common/m/d;

    iget-object v4, v4, Lcom/tkay/core/common/m/d;->h:Lcom/tkay/core/common/m/b;

    if-eqz v4, :cond_3

    .line 300
    iget-object v4, p0, Lcom/tkay/core/common/m/d$1;->d:Lcom/tkay/core/common/m/d;

    iget-object v4, v4, Lcom/tkay/core/common/m/d;->h:Lcom/tkay/core/common/m/b;

    invoke-interface {v4, v0}, Lcom/tkay/core/common/m/b;->b(Lcom/tkay/core/common/f/d;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_3
    return-void

    :catchall_0
    move-exception v0

    .line 304
    new-instance v4, Lcom/tkay/core/common/m/a;

    invoke-direct {v4}, Lcom/tkay/core/common/m/a;-><init>()V

    .line 305
    iput v3, v4, Lcom/tkay/core/common/m/a;->a:I

    .line 306
    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v5

    iget-object v3, p0, Lcom/tkay/core/common/m/d$1;->d:Lcom/tkay/core/common/m/d;

    iget-wide v7, v3, Lcom/tkay/core/common/m/d;->k:J

    sub-long/2addr v5, v7

    iput-wide v5, v4, Lcom/tkay/core/common/m/a;->c:J

    .line 307
    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {v2, v1, v0}, Lcom/tkay/core/api/ErrorCode;->getErrorCode(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/core/api/AdError;

    move-result-object v0

    iput-object v0, v4, Lcom/tkay/core/common/m/a;->b:Lcom/tkay/core/api/AdError;

    .line 309
    iget-object v0, p0, Lcom/tkay/core/common/m/d$1;->d:Lcom/tkay/core/common/m/d;

    iget-object v1, p0, Lcom/tkay/core/common/m/d$1;->a:Lcom/tkay/core/api/TYBaseAdAdapter;

    invoke-virtual {v0, v1, v4}, Lcom/tkay/core/common/m/d;->a(Lcom/tkay/core/api/TYBaseAdAdapter;Lcom/tkay/core/common/m/a;)V

    return-void
.end method
