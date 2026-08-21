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

.field public static final CODE_GET_AESGCM256_DECRYPT_STRING:I = 0xf462e

.field public static final CODE_GET_AESGCM256_ENCRYPT_STRING:I = 0xf462d

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

.field public static final SET_CLIP_ALLOW:Ljava/lang/String; = "set_clip_allow"

.field public static final SET_IDENTITY_INFO:Ljava/lang/String; = "verifier_set_identity"

.field public static final USERVERIFIER_GET_IDENTITY_FAIL:I = 0x89b

.field public static final USERVERIFIER_GET_IDENTITY_SUCCESS:I = 0x89a

.field public static final USERVERIFIER_SET_IDENTITY_FAIL:I = 0x89d

.field public static final USERVERIFIER_SET_IDENTITY_SUCCESS:I = 0x89c

.field public static localState:Lcom/bianfeng/ymnsdk/entity/UrlLocalState;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 51
    invoke-direct {p0}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;-><init>()V

    return-void
.end method


# virtual methods
.method public change_host(Ljava/lang/String;)V
    .locals 9
    .param p1, "url"    # Ljava/lang/String;
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "set_host"
    .end annotation

    .line 114
    :try_start_0
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/feature/e;->e(Landroid/content/Context;)Lcom/bianfeng/ymnsdk/entity/UrlLocalState;

    move-result-object v0

    sput-object v0, Lcom/bianfeng/ymnsdk/feature/plugin/YmnBaseInterface;->localState:Lcom/bianfeng/ymnsdk/entity/UrlLocalState;

    .line 115
    sget-object v0, Lcom/bianfeng/ymnsdk/feature/plugin/YmnBaseInterface;->localState:Lcom/bianfeng/ymnsdk/entity/UrlLocalState;

    invoke-virtual {v0, p1}, Lcom/bianfeng/ymnsdk/entity/UrlLocalState;->setCurrentHost(Ljava/lang/String;)V

    .line 116
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->getContext()Landroid/content/Context;

    move-result-object v0

    sget-object v1, Lcom/bianfeng/ymnsdk/feature/plugin/YmnBaseInterface;->localState:Lcom/bianfeng/ymnsdk/entity/UrlLocalState;

    invoke-static {v0, v1}, Lcom/bianfeng/ymnsdk/feature/e;->a(Landroid/content/Context;Lcom/bianfeng/ymnsdk/entity/UrlLocalState;)V

    .line 117
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->getInstance()Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;

    move-result-object v2

    const-string v3, "set_host"

    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/feature/plugin/YmnBaseInterface;->getPluginId()Ljava/lang/String;

    move-result-object v4

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/feature/plugin/YmnBaseInterface;->getPluginVersion()I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, ""

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    .line 118
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/feature/plugin/YmnBaseInterface;->getSdkVersion()Ljava/lang/String;

    move-result-object v6

    const/4 v7, 0x0

    const-string v8, ""

    .line 117
    invoke-virtual/range {v2 .. v8}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->pluginFinish(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 121
    goto :goto_0

    .line 119
    :catch_0
    move-exception v0

    .line 122
    :goto_0
    return-void
.end method

.method public change_ymn_host(Ljava/lang/String;)V
    .locals 3
    .param p1, "url"    # Ljava/lang/String;
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "change_ymn_host"
    .end annotation

    .line 455
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->getContext()Landroid/content/Context;

    move-result-object v0

    const-string v1, "SP_YMN_CHANGE_HOST"

    const/4 v2, 0x0

    invoke-virtual {v0, v1, v2}, Landroid/content/Context;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object v0

    .line 456
    .local v0, "preferences":Landroid/content/SharedPreferences;
    invoke-interface {v0}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object v2

    invoke-interface {v2, v1, p1}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    move-result-object v1

    invoke-interface {v1}, Landroid/content/SharedPreferences$Editor;->apply()V

    .line 457
    return-void
.end method

.method public checkOrderStatue(Ljava/lang/String;)V
    .locals 4
    .param p1, "orderid"    # Ljava/lang/String;
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "check_order_statue"
    .end annotation

    .line 288
    :try_start_0
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/RequestRetryUtils;->getInstance()Lcom/bianfeng/ymnsdk/util/RequestRetryUtils;

    move-result-object v0

    .line 289
    .local v0, "retryUtils":Lcom/bianfeng/ymnsdk/util/RequestRetryUtils;
    new-instance v1, Lcom/bianfeng/ymnsdk/actionv2/c;

    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->getContext()Landroid/content/Context;

    move-result-object v2

    invoke-direct {v1, v2}, Lcom/bianfeng/ymnsdk/actionv2/c;-><init>(Landroid/content/Context;)V

    .line 290
    .local v1, "action":Lcom/bianfeng/ymnsdk/actionv2/c;
    const/4 v2, 0x1

    new-array v2, v2, [Ljava/lang/Object;

    const/4 v3, 0x0

    aput-object p1, v2, v3

    invoke-virtual {v1, p0, v2}, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2;->putReqData(Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;[Ljava/lang/Object;)V

    .line 291
    new-instance v2, Lcom/bianfeng/ymnsdk/feature/plugin/YmnBaseInterface$e;

    invoke-direct {v2, p0, v1, v0}, Lcom/bianfeng/ymnsdk/feature/plugin/YmnBaseInterface$e;-><init>(Lcom/bianfeng/ymnsdk/feature/plugin/YmnBaseInterface;Lcom/bianfeng/ymnsdk/actionv2/c;Lcom/bianfeng/ymnsdk/util/RequestRetryUtils;)V

    invoke-virtual {v1, v2}, Ljava/util/Observable;->addObserver(Ljava/util/Observer;)V

    .line 306
    const-string v2, "checkOrderStatue check_order_statue"

    invoke-static {v2}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 307
    invoke-virtual {v1}, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2;->onStartAttachment()V

    .line 308
    invoke-virtual {v1}, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2;->actionStart()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 311
    .end local v0    # "retryUtils":Lcom/bianfeng/ymnsdk/util/RequestRetryUtils;
    .end local v1    # "action":Lcom/bianfeng/ymnsdk/actionv2/c;
    goto :goto_0

    .line 309
    :catch_0
    move-exception v0

    .line 310
    .local v0, "e":Ljava/lang/Exception;
    const/16 v1, 0x89f

    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v2

    const-string v3, "check_order_statue"

    invoke-virtual {p0, v1, v2, v3}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->sendResult(ILjava/lang/String;Ljava/lang/String;)V

    .line 313
    .end local v0    # "e":Ljava/lang/Exception;
    :goto_0
    return-void
.end method

.method public getChannelId()Ljava/lang/String;
    .locals 1
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "get_channel_id"
    .end annotation

    .line 126
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->getChannelId()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getIdentity(Ljava/lang/String;Ljava/lang/String;)V
    .locals 1
    .param p1, "ymnPlatformId"    # Ljava/lang/String;
    .param p2, "ymnUserId"    # Ljava/lang/String;
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        alias = "verifier_get_identity"
        name = "get_identity"
    .end annotation

    .line 159
    const-string v0, "0"

    invoke-virtual {p0, v0, p1, p2}, Lcom/bianfeng/ymnsdk/feature/plugin/YmnBaseInterface;->getIdentity(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    .line 161
    return-void
.end method

.method public getIdentity(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 4
    .param p1, "type"    # Ljava/lang/String;
    .param p2, "areaId"    # Ljava/lang/String;
    .param p3, "userId"    # Ljava/lang/String;
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        alias = "verifier_get_identity"
        name = "get_identity"
    .end annotation

    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    .line 166
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/RequestRetryUtils;->getInstance()Lcom/bianfeng/ymnsdk/util/RequestRetryUtils;

    move-result-object v0

    .line 167
    .local v0, "retryUtils":Lcom/bianfeng/ymnsdk/util/RequestRetryUtils;
    new-instance v1, Lcom/bianfeng/ymnsdk/action/b;

    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->getContext()Landroid/content/Context;

    move-result-object v2

    invoke-direct {v1, v2}, Lcom/bianfeng/ymnsdk/action/b;-><init>(Landroid/content/Context;)V

    .line 168
    .local v1, "action":Lcom/bianfeng/ymnsdk/action/b;
    const/4 v2, 0x3

    new-array v2, v2, [Ljava/lang/Object;

    const/4 v3, 0x0

    aput-object p1, v2, v3

    const/4 v3, 0x1

    aput-object p2, v2, v3

    const/4 v3, 0x2

    aput-object p3, v2, v3

    invoke-virtual {v1, p0, v2}, Lcom/bianfeng/ymnsdk/action/ActionSupport;->putReqData(Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;[Ljava/lang/Object;)V

    .line 169
    new-instance v2, Lcom/bianfeng/ymnsdk/feature/plugin/YmnBaseInterface$a;

    invoke-direct {v2, p0, v1, v0}, Lcom/bianfeng/ymnsdk/feature/plugin/YmnBaseInterface$a;-><init>(Lcom/bianfeng/ymnsdk/feature/plugin/YmnBaseInterface;Lcom/bianfeng/ymnsdk/action/b;Lcom/bianfeng/ymnsdk/util/RequestRetryUtils;)V

    invoke-virtual {v1, v2}, Ljava/util/Observable;->addObserver(Ljava/util/Observer;)V

    .line 186
    invoke-virtual {v1}, Lcom/bianfeng/ymnsdk/action/ActionSupport;->onStartAttachment()V

    .line 187
    invoke-virtual {v1}, Lcom/bianfeng/ymnsdk/action/ActionSupport;->actionStart()V

    .line 188
    return-void
.end method

.method public getLoginData()V
    .locals 8
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "getLoginData"
    .end annotation

    .line 192
    const-string v0, "\u83b7\u53d6\u767b\u5f55\u6570\u636e"

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 193
    invoke-static {}, Lcom/bianfeng/ymnsdk/feature/plugin/b;->d()V

    .line 194
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

    .line 195
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/feature/plugin/YmnBaseInterface;->getSdkVersion()Ljava/lang/String;

    move-result-object v5

    .line 194
    const-string v2, "getLoginData"

    const/4 v6, 0x0

    const-string v7, ""

    invoke-virtual/range {v1 .. v7}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->pluginFinish(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;)V

    .line 196
    return-void
.end method

.method public getMetaDataValue(Ljava/lang/String;)Ljava/lang/String;
    .locals 1
    .param p1, "key"    # Ljava/lang/String;
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "get_metadata_value"
    .end annotation

    .line 154
    invoke-static {p1}, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->getMetaDataValueString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getOrderId()Ljava/lang/String;
    .locals 3
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "ymn_get_orderid"
    .end annotation

    .line 520
    invoke-static {}, Lcom/bianfeng/ymnsdk/YmnSdkPaymentWrapper;->getOrderId()Ljava/lang/String;

    move-result-object v0

    .line 521
    .local v0, "orderid":Ljava/lang/String;
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_0

    .line 522
    const v1, 0xf462c

    const-string v2, ""

    invoke-virtual {p0, v1, v2}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->sendResult(ILjava/lang/String;)V

    goto :goto_0

    .line 524
    :cond_0
    const v1, 0xf462b

    invoke-virtual {p0, v1, v0}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->sendResult(ILjava/lang/String;)V

    .line 526
    :goto_0
    return-object v0
.end method

.method public getOrderId(Ljava/lang/String;)Ljava/lang/String;
    .locals 3
    .param p1, "functionName"    # Ljava/lang/String;
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "ymn_get_orderid"
    .end annotation

    .line 531
    invoke-static {p1}, Lcom/bianfeng/ymnsdk/YmnSdkPaymentWrapper;->getOrderId(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 532
    .local v0, "orderid":Ljava/lang/String;
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_0

    .line 533
    const v1, 0xf462c

    const-string v2, ""

    invoke-virtual {p0, v1, v2}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->sendResult(ILjava/lang/String;)V

    goto :goto_0

    .line 535
    :cond_0
    const v1, 0xf462b

    invoke-virtual {p0, v1, v0}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->sendResult(ILjava/lang/String;)V

    .line 537
    :goto_0
    return-object v0
.end method

.method public getPluginId()Ljava/lang/String;
    .locals 1

    .line 80
    const/4 v0, 0x0

    return-object v0
.end method

.method public getPluginName()Ljava/lang/String;
    .locals 1

    .line 85
    const-string v0, "ymnbase"

    return-object v0
.end method

.method public getPluginVersion()I
    .locals 1

    .line 90
    const/16 v0, 0x8

    return v0
.end method

.method public getProducts()V
    .locals 3
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        alias = "base_get_products"
        name = "get_products"
    .end annotation

    .line 232
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/RequestRetryUtils;->getInstance()Lcom/bianfeng/ymnsdk/util/RequestRetryUtils;

    move-result-object v0

    .line 233
    .local v0, "retryUtils":Lcom/bianfeng/ymnsdk/util/RequestRetryUtils;
    new-instance v1, Lcom/bianfeng/ymnsdk/action/g;

    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->getContext()Landroid/content/Context;

    move-result-object v2

    invoke-direct {v1, v2}, Lcom/bianfeng/ymnsdk/action/g;-><init>(Landroid/content/Context;)V

    .line 234
    .local v1, "action":Lcom/bianfeng/ymnsdk/action/g;
    const/4 v2, 0x0

    new-array v2, v2, [Ljava/lang/Object;

    invoke-virtual {v1, p0, v2}, Lcom/bianfeng/ymnsdk/action/ActionSupport;->putReqData(Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;[Ljava/lang/Object;)V

    .line 235
    new-instance v2, Lcom/bianfeng/ymnsdk/feature/plugin/YmnBaseInterface$c;

    invoke-direct {v2, p0, v1, v0}, Lcom/bianfeng/ymnsdk/feature/plugin/YmnBaseInterface$c;-><init>(Lcom/bianfeng/ymnsdk/feature/plugin/YmnBaseInterface;Lcom/bianfeng/ymnsdk/action/g;Lcom/bianfeng/ymnsdk/util/RequestRetryUtils;)V

    invoke-virtual {v1, v2}, Ljava/util/Observable;->addObserver(Ljava/util/Observer;)V

    .line 251
    invoke-virtual {v1}, Lcom/bianfeng/ymnsdk/action/ActionSupport;->onStartAttachment()V

    .line 252
    invoke-virtual {v1}, Lcom/bianfeng/ymnsdk/action/ActionSupport;->actionStart()V

    .line 253
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

    .line 258
    .local p1, "data":Ljava/util/LinkedHashMap;, "Ljava/util/LinkedHashMap<Ljava/lang/String;Ljava/lang/String;>;"
    :try_start_0
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/RequestRetryUtils;->getInstance()Lcom/bianfeng/ymnsdk/util/RequestRetryUtils;

    move-result-object v0

    .line 259
    .local v0, "retryUtils":Lcom/bianfeng/ymnsdk/util/RequestRetryUtils;
    new-instance v1, Lcom/bianfeng/ymnsdk/actionv2/d;

    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->getContext()Landroid/content/Context;

    move-result-object v2

    invoke-direct {v1, v2}, Lcom/bianfeng/ymnsdk/actionv2/d;-><init>(Landroid/content/Context;)V

    .line 260
    .local v1, "action":Lcom/bianfeng/ymnsdk/actionv2/d;
    const/4 v2, 0x1

    new-array v2, v2, [Ljava/lang/Object;

    const/4 v3, 0x0

    aput-object p1, v2, v3

    invoke-virtual {v1, p0, v2}, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2;->putReqData(Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;[Ljava/lang/Object;)V

    .line 261
    new-instance v2, Lcom/bianfeng/ymnsdk/feature/plugin/YmnBaseInterface$d;

    invoke-direct {v2, p0, v1, v0}, Lcom/bianfeng/ymnsdk/feature/plugin/YmnBaseInterface$d;-><init>(Lcom/bianfeng/ymnsdk/feature/plugin/YmnBaseInterface;Lcom/bianfeng/ymnsdk/actionv2/d;Lcom/bianfeng/ymnsdk/util/RequestRetryUtils;)V

    invoke-virtual {v1, v2}, Ljava/util/Observable;->addObserver(Ljava/util/Observer;)V

    .line 276
    const-string v2, "getProducts"

    invoke-static {v2}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 277
    invoke-virtual {v1}, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2;->onStartAttachment()V

    .line 278
    invoke-virtual {v1}, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2;->actionStart()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 281
    .end local v0    # "retryUtils":Lcom/bianfeng/ymnsdk/util/RequestRetryUtils;
    .end local v1    # "action":Lcom/bianfeng/ymnsdk/actionv2/d;
    goto :goto_0

    .line 279
    :catch_0
    move-exception v0

    .line 280
    .local v0, "e":Ljava/lang/Exception;
    const/16 v1, 0x89f

    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v2

    const-string v3, "get_products;base_get_products"

    invoke-virtual {p0, v1, v2, v3}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->sendResult(ILjava/lang/String;Ljava/lang/String;)V

    .line 283
    .end local v0    # "e":Ljava/lang/Exception;
    :goto_0
    return-void
.end method

.method public getSdkVersion()Ljava/lang/String;
    .locals 1

    .line 95
    const-string v0, "2.1.7"

    return-object v0
.end method

.method public get_AESGCM256_decrypt_string(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
    .locals 3
    .param p1, "plaintext"    # Ljava/lang/String;
    .param p2, "key"    # Ljava/lang/String;
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "get_AESGCM256_decrypt_string"
    .end annotation

    .line 141
    const-string v0, "bfdata_"

    invoke-virtual {p1, v0}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_0

    const-string v1, ""

    invoke-virtual {p1, v0, v1}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object p1

    .line 142
    :cond_0
    const-string v0, ""

    .line 144
    .local v0, "decryptStr":Ljava/lang/String;
    :try_start_0
    invoke-static {p1, p2}, Lcom/bianfeng/ymnsdk/utilslib/security/AESGCM256;->decrypt(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    move-object v0, v1

    .line 147
    nop

    .line 148
    const v1, 0xf462e

    invoke-virtual {p0, v1, v0}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->sendResult(ILjava/lang/String;)V

    .line 149
    return-object v0

    .line 145
    :catch_0
    move-exception v1

    .line 146
    .local v1, "e":Ljava/lang/Exception;
    new-instance v2, Ljava/lang/RuntimeException;

    invoke-direct {v2, v1}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/Throwable;)V

    throw v2
.end method

.method public get_AESGCM256_encrypt_string(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
    .locals 3
    .param p1, "plaintext"    # Ljava/lang/String;
    .param p2, "key"    # Ljava/lang/String;
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "get_AESGCM256_encrypt_string"
    .end annotation

    .line 130
    const-string v0, ""

    .line 132
    .local v0, "encryptStr":Ljava/lang/String;
    :try_start_0
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "bfdata_"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {p1, p2}, Lcom/bianfeng/ymnsdk/utilslib/security/AESGCM256;->encrypt(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    move-object v0, v1

    .line 135
    nop

    .line 136
    const v1, 0xf462d

    invoke-virtual {p0, v1, v0}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->sendResult(ILjava/lang/String;)V

    .line 137
    return-object v0

    .line 133
    :catch_0
    move-exception v1

    .line 134
    .local v1, "e":Ljava/lang/Exception;
    new-instance v2, Ljava/lang/RuntimeException;

    invoke-direct {v2, v1}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/Throwable;)V

    throw v2
.end method

.method public hostAppAnalysis()V
    .locals 3
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "host_app_analysis"
    .end annotation

    .line 542
    new-instance v0, Landroid/content/Intent;

    invoke-direct {v0}, Landroid/content/Intent;-><init>()V

    .line 543
    .local v0, "intent":Landroid/content/Intent;
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->getActivity()Landroid/app/Activity;

    move-result-object v1

    const-string v2, "com.bianfeng.ymnsdk.runner.activity.HostAppAnalysisActivity"

    invoke-virtual {v0, v1, v2}, Landroid/content/Intent;->setClassName(Landroid/content/Context;Ljava/lang/String;)Landroid/content/Intent;

    .line 544
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->getActivity()Landroid/app/Activity;

    move-result-object v1

    invoke-virtual {v1, v0}, Landroid/app/Activity;->startActivity(Landroid/content/Intent;)V

    .line 545
    return-void
.end method

.method public loginFinishEvent(Ljava/lang/String;Ljava/lang/String;)V
    .locals 5
    .param p1, "rst_code"    # Ljava/lang/String;
    .param p2, "rst_msg"    # Ljava/lang/String;
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        alias = "base_login_finish"
        name = "ymndatafun_login_finish"
    .end annotation

    .line 431
    :try_start_0
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->getInstance()Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;

    move-result-object v0

    invoke-static {p1}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v1

    invoke-virtual {v0, v1, p2}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->loginFinishEvent(ILjava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 434
    goto :goto_0

    .line 432
    :catch_0
    move-exception v0

    .line 433
    .local v0, "e":Ljava/lang/Exception;
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->getInstance()Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;

    move-result-object v1

    const/4 v2, -0x1

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, "|"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v1, v2, v3}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->loginFinishEvent(ILjava/lang/String;)V

    .line 435
    .end local v0    # "e":Ljava/lang/Exception;
    :goto_0
    return-void
.end method

.method public loginOldRequestCheckEvent(Ljava/lang/String;)V
    .locals 1
    .param p1, "server_name"    # Ljava/lang/String;
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "base_login_request_check"
    .end annotation

    .line 439
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->getInstance()Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->loginOldRequestCheckEvent(Ljava/lang/String;)V

    .line 440
    return-void
.end method

.method public loginOldResponseCheckEvent(Ljava/lang/String;Ljava/lang/String;)V
    .locals 5
    .param p1, "rst_code"    # Ljava/lang/String;
    .param p2, "rst_msg"    # Ljava/lang/String;
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "base_login_response_check"
    .end annotation

    .line 445
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

    .line 448
    goto :goto_0

    .line 446
    :catch_0
    move-exception v0

    .line 447
    .local v0, "e":Ljava/lang/Exception;
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->getInstance()Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;

    move-result-object v1

    const/4 v2, -0x1

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, "|"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v1, v2, v3}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->loginOldResponseCheckEvent(Ljava/lang/Integer;Ljava/lang/String;)V

    .line 449
    .end local v0    # "e":Ljava/lang/Exception;
    :goto_0
    return-void
.end method

.method public onContextChanged(Landroid/content/Context;)V
    .locals 0
    .param p1, "context"    # Landroid/content/Context;

    .line 108
    invoke-super {p0, p1}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->onContextChanged(Landroid/content/Context;)V

    .line 109
    return-void
.end method

.method public onDestroy()V
    .locals 0

    .line 560
    invoke-super {p0}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->onDestroy()V

    .line 561
    return-void
.end method

.method public onInit(Landroid/content/Context;)V
    .locals 1
    .param p1, "context"    # Landroid/content/Context;

    .line 102
    invoke-super {p0, p1}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->onInit(Landroid/content/Context;)V

    .line 103
    const/4 v0, 0x1

    invoke-virtual {p0, v0}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->setInited(Z)V

    .line 104
    return-void
.end method

.method public query_permission(Ljava/lang/String;)V
    .locals 6
    .param p1, "permisstionStr"    # Ljava/lang/String;
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "query_permission"
    .end annotation

    .line 413
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->getActivity()Landroid/app/Activity;

    move-result-object v0

    invoke-virtual {v0}, Landroid/app/Activity;->getApplicationInfo()Landroid/content/pm/ApplicationInfo;

    move-result-object v0

    iget v0, v0, Landroid/content/pm/ApplicationInfo;->targetSdkVersion:I

    .line 414
    .local v0, "targetSdkVersion":I
    const/16 v1, 0x17

    const-string v2, "query_permission"

    if-lt v0, v1, :cond_2

    sget v3, Landroid/os/Build$VERSION;->SDK_INT:I

    if-ge v3, v1, :cond_0

    goto :goto_0

    .line 417
    :cond_0
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->getActivity()Landroid/app/Activity;

    move-result-object v1

    invoke-virtual {v1, p1}, Landroid/app/Activity;->checkSelfPermission(Ljava/lang/String;)I

    move-result v1

    .line 418
    .local v1, "isGranted":I
    if-nez v1, :cond_1

    .line 420
    const/16 v3, 0x8a0

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "\u5df2\u6388\u6743_"

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {p0, v3, v4, v2}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->sendResult(ILjava/lang/String;Ljava/lang/String;)V

    goto :goto_1

    .line 421
    :cond_1
    const/4 v3, -0x1

    if-ne v1, v3, :cond_3

    .line 423
    const/16 v3, 0x8a1

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "\u5df2\u62d2\u63a5_"

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {p0, v3, v4, v2}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->sendResult(ILjava/lang/String;Ljava/lang/String;)V

    goto :goto_1

    .line 415
    .end local v1    # "isGranted":I
    :cond_2
    :goto_0
    const/16 v1, 0x8a2

    const-string v3, "targetVersion\u6216\u8005\u7cfb\u7edf\u7248\u672c\u5c0f\u4e8e23"

    invoke-virtual {p0, v1, v3, v2}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->sendResult(ILjava/lang/String;Ljava/lang/String;)V

    .line 426
    :cond_3
    :goto_1
    return-void
.end method

.method public request_permission()V
    .locals 1
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "request_permission"
    .end annotation

    .line 402
    const-string v0, "\u8be5\u65b9\u6cd5\u5df2\u7ecf\u5f03\u7528"

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->e(Ljava/lang/String;)I

    .line 403
    return-void
.end method

.method public request_permission(Ljava/lang/String;)V
    .locals 5
    .param p1, "permisstionStr"    # Ljava/lang/String;
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "request_permission"
    .end annotation

    .line 317
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->getActivity()Landroid/app/Activity;

    move-result-object v0

    invoke-virtual {v0}, Landroid/app/Activity;->getApplicationInfo()Landroid/content/pm/ApplicationInfo;

    move-result-object v0

    iget v0, v0, Landroid/content/pm/ApplicationInfo;->targetSdkVersion:I

    .line 318
    .local v0, "targetSdkVersion":I
    const/16 v1, 0x17

    if-lt v0, v1, :cond_2

    sget v2, Landroid/os/Build$VERSION;->SDK_INT:I

    if-ge v2, v1, :cond_0

    goto :goto_1

    .line 322
    :cond_0
    :try_start_0
    new-instance v1, Lorg/json/JSONArray;

    invoke-direct {v1, p1}, Lorg/json/JSONArray;-><init>(Ljava/lang/String;)V

    .line 323
    .local v1, "arr":Lorg/json/JSONArray;
    new-instance v2, Ljava/util/ArrayList;

    invoke-direct {v2}, Ljava/util/ArrayList;-><init>()V

    .line 324
    .local v2, "list":Ljava/util/List;
    const/4 v3, 0x0

    .local v3, "i":I
    :goto_0
    invoke-virtual {v1}, Lorg/json/JSONArray;->length()I

    move-result v4

    if-ge v3, v4, :cond_1

    .line 325
    invoke-virtual {v1, v3}, Lorg/json/JSONArray;->get(I)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/lang/String;

    .line 326
    .local v4, "name":Ljava/lang/String;
    invoke-interface {v2, v4}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 324
    nop

    .end local v4    # "name":Ljava/lang/String;
    add-int/lit8 v3, v3, 0x1

    goto :goto_0

    .line 328
    .end local v3    # "i":I
    :cond_1
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->getActivity()Landroid/app/Activity;

    move-result-object v3

    invoke-static {v3}, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;->newInstance(Landroid/app/Activity;)Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;

    move-result-object v3

    new-instance v4, Lcom/bianfeng/ymnsdk/feature/plugin/YmnBaseInterface$f;

    invoke-direct {v4, p0}, Lcom/bianfeng/ymnsdk/feature/plugin/YmnBaseInterface$f;-><init>(Lcom/bianfeng/ymnsdk/feature/plugin/YmnBaseInterface;)V

    invoke-virtual {v3, v4}, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;->setCallback(Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils$PermissCallback;)Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;

    move-result-object v3

    .line 349
    invoke-virtual {v3, v2}, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;->setPermissions(Ljava/util/List;)Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;

    move-result-object v3

    const/4 v4, 0x1

    invoke-virtual {v3, v4}, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;->requestPermissions(I)Z
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 354
    nop

    .end local v1    # "arr":Lorg/json/JSONArray;
    .end local v2    # "list":Ljava/util/List;
    goto :goto_2

    .line 350
    :catch_0
    move-exception v1

    .line 351
    .local v1, "e":Ljava/lang/Exception;
    const-string v2, "\u53c2\u6570\u4e0d\u6b63\u786e\uff0c\u5e94\u8be5\u4f20\u5165\u5b57\u7b26\u4e32\u6570\u7ec4"

    invoke-static {v2}, Lcom/bianfeng/ymnsdk/util/Logger;->e(Ljava/lang/String;)I

    .line 352
    invoke-virtual {v1}, Ljava/lang/Exception;->printStackTrace()V

    .line 353
    const/16 v2, 0x8a1

    const-string v3, "\u62d2\u7edd\u7684\u6743\u9650|\u53c2\u6570\u4e0d\u6b63\u786e\uff0c\u5e94\u8be5\u4f20\u5165\u5b57\u7b26\u4e32\u6570\u7ec4"

    invoke-virtual {p0, v2, v3}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->sendResult(ILjava/lang/String;)V

    goto :goto_2

    .line 319
    .end local v1    # "e":Ljava/lang/Exception;
    :cond_2
    :goto_1
    const/16 v1, 0x8a2

    const-string v2, "targetVersion\u6216\u8005\u7cfb\u7edf\u7248\u672c\u5c0f\u4e8e23"

    const-string v3, "request_permission"

    invoke-virtual {p0, v1, v2, v3}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->sendResult(ILjava/lang/String;Ljava/lang/String;)V

    .line 356
    :goto_2
    return-void
.end method

.method public request_permission(Ljava/lang/String;Ljava/lang/String;)V
    .locals 5
    .param p1, "permisstionStr"    # Ljava/lang/String;
    .param p2, "code"    # Ljava/lang/String;
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "request_permission"
    .end annotation

    .line 360
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->getActivity()Landroid/app/Activity;

    move-result-object v0

    invoke-virtual {v0}, Landroid/app/Activity;->getApplicationInfo()Landroid/content/pm/ApplicationInfo;

    move-result-object v0

    iget v0, v0, Landroid/content/pm/ApplicationInfo;->targetSdkVersion:I

    .line 361
    .local v0, "targetSdkVersion":I
    const/16 v1, 0x17

    if-lt v0, v1, :cond_2

    sget v2, Landroid/os/Build$VERSION;->SDK_INT:I

    if-ge v2, v1, :cond_0

    goto :goto_1

    .line 365
    :cond_0
    :try_start_0
    new-instance v1, Lorg/json/JSONArray;

    invoke-direct {v1, p1}, Lorg/json/JSONArray;-><init>(Ljava/lang/String;)V

    .line 366
    .local v1, "arr":Lorg/json/JSONArray;
    new-instance v2, Ljava/util/ArrayList;

    invoke-direct {v2}, Ljava/util/ArrayList;-><init>()V

    .line 367
    .local v2, "list":Ljava/util/List;
    const/4 v3, 0x0

    .local v3, "i":I
    :goto_0
    invoke-virtual {v1}, Lorg/json/JSONArray;->length()I

    move-result v4

    if-ge v3, v4, :cond_1

    .line 368
    invoke-virtual {v1, v3}, Lorg/json/JSONArray;->get(I)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/lang/String;

    .line 369
    .local v4, "name":Ljava/lang/String;
    invoke-interface {v2, v4}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 367
    nop

    .end local v4    # "name":Ljava/lang/String;
    add-int/lit8 v3, v3, 0x1

    goto :goto_0

    .line 371
    .end local v3    # "i":I
    :cond_1
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->getActivity()Landroid/app/Activity;

    move-result-object v3

    invoke-static {v3}, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;->newInstance(Landroid/app/Activity;)Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;

    move-result-object v3

    new-instance v4, Lcom/bianfeng/ymnsdk/feature/plugin/YmnBaseInterface$g;

    invoke-direct {v4, p0}, Lcom/bianfeng/ymnsdk/feature/plugin/YmnBaseInterface$g;-><init>(Lcom/bianfeng/ymnsdk/feature/plugin/YmnBaseInterface;)V

    invoke-virtual {v3, v4}, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;->setCallback(Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils$PermissCallback;)Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;

    move-result-object v3

    .line 391
    invoke-virtual {v3, v2}, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;->setPermissions(Ljava/util/List;)Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;

    move-result-object v3

    invoke-static {p2}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v4

    invoke-virtual {v3, v4}, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;->requestPermissions(I)Z
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 396
    nop

    .end local v1    # "arr":Lorg/json/JSONArray;
    .end local v2    # "list":Ljava/util/List;
    goto :goto_2

    .line 392
    :catch_0
    move-exception v1

    .line 393
    .local v1, "e":Ljava/lang/Exception;
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "\u53c2\u6570\u4e0d\u6b63\u786e\uff0c\u5e94\u8be5\u4f20\u5165\u5b57\u7b26\u4e32\u6570\u7ec4"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Lcom/bianfeng/ymnsdk/util/Logger;->e(Ljava/lang/String;)I

    .line 394
    const/16 v2, 0x8a1

    const-string v3, "\u62d2\u7edd\u7684\u6743\u9650|\u53c2\u6570\u4e0d\u6b63\u786e\uff0c\u5e94\u8be5\u4f20\u5165\u5b57\u7b26\u4e32\u6570\u7ec4"

    invoke-virtual {p0, v2, v3}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->sendResult(ILjava/lang/String;)V

    .line 395
    invoke-virtual {v1}, Ljava/lang/Exception;->printStackTrace()V

    goto :goto_2

    .line 362
    .end local v1    # "e":Ljava/lang/Exception;
    :cond_2
    :goto_1
    const/16 v1, 0x8a2

    const-string v2, "targetVersion\u6216\u8005\u7cfb\u7edf\u7248\u672c\u5c0f\u4e8e23"

    const-string v3, "request_permission"

    invoke-virtual {p0, v1, v2, v3}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->sendResult(ILjava/lang/String;Ljava/lang/String;)V

    .line 398
    :goto_2
    return-void
.end method

.method public setClipAllow(Ljava/lang/String;)V
    .locals 1
    .param p1, "isAllow"    # Ljava/lang/String;
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "set_clip_allow"
    .end annotation

    .line 549
    const-string v0, "allow"

    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 551
    const/4 v0, 0x1

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/cache/YmnSharedPreferencesUtils;->setYmnClipAllow(Z)V

    goto :goto_0

    .line 553
    :cond_0
    const/4 v0, 0x0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/cache/YmnSharedPreferencesUtils;->setYmnClipAllow(Z)V

    .line 555
    :goto_0
    return-void
.end method

.method public setIdentity(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 7
    .param p1, "ymnPlatformId"    # Ljava/lang/String;
    .param p2, "ymnUserId"    # Ljava/lang/String;
    .param p3, "realName"    # Ljava/lang/String;
    .param p4, "identityNumber"    # Ljava/lang/String;
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        alias = "verifier_set_identity"
        name = "set_identity"
    .end annotation

    .line 200
    const-string v0, "\u5b9e\u540d\u8ba4\u8bc1\u4e86"

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 201
    const-string v2, "0"

    move-object v1, p0

    move-object v3, p1

    move-object v4, p2

    move-object v5, p3

    move-object v6, p4

    invoke-virtual/range {v1 .. v6}, Lcom/bianfeng/ymnsdk/feature/plugin/YmnBaseInterface;->setIdentity(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    .line 202
    return-void
.end method

.method public setIdentity(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 4
    .param p1, "type"    # Ljava/lang/String;
    .param p2, "areaId"    # Ljava/lang/String;
    .param p3, "userId"    # Ljava/lang/String;
    .param p4, "realName"    # Ljava/lang/String;
    .param p5, "identityNumber"    # Ljava/lang/String;
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        alias = "verifier_set_identity"
        name = "set_identity"
    .end annotation

    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    .line 207
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/RequestRetryUtils;->getInstance()Lcom/bianfeng/ymnsdk/util/RequestRetryUtils;

    move-result-object v0

    .line 208
    .local v0, "retryUtils":Lcom/bianfeng/ymnsdk/util/RequestRetryUtils;
    new-instance v1, Lcom/bianfeng/ymnsdk/action/c;

    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->getContext()Landroid/content/Context;

    move-result-object v2

    invoke-direct {v1, v2}, Lcom/bianfeng/ymnsdk/action/c;-><init>(Landroid/content/Context;)V

    .line 209
    .local v1, "action":Lcom/bianfeng/ymnsdk/action/c;
    const/4 v2, 0x5

    new-array v2, v2, [Ljava/lang/Object;

    const/4 v3, 0x0

    aput-object p1, v2, v3

    const/4 v3, 0x1

    aput-object p2, v2, v3

    const/4 v3, 0x2

    aput-object p3, v2, v3

    const/4 v3, 0x3

    aput-object p4, v2, v3

    const/4 v3, 0x4

    aput-object p5, v2, v3

    invoke-virtual {v1, p0, v2}, Lcom/bianfeng/ymnsdk/action/ActionSupport;->putReqData(Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;[Ljava/lang/Object;)V

    .line 210
    new-instance v2, Lcom/bianfeng/ymnsdk/feature/plugin/YmnBaseInterface$b;

    invoke-direct {v2, p0, v1, v0}, Lcom/bianfeng/ymnsdk/feature/plugin/YmnBaseInterface$b;-><init>(Lcom/bianfeng/ymnsdk/feature/plugin/YmnBaseInterface;Lcom/bianfeng/ymnsdk/action/c;Lcom/bianfeng/ymnsdk/util/RequestRetryUtils;)V

    invoke-virtual {v1, v2}, Ljava/util/Observable;->addObserver(Ljava/util/Observer;)V

    .line 226
    invoke-virtual {v1}, Lcom/bianfeng/ymnsdk/action/ActionSupport;->onStartAttachment()V

    .line 227
    invoke-virtual {v1}, Lcom/bianfeng/ymnsdk/action/ActionSupport;->actionStart()V

    .line 228
    return-void
.end method

.method public startTest()V
    .locals 3
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "statr_test"
    .end annotation

    .line 406
    new-instance v0, Landroid/content/Intent;

    invoke-direct {v0}, Landroid/content/Intent;-><init>()V

    .line 407
    .local v0, "toLaunch":Landroid/content/Intent;
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->getActivity()Landroid/app/Activity;

    move-result-object v1

    const-string v2, "com.bianfeng.ymnsdk.TestActivity"

    invoke-virtual {v0, v1, v2}, Landroid/content/Intent;->setClassName(Landroid/content/Context;Ljava/lang/String;)Landroid/content/Intent;

    .line 408
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->getActivity()Landroid/app/Activity;

    move-result-object v1

    invoke-virtual {v1, v0}, Landroid/app/Activity;->startActivity(Landroid/content/Intent;)V

    .line 409
    return-void
.end method

.method public ymn_datafun_get_deviceid()V
    .locals 4
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "ymn_datafun_get_deviceid"
    .end annotation

    .line 461
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->getAndroidId()Ljava/lang/String;

    move-result-object v0

    .line 462
    .local v0, "deviceid":Ljava/lang/String;
    const-string v1, "bfdata_"

    invoke-virtual {v0, v1}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v2

    const-string v3, ""

    if-eqz v2, :cond_0

    .line 463
    invoke-virtual {v0, v1, v3}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object v0

    .line 466
    :cond_0
    const-string v1, ""

    .line 469
    .local v1, "tempDeviceid":Ljava/lang/String;
    :try_start_0
    invoke-static {v0, v3}, Lcom/bianfeng/ymnsdk/utilslib/security/AESGCM256;->decrypt(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    move-object v1, v2

    .line 472
    goto :goto_0

    .line 470
    :catch_0
    move-exception v2

    .line 471
    .local v2, "e":Ljava/lang/Exception;
    move-object v1, v0

    .line 473
    .end local v2    # "e":Ljava/lang/Exception;
    :goto_0
    const v2, 0xf462a

    const-string v3, "ymn_datafun_get_deviceid"

    invoke-virtual {p0, v2, v1, v3}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->sendResult(ILjava/lang/String;Ljava/lang/String;)V

    .line 474
    return-void
.end method

.method public ymn_get_deviceid()V
    .locals 10
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "ymn_get_deviceid"
    .end annotation

    .line 480
    const-string v0, ""

    const-string v1, "android_id"

    const-string v2, "ymn_get_deviceid"

    const-string v3, "T"

    const-string v4, "ymn_deviceid_jfq"

    const v5, 0xf4629

    :try_start_0
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->getContext()Landroid/content/Context;

    move-result-object v6

    invoke-virtual {v6}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v6

    invoke-virtual {v6}, Landroid/content/Context;->getContentResolver()Landroid/content/ContentResolver;

    move-result-object v6

    invoke-static {v6, v1}, Landroid/provider/Settings$Secure;->getString(Landroid/content/ContentResolver;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    .line 481
    .local v6, "deviceId":Ljava/lang/String;
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->getContext()Landroid/content/Context;

    move-result-object v7

    const/4 v8, 0x0

    invoke-virtual {v7, v4, v8}, Landroid/content/Context;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object v7

    .line 482
    .local v7, "preferences":Landroid/content/SharedPreferences;
    invoke-interface {v7, v4, v0}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v8}, Ljava/lang/String;->isEmpty()Z

    move-result v8

    if-nez v8, :cond_0

    .line 483
    invoke-interface {v7, v4, v0}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 484
    .end local v6    # "deviceId":Ljava/lang/String;
    .local v0, "deviceId":Ljava/lang/String;
    invoke-virtual {p0, v5, v0, v2}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->sendResult(ILjava/lang/String;Ljava/lang/String;)V

    .line 485
    return-void

    .line 487
    .end local v0    # "deviceId":Ljava/lang/String;
    .restart local v6    # "deviceId":Ljava/lang/String;
    :cond_0
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->getContext()Landroid/content/Context;

    move-result-object v0

    const-string v8, "phone"

    invoke-virtual {v0, v8}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/telephony/TelephonyManager;

    .line 488
    .local v0, "tm":Landroid/telephony/TelephonyManager;
    if-eqz v0, :cond_7

    .line 489
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->getActivity()Landroid/app/Activity;

    move-result-object v8

    const-string v9, "android.permission.READ_PHONE_STATE"

    invoke-virtual {v8, v9}, Landroid/app/Activity;->checkSelfPermission(Ljava/lang/String;)I

    move-result v8

    if-nez v8, :cond_4

    .line 490
    invoke-virtual {v0}, Landroid/telephony/TelephonyManager;->getDeviceId()Ljava/lang/String;

    move-result-object v8

    if-eqz v8, :cond_1

    .line 491
    invoke-virtual {v0}, Landroid/telephony/TelephonyManager;->getDeviceId()Ljava/lang/String;

    move-result-object v1

    .line 492
    .end local v6    # "deviceId":Ljava/lang/String;
    .local v1, "deviceId":Ljava/lang/String;
    invoke-interface {v7}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object v6

    invoke-interface {v6, v4, v1}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    move-result-object v4

    invoke-interface {v4}, Landroid/content/SharedPreferences$Editor;->commit()Z

    goto/16 :goto_1

    .line 494
    .end local v1    # "deviceId":Ljava/lang/String;
    .restart local v6    # "deviceId":Ljava/lang/String;
    :cond_1
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->getContext()Landroid/content/Context;

    move-result-object v4

    invoke-virtual {v4}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v4

    invoke-virtual {v4}, Landroid/content/Context;->getContentResolver()Landroid/content/ContentResolver;

    move-result-object v4

    invoke-static {v4, v1}, Landroid/provider/Settings$Secure;->getString(Landroid/content/ContentResolver;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 495
    .end local v6    # "deviceId":Ljava/lang/String;
    .restart local v1    # "deviceId":Ljava/lang/String;
    if-eqz v1, :cond_3

    invoke-virtual {v1}, Ljava/lang/String;->isEmpty()Z

    move-result v4

    if-eqz v4, :cond_2

    goto :goto_0

    .line 498
    :cond_2
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v8

    invoke-virtual {v4, v8, v9}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    move-object v1, v4

    goto :goto_1

    .line 496
    :cond_3
    :goto_0
    invoke-static {}, Ljava/util/UUID;->randomUUID()Ljava/util/UUID;

    move-result-object v4

    invoke-virtual {v4}, Ljava/util/UUID;->toString()Ljava/lang/String;

    move-result-object v4

    move-object v1, v4

    goto :goto_1

    .line 502
    .end local v1    # "deviceId":Ljava/lang/String;
    .restart local v6    # "deviceId":Ljava/lang/String;
    :cond_4
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->getContext()Landroid/content/Context;

    move-result-object v4

    invoke-virtual {v4}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v4

    invoke-virtual {v4}, Landroid/content/Context;->getContentResolver()Landroid/content/ContentResolver;

    move-result-object v4

    invoke-static {v4, v1}, Landroid/provider/Settings$Secure;->getString(Landroid/content/ContentResolver;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 503
    .end local v6    # "deviceId":Ljava/lang/String;
    .restart local v1    # "deviceId":Ljava/lang/String;
    if-eqz v1, :cond_5

    invoke-virtual {v1}, Ljava/lang/String;->isEmpty()Z

    move-result v4

    if-eqz v4, :cond_6

    .line 504
    :cond_5
    invoke-static {}, Ljava/util/UUID;->randomUUID()Ljava/util/UUID;

    move-result-object v4

    invoke-virtual {v4}, Ljava/util/UUID;->toString()Ljava/lang/String;

    move-result-object v4

    move-object v1, v4

    .line 505
    invoke-virtual {v1}, Ljava/lang/String;->isEmpty()Z

    move-result v4

    if-eqz v4, :cond_6

    .line 506
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v8

    invoke-virtual {v4, v8, v9}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    move-object v1, v4

    .line 510
    :cond_6
    :goto_1
    invoke-virtual {p0, v5, v1, v2}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->sendResult(ILjava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 515
    .end local v0    # "tm":Landroid/telephony/TelephonyManager;
    .end local v1    # "deviceId":Ljava/lang/String;
    .end local v7    # "preferences":Landroid/content/SharedPreferences;
    :cond_7
    goto :goto_2

    .line 512
    :catch_0
    move-exception v0

    .line 513
    .local v0, "e":Ljava/lang/Exception;
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 514
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v3

    invoke-virtual {v1, v3, v4}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p0, v5, v1, v2}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->sendResult(ILjava/lang/String;Ljava/lang/String;)V

    .line 516
    .end local v0    # "e":Ljava/lang/Exception;
    :goto_2
    return-void
.end method
