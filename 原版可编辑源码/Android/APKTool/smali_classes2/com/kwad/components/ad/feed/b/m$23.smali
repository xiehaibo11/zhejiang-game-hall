.class final Lcom/kwad/components/ad/feed/b/m$23;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/components/core/webview/jshandler/s$a;


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

    iput-object p1, p0, Lcom/kwad/components/ad/feed/b/m$23;->fI:Lcom/kwad/components/ad/feed/b/m;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final bz()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/feed/b/m$23;->fI:Lcom/kwad/components/ad/feed/b/m;

    invoke-static {v0}, Lcom/kwad/components/ad/feed/b/m;->H(Lcom/kwad/components/ad/feed/b/m;)Landroid/os/Handler;

    move-result-object v0

    new-instance v1, Lcom/kwad/components/ad/feed/b/m$23$1;

    invoke-direct {v1, p0}, Lcom/kwad/components/ad/feed/b/m$23$1;-><init>(Lcom/kwad/components/ad/feed/b/m$23;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method
