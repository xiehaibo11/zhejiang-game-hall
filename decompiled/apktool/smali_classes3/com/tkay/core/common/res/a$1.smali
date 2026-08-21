.class final Lcom/tkay/core/common/res/a$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/util/concurrent/Callable;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/core/common/res/a;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Object;",
        "Ljava/util/concurrent/Callable<",
        "Ljava/lang/Void;",
        ">;"
    }
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/core/common/res/a;


# direct methods
.method constructor <init>(Lcom/tkay/core/common/res/a;)V
    .locals 0

    .line 240
    iput-object p1, p0, Lcom/tkay/core/common/res/a$1;->a:Lcom/tkay/core/common/res/a;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private a()Ljava/lang/Void;
    .locals 3

    .line 243
    iget-object v0, p0, Lcom/tkay/core/common/res/a$1;->a:Lcom/tkay/core/common/res/a;

    monitor-enter v0

    .line 244
    :try_start_0
    iget-object v1, p0, Lcom/tkay/core/common/res/a$1;->a:Lcom/tkay/core/common/res/a;

    invoke-static {v1}, Lcom/tkay/core/common/res/a;->a(Lcom/tkay/core/common/res/a;)Ljava/io/Writer;

    move-result-object v1

    const/4 v2, 0x0

    if-nez v1, :cond_0

    .line 245
    monitor-exit v0

    return-object v2

    .line 247
    :cond_0
    iget-object v1, p0, Lcom/tkay/core/common/res/a$1;->a:Lcom/tkay/core/common/res/a;

    invoke-static {v1}, Lcom/tkay/core/common/res/a;->b(Lcom/tkay/core/common/res/a;)V

    .line 248
    iget-object v1, p0, Lcom/tkay/core/common/res/a$1;->a:Lcom/tkay/core/common/res/a;

    invoke-static {v1}, Lcom/tkay/core/common/res/a;->c(Lcom/tkay/core/common/res/a;)Z

    move-result v1

    if-eqz v1, :cond_1

    .line 249
    iget-object v1, p0, Lcom/tkay/core/common/res/a$1;->a:Lcom/tkay/core/common/res/a;

    invoke-static {v1}, Lcom/tkay/core/common/res/a;->d(Lcom/tkay/core/common/res/a;)V

    .line 250
    iget-object v1, p0, Lcom/tkay/core/common/res/a$1;->a:Lcom/tkay/core/common/res/a;

    invoke-static {v1}, Lcom/tkay/core/common/res/a;->e(Lcom/tkay/core/common/res/a;)I

    .line 252
    :cond_1
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object v2

    :catchall_0
    move-exception v1

    monitor-exit v0

    throw v1
.end method


# virtual methods
.method public final synthetic call()Ljava/lang/Object;
    .locals 1

    .line 240
    invoke-direct {p0}, Lcom/tkay/core/common/res/a$1;->a()Ljava/lang/Void;

    move-result-object v0

    return-object v0
.end method
