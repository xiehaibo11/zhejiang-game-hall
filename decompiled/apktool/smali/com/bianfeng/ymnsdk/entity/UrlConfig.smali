.class public Lcom/bianfeng/ymnsdk/entity/UrlConfig;
.super Ljava/lang/Object;
.source "UrlConfig.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/bianfeng/ymnsdk/entity/UrlConfig$Backup;,
        Lcom/bianfeng/ymnsdk/entity/UrlConfig$Normal;,
        Lcom/bianfeng/ymnsdk/entity/UrlConfig$ServerList;
    }
.end annotation


# instance fields
.field private gid:Ljava/lang/String;

.field private level:I

.field private pid:I

.field private serverList:Lcom/bianfeng/ymnsdk/entity/UrlConfig$ServerList;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 5
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public getBackup()Lcom/bianfeng/ymnsdk/entity/UrlConfig$Backup;
    .locals 1

    .line 56
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/entity/UrlConfig;->serverList:Lcom/bianfeng/ymnsdk/entity/UrlConfig$ServerList;

    if-eqz v0, :cond_0

    .line 57
    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/entity/UrlConfig$ServerList;->getBackup()Lcom/bianfeng/ymnsdk/entity/UrlConfig$Backup;

    move-result-object v0

    return-object v0

    .line 59
    :cond_0
    const/4 v0, 0x0

    return-object v0
.end method

.method public getBackupHost()Ljava/lang/String;
    .locals 2

    .line 63
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/entity/UrlConfig;->getBackup()Lcom/bianfeng/ymnsdk/entity/UrlConfig$Backup;

    move-result-object v0

    .line 64
    .local v0, "backup":Lcom/bianfeng/ymnsdk/entity/UrlConfig$Backup;
    if-nez v0, :cond_0

    .line 65
    const/4 v1, 0x0

    return-object v1

    .line 67
    :cond_0
    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/entity/UrlConfig$Backup;->getServer()Ljava/lang/String;

    move-result-object v1

    return-object v1
.end method

.method public getGid()Ljava/lang/String;
    .locals 1

    .line 25
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/entity/UrlConfig;->gid:Ljava/lang/String;

    return-object v0
.end method

.method public getLevel()I
    .locals 1

    .line 29
    iget v0, p0, Lcom/bianfeng/ymnsdk/entity/UrlConfig;->level:I

    return v0
.end method

.method public getMaxBackupAvailableCount()I
    .locals 2

    .line 79
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/entity/UrlConfig;->getBackup()Lcom/bianfeng/ymnsdk/entity/UrlConfig$Backup;

    move-result-object v0

    .line 80
    .local v0, "backup":Lcom/bianfeng/ymnsdk/entity/UrlConfig$Backup;
    if-nez v0, :cond_0

    .line 81
    const/4 v1, 0x0

    return v1

    .line 83
    :cond_0
    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/entity/UrlConfig$Backup;->getRequest_times()I

    move-result v1

    return v1
.end method

.method public getMaxBackupFails()I
    .locals 2

    .line 71
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/entity/UrlConfig;->getBackup()Lcom/bianfeng/ymnsdk/entity/UrlConfig$Backup;

    move-result-object v0

    .line 72
    .local v0, "backup":Lcom/bianfeng/ymnsdk/entity/UrlConfig$Backup;
    if-nez v0, :cond_0

    .line 73
    const/4 v1, 0x0

    return v1

    .line 75
    :cond_0
    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/entity/UrlConfig$Backup;->getMax_fails()I

    move-result v1

    return v1
.end method

.method public getMaxNormalFails()I
    .locals 2

    .line 48
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/entity/UrlConfig;->getNormal()Lcom/bianfeng/ymnsdk/entity/UrlConfig$Normal;

    move-result-object v0

    .line 49
    .local v0, "normal":Lcom/bianfeng/ymnsdk/entity/UrlConfig$Normal;
    if-nez v0, :cond_0

    .line 50
    const/4 v1, 0x0

    return v1

    .line 52
    :cond_0
    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/entity/UrlConfig$Normal;->getMax_fails()I

    move-result v1

    return v1
.end method

.method public getNormal()Lcom/bianfeng/ymnsdk/entity/UrlConfig$Normal;
    .locals 1

    .line 33
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/entity/UrlConfig;->serverList:Lcom/bianfeng/ymnsdk/entity/UrlConfig$ServerList;

    if-eqz v0, :cond_0

    .line 34
    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/entity/UrlConfig$ServerList;->getNormal()Lcom/bianfeng/ymnsdk/entity/UrlConfig$Normal;

    move-result-object v0

    return-object v0

    .line 36
    :cond_0
    const/4 v0, 0x0

    return-object v0
.end method

.method public getNormalHost()Ljava/lang/String;
    .locals 2

    .line 40
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/entity/UrlConfig;->getNormal()Lcom/bianfeng/ymnsdk/entity/UrlConfig$Normal;

    move-result-object v0

    .line 41
    .local v0, "normal":Lcom/bianfeng/ymnsdk/entity/UrlConfig$Normal;
    if-nez v0, :cond_0

    .line 42
    const/4 v1, 0x0

    return-object v1

    .line 44
    :cond_0
    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/entity/UrlConfig$Normal;->getServer()Ljava/lang/String;

    move-result-object v1

    return-object v1
.end method

.method public getPid()I
    .locals 1

    .line 21
    iget v0, p0, Lcom/bianfeng/ymnsdk/entity/UrlConfig;->pid:I

    return v0
.end method

.method public isEnable()Z
    .locals 2

    .line 13
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/entity/UrlConfig;->getNormalHost()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    .line 14
    return v1

    .line 15
    :cond_0
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/entity/UrlConfig;->getBackupHost()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 16
    return v1

    .line 17
    :cond_1
    const/4 v0, 0x1

    return v0
.end method
