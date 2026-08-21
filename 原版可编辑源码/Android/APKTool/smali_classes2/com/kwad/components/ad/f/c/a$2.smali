.class final Lcom/kwad/components/ad/f/c/a$2;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/core/video/a/c$e;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/f/c/a;-><init>(Lcom/kwad/sdk/core/response/model/AdTemplate;Lcom/kwad/components/core/widget/a/b;Lcom/kwad/components/core/video/DetailVideoView;Lcom/kwad/sdk/api/KsAdVideoPlayConfig;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic nz:Lcom/kwad/components/ad/f/c/a;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/f/c/a;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/f/c/a$2;->nz:Lcom/kwad/components/ad/f/c/a;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Lcom/kwad/sdk/core/video/a/c;)V
    .locals 1

    iget-object p1, p0, Lcom/kwad/components/ad/f/c/a$2;->nz:Lcom/kwad/components/ad/f/c/a;

    invoke-static {p1}, Lcom/kwad/components/ad/f/c/a;->a(Lcom/kwad/components/ad/f/c/a;)Z

    move-result p1

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/kwad/components/ad/f/c/a$2;->nz:Lcom/kwad/components/ad/f/c/a;

    invoke-static {p1}, Lcom/kwad/components/ad/f/c/a;->b(Lcom/kwad/components/ad/f/c/a;)Lcom/kwad/components/core/widget/a/b;

    move-result-object p1

    invoke-virtual {p1}, Lcom/kwad/components/core/widget/a/b;->ep()Z

    move-result p1

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/kwad/components/ad/f/c/a$2;->nz:Lcom/kwad/components/ad/f/c/a;

    invoke-static {p1}, Lcom/kwad/components/ad/f/c/a;->c(Lcom/kwad/components/ad/f/c/a;)Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object p1

    invoke-static {p1}, Lcom/kwad/sdk/contentalliance/a/a/a;->ap(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/contentalliance/a/a/a;

    move-result-object p1

    iget-object v0, p0, Lcom/kwad/components/ad/f/c/a$2;->nz:Lcom/kwad/components/ad/f/c/a;

    invoke-static {v0}, Lcom/kwad/components/ad/f/c/a;->d(Lcom/kwad/components/ad/f/c/a;)Lcom/kwad/components/core/video/b;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/kwad/components/core/video/b;->a(Lcom/kwad/sdk/contentalliance/a/a/a;)V

    invoke-static {}, Lcom/kwad/components/core/j/a;->oa()Lcom/kwad/components/core/j/a;

    move-result-object p1

    iget-object v0, p0, Lcom/kwad/components/ad/f/c/a$2;->nz:Lcom/kwad/components/ad/f/c/a;

    invoke-static {v0}, Lcom/kwad/components/ad/f/c/a;->e(Lcom/kwad/components/ad/f/c/a;)Lcom/kwad/components/core/j/a$b;

    move-result-object v0

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/j/a;->a(Lcom/kwad/components/core/j/a$b;)V

    iget-object p1, p0, Lcom/kwad/components/ad/f/c/a$2;->nz:Lcom/kwad/components/ad/f/c/a;

    invoke-static {p1}, Lcom/kwad/components/ad/f/c/a;->f(Lcom/kwad/components/ad/f/c/a;)Lcom/kwad/components/core/video/b;

    move-result-object p1

    invoke-virtual {p1}, Lcom/kwad/components/core/video/b;->start()V

    :cond_0
    return-void
.end method
