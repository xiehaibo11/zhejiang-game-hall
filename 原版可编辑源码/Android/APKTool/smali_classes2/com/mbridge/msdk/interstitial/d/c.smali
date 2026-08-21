.class public abstract Lcom/mbridge/msdk/interstitial/d/c;
.super Lcom/mbridge/msdk/foundation/same/net/f;
.source "InterstitialResponseHandler.java"


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/mbridge/msdk/foundation/same/net/f<",
        "Lorg/json/JSONObject;",
        ">;"
    }
.end annotation


# static fields
.field private static final a:Ljava/lang/String;


# instance fields
.field private b:I


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 20
    const-class v0, Lcom/mbridge/msdk/interstitial/d/c;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mbridge/msdk/interstitial/d/c;->a:Ljava/lang/String;

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 19
    invoke-direct {p0}, Lcom/mbridge/msdk/foundation/same/net/f;-><init>()V

    return-void
.end method


# virtual methods
.method public abstract a(Ljava/util/List;)V
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/mbridge/msdk/out/Frame;",
            ">;)V"
        }
    .end annotation
.end method

.method public abstract a(Ljava/util/List;Lcom/mbridge/msdk/foundation/entity/CampaignUnit;)V
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/mbridge/msdk/foundation/same/net/c/b;",
            ">;",
            "Lcom/mbridge/msdk/foundation/entity/CampaignUnit;",
            ")V"
        }
    .end annotation
.end method

.method public abstract b(ILjava/lang/String;)V
.end method

.method public onError(Lcom/mbridge/msdk/foundation/same/net/a/a;)V
    .locals 3

    .line 56
    sget-object v0, Lcom/mbridge/msdk/interstitial/d/c;->a:Ljava/lang/String;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "errorCode = "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v2, p1, Lcom/mbridge/msdk/foundation/same/net/a/a;->a:I

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 57
    iget v0, p1, Lcom/mbridge/msdk/foundation/same/net/a/a;->a:I

    invoke-static {p1}, Lcom/mbridge/msdk/foundation/same/net/f/a;->a(Lcom/mbridge/msdk/foundation/same/net/a/a;)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, v0, p1}, Lcom/mbridge/msdk/interstitial/d/c;->b(ILjava/lang/String;)V

    return-void
.end method

.method public onPreExecute()V
    .locals 0

    .line 35
    invoke-super {p0}, Lcom/mbridge/msdk/foundation/same/net/f;->onPreExecute()V

    return-void
.end method

.method public onSuccess(Lcom/mbridge/msdk/foundation/same/net/k;)V
    .locals 11
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/mbridge/msdk/foundation/same/net/k<",
            "Lorg/json/JSONObject;",
            ">;)V"
        }
    .end annotation

    .line 44
    invoke-super {p0, p1}, Lcom/mbridge/msdk/foundation/same/net/f;->onSuccess(Lcom/mbridge/msdk/foundation/same/net/k;)V

    if-eqz p1, :cond_b

    .line 45
    iget-object v0, p1, Lcom/mbridge/msdk/foundation/same/net/k;->c:Lcom/mbridge/msdk/foundation/same/net/e/c;

    if-eqz v0, :cond_b

    .line 46
    iget v0, p0, Lcom/mbridge/msdk/interstitial/d/c;->b:I

    const/4 v1, 0x0

    const-string v2, "v5"

    const-string v3, "version"

    const-string v4, "status"

    const-string v5, ""

    const/4 v6, 0x1

    const-string v7, "data"

    const-string v8, "msg"

    if-nez v0, :cond_5

    .line 47
    iget-object v0, p1, Lcom/mbridge/msdk/foundation/same/net/k;->c:Lcom/mbridge/msdk/foundation/same/net/e/c;

    iget-object v0, v0, Lcom/mbridge/msdk/foundation/same/net/e/c;->d:Ljava/util/List;

    iget-object p1, p1, Lcom/mbridge/msdk/foundation/same/net/k;->a:Ljava/lang/Object;

    check-cast p1, Lorg/json/JSONObject;

    .line 1095
    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9}, Ljava/lang/StringBuilder;-><init>()V

    const-string v10, "content = "

    invoke-virtual {v9, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v9

    invoke-static {v5, v9}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 1097
    invoke-virtual {p1, v4}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v4

    if-ne v6, v4, :cond_4

    .line 1099
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v5

    invoke-virtual {p0, v5, v6}, Lcom/mbridge/msdk/interstitial/d/c;->calcRequestTime(J)V

    .line 1100
    invoke-virtual {p1, v3}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    .line 1101
    invoke-virtual {v2, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_0

    .line 1102
    invoke-virtual {p1, v7}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v2

    invoke-static {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->parseV5CampaignUnit(Lorg/json/JSONObject;)Lcom/mbridge/msdk/foundation/entity/CampaignUnit;

    move-result-object v2

    goto :goto_0

    .line 1104
    :cond_0
    invoke-virtual {p1, v7}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v2

    invoke-static {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->parseCampaignUnit(Lorg/json/JSONObject;)Lcom/mbridge/msdk/foundation/entity/CampaignUnit;

    move-result-object v2

    :goto_0
    if-eqz v2, :cond_1

    .line 1106
    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->getAds()Ljava/util/ArrayList;

    move-result-object v3

    if-eqz v3, :cond_1

    .line 1107
    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->getAds()Ljava/util/ArrayList;

    move-result-object v3

    invoke-virtual {v3}, Ljava/util/ArrayList;->size()I

    move-result v3

    if-lez v3, :cond_1

    .line 1108
    invoke-virtual {p0, v0, v2}, Lcom/mbridge/msdk/interstitial/d/c;->a(Ljava/util/List;Lcom/mbridge/msdk/foundation/entity/CampaignUnit;)V

    .line 1109
    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->getAds()Ljava/util/ArrayList;

    move-result-object p1

    invoke-virtual {p1}, Ljava/util/ArrayList;->size()I

    move-result p1

    invoke-virtual {p0, p1}, Lcom/mbridge/msdk/interstitial/d/c;->saveRequestTime(I)V

    goto/16 :goto_2

    :cond_1
    if-eqz v2, :cond_2

    .line 1113
    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->getMsg()Ljava/lang/String;

    move-result-object v1

    .line 1115
    :cond_2
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_3

    .line 1116
    invoke-virtual {p1, v8}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 1118
    :cond_3
    invoke-virtual {p0, v4, v1}, Lcom/mbridge/msdk/interstitial/d/c;->b(ILjava/lang/String;)V

    goto/16 :goto_2

    .line 1121
    :cond_4
    invoke-virtual {p1, v8}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, v4, p1}, Lcom/mbridge/msdk/interstitial/d/c;->b(ILjava/lang/String;)V

    goto/16 :goto_2

    :cond_5
    if-ne v0, v6, :cond_b

    .line 49
    iget-object v0, p1, Lcom/mbridge/msdk/foundation/same/net/k;->c:Lcom/mbridge/msdk/foundation/same/net/e/c;

    iget-object v0, v0, Lcom/mbridge/msdk/foundation/same/net/e/c;->d:Ljava/util/List;

    iget-object p1, p1, Lcom/mbridge/msdk/foundation/same/net/k;->a:Ljava/lang/Object;

    check-cast p1, Lorg/json/JSONObject;

    .line 2062
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v9, "content frames = "

    invoke-virtual {v0, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v5, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 2064
    invoke-virtual {p1, v4}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    if-ne v6, v0, :cond_a

    .line 2066
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v4

    invoke-virtual {p0, v4, v5}, Lcom/mbridge/msdk/interstitial/d/c;->calcRequestTime(J)V

    .line 2067
    invoke-virtual {p1, v3}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    .line 2068
    invoke-virtual {v2, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_6

    .line 2069
    invoke-virtual {p1, v7}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v2

    invoke-static {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->parseV5CampaignUnit(Lorg/json/JSONObject;)Lcom/mbridge/msdk/foundation/entity/CampaignUnit;

    move-result-object v2

    goto :goto_1

    .line 2071
    :cond_6
    invoke-virtual {p1, v7}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v2

    invoke-static {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->parseCampaignUnit(Lorg/json/JSONObject;)Lcom/mbridge/msdk/foundation/entity/CampaignUnit;

    move-result-object v2

    :goto_1
    if-eqz v2, :cond_7

    .line 2073
    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->getListFrames()Ljava/util/List;

    move-result-object v3

    if-eqz v3, :cond_7

    .line 2074
    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->getListFrames()Ljava/util/List;

    move-result-object v3

    invoke-interface {v3}, Ljava/util/List;->size()I

    move-result v3

    if-lez v3, :cond_7

    .line 2075
    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->getListFrames()Ljava/util/List;

    move-result-object p1

    .line 2076
    invoke-virtual {p0, p1}, Lcom/mbridge/msdk/interstitial/d/c;->a(Ljava/util/List;)V

    .line 2077
    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result p1

    invoke-virtual {p0, p1}, Lcom/mbridge/msdk/interstitial/d/c;->saveRequestTime(I)V

    goto :goto_2

    :cond_7
    if-eqz v2, :cond_8

    .line 2081
    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->getMsg()Ljava/lang/String;

    move-result-object v1

    .line 2083
    :cond_8
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_9

    .line 2084
    invoke-virtual {p1, v8}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 2086
    :cond_9
    invoke-virtual {p0, v0, v1}, Lcom/mbridge/msdk/interstitial/d/c;->b(ILjava/lang/String;)V

    goto :goto_2

    .line 2089
    :cond_a
    invoke-virtual {p1, v8}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, v0, p1}, Lcom/mbridge/msdk/interstitial/d/c;->b(ILjava/lang/String;)V

    :cond_b
    :goto_2
    return-void
.end method
