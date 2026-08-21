.class public Lcom/bianfeng/ymnsdk/entity/UrlLocalState;
.super Ljava/lang/Object;
.source "UrlLocalState.java"


# static fields
.field static final STATE_BACKUP:I = 0x1

.field static final STATE_NORMAL:I


# instance fields
.field private backupContinuedFails:I

.field private backupRemainTime:I

.field private currentHost:Ljava/lang/String;

.field private hostState:I

.field private normalContinuedFails:I

.field private urlConfig:Lcom/bianfeng/ymnsdk/entity/UrlConfig;


# direct methods
.method public constructor <init>(Lcom/bianfeng/ymnsdk/entity/UrlConfig;)V
    .locals 0

    .line 1
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 2
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/entity/UrlLocalState;->urlConfig:Lcom/bianfeng/ymnsdk/entity/UrlConfig;

    .line 3
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/entity/UrlLocalState;->resetNormalContinuedFails()V

    .line 4
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/entity/UrlLocalState;->resetBackupContinuedFails()V

    .line 5
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/entity/UrlLocalState;->resetBackupRemainTime()V

    .line 6
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/entity/UrlLocalState;->setCurrentHostToNormal()V

    return-void
.end method


# virtual methods
.method public getCurrentHost()Ljava/lang/String;
    .locals 1

    .line 1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/entity/UrlLocalState;->currentHost:Ljava/lang/String;

    return-object v0
.end method

.method public increaseBackupContinuedFails()V
    .locals 1

    .line 1
    iget v0, p0, Lcom/bianfeng/ymnsdk/entity/UrlLocalState;->backupContinuedFails:I

    add-int/lit8 v0, v0, 0x1

    iput v0, p0, Lcom/bianfeng/ymnsdk/entity/UrlLocalState;->backupContinuedFails:I

    return-void
.end method

.method public increaseNormalContinuedFails()V
    .locals 1

    .line 1
    iget v0, p0, Lcom/bianfeng/ymnsdk/entity/UrlLocalState;->normalContinuedFails:I

    add-int/lit8 v0, v0, 0x1

    iput v0, p0, Lcom/bianfeng/ymnsdk/entity/UrlLocalState;->normalContinuedFails:I

    return-void
.end method

.method public isBackupContinuedFailsLimited()Z
    .locals 2

    .line 1
    iget v0, p0, Lcom/bianfeng/ymnsdk/entity/UrlLocalState;->backupContinuedFails:I

    iget-object v1, p0, Lcom/bianfeng/ymnsdk/entity/UrlLocalState;->urlConfig:Lcom/bianfeng/ymnsdk/entity/UrlConfig;

    invoke-virtual {v1}, Lcom/bianfeng/ymnsdk/entity/UrlConfig;->getMaxBackupFails()I

    move-result v1

    if-lt v0, v1, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return v0
.end method

.method public isBackupHost()Z
    .locals 2

    .line 1
    iget v0, p0, Lcom/bianfeng/ymnsdk/entity/UrlLocalState;->hostState:I

    const/4 v1, 0x1

    if-ne v0, v1, :cond_0

    goto :goto_0

    :cond_0
    const/4 v1, 0x0

    :goto_0
    return v1
.end method

.method public isBackupRemainTimeUseup()Z
    .locals 1

    .line 1
    iget v0, p0, Lcom/bianfeng/ymnsdk/entity/UrlLocalState;->backupRemainTime:I

    if-gtz v0, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return v0
.end method

.method public isNormalContinuedFailsLimited()Z
    .locals 2

    .line 1
    iget v0, p0, Lcom/bianfeng/ymnsdk/entity/UrlLocalState;->normalContinuedFails:I

    iget-object v1, p0, Lcom/bianfeng/ymnsdk/entity/UrlLocalState;->urlConfig:Lcom/bianfeng/ymnsdk/entity/UrlConfig;

    invoke-virtual {v1}, Lcom/bianfeng/ymnsdk/entity/UrlConfig;->getMaxNormalFails()I

    move-result v1

    if-lt v0, v1, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return v0
.end method

.method public isNormalHost()Z
    .locals 1

    .line 1
    iget v0, p0, Lcom/bianfeng/ymnsdk/entity/UrlLocalState;->hostState:I

    if-nez v0, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return v0
.end method

.method public reduceBackupRemainTime()V
    .locals 1

    .line 1
    iget v0, p0, Lcom/bianfeng/ymnsdk/entity/UrlLocalState;->backupRemainTime:I

    add-int/lit8 v0, v0, -0x1

    iput v0, p0, Lcom/bianfeng/ymnsdk/entity/UrlLocalState;->backupRemainTime:I

    return-void
.end method

.method public resetBackupContinuedFails()V
    .locals 1

    const/4 v0, 0x0

    .line 1
    iput v0, p0, Lcom/bianfeng/ymnsdk/entity/UrlLocalState;->backupContinuedFails:I

    return-void
.end method

.method public resetBackupRemainTime()V
    .locals 1

    .line 1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/entity/UrlLocalState;->urlConfig:Lcom/bianfeng/ymnsdk/entity/UrlConfig;

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/entity/UrlConfig;->getMaxBackupAvailableCount()I

    move-result v0

    iput v0, p0, Lcom/bianfeng/ymnsdk/entity/UrlLocalState;->backupRemainTime:I

    return-void
.end method

.method public resetNormalContinuedFails()V
    .locals 1

    const/4 v0, 0x0

    .line 1
    iput v0, p0, Lcom/bianfeng/ymnsdk/entity/UrlLocalState;->normalContinuedFails:I

    return-void
.end method

.method public setCurrentHost(Ljava/lang/String;)V
    .locals 0

    .line 1
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/entity/UrlLocalState;->currentHost:Ljava/lang/String;

    return-void
.end method

.method public setCurrentHostToBackup()V
    .locals 1

    const/4 v0, 0x1

    .line 1
    iput v0, p0, Lcom/bianfeng/ymnsdk/entity/UrlLocalState;->hostState:I

    .line 2
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/entity/UrlLocalState;->urlConfig:Lcom/bianfeng/ymnsdk/entity/UrlConfig;

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/entity/UrlConfig;->getBackupHost()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/bianfeng/ymnsdk/entity/UrlLocalState;->setCurrentHost(Ljava/lang/String;)V

    return-void
.end method

.method public setCurrentHostToNormal()V
    .locals 1

    const/4 v0, 0x0

    .line 1
    iput v0, p0, Lcom/bianfeng/ymnsdk/entity/UrlLocalState;->hostState:I

    .line 2
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/entity/UrlLocalState;->urlConfig:Lcom/bianfeng/ymnsdk/entity/UrlConfig;

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/entity/UrlConfig;->getNormalHost()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/bianfeng/ymnsdk/entity/UrlLocalState;->setCurrentHost(Ljava/lang/String;)V

    return-void
.end method

.method public updateConfig(Lcom/bianfeng/ymnsdk/entity/UrlConfig;)V
    .locals 1

    .line 1
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/entity/UrlLocalState;->isNormalHost()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 2
    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/entity/UrlConfig;->getNormalHost()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/bianfeng/ymnsdk/entity/UrlLocalState;->setCurrentHost(Ljava/lang/String;)V

    goto :goto_0

    .line 3
    :cond_0
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/entity/UrlLocalState;->isBackupHost()Z

    move-result v0

    if-eqz v0, :cond_1

    .line 4
    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/entity/UrlConfig;->getBackupHost()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/bianfeng/ymnsdk/entity/UrlLocalState;->setCurrentHost(Ljava/lang/String;)V

    .line 6
    :cond_1
    :goto_0
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/entity/UrlLocalState;->urlConfig:Lcom/bianfeng/ymnsdk/entity/UrlConfig;

    return-void
.end method
