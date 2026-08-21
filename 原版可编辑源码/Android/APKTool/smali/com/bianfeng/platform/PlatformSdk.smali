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

    .line 22
    new-instance v0, Lcom/bianfeng/platform/PlatformSdk$1;

    invoke-direct {v0}, Lcom/bianfeng/platform/PlatformSdk$1;-><init>()V

    sput-object v0, Lcom/bianfeng/platform/PlatformSdk;->ymnCallback:Lcom/bianfeng/ymnsdk/feature/YmnCallback;

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 19
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method static synthetic access$000()Lcom/bianfeng/platform/PlatformSdkListener;
    .locals 1

    .line 19
    sget-object v0, Lcom/bianfeng/platform/PlatformSdk;->listener:Lcom/bianfeng/platform/PlatformSdkListener;

    return-object v0
.end method

.method static synthetic access$100()Lcom/bianfeng/ymnsdk/feature/YmnCallback;
    .locals 1

    .line 19
    sget-object v0, Lcom/bianfeng/platform/PlatformSdk;->ymnCallback:Lcom/bianfeng/ymnsdk/feature/YmnCallback;

    return-object v0
.end method

.method public static getInstance()Lcom/bianfeng/platform/PlatformSdk;
    .locals 1
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    .line 46
    sget-object v0, Lcom/bianfeng/platform/PlatformSdk;->instance:Lcom/bianfeng/platform/PlatformSdk;

    if-nez v0, :cond_0

    .line 47
    new-instance v0, Lcom/bianfeng/platform/PlatformSdk;

    invoke-direct {v0}, Lcom/bianfeng/platform/PlatformSdk;-><init>()V

    sput-object v0, Lcom/bianfeng/platform/PlatformSdk;->instance:Lcom/bianfeng/platform/PlatformSdk;

    .line 49
    :cond_0
    sget-object v0, Lcom/bianfeng/platform/PlatformSdk;->instance:Lcom/bianfeng/platform/PlatformSdk;

    return-object v0
.end method

.method public static getListener()Lcom/bianfeng/platform/PlatformSdkListener;
    .locals 1

    .line 39
    sget-object v0, Lcom/bianfeng/platform/PlatformSdk;->listener:Lcom/bianfeng/platform/PlatformSdkListener;

    return-object v0
.end method

.method public static getPropertie(Ljava/lang/String;)Ljava/lang/String;
    .locals 1
    .param p0, "key"    # Ljava/lang/String;
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    .line 251
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/feature/YmnProperties;->getValue(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public static runOnUiThread(Ljava/lang/Runnable;)V
    .locals 0
    .param p0, "runnable"    # Ljava/lang/Runnable;
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    .line 261
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/YmnSdkWrapper;->runOnUiThread(Ljava/lang/Runnable;)V

    .line 262
    return-void
.end method

.method public static setListener(Lcom/bianfeng/platform/PlatformSdkListener;)V
    .locals 0
    .param p0, "listener"    # Lcom/bianfeng/platform/PlatformSdkListener;
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    .line 33
    sput-object p0, Lcom/bianfeng/platform/PlatformSdk;->listener:Lcom/bianfeng/platform/PlatformSdkListener;

    .line 34
    invoke-static {p0}, Lcom/bianfeng/platform/UserInterface;->setListener(Lcom/bianfeng/platform/PlatformSdkListener;)V

    .line 35
    invoke-static {p0}, Lcom/bianfeng/platform/PaymentInterface;->setListener(Lcom/bianfeng/platform/PlatformSdkListener;)V

    .line 36
    return-void
.end method


# virtual methods
.method public dismissProgress()V
    .locals 0
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    .line 226
    return-void
.end method

.method public getPlatformId()Ljava/lang/String;
    .locals 2
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    .line 183
    invoke-static {}, Lcom/bianfeng/ymnsdk/YmnSdkUserWrapper;->getUserDefault()Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;

    move-result-object v0

    .line 184
    .local v0, "wrapper":Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;
    if-eqz v0, :cond_0

    .line 185
    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;->a()Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    move-result-object v1

    invoke-interface {v1}, Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;->getPluginId()Ljava/lang/String;

    move-result-object v1

    return-object v1

    .line 187
    :cond_0
    const/4 v1, 0x0

    return-object v1
.end method

.method public getPlatformName()Ljava/lang/String;
    .locals 2
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    .line 197
    invoke-static {}, Lcom/bianfeng/ymnsdk/YmnSdkUserWrapper;->getUserDefault()Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;

    move-result-object v0

    .line 198
    .local v0, "wrapper":Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;
    if-eqz v0, :cond_0

    .line 199
    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;->a()Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    move-result-object v1

    invoke-interface {v1}, Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;->getPluginName()Ljava/lang/String;

    move-result-object v1

    return-object v1

    .line 201
    :cond_0
    const/4 v1, 0x0

    return-object v1
.end method

.method public getPlatformVersion()Ljava/lang/String;
    .locals 2
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    .line 211
    invoke-static {}, Lcom/bianfeng/ymnsdk/YmnSdkUserWrapper;->getUserDefault()Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;

    move-result-object v0

    .line 212
    .local v0, "wrapper":Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;
    if-eqz v0, :cond_0

    .line 213
    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;->a()Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    move-result-object v1

    invoke-interface {v1}, Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;->getSdkVersion()Ljava/lang/String;

    move-result-object v1

    return-object v1

    .line 215
    :cond_0
    const/4 v1, 0x0

    return-object v1
.end method

.method public getSdkVersion()Ljava/lang/String;
    .locals 1
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    .line 173
    invoke-static {}, Lcom/bianfeng/ymnsdk/YmnSdk;->getVersion()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method protected hookSelf(Landroid/app/Activity;)V
    .locals 0
    .param p1, "activity"    # Landroid/app/Activity;
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    .line 81
    return-void
.end method

.method public init(Landroid/app/Activity;)V
    .locals 1
    .param p1, "activity"    # Landroid/app/Activity;
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    .line 59
    new-instance v0, Lcom/bianfeng/platform/PlatformSdk$2;

    invoke-direct {v0, p0, p1}, Lcom/bianfeng/platform/PlatformSdk$2;-><init>(Lcom/bianfeng/platform/PlatformSdk;Landroid/app/Activity;)V

    invoke-virtual {p1, v0}, Landroid/app/Activity;->runOnUiThread(Ljava/lang/Runnable;)V

    .line 70
    return-void
.end method

.method public isDebugMode()Z
    .locals 1
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    .line 230
    const/4 v0, 0x0

    return v0
.end method

.method protected loadProperties()V
    .locals 0
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    .line 91
    return-void
.end method

.method public onActivityResult(IILandroid/content/Intent;)V
    .locals 0
    .param p1, "requestCode"    # I
    .param p2, "resultCode"    # I
    .param p3, "data"    # Landroid/content/Intent;
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    .line 163
    invoke-static {p1, p2, p3}, Lcom/bianfeng/ymnsdk/YmnSdkWrapper;->onActivityResult(IILandroid/content/Intent;)V

    .line 164
    return-void
.end method

.method public onNewIntent(Landroid/content/Intent;)V
    .locals 0
    .param p1, "intent"    # Landroid/content/Intent;
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    .line 150
    invoke-static {p1}, Lcom/bianfeng/ymnsdk/YmnSdkWrapper;->onNewIntent(Landroid/content/Intent;)V

    .line 151
    return-void
.end method

.method public onPause()V
    .locals 0
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    .line 114
    invoke-static {}, Lcom/bianfeng/ymnsdk/YmnSdkWrapper;->onPause()V

    .line 115
    return-void
.end method

.method public onRestart()V
    .locals 0
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    .line 106
    invoke-static {}, Lcom/bianfeng/ymnsdk/YmnSdkWrapper;->onRestart()V

    .line 107
    return-void
.end method

.method public onResume()V
    .locals 0
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    .line 122
    invoke-static {}, Lcom/bianfeng/ymnsdk/YmnSdkWrapper;->onResume()V

    .line 123
    return-void
.end method

.method public onStart()V
    .locals 0
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    .line 98
    invoke-static {}, Lcom/bianfeng/ymnsdk/YmnSdkWrapper;->onStart()V

    .line 99
    return-void
.end method

.method public onStop()V
    .locals 0
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    .line 130
    invoke-static {}, Lcom/bianfeng/ymnsdk/YmnSdkWrapper;->onStop()V

    .line 131
    return-void
.end method

.method public release()V
    .locals 1
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    .line 138
    invoke-static {}, Lcom/bianfeng/ymnsdk/YmnSdkWrapper;->onDestroy()V

    .line 139
    invoke-static {}, Lcom/bianfeng/platform/UserInterface;->getInstance()Lcom/bianfeng/platform/UserInterface;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/platform/UserInterface;->release()V

    .line 140
    invoke-static {}, Lcom/bianfeng/platform/PaymentInterface;->getInstance()Lcom/bianfeng/platform/PaymentInterface;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/platform/PaymentInterface;->release()V

    .line 141
    return-void
.end method

.method public setDebugMode(Z)V
    .locals 0
    .param p1, "debug"    # Z
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    .line 240
    invoke-static {p1}, Lcom/bianfeng/ymnsdk/YmnSdkWrapper;->setDebugMode(Z)V

    .line 241
    return-void
.end method

.method public showProgress()V
    .locals 0
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    .line 221
    return-void
.end method
