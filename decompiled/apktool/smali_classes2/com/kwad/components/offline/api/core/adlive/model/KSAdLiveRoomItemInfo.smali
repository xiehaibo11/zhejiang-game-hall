.class public Lcom/kwad/components/offline/api/core/adlive/model/KSAdLiveRoomItemInfo;
.super Lcom/kwad/components/offline/api/core/model/BaseOfflineCompoJsonParse;

# interfaces
.implements Ljava/io/Serializable;


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/kwad/components/offline/api/core/model/BaseOfflineCompoJsonParse<",
        "Lcom/kwad/components/offline/api/core/adlive/model/KSAdLiveRoomItemInfo;",
        ">;",
        "Ljava/io/Serializable;"
    }
.end annotation


# static fields
.field private static final serialVersionUID:J = -0x5557d3616b878445L


# instance fields
.field public imageUrl:Ljava/lang/String;

.field public itemId:Ljava/lang/String;

.field public price:Ljava/lang/String;

.field public title:Ljava/lang/String;


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/offline/api/core/model/BaseOfflineCompoJsonParse;-><init>()V

    return-void
.end method


# virtual methods
.method public parseJson(Lcom/kwad/components/offline/api/core/adlive/model/KSAdLiveRoomItemInfo;Lorg/json/JSONObject;)V
    .locals 3

    if-nez p2, :cond_0

    return-void

    :cond_0
    const-string v0, "itemId"

    invoke-virtual {p2, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    iput-object v1, p1, Lcom/kwad/components/offline/api/core/adlive/model/KSAdLiveRoomItemInfo;->itemId:Ljava/lang/String;

    invoke-virtual {p2, v0}, Lorg/json/JSONObject;->opt(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    const-string v2, ""

    if-ne v0, v1, :cond_1

    iput-object v2, p1, Lcom/kwad/components/offline/api/core/adlive/model/KSAdLiveRoomItemInfo;->itemId:Ljava/lang/String;

    :cond_1
    const-string v0, "imageUrl"

    invoke-virtual {p2, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    iput-object v1, p1, Lcom/kwad/components/offline/api/core/adlive/model/KSAdLiveRoomItemInfo;->imageUrl:Ljava/lang/String;

    invoke-virtual {p2, v0}, Lorg/json/JSONObject;->opt(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_2

    iput-object v2, p1, Lcom/kwad/components/offline/api/core/adlive/model/KSAdLiveRoomItemInfo;->imageUrl:Ljava/lang/String;

    :cond_2
    const-string v0, "title"

    invoke-virtual {p2, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    iput-object v1, p1, Lcom/kwad/components/offline/api/core/adlive/model/KSAdLiveRoomItemInfo;->title:Ljava/lang/String;

    invoke-virtual {p2, v0}, Lorg/json/JSONObject;->opt(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_3

    iput-object v2, p1, Lcom/kwad/components/offline/api/core/adlive/model/KSAdLiveRoomItemInfo;->title:Ljava/lang/String;

    :cond_3
    const-string v0, "templateVersion"

    invoke-virtual {p2, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p1, Lcom/kwad/components/offline/api/core/adlive/model/KSAdLiveRoomItemInfo;->price:Ljava/lang/String;

    const-string v0, "price"

    invoke-virtual {p2, v0}, Lorg/json/JSONObject;->opt(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p2

    sget-object v0, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne p2, v0, :cond_4

    iput-object v2, p1, Lcom/kwad/components/offline/api/core/adlive/model/KSAdLiveRoomItemInfo;->price:Ljava/lang/String;

    :cond_4
    return-void
.end method

.method public bridge synthetic parseJson(Lcom/kwad/components/offline/api/core/model/IOfflineCompoJsonParse;Lorg/json/JSONObject;)V
    .locals 0

    check-cast p1, Lcom/kwad/components/offline/api/core/adlive/model/KSAdLiveRoomItemInfo;

    invoke-virtual {p0, p1, p2}, Lcom/kwad/components/offline/api/core/adlive/model/KSAdLiveRoomItemInfo;->parseJson(Lcom/kwad/components/offline/api/core/adlive/model/KSAdLiveRoomItemInfo;Lorg/json/JSONObject;)V

    return-void
.end method

.method public toJson(Lcom/kwad/components/offline/api/core/adlive/model/KSAdLiveRoomItemInfo;)Lorg/json/JSONObject;
    .locals 1

    const/4 v0, 0x0

    invoke-virtual {p0, p1, v0}, Lcom/kwad/components/offline/api/core/adlive/model/KSAdLiveRoomItemInfo;->toJson(Lcom/kwad/components/offline/api/core/adlive/model/KSAdLiveRoomItemInfo;Lorg/json/JSONObject;)Lorg/json/JSONObject;

    move-result-object p1

    return-object p1
.end method

.method public toJson(Lcom/kwad/components/offline/api/core/adlive/model/KSAdLiveRoomItemInfo;Lorg/json/JSONObject;)Lorg/json/JSONObject;
    .locals 3

    if-nez p2, :cond_0

    new-instance p2, Lorg/json/JSONObject;

    invoke-direct {p2}, Lorg/json/JSONObject;-><init>()V

    :cond_0
    iget-object v0, p1, Lcom/kwad/components/offline/api/core/adlive/model/KSAdLiveRoomItemInfo;->itemId:Ljava/lang/String;

    const-string v1, ""

    if-eqz v0, :cond_1

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_1

    iget-object v0, p1, Lcom/kwad/components/offline/api/core/adlive/model/KSAdLiveRoomItemInfo;->itemId:Ljava/lang/String;

    const-string v2, "itemId"

    invoke-static {p2, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_1
    iget-object v0, p1, Lcom/kwad/components/offline/api/core/adlive/model/KSAdLiveRoomItemInfo;->imageUrl:Ljava/lang/String;

    if-eqz v0, :cond_2

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_2

    iget-object v0, p1, Lcom/kwad/components/offline/api/core/adlive/model/KSAdLiveRoomItemInfo;->imageUrl:Ljava/lang/String;

    const-string v2, "imageUrl"

    invoke-static {p2, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_2
    iget-object v0, p1, Lcom/kwad/components/offline/api/core/adlive/model/KSAdLiveRoomItemInfo;->title:Ljava/lang/String;

    if-eqz v0, :cond_3

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_3

    iget-object v0, p1, Lcom/kwad/components/offline/api/core/adlive/model/KSAdLiveRoomItemInfo;->title:Ljava/lang/String;

    const-string v2, "title"

    invoke-static {p2, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_3
    iget-object v0, p1, Lcom/kwad/components/offline/api/core/adlive/model/KSAdLiveRoomItemInfo;->price:Ljava/lang/String;

    if-eqz v0, :cond_4

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_4

    iget-object p1, p1, Lcom/kwad/components/offline/api/core/adlive/model/KSAdLiveRoomItemInfo;->price:Ljava/lang/String;

    const-string v0, "price"

    invoke-static {p2, v0, p1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_4
    return-object p2
.end method

.method public bridge synthetic toJson(Lcom/kwad/components/offline/api/core/model/IOfflineCompoJsonParse;)Lorg/json/JSONObject;
    .locals 0

    check-cast p1, Lcom/kwad/components/offline/api/core/adlive/model/KSAdLiveRoomItemInfo;

    invoke-virtual {p0, p1}, Lcom/kwad/components/offline/api/core/adlive/model/KSAdLiveRoomItemInfo;->toJson(Lcom/kwad/components/offline/api/core/adlive/model/KSAdLiveRoomItemInfo;)Lorg/json/JSONObject;

    move-result-object p1

    return-object p1
.end method

.method public bridge synthetic toJson(Lcom/kwad/components/offline/api/core/model/IOfflineCompoJsonParse;Lorg/json/JSONObject;)Lorg/json/JSONObject;
    .locals 0

    check-cast p1, Lcom/kwad/components/offline/api/core/adlive/model/KSAdLiveRoomItemInfo;

    invoke-virtual {p0, p1, p2}, Lcom/kwad/components/offline/api/core/adlive/model/KSAdLiveRoomItemInfo;->toJson(Lcom/kwad/components/offline/api/core/adlive/model/KSAdLiveRoomItemInfo;Lorg/json/JSONObject;)Lorg/json/JSONObject;

    move-result-object p1

    return-object p1
.end method
