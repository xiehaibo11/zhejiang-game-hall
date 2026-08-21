.class final Lcom/tkay/expressad/reward/a/d$2;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/expressad/reward/a/c$c;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/reward/a/d;->c(Lcom/tkay/expressad/foundation/d/d;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Z

.field final synthetic b:Lcom/tkay/expressad/foundation/d/c;

.field final synthetic c:I

.field final synthetic d:Lcom/tkay/expressad/reward/a/d;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/reward/a/d;ZLcom/tkay/expressad/foundation/d/c;I)V
    .locals 0

    .line 1923
    iput-object p1, p0, Lcom/tkay/expressad/reward/a/d$2;->d:Lcom/tkay/expressad/reward/a/d;

    iput-boolean p2, p0, Lcom/tkay/expressad/reward/a/d$2;->a:Z

    iput-object p3, p0, Lcom/tkay/expressad/reward/a/d$2;->b:Lcom/tkay/expressad/foundation/d/c;

    iput p4, p0, Lcom/tkay/expressad/reward/a/d$2;->c:I

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/util/concurrent/CopyOnWriteArrayList;)V
    .locals 11
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "Ljava/util/concurrent/CopyOnWriteArrayList<",
            "Lcom/tkay/expressad/foundation/d/c;",
            ">;)V"
        }
    .end annotation

    .line 1927
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "Campaign download sucess: "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p4}, Ljava/util/concurrent/CopyOnWriteArrayList;->size()I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    .line 1928
    iget-object v0, p0, Lcom/tkay/expressad/reward/a/d$2;->d:Lcom/tkay/expressad/reward/a/d;

    const/4 v1, 0x1

    iput-boolean v1, v0, Lcom/tkay/expressad/reward/a/d;->p:Z

    if-eqz p4, :cond_0

    .line 1930
    invoke-virtual {p4}, Ljava/util/concurrent/CopyOnWriteArrayList;->size()I

    .line 1937
    :cond_0
    iget-boolean v0, p0, Lcom/tkay/expressad/reward/a/d$2;->a:Z

    if-nez v0, :cond_8

    .line 1939
    invoke-virtual {p4}, Ljava/util/concurrent/CopyOnWriteArrayList;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_1
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_7

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    move-object v5, v2

    check-cast v5, Lcom/tkay/expressad/foundation/d/c;

    if-eqz v5, :cond_2

    .line 1940
    invoke-virtual {v5}, Lcom/tkay/expressad/foundation/d/c;->M()Lcom/tkay/expressad/foundation/d/c$c;

    move-result-object v2

    if-eqz v2, :cond_2

    invoke-virtual {v5}, Lcom/tkay/expressad/foundation/d/c;->M()Lcom/tkay/expressad/foundation/d/c$c;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/expressad/foundation/d/c$c;->e()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_2

    invoke-virtual {v5}, Lcom/tkay/expressad/foundation/d/c;->M()Lcom/tkay/expressad/foundation/d/c$c;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/expressad/foundation/d/c$c;->e()Ljava/lang/String;

    move-result-object v2

    const-string v3, "cmpt=1"

    invoke-virtual {v2, v3}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_2

    iget-object v2, p0, Lcom/tkay/expressad/reward/a/d$2;->d:Lcom/tkay/expressad/reward/a/d;

    invoke-static {v2}, Lcom/tkay/expressad/reward/a/d;->i(Lcom/tkay/expressad/reward/a/d;)Landroid/os/Handler;

    move-result-object v2

    if-eqz v2, :cond_2

    .line 1942
    iget-object v2, p0, Lcom/tkay/expressad/reward/a/d$2;->d:Lcom/tkay/expressad/reward/a/d;

    invoke-static {v2}, Lcom/tkay/expressad/reward/a/d;->i(Lcom/tkay/expressad/reward/a/d;)Landroid/os/Handler;

    move-result-object v2

    new-instance v10, Lcom/tkay/expressad/reward/a/d$2$1;

    move-object v3, v10

    move-object v4, p0

    move-object v6, p1

    move-object v7, p2

    move-object v8, p3

    move-object v9, p4

    invoke-direct/range {v3 .. v9}, Lcom/tkay/expressad/reward/a/d$2$1;-><init>(Lcom/tkay/expressad/reward/a/d$2;Lcom/tkay/expressad/foundation/d/c;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/util/concurrent/CopyOnWriteArrayList;)V

    invoke-virtual {v2, v10}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    goto :goto_0

    .line 2032
    :cond_2
    iget-object v2, p0, Lcom/tkay/expressad/reward/a/d$2;->d:Lcom/tkay/expressad/reward/a/d;

    invoke-static {v2}, Lcom/tkay/expressad/reward/a/d;->e(Lcom/tkay/expressad/reward/a/d;)Ljava/util/concurrent/CopyOnWriteArrayList;

    move-result-object v3

    iget-boolean v4, p0, Lcom/tkay/expressad/reward/a/d$2;->a:Z

    iget v6, p0, Lcom/tkay/expressad/reward/a/d$2;->c:I

    invoke-virtual {v2, v3, v4, v6}, Lcom/tkay/expressad/reward/a/d;->a(Ljava/util/List;ZI)Z

    move-result v2

    const/4 v3, 0x5

    const/4 v4, 0x0

    if-eqz v2, :cond_4

    .line 2034
    new-instance v2, Ljava/lang/StringBuilder;

    const-string v5, "\u6a21\u677f\u52a0\u8f7d\u6210\u529f requestId "

    invoke-direct {v2, v5}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p4, v4}, Ljava/util/concurrent/CopyOnWriteArrayList;->get(I)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v4}, Lcom/tkay/expressad/foundation/d/c;->Z()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 2035
    iget-object v2, p0, Lcom/tkay/expressad/reward/a/d$2;->d:Lcom/tkay/expressad/reward/a/d;

    invoke-static {v2}, Lcom/tkay/expressad/reward/a/d;->f(Lcom/tkay/expressad/reward/a/d;)Ljava/lang/String;

    move-result-object v2

    iget-object v4, p0, Lcom/tkay/expressad/reward/a/d$2;->d:Lcom/tkay/expressad/reward/a/d;

    invoke-static {v4}, Lcom/tkay/expressad/reward/a/d;->g(Lcom/tkay/expressad/reward/a/d;)Ljava/util/List;

    move-result-object v4

    iget-object v5, p0, Lcom/tkay/expressad/reward/a/d$2;->d:Lcom/tkay/expressad/reward/a/d;

    invoke-static {v5}, Lcom/tkay/expressad/reward/a/d;->h(Lcom/tkay/expressad/reward/a/d;)Z

    invoke-static {v2, v4}, Lcom/tkay/expressad/reward/a/d;->a(Ljava/lang/String;Ljava/util/List;)V

    .line 2036
    iget-object v2, p0, Lcom/tkay/expressad/reward/a/d$2;->d:Lcom/tkay/expressad/reward/a/d;

    invoke-static {v2}, Lcom/tkay/expressad/reward/a/d;->i(Lcom/tkay/expressad/reward/a/d;)Landroid/os/Handler;

    move-result-object v2

    if-eqz v2, :cond_3

    .line 2037
    iget-object v2, p0, Lcom/tkay/expressad/reward/a/d$2;->d:Lcom/tkay/expressad/reward/a/d;

    invoke-static {v2}, Lcom/tkay/expressad/reward/a/d;->i(Lcom/tkay/expressad/reward/a/d;)Landroid/os/Handler;

    move-result-object v2

    invoke-virtual {v2, v3}, Landroid/os/Handler;->removeMessages(I)V

    .line 2039
    :cond_3
    iget-object v2, p0, Lcom/tkay/expressad/reward/a/d$2;->d:Lcom/tkay/expressad/reward/a/d;

    invoke-static {v2}, Lcom/tkay/expressad/reward/a/d;->c(Lcom/tkay/expressad/reward/a/d;)Lcom/tkay/expressad/reward/a/b;

    move-result-object v2

    if-eqz v2, :cond_1

    .line 2040
    iget-object v2, p0, Lcom/tkay/expressad/reward/a/d$2;->d:Lcom/tkay/expressad/reward/a/d;

    iget-boolean v2, v2, Lcom/tkay/expressad/reward/a/d;->s:Z

    if-nez v2, :cond_1

    .line 2041
    iget-object v2, p0, Lcom/tkay/expressad/reward/a/d$2;->d:Lcom/tkay/expressad/reward/a/d;

    iput-boolean v1, v2, Lcom/tkay/expressad/reward/a/d;->s:Z

    .line 2042
    iget-object v2, p0, Lcom/tkay/expressad/reward/a/d$2;->d:Lcom/tkay/expressad/reward/a/d;

    invoke-static {v2}, Lcom/tkay/expressad/reward/a/d;->f(Lcom/tkay/expressad/reward/a/d;)Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    .line 2045
    iget-object v2, p0, Lcom/tkay/expressad/reward/a/d$2;->d:Lcom/tkay/expressad/reward/a/d;

    invoke-static {v2}, Lcom/tkay/expressad/reward/a/d;->c(Lcom/tkay/expressad/reward/a/d;)Lcom/tkay/expressad/reward/a/b;

    move-result-object v2

    invoke-interface {v2}, Lcom/tkay/expressad/reward/a/b;->a()V

    goto/16 :goto_0

    .line 2051
    :cond_4
    new-instance v2, Ljava/lang/StringBuilder;

    const-string v6, "temp load fail requestId "

    invoke-direct {v2, v6}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p4, v4}, Ljava/util/concurrent/CopyOnWriteArrayList;->get(I)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v4}, Lcom/tkay/expressad/foundation/d/c;->Z()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 2052
    iget-object v2, p0, Lcom/tkay/expressad/reward/a/d$2;->d:Lcom/tkay/expressad/reward/a/d;

    invoke-static {v2}, Lcom/tkay/expressad/reward/a/d;->d(Lcom/tkay/expressad/reward/a/d;)Ljava/util/List;

    iget-object v2, p0, Lcom/tkay/expressad/reward/a/d$2;->d:Lcom/tkay/expressad/reward/a/d;

    invoke-static {v2}, Lcom/tkay/expressad/reward/a/d;->h(Lcom/tkay/expressad/reward/a/d;)Z

    .line 2053
    iget-object v2, p0, Lcom/tkay/expressad/reward/a/d$2;->d:Lcom/tkay/expressad/reward/a/d;

    invoke-static {v2}, Lcom/tkay/expressad/reward/a/d;->i(Lcom/tkay/expressad/reward/a/d;)Landroid/os/Handler;

    move-result-object v2

    if-eqz v2, :cond_5

    .line 2054
    iget-object v2, p0, Lcom/tkay/expressad/reward/a/d$2;->d:Lcom/tkay/expressad/reward/a/d;

    invoke-static {v2}, Lcom/tkay/expressad/reward/a/d;->i(Lcom/tkay/expressad/reward/a/d;)Landroid/os/Handler;

    move-result-object v2

    invoke-virtual {v2, v3}, Landroid/os/Handler;->removeMessages(I)V

    .line 2056
    :cond_5
    iget-object v2, p0, Lcom/tkay/expressad/reward/a/d$2;->d:Lcom/tkay/expressad/reward/a/d;

    invoke-static {v2}, Lcom/tkay/expressad/reward/a/d;->c(Lcom/tkay/expressad/reward/a/d;)Lcom/tkay/expressad/reward/a/b;

    move-result-object v2

    if-eqz v2, :cond_1

    .line 2057
    iget-object v2, p0, Lcom/tkay/expressad/reward/a/d$2;->d:Lcom/tkay/expressad/reward/a/d;

    iget-boolean v2, v2, Lcom/tkay/expressad/reward/a/d;->t:Z

    if-nez v2, :cond_1

    .line 2058
    iget-object v2, p0, Lcom/tkay/expressad/reward/a/d$2;->d:Lcom/tkay/expressad/reward/a/d;

    iput-boolean v1, v2, Lcom/tkay/expressad/reward/a/d;->t:Z

    .line 2059
    iget-object v2, p0, Lcom/tkay/expressad/reward/a/d$2;->d:Lcom/tkay/expressad/reward/a/d;

    invoke-static {v2}, Lcom/tkay/expressad/reward/a/d;->f(Lcom/tkay/expressad/reward/a/d;)Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_6

    if-eqz v5, :cond_6

    .line 2061
    invoke-virtual {v5}, Lcom/tkay/expressad/foundation/d/c;->aa()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_6

    .line 2062
    invoke-virtual {v5}, Lcom/tkay/expressad/foundation/d/c;->aa()Ljava/lang/String;

    .line 2066
    :cond_6
    iget-object v2, p0, Lcom/tkay/expressad/reward/a/d$2;->d:Lcom/tkay/expressad/reward/a/d;

    invoke-static {v2}, Lcom/tkay/expressad/reward/a/d;->c(Lcom/tkay/expressad/reward/a/d;)Lcom/tkay/expressad/reward/a/b;

    move-result-object v2

    const-string v3, "errorCode: 3503 errorMessage: have no temp but isReady false"

    invoke-interface {v2, v3}, Lcom/tkay/expressad/reward/a/b;->a(Ljava/lang/String;)V

    goto/16 :goto_0

    :cond_7
    return-void

    .line 2076
    :cond_8
    iget-object p1, p0, Lcom/tkay/expressad/reward/a/d$2;->d:Lcom/tkay/expressad/reward/a/d;

    iget-boolean p1, p1, Lcom/tkay/expressad/reward/a/d;->q:Z

    if-eqz p1, :cond_a

    iget-object p1, p0, Lcom/tkay/expressad/reward/a/d$2;->d:Lcom/tkay/expressad/reward/a/d;

    iget-boolean p1, p1, Lcom/tkay/expressad/reward/a/d;->r:Z

    if-nez p1, :cond_a

    iget-object p1, p0, Lcom/tkay/expressad/reward/a/d$2;->d:Lcom/tkay/expressad/reward/a/d;

    invoke-static {p1}, Lcom/tkay/expressad/reward/a/d;->i(Lcom/tkay/expressad/reward/a/d;)Landroid/os/Handler;

    move-result-object p1

    if-eqz p1, :cond_a

    .line 2078
    iget-object p1, p0, Lcom/tkay/expressad/reward/a/d$2;->d:Lcom/tkay/expressad/reward/a/d;

    iget-object p1, p1, Lcom/tkay/expressad/reward/a/d;->c:Ljava/lang/Object;

    monitor-enter p1

    .line 2079
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/reward/a/d$2;->d:Lcom/tkay/expressad/reward/a/d;

    iget-boolean v0, v0, Lcom/tkay/expressad/reward/a/d;->r:Z

    if-eqz v0, :cond_9

    .line 2080
    monitor-exit p1

    return-void

    .line 2082
    :cond_9
    iget-object v0, p0, Lcom/tkay/expressad/reward/a/d$2;->d:Lcom/tkay/expressad/reward/a/d;

    iput-boolean v1, v0, Lcom/tkay/expressad/reward/a/d;->r:Z

    .line 2084
    monitor-exit p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 2086
    iget-object p1, p0, Lcom/tkay/expressad/reward/a/d$2;->d:Lcom/tkay/expressad/reward/a/d;

    invoke-static {p1}, Lcom/tkay/expressad/reward/a/d;->i(Lcom/tkay/expressad/reward/a/d;)Landroid/os/Handler;

    move-result-object p1

    new-instance v0, Lcom/tkay/expressad/reward/a/d$2$2;

    invoke-direct {v0, p0, p3, p2, p4}, Lcom/tkay/expressad/reward/a/d$2$2;-><init>(Lcom/tkay/expressad/reward/a/d$2;Ljava/lang/String;Ljava/lang/String;Ljava/util/concurrent/CopyOnWriteArrayList;)V

    invoke-virtual {p1, v0}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void

    :catchall_0
    move-exception p2

    .line 2084
    monitor-exit p1

    throw p2

    .line 2172
    :cond_a
    new-instance p1, Ljava/lang/StringBuilder;

    const-string p2, "Campaign download success:bid temp,big temp download fail: isCampaignTPLDownloadSuccess: "

    invoke-direct {p1, p2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object p2, p0, Lcom/tkay/expressad/reward/a/d$2;->d:Lcom/tkay/expressad/reward/a/d;

    iget-boolean p2, p2, Lcom/tkay/expressad/reward/a/d;->q:Z

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string p2, "  isCampaignTPLProLoad: "

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object p2, p0, Lcom/tkay/expressad/reward/a/d$2;->d:Lcom/tkay/expressad/reward/a/d;

    iget-boolean p2, p2, Lcom/tkay/expressad/reward/a/d;->r:Z

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    return-void
.end method

.method public final a(Ljava/lang/String;Ljava/util/concurrent/CopyOnWriteArrayList;)V
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Ljava/util/concurrent/CopyOnWriteArrayList<",
            "Lcom/tkay/expressad/foundation/d/c;",
            ">;)V"
        }
    .end annotation

    .line 2179
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "Campaign download fail: "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p2}, Ljava/util/concurrent/CopyOnWriteArrayList;->size()I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    .line 2182
    iget-object v0, p0, Lcom/tkay/expressad/reward/a/d$2;->d:Lcom/tkay/expressad/reward/a/d;

    const/4 v1, 0x0

    iput-boolean v1, v0, Lcom/tkay/expressad/reward/a/d;->p:Z

    if-eqz p2, :cond_0

    .line 2183
    invoke-virtual {p2}, Ljava/util/concurrent/CopyOnWriteArrayList;->size()I

    .line 2189
    :cond_0
    iget-object p2, p0, Lcom/tkay/expressad/reward/a/d$2;->d:Lcom/tkay/expressad/reward/a/d;

    invoke-static {p2}, Lcom/tkay/expressad/reward/a/d;->c(Lcom/tkay/expressad/reward/a/d;)Lcom/tkay/expressad/reward/a/b;

    move-result-object p2

    if-eqz p2, :cond_1

    iget-object p2, p0, Lcom/tkay/expressad/reward/a/d$2;->d:Lcom/tkay/expressad/reward/a/d;

    invoke-static {p2}, Lcom/tkay/expressad/reward/a/d;->i(Lcom/tkay/expressad/reward/a/d;)Landroid/os/Handler;

    move-result-object p2

    if-eqz p2, :cond_1

    .line 2190
    iget-object p2, p0, Lcom/tkay/expressad/reward/a/d$2;->d:Lcom/tkay/expressad/reward/a/d;

    invoke-static {p2}, Lcom/tkay/expressad/reward/a/d;->i(Lcom/tkay/expressad/reward/a/d;)Landroid/os/Handler;

    move-result-object p2

    new-instance v0, Lcom/tkay/expressad/reward/a/d$2$3;

    invoke-direct {v0, p0, p1}, Lcom/tkay/expressad/reward/a/d$2$3;-><init>(Lcom/tkay/expressad/reward/a/d$2;Ljava/lang/String;)V

    invoke-virtual {p2, v0}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    :cond_1
    return-void
.end method
