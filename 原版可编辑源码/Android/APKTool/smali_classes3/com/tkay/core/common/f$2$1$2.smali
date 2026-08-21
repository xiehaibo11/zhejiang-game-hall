.class final Lcom/tkay/core/common/f$2$1$2;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/core/common/f$2$1;->b(Lcom/tkay/core/c/d;)V
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

    .line 482
    iput-object p1, p0, Lcom/tkay/core/common/f$2$1$2;->b:Lcom/tkay/core/common/f$2$1;

    iput-object p2, p0, Lcom/tkay/core/common/f$2$1$2;->a:Lcom/tkay/core/c/d;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 5

    .line 485
    iget-object v0, p0, Lcom/tkay/core/common/f$2$1$2;->b:Lcom/tkay/core/common/f$2$1;

    iget-object v0, v0, Lcom/tkay/core/common/f$2$1;->e:Lcom/tkay/core/common/f$2;

    iget-object v0, v0, Lcom/tkay/core/common/f$2;->h:Lcom/tkay/core/common/f;

    monitor-enter v0

    .line 487
    :try_start_0
    iget-object v1, p0, Lcom/tkay/core/common/f$2$1$2;->b:Lcom/tkay/core/common/f$2$1;

    iget-object v1, v1, Lcom/tkay/core/common/f$2$1;->e:Lcom/tkay/core/common/f$2;

    iget-object v1, v1, Lcom/tkay/core/common/f$2;->h:Lcom/tkay/core/common/f;

    iget-object v2, p0, Lcom/tkay/core/common/f$2$1$2;->a:Lcom/tkay/core/c/d;

    iget-object v3, p0, Lcom/tkay/core/common/f$2$1$2;->b:Lcom/tkay/core/common/f$2$1;

    iget-object v3, v3, Lcom/tkay/core/common/f$2$1;->c:Ljava/lang/String;

    iget-object v4, p0, Lcom/tkay/core/common/f$2$1$2;->b:Lcom/tkay/core/common/f$2$1;

    iget-object v4, v4, Lcom/tkay/core/common/f$2$1;->e:Lcom/tkay/core/common/f$2;

    iget-object v4, v4, Lcom/tkay/core/common/f$2;->b:Ljava/lang/String;

    invoke-static {v1, v2, v3, v4}, Lcom/tkay/core/common/f;->a(Lcom/tkay/core/common/f;Lcom/tkay/core/c/d;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v1

    .line 489
    :try_start_1
    invoke-virtual {v1}, Ljava/lang/Throwable;->printStackTrace()V

    .line 492
    :goto_0
    monitor-exit v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    return-void

    :catchall_1
    move-exception v1

    monitor-exit v0

    throw v1
.end method
