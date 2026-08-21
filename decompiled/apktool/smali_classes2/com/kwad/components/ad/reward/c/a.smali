.class public Lcom/kwad/components/ad/reward/c/a;
.super Ljava/lang/Object;


# static fields
.field private static volatile ro:Lcom/kwad/components/ad/reward/c/a;


# instance fields
.field private qx:Lcom/kwad/components/ad/reward/j;

.field private rp:Lcom/kwad/components/ad/reward/c/b;

.field private volatile rq:Z

.field private volatile rr:Z

.field private rs:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/lang/ref/WeakReference<",
            "Lcom/kwad/components/core/webview/jshandler/e;",
            ">;>;"
        }
    .end annotation
.end field


# direct methods
.method private constructor <init>()V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/kwad/components/ad/reward/c/a;->rq:Z

    iput-boolean v0, p0, Lcom/kwad/components/ad/reward/c/a;->rr:Z

    new-instance v0, Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-direct {v0}, Ljava/util/concurrent/CopyOnWriteArrayList;-><init>()V

    iput-object v0, p0, Lcom/kwad/components/ad/reward/c/a;->rs:Ljava/util/List;

    return-void
.end method

.method public static gW()Lcom/kwad/components/ad/reward/c/a;
    .locals 2

    sget-object v0, Lcom/kwad/components/ad/reward/c/a;->ro:Lcom/kwad/components/ad/reward/c/a;

    if-nez v0, :cond_1

    const-class v0, Lcom/kwad/components/ad/reward/c/a;

    monitor-enter v0

    :try_start_0
    sget-object v1, Lcom/kwad/components/ad/reward/c/a;->ro:Lcom/kwad/components/ad/reward/c/a;

    if-nez v1, :cond_0

    new-instance v1, Lcom/kwad/components/ad/reward/c/a;

    invoke-direct {v1}, Lcom/kwad/components/ad/reward/c/a;-><init>()V

    sput-object v1, Lcom/kwad/components/ad/reward/c/a;->ro:Lcom/kwad/components/ad/reward/c/a;

    :cond_0
    monitor-exit v0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1

    :cond_1
    :goto_0
    sget-object v0, Lcom/kwad/components/ad/reward/c/a;->ro:Lcom/kwad/components/ad/reward/c/a;

    return-object v0
.end method

.method private declared-synchronized gY()Z
    .locals 2

    monitor-enter p0

    :try_start_0
    iget-object v0, p0, Lcom/kwad/components/ad/reward/c/a;->rp:Lcom/kwad/components/ad/reward/c/b;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/reward/c/a;->rp:Lcom/kwad/components/ad/reward/c/b;

    iget v0, v0, Lcom/kwad/components/ad/reward/c/b;->rw:I

    sget v1, Lcom/kwad/components/ad/reward/c/b;->rt:I
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-ne v0, v1, :cond_0

    const/4 v0, 0x1

    :goto_0
    monitor-exit p0

    return v0

    :cond_0
    const/4 v0, 0x0

    goto :goto_0

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method


# virtual methods
.method public final O(Landroid/content/Context;)V
    .locals 3

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/c/a;->gY()Z

    move-result v0

    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "checkStatusAndToast isCurrentHadExtra: "

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v2, ", hadToast: "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-boolean v2, p0, Lcom/kwad/components/ad/reward/c/a;->rr:Z

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "CurrentExtraRewardHolder"

    invoke-static {v2, v1}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    iget-boolean v1, p0, Lcom/kwad/components/ad/reward/c/a;->rr:Z

    if-nez v1, :cond_0

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/kwad/components/ad/reward/c/a;->rr:Z

    const-string v0, "\u606d\u559c\u83b7\u5f97\u7b2c2\u4efd\u5956\u52b1"

    invoke-static {p1, v0}, Lcom/kwad/sdk/utils/v;->L(Landroid/content/Context;Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public final a(Lcom/kwad/components/core/webview/jshandler/e;)V
    .locals 2

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "addGetNativeHandler: "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "CurrentExtraRewardHolder"

    invoke-static {v1, v0}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    if-eqz p1, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/reward/c/a;->rs:Ljava/util/List;

    new-instance v1, Ljava/lang/ref/WeakReference;

    invoke-direct {v1, p1}, Ljava/lang/ref/WeakReference;-><init>(Ljava/lang/Object;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    :cond_0
    return-void
.end method

.method public final declared-synchronized a(Lcom/kwad/sdk/core/response/model/AdTemplate;Lcom/kwad/components/ad/reward/c/b;)V
    .locals 4

    monitor-enter p0

    if-nez p1, :cond_0

    monitor-exit p0

    return-void

    :cond_0
    :try_start_0
    const-string v0, "CurrentExtraRewardHolder"

    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "updateExtraReward: "

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p2}, Lcom/kwad/components/ad/reward/c/b;->toJson()Lorg/json/JSONObject;

    move-result-object v2

    invoke-virtual {v2}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    iput-object p2, p0, Lcom/kwad/components/ad/reward/c/a;->rp:Lcom/kwad/components/ad/reward/c/b;

    iget p2, p2, Lcom/kwad/components/ad/reward/c/b;->rw:I

    sget v0, Lcom/kwad/components/ad/reward/c/b;->rt:I

    if-ne p2, v0, :cond_1

    iget-boolean p2, p0, Lcom/kwad/components/ad/reward/c/a;->rq:Z

    if-nez p2, :cond_1

    const/4 p2, 0x1

    iput-boolean p2, p0, Lcom/kwad/components/ad/reward/c/a;->rq:Z

    iget-object p2, p0, Lcom/kwad/components/ad/reward/c/a;->rp:Lcom/kwad/components/ad/reward/c/b;

    invoke-virtual {p1}, Lcom/kwad/sdk/core/response/model/AdTemplate;->getUniqueId()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy$a;->A(Ljava/lang/String;)Lcom/kwad/sdk/api/KsRewardVideoAd$RewardAdInteractionListener;

    move-result-object v0

    invoke-static {p2, v0}, Lcom/kwad/components/ad/reward/c/c;->a(Lcom/kwad/components/ad/reward/c/b;Lcom/kwad/sdk/api/KsRewardVideoAd$RewardAdInteractionListener;)V

    invoke-static {p1}, Lcom/kwad/sdk/core/report/a;->aH(Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    :cond_1
    iget-object p1, p0, Lcom/kwad/components/ad/reward/c/a;->rs:Ljava/util/List;

    invoke-interface {p1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :goto_0
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result p2

    if-eqz p2, :cond_3

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object p2

    check-cast p2, Ljava/lang/ref/WeakReference;

    invoke-virtual {p2}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v0

    if-nez v0, :cond_2

    iget-object v0, p0, Lcom/kwad/components/ad/reward/c/a;->rs:Ljava/util/List;

    invoke-interface {v0, p2}, Ljava/util/List;->remove(Ljava/lang/Object;)Z

    goto :goto_0

    :cond_2
    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/c/a;->gX()Lcom/kwad/components/ad/reward/c/b;

    move-result-object v0

    const-string v1, "CurrentExtraRewardHolder"

    new-instance v2, Ljava/lang/StringBuilder;

    const-string v3, "GetNativeDataHandler callback: "

    invoke-direct {v2, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0}, Lcom/kwad/components/ad/reward/c/b;->toJson()Lorg/json/JSONObject;

    move-result-object v3

    invoke-virtual {v3}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {p2}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object p2

    check-cast p2, Lcom/kwad/components/core/webview/jshandler/e;

    invoke-virtual {p2, v0}, Lcom/kwad/components/core/webview/jshandler/e;->a(Lcom/kwad/sdk/core/response/a/a;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :cond_3
    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method public final declared-synchronized d(Lcom/kwad/sdk/core/response/model/AdTemplate;I)V
    .locals 3

    monitor-enter p0

    :try_start_0
    const-string v0, "CurrentExtraRewardHolder"

    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "updateExtraReward: "

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/c/a;->qx:Lcom/kwad/components/ad/reward/j;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/reward/c/a;->qx:Lcom/kwad/components/ad/reward/j;

    invoke-virtual {v0}, Lcom/kwad/components/ad/reward/j;->gc()Z

    move-result v0

    if-eqz v0, :cond_0

    sget v0, Lcom/kwad/components/ad/reward/c/b;->STATUS_NONE:I

    if-ne p2, v0, :cond_0

    const-string p1, "CurrentExtraRewardHolder"

    const-string p2, "updateExtraReward: cant update to status 2"

    invoke-static {p1, p2}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    monitor-exit p0

    return-void

    :cond_0
    :try_start_1
    invoke-static {}, Lcom/kwad/components/ad/reward/c/a;->gW()Lcom/kwad/components/ad/reward/c/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/components/ad/reward/c/a;->gX()Lcom/kwad/components/ad/reward/c/b;

    move-result-object v0

    invoke-virtual {v0, p2}, Lcom/kwad/components/ad/reward/c/b;->L(I)V

    invoke-static {}, Lcom/kwad/components/ad/reward/c/a;->gW()Lcom/kwad/components/ad/reward/c/a;

    move-result-object p2

    invoke-virtual {p2, p1, v0}, Lcom/kwad/components/ad/reward/c/a;->a(Lcom/kwad/sdk/core/response/model/AdTemplate;Lcom/kwad/components/ad/reward/c/b;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method public final declared-synchronized gX()Lcom/kwad/components/ad/reward/c/b;
    .locals 3

    monitor-enter p0

    :try_start_0
    iget-object v0, p0, Lcom/kwad/components/ad/reward/c/a;->rp:Lcom/kwad/components/ad/reward/c/b;

    if-nez v0, :cond_0

    invoke-static {}, Lcom/kwad/components/ad/reward/c/c;->ha()Lcom/kwad/components/ad/reward/c/b;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/ad/reward/c/a;->rp:Lcom/kwad/components/ad/reward/c/b;

    const/4 v1, 0x0

    iput v1, v0, Lcom/kwad/components/ad/reward/c/b;->rw:I

    :cond_0
    const-string v0, "CurrentExtraRewardHolder"

    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "getCurrentExtraReward: "

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v2, p0, Lcom/kwad/components/ad/reward/c/a;->rp:Lcom/kwad/components/ad/reward/c/b;

    iget v2, v2, Lcom/kwad/components/ad/reward/c/b;->rw:I

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/c/a;->rp:Lcom/kwad/components/ad/reward/c/b;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    monitor-exit p0

    return-object v0

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method

.method public final declared-synchronized reset()V
    .locals 2

    monitor-enter p0

    const/4 v0, 0x0

    :try_start_0
    iput-object v0, p0, Lcom/kwad/components/ad/reward/c/a;->rp:Lcom/kwad/components/ad/reward/c/b;

    const/4 v1, 0x0

    iput-boolean v1, p0, Lcom/kwad/components/ad/reward/c/a;->rr:Z

    iput-boolean v1, p0, Lcom/kwad/components/ad/reward/c/a;->rq:Z

    iput-object v0, p0, Lcom/kwad/components/ad/reward/c/a;->qx:Lcom/kwad/components/ad/reward/j;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    monitor-exit p0

    return-void

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method

.method public final setCallerContext(Lcom/kwad/components/ad/reward/j;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/reward/c/a;->qx:Lcom/kwad/components/ad/reward/j;

    return-void
.end method
