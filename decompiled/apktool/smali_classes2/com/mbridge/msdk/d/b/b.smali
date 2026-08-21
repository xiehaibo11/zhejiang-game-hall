.class public abstract Lcom/mbridge/msdk/d/b/b;
.super Lcom/mbridge/msdk/foundation/same/net/f;
.source "ShortCutsResponseHandler.java"


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
.field private b:J


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 19
    const-class v0, Lcom/mbridge/msdk/d/b/b;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mbridge/msdk/d/b/b;->a:Ljava/lang/String;

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 18
    invoke-direct {p0}, Lcom/mbridge/msdk/foundation/same/net/f;-><init>()V

    return-void
.end method


# virtual methods
.method public abstract a(ILjava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignUnit;)V
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

.method public onError(Lcom/mbridge/msdk/foundation/same/net/a/a;)V
    .locals 3

    .line 42
    sget-object v0, Lcom/mbridge/msdk/d/b/b;->a:Ljava/lang/String;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "errorCode = "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v2, p1, Lcom/mbridge/msdk/foundation/same/net/a/a;->a:I

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 43
    iget v0, p1, Lcom/mbridge/msdk/foundation/same/net/a/a;->a:I

    invoke-static {p1}, Lcom/mbridge/msdk/foundation/same/net/f/a;->a(Lcom/mbridge/msdk/foundation/same/net/a/a;)Ljava/lang/String;

    move-result-object p1

    const/4 v1, 0x0

    invoke-virtual {p0, v0, p1, v1}, Lcom/mbridge/msdk/d/b/b;->a(ILjava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignUnit;)V

    return-void
.end method

.method public onPreExecute()V
    .locals 2

    .line 25
    invoke-super {p0}, Lcom/mbridge/msdk/foundation/same/net/f;->onPreExecute()V

    .line 26
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/mbridge/msdk/d/b/b;->b:J

    return-void
.end method

.method public onSuccess(Lcom/mbridge/msdk/foundation/same/net/k;)V
    .locals 7
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/mbridge/msdk/foundation/same/net/k<",
            "Lorg/json/JSONObject;",
            ">;)V"
        }
    .end annotation

    if-eqz p1, :cond_5

    .line 35
    iget-object v0, p1, Lcom/mbridge/msdk/foundation/same/net/k;->c:Lcom/mbridge/msdk/foundation/same/net/e/c;

    if-eqz v0, :cond_5

    .line 36
    iget-object v0, p1, Lcom/mbridge/msdk/foundation/same/net/k;->c:Lcom/mbridge/msdk/foundation/same/net/e/c;

    iget-object v0, v0, Lcom/mbridge/msdk/foundation/same/net/e/c;->d:Ljava/util/List;

    iget-object p1, p1, Lcom/mbridge/msdk/foundation/same/net/k;->a:Ljava/lang/Object;

    check-cast p1, Lorg/json/JSONObject;

    const-string v1, "status"

    .line 1050
    invoke-virtual {p1, v1}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v1

    const/4 v2, 0x1

    const-string v3, "msg"

    const/4 v4, 0x0

    if-ne v2, v1, :cond_4

    .line 1053
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v5

    invoke-virtual {p0, v5, v6}, Lcom/mbridge/msdk/d/b/b;->calcRequestTime(J)V

    const-string v2, "version"

    .line 1054
    invoke-virtual {p1, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    const-string v5, "v5"

    .line 1055
    invoke-virtual {v5, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    const-string v5, "data"

    if-eqz v2, :cond_0

    .line 1056
    invoke-virtual {p1, v5}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v2

    invoke-static {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->parseV5CampaignUnit(Lorg/json/JSONObject;)Lcom/mbridge/msdk/foundation/entity/CampaignUnit;

    move-result-object v2

    goto :goto_0

    .line 1058
    :cond_0
    invoke-virtual {p1, v5}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v2

    invoke-static {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->parseCampaignUnit(Lorg/json/JSONObject;)Lcom/mbridge/msdk/foundation/entity/CampaignUnit;

    move-result-object v2

    :goto_0
    if-eqz v2, :cond_1

    .line 1060
    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->getAds()Ljava/util/ArrayList;

    move-result-object v5

    if-eqz v5, :cond_1

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->getAds()Ljava/util/ArrayList;

    move-result-object v5

    invoke-virtual {v5}, Ljava/util/ArrayList;->size()I

    move-result v5

    if-lez v5, :cond_1

    .line 1061
    invoke-virtual {p0, v0, v2}, Lcom/mbridge/msdk/d/b/b;->a(Ljava/util/List;Lcom/mbridge/msdk/foundation/entity/CampaignUnit;)V

    .line 1062
    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->getAds()Ljava/util/ArrayList;

    move-result-object p1

    invoke-virtual {p1}, Ljava/util/ArrayList;->size()I

    move-result p1

    invoke-virtual {p0, p1}, Lcom/mbridge/msdk/d/b/b;->saveRequestTime(I)V

    goto :goto_1

    :cond_1
    if-eqz v2, :cond_2

    .line 1066
    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->getMsg()Ljava/lang/String;

    move-result-object v4

    .line 1068
    :cond_2
    invoke-static {v4}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_3

    .line 1069
    invoke-virtual {p1, v3}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    .line 1071
    :cond_3
    invoke-virtual {p0, v1, v4, v2}, Lcom/mbridge/msdk/d/b/b;->a(ILjava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignUnit;)V

    goto :goto_1

    .line 1074
    :cond_4
    invoke-virtual {p1, v3}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, v1, p1, v4}, Lcom/mbridge/msdk/d/b/b;->a(ILjava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignUnit;)V

    :cond_5
    :goto_1
    return-void
.end method
