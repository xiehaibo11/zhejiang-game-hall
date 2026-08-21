.class public final Lcom/kwad/sdk/core/b/a/cl;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/core/d;


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Object;",
        "Lcom/kwad/sdk/core/d<",
        "Lcom/kwad/sdk/core/request/model/b;",
        ">;"
    }
.end annotation


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private static a(Lcom/kwad/sdk/core/request/model/b;Lorg/json/JSONObject;)V
    .locals 3

    if-nez p1, :cond_0

    return-void

    :cond_0
    const-string v0, "imei"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/request/model/b;->amD:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/core/request/model/b;->amD:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    const-string v2, ""

    if-ne v0, v1, :cond_1

    iput-object v2, p0, Lcom/kwad/sdk/core/request/model/b;->amD:Ljava/lang/String;

    :cond_1
    const-string v0, "imei1"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/request/model/b;->atM:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/core/request/model/b;->atM:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_2

    iput-object v2, p0, Lcom/kwad/sdk/core/request/model/b;->atM:Ljava/lang/String;

    :cond_2
    const-string v0, "imei2"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/request/model/b;->atN:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/core/request/model/b;->atN:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_3

    iput-object v2, p0, Lcom/kwad/sdk/core/request/model/b;->atN:Ljava/lang/String;

    :cond_3
    const-string v0, "meid"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/request/model/b;->atO:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/core/request/model/b;->atO:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_4

    iput-object v2, p0, Lcom/kwad/sdk/core/request/model/b;->atO:Ljava/lang/String;

    :cond_4
    const-string v0, "oaid"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/request/model/b;->amE:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/core/request/model/b;->amE:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_5

    iput-object v2, p0, Lcom/kwad/sdk/core/request/model/b;->amE:Ljava/lang/String;

    :cond_5
    const-string v0, "appMkt"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/request/model/b;->atP:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/core/request/model/b;->atP:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_6

    iput-object v2, p0, Lcom/kwad/sdk/core/request/model/b;->atP:Ljava/lang/String;

    :cond_6
    const-string v0, "appMktParam"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/request/model/b;->atQ:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/core/request/model/b;->atQ:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_7

    iput-object v2, p0, Lcom/kwad/sdk/core/request/model/b;->atQ:Ljava/lang/String;

    :cond_7
    const-string v0, "romName"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/request/model/b;->Qb:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/core/request/model/b;->Qb:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_8

    iput-object v2, p0, Lcom/kwad/sdk/core/request/model/b;->Qb:Ljava/lang/String;

    :cond_8
    const-string v0, "osType"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/request/model/b;->Up:I

    const-string v0, "osApi"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/request/model/b;->Ur:I

    const-string v0, "osVersion"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/request/model/b;->atR:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/core/request/model/b;->atR:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_9

    iput-object v2, p0, Lcom/kwad/sdk/core/request/model/b;->atR:Ljava/lang/String;

    :cond_9
    const-string v0, "language"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/request/model/b;->Us:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/core/request/model/b;->Us:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_a

    iput-object v2, p0, Lcom/kwad/sdk/core/request/model/b;->Us:Ljava/lang/String;

    :cond_a
    const-string v0, "screenWidth"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/request/model/b;->Uu:I

    const-string v0, "screenHeight"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/request/model/b;->Uv:I

    const-string v0, "deviceWidth"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/request/model/b;->atS:I

    const-string v0, "deviceHeight"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/request/model/b;->atT:I

    const-string v0, "androidId"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/request/model/b;->atU:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/core/request/model/b;->atU:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_b

    iput-object v2, p0, Lcom/kwad/sdk/core/request/model/b;->atU:Ljava/lang/String;

    :cond_b
    const-string v0, "deviceId"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/request/model/b;->atV:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/core/request/model/b;->atV:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_c

    iput-object v2, p0, Lcom/kwad/sdk/core/request/model/b;->atV:Ljava/lang/String;

    :cond_c
    const-string v0, "deviceVendor"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/request/model/b;->atW:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/core/request/model/b;->atW:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_d

    iput-object v2, p0, Lcom/kwad/sdk/core/request/model/b;->atW:Ljava/lang/String;

    :cond_d
    const-string v0, "platform"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/request/model/b;->atX:I

    const-string v0, "deviceModel"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/request/model/b;->atY:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/core/request/model/b;->atY:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_e

    iput-object v2, p0, Lcom/kwad/sdk/core/request/model/b;->atY:Ljava/lang/String;

    :cond_e
    const-string v0, "deviceBrand"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/request/model/b;->Uo:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/core/request/model/b;->Uo:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_f

    iput-object v2, p0, Lcom/kwad/sdk/core/request/model/b;->Uo:Ljava/lang/String;

    :cond_f
    const-string v0, "deviceSig"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/request/model/b;->atZ:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/core/request/model/b;->atZ:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_10

    iput-object v2, p0, Lcom/kwad/sdk/core/request/model/b;->atZ:Ljava/lang/String;

    :cond_10
    const-string v0, "eGid"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/request/model/b;->aua:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/core/request/model/b;->aua:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_11

    iput-object v2, p0, Lcom/kwad/sdk/core/request/model/b;->aua:Ljava/lang/String;

    :cond_11
    const-string v0, "appPackageName"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/request/model/b;->aub:Lorg/json/JSONArray;

    const-string v0, "arch"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/request/model/b;->auc:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/core/request/model/b;->auc:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_12

    iput-object v2, p0, Lcom/kwad/sdk/core/request/model/b;->auc:Ljava/lang/String;

    :cond_12
    const-string v0, "screenDirection"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/request/model/b;->aud:I

    const-string v0, "kwaiVersionName"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/request/model/b;->aue:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/core/request/model/b;->aue:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_13

    iput-object v2, p0, Lcom/kwad/sdk/core/request/model/b;->aue:Ljava/lang/String;

    :cond_13
    const-string v0, "kwaiNebulaVersionName"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/request/model/b;->auf:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/core/request/model/b;->auf:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_14

    iput-object v2, p0, Lcom/kwad/sdk/core/request/model/b;->auf:Ljava/lang/String;

    :cond_14
    const-string v0, "wechatVersionName"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/request/model/b;->aug:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/core/request/model/b;->aug:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_15

    iput-object v2, p0, Lcom/kwad/sdk/core/request/model/b;->aug:Ljava/lang/String;

    :cond_15
    const-string v0, "sourceFlag"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/sdk/core/request/model/b;->auh:J

    const-string v0, "systemBootTime"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/request/model/b;->aui:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/core/request/model/b;->aui:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_16

    iput-object v2, p0, Lcom/kwad/sdk/core/request/model/b;->aui:Ljava/lang/String;

    :cond_16
    const-string v0, "systemUpdateTime"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/kwad/sdk/core/request/model/b;->auj:Ljava/lang/String;

    iget-object p1, p0, Lcom/kwad/sdk/core/request/model/b;->auj:Ljava/lang/String;

    sget-object v0, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne p1, v0, :cond_17

    iput-object v2, p0, Lcom/kwad/sdk/core/request/model/b;->auj:Ljava/lang/String;

    :cond_17
    return-void
.end method

.method private static b(Lcom/kwad/sdk/core/request/model/b;Lorg/json/JSONObject;)Lorg/json/JSONObject;
    .locals 6

    if-nez p1, :cond_0

    new-instance p1, Lorg/json/JSONObject;

    invoke-direct {p1}, Lorg/json/JSONObject;-><init>()V

    :cond_0
    iget-object v0, p0, Lcom/kwad/sdk/core/request/model/b;->amD:Ljava/lang/String;

    const-string v1, ""

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/kwad/sdk/core/request/model/b;->amD:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_1

    iget-object v0, p0, Lcom/kwad/sdk/core/request/model/b;->amD:Ljava/lang/String;

    const-string v2, "imei"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_1
    iget-object v0, p0, Lcom/kwad/sdk/core/request/model/b;->atM:Ljava/lang/String;

    if-eqz v0, :cond_2

    iget-object v0, p0, Lcom/kwad/sdk/core/request/model/b;->atM:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_2

    iget-object v0, p0, Lcom/kwad/sdk/core/request/model/b;->atM:Ljava/lang/String;

    const-string v2, "imei1"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_2
    iget-object v0, p0, Lcom/kwad/sdk/core/request/model/b;->atN:Ljava/lang/String;

    if-eqz v0, :cond_3

    iget-object v0, p0, Lcom/kwad/sdk/core/request/model/b;->atN:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_3

    iget-object v0, p0, Lcom/kwad/sdk/core/request/model/b;->atN:Ljava/lang/String;

    const-string v2, "imei2"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_3
    iget-object v0, p0, Lcom/kwad/sdk/core/request/model/b;->atO:Ljava/lang/String;

    if-eqz v0, :cond_4

    iget-object v0, p0, Lcom/kwad/sdk/core/request/model/b;->atO:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_4

    iget-object v0, p0, Lcom/kwad/sdk/core/request/model/b;->atO:Ljava/lang/String;

    const-string v2, "meid"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_4
    iget-object v0, p0, Lcom/kwad/sdk/core/request/model/b;->amE:Ljava/lang/String;

    if-eqz v0, :cond_5

    iget-object v0, p0, Lcom/kwad/sdk/core/request/model/b;->amE:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_5

    iget-object v0, p0, Lcom/kwad/sdk/core/request/model/b;->amE:Ljava/lang/String;

    const-string v2, "oaid"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_5
    iget-object v0, p0, Lcom/kwad/sdk/core/request/model/b;->atP:Ljava/lang/String;

    if-eqz v0, :cond_6

    iget-object v0, p0, Lcom/kwad/sdk/core/request/model/b;->atP:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_6

    iget-object v0, p0, Lcom/kwad/sdk/core/request/model/b;->atP:Ljava/lang/String;

    const-string v2, "appMkt"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_6
    iget-object v0, p0, Lcom/kwad/sdk/core/request/model/b;->atQ:Ljava/lang/String;

    if-eqz v0, :cond_7

    iget-object v0, p0, Lcom/kwad/sdk/core/request/model/b;->atQ:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_7

    iget-object v0, p0, Lcom/kwad/sdk/core/request/model/b;->atQ:Ljava/lang/String;

    const-string v2, "appMktParam"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_7
    iget-object v0, p0, Lcom/kwad/sdk/core/request/model/b;->Qb:Ljava/lang/String;

    if-eqz v0, :cond_8

    iget-object v0, p0, Lcom/kwad/sdk/core/request/model/b;->Qb:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_8

    iget-object v0, p0, Lcom/kwad/sdk/core/request/model/b;->Qb:Ljava/lang/String;

    const-string v2, "romName"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_8
    iget v0, p0, Lcom/kwad/sdk/core/request/model/b;->Up:I

    if-eqz v0, :cond_9

    iget v0, p0, Lcom/kwad/sdk/core/request/model/b;->Up:I

    const-string v2, "osType"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_9
    iget v0, p0, Lcom/kwad/sdk/core/request/model/b;->Ur:I

    if-eqz v0, :cond_a

    iget v0, p0, Lcom/kwad/sdk/core/request/model/b;->Ur:I

    const-string v2, "osApi"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_a
    iget-object v0, p0, Lcom/kwad/sdk/core/request/model/b;->atR:Ljava/lang/String;

    if-eqz v0, :cond_b

    iget-object v0, p0, Lcom/kwad/sdk/core/request/model/b;->atR:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_b

    iget-object v0, p0, Lcom/kwad/sdk/core/request/model/b;->atR:Ljava/lang/String;

    const-string v2, "osVersion"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_b
    iget-object v0, p0, Lcom/kwad/sdk/core/request/model/b;->Us:Ljava/lang/String;

    if-eqz v0, :cond_c

    iget-object v0, p0, Lcom/kwad/sdk/core/request/model/b;->Us:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_c

    iget-object v0, p0, Lcom/kwad/sdk/core/request/model/b;->Us:Ljava/lang/String;

    const-string v2, "language"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_c
    iget v0, p0, Lcom/kwad/sdk/core/request/model/b;->Uu:I

    if-eqz v0, :cond_d

    iget v0, p0, Lcom/kwad/sdk/core/request/model/b;->Uu:I

    const-string v2, "screenWidth"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_d
    iget v0, p0, Lcom/kwad/sdk/core/request/model/b;->Uv:I

    if-eqz v0, :cond_e

    iget v0, p0, Lcom/kwad/sdk/core/request/model/b;->Uv:I

    const-string v2, "screenHeight"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_e
    iget v0, p0, Lcom/kwad/sdk/core/request/model/b;->atS:I

    if-eqz v0, :cond_f

    iget v0, p0, Lcom/kwad/sdk/core/request/model/b;->atS:I

    const-string v2, "deviceWidth"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_f
    iget v0, p0, Lcom/kwad/sdk/core/request/model/b;->atT:I

    if-eqz v0, :cond_10

    iget v0, p0, Lcom/kwad/sdk/core/request/model/b;->atT:I

    const-string v2, "deviceHeight"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_10
    iget-object v0, p0, Lcom/kwad/sdk/core/request/model/b;->atU:Ljava/lang/String;

    if-eqz v0, :cond_11

    iget-object v0, p0, Lcom/kwad/sdk/core/request/model/b;->atU:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_11

    iget-object v0, p0, Lcom/kwad/sdk/core/request/model/b;->atU:Ljava/lang/String;

    const-string v2, "androidId"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_11
    iget-object v0, p0, Lcom/kwad/sdk/core/request/model/b;->atV:Ljava/lang/String;

    if-eqz v0, :cond_12

    iget-object v0, p0, Lcom/kwad/sdk/core/request/model/b;->atV:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_12

    iget-object v0, p0, Lcom/kwad/sdk/core/request/model/b;->atV:Ljava/lang/String;

    const-string v2, "deviceId"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_12
    iget-object v0, p0, Lcom/kwad/sdk/core/request/model/b;->atW:Ljava/lang/String;

    if-eqz v0, :cond_13

    iget-object v0, p0, Lcom/kwad/sdk/core/request/model/b;->atW:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_13

    iget-object v0, p0, Lcom/kwad/sdk/core/request/model/b;->atW:Ljava/lang/String;

    const-string v2, "deviceVendor"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_13
    iget v0, p0, Lcom/kwad/sdk/core/request/model/b;->atX:I

    if-eqz v0, :cond_14

    iget v0, p0, Lcom/kwad/sdk/core/request/model/b;->atX:I

    const-string v2, "platform"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_14
    iget-object v0, p0, Lcom/kwad/sdk/core/request/model/b;->atY:Ljava/lang/String;

    if-eqz v0, :cond_15

    iget-object v0, p0, Lcom/kwad/sdk/core/request/model/b;->atY:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_15

    iget-object v0, p0, Lcom/kwad/sdk/core/request/model/b;->atY:Ljava/lang/String;

    const-string v2, "deviceModel"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_15
    iget-object v0, p0, Lcom/kwad/sdk/core/request/model/b;->Uo:Ljava/lang/String;

    if-eqz v0, :cond_16

    iget-object v0, p0, Lcom/kwad/sdk/core/request/model/b;->Uo:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_16

    iget-object v0, p0, Lcom/kwad/sdk/core/request/model/b;->Uo:Ljava/lang/String;

    const-string v2, "deviceBrand"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_16
    iget-object v0, p0, Lcom/kwad/sdk/core/request/model/b;->atZ:Ljava/lang/String;

    if-eqz v0, :cond_17

    iget-object v0, p0, Lcom/kwad/sdk/core/request/model/b;->atZ:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_17

    iget-object v0, p0, Lcom/kwad/sdk/core/request/model/b;->atZ:Ljava/lang/String;

    const-string v2, "deviceSig"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_17
    iget-object v0, p0, Lcom/kwad/sdk/core/request/model/b;->aua:Ljava/lang/String;

    if-eqz v0, :cond_18

    iget-object v0, p0, Lcom/kwad/sdk/core/request/model/b;->aua:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_18

    iget-object v0, p0, Lcom/kwad/sdk/core/request/model/b;->aua:Ljava/lang/String;

    const-string v2, "eGid"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_18
    iget-object v0, p0, Lcom/kwad/sdk/core/request/model/b;->aub:Lorg/json/JSONArray;

    const-string v2, "appPackageName"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Lorg/json/JSONArray;)V

    iget-object v0, p0, Lcom/kwad/sdk/core/request/model/b;->auc:Ljava/lang/String;

    if-eqz v0, :cond_19

    iget-object v0, p0, Lcom/kwad/sdk/core/request/model/b;->auc:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_19

    iget-object v0, p0, Lcom/kwad/sdk/core/request/model/b;->auc:Ljava/lang/String;

    const-string v2, "arch"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_19
    iget v0, p0, Lcom/kwad/sdk/core/request/model/b;->aud:I

    if-eqz v0, :cond_1a

    iget v0, p0, Lcom/kwad/sdk/core/request/model/b;->aud:I

    const-string v2, "screenDirection"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_1a
    iget-object v0, p0, Lcom/kwad/sdk/core/request/model/b;->aue:Ljava/lang/String;

    if-eqz v0, :cond_1b

    iget-object v0, p0, Lcom/kwad/sdk/core/request/model/b;->aue:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_1b

    iget-object v0, p0, Lcom/kwad/sdk/core/request/model/b;->aue:Ljava/lang/String;

    const-string v2, "kwaiVersionName"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_1b
    iget-object v0, p0, Lcom/kwad/sdk/core/request/model/b;->auf:Ljava/lang/String;

    if-eqz v0, :cond_1c

    iget-object v0, p0, Lcom/kwad/sdk/core/request/model/b;->auf:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_1c

    iget-object v0, p0, Lcom/kwad/sdk/core/request/model/b;->auf:Ljava/lang/String;

    const-string v2, "kwaiNebulaVersionName"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_1c
    iget-object v0, p0, Lcom/kwad/sdk/core/request/model/b;->aug:Ljava/lang/String;

    if-eqz v0, :cond_1d

    iget-object v0, p0, Lcom/kwad/sdk/core/request/model/b;->aug:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_1d

    iget-object v0, p0, Lcom/kwad/sdk/core/request/model/b;->aug:Ljava/lang/String;

    const-string v2, "wechatVersionName"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_1d
    iget-wide v2, p0, Lcom/kwad/sdk/core/request/model/b;->auh:J

    const-wide/16 v4, 0x0

    cmp-long v0, v2, v4

    if-eqz v0, :cond_1e

    iget-wide v2, p0, Lcom/kwad/sdk/core/request/model/b;->auh:J

    const-string v0, "sourceFlag"

    invoke-static {p1, v0, v2, v3}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    :cond_1e
    iget-object v0, p0, Lcom/kwad/sdk/core/request/model/b;->aui:Ljava/lang/String;

    if-eqz v0, :cond_1f

    iget-object v0, p0, Lcom/kwad/sdk/core/request/model/b;->aui:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_1f

    iget-object v0, p0, Lcom/kwad/sdk/core/request/model/b;->aui:Ljava/lang/String;

    const-string v2, "systemBootTime"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_1f
    iget-object v0, p0, Lcom/kwad/sdk/core/request/model/b;->auj:Ljava/lang/String;

    if-eqz v0, :cond_20

    iget-object v0, p0, Lcom/kwad/sdk/core/request/model/b;->auj:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_20

    iget-object p0, p0, Lcom/kwad/sdk/core/request/model/b;->auj:Ljava/lang/String;

    const-string v0, "systemUpdateTime"

    invoke-static {p1, v0, p0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_20
    return-object p1
.end method


# virtual methods
.method public final bridge synthetic a(Lcom/kwad/sdk/core/b;Lorg/json/JSONObject;)V
    .locals 0

    check-cast p1, Lcom/kwad/sdk/core/request/model/b;

    invoke-static {p1, p2}, Lcom/kwad/sdk/core/b/a/cl;->a(Lcom/kwad/sdk/core/request/model/b;Lorg/json/JSONObject;)V

    return-void
.end method

.method public final bridge synthetic b(Lcom/kwad/sdk/core/b;Lorg/json/JSONObject;)Lorg/json/JSONObject;
    .locals 0

    check-cast p1, Lcom/kwad/sdk/core/request/model/b;

    invoke-static {p1, p2}, Lcom/kwad/sdk/core/b/a/cl;->b(Lcom/kwad/sdk/core/request/model/b;Lorg/json/JSONObject;)Lorg/json/JSONObject;

    move-result-object p1

    return-object p1
.end method
