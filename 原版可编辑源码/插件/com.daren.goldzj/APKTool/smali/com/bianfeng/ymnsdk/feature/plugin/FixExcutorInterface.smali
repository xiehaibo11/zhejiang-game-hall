.class public Lcom/bianfeng/ymnsdk/feature/plugin/FixExcutorInterface;
.super Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;
.source "FixExcutorInterface.java"

# interfaces
.implements Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature;
.implements Lcom/bianfeng/ymnsdk/feature/protocol/IPaymentFeature;


# annotations
.annotation runtime Ljava/lang/Deprecated;
.end annotation


# static fields
.field private static final TEXT:Ljava/lang/String; = "waiting"


# instance fields
.field private paymentInterface:Lcom/bianfeng/platform/PaymentInterface;

.field private platformSdk:Lcom/bianfeng/platform/PlatformSdk;

.field private userInterface:Lcom/bianfeng/platform/UserInterface;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 1
    invoke-direct {p0}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;-><init>()V

    return-void
.end method


# virtual methods
.method public available()Z
    .locals 1

    .line 1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/FixExcutorInterface;->platformSdk:Lcom/bianfeng/platform/PlatformSdk;

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return v0
.end method

.method public varargs callFunction(Ljava/lang/String;[Ljava/lang/String;)V
    .locals 2

    .line 1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/FixExcutorInterface;->userInterface:Lcom/bianfeng/platform/UserInterface;

    if-eqz v0, :cond_2

    if-eqz p2, :cond_1

    .line 2
    array-length v1, p2

    if-nez v1, :cond_0

    goto :goto_0

    .line 5
    :cond_0
    invoke-virtual {v0, p1, p2}, Lcom/bianfeng/platform/UserInterface;->callFunction(Ljava/lang/String;[Ljava/lang/String;)V

    goto :goto_1

    .line 6
    :cond_1
    :goto_0
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/FixExcutorInterface;->userInterface:Lcom/bianfeng/platform/UserInterface;

    invoke-virtual {v0, p1}, Lcom/bianfeng/platform/UserInterface;->callFunction(Ljava/lang/String;)V

    .line 11
    :cond_2
    :goto_1
    invoke-super {p0, p1, p2}, Lcom/bianfeng/ymnsdk/feature/YmnPlugin;->callFunction(Ljava/lang/String;[Ljava/lang/String;)V

    return-void
.end method

.method public enterPlatform()V
    .locals 2

    .line 1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/FixExcutorInterface;->userInterface:Lcom/bianfeng/platform/UserInterface;

    if-eqz v0, :cond_0

    const-string v1, "enterPlatform"

    .line 2
    invoke-virtual {v0, v1}, Lcom/bianfeng/platform/UserInterface;->callFunction(Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public exit()V
    .locals 2

    .line 1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/FixExcutorInterface;->userInterface:Lcom/bianfeng/platform/UserInterface;

    if-eqz v0, :cond_0

    const-string v1, "exit"

    .line 2
    invoke-virtual {v0, v1}, Lcom/bianfeng/platform/UserInterface;->callFunction(Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public getAndShowVerifyRealName()V
    .locals 2

    .line 1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/FixExcutorInterface;->userInterface:Lcom/bianfeng/platform/UserInterface;

    if-eqz v0, :cond_0

    const-string v1, "get_show_verify_realname"

    .line 2
    invoke-virtual {v0, v1}, Lcom/bianfeng/platform/UserInterface;->callFunction(Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public getOrderId()Ljava/lang/String;
    .locals 1

    .line 1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/FixExcutorInterface;->paymentInterface:Lcom/bianfeng/platform/PaymentInterface;

    if-eqz v0, :cond_0

    .line 2
    invoke-virtual {v0}, Lcom/bianfeng/platform/PaymentInterface;->getOrderId()Ljava/lang/String;

    move-result-object v0

    return-object v0

    :cond_0
    const/4 v0, 0x0

    return-object v0
.end method

.method public getPluginId()Ljava/lang/String;
    .locals 1

    .line 1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/FixExcutorInterface;->platformSdk:Lcom/bianfeng/platform/PlatformSdk;

    if-eqz v0, :cond_0

    .line 2
    invoke-virtual {v0}, Lcom/bianfeng/platform/PlatformSdk;->getPlatformId()Ljava/lang/String;

    move-result-object v0

    return-object v0

    :cond_0
    const-string v0, "waiting"

    return-object v0
.end method

.method public getPluginName()Ljava/lang/String;
    .locals 1

    .line 1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/FixExcutorInterface;->platformSdk:Lcom/bianfeng/platform/PlatformSdk;

    if-eqz v0, :cond_0

    .line 2
    invoke-virtual {v0}, Lcom/bianfeng/platform/PlatformSdk;->getPlatformName()Ljava/lang/String;

    move-result-object v0

    return-object v0

    :cond_0
    const-string v0, "waiting"

    return-object v0
.end method

.method public getPluginVersion()I
    .locals 1

    const/4 v0, 0x0

    return v0
.end method

.method public getSdkVersion()Ljava/lang/String;
    .locals 1

    .line 1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/FixExcutorInterface;->platformSdk:Lcom/bianfeng/platform/PlatformSdk;

    if-eqz v0, :cond_0

    .line 2
    invoke-virtual {v0}, Lcom/bianfeng/platform/PlatformSdk;->getPlatformVersion()Ljava/lang/String;

    move-result-object v0

    return-object v0

    :cond_0
    const-string v0, "waiting"

    return-object v0
.end method

.method public getUserInfo()Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;
    .locals 1

    const/4 v0, 0x0

    return-object v0
.end method

.method public getVerifyRealNameInfo()V
    .locals 2

    .line 1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/FixExcutorInterface;->userInterface:Lcom/bianfeng/platform/UserInterface;

    if-eqz v0, :cond_0

    const-string v1, "get_verify_realname_info"

    .line 2
    invoke-virtual {v0, v1}, Lcom/bianfeng/platform/UserInterface;->callFunction(Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public hideToolBar()V
    .locals 2

    .line 1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/FixExcutorInterface;->userInterface:Lcom/bianfeng/platform/UserInterface;

    if-eqz v0, :cond_0

    const-string v1, "hideToolBar"

    .line 2
    invoke-virtual {v0, v1}, Lcom/bianfeng/platform/UserInterface;->callFunction(Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public isLogined()Z
    .locals 1

    const/4 v0, 0x0

    return v0
.end method

.method public isSupportFunction(Ljava/lang/String;)Z
    .locals 1

    .line 1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/FixExcutorInterface;->userInterface:Lcom/bianfeng/platform/UserInterface;

    if-eqz v0, :cond_0

    .line 2
    invoke-virtual {v0, p1}, Lcom/bianfeng/platform/UserInterface;->isSupportFunction(Ljava/lang/String;)Z

    move-result p1

    return p1

    .line 4
    :cond_0
    invoke-super {p0, p1}, Lcom/bianfeng/ymnsdk/feature/YmnPlugin;->isSupportFunction(Ljava/lang/String;)Z

    move-result p1

    return p1
.end method

.method public login()V
    .locals 2

    .line 1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/FixExcutorInterface;->userInterface:Lcom/bianfeng/platform/UserInterface;

    if-eqz v0, :cond_0

    .line 2
    new-instance v1, Lcom/bianfeng/ymnsdk/feature/plugin/FixExcutorInterface$a;

    invoke-direct {v1, p0}, Lcom/bianfeng/ymnsdk/feature/plugin/FixExcutorInterface$a;-><init>(Lcom/bianfeng/ymnsdk/feature/plugin/FixExcutorInterface;)V

    invoke-virtual {v0, v1}, Lcom/bianfeng/platform/UserInterface;->thirdLogin(Lcom/bianfeng/platform/PlatformSdkListener;)V

    :cond_0
    return-void
.end method

.method public logout()V
    .locals 2

    .line 1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/FixExcutorInterface;->userInterface:Lcom/bianfeng/platform/UserInterface;

    if-eqz v0, :cond_0

    const-string v1, "logout"

    .line 2
    invoke-virtual {v0, v1}, Lcom/bianfeng/platform/UserInterface;->callFunction(Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public onActivityResult(IILandroid/content/Intent;)V
    .locals 1

    .line 1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/FixExcutorInterface;->platformSdk:Lcom/bianfeng/platform/PlatformSdk;

    if-eqz v0, :cond_0

    .line 2
    invoke-virtual {v0, p1, p2, p3}, Lcom/bianfeng/platform/PlatformSdk;->onActivityResult(IILandroid/content/Intent;)V

    :cond_0
    return-void
.end method

.method public onDestroy()V
    .locals 1

    .line 1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/FixExcutorInterface;->platformSdk:Lcom/bianfeng/platform/PlatformSdk;

    if-eqz v0, :cond_0

    .line 2
    invoke-virtual {v0}, Lcom/bianfeng/platform/PlatformSdk;->release()V

    .line 4
    :cond_0
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/FixExcutorInterface;->userInterface:Lcom/bianfeng/platform/UserInterface;

    if-eqz v0, :cond_1

    .line 5
    invoke-virtual {v0}, Lcom/bianfeng/platform/UserInterface;->release()V

    .line 7
    :cond_1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/FixExcutorInterface;->paymentInterface:Lcom/bianfeng/platform/PaymentInterface;

    if-eqz v0, :cond_2

    .line 8
    invoke-virtual {v0}, Lcom/bianfeng/platform/PaymentInterface;->release()V

    :cond_2
    return-void
.end method

.method public onInit(Landroid/content/Context;)V
    .locals 2

    .line 1
    invoke-super {p0, p1}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->onInit(Landroid/content/Context;)V

    .line 2
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/FixExcutorInterface;->platformSdk:Lcom/bianfeng/platform/PlatformSdk;

    if-eqz v0, :cond_0

    .line 3
    move-object v1, p1

    check-cast v1, Landroid/app/Activity;

    invoke-virtual {v0, v1}, Lcom/bianfeng/platform/PlatformSdk;->init(Landroid/app/Activity;)V

    .line 5
    :cond_0
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/FixExcutorInterface;->userInterface:Lcom/bianfeng/platform/UserInterface;

    if-eqz v0, :cond_1

    .line 6
    move-object v1, p1

    check-cast v1, Landroid/app/Activity;

    invoke-virtual {v0, v1}, Lcom/bianfeng/platform/UserInterface;->init(Landroid/app/Activity;)V

    .line 8
    :cond_1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/FixExcutorInterface;->paymentInterface:Lcom/bianfeng/platform/PaymentInterface;

    if-eqz v0, :cond_2

    .line 9
    check-cast p1, Landroid/app/Activity;

    invoke-virtual {v0, p1}, Lcom/bianfeng/platform/PaymentInterface;->init(Landroid/app/Activity;)V

    :cond_2
    return-void
.end method

.method public onNewIntent(Landroid/content/Intent;)V
    .locals 1

    .line 1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/FixExcutorInterface;->platformSdk:Lcom/bianfeng/platform/PlatformSdk;

    if-eqz v0, :cond_0

    .line 2
    invoke-virtual {v0, p1}, Lcom/bianfeng/platform/PlatformSdk;->onNewIntent(Landroid/content/Intent;)V

    :cond_0
    return-void
.end method

.method public onPause()V
    .locals 1

    .line 1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/FixExcutorInterface;->platformSdk:Lcom/bianfeng/platform/PlatformSdk;

    if-eqz v0, :cond_0

    .line 2
    invoke-virtual {v0}, Lcom/bianfeng/platform/PlatformSdk;->onPause()V

    :cond_0
    return-void
.end method

.method public onRestart()V
    .locals 1

    .line 1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/FixExcutorInterface;->platformSdk:Lcom/bianfeng/platform/PlatformSdk;

    if-eqz v0, :cond_0

    .line 2
    invoke-virtual {v0}, Lcom/bianfeng/platform/PlatformSdk;->onRestart()V

    :cond_0
    return-void
.end method

.method public onResume()V
    .locals 1

    .line 1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/FixExcutorInterface;->platformSdk:Lcom/bianfeng/platform/PlatformSdk;

    if-eqz v0, :cond_0

    .line 2
    invoke-virtual {v0}, Lcom/bianfeng/platform/PlatformSdk;->onResume()V

    :cond_0
    return-void
.end method

.method public onStart()V
    .locals 1

    .line 1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/FixExcutorInterface;->platformSdk:Lcom/bianfeng/platform/PlatformSdk;

    if-eqz v0, :cond_0

    .line 2
    invoke-virtual {v0}, Lcom/bianfeng/platform/PlatformSdk;->onStart()V

    :cond_0
    return-void
.end method

.method public onStop()V
    .locals 1

    .line 1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/FixExcutorInterface;->platformSdk:Lcom/bianfeng/platform/PlatformSdk;

    if-eqz v0, :cond_0

    .line 2
    invoke-virtual {v0}, Lcom/bianfeng/platform/PlatformSdk;->onStop()V

    :cond_0
    return-void
.end method

.method public pay(Ljava/util/Map;)V
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    .line 1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/FixExcutorInterface;->paymentInterface:Lcom/bianfeng/platform/PaymentInterface;

    if-eqz v0, :cond_0

    .line 2
    new-instance v1, Lcom/bianfeng/ymnsdk/feature/plugin/FixExcutorInterface$b;

    invoke-direct {v1, p0}, Lcom/bianfeng/ymnsdk/feature/plugin/FixExcutorInterface$b;-><init>(Lcom/bianfeng/ymnsdk/feature/plugin/FixExcutorInterface;)V

    invoke-virtual {v0, p1, v1}, Lcom/bianfeng/platform/PaymentInterface;->thirdPay(Ljava/util/Map;Lcom/bianfeng/platform/PlatformSdkListener;)V

    :cond_0
    return-void
.end method

.method public prePay(Ljava/util/LinkedHashMap;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/LinkedHashMap<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    return-void
.end method

.method public setPaymentInterface(Lcom/bianfeng/platform/PaymentInterface;)V
    .locals 0

    .line 1
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/feature/plugin/FixExcutorInterface;->paymentInterface:Lcom/bianfeng/platform/PaymentInterface;

    return-void
.end method

.method public setPlatformSdk(Lcom/bianfeng/platform/PlatformSdk;)V
    .locals 0

    .line 1
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/feature/plugin/FixExcutorInterface;->platformSdk:Lcom/bianfeng/platform/PlatformSdk;

    return-void
.end method

.method public setUserInterface(Lcom/bianfeng/platform/UserInterface;)V
    .locals 0

    .line 1
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/feature/plugin/FixExcutorInterface;->userInterface:Lcom/bianfeng/platform/UserInterface;

    return-void
.end method

.method public showToolBar()V
    .locals 2

    .line 1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/FixExcutorInterface;->userInterface:Lcom/bianfeng/platform/UserInterface;

    if-eqz v0, :cond_0

    const-string v1, "showToolBar"

    .line 2
    invoke-virtual {v0, v1}, Lcom/bianfeng/platform/UserInterface;->callFunction(Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public showVerifyRealName()V
    .locals 2

    .line 1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/FixExcutorInterface;->userInterface:Lcom/bianfeng/platform/UserInterface;

    if-eqz v0, :cond_0

    const-string v1, "show_verify_realname"

    .line 2
    invoke-virtual {v0, v1}, Lcom/bianfeng/platform/UserInterface;->callFunction(Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public submitUserInfo(Ljava/util/LinkedHashMap;)V
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/LinkedHashMap<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    .line 1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/FixExcutorInterface;->userInterface:Lcom/bianfeng/platform/UserInterface;

    if-eqz v0, :cond_1

    .line 2
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    .line 3
    invoke-virtual {p1}, Ljava/util/LinkedHashMap;->entrySet()Ljava/util/Set;

    move-result-object p1

    invoke-interface {p1}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :goto_0
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/util/Map$Entry;

    .line 4
    invoke-interface {v1}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v1

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_0

    .line 6
    :cond_0
    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result p1

    new-array p1, p1, [Ljava/lang/String;

    .line 7
    iget-object v1, p0, Lcom/bianfeng/ymnsdk/feature/plugin/FixExcutorInterface;->userInterface:Lcom/bianfeng/platform/UserInterface;

    invoke-interface {v0, p1}, Ljava/util/List;->toArray([Ljava/lang/Object;)[Ljava/lang/Object;

    move-result-object p1

    check-cast p1, [Ljava/lang/String;

    const-string v0, "submitUserInfo"

    invoke-virtual {v1, v0, p1}, Lcom/bianfeng/platform/UserInterface;->callFunction(Ljava/lang/String;[Ljava/lang/String;)V

    :cond_1
    return-void
.end method

.method public switchAccount()V
    .locals 2

    .line 1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/FixExcutorInterface;->userInterface:Lcom/bianfeng/platform/UserInterface;

    if-eqz v0, :cond_0

    const-string v1, "accountSwitch"

    .line 2
    invoke-virtual {v0, v1}, Lcom/bianfeng/platform/UserInterface;->callFunction(Ljava/lang/String;)V

    :cond_0
    return-void
.end method
