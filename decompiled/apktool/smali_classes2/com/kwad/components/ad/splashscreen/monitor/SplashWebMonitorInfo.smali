.class public Lcom/kwad/components/ad/splashscreen/monitor/SplashWebMonitorInfo;
.super Lcom/kwad/sdk/core/response/a/a;

# interfaces
.implements Ljava/io/Serializable;


# static fields
.field private static final serialVersionUID:J = 0x7d9031752eacedfcL


# instance fields
.field public durationMs:J

.field public errorMsg:Ljava/lang/String;

.field public event:Ljava/lang/String;

.field public sceneId:Ljava/lang/String;

.field public status:I

.field public timeType:I

.field public url:Ljava/lang/String;


# direct methods
.method public constructor <init>()V
    .locals 2

    invoke-direct {p0}, Lcom/kwad/sdk/core/response/a/a;-><init>()V

    const-string v0, ""

    iput-object v0, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashWebMonitorInfo;->event:Ljava/lang/String;

    iput-object v0, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashWebMonitorInfo;->url:Ljava/lang/String;

    iput-object v0, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashWebMonitorInfo;->sceneId:Ljava/lang/String;

    const-wide/16 v0, -0x1

    iput-wide v0, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashWebMonitorInfo;->durationMs:J

    return-void
.end method


# virtual methods
.method public afterToJson(Lorg/json/JSONObject;)V
    .locals 4

    invoke-super {p0, p1}, Lcom/kwad/sdk/core/response/a/a;->afterToJson(Lorg/json/JSONObject;)V

    iget-wide v0, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashWebMonitorInfo;->durationMs:J

    const-wide/16 v2, -0x1

    cmp-long v0, v0, v2

    if-nez v0, :cond_0

    const-string v0, "duration_ms"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->remove(Ljava/lang/String;)Ljava/lang/Object;

    :cond_0
    return-void
.end method

.method public setDurationMs(J)Lcom/kwad/components/ad/splashscreen/monitor/SplashWebMonitorInfo;
    .locals 0

    iput-wide p1, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashWebMonitorInfo;->durationMs:J

    return-object p0
.end method

.method public setErrorMsg(Ljava/lang/String;)Lcom/kwad/components/ad/splashscreen/monitor/SplashWebMonitorInfo;
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashWebMonitorInfo;->errorMsg:Ljava/lang/String;

    return-object p0
.end method

.method public setEvent(Ljava/lang/String;)Lcom/kwad/components/ad/splashscreen/monitor/SplashWebMonitorInfo;
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashWebMonitorInfo;->event:Ljava/lang/String;

    return-object p0
.end method

.method public setSceneId(Ljava/lang/String;)Lcom/kwad/components/ad/splashscreen/monitor/SplashWebMonitorInfo;
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashWebMonitorInfo;->sceneId:Ljava/lang/String;

    return-object p0
.end method

.method public setStatus(I)Lcom/kwad/components/ad/splashscreen/monitor/SplashWebMonitorInfo;
    .locals 0

    iput p1, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashWebMonitorInfo;->status:I

    return-object p0
.end method

.method public setTimeType(I)Lcom/kwad/components/ad/splashscreen/monitor/SplashWebMonitorInfo;
    .locals 0

    iput p1, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashWebMonitorInfo;->timeType:I

    return-object p0
.end method

.method public setUrl(Ljava/lang/String;)Lcom/kwad/components/ad/splashscreen/monitor/SplashWebMonitorInfo;
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashWebMonitorInfo;->url:Ljava/lang/String;

    return-object p0
.end method
