.class public final Lcom/kwad/sdk/core/b/a/gp;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/core/d;


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Object;",
        "Lcom/kwad/sdk/core/d<",
        "Lcom/kwad/components/core/webview/jshandler/w$a;",
        ">;"
    }
.end annotation


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private static a(Lcom/kwad/components/core/webview/jshandler/w$a;Lorg/json/JSONObject;)V
    .locals 3

    if-nez p1, :cond_0

    return-void

    :cond_0
    const-string v0, "SDKVersion"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/core/webview/jshandler/w$a;->Uh:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/w$a;->Uh:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    const-string v2, ""

    if-ne v0, v1, :cond_1

    iput-object v2, p0, Lcom/kwad/components/core/webview/jshandler/w$a;->Uh:Ljava/lang/String;

    :cond_1
    const-string v0, "SDKVersionCode"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/components/core/webview/jshandler/w$a;->Ui:I

    const-string v0, "sdkApiVersion"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/core/webview/jshandler/w$a;->Uj:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/w$a;->Uj:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_2

    iput-object v2, p0, Lcom/kwad/components/core/webview/jshandler/w$a;->Uj:Ljava/lang/String;

    :cond_2
    const-string v0, "sdkApiVersionCode"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/components/core/webview/jshandler/w$a;->Uk:I

    const-string v0, "sdkType"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/components/core/webview/jshandler/w$a;->Ul:I

    const-string v0, "appVersion"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/core/webview/jshandler/w$a;->appVersion:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/w$a;->appVersion:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_3

    iput-object v2, p0, Lcom/kwad/components/core/webview/jshandler/w$a;->appVersion:Ljava/lang/String;

    :cond_3
    const-string v0, "appName"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/core/webview/jshandler/w$a;->appName:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/w$a;->appName:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_4

    iput-object v2, p0, Lcom/kwad/components/core/webview/jshandler/w$a;->appName:Ljava/lang/String;

    :cond_4
    const-string v0, "appId"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/core/webview/jshandler/w$a;->appId:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/w$a;->appId:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_5

    iput-object v2, p0, Lcom/kwad/components/core/webview/jshandler/w$a;->appId:Ljava/lang/String;

    :cond_5
    const-string v0, "networkType"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/core/webview/jshandler/w$a;->Um:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/w$a;->Um:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_6

    iput-object v2, p0, Lcom/kwad/components/core/webview/jshandler/w$a;->Um:Ljava/lang/String;

    :cond_6
    const-string v0, "manufacturer"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/core/webview/jshandler/w$a;->Un:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/w$a;->Un:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_7

    iput-object v2, p0, Lcom/kwad/components/core/webview/jshandler/w$a;->Un:Ljava/lang/String;

    :cond_7
    const-string v0, "model"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/core/webview/jshandler/w$a;->model:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/w$a;->model:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_8

    iput-object v2, p0, Lcom/kwad/components/core/webview/jshandler/w$a;->model:Ljava/lang/String;

    :cond_8
    const-string v0, "deviceBrand"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/core/webview/jshandler/w$a;->Uo:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/w$a;->Uo:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_9

    iput-object v2, p0, Lcom/kwad/components/core/webview/jshandler/w$a;->Uo:Ljava/lang/String;

    :cond_9
    const-string v0, "osType"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/components/core/webview/jshandler/w$a;->Up:I

    const-string v0, "systemVersion"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/core/webview/jshandler/w$a;->Uq:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/w$a;->Uq:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_a

    iput-object v2, p0, Lcom/kwad/components/core/webview/jshandler/w$a;->Uq:Ljava/lang/String;

    :cond_a
    const-string v0, "osApi"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/components/core/webview/jshandler/w$a;->Ur:I

    const-string v0, "language"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/core/webview/jshandler/w$a;->Us:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/w$a;->Us:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_b

    iput-object v2, p0, Lcom/kwad/components/core/webview/jshandler/w$a;->Us:Ljava/lang/String;

    :cond_b
    const-string v0, "locale"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/core/webview/jshandler/w$a;->Ut:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/w$a;->Ut:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_c

    iput-object v2, p0, Lcom/kwad/components/core/webview/jshandler/w$a;->Ut:Ljava/lang/String;

    :cond_c
    const-string v0, "screenWidth"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/components/core/webview/jshandler/w$a;->Uu:I

    const-string v0, "screenHeight"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/components/core/webview/jshandler/w$a;->Uv:I

    const-string v0, "statusBarHeight"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/components/core/webview/jshandler/w$a;->Uw:I

    const-string v0, "titleBarHeight"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result p1

    iput p1, p0, Lcom/kwad/components/core/webview/jshandler/w$a;->Ux:I

    return-void
.end method

.method private static b(Lcom/kwad/components/core/webview/jshandler/w$a;Lorg/json/JSONObject;)Lorg/json/JSONObject;
    .locals 3

    if-nez p1, :cond_0

    new-instance p1, Lorg/json/JSONObject;

    invoke-direct {p1}, Lorg/json/JSONObject;-><init>()V

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/w$a;->Uh:Ljava/lang/String;

    const-string v1, ""

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/w$a;->Uh:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_1

    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/w$a;->Uh:Ljava/lang/String;

    const-string v2, "SDKVersion"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_1
    iget v0, p0, Lcom/kwad/components/core/webview/jshandler/w$a;->Ui:I

    if-eqz v0, :cond_2

    iget v0, p0, Lcom/kwad/components/core/webview/jshandler/w$a;->Ui:I

    const-string v2, "SDKVersionCode"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_2
    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/w$a;->Uj:Ljava/lang/String;

    if-eqz v0, :cond_3

    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/w$a;->Uj:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_3

    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/w$a;->Uj:Ljava/lang/String;

    const-string v2, "sdkApiVersion"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_3
    iget v0, p0, Lcom/kwad/components/core/webview/jshandler/w$a;->Uk:I

    if-eqz v0, :cond_4

    iget v0, p0, Lcom/kwad/components/core/webview/jshandler/w$a;->Uk:I

    const-string v2, "sdkApiVersionCode"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_4
    iget v0, p0, Lcom/kwad/components/core/webview/jshandler/w$a;->Ul:I

    if-eqz v0, :cond_5

    iget v0, p0, Lcom/kwad/components/core/webview/jshandler/w$a;->Ul:I

    const-string v2, "sdkType"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_5
    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/w$a;->appVersion:Ljava/lang/String;

    if-eqz v0, :cond_6

    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/w$a;->appVersion:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_6

    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/w$a;->appVersion:Ljava/lang/String;

    const-string v2, "appVersion"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_6
    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/w$a;->appName:Ljava/lang/String;

    if-eqz v0, :cond_7

    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/w$a;->appName:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_7

    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/w$a;->appName:Ljava/lang/String;

    const-string v2, "appName"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_7
    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/w$a;->appId:Ljava/lang/String;

    if-eqz v0, :cond_8

    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/w$a;->appId:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_8

    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/w$a;->appId:Ljava/lang/String;

    const-string v2, "appId"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_8
    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/w$a;->Um:Ljava/lang/String;

    if-eqz v0, :cond_9

    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/w$a;->Um:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_9

    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/w$a;->Um:Ljava/lang/String;

    const-string v2, "networkType"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_9
    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/w$a;->Un:Ljava/lang/String;

    if-eqz v0, :cond_a

    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/w$a;->Un:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_a

    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/w$a;->Un:Ljava/lang/String;

    const-string v2, "manufacturer"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_a
    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/w$a;->model:Ljava/lang/String;

    if-eqz v0, :cond_b

    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/w$a;->model:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_b

    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/w$a;->model:Ljava/lang/String;

    const-string v2, "model"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_b
    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/w$a;->Uo:Ljava/lang/String;

    if-eqz v0, :cond_c

    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/w$a;->Uo:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_c

    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/w$a;->Uo:Ljava/lang/String;

    const-string v2, "deviceBrand"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_c
    iget v0, p0, Lcom/kwad/components/core/webview/jshandler/w$a;->Up:I

    if-eqz v0, :cond_d

    iget v0, p0, Lcom/kwad/components/core/webview/jshandler/w$a;->Up:I

    const-string v2, "osType"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_d
    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/w$a;->Uq:Ljava/lang/String;

    if-eqz v0, :cond_e

    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/w$a;->Uq:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_e

    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/w$a;->Uq:Ljava/lang/String;

    const-string v2, "systemVersion"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_e
    iget v0, p0, Lcom/kwad/components/core/webview/jshandler/w$a;->Ur:I

    if-eqz v0, :cond_f

    iget v0, p0, Lcom/kwad/components/core/webview/jshandler/w$a;->Ur:I

    const-string v2, "osApi"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_f
    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/w$a;->Us:Ljava/lang/String;

    if-eqz v0, :cond_10

    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/w$a;->Us:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_10

    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/w$a;->Us:Ljava/lang/String;

    const-string v2, "language"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_10
    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/w$a;->Ut:Ljava/lang/String;

    if-eqz v0, :cond_11

    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/w$a;->Ut:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_11

    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/w$a;->Ut:Ljava/lang/String;

    const-string v1, "locale"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_11
    iget v0, p0, Lcom/kwad/components/core/webview/jshandler/w$a;->Uu:I

    if-eqz v0, :cond_12

    iget v0, p0, Lcom/kwad/components/core/webview/jshandler/w$a;->Uu:I

    const-string v1, "screenWidth"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_12
    iget v0, p0, Lcom/kwad/components/core/webview/jshandler/w$a;->Uv:I

    if-eqz v0, :cond_13

    iget v0, p0, Lcom/kwad/components/core/webview/jshandler/w$a;->Uv:I

    const-string v1, "screenHeight"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_13
    iget v0, p0, Lcom/kwad/components/core/webview/jshandler/w$a;->Uw:I

    if-eqz v0, :cond_14

    iget v0, p0, Lcom/kwad/components/core/webview/jshandler/w$a;->Uw:I

    const-string v1, "statusBarHeight"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_14
    iget v0, p0, Lcom/kwad/components/core/webview/jshandler/w$a;->Ux:I

    if-eqz v0, :cond_15

    iget p0, p0, Lcom/kwad/components/core/webview/jshandler/w$a;->Ux:I

    const-string v0, "titleBarHeight"

    invoke-static {p1, v0, p0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_15
    return-object p1
.end method


# virtual methods
.method public final bridge synthetic a(Lcom/kwad/sdk/core/b;Lorg/json/JSONObject;)V
    .locals 0

    check-cast p1, Lcom/kwad/components/core/webview/jshandler/w$a;

    invoke-static {p1, p2}, Lcom/kwad/sdk/core/b/a/gp;->a(Lcom/kwad/components/core/webview/jshandler/w$a;Lorg/json/JSONObject;)V

    return-void
.end method

.method public final bridge synthetic b(Lcom/kwad/sdk/core/b;Lorg/json/JSONObject;)Lorg/json/JSONObject;
    .locals 0

    check-cast p1, Lcom/kwad/components/core/webview/jshandler/w$a;

    invoke-static {p1, p2}, Lcom/kwad/sdk/core/b/a/gp;->b(Lcom/kwad/components/core/webview/jshandler/w$a;Lorg/json/JSONObject;)Lorg/json/JSONObject;

    move-result-object p1

    return-object p1
.end method
