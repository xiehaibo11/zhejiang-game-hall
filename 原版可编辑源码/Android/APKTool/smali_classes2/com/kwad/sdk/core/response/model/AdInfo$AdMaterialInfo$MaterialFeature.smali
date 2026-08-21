.class public Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo$MaterialFeature;
.super Lcom/kwad/sdk/core/response/a/a;

# interfaces
.implements Lcom/kwad/sdk/core/b;
.implements Ljava/io/Serializable;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x9
    name = "MaterialFeature"
.end annotation


# static fields
.field private static final serialVersionUID:J = -0xf857fc30e8d6dbfL


# instance fields
.field public blurBackgroundUrl:Ljava/lang/String;

.field public commentCount:J

.field public coverUrl:Ljava/lang/String;

.field public featureType:I

.field public firstFrame:Ljava/lang/String;

.field public height:I

.field public likeCount:J

.field public materialUrl:Ljava/lang/String;

.field public photoId:J

.field public ruleId:Ljava/lang/String;

.field public source:I

.field public videoDuration:I

.field public videoHeight:I

.field public videoWidth:I

.field public webpCoverUrl:Ljava/lang/String;

.field public width:I


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/sdk/core/response/a/a;-><init>()V

    return-void
.end method


# virtual methods
.method public afterParseJson(Lorg/json/JSONObject;)V
    .locals 1

    invoke-super {p0, p1}, Lcom/kwad/sdk/core/response/a/a;->afterParseJson(Lorg/json/JSONObject;)V

    if-nez p1, :cond_0

    return-void

    :cond_0
    const-string v0, "materialSize"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object p1

    if-eqz p1, :cond_1

    const-string v0, "width"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo$MaterialFeature;->width:I

    const-string v0, "height"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result p1

    iput p1, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo$MaterialFeature;->height:I

    :cond_1
    return-void
.end method

.method public afterToJson(Lorg/json/JSONObject;)V
    .locals 3

    invoke-super {p0, p1}, Lcom/kwad/sdk/core/response/a/a;->afterToJson(Lorg/json/JSONObject;)V

    if-nez p1, :cond_0

    return-void

    :cond_0
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    :try_start_0
    const-string v1, "width"

    iget v2, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo$MaterialFeature;->width:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "height"

    iget v2, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo$MaterialFeature;->height:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "materialSize"

    invoke-virtual {p1, v1, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception p1

    invoke-static {p1}, Lcom/kwad/sdk/core/e/c;->printStackTrace(Ljava/lang/Throwable;)V

    return-void
.end method
