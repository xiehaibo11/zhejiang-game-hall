.class public Lcom/mbridge/msdk/rover/RoverCampaignUnit;
.super Ljava/lang/Object;
.source "RoverCampaignUnit.java"

# interfaces
.implements Lcom/mbridge/msdk/system/NoProGuard;
.implements Ljava/io/Serializable;


# static fields
.field public static final JSON_KEY_AD_TYPE:Ljava/lang/String; = "ad_type"

.field public static final JSON_KEY_DATA:Ljava/lang/String; = "data"

.field public static final JSON_KEY_END_SCREEN_URL:Ljava/lang/String; = "end_screen_url"

.field public static final JSON_KEY_FRAME_ADS:Ljava/lang/String; = "frames"

.field public static final JSON_KEY_HTML_URL:Ljava/lang/String; = "html_url"

.field public static final JSON_KEY_ONLY_IMPRESSION_URL:Ljava/lang/String; = "only_impression_url"

.field public static final JSON_KEY_PARENT_SESSION_ID:Ljava/lang/String; = "parent_session_id"

.field public static final JSON_KEY_SESSION_ID:Ljava/lang/String; = "session_id"

.field public static final JSON_KEY_TEMPLATE:Ljava/lang/String; = "template"

.field public static final JSON_KEY_UNIT_SIZE:Ljava/lang/String; = "unit_size"

.field private static final serialVersionUID:J = 0x1L


# instance fields
.field private adType:I

.field public ads:Ljava/util/ArrayList;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/ArrayList<",
            "Lcom/mbridge/msdk/foundation/entity/CampaignEx;",
            ">;"
        }
    .end annotation
.end field

.field private htmlUrl:Ljava/lang/String;

.field private onlyImpressionUrl:Ljava/lang/String;

.field private parentSessionId:Ljava/lang/String;

.field private sessionId:Ljava/lang/String;

.field private unitSize:Ljava/lang/String;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 13
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static getSerialversionuid()J
    .locals 2

    const-wide/16 v0, 0x1

    return-wide v0
.end method

.method public static parseCampaignUnit(Lorg/json/JSONObject;)Lcom/mbridge/msdk/rover/RoverCampaignUnit;
    .locals 11

    const/4 v0, 0x0

    if-eqz p0, :cond_2

    .line 120
    :try_start_0
    new-instance v1, Lcom/mbridge/msdk/rover/RoverCampaignUnit;

    invoke-direct {v1}, Lcom/mbridge/msdk/rover/RoverCampaignUnit;-><init>()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_1

    :try_start_1
    const-string v0, "data"

    .line 128
    invoke-virtual {p0, v0}, Lorg/json/JSONObject;->optJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 129
    invoke-virtual {v0}, Lorg/json/JSONArray;->length()I

    move-result v2

    if-lez v2, :cond_1

    .line 130
    new-instance v2, Ljava/util/ArrayList;

    invoke-direct {v2}, Ljava/util/ArrayList;-><init>()V

    const/4 v3, 0x0

    .line 131
    :goto_0
    invoke-virtual {v0}, Lorg/json/JSONArray;->length()I

    move-result v4

    if-ge v3, v4, :cond_0

    .line 132
    invoke-virtual {v0, v3}, Lorg/json/JSONArray;->optJSONObject(I)Lorg/json/JSONObject;

    move-result-object v5

    const-string v4, "only_impression_url"

    .line 133
    invoke-virtual {p0, v4}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    const-string v4, "html_url"

    .line 134
    invoke-virtual {p0, v4}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v7

    const-string v4, "end_screen_url"

    invoke-virtual {p0, v4}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v8

    const/4 v9, 0x0

    const/4 v10, 0x0

    .line 133
    invoke-static/range {v5 .. v10}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->parseCampaign(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;ZLcom/mbridge/msdk/foundation/entity/CampaignUnit;)Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    move-result-object v4

    .line 135
    invoke-virtual {v2, v4}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    add-int/lit8 v3, v3, 0x1

    goto :goto_0

    .line 137
    :cond_0
    invoke-virtual {v1, v2}, Lcom/mbridge/msdk/rover/RoverCampaignUnit;->setAds(Ljava/util/ArrayList;)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    :cond_1
    move-object v0, v1

    goto :goto_1

    :catch_0
    move-object v0, v1

    :catch_1
    const-string p0, ""

    const-string v1, "parse campaign unit exception"

    .line 141
    invoke-static {p0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_2
    :goto_1
    return-object v0
.end method


# virtual methods
.method public getAds()Ljava/util/ArrayList;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/ArrayList<",
            "Lcom/mbridge/msdk/foundation/entity/CampaignEx;",
            ">;"
        }
    .end annotation

    .line 91
    iget-object v0, p0, Lcom/mbridge/msdk/rover/RoverCampaignUnit;->ads:Ljava/util/ArrayList;

    return-object v0
.end method

.method public getParentSessionId()Ljava/lang/String;
    .locals 1

    .line 59
    iget-object v0, p0, Lcom/mbridge/msdk/rover/RoverCampaignUnit;->parentSessionId:Ljava/lang/String;

    return-object v0
.end method

.method public getSessionId()Ljava/lang/String;
    .locals 1

    .line 43
    iget-object v0, p0, Lcom/mbridge/msdk/rover/RoverCampaignUnit;->sessionId:Ljava/lang/String;

    return-object v0
.end method

.method public getUnitSize()Ljava/lang/String;
    .locals 1

    .line 75
    iget-object v0, p0, Lcom/mbridge/msdk/rover/RoverCampaignUnit;->unitSize:Ljava/lang/String;

    return-object v0
.end method

.method public setAds(Ljava/util/ArrayList;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/ArrayList<",
            "Lcom/mbridge/msdk/foundation/entity/CampaignEx;",
            ">;)V"
        }
    .end annotation

    .line 99
    iput-object p1, p0, Lcom/mbridge/msdk/rover/RoverCampaignUnit;->ads:Ljava/util/ArrayList;

    return-void
.end method

.method public setParentSessionId(Ljava/lang/String;)V
    .locals 0

    .line 67
    iput-object p1, p0, Lcom/mbridge/msdk/rover/RoverCampaignUnit;->parentSessionId:Ljava/lang/String;

    return-void
.end method

.method public setSessionId(Ljava/lang/String;)V
    .locals 0

    .line 51
    iput-object p1, p0, Lcom/mbridge/msdk/rover/RoverCampaignUnit;->sessionId:Ljava/lang/String;

    return-void
.end method

.method public setUnitSize(Ljava/lang/String;)V
    .locals 0

    .line 83
    iput-object p1, p0, Lcom/mbridge/msdk/rover/RoverCampaignUnit;->unitSize:Ljava/lang/String;

    return-void
.end method
