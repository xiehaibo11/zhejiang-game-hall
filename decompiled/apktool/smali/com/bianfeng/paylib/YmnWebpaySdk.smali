.class public Lcom/bianfeng/paylib/YmnWebpaySdk;
.super Ljava/lang/Object;
.source "YmnWebpaySdk.java"


# static fields
.field private static ymnWebpaySdk:Lcom/bianfeng/paylib/YmnWebpaySdk;


# instance fields
.field private isPayWithSdk:Z

.field private mContext:Landroid/app/Activity;

.field private map:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private netIpSuccess:Ljava/lang/String;

.field private requestNetIpCallBack:Lcom/bianfeng/paylib/action/RequestNetIpCallBack;

.field private webpaysdkCallback:Lcom/bianfeng/paylib/ui/WebpaysdkCallback;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 34
    new-instance v0, Lcom/bianfeng/paylib/YmnWebpaySdk;

    invoke-direct {v0}, Lcom/bianfeng/paylib/YmnWebpaySdk;-><init>()V

    sput-object v0, Lcom/bianfeng/paylib/YmnWebpaySdk;->ymnWebpaySdk:Lcom/bianfeng/paylib/YmnWebpaySdk;

    return-void
.end method

.method private constructor <init>()V
    .locals 2

    .line 36
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const-string v0, ""

    .line 35
    iput-object v0, p0, Lcom/bianfeng/paylib/YmnWebpaySdk;->netIpSuccess:Ljava/lang/String;

    .line 44
    new-instance v0, Lcom/bianfeng/paylib/YmnWebpaySdk$1;

    invoke-direct {v0, p0}, Lcom/bianfeng/paylib/YmnWebpaySdk$1;-><init>(Lcom/bianfeng/paylib/YmnWebpaySdk;)V

    iput-object v0, p0, Lcom/bianfeng/paylib/YmnWebpaySdk;->webpaysdkCallback:Lcom/bianfeng/paylib/ui/WebpaysdkCallback;

    .line 69
    new-instance v0, Lcom/bianfeng/paylib/YmnWebpaySdk$2;

    invoke-direct {v0, p0}, Lcom/bianfeng/paylib/YmnWebpaySdk$2;-><init>(Lcom/bianfeng/paylib/YmnWebpaySdk;)V

    iput-object v0, p0, Lcom/bianfeng/paylib/YmnWebpaySdk;->requestNetIpCallBack:Lcom/bianfeng/paylib/action/RequestNetIpCallBack;

    const/4 v0, 0x1

    .line 83
    iput-boolean v0, p0, Lcom/bianfeng/paylib/YmnWebpaySdk;->isPayWithSdk:Z

    .line 37
    invoke-static {}, Lcom/bianfeng/paylib/action/RequestNetIpAction;->getInstance()Lcom/bianfeng/paylib/action/RequestNetIpAction;

    move-result-object v0

    iget-object v1, p0, Lcom/bianfeng/paylib/YmnWebpaySdk;->requestNetIpCallBack:Lcom/bianfeng/paylib/action/RequestNetIpCallBack;

    invoke-virtual {v0, v1}, Lcom/bianfeng/paylib/action/RequestNetIpAction;->setCallBack(Lcom/bianfeng/paylib/action/RequestNetIpCallBack;)Lcom/bianfeng/paylib/action/RequestNetIpAction;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/paylib/action/RequestNetIpAction;->GetNetIp()V

    return-void
.end method

.method static synthetic access$000(Lcom/bianfeng/paylib/YmnWebpaySdk;Ljava/lang/String;)V
    .locals 0

    .line 33
    invoke-direct {p0, p1}, Lcom/bianfeng/paylib/YmnWebpaySdk;->onNext(Ljava/lang/String;)V

    return-void
.end method

.method static synthetic access$100(Lcom/bianfeng/paylib/YmnWebpaySdk;)Landroid/app/Activity;
    .locals 0

    .line 33
    iget-object p0, p0, Lcom/bianfeng/paylib/YmnWebpaySdk;->mContext:Landroid/app/Activity;

    return-object p0
.end method

.method static synthetic access$202(Lcom/bianfeng/paylib/YmnWebpaySdk;Ljava/lang/String;)Ljava/lang/String;
    .locals 0

    .line 33
    iput-object p1, p0, Lcom/bianfeng/paylib/YmnWebpaySdk;->netIpSuccess:Ljava/lang/String;

    return-object p1
.end method

.method static synthetic access$300(Lcom/bianfeng/paylib/YmnWebpaySdk;Ljava/util/Map;)V
    .locals 0

    .line 33
    invoke-direct {p0, p1}, Lcom/bianfeng/paylib/YmnWebpaySdk;->toPay(Ljava/util/Map;)V

    return-void
.end method

.method public static getInstance()Lcom/bianfeng/paylib/YmnWebpaySdk;
    .locals 1

    .line 41
    sget-object v0, Lcom/bianfeng/paylib/YmnWebpaySdk;->ymnWebpaySdk:Lcom/bianfeng/paylib/YmnWebpaySdk;

    return-object v0
.end method

.method private joinUrl(Ljava/util/Map;)Ljava/lang/String;
    .locals 4
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;)",
            "Ljava/lang/String;"
        }
    .end annotation

    .line 113
    new-instance v0, Ljava/lang/StringBuffer;

    invoke-direct {v0}, Ljava/lang/StringBuffer;-><init>()V

    .line 114
    invoke-interface {p1}, Ljava/util/Map;->entrySet()Ljava/util/Set;

    move-result-object p1

    invoke-interface {p1}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :goto_0
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/util/Map$Entry;

    .line 115
    invoke-interface {v1}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    .line 116
    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-eqz v3, :cond_0

    goto :goto_0

    :cond_0
    const-string v3, "&"

    .line 119
    invoke-virtual {v0, v3}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    invoke-interface {v1}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    const-string v1, "="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    goto :goto_0

    .line 121
    :cond_1
    invoke-virtual {v0}, Ljava/lang/StringBuffer;->toString()Ljava/lang/String;

    move-result-object p1

    return-object p1
.end method

.method private onNext(Ljava/lang/String;)V
    .locals 3

    .line 126
    iget-boolean v0, p0, Lcom/bianfeng/paylib/YmnWebpaySdk;->isPayWithSdk:Z

    if-nez v0, :cond_0

    .line 127
    iget-object v0, p0, Lcom/bianfeng/paylib/YmnWebpaySdk;->netIpSuccess:Ljava/lang/String;

    const-string v1, "true"

    invoke-virtual {v1, v0}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 128
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getToast()Lcom/bianfeng/utilslib/ToastUtils;

    move-result-object p1

    iget-object v0, p0, Lcom/bianfeng/paylib/YmnWebpaySdk;->mContext:Landroid/app/Activity;

    const-string v1, "\u652f\u4ed8\u5931\u8d25\uff0c\u7f51\u7edc\u5f02\u5e38"

    invoke-virtual {p1, v0, v1}, Lcom/bianfeng/utilslib/ToastUtils;->show(Landroid/app/Activity;Ljava/lang/String;)V

    return-void

    .line 132
    :cond_0
    new-instance v0, Lcom/bianfeng/paylib/action/RequestOrderAction;

    iget-object v1, p0, Lcom/bianfeng/paylib/YmnWebpaySdk;->mContext:Landroid/app/Activity;

    invoke-direct {v0, v1}, Lcom/bianfeng/paylib/action/RequestOrderAction;-><init>(Landroid/content/Context;)V

    .line 133
    iget-object v1, p0, Lcom/bianfeng/paylib/YmnWebpaySdk;->map:Ljava/util/Map;

    const-string v2, "plugin_id"

    invoke-interface {v1, v2, p1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 134
    iget-object p1, p0, Lcom/bianfeng/paylib/YmnWebpaySdk;->map:Ljava/util/Map;

    invoke-virtual {v0, p1}, Lcom/bianfeng/paylib/action/RequestOrderAction;->putReqData(Ljava/util/Map;)V

    .line 135
    new-instance p1, Lcom/bianfeng/paylib/YmnWebpaySdk$3;

    invoke-direct {p1, p0}, Lcom/bianfeng/paylib/YmnWebpaySdk$3;-><init>(Lcom/bianfeng/paylib/YmnWebpaySdk;)V

    invoke-virtual {v0, p1}, Lcom/bianfeng/paylib/action/RequestOrderAction;->addObserver(Ljava/util/Observer;)V

    .line 148
    invoke-virtual {v0}, Lcom/bianfeng/paylib/action/RequestOrderAction;->actionStart()V

    return-void
.end method

.method private toPay(Ljava/util/Map;)V
    .locals 8
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    const-string v0, "\u652f\u4ed8\u5f02\u5e38\uff0c\u8bf7\u8054\u7cfb\u5ba2\u670d 1"

    const-string v1, "client_type"

    const-string v2, "type_fail"

    const-string v3, "\u4e0b\u5355\u54cd\u5e94"

    const-string v4, "type_request_order"

    .line 157
    :try_start_0
    invoke-static {}, Lcom/bianfeng/utilslib/Logger;->getInstance()Lcom/bianfeng/utilslib/Logger;

    move-result-object v5

    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    const-string v7, "\u652f\u4ed8\u4fe1\u606f-->"

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {}, Lcom/bianfeng/thridlibrary/GsonUtils;->getInstance()Lcom/bianfeng/thridlibrary/GsonUtils;

    move-result-object v7

    invoke-virtual {v7, p1}, Lcom/bianfeng/thridlibrary/GsonUtils;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v5, v6}, Lcom/bianfeng/utilslib/Logger;->i(Ljava/lang/String;)I

    const-string v5, "client_callback"

    .line 159
    invoke-interface {p1, v5}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/lang/String;

    .line 160
    new-instance v5, Lorg/json/JSONObject;

    invoke-direct {v5, p1}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const/4 v6, -0x1

    .line 162
    invoke-virtual {v5, v1}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v7

    if-eqz v7, :cond_0

    invoke-virtual {v5, v1}, Lorg/json/JSONObject;->getInt(Ljava/lang/String;)I

    move-result v6

    :cond_0
    if-nez v6, :cond_1

    .line 164
    iget-object v0, p0, Lcom/bianfeng/paylib/YmnWebpaySdk;->mContext:Landroid/app/Activity;

    invoke-static {v0, p1}, Lcom/bianfeng/paylib/utils/WxPayUtils;->pay(Landroid/content/Context;Ljava/lang/String;)V

    goto :goto_0

    :cond_1
    const/4 v1, 0x1

    if-ne v1, v6, :cond_2

    .line 166
    invoke-static {}, Lcom/bianfeng/thridlibrary/ThridSdk;->getGson()Lcom/bianfeng/thridlibrary/GsonUtils;

    move-result-object v0

    const-class v1, Lcom/bianfeng/paylib/entity/YmnWxWebpayEntity;

    invoke-virtual {v0, p1, v1}, Lcom/bianfeng/thridlibrary/GsonUtils;->fromJson(Ljava/lang/String;Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/bianfeng/paylib/entity/YmnWxWebpayEntity;

    .line 167
    invoke-static {}, Lcom/bianfeng/paylib/ui/WebpaysdkApi;->getInstance()Lcom/bianfeng/paylib/ui/WebpaysdkApi;

    move-result-object v0

    iget-object v1, p0, Lcom/bianfeng/paylib/YmnWebpaySdk;->mContext:Landroid/app/Activity;

    invoke-virtual {v0, v1, p1}, Lcom/bianfeng/paylib/ui/WebpaysdkApi;->startWxWebpay(Landroid/content/Context;Lcom/bianfeng/paylib/entity/YmnWxWebpayEntity;)V

    goto :goto_0

    :cond_2
    const/4 v1, 0x2

    if-ne v1, v6, :cond_3

    .line 169
    invoke-virtual {p0, v4, v3}, Lcom/bianfeng/paylib/YmnWebpaySdk;->payCallback(Ljava/lang/String;Ljava/lang/String;)V

    .line 170
    iget-object v0, p0, Lcom/bianfeng/paylib/YmnWebpaySdk;->mContext:Landroid/app/Activity;

    invoke-static {v0, p1}, Lcom/bianfeng/paylib/utils/AliPayUtils;->pay(Landroid/app/Activity;Ljava/lang/String;)V

    goto :goto_0

    :cond_3
    const/4 v1, 0x3

    if-ne v1, v6, :cond_4

    .line 172
    invoke-static {}, Lcom/bianfeng/thridlibrary/ThridSdk;->getGson()Lcom/bianfeng/thridlibrary/GsonUtils;

    move-result-object v0

    const-class v1, Lcom/bianfeng/paylib/entity/YmnAliWebpayEntity;

    invoke-virtual {v0, p1, v1}, Lcom/bianfeng/thridlibrary/GsonUtils;->fromJson(Ljava/lang/String;Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/bianfeng/paylib/entity/YmnAliWebpayEntity;

    .line 173
    invoke-static {}, Lcom/bianfeng/paylib/ui/WebpaysdkApi;->getInstance()Lcom/bianfeng/paylib/ui/WebpaysdkApi;

    move-result-object v0

    iget-object v1, p0, Lcom/bianfeng/paylib/YmnWebpaySdk;->mContext:Landroid/app/Activity;

    invoke-virtual {v0, v1, p1}, Lcom/bianfeng/paylib/ui/WebpaysdkApi;->startAliWebpay(Landroid/content/Context;Lcom/bianfeng/paylib/entity/YmnAliWebpayEntity;)V

    goto :goto_0

    .line 175
    :cond_4
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getToast()Lcom/bianfeng/utilslib/ToastUtils;

    move-result-object p1

    iget-object v1, p0, Lcom/bianfeng/paylib/YmnWebpaySdk;->mContext:Landroid/app/Activity;

    invoke-virtual {p1, v1, v0}, Lcom/bianfeng/utilslib/ToastUtils;->show(Landroid/app/Activity;Ljava/lang/String;)V

    .line 176
    invoke-virtual {p0, v2, v0}, Lcom/bianfeng/paylib/YmnWebpaySdk;->payCallback(Ljava/lang/String;Ljava/lang/String;)V

    .line 177
    invoke-virtual {p0, v4, v3}, Lcom/bianfeng/paylib/YmnWebpaySdk;->payCallback(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 180
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    const-string p1, "\u652f\u4ed8\u5f02\u5e38\uff0c\u8bf7\u8054\u7cfb\u5ba2\u670d 2"

    .line 181
    invoke-virtual {p0, v2, p1}, Lcom/bianfeng/paylib/YmnWebpaySdk;->payCallback(Ljava/lang/String;Ljava/lang/String;)V

    .line 182
    invoke-virtual {p0, v4, v3}, Lcom/bianfeng/paylib/YmnWebpaySdk;->payCallback(Ljava/lang/String;Ljava/lang/String;)V

    .line 183
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getToast()Lcom/bianfeng/utilslib/ToastUtils;

    move-result-object v0

    iget-object v1, p0, Lcom/bianfeng/paylib/YmnWebpaySdk;->mContext:Landroid/app/Activity;

    invoke-virtual {v0, v1, p1}, Lcom/bianfeng/utilslib/ToastUtils;->show(Landroid/app/Activity;Ljava/lang/String;)V

    :goto_0
    return-void
.end method


# virtual methods
.method public init(Landroid/app/Activity;)V
    .locals 0

    .line 91
    iput-object p1, p0, Lcom/bianfeng/paylib/YmnWebpaySdk;->mContext:Landroid/app/Activity;

    return-void
.end method

.method public pay(Ljava/util/Map;)V
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    .line 97
    invoke-static {p1}, Lcom/bianfeng/paylib/utils/PayExtMapUtils;->updataOrder(Ljava/util/Map;)Ljava/util/Map;

    move-result-object v0

    iput-object v0, p0, Lcom/bianfeng/paylib/YmnWebpaySdk;->map:Ljava/util/Map;

    .line 98
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getLogger()Lcom/bianfeng/utilslib/Logger;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "order:"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Lcom/bianfeng/utilslib/Logger;->i(Ljava/lang/String;)I

    .line 99
    invoke-static {}, Lcom/bianfeng/paylib/ui/WebpaysdkApi;->getInstance()Lcom/bianfeng/paylib/ui/WebpaysdkApi;

    move-result-object p1

    iget-object v0, p0, Lcom/bianfeng/paylib/YmnWebpaySdk;->webpaysdkCallback:Lcom/bianfeng/paylib/ui/WebpaysdkCallback;

    invoke-virtual {p1, v0}, Lcom/bianfeng/paylib/ui/WebpaysdkApi;->setCallback(Lcom/bianfeng/paylib/ui/WebpaysdkCallback;)V

    .line 100
    invoke-static {}, Lcom/bianfeng/paylib/ui/WebpaysdkApi;->getInstance()Lcom/bianfeng/paylib/ui/WebpaysdkApi;

    move-result-object p1

    iget-object v0, p0, Lcom/bianfeng/paylib/YmnWebpaySdk;->mContext:Landroid/app/Activity;

    invoke-virtual {p1, v0}, Lcom/bianfeng/paylib/ui/WebpaysdkApi;->startPayment(Landroid/content/Context;)V

    return-void
.end method

.method public payCallback(Ljava/lang/String;Ljava/lang/String;)V
    .locals 2

    .line 189
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    const-string v1, "type"

    .line 190
    invoke-interface {v0, v1, p1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string p1, "msg"

    .line 191
    invoke-interface {v0, p1, p2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 192
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getReflexCall()Lcom/bianfeng/utilslib/reflex/ReflexCallbackUtils;

    move-result-object p1

    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getClassNameSet()Lcom/bianfeng/utilslib/reflex/ClassNameSetUtils;

    move-result-object p2

    invoke-virtual {p2}, Lcom/bianfeng/utilslib/reflex/ClassNameSetUtils;->gePayCallback()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, p2, v0}, Lcom/bianfeng/utilslib/reflex/ReflexCallbackUtils;->onCallWithObject(Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;

    return-void
.end method

.method public payWeb(Ljava/util/Map;)V
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    .line 104
    invoke-static {p1}, Lcom/bianfeng/paylib/utils/PayExtMapUtils;->updataOrder(Ljava/util/Map;)Ljava/util/Map;

    move-result-object v0

    iput-object v0, p0, Lcom/bianfeng/paylib/YmnWebpaySdk;->map:Ljava/util/Map;

    .line 105
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getLogger()Lcom/bianfeng/utilslib/Logger;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "payWeb order:"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/bianfeng/utilslib/Logger;->i(Ljava/lang/String;)I

    .line 106
    invoke-static {}, Lcom/bianfeng/paylib/ui/WebpaysdkApi;->getInstance()Lcom/bianfeng/paylib/ui/WebpaysdkApi;

    move-result-object v0

    iget-object v1, p0, Lcom/bianfeng/paylib/YmnWebpaySdk;->webpaysdkCallback:Lcom/bianfeng/paylib/ui/WebpaysdkCallback;

    invoke-virtual {v0, v1}, Lcom/bianfeng/paylib/ui/WebpaysdkApi;->setCallback(Lcom/bianfeng/paylib/ui/WebpaysdkCallback;)V

    .line 108
    invoke-direct {p0, p1}, Lcom/bianfeng/paylib/YmnWebpaySdk;->joinUrl(Ljava/util/Map;)Ljava/lang/String;

    move-result-object p1

    .line 109
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getLogger()Lcom/bianfeng/utilslib/Logger;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "payWeb data:"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/bianfeng/utilslib/Logger;->i(Ljava/lang/String;)I

    .line 110
    invoke-static {}, Lcom/bianfeng/paylib/ui/WebpaysdkApi;->getInstance()Lcom/bianfeng/paylib/ui/WebpaysdkApi;

    move-result-object v0

    iget-object v1, p0, Lcom/bianfeng/paylib/YmnWebpaySdk;->mContext:Landroid/app/Activity;

    invoke-virtual {v0, v1, p1}, Lcom/bianfeng/paylib/ui/WebpaysdkApi;->startPaymentWeb(Landroid/content/Context;Ljava/lang/String;)V

    return-void
.end method

.method public setPayWithWeb()Lcom/bianfeng/paylib/YmnWebpaySdk;
    .locals 1

    const/4 v0, 0x0

    .line 86
    iput-boolean v0, p0, Lcom/bianfeng/paylib/YmnWebpaySdk;->isPayWithSdk:Z

    return-object p0
.end method
