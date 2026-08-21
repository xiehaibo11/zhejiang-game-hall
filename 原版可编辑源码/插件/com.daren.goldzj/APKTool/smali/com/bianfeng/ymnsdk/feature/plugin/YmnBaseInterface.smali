.class public Lcom/bianfeng/ymnsdk/feature/plugin/YmnBaseInterface;
.super Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;
.source "YmnBaseInterface.java"


# annotations
.annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin;
    entrance = .enum Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Entrance;->ACTIVITY:Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Entrance;
    strategy = .enum Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Policy;->FORCE:Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Policy;
.end annotation


# static fields
.field public static final CODE_DATAFUN_GET_DEVICEID:I = 0xf462a

.field public static final CODE_GET_PRODUCTS_FAIL:I = 0x89f

.field public static final CODE_GET_PRODUCTS_SUCCESS:I = 0x89e

.field public static final CODE_ORDERID_FAIL:I = 0xf462c

.field public static final CODE_ORDERID_SUC:I = 0xf462b

.field public static final CODE_PERMISSION_DENIED:I = 0x8a1

.field public static final CODE_PERMISSION_ERROR:I = 0x8a2

.field public static final CODE_PERMISSION_GRANTED:I = 0x8a0

.field public static final CODE_PERMISSION_IN48:I = 0x8a3

.field public static final CODE_YMN_GET_DEVICEID:I = 0xf4629

.field public static final GET_IDENTITY_INFO:Ljava/lang/String; = "verifier_get_identity"

.field public static final SET_IDENTITY_INFO:Ljava/lang/String; = "verifier_set_identity"

.field public static final USERVERIFIER_GET_IDENTITY_FAIL:I = 0x89b

.field public static final USERVERIFIER_GET_IDENTITY_SUCCESS:I = 0x89a

.field public static final USERVERIFIER_SET_IDENTITY_FAIL:I = 0x89d

.field public static final USERVERIFIER_SET_IDENTITY_SUCCESS:I = 0x89c

.field public static localState:Lcom/bianfeng/ymnsdk/entity/UrlLocalState;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 1
    invoke-direct {p0}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;-><init>()V

    return-void
.end method


# virtual methods
.method public change_host(Ljava/lang/String;)V
    .locals 8
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "set_host"
    .end annotation

    .line 1
    :try_start_0
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/feature/e;->e(Landroid/content/Context;)Lcom/bianfeng/ymnsdk/entity/UrlLocalState;

    move-result-object v0

    sput-object v0, Lcom/bianfeng/ymnsdk/feature/plugin/YmnBaseInterface;->localState:Lcom/bianfeng/ymnsdk/entity/UrlLocalState;

    .line 2
    sget-object v0, Lcom/bianfeng/ymnsdk/feature/plugin/YmnBaseInterface;->localState:Lcom/bianfeng/ymnsdk/entity/UrlLocalState;

    invoke-virtual {v0, p1}, Lcom/bianfeng/ymnsdk/entity/UrlLocalState;->setCurrentHost(Ljava/lang/String;)V

    .line 3
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->getContext()Landroid/content/Context;

    move-result-object p1

    sget-object v0, Lcom/bianfeng/ymnsdk/feature/plugin/YmnBaseInterface;->localState:Lcom/bianfeng/ymnsdk/entity/UrlLocalState;

    invoke-static {p1, v0}, Lcom/bianfeng/ymnsdk/feature/e;->a(Landroid/content/Context;Lcom/bianfeng/ymnsdk/entity/UrlLocalState;)V

    .line 4
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->getInstance()Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;

    move-result-object v1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    const-string v2, "set_host"

    :try_start_1
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/feature/plugin/YmnBaseInterface;->getPluginId()Ljava/lang/String;

    move-result-object v3

    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/feature/plugin/YmnBaseInterface;->getPluginVersion()I

    move-result v0

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v0, ""

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    .line 5
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/feature/plugin/YmnBaseInterface;->getSdkVersion()Ljava/lang/String;

    move-result-object v5

    const/4 v6, 0x0

    const-string v7, ""

    .line 6
    invoke-virtual/range {v1 .. v7}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->pluginFinish(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    :catch_0
    return-void
.end method

.method public change_ymn_host(Ljava/lang/String;)V
    .locals 3
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "change_ymn_host"
    .end annotation

    .line 1
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->getContext()Landroid/content/Context;

    move-result-object v0

    const-string v1, "SP_YMN_CHANGE_HOST"

    const/4 v2, 0x0

    invoke-virtual {v0, v1, v2}, Landroid/content/Context;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object v0

    .line 2
    invoke-interface {v0}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object v0

    invoke-interface {v0, v1, p1}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    move-result-object p1

    invoke-interface {p1}, Landroid/content/SharedPreferences$Editor;->apply()V

    return-void
.end method

.method public checkOrderStatue(Ljava/lang/String;)V
    .locals 4
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "check_order_statue"
    .end annotation

    .line 1
    :try_start_0
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/RequestRetryUtils;->getInstance()Lcom/bianfeng/ymnsdk/util/RequestRetryUtils;

    move-result-object v0

    .line 2
    new-instance v1, Lcom/bianfeng/ymnsdk/actionv2/c;

    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->getContext()Landroid/content/Context;

    move-result-object v2

    invoke-direct {v1, v2}, Lcom/bianfeng/ymnsdk/actionv2/c;-><init>(Landroid/content/Context;)V

    const/4 v2, 0x1

    .line 3
    new-array v2, v2, [Ljava/lang/Object;

    const/4 v3, 0x0

    aput-object p1, v2, v3

    invoke-virtual {v1, p0, v2}, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2;->putReqData(Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;[Ljava/lang/Object;)V

    .line 4
    new-instance p1, Lcom/bianfeng/ymnsdk/feature/plugin/YmnBaseInterface$e;

    invoke-direct {p1, p0, v1, v0}, Lcom/bianfeng/ymnsdk/feature/plugin/YmnBaseInterface$e;-><init>(Lcom/bianfeng/ymnsdk/feature/plugin/YmnBaseInterface;Lcom/bianfeng/ymnsdk/actionv2/c;Lcom/bianfeng/ymnsdk/util/RequestRetryUtils;)V

    invoke-virtual {v1, p1}, Ljava/util/Observable;->addObserver(Ljava/util/Observer;)V

    const-string p1, "checkOrderStatue check_order_statue"

    .line 19
    invoke-static {p1}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 20
    invoke-virtual {v1}, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2;->onStartAttachment()V

    .line 21
    invoke-virtual {v1}, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2;->actionStart()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 23
    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p1

    const/16 v0, 0x89f

    const-string v1, "check_order_statue"

    invoke-virtual {p0, v0, p1, v1}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->sendResult(ILjava/lang/String;Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method public getChannelId()Ljava/lang/String;
    .locals 1
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "get_channel_id"
    .end annotation

    .line 1
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->getChannelId()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getIdentity(Ljava/lang/String;Ljava/lang/String;)V
    .locals 1
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        alias = "verifier_get_identity"
        name = "get_identity"
    .end annotation

    const-string v0, "0"

    .line 1
    invoke-virtual {p0, v0, p1, p2}, Lcom/bianfeng/ymnsdk/feature/plugin/YmnBaseInterface;->getIdentity(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public getIdentity(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 4
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        alias = "verifier_get_identity"
        name = "get_identity"
    .end annotation

    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    .line 2
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/RequestRetryUtils;->getInstance()Lcom/bianfeng/ymnsdk/util/RequestRetryUtils;

    move-result-object v0

    .line 3
    new-instance v1, Lcom/bianfeng/ymnsdk/action/b;

    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->getContext()Landroid/content/Context;

    move-result-object v2

    invoke-direct {v1, v2}, Lcom/bianfeng/ymnsdk/action/b;-><init>(Landroid/content/Context;)V

    const/4 v2, 0x3

    .line 4
    new-array v2, v2, [Ljava/lang/Object;

    const/4 v3, 0x0

    aput-object p1, v2, v3

    const/4 p1, 0x1

    aput-object p2, v2, p1

    const/4 p1, 0x2

    aput-object p3, v2, p1

    invoke-virtual {v1, p0, v2}, Lcom/bianfeng/ymnsdk/action/ActionSupport;->putReqData(Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;[Ljava/lang/Object;)V

    .line 5
    new-instance p1, Lcom/bianfeng/ymnsdk/feature/plugin/YmnBaseInterface$a;

    invoke-direct {p1, p0, v1, v0}, Lcom/bianfeng/ymnsdk/feature/plugin/YmnBaseInterface$a;-><init>(Lcom/bianfeng/ymnsdk/feature/plugin/YmnBaseInterface;Lcom/bianfeng/ymnsdk/action/b;Lcom/bianfeng/ymnsdk/util/RequestRetryUtils;)V

    invoke-virtual {v1, p1}, Ljava/util/Observable;->addObserver(Ljava/util/Observer;)V

    .line 22
    invoke-virtual {v1}, Lcom/bianfeng/ymnsdk/action/ActionSupport;->onStartAttachment()V

    .line 23
    invoke-virtual {v1}, Lcom/bianfeng/ymnsdk/action/ActionSupport;->actionStart()V

    return-void
.end method

.method public getLoginData()V
    .locals 8
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "getLoginData"
    .end annotation

    const-string v0, "\u83b7\u53d6\u767b\u5f55\u6570\u636e"

    .line 1
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 2
    invoke-static {}, Lcom/bianfeng/ymnsdk/feature/plugin/b;->d()V

    .line 3
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->getInstance()Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;

    move-result-object v1

    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/feature/plugin/YmnBaseInterface;->getPluginId()Ljava/lang/String;

    move-result-object v3

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/feature/plugin/YmnBaseInterface;->getPluginVersion()I

    move-result v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v2, ""

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    .line 4
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/feature/plugin/YmnBaseInterface;->getSdkVersion()Ljava/lang/String;

    move-result-object v5

    const-string v2, "getLoginData"

    const/4 v6, 0x0

    const-string v7, ""

    .line 5
    invoke-virtual/range {v1 .. v7}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->pluginFinish(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;)V

    return-void
.end method

.method public getMetaDataValue(Ljava/lang/String;)Ljava/lang/String;
    .locals 0
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "get_metadata_value"
    .end annotation

    .line 1
    invoke-static {p1}, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->getMetaDataValueString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    return-object p1
.end method

.method public getOrderId()Ljava/lang/String;
    .locals 3
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "ymn_get_orderid"
    .end annotation

    .line 1
    invoke-static {}, Lcom/bianfeng/ymnsdk/YmnSdkPaymentWrapper;->getOrderId()Ljava/lang/String;

    move-result-object v0

    .line 2
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_0

    const v1, 0xf462c

    const-string v2, ""

    .line 3
    invoke-virtual {p0, v1, v2}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->sendResult(ILjava/lang/String;)V

    goto :goto_0

    :cond_0
    const v1, 0xf462b

    .line 5
    invoke-virtual {p0, v1, v0}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->sendResult(ILjava/lang/String;)V

    :goto_0
    return-object v0
.end method

.method public getOrderId(Ljava/lang/String;)Ljava/lang/String;
    .locals 2
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "ymn_get_orderid"
    .end annotation

    .line 6
    invoke-static {p1}, Lcom/bianfeng/ymnsdk/YmnSdkPaymentWrapper;->getOrderId(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    .line 7
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    const v0, 0xf462c

    const-string v1, ""

    .line 8
    invoke-virtual {p0, v0, v1}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->sendResult(ILjava/lang/String;)V

    goto :goto_0

    :cond_0
    const v0, 0xf462b

    .line 10
    invoke-virtual {p0, v0, p1}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->sendResult(ILjava/lang/String;)V

    :goto_0
    return-object p1
.end method

.method public getPluginId()Ljava/lang/String;
    .locals 1

    const/4 v0, 0x0

    return-object v0
.end method

.method public getPluginName()Ljava/lang/String;
    .locals 1

    const-string v0, "ymnbase"

    return-object v0
.end method

.method public getPluginVersion()I
    .locals 1

    const/16 v0, 0x8

    return v0
.end method

.method public getProducts()V
    .locals 3
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        alias = "base_get_products"
        name = "get_products"
    .end annotation

    .line 1
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/RequestRetryUtils;->getInstance()Lcom/bianfeng/ymnsdk/util/RequestRetryUtils;

    move-result-object v0

    .line 2
    new-instance v1, Lcom/bianfeng/ymnsdk/action/g;

    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->getContext()Landroid/content/Context;

    move-result-object v2

    invoke-direct {v1, v2}, Lcom/bianfeng/ymnsdk/action/g;-><init>(Landroid/content/Context;)V

    const/4 v2, 0x0

    .line 3
    new-array v2, v2, [Ljava/lang/Object;

    invoke-virtual {v1, p0, v2}, Lcom/bianfeng/ymnsdk/action/ActionSupport;->putReqData(Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;[Ljava/lang/Object;)V

    .line 4
    new-instance v2, Lcom/bianfeng/ymnsdk/feature/plugin/YmnBaseInterface$c;

    invoke-direct {v2, p0, v1, v0}, Lcom/bianfeng/ymnsdk/feature/plugin/YmnBaseInterface$c;-><init>(Lcom/bianfeng/ymnsdk/feature/plugin/YmnBaseInterface;Lcom/bianfeng/ymnsdk/action/g;Lcom/bianfeng/ymnsdk/util/RequestRetryUtils;)V

    invoke-virtual {v1, v2}, Ljava/util/Observable;->addObserver(Ljava/util/Observer;)V

    .line 20
    invoke-virtual {v1}, Lcom/bianfeng/ymnsdk/action/ActionSupport;->onStartAttachment()V

    .line 21
    invoke-virtual {v1}, Lcom/bianfeng/ymnsdk/action/ActionSupport;->actionStart()V

    return-void
.end method

.method public getProducts(Ljava/util/LinkedHashMap;)V
    .locals 4
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        alias = "base_get_products"
        name = "get_products"
    .end annotation

    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/LinkedHashMap<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    .line 22
    :try_start_0
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/RequestRetryUtils;->getInstance()Lcom/bianfeng/ymnsdk/util/RequestRetryUtils;

    move-result-object v0

    .line 23
    new-instance v1, Lcom/bianfeng/ymnsdk/actionv2/d;

    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->getContext()Landroid/content/Context;

    move-result-object v2

    invoke-direct {v1, v2}, Lcom/bianfeng/ymnsdk/actionv2/d;-><init>(Landroid/content/Context;)V

    const/4 v2, 0x1

    .line 24
    new-array v2, v2, [Ljava/lang/Object;

    const/4 v3, 0x0

    aput-object p1, v2, v3

    invoke-virtual {v1, p0, v2}, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2;->putReqData(Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;[Ljava/lang/Object;)V

    .line 25
    new-instance p1, Lcom/bianfeng/ymnsdk/feature/plugin/YmnBaseInterface$d;

    invoke-direct {p1, p0, v1, v0}, Lcom/bianfeng/ymnsdk/feature/plugin/YmnBaseInterface$d;-><init>(Lcom/bianfeng/ymnsdk/feature/plugin/YmnBaseInterface;Lcom/bianfeng/ymnsdk/actionv2/d;Lcom/bianfeng/ymnsdk/util/RequestRetryUtils;)V

    invoke-virtual {v1, p1}, Ljava/util/Observable;->addObserver(Ljava/util/Observer;)V

    const-string p1, "getProducts"

    .line 40
    invoke-static {p1}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 41
    invoke-virtual {v1}, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2;->onStartAttachment()V

    .line 42
    invoke-virtual {v1}, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2;->actionStart()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 44
    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p1

    const/16 v0, 0x89f

    const-string v1, "get_products;base_get_products"

    invoke-virtual {p0, v0, p1, v1}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->sendResult(ILjava/lang/String;Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method public getSdkVersion()Ljava/lang/String;
    .locals 1

    const-string v0, "2.1.7"

    return-object v0
.end method

.method public loginFinishEvent(Ljava/lang/String;Ljava/lang/String;)V
    .locals 3
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        alias = "base_login_finish"
        name = "ymndatafun_login_finish"
    .end annotation

    .line 1
    :try_start_0
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->getInstance()Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;

    move-result-object v0

    invoke-static {p1}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v1

    invoke-virtual {v0, v1, p2}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->loginFinishEvent(ILjava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 3
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->getInstance()Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;

    move-result-object v1

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, "|"

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const/4 p2, -0x1

    invoke-virtual {v1, p2, p1}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->loginFinishEvent(ILjava/lang/String;)V

    :goto_0
    return-void
.end method

.method public loginOldRequestCheckEvent(Ljava/lang/String;)V
    .locals 1
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "base_login_request_check"
    .end annotation

    .line 1
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->getInstance()Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->loginOldRequestCheckEvent(Ljava/lang/String;)V

    return-void
.end method

.method public loginOldResponseCheckEvent(Ljava/lang/String;Ljava/lang/String;)V
    .locals 4
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "base_login_response_check"
    .end annotation

    .line 1
    :try_start_0
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->getInstance()Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;

    move-result-object v0

    invoke-static {p1}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v1

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    invoke-virtual {v0, v1, p2}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->loginOldResponseCheckEvent(Ljava/lang/Integer;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 3
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->getInstance()Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;

    move-result-object v1

    const/4 v2, -0x1

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, "|"

    invoke-virtual {v3, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v3, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v1, v2, p1}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->loginOldResponseCheckEvent(Ljava/lang/Integer;Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method public onDestroy()V
    .locals 0

    .line 1
    invoke-super {p0}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->onDestroy()V

    return-void
.end method

.method public onInit(Landroid/content/Context;)V
    .locals 0

    .line 1
    invoke-super {p0, p1}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->onInit(Landroid/content/Context;)V

    const/4 p1, 0x1

    .line 2
    invoke-virtual {p0, p1}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->setInited(Z)V

    return-void
.end method

.method public query_permission(Ljava/lang/String;)V
    .locals 3
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "query_permission"
    .end annotation

    .line 1
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->getActivity()Landroid/app/Activity;

    move-result-object v0

    invoke-virtual {v0}, Landroid/app/Activity;->getApplicationInfo()Landroid/content/pm/ApplicationInfo;

    move-result-object v0

    iget v0, v0, Landroid/content/pm/ApplicationInfo;->targetSdkVersion:I

    const/16 v1, 0x17

    const-string v2, "query_permission"

    if-lt v0, v1, :cond_2

    .line 2
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    if-ge v0, v1, :cond_0

    goto :goto_0

    .line 5
    :cond_0
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->getActivity()Landroid/app/Activity;

    move-result-object v0

    invoke-virtual {v0, p1}, Landroid/app/Activity;->checkSelfPermission(Ljava/lang/String;)I

    move-result v0

    if-nez v0, :cond_1

    .line 8
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "\u5df2\u6388\u6743_"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const/16 v0, 0x8a0

    invoke-virtual {p0, v0, p1, v2}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->sendResult(ILjava/lang/String;Ljava/lang/String;)V

    goto :goto_1

    :cond_1
    const/4 v1, -0x1

    if-ne v0, v1, :cond_3

    .line 11
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "\u5df2\u62d2\u63a5_"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const/16 v0, 0x8a1

    invoke-virtual {p0, v0, p1, v2}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->sendResult(ILjava/lang/String;Ljava/lang/String;)V

    goto :goto_1

    :cond_2
    :goto_0
    const/16 p1, 0x8a2

    const-string v0, "targetVersion\u6216\u8005\u7cfb\u7edf\u7248\u672c\u5c0f\u4e8e23"

    .line 12
    invoke-virtual {p0, p1, v0, v2}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->sendResult(ILjava/lang/String;Ljava/lang/String;)V

    :cond_3
    :goto_1
    return-void
.end method

.method public request_permission()V
    .locals 1
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "request_permission"
    .end annotation

    const-string v0, "\u8be5\u65b9\u6cd5\u5df2\u7ecf\u5f03\u7528"

    .line 76
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->e(Ljava/lang/String;)I

    return-void
.end method

.method public request_permission(Ljava/lang/String;)V
    .locals 3
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "request_permission"
    .end annotation

    .line 1
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->getActivity()Landroid/app/Activity;

    move-result-object v0

    invoke-virtual {v0}, Landroid/app/Activity;->getApplicationInfo()Landroid/content/pm/ApplicationInfo;

    move-result-object v0

    iget v0, v0, Landroid/content/pm/ApplicationInfo;->targetSdkVersion:I

    const/16 v1, 0x17

    if-lt v0, v1, :cond_2

    .line 2
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    if-ge v0, v1, :cond_0

    goto :goto_1

    .line 6
    :cond_0
    :try_start_0
    new-instance v0, Lorg/json/JSONArray;

    invoke-direct {v0, p1}, Lorg/json/JSONArray;-><init>(Ljava/lang/String;)V

    .line 7
    new-instance p1, Ljava/util/ArrayList;

    invoke-direct {p1}, Ljava/util/ArrayList;-><init>()V

    const/4 v1, 0x0

    .line 8
    :goto_0
    invoke-virtual {v0}, Lorg/json/JSONArray;->length()I

    move-result v2

    if-ge v1, v2, :cond_1

    .line 9
    invoke-virtual {v0, v1}, Lorg/json/JSONArray;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    .line 10
    invoke-interface {p1, v2}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    .line 12
    :cond_1
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->getActivity()Landroid/app/Activity;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;->newInstance(Landroid/app/Activity;)Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;

    move-result-object v0

    new-instance v1, Lcom/bianfeng/ymnsdk/feature/plugin/YmnBaseInterface$f;

    invoke-direct {v1, p0}, Lcom/bianfeng/ymnsdk/feature/plugin/YmnBaseInterface$f;-><init>(Lcom/bianfeng/ymnsdk/feature/plugin/YmnBaseInterface;)V

    invoke-virtual {v0, v1}, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;->setCallback(Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils$PermissCallback;)Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;

    move-result-object v0

    .line 33
    invoke-virtual {v0, p1}, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;->setPermissions(Ljava/util/List;)Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;

    move-result-object p1

    const/4 v0, 0x1

    invoke-virtual {p1, v0}, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;->requestPermissions(I)Z
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_2

    :catch_0
    move-exception p1

    const-string v0, "\u53c2\u6570\u4e0d\u6b63\u786e\uff0c\u5e94\u8be5\u4f20\u5165\u5b57\u7b26\u4e32\u6570\u7ec4"

    .line 35
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->e(Ljava/lang/String;)I

    .line 36
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    const/16 p1, 0x8a1

    const-string v0, "\u62d2\u7edd\u7684\u6743\u9650|\u53c2\u6570\u4e0d\u6b63\u786e\uff0c\u5e94\u8be5\u4f20\u5165\u5b57\u7b26\u4e32\u6570\u7ec4"

    .line 37
    invoke-virtual {p0, p1, v0}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->sendResult(ILjava/lang/String;)V

    goto :goto_2

    :cond_2
    :goto_1
    const/16 p1, 0x8a2

    const-string v0, "targetVersion\u6216\u8005\u7cfb\u7edf\u7248\u672c\u5c0f\u4e8e23"

    const-string v1, "request_permission"

    .line 38
    invoke-virtual {p0, p1, v0, v1}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->sendResult(ILjava/lang/String;Ljava/lang/String;)V

    :goto_2
    return-void
.end method

.method public request_permission(Ljava/lang/String;Ljava/lang/String;)V
    .locals 3
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "request_permission"
    .end annotation

    .line 39
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->getActivity()Landroid/app/Activity;

    move-result-object v0

    invoke-virtual {v0}, Landroid/app/Activity;->getApplicationInfo()Landroid/content/pm/ApplicationInfo;

    move-result-object v0

    iget v0, v0, Landroid/content/pm/ApplicationInfo;->targetSdkVersion:I

    const/16 v1, 0x17

    if-lt v0, v1, :cond_2

    .line 40
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    if-ge v0, v1, :cond_0

    goto :goto_1

    .line 44
    :cond_0
    :try_start_0
    new-instance v0, Lorg/json/JSONArray;

    invoke-direct {v0, p1}, Lorg/json/JSONArray;-><init>(Ljava/lang/String;)V

    .line 45
    new-instance p1, Ljava/util/ArrayList;

    invoke-direct {p1}, Ljava/util/ArrayList;-><init>()V

    const/4 v1, 0x0

    .line 46
    :goto_0
    invoke-virtual {v0}, Lorg/json/JSONArray;->length()I

    move-result v2

    if-ge v1, v2, :cond_1

    .line 47
    invoke-virtual {v0, v1}, Lorg/json/JSONArray;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    .line 48
    invoke-interface {p1, v2}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    .line 50
    :cond_1
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->getActivity()Landroid/app/Activity;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;->newInstance(Landroid/app/Activity;)Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;

    move-result-object v0

    new-instance v1, Lcom/bianfeng/ymnsdk/feature/plugin/YmnBaseInterface$g;

    invoke-direct {v1, p0}, Lcom/bianfeng/ymnsdk/feature/plugin/YmnBaseInterface$g;-><init>(Lcom/bianfeng/ymnsdk/feature/plugin/YmnBaseInterface;)V

    invoke-virtual {v0, v1}, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;->setCallback(Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils$PermissCallback;)Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;

    move-result-object v0

    .line 70
    invoke-virtual {v0, p1}, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;->setPermissions(Ljava/util/List;)Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;

    move-result-object p1

    invoke-static {p2}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result p2

    invoke-virtual {p1, p2}, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;->requestPermissions(I)Z
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_2

    :catch_0
    move-exception p1

    .line 72
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "\u53c2\u6570\u4e0d\u6b63\u786e\uff0c\u5e94\u8be5\u4f20\u5165\u5b57\u7b26\u4e32\u6570\u7ec4"

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-static {p2}, Lcom/bianfeng/ymnsdk/util/Logger;->e(Ljava/lang/String;)I

    const/16 p2, 0x8a1

    const-string v0, "\u62d2\u7edd\u7684\u6743\u9650|\u53c2\u6570\u4e0d\u6b63\u786e\uff0c\u5e94\u8be5\u4f20\u5165\u5b57\u7b26\u4e32\u6570\u7ec4"

    .line 73
    invoke-virtual {p0, p2, v0}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->sendResult(ILjava/lang/String;)V

    .line 74
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    goto :goto_2

    :cond_2
    :goto_1
    const/16 p1, 0x8a2

    const-string p2, "targetVersion\u6216\u8005\u7cfb\u7edf\u7248\u672c\u5c0f\u4e8e23"

    const-string v0, "request_permission"

    .line 75
    invoke-virtual {p0, p1, p2, v0}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->sendResult(ILjava/lang/String;Ljava/lang/String;)V

    :goto_2
    return-void
.end method

.method public setIdentity(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 7
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        alias = "verifier_set_identity"
        name = "set_identity"
    .end annotation

    const-string v0, "\u5b9e\u540d\u8ba4\u8bc1\u4e86"

    .line 1
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    const-string v2, "0"

    move-object v1, p0

    move-object v3, p1

    move-object v4, p2

    move-object v5, p3

    move-object v6, p4

    .line 2
    invoke-virtual/range {v1 .. v6}, Lcom/bianfeng/ymnsdk/feature/plugin/YmnBaseInterface;->setIdentity(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public setIdentity(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 4
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        alias = "verifier_set_identity"
        name = "set_identity"
    .end annotation

    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    .line 3
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/RequestRetryUtils;->getInstance()Lcom/bianfeng/ymnsdk/util/RequestRetryUtils;

    move-result-object v0

    .line 4
    new-instance v1, Lcom/bianfeng/ymnsdk/action/c;

    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->getContext()Landroid/content/Context;

    move-result-object v2

    invoke-direct {v1, v2}, Lcom/bianfeng/ymnsdk/action/c;-><init>(Landroid/content/Context;)V

    const/4 v2, 0x5

    .line 5
    new-array v2, v2, [Ljava/lang/Object;

    const/4 v3, 0x0

    aput-object p1, v2, v3

    const/4 p1, 0x1

    aput-object p2, v2, p1

    const/4 p1, 0x2

    aput-object p3, v2, p1

    const/4 p1, 0x3

    aput-object p4, v2, p1

    const/4 p1, 0x4

    aput-object p5, v2, p1

    invoke-virtual {v1, p0, v2}, Lcom/bianfeng/ymnsdk/action/ActionSupport;->putReqData(Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;[Ljava/lang/Object;)V

    .line 6
    new-instance p1, Lcom/bianfeng/ymnsdk/feature/plugin/YmnBaseInterface$b;

    invoke-direct {p1, p0, v1, v0}, Lcom/bianfeng/ymnsdk/feature/plugin/YmnBaseInterface$b;-><init>(Lcom/bianfeng/ymnsdk/feature/plugin/YmnBaseInterface;Lcom/bianfeng/ymnsdk/action/c;Lcom/bianfeng/ymnsdk/util/RequestRetryUtils;)V

    invoke-virtual {v1, p1}, Ljava/util/Observable;->addObserver(Ljava/util/Observer;)V

    .line 22
    invoke-virtual {v1}, Lcom/bianfeng/ymnsdk/action/ActionSupport;->onStartAttachment()V

    .line 23
    invoke-virtual {v1}, Lcom/bianfeng/ymnsdk/action/ActionSupport;->actionStart()V

    return-void
.end method

.method public startTest()V
    .locals 3
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "statr_test"
    .end annotation

    .line 1
    new-instance v0, Landroid/content/Intent;

    invoke-direct {v0}, Landroid/content/Intent;-><init>()V

    .line 2
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->getActivity()Landroid/app/Activity;

    move-result-object v1

    const-string v2, "com.bianfeng.ymnsdk.TestActivity"

    invoke-virtual {v0, v1, v2}, Landroid/content/Intent;->setClassName(Landroid/content/Context;Ljava/lang/String;)Landroid/content/Intent;

    .line 3
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->getActivity()Landroid/app/Activity;

    move-result-object v1

    invoke-virtual {v1, v0}, Landroid/app/Activity;->startActivity(Landroid/content/Intent;)V

    return-void
.end method

.method public ymn_datafun_get_deviceid()V
    .locals 3
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "ymn_datafun_get_deviceid"
    .end annotation

    .line 1
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->getInstance()Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->getDeviceId()Ljava/lang/String;

    move-result-object v0

    const v1, 0xf462a

    const-string v2, "ymn_datafun_get_deviceid"

    invoke-virtual {p0, v1, v0, v2}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->sendResult(ILjava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public ymn_get_deviceid()V
    .locals 9
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "ymn_get_deviceid"
    .end annotation

    const-string v0, ""

    const-string v1, "android_id"

    const-string v2, "ymn_get_deviceid"

    const-string v3, "T"

    const-string v4, "ymn_deviceid_jfq"

    const v5, 0xf4629

    .line 1
    :try_start_0
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->getContext()Landroid/content/Context;

    move-result-object v6

    invoke-virtual {v6}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v6

    invoke-virtual {v6}, Landroid/content/Context;->getContentResolver()Landroid/content/ContentResolver;

    move-result-object v6

    invoke-static {v6, v1}, Landroid/provider/Settings$Secure;->getString(Landroid/content/ContentResolver;Ljava/lang/String;)Ljava/lang/String;

    .line 2
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->getContext()Landroid/content/Context;

    move-result-object v6

    const/4 v7, 0x0

    invoke-virtual {v6, v4, v7}, Landroid/content/Context;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object v6

    .line 3
    invoke-interface {v6, v4, v0}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v7}, Ljava/lang/String;->isEmpty()Z

    move-result v7

    if-nez v7, :cond_0

    .line 4
    invoke-interface {v6, v4, v0}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 5
    invoke-virtual {p0, v5, v0, v2}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->sendResult(ILjava/lang/String;Ljava/lang/String;)V

    return-void

    .line 8
    :cond_0
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->getContext()Landroid/content/Context;

    move-result-object v0

    const-string v7, "phone"

    invoke-virtual {v0, v7}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/telephony/TelephonyManager;

    if-eqz v0, :cond_7

    .line 10
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->getActivity()Landroid/app/Activity;

    move-result-object v7

    const-string v8, "android.permission.READ_PHONE_STATE"

    invoke-virtual {v7, v8}, Landroid/app/Activity;->checkSelfPermission(Ljava/lang/String;)I

    move-result v7

    if-nez v7, :cond_4

    .line 11
    invoke-virtual {v0}, Landroid/telephony/TelephonyManager;->getDeviceId()Ljava/lang/String;

    move-result-object v7

    if-eqz v7, :cond_1

    .line 12
    invoke-virtual {v0}, Landroid/telephony/TelephonyManager;->getDeviceId()Ljava/lang/String;

    move-result-object v0

    .line 13
    invoke-interface {v6}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object v1

    invoke-interface {v1, v4, v0}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    move-result-object v1

    invoke-interface {v1}, Landroid/content/SharedPreferences$Editor;->commit()Z

    goto :goto_1

    .line 15
    :cond_1
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-virtual {v0}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v0

    invoke-virtual {v0}, Landroid/content/Context;->getContentResolver()Landroid/content/ContentResolver;

    move-result-object v0

    invoke-static {v0, v1}, Landroid/provider/Settings$Secure;->getString(Landroid/content/ContentResolver;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    if-eqz v0, :cond_3

    .line 16
    invoke-virtual {v0}, Ljava/lang/String;->isEmpty()Z

    move-result v0

    if-eqz v0, :cond_2

    goto :goto_0

    .line 19
    :cond_2
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v6

    invoke-virtual {v0, v6, v7}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    goto :goto_1

    .line 20
    :cond_3
    :goto_0
    invoke-static {}, Ljava/util/UUID;->randomUUID()Ljava/util/UUID;

    move-result-object v0

    invoke-virtual {v0}, Ljava/util/UUID;->toString()Ljava/lang/String;

    move-result-object v0

    goto :goto_1

    .line 26
    :cond_4
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-virtual {v0}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v0

    invoke-virtual {v0}, Landroid/content/Context;->getContentResolver()Landroid/content/ContentResolver;

    move-result-object v0

    invoke-static {v0, v1}, Landroid/provider/Settings$Secure;->getString(Landroid/content/ContentResolver;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    if-eqz v0, :cond_5

    .line 27
    invoke-virtual {v0}, Ljava/lang/String;->isEmpty()Z

    move-result v1

    if-eqz v1, :cond_6

    .line 28
    :cond_5
    invoke-static {}, Ljava/util/UUID;->randomUUID()Ljava/util/UUID;

    move-result-object v0

    invoke-virtual {v0}, Ljava/util/UUID;->toString()Ljava/lang/String;

    move-result-object v0

    .line 29
    invoke-virtual {v0}, Ljava/lang/String;->isEmpty()Z

    move-result v1

    if-eqz v1, :cond_6

    .line 30
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v6

    invoke-virtual {v0, v6, v7}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 34
    :cond_6
    :goto_1
    invoke-virtual {p0, v5, v0, v2}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->sendResult(ILjava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_2

    :catch_0
    move-exception v0

    .line 37
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 38
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v3

    invoke-virtual {v0, v3, v4}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v5, v0, v2}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->sendResult(ILjava/lang/String;Ljava/lang/String;)V

    :cond_7
    :goto_2
    return-void
.end method
