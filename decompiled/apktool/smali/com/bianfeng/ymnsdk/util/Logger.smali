.class public Lcom/bianfeng/ymnsdk/util/Logger;
.super Ljava/lang/Object;
.source "Logger.java"


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 5
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static d(Ljava/lang/String;)I
    .locals 1
    .param p0, "msg"    # Ljava/lang/String;

    .line 31
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/utilslib/log/UtilsLogger;->d(Ljava/lang/String;)I

    move-result v0

    return v0
.end method

.method public static d(Ljava/lang/String;Ljava/lang/String;)I
    .locals 1
    .param p0, "tag"    # Ljava/lang/String;
    .param p1, "msg"    # Ljava/lang/String;

    .line 27
    invoke-static {p0, p1}, Lcom/bianfeng/ymnsdk/utilslib/log/UtilsLogger;->d(Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    return v0
.end method

.method public static dRich(Ljava/lang/String;)I
    .locals 1
    .param p0, "msg"    # Ljava/lang/String;

    .line 35
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/util/Logger;->rich(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/utilslib/log/UtilsLogger;->dRich(Ljava/lang/String;)I

    move-result v0

    return v0
.end method

.method public static e(Ljava/lang/String;)I
    .locals 1
    .param p0, "msg"    # Ljava/lang/String;

    .line 63
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/utilslib/log/UtilsLogger;->e(Ljava/lang/String;)I

    move-result v0

    return v0
.end method

.method public static e(Ljava/lang/String;Ljava/lang/String;)I
    .locals 1
    .param p0, "tag"    # Ljava/lang/String;
    .param p1, "msg"    # Ljava/lang/String;

    .line 59
    invoke-static {p0, p1}, Lcom/bianfeng/ymnsdk/utilslib/log/UtilsLogger;->e(Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    return v0
.end method

.method public static eRich(Ljava/lang/String;)I
    .locals 1
    .param p0, "msg"    # Ljava/lang/String;

    .line 67
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/util/Logger;->rich(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/utilslib/log/UtilsLogger;->e(Ljava/lang/String;)I

    move-result v0

    return v0
.end method

.method public static getCacheLog()Ljava/lang/StringBuilder;
    .locals 1

    .line 15
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/log/UtilsLogger;->getCacheLog()Ljava/lang/StringBuilder;

    move-result-object v0

    return-object v0
.end method

.method public static i(Ljava/lang/String;)I
    .locals 1
    .param p0, "msg"    # Ljava/lang/String;

    .line 43
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/utilslib/log/UtilsLogger;->i(Ljava/lang/String;)I

    move-result v0

    return v0
.end method

.method public static i(Ljava/lang/String;Ljava/lang/String;)I
    .locals 1
    .param p0, "tag"    # Ljava/lang/String;
    .param p1, "msg"    # Ljava/lang/String;

    .line 39
    invoke-static {p0, p1}, Lcom/bianfeng/ymnsdk/utilslib/log/UtilsLogger;->i(Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    return v0
.end method

.method public static printlog(ILjava/lang/String;Ljava/lang/String;)I
    .locals 1
    .param p0, "priority"    # I
    .param p1, "tag"    # Ljava/lang/String;
    .param p2, "msg"    # Ljava/lang/String;

    .line 71
    invoke-static {p0, p1, p2}, Lcom/bianfeng/ymnsdk/utilslib/log/UtilsLogger;->printlog(ILjava/lang/String;Ljava/lang/String;)I

    move-result v0

    return v0
.end method

.method public static rich(Ljava/lang/String;)Ljava/lang/String;
    .locals 1
    .param p0, "msg"    # Ljava/lang/String;

    .line 75
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/utilslib/log/UtilsLogger;->rich(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public static setLogToCache(Z)V
    .locals 0
    .param p0, "b"    # Z

    .line 11
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/utilslib/log/UtilsLogger;->setLogToCache(Z)V

    .line 12
    return-void
.end method

.method public static updateState()V
    .locals 0

    .line 8
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/log/UtilsLogger;->updateState()V

    .line 9
    return-void
.end method

.method public static v(Ljava/lang/String;)I
    .locals 1
    .param p0, "msg"    # Ljava/lang/String;

    .line 23
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/utilslib/log/UtilsLogger;->v(Ljava/lang/String;)I

    move-result v0

    return v0
.end method

.method public static v(Ljava/lang/String;Ljava/lang/String;)I
    .locals 1
    .param p0, "tag"    # Ljava/lang/String;
    .param p1, "msg"    # Ljava/lang/String;

    .line 19
    invoke-static {p0, p1}, Lcom/bianfeng/ymnsdk/utilslib/log/UtilsLogger;->v(Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    return v0
.end method

.method public static w(Ljava/lang/String;)I
    .locals 1
    .param p0, "msg"    # Ljava/lang/String;

    .line 51
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/utilslib/log/UtilsLogger;->w(Ljava/lang/String;)I

    move-result v0

    return v0
.end method

.method public static w(Ljava/lang/String;Ljava/lang/String;)I
    .locals 1
    .param p0, "tag"    # Ljava/lang/String;
    .param p1, "msg"    # Ljava/lang/String;

    .line 47
    invoke-static {p0, p1}, Lcom/bianfeng/ymnsdk/utilslib/log/UtilsLogger;->w(Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    return v0
.end method

.method public static wRich(Ljava/lang/String;)I
    .locals 1
    .param p0, "msg"    # Ljava/lang/String;

    .line 55
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/util/Logger;->rich(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/utilslib/log/UtilsLogger;->w(Ljava/lang/String;)I

    move-result v0

    return v0
.end method
