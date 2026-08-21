.class public final Lcom/kwad/sdk/core/b/a/af;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/core/d;


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Object;",
        "Lcom/kwad/sdk/core/d<",
        "Lcom/kwad/sdk/core/response/model/AdStatusInfo;",
        ">;"
    }
.end annotation


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private static a(Lcom/kwad/sdk/core/response/model/AdStatusInfo;Lorg/json/JSONObject;)V
    .locals 2

    if-nez p1, :cond_0

    return-void

    :cond_0
    const-string v0, "loadFromCache"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optBoolean(Ljava/lang/String;)Z

    move-result v0

    iput-boolean v0, p0, Lcom/kwad/sdk/core/response/model/AdStatusInfo;->loadFromCache:Z

    const-string v0, "loadDataTime"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/sdk/core/response/model/AdStatusInfo;->loadDataTime:J

    const-string v0, "downloadFinishTime"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/sdk/core/response/model/AdStatusInfo;->downloadFinishTime:J

    const-string v0, "downloadType"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/response/model/AdStatusInfo;->downloadType:I

    const-string v0, "downloadSize"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/sdk/core/response/model/AdStatusInfo;->downloadSize:J

    return-void
.end method

.method private static b(Lcom/kwad/sdk/core/response/model/AdStatusInfo;Lorg/json/JSONObject;)Lorg/json/JSONObject;
    .locals 5

    if-nez p1, :cond_0

    new-instance p1, Lorg/json/JSONObject;

    invoke-direct {p1}, Lorg/json/JSONObject;-><init>()V

    :cond_0
    iget-boolean v0, p0, Lcom/kwad/sdk/core/response/model/AdStatusInfo;->loadFromCache:Z

    if-eqz v0, :cond_1

    iget-boolean v0, p0, Lcom/kwad/sdk/core/response/model/AdStatusInfo;->loadFromCache:Z

    const-string v1, "loadFromCache"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Z)V

    :cond_1
    iget-wide v0, p0, Lcom/kwad/sdk/core/response/model/AdStatusInfo;->loadDataTime:J

    const-wide/16 v2, 0x0

    cmp-long v0, v0, v2

    if-eqz v0, :cond_2

    iget-wide v0, p0, Lcom/kwad/sdk/core/response/model/AdStatusInfo;->loadDataTime:J

    const-string v4, "loadDataTime"

    invoke-static {p1, v4, v0, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    :cond_2
    iget-wide v0, p0, Lcom/kwad/sdk/core/response/model/AdStatusInfo;->downloadFinishTime:J

    cmp-long v0, v0, v2

    if-eqz v0, :cond_3

    iget-wide v0, p0, Lcom/kwad/sdk/core/response/model/AdStatusInfo;->downloadFinishTime:J

    const-string v4, "downloadFinishTime"

    invoke-static {p1, v4, v0, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    :cond_3
    iget v0, p0, Lcom/kwad/sdk/core/response/model/AdStatusInfo;->downloadType:I

    if-eqz v0, :cond_4

    iget v0, p0, Lcom/kwad/sdk/core/response/model/AdStatusInfo;->downloadType:I

    const-string v1, "downloadType"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_4
    iget-wide v0, p0, Lcom/kwad/sdk/core/response/model/AdStatusInfo;->downloadSize:J

    cmp-long v0, v0, v2

    if-eqz v0, :cond_5

    iget-wide v0, p0, Lcom/kwad/sdk/core/response/model/AdStatusInfo;->downloadSize:J

    const-string p0, "downloadSize"

    invoke-static {p1, p0, v0, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    :cond_5
    return-object p1
.end method


# virtual methods
.method public final bridge synthetic a(Lcom/kwad/sdk/core/b;Lorg/json/JSONObject;)V
    .locals 0

    check-cast p1, Lcom/kwad/sdk/core/response/model/AdStatusInfo;

    invoke-static {p1, p2}, Lcom/kwad/sdk/core/b/a/af;->a(Lcom/kwad/sdk/core/response/model/AdStatusInfo;Lorg/json/JSONObject;)V

    return-void
.end method

.method public final bridge synthetic b(Lcom/kwad/sdk/core/b;Lorg/json/JSONObject;)Lorg/json/JSONObject;
    .locals 0

    check-cast p1, Lcom/kwad/sdk/core/response/model/AdStatusInfo;

    invoke-static {p1, p2}, Lcom/kwad/sdk/core/b/a/af;->b(Lcom/kwad/sdk/core/response/model/AdStatusInfo;Lorg/json/JSONObject;)Lorg/json/JSONObject;

    move-result-object p1

    return-object p1
.end method
