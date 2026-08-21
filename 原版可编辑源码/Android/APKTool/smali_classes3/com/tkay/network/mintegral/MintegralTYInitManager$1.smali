.class final Lcom/tkay/network/mintegral/MintegralTYInitManager$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/network/mintegral/MintegralTYInitManager;->initSDK(Landroid/content/Context;Ljava/util/Map;Lcom/tkay/core/api/MediationInitCallback;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Ljava/util/Map;

.field final synthetic b:Landroid/content/Context;

.field final synthetic c:Lcom/tkay/core/api/MediationInitCallback;

.field final synthetic d:Lcom/tkay/network/mintegral/MintegralTYInitManager;


# direct methods
.method constructor <init>(Lcom/tkay/network/mintegral/MintegralTYInitManager;Ljava/util/Map;Landroid/content/Context;Lcom/tkay/core/api/MediationInitCallback;)V
    .locals 0

    .line 107
    iput-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYInitManager$1;->d:Lcom/tkay/network/mintegral/MintegralTYInitManager;

    iput-object p2, p0, Lcom/tkay/network/mintegral/MintegralTYInitManager$1;->a:Ljava/util/Map;

    iput-object p3, p0, Lcom/tkay/network/mintegral/MintegralTYInitManager$1;->b:Landroid/content/Context;

    iput-object p4, p0, Lcom/tkay/network/mintegral/MintegralTYInitManager$1;->c:Lcom/tkay/core/api/MediationInitCallback;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 11

    .line 110
    iget-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYInitManager$1;->a:Ljava/util/Map;

    const-string v1, "appid"

    invoke-interface {v0, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    .line 111
    iget-object v1, p0, Lcom/tkay/network/mintegral/MintegralTYInitManager$1;->a:Ljava/util/Map;

    const-string v2, "appkey"

    invoke-interface {v1, v2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    .line 113
    iget-object v2, p0, Lcom/tkay/network/mintegral/MintegralTYInitManager$1;->a:Ljava/util/Map;

    const-string v3, "wechat_app_id"

    invoke-interface {v2, v3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    if-eqz v2, :cond_0

    .line 115
    invoke-virtual {v2}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v2

    goto :goto_0

    :cond_0
    const-string v2, ""

    .line 118
    :goto_0
    iget-object v3, p0, Lcom/tkay/network/mintegral/MintegralTYInitManager$1;->a:Ljava/util/Map;

    const-string v4, "tkay_local"

    invoke-interface {v3, v4}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v3

    const/4 v4, 0x1

    const/4 v5, 0x0

    if-eqz v3, :cond_1

    .line 119
    iget-object v3, p0, Lcom/tkay/network/mintegral/MintegralTYInitManager$1;->d:Lcom/tkay/network/mintegral/MintegralTYInitManager;

    invoke-static {v3, v0}, Lcom/tkay/network/mintegral/MintegralTYInitManager;->a(Lcom/tkay/network/mintegral/MintegralTYInitManager;Ljava/lang/String;)Ljava/lang/String;

    .line 120
    iget-object v3, p0, Lcom/tkay/network/mintegral/MintegralTYInitManager$1;->d:Lcom/tkay/network/mintegral/MintegralTYInitManager;

    invoke-static {v3, v1}, Lcom/tkay/network/mintegral/MintegralTYInitManager;->b(Lcom/tkay/network/mintegral/MintegralTYInitManager;Ljava/lang/String;)Ljava/lang/String;

    goto :goto_1

    .line 121
    :cond_1
    iget-object v3, p0, Lcom/tkay/network/mintegral/MintegralTYInitManager$1;->d:Lcom/tkay/network/mintegral/MintegralTYInitManager;

    invoke-static {v3}, Lcom/tkay/network/mintegral/MintegralTYInitManager;->a(Lcom/tkay/network/mintegral/MintegralTYInitManager;)Ljava/lang/String;

    move-result-object v3

    if-eqz v3, :cond_3

    iget-object v3, p0, Lcom/tkay/network/mintegral/MintegralTYInitManager$1;->d:Lcom/tkay/network/mintegral/MintegralTYInitManager;

    invoke-static {v3}, Lcom/tkay/network/mintegral/MintegralTYInitManager;->b(Lcom/tkay/network/mintegral/MintegralTYInitManager;)Ljava/lang/String;

    move-result-object v3

    if-eqz v3, :cond_3

    iget-object v3, p0, Lcom/tkay/network/mintegral/MintegralTYInitManager$1;->d:Lcom/tkay/network/mintegral/MintegralTYInitManager;

    invoke-static {v3}, Lcom/tkay/network/mintegral/MintegralTYInitManager;->a(Lcom/tkay/network/mintegral/MintegralTYInitManager;)Ljava/lang/String;

    move-result-object v3

    invoke-static {v3, v0}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v3

    if-eqz v3, :cond_2

    iget-object v3, p0, Lcom/tkay/network/mintegral/MintegralTYInitManager$1;->d:Lcom/tkay/network/mintegral/MintegralTYInitManager;

    invoke-static {v3}, Lcom/tkay/network/mintegral/MintegralTYInitManager;->b(Lcom/tkay/network/mintegral/MintegralTYInitManager;)Ljava/lang/String;

    move-result-object v3

    invoke-static {v3, v1}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_3

    .line 122
    :cond_2
    iget-object v3, p0, Lcom/tkay/network/mintegral/MintegralTYInitManager$1;->d:Lcom/tkay/network/mintegral/MintegralTYInitManager;

    invoke-virtual {v3}, Lcom/tkay/network/mintegral/MintegralTYInitManager;->getNetworkName()Ljava/lang/String;

    move-result-object v6

    iget-object v7, p0, Lcom/tkay/network/mintegral/MintegralTYInitManager$1;->a:Ljava/util/Map;

    const/4 v8, 0x2

    new-array v8, v8, [Ljava/lang/String;

    iget-object v9, p0, Lcom/tkay/network/mintegral/MintegralTYInitManager$1;->d:Lcom/tkay/network/mintegral/MintegralTYInitManager;

    invoke-static {v9}, Lcom/tkay/network/mintegral/MintegralTYInitManager;->a(Lcom/tkay/network/mintegral/MintegralTYInitManager;)Ljava/lang/String;

    move-result-object v9

    aput-object v9, v8, v5

    iget-object v9, p0, Lcom/tkay/network/mintegral/MintegralTYInitManager$1;->d:Lcom/tkay/network/mintegral/MintegralTYInitManager;

    invoke-static {v9}, Lcom/tkay/network/mintegral/MintegralTYInitManager;->b(Lcom/tkay/network/mintegral/MintegralTYInitManager;)Ljava/lang/String;

    move-result-object v9

    aput-object v9, v8, v4

    invoke-static {v3, v6, v7, v8}, Lcom/tkay/network/mintegral/MintegralTYInitManager;->a(Lcom/tkay/network/mintegral/MintegralTYInitManager;Ljava/lang/String;Ljava/util/Map;[Ljava/lang/String;)V

    .line 123
    iget-object v3, p0, Lcom/tkay/network/mintegral/MintegralTYInitManager$1;->d:Lcom/tkay/network/mintegral/MintegralTYInitManager;

    const/4 v6, 0x0

    invoke-static {v3, v6}, Lcom/tkay/network/mintegral/MintegralTYInitManager;->a(Lcom/tkay/network/mintegral/MintegralTYInitManager;Ljava/lang/String;)Ljava/lang/String;

    .line 124
    iget-object v3, p0, Lcom/tkay/network/mintegral/MintegralTYInitManager$1;->d:Lcom/tkay/network/mintegral/MintegralTYInitManager;

    invoke-static {v3, v6}, Lcom/tkay/network/mintegral/MintegralTYInitManager;->b(Lcom/tkay/network/mintegral/MintegralTYInitManager;Ljava/lang/String;)Ljava/lang/String;

    .line 127
    :cond_3
    :goto_1
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_12

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_12

    .line 129
    :try_start_0
    invoke-static {}, Lcom/mbridge/msdk/out/MBridgeSDKFactory;->getMBridgeSDK()Lcom/mbridge/msdk/system/a;

    move-result-object v3

    .line 130
    iget-object v6, p0, Lcom/tkay/network/mintegral/MintegralTYInitManager$1;->d:Lcom/tkay/network/mintegral/MintegralTYInitManager;

    invoke-static {v6}, Lcom/tkay/network/mintegral/MintegralTYInitManager;->c(Lcom/tkay/network/mintegral/MintegralTYInitManager;)Ljava/lang/String;

    move-result-object v6

    invoke-static {v6}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v6
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const-string v7, "authority_serial_id"

    const-string v8, "authority_device_id"

    const-string v9, "authority_general_data"

    if-nez v6, :cond_a

    :try_start_1
    iget-object v6, p0, Lcom/tkay/network/mintegral/MintegralTYInitManager$1;->d:Lcom/tkay/network/mintegral/MintegralTYInitManager;

    invoke-static {v6}, Lcom/tkay/network/mintegral/MintegralTYInitManager;->d(Lcom/tkay/network/mintegral/MintegralTYInitManager;)Ljava/lang/String;

    move-result-object v6

    invoke-static {v6}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v6

    if-nez v6, :cond_a

    iget-object v6, p0, Lcom/tkay/network/mintegral/MintegralTYInitManager$1;->d:Lcom/tkay/network/mintegral/MintegralTYInitManager;

    invoke-static {v6}, Lcom/tkay/network/mintegral/MintegralTYInitManager;->c(Lcom/tkay/network/mintegral/MintegralTYInitManager;)Ljava/lang/String;

    move-result-object v6

    invoke-static {v6, v0}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v6

    if-eqz v6, :cond_a

    iget-object v6, p0, Lcom/tkay/network/mintegral/MintegralTYInitManager$1;->d:Lcom/tkay/network/mintegral/MintegralTYInitManager;

    invoke-static {v6}, Lcom/tkay/network/mintegral/MintegralTYInitManager;->d(Lcom/tkay/network/mintegral/MintegralTYInitManager;)Ljava/lang/String;

    move-result-object v6

    invoke-static {v6, v1}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v6

    if-nez v6, :cond_4

    goto :goto_5

    .line 165
    :cond_4
    iget-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYInitManager$1;->d:Lcom/tkay/network/mintegral/MintegralTYInitManager;

    invoke-static {v0}, Lcom/tkay/network/mintegral/MintegralTYInitManager;->e(Lcom/tkay/network/mintegral/MintegralTYInitManager;)Lcom/tkay/network/mintegral/MintegralTYCustomController;

    move-result-object v0

    if-eqz v0, :cond_8

    .line 166
    iget-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYInitManager$1;->b:Landroid/content/Context;

    iget-object v1, p0, Lcom/tkay/network/mintegral/MintegralTYInitManager$1;->d:Lcom/tkay/network/mintegral/MintegralTYInitManager;

    invoke-static {v1}, Lcom/tkay/network/mintegral/MintegralTYInitManager;->e(Lcom/tkay/network/mintegral/MintegralTYInitManager;)Lcom/tkay/network/mintegral/MintegralTYCustomController;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/network/mintegral/MintegralTYCustomController;->getAuthorityGeneralData()Z

    move-result v1

    if-eqz v1, :cond_5

    move v1, v4

    goto :goto_2

    :cond_5
    move v1, v5

    :goto_2
    invoke-interface {v3, v0, v9, v1}, Lcom/mbridge/msdk/MBridgeSDK;->setUserPrivateInfoType(Landroid/content/Context;Ljava/lang/String;I)V

    .line 167
    iget-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYInitManager$1;->b:Landroid/content/Context;

    iget-object v1, p0, Lcom/tkay/network/mintegral/MintegralTYInitManager$1;->d:Lcom/tkay/network/mintegral/MintegralTYInitManager;

    invoke-static {v1}, Lcom/tkay/network/mintegral/MintegralTYInitManager;->e(Lcom/tkay/network/mintegral/MintegralTYInitManager;)Lcom/tkay/network/mintegral/MintegralTYCustomController;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/network/mintegral/MintegralTYCustomController;->getAuthorityDeviceID()Z

    move-result v1

    if-eqz v1, :cond_6

    move v1, v4

    goto :goto_3

    :cond_6
    move v1, v5

    :goto_3
    invoke-interface {v3, v0, v8, v1}, Lcom/mbridge/msdk/MBridgeSDK;->setUserPrivateInfoType(Landroid/content/Context;Ljava/lang/String;I)V

    .line 168
    iget-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYInitManager$1;->b:Landroid/content/Context;

    iget-object v1, p0, Lcom/tkay/network/mintegral/MintegralTYInitManager$1;->d:Lcom/tkay/network/mintegral/MintegralTYInitManager;

    invoke-static {v1}, Lcom/tkay/network/mintegral/MintegralTYInitManager;->e(Lcom/tkay/network/mintegral/MintegralTYInitManager;)Lcom/tkay/network/mintegral/MintegralTYCustomController;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/network/mintegral/MintegralTYCustomController;->getAuthoritySerialID()Z

    move-result v1

    if-eqz v1, :cond_7

    goto :goto_4

    :cond_7
    move v4, v5

    :goto_4
    invoke-interface {v3, v0, v7, v4}, Lcom/mbridge/msdk/MBridgeSDK;->setUserPrivateInfoType(Landroid/content/Context;Ljava/lang/String;I)V

    .line 170
    :cond_8
    iget-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYInitManager$1;->d:Lcom/tkay/network/mintegral/MintegralTYInitManager;

    invoke-static {v0, v3}, Lcom/tkay/network/mintegral/MintegralTYInitManager;->a(Lcom/tkay/network/mintegral/MintegralTYInitManager;Lcom/mbridge/msdk/MBridgeSDK;)V

    .line 171
    iget-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYInitManager$1;->c:Lcom/tkay/core/api/MediationInitCallback;

    if-eqz v0, :cond_9

    .line 172
    iget-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYInitManager$1;->c:Lcom/tkay/core/api/MediationInitCallback;

    invoke-interface {v0}, Lcom/tkay/core/api/MediationInitCallback;->onSuccess()V

    :cond_9
    return-void

    :cond_a
    :goto_5
    const-string v6, "Y+H6DFttYrPQYcIeicKwJQKQYrN="

    .line 131
    invoke-static {v6}, Lcom/mbridge/msdk/out/ChannelManager;->setChannel(Ljava/lang/String;)V

    .line 133
    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v6

    if-nez v6, :cond_b

    .line 135
    invoke-interface {v3, v0, v1, v2}, Lcom/mbridge/msdk/MBridgeSDK;->getMBConfigurationMap(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/util/Map;

    move-result-object v2

    goto :goto_6

    .line 137
    :cond_b
    invoke-interface {v3, v0, v1}, Lcom/mbridge/msdk/MBridgeSDK;->getMBConfigurationMap(Ljava/lang/String;Ljava/lang/String;)Ljava/util/Map;

    move-result-object v2

    .line 140
    :goto_6
    iget-object v6, p0, Lcom/tkay/network/mintegral/MintegralTYInitManager$1;->d:Lcom/tkay/network/mintegral/MintegralTYInitManager;

    invoke-static {v6}, Lcom/tkay/network/mintegral/MintegralTYInitManager;->e(Lcom/tkay/network/mintegral/MintegralTYInitManager;)Lcom/tkay/network/mintegral/MintegralTYCustomController;

    move-result-object v6

    if-eqz v6, :cond_f

    .line 141
    iget-object v6, p0, Lcom/tkay/network/mintegral/MintegralTYInitManager$1;->b:Landroid/content/Context;

    iget-object v10, p0, Lcom/tkay/network/mintegral/MintegralTYInitManager$1;->d:Lcom/tkay/network/mintegral/MintegralTYInitManager;

    invoke-static {v10}, Lcom/tkay/network/mintegral/MintegralTYInitManager;->e(Lcom/tkay/network/mintegral/MintegralTYInitManager;)Lcom/tkay/network/mintegral/MintegralTYCustomController;

    move-result-object v10

    invoke-virtual {v10}, Lcom/tkay/network/mintegral/MintegralTYCustomController;->getAuthorityGeneralData()Z

    move-result v10

    if-eqz v10, :cond_c

    move v10, v4

    goto :goto_7

    :cond_c
    move v10, v5

    :goto_7
    invoke-interface {v3, v6, v9, v10}, Lcom/mbridge/msdk/MBridgeSDK;->setUserPrivateInfoType(Landroid/content/Context;Ljava/lang/String;I)V

    .line 142
    iget-object v6, p0, Lcom/tkay/network/mintegral/MintegralTYInitManager$1;->b:Landroid/content/Context;

    iget-object v9, p0, Lcom/tkay/network/mintegral/MintegralTYInitManager$1;->d:Lcom/tkay/network/mintegral/MintegralTYInitManager;

    invoke-static {v9}, Lcom/tkay/network/mintegral/MintegralTYInitManager;->e(Lcom/tkay/network/mintegral/MintegralTYInitManager;)Lcom/tkay/network/mintegral/MintegralTYCustomController;

    move-result-object v9

    invoke-virtual {v9}, Lcom/tkay/network/mintegral/MintegralTYCustomController;->getAuthorityDeviceID()Z

    move-result v9

    if-eqz v9, :cond_d

    move v9, v4

    goto :goto_8

    :cond_d
    move v9, v5

    :goto_8
    invoke-interface {v3, v6, v8, v9}, Lcom/mbridge/msdk/MBridgeSDK;->setUserPrivateInfoType(Landroid/content/Context;Ljava/lang/String;I)V

    .line 143
    iget-object v6, p0, Lcom/tkay/network/mintegral/MintegralTYInitManager$1;->b:Landroid/content/Context;

    iget-object v8, p0, Lcom/tkay/network/mintegral/MintegralTYInitManager$1;->d:Lcom/tkay/network/mintegral/MintegralTYInitManager;

    invoke-static {v8}, Lcom/tkay/network/mintegral/MintegralTYInitManager;->e(Lcom/tkay/network/mintegral/MintegralTYInitManager;)Lcom/tkay/network/mintegral/MintegralTYCustomController;

    move-result-object v8

    invoke-virtual {v8}, Lcom/tkay/network/mintegral/MintegralTYCustomController;->getAuthoritySerialID()Z

    move-result v8

    if-eqz v8, :cond_e

    goto :goto_9

    :cond_e
    move v4, v5

    :goto_9
    invoke-interface {v3, v6, v7, v4}, Lcom/mbridge/msdk/MBridgeSDK;->setUserPrivateInfoType(Landroid/content/Context;Ljava/lang/String;I)V

    .line 146
    :cond_f
    iget-object v4, p0, Lcom/tkay/network/mintegral/MintegralTYInitManager$1;->b:Landroid/content/Context;

    invoke-interface {v3, v2, v4}, Lcom/mbridge/msdk/MBridgeSDK;->init(Ljava/util/Map;Landroid/content/Context;)V

    const-string v2, "app_coppa_switch"

    .line 149
    iget-object v4, p0, Lcom/tkay/network/mintegral/MintegralTYInitManager$1;->a:Ljava/util/Map;

    invoke-interface {v4, v2}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v4

    if-eqz v4, :cond_10

    .line 150
    iget-object v4, p0, Lcom/tkay/network/mintegral/MintegralTYInitManager$1;->a:Ljava/util/Map;

    invoke-static {v4, v2}, Lcom/tkay/core/api/TYInitMediation;->getBooleanFromMap(Ljava/util/Map;Ljava/lang/String;)Z

    move-result v2

    .line 152
    iget-object v4, p0, Lcom/tkay/network/mintegral/MintegralTYInitManager$1;->b:Landroid/content/Context;

    invoke-interface {v3, v4, v2}, Lcom/mbridge/msdk/MBridgeSDK;->setCoppaStatus(Landroid/content/Context;Z)V

    .line 154
    :cond_10
    iget-object v2, p0, Lcom/tkay/network/mintegral/MintegralTYInitManager$1;->d:Lcom/tkay/network/mintegral/MintegralTYInitManager;

    invoke-static {v2, v0}, Lcom/tkay/network/mintegral/MintegralTYInitManager;->c(Lcom/tkay/network/mintegral/MintegralTYInitManager;Ljava/lang/String;)Ljava/lang/String;

    .line 155
    iget-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYInitManager$1;->d:Lcom/tkay/network/mintegral/MintegralTYInitManager;

    invoke-static {v0, v1}, Lcom/tkay/network/mintegral/MintegralTYInitManager;->d(Lcom/tkay/network/mintegral/MintegralTYInitManager;Ljava/lang/String;)Ljava/lang/String;

    .line 157
    iget-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYInitManager$1;->d:Lcom/tkay/network/mintegral/MintegralTYInitManager;

    invoke-static {v0, v3}, Lcom/tkay/network/mintegral/MintegralTYInitManager;->a(Lcom/tkay/network/mintegral/MintegralTYInitManager;Lcom/mbridge/msdk/MBridgeSDK;)V

    .line 159
    iget-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYInitManager$1;->d:Lcom/tkay/network/mintegral/MintegralTYInitManager;

    iget-object v1, p0, Lcom/tkay/network/mintegral/MintegralTYInitManager$1;->b:Landroid/content/Context;

    invoke-static {v0, v1}, Lcom/tkay/network/mintegral/MintegralTYInitManager;->a(Lcom/tkay/network/mintegral/MintegralTYInitManager;Landroid/content/Context;)V

    .line 161
    iget-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYInitManager$1;->c:Lcom/tkay/core/api/MediationInitCallback;

    if-eqz v0, :cond_11

    .line 162
    iget-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYInitManager$1;->c:Lcom/tkay/core/api/MediationInitCallback;

    invoke-interface {v0}, Lcom/tkay/core/api/MediationInitCallback;->onSuccess()V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :cond_11
    return-void

    :catchall_0
    move-exception v0

    .line 176
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    .line 178
    iget-object v1, p0, Lcom/tkay/network/mintegral/MintegralTYInitManager$1;->c:Lcom/tkay/core/api/MediationInitCallback;

    if-eqz v1, :cond_12

    .line 179
    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-interface {v1, v0}, Lcom/tkay/core/api/MediationInitCallback;->onFail(Ljava/lang/String;)V

    :cond_12
    return-void
.end method
