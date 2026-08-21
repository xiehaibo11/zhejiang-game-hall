.class public Lcom/bianfeng/seppellita/utils/SeppellitaSharedPreferencesUtils;
.super Ljava/lang/Object;
.source "SeppellitaSharedPreferencesUtils.java"


# static fields
.field private static delBD:Ljava/lang/String; = "seppellita_delbd"

.field private static isNew:Ljava/lang/String; = "seppellita_is_new_user_"

.field private static seppellita_aaid:Ljava/lang/String; = "seppellita_aaid"

.field private static seppellita_oaid:Ljava/lang/String; = "seppellita_oaid"

.field private static seppellita_vaid:Ljava/lang/String; = "seppellita_vaid"


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 6
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static getAaid()Ljava/lang/String;
    .locals 1

    .line 82
    :try_start_0
    sget-object v0, Lcom/bianfeng/seppellita/utils/SeppellitaSharedPreferencesUtils;->seppellita_aaid:Ljava/lang/String;

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object v0

    :catch_0
    const/4 v0, 0x0

    return-object v0
.end method

.method public static getDelDb()I
    .locals 1

    .line 28
    sget-object v0, Lcom/bianfeng/seppellita/utils/SeppellitaSharedPreferencesUtils;->delBD:Ljava/lang/String;

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->getInt(Ljava/lang/String;)I

    move-result v0

    return v0
.end method

.method public static getIsNew()Z
    .locals 3

    const/4 v0, 0x0

    .line 33
    :try_start_0
    sget-object v1, Lcom/bianfeng/seppellita/utils/SeppellitaSharedPreferencesUtils;->isNew:Ljava/lang/String;

    invoke-static {v1}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->getBoolean(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_0

    return v0

    .line 35
    :cond_0
    sget-object v1, Lcom/bianfeng/seppellita/utils/SeppellitaSharedPreferencesUtils;->isNew:Ljava/lang/String;

    const/4 v2, 0x1

    invoke-static {v1, v2}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->put(Ljava/lang/String;Z)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return v2

    :catch_0
    move-exception v1

    .line 38
    invoke-virtual {v1}, Ljava/lang/Exception;->printStackTrace()V

    return v0
.end method

.method public static getOaid()Ljava/lang/String;
    .locals 1

    .line 52
    :try_start_0
    sget-object v0, Lcom/bianfeng/seppellita/utils/SeppellitaSharedPreferencesUtils;->seppellita_oaid:Ljava/lang/String;

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object v0

    :catch_0
    const/4 v0, 0x0

    return-object v0
.end method

.method public static getVaid()Ljava/lang/String;
    .locals 1

    .line 67
    :try_start_0
    sget-object v0, Lcom/bianfeng/seppellita/utils/SeppellitaSharedPreferencesUtils;->seppellita_vaid:Ljava/lang/String;

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object v0

    :catch_0
    const/4 v0, 0x0

    return-object v0
.end method

.method public static putDelDb(I)V
    .locals 1

    .line 22
    :try_start_0
    sget-object v0, Lcom/bianfeng/seppellita/utils/SeppellitaSharedPreferencesUtils;->delBD:Ljava/lang/String;

    invoke-static {v0, p0}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->put(Ljava/lang/String;I)V
    :try_end_0
    .catch Lcom/bianfeng/ymnsdk/utilslib/exception/YmnException; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    return-void
.end method

.method public static saveAaid(Ljava/lang/String;)V
    .locals 1

    .line 75
    :try_start_0
    sget-object v0, Lcom/bianfeng/seppellita/utils/SeppellitaSharedPreferencesUtils;->seppellita_aaid:Ljava/lang/String;

    invoke-static {v0, p0}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->put(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    return-void
.end method

.method public static saveOaid(Ljava/lang/String;)V
    .locals 1

    .line 45
    :try_start_0
    sget-object v0, Lcom/bianfeng/seppellita/utils/SeppellitaSharedPreferencesUtils;->seppellita_oaid:Ljava/lang/String;

    invoke-static {v0, p0}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->put(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    return-void
.end method

.method public static saveVaid(Ljava/lang/String;)V
    .locals 1

    .line 60
    :try_start_0
    sget-object v0, Lcom/bianfeng/seppellita/utils/SeppellitaSharedPreferencesUtils;->seppellita_vaid:Ljava/lang/String;

    invoke-static {v0, p0}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->put(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    return-void
.end method
