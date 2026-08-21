.class public Lcom/kwad/sdk/internal/api/SceneImpl;
.super Lcom/kwad/sdk/core/response/a/a;

# interfaces
.implements Lcom/kwad/sdk/api/KsScene;
.implements Ljava/io/Serializable;
.implements Ljava/lang/Cloneable;


# static fields
.field private static final serialVersionUID:J = 0x14d7a2ae591e943L


# instance fields
.field public action:I

.field public adNum:I

.field public adStyle:I

.field public backUrl:Ljava/lang/String;

.field public bidResponse:Ljava/lang/String;

.field public bidResponseV2:Ljava/lang/String;

.field public entryScene:J

.field public height:I

.field public final mEcAttribute:Lcom/kwad/sdk/internal/api/EcAttribute;

.field public transient mKsAdLabel:Lcom/kwad/sdk/internal/api/a;

.field public nativeAdExtraData:Lcom/kwad/sdk/internal/api/NativeAdExtraDataImpl;

.field public posId:J

.field public rewardCallbackExtraData:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field public screenOrientation:I

.field public splashExtraData:Lcom/kwad/sdk/internal/api/b;

.field public urlPackage:Lcom/kwad/sdk/core/scene/URLPackage;

.field public width:I


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Lcom/kwad/sdk/core/response/a/a;-><init>()V

    const/4 v0, 0x1

    iput v0, p0, Lcom/kwad/sdk/internal/api/SceneImpl;->adNum:I

    const/4 v0, 0x0

    iput v0, p0, Lcom/kwad/sdk/internal/api/SceneImpl;->screenOrientation:I

    new-instance v0, Lcom/kwad/sdk/internal/api/EcAttribute;

    invoke-direct {v0}, Lcom/kwad/sdk/internal/api/EcAttribute;-><init>()V

    iput-object v0, p0, Lcom/kwad/sdk/internal/api/SceneImpl;->mEcAttribute:Lcom/kwad/sdk/internal/api/EcAttribute;

    return-void
.end method

.method public constructor <init>(J)V
    .locals 2

    invoke-direct {p0}, Lcom/kwad/sdk/core/response/a/a;-><init>()V

    const/4 v0, 0x1

    iput v0, p0, Lcom/kwad/sdk/internal/api/SceneImpl;->adNum:I

    const/4 v0, 0x0

    iput v0, p0, Lcom/kwad/sdk/internal/api/SceneImpl;->screenOrientation:I

    new-instance v0, Lcom/kwad/sdk/internal/api/EcAttribute;

    invoke-direct {v0}, Lcom/kwad/sdk/internal/api/EcAttribute;-><init>()V

    iput-object v0, p0, Lcom/kwad/sdk/internal/api/SceneImpl;->mEcAttribute:Lcom/kwad/sdk/internal/api/EcAttribute;

    iput-wide p1, p0, Lcom/kwad/sdk/internal/api/SceneImpl;->posId:J

    iput-wide p1, p0, Lcom/kwad/sdk/internal/api/SceneImpl;->entryScene:J

    invoke-static {}, Lcom/kwad/sdk/utils/bf;->getPosId()J

    move-result-wide p1

    const-wide/16 v0, 0x0

    cmp-long p1, p1, v0

    if-eqz p1, :cond_0

    invoke-static {}, Lcom/kwad/sdk/utils/bf;->getPosId()J

    move-result-wide p1

    iput-wide p1, p0, Lcom/kwad/sdk/internal/api/SceneImpl;->posId:J

    :cond_0
    return-void
.end method

.method public static covert(Lcom/kwad/sdk/api/KsScene;)Lcom/kwad/sdk/internal/api/SceneImpl;
    .locals 5

    instance-of v0, p0, Lcom/kwad/sdk/internal/api/SceneImpl;

    if-eqz v0, :cond_0

    check-cast p0, Lcom/kwad/sdk/internal/api/SceneImpl;

    return-object p0

    :cond_0
    new-instance v0, Lcom/kwad/sdk/internal/api/SceneImpl;

    invoke-direct {v0}, Lcom/kwad/sdk/internal/api/SceneImpl;-><init>()V

    invoke-interface {p0}, Lcom/kwad/sdk/api/KsScene;->getPosId()J

    move-result-wide v1

    iput-wide v1, v0, Lcom/kwad/sdk/internal/api/SceneImpl;->posId:J

    invoke-interface {p0}, Lcom/kwad/sdk/api/KsScene;->getPosId()J

    move-result-wide v1

    iput-wide v1, v0, Lcom/kwad/sdk/internal/api/SceneImpl;->entryScene:J

    invoke-interface {p0}, Lcom/kwad/sdk/api/KsScene;->getAdNum()I

    move-result v1

    iput v1, v0, Lcom/kwad/sdk/internal/api/SceneImpl;->adNum:I

    invoke-interface {p0}, Lcom/kwad/sdk/api/KsScene;->getAction()I

    move-result v1

    iput v1, v0, Lcom/kwad/sdk/internal/api/SceneImpl;->action:I

    invoke-interface {p0}, Lcom/kwad/sdk/api/KsScene;->getWidth()I

    move-result v1

    iput v1, v0, Lcom/kwad/sdk/internal/api/SceneImpl;->width:I

    invoke-interface {p0}, Lcom/kwad/sdk/api/KsScene;->getHeight()I

    move-result v1

    iput v1, v0, Lcom/kwad/sdk/internal/api/SceneImpl;->height:I

    invoke-interface {p0}, Lcom/kwad/sdk/api/KsScene;->getAdStyle()I

    move-result v1

    iput v1, v0, Lcom/kwad/sdk/internal/api/SceneImpl;->adStyle:I

    invoke-static {p0}, Lcom/kwad/sdk/internal/api/SceneImpl;->getScreenOrientation(Lcom/kwad/sdk/api/KsScene;)I

    move-result v1

    iput v1, v0, Lcom/kwad/sdk/internal/api/SceneImpl;->screenOrientation:I

    invoke-static {p0}, Lcom/kwad/sdk/internal/api/SceneImpl;->getBackUrl(Lcom/kwad/sdk/api/KsScene;)Ljava/lang/String;

    move-result-object v1

    iput-object v1, v0, Lcom/kwad/sdk/internal/api/SceneImpl;->backUrl:Ljava/lang/String;

    iget-object v1, v0, Lcom/kwad/sdk/internal/api/SceneImpl;->mEcAttribute:Lcom/kwad/sdk/internal/api/EcAttribute;

    invoke-static {p0}, Lcom/kwad/sdk/internal/api/SceneImpl;->getPromoteId(Lcom/kwad/sdk/api/KsScene;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/kwad/sdk/internal/api/EcAttribute;->setPromoteId(Ljava/lang/String;)V

    iget-object v1, v0, Lcom/kwad/sdk/internal/api/SceneImpl;->mEcAttribute:Lcom/kwad/sdk/internal/api/EcAttribute;

    invoke-static {p0}, Lcom/kwad/sdk/internal/api/SceneImpl;->getComment(Lcom/kwad/sdk/api/KsScene;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/kwad/sdk/internal/api/EcAttribute;->setComment(Ljava/lang/String;)V

    iget-object v1, v0, Lcom/kwad/sdk/internal/api/SceneImpl;->mEcAttribute:Lcom/kwad/sdk/internal/api/EcAttribute;

    invoke-static {p0}, Lcom/kwad/sdk/internal/api/SceneImpl;->getUserCommRateBuying(Lcom/kwad/sdk/api/KsScene;)J

    move-result-wide v2

    invoke-virtual {v1, v2, v3}, Lcom/kwad/sdk/internal/api/EcAttribute;->setUserCommRateBuying(J)V

    iget-object v1, v0, Lcom/kwad/sdk/internal/api/SceneImpl;->mEcAttribute:Lcom/kwad/sdk/internal/api/EcAttribute;

    invoke-static {p0}, Lcom/kwad/sdk/internal/api/SceneImpl;->getUserCommRateSharing(Lcom/kwad/sdk/api/KsScene;)J

    move-result-wide v2

    invoke-virtual {v1, v2, v3}, Lcom/kwad/sdk/internal/api/EcAttribute;->setUserCommRateSharing(J)V

    invoke-static {}, Lcom/kwad/sdk/utils/bf;->getPosId()J

    move-result-wide v1

    const-wide/16 v3, 0x0

    cmp-long p0, v1, v3

    if-eqz p0, :cond_1

    invoke-static {}, Lcom/kwad/sdk/utils/bf;->getPosId()J

    move-result-wide v1

    iput-wide v1, v0, Lcom/kwad/sdk/internal/api/SceneImpl;->posId:J

    :cond_1
    return-object v0
.end method

.method public static getBackUrl(Lcom/kwad/sdk/api/KsScene;)Ljava/lang/String;
    .locals 1

    const-string v0, ""

    if-nez p0, :cond_0

    return-object v0

    :cond_0
    :try_start_0
    invoke-interface {p0}, Lcom/kwad/sdk/api/KsScene;->getBackUrl()Ljava/lang/String;

    move-result-object v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    return-object v0
.end method

.method private static getComment(Lcom/kwad/sdk/api/KsScene;)Ljava/lang/String;
    .locals 1

    const-string v0, ""

    if-nez p0, :cond_0

    return-object v0

    :cond_0
    :try_start_0
    invoke-interface {p0}, Lcom/kwad/sdk/api/KsScene;->getComment()Ljava/lang/String;

    move-result-object v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    return-object v0
.end method

.method private static getPromoteId(Lcom/kwad/sdk/api/KsScene;)Ljava/lang/String;
    .locals 1

    const-string v0, ""

    if-nez p0, :cond_0

    return-object v0

    :cond_0
    :try_start_0
    invoke-interface {p0}, Lcom/kwad/sdk/api/KsScene;->getPromoteId()Ljava/lang/String;

    move-result-object v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    return-object v0
.end method

.method private static getScreenOrientation(Lcom/kwad/sdk/api/KsScene;)I
    .locals 0

    :try_start_0
    invoke-interface {p0}, Lcom/kwad/sdk/api/KsScene;->getScreenOrientation()I

    move-result p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return p0

    :catchall_0
    const/4 p0, 0x0

    return p0
.end method

.method public static getSerialVersionUID()J
    .locals 2

    const-wide v0, 0x14d7a2ae591e943L

    return-wide v0
.end method

.method public static getUserCommRateBuying(Lcom/kwad/sdk/api/KsScene;)J
    .locals 2

    const-wide/16 v0, 0x0

    if-nez p0, :cond_0

    return-wide v0

    :cond_0
    :try_start_0
    invoke-interface {p0}, Lcom/kwad/sdk/api/KsScene;->getUserCommRateBuying()J

    move-result-wide v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    return-wide v0
.end method

.method public static getUserCommRateSharing(Lcom/kwad/sdk/api/KsScene;)J
    .locals 2

    const-wide/16 v0, 0x0

    if-nez p0, :cond_0

    return-wide v0

    :cond_0
    :try_start_0
    invoke-interface {p0}, Lcom/kwad/sdk/api/KsScene;->getUserCommRateSharing()J

    move-result-wide v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    return-wide v0
.end method

.method public static register()V
    .locals 2

    const-class v0, Lcom/kwad/sdk/api/KsScene;

    const-class v1, Lcom/kwad/sdk/internal/api/SceneImpl;

    invoke-static {v0, v1}, Lcom/kwad/sdk/service/b;->b(Ljava/lang/Class;Ljava/lang/Class;)V

    return-void
.end method


# virtual methods
.method public afterParseJson(Lorg/json/JSONObject;)V
    .locals 1

    invoke-super {p0, p1}, Lcom/kwad/sdk/core/response/a/a;->afterParseJson(Lorg/json/JSONObject;)V

    if-nez p1, :cond_0

    return-void

    :cond_0
    const-string v0, "extraData"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/kwad/sdk/utils/u;->parseJSON2MapString(Ljava/lang/String;)Ljava/util/Map;

    move-result-object p1

    iput-object p1, p0, Lcom/kwad/sdk/internal/api/SceneImpl;->rewardCallbackExtraData:Ljava/util/Map;

    return-void
.end method

.method public afterToJson(Lorg/json/JSONObject;)V
    .locals 2

    invoke-super {p0, p1}, Lcom/kwad/sdk/core/response/a/a;->afterToJson(Lorg/json/JSONObject;)V

    iget-object v0, p0, Lcom/kwad/sdk/internal/api/SceneImpl;->rewardCallbackExtraData:Ljava/util/Map;

    invoke-static {v0}, Lcom/kwad/sdk/utils/u;->parseMap2JSON(Ljava/util/Map;)Lorg/json/JSONObject;

    move-result-object v0

    const-string v1, "extraData"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/u;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Lorg/json/JSONObject;)V

    return-void
.end method

.method public clone()Lcom/kwad/sdk/internal/api/SceneImpl;
    .locals 3

    invoke-virtual {p0}, Lcom/kwad/sdk/internal/api/SceneImpl;->toJson()Lorg/json/JSONObject;

    move-result-object v0

    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v0

    :try_start_0
    new-instance v1, Lcom/kwad/sdk/internal/api/SceneImpl;

    invoke-direct {v1}, Lcom/kwad/sdk/internal/api/SceneImpl;-><init>()V

    new-instance v2, Lorg/json/JSONObject;

    invoke-direct {v2, v0}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-virtual {v1, v2}, Lcom/kwad/sdk/internal/api/SceneImpl;->parseJson(Lorg/json/JSONObject;)V
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    return-object v1

    :catch_0
    move-exception v0

    invoke-static {v0}, Lcom/kwad/sdk/core/e/c;->printStackTraceOnly(Ljava/lang/Throwable;)V

    new-instance v0, Lcom/kwad/sdk/internal/api/SceneImpl;

    invoke-direct {v0}, Lcom/kwad/sdk/internal/api/SceneImpl;-><init>()V

    return-object v0
.end method

.method public bridge synthetic clone()Ljava/lang/Object;
    .locals 1

    invoke-virtual {p0}, Lcom/kwad/sdk/internal/api/SceneImpl;->clone()Lcom/kwad/sdk/internal/api/SceneImpl;

    move-result-object v0

    return-object v0
.end method

.method public getAction()I
    .locals 1

    iget v0, p0, Lcom/kwad/sdk/internal/api/SceneImpl;->action:I

    return v0
.end method

.method public getAdNum()I
    .locals 1

    iget v0, p0, Lcom/kwad/sdk/internal/api/SceneImpl;->adNum:I

    return v0
.end method

.method public getAdStyle()I
    .locals 1

    iget v0, p0, Lcom/kwad/sdk/internal/api/SceneImpl;->adStyle:I

    return v0
.end method

.method public getBackUrl()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/internal/api/SceneImpl;->backUrl:Ljava/lang/String;

    return-object v0
.end method

.method public getBidResponse()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/internal/api/SceneImpl;->bidResponse:Ljava/lang/String;

    return-object v0
.end method

.method public getBidResponseV2()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/internal/api/SceneImpl;->bidResponseV2:Ljava/lang/String;

    return-object v0
.end method

.method public getComment()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/internal/api/SceneImpl;->mEcAttribute:Lcom/kwad/sdk/internal/api/EcAttribute;

    invoke-virtual {v0}, Lcom/kwad/sdk/internal/api/EcAttribute;->getComment()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getHeight()I
    .locals 1

    iget v0, p0, Lcom/kwad/sdk/internal/api/SceneImpl;->height:I

    return v0
.end method

.method public getPageScene()I
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/internal/api/SceneImpl;->urlPackage:Lcom/kwad/sdk/core/scene/URLPackage;

    if-nez v0, :cond_0

    const/4 v0, 0x0

    return v0

    :cond_0
    iget v0, v0, Lcom/kwad/sdk/core/scene/URLPackage;->page:I

    return v0
.end method

.method public getPosId()J
    .locals 2

    iget-wide v0, p0, Lcom/kwad/sdk/internal/api/SceneImpl;->posId:J

    return-wide v0
.end method

.method public getPromoteId()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/internal/api/SceneImpl;->mEcAttribute:Lcom/kwad/sdk/internal/api/EcAttribute;

    invoke-virtual {v0}, Lcom/kwad/sdk/internal/api/EcAttribute;->getPromoteId()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getRewardCallbackExtraData()Ljava/util/Map;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    iget-object v0, p0, Lcom/kwad/sdk/internal/api/SceneImpl;->rewardCallbackExtraData:Ljava/util/Map;

    return-object v0
.end method

.method public getScreenOrientation()I
    .locals 1

    iget v0, p0, Lcom/kwad/sdk/internal/api/SceneImpl;->screenOrientation:I

    return v0
.end method

.method public getUrlPackage()Lcom/kwad/sdk/core/scene/URLPackage;
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/internal/api/SceneImpl;->urlPackage:Lcom/kwad/sdk/core/scene/URLPackage;

    return-object v0
.end method

.method public getUserCommRateBuying()J
    .locals 2

    iget-object v0, p0, Lcom/kwad/sdk/internal/api/SceneImpl;->mEcAttribute:Lcom/kwad/sdk/internal/api/EcAttribute;

    invoke-virtual {v0}, Lcom/kwad/sdk/internal/api/EcAttribute;->getUserCommRateBuying()J

    move-result-wide v0

    return-wide v0
.end method

.method public getUserCommRateSharing()J
    .locals 2

    iget-object v0, p0, Lcom/kwad/sdk/internal/api/SceneImpl;->mEcAttribute:Lcom/kwad/sdk/internal/api/EcAttribute;

    invoke-virtual {v0}, Lcom/kwad/sdk/internal/api/EcAttribute;->getUserCommRateSharing()J

    move-result-wide v0

    return-wide v0
.end method

.method public getWidth()I
    .locals 1

    iget v0, p0, Lcom/kwad/sdk/internal/api/SceneImpl;->width:I

    return v0
.end method

.method public needShowMiniWindow(Z)V
    .locals 0

    return-void
.end method

.method public setAction(I)V
    .locals 0

    iput p1, p0, Lcom/kwad/sdk/internal/api/SceneImpl;->action:I

    return-void
.end method

.method public setAdNum(I)V
    .locals 0

    iput p1, p0, Lcom/kwad/sdk/internal/api/SceneImpl;->adNum:I

    return-void
.end method

.method public setAdStyle(I)V
    .locals 0

    iput p1, p0, Lcom/kwad/sdk/internal/api/SceneImpl;->adStyle:I

    return-void
.end method

.method public setBackUrl(Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/sdk/internal/api/SceneImpl;->backUrl:Ljava/lang/String;

    return-void
.end method

.method public setBidResponse(Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/sdk/internal/api/SceneImpl;->bidResponse:Ljava/lang/String;

    return-void
.end method

.method public setBidResponseV2(Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/sdk/internal/api/SceneImpl;->bidResponseV2:Ljava/lang/String;

    return-void
.end method

.method public setComment(Ljava/lang/String;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/internal/api/SceneImpl;->mEcAttribute:Lcom/kwad/sdk/internal/api/EcAttribute;

    invoke-virtual {v0, p1}, Lcom/kwad/sdk/internal/api/EcAttribute;->setComment(Ljava/lang/String;)V

    return-void
.end method

.method public setHeight(I)V
    .locals 0

    iput p1, p0, Lcom/kwad/sdk/internal/api/SceneImpl;->height:I

    return-void
.end method

.method public setKsAdLabel(Lcom/kwad/sdk/api/model/IKsAdLabel;)V
    .locals 3

    if-nez p1, :cond_0

    return-void

    :cond_0
    new-instance v0, Lcom/kwad/sdk/internal/api/a;

    invoke-direct {v0}, Lcom/kwad/sdk/internal/api/a;-><init>()V

    iput-object v0, p0, Lcom/kwad/sdk/internal/api/SceneImpl;->mKsAdLabel:Lcom/kwad/sdk/internal/api/a;

    invoke-interface {p1}, Lcom/kwad/sdk/api/model/IKsAdLabel;->getThirdAge()I

    move-result v1

    iput v1, v0, Lcom/kwad/sdk/internal/api/a;->ajr:I

    iget-object v0, p0, Lcom/kwad/sdk/internal/api/SceneImpl;->mKsAdLabel:Lcom/kwad/sdk/internal/api/a;

    invoke-interface {p1}, Lcom/kwad/sdk/api/model/IKsAdLabel;->getThirdGender()I

    move-result v1

    iput v1, v0, Lcom/kwad/sdk/internal/api/a;->ajs:I

    iget-object v0, p0, Lcom/kwad/sdk/internal/api/SceneImpl;->mKsAdLabel:Lcom/kwad/sdk/internal/api/a;

    invoke-interface {p1}, Lcom/kwad/sdk/api/model/IKsAdLabel;->getThirdInterest()Ljava/lang/String;

    move-result-object v1

    iput-object v1, v0, Lcom/kwad/sdk/internal/api/a;->ajt:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/internal/api/SceneImpl;->mKsAdLabel:Lcom/kwad/sdk/internal/api/a;

    invoke-interface {p1}, Lcom/kwad/sdk/api/model/IKsAdLabel;->getPrevTitle()Ljava/lang/String;

    move-result-object v1

    iput-object v1, v0, Lcom/kwad/sdk/internal/api/a;->aju:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/internal/api/SceneImpl;->mKsAdLabel:Lcom/kwad/sdk/internal/api/a;

    invoke-interface {p1}, Lcom/kwad/sdk/api/model/IKsAdLabel;->getPostTitle()Ljava/lang/String;

    move-result-object v1

    iput-object v1, v0, Lcom/kwad/sdk/internal/api/a;->ajv:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/internal/api/SceneImpl;->mKsAdLabel:Lcom/kwad/sdk/internal/api/a;

    invoke-interface {p1}, Lcom/kwad/sdk/api/model/IKsAdLabel;->getHistoryTitle()Ljava/lang/String;

    move-result-object v1

    iput-object v1, v0, Lcom/kwad/sdk/internal/api/a;->ajw:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/internal/api/SceneImpl;->mKsAdLabel:Lcom/kwad/sdk/internal/api/a;

    invoke-interface {p1}, Lcom/kwad/sdk/api/model/IKsAdLabel;->getChannel()Ljava/lang/String;

    move-result-object v1

    iput-object v1, v0, Lcom/kwad/sdk/internal/api/a;->ajx:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/internal/api/SceneImpl;->mKsAdLabel:Lcom/kwad/sdk/internal/api/a;

    invoke-interface {p1}, Lcom/kwad/sdk/api/model/IKsAdLabel;->getCpmBidFloor()J

    move-result-wide v1

    iput-wide v1, v0, Lcom/kwad/sdk/internal/api/a;->ajy:J

    return-void
.end method

.method public setNativeAdExtraData(Lcom/kwad/sdk/api/model/NativeAdExtraData;)V
    .locals 2

    if-nez p1, :cond_0

    return-void

    :cond_0
    new-instance v0, Lcom/kwad/sdk/internal/api/NativeAdExtraDataImpl;

    invoke-direct {v0}, Lcom/kwad/sdk/internal/api/NativeAdExtraDataImpl;-><init>()V

    iput-object v0, p0, Lcom/kwad/sdk/internal/api/SceneImpl;->nativeAdExtraData:Lcom/kwad/sdk/internal/api/NativeAdExtraDataImpl;

    :try_start_0
    invoke-virtual {p1}, Lcom/kwad/sdk/api/model/NativeAdExtraData;->isEnableShake()Z

    move-result v1

    iput-boolean v1, v0, Lcom/kwad/sdk/internal/api/NativeAdExtraDataImpl;->enableShake:Z

    iget-object v0, p0, Lcom/kwad/sdk/internal/api/SceneImpl;->nativeAdExtraData:Lcom/kwad/sdk/internal/api/NativeAdExtraDataImpl;

    invoke-virtual {p1}, Lcom/kwad/sdk/api/model/NativeAdExtraData;->getShowLiveStyle()I

    move-result v1

    iput v1, v0, Lcom/kwad/sdk/internal/api/NativeAdExtraDataImpl;->showLiveStyle:I

    iget-object v0, p0, Lcom/kwad/sdk/internal/api/SceneImpl;->nativeAdExtraData:Lcom/kwad/sdk/internal/api/NativeAdExtraDataImpl;

    invoke-virtual {p1}, Lcom/kwad/sdk/api/model/NativeAdExtraData;->getShowLiveStatus()I

    move-result p1

    iput p1, v0, Lcom/kwad/sdk/internal/api/NativeAdExtraDataImpl;->showLiveStatus:I
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    return-void
.end method

.method public setPosId(J)V
    .locals 0

    iput-wide p1, p0, Lcom/kwad/sdk/internal/api/SceneImpl;->posId:J

    iput-wide p1, p0, Lcom/kwad/sdk/internal/api/SceneImpl;->entryScene:J

    return-void
.end method

.method public setPromoteId(Ljava/lang/String;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/internal/api/SceneImpl;->mEcAttribute:Lcom/kwad/sdk/internal/api/EcAttribute;

    invoke-virtual {v0, p1}, Lcom/kwad/sdk/internal/api/EcAttribute;->setPromoteId(Ljava/lang/String;)V

    return-void
.end method

.method public setRewardCallbackExtraData(Ljava/util/Map;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    iput-object p1, p0, Lcom/kwad/sdk/internal/api/SceneImpl;->rewardCallbackExtraData:Ljava/util/Map;

    return-void
.end method

.method public setScreenOrientation(I)V
    .locals 0

    iput p1, p0, Lcom/kwad/sdk/internal/api/SceneImpl;->screenOrientation:I

    return-void
.end method

.method public setSplashExtraData(Lcom/kwad/sdk/api/model/SplashAdExtraData;)V
    .locals 2

    if-nez p1, :cond_0

    return-void

    :cond_0
    new-instance v0, Lcom/kwad/sdk/internal/api/b;

    invoke-direct {v0}, Lcom/kwad/sdk/internal/api/b;-><init>()V

    iput-object v0, p0, Lcom/kwad/sdk/internal/api/SceneImpl;->splashExtraData:Lcom/kwad/sdk/internal/api/b;

    invoke-virtual {p1}, Lcom/kwad/sdk/api/model/SplashAdExtraData;->getDisableShakeStatus()Z

    move-result v1

    iput-boolean v1, v0, Lcom/kwad/sdk/internal/api/b;->disableShake:Z

    iget-object v0, p0, Lcom/kwad/sdk/internal/api/SceneImpl;->splashExtraData:Lcom/kwad/sdk/internal/api/b;

    invoke-virtual {p1}, Lcom/kwad/sdk/api/model/SplashAdExtraData;->getDisableSlideStatus()Z

    move-result v1

    iput-boolean v1, v0, Lcom/kwad/sdk/internal/api/b;->disableSlide:Z

    iget-object v0, p0, Lcom/kwad/sdk/internal/api/SceneImpl;->splashExtraData:Lcom/kwad/sdk/internal/api/b;

    invoke-virtual {p1}, Lcom/kwad/sdk/api/model/SplashAdExtraData;->getDisableRotateStatus()Z

    move-result p1

    iput-boolean p1, v0, Lcom/kwad/sdk/internal/api/b;->disableRotate:Z

    return-void
.end method

.method public setUrlPackage(Lcom/kwad/sdk/core/scene/URLPackage;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/sdk/internal/api/SceneImpl;->urlPackage:Lcom/kwad/sdk/core/scene/URLPackage;

    return-void
.end method

.method public setUserCommRateBuying(I)V
    .locals 3

    iget-object v0, p0, Lcom/kwad/sdk/internal/api/SceneImpl;->mEcAttribute:Lcom/kwad/sdk/internal/api/EcAttribute;

    int-to-long v1, p1

    invoke-virtual {v0, v1, v2}, Lcom/kwad/sdk/internal/api/EcAttribute;->setUserCommRateBuying(J)V

    return-void
.end method

.method public setUserCommRateSharing(I)V
    .locals 3

    iget-object v0, p0, Lcom/kwad/sdk/internal/api/SceneImpl;->mEcAttribute:Lcom/kwad/sdk/internal/api/EcAttribute;

    int-to-long v1, p1

    invoke-virtual {v0, v1, v2}, Lcom/kwad/sdk/internal/api/EcAttribute;->setUserCommRateSharing(J)V

    return-void
.end method

.method public setWidth(I)V
    .locals 0

    iput p1, p0, Lcom/kwad/sdk/internal/api/SceneImpl;->width:I

    return-void
.end method

.method public toJson()Lorg/json/JSONObject;
    .locals 5

    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    iget-wide v1, p0, Lcom/kwad/sdk/internal/api/SceneImpl;->posId:J

    const-string v3, "posId"

    invoke-static {v0, v3, v1, v2}, Lcom/kwad/sdk/utils/u;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    iget-wide v1, p0, Lcom/kwad/sdk/internal/api/SceneImpl;->entryScene:J

    const-string v3, "entryScene"

    invoke-static {v0, v3, v1, v2}, Lcom/kwad/sdk/utils/u;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    iget v1, p0, Lcom/kwad/sdk/internal/api/SceneImpl;->adNum:I

    const-string v2, "adNum"

    invoke-static {v0, v2, v1}, Lcom/kwad/sdk/utils/u;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    iget v1, p0, Lcom/kwad/sdk/internal/api/SceneImpl;->action:I

    const-string v2, "action"

    invoke-static {v0, v2, v1}, Lcom/kwad/sdk/utils/u;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    iget v1, p0, Lcom/kwad/sdk/internal/api/SceneImpl;->width:I

    const-string v2, "width"

    invoke-static {v0, v2, v1}, Lcom/kwad/sdk/utils/u;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    iget v1, p0, Lcom/kwad/sdk/internal/api/SceneImpl;->height:I

    const-string v2, "height"

    invoke-static {v0, v2, v1}, Lcom/kwad/sdk/utils/u;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    iget-object v1, p0, Lcom/kwad/sdk/internal/api/SceneImpl;->mKsAdLabel:Lcom/kwad/sdk/internal/api/a;

    if-eqz v1, :cond_0

    iget-wide v1, v1, Lcom/kwad/sdk/internal/api/a;->ajy:J

    const-wide/16 v3, 0x0

    cmp-long v1, v1, v3

    if-eqz v1, :cond_0

    iget-object v1, p0, Lcom/kwad/sdk/internal/api/SceneImpl;->mKsAdLabel:Lcom/kwad/sdk/internal/api/a;

    iget-wide v1, v1, Lcom/kwad/sdk/internal/api/a;->ajy:J

    const-string v3, "cpmBidFloor"

    invoke-static {v0, v3, v1, v2}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    :cond_0
    iget v1, p0, Lcom/kwad/sdk/internal/api/SceneImpl;->adStyle:I

    const-string v2, "adStyle"

    invoke-static {v0, v2, v1}, Lcom/kwad/sdk/utils/u;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    iget-object v1, p0, Lcom/kwad/sdk/internal/api/SceneImpl;->urlPackage:Lcom/kwad/sdk/core/scene/URLPackage;

    if-eqz v1, :cond_1

    invoke-virtual {v1}, Lcom/kwad/sdk/core/scene/URLPackage;->toJson()Lorg/json/JSONObject;

    move-result-object v1

    const-string v2, "urlPackage"

    invoke-static {v0, v2, v1}, Lcom/kwad/sdk/utils/u;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Lorg/json/JSONObject;)V

    :cond_1
    iget-object v1, p0, Lcom/kwad/sdk/internal/api/SceneImpl;->mEcAttribute:Lcom/kwad/sdk/internal/api/EcAttribute;

    invoke-virtual {v1}, Lcom/kwad/sdk/internal/api/EcAttribute;->getPromoteId()Ljava/lang/String;

    move-result-object v1

    const-string v2, "promoteId"

    invoke-static {v0, v2, v1}, Lcom/kwad/sdk/utils/u;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    iget-object v1, p0, Lcom/kwad/sdk/internal/api/SceneImpl;->mEcAttribute:Lcom/kwad/sdk/internal/api/EcAttribute;

    invoke-virtual {v1}, Lcom/kwad/sdk/internal/api/EcAttribute;->getComment()Ljava/lang/String;

    move-result-object v1

    const-string v2, "comment"

    invoke-static {v0, v2, v1}, Lcom/kwad/sdk/utils/u;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    iget-object v1, p0, Lcom/kwad/sdk/internal/api/SceneImpl;->backUrl:Ljava/lang/String;

    const-string v2, "backUrl"

    invoke-static {v0, v2, v1}, Lcom/kwad/sdk/utils/u;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    iget-object v1, p0, Lcom/kwad/sdk/internal/api/SceneImpl;->mEcAttribute:Lcom/kwad/sdk/internal/api/EcAttribute;

    invoke-virtual {v1}, Lcom/kwad/sdk/internal/api/EcAttribute;->getUserCommRateBuying()J

    move-result-wide v1

    const-string v3, "userCommRateBuying"

    invoke-static {v0, v3, v1, v2}, Lcom/kwad/sdk/utils/u;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    iget-object v1, p0, Lcom/kwad/sdk/internal/api/SceneImpl;->mEcAttribute:Lcom/kwad/sdk/internal/api/EcAttribute;

    invoke-virtual {v1}, Lcom/kwad/sdk/internal/api/EcAttribute;->getUserCommRateSharing()J

    move-result-wide v1

    const-string v3, "userCommRateSharing"

    invoke-static {v0, v3, v1, v2}, Lcom/kwad/sdk/utils/u;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    iget v1, p0, Lcom/kwad/sdk/internal/api/SceneImpl;->screenOrientation:I

    const-string v2, "screenOrientation"

    invoke-static {v0, v2, v1}, Lcom/kwad/sdk/utils/u;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    return-object v0
.end method
