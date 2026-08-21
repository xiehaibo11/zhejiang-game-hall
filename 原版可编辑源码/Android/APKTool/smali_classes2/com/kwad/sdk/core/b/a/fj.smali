.class public final Lcom/kwad/sdk/core/b/a/fj;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/core/d;


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Object;",
        "Lcom/kwad/sdk/core/d<",
        "Lcom/kwad/sdk/core/response/model/AdMatrixInfo$MatrixTag;",
        ">;"
    }
.end annotation


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private static a(Lcom/kwad/sdk/core/response/model/AdMatrixInfo$MatrixTag;Lorg/json/JSONObject;)V
    .locals 2

    if-nez p1, :cond_0

    return-void

    :cond_0
    const-string v0, "styleId"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$MatrixTag;->styleId:I

    const-string v0, "type"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$MatrixTag;->type:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$MatrixTag;->type:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_1

    const-string v0, ""

    iput-object v0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$MatrixTag;->type:Ljava/lang/String;

    :cond_1
    const-string v0, "isHide"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optBoolean(Ljava/lang/String;)Z

    move-result p1

    iput-boolean p1, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$MatrixTag;->isHide:Z

    return-void
.end method

.method private static b(Lcom/kwad/sdk/core/response/model/AdMatrixInfo$MatrixTag;Lorg/json/JSONObject;)Lorg/json/JSONObject;
    .locals 2

    if-nez p1, :cond_0

    new-instance p1, Lorg/json/JSONObject;

    invoke-direct {p1}, Lorg/json/JSONObject;-><init>()V

    :cond_0
    iget v0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$MatrixTag;->styleId:I

    if-eqz v0, :cond_1

    iget v0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$MatrixTag;->styleId:I

    const-string v1, "styleId"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_1
    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$MatrixTag;->type:Ljava/lang/String;

    if-eqz v0, :cond_2

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$MatrixTag;->type:Ljava/lang/String;

    const-string v1, ""

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_2

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$MatrixTag;->type:Ljava/lang/String;

    const-string v1, "type"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_2
    iget-boolean v0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$MatrixTag;->isHide:Z

    if-eqz v0, :cond_3

    iget-boolean p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$MatrixTag;->isHide:Z

    const-string v0, "isHide"

    invoke-static {p1, v0, p0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Z)V

    :cond_3
    return-object p1
.end method


# virtual methods
.method public final bridge synthetic a(Lcom/kwad/sdk/core/b;Lorg/json/JSONObject;)V
    .locals 0

    check-cast p1, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$MatrixTag;

    invoke-static {p1, p2}, Lcom/kwad/sdk/core/b/a/fj;->a(Lcom/kwad/sdk/core/response/model/AdMatrixInfo$MatrixTag;Lorg/json/JSONObject;)V

    return-void
.end method

.method public final bridge synthetic b(Lcom/kwad/sdk/core/b;Lorg/json/JSONObject;)Lorg/json/JSONObject;
    .locals 0

    check-cast p1, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$MatrixTag;

    invoke-static {p1, p2}, Lcom/kwad/sdk/core/b/a/fj;->b(Lcom/kwad/sdk/core/response/model/AdMatrixInfo$MatrixTag;Lorg/json/JSONObject;)Lorg/json/JSONObject;

    move-result-object p1

    return-object p1
.end method
