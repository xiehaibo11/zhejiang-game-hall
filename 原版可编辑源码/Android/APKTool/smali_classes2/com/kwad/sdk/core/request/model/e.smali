.class public final Lcom/kwad/sdk/core/request/model/e;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/core/b;


# instance fields
.field private auq:Lcom/kwad/sdk/core/b;


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static Cx()Lcom/kwad/sdk/core/request/model/e;
    .locals 2

    new-instance v0, Lcom/kwad/sdk/core/request/model/e;

    invoke-direct {v0}, Lcom/kwad/sdk/core/request/model/e;-><init>()V

    const-class v1, Lcom/kwad/sdk/core/network/l;

    invoke-static {v1}, Lcom/kwad/sdk/service/ServiceProvider;->get(Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/kwad/sdk/core/network/l;

    if-eqz v1, :cond_0

    invoke-interface {v1}, Lcom/kwad/sdk/core/network/l;->xp()Lcom/kwad/sdk/core/b;

    move-result-object v1

    iput-object v1, v0, Lcom/kwad/sdk/core/request/model/e;->auq:Lcom/kwad/sdk/core/b;

    :cond_0
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

    iget-object v1, p0, Lcom/kwad/sdk/core/request/model/e;->auq:Lcom/kwad/sdk/core/b;

    const-string v2, "modeInfo"

    invoke-static {v0, v2, v1}, Lcom/kwad/sdk/utils/t;->a(Lorg/json/JSONObject;Ljava/lang/String;Lcom/kwad/sdk/core/b;)V

    return-object v0
.end method
