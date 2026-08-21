.class public Lcom/bianfeng/ymnsdk/alipayopen/AlipayopenInterface;
.super Lcom/bianfeng/ymnsdk/feature/plugin/YmnPaymentInterface;
.source "AlipayopenInterface.java"


# annotations
.annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin;
    entrance = .enum Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Entrance;->ACTIVITY:Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Entrance;
    strategy = .enum Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Policy;->FORCE:Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Policy;
.end annotation


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 22
    invoke-direct {p0}, Lcom/bianfeng/ymnsdk/feature/plugin/YmnPaymentInterface;-><init>()V

    return-void
.end method


# virtual methods
.method public alp_open_iap(Ljava/util/LinkedHashMap;)V
    .locals 1
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "alp_open_iap"
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

    const-string v0, "alipayopen_pay"

    .line 104
    invoke-static {v0, p1}, Lcom/bianfeng/ymnsdk/YmnSdk;->callFunction(Ljava/lang/String;Ljava/util/LinkedHashMap;)V

    return-void
.end method

.method public getPluginId()Ljava/lang/String;
    .locals 1

    const-string v0, "30026"

    return-object v0
.end method

.method public getPluginName()Ljava/lang/String;
    .locals 1

    const-string v0, "alipayopen"

    return-object v0
.end method

.method public getPluginVersion()I
    .locals 1

    const/16 v0, 0x8

    return v0
.end method

.method public getSdkVersion()Ljava/lang/String;
    .locals 1

    const-string v0, "15.8.15"

    return-object v0
.end method

.method public onInit(Landroid/content/Context;)V
    .locals 1

    .line 47
    invoke-super {p0, p1}, Lcom/bianfeng/ymnsdk/feature/plugin/YmnPaymentInterface;->onInit(Landroid/content/Context;)V

    const/4 p1, 0x0

    const/16 v0, 0x64

    .line 48
    invoke-virtual {p0, v0, p1}, Lcom/bianfeng/ymnsdk/alipayopen/AlipayopenInterface;->sendResult(ILjava/lang/String;)V

    const/16 v0, 0xcd

    .line 49
    invoke-virtual {p0, v0, p1}, Lcom/bianfeng/ymnsdk/alipayopen/AlipayopenInterface;->sendResult(ILjava/lang/String;)V

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

    .line 54
    invoke-super {p0, p1}, Lcom/bianfeng/ymnsdk/feature/plugin/YmnPaymentInterface;->pay(Ljava/util/Map;)V

    const-string v0, "client_callback"

    .line 56
    invoke-interface {p1, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    .line 57
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_0

    const-string v0, "ext"

    .line 58
    invoke-interface {p1, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    move-object v0, p1

    check-cast v0, Ljava/lang/String;

    .line 68
    :cond_0
    :try_start_0
    new-instance p1, Lorg/json/JSONObject;

    invoke-direct {p1, v0}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    .line 69
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/YmnsdkTypeUtils;->isNewTrade()Z

    move-result v0

    if-eqz v0, :cond_1

    const-string v0, "token"

    .line 70
    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    goto :goto_0

    :cond_1
    const-string v0, "alipay_url"

    .line 72
    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    .line 74
    :goto_0
    new-instance v0, Ljava/lang/String;

    invoke-static {p1}, Lcom/alipayopen/sdk/util/Base64;->decode(Ljava/lang/String;)[B

    move-result-object p1

    invoke-direct {v0, p1}, Ljava/lang/String;-><init>([B)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 83
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/alipayopen/AlipayopenInterface;->getActivity()Landroid/app/Activity;

    move-result-object p1

    new-instance v1, Lcom/bianfeng/ymnsdk/alipayopen/AlipayopenInterface$1;

    invoke-direct {v1, p0}, Lcom/bianfeng/ymnsdk/alipayopen/AlipayopenInterface$1;-><init>(Lcom/bianfeng/ymnsdk/alipayopen/AlipayopenInterface;)V

    invoke-static {p1, v0, v1}, Lcom/alipayopen/sdk/PaySdk;->pay(Landroid/app/Activity;Ljava/lang/String;Lcom/alipayopen/sdk/OnPayListener;)V

    return-void

    :catch_0
    move-exception p1

    .line 76
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    const/16 p1, 0xc9

    const-string v0, "30002001|\u540e\u53f0\u8fd4\u56de\u6570\u636e\u51fa\u9519"

    .line 77
    invoke-virtual {p0, p1, v0}, Lcom/bianfeng/ymnsdk/alipayopen/AlipayopenInterface;->sendResult(ILjava/lang/String;)V

    return-void
.end method
