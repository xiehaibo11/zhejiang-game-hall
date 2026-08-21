.class public final Lcom/kwad/sdk/core/b/a/bl;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/core/d;


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Object;",
        "Lcom/kwad/sdk/core/d<",
        "Lcom/kwad/sdk/core/report/z$b;",
        ">;"
    }
.end annotation


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private static a(Lcom/kwad/sdk/core/report/z$b;Lorg/json/JSONObject;)V
    .locals 3

    if-nez p1, :cond_0

    return-void

    :cond_0
    const-string v0, "photoPlaySecond"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/report/z$b;->asS:I

    const-string v0, "awardReceiveStage"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/report/z$b;->asT:I

    const-string v0, "itemClickType"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/report/z$b;->jG:I

    const-string v0, "itemCloseType"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/report/z$b;->asU:I

    const-string v0, "elementType"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/report/z$b;->asV:I

    const-string v0, "adRenderArea"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/report/z$b;->asW:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/core/report/z$b;->asW:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    const-string v2, ""

    if-ne v0, v1, :cond_1

    iput-object v2, p0, Lcom/kwad/sdk/core/report/z$b;->asW:Ljava/lang/String;

    :cond_1
    const-string v0, "highestLossPrice"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/sdk/core/report/z$b;->asX:J

    const-string v0, "impFailReason"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/report/z$b;->asY:I

    const-string v0, "winEcpm"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/sdk/core/report/z$b;->asZ:J

    const-string v0, "adnType"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/report/z$b;->adnType:I

    const-string v0, "adnName"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/report/z$b;->adnName:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/core/report/z$b;->adnName:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_2

    iput-object v2, p0, Lcom/kwad/sdk/core/report/z$b;->adnName:Ljava/lang/String;

    :cond_2
    const-string v0, "retainCodeType"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/report/z$b;->ata:I

    const-string v0, "photoSizeStyle"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/report/z$b;->atb:I

    const-string v0, "payload"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/report/z$b;->UP:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/core/report/z$b;->UP:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_3

    iput-object v2, p0, Lcom/kwad/sdk/core/report/z$b;->UP:Ljava/lang/String;

    :cond_3
    const-string v0, "deeplinkType"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/report/z$b;->atc:I

    const-string v0, "deeplinkAppName"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/report/z$b;->atd:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/core/report/z$b;->atd:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_4

    iput-object v2, p0, Lcom/kwad/sdk/core/report/z$b;->atd:Ljava/lang/String;

    :cond_4
    const-string v0, "deeplinkFailedReason"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/report/z$b;->ate:I

    const-string v0, "downloadSource"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/report/z$b;->downloadSource:I

    const-string v0, "isPackageChanged"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/report/z$b;->atf:I

    const-string v0, "installedFrom"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/report/z$b;->atg:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/core/report/z$b;->atg:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_5

    iput-object v2, p0, Lcom/kwad/sdk/core/report/z$b;->atg:Ljava/lang/String;

    :cond_5
    const-string v0, "downloadFailedReason"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/report/z$b;->ath:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/core/report/z$b;->ath:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_6

    iput-object v2, p0, Lcom/kwad/sdk/core/report/z$b;->ath:Ljava/lang/String;

    :cond_6
    const-string v0, "isChangedEndcard"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/report/z$b;->ati:I

    const-string v0, "adAggPageSource"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/report/z$b;->arz:I

    const-string v0, "serverPackageName"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/report/z$b;->atj:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/core/report/z$b;->atj:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_7

    iput-object v2, p0, Lcom/kwad/sdk/core/report/z$b;->atj:Ljava/lang/String;

    :cond_7
    const-string v0, "installedPackageName"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/report/z$b;->atk:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/core/report/z$b;->atk:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_8

    iput-object v2, p0, Lcom/kwad/sdk/core/report/z$b;->atk:Ljava/lang/String;

    :cond_8
    const-string v0, "closeButtonImpressionTime"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/report/z$b;->atl:I

    const-string v0, "closeButtonClickTime"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/report/z$b;->atm:I

    const-string v0, "landingPageLoadedDuration"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/sdk/core/report/z$b;->atn:J

    const-string v0, "leaveTime"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/sdk/core/report/z$b;->Kh:J

    const-string v0, "adItemClickBackDuration"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/sdk/core/report/z$b;->ato:J

    const-string v0, "appStorePageType"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/report/z$b;->atp:I

    const-string v0, "installStatus"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/report/z$b;->atq:I

    const-string v0, "downloadStatus"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/report/z$b;->atr:I

    const-string v0, "downloadCardType"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/report/z$b;->ats:I

    new-instance v0, Lcom/kwad/sdk/core/report/z$a;

    invoke-direct {v0}, Lcom/kwad/sdk/core/report/z$a;-><init>()V

    iput-object v0, p0, Lcom/kwad/sdk/core/report/z$b;->att:Lcom/kwad/sdk/core/report/z$a;

    iget-object v0, p0, Lcom/kwad/sdk/core/report/z$b;->att:Lcom/kwad/sdk/core/report/z$a;

    const-string v1, "clientExtData"

    invoke-virtual {p1, v1}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/report/z$a;->parseJson(Lorg/json/JSONObject;)V

    const-string v0, "landingPageType"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/report/z$b;->atu:I

    const-string v0, "playedDuration"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/sdk/core/report/z$b;->vy:J

    const-string v0, "playedRate"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/report/z$b;->atv:I

    const-string v0, "adOrder"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/report/z$b;->atw:I

    const-string v0, "adInterstitialSource"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/report/z$b;->atx:I

    const-string v0, "splashShakeAcceleration"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optDouble(Ljava/lang/String;)D

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/sdk/core/report/z$b;->jJ:D

    const-string v0, "splashInteractionRotateAngle"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/report/z$b;->aty:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/core/report/z$b;->aty:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_9

    iput-object v2, p0, Lcom/kwad/sdk/core/report/z$b;->aty:Ljava/lang/String;

    :cond_9
    const-string v0, "downloadInstallType"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/report/z$b;->atz:I

    const-string v0, "businessSceneType"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/report/z$b;->atA:I

    const-string v0, "adxResult"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/report/z$b;->adxResult:I

    const-string v0, "fingerSwipeType"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/report/z$b;->atB:I

    const-string v0, "fingerSwipeDistance"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/report/z$b;->atC:I

    const-string v0, "triggerType"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/report/z$b;->atD:I

    const-string v0, "cardCloseType"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/report/z$b;->atE:I

    const-string v0, "clientPkFailAdInfo"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/kwad/sdk/core/report/z$b;->atF:Ljava/lang/String;

    iget-object p1, p0, Lcom/kwad/sdk/core/report/z$b;->atF:Ljava/lang/String;

    sget-object v0, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne p1, v0, :cond_a

    iput-object v2, p0, Lcom/kwad/sdk/core/report/z$b;->atF:Ljava/lang/String;

    :cond_a
    return-void
.end method

.method private static b(Lcom/kwad/sdk/core/report/z$b;Lorg/json/JSONObject;)Lorg/json/JSONObject;
    .locals 6

    if-nez p1, :cond_0

    new-instance p1, Lorg/json/JSONObject;

    invoke-direct {p1}, Lorg/json/JSONObject;-><init>()V

    :cond_0
    iget v0, p0, Lcom/kwad/sdk/core/report/z$b;->asS:I

    if-eqz v0, :cond_1

    iget v0, p0, Lcom/kwad/sdk/core/report/z$b;->asS:I

    const-string v1, "photoPlaySecond"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_1
    iget v0, p0, Lcom/kwad/sdk/core/report/z$b;->asT:I

    if-eqz v0, :cond_2

    iget v0, p0, Lcom/kwad/sdk/core/report/z$b;->asT:I

    const-string v1, "awardReceiveStage"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_2
    iget v0, p0, Lcom/kwad/sdk/core/report/z$b;->jG:I

    if-eqz v0, :cond_3

    iget v0, p0, Lcom/kwad/sdk/core/report/z$b;->jG:I

    const-string v1, "itemClickType"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_3
    iget v0, p0, Lcom/kwad/sdk/core/report/z$b;->asU:I

    if-eqz v0, :cond_4

    iget v0, p0, Lcom/kwad/sdk/core/report/z$b;->asU:I

    const-string v1, "itemCloseType"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_4
    iget v0, p0, Lcom/kwad/sdk/core/report/z$b;->asV:I

    if-eqz v0, :cond_5

    iget v0, p0, Lcom/kwad/sdk/core/report/z$b;->asV:I

    const-string v1, "elementType"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_5
    iget-object v0, p0, Lcom/kwad/sdk/core/report/z$b;->asW:Ljava/lang/String;

    const-string v1, ""

    if-eqz v0, :cond_6

    iget-object v0, p0, Lcom/kwad/sdk/core/report/z$b;->asW:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_6

    iget-object v0, p0, Lcom/kwad/sdk/core/report/z$b;->asW:Ljava/lang/String;

    const-string v2, "adRenderArea"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_6
    iget-wide v2, p0, Lcom/kwad/sdk/core/report/z$b;->asX:J

    const-wide/16 v4, 0x0

    cmp-long v0, v2, v4

    if-eqz v0, :cond_7

    iget-wide v2, p0, Lcom/kwad/sdk/core/report/z$b;->asX:J

    const-string v0, "highestLossPrice"

    invoke-static {p1, v0, v2, v3}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    :cond_7
    iget v0, p0, Lcom/kwad/sdk/core/report/z$b;->asY:I

    if-eqz v0, :cond_8

    iget v0, p0, Lcom/kwad/sdk/core/report/z$b;->asY:I

    const-string v2, "impFailReason"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_8
    iget-wide v2, p0, Lcom/kwad/sdk/core/report/z$b;->asZ:J

    cmp-long v0, v2, v4

    if-eqz v0, :cond_9

    iget-wide v2, p0, Lcom/kwad/sdk/core/report/z$b;->asZ:J

    const-string v0, "winEcpm"

    invoke-static {p1, v0, v2, v3}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    :cond_9
    iget v0, p0, Lcom/kwad/sdk/core/report/z$b;->adnType:I

    if-eqz v0, :cond_a

    iget v0, p0, Lcom/kwad/sdk/core/report/z$b;->adnType:I

    const-string v2, "adnType"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_a
    iget-object v0, p0, Lcom/kwad/sdk/core/report/z$b;->adnName:Ljava/lang/String;

    if-eqz v0, :cond_b

    iget-object v0, p0, Lcom/kwad/sdk/core/report/z$b;->adnName:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_b

    iget-object v0, p0, Lcom/kwad/sdk/core/report/z$b;->adnName:Ljava/lang/String;

    const-string v2, "adnName"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_b
    iget v0, p0, Lcom/kwad/sdk/core/report/z$b;->ata:I

    if-eqz v0, :cond_c

    iget v0, p0, Lcom/kwad/sdk/core/report/z$b;->ata:I

    const-string v2, "retainCodeType"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_c
    iget v0, p0, Lcom/kwad/sdk/core/report/z$b;->atb:I

    if-eqz v0, :cond_d

    iget v0, p0, Lcom/kwad/sdk/core/report/z$b;->atb:I

    const-string v2, "photoSizeStyle"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_d
    iget-object v0, p0, Lcom/kwad/sdk/core/report/z$b;->UP:Ljava/lang/String;

    if-eqz v0, :cond_e

    iget-object v0, p0, Lcom/kwad/sdk/core/report/z$b;->UP:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_e

    iget-object v0, p0, Lcom/kwad/sdk/core/report/z$b;->UP:Ljava/lang/String;

    const-string v2, "payload"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_e
    iget v0, p0, Lcom/kwad/sdk/core/report/z$b;->atc:I

    if-eqz v0, :cond_f

    iget v0, p0, Lcom/kwad/sdk/core/report/z$b;->atc:I

    const-string v2, "deeplinkType"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_f
    iget-object v0, p0, Lcom/kwad/sdk/core/report/z$b;->atd:Ljava/lang/String;

    if-eqz v0, :cond_10

    iget-object v0, p0, Lcom/kwad/sdk/core/report/z$b;->atd:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_10

    iget-object v0, p0, Lcom/kwad/sdk/core/report/z$b;->atd:Ljava/lang/String;

    const-string v2, "deeplinkAppName"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_10
    iget v0, p0, Lcom/kwad/sdk/core/report/z$b;->ate:I

    if-eqz v0, :cond_11

    iget v0, p0, Lcom/kwad/sdk/core/report/z$b;->ate:I

    const-string v2, "deeplinkFailedReason"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_11
    iget v0, p0, Lcom/kwad/sdk/core/report/z$b;->downloadSource:I

    if-eqz v0, :cond_12

    iget v0, p0, Lcom/kwad/sdk/core/report/z$b;->downloadSource:I

    const-string v2, "downloadSource"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_12
    iget v0, p0, Lcom/kwad/sdk/core/report/z$b;->atf:I

    if-eqz v0, :cond_13

    iget v0, p0, Lcom/kwad/sdk/core/report/z$b;->atf:I

    const-string v2, "isPackageChanged"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_13
    iget-object v0, p0, Lcom/kwad/sdk/core/report/z$b;->atg:Ljava/lang/String;

    if-eqz v0, :cond_14

    iget-object v0, p0, Lcom/kwad/sdk/core/report/z$b;->atg:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_14

    iget-object v0, p0, Lcom/kwad/sdk/core/report/z$b;->atg:Ljava/lang/String;

    const-string v2, "installedFrom"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_14
    iget-object v0, p0, Lcom/kwad/sdk/core/report/z$b;->ath:Ljava/lang/String;

    if-eqz v0, :cond_15

    iget-object v0, p0, Lcom/kwad/sdk/core/report/z$b;->ath:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_15

    iget-object v0, p0, Lcom/kwad/sdk/core/report/z$b;->ath:Ljava/lang/String;

    const-string v2, "downloadFailedReason"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_15
    iget v0, p0, Lcom/kwad/sdk/core/report/z$b;->ati:I

    if-eqz v0, :cond_16

    iget v0, p0, Lcom/kwad/sdk/core/report/z$b;->ati:I

    const-string v2, "isChangedEndcard"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_16
    iget v0, p0, Lcom/kwad/sdk/core/report/z$b;->arz:I

    if-eqz v0, :cond_17

    iget v0, p0, Lcom/kwad/sdk/core/report/z$b;->arz:I

    const-string v2, "adAggPageSource"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_17
    iget-object v0, p0, Lcom/kwad/sdk/core/report/z$b;->atj:Ljava/lang/String;

    if-eqz v0, :cond_18

    iget-object v0, p0, Lcom/kwad/sdk/core/report/z$b;->atj:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_18

    iget-object v0, p0, Lcom/kwad/sdk/core/report/z$b;->atj:Ljava/lang/String;

    const-string v2, "serverPackageName"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_18
    iget-object v0, p0, Lcom/kwad/sdk/core/report/z$b;->atk:Ljava/lang/String;

    if-eqz v0, :cond_19

    iget-object v0, p0, Lcom/kwad/sdk/core/report/z$b;->atk:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_19

    iget-object v0, p0, Lcom/kwad/sdk/core/report/z$b;->atk:Ljava/lang/String;

    const-string v2, "installedPackageName"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_19
    iget v0, p0, Lcom/kwad/sdk/core/report/z$b;->atl:I

    if-eqz v0, :cond_1a

    iget v0, p0, Lcom/kwad/sdk/core/report/z$b;->atl:I

    const-string v2, "closeButtonImpressionTime"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_1a
    iget v0, p0, Lcom/kwad/sdk/core/report/z$b;->atm:I

    if-eqz v0, :cond_1b

    iget v0, p0, Lcom/kwad/sdk/core/report/z$b;->atm:I

    const-string v2, "closeButtonClickTime"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_1b
    iget-wide v2, p0, Lcom/kwad/sdk/core/report/z$b;->atn:J

    cmp-long v0, v2, v4

    if-eqz v0, :cond_1c

    iget-wide v2, p0, Lcom/kwad/sdk/core/report/z$b;->atn:J

    const-string v0, "landingPageLoadedDuration"

    invoke-static {p1, v0, v2, v3}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    :cond_1c
    iget-wide v2, p0, Lcom/kwad/sdk/core/report/z$b;->Kh:J

    cmp-long v0, v2, v4

    if-eqz v0, :cond_1d

    iget-wide v2, p0, Lcom/kwad/sdk/core/report/z$b;->Kh:J

    const-string v0, "leaveTime"

    invoke-static {p1, v0, v2, v3}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    :cond_1d
    iget-wide v2, p0, Lcom/kwad/sdk/core/report/z$b;->ato:J

    cmp-long v0, v2, v4

    if-eqz v0, :cond_1e

    iget-wide v2, p0, Lcom/kwad/sdk/core/report/z$b;->ato:J

    const-string v0, "adItemClickBackDuration"

    invoke-static {p1, v0, v2, v3}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    :cond_1e
    iget v0, p0, Lcom/kwad/sdk/core/report/z$b;->atp:I

    if-eqz v0, :cond_1f

    iget v0, p0, Lcom/kwad/sdk/core/report/z$b;->atp:I

    const-string v2, "appStorePageType"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_1f
    iget v0, p0, Lcom/kwad/sdk/core/report/z$b;->atq:I

    if-eqz v0, :cond_20

    iget v0, p0, Lcom/kwad/sdk/core/report/z$b;->atq:I

    const-string v2, "installStatus"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_20
    iget v0, p0, Lcom/kwad/sdk/core/report/z$b;->atr:I

    if-eqz v0, :cond_21

    iget v0, p0, Lcom/kwad/sdk/core/report/z$b;->atr:I

    const-string v2, "downloadStatus"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_21
    iget v0, p0, Lcom/kwad/sdk/core/report/z$b;->ats:I

    if-eqz v0, :cond_22

    iget v0, p0, Lcom/kwad/sdk/core/report/z$b;->ats:I

    const-string v2, "downloadCardType"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_22
    iget-object v0, p0, Lcom/kwad/sdk/core/report/z$b;->att:Lcom/kwad/sdk/core/report/z$a;

    const-string v2, "clientExtData"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->a(Lorg/json/JSONObject;Ljava/lang/String;Lcom/kwad/sdk/core/b;)V

    iget v0, p0, Lcom/kwad/sdk/core/report/z$b;->atu:I

    if-eqz v0, :cond_23

    iget v0, p0, Lcom/kwad/sdk/core/report/z$b;->atu:I

    const-string v2, "landingPageType"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_23
    iget-wide v2, p0, Lcom/kwad/sdk/core/report/z$b;->vy:J

    cmp-long v0, v2, v4

    if-eqz v0, :cond_24

    iget-wide v2, p0, Lcom/kwad/sdk/core/report/z$b;->vy:J

    const-string v0, "playedDuration"

    invoke-static {p1, v0, v2, v3}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    :cond_24
    iget v0, p0, Lcom/kwad/sdk/core/report/z$b;->atv:I

    if-eqz v0, :cond_25

    iget v0, p0, Lcom/kwad/sdk/core/report/z$b;->atv:I

    const-string v2, "playedRate"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_25
    iget v0, p0, Lcom/kwad/sdk/core/report/z$b;->atw:I

    if-eqz v0, :cond_26

    iget v0, p0, Lcom/kwad/sdk/core/report/z$b;->atw:I

    const-string v2, "adOrder"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_26
    iget v0, p0, Lcom/kwad/sdk/core/report/z$b;->atx:I

    if-eqz v0, :cond_27

    iget v0, p0, Lcom/kwad/sdk/core/report/z$b;->atx:I

    const-string v2, "adInterstitialSource"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_27
    iget-wide v2, p0, Lcom/kwad/sdk/core/report/z$b;->jJ:D

    const-wide/16 v4, 0x0

    cmpl-double v0, v2, v4

    if-eqz v0, :cond_28

    iget-wide v2, p0, Lcom/kwad/sdk/core/report/z$b;->jJ:D

    const-string v0, "splashShakeAcceleration"

    invoke-static {p1, v0, v2, v3}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;D)V

    :cond_28
    iget-object v0, p0, Lcom/kwad/sdk/core/report/z$b;->aty:Ljava/lang/String;

    if-eqz v0, :cond_29

    iget-object v0, p0, Lcom/kwad/sdk/core/report/z$b;->aty:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_29

    iget-object v0, p0, Lcom/kwad/sdk/core/report/z$b;->aty:Ljava/lang/String;

    const-string v2, "splashInteractionRotateAngle"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_29
    iget v0, p0, Lcom/kwad/sdk/core/report/z$b;->atz:I

    if-eqz v0, :cond_2a

    iget v0, p0, Lcom/kwad/sdk/core/report/z$b;->atz:I

    const-string v2, "downloadInstallType"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_2a
    iget v0, p0, Lcom/kwad/sdk/core/report/z$b;->atA:I

    if-eqz v0, :cond_2b

    iget v0, p0, Lcom/kwad/sdk/core/report/z$b;->atA:I

    const-string v2, "businessSceneType"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_2b
    iget v0, p0, Lcom/kwad/sdk/core/report/z$b;->adxResult:I

    if-eqz v0, :cond_2c

    iget v0, p0, Lcom/kwad/sdk/core/report/z$b;->adxResult:I

    const-string v2, "adxResult"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_2c
    iget v0, p0, Lcom/kwad/sdk/core/report/z$b;->atB:I

    if-eqz v0, :cond_2d

    iget v0, p0, Lcom/kwad/sdk/core/report/z$b;->atB:I

    const-string v2, "fingerSwipeType"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_2d
    iget v0, p0, Lcom/kwad/sdk/core/report/z$b;->atC:I

    if-eqz v0, :cond_2e

    iget v0, p0, Lcom/kwad/sdk/core/report/z$b;->atC:I

    const-string v2, "fingerSwipeDistance"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_2e
    iget v0, p0, Lcom/kwad/sdk/core/report/z$b;->atD:I

    if-eqz v0, :cond_2f

    iget v0, p0, Lcom/kwad/sdk/core/report/z$b;->atD:I

    const-string v2, "triggerType"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_2f
    iget v0, p0, Lcom/kwad/sdk/core/report/z$b;->atE:I

    if-eqz v0, :cond_30

    iget v0, p0, Lcom/kwad/sdk/core/report/z$b;->atE:I

    const-string v2, "cardCloseType"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_30
    iget-object v0, p0, Lcom/kwad/sdk/core/report/z$b;->atF:Ljava/lang/String;

    if-eqz v0, :cond_31

    iget-object v0, p0, Lcom/kwad/sdk/core/report/z$b;->atF:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_31

    iget-object p0, p0, Lcom/kwad/sdk/core/report/z$b;->atF:Ljava/lang/String;

    const-string v0, "clientPkFailAdInfo"

    invoke-static {p1, v0, p0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_31
    return-object p1
.end method


# virtual methods
.method public final bridge synthetic a(Lcom/kwad/sdk/core/b;Lorg/json/JSONObject;)V
    .locals 0

    check-cast p1, Lcom/kwad/sdk/core/report/z$b;

    invoke-static {p1, p2}, Lcom/kwad/sdk/core/b/a/bl;->a(Lcom/kwad/sdk/core/report/z$b;Lorg/json/JSONObject;)V

    return-void
.end method

.method public final bridge synthetic b(Lcom/kwad/sdk/core/b;Lorg/json/JSONObject;)Lorg/json/JSONObject;
    .locals 0

    check-cast p1, Lcom/kwad/sdk/core/report/z$b;

    invoke-static {p1, p2}, Lcom/kwad/sdk/core/b/a/bl;->b(Lcom/kwad/sdk/core/report/z$b;Lorg/json/JSONObject;)Lorg/json/JSONObject;

    move-result-object p1

    return-object p1
.end method
