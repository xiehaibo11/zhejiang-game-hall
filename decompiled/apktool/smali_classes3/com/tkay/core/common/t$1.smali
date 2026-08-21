.class final Lcom/tkay/core/common/t$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/core/common/h/k;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/core/common/t;->a(Lcom/tkay/core/common/f/v;Z)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/core/common/f/v;

.field final synthetic b:Z

.field final synthetic c:Lcom/tkay/core/common/t;


# direct methods
.method constructor <init>(Lcom/tkay/core/common/t;Lcom/tkay/core/common/f/v;Z)V
    .locals 0

    .line 162
    iput-object p1, p0, Lcom/tkay/core/common/t$1;->c:Lcom/tkay/core/common/t;

    iput-object p2, p0, Lcom/tkay/core/common/t$1;->a:Lcom/tkay/core/common/f/v;

    iput-boolean p3, p0, Lcom/tkay/core/common/t$1;->b:Z

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onLoadCanceled(I)V
    .locals 2

    .line 201
    iget-object p1, p0, Lcom/tkay/core/common/t$1;->c:Lcom/tkay/core/common/t;

    monitor-enter p1

    .line 203
    :try_start_0
    iget-object v0, p0, Lcom/tkay/core/common/t$1;->c:Lcom/tkay/core/common/t;

    invoke-static {v0}, Lcom/tkay/core/common/t;->a(Lcom/tkay/core/common/t;)Ljava/util/List;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/core/common/t$1;->a:Lcom/tkay/core/common/f/v;

    iget-object v1, v1, Lcom/tkay/core/common/f/v;->a:Ljava/lang/String;

    invoke-interface {v0, v1}, Ljava/util/List;->remove(Ljava/lang/Object;)Z

    .line 204
    monitor-exit p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception v0

    monitor-exit p1

    throw v0
.end method

.method public final onLoadError(ILjava/lang/String;Lcom/tkay/core/api/AdError;)V
    .locals 0

    .line 186
    sget-object p1, Lcom/tkay/core/common/t;->a:Ljava/lang/String;

    new-instance p1, Ljava/lang/StringBuilder;

    const-string p2, "resendNoticeUrl:  send notice failed: "

    invoke-direct {p1, p2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object p2, p0, Lcom/tkay/core/common/t$1;->a:Lcom/tkay/core/common/f/v;

    invoke-virtual {p2}, Lcom/tkay/core/common/f/v;->a()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 187
    iget-object p1, p0, Lcom/tkay/core/common/t$1;->c:Lcom/tkay/core/common/t;

    monitor-enter p1

    .line 190
    :try_start_0
    iget-object p2, p0, Lcom/tkay/core/common/t$1;->c:Lcom/tkay/core/common/t;

    invoke-static {p2}, Lcom/tkay/core/common/t;->a(Lcom/tkay/core/common/t;)Ljava/util/List;

    move-result-object p2

    iget-object p3, p0, Lcom/tkay/core/common/t$1;->a:Lcom/tkay/core/common/f/v;

    iget-object p3, p3, Lcom/tkay/core/common/f/v;->a:Ljava/lang/String;

    invoke-interface {p2, p3}, Ljava/util/List;->remove(Ljava/lang/Object;)Z

    .line 192
    iget-boolean p2, p0, Lcom/tkay/core/common/t$1;->b:Z

    if-nez p2, :cond_0

    .line 194
    iget-object p2, p0, Lcom/tkay/core/common/t$1;->c:Lcom/tkay/core/common/t;

    iget-object p3, p0, Lcom/tkay/core/common/t$1;->a:Lcom/tkay/core/common/f/v;

    invoke-static {p2, p3}, Lcom/tkay/core/common/t;->b(Lcom/tkay/core/common/t;Lcom/tkay/core/common/f/v;)V

    .line 196
    :cond_0
    monitor-exit p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p2

    monitor-exit p1

    throw p2
.end method

.method public final onLoadFinish(ILjava/lang/Object;)V
    .locals 1

    .line 171
    sget-object p1, Lcom/tkay/core/common/t;->a:Ljava/lang/String;

    new-instance p1, Ljava/lang/StringBuilder;

    const-string p2, "resendNoticeUrl:  send notice success: "

    invoke-direct {p1, p2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object p2, p0, Lcom/tkay/core/common/t$1;->a:Lcom/tkay/core/common/f/v;

    invoke-virtual {p2}, Lcom/tkay/core/common/f/v;->a()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 172
    iget-object p1, p0, Lcom/tkay/core/common/t$1;->c:Lcom/tkay/core/common/t;

    monitor-enter p1

    .line 175
    :try_start_0
    iget-object p2, p0, Lcom/tkay/core/common/t$1;->c:Lcom/tkay/core/common/t;

    invoke-static {p2}, Lcom/tkay/core/common/t;->a(Lcom/tkay/core/common/t;)Ljava/util/List;

    move-result-object p2

    iget-object v0, p0, Lcom/tkay/core/common/t$1;->a:Lcom/tkay/core/common/f/v;

    iget-object v0, v0, Lcom/tkay/core/common/f/v;->a:Ljava/lang/String;

    invoke-interface {p2, v0}, Ljava/util/List;->remove(Ljava/lang/Object;)Z

    .line 177
    iget-boolean p2, p0, Lcom/tkay/core/common/t$1;->b:Z

    if-eqz p2, :cond_0

    .line 179
    iget-object p2, p0, Lcom/tkay/core/common/t$1;->c:Lcom/tkay/core/common/t;

    iget-object v0, p0, Lcom/tkay/core/common/t$1;->a:Lcom/tkay/core/common/f/v;

    invoke-static {p2, v0}, Lcom/tkay/core/common/t;->a(Lcom/tkay/core/common/t;Lcom/tkay/core/common/f/v;)V

    .line 181
    :cond_0
    monitor-exit p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p2

    monitor-exit p1

    throw p2
.end method

.method public final onLoadStart(I)V
    .locals 0

    return-void
.end method
