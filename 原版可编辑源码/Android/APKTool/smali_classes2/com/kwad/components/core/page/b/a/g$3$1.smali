.class final Lcom/kwad/components/core/page/b/a/g$3$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/components/core/webview/jshandler/as$b;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/core/page/b/a/g$3;->a(Lcom/kwad/components/core/webview/a;Lcom/kwad/sdk/core/webview/b;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic NC:Lcom/kwad/components/core/page/b/a/g$3;


# direct methods
.method constructor <init>(Lcom/kwad/components/core/page/b/a/g$3;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/core/page/b/a/g$3$1;->NC:Lcom/kwad/components/core/page/b/a/g$3;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Lcom/kwad/components/core/webview/jshandler/as$a;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/page/b/a/g$3$1;->NC:Lcom/kwad/components/core/page/b/a/g$3;

    iget-object v0, v0, Lcom/kwad/components/core/page/b/a/g$3;->NB:Lcom/kwad/components/core/page/b/a/g;

    iget-object v0, v0, Lcom/kwad/components/core/page/b/a/g;->MW:Lcom/kwad/components/core/page/b/a/b;

    iget-object v0, v0, Lcom/kwad/components/core/page/b/a/b;->MZ:Lcom/kwad/components/core/page/b/a/f$a;

    if-eqz v0, :cond_0

    if-eqz p1, :cond_0

    iget-object v0, p0, Lcom/kwad/components/core/page/b/a/g$3$1;->NC:Lcom/kwad/components/core/page/b/a/g$3;

    iget-object v0, v0, Lcom/kwad/components/core/page/b/a/g$3;->NB:Lcom/kwad/components/core/page/b/a/g;

    iget-object v0, v0, Lcom/kwad/components/core/page/b/a/g;->MW:Lcom/kwad/components/core/page/b/a/b;

    iget-object v0, v0, Lcom/kwad/components/core/page/b/a/b;->MZ:Lcom/kwad/components/core/page/b/a/f$a;

    iget p1, p1, Lcom/kwad/components/core/webview/jshandler/as$a;->visibility:I

    invoke-interface {v0, p1}, Lcom/kwad/components/core/page/b/a/f$a;->ay(I)V

    :cond_0
    return-void
.end method
