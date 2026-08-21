.class public final Lcom/kwad/components/core/e/d/a;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/components/core/e/d/a$a;,
        Lcom/kwad/components/core/e/d/a$b;
    }
.end annotation


# static fields
.field private static JB:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/lang/ref/WeakReference<",
            "Lcom/kwad/components/core/webview/b/a/k$b;",
            ">;>;"
        }
    .end annotation
.end field


# direct methods
.method public static a(Landroid/content/Context;Lcom/kwad/sdk/core/response/model/AdTemplate;Lcom/kwad/components/core/e/d/a$b;Lcom/kwad/components/core/e/d/c;ZZZ)I
    .locals 6

    const/4 v0, 0x1

    iput-boolean v0, p1, Lcom/kwad/sdk/core/response/model/AdTemplate;->converted:Z

    const/4 v1, 0x0

    invoke-static {v1}, Lcom/kwad/components/core/e/d/d;->au(Z)V

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v2

    const-class v3, Lcom/kwad/components/a/a/a;

    invoke-static {v3}, Lcom/kwad/sdk/components/c;->f(Ljava/lang/Class;)Lcom/kwad/sdk/components/a;

    new-instance v3, Lcom/kwad/components/core/e/d/a$a;

    invoke-direct {v3, p0}, Lcom/kwad/components/core/e/d/a$a;-><init>(Landroid/content/Context;)V

    invoke-virtual {v3, p1}, Lcom/kwad/components/core/e/d/a$a;->P(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/components/core/e/d/a$a;

    move-result-object v3

    invoke-static {v2}, Lcom/kwad/sdk/core/response/b/a;->af(Lcom/kwad/sdk/core/response/model/AdInfo;)I

    move-result v4

    const/4 v5, 0x2

    if-nez p6, :cond_1

    invoke-virtual {v3}, Lcom/kwad/components/core/e/d/a$a;->nu()I

    move-result p6

    if-eq p6, v5, :cond_1

    invoke-virtual {v3}, Lcom/kwad/components/core/e/d/a$a;->nu()I

    move-result p6

    if-ne p6, v0, :cond_0

    goto :goto_0

    :cond_0
    move p6, v1

    goto :goto_1

    :cond_1
    :goto_0
    move p6, v0

    :goto_1
    if-nez p6, :cond_6

    invoke-static {v2}, Lcom/kwad/sdk/core/response/b/a;->aK(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object p6

    invoke-static {p6}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p6

    if-nez p6, :cond_6

    invoke-virtual {v3}, Lcom/kwad/components/core/e/d/a$a;->nq()Z

    move-result p6

    if-nez p6, :cond_6

    if-ne v4, v0, :cond_3

    invoke-static {v2}, Lcom/kwad/sdk/core/response/b/a;->aZ(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result p0

    invoke-interface {p2}, Lcom/kwad/components/core/e/d/a$b;->onAdClicked()V

    if-eqz p0, :cond_2

    invoke-virtual {v3}, Lcom/kwad/components/core/e/d/a$a;->getContext()Landroid/content/Context;

    move-result-object p0

    invoke-static {p0, p1}, Lcom/kwad/components/core/e/d/a;->c(Landroid/content/Context;Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    goto :goto_2

    :cond_2
    new-instance p0, Lcom/kwad/components/core/page/AdWebViewActivityProxy$a$a;

    invoke-direct {p0}, Lcom/kwad/components/core/page/AdWebViewActivityProxy$a$a;-><init>()V

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/b;->bm(Lcom/kwad/sdk/core/response/model/AdTemplate;)Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p0, p2}, Lcom/kwad/components/core/page/AdWebViewActivityProxy$a$a;->ar(Ljava/lang/String;)Lcom/kwad/components/core/page/AdWebViewActivityProxy$a$a;

    move-result-object p0

    invoke-virtual {p0, p1}, Lcom/kwad/components/core/page/AdWebViewActivityProxy$a$a;->S(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/components/core/page/AdWebViewActivityProxy$a$a;

    move-result-object p0

    invoke-virtual {p0}, Lcom/kwad/components/core/page/AdWebViewActivityProxy$a$a;->oA()Lcom/kwad/components/core/page/AdWebViewActivityProxy$a;

    move-result-object p0

    invoke-virtual {v3}, Lcom/kwad/components/core/e/d/a$a;->getContext()Landroid/content/Context;

    move-result-object p1

    invoke-static {p1, p0}, Lcom/kwad/components/core/e/d/a;->a(Landroid/content/Context;Lcom/kwad/components/core/page/AdWebViewActivityProxy$a;)V

    :goto_2
    return v1

    :cond_3
    if-ne v4, v5, :cond_6

    invoke-static {v3, v0}, Lcom/kwad/components/core/e/d/a;->a(Lcom/kwad/components/core/e/d/a$a;I)I

    move-result p0

    if-ne p0, v0, :cond_4

    :goto_3
    invoke-static {v0}, Lcom/kwad/components/core/e/d/d;->au(Z)V

    invoke-interface {p2}, Lcom/kwad/components/core/e/d/a$b;->onAdClicked()V

    return v1

    :cond_4
    invoke-static {v2}, Lcom/kwad/sdk/core/response/b/a;->aZ(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result p0

    invoke-interface {p2}, Lcom/kwad/components/core/e/d/a$b;->onAdClicked()V

    if-eqz p0, :cond_5

    invoke-virtual {v3}, Lcom/kwad/components/core/e/d/a$a;->getContext()Landroid/content/Context;

    move-result-object p0

    invoke-static {p0, p1}, Lcom/kwad/components/core/e/d/a;->c(Landroid/content/Context;Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    goto :goto_4

    :cond_5
    new-instance p0, Lcom/kwad/components/core/page/AdWebViewActivityProxy$a$a;

    invoke-direct {p0}, Lcom/kwad/components/core/page/AdWebViewActivityProxy$a$a;-><init>()V

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/b;->bm(Lcom/kwad/sdk/core/response/model/AdTemplate;)Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p0, p2}, Lcom/kwad/components/core/page/AdWebViewActivityProxy$a$a;->ar(Ljava/lang/String;)Lcom/kwad/components/core/page/AdWebViewActivityProxy$a$a;

    move-result-object p0

    invoke-virtual {p0, p1}, Lcom/kwad/components/core/page/AdWebViewActivityProxy$a$a;->S(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/components/core/page/AdWebViewActivityProxy$a$a;

    move-result-object p0

    invoke-virtual {p0}, Lcom/kwad/components/core/page/AdWebViewActivityProxy$a$a;->oA()Lcom/kwad/components/core/page/AdWebViewActivityProxy$a;

    move-result-object p0

    invoke-virtual {v3}, Lcom/kwad/components/core/e/d/a$a;->getContext()Landroid/content/Context;

    move-result-object p1

    invoke-static {p1, p0}, Lcom/kwad/components/core/e/d/a;->a(Landroid/content/Context;Lcom/kwad/components/core/page/AdWebViewActivityProxy$a;)V

    :goto_4
    return v1

    :cond_6
    invoke-static {v3, v0}, Lcom/kwad/components/core/e/d/a;->a(Lcom/kwad/components/core/e/d/a$a;I)I

    move-result p6

    if-ne p6, v0, :cond_7

    goto :goto_3

    :cond_7
    invoke-static {v2}, Lcom/kwad/sdk/core/response/b/a;->ax(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result p6

    if-nez p6, :cond_9

    invoke-interface {p2}, Lcom/kwad/components/core/e/d/a$b;->onAdClicked()V

    invoke-static {v2}, Lcom/kwad/sdk/core/response/b/a;->cz(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object p2

    invoke-static {v2}, Lcom/kwad/sdk/core/response/b/a;->aq(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object p3

    invoke-static {p0, p2, p3}, Lcom/kwad/sdk/utils/d;->f(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)Z

    move-result p2

    if-eqz p2, :cond_8

    invoke-static {p1, v1}, Lcom/kwad/sdk/core/report/a;->l(Lcom/kwad/sdk/core/response/model/AdTemplate;I)V

    goto :goto_5

    :cond_8
    new-instance p2, Lcom/kwad/components/core/page/AdWebViewActivityProxy$a$a;

    invoke-direct {p2}, Lcom/kwad/components/core/page/AdWebViewActivityProxy$a$a;-><init>()V

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/b;->bm(Lcom/kwad/sdk/core/response/model/AdTemplate;)Ljava/lang/String;

    move-result-object p3

    invoke-virtual {p2, p3}, Lcom/kwad/components/core/page/AdWebViewActivityProxy$a$a;->ar(Ljava/lang/String;)Lcom/kwad/components/core/page/AdWebViewActivityProxy$a$a;

    move-result-object p2

    invoke-virtual {p2, p1}, Lcom/kwad/components/core/page/AdWebViewActivityProxy$a$a;->S(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/components/core/page/AdWebViewActivityProxy$a$a;

    move-result-object p1

    invoke-virtual {p1}, Lcom/kwad/components/core/page/AdWebViewActivityProxy$a$a;->oA()Lcom/kwad/components/core/page/AdWebViewActivityProxy$a;

    move-result-object p1

    invoke-static {p0, p1}, Lcom/kwad/components/core/e/d/a;->a(Landroid/content/Context;Lcom/kwad/components/core/page/AdWebViewActivityProxy$a;)V

    :goto_5
    return v1

    :cond_9
    if-eqz p3, :cond_b

    new-instance p6, Lcom/kwad/components/core/e/d/a$a;

    invoke-direct {p6, p0}, Lcom/kwad/components/core/e/d/a$a;-><init>(Landroid/content/Context;)V

    invoke-virtual {p6, p4}, Lcom/kwad/components/core/e/d/a$a;->am(Z)Lcom/kwad/components/core/e/d/a$a;

    move-result-object p0

    invoke-virtual {p0, p1}, Lcom/kwad/components/core/e/d/a$a;->P(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/components/core/e/d/a$a;

    move-result-object p0

    invoke-virtual {p0, p5}, Lcom/kwad/components/core/e/d/a$a;->an(Z)Lcom/kwad/components/core/e/d/a$a;

    move-result-object p0

    invoke-virtual {p0, v1}, Lcom/kwad/components/core/e/d/a$a;->ap(Z)Lcom/kwad/components/core/e/d/a$a;

    move-result-object p0

    invoke-virtual {p3, p0}, Lcom/kwad/components/core/e/d/c;->m(Lcom/kwad/components/core/e/d/a$a;)I

    move-result p0

    iget p1, v2, Lcom/kwad/sdk/core/response/model/AdInfo;->status:I

    if-eq p1, v5, :cond_a

    iget p1, v2, Lcom/kwad/sdk/core/response/model/AdInfo;->status:I

    const/4 p3, 0x3

    if-eq p1, p3, :cond_a

    invoke-interface {p2}, Lcom/kwad/components/core/e/d/a$b;->onAdClicked()V

    :cond_a
    return p0

    :cond_b
    return v1
.end method

.method public static a(Lcom/kwad/components/core/e/d/a$a;)I
    .locals 10

    const/4 v0, 0x0

    invoke-static {v0}, Lcom/kwad/components/core/e/d/d;->au(Z)V

    invoke-static {p0}, Lcom/kwad/components/core/e/d/a$a;->j(Lcom/kwad/components/core/e/d/a$a;)Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object v1

    if-eqz v1, :cond_0

    invoke-static {p0}, Lcom/kwad/components/core/e/d/a$a;->j(Lcom/kwad/components/core/e/d/a$a;)Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object v1

    invoke-virtual {v1}, Lcom/kwad/sdk/core/response/model/AdTemplate;->getBusinessType()Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;

    move-result-object v1

    goto :goto_0

    :cond_0
    const/4 v1, 0x0

    :goto_0
    sget-object v2, Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;->CORE_CONVERT:Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;

    const-string v3, "adClick"

    invoke-virtual {v2, v1, v3}, Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;->buildMethodCheck(Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;Ljava/lang/String;)Lcom/kwad/sdk/core/report/KSLoggerReporter$b;

    move-result-object v2

    invoke-virtual {v2}, Lcom/kwad/sdk/core/report/KSLoggerReporter$b;->report()V

    invoke-virtual {p0}, Lcom/kwad/components/core/e/d/a$a;->nr()Z

    move-result v2

    if-eqz v2, :cond_1

    invoke-virtual {p0}, Lcom/kwad/components/core/e/d/a$a;->getContext()Landroid/content/Context;

    move-result-object v3

    invoke-virtual {p0}, Lcom/kwad/components/core/e/d/a$a;->getAdTemplate()Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object v4

    invoke-virtual {p0}, Lcom/kwad/components/core/e/d/a$a;->ni()Lcom/kwad/components/core/e/d/a$b;

    move-result-object v5

    invoke-virtual {p0}, Lcom/kwad/components/core/e/d/a$a;->hi()Lcom/kwad/components/core/e/d/c;

    move-result-object v6

    invoke-static {p0}, Lcom/kwad/components/core/e/d/a$a;->k(Lcom/kwad/components/core/e/d/a$a;)Z

    move-result v7

    invoke-virtual {p0}, Lcom/kwad/components/core/e/d/a$a;->nm()Z

    move-result v8

    const/4 v9, 0x0

    invoke-static/range {v3 .. v9}, Lcom/kwad/components/core/e/d/a;->a(Landroid/content/Context;Lcom/kwad/sdk/core/response/model/AdTemplate;Lcom/kwad/components/core/e/d/a$b;Lcom/kwad/components/core/e/d/c;ZZZ)I

    return v0

    :cond_1
    invoke-static {p0}, Lcom/kwad/components/core/e/d/a;->b(Lcom/kwad/components/core/e/d/a$a;)Z

    move-result v2

    if-eqz v2, :cond_2

    return v0

    :cond_2
    invoke-virtual {p0}, Lcom/kwad/components/core/e/d/a$a;->getAdTemplate()Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object v2

    const/4 v3, 0x1

    iput-boolean v3, v2, Lcom/kwad/sdk/core/response/model/AdTemplate;->converted:Z

    invoke-virtual {p0}, Lcom/kwad/components/core/e/d/a$a;->getAdTemplate()Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object v2

    invoke-static {v2}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v2

    const-class v4, Lcom/kwad/components/a/a/a;

    invoke-static {v4}, Lcom/kwad/sdk/components/c;->f(Ljava/lang/Class;)Lcom/kwad/sdk/components/a;

    invoke-static {v2}, Lcom/kwad/sdk/core/response/b/a;->af(Lcom/kwad/sdk/core/response/model/AdInfo;)I

    move-result v4

    invoke-virtual {p0}, Lcom/kwad/components/core/e/d/a$a;->nu()I

    move-result v5

    const/4 v6, 0x2

    if-eq v5, v6, :cond_4

    invoke-virtual {p0}, Lcom/kwad/components/core/e/d/a$a;->nu()I

    move-result v5

    if-ne v5, v3, :cond_3

    goto :goto_1

    :cond_3
    move v5, v0

    goto :goto_2

    :cond_4
    :goto_1
    move v5, v3

    :goto_2
    const/high16 v7, 0x447a0000    # 1000.0f

    if-nez v5, :cond_a

    invoke-static {v2}, Lcom/kwad/sdk/core/response/b/a;->aK(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v5

    invoke-static {v5}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v5

    if-nez v5, :cond_a

    invoke-virtual {p0}, Lcom/kwad/components/core/e/d/a$a;->nq()Z

    move-result v5

    if-nez v5, :cond_a

    if-ne v4, v3, :cond_6

    invoke-static {v2}, Lcom/kwad/sdk/core/response/b/a;->aZ(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v1

    invoke-static {p0}, Lcom/kwad/components/core/e/d/a;->e(Lcom/kwad/components/core/e/d/a$a;)V

    if-eqz v1, :cond_5

    invoke-virtual {p0}, Lcom/kwad/components/core/e/d/a$a;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-virtual {p0}, Lcom/kwad/components/core/e/d/a$a;->getAdTemplate()Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object p0

    invoke-static {v1, p0}, Lcom/kwad/components/core/e/d/a;->c(Landroid/content/Context;Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    goto :goto_3

    :cond_5
    new-instance v1, Lcom/kwad/components/core/page/AdWebViewActivityProxy$a$a;

    invoke-direct {v1}, Lcom/kwad/components/core/page/AdWebViewActivityProxy$a$a;-><init>()V

    invoke-virtual {p0}, Lcom/kwad/components/core/e/d/a$a;->getAdTemplate()Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object v2

    invoke-static {v2}, Lcom/kwad/sdk/core/response/b/b;->bm(Lcom/kwad/sdk/core/response/model/AdTemplate;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/kwad/components/core/page/AdWebViewActivityProxy$a$a;->ar(Ljava/lang/String;)Lcom/kwad/components/core/page/AdWebViewActivityProxy$a$a;

    move-result-object v1

    invoke-virtual {p0}, Lcom/kwad/components/core/e/d/a$a;->getAdTemplate()Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/kwad/components/core/page/AdWebViewActivityProxy$a$a;->S(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/components/core/page/AdWebViewActivityProxy$a$a;

    move-result-object v1

    invoke-virtual {v1}, Lcom/kwad/components/core/page/AdWebViewActivityProxy$a$a;->oA()Lcom/kwad/components/core/page/AdWebViewActivityProxy$a;

    move-result-object v1

    invoke-virtual {p0}, Lcom/kwad/components/core/e/d/a$a;->getContext()Landroid/content/Context;

    move-result-object p0

    invoke-static {p0, v1}, Lcom/kwad/components/core/e/d/a;->a(Landroid/content/Context;Lcom/kwad/components/core/page/AdWebViewActivityProxy$a;)V

    :goto_3
    return v0

    :cond_6
    if-ne v4, v6, :cond_a

    invoke-static {p0, v3}, Lcom/kwad/components/core/e/d/a;->a(Lcom/kwad/components/core/e/d/a$a;I)I

    move-result v1

    if-ne v1, v3, :cond_8

    invoke-static {v2}, Lcom/kwad/sdk/core/response/b/a;->cv(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v1

    if-eqz v1, :cond_7

    invoke-virtual {p0}, Lcom/kwad/components/core/e/d/a$a;->getAdTemplate()Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object v1

    invoke-virtual {p0}, Lcom/kwad/components/core/e/d/a$a;->nl()J

    move-result-wide v4

    long-to-float v2, v4

    div-float/2addr v2, v7

    float-to-double v4, v2

    invoke-static {v4, v5}, Ljava/lang/Math;->ceil(D)D

    move-result-wide v4

    double-to-int v2, v4

    invoke-static {v1, v2}, Lcom/kwad/sdk/core/report/a;->n(Lcom/kwad/sdk/core/response/model/AdTemplate;I)V

    :cond_7
    invoke-static {v3}, Lcom/kwad/components/core/e/d/d;->au(Z)V

    invoke-static {p0}, Lcom/kwad/components/core/e/d/a;->e(Lcom/kwad/components/core/e/d/a$a;)V

    return v0

    :cond_8
    invoke-static {v2}, Lcom/kwad/sdk/core/response/b/a;->aZ(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v1

    invoke-static {p0}, Lcom/kwad/components/core/e/d/a;->e(Lcom/kwad/components/core/e/d/a$a;)V

    if-eqz v1, :cond_9

    invoke-virtual {p0}, Lcom/kwad/components/core/e/d/a$a;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-virtual {p0}, Lcom/kwad/components/core/e/d/a$a;->getAdTemplate()Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object p0

    invoke-static {v1, p0}, Lcom/kwad/components/core/e/d/a;->c(Landroid/content/Context;Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    goto :goto_4

    :cond_9
    new-instance v1, Lcom/kwad/components/core/page/AdWebViewActivityProxy$a$a;

    invoke-direct {v1}, Lcom/kwad/components/core/page/AdWebViewActivityProxy$a$a;-><init>()V

    invoke-virtual {p0}, Lcom/kwad/components/core/e/d/a$a;->getAdTemplate()Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object v2

    invoke-static {v2}, Lcom/kwad/sdk/core/response/b/b;->bm(Lcom/kwad/sdk/core/response/model/AdTemplate;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/kwad/components/core/page/AdWebViewActivityProxy$a$a;->ar(Ljava/lang/String;)Lcom/kwad/components/core/page/AdWebViewActivityProxy$a$a;

    move-result-object v1

    invoke-virtual {p0}, Lcom/kwad/components/core/e/d/a$a;->getAdTemplate()Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/kwad/components/core/page/AdWebViewActivityProxy$a$a;->S(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/components/core/page/AdWebViewActivityProxy$a$a;

    move-result-object v1

    invoke-virtual {v1}, Lcom/kwad/components/core/page/AdWebViewActivityProxy$a$a;->oA()Lcom/kwad/components/core/page/AdWebViewActivityProxy$a;

    move-result-object v1

    invoke-virtual {p0}, Lcom/kwad/components/core/e/d/a$a;->getContext()Landroid/content/Context;

    move-result-object p0

    invoke-static {p0, v1}, Lcom/kwad/components/core/e/d/a;->a(Landroid/content/Context;Lcom/kwad/components/core/page/AdWebViewActivityProxy$a;)V

    :goto_4
    return v0

    :cond_a
    invoke-static {p0, v3}, Lcom/kwad/components/core/e/d/a;->a(Lcom/kwad/components/core/e/d/a$a;I)I

    move-result v4

    if-ne v4, v3, :cond_d

    invoke-static {v2}, Lcom/kwad/sdk/core/response/b/a;->cv(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v1

    if-nez v1, :cond_b

    invoke-static {v2}, Lcom/kwad/sdk/core/response/b/a;->cw(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v1

    if-eqz v1, :cond_c

    :cond_b
    invoke-virtual {p0}, Lcom/kwad/components/core/e/d/a$a;->getAdTemplate()Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object v1

    invoke-virtual {p0}, Lcom/kwad/components/core/e/d/a$a;->nl()J

    move-result-wide v4

    long-to-float v2, v4

    div-float/2addr v2, v7

    float-to-double v4, v2

    invoke-static {v4, v5}, Ljava/lang/Math;->ceil(D)D

    move-result-wide v4

    double-to-int v2, v4

    invoke-static {v1, v2}, Lcom/kwad/sdk/core/report/a;->n(Lcom/kwad/sdk/core/response/model/AdTemplate;I)V

    :cond_c
    invoke-static {v3}, Lcom/kwad/components/core/e/d/d;->au(Z)V

    invoke-static {p0}, Lcom/kwad/components/core/e/d/a;->e(Lcom/kwad/components/core/e/d/a$a;)V

    return v0

    :cond_d
    invoke-virtual {p0}, Lcom/kwad/components/core/e/d/a$a;->getContext()Landroid/content/Context;

    move-result-object v4

    invoke-virtual {p0}, Lcom/kwad/components/core/e/d/a$a;->getAdTemplate()Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object v5

    invoke-static {v4, v5}, Lcom/kwad/components/core/e/d/e;->e(Landroid/content/Context;Lcom/kwad/sdk/core/response/model/AdTemplate;)I

    move-result v4

    if-ne v4, v3, :cond_e

    invoke-static {p0}, Lcom/kwad/components/core/e/d/a;->e(Lcom/kwad/components/core/e/d/a$a;)V

    sget-object p0, Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;->CORE_CONVERT:Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;

    const-string v2, "smallAppSuccess"

    invoke-virtual {p0, v1, v2}, Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;->buildMethodCheck(Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;Ljava/lang/String;)Lcom/kwad/sdk/core/report/KSLoggerReporter$b;

    move-result-object p0

    invoke-virtual {p0}, Lcom/kwad/sdk/core/report/KSLoggerReporter$b;->report()V

    return v0

    :cond_e
    invoke-virtual {p0}, Lcom/kwad/components/core/e/d/a$a;->np()Z

    move-result v1

    if-eqz v1, :cond_f

    invoke-static {v2}, Lcom/kwad/sdk/core/response/b/a;->ax(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v1

    if-nez v1, :cond_f

    invoke-static {p0}, Lcom/kwad/components/core/e/d/a;->e(Lcom/kwad/components/core/e/d/a$a;)V

    invoke-static {p0}, Lcom/kwad/components/core/e/d/a;->i(Lcom/kwad/components/core/e/d/a$a;)V

    return v0

    :cond_f
    invoke-static {v2}, Lcom/kwad/sdk/core/response/b/a;->ax(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v1

    if-nez v1, :cond_12

    invoke-virtual {p0}, Lcom/kwad/components/core/e/d/a$a;->getAdTemplate()Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object v1

    iget-boolean v1, v1, Lcom/kwad/sdk/core/response/model/AdTemplate;->isWebViewDownload:Z

    if-eqz v1, :cond_10

    invoke-static {p0}, Lcom/kwad/components/core/e/d/a;->h(Lcom/kwad/components/core/e/d/a$a;)I

    move-result p0

    return p0

    :cond_10
    invoke-virtual {p0}, Lcom/kwad/components/core/e/d/a$a;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-static {v2}, Lcom/kwad/sdk/core/response/b/a;->cz(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v3

    invoke-static {v2}, Lcom/kwad/sdk/core/response/b/a;->aq(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v3, v2}, Lcom/kwad/sdk/utils/d;->f(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)Z

    move-result v1

    invoke-static {p0}, Lcom/kwad/components/core/e/d/a;->e(Lcom/kwad/components/core/e/d/a$a;)V

    if-eqz v1, :cond_11

    invoke-virtual {p0}, Lcom/kwad/components/core/e/d/a$a;->getAdTemplate()Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object p0

    invoke-static {p0, v0}, Lcom/kwad/sdk/core/report/a;->l(Lcom/kwad/sdk/core/response/model/AdTemplate;I)V

    return v0

    :cond_11
    new-instance v1, Lcom/kwad/components/core/page/AdWebViewActivityProxy$a$a;

    invoke-direct {v1}, Lcom/kwad/components/core/page/AdWebViewActivityProxy$a$a;-><init>()V

    invoke-virtual {p0}, Lcom/kwad/components/core/e/d/a$a;->getAdTemplate()Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object v2

    invoke-static {v2}, Lcom/kwad/sdk/core/response/b/b;->bm(Lcom/kwad/sdk/core/response/model/AdTemplate;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/kwad/components/core/page/AdWebViewActivityProxy$a$a;->ar(Ljava/lang/String;)Lcom/kwad/components/core/page/AdWebViewActivityProxy$a$a;

    move-result-object v1

    invoke-virtual {p0}, Lcom/kwad/components/core/e/d/a$a;->getAdTemplate()Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/kwad/components/core/page/AdWebViewActivityProxy$a$a;->S(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/components/core/page/AdWebViewActivityProxy$a$a;

    move-result-object v1

    invoke-virtual {v1}, Lcom/kwad/components/core/page/AdWebViewActivityProxy$a$a;->oA()Lcom/kwad/components/core/page/AdWebViewActivityProxy$a;

    move-result-object v1

    invoke-virtual {p0}, Lcom/kwad/components/core/e/d/a$a;->getContext()Landroid/content/Context;

    move-result-object p0

    invoke-static {p0, v1}, Lcom/kwad/components/core/e/d/a;->a(Landroid/content/Context;Lcom/kwad/components/core/page/AdWebViewActivityProxy$a;)V

    return v0

    :cond_12
    invoke-static {v2}, Lcom/kwad/sdk/core/response/b/a;->ax(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v1

    if-eqz v1, :cond_15

    invoke-virtual {p0}, Lcom/kwad/components/core/e/d/a$a;->nu()I

    move-result v1

    if-eq v1, v6, :cond_14

    invoke-virtual {p0}, Lcom/kwad/components/core/e/d/a$a;->nu()I

    move-result v1

    if-ne v1, v3, :cond_13

    goto :goto_6

    :cond_13
    invoke-static {p0}, Lcom/kwad/components/core/e/d/a;->e(Lcom/kwad/components/core/e/d/a$a;)V

    invoke-static {p0}, Lcom/kwad/components/core/e/d/a;->c(Lcom/kwad/components/core/e/d/a$a;)Z

    move-result v1

    if-nez v1, :cond_15

    invoke-virtual {p0, v3}, Lcom/kwad/components/core/e/d/a$a;->ap(Z)Lcom/kwad/components/core/e/d/a$a;

    :goto_5
    invoke-static {p0}, Lcom/kwad/components/core/e/d/a;->h(Lcom/kwad/components/core/e/d/a$a;)I

    move-result p0

    return p0

    :cond_14
    :goto_6
    invoke-virtual {p0, v0}, Lcom/kwad/components/core/e/d/a$a;->ap(Z)Lcom/kwad/components/core/e/d/a$a;

    invoke-static {p0}, Lcom/kwad/components/core/e/d/a;->e(Lcom/kwad/components/core/e/d/a$a;)V

    goto :goto_5

    :cond_15
    return v0
.end method

.method private static a(Lcom/kwad/components/core/e/d/a$a;I)I
    .locals 3

    invoke-virtual {p0}, Lcom/kwad/components/core/e/d/a$a;->getAdTemplate()Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object p1

    if-eqz p1, :cond_0

    iget-object v0, p1, Lcom/kwad/sdk/core/response/model/AdTemplate;->mAdScene:Lcom/kwad/sdk/internal/api/SceneImpl;

    if-eqz v0, :cond_0

    iget-object v0, p1, Lcom/kwad/sdk/core/response/model/AdTemplate;->mAdScene:Lcom/kwad/sdk/internal/api/SceneImpl;

    invoke-virtual {v0}, Lcom/kwad/sdk/internal/api/SceneImpl;->getAdStyle()I

    move-result v0

    invoke-static {v0}, Lcom/kwad/sdk/core/report/KSLoggerReporter;->cs(I)Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;

    move-result-object v0

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    sget-object v1, Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;->CORE_CONVERT:Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;

    const-string v2, "dplinkStart"

    invoke-virtual {v1, v0, v2}, Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;->buildMethodCheck(Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;Ljava/lang/String;)Lcom/kwad/sdk/core/report/KSLoggerReporter$b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/sdk/core/report/KSLoggerReporter$b;->report()V

    const/4 v0, 0x1

    invoke-static {p0, v0}, Lcom/kwad/components/core/e/d/d;->b(Lcom/kwad/components/core/e/d/a$a;I)I

    move-result v1

    invoke-static {p0, p1}, Lcom/kwad/components/core/e/d/d;->a(Lcom/kwad/components/core/e/d/a$a;Lcom/kwad/sdk/core/response/model/AdTemplate;)Ljava/lang/String;

    move-result-object p0

    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_2

    const-string v2, " "

    invoke-virtual {p0, v2}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_1

    goto :goto_1

    :cond_1
    const/4 v0, 0x0

    :cond_2
    :goto_1
    if-eqz v0, :cond_3

    sget-object v0, Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;->RESPONE_MONITOR:Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;->buildNormalApmReporter()Lcom/kwad/sdk/core/report/KSLoggerReporter$b;

    move-result-object v0

    const-string v2, "response_biz_error_convert"

    invoke-virtual {v0, v2}, Lcom/kwad/sdk/core/report/KSLoggerReporter$b;->dx(Ljava/lang/String;)Lcom/kwad/sdk/core/report/KSLoggerReporter$b;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/kwad/sdk/core/report/KSLoggerReporter$b;->aK(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/report/KSLoggerReporter$b;

    move-result-object p1

    const-string v0, "dpLinkError"

    invoke-virtual {p1, v0, p0}, Lcom/kwad/sdk/core/report/KSLoggerReporter$b;->W(Ljava/lang/String;Ljava/lang/String;)Lcom/kwad/sdk/core/report/KSLoggerReporter$b;

    move-result-object p0

    invoke-virtual {p0}, Lcom/kwad/sdk/core/report/KSLoggerReporter$b;->report()V

    :cond_3
    return v1
.end method

.method private static a(Landroid/content/Context;Lcom/kwad/components/core/page/AdWebViewActivityProxy$a;)V
    .locals 0

    invoke-static {p0, p1}, Lcom/kwad/components/core/page/AdWebViewActivityProxy;->launch(Landroid/content/Context;Lcom/kwad/components/core/page/AdWebViewActivityProxy$a;)V

    return-void
.end method

.method public static a(Lcom/kwad/components/core/webview/b/a/k$b;)V
    .locals 1

    sget-object v0, Lcom/kwad/components/core/e/d/a;->JB:Ljava/util/List;

    if-nez v0, :cond_0

    new-instance v0, Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-direct {v0}, Ljava/util/concurrent/CopyOnWriteArrayList;-><init>()V

    sput-object v0, Lcom/kwad/components/core/e/d/a;->JB:Ljava/util/List;

    :cond_0
    new-instance v0, Ljava/lang/ref/WeakReference;

    invoke-direct {v0, p0}, Ljava/lang/ref/WeakReference;-><init>(Ljava/lang/Object;)V

    sget-object p0, Lcom/kwad/components/core/e/d/a;->JB:Ljava/util/List;

    invoke-interface {p0, v0}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    return-void
.end method

.method public static b(Lcom/kwad/components/core/webview/b/a/k$b;)V
    .locals 4

    sget-object v0, Lcom/kwad/components/core/e/d/a;->JB:Ljava/util/List;

    if-nez v0, :cond_0

    return-void

    :cond_0
    const/4 v0, 0x0

    :goto_0
    sget-object v1, Lcom/kwad/components/core/e/d/a;->JB:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result v1

    const/4 v2, -0x1

    if-ge v0, v1, :cond_2

    sget-object v1, Lcom/kwad/components/core/e/d/a;->JB:Ljava/util/List;

    invoke-interface {v1, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/ref/WeakReference;

    if-eqz v1, :cond_1

    invoke-virtual {v1}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v3

    if-eqz v3, :cond_1

    invoke-virtual {v1}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v1

    if-ne p0, v1, :cond_1

    goto :goto_1

    :cond_1
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    :cond_2
    move v0, v2

    :goto_1
    if-eq v0, v2, :cond_3

    sget-object p0, Lcom/kwad/components/core/e/d/a;->JB:Ljava/util/List;

    invoke-interface {p0, v0}, Ljava/util/List;->remove(I)Ljava/lang/Object;

    :cond_3
    return-void
.end method

.method private static b(Lcom/kwad/components/core/e/d/a$a;)Z
    .locals 2

    invoke-virtual {p0}, Lcom/kwad/components/core/e/d/a$a;->getAdTemplate()Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->ax(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v0

    const/4 v1, 0x1

    if-eqz v0, :cond_0

    invoke-virtual {p0}, Lcom/kwad/components/core/e/d/a$a;->ns()Z

    move-result v0

    if-nez v0, :cond_1

    invoke-static {p0}, Lcom/kwad/components/core/e/d/c;->s(Lcom/kwad/components/core/e/d/a$a;)I

    move-result p0

    const/4 v0, 0x3

    if-ne p0, v0, :cond_1

    return v1

    :cond_0
    invoke-static {p0}, Lcom/kwad/components/core/e/d/a;->d(Lcom/kwad/components/core/e/d/a$a;)I

    move-result p0

    if-ne p0, v1, :cond_1

    return v1

    :cond_1
    const/4 p0, 0x0

    return p0
.end method

.method private static c(Landroid/content/Context;Lcom/kwad/sdk/core/response/model/AdTemplate;)V
    .locals 1

    invoke-static {p0, p1}, Lcom/kwad/components/core/page/AdWebViewVideoActivityProxy;->launch(Landroid/content/Context;Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    iget-object p0, p1, Lcom/kwad/sdk/core/response/model/AdTemplate;->mAdScene:Lcom/kwad/sdk/internal/api/SceneImpl;

    if-eqz p0, :cond_0

    iget-object p0, p1, Lcom/kwad/sdk/core/response/model/AdTemplate;->mAdScene:Lcom/kwad/sdk/internal/api/SceneImpl;

    invoke-virtual {p0}, Lcom/kwad/sdk/internal/api/SceneImpl;->getAdStyle()I

    move-result p0

    invoke-static {p0}, Lcom/kwad/sdk/core/report/KSLoggerReporter;->cs(I)Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;

    move-result-object p0

    goto :goto_0

    :cond_0
    const/4 p0, 0x0

    :goto_0
    sget-object p1, Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;->CORE_CONVERT:Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;

    const-string v0, "toVideoH5Web"

    invoke-virtual {p1, p0, v0}, Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;->buildMethodCheck(Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;Ljava/lang/String;)Lcom/kwad/sdk/core/report/KSLoggerReporter$b;

    move-result-object p0

    invoke-virtual {p0}, Lcom/kwad/sdk/core/report/KSLoggerReporter$b;->report()V

    return-void
.end method

.method private static c(Lcom/kwad/components/core/e/d/a$a;)Z
    .locals 4

    invoke-virtual {p0}, Lcom/kwad/components/core/e/d/a$a;->getAdTemplate()Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v1

    invoke-virtual {p0}, Lcom/kwad/components/core/e/d/a$a;->np()Z

    move-result v2

    const/4 v3, 0x0

    if-eqz v2, :cond_0

    invoke-static {}, Lcom/kwad/sdk/core/config/d;->zp()Z

    move-result v2

    invoke-static {v1, v2}, Lcom/kwad/sdk/core/response/b/a;->b(Lcom/kwad/sdk/core/response/model/AdInfo;Z)Z

    move-result v2

    if-eqz v2, :cond_0

    invoke-static {v1}, Lcom/kwad/sdk/core/response/b/a;->aK(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    sget-boolean v1, Lcom/kwad/components/core/page/AdWebViewVideoActivityProxy;->showingAdWebViewVideoActivity:Z

    if-nez v1, :cond_0

    invoke-virtual {p0}, Lcom/kwad/components/core/e/d/a$a;->hi()Lcom/kwad/components/core/e/d/c;

    move-result-object v1

    invoke-virtual {v1}, Lcom/kwad/components/core/e/d/c;->nC()Z

    move-result v1

    if-nez v1, :cond_0

    invoke-virtual {p0}, Lcom/kwad/components/core/e/d/a$a;->getContext()Landroid/content/Context;

    move-result-object p0

    invoke-static {p0, v0}, Lcom/kwad/components/core/e/d/a;->c(Landroid/content/Context;Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    const/4 p0, 0x1

    return p0

    :cond_0
    return v3
.end method

.method private static d(Lcom/kwad/components/core/e/d/a$a;)I
    .locals 2

    invoke-virtual {p0}, Lcom/kwad/components/core/e/d/a$a;->getAdTemplate()Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    iget-object v1, v0, Lcom/kwad/sdk/core/response/model/AdInfo;->unDownloadConf:Lcom/kwad/sdk/core/response/model/AdInfo$UnDownloadConf;

    iget-object v1, v1, Lcom/kwad/sdk/core/response/model/AdInfo$UnDownloadConf;->unDownloadRegionConf:Lcom/kwad/sdk/core/response/model/AdInfo$UnDownloadRegionConf;

    if-eqz v1, :cond_2

    invoke-virtual {p0}, Lcom/kwad/components/core/e/d/a$a;->cV()I

    move-result p0

    const/4 v1, 0x2

    if-eq p0, v1, :cond_1

    const/4 v1, 0x3

    if-eq p0, v1, :cond_0

    iget-object p0, v0, Lcom/kwad/sdk/core/response/model/AdInfo;->unDownloadConf:Lcom/kwad/sdk/core/response/model/AdInfo$UnDownloadConf;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$UnDownloadConf;->unDownloadRegionConf:Lcom/kwad/sdk/core/response/model/AdInfo$UnDownloadRegionConf;

    iget p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$UnDownloadRegionConf;->actionBarType:I

    return p0

    :cond_0
    iget-object p0, v0, Lcom/kwad/sdk/core/response/model/AdInfo;->unDownloadConf:Lcom/kwad/sdk/core/response/model/AdInfo$UnDownloadConf;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$UnDownloadConf;->unDownloadRegionConf:Lcom/kwad/sdk/core/response/model/AdInfo$UnDownloadRegionConf;

    iget p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$UnDownloadRegionConf;->materialJumpType:I

    return p0

    :cond_1
    iget-object p0, v0, Lcom/kwad/sdk/core/response/model/AdInfo;->unDownloadConf:Lcom/kwad/sdk/core/response/model/AdInfo$UnDownloadConf;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$UnDownloadConf;->unDownloadRegionConf:Lcom/kwad/sdk/core/response/model/AdInfo$UnDownloadRegionConf;

    iget p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$UnDownloadRegionConf;->describeBarType:I

    return p0

    :cond_2
    const/4 p0, 0x0

    return p0
.end method

.method private static e(Lcom/kwad/components/core/e/d/a$a;)V
    .locals 1

    invoke-static {p0}, Lcom/kwad/components/core/e/d/a;->g(Lcom/kwad/components/core/e/d/a$a;)V

    invoke-static {p0}, Lcom/kwad/components/core/e/d/a;->f(Lcom/kwad/components/core/e/d/a$a;)V

    invoke-virtual {p0}, Lcom/kwad/components/core/e/d/a$a;->ni()Lcom/kwad/components/core/e/d/a$b;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-virtual {p0}, Lcom/kwad/components/core/e/d/a$a;->ni()Lcom/kwad/components/core/e/d/a$b;

    move-result-object p0

    invoke-interface {p0}, Lcom/kwad/components/core/e/d/a$b;->onAdClicked()V

    :cond_0
    return-void
.end method

.method private static f(Lcom/kwad/components/core/e/d/a$a;)V
    .locals 2

    invoke-virtual {p0}, Lcom/kwad/components/core/e/d/a$a;->nn()Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-static {p0}, Lcom/kwad/components/core/e/d/a$a;->j(Lcom/kwad/components/core/e/d/a$a;)Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object v0

    invoke-static {p0}, Lcom/kwad/components/core/e/d/a$a;->l(Lcom/kwad/components/core/e/d/a$a;)Lcom/kwad/sdk/core/report/z$b;

    move-result-object v1

    invoke-virtual {p0}, Lcom/kwad/components/core/e/d/a$a;->hv()Lorg/json/JSONObject;

    move-result-object p0

    invoke-static {v0, v1, p0}, Lcom/kwad/sdk/core/report/a;->a(Lcom/kwad/sdk/core/response/model/AdTemplate;Lcom/kwad/sdk/core/report/z$b;Lorg/json/JSONObject;)V

    :cond_0
    return-void
.end method

.method private static g(Lcom/kwad/components/core/e/d/a$a;)V
    .locals 4

    sget-object v0, Lcom/kwad/components/core/e/d/a;->JB:Ljava/util/List;

    if-eqz v0, :cond_2

    invoke-interface {v0}, Ljava/util/List;->isEmpty()Z

    move-result v0

    if-nez v0, :cond_2

    invoke-static {p0}, Lcom/kwad/components/core/e/d/a$a;->j(Lcom/kwad/components/core/e/d/a$a;)Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object v0

    if-nez v0, :cond_0

    goto :goto_1

    :cond_0
    sget-object v0, Lcom/kwad/components/core/e/d/a;->JB:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_1
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_2

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/ref/WeakReference;

    if-eqz v1, :cond_1

    invoke-virtual {v1}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/kwad/components/core/webview/b/a/k$b;

    if-eqz v1, :cond_1

    invoke-static {p0}, Lcom/kwad/components/core/e/d/a$a;->j(Lcom/kwad/components/core/e/d/a$a;)Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object v2

    invoke-static {v2}, Lcom/kwad/sdk/core/response/b/d;->cq(Lcom/kwad/sdk/core/response/model/AdTemplate;)J

    move-result-wide v2

    invoke-interface {v1, v2, v3}, Lcom/kwad/components/core/webview/b/a/k$b;->E(J)V

    goto :goto_0

    :cond_2
    :goto_1
    return-void
.end method

.method private static h(Lcom/kwad/components/core/e/d/a$a;)I
    .locals 5

    invoke-virtual {p0}, Lcom/kwad/components/core/e/d/a$a;->hi()Lcom/kwad/components/core/e/d/c;

    move-result-object v0

    if-nez v0, :cond_0

    new-instance v0, Lcom/kwad/components/core/e/d/c;

    invoke-static {p0}, Lcom/kwad/components/core/e/d/a$a;->j(Lcom/kwad/components/core/e/d/a$a;)Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object v1

    invoke-direct {v0, v1}, Lcom/kwad/components/core/e/d/c;-><init>(Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    invoke-virtual {p0, v0}, Lcom/kwad/components/core/e/d/a$a;->b(Lcom/kwad/components/core/e/d/c;)Lcom/kwad/components/core/e/d/a$a;

    :cond_0
    invoke-virtual {v0, p0}, Lcom/kwad/components/core/e/d/c;->m(Lcom/kwad/components/core/e/d/a$a;)I

    move-result v0

    invoke-virtual {p0}, Lcom/kwad/components/core/e/d/a$a;->getAdTemplate()Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object v1

    invoke-virtual {v1}, Lcom/kwad/sdk/core/response/model/AdTemplate;->getBusinessType()Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;

    move-result-object v2

    sget-object v3, Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;->CORE_CONVERT:Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;

    const-string v4, "toDownload"

    invoke-virtual {v3, v2, v4}, Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;->buildMethodCheck(Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;Ljava/lang/String;)Lcom/kwad/sdk/core/report/KSLoggerReporter$b;

    move-result-object v2

    invoke-virtual {v2}, Lcom/kwad/sdk/core/report/KSLoggerReporter$b;->report()V

    invoke-virtual {p0}, Lcom/kwad/components/core/e/d/a$a;->getAdTemplate()Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object p0

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/d;->cj(Lcom/kwad/sdk/core/response/model/AdTemplate;)Ljava/lang/String;

    move-result-object p0

    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_1

    const-string v2, " "

    invoke-virtual {p0, v2}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v2

    :cond_1
    if-nez v2, :cond_2

    const-string v2, "http"

    invoke-virtual {p0, v2}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v2

    :cond_2
    if-eqz v2, :cond_3

    sget-object v2, Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;->RESPONE_MONITOR:Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;

    invoke-virtual {v2}, Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;->buildNormalApmReporter()Lcom/kwad/sdk/core/report/KSLoggerReporter$b;

    move-result-object v2

    const-string v3, "response_biz_error_convert"

    invoke-virtual {v2, v3}, Lcom/kwad/sdk/core/report/KSLoggerReporter$b;->dx(Ljava/lang/String;)Lcom/kwad/sdk/core/report/KSLoggerReporter$b;

    move-result-object v2

    invoke-virtual {v2, v1}, Lcom/kwad/sdk/core/report/KSLoggerReporter$b;->aK(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/report/KSLoggerReporter$b;

    move-result-object v1

    const-string v2, "downloadUrlError"

    invoke-virtual {v1, v2, p0}, Lcom/kwad/sdk/core/report/KSLoggerReporter$b;->W(Ljava/lang/String;Ljava/lang/String;)Lcom/kwad/sdk/core/report/KSLoggerReporter$b;

    move-result-object p0

    invoke-virtual {p0}, Lcom/kwad/sdk/core/report/KSLoggerReporter$b;->report()V

    :cond_3
    return v0
.end method

.method private static i(Lcom/kwad/components/core/e/d/a$a;)V
    .locals 5

    invoke-virtual {p0}, Lcom/kwad/components/core/e/d/a$a;->getAdTemplate()Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object v0

    invoke-virtual {p0}, Lcom/kwad/components/core/e/d/a$a;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v2

    invoke-static {v2}, Lcom/kwad/sdk/core/response/b/a;->cz(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v3

    invoke-static {v2}, Lcom/kwad/sdk/core/response/b/a;->aq(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v4

    invoke-static {v1, v3, v4}, Lcom/kwad/sdk/utils/d;->f(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)Z

    move-result v3

    if-eqz v3, :cond_0

    const/4 p0, 0x0

    invoke-static {v0, p0}, Lcom/kwad/sdk/core/report/a;->l(Lcom/kwad/sdk/core/response/model/AdTemplate;I)V

    return-void

    :cond_0
    invoke-static {}, Lcom/kwad/sdk/core/config/d;->zp()Z

    move-result v3

    invoke-static {v2, v3}, Lcom/kwad/sdk/core/response/b/a;->b(Lcom/kwad/sdk/core/response/model/AdInfo;Z)Z

    move-result v2

    if-eqz v2, :cond_1

    iget-boolean v2, v0, Lcom/kwad/sdk/core/response/model/AdTemplate;->mAdWebVideoPageShowing:Z

    if-nez v2, :cond_1

    invoke-static {v1, v0}, Lcom/kwad/components/core/e/d/a;->c(Landroid/content/Context;Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    return-void

    :cond_1
    new-instance v0, Lcom/kwad/components/core/page/AdWebViewActivityProxy$a$a;

    invoke-direct {v0}, Lcom/kwad/components/core/page/AdWebViewActivityProxy$a$a;-><init>()V

    invoke-virtual {p0}, Lcom/kwad/components/core/e/d/a$a;->getAdTemplate()Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object v2

    invoke-static {v2}, Lcom/kwad/sdk/core/response/b/b;->bm(Lcom/kwad/sdk/core/response/model/AdTemplate;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Lcom/kwad/components/core/page/AdWebViewActivityProxy$a$a;->ar(Ljava/lang/String;)Lcom/kwad/components/core/page/AdWebViewActivityProxy$a$a;

    move-result-object v0

    invoke-virtual {p0}, Lcom/kwad/components/core/e/d/a$a;->getAdTemplate()Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object p0

    invoke-virtual {v0, p0}, Lcom/kwad/components/core/page/AdWebViewActivityProxy$a$a;->S(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/components/core/page/AdWebViewActivityProxy$a$a;

    move-result-object p0

    invoke-virtual {p0}, Lcom/kwad/components/core/page/AdWebViewActivityProxy$a$a;->oA()Lcom/kwad/components/core/page/AdWebViewActivityProxy$a;

    move-result-object p0

    invoke-static {v1, p0}, Lcom/kwad/components/core/e/d/a;->a(Landroid/content/Context;Lcom/kwad/components/core/page/AdWebViewActivityProxy$a;)V

    return-void
.end method
