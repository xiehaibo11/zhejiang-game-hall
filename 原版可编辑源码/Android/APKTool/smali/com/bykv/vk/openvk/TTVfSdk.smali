.class public final Lcom/bykv/vk/openvk/TTVfSdk;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/bykv/vk/openvk/TTVfSdk$InitCallback;
    }
.end annotation


# static fields
.field public static final INITIALIZER_CLASS_NAME:Ljava/lang/String; = "com.bykv.vk.openvk.core.AdSdkInitializerHolder"

.field private static final rg:Lcom/bykv/vk/openvk/TTInitializer;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 24
    new-instance v0, Lcom/bykv/vk/openvk/api/plugin/fw;

    invoke-direct {v0}, Lcom/bykv/vk/openvk/api/plugin/fw;-><init>()V

    sput-object v0, Lcom/bykv/vk/openvk/TTVfSdk;->rg:Lcom/bykv/vk/openvk/TTInitializer;

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 21
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static getCodeGroupRit(JLcom/bykv/vk/openvk/TTCodeGroupRit$TTCodeGroupRitListener;)V
    .locals 2

    .line 128
    sget-object v0, Lcom/bykv/vk/openvk/TTVfSdk;->rg:Lcom/bykv/vk/openvk/TTInitializer;

    if-eqz v0, :cond_0

    .line 129
    invoke-interface {v0}, Lcom/bykv/vk/openvk/TTInitializer;->getAdManager()Lcom/bykv/vk/openvk/TTVfManager;

    move-result-object v0

    new-instance v1, Lcom/bykv/vk/openvk/TTVfSdk$1;

    invoke-direct {v1, p0, p1, p2}, Lcom/bykv/vk/openvk/TTVfSdk$1;-><init>(JLcom/bykv/vk/openvk/TTCodeGroupRit$TTCodeGroupRitListener;)V

    invoke-interface {v0, v1}, Lcom/bykv/vk/openvk/TTVfManager;->register(Ljava/lang/Object;)V

    goto :goto_0

    :cond_0
    if-eqz p2, :cond_1

    const/16 p0, 0x1004

    const-string p1, "please init sdk first!"

    .line 141
    invoke-interface {p2, p0, p1}, Lcom/bykv/vk/openvk/TTCodeGroupRit$TTCodeGroupRitListener;->onFail(ILjava/lang/String;)V

    :cond_1
    :goto_0
    return-void
.end method

.method public static getVfManager()Lcom/bykv/vk/openvk/TTVfManager;
    .locals 1

    .line 77
    sget-object v0, Lcom/bykv/vk/openvk/TTVfSdk;->rg:Lcom/bykv/vk/openvk/TTInitializer;

    if-eqz v0, :cond_0

    invoke-interface {v0}, Lcom/bykv/vk/openvk/TTInitializer;->getAdManager()Lcom/bykv/vk/openvk/TTVfManager;

    move-result-object v0

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return-object v0
.end method

.method public static init(Landroid/content/Context;Lcom/bykv/vk/openvk/TTVfConfig;Lcom/bykv/vk/openvk/TTVfSdk$InitCallback;)V
    .locals 1

    .line 44
    invoke-static {p0, p1}, Lcom/bykv/vk/openvk/TTVfSdk;->rg(Landroid/content/Context;Lcom/bykv/vk/openvk/TTVfConfig;)V

    .line 45
    invoke-virtual {p0}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p0

    .line 46
    sget-object v0, Lcom/bykv/vk/openvk/TTVfSdk;->rg:Lcom/bykv/vk/openvk/TTInitializer;

    if-nez v0, :cond_0

    const/16 p0, 0x1004

    const-string p1, "Load initializer failed"

    .line 47
    invoke-interface {p2, p0, p1}, Lcom/bykv/vk/openvk/TTVfSdk$InitCallback;->fail(ILjava/lang/String;)V

    goto :goto_0

    .line 49
    :cond_0
    invoke-interface {v0, p0, p1, p2}, Lcom/bykv/vk/openvk/TTInitializer;->init(Landroid/content/Context;Lcom/bykv/vk/openvk/AdConfig;Lcom/bykv/vk/openvk/TTVfSdk$InitCallback;)V

    :goto_0
    return-void
.end method

.method public static isInitSuccess()Z
    .locals 1

    .line 33
    sget-object v0, Lcom/bykv/vk/openvk/TTVfSdk;->rg:Lcom/bykv/vk/openvk/TTInitializer;

    if-eqz v0, :cond_0

    invoke-interface {v0}, Lcom/bykv/vk/openvk/TTInitializer;->isInitSuccess()Z

    move-result v0

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return v0
.end method

.method public static isOnePointFiveAdType(Lcom/bykv/vk/openvk/TTNtExpressObject;)Z
    .locals 2

    const-string v0, "_tt_ad_type_onepointfive"

    if-nez p0, :cond_0

    const/4 p0, 0x0

    goto :goto_0

    .line 169
    :cond_0
    :try_start_0
    invoke-interface {p0}, Lcom/bykv/vk/openvk/TTNtExpressObject;->getMediaExtraInfo()Ljava/util/Map;

    move-result-object p0

    :goto_0
    if-eqz p0, :cond_1

    .line 170
    invoke-interface {p0, v0}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_1

    .line 171
    invoke-interface {p0, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Ljava/lang/Boolean;

    invoke-virtual {p0}, Ljava/lang/Boolean;->booleanValue()Z

    move-result p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return p0

    :catchall_0
    move-exception p0

    .line 174
    invoke-virtual {p0}, Ljava/lang/Throwable;->printStackTrace()V

    :cond_1
    const/4 p0, 0x0

    return p0
.end method

.method private static rg(Landroid/content/Context;Lcom/bykv/vk/openvk/TTVfConfig;)V
    .locals 2

    if-eqz p1, :cond_0

    .line 54
    invoke-virtual {p1}, Lcom/bykv/vk/openvk/TTVfConfig;->isDebug()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 55
    invoke-static {}, Lcom/bykv/vk/openvk/api/rg;->rg()V

    .line 57
    :cond_0
    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v0

    invoke-static {}, Landroid/os/Looper;->myLooper()Landroid/os/Looper;

    move-result-object v1

    if-eq v0, v1, :cond_1

    const-string v0, "Wrong Thread ! Please exec TTAdSdk.init in main thread."

    .line 58
    invoke-static {v0}, Lcom/bykv/vk/openvk/api/rg;->rg(Ljava/lang/String;)V

    :cond_1
    const-string v0, "Context is null, please check."

    .line 60
    invoke-static {p0, v0}, Lcom/bykv/vk/openvk/TTVfSdk;->rg(Ljava/lang/Object;Ljava/lang/String;)V

    const-string v0, "TTAdConfig is null, please check."

    .line 61
    invoke-static {p1, v0}, Lcom/bykv/vk/openvk/TTVfSdk;->rg(Ljava/lang/Object;Ljava/lang/String;)V

    .line 62
    invoke-static {p0}, Lcom/bykv/vk/openvk/TTAppContextHolder;->setContext(Landroid/content/Context;)V

    .line 63
    invoke-static {p1}, Lcom/bykv/vk/openvk/TTVfSdk;->updateConfigAuth(Lcom/bykv/vk/openvk/TTVfConfig;)V

    .line 64
    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v0

    invoke-static {v0, v1}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object p0

    const-string v0, "_pangle_init_start_time"

    invoke-virtual {p1, v0, p0}, Lcom/bykv/vk/openvk/TTVfConfig;->setExtra(Ljava/lang/String;Ljava/lang/Object;)V

    const-string p0, "_s_c"

    const-string v0, "oppo"

    .line 65
    invoke-virtual {p1, p0, v0}, Lcom/bykv/vk/openvk/TTVfConfig;->setExtra(Ljava/lang/String;Ljava/lang/Object;)V

    const/4 p0, 0x1

    .line 66
    invoke-static {p0}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object p0

    const-string v0, "_l_s"

    invoke-virtual {p1, v0, p0}, Lcom/bykv/vk/openvk/TTVfConfig;->setExtra(Ljava/lang/String;Ljava/lang/Object;)V

    const/16 p0, 0x3e7

    .line 67
    invoke-static {p0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p0

    const-string v0, "_ext_api_code"

    invoke-virtual {p1, v0, p0}, Lcom/bykv/vk/openvk/TTVfConfig;->setExtra(Ljava/lang/String;Ljava/lang/Object;)V

    return-void
.end method

.method private static rg(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    if-eqz p0, :cond_0

    return-void

    .line 158
    :cond_0
    new-instance p0, Ljava/lang/IllegalArgumentException;

    invoke-direct {p0, p1}, Ljava/lang/IllegalArgumentException;-><init>(Ljava/lang/String;)V

    throw p0
.end method

.method public static updateAdConfig(Lcom/bykv/vk/openvk/TTVfConfig;)V
    .locals 4

    if-nez p0, :cond_0

    return-void

    .line 86
    :cond_0
    sget-object v0, Lcom/bykv/vk/openvk/TTVfSdk;->rg:Lcom/bykv/vk/openvk/TTInitializer;

    invoke-interface {v0}, Lcom/bykv/vk/openvk/TTInitializer;->getAdManager()Lcom/bykv/vk/openvk/TTVfManager;

    move-result-object v0

    if-nez v0, :cond_1

    return-void

    .line 91
    :cond_1
    new-instance v1, Landroid/os/Bundle;

    invoke-direct {v1}, Landroid/os/Bundle;-><init>()V

    .line 92
    invoke-virtual {p0}, Lcom/bykv/vk/openvk/TTVfConfig;->getData()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_2

    .line 93
    invoke-virtual {p0}, Lcom/bykv/vk/openvk/TTVfConfig;->getData()Ljava/lang/String;

    move-result-object v2

    const-string v3, "extra_data"

    invoke-virtual {v1, v3, v2}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 96
    :cond_2
    invoke-virtual {p0}, Lcom/bykv/vk/openvk/TTVfConfig;->getKeywords()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_3

    .line 97
    invoke-virtual {p0}, Lcom/bykv/vk/openvk/TTVfConfig;->getKeywords()Ljava/lang/String;

    move-result-object p0

    const-string v2, "keywords"

    invoke-virtual {v1, v2, p0}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 99
    :cond_3
    invoke-virtual {v1}, Landroid/os/Bundle;->keySet()Ljava/util/Set;

    move-result-object p0

    invoke-interface {p0}, Ljava/util/Set;->isEmpty()Z

    move-result p0

    if-nez p0, :cond_4

    .line 100
    const-class p0, Lcom/bykv/vk/openvk/AdConfig;

    invoke-interface {v0, p0, v1}, Lcom/bykv/vk/openvk/TTVfManager;->getExtra(Ljava/lang/Class;Landroid/os/Bundle;)Ljava/lang/Object;

    :cond_4
    return-void
.end method

.method public static updateConfigAuth(Lcom/bykv/vk/openvk/TTVfConfig;)V
    .locals 1

    if-nez p0, :cond_0

    return-void

    .line 108
    :cond_0
    invoke-static {}, Lcom/bykv/vk/openvk/live/df;->rg()Lcom/bykv/vk/openvk/live/df;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 110
    invoke-virtual {p0}, Lcom/bykv/vk/openvk/TTVfConfig;->getInjectionAuth()Lcom/bykv/vk/openvk/live/ITTLiveTokenInjectionAuth;

    move-result-object p0

    invoke-virtual {v0, p0}, Lcom/bykv/vk/openvk/live/df;->rg(Lcom/bykv/vk/openvk/live/ITTLiveTokenInjectionAuth;)V

    :cond_1
    return-void
.end method

.method public static updatePaid(Z)V
    .locals 3

    .line 115
    sget-object v0, Lcom/bykv/vk/openvk/TTVfSdk;->rg:Lcom/bykv/vk/openvk/TTInitializer;

    invoke-interface {v0}, Lcom/bykv/vk/openvk/TTInitializer;->getAdManager()Lcom/bykv/vk/openvk/TTVfManager;

    move-result-object v0

    if-nez v0, :cond_0

    return-void

    .line 119
    :cond_0
    new-instance v1, Landroid/os/Bundle;

    invoke-direct {v1}, Landroid/os/Bundle;-><init>()V

    const-string v2, "is_paid"

    .line 120
    invoke-virtual {v1, v2, p0}, Landroid/os/Bundle;->putBoolean(Ljava/lang/String;Z)V

    .line 122
    invoke-virtual {v1}, Landroid/os/Bundle;->keySet()Ljava/util/Set;

    move-result-object p0

    invoke-interface {p0}, Ljava/util/Set;->isEmpty()Z

    move-result p0

    if-nez p0, :cond_1

    .line 123
    const-class p0, Lcom/bykv/vk/openvk/AdConfig;

    invoke-interface {v0, p0, v1}, Lcom/bykv/vk/openvk/TTVfManager;->getExtra(Ljava/lang/Class;Landroid/os/Bundle;)Ljava/lang/Object;

    :cond_1
    return-void
.end method
