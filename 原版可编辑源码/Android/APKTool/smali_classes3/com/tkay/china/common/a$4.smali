.class final Lcom/tkay/china/common/a$4;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/china/common/a;->g()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/china/common/a;


# direct methods
.method constructor <init>(Lcom/tkay/china/common/a;)V
    .locals 0

    .line 801
    iput-object p1, p0, Lcom/tkay/china/common/a$4;->a:Lcom/tkay/china/common/a;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 6

    .line 804
    iget-object v0, p0, Lcom/tkay/china/common/a$4;->a:Lcom/tkay/china/common/a;

    invoke-static {v0}, Lcom/tkay/china/common/a;->f(Lcom/tkay/china/common/a;)Ljava/util/Map;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 805
    iget-object v0, p0, Lcom/tkay/china/common/a$4;->a:Lcom/tkay/china/common/a;

    invoke-static {v0}, Lcom/tkay/china/common/a;->f(Lcom/tkay/china/common/a;)Ljava/util/Map;

    move-result-object v0

    monitor-enter v0

    .line 806
    :try_start_0
    iget-object v1, p0, Lcom/tkay/china/common/a$4;->a:Lcom/tkay/china/common/a;

    invoke-static {v1}, Lcom/tkay/china/common/a;->f(Lcom/tkay/china/common/a;)Ljava/util/Map;

    move-result-object v1

    invoke-interface {v1}, Ljava/util/Map;->entrySet()Ljava/util/Set;

    move-result-object v1

    invoke-interface {v1}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v1

    .line 807
    :goto_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_0

    .line 808
    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/util/Map$Entry;

    .line 809
    invoke-interface {v2}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/tkay/china/common/a/e;

    .line 810
    sget-object v3, Lcom/tkay/china/common/a;->a:Ljava/lang/String;

    new-instance v4, Ljava/lang/StringBuilder;

    const-string v5, "("

    invoke-direct {v4, v5}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v5, v2, Lcom/tkay/china/common/a/e;->c:Ljava/lang/String;

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v5, ") retry to download"

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v3, v4}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 811
    invoke-virtual {v2}, Lcom/tkay/china/common/a/e;->e()V

    .line 812
    iget-object v3, p0, Lcom/tkay/china/common/a$4;->a:Lcom/tkay/china/common/a;

    invoke-virtual {v3, v2}, Lcom/tkay/china/common/a;->d(Lcom/tkay/china/common/a/e;)V

    .line 813
    invoke-interface {v1}, Ljava/util/Iterator;->remove()V

    goto :goto_0

    .line 815
    :cond_0
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception v1

    monitor-exit v0

    throw v1

    :cond_1
    return-void
.end method
