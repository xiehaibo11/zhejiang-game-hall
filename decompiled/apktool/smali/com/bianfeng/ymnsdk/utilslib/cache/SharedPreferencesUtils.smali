.class public final Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;
.super Ljava/lang/Object;
.source "SharedPreferencesUtils.java"


# static fields
.field private static final BFDATA_NAME_PREFERENCES:Ljava/lang/String; = "resource_cfg"

.field private static final SP_NAME:Ljava/lang/String; = "ymnsdk_sp"

.field private static final YMNAGREEPRIVACY:Ljava/lang/String; = "ymn_agree_privacy"

.field private static mContext:Landroid/content/Context;

.field public static pl_androidid:Ljava/lang/String;

.field public static pl_imei:Ljava/lang/String;

.field public static pl_imsi:Ljava/lang/String;

.field public static pl_ip:Ljava/lang/String;

.field public static pl_isp:Ljava/lang/String;

.field public static pl_model:Ljava/lang/String;

.field public static pl_network:Ljava/lang/String;

.field public static pl_oaid:Ljava/lang/String;

.field public static pl_os_version:Ljava/lang/String;

.field public static pl_soft_list:Ljava/lang/String;

.field private static preferences:Landroid/content/SharedPreferences;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 29
    const-string v0, "imei"

    sput-object v0, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->pl_imei:Ljava/lang/String;

    .line 30
    const-string v0, "imsi"

    sput-object v0, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->pl_imsi:Ljava/lang/String;

    .line 31
    const-string v0, "user_ip"

    sput-object v0, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->pl_ip:Ljava/lang/String;

    .line 32
    const-string v0, "android_id"

    sput-object v0, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->pl_androidid:Ljava/lang/String;

    .line 33
    const-string v0, "oaid"

    sput-object v0, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->pl_oaid:Ljava/lang/String;

    .line 34
    const-string v0, "network"

    sput-object v0, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->pl_network:Ljava/lang/String;

    .line 35
    const-string v0, "model"

    sput-object v0, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->pl_model:Ljava/lang/String;

    .line 36
    const-string v0, "os_version"

    sput-object v0, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->pl_os_version:Ljava/lang/String;

    .line 37
    const-string v0, "soft_list"

    sput-object v0, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->pl_soft_list:Ljava/lang/String;

    .line 38
    const-string v0, "isp"

    sput-object v0, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->pl_isp:Ljava/lang/String;

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 21
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static getAllPLinfo(Ljava/lang/String;)Ljava/util/LinkedHashMap;
    .locals 3
    .param p0, "fileName"    # Ljava/lang/String;

    .line 197
    new-instance v0, Ljava/util/LinkedHashMap;

    invoke-direct {v0}, Ljava/util/LinkedHashMap;-><init>()V

    .line 199
    .local v0, "linkedHashMap":Ljava/util/LinkedHashMap;
    :try_start_0
    sget-object v1, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->pl_imei:Ljava/lang/String;

    invoke-static {p0, v1}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->getPLStringFormSP(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/String;->isEmpty()Z

    move-result v1

    if-nez v1, :cond_0

    .line 200
    sget-object v1, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->pl_imei:Ljava/lang/String;

    sget-object v2, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->pl_imei:Ljava/lang/String;

    invoke-static {p0, v2}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->getPLStringFormSP(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Ljava/util/LinkedHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 202
    :cond_0
    sget-object v1, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->pl_imsi:Ljava/lang/String;

    invoke-static {p0, v1}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->getPLStringFormSP(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/String;->isEmpty()Z

    move-result v1

    if-nez v1, :cond_1

    .line 203
    sget-object v1, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->pl_imsi:Ljava/lang/String;

    sget-object v2, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->pl_imsi:Ljava/lang/String;

    invoke-static {p0, v2}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->getPLStringFormSP(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Ljava/util/LinkedHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 205
    :cond_1
    sget-object v1, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->pl_ip:Ljava/lang/String;

    invoke-static {p0, v1}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->getPLStringFormSP(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/String;->isEmpty()Z

    move-result v1

    if-nez v1, :cond_2

    .line 206
    sget-object v1, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->pl_ip:Ljava/lang/String;

    sget-object v2, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->pl_ip:Ljava/lang/String;

    invoke-static {p0, v2}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->getPLStringFormSP(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Ljava/util/LinkedHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 208
    :cond_2
    sget-object v1, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->pl_androidid:Ljava/lang/String;

    invoke-static {p0, v1}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->getPLStringFormSP(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/String;->isEmpty()Z

    move-result v1

    if-nez v1, :cond_3

    .line 209
    sget-object v1, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->pl_androidid:Ljava/lang/String;

    sget-object v2, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->pl_androidid:Ljava/lang/String;

    invoke-static {p0, v2}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->getPLStringFormSP(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Ljava/util/LinkedHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 211
    :cond_3
    sget-object v1, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->pl_oaid:Ljava/lang/String;

    invoke-static {p0, v1}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->getPLStringFormSP(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/String;->isEmpty()Z

    move-result v1

    if-nez v1, :cond_4

    .line 212
    sget-object v1, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->pl_oaid:Ljava/lang/String;

    sget-object v2, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->pl_oaid:Ljava/lang/String;

    invoke-static {p0, v2}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->getPLStringFormSP(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Ljava/util/LinkedHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 214
    :cond_4
    sget-object v1, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->pl_network:Ljava/lang/String;

    invoke-static {p0, v1}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->getPLStringFormSP(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/String;->isEmpty()Z

    move-result v1

    if-nez v1, :cond_5

    .line 215
    sget-object v1, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->pl_network:Ljava/lang/String;

    sget-object v2, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->pl_network:Ljava/lang/String;

    invoke-static {p0, v2}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->getPLStringFormSP(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Ljava/util/LinkedHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 217
    :cond_5
    sget-object v1, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->pl_model:Ljava/lang/String;

    invoke-static {p0, v1}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->getPLStringFormSP(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/String;->isEmpty()Z

    move-result v1

    if-nez v1, :cond_6

    .line 218
    sget-object v1, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->pl_model:Ljava/lang/String;

    sget-object v2, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->pl_model:Ljava/lang/String;

    invoke-static {p0, v2}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->getPLStringFormSP(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Ljava/util/LinkedHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 220
    :cond_6
    sget-object v1, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->pl_os_version:Ljava/lang/String;

    invoke-static {p0, v1}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->getPLStringFormSP(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/String;->isEmpty()Z

    move-result v1

    if-nez v1, :cond_7

    .line 221
    sget-object v1, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->pl_os_version:Ljava/lang/String;

    sget-object v2, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->pl_os_version:Ljava/lang/String;

    invoke-static {p0, v2}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->getPLStringFormSP(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Ljava/util/LinkedHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 223
    :cond_7
    sget-object v1, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->pl_soft_list:Ljava/lang/String;

    invoke-static {p0, v1}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->getPLStringFormSP(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/String;->isEmpty()Z

    move-result v1

    if-nez v1, :cond_8

    .line 224
    sget-object v1, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->pl_soft_list:Ljava/lang/String;

    sget-object v2, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->pl_soft_list:Ljava/lang/String;

    invoke-static {p0, v2}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->getPLStringFormSP(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Ljava/util/LinkedHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 226
    :cond_8
    sget-object v1, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->pl_isp:Ljava/lang/String;

    invoke-static {p0, v1}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->getPLStringFormSP(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/String;->isEmpty()Z

    move-result v1

    if-nez v1, :cond_9

    .line 227
    sget-object v1, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->pl_isp:Ljava/lang/String;

    sget-object v2, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->pl_isp:Ljava/lang/String;

    invoke-static {p0, v2}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->getPLStringFormSP(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Ljava/util/LinkedHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_0
    .catch Lcom/bianfeng/ymnsdk/utilslib/exception/YmnException; {:try_start_0 .. :try_end_0} :catch_0

    .line 232
    :cond_9
    goto :goto_0

    .line 230
    :catch_0
    move-exception v1

    .line 231
    .local v1, "e":Lcom/bianfeng/ymnsdk/utilslib/exception/YmnException;
    invoke-virtual {v1}, Ljava/lang/Exception;->printStackTrace()V

    .line 233
    .end local v1    # "e":Lcom/bianfeng/ymnsdk/utilslib/exception/YmnException;
    :goto_0
    return-object v0
.end method

.method public static getBoolean(Ljava/lang/String;)Z
    .locals 2
    .param p0, "key"    # Ljava/lang/String;

    .line 111
    sget-object v0, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->preferences:Landroid/content/SharedPreferences;

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    .line 112
    invoke-interface {v0, p0, v1}, Landroid/content/SharedPreferences;->getBoolean(Ljava/lang/String;Z)Z

    move-result v0

    return v0

    .line 114
    :cond_0
    return v1
.end method

.method public static getInt(Ljava/lang/String;)I
    .locals 2
    .param p0, "key"    # Ljava/lang/String;

    .line 120
    sget-object v0, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->preferences:Landroid/content/SharedPreferences;

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    .line 121
    invoke-interface {v0, p0, v1}, Landroid/content/SharedPreferences;->getInt(Ljava/lang/String;I)I

    move-result v0

    return v0

    .line 123
    :cond_0
    return v1
.end method

.method public static getLong(Ljava/lang/String;)J
    .locals 3
    .param p0, "key"    # Ljava/lang/String;

    .line 128
    sget-object v0, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->preferences:Landroid/content/SharedPreferences;

    const-wide/16 v1, 0x0

    if-eqz v0, :cond_0

    .line 129
    invoke-interface {v0, p0, v1, v2}, Landroid/content/SharedPreferences;->getLong(Ljava/lang/String;J)J

    move-result-wide v0

    return-wide v0

    .line 131
    :cond_0
    return-wide v1
.end method

.method public static getPLArrayFormSP(Ljava/lang/String;Ljava/lang/String;)Ljava/util/ArrayList;
    .locals 5
    .param p0, "name"    # Ljava/lang/String;
    .param p1, "key"    # Ljava/lang/String;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/bianfeng/ymnsdk/utilslib/exception/YmnException;
        }
    .end annotation

    .line 393
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    .line 394
    .local v0, "localInfoArr":Ljava/util/ArrayList;
    sget-object v1, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->mContext:Landroid/content/Context;

    if-nez v1, :cond_0

    .line 395
    const-string v1, "Ymnsdk"

    const-string v2, "\u672a\u521d\u59cb\u5316utils"

    invoke-static {v1, v2}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 396
    return-object v0

    .line 399
    :cond_0
    const/4 v2, 0x0

    invoke-virtual {v1, p0, v2}, Landroid/content/Context;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object v1

    .line 400
    .local v1, "privacyPreferences":Landroid/content/SharedPreferences;
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;

    move-result-object v2

    const-string v3, ""

    invoke-interface {v1, p1, v3}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    const-class v4, Ljava/util/ArrayList;

    invoke-virtual {v2, v3, v4}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->fromJson(Ljava/lang/String;Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v2

    move-object v0, v2

    check-cast v0, Ljava/util/ArrayList;

    .line 401
    if-nez v0, :cond_1

    .line 402
    new-instance v2, Ljava/util/ArrayList;

    invoke-direct {v2}, Ljava/util/ArrayList;-><init>()V

    move-object v0, v2

    .line 404
    :cond_1
    return-object v0
.end method

.method public static getPLReportStatus(Ljava/lang/String;)Ljava/lang/String;
    .locals 3
    .param p0, "uid"    # Ljava/lang/String;

    .line 306
    sget-object v0, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->mContext:Landroid/content/Context;

    if-nez v0, :cond_0

    .line 307
    const-string v0, "Ymnsdk"

    const-string v1, "\u672a\u521d\u59cb\u5316utils"

    invoke-static {v0, v1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 308
    const-string v0, ""

    return-object v0

    .line 310
    :cond_0
    const/4 v1, 0x0

    const-string v2, "ymnsdk_pl_info"

    invoke-virtual {v0, v2, v1}, Landroid/content/Context;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object v0

    .line 311
    .local v0, "privacyPreferences":Landroid/content/SharedPreferences;
    const-string v1, "0"

    invoke-interface {v0, p0, v1}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    return-object v1
.end method

.method public static getPLSPName()Ljava/lang/String;
    .locals 2

    .line 187
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->getPLUid()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/String;->isEmpty()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 188
    const-string v0, "ymnsdk_pl_info"

    return-object v0

    .line 190
    :cond_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "ymnsdk_pl_info_"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->getPLUid()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public static getPLStringFormSP(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
    .locals 3
    .param p0, "name"    # Ljava/lang/String;
    .param p1, "key"    # Ljava/lang/String;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/bianfeng/ymnsdk/utilslib/exception/YmnException;
        }
    .end annotation

    .line 409
    sget-object v0, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->mContext:Landroid/content/Context;

    const-string v1, ""

    if-nez v0, :cond_0

    .line 410
    const-string v0, "Ymnsdk"

    const-string v2, "\u672a\u521d\u59cb\u5316utils"

    invoke-static {v0, v2}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 411
    return-object v1

    .line 414
    :cond_0
    const/4 v2, 0x0

    invoke-virtual {v0, p0, v2}, Landroid/content/Context;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object v0

    .line 415
    .local v0, "privacyPreferences":Landroid/content/SharedPreferences;
    invoke-interface {v0, p1, v1}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    return-object v1
.end method

.method public static getPLUid()Ljava/lang/String;
    .locals 4

    .line 283
    sget-object v0, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->mContext:Landroid/content/Context;

    const-string v1, ""

    if-nez v0, :cond_0

    .line 284
    const-string v0, "Ymnsdk"

    const-string v2, "\u672a\u521d\u59cb\u5316utils"

    invoke-static {v0, v2}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 285
    return-object v1

    .line 287
    :cond_0
    const/4 v2, 0x0

    const-string v3, "ymnsdk_pl_info"

    invoke-virtual {v0, v3, v2}, Landroid/content/Context;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object v0

    .line 288
    .local v0, "privacyPreferences":Landroid/content/SharedPreferences;
    const-string v2, "pl_uid"

    invoke-interface {v0, v2, v1}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    return-object v1
.end method

.method private static getPlTypeID(Ljava/lang/String;)Ljava/lang/String;
    .locals 35
    .param p0, "labelString"    # Ljava/lang/String;

    .line 354
    new-instance v0, Ljava/util/ArrayList;

    const-string v1, "base"

    const-string v2, "identity"

    const-string v3, "process"

    const-string v4, "device"

    const-string v5, "network"

    const-string v6, "use"

    const-string v7, "derivative"

    const-string v8, "child"

    const-string v9, "name"

    const-string v10, "moblie_num"

    const-string v11, "id_num"

    const-string v12, "gps"

    const-string v13, "pic_info"

    const-string v14, "imei"

    const-string v15, "imsi"

    const-string v16, "idfa"

    const-string v17, "user_ip"

    const-string v18, "android_id"

    const-string v19, "oaid"

    const-string v20, "network"

    const-string v21, "model"

    const-string v22, "os_version"

    const-string v23, "mac"

    const-string v24, "soft_list"

    const-string v25, "isp"

    const-string v26, "user_info"

    const-string v27, "third_account"

    const-string v28, "clipboard"

    const-string v29, "pay_info"

    const-string v30, "game_dur"

    const-string v31, "comm_info"

    const-string v32, "derivative_info"

    const-string v33, "child_name"

    const-string v34, "child_id_num"

    filled-new-array/range {v1 .. v34}, [Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Ljava/util/Arrays;->asList([Ljava/lang/Object;)Ljava/util/List;

    move-result-object v1

    invoke-direct {v0, v1}, Ljava/util/ArrayList;-><init>(Ljava/util/Collection;)V

    .line 389
    .local v0, "arrayList":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/lang/String;>;"
    move-object/from16 v1, p0

    invoke-virtual {v0, v1}, Ljava/util/ArrayList;->indexOf(Ljava/lang/Object;)I

    move-result v2

    add-int/lit8 v2, v2, 0x1

    invoke-static {v2}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v2

    return-object v2
.end method

.method public static getString(Ljava/lang/String;)Ljava/lang/String;
    .locals 2
    .param p0, "key"    # Ljava/lang/String;

    .line 102
    sget-object v0, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->preferences:Landroid/content/SharedPreferences;

    const-string v1, ""

    if-eqz v0, :cond_0

    .line 103
    invoke-static {v1}, Lcom/bianfeng/ymnsdk/utilslib/log/UtilsLogger;->i(Ljava/lang/String;)I

    .line 104
    sget-object v0, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->preferences:Landroid/content/SharedPreferences;

    invoke-interface {v0, p0, v1}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    return-object v0

    .line 106
    :cond_0
    return-object v1
.end method

.method public static getStringFromBfData(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;
    .locals 2
    .param p0, "context"    # Landroid/content/Context;
    .param p1, "key"    # Ljava/lang/String;

    .line 144
    const-string v0, "resource_cfg"

    const/4 v1, 0x0

    invoke-virtual {p0, v0, v1}, Landroid/content/Context;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object v0

    .line 145
    .local v0, "bfdata_preferences":Landroid/content/SharedPreferences;
    const-string v1, ""

    invoke-interface {v0, p1, v1}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    return-object v1
.end method

.method public static init(Landroid/content/Context;)V
    .locals 3
    .param p0, "context"    # Landroid/content/Context;

    .line 41
    sput-object p0, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->mContext:Landroid/content/Context;

    .line 42
    sget-object v0, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->preferences:Landroid/content/SharedPreferences;

    if-nez v0, :cond_1

    .line 43
    const-class v0, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;

    monitor-enter v0

    .line 44
    :try_start_0
    sget-object v1, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->preferences:Landroid/content/SharedPreferences;

    if-nez v1, :cond_0

    .line 45
    const-string v1, "ymnsdk_sp"

    const/4 v2, 0x0

    invoke-virtual {p0, v1, v2}, Landroid/content/Context;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object v1

    sput-object v1, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->preferences:Landroid/content/SharedPreferences;

    .line 47
    :cond_0
    monitor-exit v0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1

    .line 56
    :cond_1
    :goto_0
    return-void
.end method

.method public static isAgreeprivacy()Z
    .locals 1

    .line 182
    const-string v0, "ymn_agree_privacy"

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->getBoolean(Ljava/lang/String;)Z

    move-result v0

    return v0
.end method

.method public static mergePlInfoToUser()V
    .locals 7

    .line 238
    sget-object v0, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->mContext:Landroid/content/Context;

    if-nez v0, :cond_0

    .line 239
    const-string v0, "Ymnsdk"

    const-string v1, "\u672a\u521d\u59cb\u5316utils"

    invoke-static {v0, v1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 240
    return-void

    .line 242
    :cond_0
    const-string v0, "ymnsdk_pl_info"

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->getAllPLinfo(Ljava/lang/String;)Ljava/util/LinkedHashMap;

    move-result-object v0

    .line 243
    .local v0, "noLoginInfo":Ljava/util/LinkedHashMap;
    sget-object v1, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->mContext:Landroid/content/Context;

    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->getPLSPName()Ljava/lang/String;

    move-result-object v2

    const/4 v3, 0x0

    invoke-virtual {v1, v2, v3}, Landroid/content/Context;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object v1

    .line 244
    .local v1, "privacyPreferences":Landroid/content/SharedPreferences;
    invoke-interface {v1}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object v2

    .line 245
    .local v2, "editor":Landroid/content/SharedPreferences$Editor;
    if-eqz v0, :cond_1

    invoke-virtual {v0}, Ljava/util/LinkedHashMap;->keySet()Ljava/util/Set;

    move-result-object v3

    invoke-interface {v3}, Ljava/util/Set;->size()I

    move-result v3

    if-eqz v3, :cond_1

    .line 246
    invoke-virtual {v0}, Ljava/util/LinkedHashMap;->entrySet()Ljava/util/Set;

    move-result-object v3

    invoke-interface {v3}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v3

    .line 247
    .local v3, "iterator":Ljava/util/Iterator;, "Ljava/util/Iterator<Ljava/util/Map$Entry<Ljava/lang/String;Ljava/lang/String;>;>;"
    :goto_0
    invoke-interface {v3}, Ljava/util/Iterator;->hasNext()Z

    move-result v4

    if-eqz v4, :cond_1

    .line 248
    invoke-interface {v3}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/util/Map$Entry;

    .line 249
    .local v4, "entry":Ljava/util/Map$Entry;, "Ljava/util/Map$Entry<Ljava/lang/String;Ljava/lang/String;>;"
    invoke-interface {v4}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Ljava/lang/String;

    invoke-interface {v4}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v6

    check-cast v6, Ljava/lang/String;

    invoke-interface {v2, v5, v6}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    .line 251
    .end local v4    # "entry":Ljava/util/Map$Entry;, "Ljava/util/Map$Entry<Ljava/lang/String;Ljava/lang/String;>;"
    goto :goto_0

    .line 253
    .end local v3    # "iterator":Ljava/util/Iterator;, "Ljava/util/Iterator<Ljava/util/Map$Entry<Ljava/lang/String;Ljava/lang/String;>;>;"
    :cond_1
    invoke-interface {v2}, Landroid/content/SharedPreferences$Editor;->apply()V

    .line 254
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->removeAllBeforePlInfo()V

    .line 256
    return-void
.end method

.method public static put(Ljava/lang/String;I)V
    .locals 2
    .param p0, "key"    # Ljava/lang/String;
    .param p1, "value"    # I
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/bianfeng/ymnsdk/utilslib/exception/YmnException;
        }
    .end annotation

    .line 82
    :try_start_0
    sget-object v0, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->preferences:Landroid/content/SharedPreferences;

    invoke-interface {v0}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object v0

    .line 83
    .local v0, "editor":Landroid/content/SharedPreferences$Editor;
    invoke-interface {v0, p0, p1}, Landroid/content/SharedPreferences$Editor;->putInt(Ljava/lang/String;I)Landroid/content/SharedPreferences$Editor;

    .line 84
    invoke-interface {v0}, Landroid/content/SharedPreferences$Editor;->apply()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 87
    .end local v0    # "editor":Landroid/content/SharedPreferences$Editor;
    nop

    .line 88
    return-void

    .line 85
    :catch_0
    move-exception v0

    .line 86
    .local v0, "e":Ljava/lang/Exception;
    new-instance v1, Lcom/bianfeng/ymnsdk/utilslib/exception/YmnException;

    invoke-direct {v1, v0}, Lcom/bianfeng/ymnsdk/utilslib/exception/YmnException;-><init>(Ljava/lang/Throwable;)V

    throw v1
.end method

.method public static put(Ljava/lang/String;J)V
    .locals 2
    .param p0, "key"    # Ljava/lang/String;
    .param p1, "value"    # J
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/bianfeng/ymnsdk/utilslib/exception/YmnException;
        }
    .end annotation

    .line 92
    :try_start_0
    sget-object v0, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->preferences:Landroid/content/SharedPreferences;

    invoke-interface {v0}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object v0

    .line 93
    .local v0, "editor":Landroid/content/SharedPreferences$Editor;
    invoke-interface {v0, p0, p1, p2}, Landroid/content/SharedPreferences$Editor;->putLong(Ljava/lang/String;J)Landroid/content/SharedPreferences$Editor;

    .line 94
    invoke-interface {v0}, Landroid/content/SharedPreferences$Editor;->apply()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 97
    .end local v0    # "editor":Landroid/content/SharedPreferences$Editor;
    nop

    .line 99
    return-void

    .line 95
    :catch_0
    move-exception v0

    .line 96
    .local v0, "e":Ljava/lang/Exception;
    new-instance v1, Lcom/bianfeng/ymnsdk/utilslib/exception/YmnException;

    invoke-direct {v1, v0}, Lcom/bianfeng/ymnsdk/utilslib/exception/YmnException;-><init>(Ljava/lang/Throwable;)V

    throw v1
.end method

.method public static put(Ljava/lang/String;Ljava/lang/String;)V
    .locals 2
    .param p0, "key"    # Ljava/lang/String;
    .param p1, "value"    # Ljava/lang/String;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/bianfeng/ymnsdk/utilslib/exception/YmnException;
        }
    .end annotation

    .line 61
    :try_start_0
    sget-object v0, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->preferences:Landroid/content/SharedPreferences;

    invoke-interface {v0}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object v0

    .line 62
    .local v0, "editor":Landroid/content/SharedPreferences$Editor;
    invoke-interface {v0, p0, p1}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    .line 63
    invoke-interface {v0}, Landroid/content/SharedPreferences$Editor;->apply()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 66
    .end local v0    # "editor":Landroid/content/SharedPreferences$Editor;
    nop

    .line 67
    return-void

    .line 64
    :catch_0
    move-exception v0

    .line 65
    .local v0, "e":Ljava/lang/Exception;
    new-instance v1, Lcom/bianfeng/ymnsdk/utilslib/exception/YmnException;

    invoke-direct {v1, v0}, Lcom/bianfeng/ymnsdk/utilslib/exception/YmnException;-><init>(Ljava/lang/Throwable;)V

    throw v1
.end method

.method public static put(Ljava/lang/String;Z)V
    .locals 2
    .param p0, "key"    # Ljava/lang/String;
    .param p1, "value"    # Z
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/bianfeng/ymnsdk/utilslib/exception/YmnException;
        }
    .end annotation

    .line 71
    :try_start_0
    sget-object v0, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->preferences:Landroid/content/SharedPreferences;

    invoke-interface {v0}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object v0

    .line 72
    .local v0, "editor":Landroid/content/SharedPreferences$Editor;
    invoke-interface {v0, p0, p1}, Landroid/content/SharedPreferences$Editor;->putBoolean(Ljava/lang/String;Z)Landroid/content/SharedPreferences$Editor;

    .line 73
    invoke-interface {v0}, Landroid/content/SharedPreferences$Editor;->apply()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 76
    .end local v0    # "editor":Landroid/content/SharedPreferences$Editor;
    nop

    .line 78
    return-void

    .line 74
    :catch_0
    move-exception v0

    .line 75
    .local v0, "e":Ljava/lang/Exception;
    new-instance v1, Lcom/bianfeng/ymnsdk/utilslib/exception/YmnException;

    invoke-direct {v1, v0}, Lcom/bianfeng/ymnsdk/utilslib/exception/YmnException;-><init>(Ljava/lang/Throwable;)V

    throw v1
.end method

.method public static remove(Ljava/lang/String;)V
    .locals 1
    .param p0, "key"    # Ljava/lang/String;

    .line 137
    sget-object v0, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->preferences:Landroid/content/SharedPreferences;

    if-eqz v0, :cond_0

    .line 138
    invoke-interface {v0}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object v0

    .line 139
    .local v0, "editor":Landroid/content/SharedPreferences$Editor;
    invoke-interface {v0, p0}, Landroid/content/SharedPreferences$Editor;->remove(Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    .line 141
    .end local v0    # "editor":Landroid/content/SharedPreferences$Editor;
    :cond_0
    return-void
.end method

.method public static removeAllBeforePlInfo()V
    .locals 3

    .line 260
    sget-object v0, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->mContext:Landroid/content/Context;

    if-nez v0, :cond_0

    .line 261
    const-string v0, "Ymnsdk"

    const-string v1, "\u672a\u521d\u59cb\u5316utils"

    invoke-static {v0, v1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 262
    return-void

    .line 264
    :cond_0
    const/4 v1, 0x0

    const-string v2, "ymnsdk_pl_info"

    invoke-virtual {v0, v2, v1}, Landroid/content/Context;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object v0

    .line 265
    .local v0, "privacyPreferences":Landroid/content/SharedPreferences;
    invoke-interface {v0}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object v1

    .line 266
    .local v1, "editor":Landroid/content/SharedPreferences$Editor;
    sget-object v2, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->pl_imei:Ljava/lang/String;

    invoke-interface {v1, v2}, Landroid/content/SharedPreferences$Editor;->remove(Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    .line 267
    sget-object v2, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->pl_imsi:Ljava/lang/String;

    invoke-interface {v1, v2}, Landroid/content/SharedPreferences$Editor;->remove(Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    .line 268
    sget-object v2, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->pl_ip:Ljava/lang/String;

    invoke-interface {v1, v2}, Landroid/content/SharedPreferences$Editor;->remove(Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    .line 269
    sget-object v2, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->pl_androidid:Ljava/lang/String;

    invoke-interface {v1, v2}, Landroid/content/SharedPreferences$Editor;->remove(Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    .line 270
    sget-object v2, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->pl_network:Ljava/lang/String;

    invoke-interface {v1, v2}, Landroid/content/SharedPreferences$Editor;->remove(Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    .line 271
    sget-object v2, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->pl_model:Ljava/lang/String;

    invoke-interface {v1, v2}, Landroid/content/SharedPreferences$Editor;->remove(Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    .line 272
    sget-object v2, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->pl_os_version:Ljava/lang/String;

    invoke-interface {v1, v2}, Landroid/content/SharedPreferences$Editor;->remove(Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    .line 273
    sget-object v2, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->pl_soft_list:Ljava/lang/String;

    invoke-interface {v1, v2}, Landroid/content/SharedPreferences$Editor;->remove(Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    .line 274
    sget-object v2, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->pl_isp:Ljava/lang/String;

    invoke-interface {v1, v2}, Landroid/content/SharedPreferences$Editor;->remove(Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    .line 275
    sget-object v2, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->pl_imei:Ljava/lang/String;

    invoke-interface {v1, v2}, Landroid/content/SharedPreferences$Editor;->remove(Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    .line 276
    sget-object v2, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->pl_imei:Ljava/lang/String;

    invoke-interface {v1, v2}, Landroid/content/SharedPreferences$Editor;->remove(Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    .line 277
    sget-object v2, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->pl_imei:Ljava/lang/String;

    invoke-interface {v1, v2}, Landroid/content/SharedPreferences$Editor;->remove(Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    .line 278
    sget-object v2, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->pl_imei:Ljava/lang/String;

    invoke-interface {v1, v2}, Landroid/content/SharedPreferences$Editor;->remove(Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    .line 279
    invoke-interface {v1}, Landroid/content/SharedPreferences$Editor;->apply()V

    .line 280
    return-void
.end method

.method public static setPLReportStatus(Ljava/lang/String;)V
    .locals 3
    .param p0, "uid"    # Ljava/lang/String;

    .line 315
    sget-object v0, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->mContext:Landroid/content/Context;

    if-eqz v0, :cond_1

    if-nez p0, :cond_0

    goto :goto_0

    .line 319
    :cond_0
    const/4 v1, 0x0

    const-string v2, "ymnsdk_pl_info"

    invoke-virtual {v0, v2, v1}, Landroid/content/Context;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object v0

    .line 320
    .local v0, "privacyPreferences":Landroid/content/SharedPreferences;
    invoke-interface {v0}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object v1

    .line 321
    .local v1, "editor":Landroid/content/SharedPreferences$Editor;
    const-string v2, "1"

    invoke-interface {v1, p0, v2}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    .line 322
    invoke-interface {v1}, Landroid/content/SharedPreferences$Editor;->apply()V

    .line 324
    return-void

    .line 316
    .end local v0    # "privacyPreferences":Landroid/content/SharedPreferences;
    .end local v1    # "editor":Landroid/content/SharedPreferences$Editor;
    :cond_1
    :goto_0
    const-string v0, "Ymnsdk"

    const-string v1, "\u672a\u521d\u59cb\u5316utils"

    invoke-static {v0, v1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 317
    return-void
.end method

.method public static setPLStringToSP(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 5
    .param p0, "name"    # Ljava/lang/String;
    .param p1, "key"    # Ljava/lang/String;
    .param p2, "value"    # Ljava/lang/String;

    .line 328
    sget-object v0, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->mContext:Landroid/content/Context;

    if-eqz v0, :cond_2

    if-eqz p2, :cond_2

    invoke-virtual {p2}, Ljava/lang/String;->isEmpty()Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_0

    .line 332
    :cond_0
    sget-object v0, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->mContext:Landroid/content/Context;

    const/4 v1, 0x0

    invoke-virtual {v0, p0, v1}, Landroid/content/Context;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object v0

    .line 333
    .local v0, "privacyPreferences":Landroid/content/SharedPreferences;
    invoke-interface {v0}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object v1

    .line 334
    .local v1, "editor":Landroid/content/SharedPreferences$Editor;
    invoke-static {p1}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->getPlTypeID(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    .line 337
    .local v2, "modeID":Ljava/lang/String;
    :try_start_0
    invoke-static {p0, v2}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->getPLArrayFormSP(Ljava/lang/String;Ljava/lang/String;)Ljava/util/ArrayList;

    move-result-object v3

    .line 339
    .local v3, "localArr":Ljava/util/ArrayList;
    invoke-virtual {v3, p2}, Ljava/util/ArrayList;->contains(Ljava/lang/Object;)Z

    move-result v4

    if-nez v4, :cond_1

    .line 340
    invoke-virtual {v3, p2}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 342
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;

    move-result-object v4

    invoke-virtual {v4, v3}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v4

    invoke-interface {v1, v2, v4}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;
    :try_end_0
    .catch Lcom/bianfeng/ymnsdk/utilslib/exception/YmnException; {:try_start_0 .. :try_end_0} :catch_0

    .line 346
    .end local v3    # "localArr":Ljava/util/ArrayList;
    :cond_1
    nop

    .line 348
    invoke-interface {v1, p1, p2}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    .line 349
    invoke-interface {v1}, Landroid/content/SharedPreferences$Editor;->apply()V

    .line 351
    return-void

    .line 344
    :catch_0
    move-exception v3

    .line 345
    .local v3, "e":Lcom/bianfeng/ymnsdk/utilslib/exception/YmnException;
    new-instance v4, Ljava/lang/RuntimeException;

    invoke-direct {v4, v3}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/Throwable;)V

    throw v4

    .line 329
    .end local v0    # "privacyPreferences":Landroid/content/SharedPreferences;
    .end local v1    # "editor":Landroid/content/SharedPreferences$Editor;
    .end local v2    # "modeID":Ljava/lang/String;
    .end local v3    # "e":Lcom/bianfeng/ymnsdk/utilslib/exception/YmnException;
    :cond_2
    :goto_0
    const-string v0, "Ymnsdk"

    const-string v1, "\u672a\u521d\u59cb\u5316utils"

    invoke-static {v0, v1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 330
    return-void
.end method

.method public static setPLUid(Ljava/lang/String;)V
    .locals 3
    .param p0, "uid"    # Ljava/lang/String;

    .line 292
    sget-object v0, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->mContext:Landroid/content/Context;

    if-eqz v0, :cond_1

    if-nez p0, :cond_0

    goto :goto_0

    .line 296
    :cond_0
    const/4 v1, 0x0

    const-string v2, "ymnsdk_pl_info"

    invoke-virtual {v0, v2, v1}, Landroid/content/Context;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object v0

    .line 297
    .local v0, "privacyPreferences":Landroid/content/SharedPreferences;
    invoke-interface {v0}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object v1

    .line 298
    .local v1, "editor":Landroid/content/SharedPreferences$Editor;
    const-string v2, "pl_uid"

    invoke-interface {v1, v2, p0}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    .line 299
    invoke-interface {v1}, Landroid/content/SharedPreferences$Editor;->apply()V

    .line 301
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->mergePlInfoToUser()V

    .line 303
    return-void

    .line 293
    .end local v0    # "privacyPreferences":Landroid/content/SharedPreferences;
    .end local v1    # "editor":Landroid/content/SharedPreferences$Editor;
    :cond_1
    :goto_0
    const-string v0, "Ymnsdk"

    const-string v1, "\u672a\u521d\u59cb\u5316utils"

    invoke-static {v0, v1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 294
    return-void
.end method

.method public static setStringFromBfData(Ljava/lang/String;Ljava/lang/String;)V
    .locals 0
    .param p0, "key"    # Ljava/lang/String;
    .param p1, "value"    # Ljava/lang/String;

    .line 164
    return-void
.end method

.method public static setYmnagreeprivacy()V
    .locals 5

    .line 170
    const-string v0, "ymn_agree_privacy"

    :try_start_0
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->getBoolean(Ljava/lang/String;)Z

    move-result v1

    .line 172
    .local v1, "isAgree":Z
    if-nez v1, :cond_0

    .line 173
    const-string v2, "ymnsdk"

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "setYmnagreeprivacy: "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v2, v3}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 174
    const/4 v2, 0x1

    invoke-static {v0, v2}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->put(Ljava/lang/String;Z)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 178
    .end local v1    # "isAgree":Z
    :cond_0
    goto :goto_0

    .line 176
    :catch_0
    move-exception v0

    .line 177
    .local v0, "e":Ljava/lang/Exception;
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 179
    .end local v0    # "e":Ljava/lang/Exception;
    :goto_0
    return-void
.end method
