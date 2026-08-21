.class final Lcom/kwad/components/core/page/b/a/g$2;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/components/core/webview/jshandler/ak$b;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/components/core/page/b/a/g;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic NB:Lcom/kwad/components/core/page/b/a/g;


# direct methods
.method constructor <init>(Lcom/kwad/components/core/page/b/a/g;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/core/page/b/a/g$2;->NB:Lcom/kwad/components/core/page/b/a/g;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final oW()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/page/b/a/g$2;->NB:Lcom/kwad/components/core/page/b/a/g;

    invoke-static {v0}, Lcom/kwad/components/core/page/b/a/g;->b(Lcom/kwad/components/core/page/b/a/g;)Lcom/kwad/components/core/webview/jshandler/ak;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/core/page/b/a/g$2;->NB:Lcom/kwad/components/core/page/b/a/g;

    invoke-static {v0}, Lcom/kwad/components/core/page/b/a/g;->b(Lcom/kwad/components/core/page/b/a/g;)Lcom/kwad/components/core/webview/jshandler/ak;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/components/core/webview/jshandler/ak;->ry()V

    :cond_0
    return-void
.end method
