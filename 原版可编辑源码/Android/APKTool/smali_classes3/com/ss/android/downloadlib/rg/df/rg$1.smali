.class Lcom/ss/android/downloadlib/rg/df/rg$1;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/content/ServiceConnection;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/ss/android/downloadlib/rg/df/rg;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic rg:Lcom/ss/android/downloadlib/rg/df/rg;


# direct methods
.method constructor <init>(Lcom/ss/android/downloadlib/rg/df/rg;)V
    .locals 0

    .line 42
    iput-object p1, p0, Lcom/ss/android/downloadlib/rg/df/rg$1;->rg:Lcom/ss/android/downloadlib/rg/df/rg;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onServiceConnected(Landroid/content/ComponentName;Landroid/os/IBinder;)V
    .locals 2

    .line 44
    iget-object p1, p0, Lcom/ss/android/downloadlib/rg/df/rg$1;->rg:Lcom/ss/android/downloadlib/rg/df/rg;

    iget-object p1, p1, Lcom/ss/android/downloadlib/rg/df/rg;->q:Ljava/lang/Object;

    monitor-enter p1

    .line 46
    :try_start_0
    iget-object v0, p0, Lcom/ss/android/downloadlib/rg/df/rg$1;->rg:Lcom/ss/android/downloadlib/rg/df/rg;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/ss/android/downloadlib/rg/df/rg;->rg(Z)V

    .line 47
    iget-object v0, p0, Lcom/ss/android/downloadlib/rg/df/rg$1;->rg:Lcom/ss/android/downloadlib/rg/df/rg;

    invoke-static {p2}, Lcom/ss/android/downloadlib/rg/df/q$rg;->rg(Landroid/os/IBinder;)Lcom/ss/android/downloadlib/rg/df/q;

    move-result-object p2

    iput-object p2, v0, Lcom/ss/android/downloadlib/rg/df/rg;->rg:Lcom/ss/android/downloadlib/rg/df/q;

    .line 48
    iget-object p2, p0, Lcom/ss/android/downloadlib/rg/df/rg$1;->rg:Lcom/ss/android/downloadlib/rg/df/rg;

    invoke-virtual {p2}, Lcom/ss/android/downloadlib/rg/df/rg;->q()V

    .line 49
    iget-object p2, p0, Lcom/ss/android/downloadlib/rg/df/rg$1;->rg:Lcom/ss/android/downloadlib/rg/df/rg;

    iget-object p2, p2, Lcom/ss/android/downloadlib/rg/df/rg;->df:Ljava/util/List;

    invoke-interface {p2}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p2

    :goto_0
    invoke-interface {p2}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-interface {p2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/ss/android/downloadlib/rg/df/rg$rg;

    .line 50
    invoke-interface {v0}, Lcom/ss/android/downloadlib/rg/df/rg$rg;->rg()V

    goto :goto_0

    .line 52
    :cond_0
    monitor-exit p1

    return-void

    :catchall_0
    move-exception p2

    monitor-exit p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p2
.end method

.method public onServiceDisconnected(Landroid/content/ComponentName;)V
    .locals 2

    .line 56
    iget-object p1, p0, Lcom/ss/android/downloadlib/rg/df/rg$1;->rg:Lcom/ss/android/downloadlib/rg/df/rg;

    iget-object p1, p1, Lcom/ss/android/downloadlib/rg/df/rg;->q:Ljava/lang/Object;

    monitor-enter p1

    .line 58
    :try_start_0
    iget-object v0, p0, Lcom/ss/android/downloadlib/rg/df/rg$1;->rg:Lcom/ss/android/downloadlib/rg/df/rg;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/ss/android/downloadlib/rg/df/rg;->rg(Z)V

    .line 59
    iget-object v0, p0, Lcom/ss/android/downloadlib/rg/df/rg$1;->rg:Lcom/ss/android/downloadlib/rg/df/rg;

    const/4 v1, 0x0

    iput-object v1, v0, Lcom/ss/android/downloadlib/rg/df/rg;->rg:Lcom/ss/android/downloadlib/rg/df/q;

    .line 60
    iget-object v0, p0, Lcom/ss/android/downloadlib/rg/df/rg$1;->rg:Lcom/ss/android/downloadlib/rg/df/rg;

    iget-object v0, v0, Lcom/ss/android/downloadlib/rg/df/rg;->df:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/ss/android/downloadlib/rg/df/rg$rg;

    .line 61
    invoke-interface {v1}, Lcom/ss/android/downloadlib/rg/df/rg$rg;->df()V

    goto :goto_0

    .line 63
    :cond_0
    monitor-exit p1

    return-void

    :catchall_0
    move-exception v0

    monitor-exit p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v0
.end method
