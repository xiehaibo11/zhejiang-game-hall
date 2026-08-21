.class final Lcom/kwad/components/ad/interstitial/d/j$4;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/components/core/video/a$a;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/components/ad/interstitial/d/j;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic lc:Lcom/kwad/components/ad/interstitial/d/j;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/interstitial/d/j;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/interstitial/d/j$4;->lc:Lcom/kwad/components/ad/interstitial/d/j;

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

    const/16 p1, 0x6c

    goto :goto_0

    :cond_0
    const/16 p1, 0x53

    move v2, v1

    move v3, v2

    goto :goto_1

    :cond_1
    const/16 p1, 0x52

    goto :goto_0

    :cond_2
    const/16 p1, 0xd

    :goto_0
    move v3, v0

    :goto_1
    new-instance v4, Lcom/kwad/sdk/core/report/z$b;

    invoke-direct {v4}, Lcom/kwad/sdk/core/report/z$b;-><init>()V

    iput-object p2, v4, Lcom/kwad/sdk/core/report/z$b;->jI:Lcom/kwad/sdk/utils/ac$a;

    iput p1, v4, Lcom/kwad/sdk/core/report/z$b;->jG:I

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/d/j$4;->lc:Lcom/kwad/components/ad/interstitial/d/j;

    invoke-static {p1}, Lcom/kwad/components/ad/interstitial/d/j;->e(Lcom/kwad/components/ad/interstitial/d/j;)Landroid/content/Context;

    invoke-static {}, Lcom/kwad/sdk/utils/ai;->IN()Z

    move-result p1

    if-eqz p1, :cond_3

    goto :goto_2

    :cond_3
    move v0, v1

    :goto_2
    iput v0, v4, Lcom/kwad/sdk/core/report/z$b;->atb:I

    new-instance p1, Lcom/kwad/components/core/e/d/a$a;

    iget-object p2, p0, Lcom/kwad/components/ad/interstitial/d/j$4;->lc:Lcom/kwad/components/ad/interstitial/d/j;

    invoke-static {p2}, Lcom/kwad/components/ad/interstitial/d/j;->h(Lcom/kwad/components/ad/interstitial/d/j;)Landroid/content/Context;

    move-result-object p2

    invoke-direct {p1, p2}, Lcom/kwad/components/core/e/d/a$a;-><init>(Landroid/content/Context;)V

    iget-object p2, p0, Lcom/kwad/components/ad/interstitial/d/j$4;->lc:Lcom/kwad/components/ad/interstitial/d/j;

    invoke-static {p2}, Lcom/kwad/components/ad/interstitial/d/j;->c(Lcom/kwad/components/ad/interstitial/d/j;)Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object p2

    invoke-virtual {p1, p2}, Lcom/kwad/components/core/e/d/a$a;->P(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/components/core/e/d/a$a;

    move-result-object p1

    iget-object p2, p0, Lcom/kwad/components/ad/interstitial/d/j$4;->lc:Lcom/kwad/components/ad/interstitial/d/j;

    invoke-static {p2}, Lcom/kwad/components/ad/interstitial/d/j;->g(Lcom/kwad/components/ad/interstitial/d/j;)Lcom/kwad/components/core/e/d/c;

    move-result-object p2

    invoke-virtual {p1, p2}, Lcom/kwad/components/core/e/d/a$a;->b(Lcom/kwad/components/core/e/d/c;)Lcom/kwad/components/core/e/d/a$a;

    move-result-object p1

    invoke-virtual {p1, v3}, Lcom/kwad/components/core/e/d/a$a;->ao(I)Lcom/kwad/components/core/e/d/a$a;

    move-result-object p1

    invoke-virtual {p1, v2}, Lcom/kwad/components/core/e/d/a$a;->am(Z)Lcom/kwad/components/core/e/d/a$a;

    move-result-object p1

    invoke-virtual {p1, v1}, Lcom/kwad/components/core/e/d/a$a;->ao(Z)Lcom/kwad/components/core/e/d/a$a;

    move-result-object p1

    invoke-virtual {p1, v4}, Lcom/kwad/components/core/e/d/a$a;->a(Lcom/kwad/sdk/core/report/z$b;)Lcom/kwad/components/core/e/d/a$a;

    move-result-object p1

    new-instance p2, Lcom/kwad/components/ad/interstitial/d/j$4$1;

    invoke-direct {p2, p0}, Lcom/kwad/components/ad/interstitial/d/j$4$1;-><init>(Lcom/kwad/components/ad/interstitial/d/j$4;)V

    invoke-virtual {p1, p2}, Lcom/kwad/components/core/e/d/a$a;->a(Lcom/kwad/components/core/e/d/a$b;)Lcom/kwad/components/core/e/d/a$a;

    move-result-object p1

    invoke-static {p1}, Lcom/kwad/components/core/e/d/a;->a(Lcom/kwad/components/core/e/d/a$a;)I

    return-void
.end method
