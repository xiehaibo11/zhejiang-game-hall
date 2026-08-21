.class public final Lcom/kwad/components/core/webview/jshandler/ab$b;
.super Lcom/kwad/sdk/core/report/b;

# interfaces
.implements Lcom/kwad/sdk/core/b;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/components/core/webview/jshandler/ab;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x19
    name = "b"
.end annotation


# instance fields
.field private UO:I

.field private UP:Ljava/lang/String;

.field private UQ:I

.field private adTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/sdk/core/report/b;-><init>()V

    return-void
.end method

.method static synthetic d(Lcom/kwad/components/core/webview/jshandler/ab$b;)I
    .locals 0

    iget p0, p0, Lcom/kwad/components/core/webview/jshandler/ab$b;->UO:I

    return p0
.end method

.method static synthetic e(Lcom/kwad/components/core/webview/jshandler/ab$b;)Ljava/lang/String;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/core/webview/jshandler/ab$b;->UP:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic f(Lcom/kwad/components/core/webview/jshandler/ab$b;)Lcom/kwad/sdk/core/response/model/AdTemplate;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/core/webview/jshandler/ab$b;->adTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    return-object p0
.end method

.method static synthetic g(Lcom/kwad/components/core/webview/jshandler/ab$b;)I
    .locals 0

    iget p0, p0, Lcom/kwad/components/core/webview/jshandler/ab$b;->UQ:I

    return p0
.end method


# virtual methods
.method public final getActionType()I
    .locals 1

    iget v0, p0, Lcom/kwad/components/core/webview/jshandler/ab$b;->UO:I

    return v0
.end method

.method public final parseJson(Lorg/json/JSONObject;)V
    .locals 2

    const-string v0, "adTemplate"

    if-nez p1, :cond_0

    return-void

    :cond_0
    const-string v1, "actionType"

    invoke-virtual {p1, v1}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v1

    iput v1, p0, Lcom/kwad/components/core/webview/jshandler/ab$b;->UO:I

    const-string v1, "refreshType"

    invoke-virtual {p1, v1}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v1

    iput v1, p0, Lcom/kwad/components/core/webview/jshandler/ab$b;->UQ:I

    const-string v1, "payload"

    invoke-virtual {p1, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    iput-object v1, p0, Lcom/kwad/components/core/webview/jshandler/ab$b;->UP:Ljava/lang/String;

    :try_start_0
    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_2

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/ab$b;->adTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    if-nez v0, :cond_1

    new-instance v0, Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-direct {v0}, Lcom/kwad/sdk/core/response/model/AdTemplate;-><init>()V

    iput-object v0, p0, Lcom/kwad/components/core/webview/jshandler/ab$b;->adTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    :cond_1
    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/ab$b;->adTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p1}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/response/model/AdTemplate;->parseJson(Lorg/json/JSONObject;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :cond_2
    return-void

    :catch_0
    move-exception p1

    invoke-static {p1}, Lcom/kwad/sdk/core/e/c;->printStackTraceOnly(Ljava/lang/Throwable;)V

    return-void
.end method

.method public final rw()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/ab$b;->UP:Ljava/lang/String;

    return-object v0
.end method

.method public final toJson()Lorg/json/JSONObject;
    .locals 3

    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    iget v1, p0, Lcom/kwad/components/core/webview/jshandler/ab$b;->UO:I

    const-string v2, "actionType"

    invoke-static {v0, v2, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    iget-object v1, p0, Lcom/kwad/components/core/webview/jshandler/ab$b;->UP:Ljava/lang/String;

    const-string v2, "payload"

    invoke-static {v0, v2, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    iget v1, p0, Lcom/kwad/components/core/webview/jshandler/ab$b;->UQ:I

    const-string v2, "refreshType"

    invoke-static {v0, v2, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    iget-object v1, p0, Lcom/kwad/components/core/webview/jshandler/ab$b;->adTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    const-string v2, "adTemplate"

    invoke-static {v0, v2, v1}, Lcom/kwad/sdk/utils/t;->a(Lorg/json/JSONObject;Ljava/lang/String;Lcom/kwad/sdk/core/b;)V

    return-object v0
.end method
