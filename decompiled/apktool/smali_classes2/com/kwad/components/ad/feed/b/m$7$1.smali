.class final Lcom/kwad/components/ad/feed/b/m$7$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/components/core/e/d/a$b;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/feed/b/m$7;->a(Lcom/kwad/sdk/core/webview/d/b/a;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic fM:Lcom/kwad/components/ad/feed/b/m$7;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/feed/b/m$7;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/feed/b/m$7$1;->fM:Lcom/kwad/components/ad/feed/b/m$7;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onAdClicked()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/feed/b/m$7$1;->fM:Lcom/kwad/components/ad/feed/b/m$7;

    iget-object v0, v0, Lcom/kwad/components/ad/feed/b/m$7;->fI:Lcom/kwad/components/ad/feed/b/m;

    invoke-static {v0}, Lcom/kwad/components/ad/feed/b/m;->W(Lcom/kwad/components/ad/feed/b/m;)Lcom/kwad/components/core/widget/b$a;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/feed/b/m$7$1;->fM:Lcom/kwad/components/ad/feed/b/m$7;

    iget-object v0, v0, Lcom/kwad/components/ad/feed/b/m$7;->fI:Lcom/kwad/components/ad/feed/b/m;

    invoke-static {v0}, Lcom/kwad/components/ad/feed/b/m;->X(Lcom/kwad/components/ad/feed/b/m;)Lcom/kwad/components/core/widget/b$a;

    move-result-object v0

    invoke-interface {v0}, Lcom/kwad/components/core/widget/b$a;->onAdClicked()V

    :cond_0
    return-void
.end method
