.class public Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/bytedance/android/live/base/api/ILiveHostContextParam;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x9
    name = "Builder"
.end annotation


# instance fields
.field private aLogConfig:Lcom/bytedance/android/live/saas/middleware/alog/ALogConfig;

.field private activityProvider:Lcom/bytedance/android/live/base/api/ILiveHostContextParam$IHostActivityProvider;

.field private aid:I

.field private appIcon:I

.field private appLogConfig:Lcom/bytedance/android/live/saas/middleware/applog/AppLogConfig;

.field private appName:Ljava/lang/String;

.field private channel:Ljava/lang/String;

.field private cjAppId:Ljava/lang/String;

.field private cjMerchantId:Ljava/lang/String;

.field private clientKey:Ljava/lang/String;

.field private context:Landroid/app/Application;

.field private ecHostAppId:Ljava/lang/String;

.field private feParamsExtra:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private generalAppId:Ljava/lang/String;

.field private hostActionParam:Lcom/bytedance/android/live/base/api/ILiveHostActionParam;

.field private hostPermission:Lcom/bytedance/android/live/base/api/IHostPermission;

.field private hostWebViewParam:Lcom/bytedance/android/live/base/api/ILiveHostWebViewParam;

.field private injectionAuth:Lcom/bytedance/android/livehostapi/platform/IHostTokenInjectionAuth;

.field private isBoe:Z

.field private isDebug:Z

.field private methodChannelService:Lcom/bytedance/android/live/base/api/MethodChannelService;

.field private nativeLibraryDir:Ljava/lang/String;

.field private needInitNetwork:Z

.field private partner:Ljava/lang/String;

.field private partnerExtra:Lcom/bytedance/android/live/base/api/PartnerExtra;

.field private partnerSecret:Ljava/lang/String;

.field private ttSDKAppId:Ljava/lang/String;

.field private ttSDKCertAssetsPath:Ljava/lang/String;

.field private userIdGetter:Lcom/bytedance/android/live/base/api/ILiveHostContextParam$IUserIdGetter;

.field private version:Ljava/lang/String;

.field private versionCode:I


# direct methods
.method public constructor <init>()V
    .locals 2

    .line 121
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const-string v0, ""

    .line 101
    iput-object v0, p0, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;->cjAppId:Ljava/lang/String;

    .line 102
    iput-object v0, p0, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;->cjMerchantId:Ljava/lang/String;

    .line 103
    iput-object v0, p0, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;->nativeLibraryDir:Ljava/lang/String;

    const/4 v1, 0x0

    .line 106
    iput-object v1, p0, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;->partnerExtra:Lcom/bytedance/android/live/base/api/PartnerExtra;

    .line 107
    iput-object v1, p0, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;->feParamsExtra:Ljava/util/Map;

    .line 108
    iput-object v1, p0, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;->ecHostAppId:Ljava/lang/String;

    .line 109
    iput-object v0, p0, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;->clientKey:Ljava/lang/String;

    const/4 v0, 0x1

    .line 118
    iput-boolean v0, p0, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;->needInitNetwork:Z

    .line 122
    new-instance v0, Lcom/bytedance/android/live/base/api/DefaultHostWebViewParam;

    invoke-direct {v0}, Lcom/bytedance/android/live/base/api/DefaultHostWebViewParam;-><init>()V

    iput-object v0, p0, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;->hostWebViewParam:Lcom/bytedance/android/live/base/api/ILiveHostWebViewParam;

    .line 123
    iput-object v1, p0, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;->injectionAuth:Lcom/bytedance/android/livehostapi/platform/IHostTokenInjectionAuth;

    .line 124
    new-instance v0, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder$1;

    invoke-direct {v0, p0}, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder$1;-><init>(Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;)V

    iput-object v0, p0, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;->userIdGetter:Lcom/bytedance/android/live/base/api/ILiveHostContextParam$IUserIdGetter;

    .line 130
    new-instance v0, Lcom/bytedance/android/live/base/api/DefaultHostPermission;

    invoke-direct {v0}, Lcom/bytedance/android/live/base/api/DefaultHostPermission;-><init>()V

    iput-object v0, p0, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;->hostPermission:Lcom/bytedance/android/live/base/api/IHostPermission;

    return-void
.end method

.method static synthetic access$000(Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;)Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;
    .locals 0

    .line 88
    invoke-direct {p0, p1}, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;->copy(Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;)Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;

    move-result-object p0

    return-object p0
.end method

.method static synthetic access$100(Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;)Lcom/bytedance/android/live/base/api/MethodChannelService;
    .locals 0

    .line 88
    iget-object p0, p0, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;->methodChannelService:Lcom/bytedance/android/live/base/api/MethodChannelService;

    return-object p0
.end method

.method static synthetic access$1000(Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;)I
    .locals 0

    .line 88
    iget p0, p0, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;->appIcon:I

    return p0
.end method

.method static synthetic access$1100(Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;)Z
    .locals 0

    .line 88
    iget-boolean p0, p0, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;->isDebug:Z

    return p0
.end method

.method static synthetic access$1200(Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;)Z
    .locals 0

    .line 88
    iget-boolean p0, p0, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;->isBoe:Z

    return p0
.end method

.method static synthetic access$1300(Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;)Ljava/lang/String;
    .locals 0

    .line 88
    iget-object p0, p0, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;->generalAppId:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic access$1400(Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;)Ljava/lang/String;
    .locals 0

    .line 88
    iget-object p0, p0, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;->ttSDKAppId:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic access$1500(Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;)Ljava/lang/String;
    .locals 0

    .line 88
    iget-object p0, p0, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;->ttSDKCertAssetsPath:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic access$1600(Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;)Lcom/bytedance/android/live/base/api/ILiveHostActionParam;
    .locals 0

    .line 88
    iget-object p0, p0, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;->hostActionParam:Lcom/bytedance/android/live/base/api/ILiveHostActionParam;

    return-object p0
.end method

.method static synthetic access$1700(Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;)Lcom/bytedance/android/live/base/api/ILiveHostWebViewParam;
    .locals 0

    .line 88
    iget-object p0, p0, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;->hostWebViewParam:Lcom/bytedance/android/live/base/api/ILiveHostWebViewParam;

    return-object p0
.end method

.method static synthetic access$1800(Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;)Ljava/lang/String;
    .locals 0

    .line 88
    iget-object p0, p0, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;->cjAppId:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic access$1900(Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;)Ljava/lang/String;
    .locals 0

    .line 88
    iget-object p0, p0, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;->cjMerchantId:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic access$200(Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;)I
    .locals 0

    .line 88
    iget p0, p0, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;->aid:I

    return p0
.end method

.method static synthetic access$2000(Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;)Ljava/lang/String;
    .locals 0

    .line 88
    iget-object p0, p0, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;->nativeLibraryDir:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic access$2100(Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;)Lcom/bytedance/android/live/base/api/ILiveHostContextParam$IHostActivityProvider;
    .locals 0

    .line 88
    iget-object p0, p0, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;->activityProvider:Lcom/bytedance/android/live/base/api/ILiveHostContextParam$IHostActivityProvider;

    return-object p0
.end method

.method static synthetic access$2200(Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;)Lcom/bytedance/android/live/base/api/ILiveHostContextParam$IUserIdGetter;
    .locals 0

    .line 88
    iget-object p0, p0, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;->userIdGetter:Lcom/bytedance/android/live/base/api/ILiveHostContextParam$IUserIdGetter;

    return-object p0
.end method

.method static synthetic access$2300(Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;)Lcom/bytedance/android/live/saas/middleware/alog/ALogConfig;
    .locals 0

    .line 88
    iget-object p0, p0, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;->aLogConfig:Lcom/bytedance/android/live/saas/middleware/alog/ALogConfig;

    return-object p0
.end method

.method static synthetic access$2400(Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;)Lcom/bytedance/android/live/saas/middleware/applog/AppLogConfig;
    .locals 0

    .line 88
    iget-object p0, p0, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;->appLogConfig:Lcom/bytedance/android/live/saas/middleware/applog/AppLogConfig;

    return-object p0
.end method

.method static synthetic access$2500(Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;)Ljava/lang/String;
    .locals 0

    .line 88
    iget-object p0, p0, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;->partner:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic access$2600(Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;)Ljava/lang/String;
    .locals 0

    .line 88
    iget-object p0, p0, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;->partnerSecret:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic access$2700(Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;)Lcom/bytedance/android/live/base/api/PartnerExtra;
    .locals 0

    .line 88
    iget-object p0, p0, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;->partnerExtra:Lcom/bytedance/android/live/base/api/PartnerExtra;

    return-object p0
.end method

.method static synthetic access$2800(Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;)Ljava/util/Map;
    .locals 0

    .line 88
    iget-object p0, p0, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;->feParamsExtra:Ljava/util/Map;

    return-object p0
.end method

.method static synthetic access$2900(Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;)Ljava/lang/String;
    .locals 0

    .line 88
    iget-object p0, p0, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;->ecHostAppId:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic access$300(Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;)Ljava/lang/String;
    .locals 0

    .line 88
    iget-object p0, p0, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;->appName:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic access$3000(Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;)Ljava/lang/String;
    .locals 0

    .line 88
    iget-object p0, p0, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;->clientKey:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic access$3100(Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;)Z
    .locals 0

    .line 88
    iget-boolean p0, p0, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;->needInitNetwork:Z

    return p0
.end method

.method static synthetic access$3200(Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;)Lcom/bytedance/android/live/base/api/IHostPermission;
    .locals 0

    .line 88
    iget-object p0, p0, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;->hostPermission:Lcom/bytedance/android/live/base/api/IHostPermission;

    return-object p0
.end method

.method static synthetic access$400(Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;)Landroid/app/Application;
    .locals 0

    .line 88
    iget-object p0, p0, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;->context:Landroid/app/Application;

    return-object p0
.end method

.method static synthetic access$500(Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;Landroid/app/Application;)Landroid/content/pm/PackageInfo;
    .locals 0

    .line 88
    invoke-direct {p0, p1}, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;->getPackageInfo(Landroid/app/Application;)Landroid/content/pm/PackageInfo;

    move-result-object p0

    return-object p0
.end method

.method static synthetic access$600(Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;)Ljava/lang/String;
    .locals 0

    .line 88
    iget-object p0, p0, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;->channel:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic access$700(Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;)Ljava/lang/String;
    .locals 0

    .line 88
    iget-object p0, p0, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;->version:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic access$800(Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;)I
    .locals 0

    .line 88
    iget p0, p0, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;->versionCode:I

    return p0
.end method

.method static synthetic access$900(Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;)Lcom/bytedance/android/livehostapi/platform/IHostTokenInjectionAuth;
    .locals 0

    .line 88
    iget-object p0, p0, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;->injectionAuth:Lcom/bytedance/android/livehostapi/platform/IHostTokenInjectionAuth;

    return-object p0
.end method

.method private copy(Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;)Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;
    .locals 7

    .line 496
    new-instance v0, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;

    invoke-direct {v0}, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;-><init>()V

    .line 497
    const-class v1, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;

    invoke-virtual {v1}, Ljava/lang/Class;->getDeclaredFields()[Ljava/lang/reflect/Field;

    move-result-object v1

    .line 498
    array-length v2, v1

    const/4 v3, 0x0

    :goto_0
    if-ge v3, v2, :cond_1

    aget-object v4, v1, v3

    .line 499
    invoke-virtual {v4}, Ljava/lang/reflect/Field;->isAccessible()Z

    move-result v5

    if-nez v5, :cond_0

    const/4 v6, 0x1

    .line 501
    invoke-virtual {v4, v6}, Ljava/lang/reflect/Field;->setAccessible(Z)V

    .line 503
    :cond_0
    invoke-virtual {v4, p1}, Ljava/lang/reflect/Field;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v6

    invoke-virtual {v4, v0, v6}, Ljava/lang/reflect/Field;->set(Ljava/lang/Object;Ljava/lang/Object;)V

    .line 504
    invoke-virtual {v4, v5}, Ljava/lang/reflect/Field;->setAccessible(Z)V

    add-int/lit8 v3, v3, 0x1

    goto :goto_0

    :cond_1
    return-object v0
.end method

.method private getPackageInfo(Landroid/app/Application;)Landroid/content/pm/PackageInfo;
    .locals 2

    .line 511
    :try_start_0
    invoke-virtual {p1}, Landroid/app/Application;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object v0

    invoke-virtual {p1}, Landroid/app/Application;->getPackageName()Ljava/lang/String;

    move-result-object p1

    const/4 v1, 0x0

    invoke-virtual {v0, p1, v1}, Landroid/content/pm/PackageManager;->getPackageInfo(Ljava/lang/String;I)Landroid/content/pm/PackageInfo;

    move-result-object p1
    :try_end_0
    .catch Landroid/content/pm/PackageManager$NameNotFoundException; {:try_start_0 .. :try_end_0} :catch_0

    return-object p1

    :catch_0
    move-exception p1

    .line 513
    invoke-virtual {p1}, Landroid/content/pm/PackageManager$NameNotFoundException;->printStackTrace()V

    const/4 p1, 0x0

    return-object p1
.end method


# virtual methods
.method public build()Lcom/bytedance/android/live/base/api/ILiveHostContextParam;
    .locals 2

    .line 291
    iget-object v0, p0, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;->partner:Ljava/lang/String;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;->partnerSecret:Ljava/lang/String;

    if-eqz v0, :cond_0

    .line 297
    new-instance v0, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder$2;

    invoke-direct {v0, p0, p0}, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder$2;-><init>(Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;)V

    return-object v0

    .line 292
    :cond_0
    new-instance v0, Ljava/lang/IllegalArgumentException;

    const-string v1, "partner & partnerSecret is required"

    invoke-direct {v0, v1}, Ljava/lang/IllegalArgumentException;-><init>(Ljava/lang/String;)V

    throw v0
.end method

.method public provideMethodChannel(Lcom/bytedance/android/live/base/api/MethodChannelService;)Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;
    .locals 0

    .line 278
    iput-object p1, p0, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;->methodChannelService:Lcom/bytedance/android/live/base/api/MethodChannelService;

    return-object p0
.end method

.method public setALogConfig(Lcom/bytedance/android/live/saas/middleware/alog/ALogConfig;)Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;
    .locals 0

    .line 248
    iput-object p1, p0, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;->aLogConfig:Lcom/bytedance/android/live/saas/middleware/alog/ALogConfig;

    return-object p0
.end method

.method public setActivityProvider(Lcom/bytedance/android/live/base/api/ILiveHostContextParam$IHostActivityProvider;)Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;
    .locals 0

    .line 228
    iput-object p1, p0, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;->activityProvider:Lcom/bytedance/android/live/base/api/ILiveHostContextParam$IHostActivityProvider;

    return-object p0
.end method

.method public setAid(I)Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;
    .locals 0

    .line 134
    iput p1, p0, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;->aid:I

    return-object p0
.end method

.method public setAppIcon(I)Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;
    .locals 0

    .line 178
    iput p1, p0, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;->appIcon:I

    return-object p0
.end method

.method public setAppLogConfig(Lcom/bytedance/android/live/saas/middleware/applog/AppLogConfig;)Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;
    .locals 0

    .line 253
    iput-object p1, p0, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;->appLogConfig:Lcom/bytedance/android/live/saas/middleware/applog/AppLogConfig;

    return-object p0
.end method

.method public setAppName(Ljava/lang/String;)Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;
    .locals 0

    .line 139
    iput-object p1, p0, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;->appName:Ljava/lang/String;

    return-object p0
.end method

.method public setChannel(Ljava/lang/String;)Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;
    .locals 0

    .line 168
    iput-object p1, p0, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;->channel:Ljava/lang/String;

    return-object p0
.end method

.method public setCjAppId(Ljava/lang/String;)Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;
    .locals 0

    .line 208
    iput-object p1, p0, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;->cjAppId:Ljava/lang/String;

    return-object p0
.end method

.method public setCjMerchantId(Ljava/lang/String;)Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;
    .locals 0

    .line 213
    iput-object p1, p0, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;->cjMerchantId:Ljava/lang/String;

    return-object p0
.end method

.method public setClientKey(Ljava/lang/String;)Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;
    .locals 0

    .line 149
    iput-object p1, p0, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;->clientKey:Ljava/lang/String;

    return-object p0
.end method

.method public setContext(Landroid/app/Application;)Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;
    .locals 0

    .line 173
    iput-object p1, p0, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;->context:Landroid/app/Application;

    return-object p0
.end method

.method public setECHostAppId(Ljava/lang/String;)Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;
    .locals 0

    .line 273
    iput-object p1, p0, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;->ecHostAppId:Ljava/lang/String;

    return-object p0
.end method

.method public setFeParamsExtra(Ljava/util/Map;)Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;)",
            "Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;"
        }
    .end annotation

    .line 268
    iput-object p1, p0, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;->feParamsExtra:Ljava/util/Map;

    return-object p0
.end method

.method public setGeneralAppId(Ljava/lang/String;)Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;
    .locals 0

    .line 193
    iput-object p1, p0, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;->generalAppId:Ljava/lang/String;

    return-object p0
.end method

.method public setHostActionParam(Lcom/bytedance/android/live/base/api/ILiveHostActionParam;)Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;
    .locals 0

    .line 233
    iput-object p1, p0, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;->hostActionParam:Lcom/bytedance/android/live/base/api/ILiveHostActionParam;

    return-object p0
.end method

.method public setHostPermission(Lcom/bytedance/android/live/base/api/IHostPermission;)Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;
    .locals 0

    if-eqz p1, :cond_0

    .line 284
    iput-object p1, p0, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;->hostPermission:Lcom/bytedance/android/live/base/api/IHostPermission;

    :cond_0
    return-object p0
.end method

.method public setHostWebViewParam(Lcom/bytedance/android/live/base/api/ILiveHostWebViewParam;)Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;
    .locals 0

    .line 238
    iput-object p1, p0, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;->hostWebViewParam:Lcom/bytedance/android/live/base/api/ILiveHostWebViewParam;

    return-object p0
.end method

.method public setInjectionAuth(Lcom/bytedance/android/livehostapi/platform/IHostTokenInjectionAuth;)Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;
    .locals 0

    .line 223
    iput-object p1, p0, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;->injectionAuth:Lcom/bytedance/android/livehostapi/platform/IHostTokenInjectionAuth;

    return-object p0
.end method

.method public setIsBoe(Z)Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;
    .locals 0

    .line 188
    iput-boolean p1, p0, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;->isBoe:Z

    return-object p0
.end method

.method public setIsDebug(Z)Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;
    .locals 0

    .line 183
    iput-boolean p1, p0, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;->isDebug:Z

    return-object p0
.end method

.method public setIsNeedInitNetwork(Z)Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;
    .locals 0

    .line 258
    iput-boolean p1, p0, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;->needInitNetwork:Z

    return-object p0
.end method

.method public setNativeLibraryDir(Ljava/lang/String;)Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;
    .locals 0

    .line 218
    iput-object p1, p0, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;->nativeLibraryDir:Ljava/lang/String;

    return-object p0
.end method

.method public setPartner(Ljava/lang/String;)Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;
    .locals 0

    .line 154
    iput-object p1, p0, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;->partner:Ljava/lang/String;

    return-object p0
.end method

.method public setPartnerExtra(Lcom/bytedance/android/live/base/api/PartnerExtra;)Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;
    .locals 0

    .line 263
    iput-object p1, p0, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;->partnerExtra:Lcom/bytedance/android/live/base/api/PartnerExtra;

    return-object p0
.end method

.method public setPartnerSecret(Ljava/lang/String;)Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;
    .locals 0

    .line 158
    iput-object p1, p0, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;->partnerSecret:Ljava/lang/String;

    return-object p0
.end method

.method public setTtSDKAppId(Ljava/lang/String;)Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;
    .locals 0

    .line 198
    iput-object p1, p0, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;->ttSDKAppId:Ljava/lang/String;

    return-object p0
.end method

.method public setTtSDKCertAssetsPath(Ljava/lang/String;)Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;
    .locals 0

    .line 203
    iput-object p1, p0, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;->ttSDKCertAssetsPath:Ljava/lang/String;

    return-object p0
.end method

.method public setUserIdGetter(Lcom/bytedance/android/live/base/api/ILiveHostContextParam$IUserIdGetter;)Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;
    .locals 0

    .line 243
    iput-object p1, p0, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;->userIdGetter:Lcom/bytedance/android/live/base/api/ILiveHostContextParam$IUserIdGetter;

    return-object p0
.end method

.method public setVersion(Ljava/lang/String;)Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;
    .locals 0

    .line 144
    iput-object p1, p0, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;->version:Ljava/lang/String;

    return-object p0
.end method

.method public setVersionCode(I)Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;
    .locals 0

    .line 163
    iput p1, p0, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;->versionCode:I

    return-object p0
.end method
