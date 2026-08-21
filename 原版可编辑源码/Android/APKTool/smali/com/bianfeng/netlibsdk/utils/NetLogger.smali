.class public Lcom/bianfeng/netlibsdk/utils/NetLogger;
.super Ljava/lang/Object;
.source "NetLogger.java"


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 6
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static e(Ljava/lang/String;)V
    .locals 2

    .line 8
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, " NetLogger: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {p0}, Lcom/bianfeng/ymnsdk/utilslib/log/UtilsLogger;->e(Ljava/lang/String;)I

    return-void
.end method

.method public static i(Ljava/lang/String;)V
    .locals 2

    .line 12
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, " NetLogger: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {p0}, Lcom/bianfeng/ymnsdk/utilslib/log/UtilsLogger;->i(Ljava/lang/String;)I

    return-void
.end method

.method public static updateState()V
    .locals 0

    .line 16
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/log/UtilsLogger;->updateState()V

    return-void
.end method
