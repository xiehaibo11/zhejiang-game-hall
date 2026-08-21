.class public Lcom/bianfeng/privategetui/PrivateGetuiInterface;
.super Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;
.source "PrivateGetuiInterface.java"


# annotations
.annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin;
    entrance = .enum Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Entrance;->APPLICATION:Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Entrance;
    strategy = .enum Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Policy;->FORCE:Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Policy;
.end annotation


# static fields
.field public static final CLEAR_PUSH_DATA:Ljava/lang/String; = "getui_clear_notify_info"

.field public static final PUSH_FUCTION_READ_DATA:Ljava/lang/String; = "gt_get_notify_info"

.field public static final PUSH_FUNCTION_BIND_ALIAS:Ljava/lang/String; = "push_bind_alias"

.field public static final PUSH_FUNCTION_CANCEL_SHOW:Ljava/lang/String; = "push_cancel_show_notification"

.field public static final PUSH_FUNCTION_GET_CLIENTID:Ljava/lang/String; = "push_get_clientid"

.field public static final PUSH_FUNCTION_GET_CLIENTID_NEW:Ljava/lang/String; = "push_get_clientid_new"

.field public static final PUSH_FUNCTION_SHOW:Ljava/lang/String; = "push_show_notification"

.field public static final PUSH_FUNCTION_UNBIND_ALL_ALIAS:Ljava/lang/String; = "push_unbind_all_alias"

.field public static final PUSH_FUNCTION_UNBIND_CURRENT_ALIAS:Ljava/lang/String; = "push_unbind_current_alias"

.field public static final PUSH_IS_PUSH_TURNEDON:Ljava/lang/String; = "getui_is_push_turnedon"

.field public static final PUSH_MSG_ARRIVED:Ljava/lang/String; = "getui_push_msg_arrived"

.field public static final PUSH_MSG_CLICK:Ljava/lang/String; = "getui_push_msg_click"

.field public static final PUSH_SET_TAG:Ljava/lang/String; = "getui_push_set_tag"

.field public static final PUSH_TOKEN:Ljava/lang/String; = "getui_push_token"

.field public static final PUSH_TURN_OFF_PUSH:Ljava/lang/String; = "getui_turn_off_push"

.field public static final PUSH_TURN_ON_PUSH:Ljava/lang/String; = "getui_turn_on_push"

.field public static final SET_HWBADGE_NUM:Ljava/lang/String; = "getui_set_hwbadge_num"

.field private static volatile isFirst:Z = true


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 23
    invoke-direct {p0}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;-><init>()V

    return-void
.end method


# virtual methods
.method public bindAlias(Ljava/lang/String;)V
    .locals 2
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "push_bind_alias"
    .end annotation

    .line 151
    invoke-static {}, Lcom/igexin/sdk/PushManager;->getInstance()Lcom/igexin/sdk/PushManager;

    move-result-object v0

    invoke-virtual {p0}, Lcom/bianfeng/privategetui/PrivateGetuiInterface;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-virtual {v0, v1, p1}, Lcom/igexin/sdk/PushManager;->bindAlias(Landroid/content/Context;Ljava/lang/String;)Z

    move-result p1

    const-string v0, "push_bind_alias"

    if-eqz p1, :cond_0

    const/16 p1, 0x5de

    const-string v1, "bind_alias_success"

    .line 153
    invoke-virtual {p0, p1, v1, v0}, Lcom/bianfeng/privategetui/PrivateGetuiInterface;->sendResult(ILjava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    :cond_0
    const/16 p1, 0x5df

    const-string v1, "bind_alias_fail"

    .line 155
    invoke-virtual {p0, p1, v1, v0}, Lcom/bianfeng/privategetui/PrivateGetuiInterface;->sendResult(ILjava/lang/String;Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method public bindAlias(Ljava/lang/String;Ljava/lang/String;)V
    .locals 2
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "push_bind_alias"
    .end annotation

    .line 161
    invoke-static {}, Lcom/igexin/sdk/PushManager;->getInstance()Lcom/igexin/sdk/PushManager;

    move-result-object v0

    invoke-virtual {p0}, Lcom/bianfeng/privategetui/PrivateGetuiInterface;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-virtual {v0, v1, p1, p2}, Lcom/igexin/sdk/PushManager;->bindAlias(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)Z

    return-void
.end method

.method public cancelShowNotification(Ljava/lang/String;)V
    .locals 1
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "push_cancel_show_notification"
    .end annotation

    .line 134
    invoke-virtual {p0}, Lcom/bianfeng/privategetui/PrivateGetuiInterface;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0, p1}, Lcom/bianfeng/privategetui/PushNotification;->cancelRepeating(Landroid/content/Context;Ljava/lang/String;)V

    return-void
.end method

.method public clearPushData()V
    .locals 2
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "getui_clear_notify_info"
    .end annotation

    const-string v0, ""

    const-string v1, "key"

    .line 317
    invoke-static {v1, v0}, Lcom/bianfeng/privategetui/YmnGetuiSharedPreferencesUtils;->put(Ljava/lang/String;Ljava/lang/String;)V

    const-string v1, "params"

    .line 318
    invoke-static {v1, v0}, Lcom/bianfeng/privategetui/YmnGetuiSharedPreferencesUtils;->put(Ljava/lang/String;Ljava/lang/String;)V

    const-string v1, "click"

    .line 319
    invoke-static {v1, v0}, Lcom/bianfeng/privategetui/YmnGetuiSharedPreferencesUtils;->put(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public getClientId()V
    .locals 3
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "push_get_clientid"
    .end annotation

    .line 139
    invoke-static {}, Lcom/igexin/sdk/PushManager;->getInstance()Lcom/igexin/sdk/PushManager;

    move-result-object v0

    invoke-virtual {p0}, Lcom/bianfeng/privategetui/PrivateGetuiInterface;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/igexin/sdk/PushManager;->getClientid(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v0

    const/16 v1, 0x5dd

    const-string v2, "push_get_clientid"

    .line 140
    invoke-virtual {p0, v1, v0, v2}, Lcom/bianfeng/privategetui/PrivateGetuiInterface;->sendResult(ILjava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public getClientIdNew()V
    .locals 3
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "push_get_clientid_new"
    .end annotation

    .line 145
    invoke-static {}, Lcom/bianfeng/privategetui/YmnGetuiSharedPreferencesUtils;->getCid()Ljava/lang/String;

    move-result-object v0

    const/16 v1, 0x5dd

    const-string v2, "push_get_clientid_new"

    .line 146
    invoke-virtual {p0, v1, v0, v2}, Lcom/bianfeng/privategetui/PrivateGetuiInterface;->sendResult(ILjava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public getPluginId()Ljava/lang/String;
    .locals 1

    const-string v0, "131"

    return-object v0
.end method

.method public getPluginName()Ljava/lang/String;
    .locals 1

    const-string v0, "privategetui"

    return-object v0
.end method

.method public getPluginVersion()I
    .locals 1

    const/16 v0, 0x13

    return v0
.end method

.method public getSdkVersion()Ljava/lang/String;
    .locals 1

    const-string v0, "4.6.4.0"

    return-object v0
.end method

.method public getToken()V
    .locals 3
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "getui_push_token"
    .end annotation

    .line 307
    invoke-static {}, Lcom/bianfeng/privategetui/YmnGetuiSharedPreferencesUtils;->getToken()Ljava/lang/String;

    move-result-object v0

    .line 308
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    const-string v2, "getui_push_msg_click"

    if-eqz v1, :cond_0

    const/16 v0, 0x5f1

    const-string v1, ""

    .line 309
    invoke-virtual {p0, v0, v1, v2}, Lcom/bianfeng/privategetui/PrivateGetuiInterface;->sendResult(ILjava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    :cond_0
    const/16 v1, 0x5f0

    .line 311
    invoke-virtual {p0, v1, v0, v2}, Lcom/bianfeng/privategetui/PrivateGetuiInterface;->sendResult(ILjava/lang/String;Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method public isPushTurnedOn()V
    .locals 2
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "getui_is_push_turnedon"
    .end annotation

    .line 259
    invoke-virtual {p0}, Lcom/bianfeng/privategetui/PrivateGetuiInterface;->getActivity()Landroid/app/Activity;

    move-result-object v0

    new-instance v1, Lcom/bianfeng/privategetui/PrivateGetuiInterface$7;

    invoke-direct {v1, p0}, Lcom/bianfeng/privategetui/PrivateGetuiInterface$7;-><init>(Lcom/bianfeng/privategetui/PrivateGetuiInterface;)V

    invoke-virtual {v0, v1}, Landroid/app/Activity;->runOnUiThread(Ljava/lang/Runnable;)V

    return-void
.end method

.method public msgArrived()V
    .locals 3
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "getui_push_msg_arrived"
    .end annotation

    .line 288
    invoke-static {}, Lcom/bianfeng/privategetui/YmnGetuiSharedPreferencesUtils;->getMsgArrived()Ljava/lang/String;

    move-result-object v0

    .line 289
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    const-string v2, "getui_push_msg_arrived"

    if-eqz v1, :cond_0

    const/16 v0, 0x5ef

    const-string v1, ""

    .line 290
    invoke-virtual {p0, v0, v1, v2}, Lcom/bianfeng/privategetui/PrivateGetuiInterface;->sendResult(ILjava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    :cond_0
    const/16 v1, 0x5ee

    .line 292
    invoke-virtual {p0, v1, v0, v2}, Lcom/bianfeng/privategetui/PrivateGetuiInterface;->sendResult(ILjava/lang/String;Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method public msgClick()V
    .locals 3
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "getui_push_msg_click"
    .end annotation

    .line 298
    invoke-static {}, Lcom/bianfeng/privategetui/YmnGetuiSharedPreferencesUtils;->getMsgClick()Ljava/lang/String;

    move-result-object v0

    .line 299
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    const-string v2, "getui_push_msg_click"

    if-eqz v1, :cond_0

    const/16 v0, 0x5ed

    const-string v1, ""

    .line 300
    invoke-virtual {p0, v0, v1, v2}, Lcom/bianfeng/privategetui/PrivateGetuiInterface;->sendResult(ILjava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    :cond_0
    const/16 v1, 0x5ec

    .line 302
    invoke-virtual {p0, v1, v0, v2}, Lcom/bianfeng/privategetui/PrivateGetuiInterface;->sendResult(ILjava/lang/String;Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method public onContextChanged(Landroid/content/Context;)V
    .locals 2

    .line 104
    invoke-super {p0, p1}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->onContextChanged(Landroid/content/Context;)V

    .line 105
    instance-of v0, p1, Landroid/app/Activity;

    if-eqz v0, :cond_0

    .line 106
    invoke-static {}, Lcom/igexin/sdk/PushManager;->getInstance()Lcom/igexin/sdk/PushManager;

    move-result-object v0

    new-instance v1, Lcom/bianfeng/privategetui/PrivateGetuiInterface$1;

    invoke-direct {v1, p0}, Lcom/bianfeng/privategetui/PrivateGetuiInterface$1;-><init>(Lcom/bianfeng/privategetui/PrivateGetuiInterface;)V

    invoke-virtual {v0, p1, v1}, Lcom/igexin/sdk/PushManager;->setDebugLogger(Landroid/content/Context;Lcom/igexin/sdk/IUserLoggerInterface;)V

    .line 112
    invoke-static {}, Lcom/igexin/sdk/PushManager;->getInstance()Lcom/igexin/sdk/PushManager;

    move-result-object v0

    const-class v1, Lcom/bianfeng/privategetui/GetuiPushService;

    invoke-virtual {v0, p1, v1}, Lcom/igexin/sdk/PushManager;->initialize(Landroid/content/Context;Ljava/lang/Class;)V

    .line 113
    invoke-static {}, Lcom/igexin/sdk/PushManager;->getInstance()Lcom/igexin/sdk/PushManager;

    move-result-object v0

    const-class v1, Lcom/bianfeng/privategetui/YmnGetuiIntentService;

    invoke-virtual {v0, p1, v1}, Lcom/igexin/sdk/PushManager;->registerPushIntentService(Landroid/content/Context;Ljava/lang/Class;)V

    :cond_0
    return-void
.end method

.method public onCreate(Landroid/app/Activity;)V
    .locals 5

    const-string v0, "badgenumber"

    .line 69
    invoke-super {p0, p1}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->onCreate(Landroid/app/Activity;)V

    const-string v1, "11111111 "

    const-string v2, "oncreate"

    .line 70
    invoke-static {v1, v2}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 72
    :try_start_0
    new-instance v1, Landroid/os/Bundle;

    invoke-direct {v1}, Landroid/os/Bundle;-><init>()V

    const-string v2, "PUSH_APP_PACKAGENAME"

    .line 73
    invoke-virtual {p0, v2}, Lcom/bianfeng/privategetui/PrivateGetuiInterface;->getMetaData(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    const-string v3, "package"

    .line 74
    invoke-virtual {v1, v3, v2}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    const-string v2, "PUSH_APP_MAIN_ACTIVITY"

    .line 75
    invoke-virtual {p0, v2}, Lcom/bianfeng/privategetui/PrivateGetuiInterface;->getMetaData(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    const-string v3, "class"

    .line 76
    invoke-virtual {v1, v3, v2}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    const/4 v2, 0x0

    .line 77
    invoke-virtual {v1, v0, v2}, Landroid/os/Bundle;->putInt(Ljava/lang/String;I)V

    .line 78
    invoke-virtual {p1}, Landroid/app/Activity;->getContentResolver()Landroid/content/ContentResolver;

    move-result-object p1

    const-string v2, "content://com.huawei.android.launcher.settings/badge/"

    invoke-static {v2}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object v2

    const-string v3, "change_badge"

    const/4 v4, 0x0

    invoke-virtual {p1, v2, v3, v4, v1}, Landroid/content/ContentResolver;->call(Landroid/net/Uri;Ljava/lang/String;Ljava/lang/String;Landroid/os/Bundle;)Landroid/os/Bundle;

    const-string p1, "0"

    .line 79
    invoke-static {v0, p1}, Lcom/bianfeng/privategetui/YmnGetuiSharedPreferencesUtils;->put(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 81
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-void
.end method

.method public onDestroy()V
    .locals 2

    .line 228
    invoke-virtual {p0}, Lcom/bianfeng/privategetui/PrivateGetuiInterface;->getActivity()Landroid/app/Activity;

    move-result-object v0

    new-instance v1, Lcom/bianfeng/privategetui/PrivateGetuiInterface$4;

    invoke-direct {v1, p0}, Lcom/bianfeng/privategetui/PrivateGetuiInterface$4;-><init>(Lcom/bianfeng/privategetui/PrivateGetuiInterface;)V

    invoke-virtual {v0, v1}, Landroid/app/Activity;->runOnUiThread(Ljava/lang/Runnable;)V

    .line 234
    invoke-super {p0}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->onDestroy()V

    return-void
.end method

.method public onInit(Landroid/content/Context;)V
    .locals 3

    .line 87
    invoke-super {p0, p1}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->onInit(Landroid/content/Context;)V

    .line 88
    sget-boolean v0, Lcom/bianfeng/privategetui/PrivateGetuiInterface;->isFirst:Z

    if-eqz v0, :cond_0

    .line 89
    invoke-static {p1}, Lcom/bianfeng/privategetui/ResourceHelper;->initResourceR(Landroid/content/Context;)V

    const/4 v0, 0x0

    .line 90
    sput-boolean v0, Lcom/bianfeng/privategetui/PrivateGetuiInterface;->isFirst:Z

    .line 93
    :cond_0
    :try_start_0
    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v0

    check-cast v0, Landroid/app/Application;

    invoke-static {v0}, Lcom/huawei/hms/api/HuaweiMobileServicesUtil;->setApplication(Landroid/app/Application;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 95
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "PrivateGetuiInterface is "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 97
    :goto_0
    invoke-static {p0}, Lcom/bianfeng/privategetui/YmnGetuiHandler;->init(Lcom/bianfeng/privategetui/PrivateGetuiInterface;)V

    .line 98
    invoke-static {p1}, Lcom/bianfeng/privategetui/YmnGetuiSharedPreferencesUtils;->init(Landroid/content/Context;)V

    return-void
.end method

.method public onPause()V
    .locals 2

    .line 348
    invoke-super {p0}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->onPause()V

    const-string v0, "onResume"

    const-string v1, "false"

    .line 349
    invoke-static {v0, v1}, Lcom/bianfeng/privategetui/YmnGetuiSharedPreferencesUtils;->put(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public onResume()V
    .locals 6

    const-string v0, "badgenumber"

    .line 329
    invoke-super {p0}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->onResume()V

    const-string v1, "onResume"

    const-string v2, "11111111 "

    .line 330
    invoke-static {v2, v1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    const-string v2, "true"

    .line 331
    invoke-static {v1, v2}, Lcom/bianfeng/privategetui/YmnGetuiSharedPreferencesUtils;->put(Ljava/lang/String;Ljava/lang/String;)V

    .line 333
    :try_start_0
    new-instance v1, Landroid/os/Bundle;

    invoke-direct {v1}, Landroid/os/Bundle;-><init>()V

    const-string v2, "PUSH_APP_PACKAGENAME"

    .line 334
    invoke-virtual {p0, v2}, Lcom/bianfeng/privategetui/PrivateGetuiInterface;->getMetaData(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    const-string v3, "package"

    .line 335
    invoke-virtual {v1, v3, v2}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    const-string v2, "PUSH_APP_MAIN_ACTIVITY"

    .line 336
    invoke-virtual {p0, v2}, Lcom/bianfeng/privategetui/PrivateGetuiInterface;->getMetaData(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    const-string v3, "class"

    .line 337
    invoke-virtual {v1, v3, v2}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    const/4 v2, 0x0

    .line 338
    invoke-virtual {v1, v0, v2}, Landroid/os/Bundle;->putInt(Ljava/lang/String;I)V

    .line 339
    invoke-virtual {p0}, Lcom/bianfeng/privategetui/PrivateGetuiInterface;->getActivity()Landroid/app/Activity;

    move-result-object v2

    invoke-virtual {v2}, Landroid/app/Activity;->getContentResolver()Landroid/content/ContentResolver;

    move-result-object v2

    const-string v3, "content://com.huawei.android.launcher.settings/badge/"

    invoke-static {v3}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object v3

    const-string v4, "change_badge"

    const/4 v5, 0x0

    invoke-virtual {v2, v3, v4, v5, v1}, Landroid/content/ContentResolver;->call(Landroid/net/Uri;Ljava/lang/String;Ljava/lang/String;Landroid/os/Bundle;)Landroid/os/Bundle;

    const-string v1, "0"

    .line 340
    invoke-static {v0, v1}, Lcom/bianfeng/privategetui/YmnGetuiSharedPreferencesUtils;->put(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 342
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-void
.end method

.method public readLocalData()V
    .locals 2
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "gt_get_notify_info"
    .end annotation

    .line 196
    invoke-virtual {p0}, Lcom/bianfeng/privategetui/PrivateGetuiInterface;->getActivity()Landroid/app/Activity;

    move-result-object v0

    new-instance v1, Lcom/bianfeng/privategetui/PrivateGetuiInterface$2;

    invoke-direct {v1, p0}, Lcom/bianfeng/privategetui/PrivateGetuiInterface$2;-><init>(Lcom/bianfeng/privategetui/PrivateGetuiInterface;)V

    invoke-virtual {v0, v1}, Landroid/app/Activity;->runOnUiThread(Ljava/lang/Runnable;)V

    return-void
.end method

.method public readLocalData(Ljava/lang/String;)V
    .locals 2
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "gt_get_notify_info"
    .end annotation

    .line 211
    invoke-virtual {p0}, Lcom/bianfeng/privategetui/PrivateGetuiInterface;->getActivity()Landroid/app/Activity;

    move-result-object v0

    new-instance v1, Lcom/bianfeng/privategetui/PrivateGetuiInterface$3;

    invoke-direct {v1, p0, p1}, Lcom/bianfeng/privategetui/PrivateGetuiInterface$3;-><init>(Lcom/bianfeng/privategetui/PrivateGetuiInterface;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/app/Activity;->runOnUiThread(Ljava/lang/Runnable;)V

    return-void
.end method

.method public setHubadgeNum()V
    .locals 3
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "getui_set_hwbadge_num"
    .end annotation

    .line 324
    invoke-static {}, Lcom/igexin/sdk/PushManager;->getInstance()Lcom/igexin/sdk/PushManager;

    move-result-object v0

    invoke-virtual {p0}, Lcom/bianfeng/privategetui/PrivateGetuiInterface;->getActivity()Landroid/app/Activity;

    move-result-object v1

    const/4 v2, 0x0

    invoke-virtual {v0, v1, v2}, Lcom/igexin/sdk/PushManager;->setHwBadgeNum(Landroid/content/Context;I)Z

    return-void
.end method

.method public setTag(Ljava/lang/String;)V
    .locals 2
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "getui_push_set_tag"
    .end annotation

    .line 274
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    const-string p1, "GETUI TAGS IS NULL"

    .line 275
    invoke-static {p1}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    return-void

    .line 278
    :cond_0
    invoke-virtual {p0}, Lcom/bianfeng/privategetui/PrivateGetuiInterface;->getActivity()Landroid/app/Activity;

    move-result-object v0

    new-instance v1, Lcom/bianfeng/privategetui/PrivateGetuiInterface$8;

    invoke-direct {v1, p0, p1}, Lcom/bianfeng/privategetui/PrivateGetuiInterface$8;-><init>(Lcom/bianfeng/privategetui/PrivateGetuiInterface;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/app/Activity;->runOnUiThread(Ljava/lang/Runnable;)V

    return-void
.end method

.method public showNotification(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 1
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "push_show_notification"
    .end annotation

    .line 119
    invoke-virtual {p0}, Lcom/bianfeng/privategetui/PrivateGetuiInterface;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0, p1, p2, p3}, Lcom/bianfeng/privategetui/PushNotification;->showLoacl(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public showNotification(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;J)V
    .locals 6
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "push_show_notification"
    .end annotation

    .line 124
    invoke-virtual {p0}, Lcom/bianfeng/privategetui/PrivateGetuiInterface;->getContext()Landroid/content/Context;

    move-result-object v0

    move-object v1, p1

    move-object v2, p2

    move-object v3, p3

    move-wide v4, p4

    invoke-static/range {v0 .. v5}, Lcom/bianfeng/privategetui/PushNotification;->show(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;J)V

    return-void
.end method

.method public showNotificationRepeating(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;JJ)V
    .locals 8
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "push_show_notification"
    .end annotation

    .line 129
    invoke-virtual {p0}, Lcom/bianfeng/privategetui/PrivateGetuiInterface;->getContext()Landroid/content/Context;

    move-result-object v0

    move-object v1, p1

    move-object v2, p2

    move-object v3, p3

    move-wide v4, p4

    move-wide v6, p6

    invoke-static/range {v0 .. v7}, Lcom/bianfeng/privategetui/PushNotification;->repeating(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;JJ)V

    return-void
.end method

.method public turnOffPush()V
    .locals 2
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "getui_turn_off_push"
    .end annotation

    .line 249
    invoke-virtual {p0}, Lcom/bianfeng/privategetui/PrivateGetuiInterface;->getActivity()Landroid/app/Activity;

    move-result-object v0

    new-instance v1, Lcom/bianfeng/privategetui/PrivateGetuiInterface$6;

    invoke-direct {v1, p0}, Lcom/bianfeng/privategetui/PrivateGetuiInterface$6;-><init>(Lcom/bianfeng/privategetui/PrivateGetuiInterface;)V

    invoke-virtual {v0, v1}, Landroid/app/Activity;->runOnUiThread(Ljava/lang/Runnable;)V

    return-void
.end method

.method public turnOnPush()V
    .locals 2
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "getui_turn_on_push"
    .end annotation

    .line 239
    invoke-virtual {p0}, Lcom/bianfeng/privategetui/PrivateGetuiInterface;->getActivity()Landroid/app/Activity;

    move-result-object v0

    new-instance v1, Lcom/bianfeng/privategetui/PrivateGetuiInterface$5;

    invoke-direct {v1, p0}, Lcom/bianfeng/privategetui/PrivateGetuiInterface$5;-><init>(Lcom/bianfeng/privategetui/PrivateGetuiInterface;)V

    invoke-virtual {v0, v1}, Landroid/app/Activity;->runOnUiThread(Ljava/lang/Runnable;)V

    return-void
.end method

.method public unBindAllAlias(Ljava/lang/String;)V
    .locals 3
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "push_unbind_all_alias"
    .end annotation

    .line 166
    invoke-static {}, Lcom/igexin/sdk/PushManager;->getInstance()Lcom/igexin/sdk/PushManager;

    move-result-object v0

    invoke-virtual {p0}, Lcom/bianfeng/privategetui/PrivateGetuiInterface;->getContext()Landroid/content/Context;

    move-result-object v1

    const/4 v2, 0x0

    invoke-virtual {v0, v1, p1, v2}, Lcom/igexin/sdk/PushManager;->unBindAlias(Landroid/content/Context;Ljava/lang/String;Z)Z

    move-result p1

    const-string v0, "push_unbind_all_alias"

    if-eqz p1, :cond_0

    const/16 p1, 0x5e0

    const-string v1, "unbind_alias_success"

    .line 168
    invoke-virtual {p0, p1, v1, v0}, Lcom/bianfeng/privategetui/PrivateGetuiInterface;->sendResult(ILjava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    :cond_0
    const/16 p1, 0x5e1

    const-string v1, "unbind_alias_fail"

    .line 170
    invoke-virtual {p0, p1, v1, v0}, Lcom/bianfeng/privategetui/PrivateGetuiInterface;->sendResult(ILjava/lang/String;Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method public unBindAllAlias(Ljava/lang/String;Ljava/lang/String;)V
    .locals 3
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "push_unbind_all_alias"
    .end annotation

    .line 186
    invoke-static {}, Lcom/igexin/sdk/PushManager;->getInstance()Lcom/igexin/sdk/PushManager;

    move-result-object v0

    invoke-virtual {p0}, Lcom/bianfeng/privategetui/PrivateGetuiInterface;->getContext()Landroid/content/Context;

    move-result-object v1

    const/4 v2, 0x0

    invoke-virtual {v0, v1, p1, v2, p2}, Lcom/igexin/sdk/PushManager;->unBindAlias(Landroid/content/Context;Ljava/lang/String;ZLjava/lang/String;)Z

    return-void
.end method

.method public unBindCurrentAlias(Ljava/lang/String;)V
    .locals 3
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "push_unbind_current_alias"
    .end annotation

    .line 176
    invoke-static {}, Lcom/igexin/sdk/PushManager;->getInstance()Lcom/igexin/sdk/PushManager;

    move-result-object v0

    invoke-virtual {p0}, Lcom/bianfeng/privategetui/PrivateGetuiInterface;->getContext()Landroid/content/Context;

    move-result-object v1

    const/4 v2, 0x1

    invoke-virtual {v0, v1, p1, v2}, Lcom/igexin/sdk/PushManager;->unBindAlias(Landroid/content/Context;Ljava/lang/String;Z)Z

    move-result p1

    const-string v0, "push_unbind_current_alias"

    if-eqz p1, :cond_0

    const/16 p1, 0x5e0

    const-string v1, "unbind_alias_success"

    .line 178
    invoke-virtual {p0, p1, v1, v0}, Lcom/bianfeng/privategetui/PrivateGetuiInterface;->sendResult(ILjava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    :cond_0
    const/16 p1, 0x5e1

    const-string v1, "unbind_alias_fail"

    .line 180
    invoke-virtual {p0, p1, v1, v0}, Lcom/bianfeng/privategetui/PrivateGetuiInterface;->sendResult(ILjava/lang/String;Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method public unBindCurrentAlias(Ljava/lang/String;Ljava/lang/String;)V
    .locals 3
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "push_unbind_current_alias"
    .end annotation

    .line 191
    invoke-static {}, Lcom/igexin/sdk/PushManager;->getInstance()Lcom/igexin/sdk/PushManager;

    move-result-object v0

    invoke-virtual {p0}, Lcom/bianfeng/privategetui/PrivateGetuiInterface;->getContext()Landroid/content/Context;

    move-result-object v1

    const/4 v2, 0x1

    invoke-virtual {v0, v1, p1, v2, p2}, Lcom/igexin/sdk/PushManager;->unBindAlias(Landroid/content/Context;Ljava/lang/String;ZLjava/lang/String;)Z

    return-void
.end method
