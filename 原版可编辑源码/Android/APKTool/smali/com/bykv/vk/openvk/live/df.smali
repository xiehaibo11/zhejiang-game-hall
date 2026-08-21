.class public final Lcom/bykv/vk/openvk/live/df;
.super Lcom/bykv/vk/openvk/downloadnew/rg;

# interfaces
.implements Lcom/bykv/vk/openvk/api/proto/Bridge;
.implements Ljava/io/Serializable;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/bykv/vk/openvk/live/df$rg;
    }
.end annotation


# static fields
.field private static final c:Ljava/util/concurrent/atomic/AtomicBoolean;

.field private static final df:Lcom/bykv/vk/openvk/live/df;

.field private static final pp:Ljava/util/concurrent/atomic/AtomicBoolean;

.field private static final pt:Ljava/util/concurrent/atomic/AtomicBoolean;

.field private static final q:Ljava/util/concurrent/atomic/AtomicBoolean;

.field public static rg:Lcom/bykv/vk/openvk/live/df$rg;


# instance fields
.field private fw:Lcom/bykv/vk/openvk/live/core/ITTLiveConfig;

.field private rz:Lcom/bykv/vk/openvk/live/ITTLiveTokenInjectionAuth;

.field private ux:Lorg/json/JSONObject;


# direct methods
.method static constructor <clinit>()V
    .locals 2

    .line 59
    new-instance v0, Lcom/bykv/vk/openvk/live/df;

    invoke-direct {v0}, Lcom/bykv/vk/openvk/live/df;-><init>()V

    sput-object v0, Lcom/bykv/vk/openvk/live/df;->df:Lcom/bykv/vk/openvk/live/df;

    .line 60
    new-instance v0, Ljava/util/concurrent/atomic/AtomicBoolean;

    const/4 v1, 0x0

    invoke-direct {v0, v1}, Ljava/util/concurrent/atomic/AtomicBoolean;-><init>(Z)V

    sput-object v0, Lcom/bykv/vk/openvk/live/df;->q:Ljava/util/concurrent/atomic/AtomicBoolean;

    .line 61
    new-instance v0, Ljava/util/concurrent/atomic/AtomicBoolean;

    invoke-direct {v0, v1}, Ljava/util/concurrent/atomic/AtomicBoolean;-><init>(Z)V

    sput-object v0, Lcom/bykv/vk/openvk/live/df;->pt:Ljava/util/concurrent/atomic/AtomicBoolean;

    .line 62
    new-instance v0, Ljava/util/concurrent/atomic/AtomicBoolean;

    invoke-direct {v0, v1}, Ljava/util/concurrent/atomic/AtomicBoolean;-><init>(Z)V

    sput-object v0, Lcom/bykv/vk/openvk/live/df;->pp:Ljava/util/concurrent/atomic/AtomicBoolean;

    .line 63
    new-instance v0, Ljava/util/concurrent/atomic/AtomicBoolean;

    invoke-direct {v0, v1}, Ljava/util/concurrent/atomic/AtomicBoolean;-><init>(Z)V

    sput-object v0, Lcom/bykv/vk/openvk/live/df;->c:Ljava/util/concurrent/atomic/AtomicBoolean;

    const/4 v0, 0x0

    .line 65
    sput-object v0, Lcom/bykv/vk/openvk/live/df;->rg:Lcom/bykv/vk/openvk/live/df$rg;

    return-void
.end method

.method private constructor <init>()V
    .locals 1

    .line 69
    invoke-direct {p0}, Lcom/bykv/vk/openvk/downloadnew/rg;-><init>()V

    const/4 v0, 0x0

    .line 64
    iput-object v0, p0, Lcom/bykv/vk/openvk/live/df;->fw:Lcom/bykv/vk/openvk/live/core/ITTLiveConfig;

    .line 66
    iput-object v0, p0, Lcom/bykv/vk/openvk/live/df;->ux:Lorg/json/JSONObject;

    return-void
.end method

.method private c()Ljava/lang/Boolean;
    .locals 4

    const/4 v0, 0x0

    .line 340
    :try_start_0
    invoke-static {}, Lcom/bytedance/android/openliveplugin/LivePluginHelper;->getLiveRoomService()Lcom/bytedance/android/live/base/api/IOuterLiveRoomService;

    move-result-object v1

    const-string v2, "hasAuthenticated"

    new-array v3, v0, [Ljava/lang/Object;

    .line 341
    invoke-interface {v1, v2, v3}, Lcom/bytedance/android/live/base/api/IOuterLiveRoomService;->callExpandMethod(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    if-eqz v1, :cond_0

    .line 342
    instance-of v2, v1, Ljava/lang/Boolean;

    if-eqz v2, :cond_0

    .line 343
    check-cast v1, Ljava/lang/Boolean;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object v1

    :catchall_0
    move-exception v1

    const/4 v2, 0x1

    new-array v2, v2, [Ljava/lang/Object;

    aput-object v1, v2, v0

    const-string v1, "TTLiveSDkBridge"

    .line 346
    invoke-static {v1, v2}, Lcom/bykv/vk/openvk/api/rg;->rg(Ljava/lang/String;[Ljava/lang/Object;)V

    .line 348
    :cond_0
    invoke-static {v0}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v0

    return-object v0
.end method

.method static synthetic df()Ljava/util/concurrent/atomic/AtomicBoolean;
    .locals 1

    .line 56
    sget-object v0, Lcom/bykv/vk/openvk/live/df;->pt:Ljava/util/concurrent/atomic/AtomicBoolean;

    return-object v0
.end method

.method static synthetic df(Lcom/bykv/vk/openvk/live/df;)V
    .locals 0

    .line 56
    invoke-direct {p0}, Lcom/bykv/vk/openvk/live/df;->ux()V

    return-void
.end method

.method private fw()V
    .locals 4

    const/4 v0, 0x0

    .line 353
    :try_start_0
    invoke-static {}, Lcom/bytedance/android/openliveplugin/LivePluginHelper;->getLiveRoomService()Lcom/bytedance/android/live/base/api/IOuterLiveRoomService;

    move-result-object v1

    const-string v2, "warmingUpBeforeEnter"

    new-array v3, v0, [Ljava/lang/Object;

    .line 354
    invoke-interface {v1, v2, v3}, Lcom/bytedance/android/live/base/api/IOuterLiveRoomService;->callExpandMethod(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v1

    const/4 v2, 0x1

    new-array v2, v2, [Ljava/lang/Object;

    aput-object v1, v2, v0

    const-string v0, "TTLiveSDkBridge"

    .line 356
    invoke-static {v0, v2}, Lcom/bykv/vk/openvk/api/rg;->rg(Ljava/lang/String;[Ljava/lang/Object;)V

    :goto_0
    return-void
.end method

.method private getContext(Ljava/lang/Object;)Landroid/content/Context;
    .locals 1

    .line 394
    instance-of v0, p1, Landroid/content/Context;

    if-eqz v0, :cond_0

    .line 395
    check-cast p1, Landroid/content/Context;

    return-object p1

    :cond_0
    const/4 p1, 0x0

    return-object p1
.end method

.method private pp()V
    .locals 8

    .line 182
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "hasLiveSDKInited\uff1a"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v1, Lcom/bykv/vk/openvk/live/df;->c:Ljava/util/concurrent/atomic/AtomicBoolean;

    invoke-virtual {v1}, Ljava/util/concurrent/atomic/AtomicBoolean;->get()Z

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v1, ", hasLiveInstalled\uff1a"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v1, Lcom/bykv/vk/openvk/live/df;->pt:Ljava/util/concurrent/atomic/AtomicBoolean;

    invoke-virtual {v1}, Ljava/util/concurrent/atomic/AtomicBoolean;->get()Z

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "TTLiveSDkBridge"

    invoke-static {v1, v0}, Lcom/bykv/vk/openvk/api/rg;->q(Ljava/lang/String;Ljava/lang/String;)V

    .line 183
    iget-object v0, p0, Lcom/bykv/vk/openvk/live/df;->fw:Lcom/bykv/vk/openvk/live/core/ITTLiveConfig;

    const/4 v2, 0x0

    if-eqz v0, :cond_0

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "GeneralAppId\uff1a"

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/bykv/vk/openvk/live/df;->fw:Lcom/bykv/vk/openvk/live/core/ITTLiveConfig;

    invoke-interface {v3}, Lcom/bykv/vk/openvk/live/core/ITTLiveConfig;->getGeneralAppId()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, "\uff0cisValid\uff1a"

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/bykv/vk/openvk/live/df;->fw:Lcom/bykv/vk/openvk/live/core/ITTLiveConfig;

    invoke-interface {v3}, Lcom/bykv/vk/openvk/live/core/ITTLiveConfig;->isValid()Z

    move-result v3

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    goto :goto_0

    :cond_0
    move-object v0, v2

    :goto_0
    invoke-static {v1, v0}, Lcom/bykv/vk/openvk/api/rg;->q(Ljava/lang/String;Ljava/lang/String;)V

    .line 184
    sget-object v0, Lcom/bykv/vk/openvk/live/df;->c:Ljava/util/concurrent/atomic/AtomicBoolean;

    invoke-virtual {v0}, Ljava/util/concurrent/atomic/AtomicBoolean;->get()Z

    move-result v0

    if-eqz v0, :cond_1

    return-void

    .line 187
    :cond_1
    sget-object v0, Lcom/bykv/vk/openvk/live/df;->pt:Ljava/util/concurrent/atomic/AtomicBoolean;

    invoke-virtual {v0}, Ljava/util/concurrent/atomic/AtomicBoolean;->get()Z

    move-result v0

    if-nez v0, :cond_2

    return-void

    .line 190
    :cond_2
    iget-object v0, p0, Lcom/bykv/vk/openvk/live/df;->fw:Lcom/bykv/vk/openvk/live/core/ITTLiveConfig;

    if-eqz v0, :cond_b

    invoke-interface {v0}, Lcom/bykv/vk/openvk/live/core/ITTLiveConfig;->isValid()Z

    move-result v0

    if-nez v0, :cond_3

    goto/16 :goto_2

    :cond_3
    const-string v0, "com.byted.live.lite"

    .line 193
    invoke-static {v0}, Lcom/bytedance/pangle/Zeus;->getPlugin(Ljava/lang/String;)Lcom/bytedance/pangle/plugin/Plugin;

    move-result-object v0

    if-nez v0, :cond_4

    return-void

    .line 197
    :cond_4
    sget-object v3, Lcom/bykv/vk/openvk/live/df;->pp:Ljava/util/concurrent/atomic/AtomicBoolean;

    invoke-virtual {v3}, Ljava/util/concurrent/atomic/AtomicBoolean;->get()Z

    move-result v3

    if-eqz v3, :cond_5

    return-void

    .line 200
    :cond_5
    sget-object v3, Lcom/bykv/vk/openvk/live/df;->pp:Ljava/util/concurrent/atomic/AtomicBoolean;

    const/4 v4, 0x1

    invoke-virtual {v3, v4}, Ljava/util/concurrent/atomic/AtomicBoolean;->set(Z)V

    .line 201
    invoke-virtual {v0}, Lcom/bytedance/pangle/plugin/Plugin;->getVersion()I

    move-result v3

    int-to-long v3, v3

    invoke-static {v3, v4}, Lcom/bykv/vk/openvk/live/rg;->q(J)Z

    move-result v3

    const/4 v4, 0x0

    if-nez v3, :cond_6

    const-string v2, "live sdk init crash more than consecutive 5 times , live plugin had uninstalled ! App cold start will request new live plugin \uff01"

    .line 202
    invoke-static {v1, v2}, Lcom/bykv/vk/openvk/api/rg;->df(Ljava/lang/String;Ljava/lang/String;)V

    .line 203
    invoke-virtual {v0}, Lcom/bytedance/pangle/plugin/Plugin;->getVersion()I

    move-result v0

    int-to-long v0, v0

    invoke-static {v0, v1}, Lcom/bykv/vk/openvk/live/rg;->pt(J)V

    .line 204
    sget-object v0, Lcom/bykv/vk/openvk/live/df;->pp:Ljava/util/concurrent/atomic/AtomicBoolean;

    invoke-virtual {v0, v4}, Ljava/util/concurrent/atomic/AtomicBoolean;->set(Z)V

    return-void

    .line 210
    :cond_6
    new-instance v3, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;

    invoke-direct {v3}, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;-><init>()V

    iget-object v5, p0, Lcom/bykv/vk/openvk/live/df;->fw:Lcom/bykv/vk/openvk/live/core/ITTLiveConfig;

    .line 211
    invoke-interface {v5}, Lcom/bykv/vk/openvk/live/core/ITTLiveConfig;->getAppName()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v3, v5}, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;->setAppName(Ljava/lang/String;)Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;

    move-result-object v3

    iget-object v5, p0, Lcom/bykv/vk/openvk/live/df;->fw:Lcom/bykv/vk/openvk/live/core/ITTLiveConfig;

    .line 212
    invoke-interface {v5}, Lcom/bykv/vk/openvk/live/core/ITTLiveConfig;->getChannel()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v3, v5}, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;->setChannel(Ljava/lang/String;)Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;

    move-result-object v3

    iget-object v5, p0, Lcom/bykv/vk/openvk/live/df;->fw:Lcom/bykv/vk/openvk/live/core/ITTLiveConfig;

    .line 213
    invoke-interface {v5}, Lcom/bykv/vk/openvk/live/core/ITTLiveConfig;->isDebug()Z

    move-result v5

    invoke-virtual {v3, v5}, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;->setIsDebug(Z)Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;

    move-result-object v3

    iget-object v5, p0, Lcom/bykv/vk/openvk/live/df;->fw:Lcom/bykv/vk/openvk/live/core/ITTLiveConfig;

    .line 214
    invoke-interface {v5}, Lcom/bykv/vk/openvk/live/core/ITTLiveConfig;->getECHostAppId()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v3, v5}, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;->setECHostAppId(Ljava/lang/String;)Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;

    move-result-object v3

    iget-object v5, p0, Lcom/bykv/vk/openvk/live/df;->fw:Lcom/bykv/vk/openvk/live/core/ITTLiveConfig;

    .line 215
    invoke-interface {v5}, Lcom/bykv/vk/openvk/live/core/ITTLiveConfig;->getPartner()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v3, v5}, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;->setPartner(Ljava/lang/String;)Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;

    move-result-object v3

    new-instance v5, Lcom/bykv/vk/openvk/live/df$2;

    invoke-direct {v5, p0}, Lcom/bykv/vk/openvk/live/df$2;-><init>(Lcom/bykv/vk/openvk/live/df;)V

    .line 216
    invoke-virtual {v3, v5}, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;->provideMethodChannel(Lcom/bytedance/android/live/base/api/MethodChannelService;)Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;

    move-result-object v3

    iget-object v5, p0, Lcom/bykv/vk/openvk/live/df;->fw:Lcom/bykv/vk/openvk/live/core/ITTLiveConfig;

    .line 235
    invoke-interface {v5}, Lcom/bykv/vk/openvk/live/core/ITTLiveConfig;->getPartnerSecret()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v3, v5}, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;->setPartnerSecret(Ljava/lang/String;)Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;

    move-result-object v3

    iget-object v5, p0, Lcom/bykv/vk/openvk/live/df;->fw:Lcom/bykv/vk/openvk/live/core/ITTLiveConfig;

    .line 236
    invoke-interface {v5}, Lcom/bykv/vk/openvk/live/core/ITTLiveConfig;->getHostPermission()Lcom/bykv/vk/openvk/live/core/TTHostPermissionInner;

    move-result-object v5

    invoke-virtual {v3, v5}, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;->setHostPermission(Lcom/bytedance/android/live/base/api/IHostPermission;)Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;

    move-result-object v3

    new-instance v5, Lcom/bykv/vk/openvk/live/core/rg;

    iget-object v6, p0, Lcom/bykv/vk/openvk/live/df;->fw:Lcom/bykv/vk/openvk/live/core/ITTLiveConfig;

    .line 237
    invoke-interface {v6}, Lcom/bykv/vk/openvk/live/core/ITTLiveConfig;->getLiveHostAction()Lcom/bykv/vk/openvk/live/core/ITTLiveHostAction;

    move-result-object v6

    invoke-direct {v5, v6}, Lcom/bykv/vk/openvk/live/core/rg;-><init>(Lcom/bykv/vk/openvk/live/core/ITTLiveHostAction;)V

    invoke-virtual {v3, v5}, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;->setHostActionParam(Lcom/bytedance/android/live/base/api/ILiveHostActionParam;)Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;

    move-result-object v3

    .line 238
    iget-object v5, p0, Lcom/bykv/vk/openvk/live/df;->rz:Lcom/bykv/vk/openvk/live/ITTLiveTokenInjectionAuth;

    if-eqz v5, :cond_7

    .line 239
    new-instance v6, Lcom/bykv/vk/openvk/live/core/df;

    invoke-direct {v6, v5}, Lcom/bykv/vk/openvk/live/core/df;-><init>(Lcom/bykv/vk/openvk/live/ITTLiveTokenInjectionAuth;)V

    invoke-virtual {v3, v6}, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;->setInjectionAuth(Lcom/bytedance/android/livehostapi/platform/IHostTokenInjectionAuth;)Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;

    .line 241
    :cond_7
    new-instance v5, Lcom/bykv/vk/openvk/live/df$3;

    invoke-direct {v5, p0}, Lcom/bykv/vk/openvk/live/df$3;-><init>(Lcom/bykv/vk/openvk/live/df;)V

    .line 266
    invoke-static {}, Lcom/bykv/vk/openvk/TTAppContextHolder;->getContext()Landroid/content/Context;

    move-result-object v6

    instance-of v6, v6, Landroid/app/Application;

    if-eqz v6, :cond_8

    .line 267
    invoke-static {}, Lcom/bykv/vk/openvk/TTAppContextHolder;->getContext()Landroid/content/Context;

    move-result-object v6

    check-cast v6, Landroid/app/Application;

    invoke-virtual {v3, v6}, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;->setContext(Landroid/app/Application;)Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;

    .line 276
    :cond_8
    invoke-virtual {v0}, Lcom/bytedance/pangle/plugin/Plugin;->getVersion()I

    move-result v6

    int-to-long v6, v6

    invoke-static {v6, v7}, Lcom/bykv/vk/openvk/live/rg;->rg(J)V

    .line 277
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    const-string v7, "execute live sdk initLive method start, GeneralAppId:"

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v7, p0, Lcom/bykv/vk/openvk/live/df;->fw:Lcom/bykv/vk/openvk/live/core/ITTLiveConfig;

    if-eqz v7, :cond_9

    invoke-interface {v7}, Lcom/bykv/vk/openvk/live/core/ITTLiveConfig;->getGeneralAppId()Ljava/lang/String;

    move-result-object v7

    goto :goto_1

    :cond_9
    move-object v7, v2

    :goto_1
    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    invoke-static {v1, v6}, Lcom/bykv/vk/openvk/api/rg;->df(Ljava/lang/String;Ljava/lang/String;)V

    .line 278
    invoke-static {}, Lcom/bykv/vk/openvk/TTAppContextHolder;->getContext()Landroid/content/Context;

    move-result-object v6

    iget-object v7, p0, Lcom/bykv/vk/openvk/live/df;->fw:Lcom/bykv/vk/openvk/live/core/ITTLiveConfig;

    if-eqz v7, :cond_a

    .line 279
    invoke-interface {v7}, Lcom/bykv/vk/openvk/live/core/ITTLiveConfig;->getGeneralAppId()Ljava/lang/String;

    move-result-object v2

    .line 278
    :cond_a
    invoke-static {v6, v2, v3, v5}, Lcom/bykv/vk/openvk/live/rg;->rg(Landroid/content/Context;Ljava/lang/String;Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;Lcom/bytedance/android/live/base/api/ILiveInitCallback;)Z

    move-result v2

    .line 281
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "execute live sdk initLive method end, (\u65b9\u6cd5\u987a\u5229\u6267\u884c\u7ed3\u679c)result: "

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2}, Lcom/bykv/vk/openvk/api/rg;->df(Ljava/lang/String;Ljava/lang/String;)V

    .line 282
    sget-object v1, Lcom/bykv/vk/openvk/live/df;->pp:Ljava/util/concurrent/atomic/AtomicBoolean;

    invoke-virtual {v1, v4}, Ljava/util/concurrent/atomic/AtomicBoolean;->set(Z)V

    .line 283
    invoke-virtual {v0}, Lcom/bytedance/pangle/plugin/Plugin;->getVersion()I

    move-result v0

    int-to-long v0, v0

    invoke-static {v0, v1}, Lcom/bykv/vk/openvk/live/rg;->df(J)V

    :cond_b
    :goto_2
    return-void
.end method

.method static synthetic pt()Ljava/util/concurrent/atomic/AtomicBoolean;
    .locals 1

    .line 56
    sget-object v0, Lcom/bykv/vk/openvk/live/df;->c:Ljava/util/concurrent/atomic/AtomicBoolean;

    return-object v0
.end method

.method static synthetic q()Ljava/util/concurrent/atomic/AtomicBoolean;
    .locals 1

    .line 56
    sget-object v0, Lcom/bykv/vk/openvk/live/df;->q:Ljava/util/concurrent/atomic/AtomicBoolean;

    return-object v0
.end method

.method private rg(Ljava/lang/Object;)Landroid/os/Bundle;
    .locals 1

    .line 401
    instance-of v0, p1, Landroid/os/Bundle;

    if-eqz v0, :cond_0

    .line 402
    check-cast p1, Landroid/os/Bundle;

    return-object p1

    :cond_0
    const/4 p1, 0x0

    return-object p1
.end method

.method public static rg()Lcom/bykv/vk/openvk/live/df;
    .locals 1

    .line 98
    sget-object v0, Lcom/bykv/vk/openvk/live/df;->df:Lcom/bykv/vk/openvk/live/df;

    return-object v0
.end method

.method static synthetic rg(Lcom/bykv/vk/openvk/live/df;[Ljava/lang/Object;)Ljava/lang/Object;
    .locals 0

    .line 56
    invoke-direct {p0, p1}, Lcom/bykv/vk/openvk/live/df;->rg([Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    return-object p0
.end method

.method private varargs rg([Ljava/lang/Object;)Ljava/lang/Object;
    .locals 3

    const/4 v0, 0x0

    if-eqz p1, :cond_1

    .line 292
    array-length v1, p1

    if-nez v1, :cond_0

    goto :goto_0

    :cond_0
    const/4 v1, 0x0

    .line 296
    :try_start_0
    aget-object p1, p1, v1

    check-cast p1, Ljava/lang/Integer;

    .line 297
    invoke-static {}, Lcom/bykv/vk/openvk/TTVfSdk;->getVfManager()Lcom/bykv/vk/openvk/TTVfManager;

    move-result-object v1

    if-eqz v1, :cond_1

    .line 299
    new-instance v2, Lcom/bykv/vk/openvk/VfSlot$Builder;

    invoke-direct {v2}, Lcom/bykv/vk/openvk/VfSlot$Builder;-><init>()V

    invoke-virtual {p1}, Ljava/lang/Integer;->intValue()I

    move-result p1

    invoke-virtual {v2, p1}, Lcom/bykv/vk/openvk/VfSlot$Builder;->setAdType(I)Lcom/bykv/vk/openvk/VfSlot$Builder;

    move-result-object p1

    invoke-virtual {p1}, Lcom/bykv/vk/openvk/VfSlot$Builder;->build()Lcom/bykv/vk/openvk/VfSlot;

    move-result-object p1

    invoke-interface {v1, p1}, Lcom/bykv/vk/openvk/TTVfManager;->getBiddingToken(Lcom/bykv/vk/openvk/VfSlot;)Ljava/lang/String;

    move-result-object p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object p1

    :catchall_0
    :cond_1
    :goto_0
    return-object v0
.end method

.method static synthetic rg(Lcom/bykv/vk/openvk/live/df;)V
    .locals 0

    .line 56
    invoke-direct {p0}, Lcom/bykv/vk/openvk/live/df;->pp()V

    return-void
.end method

.method private rg(Ljava/util/Map;)V
    .locals 7
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;)V"
        }
    .end annotation

    :try_start_0
    const-string v0, "room_id"

    .line 362
    invoke-interface {p1, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/Long;

    invoke-virtual {v0}, Ljava/lang/Long;->longValue()J

    move-result-wide v0

    const-string v2, "event"

    .line 363
    invoke-interface {p1, v2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    .line 364
    instance-of v2, p1, Lcom/bykv/vk/openvk/TTAdEvent;

    const/4 v3, 0x0

    if-eqz v2, :cond_0

    new-instance v2, Lcom/bykv/vk/openvk/live/df$rg;

    check-cast p1, Lcom/bykv/vk/openvk/TTAdEvent;

    invoke-direct {v2, p1, v3}, Lcom/bykv/vk/openvk/live/df$rg;-><init>(Lcom/bykv/vk/openvk/TTAdEvent;Lcom/bykv/vk/openvk/live/df$1;)V

    goto :goto_0

    :cond_0
    new-instance v2, Lcom/bykv/vk/openvk/live/df$rg;

    check-cast p1, Lcom/bykv/vk/openvk/api/proto/EventListener;

    invoke-direct {v2, p1, v3}, Lcom/bykv/vk/openvk/live/df$rg;-><init>(Lcom/bykv/vk/openvk/api/proto/EventListener;Lcom/bykv/vk/openvk/live/df$1;)V

    .line 365
    :goto_0
    invoke-static {}, Lcom/bytedance/android/openliveplugin/LivePluginHelper;->getLiveRoomService()Lcom/bytedance/android/live/base/api/IOuterLiveRoomService;

    move-result-object p1

    .line 366
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    const-string v3, "checkRoomAlive"

    const/4 v4, 0x3

    new-array v4, v4, [Ljava/lang/Object;

    const/4 v5, 0x0

    .line 367
    new-instance v6, Lcom/bykv/vk/openvk/live/df$4;

    invoke-direct {v6, p0, v2}, Lcom/bykv/vk/openvk/live/df$4;-><init>(Lcom/bykv/vk/openvk/live/df;Lcom/bykv/vk/openvk/live/df$rg;)V

    aput-object v6, v4, v5

    const/4 v5, 0x1

    .line 377
    invoke-static {v0, v1}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v0

    aput-object v0, v4, v5

    const/4 v0, 0x2

    const/16 v1, 0x12c

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    aput-object v1, v4, v0

    .line 367
    invoke-interface {p1, v3, v4}, Lcom/bytedance/android/live/base/api/IOuterLiveRoomService;->callExpandMethod(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    if-nez p1, :cond_1

    .line 380
    monitor-enter v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_2

    .line 382
    :try_start_1
    invoke-virtual {v2}, Ljava/lang/Object;->notifyAll()V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 385
    :catchall_0
    :try_start_2
    monitor-exit v2

    goto :goto_1

    :catchall_1
    move-exception p1

    monitor-exit v2
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    :try_start_3
    throw p1

    :cond_1
    :goto_1
    const-string v0, "TTLiveSDkBridge"

    .line 387
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "has checkRoomAlive :"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, p1}, Lcom/bykv/vk/openvk/api/rg;->df(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_2

    goto :goto_2

    :catchall_2
    move-exception p1

    const-string v0, "TTLiveSDkBridge"

    const-string v1, "getRoomState: exception:"

    .line 389
    invoke-static {v0, v1, p1}, Lcom/bykv/vk/openvk/api/rg;->rg(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :goto_2
    return-void
.end method

.method private ux()V
    .locals 3

    .line 408
    sget-object v0, Lcom/bykv/vk/openvk/live/df;->rg:Lcom/bykv/vk/openvk/live/df$rg;

    if-eqz v0, :cond_0

    .line 410
    :try_start_0
    new-instance v0, Landroid/os/Bundle;

    invoke-direct {v0}, Landroid/os/Bundle;-><init>()V

    const-string v1, "live_plugin_installed"

    .line 411
    sget-object v2, Lcom/bykv/vk/openvk/live/df;->pt:Ljava/util/concurrent/atomic/AtomicBoolean;

    invoke-virtual {v2}, Ljava/util/concurrent/atomic/AtomicBoolean;->get()Z

    move-result v2

    invoke-virtual {v0, v1, v2}, Landroid/os/Bundle;->putBoolean(Ljava/lang/String;Z)V

    const-string v1, "live_plugin_inited"

    .line 412
    sget-object v2, Lcom/bykv/vk/openvk/live/df;->c:Ljava/util/concurrent/atomic/AtomicBoolean;

    invoke-virtual {v2}, Ljava/util/concurrent/atomic/AtomicBoolean;->get()Z

    move-result v2

    invoke-virtual {v0, v1, v2}, Landroid/os/Bundle;->putBoolean(Ljava/lang/String;Z)V

    .line 413
    sget-object v1, Lcom/bykv/vk/openvk/live/df;->rg:Lcom/bykv/vk/openvk/live/df$rg;

    const/4 v2, 0x3

    invoke-virtual {v1, v2, v0}, Lcom/bykv/vk/openvk/live/df$rg;->onEvent(ILandroid/os/Bundle;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    .line 415
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    :cond_0
    :goto_0
    return-void
.end method


# virtual methods
.method public call(ILcom/bykv/vk/openvk/api/proto/ValueSet;Ljava/lang/Class;)Ljava/lang/Object;
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "<T:",
            "Ljava/lang/Object;",
            ">(I",
            "Lcom/bykv/vk/openvk/api/proto/ValueSet;",
            "Ljava/lang/Class<",
            "TT;>;)TT;"
        }
    .end annotation

    const/4 v0, 0x5

    const/4 v1, 0x0

    const/4 v2, 0x0

    if-eq p1, v0, :cond_3

    const/4 v0, 0x6

    if-eq p1, v0, :cond_0

    .line 442
    const-class v0, Ljava/util/Map;

    invoke-interface {p2, v2, v0}, Lcom/bykv/vk/openvk/api/proto/ValueSet;->objectValue(ILjava/lang/Class;)Ljava/lang/Object;

    move-result-object p2

    check-cast p2, Ljava/util/Map;

    invoke-virtual {p0, p3, p1, p2}, Lcom/bykv/vk/openvk/live/df;->callMethod(Ljava/lang/Class;ILjava/util/Map;)Ljava/lang/Object;

    move-result-object p1

    return-object p1

    .line 430
    :cond_0
    const-class p1, Ljava/lang/Object;

    invoke-interface {p2, v2, p1}, Lcom/bykv/vk/openvk/api/proto/ValueSet;->objectValue(ILjava/lang/Class;)Ljava/lang/Object;

    move-result-object p1

    .line 431
    instance-of p3, p1, Lcom/bykv/vk/openvk/TTAdEvent;

    if-eqz p3, :cond_1

    .line 432
    const-class p1, Lcom/bykv/vk/openvk/TTAdEvent;

    invoke-interface {p2, v2, p1}, Lcom/bykv/vk/openvk/api/proto/ValueSet;->objectValue(ILjava/lang/Class;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/bykv/vk/openvk/TTAdEvent;

    invoke-virtual {p0, p1}, Lcom/bykv/vk/openvk/live/df;->subscribe(Lcom/bykv/vk/openvk/TTAdEvent;)V

    goto :goto_0

    .line 433
    :cond_1
    instance-of p2, p1, Lcom/bykv/vk/openvk/api/proto/EventListener;

    if-eqz p2, :cond_2

    .line 434
    new-instance p2, Lcom/bykv/vk/openvk/live/df$rg;

    check-cast p1, Lcom/bykv/vk/openvk/api/proto/EventListener;

    invoke-direct {p2, p1, v1}, Lcom/bykv/vk/openvk/live/df$rg;-><init>(Lcom/bykv/vk/openvk/api/proto/EventListener;Lcom/bykv/vk/openvk/live/df$1;)V

    sput-object p2, Lcom/bykv/vk/openvk/live/df;->rg:Lcom/bykv/vk/openvk/live/df$rg;

    .line 435
    invoke-direct {p0}, Lcom/bykv/vk/openvk/live/df;->ux()V

    :cond_2
    :goto_0
    return-object v1

    .line 439
    :cond_3
    const-class p1, Landroid/os/Bundle;

    invoke-interface {p2, v2, p1}, Lcom/bykv/vk/openvk/api/proto/ValueSet;->objectValue(ILjava/lang/Class;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Landroid/os/Bundle;

    invoke-virtual {p0, p1}, Lcom/bykv/vk/openvk/live/df;->init(Landroid/os/Bundle;)V

    return-object v1
.end method

.method public callMethod(Ljava/lang/Class;ILjava/util/Map;)Ljava/lang/Object;
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "<T:",
            "Ljava/lang/Object;",
            ">(",
            "Ljava/lang/Class<",
            "TT;>;I",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;)TT;"
        }
    .end annotation

    const/4 v0, 0x2

    const/4 v1, 0x1

    if-eqz p2, :cond_4

    if-eq p2, v1, :cond_3

    const/4 v1, 0x0

    if-eq p2, v0, :cond_2

    const/4 v0, 0x3

    if-eq p2, v0, :cond_1

    const/4 v0, 0x4

    if-eq p2, v0, :cond_0

    .line 335
    invoke-super {p0, p1, p2, p3}, Lcom/bykv/vk/openvk/downloadnew/rg;->callMethod(Ljava/lang/Class;ILjava/util/Map;)Ljava/lang/Object;

    move-result-object p1

    return-object p1

    .line 330
    :cond_0
    invoke-direct {p0}, Lcom/bykv/vk/openvk/live/df;->c()Ljava/lang/Boolean;

    move-result-object p1

    return-object p1

    .line 326
    :cond_1
    invoke-direct {p0}, Lcom/bykv/vk/openvk/live/df;->fw()V

    return-object v1

    .line 322
    :cond_2
    invoke-direct {p0, p3}, Lcom/bykv/vk/openvk/live/df;->rg(Ljava/util/Map;)V

    return-object v1

    .line 319
    :cond_3
    sget-object p1, Lcom/bykv/vk/openvk/live/df;->c:Ljava/util/concurrent/atomic/AtomicBoolean;

    return-object p1

    .line 310
    :cond_4
    sget-object p1, Lcom/bykv/vk/openvk/live/df;->c:Ljava/util/concurrent/atomic/AtomicBoolean;

    invoke-virtual {p1}, Ljava/util/concurrent/atomic/AtomicBoolean;->get()Z

    move-result p1

    if-nez p1, :cond_5

    .line 311
    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    return-object p1

    :cond_5
    const-string p1, "context"

    .line 313
    invoke-interface {p3, p1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    invoke-direct {p0, p1}, Lcom/bykv/vk/openvk/live/df;->getContext(Ljava/lang/Object;)Landroid/content/Context;

    move-result-object p1

    const-string p2, "bundle"

    .line 314
    invoke-interface {p3, p2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p2

    invoke-direct {p0, p2}, Lcom/bykv/vk/openvk/live/df;->rg(Ljava/lang/Object;)Landroid/os/Bundle;

    move-result-object p2

    .line 313
    invoke-static {p1, p2}, Lcom/bykv/vk/openvk/live/rg;->rg(Landroid/content/Context;Landroid/os/Bundle;)Z

    move-result p1

    if-nez p1, :cond_6

    .line 315
    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    return-object p1

    :cond_6
    const/4 p1, 0x0

    .line 317
    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    return-object p1
.end method

.method public getObj(Ljava/lang/Class;ILjava/util/Map;)Ljava/lang/Object;
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "<T:",
            "Ljava/lang/Object;",
            ">(",
            "Ljava/lang/Class<",
            "TT;>;I",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;)TT;"
        }
    .end annotation

    .line 150
    invoke-super {p0, p1, p2, p3}, Lcom/bykv/vk/openvk/downloadnew/rg;->getObj(Ljava/lang/Class;ILjava/util/Map;)Ljava/lang/Object;

    move-result-object p1

    return-object p1
.end method

.method public init(Landroid/os/Bundle;)V
    .locals 2

    .line 161
    invoke-super {p0, p1}, Lcom/bykv/vk/openvk/downloadnew/rg;->init(Landroid/os/Bundle;)V

    .line 162
    iget-object v0, p0, Lcom/bykv/vk/openvk/live/df;->fw:Lcom/bykv/vk/openvk/live/core/ITTLiveConfig;

    if-eqz v0, :cond_0

    invoke-interface {v0}, Lcom/bykv/vk/openvk/live/core/ITTLiveConfig;->isValid()Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/bykv/vk/openvk/live/df;->fw:Lcom/bykv/vk/openvk/live/core/ITTLiveConfig;

    .line 163
    invoke-interface {v0}, Lcom/bykv/vk/openvk/live/core/ITTLiveConfig;->getGeneralAppId()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/bykv/vk/openvk/live/df;->fw:Lcom/bykv/vk/openvk/live/core/ITTLiveConfig;

    .line 164
    invoke-interface {v0}, Lcom/bykv/vk/openvk/live/core/ITTLiveConfig;->getPartner()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/bykv/vk/openvk/live/df;->fw:Lcom/bykv/vk/openvk/live/core/ITTLiveConfig;

    .line 165
    invoke-interface {v0}, Lcom/bykv/vk/openvk/live/core/ITTLiveConfig;->getPartnerSecret()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    const-string p1, "TTLiveSDkBridge"

    const-string v0, "The configuration has been obtained. Do not repeat initialization"

    .line 166
    invoke-static {p1, v0}, Lcom/bykv/vk/openvk/api/rg;->df(Ljava/lang/String;Ljava/lang/String;)V

    return-void

    :cond_0
    const-string v0, "liveInitConfig"

    .line 169
    invoke-virtual {p1, v0}, Landroid/os/Bundle;->getSerializable(Ljava/lang/String;)Ljava/io/Serializable;

    move-result-object v0

    .line 170
    instance-of v1, v0, Lcom/bykv/vk/openvk/live/core/ITTLiveConfig;

    if-eqz v1, :cond_1

    .line 171
    check-cast v0, Lcom/bykv/vk/openvk/live/core/ITTLiveConfig;

    iput-object v0, p0, Lcom/bykv/vk/openvk/live/df;->fw:Lcom/bykv/vk/openvk/live/core/ITTLiveConfig;

    .line 174
    :cond_1
    :try_start_0
    new-instance v0, Lorg/json/JSONObject;

    const-string v1, "liveInitExtra"

    invoke-virtual {p1, v1}, Landroid/os/Bundle;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    invoke-direct {v0, p1}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    iput-object v0, p0, Lcom/bykv/vk/openvk/live/df;->ux:Lorg/json/JSONObject;
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 176
    invoke-virtual {p1}, Lorg/json/JSONException;->printStackTrace()V

    .line 178
    :goto_0
    invoke-direct {p0}, Lcom/bykv/vk/openvk/live/df;->pp()V

    return-void
.end method

.method public rg(Lcom/bykv/vk/openvk/api/plugin/c;Landroid/os/Bundle;)V
    .locals 3

    .line 106
    sget-object v0, Lcom/bykv/vk/openvk/live/df;->q:Ljava/util/concurrent/atomic/AtomicBoolean;

    invoke-virtual {v0}, Ljava/util/concurrent/atomic/AtomicBoolean;->get()Z

    move-result v0

    const-string v1, "TTLiveSDkBridge"

    if-eqz v0, :cond_0

    const-string p1, "live PL is loading...just wait"

    .line 107
    invoke-static {v1, p1}, Lcom/bykv/vk/openvk/api/rg;->df(Ljava/lang/String;Ljava/lang/String;)V

    return-void

    .line 110
    :cond_0
    sget-object v0, Lcom/bykv/vk/openvk/live/df;->pt:Ljava/util/concurrent/atomic/AtomicBoolean;

    invoke-virtual {v0}, Ljava/util/concurrent/atomic/AtomicBoolean;->get()Z

    move-result v0

    if-eqz v0, :cond_1

    const-string p1, "live PL already loaded, dont load again"

    .line 111
    invoke-static {v1, p1}, Lcom/bykv/vk/openvk/api/rg;->df(Ljava/lang/String;Ljava/lang/String;)V

    return-void

    .line 114
    :cond_1
    new-instance v0, Lcom/bykv/vk/openvk/live/df$1;

    invoke-direct {v0, p0}, Lcom/bykv/vk/openvk/live/df$1;-><init>(Lcom/bykv/vk/openvk/live/df;)V

    .line 142
    sget-object v1, Lcom/bykv/vk/openvk/live/df;->q:Ljava/util/concurrent/atomic/AtomicBoolean;

    const/4 v2, 0x1

    invoke-virtual {v1, v2}, Ljava/util/concurrent/atomic/AtomicBoolean;->set(Z)V

    .line 143
    sget-object v1, Lcom/bykv/vk/openvk/live/df;->pt:Ljava/util/concurrent/atomic/AtomicBoolean;

    const/4 v2, 0x0

    invoke-virtual {v1, v2}, Ljava/util/concurrent/atomic/AtomicBoolean;->set(Z)V

    .line 144
    invoke-static {p1, p2, v0}, Lcom/bykv/vk/openvk/live/rg;->rg(Lcom/bykv/vk/openvk/api/plugin/c;Landroid/os/Bundle;Lcom/bykv/vk/openvk/TTPluginListener;)V

    return-void
.end method

.method public rg(Lcom/bykv/vk/openvk/live/ITTLiveTokenInjectionAuth;)V
    .locals 0

    .line 102
    iput-object p1, p0, Lcom/bykv/vk/openvk/live/df;->rz:Lcom/bykv/vk/openvk/live/ITTLiveTokenInjectionAuth;

    return-void
.end method

.method public subscribe(Lcom/bykv/vk/openvk/TTAdEvent;)V
    .locals 2

    .line 155
    new-instance v0, Lcom/bykv/vk/openvk/live/df$rg;

    const/4 v1, 0x0

    invoke-direct {v0, p1, v1}, Lcom/bykv/vk/openvk/live/df$rg;-><init>(Lcom/bykv/vk/openvk/TTAdEvent;Lcom/bykv/vk/openvk/live/df$1;)V

    sput-object v0, Lcom/bykv/vk/openvk/live/df;->rg:Lcom/bykv/vk/openvk/live/df$rg;

    .line 156
    invoke-direct {p0}, Lcom/bykv/vk/openvk/live/df;->ux()V

    return-void
.end method

.method public values()Lcom/bykv/vk/openvk/api/proto/ValueSet;
    .locals 1

    const/4 v0, 0x0

    return-object v0
.end method
