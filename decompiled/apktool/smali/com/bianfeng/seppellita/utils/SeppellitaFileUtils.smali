.class public Lcom/bianfeng/seppellita/utils/SeppellitaFileUtils;
.super Ljava/lang/Object;
.source "SeppellitaFileUtils.java"


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 6
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static delFile()V
    .locals 1

    .line 13
    sget-object v0, Lcom/bianfeng/seppellita/db/base/DBName;->db_name:Ljava/lang/String;

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/utilslib/cache/FileUtils;->removeInsideFile(Ljava/lang/String;)Z

    return-void
.end method

.method public static getDbPath(Ljava/lang/String;)Ljava/lang/String;
    .locals 0

    .line 9
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/utilslib/cache/FileUtils;->getInsideFilePath(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method
