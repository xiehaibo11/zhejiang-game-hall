.class Lcom/sigmob/sdk/mraid2/b$a;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/sigmob/sdk/mraid2/b;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = "a"
.end annotation


# instance fields
.field private final a:Ljava/lang/ref/WeakReference;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/lang/ref/WeakReference<",
            "Lcom/sigmob/sdk/mraid2/b;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method public constructor <init>(Lcom/sigmob/sdk/mraid2/b;)V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    new-instance v0, Ljava/lang/ref/WeakReference;

    invoke-direct {v0, p1}, Ljava/lang/ref/WeakReference;-><init>(Ljava/lang/Object;)V

    iput-object v0, p0, Lcom/sigmob/sdk/mraid2/b$a;->a:Ljava/lang/ref/WeakReference;

    return-void
.end method


# virtual methods
.method public a()Lcom/sigmob/sdk/mraid2/b;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/mraid2/b$a;->a:Ljava/lang/ref/WeakReference;

    invoke-virtual {v0}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/sigmob/sdk/mraid2/b;

    return-object v0
.end method

.method public addDclog(Lorg/json/JSONObject;)Ljava/lang/String;
    .locals 5
    .annotation runtime Landroid/webkit/JavascriptInterface;
    .end annotation

    const-string v0, "_ac_type"

    const/4 v1, 0x0

    if-nez p1, :cond_0

    const/16 p1, 0x190

    :try_start_0
    const-string v0, "not params"

    invoke-static {p1, v0, v1}, Lcom/sigmob/sdk/mraid2/b;->a(ILjava/lang/String;Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    return-object p1

    :cond_0
    invoke-static {}, Lcom/sigmob/sdk/mraid2/b;->g()Ljava/lang/String;

    move-result-object v2

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "----------addDclog----------"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v2, v3}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    const-string v2, "data"

    invoke-virtual {p1, v2}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v2

    if-eqz v2, :cond_3

    invoke-virtual {v2, v0}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v3

    if-eqz v3, :cond_3

    invoke-virtual {v2, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    const-string v3, "vid"

    invoke-virtual {p1, v3}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0}, Lcom/sigmob/sdk/mraid2/b$a;->a()Lcom/sigmob/sdk/mraid2/b;

    move-result-object v3

    if-eqz v3, :cond_1

    invoke-virtual {p0}, Lcom/sigmob/sdk/mraid2/b$a;->a()Lcom/sigmob/sdk/mraid2/b;

    move-result-object v3

    invoke-virtual {v3, p1}, Lcom/sigmob/sdk/mraid2/b;->b(Ljava/lang/String;)Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object p1

    goto :goto_0

    :cond_1
    move-object p1, v1

    :goto_0
    if-nez p1, :cond_2

    invoke-virtual {p0}, Lcom/sigmob/sdk/mraid2/b$a;->a()Lcom/sigmob/sdk/mraid2/b;

    move-result-object v3

    invoke-static {v3}, Lcom/sigmob/sdk/mraid2/b;->c(Lcom/sigmob/sdk/mraid2/b;)Lcom/sigmob/sdk/base/models/LoadAdRequest;

    move-result-object v3

    goto :goto_1

    :cond_2
    move-object v3, v1

    :goto_1
    new-instance v4, Lcom/sigmob/sdk/mraid2/b$a$1;

    invoke-direct {v4, p0, v2}, Lcom/sigmob/sdk/mraid2/b$a$1;-><init>(Lcom/sigmob/sdk/mraid2/b$a;Lorg/json/JSONObject;)V

    invoke-static {v0, p1, v3, v4}, Lcom/sigmob/sdk/base/common/z;->a(Ljava/lang/String;Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/base/models/LoadAdRequest;Lcom/sigmob/sdk/base/common/z$a;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const/16 p1, 0xc8

    const-string v0, "add dc log success"

    invoke-static {p1, v0, v1}, Lcom/sigmob/sdk/mraid2/b;->a(ILjava/lang/String;Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    return-object p1

    :cond_3
    const/16 p1, 0x12c

    :try_start_1
    const-string v0, "_ac_type is empty"

    invoke-static {p1, v0, v1}, Lcom/sigmob/sdk/mraid2/b;->a(ILjava/lang/String;Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    return-object p1

    :catchall_0
    move-exception p1

    const/16 v0, 0x1f4

    invoke-virtual {p1}, Ljava/lang/Throwable;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, p1, v1}, Lcom/sigmob/sdk/mraid2/b;->a(ILjava/lang/String;Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    return-object p1
.end method

.method public func(Ljava/lang/String;)Ljava/lang/String;
    .locals 4
    .annotation runtime Landroid/webkit/JavascriptInterface;
    .end annotation

    const-string v0, "func"

    const/4 v1, 0x0

    :try_start_0
    new-instance v2, Lorg/json/JSONObject;

    invoke-direct {v2, p1}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-virtual {v2, v0}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result p1

    if-eqz p1, :cond_0

    invoke-virtual {v2, v0}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    goto :goto_0

    :cond_0
    move-object p1, v1

    :goto_0
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    const-string v0, ":"

    const-string v3, ""

    invoke-virtual {p1, v0, v3}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object p1

    new-instance v0, Lcom/czhj/sdk/common/utils/ReflectionUtil$MethodBuilder;

    invoke-direct {v0, p0, p1}, Lcom/czhj/sdk/common/utils/ReflectionUtil$MethodBuilder;-><init>(Ljava/lang/Object;Ljava/lang/String;)V

    const-class p1, Lorg/json/JSONObject;

    invoke-virtual {v0, p1, v2}, Lcom/czhj/sdk/common/utils/ReflectionUtil$MethodBuilder;->addParam(Ljava/lang/Class;Ljava/lang/Object;)Lcom/czhj/sdk/common/utils/ReflectionUtil$MethodBuilder;

    invoke-virtual {v0}, Lcom/czhj/sdk/common/utils/ReflectionUtil$MethodBuilder;->execute()Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/lang/String;

    return-object p1

    :cond_1
    const/16 p1, 0x190

    const-string v0, "func is empty"

    invoke-static {p1, v0, v1}, Lcom/sigmob/sdk/mraid2/b;->a(ILjava/lang/String;Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object p1

    :catchall_0
    move-exception p1

    const/16 v0, 0x1f4

    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, p1, v1}, Lcom/sigmob/sdk/mraid2/b;->a(ILjava/lang/String;Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    return-object p1
.end method

.method public getDeviceInfo()Ljava/lang/String;
    .locals 4
    .annotation runtime Landroid/webkit/JavascriptInterface;
    .end annotation

    :try_start_0
    invoke-static {}, Lcom/sigmob/sdk/mraid2/b;->g()Ljava/lang/String;

    move-result-object v0

    const-string v1, "---------getDeviceInfo----------"

    invoke-static {v0, v1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    const-string v1, "clientType"

    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->getDeviceModel()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "osVersion"

    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->getDeviceOsVersion()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "appVersion"

    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->getInstance()Lcom/czhj/sdk/common/ClientMetadata;

    move-result-object v2

    invoke-virtual {v2}, Lcom/czhj/sdk/common/ClientMetadata;->getAppVersion()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "deviceWidth"

    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->getInstance()Lcom/czhj/sdk/common/ClientMetadata;

    move-result-object v2

    invoke-virtual {v2}, Lcom/czhj/sdk/common/ClientMetadata;->getDisplayMetrics()Landroid/util/DisplayMetrics;

    move-result-object v2

    iget v2, v2, Landroid/util/DisplayMetrics;->widthPixels:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "deviceHeight"

    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->getInstance()Lcom/czhj/sdk/common/ClientMetadata;

    move-result-object v2

    invoke-virtual {v2}, Lcom/czhj/sdk/common/ClientMetadata;->getDisplayMetrics()Landroid/util/DisplayMetrics;

    move-result-object v2

    iget v2, v2, Landroid/util/DisplayMetrics;->heightPixels:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "screenDensity"

    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->getInstance()Lcom/czhj/sdk/common/ClientMetadata;

    move-result-object v2

    invoke-virtual {v2}, Lcom/czhj/sdk/common/ClientMetadata;->getDensityDpi()I

    move-result v2

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "networkType"

    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->getInstance()Lcom/czhj/sdk/common/ClientMetadata;

    move-result-object v2

    invoke-virtual {v2}, Lcom/czhj/sdk/common/ClientMetadata;->getActiveNetworkType()I

    move-result v2

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "pkgName"

    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->getInstance()Lcom/czhj/sdk/common/ClientMetadata;

    move-result-object v2

    invoke-virtual {v2}, Lcom/czhj/sdk/common/ClientMetadata;->getAppPackageName()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "userAgent"

    invoke-static {}, Lcom/czhj/sdk/common/network/Networking;->getUserAgent()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "uid"

    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->getUid()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "udid"

    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->getInstance()Lcom/czhj/sdk/common/ClientMetadata;

    move-result-object v2

    invoke-virtual {v2}, Lcom/czhj/sdk/common/ClientMetadata;->getAndroidId()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1}, Lorg/json/JSONObject;-><init>()V

    const-string v2, "imei"

    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->getInstance()Lcom/czhj/sdk/common/ClientMetadata;

    move-result-object v3

    invoke-virtual {v3}, Lcom/czhj/sdk/common/ClientMetadata;->getDeviceId()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v2, "androidId"

    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->getInstance()Lcom/czhj/sdk/common/ClientMetadata;

    move-result-object v3

    invoke-virtual {v3}, Lcom/czhj/sdk/common/ClientMetadata;->getAndroidId()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v2, "googleId"

    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->getInstance()Lcom/czhj/sdk/common/ClientMetadata;

    move-result-object v3

    invoke-virtual {v3}, Lcom/czhj/sdk/common/ClientMetadata;->getAdvertisingId()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v2, "oaid"

    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->getInstance()Lcom/czhj/sdk/common/ClientMetadata;

    move-result-object v3

    invoke-virtual {v3}, Lcom/czhj/sdk/common/ClientMetadata;->getOAID()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v2, "android"

    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object v0

    :catchall_0
    move-exception v0

    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    const/4 v0, 0x0

    return-object v0
.end method

.method public handleMacro(Lorg/json/JSONObject;)Ljava/lang/String;
    .locals 9
    .annotation runtime Landroid/webkit/JavascriptInterface;
    .end annotation

    const/4 v0, 0x0

    if-nez p1, :cond_0

    return-object v0

    :cond_0
    :try_start_0
    invoke-static {}, Lcom/sigmob/sdk/mraid2/b;->g()Ljava/lang/String;

    move-result-object v1

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "-----------handleMacro---------"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    const-string v1, "event"

    invoke-virtual {p1, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    const-string v2, "args"

    invoke-virtual {p1, v2}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object p1

    const-string v2, "key"

    invoke-virtual {p1, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    const-string v3, "value"

    invoke-virtual {p1, v3}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    const-string v4, "vid"

    invoke-virtual {p1, v4}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0}, Lcom/sigmob/sdk/mraid2/b$a;->a()Lcom/sigmob/sdk/mraid2/b;

    move-result-object v4

    if-eqz v4, :cond_1

    invoke-virtual {p0}, Lcom/sigmob/sdk/mraid2/b$a;->a()Lcom/sigmob/sdk/mraid2/b;

    move-result-object v4

    invoke-virtual {v4, p1}, Lcom/sigmob/sdk/mraid2/b;->b(Ljava/lang/String;)Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object p1

    goto :goto_0

    :cond_1
    move-object p1, v0

    :goto_0
    const/4 v4, -0x1

    invoke-virtual {v1}, Ljava/lang/String;->hashCode()I

    move-result v5

    const/4 v6, 0x3

    const/4 v7, 0x2

    const/4 v8, 0x1

    sparse-switch v5, :sswitch_data_0

    goto :goto_1

    :sswitch_0
    const-string v5, "getMacro"

    invoke-virtual {v1, v5}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    move v4, v8

    goto :goto_1

    :sswitch_1
    const-string v5, "removeMacro"

    invoke-virtual {v1, v5}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    move v4, v7

    goto :goto_1

    :sswitch_2
    const-string v5, "clearMacro"

    invoke-virtual {v1, v5}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    move v4, v6

    goto :goto_1

    :sswitch_3
    const-string v5, "addMacro"

    invoke-virtual {v1, v5}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    const/4 v4, 0x0

    :cond_2
    :goto_1
    if-eqz v4, :cond_b

    if-eq v4, v8, :cond_8

    if-eq v4, v7, :cond_5

    if-eq v4, v6, :cond_3

    goto/16 :goto_6

    :cond_3
    if-eqz p1, :cond_4

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getMacroCommon()Lcom/sigmob/sdk/base/models/SigMacroCommon;

    move-result-object p1

    :goto_2
    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->clearMacro()V

    goto :goto_6

    :cond_4
    invoke-static {}, Lcom/sigmob/sdk/Sigmob;->getInstance()Lcom/sigmob/sdk/Sigmob;

    move-result-object p1

    invoke-virtual {p1}, Lcom/sigmob/sdk/Sigmob;->getMacroCommon()Lcom/sigmob/sdk/base/models/SigMacroCommon;

    move-result-object p1

    goto :goto_2

    :cond_5
    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_6

    return-object v0

    :cond_6
    if-eqz p1, :cond_7

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getMacroCommon()Lcom/sigmob/sdk/base/models/SigMacroCommon;

    move-result-object p1

    :goto_3
    invoke-virtual {p1, v2}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->removeMarcoKey(Ljava/lang/String;)V

    goto :goto_6

    :cond_7
    invoke-static {}, Lcom/sigmob/sdk/Sigmob;->getInstance()Lcom/sigmob/sdk/Sigmob;

    move-result-object p1

    invoke-virtual {p1}, Lcom/sigmob/sdk/Sigmob;->getMacroCommon()Lcom/sigmob/sdk/base/models/SigMacroCommon;

    move-result-object p1

    goto :goto_3

    :cond_8
    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_9

    return-object v0

    :cond_9
    if-eqz p1, :cond_a

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getMacroCommon()Lcom/sigmob/sdk/base/models/SigMacroCommon;

    move-result-object p1

    invoke-virtual {p1, v2}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->getMarcoKey(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    return-object p1

    :cond_a
    invoke-static {}, Lcom/sigmob/sdk/Sigmob;->getInstance()Lcom/sigmob/sdk/Sigmob;

    move-result-object p1

    invoke-virtual {p1}, Lcom/sigmob/sdk/Sigmob;->getMacroCommon()Lcom/sigmob/sdk/base/models/SigMacroCommon;

    move-result-object p1

    invoke-virtual {p1, v2}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->getMarcoKey(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    return-object p1

    :cond_b
    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_e

    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_c

    goto :goto_5

    :cond_c
    if-eqz p1, :cond_d

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getMacroCommon()Lcom/sigmob/sdk/base/models/SigMacroCommon;

    move-result-object p1

    :goto_4
    invoke-virtual {p1, v2, v3}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->addMarcoKey(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_6

    :cond_d
    invoke-static {}, Lcom/sigmob/sdk/Sigmob;->getInstance()Lcom/sigmob/sdk/Sigmob;

    move-result-object p1

    invoke-virtual {p1}, Lcom/sigmob/sdk/Sigmob;->getMacroCommon()Lcom/sigmob/sdk/base/models/SigMacroCommon;

    move-result-object p1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_4

    :cond_e
    :goto_5
    return-object v0

    :catch_0
    move-exception p1

    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :goto_6
    return-object v0

    nop

    :sswitch_data_0
    .sparse-switch
        -0x4aaf9055 -> :sswitch_3
        -0x2cb42281 -> :sswitch_2
        -0x12859a58 -> :sswitch_1
        0x74cb4216 -> :sswitch_0
    .end sparse-switch
.end method

.method public postMessage(Ljava/lang/String;)V
    .locals 3
    .annotation runtime Landroid/webkit/JavascriptInterface;
    .end annotation

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    return-void

    :cond_0
    invoke-static {}, Lcom/sigmob/sdk/mraid2/b;->g()Ljava/lang/String;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "-----------postMessage---------"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    invoke-virtual {p0}, Lcom/sigmob/sdk/mraid2/b$a;->a()Lcom/sigmob/sdk/mraid2/b;

    move-result-object v0

    if-eqz v0, :cond_1

    invoke-static {v0}, Lcom/sigmob/sdk/mraid2/b;->a(Lcom/sigmob/sdk/mraid2/b;)Lcom/sigmob/sdk/mraid2/e;

    move-result-object v1

    if-eqz v1, :cond_1

    invoke-static {v0}, Lcom/sigmob/sdk/mraid2/b;->a(Lcom/sigmob/sdk/mraid2/b;)Lcom/sigmob/sdk/mraid2/e;

    move-result-object v1

    new-instance v2, Lcom/sigmob/sdk/mraid2/b$a$3;

    invoke-direct {v2, p0, v0, p1}, Lcom/sigmob/sdk/mraid2/b$a$3;-><init>(Lcom/sigmob/sdk/mraid2/b$a;Lcom/sigmob/sdk/mraid2/b;Ljava/lang/String;)V

    invoke-virtual {v1, v2}, Lcom/sigmob/sdk/mraid2/e;->post(Ljava/lang/Runnable;)Z

    :cond_1
    return-void
.end method

.method public storage(Ljava/lang/String;)Ljava/lang/String;
    .locals 11
    .annotation runtime Landroid/webkit/JavascriptInterface;
    .end annotation

    const/4 v0, 0x0

    :try_start_0
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_0

    return-object v0

    :cond_0
    invoke-static {}, Lcom/sigmob/sdk/mraid2/b;->g()Ljava/lang/String;

    move-result-object v1

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "-----------storage---------"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p1}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string p1, "event"

    invoke-virtual {v1, p1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    const-string v2, "args"

    invoke-virtual {v1, v2}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v1

    const-string v2, "type"

    invoke-virtual {v1, v2}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v2

    const-string v3, "key"

    invoke-virtual {v1, v3}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    const-string v4, "value"

    invoke-virtual {v1, v4}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    const/4 v4, 0x2

    const/4 v5, 0x1

    if-eq v2, v5, :cond_1

    if-ne v2, v4, :cond_a

    :cond_1
    invoke-static {}, Lcom/sigmob/sdk/mraid2/b;->h()Lcom/sigmob/sdk/mraid2/j;

    move-result-object v6

    if-nez v6, :cond_2

    new-instance v6, Lcom/sigmob/sdk/mraid2/j;

    invoke-virtual {p0}, Lcom/sigmob/sdk/mraid2/b$a;->a()Lcom/sigmob/sdk/mraid2/b;

    move-result-object v7

    invoke-static {v7}, Lcom/sigmob/sdk/mraid2/b;->a(Lcom/sigmob/sdk/mraid2/b;)Lcom/sigmob/sdk/mraid2/e;

    move-result-object v7

    invoke-virtual {v7}, Lcom/sigmob/sdk/mraid2/e;->getContext()Landroid/content/Context;

    move-result-object v7

    invoke-direct {v6, v7}, Lcom/sigmob/sdk/mraid2/j;-><init>(Landroid/content/Context;)V

    invoke-static {v6}, Lcom/sigmob/sdk/mraid2/b;->a(Lcom/sigmob/sdk/mraid2/j;)Lcom/sigmob/sdk/mraid2/j;

    :cond_2
    const/4 v6, -0x1

    invoke-virtual {p1}, Ljava/lang/String;->hashCode()I

    move-result v7

    const/4 v8, 0x5

    const/4 v9, 0x4

    const/4 v10, 0x3

    sparse-switch v7, :sswitch_data_0

    goto :goto_0

    :sswitch_0
    const-string v7, "setItem"

    invoke-virtual {p1, v7}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_3

    const/4 v6, 0x0

    goto :goto_0

    :sswitch_1
    const-string v7, "removeItem"

    invoke-virtual {p1, v7}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_3

    move v6, v4

    goto :goto_0

    :sswitch_2
    const-string v7, "clear"

    invoke-virtual {p1, v7}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_3

    move v6, v10

    goto :goto_0

    :sswitch_3
    const-string v7, "getItem"

    invoke-virtual {p1, v7}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_3

    move v6, v5

    goto :goto_0

    :sswitch_4
    const-string v7, "addEventListener"

    invoke-virtual {p1, v7}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_3

    move v6, v8

    goto :goto_0

    :sswitch_5
    const-string v7, "length"

    invoke-virtual {p1, v7}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_3

    move v6, v9

    :cond_3
    :goto_0
    if-eqz v6, :cond_9

    if-eq v6, v5, :cond_8

    if-eq v6, v4, :cond_7

    if-eq v6, v10, :cond_6

    if-eq v6, v9, :cond_5

    if-eq v6, v8, :cond_4

    goto :goto_1

    :cond_4
    invoke-static {}, Lcom/sigmob/sdk/mraid2/b;->h()Lcom/sigmob/sdk/mraid2/j;

    move-result-object p1

    new-instance v1, Lcom/sigmob/sdk/mraid2/b$a$2;

    invoke-direct {v1, p0}, Lcom/sigmob/sdk/mraid2/b$a$2;-><init>(Lcom/sigmob/sdk/mraid2/b$a;)V

    invoke-virtual {p1, v2, v3, v1}, Lcom/sigmob/sdk/mraid2/j;->a(ILjava/lang/String;Lcom/sigmob/sdk/mraid2/j$a;)V

    goto :goto_1

    :cond_5
    invoke-static {}, Lcom/sigmob/sdk/mraid2/b;->h()Lcom/sigmob/sdk/mraid2/j;

    move-result-object p1

    invoke-virtual {p1, v2}, Lcom/sigmob/sdk/mraid2/j;->b(I)I

    move-result p1

    invoke-static {p1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object p1

    return-object p1

    :cond_6
    invoke-static {}, Lcom/sigmob/sdk/mraid2/b;->h()Lcom/sigmob/sdk/mraid2/j;

    move-result-object p1

    invoke-virtual {p1, v2}, Lcom/sigmob/sdk/mraid2/j;->a(I)V

    goto :goto_1

    :cond_7
    invoke-static {}, Lcom/sigmob/sdk/mraid2/b;->h()Lcom/sigmob/sdk/mraid2/j;

    move-result-object p1

    invoke-virtual {p1, v2, v3}, Lcom/sigmob/sdk/mraid2/j;->b(ILjava/lang/String;)V

    goto :goto_1

    :cond_8
    invoke-static {}, Lcom/sigmob/sdk/mraid2/b;->h()Lcom/sigmob/sdk/mraid2/j;

    move-result-object p1

    invoke-virtual {p1, v2, v3}, Lcom/sigmob/sdk/mraid2/j;->a(ILjava/lang/String;)Ljava/lang/String;

    move-result-object p1

    return-object p1

    :cond_9
    invoke-static {}, Lcom/sigmob/sdk/mraid2/b;->h()Lcom/sigmob/sdk/mraid2/j;

    move-result-object p1

    invoke-virtual {p1, v2, v3, v1}, Lcom/sigmob/sdk/mraid2/j;->a(ILjava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_1

    :catch_0
    move-exception p1

    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_a
    :goto_1
    return-object v0

    nop

    :sswitch_data_0
    .sparse-switch
        -0x41f1c51a -> :sswitch_5
        -0x254d19b3 -> :sswitch_4
        -0x47f1c77 -> :sswitch_3
        0x5a5b64d -> :sswitch_2
        0x417605b7 -> :sswitch_1
        0x764baa95 -> :sswitch_0
    .end sparse-switch
.end method

.method public tracking(Lorg/json/JSONObject;)Ljava/lang/String;
    .locals 12
    .annotation runtime Landroid/webkit/JavascriptInterface;
    .end annotation

    const/4 v0, 0x0

    if-nez p1, :cond_0

    const/16 p1, 0x190

    :try_start_0
    const-string v1, "not params"

    invoke-static {p1, v1, v0}, Lcom/sigmob/sdk/mraid2/b;->a(ILjava/lang/String;Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    return-object p1

    :cond_0
    invoke-static {}, Lcom/sigmob/sdk/mraid2/b;->g()Ljava/lang/String;

    move-result-object v1

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "---------tracking----------"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    const-string v1, "event"

    invoke-virtual {p1, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    const-string v2, "urls"

    invoke-virtual {p1, v2}, Lorg/json/JSONObject;->optJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object v2

    const-string v3, "data"

    invoke-virtual {p1, v3}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const-string v3, ""

    const/4 v4, 0x0

    if-eqz p1, :cond_1

    :try_start_1
    const-string v5, "inQueue"

    invoke-virtual {p1, v5}, Lorg/json/JSONObject;->optBoolean(Ljava/lang/String;)Z

    move-result v5

    const-string v6, "statistic"

    invoke-virtual {p1, v6}, Lorg/json/JSONObject;->optBoolean(Ljava/lang/String;)Z

    move-result v6

    const-string v7, "retry"

    invoke-virtual {p1, v7}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v7

    const-string v8, "vid"

    invoke-virtual {p1, v8}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    goto :goto_0

    :cond_1
    move-object p1, v3

    move v5, v4

    move v6, v5

    move v7, v6

    :goto_0
    invoke-virtual {p0}, Lcom/sigmob/sdk/mraid2/b$a;->a()Lcom/sigmob/sdk/mraid2/b;

    move-result-object v8

    if-eqz v8, :cond_2

    invoke-virtual {p0}, Lcom/sigmob/sdk/mraid2/b$a;->a()Lcom/sigmob/sdk/mraid2/b;

    move-result-object v8

    invoke-virtual {v8, p1}, Lcom/sigmob/sdk/mraid2/b;->b(Ljava/lang/String;)Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object p1

    goto :goto_1

    :cond_2
    move-object p1, v0

    :goto_1
    if-eqz v2, :cond_5

    invoke-virtual {v2}, Lorg/json/JSONArray;->length()I

    move-result v8

    if-lez v8, :cond_5

    move v8, v4

    :goto_2
    invoke-virtual {v2}, Lorg/json/JSONArray;->length()I

    move-result v9

    if-ge v8, v9, :cond_4

    new-instance v9, Lcom/sigmob/sdk/base/common/g;

    invoke-virtual {v2, v8}, Lorg/json/JSONArray;->optString(I)Ljava/lang/String;

    move-result-object v10

    if-eqz p1, :cond_3

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getRequestId()Ljava/lang/String;

    move-result-object v11

    goto :goto_3

    :cond_3
    move-object v11, v3

    :goto_3
    invoke-direct {v9, v10, v1, v11}, Lcom/sigmob/sdk/base/common/g;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    invoke-static {v7}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v10

    invoke-virtual {v9, v10}, Lcom/sigmob/sdk/base/common/g;->a(Ljava/lang/Integer;)V

    const-string v10, "js"

    invoke-virtual {v9, v10}, Lcom/sigmob/sdk/base/common/g;->a(Ljava/lang/String;)V

    invoke-static {v9, p1, v4, v5, v6}, Lcom/sigmob/sdk/base/network/f;->a(Lcom/sigmob/sdk/base/common/g;Lcom/sigmob/sdk/base/models/BaseAdUnit;ZZZ)V

    add-int/lit8 v8, v8, 0x1

    goto :goto_2

    :cond_4
    const/16 p1, 0xc8

    const-string v1, "tracking success"

    invoke-static {p1, v1, v0}, Lcom/sigmob/sdk/mraid2/b;->a(ILjava/lang/String;Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    return-object p1

    :cond_5
    const/16 p1, 0x12c

    const-string v1, "urls is empty"

    invoke-static {p1, v1, v0}, Lcom/sigmob/sdk/mraid2/b;->a(ILjava/lang/String;Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    return-object p1

    :catchall_0
    move-exception p1

    const/16 v1, 0x1f4

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "unknown error: "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v1, p1, v0}, Lcom/sigmob/sdk/mraid2/b;->a(ILjava/lang/String;Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    return-object p1
.end method
