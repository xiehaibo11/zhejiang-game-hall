.class public final Lcom/kwad/sdk/core/b/a/ca;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/core/d;


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Object;",
        "Lcom/kwad/sdk/core/d<",
        "Lcom/kwad/sdk/core/response/model/SdkConfigData$CouponActiveConfig;",
        ">;"
    }
.end annotation


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private static a(Lcom/kwad/sdk/core/response/model/SdkConfigData$CouponActiveConfig;Lorg/json/JSONObject;)V
    .locals 3

    if-nez p1, :cond_0

    return-void

    :cond_0
    const-string v0, "popUpShowTimeSeconds"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/response/model/SdkConfigData$CouponActiveConfig;->popUpShowTimeSeconds:I

    const-string v0, "title"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/response/model/SdkConfigData$CouponActiveConfig;->title:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/SdkConfigData$CouponActiveConfig;->title:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    const-string v2, ""

    if-ne v0, v1, :cond_1

    iput-object v2, p0, Lcom/kwad/sdk/core/response/model/SdkConfigData$CouponActiveConfig;->title:Ljava/lang/String;

    :cond_1
    const-string v0, "secondTitle"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/response/model/SdkConfigData$CouponActiveConfig;->secondTitle:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/SdkConfigData$CouponActiveConfig;->secondTitle:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_2

    iput-object v2, p0, Lcom/kwad/sdk/core/response/model/SdkConfigData$CouponActiveConfig;->secondTitle:Ljava/lang/String;

    :cond_2
    const-string v0, "bottomTitle"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/response/model/SdkConfigData$CouponActiveConfig;->bottomTitle:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/SdkConfigData$CouponActiveConfig;->bottomTitle:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_3

    iput-object v2, p0, Lcom/kwad/sdk/core/response/model/SdkConfigData$CouponActiveConfig;->bottomTitle:Ljava/lang/String;

    :cond_3
    const-string v0, "videoThreshold"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/response/model/SdkConfigData$CouponActiveConfig;->videoThreshold:I

    const-string v0, "videoSeconds"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/response/model/SdkConfigData$CouponActiveConfig;->videoSeconds:I

    new-instance v0, Lcom/kwad/sdk/core/response/model/TemplateConfig;

    invoke-direct {v0}, Lcom/kwad/sdk/core/response/model/TemplateConfig;-><init>()V

    iput-object v0, p0, Lcom/kwad/sdk/core/response/model/SdkConfigData$CouponActiveConfig;->couponOpenConfig:Lcom/kwad/sdk/core/response/model/TemplateConfig;

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/SdkConfigData$CouponActiveConfig;->couponOpenConfig:Lcom/kwad/sdk/core/response/model/TemplateConfig;

    const-string v1, "couponOpenConfig"

    invoke-virtual {p1, v1}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/response/model/TemplateConfig;->parseJson(Lorg/json/JSONObject;)V

    new-instance v0, Lcom/kwad/sdk/core/response/model/TemplateConfig;

    invoke-direct {v0}, Lcom/kwad/sdk/core/response/model/TemplateConfig;-><init>()V

    iput-object v0, p0, Lcom/kwad/sdk/core/response/model/SdkConfigData$CouponActiveConfig;->couponInfoConfig:Lcom/kwad/sdk/core/response/model/TemplateConfig;

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/SdkConfigData$CouponActiveConfig;->couponInfoConfig:Lcom/kwad/sdk/core/response/model/TemplateConfig;

    const-string v1, "couponInfoConfig"

    invoke-virtual {p1, v1}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/response/model/TemplateConfig;->parseJson(Lorg/json/JSONObject;)V

    new-instance v0, Lcom/kwad/sdk/contentalliance/coupon/model/ActivityInfo;

    invoke-direct {v0}, Lcom/kwad/sdk/contentalliance/coupon/model/ActivityInfo;-><init>()V

    iput-object v0, p0, Lcom/kwad/sdk/core/response/model/SdkConfigData$CouponActiveConfig;->activityInfo:Lcom/kwad/sdk/contentalliance/coupon/model/ActivityInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/SdkConfigData$CouponActiveConfig;->activityInfo:Lcom/kwad/sdk/contentalliance/coupon/model/ActivityInfo;

    const-string v0, "activityInfo"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/kwad/sdk/contentalliance/coupon/model/ActivityInfo;->parseJson(Lorg/json/JSONObject;)V

    return-void
.end method

.method private static b(Lcom/kwad/sdk/core/response/model/SdkConfigData$CouponActiveConfig;Lorg/json/JSONObject;)Lorg/json/JSONObject;
    .locals 3

    if-nez p1, :cond_0

    new-instance p1, Lorg/json/JSONObject;

    invoke-direct {p1}, Lorg/json/JSONObject;-><init>()V

    :cond_0
    iget v0, p0, Lcom/kwad/sdk/core/response/model/SdkConfigData$CouponActiveConfig;->popUpShowTimeSeconds:I

    if-eqz v0, :cond_1

    iget v0, p0, Lcom/kwad/sdk/core/response/model/SdkConfigData$CouponActiveConfig;->popUpShowTimeSeconds:I

    const-string v1, "popUpShowTimeSeconds"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_1
    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/SdkConfigData$CouponActiveConfig;->title:Ljava/lang/String;

    const-string v1, ""

    if-eqz v0, :cond_2

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/SdkConfigData$CouponActiveConfig;->title:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_2

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/SdkConfigData$CouponActiveConfig;->title:Ljava/lang/String;

    const-string v2, "title"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_2
    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/SdkConfigData$CouponActiveConfig;->secondTitle:Ljava/lang/String;

    if-eqz v0, :cond_3

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/SdkConfigData$CouponActiveConfig;->secondTitle:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_3

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/SdkConfigData$CouponActiveConfig;->secondTitle:Ljava/lang/String;

    const-string v2, "secondTitle"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_3
    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/SdkConfigData$CouponActiveConfig;->bottomTitle:Ljava/lang/String;

    if-eqz v0, :cond_4

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/SdkConfigData$CouponActiveConfig;->bottomTitle:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_4

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/SdkConfigData$CouponActiveConfig;->bottomTitle:Ljava/lang/String;

    const-string v1, "bottomTitle"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_4
    iget v0, p0, Lcom/kwad/sdk/core/response/model/SdkConfigData$CouponActiveConfig;->videoThreshold:I

    if-eqz v0, :cond_5

    iget v0, p0, Lcom/kwad/sdk/core/response/model/SdkConfigData$CouponActiveConfig;->videoThreshold:I

    const-string v1, "videoThreshold"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_5
    iget v0, p0, Lcom/kwad/sdk/core/response/model/SdkConfigData$CouponActiveConfig;->videoSeconds:I

    if-eqz v0, :cond_6

    iget v0, p0, Lcom/kwad/sdk/core/response/model/SdkConfigData$CouponActiveConfig;->videoSeconds:I

    const-string v1, "videoSeconds"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_6
    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/SdkConfigData$CouponActiveConfig;->couponOpenConfig:Lcom/kwad/sdk/core/response/model/TemplateConfig;

    const-string v1, "couponOpenConfig"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->a(Lorg/json/JSONObject;Ljava/lang/String;Lcom/kwad/sdk/core/b;)V

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/SdkConfigData$CouponActiveConfig;->couponInfoConfig:Lcom/kwad/sdk/core/response/model/TemplateConfig;

    const-string v1, "couponInfoConfig"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->a(Lorg/json/JSONObject;Ljava/lang/String;Lcom/kwad/sdk/core/b;)V

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/SdkConfigData$CouponActiveConfig;->activityInfo:Lcom/kwad/sdk/contentalliance/coupon/model/ActivityInfo;

    const-string v0, "activityInfo"

    invoke-static {p1, v0, p0}, Lcom/kwad/sdk/utils/t;->a(Lorg/json/JSONObject;Ljava/lang/String;Lcom/kwad/sdk/core/b;)V

    return-object p1
.end method


# virtual methods
.method public final bridge synthetic a(Lcom/kwad/sdk/core/b;Lorg/json/JSONObject;)V
    .locals 0

    check-cast p1, Lcom/kwad/sdk/core/response/model/SdkConfigData$CouponActiveConfig;

    invoke-static {p1, p2}, Lcom/kwad/sdk/core/b/a/ca;->a(Lcom/kwad/sdk/core/response/model/SdkConfigData$CouponActiveConfig;Lorg/json/JSONObject;)V

    return-void
.end method

.method public final bridge synthetic b(Lcom/kwad/sdk/core/b;Lorg/json/JSONObject;)Lorg/json/JSONObject;
    .locals 0

    check-cast p1, Lcom/kwad/sdk/core/response/model/SdkConfigData$CouponActiveConfig;

    invoke-static {p1, p2}, Lcom/kwad/sdk/core/b/a/ca;->b(Lcom/kwad/sdk/core/response/model/SdkConfigData$CouponActiveConfig;Lorg/json/JSONObject;)Lorg/json/JSONObject;

    move-result-object p1

    return-object p1
.end method
