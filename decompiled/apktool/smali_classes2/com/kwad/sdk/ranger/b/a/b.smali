.class public Lcom/kwad/sdk/ranger/b/a/b;
.super Lcom/kwad/sdk/core/response/a/a;


# instance fields
.field public aHr:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/kwad/sdk/ranger/b/a/a;",
            ">;"
        }
    .end annotation
.end field

.field public avp:I


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/sdk/core/response/a/a;-><init>()V

    return-void
.end method


# virtual methods
.method public toJson()Lorg/json/JSONObject;
    .locals 4

    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    iget-object v1, p0, Lcom/kwad/sdk/ranger/b/a/b;->aHr:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :goto_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_0

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/kwad/sdk/ranger/b/a/a;

    iget-object v3, v2, Lcom/kwad/sdk/ranger/b/a/a;->key:Ljava/lang/String;

    iget v2, v2, Lcom/kwad/sdk/ranger/b/a/a;->value:I

    invoke-static {v0, v3, v2}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    goto :goto_0

    :cond_0
    iget v1, p0, Lcom/kwad/sdk/ranger/b/a/b;->avp:I

    const-string v2, "func_ratio_count"

    invoke-static {v0, v2, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1}, Lorg/json/JSONObject;-><init>()V

    const-string v2, "ranger"

    invoke-static {v1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Lorg/json/JSONObject;)V

    return-object v1
.end method
