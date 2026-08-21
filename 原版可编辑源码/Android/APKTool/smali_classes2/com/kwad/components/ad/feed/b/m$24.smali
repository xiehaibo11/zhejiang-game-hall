.class final Lcom/kwad/components/ad/feed/b/m$24;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/components/core/webview/jshandler/t$b;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/feed/b/m;->a(Lcom/kwad/components/core/webview/a;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic fI:Lcom/kwad/components/ad/feed/b/m;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/feed/b/m;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/feed/b/m$24;->fI:Lcom/kwad/components/ad/feed/b/m;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Lcom/kwad/components/core/webview/jshandler/t$a;)V
    .locals 1

    const/4 v0, 0x0

    iput v0, p1, Lcom/kwad/components/core/webview/jshandler/t$a;->height:I

    iget-object v0, p0, Lcom/kwad/components/ad/feed/b/m$24;->fI:Lcom/kwad/components/ad/feed/b/m;

    invoke-static {v0}, Lcom/kwad/components/ad/feed/b/m;->l(Lcom/kwad/components/ad/feed/b/m;)I

    move-result v0

    iput v0, p1, Lcom/kwad/components/core/webview/jshandler/t$a;->width:I

    return-void
.end method
