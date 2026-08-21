.class public abstract Lcom/kwad/components/core/webview/b/a/v;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/core/webview/c/a;


# instance fields
.field private WJ:Lcom/kwad/sdk/core/webview/c/c;

.field private WK:Ljava/util/concurrent/CopyOnWriteArrayList;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/concurrent/CopyOnWriteArrayList<",
            "Lcom/kwad/sdk/core/b;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    new-instance v0, Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-direct {v0}, Ljava/util/concurrent/CopyOnWriteArrayList;-><init>()V

    iput-object v0, p0, Lcom/kwad/components/core/webview/b/a/v;->WK:Ljava/util/concurrent/CopyOnWriteArrayList;

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/core/webview/b/a/v;)Lcom/kwad/sdk/core/webview/c/c;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/core/webview/b/a/v;->WJ:Lcom/kwad/sdk/core/webview/c/c;

    return-object p0
.end method


# virtual methods
.method public a(Ljava/lang/String;Lcom/kwad/sdk/core/webview/c/c;)V
    .locals 1

    iput-object p2, p0, Lcom/kwad/components/core/webview/b/a/v;->WJ:Lcom/kwad/sdk/core/webview/c/c;

    iget-object p1, p0, Lcom/kwad/components/core/webview/b/a/v;->WK:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {p1}, Ljava/util/concurrent/CopyOnWriteArrayList;->size()I

    move-result p1

    if-lez p1, :cond_0

    iget-object p1, p0, Lcom/kwad/components/core/webview/b/a/v;->WK:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {p1}, Ljava/util/concurrent/CopyOnWriteArrayList;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :goto_0
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result p2

    if-eqz p2, :cond_0

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object p2

    check-cast p2, Lcom/kwad/sdk/core/b;

    invoke-virtual {p0, p2}, Lcom/kwad/components/core/webview/b/a/v;->b(Lcom/kwad/sdk/core/b;)V

    iget-object v0, p0, Lcom/kwad/components/core/webview/b/a/v;->WK:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {v0, p2}, Ljava/util/concurrent/CopyOnWriteArrayList;->remove(Ljava/lang/Object;)Z

    goto :goto_0

    :cond_0
    return-void
.end method

.method public final b(Lcom/kwad/sdk/core/b;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/webview/b/a/v;->WJ:Lcom/kwad/sdk/core/webview/c/c;

    if-eqz v0, :cond_0

    new-instance v0, Lcom/kwad/components/core/webview/b/a/v$1;

    invoke-direct {v0, p0, p1}, Lcom/kwad/components/core/webview/b/a/v$1;-><init>(Lcom/kwad/components/core/webview/b/a/v;Lcom/kwad/sdk/core/b;)V

    invoke-static {v0}, Lcom/kwad/sdk/utils/bj;->runOnUiThread(Ljava/lang/Runnable;)V

    return-void

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/core/webview/b/a/v;->WK:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {v0, p1}, Ljava/util/concurrent/CopyOnWriteArrayList;->add(Ljava/lang/Object;)Z

    return-void
.end method

.method public onDestroy()V
    .locals 1

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/kwad/components/core/webview/b/a/v;->WJ:Lcom/kwad/sdk/core/webview/c/c;

    return-void
.end method
