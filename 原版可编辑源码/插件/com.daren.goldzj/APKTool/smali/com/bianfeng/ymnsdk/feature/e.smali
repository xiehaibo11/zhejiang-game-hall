.class public Lcom/bianfeng/ymnsdk/feature/e;
.super Ljava/lang/Object;
.source "YmnURLManager.java"


# static fields
.field private static a:Ljava/lang/String; = ""

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

    const-string v0, "http:47.102.108.186:8087/"

    .line 1
    filled-new-array {v0}, [Ljava/lang/String;

    return-void
.end method

.method private static a()Ljava/lang/String;
    .locals 4

    const-string v0, "url_host_public"

    .line 6
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/feature/YmnProperties;->getValue(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 7
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "YmnProperties.getValue(KEY_URL_HOST_PUBLIC) :"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "YmnURLManager"

    invoke-static {v2, v1}, Lcom/bianfeng/ymnsdk/util/Logger;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 8
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_0

    .line 9
    invoke-static {}, Lcom/bianfeng/platform/executor/AppConfig;->getHostUrl()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/feature/e;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 10
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "keyToUrl(AppConfig.getHostUrl():"

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v2, v1}, Lcom/bianfeng/ymnsdk/util/Logger;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_0
    return-object v0
.end method

.method private static a(Ljava/lang/String;)Ljava/lang/String;
    .locals 1

    const-string v0, "http"

    .line 11
    invoke-virtual {p0, v0}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_0

    return-object p0

    :cond_0
    const-string v0, "V2"

    .line 14
    invoke-virtual {v0, p0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p0

    if-eqz p0, :cond_1

    const-string p0, "ymn.bianfeng.com"

    return-object p0

    :cond_1
    const-string p0, "ymnsdk.bianfeng.com"

    return-object p0
.end method

.method private static a(Landroid/content/Context;)V
    .locals 3

    .line 15
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

    .line 17
    sget-object v0, Lcom/bianfeng/ymnsdk/feature/e;->c:Lcom/bianfeng/ymnsdk/entity/UrlLocalState;

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/entity/UrlLocalState;->isNormalHost()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 19
    sget-object v0, Lcom/bianfeng/ymnsdk/feature/e;->c:Lcom/bianfeng/ymnsdk/entity/UrlLocalState;

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/entity/UrlLocalState;->isNormalContinuedFailsLimited()Z

    move-result v0

    if-eqz v0, :cond_2

    .line 20
    sget-object v0, Lcom/bianfeng/ymnsdk/feature/e;->c:Lcom/bianfeng/ymnsdk/entity/UrlLocalState;

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/entity/UrlLocalState;->resetNormalContinuedFails()V

    .line 21
    sget-object v0, Lcom/bianfeng/ymnsdk/feature/e;->c:Lcom/bianfeng/ymnsdk/entity/UrlLocalState;

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/entity/UrlLocalState;->resetBackupContinuedFails()V

    .line 22
    sget-object v0, Lcom/bianfeng/ymnsdk/feature/e;->c:Lcom/bianfeng/ymnsdk/entity/UrlLocalState;

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/entity/UrlLocalState;->resetBackupRemainTime()V

    .line 23
    sget-object v0, Lcom/bianfeng/ymnsdk/feature/e;->c:Lcom/bianfeng/ymnsdk/entity/UrlLocalState;

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/entity/UrlLocalState;->setCurrentHostToBackup()V

    .line 24
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

    .line 26
    :cond_0
    sget-object v0, Lcom/bianfeng/ymnsdk/feature/e;->c:Lcom/bianfeng/ymnsdk/entity/UrlLocalState;

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/entity/UrlLocalState;->isBackupHost()Z

    move-result v0

    if-eqz v0, :cond_2

    .line 28
    sget-object v0, Lcom/bianfeng/ymnsdk/feature/e;->c:Lcom/bianfeng/ymnsdk/entity/UrlLocalState;

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/entity/UrlLocalState;->isBackupRemainTimeUseup()Z

    move-result v0

    if-eqz v0, :cond_1

    .line 29
    sget-object v0, Lcom/bianfeng/ymnsdk/feature/e;->c:Lcom/bianfeng/ymnsdk/entity/UrlLocalState;

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/entity/UrlLocalState;->resetBackupRemainTime()V

    .line 30
    sget-object v0, Lcom/bianfeng/ymnsdk/feature/e;->c:Lcom/bianfeng/ymnsdk/entity/UrlLocalState;

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/entity/UrlLocalState;->resetNormalContinuedFails()V

    .line 31
    sget-object v0, Lcom/bianfeng/ymnsdk/feature/e;->c:Lcom/bianfeng/ymnsdk/entity/UrlLocalState;

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/entity/UrlLocalState;->setCurrentHostToNormal()V

    .line 32
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

    .line 35
    :cond_1
    sget-object v0, Lcom/bianfeng/ymnsdk/feature/e;->c:Lcom/bianfeng/ymnsdk/entity/UrlLocalState;

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/entity/UrlLocalState;->isBackupContinuedFailsLimited()Z

    move-result v0

    if-eqz v0, :cond_2

    .line 36
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/feature/e;->b(Landroid/content/Context;)V

    const-string v0, "cleaned local state"

    .line 37
    invoke-static {v1, v0}, Lcom/bianfeng/ymnsdk/util/Logger;->w(Ljava/lang/String;Ljava/lang/String;)I

    .line 42
    :cond_2
    :goto_0
    :try_start_0
    sget-object v0, Lcom/bianfeng/ymnsdk/feature/e;->c:Lcom/bianfeng/ymnsdk/entity/UrlLocalState;

    if-eqz v0, :cond_3

    .line 43
    sget-object p0, Lcom/bianfeng/ymnsdk/feature/e;->c:Lcom/bianfeng/ymnsdk/entity/UrlLocalState;

    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/entity/UrlLocalState;->getCurrentHost()Ljava/lang/String;

    move-result-object p0

    sput-object p0, Lcom/bianfeng/ymnsdk/feature/e;->a:Ljava/lang/String;

    goto :goto_1

    .line 45
    :cond_3
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/feature/e;->g(Landroid/content/Context;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_1

    :catch_0
    move-exception p0

    .line 48
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    :goto_1
    return-void
.end method

.method public static a(Landroid/content/Context;Lcom/bianfeng/ymnsdk/entity/UrlConfig;)V
    .locals 0

    .line 1
    :try_start_0
    invoke-static {p0, p1}, Lcom/bianfeng/ymnsdk/feature/d;->a(Landroid/content/Context;Lcom/bianfeng/ymnsdk/entity/UrlConfig;)V

    .line 2
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/feature/e;->g(Landroid/content/Context;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    .line 4
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-void
.end method

.method public static a(Landroid/content/Context;Lcom/bianfeng/ymnsdk/entity/UrlLocalState;)V
    .locals 0

    .line 5
    invoke-static {p0, p1}, Lcom/bianfeng/ymnsdk/feature/d;->a(Landroid/content/Context;Lcom/bianfeng/ymnsdk/entity/UrlLocalState;)V

    return-void
.end method

.method private static b()Ljava/lang/String;
    .locals 2

    const-string v0, "url_host_test"

    .line 1
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/feature/YmnProperties;->getValue(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 2
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_0

    const-string v0, "119.97.159.53:8080"

    :cond_0
    return-object v0
.end method

.method public static b(Landroid/content/Context;)V
    .locals 1

    .line 3
    :try_start_0
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/feature/d;->a(Landroid/content/Context;)V

    const/4 v0, 0x0

    .line 4
    sput-object v0, Lcom/bianfeng/ymnsdk/feature/e;->c:Lcom/bianfeng/ymnsdk/entity/UrlLocalState;

    .line 5
    sget-object v0, Lcom/bianfeng/ymnsdk/feature/e;->b:Ljava/util/Map;

    invoke-interface {v0}, Ljava/util/Map;->clear()V

    .line 6
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/feature/e;->g(Landroid/content/Context;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    .line 8
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-void
.end method

.method public static c(Landroid/content/Context;)Ljava/lang/String;
    .locals 2

    .line 1
    :try_start_0
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/feature/e;->d(Landroid/content/Context;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 3
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 5
    :goto_0
    sget-object v0, Lcom/bianfeng/ymnsdk/feature/e;->a:Ljava/lang/String;

    const-string v1, "http"

    invoke-virtual {v0, v1}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_2

    .line 6
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

    .line 9
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

    .line 10
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

    :cond_2
    :goto_2
    const/4 v0, 0x0

    const-string v1, "SP_YMN_CHANGE_HOST"

    .line 15
    invoke-virtual {p0, v1, v0}, Landroid/content/Context;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object p0

    const-string v0, ""

    .line 16
    invoke-interface {p0, v1, v0}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    .line 17
    invoke-virtual {p0}, Ljava/lang/String;->isEmpty()Z

    move-result v0

    if-nez v0, :cond_3

    .line 18
    sput-object p0, Lcom/bianfeng/ymnsdk/feature/e;->a:Ljava/lang/String;

    .line 20
    :cond_3
    sget-object p0, Lcom/bianfeng/ymnsdk/feature/e;->a:Ljava/lang/String;

    return-object p0
.end method

.method public static d(Landroid/content/Context;)V
    .locals 0

    .line 1
    :try_start_0
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/feature/e;->f(Landroid/content/Context;)V

    .line 2
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/feature/e;->e(Landroid/content/Context;)Lcom/bianfeng/ymnsdk/entity/UrlLocalState;

    .line 3
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/feature/e;->g(Landroid/content/Context;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    .line 5
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-void
.end method

.method public static e(Landroid/content/Context;)Lcom/bianfeng/ymnsdk/entity/UrlLocalState;
    .locals 0

    .line 1
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/feature/d;->e(Landroid/content/Context;)Lcom/bianfeng/ymnsdk/entity/UrlLocalState;

    move-result-object p0

    sput-object p0, Lcom/bianfeng/ymnsdk/feature/e;->c:Lcom/bianfeng/ymnsdk/entity/UrlLocalState;

    return-object p0
.end method

.method private static f(Landroid/content/Context;)V
    .locals 0

    .line 1
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/feature/d;->f(Landroid/content/Context;)Ljava/util/Map;

    move-result-object p0

    sput-object p0, Lcom/bianfeng/ymnsdk/feature/e;->b:Ljava/util/Map;

    return-void
.end method

.method private static g(Landroid/content/Context;)V
    .locals 2
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/lang/Exception;
        }
    .end annotation

    .line 1
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/feature/e;->k(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/bianfeng/ymnsdk/feature/e;->a:Ljava/lang/String;

    .line 3
    sget-object v0, Lcom/bianfeng/ymnsdk/feature/e;->a:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    const-string v1, "YmnURLManager"

    if-eqz v0, :cond_0

    .line 4
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/feature/e;->j(Landroid/content/Context;)Ljava/lang/String;

    move-result-object p0

    sput-object p0, Lcom/bianfeng/ymnsdk/feature/e;->a:Ljava/lang/String;

    .line 5
    new-instance p0, Ljava/lang/StringBuilder;

    invoke-direct {p0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "\u4ece\u79c1\u6709\u6587\u4ef6\uff08\u8fdc\u7a0b\uff09\u8bfb\u53d6\u8bf7\u6c42\u5730\u5740 "

    invoke-virtual {p0, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v0, Lcom/bianfeng/ymnsdk/feature/e;->a:Ljava/lang/String;

    invoke-virtual {p0, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {v1, p0}, Lcom/bianfeng/ymnsdk/util/Logger;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 8
    :cond_0
    sget-object p0, Lcom/bianfeng/ymnsdk/feature/e;->a:Ljava/lang/String;

    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p0

    if-eqz p0, :cond_2

    .line 9
    invoke-static {}, Lcom/bianfeng/platform/executor/AppConfig;->isDebug()Z

    move-result p0

    if-eqz p0, :cond_1

    .line 10
    invoke-static {}, Lcom/bianfeng/ymnsdk/feature/e;->b()Ljava/lang/String;

    move-result-object p0

    sput-object p0, Lcom/bianfeng/ymnsdk/feature/e;->a:Ljava/lang/String;

    goto :goto_0

    .line 12
    :cond_1
    invoke-static {}, Lcom/bianfeng/ymnsdk/feature/e;->a()Ljava/lang/String;

    move-result-object p0

    sput-object p0, Lcom/bianfeng/ymnsdk/feature/e;->a:Ljava/lang/String;

    .line 15
    :cond_2
    :goto_0
    new-instance p0, Ljava/lang/StringBuilder;

    invoke-direct {p0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "runtime host is "

    invoke-virtual {p0, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v0, Lcom/bianfeng/ymnsdk/feature/e;->a:Ljava/lang/String;

    invoke-virtual {p0, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {v1, p0}, Lcom/bianfeng/ymnsdk/util/Logger;->d(Ljava/lang/String;Ljava/lang/String;)I

    return-void
.end method

.method public static h(Landroid/content/Context;)V
    .locals 1

    .line 1
    sget-object v0, Lcom/bianfeng/ymnsdk/feature/e;->c:Lcom/bianfeng/ymnsdk/entity/UrlLocalState;

    if-eqz v0, :cond_2

    .line 2
    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/entity/UrlLocalState;->isNormalHost()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 3
    sget-object v0, Lcom/bianfeng/ymnsdk/feature/e;->c:Lcom/bianfeng/ymnsdk/entity/UrlLocalState;

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/entity/UrlLocalState;->increaseNormalContinuedFails()V

    goto :goto_0

    .line 4
    :cond_0
    sget-object v0, Lcom/bianfeng/ymnsdk/feature/e;->c:Lcom/bianfeng/ymnsdk/entity/UrlLocalState;

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/entity/UrlLocalState;->isBackupHost()Z

    move-result v0

    if-eqz v0, :cond_1

    .line 5
    sget-object v0, Lcom/bianfeng/ymnsdk/feature/e;->c:Lcom/bianfeng/ymnsdk/entity/UrlLocalState;

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/entity/UrlLocalState;->increaseBackupContinuedFails()V

    .line 7
    :cond_1
    :goto_0
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/feature/e;->a(Landroid/content/Context;)V

    .line 8
    sget-object v0, Lcom/bianfeng/ymnsdk/feature/e;->c:Lcom/bianfeng/ymnsdk/entity/UrlLocalState;

    invoke-static {p0, v0}, Lcom/bianfeng/ymnsdk/feature/e;->a(Landroid/content/Context;Lcom/bianfeng/ymnsdk/entity/UrlLocalState;)V

    :cond_2
    return-void
.end method

.method public static i(Landroid/content/Context;)V
    .locals 1

    .line 1
    sget-object v0, Lcom/bianfeng/ymnsdk/feature/e;->c:Lcom/bianfeng/ymnsdk/entity/UrlLocalState;

    if-eqz v0, :cond_1

    .line 2
    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/entity/UrlLocalState;->resetNormalContinuedFails()V

    .line 3
    sget-object v0, Lcom/bianfeng/ymnsdk/feature/e;->c:Lcom/bianfeng/ymnsdk/entity/UrlLocalState;

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/entity/UrlLocalState;->resetBackupContinuedFails()V

    .line 4
    sget-object v0, Lcom/bianfeng/ymnsdk/feature/e;->c:Lcom/bianfeng/ymnsdk/entity/UrlLocalState;

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/entity/UrlLocalState;->isBackupHost()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 5
    sget-object v0, Lcom/bianfeng/ymnsdk/feature/e;->c:Lcom/bianfeng/ymnsdk/entity/UrlLocalState;

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/entity/UrlLocalState;->reduceBackupRemainTime()V

    .line 6
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/feature/e;->a(Landroid/content/Context;)V

    .line 8
    :cond_0
    sget-object v0, Lcom/bianfeng/ymnsdk/feature/e;->c:Lcom/bianfeng/ymnsdk/entity/UrlLocalState;

    invoke-static {p0, v0}, Lcom/bianfeng/ymnsdk/feature/e;->a(Landroid/content/Context;Lcom/bianfeng/ymnsdk/entity/UrlLocalState;)V

    :cond_1
    return-void
.end method

.method private static j(Landroid/content/Context;)Ljava/lang/String;
    .locals 0

    .line 1
    sget-object p0, Lcom/bianfeng/ymnsdk/feature/e;->c:Lcom/bianfeng/ymnsdk/entity/UrlLocalState;

    if-eqz p0, :cond_0

    .line 2
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/entity/UrlLocalState;->getCurrentHost()Ljava/lang/String;

    move-result-object p0

    return-object p0

    :cond_0
    const/4 p0, 0x0

    return-object p0
.end method

.method private static k(Landroid/content/Context;)Ljava/lang/String;
    .locals 3
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/lang/Exception;
        }
    .end annotation

    const-string p0, ""

    .line 1
    :try_start_0
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/ResourceUtil;->isSdcardReady()Z

    move-result v0

    if-nez v0, :cond_0

    return-object p0

    .line 4
    :cond_0
    new-instance v0, Ljava/io/File;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {}, Lcom/bianfeng/ymnsdk/util/ResourceUtil;->getSdcardPath()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, ".bftj/sdk/ymnDebug"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-direct {v0, v1}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 5
    invoke-virtual {v0}, Ljava/io/File;->exists()Z

    move-result v1

    if-nez v1, :cond_1

    return-object p0

    .line 8
    :cond_1
    new-instance v1, Ljava/util/Properties;

    invoke-direct {v1}, Ljava/util/Properties;-><init>()V

    .line 9
    new-instance v2, Ljava/io/FileInputStream;

    invoke-direct {v2, v0}, Ljava/io/FileInputStream;-><init>(Ljava/io/File;)V

    invoke-virtual {v1, v2}, Ljava/util/Properties;->load(Ljava/io/InputStream;)V

    const-string v0, "url_host_ymnsdk"

    .line 10
    invoke-virtual {v1, v0}, Ljava/util/Properties;->getProperty(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object p0

    :catch_0
    move-exception v0

    .line 12
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    return-object p0
.end method
