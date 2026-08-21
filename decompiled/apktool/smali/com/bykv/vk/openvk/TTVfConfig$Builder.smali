.class public Lcom/bykv/vk/openvk/TTVfConfig$Builder;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/bykv/vk/openvk/TTVfConfig;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x9
    name = "Builder"
.end annotation


# instance fields
.field private b:Z

.field private bm:[I

.field private c:I

.field private df:Ljava/lang/String;

.field private f:Z

.field private fw:Z

.field private hq:Z

.field private oh:[Ljava/lang/String;

.field private pp:Ljava/lang/String;

.field private pt:Ljava/lang/String;

.field private q:Z

.field private qx:Lcom/bykv/vk/openvk/live/ITTLiveTokenInjectionAuth;

.field private r:I

.field private rg:Ljava/lang/String;

.field private rz:Z

.field private un:I

.field private ux:Z

.field private v:Lcom/bykv/vk/openvk/TTCustomController;

.field private z:I


# direct methods
.method public constructor <init>()V
    .locals 2

    .line 224
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    .line 227
    iput-boolean v0, p0, Lcom/bykv/vk/openvk/TTVfConfig$Builder;->q:Z

    .line 232
    iput v0, p0, Lcom/bykv/vk/openvk/TTVfConfig$Builder;->c:I

    const/4 v1, 0x1

    .line 233
    iput-boolean v1, p0, Lcom/bykv/vk/openvk/TTVfConfig$Builder;->fw:Z

    .line 234
    iput-boolean v0, p0, Lcom/bykv/vk/openvk/TTVfConfig$Builder;->ux:Z

    .line 235
    iput-boolean v0, p0, Lcom/bykv/vk/openvk/TTVfConfig$Builder;->rz:Z

    .line 237
    iput-boolean v1, p0, Lcom/bykv/vk/openvk/TTVfConfig$Builder;->b:Z

    .line 238
    iput-boolean v0, p0, Lcom/bykv/vk/openvk/TTVfConfig$Builder;->hq:Z

    .line 240
    iput-boolean v0, p0, Lcom/bykv/vk/openvk/TTVfConfig$Builder;->f:Z

    const/4 v1, 0x2

    .line 243
    iput v1, p0, Lcom/bykv/vk/openvk/TTVfConfig$Builder;->z:I

    .line 244
    iput v0, p0, Lcom/bykv/vk/openvk/TTVfConfig$Builder;->r:I

    return-void
.end method


# virtual methods
.method public allowShowNotify(Z)Lcom/bykv/vk/openvk/TTVfConfig$Builder;
    .locals 0

    .line 285
    iput-boolean p1, p0, Lcom/bykv/vk/openvk/TTVfConfig$Builder;->fw:Z

    return-object p0
.end method

.method public allowShowPageWhenScreenLock(Z)Lcom/bykv/vk/openvk/TTVfConfig$Builder;
    .locals 0
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    .line 296
    iput-boolean p1, p0, Lcom/bykv/vk/openvk/TTVfConfig$Builder;->rz:Z

    return-object p0
.end method

.method public appId(Ljava/lang/String;)Lcom/bykv/vk/openvk/TTVfConfig$Builder;
    .locals 0

    .line 255
    iput-object p1, p0, Lcom/bykv/vk/openvk/TTVfConfig$Builder;->rg:Ljava/lang/String;

    return-object p0
.end method

.method public appName(Ljava/lang/String;)Lcom/bykv/vk/openvk/TTVfConfig$Builder;
    .locals 0

    .line 260
    iput-object p1, p0, Lcom/bykv/vk/openvk/TTVfConfig$Builder;->df:Ljava/lang/String;

    return-object p0
.end method

.method public asyncInit(Z)Lcom/bykv/vk/openvk/TTVfConfig$Builder;
    .locals 0

    .line 321
    iput-boolean p1, p0, Lcom/bykv/vk/openvk/TTVfConfig$Builder;->f:Z

    return-object p0
.end method

.method public build()Lcom/bykv/vk/openvk/TTVfConfig;
    .locals 3

    .line 346
    new-instance v0, Lcom/bykv/vk/openvk/TTVfConfig;

    const/4 v1, 0x0

    invoke-direct {v0, v1}, Lcom/bykv/vk/openvk/TTVfConfig;-><init>(Lcom/bykv/vk/openvk/TTVfConfig$1;)V

    .line 347
    iget-object v1, p0, Lcom/bykv/vk/openvk/TTVfConfig$Builder;->rg:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/bykv/vk/openvk/TTVfConfig;->setAppId(Ljava/lang/String;)V

    .line 348
    iget-object v1, p0, Lcom/bykv/vk/openvk/TTVfConfig$Builder;->df:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/bykv/vk/openvk/TTVfConfig;->setAppName(Ljava/lang/String;)V

    .line 349
    iget-boolean v1, p0, Lcom/bykv/vk/openvk/TTVfConfig$Builder;->q:Z

    invoke-virtual {v0, v1}, Lcom/bykv/vk/openvk/TTVfConfig;->setPaid(Z)V

    .line 350
    iget-object v1, p0, Lcom/bykv/vk/openvk/TTVfConfig$Builder;->pt:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/bykv/vk/openvk/TTVfConfig;->setKeywords(Ljava/lang/String;)V

    .line 351
    iget-object v1, p0, Lcom/bykv/vk/openvk/TTVfConfig$Builder;->pp:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/bykv/vk/openvk/TTVfConfig;->setData(Ljava/lang/String;)V

    .line 352
    iget v1, p0, Lcom/bykv/vk/openvk/TTVfConfig$Builder;->c:I

    invoke-virtual {v0, v1}, Lcom/bykv/vk/openvk/TTVfConfig;->setTitleBarTheme(I)V

    .line 353
    iget-boolean v1, p0, Lcom/bykv/vk/openvk/TTVfConfig$Builder;->fw:Z

    invoke-virtual {v0, v1}, Lcom/bykv/vk/openvk/TTVfConfig;->setAllowShowNotify(Z)V

    .line 354
    iget-boolean v1, p0, Lcom/bykv/vk/openvk/TTVfConfig$Builder;->ux:Z

    invoke-virtual {v0, v1}, Lcom/bykv/vk/openvk/TTVfConfig;->setDebug(Z)V

    .line 355
    iget-boolean v1, p0, Lcom/bykv/vk/openvk/TTVfConfig$Builder;->rz:Z

    invoke-virtual {v0, v1}, Lcom/bykv/vk/openvk/TTVfConfig;->setAllowShowPageWhenScreenLock(Z)V

    .line 356
    iget-object v1, p0, Lcom/bykv/vk/openvk/TTVfConfig$Builder;->bm:[I

    invoke-virtual {v0, v1}, Lcom/bykv/vk/openvk/TTVfConfig;->setDirectDownloadNetworkType([I)V

    .line 357
    iget-boolean v1, p0, Lcom/bykv/vk/openvk/TTVfConfig$Builder;->b:Z

    invoke-virtual {v0, v1}, Lcom/bykv/vk/openvk/TTVfConfig;->setUseTextureView(Z)V

    .line 358
    iget-boolean v1, p0, Lcom/bykv/vk/openvk/TTVfConfig$Builder;->hq:Z

    invoke-virtual {v0, v1}, Lcom/bykv/vk/openvk/TTVfConfig;->setSupportMultiProcess(Z)V

    .line 359
    iget-object v1, p0, Lcom/bykv/vk/openvk/TTVfConfig$Builder;->oh:[Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/bykv/vk/openvk/TTVfConfig;->setNeedClearTaskReset([Ljava/lang/String;)V

    .line 360
    iget-boolean v1, p0, Lcom/bykv/vk/openvk/TTVfConfig$Builder;->f:Z

    invoke-virtual {v0, v1}, Lcom/bykv/vk/openvk/TTVfConfig;->setAsyncInit(Z)V

    .line 361
    iget-object v1, p0, Lcom/bykv/vk/openvk/TTVfConfig$Builder;->v:Lcom/bykv/vk/openvk/TTCustomController;

    invoke-virtual {v0, v1}, Lcom/bykv/vk/openvk/TTVfConfig;->setCustomController(Lcom/bykv/vk/openvk/TTCustomController;)V

    .line 362
    iget v1, p0, Lcom/bykv/vk/openvk/TTVfConfig$Builder;->un:I

    invoke-virtual {v0, v1}, Lcom/bykv/vk/openvk/TTVfConfig;->setThemeStatus(I)V

    .line 363
    iget v1, p0, Lcom/bykv/vk/openvk/TTVfConfig$Builder;->z:I

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    const-string v2, "plugin_update_conf"

    invoke-virtual {v0, v2, v1}, Lcom/bykv/vk/openvk/TTVfConfig;->setExtra(Ljava/lang/String;Ljava/lang/Object;)V

    .line 364
    iget v1, p0, Lcom/bykv/vk/openvk/TTVfConfig$Builder;->r:I

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    const-string v2, "age_group"

    invoke-virtual {v0, v2, v1}, Lcom/bykv/vk/openvk/TTVfConfig;->setExtra(Ljava/lang/String;Ljava/lang/Object;)V

    .line 365
    iget-object v1, p0, Lcom/bykv/vk/openvk/TTVfConfig$Builder;->qx:Lcom/bykv/vk/openvk/live/ITTLiveTokenInjectionAuth;

    invoke-virtual {v0, v1}, Lcom/bykv/vk/openvk/TTVfConfig;->setInjectionAuth(Lcom/bykv/vk/openvk/live/ITTLiveTokenInjectionAuth;)V

    return-object v0
.end method

.method public customController(Lcom/bykv/vk/openvk/TTCustomController;)Lcom/bykv/vk/openvk/TTVfConfig$Builder;
    .locals 0

    .line 326
    iput-object p1, p0, Lcom/bykv/vk/openvk/TTVfConfig$Builder;->v:Lcom/bykv/vk/openvk/TTCustomController;

    return-object p0
.end method

.method public data(Ljava/lang/String;)Lcom/bykv/vk/openvk/TTVfConfig$Builder;
    .locals 0

    .line 275
    iput-object p1, p0, Lcom/bykv/vk/openvk/TTVfConfig$Builder;->pp:Ljava/lang/String;

    return-object p0
.end method

.method public debug(Z)Lcom/bykv/vk/openvk/TTVfConfig$Builder;
    .locals 0

    .line 290
    iput-boolean p1, p0, Lcom/bykv/vk/openvk/TTVfConfig$Builder;->ux:Z

    return-object p0
.end method

.method public varargs directDownloadNetworkType([I)Lcom/bykv/vk/openvk/TTVfConfig$Builder;
    .locals 0

    .line 301
    iput-object p1, p0, Lcom/bykv/vk/openvk/TTVfConfig$Builder;->bm:[I

    return-object p0
.end method

.method public injectionAuth(Lcom/bykv/vk/openvk/live/ITTLiveTokenInjectionAuth;)Lcom/bykv/vk/openvk/TTVfConfig$Builder;
    .locals 0

    .line 250
    iput-object p1, p0, Lcom/bykv/vk/openvk/TTVfConfig$Builder;->qx:Lcom/bykv/vk/openvk/live/ITTLiveTokenInjectionAuth;

    return-object p0
.end method

.method public keywords(Ljava/lang/String;)Lcom/bykv/vk/openvk/TTVfConfig$Builder;
    .locals 0

    .line 270
    iput-object p1, p0, Lcom/bykv/vk/openvk/TTVfConfig$Builder;->pt:Ljava/lang/String;

    return-object p0
.end method

.method public varargs needClearTaskReset([Ljava/lang/String;)Lcom/bykv/vk/openvk/TTVfConfig$Builder;
    .locals 0

    .line 316
    iput-object p1, p0, Lcom/bykv/vk/openvk/TTVfConfig$Builder;->oh:[Ljava/lang/String;

    return-object p0
.end method

.method public paid(Z)Lcom/bykv/vk/openvk/TTVfConfig$Builder;
    .locals 0

    .line 265
    iput-boolean p1, p0, Lcom/bykv/vk/openvk/TTVfConfig$Builder;->q:Z

    return-object p0
.end method

.method public setAgeGroup(I)Lcom/bykv/vk/openvk/TTVfConfig$Builder;
    .locals 0

    .line 341
    iput p1, p0, Lcom/bykv/vk/openvk/TTVfConfig$Builder;->r:I

    return-object p0
.end method

.method public setPluginUpdateConfig(I)Lcom/bykv/vk/openvk/TTVfConfig$Builder;
    .locals 0

    .line 336
    iput p1, p0, Lcom/bykv/vk/openvk/TTVfConfig$Builder;->z:I

    return-object p0
.end method

.method public supportMultiProcess(Z)Lcom/bykv/vk/openvk/TTVfConfig$Builder;
    .locals 0

    .line 311
    iput-boolean p1, p0, Lcom/bykv/vk/openvk/TTVfConfig$Builder;->hq:Z

    return-object p0
.end method

.method public themeStatus(I)Lcom/bykv/vk/openvk/TTVfConfig$Builder;
    .locals 0

    .line 331
    iput p1, p0, Lcom/bykv/vk/openvk/TTVfConfig$Builder;->un:I

    return-object p0
.end method

.method public titleBarTheme(I)Lcom/bykv/vk/openvk/TTVfConfig$Builder;
    .locals 0

    .line 280
    iput p1, p0, Lcom/bykv/vk/openvk/TTVfConfig$Builder;->c:I

    return-object p0
.end method

.method public useTextureView(Z)Lcom/bykv/vk/openvk/TTVfConfig$Builder;
    .locals 0

    .line 306
    iput-boolean p1, p0, Lcom/bykv/vk/openvk/TTVfConfig$Builder;->b:Z

    return-object p0
.end method
