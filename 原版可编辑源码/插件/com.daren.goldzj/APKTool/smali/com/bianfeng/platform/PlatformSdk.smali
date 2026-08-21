.class public Lcom/bianfeng/platform/PlatformSdk;
.super Ljava/lang/Object;
.source "PlatformSdk.java"


# annotations
.annotation runtime Ljava/lang/Deprecated;
.end annotation


# static fields
.field private static instance:Lcom/bianfeng/platform/PlatformSdk;

.field private static listener:Lcom/bianfeng/platform/PlatformSdkListener;

.field private static ymnCallback:Lcom/bianfeng/ymnsdk/feature/YmnCallback;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 1
    new-instance v0, Lcom/bianfeng/platform/PlatformSdk$1;

    invoke-direct {v0}, Lcom/bianfeng/platform/PlatformSdk$1;-><init>()V

    sput-object v0, Lcom/bianfeng/platform/PlatformSdk;->ymnCallback:Lcom/bianfeng/ymnsdk/feature/YmnCallback;

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 1
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method static synthetic access$000()Lcom/bianfeng/platform/PlatformSdkListener;
    .locals 1

    .line 1
    sget-object v0, Lcom/bianfeng/platform/PlatformSdk;->listener:Lcom/bianfeng/platform/PlatformSdkListener;

    return-object v0
.end method

.method static synthetic access$100()Lcom/bianfeng/ymnsdk/feature/YmnCallback;
    .locals 1

    .line 1
    sget-object v0, Lcom/bianfeng/platform/PlatformSdk;->ymnCallback:Lcom/bianfeng/ymnsdk/feature/YmnCallback;

    return-object v0
.end method

.method public static getInstance()Lcom/bianfeng/platform/PlatformSdk;
    .locals 1
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    .line 1
    sget-object v0, Lcom/bianfeng/platform/PlatformSdk;->instance:Lcom/bianfeng/platform/PlatformSdk;

    if-nez v0, :cond_0

    .line 2
    new-instance v0, Lcom/bianfeng/platform/PlatformSdk;

    invoke-direct {v0}, Lcom/bianfeng/platform/PlatformSdk;-><init>()V

    sput-object v0, Lcom/bianfeng/platform/PlatformSdk;->instance:Lcom/bianfeng/platform/PlatformSdk;

    .line 4
    :cond_0
    sget-object v0, Lcom/bianfeng/platform/PlatformSdk;->instance:Lcom/bianfeng/platform/PlatformSdk;

    return-object v0
.end method

.method public static getListener()Lcom/bianfeng/platform/PlatformSdkListener;
    .locals 1

    .line 1
    sget-object v0, Lcom/bianfeng/platform/PlatformSdk;->listener:Lcom/bianfeng/platform/PlatformSdkListener;

    return-object v0
.end method

.method public static getPropertie(Ljava/lang/String;)Ljava/lang/String;
    .locals 0
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    .line 1
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/feature/YmnProperties;->getValue(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method public static runOnUiThread(Ljava/lang/Runnable;)V
    .locals 0
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    .line 1
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/YmnSdkWrapper;->runOnUiThread(Ljava/lang/Runnable;)V

    return-void
.end method

.method public static setListener(Lcom/bianfeng/platform/PlatformSdkListener;)V
    .locals 0
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    .line 1
    sput-object p0, Lcom/bianfeng/platform/PlatformSdk;->listener:Lcom/bianfeng/platform/PlatformSdkListener;

    .line 2
    invoke-static {p0}, Lcom/bianfeng/platform/UserInterface;->setListener(Lcom/bianfeng/platform/PlatformSdkListener;)V

    .line 3
    invoke-static {p0}, Lcom/bianfeng/platform/PaymentInterface;->setListener(Lcom/bianfeng/platform/PlatformSdkListener;)V

    return-void
.end method


# virtual methods
.method public dismissProgress()V
    .locals 0
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    return-void
.end method

.method public getPlatformId()Ljava/lang/String;
    .locals 1
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    .line 1
    invoke-static {}, Lcom/bianfeng/ymnsdk/YmnSdkUserWrapper;->getUserDefault()Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 3
    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;->a()Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    move-result-object v0

    invoke-interface {v0}, Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;->getPluginId()Ljava/lang/String;

    move-result-object v0

    return-object v0

    :cond_0
    const/4 v0, 0x0

    return-object v0
.end method

.method public getPlatformName()Ljava/lang/String;
    .locals 1
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    .line 1
    invoke-static {}, Lcom/bianfeng/ymnsdk/YmnSdkUserWrapper;->getUserDefault()Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 3
    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;->a()Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    move-result-object v0

    invoke-interface {v0}, Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;->getPluginName()Ljava/lang/String;

    move-result-object v0

    return-object v0

    :cond_0
    const/4 v0, 0x0

    return-object v0
.end method

.method public getPlatformVersion()Ljava/lang/String;
    .locals 1
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    .line 1
    invoke-static {}, Lcom/bianfeng/ymnsdk/YmnSdkUserWrapper;->getUserDefault()Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 3
    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;->a()Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    move-result-object v0

    invoke-interface {v0}, Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;->getSdkVersion()Ljava/lang/String;

    move-result-object v0

    return-object v0

    :cond_0
    const/4 v0, 0x0

    return-object v0
.end method

.method public getSdkVersion()Ljava/lang/String;
    .locals 1
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    .line 1
    invoke-static {}, Lcom/bianfeng/ymnsdk/YmnSdk;->getVersion()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method protected hookSelf(Landroid/app/Activity;)V
    .locals 0
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    return-void
.end method

.method public init(Landroid/app/Activity;)V
    .locals 1
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    .line 1
    new-instance v0, Lcom/bianfeng/platform/PlatformSdk$2;

    invoke-direct {v0, p0, p1}, Lcom/bianfeng/platform/PlatformSdk$2;-><init>(Lcom/bianfeng/platform/PlatformSdk;Landroid/app/Activity;)V

    invoke-virtual {p1, v0}, Landroid/app/Activity;->runOnUiThread(Ljava/lang/Runnable;)V

    return-void
.end method

.method public isDebugMode()Z
    .locals 1
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    const/4 v0, 0x0

    return v0
.end method

.method protected loadProperties()V
    .locals 0
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    return-void
.end method

.method public onActivityResult(IILandroid/content/Intent;)V
    .locals 0
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    .line 1
    invoke-static {p1, p2, p3}, Lcom/bianfeng/ymnsdk/YmnSdkWrapper;->onActivityResult(IILandroid/content/Intent;)V

    return-void
.end method

.method public onNewIntent(Landroid/content/Intent;)V
    .locals 0
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    .line 1
    invoke-static {p1}, Lcom/bianfeng/ymnsdk/YmnSdkWrapper;->onNewIntent(Landroid/content/Intent;)V

    return-void
.end method

.method public onPause()V
    .locals 0
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    .line 1
    invoke-static {}, Lcom/bianfeng/ymnsdk/YmnSdkWrapper;->onPause()V

    return-void
.end method

.method public onRestart()V
    .locals 0
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    .line 1
    invoke-static {}, Lcom/bianfeng/ymnsdk/YmnSdkWrapper;->onRestart()V

    return-void
.end method

.method public onResume()V
    .locals 0
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    .line 1
    invoke-static {}, Lcom/bianfeng/ymnsdk/YmnSdkWrapper;->onResume()V

    return-void
.end method

.method public onStart()V
    .locals 0
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    .line 1
    invoke-static {}, Lcom/bianfeng/ymnsdk/YmnSdkWrapper;->onStart()V

    return-void
.end method

.method public onStop()V
    .locals 0
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    .line 1
    invoke-static {}, Lcom/bianfeng/ymnsdk/YmnSdkWrapper;->onStop()V

    return-void
.end method

.method public release()V
    .locals 1
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    .line 1
    invoke-static {}, Lcom/bianfeng/ymnsdk/YmnSdkWrapper;->onDestroy()V

    .line 2
    invoke-static {}, Lcom/bianfeng/platform/UserInterface;->getInstance()Lcom/bianfeng/platform/UserInterface;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/platform/UserInterface;->release()V

    .line 3
    invoke-static {}, Lcom/bianfeng/platform/PaymentInterface;->getInstance()Lcom/bianfeng/platform/PaymentInterface;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/platform/PaymentInterface;->release()V

    return-void
.end method

.method public setDebugMode(Z)V
    .locals 0
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    .line 1
    invoke-static {p1}, Lcom/bianfeng/ymnsdk/YmnSdkWrapper;->setDebugMode(Z)V

    return-void
.end method

.method public showProgress()V
    .locals 0
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    return-void
.end method
