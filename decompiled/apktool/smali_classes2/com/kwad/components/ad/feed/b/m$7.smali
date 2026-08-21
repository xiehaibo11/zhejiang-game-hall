.class final Lcom/kwad/components/ad/feed/b/m$7;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/core/webview/d/a/a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/feed/b/m;->getClickListener()Lcom/kwad/sdk/core/webview/d/a/a;
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

    iput-object p1, p0, Lcom/kwad/components/ad/feed/b/m$7;->fI:Lcom/kwad/components/ad/feed/b/m;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Lcom/kwad/sdk/core/webview/d/b/a;)V
    .locals 6

    iget-object v0, p0, Lcom/kwad/components/ad/feed/b/m$7;->fI:Lcom/kwad/components/ad/feed/b/m;

    invoke-static {v0}, Lcom/kwad/components/ad/feed/b/m;->U(Lcom/kwad/components/ad/feed/b/m;)V

    iget v0, p1, Lcom/kwad/sdk/core/webview/d/b/a;->UZ:I

    iget-boolean v1, p1, Lcom/kwad/sdk/core/webview/d/b/a;->JC:Z

    const/4 v2, 0x1

    if-eqz v1, :cond_1

    iget-boolean v0, p1, Lcom/kwad/sdk/core/webview/d/b/a;->UX:Z

    if-eqz v0, :cond_0

    move v0, v2

    goto :goto_0

    :cond_0
    const/4 v0, 0x2

    :cond_1
    :goto_0
    iget-object v1, p0, Lcom/kwad/components/ad/feed/b/m$7;->fI:Lcom/kwad/components/ad/feed/b/m;

    invoke-static {v1}, Lcom/kwad/components/ad/feed/b/m;->V(Lcom/kwad/components/ad/feed/b/m;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v1

    invoke-static {v1}, Lcom/kwad/sdk/core/response/b/a;->aU(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v1

    new-instance v3, Lcom/kwad/sdk/core/report/z$b;

    invoke-direct {v3}, Lcom/kwad/sdk/core/report/z$b;-><init>()V

    iget-object v4, p1, Lcom/kwad/sdk/core/webview/d/b/a;->Va:Lcom/kwad/sdk/core/webview/d/b/c;

    if-eqz v4, :cond_2

    iget-object v4, p1, Lcom/kwad/sdk/core/webview/d/b/a;->Va:Lcom/kwad/sdk/core/webview/d/b/c;

    iget-object v4, v4, Lcom/kwad/sdk/core/webview/d/b/c;->UP:Ljava/lang/String;

    invoke-static {v4}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-nez v4, :cond_2

    iget-object v4, p1, Lcom/kwad/sdk/core/webview/d/b/a;->Va:Lcom/kwad/sdk/core/webview/d/b/c;

    iget-object v4, v4, Lcom/kwad/sdk/core/webview/d/b/c;->UP:Ljava/lang/String;

    iput-object v4, v3, Lcom/kwad/sdk/core/report/z$b;->UP:Ljava/lang/String;

    :cond_2
    new-instance v4, Lcom/kwad/components/core/e/d/a$a;

    iget-object v5, p0, Lcom/kwad/components/ad/feed/b/m$7;->fI:Lcom/kwad/components/ad/feed/b/m;

    invoke-virtual {v5}, Lcom/kwad/components/ad/feed/b/m;->getContext()Landroid/content/Context;

    move-result-object v5

    invoke-direct {v4, v5}, Lcom/kwad/components/core/e/d/a$a;-><init>(Landroid/content/Context;)V

    iget-object v5, p0, Lcom/kwad/components/ad/feed/b/m$7;->fI:Lcom/kwad/components/ad/feed/b/m;

    invoke-static {v5}, Lcom/kwad/components/ad/feed/b/m;->Y(Lcom/kwad/components/ad/feed/b/m;)Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object v5

    invoke-virtual {v4, v5}, Lcom/kwad/components/core/e/d/a$a;->P(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/components/core/e/d/a$a;

    move-result-object v4

    iget-object v5, p0, Lcom/kwad/components/ad/feed/b/m$7;->fI:Lcom/kwad/components/ad/feed/b/m;

    invoke-static {v5}, Lcom/kwad/components/ad/feed/b/m;->Q(Lcom/kwad/components/ad/feed/b/m;)Lcom/kwad/components/core/e/d/c;

    move-result-object v5

    invoke-virtual {v4, v5}, Lcom/kwad/components/core/e/d/a$a;->b(Lcom/kwad/components/core/e/d/c;)Lcom/kwad/components/core/e/d/a$a;

    move-result-object v4

    iget-object v5, p0, Lcom/kwad/components/ad/feed/b/m$7;->fI:Lcom/kwad/components/ad/feed/b/m;

    invoke-static {v5, p1}, Lcom/kwad/components/ad/feed/b/m;->a(Lcom/kwad/components/ad/feed/b/m;Lcom/kwad/sdk/core/webview/d/b/a;)Z

    move-result v5

    invoke-virtual {v4, v5}, Lcom/kwad/components/core/e/d/a$a;->am(Z)Lcom/kwad/components/core/e/d/a$a;

    move-result-object v4

    invoke-virtual {v4, v0}, Lcom/kwad/components/core/e/d/a$a;->ao(I)Lcom/kwad/components/core/e/d/a$a;

    move-result-object v0

    iget v4, p1, Lcom/kwad/sdk/core/webview/d/b/a;->jG:I

    invoke-virtual {v0, v4}, Lcom/kwad/components/core/e/d/a$a;->an(I)Lcom/kwad/components/core/e/d/a$a;

    move-result-object v0

    const/4 v4, 0x5

    invoke-virtual {v0, v4}, Lcom/kwad/components/core/e/d/a$a;->am(I)Lcom/kwad/components/core/e/d/a$a;

    move-result-object v0

    iget-boolean p1, p1, Lcom/kwad/sdk/core/webview/d/b/a;->JC:Z

    invoke-virtual {v0, p1}, Lcom/kwad/components/core/e/d/a$a;->as(Z)Lcom/kwad/components/core/e/d/a$a;

    move-result-object p1

    invoke-virtual {p1, v1}, Lcom/kwad/components/core/e/d/a$a;->aq(Z)Lcom/kwad/components/core/e/d/a$a;

    move-result-object p1

    iget-object v0, p0, Lcom/kwad/components/ad/feed/b/m$7;->fI:Lcom/kwad/components/ad/feed/b/m;

    invoke-static {v0}, Lcom/kwad/components/ad/feed/b/m;->b(Lcom/kwad/components/ad/feed/b/m;)Lcom/kwad/components/offline/api/core/adlive/IAdLivePlayModule;

    move-result-object v0

    if-nez v0, :cond_3

    const-wide/16 v0, 0x0

    goto :goto_1

    :cond_3
    iget-object v0, p0, Lcom/kwad/components/ad/feed/b/m$7;->fI:Lcom/kwad/components/ad/feed/b/m;

    invoke-static {v0}, Lcom/kwad/components/ad/feed/b/m;->b(Lcom/kwad/components/ad/feed/b/m;)Lcom/kwad/components/offline/api/core/adlive/IAdLivePlayModule;

    move-result-object v0

    invoke-interface {v0}, Lcom/kwad/components/offline/api/core/adlive/IAdLivePlayModule;->getPlayDuration()J

    move-result-wide v0

    :goto_1
    invoke-virtual {p1, v0, v1}, Lcom/kwad/components/core/e/d/a$a;->s(J)Lcom/kwad/components/core/e/d/a$a;

    move-result-object p1

    invoke-virtual {p1, v3}, Lcom/kwad/components/core/e/d/a$a;->a(Lcom/kwad/sdk/core/report/z$b;)Lcom/kwad/components/core/e/d/a$a;

    move-result-object p1

    invoke-virtual {p1, v2}, Lcom/kwad/components/core/e/d/a$a;->ao(Z)Lcom/kwad/components/core/e/d/a$a;

    move-result-object p1

    new-instance v0, Lcom/kwad/components/ad/feed/b/m$7$1;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/feed/b/m$7$1;-><init>(Lcom/kwad/components/ad/feed/b/m$7;)V

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/e/d/a$a;->a(Lcom/kwad/components/core/e/d/a$b;)Lcom/kwad/components/core/e/d/a$a;

    move-result-object p1

    invoke-static {p1}, Lcom/kwad/components/core/e/d/a;->a(Lcom/kwad/components/core/e/d/a$a;)I

    return-void
.end method
