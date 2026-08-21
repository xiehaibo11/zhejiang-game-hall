.class final Lcom/kwad/components/core/webview/b/a/k$1$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/core/webview/b/a/k$1;->E(J)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic WD:J

.field final synthetic WE:Lcom/kwad/components/core/webview/b/a/k$1;


# direct methods
.method constructor <init>(Lcom/kwad/components/core/webview/b/a/k$1;J)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/core/webview/b/a/k$1$1;->WE:Lcom/kwad/components/core/webview/b/a/k$1;

    iput-wide p2, p0, Lcom/kwad/components/core/webview/b/a/k$1$1;->WD:J

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 3

    new-instance v0, Lcom/kwad/components/core/webview/b/a/k$a;

    const/4 v1, 0x0

    invoke-direct {v0, v1}, Lcom/kwad/components/core/webview/b/a/k$a;-><init>(B)V

    iget-wide v1, p0, Lcom/kwad/components/core/webview/b/a/k$1$1;->WD:J

    iput-wide v1, v0, Lcom/kwad/components/core/webview/b/a/k$a;->creativeId:J

    iget-object v1, p0, Lcom/kwad/components/core/webview/b/a/k$1$1;->WE:Lcom/kwad/components/core/webview/b/a/k$1;

    iget-object v1, v1, Lcom/kwad/components/core/webview/b/a/k$1;->WC:Lcom/kwad/components/core/webview/b/a/k;

    invoke-static {v1}, Lcom/kwad/components/core/webview/b/a/k;->a(Lcom/kwad/components/core/webview/b/a/k;)Lcom/kwad/sdk/core/webview/c/c;

    move-result-object v1

    invoke-interface {v1, v0}, Lcom/kwad/sdk/core/webview/c/c;->a(Lcom/kwad/sdk/core/b;)V

    return-void
.end method
