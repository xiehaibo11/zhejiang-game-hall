.class final Lcom/tkay/core/common/f$2$1$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/core/common/f$2$1;->a(Lcom/tkay/core/c/d;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/core/c/d;

.field final synthetic b:Lcom/tkay/core/common/f$2$1;


# direct methods
.method constructor <init>(Lcom/tkay/core/common/f$2$1;Lcom/tkay/core/c/d;)V
    .locals 0

    .line 434
    iput-object p1, p0, Lcom/tkay/core/common/f$2$1$1;->b:Lcom/tkay/core/common/f$2$1;

    iput-object p2, p0, Lcom/tkay/core/common/f$2$1$1;->a:Lcom/tkay/core/c/d;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 9

    .line 438
    iget-object v0, p0, Lcom/tkay/core/common/f$2$1$1;->b:Lcom/tkay/core/common/f$2$1;

    iget-object v0, v0, Lcom/tkay/core/common/f$2$1;->e:Lcom/tkay/core/common/f$2;

    iget-object v0, v0, Lcom/tkay/core/common/f$2;->h:Lcom/tkay/core/common/f;

    monitor-enter v0

    .line 439
    :try_start_0
    iget-object v1, p0, Lcom/tkay/core/common/f$2$1$1;->b:Lcom/tkay/core/common/f$2$1;

    iget-object v1, v1, Lcom/tkay/core/common/f$2$1;->e:Lcom/tkay/core/common/f$2;

    iget-object v1, v1, Lcom/tkay/core/common/f$2;->h:Lcom/tkay/core/common/f;

    iget-object v2, p0, Lcom/tkay/core/common/f$2$1$1;->a:Lcom/tkay/core/c/d;

    invoke-virtual {v2}, Lcom/tkay/core/c/d;->T()J

    move-result-wide v2

    invoke-static {v1, v2, v3}, Lcom/tkay/core/common/f;->a(Lcom/tkay/core/common/f;J)J

    .line 441
    iget-object v1, p0, Lcom/tkay/core/common/f$2$1$1;->b:Lcom/tkay/core/common/f$2$1;

    iget-object v1, v1, Lcom/tkay/core/common/f$2$1;->a:Lcom/tkay/core/common/f/d;

    iget-object v2, p0, Lcom/tkay/core/common/f$2$1$1;->a:Lcom/tkay/core/c/d;

    invoke-static {v1, v2}, Lcom/tkay/core/common/l/s;->a(Lcom/tkay/core/common/f/d;Lcom/tkay/core/c/d;)V

    .line 444
    iget-object v1, p0, Lcom/tkay/core/common/f$2$1$1;->a:Lcom/tkay/core/c/d;

    invoke-virtual {v1}, Lcom/tkay/core/c/d;->Y()I

    move-result v1

    invoke-static {v1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v1

    iget-object v2, p0, Lcom/tkay/core/common/f$2$1$1;->b:Lcom/tkay/core/common/f$2$1;

    iget-object v2, v2, Lcom/tkay/core/common/f$2$1;->e:Lcom/tkay/core/common/f$2;

    iget-object v2, v2, Lcom/tkay/core/common/f$2;->f:Ljava/lang/String;

    invoke-static {v1, v2}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    const-string v1, "3003"

    const-string v2, ""

    .line 445
    new-instance v3, Ljava/lang/StringBuilder;

    const-string v4, "Format corresponding to API: "

    invoke-direct {v3, v4}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v4, p0, Lcom/tkay/core/common/f$2$1$1;->b:Lcom/tkay/core/common/f$2$1;

    iget-object v4, v4, Lcom/tkay/core/common/f$2$1;->e:Lcom/tkay/core/common/f$2;

    iget-object v4, v4, Lcom/tkay/core/common/f$2;->f:Ljava/lang/String;

    .line 446
    invoke-static {v4}, Lcom/tkay/core/common/l/g;->d(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, ", Format corresponding to placement strategy: "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v4, p0, Lcom/tkay/core/common/f$2$1$1;->a:Lcom/tkay/core/c/d;

    .line 447
    invoke-virtual {v4}, Lcom/tkay/core/c/d;->Y()I

    move-result v4

    invoke-static {v4}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v4

    invoke-static {v4}, Lcom/tkay/core/common/l/g;->d(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    .line 445
    invoke-static {v1, v2, v3}, Lcom/tkay/core/api/ErrorCode;->getErrorCode(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/core/api/AdError;

    move-result-object v1

    .line 448
    iget-object v2, p0, Lcom/tkay/core/common/f$2$1$1;->b:Lcom/tkay/core/common/f$2$1;

    iget-object v2, v2, Lcom/tkay/core/common/f$2$1;->e:Lcom/tkay/core/common/f$2;

    iget-object v2, v2, Lcom/tkay/core/common/f$2;->h:Lcom/tkay/core/common/f;

    invoke-virtual {v2, v1}, Lcom/tkay/core/common/f;->a(Lcom/tkay/core/api/AdError;)V

    .line 450
    iget-object v2, p0, Lcom/tkay/core/common/f$2$1$1;->b:Lcom/tkay/core/common/f$2$1;

    iget-object v2, v2, Lcom/tkay/core/common/f$2$1;->a:Lcom/tkay/core/common/f/d;

    const/4 v3, 0x0

    invoke-virtual {v2, v3}, Lcom/tkay/core/common/f/d;->a(Z)V

    .line 453
    iget-object v2, p0, Lcom/tkay/core/common/f$2$1$1;->b:Lcom/tkay/core/common/f$2$1;

    iget-object v2, v2, Lcom/tkay/core/common/f$2$1;->a:Lcom/tkay/core/common/f/d;

    invoke-static {v2, v1}, Lcom/tkay/core/common/k/c;->a(Lcom/tkay/core/common/f/d;Lcom/tkay/core/api/AdError;)V

    .line 454
    iget-object v1, p0, Lcom/tkay/core/common/f$2$1$1;->b:Lcom/tkay/core/common/f$2$1;

    iget-object v1, v1, Lcom/tkay/core/common/f$2$1;->e:Lcom/tkay/core/common/f$2;

    iget-object v1, v1, Lcom/tkay/core/common/f$2;->h:Lcom/tkay/core/common/f;

    iput-boolean v3, v1, Lcom/tkay/core/common/f;->f:Z

    .line 455
    monitor-exit v0

    return-void

    .line 458
    :cond_0
    iget-object v1, p0, Lcom/tkay/core/common/f$2$1$1;->b:Lcom/tkay/core/common/f$2$1;

    iget-object v1, v1, Lcom/tkay/core/common/f$2$1;->e:Lcom/tkay/core/common/f$2;

    iget-object v2, v1, Lcom/tkay/core/common/f$2;->h:Lcom/tkay/core/common/f;

    iget-object v1, p0, Lcom/tkay/core/common/f$2$1$1;->b:Lcom/tkay/core/common/f$2$1;

    iget-object v3, v1, Lcom/tkay/core/common/f$2$1;->b:Landroid/content/Context;

    iget-object v1, p0, Lcom/tkay/core/common/f$2$1$1;->b:Lcom/tkay/core/common/f$2$1;

    iget-object v1, v1, Lcom/tkay/core/common/f$2$1;->e:Lcom/tkay/core/common/f$2;

    iget-object v4, v1, Lcom/tkay/core/common/f$2;->b:Ljava/lang/String;

    iget-object v1, p0, Lcom/tkay/core/common/f$2$1$1;->b:Lcom/tkay/core/common/f$2$1;

    iget-object v5, v1, Lcom/tkay/core/common/f$2$1;->c:Ljava/lang/String;

    iget-object v6, p0, Lcom/tkay/core/common/f$2$1$1;->a:Lcom/tkay/core/c/d;

    iget-object v1, p0, Lcom/tkay/core/common/f$2$1$1;->b:Lcom/tkay/core/common/f$2$1;

    iget-object v7, v1, Lcom/tkay/core/common/f$2$1;->a:Lcom/tkay/core/common/f/d;

    iget-object v1, p0, Lcom/tkay/core/common/f$2$1$1;->b:Lcom/tkay/core/common/f$2$1;

    iget-object v1, v1, Lcom/tkay/core/common/f$2$1;->e:Lcom/tkay/core/common/f$2;

    iget-object v8, v1, Lcom/tkay/core/common/f$2;->a:Lcom/tkay/core/common/j;

    invoke-static/range {v2 .. v8}, Lcom/tkay/core/common/f;->a(Lcom/tkay/core/common/f;Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/core/c/d;Lcom/tkay/core/common/f/d;Lcom/tkay/core/common/j;)V

    .line 459
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception v1

    monitor-exit v0

    throw v1
.end method
