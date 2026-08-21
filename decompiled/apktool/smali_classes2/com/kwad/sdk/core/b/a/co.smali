.class public final Lcom/kwad/sdk/core/b/a/co;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/core/d;


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Object;",
        "Lcom/kwad/sdk/core/d<",
        "Lcom/kwad/sdk/core/response/model/AdInfo$DownloadSafeInfo;",
        ">;"
    }
.end annotation


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private static a(Lcom/kwad/sdk/core/response/model/AdInfo$DownloadSafeInfo;Lorg/json/JSONObject;)V
    .locals 4

    if-nez p1, :cond_0

    return-void

    :cond_0
    const-string v0, "permissionInfo"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$DownloadSafeInfo;->permissionInfo:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$DownloadSafeInfo;->permissionInfo:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    const-string v2, ""

    if-ne v0, v1, :cond_1

    iput-object v2, p0, Lcom/kwad/sdk/core/response/model/AdInfo$DownloadSafeInfo;->permissionInfo:Ljava/lang/String;

    :cond_1
    const-string v0, "appName"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$DownloadSafeInfo;->appName:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$DownloadSafeInfo;->appName:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_2

    iput-object v2, p0, Lcom/kwad/sdk/core/response/model/AdInfo$DownloadSafeInfo;->appName:Ljava/lang/String;

    :cond_2
    const-string v0, "corporationName"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$DownloadSafeInfo;->corporationName:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$DownloadSafeInfo;->corporationName:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_3

    iput-object v2, p0, Lcom/kwad/sdk/core/response/model/AdInfo$DownloadSafeInfo;->corporationName:Ljava/lang/String;

    :cond_3
    const-string v0, "packageSize"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$DownloadSafeInfo;->packageSize:J

    const-string v0, "appVersion"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$DownloadSafeInfo;->appVersion:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$DownloadSafeInfo;->appVersion:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_4

    iput-object v2, p0, Lcom/kwad/sdk/core/response/model/AdInfo$DownloadSafeInfo;->appVersion:Ljava/lang/String;

    :cond_4
    const-string v0, "appPrivacyUrl"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$DownloadSafeInfo;->appPrivacyUrl:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$DownloadSafeInfo;->appPrivacyUrl:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_5

    iput-object v2, p0, Lcom/kwad/sdk/core/response/model/AdInfo$DownloadSafeInfo;->appPrivacyUrl:Ljava/lang/String;

    :cond_5
    const-string v0, "appPermissionInfoUrl"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$DownloadSafeInfo;->appPermissionInfoUrl:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$DownloadSafeInfo;->appPermissionInfoUrl:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_6

    iput-object v2, p0, Lcom/kwad/sdk/core/response/model/AdInfo$DownloadSafeInfo;->appPermissionInfoUrl:Ljava/lang/String;

    :cond_6
    const-string v0, "secWindowPopNoWifiSwitch"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optBoolean(Ljava/lang/String;)Z

    move-result v0

    iput-boolean v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$DownloadSafeInfo;->secWindowPopNoWifiSwitch:Z

    const-string v0, "secWindowPopSwitch"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optBoolean(Ljava/lang/String;)Z

    move-result v0

    iput-boolean v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$DownloadSafeInfo;->secWindowPopSwitch:Z

    new-instance v0, Ljava/lang/Boolean;

    const-string v1, "false"

    invoke-direct {v0, v1}, Ljava/lang/Boolean;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v0

    const-string v3, "downloadPauseEnable"

    invoke-virtual {p1, v3, v0}, Lorg/json/JSONObject;->optBoolean(Ljava/lang/String;Z)Z

    move-result v0

    iput-boolean v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$DownloadSafeInfo;->downloadPauseEnable:Z

    const-string v0, "windowPopUrl"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$DownloadSafeInfo;->windowPopUrl:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$DownloadSafeInfo;->windowPopUrl:Ljava/lang/String;

    sget-object v3, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v3, :cond_7

    iput-object v2, p0, Lcom/kwad/sdk/core/response/model/AdInfo$DownloadSafeInfo;->windowPopUrl:Ljava/lang/String;

    :cond_7
    new-instance v0, Ljava/lang/Boolean;

    invoke-direct {v0, v1}, Ljava/lang/Boolean;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v0

    const-string v1, "webPageTipbarSwitch"

    invoke-virtual {p1, v1, v0}, Lorg/json/JSONObject;->optBoolean(Ljava/lang/String;Z)Z

    move-result v0

    iput-boolean v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$DownloadSafeInfo;->webPageTipbarSwitch:Z

    const-string v0, "webPageTipbarText"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$DownloadSafeInfo;->webPageTipbarText:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$DownloadSafeInfo;->webPageTipbarText:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_8

    iput-object v2, p0, Lcom/kwad/sdk/core/response/model/AdInfo$DownloadSafeInfo;->webPageTipbarText:Ljava/lang/String;

    :cond_8
    const-string v0, "autoDownloadUrl"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$DownloadSafeInfo;->autoDownloadUrl:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$DownloadSafeInfo;->autoDownloadUrl:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_9

    iput-object v2, p0, Lcom/kwad/sdk/core/response/model/AdInfo$DownloadSafeInfo;->autoDownloadUrl:Ljava/lang/String;

    :cond_9
    new-instance v0, Lcom/kwad/sdk/core/response/model/AdInfo$ComplianceInfo;

    invoke-direct {v0}, Lcom/kwad/sdk/core/response/model/AdInfo$ComplianceInfo;-><init>()V

    iput-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$DownloadSafeInfo;->complianceInfo:Lcom/kwad/sdk/core/response/model/AdInfo$ComplianceInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$DownloadSafeInfo;->complianceInfo:Lcom/kwad/sdk/core/response/model/AdInfo$ComplianceInfo;

    const-string v0, "complianceInfo"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/kwad/sdk/core/response/model/AdInfo$ComplianceInfo;->parseJson(Lorg/json/JSONObject;)V

    return-void
.end method

.method private static b(Lcom/kwad/sdk/core/response/model/AdInfo$DownloadSafeInfo;Lorg/json/JSONObject;)Lorg/json/JSONObject;
    .locals 6

    if-nez p1, :cond_0

    new-instance p1, Lorg/json/JSONObject;

    invoke-direct {p1}, Lorg/json/JSONObject;-><init>()V

    :cond_0
    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$DownloadSafeInfo;->permissionInfo:Ljava/lang/String;

    const-string v1, ""

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$DownloadSafeInfo;->permissionInfo:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_1

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$DownloadSafeInfo;->permissionInfo:Ljava/lang/String;

    const-string v2, "permissionInfo"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_1
    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$DownloadSafeInfo;->appName:Ljava/lang/String;

    if-eqz v0, :cond_2

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$DownloadSafeInfo;->appName:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_2

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$DownloadSafeInfo;->appName:Ljava/lang/String;

    const-string v2, "appName"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_2
    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$DownloadSafeInfo;->corporationName:Ljava/lang/String;

    if-eqz v0, :cond_3

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$DownloadSafeInfo;->corporationName:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_3

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$DownloadSafeInfo;->corporationName:Ljava/lang/String;

    const-string v2, "corporationName"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_3
    iget-wide v2, p0, Lcom/kwad/sdk/core/response/model/AdInfo$DownloadSafeInfo;->packageSize:J

    const-wide/16 v4, 0x0

    cmp-long v0, v2, v4

    if-eqz v0, :cond_4

    iget-wide v2, p0, Lcom/kwad/sdk/core/response/model/AdInfo$DownloadSafeInfo;->packageSize:J

    const-string v0, "packageSize"

    invoke-static {p1, v0, v2, v3}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    :cond_4
    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$DownloadSafeInfo;->appVersion:Ljava/lang/String;

    if-eqz v0, :cond_5

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$DownloadSafeInfo;->appVersion:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_5

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$DownloadSafeInfo;->appVersion:Ljava/lang/String;

    const-string v2, "appVersion"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_5
    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$DownloadSafeInfo;->appPrivacyUrl:Ljava/lang/String;

    if-eqz v0, :cond_6

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$DownloadSafeInfo;->appPrivacyUrl:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_6

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$DownloadSafeInfo;->appPrivacyUrl:Ljava/lang/String;

    const-string v2, "appPrivacyUrl"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_6
    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$DownloadSafeInfo;->appPermissionInfoUrl:Ljava/lang/String;

    if-eqz v0, :cond_7

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$DownloadSafeInfo;->appPermissionInfoUrl:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_7

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$DownloadSafeInfo;->appPermissionInfoUrl:Ljava/lang/String;

    const-string v2, "appPermissionInfoUrl"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_7
    iget-boolean v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$DownloadSafeInfo;->secWindowPopNoWifiSwitch:Z

    if-eqz v0, :cond_8

    iget-boolean v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$DownloadSafeInfo;->secWindowPopNoWifiSwitch:Z

    const-string v2, "secWindowPopNoWifiSwitch"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Z)V

    :cond_8
    iget-boolean v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$DownloadSafeInfo;->secWindowPopSwitch:Z

    if-eqz v0, :cond_9

    iget-boolean v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$DownloadSafeInfo;->secWindowPopSwitch:Z

    const-string v2, "secWindowPopSwitch"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Z)V

    :cond_9
    iget-boolean v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$DownloadSafeInfo;->downloadPauseEnable:Z

    const-string v2, "downloadPauseEnable"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Z)V

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$DownloadSafeInfo;->windowPopUrl:Ljava/lang/String;

    if-eqz v0, :cond_a

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$DownloadSafeInfo;->windowPopUrl:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_a

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$DownloadSafeInfo;->windowPopUrl:Ljava/lang/String;

    const-string v2, "windowPopUrl"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_a
    iget-boolean v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$DownloadSafeInfo;->webPageTipbarSwitch:Z

    const-string v2, "webPageTipbarSwitch"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Z)V

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$DownloadSafeInfo;->webPageTipbarText:Ljava/lang/String;

    if-eqz v0, :cond_b

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$DownloadSafeInfo;->webPageTipbarText:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_b

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$DownloadSafeInfo;->webPageTipbarText:Ljava/lang/String;

    const-string v2, "webPageTipbarText"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_b
    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$DownloadSafeInfo;->autoDownloadUrl:Ljava/lang/String;

    if-eqz v0, :cond_c

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$DownloadSafeInfo;->autoDownloadUrl:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_c

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$DownloadSafeInfo;->autoDownloadUrl:Ljava/lang/String;

    const-string v1, "autoDownloadUrl"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_c
    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$DownloadSafeInfo;->complianceInfo:Lcom/kwad/sdk/core/response/model/AdInfo$ComplianceInfo;

    const-string v0, "complianceInfo"

    invoke-static {p1, v0, p0}, Lcom/kwad/sdk/utils/t;->a(Lorg/json/JSONObject;Ljava/lang/String;Lcom/kwad/sdk/core/b;)V

    return-object p1
.end method


# virtual methods
.method public final bridge synthetic a(Lcom/kwad/sdk/core/b;Lorg/json/JSONObject;)V
    .locals 0

    check-cast p1, Lcom/kwad/sdk/core/response/model/AdInfo$DownloadSafeInfo;

    invoke-static {p1, p2}, Lcom/kwad/sdk/core/b/a/co;->a(Lcom/kwad/sdk/core/response/model/AdInfo$DownloadSafeInfo;Lorg/json/JSONObject;)V

    return-void
.end method

.method public final bridge synthetic b(Lcom/kwad/sdk/core/b;Lorg/json/JSONObject;)Lorg/json/JSONObject;
    .locals 0

    check-cast p1, Lcom/kwad/sdk/core/response/model/AdInfo$DownloadSafeInfo;

    invoke-static {p1, p2}, Lcom/kwad/sdk/core/b/a/co;->b(Lcom/kwad/sdk/core/response/model/AdInfo$DownloadSafeInfo;Lorg/json/JSONObject;)Lorg/json/JSONObject;

    move-result-object p1

    return-object p1
.end method
