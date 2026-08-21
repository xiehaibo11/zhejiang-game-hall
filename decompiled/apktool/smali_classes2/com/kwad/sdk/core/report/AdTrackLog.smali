.class public Lcom/kwad/sdk/core/report/AdTrackLog;
.super Lcom/kwad/sdk/core/response/a/a;

# interfaces
.implements Ljava/io/Serializable;


# static fields
.field public static final NEGATIVE_RESULT:I = 0x2

.field public static final POSITIVE_RESULT:I = 0x1

.field private static sLiveSupportMode:I = 0x2

.field private static final serialVersionUID:J = 0x5c0040ad2923e03fL


# instance fields
.field public adLiveComponentReady:I

.field public adLiveSwitch:I

.field public adTkLiveSwitch:I

.field public apiSdkVersion:Ljava/lang/String;

.field public isPlugin:I

.field public preLandingPageShowType:I

.field public preLandingPageSwitch:I

.field public rewardAdvanceSwitch:I

.field public rewardDetailCallPositionY:I

.field public rewardDetailStatusBarHeight:I

.field public sceneId:Ljava/lang/String;

.field public screenOrientation:I

.field public serverCheckSwitch:I

.field public templateId:Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method private constructor <init>()V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/sdk/core/response/a/a;-><init>()V

    return-void
.end method

.method public constructor <init>(Ljava/lang/String;Ljava/lang/String;)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/sdk/core/response/a/a;-><init>()V

    iput-object p1, p0, Lcom/kwad/sdk/core/report/AdTrackLog;->templateId:Ljava/lang/String;

    iput-object p2, p0, Lcom/kwad/sdk/core/report/AdTrackLog;->sceneId:Ljava/lang/String;

    return-void
.end method

.method public static createFromJson(Ljava/lang/String;)Lcom/kwad/sdk/core/report/AdTrackLog;
    .locals 2

    :try_start_0
    new-instance v0, Lcom/kwad/sdk/core/report/AdTrackLog;

    invoke-direct {v0}, Lcom/kwad/sdk/core/report/AdTrackLog;-><init>()V

    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p0}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/report/AdTrackLog;->parseJson(Lorg/json/JSONObject;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object v0

    :catch_0
    const/4 p0, 0x0

    return-object p0
.end method

.method private toReportInt(Z)I
    .locals 0

    if-eqz p1, :cond_0

    const/4 p1, 0x1

    return p1

    :cond_0
    const/4 p1, 0x2

    return p1
.end method


# virtual methods
.method public bindABParams(Lcom/kwad/sdk/core/response/model/AdTemplate;)V
    .locals 2

    if-nez p1, :cond_0

    return-void

    :cond_0
    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object p1

    const-class v0, Lcom/kwad/sdk/service/a/e;

    invoke-static {v0}, Lcom/kwad/sdk/service/ServiceProvider;->get(Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/kwad/sdk/service/a/e;

    invoke-interface {v0}, Lcom/kwad/sdk/service/a/e;->hasLiveCompoReady()Z

    move-result v0

    invoke-direct {p0, v0}, Lcom/kwad/sdk/core/report/AdTrackLog;->toReportInt(Z)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/report/AdTrackLog;->adLiveComponentReady:I

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/a;->cw(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v0

    invoke-direct {p0, v0}, Lcom/kwad/sdk/core/report/AdTrackLog;->toReportInt(Z)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/report/AdTrackLog;->adLiveSwitch:I

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/b;->dE(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    invoke-direct {p0, v0}, Lcom/kwad/sdk/core/report/AdTrackLog;->toReportInt(Z)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/report/AdTrackLog;->adTkLiveSwitch:I

    sget v0, Lcom/kwad/sdk/core/report/AdTrackLog;->sLiveSupportMode:I

    const/4 v1, 0x2

    if-ne v0, v1, :cond_1

    const-class v0, Lcom/kwad/sdk/service/a/e;

    invoke-static {v0}, Lcom/kwad/sdk/service/ServiceProvider;->get(Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/kwad/sdk/service/a/e;

    invoke-interface {v0}, Lcom/kwad/sdk/service/a/e;->hasLiveCompoReady()Z

    move-result v0

    if-eqz v0, :cond_1

    const/4 v0, 0x1

    sput v0, Lcom/kwad/sdk/core/report/AdTrackLog;->sLiveSupportMode:I

    :cond_1
    sget v0, Lcom/kwad/sdk/core/report/AdTrackLog;->sLiveSupportMode:I

    iput v0, p0, Lcom/kwad/sdk/core/report/AdTrackLog;->adLiveComponentReady:I

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/a;->cI(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v0

    invoke-direct {p0, v0}, Lcom/kwad/sdk/core/report/AdTrackLog;->toReportInt(Z)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/report/AdTrackLog;->serverCheckSwitch:I

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/a;->cJ(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v0

    invoke-direct {p0, v0}, Lcom/kwad/sdk/core/report/AdTrackLog;->toReportInt(Z)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/report/AdTrackLog;->rewardAdvanceSwitch:I

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/b;->dC(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v0

    invoke-direct {p0, v0}, Lcom/kwad/sdk/core/report/AdTrackLog;->toReportInt(Z)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/report/AdTrackLog;->preLandingPageSwitch:I

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/b;->dD(Lcom/kwad/sdk/core/response/model/AdInfo;)I

    move-result p1

    iput p1, p0, Lcom/kwad/sdk/core/report/AdTrackLog;->preLandingPageShowType:I

    const-class p1, Lcom/kwad/sdk/service/a/e;

    invoke-static {p1}, Lcom/kwad/sdk/service/ServiceProvider;->get(Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/kwad/sdk/service/a/e;

    invoke-interface {p1}, Lcom/kwad/sdk/service/a/e;->getApiVersion()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/kwad/sdk/core/report/AdTrackLog;->apiSdkVersion:Ljava/lang/String;

    const-class p1, Lcom/kwad/sdk/service/a/e;

    invoke-static {p1}, Lcom/kwad/sdk/service/ServiceProvider;->get(Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/kwad/sdk/service/a/e;

    invoke-interface {p1}, Lcom/kwad/sdk/service/a/e;->getIsExternal()Z

    move-result p1

    invoke-direct {p0, p1}, Lcom/kwad/sdk/core/report/AdTrackLog;->toReportInt(Z)I

    move-result p1

    iput p1, p0, Lcom/kwad/sdk/core/report/AdTrackLog;->isPlugin:I

    invoke-static {}, Lcom/kwad/sdk/utils/ai;->IO()Z

    move-result p1

    invoke-direct {p0, p1}, Lcom/kwad/sdk/core/report/AdTrackLog;->toReportInt(Z)I

    move-result p1

    iput p1, p0, Lcom/kwad/sdk/core/report/AdTrackLog;->screenOrientation:I

    return-void
.end method
