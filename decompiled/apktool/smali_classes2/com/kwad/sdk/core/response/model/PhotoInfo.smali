.class public Lcom/kwad/sdk/core/response/model/PhotoInfo;
.super Lcom/kwad/sdk/core/response/a/a;

# interfaces
.implements Ljava/io/Serializable;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/sdk/core/response/model/PhotoInfo$VideoInfo;,
        Lcom/kwad/sdk/core/response/model/PhotoInfo$BaseInfo;
    }
.end annotation


# static fields
.field private static final serialVersionUID:J = -0x3e380fcdf83c8d60L


# instance fields
.field public baseInfo:Lcom/kwad/sdk/core/response/model/PhotoInfo$BaseInfo;

.field public mOriginJString:Ljava/lang/String;

.field public videoInfo:Lcom/kwad/sdk/core/response/model/PhotoInfo$VideoInfo;


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Lcom/kwad/sdk/core/response/a/a;-><init>()V

    new-instance v0, Lcom/kwad/sdk/core/response/model/PhotoInfo$BaseInfo;

    invoke-direct {v0}, Lcom/kwad/sdk/core/response/model/PhotoInfo$BaseInfo;-><init>()V

    iput-object v0, p0, Lcom/kwad/sdk/core/response/model/PhotoInfo;->baseInfo:Lcom/kwad/sdk/core/response/model/PhotoInfo$BaseInfo;

    new-instance v0, Lcom/kwad/sdk/core/response/model/PhotoInfo$VideoInfo;

    invoke-direct {v0}, Lcom/kwad/sdk/core/response/model/PhotoInfo$VideoInfo;-><init>()V

    iput-object v0, p0, Lcom/kwad/sdk/core/response/model/PhotoInfo;->videoInfo:Lcom/kwad/sdk/core/response/model/PhotoInfo$VideoInfo;

    return-void
.end method


# virtual methods
.method public afterParseJson(Lorg/json/JSONObject;)V
    .locals 1

    invoke-super {p0, p1}, Lcom/kwad/sdk/core/response/a/a;->afterParseJson(Lorg/json/JSONObject;)V

    if-eqz p1, :cond_0

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/PhotoInfo;->mOriginJString:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-virtual {p1}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/kwad/sdk/core/response/model/PhotoInfo;->mOriginJString:Ljava/lang/String;

    :cond_0
    return-void
.end method

.method public beforeToJson(Lorg/json/JSONObject;)V
    .locals 2

    invoke-super {p0, p1}, Lcom/kwad/sdk/core/response/a/a;->beforeToJson(Lorg/json/JSONObject;)V

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/PhotoInfo;->mOriginJString:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    :try_start_0
    new-instance v0, Lorg/json/JSONObject;

    iget-object v1, p0, Lcom/kwad/sdk/core/response/model/PhotoInfo;->mOriginJString:Ljava/lang/String;

    invoke-direct {v0, v1}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-static {p1, v0}, Lcom/kwad/sdk/utils/u;->merge(Lorg/json/JSONObject;Lorg/json/JSONObject;)V
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception p1

    invoke-static {p1}, Lcom/kwad/sdk/core/e/c;->printStackTraceOnly(Ljava/lang/Throwable;)V

    :cond_0
    return-void
.end method
