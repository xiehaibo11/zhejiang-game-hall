.class public final Lcom/kwad/components/ad/reward/i/b;
.super Ljava/lang/Object;


# direct methods
.method public static a(Landroid/content/Context;Lcom/kwad/sdk/core/response/model/AdTemplate;Ljava/lang/String;ILorg/json/JSONObject;)V
    .locals 2

    new-instance v0, Lcom/kwad/sdk/core/report/j;

    invoke-direct {v0}, Lcom/kwad/sdk/core/report/j;-><init>()V

    const/16 v1, 0x12

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/report/j;->ci(I)Lcom/kwad/sdk/core/report/j;

    move-result-object v0

    new-instance v1, Lcom/kwad/components/ad/reward/i/b$1;

    invoke-direct {v1, p0, p3}, Lcom/kwad/components/ad/reward/i/b$1;-><init>(Landroid/content/Context;I)V

    const/4 p0, 0x0

    invoke-virtual {v0, p1, p2, p0, v1}, Lcom/kwad/sdk/core/report/j;->a(Lcom/kwad/sdk/core/response/model/AdTemplate;Ljava/lang/String;Ljava/lang/String;Lcom/kwad/sdk/g/a;)Lcom/kwad/sdk/core/report/j;

    invoke-static {p1, p4, v0}, Lcom/kwad/sdk/core/report/a;->d(Lcom/kwad/sdk/core/response/model/AdTemplate;Lorg/json/JSONObject;Lcom/kwad/sdk/core/report/j;)V

    return-void
.end method

.method public static a(Lcom/kwad/sdk/core/response/model/AdTemplate;Ljava/lang/String;Ljava/lang/String;Lcom/kwad/sdk/core/report/j;Lorg/json/JSONObject;)V
    .locals 1

    if-nez p3, :cond_0

    new-instance p3, Lcom/kwad/sdk/core/report/j;

    invoke-direct {p3}, Lcom/kwad/sdk/core/report/j;-><init>()V

    :cond_0
    const/4 v0, 0x0

    invoke-virtual {p3, p0, p1, p2, v0}, Lcom/kwad/sdk/core/report/j;->a(Lcom/kwad/sdk/core/response/model/AdTemplate;Ljava/lang/String;Ljava/lang/String;Lcom/kwad/sdk/g/a;)Lcom/kwad/sdk/core/report/j;

    invoke-static {p0, p3, p4}, Lcom/kwad/sdk/core/report/a;->a(Lcom/kwad/sdk/core/response/model/AdTemplate;Lcom/kwad/sdk/core/report/j;Lorg/json/JSONObject;)V

    return-void
.end method
