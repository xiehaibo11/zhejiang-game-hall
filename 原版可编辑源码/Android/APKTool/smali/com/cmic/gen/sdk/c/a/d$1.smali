.class Lcom/cmic/gen/sdk/c/a/d$1;
.super Ljava/lang/Object;
.source "WifiChangeInterceptor.java"

# interfaces
.implements Lcom/cmic/gen/sdk/e/r$a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/cmic/gen/sdk/c/a/d;->a(Lcom/cmic/gen/sdk/c/c/c;Lcom/cmic/gen/sdk/c/d/c;Lcom/cmic/gen/sdk/a;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/cmic/gen/sdk/a;

.field final synthetic b:Lcom/cmic/gen/sdk/c/c/c;

.field final synthetic c:Lcom/cmic/gen/sdk/c/d/c;

.field final synthetic d:Lcom/cmic/gen/sdk/e/r;

.field final synthetic e:Lcom/cmic/gen/sdk/c/a/d;

.field private final f:Ljava/util/concurrent/atomic/AtomicBoolean;


# direct methods
.method constructor <init>(Lcom/cmic/gen/sdk/c/a/d;Lcom/cmic/gen/sdk/a;Lcom/cmic/gen/sdk/c/c/c;Lcom/cmic/gen/sdk/c/d/c;Lcom/cmic/gen/sdk/e/r;)V
    .locals 0

    .line 38
    iput-object p1, p0, Lcom/cmic/gen/sdk/c/a/d$1;->e:Lcom/cmic/gen/sdk/c/a/d;

    iput-object p2, p0, Lcom/cmic/gen/sdk/c/a/d$1;->a:Lcom/cmic/gen/sdk/a;

    iput-object p3, p0, Lcom/cmic/gen/sdk/c/a/d$1;->b:Lcom/cmic/gen/sdk/c/c/c;

    iput-object p4, p0, Lcom/cmic/gen/sdk/c/a/d$1;->c:Lcom/cmic/gen/sdk/c/d/c;

    iput-object p5, p0, Lcom/cmic/gen/sdk/c/a/d$1;->d:Lcom/cmic/gen/sdk/e/r;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 39
    new-instance p1, Ljava/util/concurrent/atomic/AtomicBoolean;

    const/4 p2, 0x0

    invoke-direct {p1, p2}, Ljava/util/concurrent/atomic/AtomicBoolean;-><init>(Z)V

    iput-object p1, p0, Lcom/cmic/gen/sdk/c/a/d$1;->f:Ljava/util/concurrent/atomic/AtomicBoolean;

    return-void
.end method


# virtual methods
.method public a(Landroid/net/Network;Landroid/net/ConnectivityManager$NetworkCallback;)V
    .locals 7

    .line 43
    iget-object v0, p0, Lcom/cmic/gen/sdk/c/a/d$1;->f:Ljava/util/concurrent/atomic/AtomicBoolean;

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Ljava/util/concurrent/atomic/AtomicBoolean;->getAndSet(Z)Z

    move-result v0

    if-nez v0, :cond_0

    .line 44
    new-instance v0, Lcom/cmic/gen/sdk/c/a/d$1$1;

    const/4 v3, 0x0

    iget-object v4, p0, Lcom/cmic/gen/sdk/c/a/d$1;->a:Lcom/cmic/gen/sdk/a;

    move-object v1, v0

    move-object v2, p0

    move-object v5, p1

    move-object v6, p2

    invoke-direct/range {v1 .. v6}, Lcom/cmic/gen/sdk/c/a/d$1$1;-><init>(Lcom/cmic/gen/sdk/c/a/d$1;Landroid/content/Context;Lcom/cmic/gen/sdk/a;Landroid/net/Network;Landroid/net/ConnectivityManager$NetworkCallback;)V

    invoke-static {v0}, Lcom/cmic/gen/sdk/e/n;->a(Lcom/cmic/gen/sdk/e/n$a;)V

    :cond_0
    return-void
.end method
