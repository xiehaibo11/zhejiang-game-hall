.class public final Lcom/tkay/expressad/exoplayer/d/c$a;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/expressad/exoplayer/d/c;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x19
    name = "a"
.end annotation

.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/expressad/exoplayer/d/c$a$a;
    }
.end annotation


# instance fields
.field private final a:Ljava/util/concurrent/CopyOnWriteArrayList;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/concurrent/CopyOnWriteArrayList<",
            "Lcom/tkay/expressad/exoplayer/d/c$a$a;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 57
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 58
    new-instance v0, Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-direct {v0}, Ljava/util/concurrent/CopyOnWriteArrayList;-><init>()V

    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/d/c$a;->a:Ljava/util/concurrent/CopyOnWriteArrayList;

    return-void
.end method


# virtual methods
.method public final a()V
    .locals 4

    .line 78
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/d/c$a;->a:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {v0}, Ljava/util/concurrent/CopyOnWriteArrayList;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/tkay/expressad/exoplayer/d/c$a$a;

    .line 79
    iget-object v2, v1, Lcom/tkay/expressad/exoplayer/d/c$a$a;->b:Lcom/tkay/expressad/exoplayer/d/c;

    .line 80
    iget-object v1, v1, Lcom/tkay/expressad/exoplayer/d/c$a$a;->a:Landroid/os/Handler;

    new-instance v3, Lcom/tkay/expressad/exoplayer/d/c$a$1;

    invoke-direct {v3, p0, v2}, Lcom/tkay/expressad/exoplayer/d/c$a$1;-><init>(Lcom/tkay/expressad/exoplayer/d/c$a;Lcom/tkay/expressad/exoplayer/d/c;)V

    invoke-virtual {v1, v3}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    goto :goto_0

    :cond_0
    return-void
.end method

.method public final a(Landroid/os/Handler;Lcom/tkay/expressad/exoplayer/d/c;)V
    .locals 2

    if-eqz p1, :cond_0

    if-eqz p2, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    .line 63
    :goto_0
    invoke-static {v0}, Lcom/tkay/expressad/exoplayer/k/a;->a(Z)V

    .line 64
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/d/c$a;->a:Ljava/util/concurrent/CopyOnWriteArrayList;

    new-instance v1, Lcom/tkay/expressad/exoplayer/d/c$a$a;

    invoke-direct {v1, p1, p2}, Lcom/tkay/expressad/exoplayer/d/c$a$a;-><init>(Landroid/os/Handler;Lcom/tkay/expressad/exoplayer/d/c;)V

    invoke-virtual {v0, v1}, Ljava/util/concurrent/CopyOnWriteArrayList;->add(Ljava/lang/Object;)Z

    return-void
.end method

.method public final a(Lcom/tkay/expressad/exoplayer/d/c;)V
    .locals 3

    .line 69
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/d/c$a;->a:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {v0}, Ljava/util/concurrent/CopyOnWriteArrayList;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_0
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/tkay/expressad/exoplayer/d/c$a$a;

    .line 70
    iget-object v2, v1, Lcom/tkay/expressad/exoplayer/d/c$a$a;->b:Lcom/tkay/expressad/exoplayer/d/c;

    if-ne v2, p1, :cond_0

    .line 71
    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/d/c$a;->a:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {v2, v1}, Ljava/util/concurrent/CopyOnWriteArrayList;->remove(Ljava/lang/Object;)Z

    goto :goto_0

    :cond_1
    return-void
.end method

.method public final a(Ljava/lang/Exception;)V
    .locals 4

    .line 92
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/d/c$a;->a:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {v0}, Ljava/util/concurrent/CopyOnWriteArrayList;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/tkay/expressad/exoplayer/d/c$a$a;

    .line 93
    iget-object v2, v1, Lcom/tkay/expressad/exoplayer/d/c$a$a;->b:Lcom/tkay/expressad/exoplayer/d/c;

    .line 94
    iget-object v1, v1, Lcom/tkay/expressad/exoplayer/d/c$a$a;->a:Landroid/os/Handler;

    new-instance v3, Lcom/tkay/expressad/exoplayer/d/c$a$2;

    invoke-direct {v3, p0, v2, p1}, Lcom/tkay/expressad/exoplayer/d/c$a$2;-><init>(Lcom/tkay/expressad/exoplayer/d/c$a;Lcom/tkay/expressad/exoplayer/d/c;Ljava/lang/Exception;)V

    invoke-virtual {v1, v3}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    goto :goto_0

    :cond_0
    return-void
.end method

.method public final b()V
    .locals 4

    .line 106
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/d/c$a;->a:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {v0}, Ljava/util/concurrent/CopyOnWriteArrayList;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/tkay/expressad/exoplayer/d/c$a$a;

    .line 107
    iget-object v2, v1, Lcom/tkay/expressad/exoplayer/d/c$a$a;->b:Lcom/tkay/expressad/exoplayer/d/c;

    .line 108
    iget-object v1, v1, Lcom/tkay/expressad/exoplayer/d/c$a$a;->a:Landroid/os/Handler;

    new-instance v3, Lcom/tkay/expressad/exoplayer/d/c$a$3;

    invoke-direct {v3, p0, v2}, Lcom/tkay/expressad/exoplayer/d/c$a$3;-><init>(Lcom/tkay/expressad/exoplayer/d/c$a;Lcom/tkay/expressad/exoplayer/d/c;)V

    invoke-virtual {v1, v3}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    goto :goto_0

    :cond_0
    return-void
.end method

.method public final c()V
    .locals 4

    .line 120
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/d/c$a;->a:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {v0}, Ljava/util/concurrent/CopyOnWriteArrayList;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/tkay/expressad/exoplayer/d/c$a$a;

    .line 121
    iget-object v2, v1, Lcom/tkay/expressad/exoplayer/d/c$a$a;->b:Lcom/tkay/expressad/exoplayer/d/c;

    .line 122
    iget-object v1, v1, Lcom/tkay/expressad/exoplayer/d/c$a$a;->a:Landroid/os/Handler;

    new-instance v3, Lcom/tkay/expressad/exoplayer/d/c$a$4;

    invoke-direct {v3, p0, v2}, Lcom/tkay/expressad/exoplayer/d/c$a$4;-><init>(Lcom/tkay/expressad/exoplayer/d/c$a;Lcom/tkay/expressad/exoplayer/d/c;)V

    invoke-virtual {v1, v3}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    goto :goto_0

    :cond_0
    return-void
.end method
