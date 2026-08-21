.class Lcom/sigmob/sdk/mraid/b$a;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/sigmob/sdk/mraid/b;
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
            "Lcom/sigmob/sdk/mraid/b;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method public constructor <init>(Lcom/sigmob/sdk/mraid/b;)V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    new-instance v0, Ljava/lang/ref/WeakReference;

    invoke-direct {v0, p1}, Ljava/lang/ref/WeakReference;-><init>(Ljava/lang/Object;)V

    iput-object v0, p0, Lcom/sigmob/sdk/mraid/b$a;->a:Ljava/lang/ref/WeakReference;

    return-void
.end method


# virtual methods
.method public a()Lcom/sigmob/sdk/mraid/b;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/b$a;->a:Ljava/lang/ref/WeakReference;

    invoke-virtual {v0}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/sigmob/sdk/mraid/b;

    return-object v0
.end method

.method public addMacro(Lorg/json/JSONObject;)Ljava/lang/String;
    .locals 5
    .annotation runtime Landroid/webkit/JavascriptInterface;
    .end annotation

    const-string v0, "value"

    const-string v1, "key"

    const/4 v2, 0x0

    :try_start_0
    invoke-virtual {p0}, Lcom/sigmob/sdk/mraid/b$a;->b()Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object v3

    invoke-virtual {p1, v1}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v4

    if-eqz v4, :cond_0

    invoke-virtual {p1, v1}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    goto :goto_0

    :cond_0
    move-object v1, v2

    :goto_0
    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v4

    if-eqz v4, :cond_1

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    goto :goto_1

    :cond_1
    move-object p1, v2

    :goto_1
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_3

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_2

    goto :goto_2

    :cond_2
    invoke-virtual {v3}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getMacroCommon()Lcom/sigmob/sdk/base/models/SigMacroCommon;

    move-result-object v0

    invoke-virtual {v0, v1, p1}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->addMarcoKey(Ljava/lang/String;Ljava/lang/String;)V

    const/16 p1, 0xc8

    const-string v0, "addMacro success"

    invoke-static {p1, v0, v2}, Lcom/sigmob/sdk/mraid/b;->a(ILjava/lang/String;Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    return-object p1

    :cond_3
    :goto_2
    const/16 p1, 0x12c

    const-string v0, "key or value is empty"

    invoke-static {p1, v0, v2}, Lcom/sigmob/sdk/mraid/b;->a(ILjava/lang/String;Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object p1

    :catchall_0
    move-exception p1

    const/16 v0, 0x1f4

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "addMacro add fail "

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, p1, v2}, Lcom/sigmob/sdk/mraid/b;->a(ILjava/lang/String;Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    return-object p1
.end method

.method public b()Lcom/sigmob/sdk/base/models/BaseAdUnit;
    .locals 1

    invoke-virtual {p0}, Lcom/sigmob/sdk/mraid/b$a;->a()Lcom/sigmob/sdk/mraid/b;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-static {v0}, Lcom/sigmob/sdk/mraid/b;->a(Lcom/sigmob/sdk/mraid/b;)Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object v0

    return-object v0

    :cond_0
    const/4 v0, 0x0

    return-object v0
.end method

.method public excuteRewardAdTrack(Lorg/json/JSONObject;)Ljava/lang/String;
    .locals 5
    .annotation runtime Landroid/webkit/JavascriptInterface;
    .end annotation

    const-string v0, "unknown error: "

    const/4 v1, 0x0

    :try_start_0
    invoke-virtual {p0}, Lcom/sigmob/sdk/mraid/b$a;->b()Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object v2

    const-string v3, "event"

    invoke-virtual {p1, v3}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    const/4 v3, 0x1

    invoke-static {v2, p1, v3}, Lcom/sigmob/sdk/base/network/f;->a(Lcom/sigmob/sdk/base/models/BaseAdUnit;Ljava/lang/String;Z)I

    move-result v2

    if-nez v2, :cond_0

    const/16 p1, 0xc8

    const-string v2, "excuteRewardAdTrack success"

    invoke-static {p1, v2, v1}, Lcom/sigmob/sdk/mraid/b;->a(ILjava/lang/String;Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    return-object p1

    :cond_0
    const/4 v3, -0x1

    const/16 v4, 0x12c

    if-ne v2, v3, :cond_1

    const-string p1, "event is empty"

    invoke-static {v4, p1, v1}, Lcom/sigmob/sdk/mraid/b;->a(ILjava/lang/String;Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    return-object p1

    :cond_1
    const/4 v3, -0x2

    if-ne v2, v3, :cond_2

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, " can\'t find in trackers"

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v4, p1, v1}, Lcom/sigmob/sdk/mraid/b;->a(ILjava/lang/String;Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    return-object p1

    :cond_2
    const/16 p1, 0x190

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {p1, v2, v1}, Lcom/sigmob/sdk/mraid/b;->a(ILjava/lang/String;Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object p1

    :catchall_0
    move-exception p1

    const/16 v2, 0x1f4

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v3, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v2, p1, v1}, Lcom/sigmob/sdk/mraid/b;->a(ILjava/lang/String;Ljava/lang/Object;)Ljava/lang/String;

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

    invoke-static {p1, v0, v1}, Lcom/sigmob/sdk/mraid/b;->a(ILjava/lang/String;Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object p1

    :catchall_0
    move-exception p1

    const/16 v0, 0x1f4

    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, p1, v1}, Lcom/sigmob/sdk/mraid/b;->a(ILjava/lang/String;Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    return-object p1
.end method

.method public getAppInfo(Lorg/json/JSONObject;)Ljava/lang/String;
    .locals 9
    .annotation runtime Landroid/webkit/JavascriptInterface;
    .end annotation

    const-string v0, "arguments"

    :try_start_0
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1}, Lorg/json/JSONObject;-><init>()V

    invoke-virtual {p0}, Lcom/sigmob/sdk/mraid/b$a;->b()Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object v2

    if-eqz p1, :cond_1

    if-eqz v2, :cond_1

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v3

    if-eqz v3, :cond_1

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->getJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object p1

    const/4 v0, 0x0

    move v3, v0

    :goto_0
    invoke-virtual {p1}, Lorg/json/JSONArray;->length()I

    move-result v4

    if-ge v3, v4, :cond_1

    invoke-virtual {p1, v3}, Lorg/json/JSONArray;->getString(I)Ljava/lang/String;

    move-result-object v4
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    const/4 v5, -0x1

    :try_start_1
    invoke-virtual {v4}, Ljava/lang/String;->hashCode()I

    move-result v6

    const/4 v7, 0x2

    const/4 v8, 0x1

    sparse-switch v6, :sswitch_data_0

    goto/16 :goto_1

    :sswitch_0
    const-string v6, "ad_source_channel"

    invoke-virtual {v4, v6}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v6

    if-eqz v6, :cond_0

    const/16 v5, 0x15

    goto/16 :goto_1

    :sswitch_1
    const-string v6, "product_id"

    invoke-virtual {v4, v6}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v6

    if-eqz v6, :cond_0

    const/16 v5, 0x1c

    goto/16 :goto_1

    :sswitch_2
    const-string v6, "expired_time"

    invoke-virtual {v4, v6}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v6

    if-eqz v6, :cond_0

    const/16 v5, 0x21

    goto/16 :goto_1

    :sswitch_3
    const-string v6, "placement_id"

    invoke-virtual {v4, v6}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v6

    if-eqz v6, :cond_0

    const/16 v5, 0x12

    goto/16 :goto_1

    :sswitch_4
    const-string v6, "adslot_id"

    invoke-virtual {v4, v6}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v6

    if-eqz v6, :cond_0

    const/16 v5, 0x16

    goto/16 :goto_1

    :sswitch_5
    const-string v6, "cust_id"

    invoke-virtual {v4, v6}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v6

    if-eqz v6, :cond_0

    const/16 v5, 0x1a

    goto/16 :goto_1

    :sswitch_6
    const-string v6, "clienttype"

    invoke-virtual {v4, v6}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v6

    if-eqz v6, :cond_0

    const/4 v5, 0x4

    goto/16 :goto_1

    :sswitch_7
    const-string v6, "android_id"

    invoke-virtual {v4, v6}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v6

    if-eqz v6, :cond_0

    move v5, v7

    goto/16 :goto_1

    :sswitch_8
    const-string v6, "os_version"

    invoke-virtual {v4, v6}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v6

    if-eqz v6, :cond_0

    const/4 v5, 0x7

    goto/16 :goto_1

    :sswitch_9
    const-string v6, "camp_id"

    invoke-virtual {v4, v6}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v6

    if-eqz v6, :cond_0

    const/16 v5, 0x19

    goto/16 :goto_1

    :sswitch_a
    const-string v6, "appid"

    invoke-virtual {v4, v6}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v6

    if-eqz v6, :cond_0

    const/16 v5, 0x13

    goto/16 :goto_1

    :sswitch_b
    const-string v6, "request_id"

    invoke-virtual {v4, v6}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v6

    if-eqz v6, :cond_0

    const/16 v5, 0x11

    goto/16 :goto_1

    :sswitch_c
    const-string v6, "imei"

    invoke-virtual {v4, v6}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v6

    if-eqz v6, :cond_0

    move v5, v8

    goto/16 :goto_1

    :sswitch_d
    const-string v6, "crid"

    invoke-virtual {v4, v6}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v6

    if-eqz v6, :cond_0

    const/16 v5, 0x18

    goto/16 :goto_1

    :sswitch_e
    const-string v6, "vid"

    invoke-virtual {v4, v6}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v6

    if-eqz v6, :cond_0

    const/16 v5, 0x17

    goto/16 :goto_1

    :sswitch_f
    const-string v6, "os"

    invoke-virtual {v4, v6}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v6

    if-eqz v6, :cond_0

    move v5, v0

    goto/16 :goto_1

    :sswitch_10
    const-string v6, "network_type"

    invoke-virtual {v4, v6}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v6

    if-eqz v6, :cond_0

    const/16 v5, 0xc

    goto/16 :goto_1

    :sswitch_11
    const-string v6, "screenangle"

    invoke-virtual {v4, v6}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v6

    if-eqz v6, :cond_0

    const/16 v5, 0xe

    goto/16 :goto_1

    :sswitch_12
    const-string v6, "is_override"

    invoke-virtual {v4, v6}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v6

    if-eqz v6, :cond_0

    const/16 v5, 0x1e

    goto/16 :goto_1

    :sswitch_13
    const-string v6, "sdk_version"

    invoke-virtual {v4, v6}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v6

    if-eqz v6, :cond_0

    const/4 v5, 0x6

    goto/16 :goto_1

    :sswitch_14
    const-string v6, "pkgname"

    invoke-virtual {v4, v6}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v6

    if-eqz v6, :cond_0

    const/16 v5, 0xd

    goto/16 :goto_1

    :sswitch_15
    const-string v6, "screen_density"

    invoke-virtual {v4, v6}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v6

    if-eqz v6, :cond_0

    const/16 v5, 0xb

    goto/16 :goto_1

    :sswitch_16
    const-string v6, "device_width"

    invoke-virtual {v4, v6}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v6

    if-eqz v6, :cond_0

    const/16 v5, 0x9

    goto/16 :goto_1

    :sswitch_17
    const-string v6, "creative_type"

    invoke-virtual {v4, v6}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v6

    if-eqz v6, :cond_0

    const/16 v5, 0xf

    goto/16 :goto_1

    :sswitch_18
    const-string v6, "app_version"

    invoke-virtual {v4, v6}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v6

    if-eqz v6, :cond_0

    const/4 v5, 0x5

    goto :goto_1

    :sswitch_19
    const-string v6, "forbiden_parse_landingpage"

    invoke-virtual {v4, v6}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v6

    if-eqz v6, :cond_0

    const/16 v5, 0x1f

    goto :goto_1

    :sswitch_1a
    const-string v6, "client_pixel"

    invoke-virtual {v4, v6}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v6

    if-eqz v6, :cond_0

    const/16 v5, 0x8

    goto :goto_1

    :sswitch_1b
    const-string v6, "ad_type"

    invoke-virtual {v4, v6}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v6

    if-eqz v6, :cond_0

    const/16 v5, 0x10

    goto :goto_1

    :sswitch_1c
    const-string v6, "device_height"

    invoke-virtual {v4, v6}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v6

    if-eqz v6, :cond_0

    const/16 v5, 0xa

    goto :goto_1

    :sswitch_1d
    const-string v6, "bid_price"

    invoke-virtual {v4, v6}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v6

    if-eqz v6, :cond_0

    const/16 v5, 0x1b

    goto :goto_1

    :sswitch_1e
    const-string v6, "google_aid"

    invoke-virtual {v4, v6}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v6

    if-eqz v6, :cond_0

    const/4 v5, 0x3

    goto :goto_1

    :sswitch_1f
    const-string v6, "settlement_price_enc"

    invoke-virtual {v4, v6}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v6

    if-eqz v6, :cond_0

    const/16 v5, 0x1d

    goto :goto_1

    :sswitch_20
    const-string v6, "display_orientation"

    invoke-virtual {v4, v6}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v6

    if-eqz v6, :cond_0

    const/16 v5, 0x20

    goto :goto_1

    :sswitch_21
    const-string v6, "ad_source_logo"

    invoke-virtual {v4, v6}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v6

    if-eqz v6, :cond_0

    const/16 v5, 0x14

    :cond_0
    :goto_1
    packed-switch v5, :pswitch_data_0

    goto/16 :goto_4

    :pswitch_0
    invoke-virtual {v2}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getAd()Lcom/sigmob/sdk/base/models/rtb/Ad;

    move-result-object v5

    iget-object v5, v5, Lcom/sigmob/sdk/base/models/rtb/Ad;->expired_time:Ljava/lang/Integer;

    :goto_2
    invoke-virtual {v1, v4, v5}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    goto/16 :goto_4

    :pswitch_1
    invoke-virtual {v2}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getAd()Lcom/sigmob/sdk/base/models/rtb/Ad;

    move-result-object v5

    iget-object v5, v5, Lcom/sigmob/sdk/base/models/rtb/Ad;->display_orientation:Ljava/lang/Integer;

    goto :goto_2

    :pswitch_2
    invoke-virtual {v2}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getAd()Lcom/sigmob/sdk/base/models/rtb/Ad;

    move-result-object v5

    iget-object v5, v5, Lcom/sigmob/sdk/base/models/rtb/Ad;->forbiden_parse_landingpage:Ljava/lang/Boolean;

    goto :goto_2

    :pswitch_3
    invoke-virtual {v2}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getAd()Lcom/sigmob/sdk/base/models/rtb/Ad;

    move-result-object v5

    iget-object v5, v5, Lcom/sigmob/sdk/base/models/rtb/Ad;->is_override:Ljava/lang/Integer;

    goto :goto_2

    :pswitch_4
    invoke-virtual {v2}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getAd()Lcom/sigmob/sdk/base/models/rtb/Ad;

    move-result-object v5

    iget-object v5, v5, Lcom/sigmob/sdk/base/models/rtb/Ad;->settlement_price_enc:Ljava/lang/String;

    goto :goto_2

    :pswitch_5
    invoke-virtual {v2}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getAd()Lcom/sigmob/sdk/base/models/rtb/Ad;

    move-result-object v5

    iget-object v5, v5, Lcom/sigmob/sdk/base/models/rtb/Ad;->product_id:Ljava/lang/String;

    goto :goto_2

    :pswitch_6
    invoke-virtual {v2}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getAd()Lcom/sigmob/sdk/base/models/rtb/Ad;

    move-result-object v5

    iget-object v5, v5, Lcom/sigmob/sdk/base/models/rtb/Ad;->bid_price:Ljava/lang/Integer;

    goto :goto_2

    :pswitch_7
    invoke-virtual {v2}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getAd()Lcom/sigmob/sdk/base/models/rtb/Ad;

    move-result-object v5

    iget-object v5, v5, Lcom/sigmob/sdk/base/models/rtb/Ad;->cust_id:Ljava/lang/String;

    goto :goto_2

    :pswitch_8
    invoke-virtual {v2}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getCamp_id()Ljava/lang/String;

    move-result-object v5

    goto :goto_2

    :pswitch_9
    invoke-virtual {v2}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getCrid()Ljava/lang/String;

    move-result-object v5

    goto :goto_2

    :pswitch_a
    invoke-virtual {v2}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getAd()Lcom/sigmob/sdk/base/models/rtb/Ad;

    move-result-object v5

    iget-object v5, v5, Lcom/sigmob/sdk/base/models/rtb/Ad;->vid:Ljava/lang/String;

    goto :goto_2

    :pswitch_b
    invoke-virtual {v2}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getadslot_id()Ljava/lang/String;

    move-result-object v5

    goto :goto_2

    :pswitch_c
    invoke-virtual {v2}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getAd_source_channel()Ljava/lang/String;

    move-result-object v5

    goto :goto_2

    :pswitch_d
    invoke-virtual {v2}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getAd_source_logo()Ljava/lang/String;

    move-result-object v5

    goto :goto_2

    :pswitch_e
    invoke-static {}, Lcom/sigmob/windad/WindAds;->sharedAds()Lcom/sigmob/windad/WindAds;

    move-result-object v5

    invoke-virtual {v5}, Lcom/sigmob/windad/WindAds;->getAppId()Ljava/lang/String;

    move-result-object v5

    goto :goto_2

    :pswitch_f
    invoke-virtual {v2}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getRequestId()Ljava/lang/String;

    move-result-object v5

    goto :goto_2

    :pswitch_10
    invoke-virtual {v2}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getAd_type()I

    move-result v5

    :goto_3
    invoke-virtual {v1, v4, v5}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    goto/16 :goto_4

    :pswitch_11
    invoke-virtual {v2}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getCreativeType()I

    move-result v5

    goto :goto_3

    :pswitch_12
    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->getInstance()Lcom/czhj/sdk/common/ClientMetadata;

    move-result-object v5

    invoke-virtual {v5}, Lcom/czhj/sdk/common/ClientMetadata;->getOrientationInt()Ljava/lang/Integer;

    move-result-object v5

    invoke-virtual {v5}, Ljava/lang/Integer;->intValue()I

    move-result v5

    sub-int/2addr v5, v8

    invoke-static {v5}, Ljava/lang/Math;->abs(I)I

    move-result v5

    mul-int/lit8 v5, v5, 0x5a

    goto :goto_3

    :pswitch_13
    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->getInstance()Lcom/czhj/sdk/common/ClientMetadata;

    move-result-object v5

    invoke-virtual {v5}, Lcom/czhj/sdk/common/ClientMetadata;->getAppPackageName()Ljava/lang/String;

    move-result-object v5

    goto/16 :goto_2

    :pswitch_14
    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->getInstance()Lcom/czhj/sdk/common/ClientMetadata;

    move-result-object v5

    invoke-virtual {v5}, Lcom/czhj/sdk/common/ClientMetadata;->getActiveNetworkType()I

    move-result v5

    goto :goto_3

    :pswitch_15
    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->getInstance()Lcom/czhj/sdk/common/ClientMetadata;

    move-result-object v5

    invoke-virtual {v5}, Lcom/czhj/sdk/common/ClientMetadata;->getDensityDpi()I

    move-result v5

    goto :goto_3

    :pswitch_16
    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->getInstance()Lcom/czhj/sdk/common/ClientMetadata;

    move-result-object v5

    invoke-virtual {v5}, Lcom/czhj/sdk/common/ClientMetadata;->getDeviceScreenHeightDip()Ljava/lang/Integer;

    move-result-object v5

    goto/16 :goto_2

    :pswitch_17
    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->getInstance()Lcom/czhj/sdk/common/ClientMetadata;

    move-result-object v5

    invoke-virtual {v5}, Lcom/czhj/sdk/common/ClientMetadata;->getDeviceScreenWidthDip()Ljava/lang/Integer;

    move-result-object v5

    goto/16 :goto_2

    :pswitch_18
    const-string v5, "%sx%s"

    new-array v6, v7, [Ljava/lang/Object;

    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->getInstance()Lcom/czhj/sdk/common/ClientMetadata;

    move-result-object v7

    invoke-virtual {v7}, Lcom/czhj/sdk/common/ClientMetadata;->getDisplayMetrics()Landroid/util/DisplayMetrics;

    move-result-object v7

    iget v7, v7, Landroid/util/DisplayMetrics;->widthPixels:I

    invoke-static {v7}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v7

    aput-object v7, v6, v0

    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->getInstance()Lcom/czhj/sdk/common/ClientMetadata;

    move-result-object v7

    invoke-virtual {v7}, Lcom/czhj/sdk/common/ClientMetadata;->getDisplayMetrics()Landroid/util/DisplayMetrics;

    move-result-object v7

    iget v7, v7, Landroid/util/DisplayMetrics;->heightPixels:I

    invoke-static {v7}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v7

    aput-object v7, v6, v8

    invoke-static {v5, v6}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v5

    goto/16 :goto_2

    :pswitch_19
    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->getDeviceOsVersion()Ljava/lang/String;

    move-result-object v5

    goto/16 :goto_2

    :pswitch_1a
    const-string v5, "4.9.0"

    goto/16 :goto_2

    :pswitch_1b
    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->getInstance()Lcom/czhj/sdk/common/ClientMetadata;

    move-result-object v5

    invoke-virtual {v5}, Lcom/czhj/sdk/common/ClientMetadata;->getAppVersion()Ljava/lang/String;

    move-result-object v5

    goto/16 :goto_2

    :pswitch_1c
    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->getDeviceModel()Ljava/lang/String;

    move-result-object v5

    goto/16 :goto_2

    :pswitch_1d
    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->getInstance()Lcom/czhj/sdk/common/ClientMetadata;

    move-result-object v5

    invoke-virtual {v5}, Lcom/czhj/sdk/common/ClientMetadata;->getAdvertisingId()Ljava/lang/String;

    move-result-object v5

    goto/16 :goto_2

    :pswitch_1e
    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->getInstance()Lcom/czhj/sdk/common/ClientMetadata;

    move-result-object v5

    invoke-virtual {v5}, Lcom/czhj/sdk/common/ClientMetadata;->getAndroidId()Ljava/lang/String;

    move-result-object v5

    goto/16 :goto_2

    :pswitch_1f
    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->getInstance()Lcom/czhj/sdk/common/ClientMetadata;

    move-result-object v5

    invoke-virtual {v5}, Lcom/czhj/sdk/common/ClientMetadata;->getDeviceId()Ljava/lang/String;

    move-result-object v5

    goto/16 :goto_2

    :pswitch_20
    invoke-virtual {v1, v4, v7}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :catchall_0
    :goto_4
    add-int/lit8 v3, v3, 0x1

    goto/16 :goto_0

    :cond_1
    const/16 p1, 0xc8

    :try_start_2
    const-string v0, "getAppInfo success "

    invoke-static {p1, v0, v1}, Lcom/sigmob/sdk/mraid/b;->a(ILjava/lang/String;Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    return-object p1

    :catchall_1
    move-exception p1

    const/16 v0, 0x1f4

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "getAppInfo error: "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const/4 v1, 0x0

    invoke-static {v0, p1, v1}, Lcom/sigmob/sdk/mraid/b;->a(ILjava/lang/String;Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    return-object p1

    nop

    :sswitch_data_0
    .sparse-switch
        -0x69eac2cd -> :sswitch_21
        -0x5ed4a62d -> :sswitch_20
        -0x5e3e7eb2 -> :sswitch_1f
        -0x5b7bbdca -> :sswitch_1e
        -0x5006e079 -> :sswitch_1d
        -0x4d3b3cd0 -> :sswitch_1c
        -0x44ada62a -> :sswitch_1b
        -0x41261aee -> :sswitch_1a
        -0x36c286e8 -> :sswitch_19
        -0x35c17346 -> :sswitch_18
        -0x29e2b236 -> :sswitch_17
        -0x22b0e963 -> :sswitch_16
        -0x21df2feb -> :sswitch_15
        -0x1ed099a9 -> :sswitch_14
        -0x16745a2d -> :sswitch_13
        -0xc3890bf -> :sswitch_12
        -0x277e419 -> :sswitch_11
        -0x128e555 -> :sswitch_10
        0xde4 -> :sswitch_f
        0x1c811 -> :sswitch_e
        0x2eb9ca -> :sswitch_d
        0x3160c8 -> :sswitch_c
        0x23640cb -> :sswitch_b
        0x58b82fc -> :sswitch_a
        0x20c35b99 -> :sswitch_9
        0x281aad7d -> :sswitch_8
        0x2b17f0eb -> :sswitch_7
        0x41c4a585 -> :sswitch_6
        0x433aa687 -> :sswitch_5
        0x43edf579 -> :sswitch_4
        0x48fa38b5 -> :sswitch_3
        0x55ae13a7 -> :sswitch_2
        0x687cca6b -> :sswitch_1
        0x693f787b -> :sswitch_0
    .end sparse-switch

    :pswitch_data_0
    .packed-switch 0x0
        :pswitch_20
        :pswitch_1f
        :pswitch_1e
        :pswitch_1d
        :pswitch_1c
        :pswitch_1b
        :pswitch_1a
        :pswitch_19
        :pswitch_18
        :pswitch_17
        :pswitch_16
        :pswitch_15
        :pswitch_14
        :pswitch_13
        :pswitch_12
        :pswitch_11
        :pswitch_10
        :pswitch_f
        :pswitch_b
        :pswitch_e
        :pswitch_d
        :pswitch_c
        :pswitch_b
        :pswitch_a
        :pswitch_9
        :pswitch_8
        :pswitch_7
        :pswitch_6
        :pswitch_5
        :pswitch_4
        :pswitch_3
        :pswitch_2
        :pswitch_1
        :pswitch_0
    .end packed-switch
.end method

.method public hello(Lorg/json/JSONObject;)Ljava/lang/String;
    .locals 0
    .annotation runtime Landroid/webkit/JavascriptInterface;
    .end annotation

    :try_start_0
    invoke-virtual {p1}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object p1

    :catchall_0
    const/4 p1, 0x0

    return-object p1
.end method

.method public javascriptAddDcLog(Lorg/json/JSONObject;)Ljava/lang/String;
    .locals 4
    .annotation runtime Landroid/webkit/JavascriptInterface;
    .end annotation

    const-string v0, "_ac_type"

    const/4 v1, 0x0

    if-nez p1, :cond_0

    const/16 p1, 0x190

    :try_start_0
    const-string v0, "not params"

    invoke-static {p1, v0, v1}, Lcom/sigmob/sdk/mraid/b;->a(ILjava/lang/String;Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    return-object p1

    :catchall_0
    move-exception p1

    goto :goto_0

    :cond_0
    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v2

    if-eqz v2, :cond_1

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0}, Lcom/sigmob/sdk/mraid/b$a;->b()Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object v2

    new-instance v3, Lcom/sigmob/sdk/mraid/b$a$1;

    invoke-direct {v3, p0, p1}, Lcom/sigmob/sdk/mraid/b$a$1;-><init>(Lcom/sigmob/sdk/mraid/b$a;Lorg/json/JSONObject;)V

    invoke-static {v0, v2, v1, v3}, Lcom/sigmob/sdk/base/common/z;->a(Ljava/lang/String;Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/base/models/LoadAdRequest;Lcom/sigmob/sdk/base/common/z$a;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const/16 p1, 0xc8

    const-string v0, "add dc log success"

    invoke-static {p1, v0, v1}, Lcom/sigmob/sdk/mraid/b;->a(ILjava/lang/String;Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    return-object p1

    :cond_1
    const/16 p1, 0x12c

    :try_start_1
    const-string v0, "_ac_type is empty"

    invoke-static {p1, v0, v1}, Lcom/sigmob/sdk/mraid/b;->a(ILjava/lang/String;Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    return-object p1

    :goto_0
    const/16 v0, 0x1f4

    invoke-virtual {p1}, Ljava/lang/Throwable;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, p1, v1}, Lcom/sigmob/sdk/mraid/b;->a(ILjava/lang/String;Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    return-object p1
.end method

.method public mraidJsLoaded()Ljava/lang/String;
    .locals 2
    .annotation runtime Landroid/webkit/JavascriptInterface;
    .end annotation

    invoke-virtual {p0}, Lcom/sigmob/sdk/mraid/b$a;->a()Lcom/sigmob/sdk/mraid/b;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-static {v0}, Lcom/sigmob/sdk/mraid/b;->c(Lcom/sigmob/sdk/mraid/b;)Lcom/sigmob/sdk/mraid/b$b;

    move-result-object v1

    if-eqz v1, :cond_0

    invoke-static {v0}, Lcom/sigmob/sdk/mraid/b;->c(Lcom/sigmob/sdk/mraid/b;)Lcom/sigmob/sdk/mraid/b$b;

    move-result-object v0

    invoke-interface {v0}, Lcom/sigmob/sdk/mraid/b$b;->b()V

    :cond_0
    const/4 v0, 0x0

    return-object v0
.end method

.method public postMessage(Ljava/lang/String;)V
    .locals 3
    .annotation runtime Landroid/webkit/JavascriptInterface;
    .end annotation

    invoke-virtual {p0}, Lcom/sigmob/sdk/mraid/b$a;->a()Lcom/sigmob/sdk/mraid/b;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "postMessage: raw "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    if-eqz v0, :cond_0

    invoke-static {v0}, Lcom/sigmob/sdk/mraid/b;->e(Lcom/sigmob/sdk/mraid/b;)Lcom/sigmob/sdk/mraid/o;

    move-result-object v1

    new-instance v2, Lcom/sigmob/sdk/mraid/b$a$2;

    invoke-direct {v2, p0, p1, v0}, Lcom/sigmob/sdk/mraid/b$a$2;-><init>(Lcom/sigmob/sdk/mraid/b$a;Ljava/lang/String;Lcom/sigmob/sdk/mraid/b;)V

    invoke-virtual {v1, v2}, Lcom/sigmob/sdk/mraid/o;->post(Ljava/lang/Runnable;)Z

    :cond_0
    return-void
.end method

.method public tracking(Lorg/json/JSONObject;)Ljava/lang/String;
    .locals 8
    .annotation runtime Landroid/webkit/JavascriptInterface;
    .end annotation

    const/4 v0, 0x0

    :try_start_0
    invoke-virtual {p0}, Lcom/sigmob/sdk/mraid/b$a;->b()Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object v1

    const-string v2, "event"

    invoke-virtual {p1, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    const-string v3, "urls"

    invoke-virtual {p1, v3}, Lorg/json/JSONObject;->optJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object p1

    if-eqz p1, :cond_1

    invoke-virtual {p1}, Lorg/json/JSONArray;->length()I

    move-result v3

    if-lez v3, :cond_1

    const/4 v3, 0x0

    move v4, v3

    :goto_0
    invoke-virtual {p1}, Lorg/json/JSONArray;->length()I

    move-result v5

    if-ge v4, v5, :cond_0

    new-instance v5, Lcom/sigmob/sdk/base/common/g;

    invoke-virtual {p1, v4}, Lorg/json/JSONArray;->optString(I)Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getRequestId()Ljava/lang/String;

    move-result-object v7

    invoke-direct {v5, v6, v2, v7}, Lcom/sigmob/sdk/base/common/g;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {v1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getTrackingRetryNum()I

    move-result v6

    invoke-static {v6}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v6

    invoke-virtual {v5, v6}, Lcom/sigmob/sdk/base/common/g;->a(Ljava/lang/Integer;)V

    const-string v6, "js"

    invoke-virtual {v5, v6}, Lcom/sigmob/sdk/base/common/g;->a(Ljava/lang/String;)V

    invoke-static {v5, v1, v3}, Lcom/sigmob/sdk/base/network/f;->a(Lcom/sigmob/sdk/base/common/g;Lcom/sigmob/sdk/base/models/BaseAdUnit;Z)V

    add-int/lit8 v4, v4, 0x1

    goto :goto_0

    :cond_0
    const/16 p1, 0xc8

    const-string v1, "tracking success"

    invoke-static {p1, v1, v0}, Lcom/sigmob/sdk/mraid/b;->a(ILjava/lang/String;Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    return-object p1

    :cond_1
    const/16 p1, 0x12c

    const-string v1, "urls is empty"

    invoke-static {p1, v1, v0}, Lcom/sigmob/sdk/mraid/b;->a(ILjava/lang/String;Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

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

    invoke-static {v1, p1, v0}, Lcom/sigmob/sdk/mraid/b;->a(ILjava/lang/String;Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    return-object p1
.end method
