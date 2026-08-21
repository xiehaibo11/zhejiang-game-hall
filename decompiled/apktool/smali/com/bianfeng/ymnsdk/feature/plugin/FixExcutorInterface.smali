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

    .line 26
    invoke-direct {p0}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;-><init>()V

    return-void
.end method


# virtual methods
.method public available()Z
    .locals 1

    .line 47
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
    .param p1, "functionName"    # Ljava/lang/String;
    .param p2, "data"    # [Ljava/lang/String;

    .line 103
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/FixExcutorInterface;->userInterface:Lcom/bianfeng/platform/UserInterface;

    if-eqz v0, :cond_2

    .line 104
    if-eqz p2, :cond_1

    array-length v1, p2

    if-nez v1, :cond_0

    goto :goto_0

    .line 107
    :cond_0
    invoke-virtual {v0, p1, p2}, Lcom/bianfeng/platform/UserInterface;->callFunction(Ljava/lang/String;[Ljava/lang/String;)V

    goto :goto_1

    .line 105
    :cond_1
    :goto_0
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/FixExcutorInterface;->userInterface:Lcom/bianfeng/platform/UserInterface;

    invoke-virtual {v0, p1}, Lcom/bianfeng/platform/UserInterface;->callFunction(Ljava/lang/String;)V

    .line 110
    :cond_2
    :goto_1
    invoke-super {p0, p1, p2}, Lcom/bianfeng/ymnsdk/feature/YmnPlugin;->callFunction(Ljava/lang/String;[Ljava/lang/String;)V

    .line 111
    return-void
.end method

.method public enterPlatform()V
    .locals 2

    .line 276
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/FixExcutorInterface;->userInterface:Lcom/bianfeng/platform/UserInterface;

    if-eqz v0, :cond_0

    .line 277
    const-string v1, "enterPlatform"

    invoke-virtual {v0, v1}, Lcom/bianfeng/platform/UserInterface;->callFunction(Ljava/lang/String;)V

    .line 279
    :cond_0
    return-void
.end method

.method public exit()V
    .locals 2

    .line 250
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/FixExcutorInterface;->userInterface:Lcom/bianfeng/platform/UserInterface;

    if-eqz v0, :cond_0

    .line 251
    const-string v1, "exit"

    invoke-virtual {v0, v1}, Lcom/bianfeng/platform/UserInterface;->callFunction(Ljava/lang/String;)V

    .line 253
    :cond_0
    return-void
.end method

.method public getAndShowVerifyRealName()V
    .locals 2

    .line 230
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/FixExcutorInterface;->userInterface:Lcom/bianfeng/platform/UserInterface;

    if-eqz v0, :cond_0

    .line 231
    const-string v1, "get_show_verify_realname"

    invoke-virtual {v0, v1}, Lcom/bianfeng/platform/UserInterface;->callFunction(Ljava/lang/String;)V

    .line 233
    :cond_0
    return-void
.end method

.method public getOrderId()Ljava/lang/String;
    .locals 1

    .line 305
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/FixExcutorInterface;->paymentInterface:Lcom/bianfeng/platform/PaymentInterface;

    if-eqz v0, :cond_0

    .line 306
    invoke-virtual {v0}, Lcom/bianfeng/platform/PaymentInterface;->getOrderId()Ljava/lang/String;

    move-result-object v0

    return-object v0

    .line 308
    :cond_0
    const/4 v0, 0x0

    return-object v0
.end method

.method public getPluginId()Ljava/lang/String;
    .locals 1

    .line 66
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/FixExcutorInterface;->platformSdk:Lcom/bianfeng/platform/PlatformSdk;

    if-eqz v0, :cond_0

    .line 67
    invoke-virtual {v0}, Lcom/bianfeng/platform/PlatformSdk;->getPlatformId()Ljava/lang/String;

    move-result-object v0

    return-object v0

    .line 69
    :cond_0
    const-string v0, "waiting"

    return-object v0
.end method

.method public getPluginName()Ljava/lang/String;
    .locals 1

    .line 74
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/FixExcutorInterface;->platformSdk:Lcom/bianfeng/platform/PlatformSdk;

    if-eqz v0, :cond_0

    .line 75
    invoke-virtual {v0}, Lcom/bianfeng/platform/PlatformSdk;->getPlatformName()Ljava/lang/String;

    move-result-object v0

    return-object v0

    .line 77
    :cond_0
    const-string v0, "waiting"

    return-object v0
.end method

.method public getPluginVersion()I
    .locals 1

    .line 82
    const/4 v0, 0x0

    return v0
.end method

.method public getSdkVersion()Ljava/lang/String;
    .locals 1

    .line 87
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/FixExcutorInterface;->platformSdk:Lcom/bianfeng/platform/PlatformSdk;

    if-eqz v0, :cond_0

    .line 88
    invoke-virtual {v0}, Lcom/bianfeng/platform/PlatformSdk;->getPlatformVersion()Ljava/lang/String;

    move-result-object v0

    return-object v0

    .line 90
    :cond_0
    const-string v0, "waiting"

    return-object v0
.end method

.method public getUserInfo()Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;
    .locals 1

    .line 271
    const/4 v0, 0x0

    return-object v0
.end method

.method public getVerifyRealNameInfo()V
    .locals 2

    .line 224
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/FixExcutorInterface;->userInterface:Lcom/bianfeng/platform/UserInterface;

    if-eqz v0, :cond_0

    .line 225
    const-string v1, "get_verify_realname_info"

    invoke-virtual {v0, v1}, Lcom/bianfeng/platform/UserInterface;->callFunction(Ljava/lang/String;)V

    .line 227
    :cond_0
    return-void
.end method

.method public hideToolBar()V
    .locals 2

    .line 236
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/FixExcutorInterface;->userInterface:Lcom/bianfeng/platform/UserInterface;

    if-eqz v0, :cond_0

    .line 237
    const-string v1, "hideToolBar"

    invoke-virtual {v0, v1}, Lcom/bianfeng/platform/UserInterface;->callFunction(Ljava/lang/String;)V

    .line 239
    :cond_0
    return-void
.end method

.method public isLogined()Z
    .locals 1

    .line 200
    const/4 v0, 0x0

    return v0
.end method

.method public isSupportFunction(Ljava/lang/String;)Z
    .locals 1
    .param p1, "functionName"    # Ljava/lang/String;

    .line 95
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/FixExcutorInterface;->userInterface:Lcom/bianfeng/platform/UserInterface;

    if-eqz v0, :cond_0

    .line 96
    invoke-virtual {v0, p1}, Lcom/bianfeng/platform/UserInterface;->isSupportFunction(Ljava/lang/String;)Z

    move-result v0

    return v0

    .line 98
    :cond_0
    invoke-super {p0, p1}, Lcom/bianfeng/ymnsdk/feature/YmnPlugin;->isSupportFunction(Ljava/lang/String;)Z

    move-result v0

    return v0
.end method

.method public login()V
    .locals 2

    .line 188
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/FixExcutorInterface;->userInterface:Lcom/bianfeng/platform/UserInterface;

    if-eqz v0, :cond_0

    .line 189
    new-instance v1, Lcom/bianfeng/ymnsdk/feature/plugin/FixExcutorInterface$a;

    invoke-direct {v1, p0}, Lcom/bianfeng/ymnsdk/feature/plugin/FixExcutorInterface$a;-><init>(Lcom/bianfeng/ymnsdk/feature/plugin/FixExcutorInterface;)V

    invoke-virtual {v0, v1}, Lcom/bianfeng/platform/UserInterface;->thirdLogin(Lcom/bianfeng/platform/PlatformSdkListener;)V

    .line 196
    :cond_0
    return-void
.end method

.method public logout()V
    .locals 2

    .line 205
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/FixExcutorInterface;->userInterface:Lcom/bianfeng/platform/UserInterface;

    if-eqz v0, :cond_0

    .line 206
    const-string v1, "logout"

    invoke-virtual {v0, v1}, Lcom/bianfeng/platform/UserInterface;->callFunction(Ljava/lang/String;)V

    .line 208
    :cond_0
    return-void
.end method

.method public onActivityResult(IILandroid/content/Intent;)V
    .locals 1
    .param p1, "requestCode"    # I
    .param p2, "resultCode"    # I
    .param p3, "data"    # Landroid/content/Intent;

    .line 176
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/FixExcutorInterface;->platformSdk:Lcom/bianfeng/platform/PlatformSdk;

    if-eqz v0, :cond_0

    .line 177
    invoke-virtual {v0, p1, p2, p3}, Lcom/bianfeng/platform/PlatformSdk;->onActivityResult(IILandroid/content/Intent;)V

    .line 179
    :cond_0
    return-void
.end method

.method public onDestroy()V
    .locals 1

    .line 156
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/FixExcutorInterface;->platformSdk:Lcom/bianfeng/platform/PlatformSdk;

    if-eqz v0, :cond_0

    .line 157
    invoke-virtual {v0}, Lcom/bianfeng/platform/PlatformSdk;->release()V

    .line 159
    :cond_0
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/FixExcutorInterface;->userInterface:Lcom/bianfeng/platform/UserInterface;

    if-eqz v0, :cond_1

    .line 160
    invoke-virtual {v0}, Lcom/bianfeng/platform/UserInterface;->release()V

    .line 162
    :cond_1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/FixExcutorInterface;->paymentInterface:Lcom/bianfeng/platform/PaymentInterface;

    if-eqz v0, :cond_2

    .line 163
    invoke-virtual {v0}, Lcom/bianfeng/platform/PaymentInterface;->release()V

    .line 165
    :cond_2
    return-void
.end method

.method public onInit(Landroid/content/Context;)V
    .locals 2
    .param p1, "context"    # Landroid/content/Context;

    .line 52
    invoke-super {p0, p1}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->onInit(Landroid/content/Context;)V

    .line 53
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/FixExcutorInterface;->platformSdk:Lcom/bianfeng/platform/PlatformSdk;

    if-eqz v0, :cond_0

    .line 54
    move-object v1, p1

    check-cast v1, Landroid/app/Activity;

    invoke-virtual {v0, v1}, Lcom/bianfeng/platform/PlatformSdk;->init(Landroid/app/Activity;)V

    .line 56
    :cond_0
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/FixExcutorInterface;->userInterface:Lcom/bianfeng/platform/UserInterface;

    if-eqz v0, :cond_1

    .line 57
    move-object v1, p1

    check-cast v1, Landroid/app/Activity;

    invoke-virtual {v0, v1}, Lcom/bianfeng/platform/UserInterface;->init(Landroid/app/Activity;)V

    .line 59
    :cond_1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/FixExcutorInterface;->paymentInterface:Lcom/bianfeng/platform/PaymentInterface;

    if-eqz v0, :cond_2

    .line 60
    move-object v1, p1

    check-cast v1, Landroid/app/Activity;

    invoke-virtual {v0, v1}, Lcom/bianfeng/platform/PaymentInterface;->init(Landroid/app/Activity;)V

    .line 62
    :cond_2
    return-void
.end method

.method public onNewIntent(Landroid/content/Intent;)V
    .locals 1
    .param p1, "intent"    # Landroid/content/Intent;

    .line 169
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/FixExcutorInterface;->platformSdk:Lcom/bianfeng/platform/PlatformSdk;

    if-eqz v0, :cond_0

    .line 170
    invoke-virtual {v0, p1}, Lcom/bianfeng/platform/PlatformSdk;->onNewIntent(Landroid/content/Intent;)V

    .line 172
    :cond_0
    return-void
.end method

.method public onPause()V
    .locals 1

    .line 135
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/FixExcutorInterface;->platformSdk:Lcom/bianfeng/platform/PlatformSdk;

    if-eqz v0, :cond_0

    .line 136
    invoke-virtual {v0}, Lcom/bianfeng/platform/PlatformSdk;->onPause()V

    .line 138
    :cond_0
    return-void
.end method

.method public onRestart()V
    .locals 1

    .line 128
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/FixExcutorInterface;->platformSdk:Lcom/bianfeng/platform/PlatformSdk;

    if-eqz v0, :cond_0

    .line 129
    invoke-virtual {v0}, Lcom/bianfeng/platform/PlatformSdk;->onRestart()V

    .line 131
    :cond_0
    return-void
.end method

.method public onResume()V
    .locals 1

    .line 142
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/FixExcutorInterface;->platformSdk:Lcom/bianfeng/platform/PlatformSdk;

    if-eqz v0, :cond_0

    .line 143
    invoke-virtual {v0}, Lcom/bianfeng/platform/PlatformSdk;->onResume()V

    .line 145
    :cond_0
    return-void
.end method

.method public onStart()V
    .locals 1

    .line 121
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/FixExcutorInterface;->platformSdk:Lcom/bianfeng/platform/PlatformSdk;

    if-eqz v0, :cond_0

    .line 122
    invoke-virtual {v0}, Lcom/bianfeng/platform/PlatformSdk;->onStart()V

    .line 124
    :cond_0
    return-void
.end method

.method public onStop()V
    .locals 1

    .line 149
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/FixExcutorInterface;->platformSdk:Lcom/bianfeng/platform/PlatformSdk;

    if-eqz v0, :cond_0

    .line 150
    invoke-virtual {v0}, Lcom/bianfeng/platform/PlatformSdk;->onStop()V

    .line 152
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

    .line 293
    .local p1, "orders":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/FixExcutorInterface;->paymentInterface:Lcom/bianfeng/platform/PaymentInterface;

    if-eqz v0, :cond_0

    .line 294
    new-instance v1, Lcom/bianfeng/ymnsdk/feature/plugin/FixExcutorInterface$b;

    invoke-direct {v1, p0}, Lcom/bianfeng/ymnsdk/feature/plugin/FixExcutorInterface$b;-><init>(Lcom/bianfeng/ymnsdk/feature/plugin/FixExcutorInterface;)V

    invoke-virtual {v0, p1, v1}, Lcom/bianfeng/platform/PaymentInterface;->thirdPay(Ljava/util/Map;Lcom/bianfeng/platform/PlatformSdkListener;)V

    .line 301
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

    .line 284
    .local p1, "order":Ljava/util/LinkedHashMap;, "Ljava/util/LinkedHashMap<Ljava/lang/String;Ljava/lang/String;>;"
    return-void
.end method

.method public setPaymentInterface(Lcom/bianfeng/platform/PaymentInterface;)V
    .locals 0
    .param p1, "paymentInterface"    # Lcom/bianfeng/platform/PaymentInterface;

    .line 43
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/feature/plugin/FixExcutorInterface;->paymentInterface:Lcom/bianfeng/platform/PaymentInterface;

    .line 44
    return-void
.end method

.method public setPlatformSdk(Lcom/bianfeng/platform/PlatformSdk;)V
    .locals 0
    .param p1, "platformSdk"    # Lcom/bianfeng/platform/PlatformSdk;

    .line 35
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/feature/plugin/FixExcutorInterface;->platformSdk:Lcom/bianfeng/platform/PlatformSdk;

    .line 36
    return-void
.end method

.method public setUserInterface(Lcom/bianfeng/platform/UserInterface;)V
    .locals 0
    .param p1, "userInterface"    # Lcom/bianfeng/platform/UserInterface;

    .line 39
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/feature/plugin/FixExcutorInterface;->userInterface:Lcom/bianfeng/platform/UserInterface;

    .line 40
    return-void
.end method

.method public showToolBar()V
    .locals 2

    .line 212
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/FixExcutorInterface;->userInterface:Lcom/bianfeng/platform/UserInterface;

    if-eqz v0, :cond_0

    .line 213
    const-string v1, "showToolBar"

    invoke-virtual {v0, v1}, Lcom/bianfeng/platform/UserInterface;->callFunction(Ljava/lang/String;)V

    .line 215
    :cond_0
    return-void
.end method

.method public showVerifyRealName()V
    .locals 2

    .line 218
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/FixExcutorInterface;->userInterface:Lcom/bianfeng/platform/UserInterface;

    if-eqz v0, :cond_0

    .line 219
    const-string v1, "show_verify_realname"

    invoke-virtual {v0, v1}, Lcom/bianfeng/platform/UserInterface;->callFunction(Ljava/lang/String;)V

    .line 221
    :cond_0
    return-void
.end method

.method public submitUserInfo(Ljava/util/LinkedHashMap;)V
    .locals 5
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/LinkedHashMap<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    .line 259
    .local p1, "data":Ljava/util/LinkedHashMap;, "Ljava/util/LinkedHashMap<Ljava/lang/String;Ljava/lang/String;>;"
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/FixExcutorInterface;->userInterface:Lcom/bianfeng/platform/UserInterface;

    if-eqz v0, :cond_1

    .line 260
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    .line 261
    .local v0, "args":Ljava/util/List;, "Ljava/util/List<Ljava/lang/String;>;"
    invoke-virtual {p1}, Ljava/util/LinkedHashMap;->entrySet()Ljava/util/Set;

    move-result-object v1

    invoke-interface {v1}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :goto_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_0

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/util/Map$Entry;

    .line 262
    .local v2, "entry":Ljava/util/Map$Entry;, "Ljava/util/Map$Entry<Ljava/lang/String;Ljava/lang/String;>;"
    invoke-interface {v2}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v3

    invoke-interface {v0, v3}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 263
    .end local v2    # "entry":Ljava/util/Map$Entry;, "Ljava/util/Map$Entry<Ljava/lang/String;Ljava/lang/String;>;"
    goto :goto_0

    .line 264
    :cond_0
    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v1

    new-array v1, v1, [Ljava/lang/String;

    .line 265
    .local v1, "array":[Ljava/lang/String;
    iget-object v2, p0, Lcom/bianfeng/ymnsdk/feature/plugin/FixExcutorInterface;->userInterface:Lcom/bianfeng/platform/UserInterface;

    invoke-interface {v0, v1}, Ljava/util/List;->toArray([Ljava/lang/Object;)[Ljava/lang/Object;

    move-result-object v3

    check-cast v3, [Ljava/lang/String;

    const-string v4, "submitUserInfo"

    invoke-virtual {v2, v4, v3}, Lcom/bianfeng/platform/UserInterface;->callFunction(Ljava/lang/String;[Ljava/lang/String;)V

    .line 267
    .end local v0    # "args":Ljava/util/List;, "Ljava/util/List<Ljava/lang/String;>;"
    .end local v1    # "array":[Ljava/lang/String;
    :cond_1
    return-void
.end method

.method public switchAccount()V
    .locals 2

    .line 243
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/FixExcutorInterface;->userInterface:Lcom/bianfeng/platform/UserInterface;

    if-eqz v0, :cond_0

    .line 244
    const-string v1, "accountSwitch"

    invoke-virtual {v0, v1}, Lcom/bianfeng/platform/UserInterface;->callFunction(Ljava/lang/String;)V

    .line 246
    :cond_0
    return-void
.end method
