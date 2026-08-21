.class final Lcom/tkay/core/common/u$2;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/core/common/h/a/c$a;


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

.field final synthetic b:Lcom/tkay/core/common/u;


# direct methods
.method constructor <init>(Lcom/tkay/core/common/u;Lcom/tkay/core/common/f/n;)V
    .locals 0

    .line 105
    iput-object p1, p0, Lcom/tkay/core/common/u$2;->b:Lcom/tkay/core/common/u;

    iput-object p2, p0, Lcom/tkay/core/common/u$2;->a:Lcom/tkay/core/common/f/n;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Ljava/lang/Object;)V
    .locals 1

    .line 108
    iget-object p1, p0, Lcom/tkay/core/common/u$2;->b:Lcom/tkay/core/common/u;

    invoke-static {p1}, Lcom/tkay/core/common/u;->a(Lcom/tkay/core/common/u;)Ljava/lang/String;

    new-instance p1, Ljava/lang/StringBuilder;

    const-string v0, "re-send success.... "

    invoke-direct {p1, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v0, p0, Lcom/tkay/core/common/u$2;->a:Lcom/tkay/core/common/f/n;

    invoke-virtual {v0}, Lcom/tkay/core/common/f/n;->a()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 109
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object p1

    invoke-virtual {p1}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object p1

    invoke-static {p1}, Lcom/tkay/core/common/c/c;->a(Landroid/content/Context;)Lcom/tkay/core/common/c/c;

    move-result-object p1

    invoke-static {p1}, Lcom/tkay/core/common/c/g;->a(Lcom/tkay/core/common/c/b;)Lcom/tkay/core/common/c/g;

    move-result-object p1

    iget-object v0, p0, Lcom/tkay/core/common/u$2;->a:Lcom/tkay/core/common/f/n;

    invoke-virtual {p1, v0}, Lcom/tkay/core/common/c/g;->b(Lcom/tkay/core/common/f/n;)I

    .line 110
    iget-object p1, p0, Lcom/tkay/core/common/u$2;->b:Lcom/tkay/core/common/u;

    iget-object p1, p1, Lcom/tkay/core/common/u;->a:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {p1}, Ljava/util/concurrent/atomic/AtomicInteger;->decrementAndGet()I

    return-void
.end method

.method public final a(Ljava/lang/Throwable;)V
    .locals 2

    .line 115
    iget-object v0, p0, Lcom/tkay/core/common/u$2;->b:Lcom/tkay/core/common/u;

    invoke-static {v0}, Lcom/tkay/core/common/u;->a(Lcom/tkay/core/common/u;)Ljava/lang/String;

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "re-send fail.... "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v1, p0, Lcom/tkay/core/common/u$2;->a:Lcom/tkay/core/common/f/n;

    invoke-virtual {v1}, Lcom/tkay/core/common/f/n;->a()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "--error: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 116
    iget-object p1, p0, Lcom/tkay/core/common/u$2;->b:Lcom/tkay/core/common/u;

    iget-object p1, p1, Lcom/tkay/core/common/u;->a:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {p1}, Ljava/util/concurrent/atomic/AtomicInteger;->decrementAndGet()I

    return-void
.end method
