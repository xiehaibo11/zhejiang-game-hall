.class public final Lcom/bykv/vk/openvk/TTVfConfig;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/bykv/vk/openvk/AdConfig;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/bykv/vk/openvk/TTVfConfig$Builder;
    }
.end annotation


# instance fields
.field private b:Z

.field private bm:[I

.field private c:I

.field private df:Ljava/lang/String;

.field private f:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;"
        }
    .end annotation
.end field

.field private fw:Z

.field private hq:Z

.field private oh:I

.field private pp:Ljava/lang/String;

.field private pt:Ljava/lang/String;

.field private q:Z

.field private rg:Ljava/lang/String;

.field private rz:Z

.field private un:I

.field private ux:Z

.field private v:Lcom/bykv/vk/openvk/TTCustomController;

.field private z:Lcom/bykv/vk/openvk/live/ITTLiveTokenInjectionAuth;


# direct methods
.method private constructor <init>()V
    .locals 3

    .line 34
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    .line 14
    iput-boolean v0, p0, Lcom/bykv/vk/openvk/TTVfConfig;->q:Z

    .line 19
    iput v0, p0, Lcom/bykv/vk/openvk/TTVfConfig;->c:I

    const/4 v1, 0x1

    .line 20
    iput-boolean v1, p0, Lcom/bykv/vk/openvk/TTVfConfig;->fw:Z

    .line 21
    iput-boolean v0, p0, Lcom/bykv/vk/openvk/TTVfConfig;->ux:Z

    .line 22
    iput-boolean v0, p0, Lcom/bykv/vk/openvk/TTVfConfig;->rz:Z

    .line 24
    iput-boolean v1, p0, Lcom/bykv/vk/openvk/TTVfConfig;->b:Z

    .line 25
    iput-boolean v0, p0, Lcom/bykv/vk/openvk/TTVfConfig;->hq:Z

    .line 28
    iput v0, p0, Lcom/bykv/vk/openvk/TTVfConfig;->oh:I

    .line 29
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    iput-object v0, p0, Lcom/bykv/vk/openvk/TTVfConfig;->f:Ljava/util/Map;

    .line 35
    invoke-static {v1}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v1

    const-string v2, "_sdk_is_p_"

    invoke-interface {v0, v2, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 36
    iget-object v0, p0, Lcom/bykv/vk/openvk/TTVfConfig;->f:Ljava/util/Map;

    const/16 v1, 0x13fa

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    const-string v2, "_sdk_v_c_"

    invoke-interface {v0, v2, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 37
    iget-object v0, p0, Lcom/bykv/vk/openvk/TTVfConfig;->f:Ljava/util/Map;

    const-string v1, "_sdk_v_n_"

    const-string v2, "5.1.1.4"

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 38
    iget-object v0, p0, Lcom/bykv/vk/openvk/TTVfConfig;->f:Ljava/util/Map;

    const-string v1, "_sdk_p_n_"

    const-string v2, "com.bykv.vk"

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    return-void
.end method

.method synthetic constructor <init>(Lcom/bykv/vk/openvk/TTVfConfig$1;)V
    .locals 0

    .line 11
    invoke-direct {p0}, Lcom/bykv/vk/openvk/TTVfConfig;-><init>()V

    return-void
.end method


# virtual methods
.method public getAppId()Ljava/lang/String;
    .locals 1

    .line 50
    iget-object v0, p0, Lcom/bykv/vk/openvk/TTVfConfig;->rg:Ljava/lang/String;

    return-object v0
.end method

.method public getAppName()Ljava/lang/String;
    .locals 1

    .line 58
    iget-object v0, p0, Lcom/bykv/vk/openvk/TTVfConfig;->df:Ljava/lang/String;

    return-object v0
.end method

.method public getCustomController()Lcom/bykv/vk/openvk/TTCustomController;
    .locals 1

    .line 168
    iget-object v0, p0, Lcom/bykv/vk/openvk/TTVfConfig;->v:Lcom/bykv/vk/openvk/TTCustomController;

    return-object v0
.end method

.method public getData()Ljava/lang/String;
    .locals 1

    .line 82
    iget-object v0, p0, Lcom/bykv/vk/openvk/TTVfConfig;->pp:Ljava/lang/String;

    return-object v0
.end method

.method public getDirectDownloadNetworkType()[I
    .locals 1

    .line 122
    iget-object v0, p0, Lcom/bykv/vk/openvk/TTVfConfig;->bm:[I

    return-object v0
.end method

.method public getExtra(Ljava/lang/String;)Ljava/lang/Object;
    .locals 1
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    .line 174
    iget-object v0, p0, Lcom/bykv/vk/openvk/TTVfConfig;->f:Ljava/util/Map;

    invoke-interface {v0, p1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    return-object p1
.end method

.method public getInjectionAuth()Lcom/bykv/vk/openvk/live/ITTLiveTokenInjectionAuth;
    .locals 1

    .line 42
    iget-object v0, p0, Lcom/bykv/vk/openvk/TTVfConfig;->z:Lcom/bykv/vk/openvk/live/ITTLiveTokenInjectionAuth;

    return-object v0
.end method

.method public getKeywords()Ljava/lang/String;
    .locals 1

    .line 74
    iget-object v0, p0, Lcom/bykv/vk/openvk/TTVfConfig;->pt:Ljava/lang/String;

    return-object v0
.end method

.method public getNeedClearTaskReset()[Ljava/lang/String;
    .locals 1
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    const/4 v0, 0x0

    new-array v0, v0, [Ljava/lang/String;

    return-object v0
.end method

.method public getSdkInfo()Lcom/bykv/vk/openvk/AdConfig$SdkInfo;
    .locals 1

    .line 197
    new-instance v0, Lcom/bykv/vk/openvk/TTVfConfig$1;

    invoke-direct {v0, p0}, Lcom/bykv/vk/openvk/TTVfConfig$1;-><init>(Lcom/bykv/vk/openvk/TTVfConfig;)V

    return-object v0
.end method

.method public getThemeStatus()I
    .locals 1

    .line 182
    iget v0, p0, Lcom/bykv/vk/openvk/TTVfConfig;->un:I

    return v0
.end method

.method public getTitleBarTheme()I
    .locals 1

    .line 90
    iget v0, p0, Lcom/bykv/vk/openvk/TTVfConfig;->c:I

    return v0
.end method

.method public isAllowShowNotify()Z
    .locals 1

    .line 98
    iget-boolean v0, p0, Lcom/bykv/vk/openvk/TTVfConfig;->fw:Z

    return v0
.end method

.method public isAllowShowPageWhenScreenLock()Z
    .locals 1

    .line 114
    iget-boolean v0, p0, Lcom/bykv/vk/openvk/TTVfConfig;->rz:Z

    return v0
.end method

.method public isAsyncInit()Z
    .locals 1
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    const/4 v0, 0x1

    return v0
.end method

.method public isDebug()Z
    .locals 1

    .line 106
    iget-boolean v0, p0, Lcom/bykv/vk/openvk/TTVfConfig;->ux:Z

    return v0
.end method

.method public isPaid()Z
    .locals 1

    .line 66
    iget-boolean v0, p0, Lcom/bykv/vk/openvk/TTVfConfig;->q:Z

    return v0
.end method

.method public isSupportMultiProcess()Z
    .locals 1

    .line 138
    iget-boolean v0, p0, Lcom/bykv/vk/openvk/TTVfConfig;->hq:Z

    return v0
.end method

.method public isUseTextureView()Z
    .locals 1

    .line 130
    iget-boolean v0, p0, Lcom/bykv/vk/openvk/TTVfConfig;->b:Z

    return v0
.end method

.method public removeExtra(Ljava/lang/String;)Ljava/lang/Object;
    .locals 1

    .line 187
    iget-object v0, p0, Lcom/bykv/vk/openvk/TTVfConfig;->f:Ljava/util/Map;

    invoke-interface {v0, p1}, Ljava/util/Map;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    return-object p1
.end method

.method public setAgeGroup(I)V
    .locals 2

    .line 160
    iget-object v0, p0, Lcom/bykv/vk/openvk/TTVfConfig;->f:Ljava/util/Map;

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    const-string v1, "age_group"

    invoke-interface {v0, v1, p1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    return-void
.end method

.method public setAllowShowNotify(Z)V
    .locals 0

    .line 102
    iput-boolean p1, p0, Lcom/bykv/vk/openvk/TTVfConfig;->fw:Z

    return-void
.end method

.method public setAllowShowPageWhenScreenLock(Z)V
    .locals 0

    .line 118
    iput-boolean p1, p0, Lcom/bykv/vk/openvk/TTVfConfig;->rz:Z

    return-void
.end method

.method public setAppId(Ljava/lang/String;)V
    .locals 0

    .line 54
    iput-object p1, p0, Lcom/bykv/vk/openvk/TTVfConfig;->rg:Ljava/lang/String;

    return-void
.end method

.method public setAppName(Ljava/lang/String;)V
    .locals 0

    .line 62
    iput-object p1, p0, Lcom/bykv/vk/openvk/TTVfConfig;->df:Ljava/lang/String;

    return-void
.end method

.method public setAsyncInit(Z)V
    .locals 0
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    return-void
.end method

.method public setCustomController(Lcom/bykv/vk/openvk/TTCustomController;)V
    .locals 0

    .line 221
    iput-object p1, p0, Lcom/bykv/vk/openvk/TTVfConfig;->v:Lcom/bykv/vk/openvk/TTCustomController;

    return-void
.end method

.method public setData(Ljava/lang/String;)V
    .locals 0

    .line 86
    iput-object p1, p0, Lcom/bykv/vk/openvk/TTVfConfig;->pp:Ljava/lang/String;

    return-void
.end method

.method public setDebug(Z)V
    .locals 0

    .line 110
    iput-boolean p1, p0, Lcom/bykv/vk/openvk/TTVfConfig;->ux:Z

    return-void
.end method

.method public varargs setDirectDownloadNetworkType([I)V
    .locals 0

    .line 126
    iput-object p1, p0, Lcom/bykv/vk/openvk/TTVfConfig;->bm:[I

    return-void
.end method

.method public setExtra(Ljava/lang/String;Ljava/lang/Object;)V
    .locals 1
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    .line 192
    iget-object v0, p0, Lcom/bykv/vk/openvk/TTVfConfig;->f:Ljava/util/Map;

    invoke-interface {v0, p1, p2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    return-void
.end method

.method public setInjectionAuth(Lcom/bykv/vk/openvk/live/ITTLiveTokenInjectionAuth;)V
    .locals 0

    .line 46
    iput-object p1, p0, Lcom/bykv/vk/openvk/TTVfConfig;->z:Lcom/bykv/vk/openvk/live/ITTLiveTokenInjectionAuth;

    return-void
.end method

.method public setKeywords(Ljava/lang/String;)V
    .locals 0

    .line 78
    iput-object p1, p0, Lcom/bykv/vk/openvk/TTVfConfig;->pt:Ljava/lang/String;

    return-void
.end method

.method public varargs setNeedClearTaskReset([Ljava/lang/String;)V
    .locals 0
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    return-void
.end method

.method public setPaid(Z)V
    .locals 0

    .line 70
    iput-boolean p1, p0, Lcom/bykv/vk/openvk/TTVfConfig;->q:Z

    return-void
.end method

.method public setSupportMultiProcess(Z)V
    .locals 0

    .line 142
    iput-boolean p1, p0, Lcom/bykv/vk/openvk/TTVfConfig;->hq:Z

    return-void
.end method

.method public setThemeStatus(I)V
    .locals 0

    .line 178
    iput p1, p0, Lcom/bykv/vk/openvk/TTVfConfig;->un:I

    return-void
.end method

.method public setTitleBarTheme(I)V
    .locals 0

    .line 94
    iput p1, p0, Lcom/bykv/vk/openvk/TTVfConfig;->c:I

    return-void
.end method

.method public setUseTextureView(Z)V
    .locals 0

    .line 134
    iput-boolean p1, p0, Lcom/bykv/vk/openvk/TTVfConfig;->b:Z

    return-void
.end method
