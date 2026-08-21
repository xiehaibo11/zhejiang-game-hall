.class public final Lcom/kwad/sdk/k/a/f;
.super Lcom/kwad/sdk/core/response/a/a;

# interfaces
.implements Lcom/kwad/sdk/core/b;


# instance fields
.field public aGw:I

.field public aGx:I


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Lcom/kwad/sdk/core/response/a/a;-><init>()V

    const/4 v0, -0x1

    iput v0, p0, Lcom/kwad/sdk/k/a/f;->aGw:I

    iput v0, p0, Lcom/kwad/sdk/k/a/f;->aGx:I

    return-void
.end method

.method public static declared-synchronized Hm()Lcom/kwad/sdk/k/a/f;
    .locals 2

    const-class v0, Lcom/kwad/sdk/k/a/f;

    monitor-enter v0

    :try_start_0
    const-class v1, Lcom/kwad/sdk/service/a/f;

    invoke-static {v1}, Lcom/kwad/sdk/service/ServiceProvider;->get(Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/kwad/sdk/service/a/f;

    invoke-interface {v1}, Lcom/kwad/sdk/service/a/f;->xu()Z

    move-result v1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-nez v1, :cond_0

    const/4 v1, 0x0

    monitor-exit v0

    return-object v1

    :cond_0
    :try_start_1
    invoke-static {}, Lcom/kwad/sdk/utils/ax;->Hm()Lcom/kwad/sdk/k/a/f;

    move-result-object v1
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    monitor-exit v0

    return-object v1

    :catchall_0
    move-exception v1

    monitor-exit v0

    throw v1
.end method

.method private a(Lcom/kwad/sdk/k/a/f;Lorg/json/JSONObject;)V
    .locals 2

    if-nez p2, :cond_0

    return-void

    :cond_0
    const/4 v0, -0x1

    const-string v1, "phoneCount"

    invoke-virtual {p2, v1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v1

    iput v1, p1, Lcom/kwad/sdk/k/a/f;->aGw:I

    const-string v1, "activePhoneCount"

    invoke-virtual {p2, v1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v0

    iput v0, p1, Lcom/kwad/sdk/k/a/f;->aGx:I

    invoke-super {p0, p2}, Lcom/kwad/sdk/core/response/a/a;->afterToJson(Lorg/json/JSONObject;)V

    return-void
.end method

.method private static b(Lcom/kwad/sdk/k/a/f;Lorg/json/JSONObject;)Lorg/json/JSONObject;
    .locals 2

    iget v0, p0, Lcom/kwad/sdk/k/a/f;->aGw:I

    const-string v1, "phoneCount"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    iget p0, p0, Lcom/kwad/sdk/k/a/f;->aGx:I

    const-string v0, "activePhoneCount"

    invoke-static {p1, v0, p0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    return-object p1
.end method


# virtual methods
.method public final parseJson(Lorg/json/JSONObject;)V
    .locals 0

    invoke-direct {p0, p0, p1}, Lcom/kwad/sdk/k/a/f;->a(Lcom/kwad/sdk/k/a/f;Lorg/json/JSONObject;)V

    invoke-virtual {p0, p1}, Lcom/kwad/sdk/k/a/f;->afterParseJson(Lorg/json/JSONObject;)V

    return-void
.end method

.method public final toJson()Lorg/json/JSONObject;
    .locals 1

    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    invoke-static {p0, v0}, Lcom/kwad/sdk/k/a/f;->b(Lcom/kwad/sdk/k/a/f;Lorg/json/JSONObject;)Lorg/json/JSONObject;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/kwad/sdk/k/a/f;->afterToJson(Lorg/json/JSONObject;)V

    return-object v0
.end method
