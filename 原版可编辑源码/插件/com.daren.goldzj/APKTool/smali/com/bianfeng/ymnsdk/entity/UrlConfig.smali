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

    .line 1
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public getBackup()Lcom/bianfeng/ymnsdk/entity/UrlConfig$Backup;
    .locals 1

    .line 1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/entity/UrlConfig;->serverList:Lcom/bianfeng/ymnsdk/entity/UrlConfig$ServerList;

    if-eqz v0, :cond_0

    .line 2
    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/entity/UrlConfig$ServerList;->getBackup()Lcom/bianfeng/ymnsdk/entity/UrlConfig$Backup;

    move-result-object v0

    return-object v0

    :cond_0
    const/4 v0, 0x0

    return-object v0
.end method

.method public getBackupHost()Ljava/lang/String;
    .locals 1

    .line 1
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/entity/UrlConfig;->getBackup()Lcom/bianfeng/ymnsdk/entity/UrlConfig$Backup;

    move-result-object v0

    if-nez v0, :cond_0

    const/4 v0, 0x0

    return-object v0

    .line 5
    :cond_0
    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/entity/UrlConfig$Backup;->getServer()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getGid()Ljava/lang/String;
    .locals 1

    .line 1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/entity/UrlConfig;->gid:Ljava/lang/String;

    return-object v0
.end method

.method public getLevel()I
    .locals 1

    .line 1
    iget v0, p0, Lcom/bianfeng/ymnsdk/entity/UrlConfig;->level:I

    return v0
.end method

.method public getMaxBackupAvailableCount()I
    .locals 1

    .line 1
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/entity/UrlConfig;->getBackup()Lcom/bianfeng/ymnsdk/entity/UrlConfig$Backup;

    move-result-object v0

    if-nez v0, :cond_0

    const/4 v0, 0x0

    return v0

    .line 5
    :cond_0
    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/entity/UrlConfig$Backup;->getRequest_times()I

    move-result v0

    return v0
.end method

.method public getMaxBackupFails()I
    .locals 1

    .line 1
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/entity/UrlConfig;->getBackup()Lcom/bianfeng/ymnsdk/entity/UrlConfig$Backup;

    move-result-object v0

    if-nez v0, :cond_0

    const/4 v0, 0x0

    return v0

    .line 5
    :cond_0
    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/entity/UrlConfig$Backup;->getMax_fails()I

    move-result v0

    return v0
.end method

.method public getMaxNormalFails()I
    .locals 1

    .line 1
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/entity/UrlConfig;->getNormal()Lcom/bianfeng/ymnsdk/entity/UrlConfig$Normal;

    move-result-object v0

    if-nez v0, :cond_0

    const/4 v0, 0x0

    return v0

    .line 5
    :cond_0
    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/entity/UrlConfig$Normal;->getMax_fails()I

    move-result v0

    return v0
.end method

.method public getNormal()Lcom/bianfeng/ymnsdk/entity/UrlConfig$Normal;
    .locals 1

    .line 1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/entity/UrlConfig;->serverList:Lcom/bianfeng/ymnsdk/entity/UrlConfig$ServerList;

    if-eqz v0, :cond_0

    .line 2
    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/entity/UrlConfig$ServerList;->getNormal()Lcom/bianfeng/ymnsdk/entity/UrlConfig$Normal;

    move-result-object v0

    return-object v0

    :cond_0
    const/4 v0, 0x0

    return-object v0
.end method

.method public getNormalHost()Ljava/lang/String;
    .locals 1

    .line 1
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/entity/UrlConfig;->getNormal()Lcom/bianfeng/ymnsdk/entity/UrlConfig$Normal;

    move-result-object v0

    if-nez v0, :cond_0

    const/4 v0, 0x0

    return-object v0

    .line 5
    :cond_0
    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/entity/UrlConfig$Normal;->getServer()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getPid()I
    .locals 1

    .line 1
    iget v0, p0, Lcom/bianfeng/ymnsdk/entity/UrlConfig;->pid:I

    return v0
.end method

.method public isEnable()Z
    .locals 2

    .line 1
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/entity/UrlConfig;->getNormalHost()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    return v1

    .line 3
    :cond_0
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/entity/UrlConfig;->getBackupHost()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_1

    return v1

    :cond_1
    const/4 v0, 0x1

    return v0
.end method
