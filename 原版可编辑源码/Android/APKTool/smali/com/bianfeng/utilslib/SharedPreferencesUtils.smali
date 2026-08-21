.class public Lcom/bianfeng/utilslib/SharedPreferencesUtils;
.super Ljava/lang/Object;
.source "SharedPreferencesUtils.java"


# static fields
.field private static volatile utils:Lcom/bianfeng/utilslib/SharedPreferencesUtils;


# instance fields
.field private delBD:Ljava/lang/String;

.field private sp:Landroid/content/SharedPreferences;


# direct methods
.method private constructor <init>()V
    .locals 1

    .line 11
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const-string v0, "ymnh5gamesdk_sp"

    .line 7
    iput-object v0, p0, Lcom/bianfeng/utilslib/SharedPreferencesUtils;->delBD:Ljava/lang/String;

    return-void
.end method

.method public static getInstance()Lcom/bianfeng/utilslib/SharedPreferencesUtils;
    .locals 2

    .line 15
    sget-object v0, Lcom/bianfeng/utilslib/SharedPreferencesUtils;->utils:Lcom/bianfeng/utilslib/SharedPreferencesUtils;

    if-nez v0, :cond_1

    .line 16
    const-class v0, Lcom/bianfeng/utilslib/SharedPreferencesUtils;

    monitor-enter v0

    .line 17
    :try_start_0
    sget-object v1, Lcom/bianfeng/utilslib/SharedPreferencesUtils;->utils:Lcom/bianfeng/utilslib/SharedPreferencesUtils;

    if-nez v1, :cond_0

    .line 18
    new-instance v1, Lcom/bianfeng/utilslib/SharedPreferencesUtils;

    invoke-direct {v1}, Lcom/bianfeng/utilslib/SharedPreferencesUtils;-><init>()V

    sput-object v1, Lcom/bianfeng/utilslib/SharedPreferencesUtils;->utils:Lcom/bianfeng/utilslib/SharedPreferencesUtils;

    .line 20
    :cond_0
    monitor-exit v0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1

    .line 22
    :cond_1
    :goto_0
    sget-object v0, Lcom/bianfeng/utilslib/SharedPreferencesUtils;->utils:Lcom/bianfeng/utilslib/SharedPreferencesUtils;

    return-object v0
.end method

.method private isCheckNull()Z
    .locals 1

    .line 77
    iget-object v0, p0, Lcom/bianfeng/utilslib/SharedPreferencesUtils;->sp:Landroid/content/SharedPreferences;

    if-nez v0, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return v0
.end method


# virtual methods
.method public getBoolean(Ljava/lang/String;)Z
    .locals 2

    .line 70
    invoke-direct {p0}, Lcom/bianfeng/utilslib/SharedPreferencesUtils;->isCheckNull()Z

    move-result v0

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    return v1

    .line 71
    :cond_0
    iget-object v0, p0, Lcom/bianfeng/utilslib/SharedPreferencesUtils;->sp:Landroid/content/SharedPreferences;

    invoke-interface {v0, p1, v1}, Landroid/content/SharedPreferences;->getBoolean(Ljava/lang/String;Z)Z

    move-result p1

    return p1
.end method

.method public getInt(Ljava/lang/String;)I
    .locals 2

    .line 65
    invoke-direct {p0}, Lcom/bianfeng/utilslib/SharedPreferencesUtils;->isCheckNull()Z

    move-result v0

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    return v1

    .line 66
    :cond_0
    iget-object v0, p0, Lcom/bianfeng/utilslib/SharedPreferencesUtils;->sp:Landroid/content/SharedPreferences;

    invoke-interface {v0, p1, v1}, Landroid/content/SharedPreferences;->getInt(Ljava/lang/String;I)I

    move-result p1

    return p1
.end method

.method public getString(Ljava/lang/String;)Ljava/lang/String;
    .locals 2

    .line 60
    invoke-direct {p0}, Lcom/bianfeng/utilslib/SharedPreferencesUtils;->isCheckNull()Z

    move-result v0

    const-string v1, "0"

    if-eqz v0, :cond_0

    return-object v1

    .line 61
    :cond_0
    iget-object v0, p0, Lcom/bianfeng/utilslib/SharedPreferencesUtils;->sp:Landroid/content/SharedPreferences;

    invoke-interface {v0, p1, v1}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    return-object p1
.end method

.method public init(Landroid/content/Context;)V
    .locals 2

    .line 26
    iget-object v0, p0, Lcom/bianfeng/utilslib/SharedPreferencesUtils;->delBD:Ljava/lang/String;

    const/4 v1, 0x0

    invoke-virtual {p1, v0, v1}, Landroid/content/Context;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object p1

    iput-object p1, p0, Lcom/bianfeng/utilslib/SharedPreferencesUtils;->sp:Landroid/content/SharedPreferences;

    return-void
.end method

.method public putBoolean(Ljava/lang/String;Z)V
    .locals 1

    .line 51
    :try_start_0
    iget-object v0, p0, Lcom/bianfeng/utilslib/SharedPreferencesUtils;->sp:Landroid/content/SharedPreferences;

    invoke-interface {v0}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object v0

    .line 52
    invoke-interface {v0, p1, p2}, Landroid/content/SharedPreferences$Editor;->putBoolean(Ljava/lang/String;Z)Landroid/content/SharedPreferences$Editor;

    .line 53
    invoke-interface {v0}, Landroid/content/SharedPreferences$Editor;->commit()Z
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    .line 55
    :catch_0
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getLogger()Lcom/bianfeng/utilslib/Logger;

    move-result-object p1

    const-string p2, "SharedPreferencesUtils"

    invoke-virtual {p1, p2}, Lcom/bianfeng/utilslib/Logger;->i(Ljava/lang/String;)I

    :goto_0
    return-void
.end method

.method public putInt(Ljava/lang/String;I)V
    .locals 1

    .line 41
    :try_start_0
    iget-object v0, p0, Lcom/bianfeng/utilslib/SharedPreferencesUtils;->sp:Landroid/content/SharedPreferences;

    invoke-interface {v0}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object v0

    .line 42
    invoke-interface {v0, p1, p2}, Landroid/content/SharedPreferences$Editor;->putInt(Ljava/lang/String;I)Landroid/content/SharedPreferences$Editor;

    .line 43
    invoke-interface {v0}, Landroid/content/SharedPreferences$Editor;->commit()Z
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    .line 45
    :catch_0
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getLogger()Lcom/bianfeng/utilslib/Logger;

    move-result-object p1

    const-string p2, "SharedPreferencesUtils"

    invoke-virtual {p1, p2}, Lcom/bianfeng/utilslib/Logger;->i(Ljava/lang/String;)I

    :goto_0
    return-void
.end method

.method public putString(Ljava/lang/String;Ljava/lang/String;)V
    .locals 2

    .line 31
    :try_start_0
    iget-object v0, p0, Lcom/bianfeng/utilslib/SharedPreferencesUtils;->sp:Landroid/content/SharedPreferences;

    invoke-interface {v0}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object v0

    .line 32
    invoke-interface {v0, p1, p2}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    .line 33
    invoke-interface {v0}, Landroid/content/SharedPreferences$Editor;->commit()Z
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 35
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getLogger()Lcom/bianfeng/utilslib/Logger;

    move-result-object p2

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "SharedPreferencesUtils"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p2, p1}, Lcom/bianfeng/utilslib/Logger;->i(Ljava/lang/String;)I

    :goto_0
    return-void
.end method
