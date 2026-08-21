.class final Lcom/tkay/core/common/m/d$a$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/core/common/m/d$a;->onAdDataLoaded()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/core/common/m/d$a;


# direct methods
.method constructor <init>(Lcom/tkay/core/common/m/d$a;)V
    .locals 0

    .line 489
    iput-object p1, p0, Lcom/tkay/core/common/m/d$a$1;->a:Lcom/tkay/core/common/m/d$a;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 2

    .line 492
    iget-object v0, p0, Lcom/tkay/core/common/m/d$a$1;->a:Lcom/tkay/core/common/m/d$a;

    monitor-enter v0

    .line 493
    :try_start_0
    iget-object v1, p0, Lcom/tkay/core/common/m/d$a$1;->a:Lcom/tkay/core/common/m/d$a;

    iget-object v1, v1, Lcom/tkay/core/common/m/d$a;->b:Lcom/tkay/core/common/m/d;

    if-eqz v1, :cond_0

    iget-object v1, p0, Lcom/tkay/core/common/m/d$a$1;->a:Lcom/tkay/core/common/m/d$a;

    iget-object v1, v1, Lcom/tkay/core/common/m/d$a;->a:Lcom/tkay/core/api/TYBaseAdAdapter;

    if-eqz v1, :cond_0

    .line 494
    iget-object v1, p0, Lcom/tkay/core/common/m/d$a$1;->a:Lcom/tkay/core/common/m/d$a;

    iget-object v1, v1, Lcom/tkay/core/common/m/d$a;->b:Lcom/tkay/core/common/m/d;

    invoke-static {v1}, Lcom/tkay/core/common/m/d;->d(Lcom/tkay/core/common/m/d;)V

    .line 496
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
