.class final Lcom/tkay/core/common/u$3;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/core/common/h/k;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/core/common/u;->b()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/core/common/f/n;

.field final synthetic b:Lcom/tkay/core/common/h/n;

.field final synthetic c:Lcom/tkay/core/common/u;


# direct methods
.method constructor <init>(Lcom/tkay/core/common/u;Lcom/tkay/core/common/f/n;Lcom/tkay/core/common/h/n;)V
    .locals 0

    .line 127
    iput-object p1, p0, Lcom/tkay/core/common/u$3;->c:Lcom/tkay/core/common/u;

    iput-object p2, p0, Lcom/tkay/core/common/u$3;->a:Lcom/tkay/core/common/f/n;

    iput-object p3, p0, Lcom/tkay/core/common/u$3;->b:Lcom/tkay/core/common/h/n;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onLoadCanceled(I)V
    .locals 0

    .line 148
    iget-object p1, p0, Lcom/tkay/core/common/u$3;->c:Lcom/tkay/core/common/u;

    iget-object p1, p1, Lcom/tkay/core/common/u;->a:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {p1}, Ljava/util/concurrent/atomic/AtomicInteger;->decrementAndGet()I

    return-void
.end method

.method public final onLoadError(ILjava/lang/String;Lcom/tkay/core/api/AdError;)V
    .locals 0

    .line 142
    iget-object p1, p0, Lcom/tkay/core/common/u$3;->c:Lcom/tkay/core/common/u;

    invoke-static {p1}, Lcom/tkay/core/common/u;->a(Lcom/tkay/core/common/u;)Ljava/lang/String;

    new-instance p1, Ljava/lang/StringBuilder;

    const-string p3, "re-send fail.... "

    invoke-direct {p1, p3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object p3, p0, Lcom/tkay/core/common/u$3;->a:Lcom/tkay/core/common/f/n;

    invoke-virtual {p3}, Lcom/tkay/core/common/f/n;->a()Ljava/lang/String;

    move-result-object p3

    invoke-virtual {p1, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p3, "--error: "

    invoke-virtual {p1, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    if-eqz p2, :cond_0

    goto :goto_0

    :cond_0
    const-string p2, ""

    :goto_0
    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 143
    iget-object p1, p0, Lcom/tkay/core/common/u$3;->c:Lcom/tkay/core/common/u;

    iget-object p1, p1, Lcom/tkay/core/common/u;->a:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {p1}, Ljava/util/concurrent/atomic/AtomicInteger;->decrementAndGet()I

    return-void
.end method

.method public final onLoadFinish(ILjava/lang/Object;)V
    .locals 0

    .line 135
    iget-object p1, p0, Lcom/tkay/core/common/u$3;->c:Lcom/tkay/core/common/u;

    invoke-static {p1}, Lcom/tkay/core/common/u;->a(Lcom/tkay/core/common/u;)Ljava/lang/String;

    new-instance p1, Ljava/lang/StringBuilder;

    const-string p2, "re-send success.... "

    invoke-direct {p1, p2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object p2, p0, Lcom/tkay/core/common/u$3;->a:Lcom/tkay/core/common/f/n;

    invoke-virtual {p2}, Lcom/tkay/core/common/f/n;->a()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 136
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object p1

    invoke-virtual {p1}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object p1

    invoke-static {p1}, Lcom/tkay/core/common/c/c;->a(Landroid/content/Context;)Lcom/tkay/core/common/c/c;

    move-result-object p1

    invoke-static {p1}, Lcom/tkay/core/common/c/g;->a(Lcom/tkay/core/common/c/b;)Lcom/tkay/core/common/c/g;

    move-result-object p1

    iget-object p2, p0, Lcom/tkay/core/common/u$3;->b:Lcom/tkay/core/common/h/n;

    invoke-virtual {p2}, Lcom/tkay/core/common/h/n;->q()Lcom/tkay/core/common/f/n;

    move-result-object p2

    invoke-virtual {p1, p2}, Lcom/tkay/core/common/c/g;->b(Lcom/tkay/core/common/f/n;)I

    .line 137
    iget-object p1, p0, Lcom/tkay/core/common/u$3;->c:Lcom/tkay/core/common/u;

    iget-object p1, p1, Lcom/tkay/core/common/u;->a:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {p1}, Ljava/util/concurrent/atomic/AtomicInteger;->decrementAndGet()I

    return-void
.end method

.method public final onLoadStart(I)V
    .locals 0

    return-void
.end method
