.class public final Lcom/kwad/sdk/core/b/a/br;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/core/d;


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Object;",
        "Lcom/kwad/sdk/core/d<",
        "Lcom/kwad/sdk/core/response/model/AdInfo$ComplianceInfo;",
        ">;"
    }
.end annotation


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private static a(Lcom/kwad/sdk/core/response/model/AdInfo$ComplianceInfo;Lorg/json/JSONObject;)V
    .locals 1

    if-nez p1, :cond_0

    return-void

    :cond_0
    const-string v0, "materialJumpType"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$ComplianceInfo;->materialJumpType:I

    const-string v0, "actionBarType"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$ComplianceInfo;->actionBarType:I

    const-string v0, "describeBarType"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$ComplianceInfo;->describeBarType:I

    const-string v0, "titleBarTextSwitch"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result p1

    iput p1, p0, Lcom/kwad/sdk/core/response/model/AdInfo$ComplianceInfo;->titleBarTextSwitch:I

    return-void
.end method

.method private static b(Lcom/kwad/sdk/core/response/model/AdInfo$ComplianceInfo;Lorg/json/JSONObject;)Lorg/json/JSONObject;
    .locals 2

    if-nez p1, :cond_0

    new-instance p1, Lorg/json/JSONObject;

    invoke-direct {p1}, Lorg/json/JSONObject;-><init>()V

    :cond_0
    iget v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$ComplianceInfo;->materialJumpType:I

    if-eqz v0, :cond_1

    iget v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$ComplianceInfo;->materialJumpType:I

    const-string v1, "materialJumpType"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_1
    iget v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$ComplianceInfo;->actionBarType:I

    if-eqz v0, :cond_2

    iget v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$ComplianceInfo;->actionBarType:I

    const-string v1, "actionBarType"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_2
    iget v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$ComplianceInfo;->describeBarType:I

    if-eqz v0, :cond_3

    iget v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$ComplianceInfo;->describeBarType:I

    const-string v1, "describeBarType"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_3
    iget v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$ComplianceInfo;->titleBarTextSwitch:I

    if-eqz v0, :cond_4

    iget p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$ComplianceInfo;->titleBarTextSwitch:I

    const-string v0, "titleBarTextSwitch"

    invoke-static {p1, v0, p0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_4
    return-object p1
.end method


# virtual methods
.method public final bridge synthetic a(Lcom/kwad/sdk/core/b;Lorg/json/JSONObject;)V
    .locals 0

    check-cast p1, Lcom/kwad/sdk/core/response/model/AdInfo$ComplianceInfo;

    invoke-static {p1, p2}, Lcom/kwad/sdk/core/b/a/br;->a(Lcom/kwad/sdk/core/response/model/AdInfo$ComplianceInfo;Lorg/json/JSONObject;)V

    return-void
.end method

.method public final bridge synthetic b(Lcom/kwad/sdk/core/b;Lorg/json/JSONObject;)Lorg/json/JSONObject;
    .locals 0

    check-cast p1, Lcom/kwad/sdk/core/response/model/AdInfo$ComplianceInfo;

    invoke-static {p1, p2}, Lcom/kwad/sdk/core/b/a/br;->b(Lcom/kwad/sdk/core/response/model/AdInfo$ComplianceInfo;Lorg/json/JSONObject;)Lorg/json/JSONObject;

    move-result-object p1

    return-object p1
.end method
