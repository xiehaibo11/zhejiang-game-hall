.class final Lcom/tkay/core/common/f$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/core/common/b/a;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/core/common/f;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/core/common/f;


# direct methods
.method constructor <init>(Lcom/tkay/core/common/f;)V
    .locals 0

    .line 94
    iput-object p1, p0, Lcom/tkay/core/common/f$1;->a:Lcom/tkay/core/common/f;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onAdLoadFail(Lcom/tkay/core/api/AdError;)V
    .locals 9

    .line 118
    iget-object v0, p0, Lcom/tkay/core/common/f$1;->a:Lcom/tkay/core/common/f;

    invoke-virtual {v0}, Lcom/tkay/core/common/f;->b()V

    .line 120
    iget-object v0, p0, Lcom/tkay/core/common/f$1;->a:Lcom/tkay/core/common/f;

    invoke-static {v0}, Lcom/tkay/core/common/f;->a(Lcom/tkay/core/common/f;)Ljava/lang/Object;

    move-result-object v0

    monitor-enter v0

    .line 121
    :try_start_0
    iget-object v1, p0, Lcom/tkay/core/common/f$1;->a:Lcom/tkay/core/common/f;

    invoke-static {v1}, Lcom/tkay/core/common/f;->b(Lcom/tkay/core/common/f;)Ljava/util/List;

    move-result-object v1

    invoke-interface {v1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v1

    .line 122
    :cond_0
    :goto_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_1

    .line 123
    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/tkay/core/common/b/a;

    if-eqz v2, :cond_0

    .line 125
    iget-object v3, p0, Lcom/tkay/core/common/f$1;->a:Lcom/tkay/core/common/f;

    iget-object v3, v3, Lcom/tkay/core/common/f;->c:Ljava/lang/String;

    iget-object v4, p0, Lcom/tkay/core/common/f$1;->a:Lcom/tkay/core/common/f;

    invoke-virtual {v4}, Lcom/tkay/core/common/f;->a()Ljava/lang/String;

    move-result-object v4

    sget-object v5, Lcom/tkay/core/common/b/f$i;->D:Ljava/lang/String;

    sget-object v6, Lcom/tkay/core/common/b/f$i;->m:Ljava/lang/String;

    new-instance v7, Ljava/lang/StringBuilder;

    const-string v8, "[listener:"

    invoke-direct {v7, v8}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v2}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v8, "]"

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    invoke-static {v3, v4, v5, v6, v7}, Lcom/tkay/core/common/l/n;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    .line 126
    invoke-interface {v2, p1}, Lcom/tkay/core/common/b/a;->onAdLoadFail(Lcom/tkay/core/api/AdError;)V

    .line 127
    invoke-interface {v1}, Ljava/util/Iterator;->remove()V

    goto :goto_0

    .line 130
    :cond_1
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 132
    iget-object v0, p0, Lcom/tkay/core/common/f$1;->a:Lcom/tkay/core/common/f;

    invoke-virtual {v0, p1}, Lcom/tkay/core/common/f;->b(Lcom/tkay/core/api/AdError;)V

    return-void

    :catchall_0
    move-exception p1

    .line 130
    monitor-exit v0

    throw p1
.end method

.method public final onAdLoaded()V
    .locals 9

    .line 97
    iget-object v0, p0, Lcom/tkay/core/common/f$1;->a:Lcom/tkay/core/common/f;

    invoke-static {v0}, Lcom/tkay/core/common/f;->a(Lcom/tkay/core/common/f;)Ljava/lang/Object;

    move-result-object v0

    monitor-enter v0

    .line 98
    :try_start_0
    iget-object v1, p0, Lcom/tkay/core/common/f$1;->a:Lcom/tkay/core/common/f;

    invoke-static {v1}, Lcom/tkay/core/common/f;->b(Lcom/tkay/core/common/f;)Ljava/util/List;

    move-result-object v1

    if-eqz v1, :cond_1

    .line 99
    iget-object v1, p0, Lcom/tkay/core/common/f$1;->a:Lcom/tkay/core/common/f;

    invoke-static {v1}, Lcom/tkay/core/common/f;->b(Lcom/tkay/core/common/f;)Ljava/util/List;

    move-result-object v1

    invoke-interface {v1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v1

    .line 100
    :cond_0
    :goto_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_1

    .line 101
    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/tkay/core/common/b/a;

    if-eqz v2, :cond_0

    .line 103
    iget-object v3, p0, Lcom/tkay/core/common/f$1;->a:Lcom/tkay/core/common/f;

    iget-object v3, v3, Lcom/tkay/core/common/f;->c:Ljava/lang/String;

    iget-object v4, p0, Lcom/tkay/core/common/f$1;->a:Lcom/tkay/core/common/f;

    invoke-virtual {v4}, Lcom/tkay/core/common/f;->a()Ljava/lang/String;

    move-result-object v4

    sget-object v5, Lcom/tkay/core/common/b/f$i;->D:Ljava/lang/String;

    sget-object v6, Lcom/tkay/core/common/b/f$i;->l:Ljava/lang/String;

    new-instance v7, Ljava/lang/StringBuilder;

    const-string v8, "[listener:"

    invoke-direct {v7, v8}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v2}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v8, "]"

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    invoke-static {v3, v4, v5, v6, v7}, Lcom/tkay/core/common/l/n;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    .line 104
    invoke-interface {v2}, Lcom/tkay/core/common/b/a;->onAdLoaded()V

    .line 105
    invoke-interface {v1}, Ljava/util/Iterator;->remove()V

    goto :goto_0

    .line 109
    :cond_1
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 111
    iget-object v0, p0, Lcom/tkay/core/common/f$1;->a:Lcom/tkay/core/common/f;

    invoke-virtual {v0}, Lcom/tkay/core/common/f;->l()V

    return-void

    :catchall_0
    move-exception v1

    .line 109
    monitor-exit v0

    throw v1
.end method
