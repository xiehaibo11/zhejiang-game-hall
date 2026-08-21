.class public final Lcom/kwad/components/ad/reward/p;
.super Ljava/lang/Object;


# direct methods
.method public static a(IILcom/kwad/components/ad/reward/j;Lcom/kwad/components/ad/reward/model/c;)V
    .locals 2

    const/4 v0, 0x1

    if-eqz p0, :cond_7

    if-eq p0, v0, :cond_3

    const/4 v1, 0x2

    if-eq p0, v1, :cond_0

    goto :goto_0

    :cond_0
    iget-object p0, p2, Lcom/kwad/components/ad/reward/j;->pA:Lcom/kwad/components/ad/reward/k/b/a;

    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/k/b/a;->jH()Z

    move-result p0

    if-nez p1, :cond_1

    if-eqz p0, :cond_4

    invoke-virtual {p3}, Lcom/kwad/components/ad/reward/model/c;->getAdTemplate()Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object p0

    invoke-static {p0, v0}, Lcom/kwad/sdk/core/report/a;->m(Lcom/kwad/sdk/core/response/model/AdTemplate;I)V

    return-void

    :cond_1
    if-eqz p0, :cond_2

    invoke-virtual {p3}, Lcom/kwad/components/ad/reward/model/c;->getAdTemplate()Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object p0

    const/4 p1, 0x3

    invoke-static {p0, p1}, Lcom/kwad/sdk/core/report/a;->m(Lcom/kwad/sdk/core/response/model/AdTemplate;I)V

    return-void

    :cond_2
    invoke-virtual {p3}, Lcom/kwad/components/ad/reward/model/c;->getAdTemplate()Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object p0

    invoke-static {p0, v1}, Lcom/kwad/sdk/core/report/a;->m(Lcom/kwad/sdk/core/response/model/AdTemplate;I)V

    goto :goto_0

    :cond_3
    iget-object p0, p2, Lcom/kwad/components/ad/reward/j;->pB:Lcom/kwad/components/ad/reward/k/a/a;

    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/k/a/a;->jH()Z

    move-result p0

    if-nez p1, :cond_5

    if-eqz p0, :cond_4

    invoke-virtual {p3}, Lcom/kwad/components/ad/reward/model/c;->getAdTemplate()Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object p0

    invoke-static {p0, v0}, Lcom/kwad/sdk/core/report/a;->m(Lcom/kwad/sdk/core/response/model/AdTemplate;I)V

    :cond_4
    :goto_0
    return-void

    :cond_5
    if-eqz p0, :cond_6

    invoke-virtual {p3}, Lcom/kwad/components/ad/reward/model/c;->getAdTemplate()Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object p0

    const/4 p1, 0x5

    invoke-static {p0, p1}, Lcom/kwad/sdk/core/report/a;->m(Lcom/kwad/sdk/core/response/model/AdTemplate;I)V

    return-void

    :cond_6
    invoke-virtual {p3}, Lcom/kwad/components/ad/reward/model/c;->getAdTemplate()Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object p0

    const/4 p1, 0x4

    invoke-static {p0, p1}, Lcom/kwad/sdk/core/report/a;->m(Lcom/kwad/sdk/core/response/model/AdTemplate;I)V

    return-void

    :cond_7
    invoke-virtual {p3}, Lcom/kwad/components/ad/reward/model/c;->getAdTemplate()Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object p0

    invoke-static {p0, v0}, Lcom/kwad/sdk/core/report/a;->m(Lcom/kwad/sdk/core/response/model/AdTemplate;I)V

    return-void
.end method
