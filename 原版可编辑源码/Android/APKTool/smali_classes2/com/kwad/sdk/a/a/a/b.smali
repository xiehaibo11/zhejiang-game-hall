.class public final Lcom/kwad/sdk/a/a/a/b;
.super Ljava/lang/Object;


# static fields
.field public static WS:I = 0x0

.field public static rJ:J = -0x1L


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public static J(Landroid/content/Context;)V
    .locals 3

    new-instance v0, Lcom/kwad/sdk/a/a/a/a;

    invoke-direct {v0}, Lcom/kwad/sdk/a/a/a/a;-><init>()V

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v1

    invoke-static {v1, v2}, Lcom/kwad/sdk/a/a/a/b;->e(J)Z

    move-result v1

    const/4 v2, 0x1

    if-eqz v1, :cond_0

    sget v1, Lcom/kwad/sdk/a/a/a/b;->WS:I

    add-int/2addr v1, v2

    sput v1, Lcom/kwad/sdk/a/a/a/b;->WS:I

    goto :goto_0

    :cond_0
    sput v2, Lcom/kwad/sdk/a/a/a/b;->WS:I

    :goto_0
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v1

    sput-wide v1, Lcom/kwad/sdk/a/a/a/b;->rJ:J

    sget v1, Lcom/kwad/sdk/a/a/a/b;->WS:I

    iput v1, v0, Lcom/kwad/sdk/a/a/a/a;->WS:I

    sget-wide v1, Lcom/kwad/sdk/a/a/a/b;->rJ:J

    iput-wide v1, v0, Lcom/kwad/sdk/a/a/a/a;->gb:J

    invoke-virtual {v0}, Lcom/kwad/sdk/a/a/a/a;->toJson()Lorg/json/JSONObject;

    move-result-object v0

    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {p0, v0}, Lcom/kwad/sdk/utils/y;->ah(Landroid/content/Context;Ljava/lang/String;)V

    return-void
.end method

.method public static cI()I
    .locals 2

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    invoke-static {v0, v1}, Lcom/kwad/sdk/a/a/a/b;->e(J)Z

    move-result v0

    if-nez v0, :cond_0

    const/4 v0, 0x0

    sput v0, Lcom/kwad/sdk/a/a/a/b;->WS:I

    :cond_0
    sget v0, Lcom/kwad/sdk/a/a/a/b;->WS:I

    return v0
.end method

.method private static e(J)Z
    .locals 6

    invoke-static {}, Lcom/kwad/sdk/a/a/a/b;->he()J

    move-result-wide v0

    const-wide/16 v2, 0x0

    cmp-long v0, v0, v2

    const/4 v1, 0x0

    if-lez v0, :cond_1

    cmp-long v0, p0, v2

    if-gtz v0, :cond_0

    goto :goto_0

    :cond_0
    invoke-static {}, Lcom/kwad/sdk/a/a/a/b;->he()J

    move-result-wide v2

    const-wide v4, 0x92a9caa8L

    div-long/2addr v2, v4

    div-long/2addr p0, v4

    cmp-long p0, v2, p0

    if-nez p0, :cond_1

    const/4 p0, 0x1

    return p0

    :cond_1
    :goto_0
    return v1
.end method

.method private static he()J
    .locals 4

    sget-wide v0, Lcom/kwad/sdk/a/a/a/b;->rJ:J

    const-wide/16 v2, -0x1

    cmp-long v2, v0, v2

    if-nez v2, :cond_1

    invoke-static {}, Lcom/kwad/sdk/utils/y;->IB()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_0

    const-wide/16 v0, 0x0

    return-wide v0

    :cond_0
    new-instance v1, Lcom/kwad/sdk/a/a/a/a;

    invoke-direct {v1}, Lcom/kwad/sdk/a/a/a/a;-><init>()V

    :try_start_0
    new-instance v2, Lorg/json/JSONObject;

    invoke-direct {v2, v0}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-virtual {v1, v2}, Lcom/kwad/sdk/a/a/a/a;->parseJson(Lorg/json/JSONObject;)V

    iget-wide v2, v1, Lcom/kwad/sdk/a/a/a/a;->gb:J

    sput-wide v2, Lcom/kwad/sdk/a/a/a/b;->rJ:J

    iget v0, v1, Lcom/kwad/sdk/a/a/a/a;->WS:I

    sput v0, Lcom/kwad/sdk/a/a/a/b;->WS:I
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    invoke-static {v0}, Lcom/kwad/sdk/core/e/c;->printStackTraceOnly(Ljava/lang/Throwable;)V

    :goto_0
    sget-wide v0, Lcom/kwad/sdk/a/a/a/b;->rJ:J

    :cond_1
    return-wide v0
.end method
