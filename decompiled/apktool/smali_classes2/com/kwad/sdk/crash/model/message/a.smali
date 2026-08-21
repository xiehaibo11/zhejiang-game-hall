.class public final Lcom/kwad/sdk/crash/model/message/a;
.super Ljava/lang/Object;


# instance fields
.field private aAu:Lorg/json/JSONObject;


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    iput-object v0, p0, Lcom/kwad/sdk/crash/model/message/a;->aAu:Lorg/json/JSONObject;

    return-void
.end method

.method private put(Ljava/lang/String;Ljava/lang/Object;)V
    .locals 1

    :try_start_0
    iget-object v0, p0, Lcom/kwad/sdk/crash/model/message/a;->aAu:Lorg/json/JSONObject;

    invoke-virtual {v0, p1, p2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p1

    invoke-static {p1}, Lcom/kwad/sdk/core/e/c;->printStackTraceOnly(Ljava/lang/Throwable;)V

    return-void
.end method


# virtual methods
.method public final ey(Ljava/lang/String;)V
    .locals 1

    sget-object v0, Lcom/kwad/sdk/crash/d;->azU:Ljava/lang/String;

    invoke-direct {p0, v0, p1}, Lcom/kwad/sdk/crash/model/message/a;->put(Ljava/lang/String;Ljava/lang/Object;)V

    return-void
.end method

.method public final putInt(Ljava/lang/String;I)V
    .locals 0

    invoke-static {p2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p2

    invoke-direct {p0, p1, p2}, Lcom/kwad/sdk/crash/model/message/a;->put(Ljava/lang/String;Ljava/lang/Object;)V

    return-void
.end method

.method public final putString(Ljava/lang/String;Ljava/lang/String;)V
    .locals 2

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    invoke-virtual {p2}, Ljava/lang/String;->length()I

    move-result v0

    const/16 v1, 0x64

    if-le v0, v1, :cond_0

    goto :goto_0

    :cond_0
    invoke-direct {p0, p1, p2}, Lcom/kwad/sdk/crash/model/message/a;->put(Ljava/lang/String;Ljava/lang/Object;)V

    return-void

    :cond_1
    :goto_0
    const-string p1, "ExceptionCollector"

    const-string p2, "string value to long ,max is 100"

    invoke-static {p1, p2}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public final toString()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/crash/model/message/a;->aAu:Lorg/json/JSONObject;

    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
