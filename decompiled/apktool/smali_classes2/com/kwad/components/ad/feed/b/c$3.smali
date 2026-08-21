.class final Lcom/kwad/components/ad/feed/b/c$3;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/components/core/video/a$a;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/components/ad/feed/b/c;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic eM:Lcom/kwad/components/ad/feed/b/c;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/feed/b/c;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/feed/b/c$3;->eM:Lcom/kwad/components/ad/feed/b/c;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(ILcom/kwad/sdk/utils/ac$a;)V
    .locals 5

    const/4 v0, 0x2

    const/4 v1, 0x1

    const/4 v2, 0x0

    if-eq p1, v1, :cond_2

    if-eq p1, v0, :cond_1

    const/4 v3, 0x3

    if-eq p1, v3, :cond_0

    const/16 p1, 0x23

    goto :goto_0

    :cond_0
    const/16 p1, 0x27

    move v0, v1

    move v2, v0

    goto :goto_0

    :cond_1
    const/16 p1, 0x10

    goto :goto_0

    :cond_2
    const/16 p1, 0xf

    :goto_0
    new-instance v3, Lcom/kwad/sdk/core/report/z$b;

    invoke-direct {v3}, Lcom/kwad/sdk/core/report/z$b;-><init>()V

    iput-object p2, v3, Lcom/kwad/sdk/core/report/z$b;->jI:Lcom/kwad/sdk/utils/ac$a;

    iput p1, v3, Lcom/kwad/sdk/core/report/z$b;->jG:I

    iget-object p2, p0, Lcom/kwad/components/ad/feed/b/c$3;->eM:Lcom/kwad/components/ad/feed/b/c;

    invoke-virtual {p2}, Lcom/kwad/components/ad/feed/b/c;->aY()V

    new-instance p2, Lcom/kwad/components/core/e/d/a$a;

    iget-object v4, p0, Lcom/kwad/components/ad/feed/b/c$3;->eM:Lcom/kwad/components/ad/feed/b/c;

    invoke-virtual {v4}, Lcom/kwad/components/ad/feed/b/c;->getContext()Landroid/content/Context;

    move-result-object v4

    invoke-direct {p2, v4}, Lcom/kwad/components/core/e/d/a$a;-><init>(Landroid/content/Context;)V

    iget-object v4, p0, Lcom/kwad/components/ad/feed/b/c$3;->eM:Lcom/kwad/components/ad/feed/b/c;

    invoke-static {v4}, Lcom/kwad/components/ad/feed/b/c;->d(Lcom/kwad/components/ad/feed/b/c;)Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object v4

    invoke-virtual {p2, v4}, Lcom/kwad/components/core/e/d/a$a;->P(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/components/core/e/d/a$a;

    move-result-object p2

    iget-object v4, p0, Lcom/kwad/components/ad/feed/b/c$3;->eM:Lcom/kwad/components/ad/feed/b/c;

    invoke-static {v4}, Lcom/kwad/components/ad/feed/b/c;->c(Lcom/kwad/components/ad/feed/b/c;)Lcom/kwad/components/core/e/d/c;

    move-result-object v4

    invoke-virtual {p2, v4}, Lcom/kwad/components/core/e/d/a$a;->b(Lcom/kwad/components/core/e/d/c;)Lcom/kwad/components/core/e/d/a$a;

    move-result-object p2

    invoke-virtual {p2, v0}, Lcom/kwad/components/core/e/d/a$a;->ao(I)Lcom/kwad/components/core/e/d/a$a;

    move-result-object p2

    invoke-virtual {p2, v2}, Lcom/kwad/components/core/e/d/a$a;->am(Z)Lcom/kwad/components/core/e/d/a$a;

    move-result-object p2

    invoke-virtual {p2, v1}, Lcom/kwad/components/core/e/d/a$a;->ao(Z)Lcom/kwad/components/core/e/d/a$a;

    move-result-object p2

    const/4 v0, 0x5

    invoke-virtual {p2, v0}, Lcom/kwad/components/core/e/d/a$a;->am(I)Lcom/kwad/components/core/e/d/a$a;

    move-result-object p2

    invoke-virtual {p2, p1}, Lcom/kwad/components/core/e/d/a$a;->an(I)Lcom/kwad/components/core/e/d/a$a;

    move-result-object p1

    invoke-virtual {p1, v1}, Lcom/kwad/components/core/e/d/a$a;->aq(Z)Lcom/kwad/components/core/e/d/a$a;

    move-result-object p1

    invoke-virtual {p1, v3}, Lcom/kwad/components/core/e/d/a$a;->a(Lcom/kwad/sdk/core/report/z$b;)Lcom/kwad/components/core/e/d/a$a;

    move-result-object p1

    new-instance p2, Lcom/kwad/components/ad/feed/b/c$3$1;

    invoke-direct {p2, p0}, Lcom/kwad/components/ad/feed/b/c$3$1;-><init>(Lcom/kwad/components/ad/feed/b/c$3;)V

    invoke-virtual {p1, p2}, Lcom/kwad/components/core/e/d/a$a;->a(Lcom/kwad/components/core/e/d/a$b;)Lcom/kwad/components/core/e/d/a$a;

    move-result-object p1

    invoke-static {p1}, Lcom/kwad/components/core/e/d/a;->a(Lcom/kwad/components/core/e/d/a$a;)I

    return-void
.end method
