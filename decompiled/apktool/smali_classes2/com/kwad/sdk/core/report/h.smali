.class public final Lcom/kwad/sdk/core/report/h;
.super Lcom/kwad/sdk/core/network/d;


# instance fields
.field protected aqT:Ljava/lang/String;


# direct methods
.method public constructor <init>(Ljava/lang/String;)V
    .locals 1

    invoke-direct {p0}, Lcom/kwad/sdk/core/network/d;-><init>()V

    const-string v0, ""

    iput-object v0, p0, Lcom/kwad/sdk/core/report/h;->aqT:Ljava/lang/String;

    iput-object p1, p0, Lcom/kwad/sdk/core/report/h;->aqT:Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Ljava/util/List;)V
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/kwad/sdk/core/report/r;",
            ">;)V"
        }
    .end annotation

    invoke-direct {p0}, Lcom/kwad/sdk/core/network/d;-><init>()V

    const-string v0, ""

    iput-object v0, p0, Lcom/kwad/sdk/core/report/h;->aqT:Ljava/lang/String;

    if-eqz p1, :cond_1

    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_1

    new-instance v0, Lorg/json/JSONArray;

    invoke-direct {v0}, Lorg/json/JSONArray;-><init>()V

    invoke-interface {p1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :goto_0
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/kwad/sdk/core/report/r;

    invoke-virtual {v1}, Lcom/kwad/sdk/core/report/r;->buildReportData()Lorg/json/JSONObject;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONArray;Lorg/json/JSONObject;)V

    goto :goto_0

    :cond_0
    const-string p1, "actionList"

    invoke-virtual {p0, p1, v0}, Lcom/kwad/sdk/core/report/h;->putBody(Ljava/lang/String;Lorg/json/JSONArray;)V

    :cond_1
    return-void
.end method


# virtual methods
.method public final getBodyParamsString()Ljava/lang/String;
    .locals 4

    invoke-super {p0}, Lcom/kwad/sdk/core/network/d;->getBodyParamsString()Ljava/lang/String;

    move-result-object v0

    :try_start_0
    iget-object v1, p0, Lcom/kwad/sdk/core/report/h;->aqT:Ljava/lang/String;

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_0

    return-object v0

    :cond_0
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->length()I

    move-result v2

    add-int/lit8 v2, v2, -0x1

    iget-object v3, p0, Lcom/kwad/sdk/core/report/h;->aqT:Ljava/lang/String;

    invoke-virtual {v1, v2, v3}, Ljava/lang/StringBuilder;->insert(ILjava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object v0

    :catch_0
    move-exception v1

    invoke-static {v1}, Lcom/kwad/sdk/core/e/c;->printStackTrace(Ljava/lang/Throwable;)V

    return-object v0
.end method

.method public final getUrl()Ljava/lang/String;
    .locals 1

    invoke-static {}, Lcom/kwad/sdk/h;->xe()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
