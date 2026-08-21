.class final Lcom/kwad/components/ad/reward/presenter/f/d$11$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/components/core/e/d/a$b;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/reward/presenter/f/d$11;->a(Lcom/kwad/components/core/webview/b/b/p;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic ww:Lcom/kwad/components/core/webview/b/b/p;

.field final synthetic wx:Lcom/kwad/components/ad/reward/presenter/f/d$11;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/reward/presenter/f/d$11;Lcom/kwad/components/core/webview/b/b/p;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/reward/presenter/f/d$11$1;->wx:Lcom/kwad/components/ad/reward/presenter/f/d$11;

    iput-object p2, p0, Lcom/kwad/components/ad/reward/presenter/f/d$11$1;->ww:Lcom/kwad/components/core/webview/b/b/p;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onAdClicked()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/d$11$1;->ww:Lcom/kwad/components/core/webview/b/b/p;

    iget-boolean v0, v0, Lcom/kwad/components/core/webview/b/b/p;->Xc:Z

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/d$11$1;->wx:Lcom/kwad/components/ad/reward/presenter/f/d$11;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/presenter/f/d$11;->wu:Lcom/kwad/components/ad/reward/presenter/f/d;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/presenter/f/d;->e(Lcom/kwad/components/ad/reward/presenter/f/d;)V

    return-void

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/d$11$1;->wx:Lcom/kwad/components/ad/reward/presenter/f/d$11;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/presenter/f/d$11;->wu:Lcom/kwad/components/ad/reward/presenter/f/d;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/presenter/f/d;->f(Lcom/kwad/components/ad/reward/presenter/f/d;)V

    return-void
.end method
