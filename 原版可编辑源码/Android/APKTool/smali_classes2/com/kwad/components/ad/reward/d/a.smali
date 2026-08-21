.class public final Lcom/kwad/components/ad/reward/d/a;
.super Ljava/lang/Object;


# direct methods
.method public static P(Landroid/content/Context;)V
    .locals 6

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    new-instance v2, Lcom/kwad/components/ad/reward/d/b;

    invoke-direct {v2}, Lcom/kwad/components/ad/reward/d/b;-><init>()V

    invoke-static {p0}, Lcom/kwad/sdk/utils/y;->cd(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v3

    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    const/4 v5, 0x0

    if-nez v4, :cond_0

    :try_start_0
    new-instance v4, Lorg/json/JSONObject;

    invoke-direct {v4, v3}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-virtual {v2, v4}, Lcom/kwad/components/ad/reward/d/b;->parseJson(Lorg/json/JSONObject;)V

    iget-wide v3, v2, Lcom/kwad/components/ad/reward/d/b;->gb:J

    invoke-static {v3, v4, v0, v1}, Lcom/kwad/components/ad/reward/d/a;->b(JJ)Z

    move-result v3

    if-eqz v3, :cond_0

    iget v5, v2, Lcom/kwad/components/ad/reward/d/b;->rA:I
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v3

    invoke-static {v3}, Lcom/kwad/sdk/core/e/c;->printStackTraceOnly(Ljava/lang/Throwable;)V

    :cond_0
    :goto_0
    iput-wide v0, v2, Lcom/kwad/components/ad/reward/d/b;->gb:J

    add-int/lit8 v5, v5, 0x1

    iput v5, v2, Lcom/kwad/components/ad/reward/d/b;->rA:I

    invoke-virtual {v2}, Lcom/kwad/components/ad/reward/d/b;->toJson()Lorg/json/JSONObject;

    move-result-object v0

    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {p0, v0}, Lcom/kwad/sdk/utils/y;->X(Landroid/content/Context;Ljava/lang/String;)V

    return-void
.end method

.method private static b(JJ)Z
    .locals 4

    const-wide/16 v0, 0x0

    cmp-long v2, p0, v0

    const/4 v3, 0x0

    if-lez v2, :cond_1

    cmp-long v0, p2, v0

    if-gtz v0, :cond_0

    goto :goto_0

    :cond_0
    const-wide v0, 0x92a9caa8L

    div-long/2addr p0, v0

    div-long/2addr p2, v0

    cmp-long p0, p0, p2

    if-nez p0, :cond_1

    const/4 p0, 0x1

    return p0

    :cond_1
    :goto_0
    return v3
.end method

.method public static b(Landroid/content/Context;Lcom/kwad/sdk/core/response/model/AdInfo;)Z
    .locals 4

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/a;->ay(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v0

    const/4 v1, 0x0

    if-nez v0, :cond_0

    return v1

    :cond_0
    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/a;->az(Lcom/kwad/sdk/core/response/model/AdInfo;)I

    move-result v0

    const/4 v2, 0x1

    add-int/2addr v0, v2

    invoke-static {v0, v2}, Ljava/lang/Math;->max(II)I

    move-result v0

    invoke-static {p0, v0}, Lcom/kwad/components/ad/reward/d/a;->d(Landroid/content/Context;I)Z

    move-result v3

    invoke-static {p0, v0}, Lcom/kwad/components/ad/reward/d/a;->c(Landroid/content/Context;I)V

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/a;->aA(Lcom/kwad/sdk/core/response/model/AdInfo;)I

    move-result p1

    invoke-static {p0, p1}, Lcom/kwad/components/ad/reward/d/a;->e(Landroid/content/Context;I)Z

    move-result p0

    if-eqz v3, :cond_1

    if-eqz p0, :cond_1

    return v2

    :cond_1
    return v1
.end method

.method private static c(Landroid/content/Context;I)V
    .locals 2

    invoke-static {p0}, Lcom/kwad/sdk/utils/y;->cc(Landroid/content/Context;)I

    move-result v0

    rem-int p1, v0, p1

    const/4 v1, 0x1

    if-nez p1, :cond_0

    invoke-static {p0, v1}, Lcom/kwad/sdk/utils/y;->k(Landroid/content/Context;I)V

    return-void

    :cond_0
    add-int/2addr v0, v1

    invoke-static {p0, v0}, Lcom/kwad/sdk/utils/y;->k(Landroid/content/Context;I)V

    return-void
.end method

.method private static d(Landroid/content/Context;I)Z
    .locals 0

    invoke-static {p0}, Lcom/kwad/sdk/utils/y;->cc(Landroid/content/Context;)I

    move-result p0

    if-eqz p1, :cond_0

    rem-int/2addr p0, p1

    if-nez p0, :cond_0

    const/4 p0, 0x1

    return p0

    :cond_0
    const/4 p0, 0x0

    return p0
.end method

.method private static e(Landroid/content/Context;I)Z
    .locals 7

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    new-instance v2, Lcom/kwad/components/ad/reward/d/b;

    invoke-direct {v2}, Lcom/kwad/components/ad/reward/d/b;-><init>()V

    invoke-static {p0}, Lcom/kwad/sdk/utils/y;->cd(Landroid/content/Context;)Ljava/lang/String;

    move-result-object p0

    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    const/4 v4, 0x0

    if-nez v3, :cond_0

    :try_start_0
    new-instance v3, Lorg/json/JSONObject;

    invoke-direct {v3, p0}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-virtual {v2, v3}, Lcom/kwad/components/ad/reward/d/b;->parseJson(Lorg/json/JSONObject;)V

    iget-wide v5, v2, Lcom/kwad/components/ad/reward/d/b;->gb:J

    invoke-static {v5, v6, v0, v1}, Lcom/kwad/components/ad/reward/d/a;->b(JJ)Z

    move-result p0

    if-eqz p0, :cond_0

    iget p0, v2, Lcom/kwad/components/ad/reward/d/b;->rA:I
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    invoke-static {p0}, Lcom/kwad/sdk/core/e/c;->printStackTraceOnly(Ljava/lang/Throwable;)V

    :cond_0
    move p0, v4

    :goto_0
    if-ge p0, p1, :cond_1

    const/4 p0, 0x1

    return p0

    :cond_1
    return v4
.end method
