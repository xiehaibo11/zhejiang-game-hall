.class public Lcom/qihoo360/replugin/utils/RepluginSharedPreferencesUtils;
.super Ljava/lang/Object;
.source "RepluginSharedPreferencesUtils.java"


# static fields
.field public static final REPLUGIN_LOG:Ljava/lang/String; = "bianfeng_replugin_log"

.field private static volatile preferencesUtils:Lcom/qihoo360/replugin/utils/RepluginSharedPreferencesUtils;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 3
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static getInstance()Lcom/qihoo360/replugin/utils/RepluginSharedPreferencesUtils;
    .locals 2

    .line 10
    sget-object v0, Lcom/qihoo360/replugin/utils/RepluginSharedPreferencesUtils;->preferencesUtils:Lcom/qihoo360/replugin/utils/RepluginSharedPreferencesUtils;

    if-nez v0, :cond_1

    .line 11
    const-class v0, Lcom/qihoo360/replugin/utils/RepluginSharedPreferencesUtils;

    monitor-enter v0

    .line 12
    :try_start_0
    sget-object v1, Lcom/qihoo360/replugin/utils/RepluginSharedPreferencesUtils;->preferencesUtils:Lcom/qihoo360/replugin/utils/RepluginSharedPreferencesUtils;

    if-nez v1, :cond_0

    .line 13
    new-instance v1, Lcom/qihoo360/replugin/utils/RepluginSharedPreferencesUtils;

    invoke-direct {v1}, Lcom/qihoo360/replugin/utils/RepluginSharedPreferencesUtils;-><init>()V

    sput-object v1, Lcom/qihoo360/replugin/utils/RepluginSharedPreferencesUtils;->preferencesUtils:Lcom/qihoo360/replugin/utils/RepluginSharedPreferencesUtils;

    .line 15
    :cond_0
    monitor-exit v0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1

    .line 17
    :cond_1
    :goto_0
    sget-object v0, Lcom/qihoo360/replugin/utils/RepluginSharedPreferencesUtils;->preferencesUtils:Lcom/qihoo360/replugin/utils/RepluginSharedPreferencesUtils;

    return-object v0
.end method


# virtual methods
.method public getPluginLog()Ljava/lang/String;
    .locals 1

    const-string v0, "bianfeng_replugin_log"

    .line 32
    invoke-static {v0}, Lcom/qihoo360/replugin/utils/SharedPreferencesUtils;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public setPluginLog(Ljava/lang/String;)V
    .locals 1

    :try_start_0
    const-string v0, "bianfeng_replugin_log"

    .line 23
    invoke-static {v0, p1}, Lcom/qihoo360/replugin/utils/SharedPreferencesUtils;->put(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 26
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-void
.end method
