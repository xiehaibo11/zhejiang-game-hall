.class final Lcom/tkay/core/common/m/d$a$3;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/core/common/m/d$a;->onAdLoadError(Ljava/lang/String;Ljava/lang/String;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Ljava/lang/String;

.field final synthetic b:Ljava/lang/String;

.field final synthetic c:Lcom/tkay/core/common/m/d$a;


# direct methods
.method constructor <init>(Lcom/tkay/core/common/m/d$a;Ljava/lang/String;Ljava/lang/String;)V
    .locals 0

    .line 520
    iput-object p1, p0, Lcom/tkay/core/common/m/d$a$3;->c:Lcom/tkay/core/common/m/d$a;

    iput-object p2, p0, Lcom/tkay/core/common/m/d$a$3;->a:Ljava/lang/String;

    iput-object p3, p0, Lcom/tkay/core/common/m/d$a$3;->b:Ljava/lang/String;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 6

    .line 523
    iget-object v0, p0, Lcom/tkay/core/common/m/d$a$3;->c:Lcom/tkay/core/common/m/d$a;

    monitor-enter v0

    .line 524
    :try_start_0
    iget-object v1, p0, Lcom/tkay/core/common/m/d$a$3;->c:Lcom/tkay/core/common/m/d$a;

    iget-object v1, v1, Lcom/tkay/core/common/m/d$a;->b:Lcom/tkay/core/common/m/d;

    if-eqz v1, :cond_0

    iget-object v1, p0, Lcom/tkay/core/common/m/d$a$3;->c:Lcom/tkay/core/common/m/d$a;

    iget-object v1, v1, Lcom/tkay/core/common/m/d$a;->a:Lcom/tkay/core/api/TYBaseAdAdapter;

    if-eqz v1, :cond_0

    .line 526
    new-instance v1, Lcom/tkay/core/common/m/a;

    invoke-direct {v1}, Lcom/tkay/core/common/m/a;-><init>()V

    const/4 v2, 0x0

    .line 527
    iput v2, v1, Lcom/tkay/core/common/m/a;->a:I

    const-string v2, "4001"

    .line 528
    iget-object v3, p0, Lcom/tkay/core/common/m/d$a$3;->a:Ljava/lang/String;

    iget-object v4, p0, Lcom/tkay/core/common/m/d$a$3;->b:Ljava/lang/String;

    invoke-static {v2, v3, v4}, Lcom/tkay/core/api/ErrorCode;->getErrorCode(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/core/api/AdError;

    move-result-object v2

    iput-object v2, v1, Lcom/tkay/core/common/m/a;->b:Lcom/tkay/core/api/AdError;

    .line 529
    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v2

    iget-object v4, p0, Lcom/tkay/core/common/m/d$a$3;->c:Lcom/tkay/core/common/m/d$a;

    iget-object v4, v4, Lcom/tkay/core/common/m/d$a;->c:Lcom/tkay/core/common/m/d;

    iget-wide v4, v4, Lcom/tkay/core/common/m/d;->k:J

    sub-long/2addr v2, v4

    iput-wide v2, v1, Lcom/tkay/core/common/m/a;->c:J

    .line 531
    iget-object v2, p0, Lcom/tkay/core/common/m/d$a$3;->c:Lcom/tkay/core/common/m/d$a;

    iget-object v2, v2, Lcom/tkay/core/common/m/d$a;->b:Lcom/tkay/core/common/m/d;

    iget-object v3, p0, Lcom/tkay/core/common/m/d$a$3;->c:Lcom/tkay/core/common/m/d$a;

    iget-object v3, v3, Lcom/tkay/core/common/m/d$a;->a:Lcom/tkay/core/api/TYBaseAdAdapter;

    invoke-virtual {v2, v3, v1}, Lcom/tkay/core/common/m/d;->a(Lcom/tkay/core/api/TYBaseAdAdapter;Lcom/tkay/core/common/m/a;)V

    .line 532
    iget-object v1, p0, Lcom/tkay/core/common/m/d$a$3;->c:Lcom/tkay/core/common/m/d$a;

    const/4 v2, 0x0

    iput-object v2, v1, Lcom/tkay/core/common/m/d$a;->b:Lcom/tkay/core/common/m/d;

    .line 533
    iget-object v1, p0, Lcom/tkay/core/common/m/d$a$3;->c:Lcom/tkay/core/common/m/d$a;

    iput-object v2, v1, Lcom/tkay/core/common/m/d$a;->a:Lcom/tkay/core/api/TYBaseAdAdapter;

    .line 535
    :cond_0
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception v1

    monitor-exit v0

    throw v1
.end method
