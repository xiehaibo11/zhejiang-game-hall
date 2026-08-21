.class public Lcom/bianfeng/datafunsdk/v;
.super Ljava/lang/Object;
.source "PostFileUtils.java"


# direct methods
.method public static a(Ljava/lang/String;)Ljava/lang/String;
    .locals 0

    .line 1
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/utilslib/cache/FileUtils;->getInsideFilePath(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method public static a()V
    .locals 1

    .line 2
    sget-object v0, Lcom/bianfeng/datafunsdk/m;->a:Ljava/lang/String;

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/utilslib/cache/FileUtils;->removeInsideFile(Ljava/lang/String;)Z

    return-void
.end method
