.class public final Lcom/kwad/sdk/contentalliance/a/a/a;
.super Ljava/lang/Object;


# instance fields
.field public adStyle:J

.field public clickTime:J

.field public contentType:I

.field public photoId:J


# direct methods
.method public constructor <init>()V
    .locals 2

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const-wide/16 v0, -0x1

    iput-wide v0, p0, Lcom/kwad/sdk/contentalliance/a/a/a;->clickTime:J

    return-void
.end method

.method public constructor <init>(Lcom/kwad/sdk/core/response/model/AdTemplate;J)V
    .locals 2

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const-wide/16 v0, -0x1

    iput-wide v0, p0, Lcom/kwad/sdk/contentalliance/a/a/a;->clickTime:J

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/d;->cm(Lcom/kwad/sdk/core/response/model/AdTemplate;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/sdk/contentalliance/a/a/a;->photoId:J

    iput-wide p2, p0, Lcom/kwad/sdk/contentalliance/a/a/a;->clickTime:J

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/d;->cb(Lcom/kwad/sdk/core/response/model/AdTemplate;)I

    move-result p2

    int-to-long p2, p2

    iput-wide p2, p0, Lcom/kwad/sdk/contentalliance/a/a/a;->adStyle:J

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/d;->cc(Lcom/kwad/sdk/core/response/model/AdTemplate;)I

    move-result p1

    iput p1, p0, Lcom/kwad/sdk/contentalliance/a/a/a;->contentType:I

    return-void
.end method

.method public static ap(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/contentalliance/a/a/a;
    .locals 3

    new-instance v0, Lcom/kwad/sdk/contentalliance/a/a/a;

    invoke-static {p0}, Lcom/kwad/sdk/utils/l;->cC(Lcom/kwad/sdk/core/response/model/AdTemplate;)J

    move-result-wide v1

    invoke-direct {v0, p0, v1, v2}, Lcom/kwad/sdk/contentalliance/a/a/a;-><init>(Lcom/kwad/sdk/core/response/model/AdTemplate;J)V

    return-object v0
.end method


# virtual methods
.method public final yR()Ljava/lang/String;
    .locals 4

    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    :try_start_0
    const-string v1, "contentType"

    iget v2, p0, Lcom/kwad/sdk/contentalliance/a/a/a;->contentType:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "adStyle"

    iget-wide v2, p0, Lcom/kwad/sdk/contentalliance/a/a/a;->adStyle:J

    invoke-virtual {v0, v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;J)Lorg/json/JSONObject;
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v1

    invoke-static {v1}, Lcom/kwad/sdk/core/e/c;->printStackTrace(Ljava/lang/Throwable;)V

    :goto_0
    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
