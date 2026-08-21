.class final Lcom/kwad/components/core/page/b/a/g$3$2;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/components/core/webview/jshandler/ak$c;


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

    iput-object p1, p0, Lcom/kwad/components/core/page/b/a/g$3$2;->NC:Lcom/kwad/components/core/page/b/a/g$3;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final pa()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/core/page/b/a/g$3$2;->NC:Lcom/kwad/components/core/page/b/a/g$3;

    iget-object v0, v0, Lcom/kwad/components/core/page/b/a/g$3;->NB:Lcom/kwad/components/core/page/b/a/g;

    iget-object v0, v0, Lcom/kwad/components/core/page/b/a/g;->MW:Lcom/kwad/components/core/page/b/a/b;

    iget-object v1, p0, Lcom/kwad/components/core/page/b/a/g$3$2;->NC:Lcom/kwad/components/core/page/b/a/g$3;

    iget-object v1, v1, Lcom/kwad/components/core/page/b/a/g$3;->NB:Lcom/kwad/components/core/page/b/a/g;

    invoke-static {v1}, Lcom/kwad/components/core/page/b/a/g;->c(Lcom/kwad/components/core/page/b/a/g;)Lcom/kwad/components/core/webview/jshandler/ak$b;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/page/b/a/b;->a(Lcom/kwad/components/core/webview/jshandler/ak$b;)V

    return-void
.end method
