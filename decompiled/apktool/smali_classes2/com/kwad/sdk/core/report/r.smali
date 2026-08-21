.class public Lcom/kwad/sdk/core/report/r;
.super Lcom/kwad/sdk/core/report/g;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/sdk/core/report/r$b;,
        Lcom/kwad/sdk/core/report/r$a;
    }
.end annotation


# instance fields
.field public HR:Ljava/lang/String;

.field public HS:Ljava/lang/String;

.field public HU:J

.field public transient PN:Lcom/kwad/sdk/internal/api/SceneImpl;

.field public Pp:Ljava/lang/String;

.field public Pv:J

.field public Pw:J

.field public Px:J

.field public Qr:J

.field public UP:Ljava/lang/String;

.field public UQ:I

.field public Uj:Ljava/lang/String;

.field public Ul:I

.field public Xf:J

.field public adStyle:I

.field public ant:J

.field public arA:Lcom/kwad/sdk/core/scene/URLPackage;

.field public arB:Ljava/lang/String;

.field public arC:Lorg/json/JSONArray;

.field public arD:Lorg/json/JSONArray;

.field public arE:Lcom/kwad/sdk/core/report/r$a;

.field public arF:I

.field public arG:I

.field public arH:I

.field public arI:I

.field public arJ:Ljava/lang/String;

.field public arK:I

.field public arL:I

.field public arM:Ljava/lang/String;

.field public arN:Lorg/json/JSONObject;

.field public arO:Lorg/json/JSONArray;

.field public arP:I

.field public arQ:I

.field public arR:I

.field public arS:J

.field public arT:Lorg/json/JSONArray;

.field public arU:Z

.field public arV:Ljava/lang/String;

.field public arW:I

.field public arX:I

.field public arY:J

.field public arZ:I

.field public aro:J

.field public arp:J

.field public arq:Lorg/json/JSONObject;

.field public arr:Lorg/json/JSONObject;

.field public ars:J

.field public art:J

.field public aru:J

.field public arv:J

.field public arw:J

.field public arx:J

.field public ary:J

.field public arz:I

.field public asa:Ljava/lang/String;

.field public asb:J

.field public asc:J

.field public asd:J

.field public ase:J

.field public asf:Ljava/lang/String;

.field public asg:I

.field public ash:Lorg/json/JSONArray;

.field public asi:J

.field public asj:J

.field public ask:Lorg/json/JSONArray;

.field public asl:Ljava/lang/String;

.field public asm:Ljava/lang/String;

.field public asn:Ljava/lang/String;

.field public aso:Ljava/lang/String;

.field public asp:Ljava/lang/String;

.field public asq:I

.field public asr:Ljava/lang/String;

.field public ass:Ljava/lang/String;

.field public ast:I

.field public asu:I

.field public asv:J

.field public asw:J

.field public asx:Ljava/lang/String;

.field public blockDuration:J

.field public clickTime:J

.field public contentSourceType:I

.field public contentType:I

.field public creativeId:J

.field public downloadDuration:J

.field public entryPageSource:Ljava/lang/String;

.field public errorCode:I

.field public errorMsg:Ljava/lang/String;

.field public llsid:J

.field public transient mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

.field public pageType:I

.field public photoId:J

.field public posId:J

.field public position:J

.field public realShowType:I

.field public sdkVersion:Ljava/lang/String;

.field public sessionId:Ljava/lang/String;

.field public timestamp:J

.field public trace:Ljava/lang/String;

.field public urlPackage:Lcom/kwad/sdk/core/scene/URLPackage;


# direct methods
.method public constructor <init>(J)V
    .locals 4

    invoke-direct {p0}, Lcom/kwad/sdk/core/report/g;-><init>()V

    const/4 v0, -0x1

    iput v0, p0, Lcom/kwad/sdk/core/report/r;->adStyle:I

    const/4 v1, 0x0

    iput v1, p0, Lcom/kwad/sdk/core/report/r;->contentType:I

    iput v1, p0, Lcom/kwad/sdk/core/report/r;->realShowType:I

    const-wide/16 v2, -0x1

    iput-wide v2, p0, Lcom/kwad/sdk/core/report/r;->arx:J

    iput v1, p0, Lcom/kwad/sdk/core/report/r;->arz:I

    const-wide/16 v2, 0x0

    iput-wide v2, p0, Lcom/kwad/sdk/core/report/r;->arS:J

    iput v1, p0, Lcom/kwad/sdk/core/report/r;->arW:I

    iput v0, p0, Lcom/kwad/sdk/core/report/r;->arX:I

    iput v1, p0, Lcom/kwad/sdk/core/report/r;->asq:I

    const v0, 0x2e4c58

    iput v0, p0, Lcom/kwad/sdk/core/report/r;->asu:I

    const-string v0, "3.3.42"

    iput-object v0, p0, Lcom/kwad/sdk/core/report/r;->sdkVersion:Ljava/lang/String;

    const-class v0, Lcom/kwad/sdk/service/a/e;

    invoke-static {v0}, Lcom/kwad/sdk/service/ServiceProvider;->get(Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v0

    const-string v1, ""

    if-nez v0, :cond_0

    move-object v0, v1

    goto :goto_0

    :cond_0
    const-class v0, Lcom/kwad/sdk/service/a/e;

    invoke-static {v0}, Lcom/kwad/sdk/service/ServiceProvider;->get(Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/kwad/sdk/service/a/e;

    invoke-interface {v0}, Lcom/kwad/sdk/service/a/e;->getApiVersion()Ljava/lang/String;

    move-result-object v0

    :goto_0
    iput-object v0, p0, Lcom/kwad/sdk/core/report/r;->Uj:Ljava/lang/String;

    const/4 v0, 0x1

    iput v0, p0, Lcom/kwad/sdk/core/report/r;->Ul:I

    iput-object v1, p0, Lcom/kwad/sdk/core/report/r;->asx:Ljava/lang/String;

    iput-wide p1, p0, Lcom/kwad/sdk/core/report/r;->arp:J

    return-void
.end method

.method public constructor <init>(JLcom/kwad/sdk/core/response/model/AdTemplate;)V
    .locals 4

    invoke-direct {p0}, Lcom/kwad/sdk/core/report/g;-><init>()V

    const/4 v0, -0x1

    iput v0, p0, Lcom/kwad/sdk/core/report/r;->adStyle:I

    const/4 v1, 0x0

    iput v1, p0, Lcom/kwad/sdk/core/report/r;->contentType:I

    iput v1, p0, Lcom/kwad/sdk/core/report/r;->realShowType:I

    const-wide/16 v2, -0x1

    iput-wide v2, p0, Lcom/kwad/sdk/core/report/r;->arx:J

    iput v1, p0, Lcom/kwad/sdk/core/report/r;->arz:I

    const-wide/16 v2, 0x0

    iput-wide v2, p0, Lcom/kwad/sdk/core/report/r;->arS:J

    iput v1, p0, Lcom/kwad/sdk/core/report/r;->arW:I

    iput v0, p0, Lcom/kwad/sdk/core/report/r;->arX:I

    iput v1, p0, Lcom/kwad/sdk/core/report/r;->asq:I

    const v0, 0x2e4c58

    iput v0, p0, Lcom/kwad/sdk/core/report/r;->asu:I

    const-string v0, "3.3.42"

    iput-object v0, p0, Lcom/kwad/sdk/core/report/r;->sdkVersion:Ljava/lang/String;

    const-class v0, Lcom/kwad/sdk/service/a/e;

    invoke-static {v0}, Lcom/kwad/sdk/service/ServiceProvider;->get(Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v0

    const-string v1, ""

    if-nez v0, :cond_0

    move-object v0, v1

    goto :goto_0

    :cond_0
    const-class v0, Lcom/kwad/sdk/service/a/e;

    invoke-static {v0}, Lcom/kwad/sdk/service/ServiceProvider;->get(Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/kwad/sdk/service/a/e;

    invoke-interface {v0}, Lcom/kwad/sdk/service/a/e;->getApiVersion()Ljava/lang/String;

    move-result-object v0

    :goto_0
    iput-object v0, p0, Lcom/kwad/sdk/core/report/r;->Uj:Ljava/lang/String;

    const/4 v0, 0x1

    iput v0, p0, Lcom/kwad/sdk/core/report/r;->Ul:I

    iput-object v1, p0, Lcom/kwad/sdk/core/report/r;->asx:Ljava/lang/String;

    iput-wide p1, p0, Lcom/kwad/sdk/core/report/r;->arp:J

    iput-object p3, p0, Lcom/kwad/sdk/core/report/r;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    return-void
.end method

.method public constructor <init>(JLcom/kwad/sdk/core/response/model/AdTemplate;Ljava/lang/String;)V
    .locals 4

    invoke-direct {p0}, Lcom/kwad/sdk/core/report/g;-><init>()V

    const/4 v0, -0x1

    iput v0, p0, Lcom/kwad/sdk/core/report/r;->adStyle:I

    const/4 v1, 0x0

    iput v1, p0, Lcom/kwad/sdk/core/report/r;->contentType:I

    iput v1, p0, Lcom/kwad/sdk/core/report/r;->realShowType:I

    const-wide/16 v2, -0x1

    iput-wide v2, p0, Lcom/kwad/sdk/core/report/r;->arx:J

    iput v1, p0, Lcom/kwad/sdk/core/report/r;->arz:I

    const-wide/16 v2, 0x0

    iput-wide v2, p0, Lcom/kwad/sdk/core/report/r;->arS:J

    iput v1, p0, Lcom/kwad/sdk/core/report/r;->arW:I

    iput v0, p0, Lcom/kwad/sdk/core/report/r;->arX:I

    iput v1, p0, Lcom/kwad/sdk/core/report/r;->asq:I

    const v0, 0x2e4c58

    iput v0, p0, Lcom/kwad/sdk/core/report/r;->asu:I

    const-string v0, "3.3.42"

    iput-object v0, p0, Lcom/kwad/sdk/core/report/r;->sdkVersion:Ljava/lang/String;

    const-class v0, Lcom/kwad/sdk/service/a/e;

    invoke-static {v0}, Lcom/kwad/sdk/service/ServiceProvider;->get(Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v0

    const-string v1, ""

    if-nez v0, :cond_0

    move-object v0, v1

    goto :goto_0

    :cond_0
    const-class v0, Lcom/kwad/sdk/service/a/e;

    invoke-static {v0}, Lcom/kwad/sdk/service/ServiceProvider;->get(Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/kwad/sdk/service/a/e;

    invoke-interface {v0}, Lcom/kwad/sdk/service/a/e;->getApiVersion()Ljava/lang/String;

    move-result-object v0

    :goto_0
    iput-object v0, p0, Lcom/kwad/sdk/core/report/r;->Uj:Ljava/lang/String;

    const/4 v0, 0x1

    iput v0, p0, Lcom/kwad/sdk/core/report/r;->Ul:I

    iput-object v1, p0, Lcom/kwad/sdk/core/report/r;->asx:Ljava/lang/String;

    iput-wide p1, p0, Lcom/kwad/sdk/core/report/r;->arp:J

    iput-object p3, p0, Lcom/kwad/sdk/core/report/r;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iput-object p4, p0, Lcom/kwad/sdk/core/report/r;->UP:Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Ljava/lang/String;)V
    .locals 1

    const/4 v0, 0x1

    invoke-direct {p0, p1, v0}, Lcom/kwad/sdk/core/report/r;-><init>(Ljava/lang/String;Z)V

    return-void
.end method

.method public constructor <init>(Ljava/lang/String;Z)V
    .locals 4

    invoke-direct {p0}, Lcom/kwad/sdk/core/report/g;-><init>()V

    const/4 v0, -0x1

    iput v0, p0, Lcom/kwad/sdk/core/report/r;->adStyle:I

    const/4 v1, 0x0

    iput v1, p0, Lcom/kwad/sdk/core/report/r;->contentType:I

    iput v1, p0, Lcom/kwad/sdk/core/report/r;->realShowType:I

    const-wide/16 v2, -0x1

    iput-wide v2, p0, Lcom/kwad/sdk/core/report/r;->arx:J

    iput v1, p0, Lcom/kwad/sdk/core/report/r;->arz:I

    const-wide/16 v2, 0x0

    iput-wide v2, p0, Lcom/kwad/sdk/core/report/r;->arS:J

    iput v1, p0, Lcom/kwad/sdk/core/report/r;->arW:I

    iput v0, p0, Lcom/kwad/sdk/core/report/r;->arX:I

    iput v1, p0, Lcom/kwad/sdk/core/report/r;->asq:I

    const v0, 0x2e4c58

    iput v0, p0, Lcom/kwad/sdk/core/report/r;->asu:I

    const-string v0, "3.3.42"

    iput-object v0, p0, Lcom/kwad/sdk/core/report/r;->sdkVersion:Ljava/lang/String;

    const-class v0, Lcom/kwad/sdk/service/a/e;

    invoke-static {v0}, Lcom/kwad/sdk/service/ServiceProvider;->get(Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v0

    const-string v1, ""

    if-nez v0, :cond_0

    move-object v0, v1

    goto :goto_0

    :cond_0
    const-class v0, Lcom/kwad/sdk/service/a/e;

    invoke-static {v0}, Lcom/kwad/sdk/service/ServiceProvider;->get(Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/kwad/sdk/service/a/e;

    invoke-interface {v0}, Lcom/kwad/sdk/service/a/e;->getApiVersion()Ljava/lang/String;

    move-result-object v0

    :goto_0
    iput-object v0, p0, Lcom/kwad/sdk/core/report/r;->Uj:Ljava/lang/String;

    const/4 v0, 0x1

    iput v0, p0, Lcom/kwad/sdk/core/report/r;->Ul:I

    iput-object v1, p0, Lcom/kwad/sdk/core/report/r;->asx:Ljava/lang/String;

    if-eqz p2, :cond_1

    :try_start_0
    new-instance p2, Lorg/json/JSONObject;

    invoke-direct {p2, p1}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-virtual {p0, p2}, Lcom/kwad/sdk/core/report/r;->parseJson(Lorg/json/JSONObject;)V
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception p1

    invoke-static {p1}, Lcom/kwad/sdk/core/e/c;->printStackTrace(Ljava/lang/Throwable;)V

    return-void

    :cond_1
    iput-object p1, p0, Lcom/kwad/sdk/core/report/r;->asx:Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Lorg/json/JSONObject;)V
    .locals 4

    invoke-direct {p0}, Lcom/kwad/sdk/core/report/g;-><init>()V

    const/4 v0, -0x1

    iput v0, p0, Lcom/kwad/sdk/core/report/r;->adStyle:I

    const/4 v1, 0x0

    iput v1, p0, Lcom/kwad/sdk/core/report/r;->contentType:I

    iput v1, p0, Lcom/kwad/sdk/core/report/r;->realShowType:I

    const-wide/16 v2, -0x1

    iput-wide v2, p0, Lcom/kwad/sdk/core/report/r;->arx:J

    iput v1, p0, Lcom/kwad/sdk/core/report/r;->arz:I

    const-wide/16 v2, 0x0

    iput-wide v2, p0, Lcom/kwad/sdk/core/report/r;->arS:J

    iput v1, p0, Lcom/kwad/sdk/core/report/r;->arW:I

    iput v0, p0, Lcom/kwad/sdk/core/report/r;->arX:I

    iput v1, p0, Lcom/kwad/sdk/core/report/r;->asq:I

    const v0, 0x2e4c58

    iput v0, p0, Lcom/kwad/sdk/core/report/r;->asu:I

    const-string v0, "3.3.42"

    iput-object v0, p0, Lcom/kwad/sdk/core/report/r;->sdkVersion:Ljava/lang/String;

    const-class v0, Lcom/kwad/sdk/service/a/e;

    invoke-static {v0}, Lcom/kwad/sdk/service/ServiceProvider;->get(Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v0

    const-string v1, ""

    if-nez v0, :cond_0

    move-object v0, v1

    goto :goto_0

    :cond_0
    const-class v0, Lcom/kwad/sdk/service/a/e;

    invoke-static {v0}, Lcom/kwad/sdk/service/ServiceProvider;->get(Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/kwad/sdk/service/a/e;

    invoke-interface {v0}, Lcom/kwad/sdk/service/a/e;->getApiVersion()Ljava/lang/String;

    move-result-object v0

    :goto_0
    iput-object v0, p0, Lcom/kwad/sdk/core/report/r;->Uj:Ljava/lang/String;

    const/4 v0, 0x1

    iput v0, p0, Lcom/kwad/sdk/core/report/r;->Ul:I

    iput-object v1, p0, Lcom/kwad/sdk/core/report/r;->asx:Ljava/lang/String;

    invoke-virtual {p0, p1}, Lcom/kwad/sdk/core/report/r;->parseJson(Lorg/json/JSONObject;)V

    return-void
.end method

.method private aL(Lcom/kwad/sdk/core/response/model/AdTemplate;)V
    .locals 3

    const/4 v0, 0x3

    iput v0, p0, Lcom/kwad/sdk/core/report/r;->arG:I

    const-class v0, Lcom/kwad/sdk/core/report/w;

    invoke-static {v0}, Lcom/kwad/sdk/service/ServiceProvider;->get(Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/kwad/sdk/core/report/w;

    if-eqz v0, :cond_0

    invoke-interface {v0}, Lcom/kwad/sdk/core/report/w;->sC()I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/report/r;->arW:I

    :cond_0
    invoke-static {}, Ljava/util/UUID;->randomUUID()Ljava/util/UUID;

    move-result-object v0

    invoke-virtual {v0}, Ljava/util/UUID;->toString()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/report/r;->actionId:Ljava/lang/String;

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/sdk/core/report/r;->timestamp:J

    invoke-static {}, Lcom/kwad/sdk/core/report/x;->Cl()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/report/r;->sessionId:Ljava/lang/String;

    :try_start_0
    invoke-static {}, Lcom/kwad/sdk/core/report/x;->Cm()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/sdk/core/report/r;->HU:J
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    invoke-static {v0}, Lcom/kwad/sdk/core/e/c;->printStackTraceOnly(Ljava/lang/Throwable;)V

    :goto_0
    invoke-static {}, Lcom/kwad/sdk/core/report/x;->Cn()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/sdk/core/report/r;->aro:J

    iget-object v0, p0, Lcom/kwad/sdk/core/report/r;->PN:Lcom/kwad/sdk/internal/api/SceneImpl;

    if-eqz v0, :cond_1

    :goto_1
    invoke-virtual {v0}, Lcom/kwad/sdk/internal/api/SceneImpl;->getPosId()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/sdk/core/report/r;->posId:J

    iget-object v0, p0, Lcom/kwad/sdk/core/report/r;->PN:Lcom/kwad/sdk/internal/api/SceneImpl;

    invoke-virtual {v0}, Lcom/kwad/sdk/internal/api/SceneImpl;->getUrlPackage()Lcom/kwad/sdk/core/scene/URLPackage;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/report/r;->urlPackage:Lcom/kwad/sdk/core/scene/URLPackage;

    iget-object v0, p0, Lcom/kwad/sdk/core/report/r;->PN:Lcom/kwad/sdk/internal/api/SceneImpl;

    invoke-virtual {v0}, Lcom/kwad/sdk/internal/api/SceneImpl;->getAdStyle()I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/report/r;->adStyle:I

    goto :goto_2

    :cond_1
    if-eqz p1, :cond_2

    iget-object v0, p1, Lcom/kwad/sdk/core/response/model/AdTemplate;->mAdScene:Lcom/kwad/sdk/internal/api/SceneImpl;

    if-eqz v0, :cond_2

    iget-object v0, p1, Lcom/kwad/sdk/core/response/model/AdTemplate;->mAdScene:Lcom/kwad/sdk/internal/api/SceneImpl;

    iput-object v0, p0, Lcom/kwad/sdk/core/report/r;->PN:Lcom/kwad/sdk/internal/api/SceneImpl;

    goto :goto_1

    :cond_2
    :goto_2
    if-eqz p1, :cond_7

    invoke-virtual {p1}, Lcom/kwad/sdk/core/response/model/AdTemplate;->getShowPosition()I

    move-result v0

    add-int/lit8 v0, v0, 0x1

    int-to-long v0, v0

    iput-wide v0, p0, Lcom/kwad/sdk/core/report/r;->position:J

    invoke-virtual {p1}, Lcom/kwad/sdk/core/response/model/AdTemplate;->getServerPosition()I

    move-result v0

    add-int/lit8 v0, v0, 0x1

    int-to-long v0, v0

    iput-wide v0, p0, Lcom/kwad/sdk/core/report/r;->ars:J

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/d;->cd(Lcom/kwad/sdk/core/response/model/AdTemplate;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/sdk/core/report/r;->llsid:J

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/d;->ce(Lcom/kwad/sdk/core/response/model/AdTemplate;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_3

    :try_start_1
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, v0}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    iput-object v1, p0, Lcom/kwad/sdk/core/report/r;->arq:Lorg/json/JSONObject;
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    goto :goto_3

    :catch_1
    move-exception v0

    invoke-static {v0}, Lcom/kwad/sdk/core/e/c;->printStackTraceOnly(Ljava/lang/Throwable;)V

    :cond_3
    :goto_3
    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/d;->cf(Lcom/kwad/sdk/core/response/model/AdTemplate;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_4

    :try_start_2
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, v0}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    iput-object v1, p0, Lcom/kwad/sdk/core/report/r;->arr:Lorg/json/JSONObject;
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_2

    goto :goto_4

    :catch_2
    move-exception v0

    invoke-static {v0}, Lcom/kwad/sdk/core/e/c;->printStackTraceOnly(Ljava/lang/Throwable;)V

    :cond_4
    :goto_4
    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/d;->bZ(Lcom/kwad/sdk/core/response/model/AdTemplate;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/sdk/core/report/r;->posId:J

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/d;->cc(Lcom/kwad/sdk/core/response/model/AdTemplate;)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/report/r;->contentType:I

    iget v0, p1, Lcom/kwad/sdk/core/response/model/AdTemplate;->realShowType:I

    iput v0, p0, Lcom/kwad/sdk/core/report/r;->realShowType:I

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/d;->cm(Lcom/kwad/sdk/core/response/model/AdTemplate;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/sdk/core/report/r;->photoId:J

    iget v0, p0, Lcom/kwad/sdk/core/report/r;->realShowType:I

    const/4 v1, 0x2

    if-ne v0, v1, :cond_5

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    iget-object v1, v0, Lcom/kwad/sdk/core/response/model/AdInfo;->adBaseInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;

    iget-wide v1, v1, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->creativeId:J

    iput-wide v1, p0, Lcom/kwad/sdk/core/report/r;->creativeId:J

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->G(Lcom/kwad/sdk/core/response/model/AdInfo;)I

    move-result v1

    mul-int/lit16 v1, v1, 0x3e8

    int-to-long v1, v1

    iput-wide v1, p0, Lcom/kwad/sdk/core/report/r;->art:J

    iget-object v0, v0, Lcom/kwad/sdk/core/response/model/AdInfo;->advertiserInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdvertiserInfo;

    iget-wide v0, v0, Lcom/kwad/sdk/core/response/model/AdInfo$AdvertiserInfo;->userId:J

    iput-wide v0, p0, Lcom/kwad/sdk/core/report/r;->Qr:J

    :cond_5
    iget v0, p1, Lcom/kwad/sdk/core/response/model/AdTemplate;->mMediaPlayerType:I

    iput v0, p0, Lcom/kwad/sdk/core/report/r;->arF:I

    iget v0, p1, Lcom/kwad/sdk/core/response/model/AdTemplate;->mIsLeftSlipStatus:I

    iput v0, p0, Lcom/kwad/sdk/core/report/r;->arH:I

    iget v0, p1, Lcom/kwad/sdk/core/response/model/AdTemplate;->mPhotoResponseType:I

    iput v0, p0, Lcom/kwad/sdk/core/report/r;->arI:I

    iget-object v0, p1, Lcom/kwad/sdk/core/response/model/AdTemplate;->mPageInfo:Lcom/kwad/sdk/core/response/model/PageInfo;

    if-eqz v0, :cond_6

    iget-object v0, p1, Lcom/kwad/sdk/core/response/model/AdTemplate;->mPageInfo:Lcom/kwad/sdk/core/response/model/PageInfo;

    iget v0, v0, Lcom/kwad/sdk/core/response/model/PageInfo;->pageType:I

    iput v0, p0, Lcom/kwad/sdk/core/report/r;->pageType:I

    :cond_6
    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/d;->cn(Lcom/kwad/sdk/core/response/model/AdTemplate;)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/report/r;->contentSourceType:I

    :cond_7
    invoke-static {}, Lcom/kwad/sdk/core/report/r$a;->Cg()Lcom/kwad/sdk/core/report/r$a;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/report/r;->arE:Lcom/kwad/sdk/core/report/r$a;

    iget-object v0, p0, Lcom/kwad/sdk/core/report/r;->PN:Lcom/kwad/sdk/internal/api/SceneImpl;

    if-nez v0, :cond_8

    if-eqz p1, :cond_8

    iget-object p1, p1, Lcom/kwad/sdk/core/response/model/AdTemplate;->mAdScene:Lcom/kwad/sdk/internal/api/SceneImpl;

    iput-object p1, p0, Lcom/kwad/sdk/core/report/r;->PN:Lcom/kwad/sdk/internal/api/SceneImpl;

    :cond_8
    iget-object p1, p0, Lcom/kwad/sdk/core/report/r;->PN:Lcom/kwad/sdk/internal/api/SceneImpl;

    if-eqz p1, :cond_9

    invoke-virtual {p1}, Lcom/kwad/sdk/internal/api/SceneImpl;->getPosId()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/sdk/core/report/r;->posId:J

    iget-object p1, p0, Lcom/kwad/sdk/core/report/r;->PN:Lcom/kwad/sdk/internal/api/SceneImpl;

    invoke-virtual {p1}, Lcom/kwad/sdk/internal/api/SceneImpl;->getUrlPackage()Lcom/kwad/sdk/core/scene/URLPackage;

    move-result-object p1

    iput-object p1, p0, Lcom/kwad/sdk/core/report/r;->urlPackage:Lcom/kwad/sdk/core/scene/URLPackage;

    :cond_9
    return-void
.end method


# virtual methods
.method public final Ce()Lcom/kwad/sdk/core/report/r;
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/core/report/r;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-direct {p0, v0}, Lcom/kwad/sdk/core/report/r;->aL(Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    return-object p0
.end method

.method public final Cf()V
    .locals 2

    const-class v0, Lcom/kwad/sdk/service/a/h;

    invoke-static {v0}, Lcom/kwad/sdk/service/ServiceProvider;->get(Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/kwad/sdk/service/a/h;

    invoke-interface {v0}, Lcom/kwad/sdk/service/a/h;->pM()Z

    move-result v1

    iput v1, p0, Lcom/kwad/sdk/core/report/r;->arP:I

    invoke-interface {v0}, Lcom/kwad/sdk/service/a/h;->pN()I

    move-result v1

    iput v1, p0, Lcom/kwad/sdk/core/report/r;->arQ:I

    invoke-interface {v0}, Lcom/kwad/sdk/service/a/h;->pO()I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/report/r;->arR:I

    return-void
.end method

.method public afterParseJson(Lorg/json/JSONObject;)V
    .locals 3

    invoke-super {p0, p1}, Lcom/kwad/sdk/core/report/g;->afterParseJson(Lorg/json/JSONObject;)V

    if-nez p1, :cond_0

    return-void

    :cond_0
    const/4 v0, 0x3

    iput v0, p0, Lcom/kwad/sdk/core/report/r;->arG:I

    const/4 v0, -0x1

    const-string v1, "adStyle"

    invoke-virtual {p1, v1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v1

    iput v1, p0, Lcom/kwad/sdk/core/report/r;->adStyle:I

    const-string v1, "num"

    invoke-virtual {p1, v1}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v1

    iput v1, p0, Lcom/kwad/sdk/core/report/r;->arL:I

    const-string v1, "state"

    invoke-virtual {p1, v1}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v1

    iput v1, p0, Lcom/kwad/sdk/core/report/r;->arK:I

    const-string v1, "timeSpend"

    invoke-virtual {p1, v1}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v1

    iput-wide v1, p0, Lcom/kwad/sdk/core/report/r;->arS:J

    const-string v1, "loadingDuration"

    invoke-virtual {p1, v1}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v1

    iput-wide v1, p0, Lcom/kwad/sdk/core/report/r;->asi:J

    const-string v1, "loadingDurationLimt"

    invoke-virtual {p1, v1}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v1

    iput-wide v1, p0, Lcom/kwad/sdk/core/report/r;->asj:J

    const-string v1, "playerTypeInfo"

    invoke-virtual {p1, v1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/report/r;->arX:I

    const-string v0, "actionId"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/kwad/sdk/core/report/r;->actionId:Ljava/lang/String;

    :cond_1
    return-void
.end method

.method public afterToJson(Lorg/json/JSONObject;)V
    .locals 5

    invoke-super {p0, p1}, Lcom/kwad/sdk/core/report/g;->afterToJson(Lorg/json/JSONObject;)V

    iget-object v0, p0, Lcom/kwad/sdk/core/report/r;->actionId:Ljava/lang/String;

    const-string v1, "actionId"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    iget v0, p0, Lcom/kwad/sdk/core/report/r;->adStyle:I

    if-lez v0, :cond_0

    const-string v1, "adStyle"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_0
    iget v0, p0, Lcom/kwad/sdk/core/report/r;->arL:I

    if-lez v0, :cond_1

    const-string v1, "num"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_1
    iget v0, p0, Lcom/kwad/sdk/core/report/r;->arK:I

    if-eqz v0, :cond_2

    const-string v1, "state"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_2
    iget-wide v0, p0, Lcom/kwad/sdk/core/report/r;->arS:J

    const-wide/16 v2, 0x0

    cmp-long v4, v0, v2

    if-lez v4, :cond_3

    const-string v4, "timeSpend"

    invoke-static {p1, v4, v0, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    :cond_3
    iget-wide v0, p0, Lcom/kwad/sdk/core/report/r;->asi:J

    cmp-long v4, v0, v2

    if-lez v4, :cond_4

    const-string v4, "loadingDuration"

    invoke-static {p1, v4, v0, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    :cond_4
    iget-wide v0, p0, Lcom/kwad/sdk/core/report/r;->asj:J

    cmp-long v2, v0, v2

    if-lez v2, :cond_5

    const-string v2, "loadingDurationLimt"

    invoke-static {p1, v2, v0, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    :cond_5
    iget v0, p0, Lcom/kwad/sdk/core/report/r;->arX:I

    const-string v1, "playerTypeInfo"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    return-void
.end method
