.class public abstract Lcom/kwad/sdk/core/network/d;
.super Lcom/kwad/sdk/core/network/b;


# static fields
.field public static final TRACK_ID_KEY:Ljava/lang/String; = "kuaishou-tracing-token"

.field private static sLiveSupportMode:I


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public constructor <init>()V
    .locals 2

    const/4 v0, 0x0

    const/4 v1, 0x0

    invoke-direct {p0, v0, v1}, Lcom/kwad/sdk/core/network/d;-><init>(ILcom/kwad/sdk/internal/api/SceneImpl;)V

    return-void
.end method

.method public constructor <init>(ILcom/kwad/sdk/internal/api/SceneImpl;)V
    .locals 1

    invoke-direct {p0}, Lcom/kwad/sdk/core/network/b;-><init>()V

    invoke-virtual {p0}, Lcom/kwad/sdk/core/network/d;->needAppList()Z

    move-result v0

    invoke-static {v0, p1}, Lcom/kwad/sdk/core/request/model/b;->g(ZI)Lcom/kwad/sdk/core/request/model/b;

    move-result-object p1

    const-string v0, "deviceInfo"

    invoke-virtual {p0, v0, p1}, Lcom/kwad/sdk/core/network/d;->putBody(Ljava/lang/String;Lcom/kwad/sdk/core/b;)V

    invoke-static {p2}, Lcom/kwad/sdk/core/request/model/StatusInfo;->b(Lcom/kwad/sdk/internal/api/SceneImpl;)Lcom/kwad/sdk/core/request/model/StatusInfo;

    move-result-object p1

    const-string p2, "statusInfo"

    invoke-virtual {p0, p2, p1}, Lcom/kwad/sdk/core/network/d;->putBody(Ljava/lang/String;Lcom/kwad/sdk/core/b;)V

    return-void
.end method


# virtual methods
.method protected buildBaseBody()V
    .locals 3

    const-string v0, "protocolVersion"

    const-string v1, "2.0"

    invoke-virtual {p0, v0, v1}, Lcom/kwad/sdk/core/network/d;->putBody(Ljava/lang/String;Ljava/lang/String;)V

    const-string v0, "SDKVersion"

    const-string v1, "3.3.42"

    invoke-virtual {p0, v0, v1}, Lcom/kwad/sdk/core/network/d;->putBody(Ljava/lang/String;Ljava/lang/String;)V

    const-string v0, "SDKVersionCode"

    const v1, 0x2e4c58

    invoke-virtual {p0, v0, v1}, Lcom/kwad/sdk/core/network/d;->putBody(Ljava/lang/String;I)V

    const-class v0, Lcom/kwad/sdk/service/a/e;

    invoke-static {v0}, Lcom/kwad/sdk/service/ServiceProvider;->get(Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/kwad/sdk/service/a/e;

    invoke-interface {v0}, Lcom/kwad/sdk/service/a/e;->getApiVersion()Ljava/lang/String;

    move-result-object v0

    const-string v1, "sdkApiVersion"

    invoke-virtual {p0, v1, v0}, Lcom/kwad/sdk/core/network/d;->putBody(Ljava/lang/String;Ljava/lang/String;)V

    const-class v0, Lcom/kwad/sdk/service/a/e;

    invoke-static {v0}, Lcom/kwad/sdk/service/ServiceProvider;->get(Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/kwad/sdk/service/a/e;

    invoke-interface {v0}, Lcom/kwad/sdk/service/a/e;->getApiVersionCode()I

    move-result v0

    const-string v1, "sdkApiVersionCode"

    invoke-virtual {p0, v1, v0}, Lcom/kwad/sdk/core/network/d;->putBody(Ljava/lang/String;I)V

    const/4 v0, 0x1

    const-string v1, "sdkType"

    invoke-virtual {p0, v1, v0}, Lcom/kwad/sdk/core/network/d;->putBody(Ljava/lang/String;I)V

    invoke-static {}, Lcom/kwad/sdk/core/request/model/a;->Cr()Lorg/json/JSONObject;

    move-result-object v1

    const-string v2, "appInfo"

    invoke-virtual {p0, v2, v1}, Lcom/kwad/sdk/core/network/d;->putBody(Ljava/lang/String;Lorg/json/JSONObject;)V

    const-string v1, "tkVersion"

    const-string v2, "5.0.3"

    invoke-virtual {p0, v1, v2}, Lcom/kwad/sdk/core/network/d;->putBody(Ljava/lang/String;Ljava/lang/String;)V

    invoke-static {}, Lcom/kwad/sdk/core/request/model/d;->Cv()Lcom/kwad/sdk/core/request/model/d;

    move-result-object v1

    const-string v2, "networkInfo"

    invoke-virtual {p0, v2, v1}, Lcom/kwad/sdk/core/network/d;->putBody(Ljava/lang/String;Lcom/kwad/sdk/core/b;)V

    sget v1, Lcom/kwad/sdk/core/network/d;->sLiveSupportMode:I

    if-nez v1, :cond_0

    const-class v1, Lcom/kwad/sdk/service/a/e;

    invoke-static {v1}, Lcom/kwad/sdk/service/ServiceProvider;->get(Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/kwad/sdk/service/a/e;

    invoke-interface {v1}, Lcom/kwad/sdk/service/a/e;->hasLiveCompoReady()Z

    move-result v1

    if-eqz v1, :cond_0

    sput v0, Lcom/kwad/sdk/core/network/d;->sLiveSupportMode:I

    :cond_0
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "sLiveSupportMode :"

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    sget v1, Lcom/kwad/sdk/core/network/d;->sLiveSupportMode:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "CommonBaseRequest"

    invoke-static {v1, v0}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    sget v0, Lcom/kwad/sdk/core/network/d;->sLiveSupportMode:I

    const-string v1, "liveSupportMode"

    invoke-virtual {p0, v1, v0}, Lcom/kwad/sdk/core/network/d;->putBody(Ljava/lang/String;I)V

    invoke-static {}, Lcom/kwad/sdk/core/request/model/c;->Cu()Lcom/kwad/sdk/core/request/model/c;

    move-result-object v0

    const-string v1, "geoInfo"

    invoke-virtual {p0, v1, v0}, Lcom/kwad/sdk/core/network/d;->putBody(Ljava/lang/String;Lcom/kwad/sdk/core/b;)V

    invoke-static {}, Lcom/kwad/sdk/core/request/model/e;->Cx()Lcom/kwad/sdk/core/request/model/e;

    move-result-object v0

    const-string v1, "ext"

    invoke-virtual {p0, v1, v0}, Lcom/kwad/sdk/core/network/d;->putBody(Ljava/lang/String;Lcom/kwad/sdk/core/b;)V

    invoke-static {}, Lcom/kwad/sdk/core/request/model/g;->Cy()Lcom/kwad/sdk/core/request/model/g;

    move-result-object v0

    const-string v1, "userInfo"

    invoke-virtual {p0, v1, v0}, Lcom/kwad/sdk/core/network/d;->putBody(Ljava/lang/String;Lcom/kwad/sdk/core/b;)V

    invoke-static {}, Lcom/kwad/sdk/core/network/r;->Bk()Lcom/kwad/sdk/core/network/r;

    move-result-object v0

    invoke-virtual {p0}, Lcom/kwad/sdk/core/network/d;->getUrl()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/network/r;->cZ(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    const-string v1, "requestSessionData"

    invoke-virtual {p0, v1, v0}, Lcom/kwad/sdk/core/network/d;->putBody(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method protected buildBaseHeader()V
    .locals 2

    invoke-virtual {p0}, Lcom/kwad/sdk/core/network/d;->getUrl()Ljava/lang/String;

    move-result-object v0

    sget-object v1, Lcom/kwad/framework/a/a;->ml:Ljava/lang/Boolean;

    invoke-virtual {v1}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v1

    if-eqz v1, :cond_0

    if-eqz v0, :cond_0

    invoke-static {}, Lcom/kwad/sdk/h;->xe()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    const-class v0, Lcom/kwad/sdk/components/DevelopMangerComponents;

    invoke-static {v0}, Lcom/kwad/sdk/components/c;->f(Ljava/lang/Class;)Lcom/kwad/sdk/components/a;

    const-string v0, "trace-context"

    const-string v1, "{\"laneId\":\"STAGING.online.u\"}"

    invoke-virtual {p0, v0, v1}, Lcom/kwad/sdk/core/network/d;->addHeader(Ljava/lang/String;Ljava/lang/String;)V

    const-class v0, Lcom/kwad/sdk/components/DevelopMangerComponents;

    invoke-static {v0}, Lcom/kwad/sdk/components/c;->f(Ljava/lang/Class;)Lcom/kwad/sdk/components/a;

    :cond_0
    return-void
.end method

.method protected needAppList()Z
    .locals 1

    const/4 v0, 0x0

    return v0
.end method
