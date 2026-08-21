.class public Lcom/kwad/sdk/core/report/k;
.super Lcom/kwad/sdk/core/response/a/a;


# instance fields
.field public aqZ:I

.field public creativeId:J

.field public llsid:J

.field public score:I

.field public source:Ljava/lang/String;


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Lcom/kwad/sdk/core/response/a/a;-><init>()V

    const-string v0, "union"

    iput-object v0, p0, Lcom/kwad/sdk/core/report/k;->source:Ljava/lang/String;

    return-void
.end method

.method public static aJ(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/report/k;
    .locals 3

    new-instance v0, Lcom/kwad/sdk/core/report/k;

    invoke-direct {v0}, Lcom/kwad/sdk/core/report/k;-><init>()V

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/d;->cq(Lcom/kwad/sdk/core/response/model/AdTemplate;)J

    move-result-wide v1

    iput-wide v1, v0, Lcom/kwad/sdk/core/report/k;->creativeId:J

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/d;->cd(Lcom/kwad/sdk/core/response/model/AdTemplate;)J

    move-result-wide v1

    iput-wide v1, v0, Lcom/kwad/sdk/core/report/k;->llsid:J

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/d;->cv(Lcom/kwad/sdk/core/response/model/AdTemplate;)I

    move-result p0

    iput p0, v0, Lcom/kwad/sdk/core/report/k;->score:I

    if-lez p0, :cond_0

    const/4 p0, 0x1

    goto :goto_0

    :cond_0
    const/4 p0, 0x0

    :goto_0
    iput p0, v0, Lcom/kwad/sdk/core/report/k;->aqZ:I

    return-object v0
.end method


# virtual methods
.method public final Cc()Ljava/lang/String;
    .locals 1

    invoke-virtual {p0}, Lcom/kwad/sdk/core/report/k;->toJson()Lorg/json/JSONObject;

    move-result-object v0

    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
