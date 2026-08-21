.class public final Lcom/kwad/sdk/core/report/z;
.super Lcom/kwad/sdk/core/network/b;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/sdk/core/report/z$a;,
        Lcom/kwad/sdk/core/report/z$b;
    }
.end annotation


# instance fields
.field asG:I

.field private final asH:Lcom/kwad/sdk/core/report/z$b;

.field private final asI:Lorg/json/JSONObject;

.field private final mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;


# direct methods
.method constructor <init>(Lcom/kwad/sdk/core/response/model/AdTemplate;ILcom/kwad/sdk/core/report/z$b;Lorg/json/JSONObject;)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/sdk/core/network/b;-><init>()V

    iput-object p1, p0, Lcom/kwad/sdk/core/report/z;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iput p2, p0, Lcom/kwad/sdk/core/report/z;->asG:I

    iput-object p3, p0, Lcom/kwad/sdk/core/report/z;->asH:Lcom/kwad/sdk/core/report/z$b;

    iput-object p4, p0, Lcom/kwad/sdk/core/report/z;->asI:Lorg/json/JSONObject;

    return-void
.end method

.method private B(Lorg/json/JSONObject;)V
    .locals 3

    if-nez p1, :cond_0

    new-instance p1, Lorg/json/JSONObject;

    invoke-direct {p1}, Lorg/json/JSONObject;-><init>()V

    :cond_0
    :try_start_0
    const-string v0, "clientTimestamp"

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v1

    invoke-virtual {p1, v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;J)Lorg/json/JSONObject;
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    invoke-static {v0}, Lcom/kwad/sdk/core/e/c;->printStackTrace(Ljava/lang/Throwable;)V

    :goto_0
    invoke-virtual {p1}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p1

    const-string v0, "extData"

    invoke-virtual {p0, v0, p1}, Lcom/kwad/sdk/core/report/z;->putBody(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method private a(Ljava/lang/String;Lcom/kwad/sdk/core/report/z$b;)V
    .locals 2

    if-eqz p2, :cond_a

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_0

    goto/16 :goto_0

    :cond_0
    iget p1, p2, Lcom/kwad/sdk/core/report/z$b;->atw:I

    if-ltz p1, :cond_1

    iget p1, p2, Lcom/kwad/sdk/core/report/z$b;->atw:I

    const-string v0, "adOrder"

    invoke-virtual {p0, v0, p1}, Lcom/kwad/sdk/core/report/z;->putBody(Ljava/lang/String;I)V

    :cond_1
    iget p1, p2, Lcom/kwad/sdk/core/report/z$b;->atx:I

    if-ltz p1, :cond_2

    iget p1, p2, Lcom/kwad/sdk/core/report/z$b;->atx:I

    const-string v0, "adInterstitialSource"

    invoke-virtual {p0, v0, p1}, Lcom/kwad/sdk/core/report/z;->putBody(Ljava/lang/String;I)V

    :cond_2
    iget-object p1, p2, Lcom/kwad/sdk/core/report/z$b;->asW:Ljava/lang/String;

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_3

    iget-object p1, p2, Lcom/kwad/sdk/core/report/z$b;->asW:Ljava/lang/String;

    const-string v0, "adRenderArea"

    invoke-virtual {p0, v0, p1}, Lcom/kwad/sdk/core/report/z;->putBody(Ljava/lang/String;Ljava/lang/String;)V

    :cond_3
    iget p1, p2, Lcom/kwad/sdk/core/report/z$b;->adxResult:I

    const-string v0, "adxResult"

    invoke-virtual {p0, v0, p1}, Lcom/kwad/sdk/core/report/z;->putBody(Ljava/lang/String;I)V

    iget p1, p2, Lcom/kwad/sdk/core/report/z$b;->atB:I

    if-eqz p1, :cond_4

    iget p1, p2, Lcom/kwad/sdk/core/report/z$b;->atB:I

    const-string v0, "fingerSwipeType"

    invoke-virtual {p0, v0, p1}, Lcom/kwad/sdk/core/report/z;->putBody(Ljava/lang/String;I)V

    :cond_4
    iget p1, p2, Lcom/kwad/sdk/core/report/z$b;->atC:I

    if-eqz p1, :cond_5

    iget p1, p2, Lcom/kwad/sdk/core/report/z$b;->atC:I

    const-string v0, "fingerSwipeDistance"

    invoke-virtual {p0, v0, p1}, Lcom/kwad/sdk/core/report/z;->putBody(Ljava/lang/String;I)V

    :cond_5
    iget p1, p2, Lcom/kwad/sdk/core/report/z$b;->atq:I

    const/4 v0, -0x1

    if-eq p1, v0, :cond_6

    iget p1, p2, Lcom/kwad/sdk/core/report/z$b;->atq:I

    const-string v1, "installStatus"

    invoke-virtual {p0, v1, p1}, Lcom/kwad/sdk/core/report/z;->putBody(Ljava/lang/String;I)V

    :cond_6
    iget-object p1, p2, Lcom/kwad/sdk/core/report/z$b;->att:Lcom/kwad/sdk/core/report/z$a;

    if-eqz p1, :cond_7

    iget-object p1, p2, Lcom/kwad/sdk/core/report/z$b;->att:Lcom/kwad/sdk/core/report/z$a;

    invoke-virtual {p1}, Lcom/kwad/sdk/core/report/z$a;->toJson()Lorg/json/JSONObject;

    move-result-object p1

    invoke-virtual {p1}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p1

    const-string v1, "clientExtData"

    invoke-virtual {p0, v1, p1}, Lcom/kwad/sdk/core/report/z;->putBody(Ljava/lang/String;Ljava/lang/String;)V

    :cond_7
    iget-object p1, p2, Lcom/kwad/sdk/core/report/z$b;->atF:Ljava/lang/String;

    if-eqz p1, :cond_8

    iget-object p1, p2, Lcom/kwad/sdk/core/report/z$b;->atF:Ljava/lang/String;

    const-string v1, "clientPkFailAdInfo"

    invoke-virtual {p0, v1, p1}, Lcom/kwad/sdk/core/report/z;->putBody(Ljava/lang/String;Ljava/lang/String;)V

    :cond_8
    iget p1, p2, Lcom/kwad/sdk/core/report/z$b;->atD:I

    if-eq p1, v0, :cond_9

    iget p1, p2, Lcom/kwad/sdk/core/report/z$b;->atD:I

    const-string v0, "triggerType"

    invoke-virtual {p0, v0, p1}, Lcom/kwad/sdk/core/report/z;->putBody(Ljava/lang/String;I)V

    :cond_9
    iget p1, p2, Lcom/kwad/sdk/core/report/z$b;->atb:I

    if-eqz p1, :cond_a

    iget p1, p2, Lcom/kwad/sdk/core/report/z$b;->atb:I

    const-string p2, "photoSizeStyle"

    invoke-virtual {p0, p2, p1}, Lcom/kwad/sdk/core/report/z;->putBody(Ljava/lang/String;I)V

    :cond_a
    :goto_0
    return-void
.end method

.method private a(Ljava/lang/String;Lcom/kwad/sdk/core/response/model/AdTemplate;Lcom/kwad/sdk/core/report/z$b;)V
    .locals 2

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_5

    if-nez p2, :cond_0

    goto :goto_1

    :cond_0
    iget p1, p2, Lcom/kwad/sdk/core/response/model/AdTemplate;->mInitVoiceStatus:I

    if-eqz p1, :cond_1

    iget p1, p2, Lcom/kwad/sdk/core/response/model/AdTemplate;->mInitVoiceStatus:I

    const-string p2, "initVoiceStatus"

    invoke-virtual {p0, p2, p1}, Lcom/kwad/sdk/core/report/z;->putBody(Ljava/lang/String;I)V

    :cond_1
    iget-object p1, p0, Lcom/kwad/sdk/core/report/z;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget-wide p1, p1, Lcom/kwad/sdk/core/response/model/AdTemplate;->mBidEcpm:J

    const-wide/16 v0, 0x0

    cmp-long p1, p1, v0

    const-string p2, "ecpmType"

    if-nez p1, :cond_2

    const/4 p1, 0x2

    goto :goto_0

    :cond_2
    const/4 p1, 0x1

    :goto_0
    invoke-virtual {p0, p2, p1}, Lcom/kwad/sdk/core/report/z;->putBody(Ljava/lang/String;I)V

    if-nez p3, :cond_3

    return-void

    :cond_3
    iget p1, p3, Lcom/kwad/sdk/core/report/z$b;->arz:I

    if-eqz p1, :cond_4

    iget p1, p3, Lcom/kwad/sdk/core/report/z$b;->arz:I

    const-string p2, "adAggPageSource"

    invoke-virtual {p0, p2, p1}, Lcom/kwad/sdk/core/report/z;->putBody(Ljava/lang/String;I)V

    :cond_4
    iget-object p1, p3, Lcom/kwad/sdk/core/report/z$b;->UP:Ljava/lang/String;

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_5

    iget-object p1, p3, Lcom/kwad/sdk/core/report/z$b;->UP:Ljava/lang/String;

    const-string p2, "payload"

    invoke-virtual {p0, p2, p1}, Lcom/kwad/sdk/core/report/z;->putBody(Ljava/lang/String;Ljava/lang/String;)V

    :cond_5
    :goto_1
    return-void
.end method

.method private b(Ljava/lang/String;Lcom/kwad/sdk/core/report/z$b;)V
    .locals 5

    if-eqz p2, :cond_11

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_0

    goto/16 :goto_0

    :cond_0
    iget p1, p2, Lcom/kwad/sdk/core/report/z$b;->jG:I

    if-eqz p1, :cond_1

    iget p1, p2, Lcom/kwad/sdk/core/report/z$b;->jG:I

    const-string v0, "itemClickType"

    invoke-virtual {p0, v0, p1}, Lcom/kwad/sdk/core/report/z;->putBody(Ljava/lang/String;I)V

    :cond_1
    iget-object p1, p2, Lcom/kwad/sdk/core/report/z$b;->UP:Ljava/lang/String;

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_2

    iget-object p1, p2, Lcom/kwad/sdk/core/report/z$b;->UP:Ljava/lang/String;

    const-string v0, "payload"

    invoke-virtual {p0, v0, p1}, Lcom/kwad/sdk/core/report/z;->putBody(Ljava/lang/String;Ljava/lang/String;)V

    :cond_2
    iget p1, p2, Lcom/kwad/sdk/core/report/z$b;->arz:I

    if-eqz p1, :cond_3

    iget p1, p2, Lcom/kwad/sdk/core/report/z$b;->arz:I

    const-string v0, "adAggPageSource"

    invoke-virtual {p0, v0, p1}, Lcom/kwad/sdk/core/report/z;->putBody(Ljava/lang/String;I)V

    :cond_3
    iget p1, p2, Lcom/kwad/sdk/core/report/z$b;->atw:I

    if-ltz p1, :cond_4

    iget p1, p2, Lcom/kwad/sdk/core/report/z$b;->atw:I

    const-string v0, "adOrder"

    invoke-virtual {p0, v0, p1}, Lcom/kwad/sdk/core/report/z;->putBody(Ljava/lang/String;I)V

    :cond_4
    iget p1, p2, Lcom/kwad/sdk/core/report/z$b;->atx:I

    if-ltz p1, :cond_5

    iget p1, p2, Lcom/kwad/sdk/core/report/z$b;->atx:I

    const-string v0, "adInterstitialSource"

    invoke-virtual {p0, v0, p1}, Lcom/kwad/sdk/core/report/z;->putBody(Ljava/lang/String;I)V

    :cond_5
    iget p1, p2, Lcom/kwad/sdk/core/report/z$b;->atD:I

    const/4 v0, -0x1

    if-eq p1, v0, :cond_6

    iget p1, p2, Lcom/kwad/sdk/core/report/z$b;->atD:I

    const-string v1, "triggerType"

    invoke-virtual {p0, v1, p1}, Lcom/kwad/sdk/core/report/z;->putBody(Ljava/lang/String;I)V

    :cond_6
    iget p1, p2, Lcom/kwad/sdk/core/report/z$b;->atE:I

    if-eqz p1, :cond_7

    iget p1, p2, Lcom/kwad/sdk/core/report/z$b;->atE:I

    const-string v1, "cardCloseType"

    invoke-virtual {p0, v1, p1}, Lcom/kwad/sdk/core/report/z;->putBody(Ljava/lang/String;I)V

    :cond_7
    iget p1, p2, Lcom/kwad/sdk/core/report/z$b;->adxResult:I

    const-string v1, "adxResult"

    invoke-virtual {p0, v1, p1}, Lcom/kwad/sdk/core/report/z;->putBody(Ljava/lang/String;I)V

    iget-wide v1, p2, Lcom/kwad/sdk/core/report/z$b;->jJ:D

    const-wide/16 v3, 0x0

    cmpl-double p1, v1, v3

    if-lez p1, :cond_8

    iget-wide v1, p2, Lcom/kwad/sdk/core/report/z$b;->jJ:D

    const-string p1, "splashShakeAcceleration"

    invoke-virtual {p0, p1, v1, v2}, Lcom/kwad/sdk/core/report/z;->putBody(Ljava/lang/String;D)V

    :cond_8
    iget-object p1, p2, Lcom/kwad/sdk/core/report/z$b;->aty:Ljava/lang/String;

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_9

    iget-object p1, p2, Lcom/kwad/sdk/core/report/z$b;->aty:Ljava/lang/String;

    const-string v1, "splashInteractionRotateAngle"

    invoke-virtual {p0, v1, p1}, Lcom/kwad/sdk/core/report/z;->putBody(Ljava/lang/String;Ljava/lang/String;)V

    :cond_9
    iget p1, p2, Lcom/kwad/sdk/core/report/z$b;->atB:I

    if-eqz p1, :cond_a

    iget p1, p2, Lcom/kwad/sdk/core/report/z$b;->atB:I

    const-string v1, "fingerSwipeType"

    invoke-virtual {p0, v1, p1}, Lcom/kwad/sdk/core/report/z;->putBody(Ljava/lang/String;I)V

    :cond_a
    iget p1, p2, Lcom/kwad/sdk/core/report/z$b;->atC:I

    if-eqz p1, :cond_b

    iget p1, p2, Lcom/kwad/sdk/core/report/z$b;->atC:I

    const-string v1, "fingerSwipeDistance"

    invoke-virtual {p0, v1, p1}, Lcom/kwad/sdk/core/report/z;->putBody(Ljava/lang/String;I)V

    :cond_b
    iget-wide v1, p2, Lcom/kwad/sdk/core/report/z$b;->vy:J

    const-wide/16 v3, 0x0

    cmp-long p1, v1, v3

    if-lez p1, :cond_c

    iget-wide v1, p2, Lcom/kwad/sdk/core/report/z$b;->vy:J

    const-string p1, "playedDuration"

    invoke-virtual {p0, p1, v1, v2}, Lcom/kwad/sdk/core/report/z;->putBody(Ljava/lang/String;J)V

    :cond_c
    iget p1, p2, Lcom/kwad/sdk/core/report/z$b;->atv:I

    if-lez p1, :cond_d

    iget p1, p2, Lcom/kwad/sdk/core/report/z$b;->atv:I

    const-string v1, "playedRate"

    invoke-virtual {p0, v1, p1}, Lcom/kwad/sdk/core/report/z;->putBody(Ljava/lang/String;I)V

    :cond_d
    iget-object p1, p2, Lcom/kwad/sdk/core/report/z$b;->atF:Ljava/lang/String;

    if-eqz p1, :cond_e

    iget-object p1, p2, Lcom/kwad/sdk/core/report/z$b;->atF:Ljava/lang/String;

    const-string v1, "clientPkFailAdInfo"

    invoke-virtual {p0, v1, p1}, Lcom/kwad/sdk/core/report/z;->putBody(Ljava/lang/String;Ljava/lang/String;)V

    :cond_e
    iget p1, p2, Lcom/kwad/sdk/core/report/z$b;->ata:I

    if-eq p1, v0, :cond_f

    iget p1, p2, Lcom/kwad/sdk/core/report/z$b;->ata:I

    const-string v0, "retainCodeType"

    invoke-virtual {p0, v0, p1}, Lcom/kwad/sdk/core/report/z;->putBody(Ljava/lang/String;I)V

    :cond_f
    iget-object p1, p2, Lcom/kwad/sdk/core/report/z$b;->att:Lcom/kwad/sdk/core/report/z$a;

    if-eqz p1, :cond_10

    iget-object p1, p2, Lcom/kwad/sdk/core/report/z$b;->att:Lcom/kwad/sdk/core/report/z$a;

    invoke-virtual {p1}, Lcom/kwad/sdk/core/report/z$a;->toJson()Lorg/json/JSONObject;

    move-result-object p1

    invoke-virtual {p1}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p1

    const-string v0, "clientExtData"

    invoke-virtual {p0, v0, p1}, Lcom/kwad/sdk/core/report/z;->putBody(Ljava/lang/String;Ljava/lang/String;)V

    :cond_10
    iget p1, p2, Lcom/kwad/sdk/core/report/z$b;->atb:I

    if-eqz p1, :cond_11

    iget p1, p2, Lcom/kwad/sdk/core/report/z$b;->atb:I

    const-string p2, "photoSizeStyle"

    invoke-virtual {p0, p2, p1}, Lcom/kwad/sdk/core/report/z;->putBody(Ljava/lang/String;I)V

    :cond_11
    :goto_0
    return-void
.end method

.method private c(Ljava/lang/String;Lcom/kwad/sdk/core/report/z$b;)V
    .locals 8

    if-eqz p2, :cond_26

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_0

    goto/16 :goto_0

    :cond_0
    iget p1, p2, Lcom/kwad/sdk/core/report/z$b;->asU:I

    if-eqz p1, :cond_1

    iget p1, p2, Lcom/kwad/sdk/core/report/z$b;->asU:I

    const-string v0, "itemCloseType"

    invoke-virtual {p0, v0, p1}, Lcom/kwad/sdk/core/report/z;->putBody(Ljava/lang/String;I)V

    :cond_1
    iget p1, p2, Lcom/kwad/sdk/core/report/z$b;->asS:I

    if-lez p1, :cond_2

    iget p1, p2, Lcom/kwad/sdk/core/report/z$b;->asS:I

    const-string v0, "photoPlaySecond"

    invoke-virtual {p0, v0, p1}, Lcom/kwad/sdk/core/report/z;->putBody(Ljava/lang/String;I)V

    :cond_2
    iget p1, p2, Lcom/kwad/sdk/core/report/z$b;->asT:I

    if-eqz p1, :cond_3

    iget p1, p2, Lcom/kwad/sdk/core/report/z$b;->asT:I

    const-string v0, "awardReceiveStage"

    invoke-virtual {p0, v0, p1}, Lcom/kwad/sdk/core/report/z;->putBody(Ljava/lang/String;I)V

    :cond_3
    iget p1, p2, Lcom/kwad/sdk/core/report/z$b;->asV:I

    if-eqz p1, :cond_4

    iget p1, p2, Lcom/kwad/sdk/core/report/z$b;->asV:I

    const-string v0, "elementType"

    invoke-virtual {p0, v0, p1}, Lcom/kwad/sdk/core/report/z;->putBody(Ljava/lang/String;I)V

    :cond_4
    iget-object p1, p2, Lcom/kwad/sdk/core/report/z$b;->UP:Ljava/lang/String;

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_5

    iget-object p1, p2, Lcom/kwad/sdk/core/report/z$b;->UP:Ljava/lang/String;

    const-string v0, "payload"

    invoke-virtual {p0, v0, p1}, Lcom/kwad/sdk/core/report/z;->putBody(Ljava/lang/String;Ljava/lang/String;)V

    :cond_5
    iget-object p1, p2, Lcom/kwad/sdk/core/report/z$b;->att:Lcom/kwad/sdk/core/report/z$a;

    if-eqz p1, :cond_6

    iget-object p1, p2, Lcom/kwad/sdk/core/report/z$b;->att:Lcom/kwad/sdk/core/report/z$a;

    invoke-virtual {p1}, Lcom/kwad/sdk/core/report/z$a;->toJson()Lorg/json/JSONObject;

    move-result-object p1

    invoke-virtual {p1}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p1

    const-string v0, "clientExtData"

    invoke-virtual {p0, v0, p1}, Lcom/kwad/sdk/core/report/z;->putBody(Ljava/lang/String;Ljava/lang/String;)V

    :cond_6
    iget p1, p2, Lcom/kwad/sdk/core/report/z$b;->atc:I

    if-lez p1, :cond_7

    iget p1, p2, Lcom/kwad/sdk/core/report/z$b;->atc:I

    const-string v0, "deeplinkType"

    invoke-virtual {p0, v0, p1}, Lcom/kwad/sdk/core/report/z;->putBody(Ljava/lang/String;I)V

    :cond_7
    iget-object p1, p2, Lcom/kwad/sdk/core/report/z$b;->atd:Ljava/lang/String;

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_8

    iget-object p1, p2, Lcom/kwad/sdk/core/report/z$b;->atd:Ljava/lang/String;

    const-string v0, "deeplinkAppName"

    invoke-virtual {p0, v0, p1}, Lcom/kwad/sdk/core/report/z;->putBody(Ljava/lang/String;Ljava/lang/String;)V

    :cond_8
    iget p1, p2, Lcom/kwad/sdk/core/report/z$b;->ate:I

    if-eqz p1, :cond_9

    iget p1, p2, Lcom/kwad/sdk/core/report/z$b;->ate:I

    const-string v0, "deeplinkFailedReason"

    invoke-virtual {p0, v0, p1}, Lcom/kwad/sdk/core/report/z;->putBody(Ljava/lang/String;I)V

    :cond_9
    iget p1, p2, Lcom/kwad/sdk/core/report/z$b;->downloadSource:I

    if-lez p1, :cond_a

    iget p1, p2, Lcom/kwad/sdk/core/report/z$b;->downloadSource:I

    const-string v0, "downloadSource"

    invoke-virtual {p0, v0, p1}, Lcom/kwad/sdk/core/report/z;->putBody(Ljava/lang/String;I)V

    :cond_a
    iget p1, p2, Lcom/kwad/sdk/core/report/z$b;->atE:I

    if-eqz p1, :cond_b

    iget p1, p2, Lcom/kwad/sdk/core/report/z$b;->atE:I

    const-string v0, "cardCloseType"

    invoke-virtual {p0, v0, p1}, Lcom/kwad/sdk/core/report/z;->putBody(Ljava/lang/String;I)V

    :cond_b
    iget p1, p2, Lcom/kwad/sdk/core/report/z$b;->atf:I

    if-lez p1, :cond_c

    iget p1, p2, Lcom/kwad/sdk/core/report/z$b;->atf:I

    const-string v0, "isPackageChanged"

    invoke-virtual {p0, v0, p1}, Lcom/kwad/sdk/core/report/z;->putBody(Ljava/lang/String;I)V

    :cond_c
    iget-object p1, p2, Lcom/kwad/sdk/core/report/z$b;->atg:Ljava/lang/String;

    const-string v0, "installedFrom"

    invoke-virtual {p0, v0, p1}, Lcom/kwad/sdk/core/report/z;->putBody(Ljava/lang/String;Ljava/lang/String;)V

    iget p1, p2, Lcom/kwad/sdk/core/report/z$b;->ati:I

    const-string v0, "isChangedEndcard"

    invoke-virtual {p0, v0, p1}, Lcom/kwad/sdk/core/report/z;->putBody(Ljava/lang/String;I)V

    iget p1, p2, Lcom/kwad/sdk/core/report/z$b;->arz:I

    if-eqz p1, :cond_d

    iget p1, p2, Lcom/kwad/sdk/core/report/z$b;->arz:I

    const-string v0, "adAggPageSource"

    invoke-virtual {p0, v0, p1}, Lcom/kwad/sdk/core/report/z;->putBody(Ljava/lang/String;I)V

    :cond_d
    iget-object p1, p2, Lcom/kwad/sdk/core/report/z$b;->ath:Ljava/lang/String;

    if-eqz p1, :cond_e

    iget-object p1, p2, Lcom/kwad/sdk/core/report/z$b;->ath:Ljava/lang/String;

    const-string v0, "downloadFailedReason"

    invoke-virtual {p0, v0, p1}, Lcom/kwad/sdk/core/report/z;->putBody(Ljava/lang/String;Ljava/lang/String;)V

    :cond_e
    iget-object p1, p2, Lcom/kwad/sdk/core/report/z$b;->atk:Ljava/lang/String;

    invoke-static {p1}, Lcom/kwad/sdk/utils/bc;->isNullString(Ljava/lang/String;)Z

    move-result p1

    if-nez p1, :cond_f

    iget-object p1, p2, Lcom/kwad/sdk/core/report/z$b;->atk:Ljava/lang/String;

    const-string v0, "installedPackageName"

    invoke-virtual {p0, v0, p1}, Lcom/kwad/sdk/core/report/z;->putBody(Ljava/lang/String;Ljava/lang/String;)V

    :cond_f
    iget-object p1, p2, Lcom/kwad/sdk/core/report/z$b;->atj:Ljava/lang/String;

    invoke-static {p1}, Lcom/kwad/sdk/utils/bc;->isNullString(Ljava/lang/String;)Z

    move-result p1

    if-nez p1, :cond_10

    iget-object p1, p2, Lcom/kwad/sdk/core/report/z$b;->atj:Ljava/lang/String;

    const-string v0, "serverPackageName"

    invoke-virtual {p0, v0, p1}, Lcom/kwad/sdk/core/report/z;->putBody(Ljava/lang/String;Ljava/lang/String;)V

    :cond_10
    iget p1, p2, Lcom/kwad/sdk/core/report/z$b;->atm:I

    if-lez p1, :cond_11

    iget p1, p2, Lcom/kwad/sdk/core/report/z$b;->atm:I

    const-string v0, "closeButtonClickTime"

    invoke-virtual {p0, v0, p1}, Lcom/kwad/sdk/core/report/z;->putBody(Ljava/lang/String;I)V

    :cond_11
    iget p1, p2, Lcom/kwad/sdk/core/report/z$b;->atl:I

    if-lez p1, :cond_12

    iget p1, p2, Lcom/kwad/sdk/core/report/z$b;->atl:I

    const-string v0, "closeButtonImpressionTime"

    invoke-virtual {p0, v0, p1}, Lcom/kwad/sdk/core/report/z;->putBody(Ljava/lang/String;I)V

    :cond_12
    iget p1, p2, Lcom/kwad/sdk/core/report/z$b;->atr:I

    if-ltz p1, :cond_13

    iget p1, p2, Lcom/kwad/sdk/core/report/z$b;->atr:I

    const-string v0, "downloadStatus"

    invoke-virtual {p0, v0, p1}, Lcom/kwad/sdk/core/report/z;->putBody(Ljava/lang/String;I)V

    :cond_13
    iget-wide v0, p2, Lcom/kwad/sdk/core/report/z$b;->atn:J

    const-wide/16 v2, 0x0

    cmp-long p1, v0, v2

    if-lez p1, :cond_14

    iget-wide v0, p2, Lcom/kwad/sdk/core/report/z$b;->atn:J

    const-string p1, "landingPageLoadedDuration"

    invoke-virtual {p0, p1, v0, v1}, Lcom/kwad/sdk/core/report/z;->putBody(Ljava/lang/String;J)V

    :cond_14
    iget-wide v0, p2, Lcom/kwad/sdk/core/report/z$b;->Kh:J

    cmp-long p1, v0, v2

    if-lez p1, :cond_15

    iget-wide v0, p2, Lcom/kwad/sdk/core/report/z$b;->Kh:J

    const-string p1, "leaveTime"

    invoke-virtual {p0, p1, v0, v1}, Lcom/kwad/sdk/core/report/z;->putBody(Ljava/lang/String;J)V

    :cond_15
    iget-wide v0, p2, Lcom/kwad/sdk/core/report/z$b;->ato:J

    cmp-long p1, v0, v2

    if-lez p1, :cond_16

    iget-wide v0, p2, Lcom/kwad/sdk/core/report/z$b;->ato:J

    const-string p1, "adItemClickBackDuration"

    invoke-virtual {p0, p1, v0, v1}, Lcom/kwad/sdk/core/report/z;->putBody(Ljava/lang/String;J)V

    :cond_16
    iget p1, p2, Lcom/kwad/sdk/core/report/z$b;->ata:I

    const/4 v0, -0x1

    if-eq p1, v0, :cond_17

    iget p1, p2, Lcom/kwad/sdk/core/report/z$b;->ata:I

    const-string v1, "retainCodeType"

    invoke-virtual {p0, v1, p1}, Lcom/kwad/sdk/core/report/z;->putBody(Ljava/lang/String;I)V

    :cond_17
    iget-wide v4, p2, Lcom/kwad/sdk/core/report/z$b;->asX:J

    const-wide/16 v6, -0x1

    cmp-long p1, v4, v6

    if-lez p1, :cond_18

    iget-wide v4, p2, Lcom/kwad/sdk/core/report/z$b;->asX:J

    const-string p1, "highestLossPrice"

    invoke-virtual {p0, p1, v4, v5}, Lcom/kwad/sdk/core/report/z;->putBody(Ljava/lang/String;J)V

    :cond_18
    iget p1, p2, Lcom/kwad/sdk/core/report/z$b;->asY:I

    if-ltz p1, :cond_19

    iget p1, p2, Lcom/kwad/sdk/core/report/z$b;->asY:I

    const-string v1, "impFailReason"

    invoke-virtual {p0, v1, p1}, Lcom/kwad/sdk/core/report/z;->putBody(Ljava/lang/String;I)V

    :cond_19
    iget-wide v4, p2, Lcom/kwad/sdk/core/report/z$b;->asZ:J

    cmp-long p1, v4, v6

    if-lez p1, :cond_1a

    iget-wide v4, p2, Lcom/kwad/sdk/core/report/z$b;->asZ:J

    const-string p1, "winEcpm"

    invoke-virtual {p0, p1, v4, v5}, Lcom/kwad/sdk/core/report/z;->putBody(Ljava/lang/String;J)V

    :cond_1a
    iget p1, p2, Lcom/kwad/sdk/core/report/z$b;->adnType:I

    if-lez p1, :cond_1b

    iget p1, p2, Lcom/kwad/sdk/core/report/z$b;->adnType:I

    const-string v1, "adnType"

    invoke-virtual {p0, v1, p1}, Lcom/kwad/sdk/core/report/z;->putBody(Ljava/lang/String;I)V

    :cond_1b
    iget-object p1, p2, Lcom/kwad/sdk/core/report/z$b;->adnName:Ljava/lang/String;

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_1c

    iget-object p1, p2, Lcom/kwad/sdk/core/report/z$b;->adnName:Ljava/lang/String;

    const-string v1, "adnName"

    invoke-virtual {p0, v1, p1}, Lcom/kwad/sdk/core/report/z;->putBody(Ljava/lang/String;Ljava/lang/String;)V

    :cond_1c
    iget p1, p2, Lcom/kwad/sdk/core/report/z$b;->ats:I

    const-string v1, "downloadCardType"

    invoke-virtual {p0, v1, p1}, Lcom/kwad/sdk/core/report/z;->putBody(Ljava/lang/String;I)V

    iget p1, p2, Lcom/kwad/sdk/core/report/z$b;->atu:I

    const-string v1, "landingPageType"

    invoke-virtual {p0, v1, p1}, Lcom/kwad/sdk/core/report/z;->putBody(Ljava/lang/String;I)V

    iget p1, p2, Lcom/kwad/sdk/core/report/z$b;->atx:I

    if-ltz p1, :cond_1d

    iget p1, p2, Lcom/kwad/sdk/core/report/z$b;->atx:I

    const-string v1, "adInterstitialSource"

    invoke-virtual {p0, v1, p1}, Lcom/kwad/sdk/core/report/z;->putBody(Ljava/lang/String;I)V

    :cond_1d
    iget p1, p2, Lcom/kwad/sdk/core/report/z$b;->atz:I

    if-lez p1, :cond_1e

    iget p1, p2, Lcom/kwad/sdk/core/report/z$b;->atz:I

    const-string v1, "downloadInstallType"

    invoke-virtual {p0, v1, p1}, Lcom/kwad/sdk/core/report/z;->putBody(Ljava/lang/String;I)V

    :cond_1e
    iget p1, p2, Lcom/kwad/sdk/core/report/z$b;->atB:I

    if-eqz p1, :cond_1f

    iget p1, p2, Lcom/kwad/sdk/core/report/z$b;->atB:I

    const-string v1, "fingerSwipeType"

    invoke-virtual {p0, v1, p1}, Lcom/kwad/sdk/core/report/z;->putBody(Ljava/lang/String;I)V

    :cond_1f
    iget p1, p2, Lcom/kwad/sdk/core/report/z$b;->atC:I

    if-eqz p1, :cond_20

    iget p1, p2, Lcom/kwad/sdk/core/report/z$b;->atC:I

    const-string v1, "fingerSwipeDistance"

    invoke-virtual {p0, v1, p1}, Lcom/kwad/sdk/core/report/z;->putBody(Ljava/lang/String;I)V

    :cond_20
    iget p1, p2, Lcom/kwad/sdk/core/report/z$b;->atA:I

    if-lez p1, :cond_21

    iget p1, p2, Lcom/kwad/sdk/core/report/z$b;->atA:I

    const-string v1, "businessSceneType"

    invoke-virtual {p0, v1, p1}, Lcom/kwad/sdk/core/report/z;->putBody(Ljava/lang/String;I)V

    :cond_21
    iget-wide v4, p2, Lcom/kwad/sdk/core/report/z$b;->vy:J

    cmp-long p1, v4, v2

    if-lez p1, :cond_22

    iget-wide v1, p2, Lcom/kwad/sdk/core/report/z$b;->vy:J

    const-string p1, "playedDuration"

    invoke-virtual {p0, p1, v1, v2}, Lcom/kwad/sdk/core/report/z;->putBody(Ljava/lang/String;J)V

    :cond_22
    iget p1, p2, Lcom/kwad/sdk/core/report/z$b;->atv:I

    if-lez p1, :cond_23

    iget p1, p2, Lcom/kwad/sdk/core/report/z$b;->atv:I

    const-string v1, "playedRate"

    invoke-virtual {p0, v1, p1}, Lcom/kwad/sdk/core/report/z;->putBody(Ljava/lang/String;I)V

    :cond_23
    iget p1, p2, Lcom/kwad/sdk/core/report/z$b;->atp:I

    if-eq p1, v0, :cond_24

    iget p1, p2, Lcom/kwad/sdk/core/report/z$b;->atp:I

    const-string v1, "appStorePageType"

    invoke-virtual {p0, v1, p1}, Lcom/kwad/sdk/core/report/z;->putBody(Ljava/lang/String;I)V

    :cond_24
    iget p1, p2, Lcom/kwad/sdk/core/report/z$b;->atD:I

    if-eq p1, v0, :cond_25

    iget p1, p2, Lcom/kwad/sdk/core/report/z$b;->atD:I

    const-string v0, "triggerType"

    invoke-virtual {p0, v0, p1}, Lcom/kwad/sdk/core/report/z;->putBody(Ljava/lang/String;I)V

    :cond_25
    iget p1, p2, Lcom/kwad/sdk/core/report/z$b;->atb:I

    if-eqz p1, :cond_26

    iget p1, p2, Lcom/kwad/sdk/core/report/z$b;->atb:I

    const-string p2, "photoSizeStyle"

    invoke-virtual {p0, p2, p1}, Lcom/kwad/sdk/core/report/z;->putBody(Ljava/lang/String;I)V

    :cond_26
    :goto_0
    return-void
.end method


# virtual methods
.method final Cp()Ljava/util/List;
    .locals 7
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iget-object v1, p0, Lcom/kwad/sdk/core/report/z;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v1}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v1

    iget-object v2, v1, Lcom/kwad/sdk/core/response/model/AdInfo;->adTrackInfoList:Ljava/util/List;

    invoke-interface {v2}, Ljava/util/List;->isEmpty()Z

    move-result v2

    if-nez v2, :cond_3

    iget-object v2, v1, Lcom/kwad/sdk/core/response/model/AdInfo;->adTrackInfoList:Ljava/util/List;

    invoke-interface {v2}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v2

    :cond_0
    invoke-interface {v2}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    const/4 v4, 0x0

    if-eqz v3, :cond_1

    invoke-interface {v2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/kwad/sdk/core/response/model/AdInfo$AdTrackInfo;

    iget v5, v3, Lcom/kwad/sdk/core/response/model/AdInfo$AdTrackInfo;->type:I

    iget v6, p0, Lcom/kwad/sdk/core/report/z;->asG:I

    if-ne v5, v6, :cond_0

    iget-object v5, v3, Lcom/kwad/sdk/core/response/model/AdInfo$AdTrackInfo;->urls:Ljava/util/List;

    if-eqz v5, :cond_0

    goto :goto_0

    :cond_1
    move-object v3, v4

    :goto_0
    if-eqz v3, :cond_3

    iget v2, v3, Lcom/kwad/sdk/core/response/model/AdInfo$AdTrackInfo;->type:I

    const/4 v5, 0x2

    if-ne v2, v5, :cond_2

    iget-object v2, p0, Lcom/kwad/sdk/core/report/z;->asH:Lcom/kwad/sdk/core/report/z$b;

    if-eqz v2, :cond_2

    iget-object v4, v2, Lcom/kwad/sdk/core/report/z$b;->jI:Lcom/kwad/sdk/utils/ac$a;

    :cond_2
    iget-object v2, v3, Lcom/kwad/sdk/core/response/model/AdInfo$AdTrackInfo;->urls:Ljava/util/List;

    invoke-interface {v2}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v2

    :goto_1
    invoke-interface {v2}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-eqz v3, :cond_3

    invoke-interface {v2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/String;

    const-class v5, Lcom/kwad/sdk/service/a/e;

    invoke-static {v5}, Lcom/kwad/sdk/service/ServiceProvider;->get(Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Lcom/kwad/sdk/service/a/e;

    invoke-interface {v5}, Lcom/kwad/sdk/service/a/e;->getContext()Landroid/content/Context;

    move-result-object v5

    invoke-static {v1}, Lcom/kwad/sdk/core/response/b/a;->at(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v6

    invoke-static {v5, v3, v4, v6}, Lcom/kwad/sdk/utils/ab;->a(Landroid/content/Context;Ljava/lang/String;Lcom/kwad/sdk/utils/ac$a;Z)Ljava/lang/String;

    move-result-object v3

    invoke-interface {v0, v3}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_1

    :cond_3
    return-object v0
.end method

.method public final buildBaseBody()V
    .locals 0

    return-void
.end method

.method public final buildBaseHeader()V
    .locals 0

    return-void
.end method

.method public final getActionType()I
    .locals 1

    iget v0, p0, Lcom/kwad/sdk/core/report/z;->asG:I

    return v0
.end method

.method public final getAdTemplate()Lcom/kwad/sdk/core/response/model/AdTemplate;
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/core/report/z;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    return-object v0
.end method

.method public final getBody()Lorg/json/JSONObject;
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/core/report/z;->mBodyParams:Lorg/json/JSONObject;

    return-object v0
.end method

.method public final getUrl()Ljava/lang/String;
    .locals 9

    iget-object v0, p0, Lcom/kwad/sdk/core/report/z;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    iget v1, p0, Lcom/kwad/sdk/core/report/z;->asG:I

    const-string v2, "__BEHAVIOR__"

    const-string v3, "__TYPE__"

    const-string v4, "__PR__"

    const/4 v5, 0x1

    if-ne v1, v5, :cond_1

    iget-object v0, v0, Lcom/kwad/sdk/core/response/model/AdInfo;->adBaseInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;

    iget-object v0, v0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->showUrl:Ljava/lang/String;

    iget-object v1, p0, Lcom/kwad/sdk/core/report/z;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget-wide v5, v1, Lcom/kwad/sdk/core/response/model/AdTemplate;->mBidEcpm:J

    const-wide/16 v7, 0x0

    cmp-long v1, v5, v7

    if-nez v1, :cond_0

    const-class v1, Lcom/kwad/sdk/service/a/f;

    invoke-static {v1}, Lcom/kwad/sdk/service/ServiceProvider;->get(Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/kwad/sdk/service/a/f;

    invoke-interface {v1}, Lcom/kwad/sdk/service/a/f;->xC()Z

    move-result v1

    if-eqz v1, :cond_0

    iget-object v1, p0, Lcom/kwad/sdk/core/report/z;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v1}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v1

    invoke-static {v1}, Lcom/kwad/sdk/core/response/b/a;->aJ(Lcom/kwad/sdk/core/response/model/AdInfo;)I

    move-result v1

    invoke-static {v1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v1

    goto :goto_0

    :cond_0
    iget-object v1, p0, Lcom/kwad/sdk/core/report/z;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget-wide v5, v1, Lcom/kwad/sdk/core/response/model/AdTemplate;->mBidEcpm:J

    invoke-static {v5, v6}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object v1

    :goto_0
    invoke-virtual {v0, v4, v1}, Ljava/lang/String;->replaceFirst(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/sdk/core/report/z;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget-object v1, v1, Lcom/kwad/sdk/core/response/model/AdTemplate;->mVideoPlayerStatus:Lcom/kwad/sdk/core/response/model/VideoPlayerStatus;

    iget v1, v1, Lcom/kwad/sdk/core/response/model/VideoPlayerStatus;->mVideoPlayerType:I

    invoke-static {v1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v3, v1}, Ljava/lang/String;->replaceFirst(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/sdk/core/report/z;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget-object v1, v1, Lcom/kwad/sdk/core/response/model/AdTemplate;->mVideoPlayerStatus:Lcom/kwad/sdk/core/response/model/VideoPlayerStatus;

    iget v1, v1, Lcom/kwad/sdk/core/response/model/VideoPlayerStatus;->mVideoPlayerBehavior:I

    invoke-static {v1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v2, v1}, Ljava/lang/String;->replaceFirst(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/sdk/core/report/z;->asH:Lcom/kwad/sdk/core/report/z$b;

    invoke-direct {p0, v0, v1}, Lcom/kwad/sdk/core/report/z;->a(Ljava/lang/String;Lcom/kwad/sdk/core/report/z$b;)V

    goto :goto_1

    :cond_1
    const/4 v5, 0x2

    iget-object v0, v0, Lcom/kwad/sdk/core/response/model/AdInfo;->adBaseInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;

    if-ne v1, v5, :cond_3

    iget-object v0, v0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->clickUrl:Ljava/lang/String;

    iget-object v1, p0, Lcom/kwad/sdk/core/report/z;->asH:Lcom/kwad/sdk/core/report/z$b;

    if-eqz v1, :cond_2

    const-class v1, Lcom/kwad/sdk/service/a/e;

    invoke-static {v1}, Lcom/kwad/sdk/service/ServiceProvider;->get(Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/kwad/sdk/service/a/e;

    invoke-interface {v1}, Lcom/kwad/sdk/service/a/e;->getContext()Landroid/content/Context;

    iget-object v1, p0, Lcom/kwad/sdk/core/report/z;->asH:Lcom/kwad/sdk/core/report/z$b;

    iget-object v1, v1, Lcom/kwad/sdk/core/report/z$b;->jI:Lcom/kwad/sdk/utils/ac$a;

    invoke-static {v0, v1}, Lcom/kwad/sdk/utils/ac;->a(Ljava/lang/String;Lcom/kwad/sdk/utils/ac$a;)Ljava/lang/String;

    move-result-object v0

    :cond_2
    const-class v1, Lcom/kwad/sdk/service/a/e;

    invoke-static {v1}, Lcom/kwad/sdk/service/ServiceProvider;->get(Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/kwad/sdk/service/a/e;

    invoke-interface {v1}, Lcom/kwad/sdk/service/a/e;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1, v0}, Lcom/kwad/sdk/utils/ac;->aj(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/sdk/core/report/z;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget-wide v5, v1, Lcom/kwad/sdk/core/response/model/AdTemplate;->mBidEcpm:J

    invoke-static {v5, v6}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v4, v1}, Ljava/lang/String;->replaceFirst(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/sdk/core/report/z;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget-object v1, v1, Lcom/kwad/sdk/core/response/model/AdTemplate;->mVideoPlayerStatus:Lcom/kwad/sdk/core/response/model/VideoPlayerStatus;

    iget v1, v1, Lcom/kwad/sdk/core/response/model/VideoPlayerStatus;->mVideoPlayerType:I

    invoke-static {v1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v3, v1}, Ljava/lang/String;->replaceFirst(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/sdk/core/report/z;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget-object v1, v1, Lcom/kwad/sdk/core/response/model/AdTemplate;->mVideoPlayerStatus:Lcom/kwad/sdk/core/response/model/VideoPlayerStatus;

    iget v1, v1, Lcom/kwad/sdk/core/response/model/VideoPlayerStatus;->mVideoPlayerBehavior:I

    invoke-static {v1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v2, v1}, Ljava/lang/String;->replaceFirst(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/sdk/core/report/z;->asH:Lcom/kwad/sdk/core/report/z$b;

    invoke-direct {p0, v0, v1}, Lcom/kwad/sdk/core/report/z;->b(Ljava/lang/String;Lcom/kwad/sdk/core/report/z$b;)V

    :goto_1
    iget-object v1, p0, Lcom/kwad/sdk/core/report/z;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget-object v2, p0, Lcom/kwad/sdk/core/report/z;->asH:Lcom/kwad/sdk/core/report/z$b;

    invoke-direct {p0, v0, v1, v2}, Lcom/kwad/sdk/core/report/z;->a(Ljava/lang/String;Lcom/kwad/sdk/core/response/model/AdTemplate;Lcom/kwad/sdk/core/report/z$b;)V

    goto :goto_2

    :cond_3
    iget-object v0, v0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->convUrl:Ljava/lang/String;

    iget v1, p0, Lcom/kwad/sdk/core/report/z;->asG:I

    invoke-static {v1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v1

    const-string v5, "__ACTION__"

    invoke-virtual {v0, v5, v1}, Ljava/lang/String;->replaceFirst(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/sdk/core/report/z;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget-wide v5, v1, Lcom/kwad/sdk/core/response/model/AdTemplate;->mBidEcpm:J

    invoke-static {v5, v6}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v4, v1}, Ljava/lang/String;->replaceFirst(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/sdk/core/report/z;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget-object v1, v1, Lcom/kwad/sdk/core/response/model/AdTemplate;->mVideoPlayerStatus:Lcom/kwad/sdk/core/response/model/VideoPlayerStatus;

    iget v1, v1, Lcom/kwad/sdk/core/response/model/VideoPlayerStatus;->mVideoPlayerType:I

    invoke-static {v1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v3, v1}, Ljava/lang/String;->replaceFirst(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/sdk/core/report/z;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget-object v1, v1, Lcom/kwad/sdk/core/response/model/AdTemplate;->mVideoPlayerStatus:Lcom/kwad/sdk/core/response/model/VideoPlayerStatus;

    iget v1, v1, Lcom/kwad/sdk/core/response/model/VideoPlayerStatus;->mVideoPlayerBehavior:I

    invoke-static {v1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v2, v1}, Ljava/lang/String;->replaceFirst(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/sdk/core/report/z;->asH:Lcom/kwad/sdk/core/report/z$b;

    invoke-direct {p0, v0, v1}, Lcom/kwad/sdk/core/report/z;->c(Ljava/lang/String;Lcom/kwad/sdk/core/report/z$b;)V

    :goto_2
    iget-object v1, p0, Lcom/kwad/sdk/core/report/z;->asI:Lorg/json/JSONObject;

    invoke-direct {p0, v1}, Lcom/kwad/sdk/core/report/z;->B(Lorg/json/JSONObject;)V

    return-object v0
.end method
