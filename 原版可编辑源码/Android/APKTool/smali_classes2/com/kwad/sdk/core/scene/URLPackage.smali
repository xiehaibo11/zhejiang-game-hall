.class public Lcom/kwad/sdk/core/scene/URLPackage;
.super Lcom/kwad/sdk/core/response/a/a;

# interfaces
.implements Ljava/io/Serializable;


# static fields
.field public static final KEY_AUTHOR_ID:Ljava/lang/String; = "authorId"

.field public static final KEY_CHANNEL_ID:Ljava/lang/String; = "channelId"

.field public static final KEY_TUBE_ID:Ljava/lang/String; = "tubeId"

.field private static final serialVersionUID:J = -0x663890b4ee96c253L


# instance fields
.field public identity:Ljava/lang/String;

.field public transient mJsonObjectParams:Lorg/json/JSONObject;

.field public page:I


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/sdk/core/response/a/a;-><init>()V

    return-void
.end method

.method public constructor <init>(Ljava/lang/String;I)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/sdk/core/response/a/a;-><init>()V

    iput p2, p0, Lcom/kwad/sdk/core/scene/URLPackage;->page:I

    iput-object p1, p0, Lcom/kwad/sdk/core/scene/URLPackage;->identity:Ljava/lang/String;

    return-void
.end method


# virtual methods
.method public afterParseJson(Lorg/json/JSONObject;)V
    .locals 1

    invoke-super {p0, p1}, Lcom/kwad/sdk/core/response/a/a;->afterParseJson(Lorg/json/JSONObject;)V

    if-nez p1, :cond_0

    return-void

    :cond_0
    const-string v0, "params"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    :try_start_0
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0, p1}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    iput-object v0, p0, Lcom/kwad/sdk/core/scene/URLPackage;->mJsonObjectParams:Lorg/json/JSONObject;
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception p1

    invoke-static {p1}, Lcom/kwad/sdk/core/e/c;->printStackTrace(Ljava/lang/Throwable;)V

    :cond_1
    return-void
.end method

.method public afterToJson(Lorg/json/JSONObject;)V
    .locals 2

    invoke-super {p0, p1}, Lcom/kwad/sdk/core/response/a/a;->afterToJson(Lorg/json/JSONObject;)V

    iget-object v0, p0, Lcom/kwad/sdk/core/scene/URLPackage;->mJsonObjectParams:Lorg/json/JSONObject;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "params"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/u;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public putParams(Ljava/lang/String;J)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/core/scene/URLPackage;->mJsonObjectParams:Lorg/json/JSONObject;

    if-nez v0, :cond_0

    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    iput-object v0, p0, Lcom/kwad/sdk/core/scene/URLPackage;->mJsonObjectParams:Lorg/json/JSONObject;

    :cond_0
    iget-object v0, p0, Lcom/kwad/sdk/core/scene/URLPackage;->mJsonObjectParams:Lorg/json/JSONObject;

    invoke-static {v0, p1, p2, p3}, Lcom/kwad/sdk/utils/u;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    return-void
.end method
