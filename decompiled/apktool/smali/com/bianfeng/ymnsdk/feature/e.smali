.class public Lcom/bianfeng/ymnsdk/feature/e;
.super Ljava/lang/Object;
.source "YmnURLManager.java"


# static fields
.field private static a:Ljava/lang/String;

.field private static b:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Lcom/bianfeng/ymnsdk/entity/UrlConfig;",
            ">;"
        }
    .end annotation
.end field

.field public static c:Lcom/bianfeng/ymnsdk/entity/UrlLocalState;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 35
    const-string v0, "http:47.102.108.186:8087/"

    filled-new-array {v0}, [Ljava/lang/String;

    .line 45
    const-string v0, ""

    sput-object v0, Lcom/bianfeng/ymnsdk/feature/e;->a:Ljava/lang/String;

    return-void
.end method

.method private static a()Ljava/lang/String;
    .locals 4

    .line 174
    const-string v0, "url_host_public"

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/feature/YmnProperties;->getValue(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 175
    .local v0, "url":Ljava/lang/String;
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "YmnProperties.getValue(KEY_URL_HOST_PUBLIC) :"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "YmnURLManager"

    invoke-static {v2, v1}, Lcom/bianfeng/ymnsdk/util/Logger;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 176
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_0

    .line 177
    invoke-static {}, Lcom/bianfeng/platform/executor/AppConfig;->getHostUrl()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/bianfeng/ymnsdk/feature/e;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 178
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "keyToUrl(AppConfig.getHostUrl():"

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v2, v1}, Lcom/bianfeng/ymnsdk/util/Logger;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 180
    :cond_0
    return-object v0
.end method

.method private static a(Ljava/lang/String;)Ljava/lang/String;
    .locals 1
    .param p0, "key"    # Ljava/lang/String;

    .line 184
    const-string v0, "http"

    invoke-virtual {p0, v0}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 185
    return-object p0

    .line 187
    :cond_0
    const-string v0, "V2"

    invoke-virtual {v0, p0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 188
    const-string v0, "ymn.bianfeng.com"

    return-object v0

    .line 190
    :cond_1
    const-string v0, "ymnsdk.bianfeng.com"

    return-object v0
.end method

.method private static a(Landroid/content/Context;)V
    .locals 3
    .param p0, "context"    # Landroid/content/Context;

    .line 239
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "localState is "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v1, Lcom/bianfeng/ymnsdk/feature/e;->c:Lcom/bianfeng/ymnsdk/entity/UrlLocalState;

    invoke-static {v1}, Lcom/bianfeng/ymnsdk/util/thridsdk/YmnGsonUtil;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "YmnURLManager"

    invoke-static {v1, v0}, Lcom/bianfeng/ymnsdk/util/Logger;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 241
    sget-object v0, Lcom/bianfeng/ymnsdk/feature/e;->c:Lcom/bianfeng/ymnsdk/entity/UrlLocalState;

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/entity/UrlLocalState;->isNormalHost()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 243
    sget-object v0, Lcom/bianfeng/ymnsdk/feature/e;->c:Lcom/bianfeng/ymnsdk/entity/UrlLocalState;

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/entity/UrlLocalState;->isNormalContinuedFailsLimited()Z

    move-result v0

    if-eqz v0, :cond_2

    .line 244
    sget-object v0, Lcom/bianfeng/ymnsdk/feature/e;->c:Lcom/bianfeng/ymnsdk/entity/UrlLocalState;

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/entity/UrlLocalState;->resetNormalContinuedFails()V

    .line 245
    sget-object v0, Lcom/bianfeng/ymnsdk/feature/e;->c:Lcom/bianfeng/ymnsdk/entity/UrlLocalState;

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/entity/UrlLocalState;->resetBackupContinuedFails()V

    .line 246
    sget-object v0, Lcom/bianfeng/ymnsdk/feature/e;->c:Lcom/bianfeng/ymnsdk/entity/UrlLocalState;

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/entity/UrlLocalState;->resetBackupRemainTime()V

    .line 247
    sget-object v0, Lcom/bianfeng/ymnsdk/feature/e;->c:Lcom/bianfeng/ymnsdk/entity/UrlLocalState;

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/entity/UrlLocalState;->setCurrentHostToBackup()V

    .line 248
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "set host to backup "

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v2, Lcom/bianfeng/ymnsdk/feature/e;->c:Lcom/bianfeng/ymnsdk/entity/UrlLocalState;

    invoke-virtual {v2}, Lcom/bianfeng/ymnsdk/entity/UrlLocalState;->getCurrentHost()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v1, v0}, Lcom/bianfeng/ymnsdk/util/Logger;->w(Ljava/lang/String;Ljava/lang/String;)I

    goto :goto_0

    .line 250
    :cond_0
    sget-object v0, Lcom/bianfeng/ymnsdk/feature/e;->c:Lcom/bianfeng/ymnsdk/entity/UrlLocalState;

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/entity/UrlLocalState;->isBackupHost()Z

    move-result v0

    if-eqz v0, :cond_2

    .line 252
    sget-object v0, Lcom/bianfeng/ymnsdk/feature/e;->c:Lcom/bianfeng/ymnsdk/entity/UrlLocalState;

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/entity/UrlLocalState;->isBackupRemainTimeUseup()Z

    move-result v0

    if-eqz v0, :cond_1

    .line 253
    sget-object v0, Lcom/bianfeng/ymnsdk/feature/e;->c:Lcom/bianfeng/ymnsdk/entity/UrlLocalState;

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/entity/UrlLocalState;->resetBackupRemainTime()V

    .line 254
    sget-object v0, Lcom/bianfeng/ymnsdk/feature/e;->c:Lcom/bianfeng/ymnsdk/entity/UrlLocalState;

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/entity/UrlLocalState;->resetNormalContinuedFails()V

    .line 255
    sget-object v0, Lcom/bianfeng/ymnsdk/feature/e;->c:Lcom/bianfeng/ymnsdk/entity/UrlLocalState;

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/entity/UrlLocalState;->setCurrentHostToNormal()V

    .line 256
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "set host to normal "

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v2, Lcom/bianfeng/ymnsdk/feature/e;->c:Lcom/bianfeng/ymnsdk/entity/UrlLocalState;

    invoke-virtual {v2}, Lcom/bianfeng/ymnsdk/entity/UrlLocalState;->getCurrentHost()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v1, v0}, Lcom/bianfeng/ymnsdk/util/Logger;->w(Ljava/lang/String;Ljava/lang/String;)I

    goto :goto_0

    .line 259
    :cond_1
    sget-object v0, Lcom/bianfeng/ymnsdk/feature/e;->c:Lcom/bianfeng/ymnsdk/entity/UrlLocalState;

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/entity/UrlLocalState;->isBackupContinuedFailsLimited()Z

    move-result v0

    if-eqz v0, :cond_2

    .line 260
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/feature/e;->b(Landroid/content/Context;)V

    .line 261
    const-string v0, "cleaned local state"

    invoke-static {v1, v0}, Lcom/bianfeng/ymnsdk/util/Logger;->w(Ljava/lang/String;Ljava/lang/String;)I

    .line 266
    :cond_2
    :goto_0
    :try_start_0
    sget-object v0, Lcom/bianfeng/ymnsdk/feature/e;->c:Lcom/bianfeng/ymnsdk/entity/UrlLocalState;

    if-eqz v0, :cond_3

    .line 267
    sget-object v0, Lcom/bianfeng/ymnsdk/feature/e;->c:Lcom/bianfeng/ymnsdk/entity/UrlLocalState;

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/entity/UrlLocalState;->getCurrentHost()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/bianfeng/ymnsdk/feature/e;->a:Ljava/lang/String;

    goto :goto_1

    .line 269
    :cond_3
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/feature/e;->g(Landroid/content/Context;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 273
    :goto_1
    goto :goto_2

    .line 271
    :catch_0
    move-exception v0

    .line 272
    .local v0, "e":Ljava/lang/Exception;
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 274
    .end local v0    # "e":Ljava/lang/Exception;
    :goto_2
    return-void
.end method

.method public static a(Landroid/content/Context;Lcom/bianfeng/ymnsdk/entity/UrlConfig;)V
    .locals 1
    .param p0, "context"    # Landroid/content/Context;
    .param p1, "config"    # Lcom/bianfeng/ymnsdk/entity/UrlConfig;

    .line 132
    :try_start_0
    invoke-static {p0, p1}, Lcom/bianfeng/ymnsdk/feature/d;->a(Landroid/content/Context;Lcom/bianfeng/ymnsdk/entity/UrlConfig;)V

    .line 133
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/feature/e;->g(Landroid/content/Context;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 136
    goto :goto_0

    .line 134
    :catch_0
    move-exception v0

    .line 135
    .local v0, "e":Ljava/lang/Exception;
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 137
    .end local v0    # "e":Ljava/lang/Exception;
    :goto_0
    return-void
.end method

.method public static a(Landroid/content/Context;Lcom/bianfeng/ymnsdk/entity/UrlLocalState;)V
    .locals 0
    .param p0, "context"    # Landroid/content/Context;
    .param p1, "mLocalState"    # Lcom/bianfeng/ymnsdk/entity/UrlLocalState;

    .line 140
    invoke-static {p0, p1}, Lcom/bianfeng/ymnsdk/feature/d;->a(Landroid/content/Context;Lcom/bianfeng/ymnsdk/entity/UrlLocalState;)V

    .line 141
    return-void
.end method

.method private static b()Ljava/lang/String;
    .locals 2

    .line 194
    const-string v0, "url_host_test"

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/feature/YmnProperties;->getValue(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 195
    .local v0, "url":Ljava/lang/String;
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_0

    .line 196
    const-string v0, "119.97.159.53:8080"

    .line 198
    :cond_0
    return-object v0
.end method

.method public static b(Landroid/content/Context;)V
    .locals 1
    .param p0, "context"    # Landroid/content/Context;

    .line 278
    :try_start_0
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/feature/d;->a(Landroid/content/Context;)V

    .line 279
    const/4 v0, 0x0

    sput-object v0, Lcom/bianfeng/ymnsdk/feature/e;->c:Lcom/bianfeng/ymnsdk/entity/UrlLocalState;

    .line 280
    sget-object v0, Lcom/bianfeng/ymnsdk/feature/e;->b:Ljava/util/Map;

    invoke-interface {v0}, Ljava/util/Map;->clear()V

    .line 281
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/feature/e;->g(Landroid/content/Context;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 284
    goto :goto_0

    .line 282
    :catch_0
    move-exception v0

    .line 283
    .local v0, "e":Ljava/lang/Exception;
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 285
    .end local v0    # "e":Ljava/lang/Exception;
    :goto_0
    return-void
.end method

.method public static c(Landroid/content/Context;)Ljava/lang/String;
    .locals 3
    .param p0, "context"    # Landroid/content/Context;

    .line 51
    :try_start_0
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/feature/e;->d(Landroid/content/Context;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 54
    goto :goto_0

    .line 52
    :catch_0
    move-exception v0

    .line 53
    .local v0, "e":Ljava/lang/Exception;
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 55
    .end local v0    # "e":Ljava/lang/Exception;
    :goto_0
    sget-object v0, Lcom/bianfeng/ymnsdk/feature/e;->a:Ljava/lang/String;

    const-string v1, "http"

    invoke-virtual {v0, v1}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_2

    .line 56
    sget-object v0, Lcom/bianfeng/ymnsdk/feature/e;->a:Ljava/lang/String;

    const-string v1, "ymnsdk.bianfeng.com"

    invoke-virtual {v0, v1}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    sget-object v0, Lcom/bianfeng/ymnsdk/feature/e;->a:Ljava/lang/String;

    const-string v1, "ymn.bianfeng.com"

    invoke-virtual {v0, v1}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_1

    .line 59
    :cond_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "http://"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v1, Lcom/bianfeng/ymnsdk/feature/e;->a:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/bianfeng/ymnsdk/feature/e;->a:Ljava/lang/String;

    goto :goto_2

    .line 57
    :cond_1
    :goto_1
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "https://"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v1, Lcom/bianfeng/ymnsdk/feature/e;->a:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/bianfeng/ymnsdk/feature/e;->a:Ljava/lang/String;

    .line 62
    :cond_2
    :goto_2
    const/4 v0, 0x0

    const-string v1, "SP_YMN_CHANGE_HOST"

    invoke-virtual {p0, v1, v0}, Landroid/content/Context;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object v0

    .line 63
    .local v0, "preferences":Landroid/content/SharedPreferences;
    const-string v2, ""

    invoke-interface {v0, v1, v2}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 64
    .local v1, "changeHost":Ljava/lang/String;
    invoke-virtual {v1}, Ljava/lang/String;->isEmpty()Z

    move-result v2

    if-nez v2, :cond_3

    .line 65
    sput-object v1, Lcom/bianfeng/ymnsdk/feature/e;->a:Ljava/lang/String;

    .line 67
    :cond_3
    sget-object v2, Lcom/bianfeng/ymnsdk/feature/e;->a:Ljava/lang/String;

    return-object v2
.end method

.method public static d(Landroid/content/Context;)V
    .locals 1
    .param p0, "context"    # Landroid/content/Context;

    .line 85
    :try_start_0
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/feature/e;->f(Landroid/content/Context;)V

    .line 86
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/feature/e;->e(Landroid/content/Context;)Lcom/bianfeng/ymnsdk/entity/UrlLocalState;

    .line 87
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/feature/e;->g(Landroid/content/Context;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 90
    goto :goto_0

    .line 88
    :catch_0
    move-exception v0

    .line 89
    .local v0, "e":Ljava/lang/Exception;
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 91
    .end local v0    # "e":Ljava/lang/Exception;
    :goto_0
    return-void
.end method

.method public static e(Landroid/content/Context;)Lcom/bianfeng/ymnsdk/entity/UrlLocalState;
    .locals 1
    .param p0, "context"    # Landroid/content/Context;

    .line 102
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/feature/d;->e(Landroid/content/Context;)Lcom/bianfeng/ymnsdk/entity/UrlLocalState;

    move-result-object v0

    sput-object v0, Lcom/bianfeng/ymnsdk/feature/e;->c:Lcom/bianfeng/ymnsdk/entity/UrlLocalState;

    return-object v0
.end method

.method private static f(Landroid/content/Context;)V
    .locals 1
    .param p0, "context"    # Landroid/content/Context;

    .line 98
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/feature/d;->f(Landroid/content/Context;)Ljava/util/Map;

    move-result-object v0

    sput-object v0, Lcom/bianfeng/ymnsdk/feature/e;->b:Ljava/util/Map;

    .line 99
    return-void
.end method

.method private static g(Landroid/content/Context;)V
    .locals 3
    .param p0, "context"    # Landroid/content/Context;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/lang/Exception;
        }
    .end annotation

    .line 107
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/feature/e;->k(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/bianfeng/ymnsdk/feature/e;->a:Ljava/lang/String;

    .line 109
    sget-object v0, Lcom/bianfeng/ymnsdk/feature/e;->a:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    const-string v1, "YmnURLManager"

    if-eqz v0, :cond_0

    .line 110
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/feature/e;->j(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/bianfeng/ymnsdk/feature/e;->a:Ljava/lang/String;

    .line 111
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "\u4ece\u79c1\u6709\u6587\u4ef6\uff08\u8fdc\u7a0b\uff09\u8bfb\u53d6\u8bf7\u6c42\u5730\u5740 "

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v2, Lcom/bianfeng/ymnsdk/feature/e;->a:Ljava/lang/String;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v1, v0}, Lcom/bianfeng/ymnsdk/util/Logger;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 114
    :cond_0
    sget-object v0, Lcom/bianfeng/ymnsdk/feature/e;->a:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_2

    .line 115
    invoke-static {}, Lcom/bianfeng/platform/executor/AppConfig;->isDebug()Z

    move-result v0

    if-eqz v0, :cond_1

    .line 116
    invoke-static {}, Lcom/bianfeng/ymnsdk/feature/e;->b()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/bianfeng/ymnsdk/feature/e;->a:Ljava/lang/String;

    goto :goto_0

    .line 118
    :cond_1
    invoke-static {}, Lcom/bianfeng/ymnsdk/feature/e;->a()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/bianfeng/ymnsdk/feature/e;->a:Ljava/lang/String;

    .line 121
    :cond_2
    :goto_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "runtime host is "

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v2, Lcom/bianfeng/ymnsdk/feature/e;->a:Ljava/lang/String;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v1, v0}, Lcom/bianfeng/ymnsdk/util/Logger;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 122
    return-void
.end method

.method public static h(Landroid/content/Context;)V
    .locals 1
    .param p0, "context"    # Landroid/content/Context;

    .line 227
    sget-object v0, Lcom/bianfeng/ymnsdk/feature/e;->c:Lcom/bianfeng/ymnsdk/entity/UrlLocalState;

    if-eqz v0, :cond_2

    .line 228
    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/entity/UrlLocalState;->isNormalHost()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 229
    sget-object v0, Lcom/bianfeng/ymnsdk/feature/e;->c:Lcom/bianfeng/ymnsdk/entity/UrlLocalState;

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/entity/UrlLocalState;->increaseNormalContinuedFails()V

    goto :goto_0

    .line 230
    :cond_0
    sget-object v0, Lcom/bianfeng/ymnsdk/feature/e;->c:Lcom/bianfeng/ymnsdk/entity/UrlLocalState;

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/entity/UrlLocalState;->isBackupHost()Z

    move-result v0

    if-eqz v0, :cond_1

    .line 231
    sget-object v0, Lcom/bianfeng/ymnsdk/feature/e;->c:Lcom/bianfeng/ymnsdk/entity/UrlLocalState;

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/entity/UrlLocalState;->increaseBackupContinuedFails()V

    .line 233
    :cond_1
    :goto_0
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/feature/e;->a(Landroid/content/Context;)V

    .line 234
    sget-object v0, Lcom/bianfeng/ymnsdk/feature/e;->c:Lcom/bianfeng/ymnsdk/entity/UrlLocalState;

    invoke-static {p0, v0}, Lcom/bianfeng/ymnsdk/feature/e;->a(Landroid/content/Context;Lcom/bianfeng/ymnsdk/entity/UrlLocalState;)V

    .line 236
    :cond_2
    return-void
.end method

.method public static i(Landroid/content/Context;)V
    .locals 1
    .param p0, "context"    # Landroid/content/Context;

    .line 215
    sget-object v0, Lcom/bianfeng/ymnsdk/feature/e;->c:Lcom/bianfeng/ymnsdk/entity/UrlLocalState;

    if-eqz v0, :cond_1

    .line 216
    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/entity/UrlLocalState;->resetNormalContinuedFails()V

    .line 217
    sget-object v0, Lcom/bianfeng/ymnsdk/feature/e;->c:Lcom/bianfeng/ymnsdk/entity/UrlLocalState;

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/entity/UrlLocalState;->resetBackupContinuedFails()V

    .line 218
    sget-object v0, Lcom/bianfeng/ymnsdk/feature/e;->c:Lcom/bianfeng/ymnsdk/entity/UrlLocalState;

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/entity/UrlLocalState;->isBackupHost()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 219
    sget-object v0, Lcom/bianfeng/ymnsdk/feature/e;->c:Lcom/bianfeng/ymnsdk/entity/UrlLocalState;

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/entity/UrlLocalState;->reduceBackupRemainTime()V

    .line 220
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/feature/e;->a(Landroid/content/Context;)V

    .line 222
    :cond_0
    sget-object v0, Lcom/bianfeng/ymnsdk/feature/e;->c:Lcom/bianfeng/ymnsdk/entity/UrlLocalState;

    invoke-static {p0, v0}, Lcom/bianfeng/ymnsdk/feature/e;->a(Landroid/content/Context;Lcom/bianfeng/ymnsdk/entity/UrlLocalState;)V

    .line 224
    :cond_1
    return-void
.end method

.method private static j(Landroid/content/Context;)Ljava/lang/String;
    .locals 1
    .param p0, "context"    # Landroid/content/Context;

    .line 208
    sget-object v0, Lcom/bianfeng/ymnsdk/feature/e;->c:Lcom/bianfeng/ymnsdk/entity/UrlLocalState;

    if-eqz v0, :cond_0

    .line 209
    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/entity/UrlLocalState;->getCurrentHost()Ljava/lang/String;

    move-result-object v0

    return-object v0

    .line 211
    :cond_0
    const/4 v0, 0x0

    return-object v0
.end method

.method private static k(Landroid/content/Context;)Ljava/lang/String;
    .locals 4
    .param p0, "context"    # Landroid/content/Context;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/lang/Exception;
        }
    .end annotation

    .line 152
    const-string v0, ""

    :try_start_0
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/ResourceUtil;->isSdcardReady()Z

    move-result v1

    if-nez v1, :cond_0

    .line 153
    return-object v0

    .line 155
    :cond_0
    new-instance v1, Ljava/io/File;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {}, Lcom/bianfeng/ymnsdk/util/ResourceUtil;->getSdcardPath()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, ".bftj/sdk/ymnDebug"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-direct {v1, v2}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 156
    .local v1, "file":Ljava/io/File;
    invoke-virtual {v1}, Ljava/io/File;->exists()Z

    move-result v2

    if-nez v2, :cond_1

    .line 157
    return-object v0

    .line 159
    :cond_1
    new-instance v2, Ljava/util/Properties;

    invoke-direct {v2}, Ljava/util/Properties;-><init>()V

    .line 160
    .local v2, "properties":Ljava/util/Properties;
    new-instance v3, Ljava/io/FileInputStream;

    invoke-direct {v3, v1}, Ljava/io/FileInputStream;-><init>(Ljava/io/File;)V

    invoke-virtual {v2, v3}, Ljava/util/Properties;->load(Ljava/io/InputStream;)V

    .line 161
    const-string v3, "url_host_ymnsdk"

    invoke-virtual {v2, v3}, Ljava/util/Properties;->getProperty(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object v0

    .line 162
    .end local v1    # "file":Ljava/io/File;
    .end local v2    # "properties":Ljava/util/Properties;
    :catch_0
    move-exception v1

    .line 163
    .local v1, "e":Ljava/lang/Exception;
    invoke-virtual {v1}, Ljava/lang/Exception;->printStackTrace()V

    .line 164
    return-object v0
.end method
