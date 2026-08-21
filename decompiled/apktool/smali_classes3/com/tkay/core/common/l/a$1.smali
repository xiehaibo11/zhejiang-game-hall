.class final Lcom/tkay/core/common/l/a$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/core/common/j/b;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/core/common/l/a;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/core/common/l/a;


# direct methods
.method constructor <init>(Lcom/tkay/core/common/l/a;)V
    .locals 0

    .line 20
    iput-object p1, p0, Lcom/tkay/core/common/l/a$1;->a:Lcom/tkay/core/common/l/a;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 1

    .line 23
    monitor-enter p0

    .line 24
    :try_start_0
    iget-object v0, p0, Lcom/tkay/core/common/l/a$1;->a:Lcom/tkay/core/common/l/a;

    invoke-static {v0}, Lcom/tkay/core/common/l/a;->a(Lcom/tkay/core/common/l/a;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 25
    iget-object v0, p0, Lcom/tkay/core/common/l/a$1;->a:Lcom/tkay/core/common/l/a;

    invoke-static {v0}, Lcom/tkay/core/common/l/a;->b(Lcom/tkay/core/common/l/a;)Z

    .line 26
    iget-object v0, p0, Lcom/tkay/core/common/l/a$1;->a:Lcom/tkay/core/common/l/a;

    invoke-virtual {v0}, Lcom/tkay/core/common/l/a;->b()V

    .line 28
    :cond_0
    monitor-exit p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method
