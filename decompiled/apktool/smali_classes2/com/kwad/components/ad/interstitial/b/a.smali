.class public Lcom/kwad/components/ad/interstitial/b/a;
.super Lcom/kwad/sdk/core/response/a/a;


# static fields
.field private static ga:Ljava/text/SimpleDateFormat;


# instance fields
.field public gb:J

.field public iU:I


# direct methods
.method static constructor <clinit>()V
    .locals 2

    new-instance v0, Ljava/text/SimpleDateFormat;

    const-string v1, "yyyy-MM-dd"

    invoke-direct {v0, v1}, Ljava/text/SimpleDateFormat;-><init>(Ljava/lang/String;)V

    sput-object v0, Lcom/kwad/components/ad/interstitial/b/a;->ga:Ljava/text/SimpleDateFormat;

    return-void
.end method

.method public constructor <init>()V
    .locals 2

    invoke-direct {p0}, Lcom/kwad/sdk/core/response/a/a;-><init>()V

    const-wide/16 v0, -0x1

    iput-wide v0, p0, Lcom/kwad/components/ad/interstitial/b/a;->gb:J

    const/4 v0, 0x0

    iput v0, p0, Lcom/kwad/components/ad/interstitial/b/a;->iU:I

    return-void
.end method

.method public static J(Landroid/content/Context;)V
    .locals 8

    invoke-static {}, Lcom/kwad/sdk/utils/y;->It()Ljava/lang/String;

    move-result-object v0

    new-instance v1, Lcom/kwad/components/ad/interstitial/b/a;

    invoke-direct {v1}, Lcom/kwad/components/ad/interstitial/b/a;-><init>()V

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    const/4 v3, 0x1

    if-eqz v2, :cond_0

    iput v3, v1, Lcom/kwad/components/ad/interstitial/b/a;->iU:I

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v2

    iput-wide v2, v1, Lcom/kwad/components/ad/interstitial/b/a;->gb:J

    invoke-virtual {v1}, Lcom/kwad/components/ad/interstitial/b/a;->toJson()Lorg/json/JSONObject;

    move-result-object v0

    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {p0, v0}, Lcom/kwad/sdk/utils/y;->W(Landroid/content/Context;Ljava/lang/String;)V

    return-void

    :cond_0
    :try_start_0
    new-instance v2, Lorg/json/JSONObject;

    invoke-direct {v2, v0}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-virtual {v1, v2}, Lcom/kwad/components/ad/interstitial/b/a;->parseJson(Lorg/json/JSONObject;)V

    iget-wide v4, v1, Lcom/kwad/components/ad/interstitial/b/a;->gb:J

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v6

    invoke-static {v4, v5, v6, v7}, Lcom/kwad/components/ad/interstitial/b/a;->b(JJ)Z

    move-result v0

    if-eqz v0, :cond_1

    iget v0, v1, Lcom/kwad/components/ad/interstitial/b/a;->iU:I

    add-int/2addr v0, v3

    iput v0, v1, Lcom/kwad/components/ad/interstitial/b/a;->iU:I

    goto :goto_0

    :cond_1
    iput v3, v1, Lcom/kwad/components/ad/interstitial/b/a;->iU:I

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v2

    iput-wide v2, v1, Lcom/kwad/components/ad/interstitial/b/a;->gb:J

    :goto_0
    invoke-virtual {v1}, Lcom/kwad/components/ad/interstitial/b/a;->toJson()Lorg/json/JSONObject;

    move-result-object v0

    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {p0, v0}, Lcom/kwad/sdk/utils/y;->W(Landroid/content/Context;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception p0

    invoke-static {p0}, Lcom/kwad/sdk/core/e/c;->printStackTraceOnly(Ljava/lang/Throwable;)V

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
    :try_start_0
    sget-object v0, Lcom/kwad/components/ad/interstitial/b/a;->ga:Ljava/text/SimpleDateFormat;

    new-instance v1, Ljava/util/Date;

    invoke-direct {v1, p0, p1}, Ljava/util/Date;-><init>(J)V

    invoke-virtual {v0, v1}, Ljava/text/SimpleDateFormat;->format(Ljava/util/Date;)Ljava/lang/String;

    move-result-object p0

    sget-object p1, Lcom/kwad/components/ad/interstitial/b/a;->ga:Ljava/text/SimpleDateFormat;

    new-instance v0, Ljava/util/Date;

    invoke-direct {v0, p2, p3}, Ljava/util/Date;-><init>(J)V

    invoke-virtual {p1, v0}, Ljava/text/SimpleDateFormat;->format(Ljava/util/Date;)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return p0

    :catch_0
    move-exception p0

    invoke-static {p0}, Lcom/kwad/sdk/core/e/c;->printStackTraceOnly(Ljava/lang/Throwable;)V

    :cond_1
    :goto_0
    return v3
.end method

.method public static cI()I
    .locals 7

    invoke-static {}, Lcom/kwad/sdk/utils/y;->It()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    const/4 v2, 0x0

    if-eqz v1, :cond_0

    return v2

    :cond_0
    new-instance v1, Lcom/kwad/components/ad/interstitial/b/a;

    invoke-direct {v1}, Lcom/kwad/components/ad/interstitial/b/a;-><init>()V

    :try_start_0
    new-instance v3, Lorg/json/JSONObject;

    invoke-direct {v3, v0}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-virtual {v1, v3}, Lcom/kwad/components/ad/interstitial/b/a;->parseJson(Lorg/json/JSONObject;)V

    iget-wide v3, v1, Lcom/kwad/components/ad/interstitial/b/a;->gb:J

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v5

    invoke-static {v3, v4, v5, v6}, Lcom/kwad/components/ad/interstitial/b/a;->b(JJ)Z

    move-result v0

    if-nez v0, :cond_1

    return v2

    :cond_1
    iget v0, v1, Lcom/kwad/components/ad/interstitial/b/a;->iU:I
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return v0

    :catch_0
    move-exception v0

    invoke-static {v0}, Lcom/kwad/sdk/core/e/c;->printStackTraceOnly(Ljava/lang/Throwable;)V

    return v2
.end method
