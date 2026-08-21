.class public final Lcom/kwad/sdk/core/request/model/d;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/core/b;


# instance fields
.field private aun:Ljava/lang/String;

.field private auo:I

.field private aup:I


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static Cv()Lcom/kwad/sdk/core/request/model/d;
    .locals 4

    const-class v0, Lcom/kwad/sdk/service/a/e;

    invoke-static {v0}, Lcom/kwad/sdk/service/ServiceProvider;->get(Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/kwad/sdk/service/a/e;

    invoke-interface {v0}, Lcom/kwad/sdk/service/a/e;->getContext()Landroid/content/Context;

    move-result-object v0

    new-instance v1, Lcom/kwad/sdk/core/request/model/d;

    invoke-direct {v1}, Lcom/kwad/sdk/core/request/model/d;-><init>()V

    invoke-static {v0}, Lcom/kwad/sdk/utils/au;->cw(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v2

    iput-object v2, v1, Lcom/kwad/sdk/core/request/model/d;->aun:Ljava/lang/String;

    invoke-static {v0}, Lcom/kwad/sdk/utils/ag;->cj(Landroid/content/Context;)I

    move-result v2

    iput v2, v1, Lcom/kwad/sdk/core/request/model/d;->auo:I

    invoke-static {v0}, Lcom/kwad/sdk/utils/au;->cz(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v2

    invoke-static {}, Lcom/kwad/sdk/utils/at;->Jg()Z

    move-result v3

    invoke-static {v0, v2, v3}, Lcom/kwad/sdk/utils/ag;->d(Landroid/content/Context;Ljava/lang/String;Z)I

    move-result v0

    iput v0, v1, Lcom/kwad/sdk/core/request/model/d;->aup:I

    return-object v1
.end method

.method public static Cw()Lcom/kwad/sdk/core/request/model/d;
    .locals 2

    new-instance v0, Lcom/kwad/sdk/core/request/model/d;

    invoke-direct {v0}, Lcom/kwad/sdk/core/request/model/d;-><init>()V

    const-class v1, Lcom/kwad/sdk/service/a/e;

    invoke-static {v1}, Lcom/kwad/sdk/service/ServiceProvider;->get(Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/kwad/sdk/service/a/e;

    invoke-interface {v1}, Lcom/kwad/sdk/service/a/e;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Lcom/kwad/sdk/utils/ag;->cj(Landroid/content/Context;)I

    move-result v1

    iput v1, v0, Lcom/kwad/sdk/core/request/model/d;->auo:I

    return-object v0
.end method


# virtual methods
.method public final parseJson(Lorg/json/JSONObject;)V
    .locals 0

    return-void
.end method

.method public final toJson()Lorg/json/JSONObject;
    .locals 3

    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    iget-object v1, p0, Lcom/kwad/sdk/core/request/model/d;->aun:Ljava/lang/String;

    const-string v2, "mac"

    invoke-static {v0, v2, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    iget v1, p0, Lcom/kwad/sdk/core/request/model/d;->auo:I

    const-string v2, "connectionType"

    invoke-static {v0, v2, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    iget v1, p0, Lcom/kwad/sdk/core/request/model/d;->aup:I

    const-string v2, "operatorType"

    invoke-static {v0, v2, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    return-object v0
.end method
