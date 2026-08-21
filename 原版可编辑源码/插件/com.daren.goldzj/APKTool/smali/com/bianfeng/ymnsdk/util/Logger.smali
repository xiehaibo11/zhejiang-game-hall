.class public Lcom/bianfeng/ymnsdk/util/Logger;
.super Ljava/lang/Object;
.source "Logger.java"


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 1
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static d(Ljava/lang/String;)I
    .locals 0

    .line 2
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/utilslib/log/UtilsLogger;->d(Ljava/lang/String;)I

    move-result p0

    return p0
.end method

.method public static d(Ljava/lang/String;Ljava/lang/String;)I
    .locals 0

    .line 1
    invoke-static {p0, p1}, Lcom/bianfeng/ymnsdk/utilslib/log/UtilsLogger;->d(Ljava/lang/String;Ljava/lang/String;)I

    move-result p0

    return p0
.end method

.method public static dRich(Ljava/lang/String;)I
    .locals 0

    .line 1
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/util/Logger;->rich(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-static {p0}, Lcom/bianfeng/ymnsdk/utilslib/log/UtilsLogger;->dRich(Ljava/lang/String;)I

    move-result p0

    return p0
.end method

.method public static e(Ljava/lang/String;)I
    .locals 0

    .line 2
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/utilslib/log/UtilsLogger;->e(Ljava/lang/String;)I

    move-result p0

    return p0
.end method

.method public static e(Ljava/lang/String;Ljava/lang/String;)I
    .locals 0

    .line 1
    invoke-static {p0, p1}, Lcom/bianfeng/ymnsdk/utilslib/log/UtilsLogger;->e(Ljava/lang/String;Ljava/lang/String;)I

    move-result p0

    return p0
.end method

.method public static eRich(Ljava/lang/String;)I
    .locals 0

    .line 1
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/util/Logger;->rich(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-static {p0}, Lcom/bianfeng/ymnsdk/utilslib/log/UtilsLogger;->e(Ljava/lang/String;)I

    move-result p0

    return p0
.end method

.method public static getCacheLog()Ljava/lang/StringBuilder;
    .locals 1

    .line 1
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/log/UtilsLogger;->getCacheLog()Ljava/lang/StringBuilder;

    move-result-object v0

    return-object v0
.end method

.method public static i(Ljava/lang/String;)I
    .locals 0

    .line 2
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/utilslib/log/UtilsLogger;->i(Ljava/lang/String;)I

    move-result p0

    return p0
.end method

.method public static i(Ljava/lang/String;Ljava/lang/String;)I
    .locals 0

    .line 1
    invoke-static {p0, p1}, Lcom/bianfeng/ymnsdk/utilslib/log/UtilsLogger;->i(Ljava/lang/String;Ljava/lang/String;)I

    move-result p0

    return p0
.end method

.method public static printlog(ILjava/lang/String;Ljava/lang/String;)I
    .locals 0

    .line 1
    invoke-static {p0, p1, p2}, Lcom/bianfeng/ymnsdk/utilslib/log/UtilsLogger;->printlog(ILjava/lang/String;Ljava/lang/String;)I

    move-result p0

    return p0
.end method

.method public static rich(Ljava/lang/String;)Ljava/lang/String;
    .locals 0

    .line 1
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/utilslib/log/UtilsLogger;->rich(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method public static setLogToCache(Z)V
    .locals 0

    .line 1
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/utilslib/log/UtilsLogger;->setLogToCache(Z)V

    return-void
.end method

.method public static updateState()V
    .locals 0

    .line 1
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/log/UtilsLogger;->updateState()V

    return-void
.end method

.method public static v(Ljava/lang/String;)I
    .locals 0

    .line 2
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/utilslib/log/UtilsLogger;->v(Ljava/lang/String;)I

    move-result p0

    return p0
.end method

.method public static v(Ljava/lang/String;Ljava/lang/String;)I
    .locals 0

    .line 1
    invoke-static {p0, p1}, Lcom/bianfeng/ymnsdk/utilslib/log/UtilsLogger;->v(Ljava/lang/String;Ljava/lang/String;)I

    move-result p0

    return p0
.end method

.method public static w(Ljava/lang/String;)I
    .locals 0

    .line 2
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/utilslib/log/UtilsLogger;->w(Ljava/lang/String;)I

    move-result p0

    return p0
.end method

.method public static w(Ljava/lang/String;Ljava/lang/String;)I
    .locals 0

    .line 1
    invoke-static {p0, p1}, Lcom/bianfeng/ymnsdk/utilslib/log/UtilsLogger;->w(Ljava/lang/String;Ljava/lang/String;)I

    move-result p0

    return p0
.end method

.method public static wRich(Ljava/lang/String;)I
    .locals 0

    .line 1
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/util/Logger;->rich(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-static {p0}, Lcom/bianfeng/ymnsdk/utilslib/log/UtilsLogger;->w(Ljava/lang/String;)I

    move-result p0

    return p0
.end method
