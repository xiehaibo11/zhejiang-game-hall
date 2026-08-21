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
    .param p1, "urlConfig"    # Lcom/bianfeng/ymnsdk/entity/UrlConfig;

    .line 16
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 17
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/entity/UrlLocalState;->urlConfig:Lcom/bianfeng/ymnsdk/entity/UrlConfig;

    .line 18
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/entity/UrlLocalState;->resetNormalContinuedFails()V

    .line 19
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/entity/UrlLocalState;->resetBackupContinuedFails()V

    .line 20
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/entity/UrlLocalState;->resetBackupRemainTime()V

    .line 21
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/entity/UrlLocalState;->setCurrentHostToNormal()V

    .line 22
    return-void
.end method


# virtual methods
.method public getCurrentHost()Ljava/lang/String;
    .locals 1

    .line 42
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/entity/UrlLocalState;->currentHost:Ljava/lang/String;

    return-object v0
.end method

.method public increaseBackupContinuedFails()V
    .locals 1

    .line 71
    iget v0, p0, Lcom/bianfeng/ymnsdk/entity/UrlLocalState;->backupContinuedFails:I

    add-int/lit8 v0, v0, 0x1

    iput v0, p0, Lcom/bianfeng/ymnsdk/entity/UrlLocalState;->backupContinuedFails:I

    .line 72
    return-void
.end method

.method public increaseNormalContinuedFails()V
    .locals 1

    .line 59
    iget v0, p0, Lcom/bianfeng/ymnsdk/entity/UrlLocalState;->normalContinuedFails:I

    add-int/lit8 v0, v0, 0x1

    iput v0, p0, Lcom/bianfeng/ymnsdk/entity/UrlLocalState;->normalContinuedFails:I

    .line 60
    return-void
.end method

.method public isBackupContinuedFailsLimited()Z
    .locals 2

    .line 79
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

    .line 38
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

    .line 91
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

    .line 67
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

    .line 34
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

    .line 83
    iget v0, p0, Lcom/bianfeng/ymnsdk/entity/UrlLocalState;->backupRemainTime:I

    add-int/lit8 v0, v0, -0x1

    iput v0, p0, Lcom/bianfeng/ymnsdk/entity/UrlLocalState;->backupRemainTime:I

    .line 84
    return-void
.end method

.method public resetBackupContinuedFails()V
    .locals 1

    .line 75
    const/4 v0, 0x0

    iput v0, p0, Lcom/bianfeng/ymnsdk/entity/UrlLocalState;->backupContinuedFails:I

    .line 76
    return-void
.end method

.method public resetBackupRemainTime()V
    .locals 1

    .line 87
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/entity/UrlLocalState;->urlConfig:Lcom/bianfeng/ymnsdk/entity/UrlConfig;

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/entity/UrlConfig;->getMaxBackupAvailableCount()I

    move-result v0

    iput v0, p0, Lcom/bianfeng/ymnsdk/entity/UrlLocalState;->backupRemainTime:I

    .line 88
    return-void
.end method

.method public resetNormalContinuedFails()V
    .locals 1

    .line 63
    const/4 v0, 0x0

    iput v0, p0, Lcom/bianfeng/ymnsdk/entity/UrlLocalState;->normalContinuedFails:I

    .line 64
    return-void
.end method

.method public setCurrentHost(Ljava/lang/String;)V
    .locals 0
    .param p1, "currentHost"    # Ljava/lang/String;

    .line 45
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/entity/UrlLocalState;->currentHost:Ljava/lang/String;

    .line 46
    return-void
.end method

.method public setCurrentHostToBackup()V
    .locals 1

    .line 54
    const/4 v0, 0x1

    iput v0, p0, Lcom/bianfeng/ymnsdk/entity/UrlLocalState;->hostState:I

    .line 55
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/entity/UrlLocalState;->urlConfig:Lcom/bianfeng/ymnsdk/entity/UrlConfig;

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/entity/UrlConfig;->getBackupHost()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/bianfeng/ymnsdk/entity/UrlLocalState;->setCurrentHost(Ljava/lang/String;)V

    .line 56
    return-void
.end method

.method public setCurrentHostToNormal()V
    .locals 1

    .line 49
    const/4 v0, 0x0

    iput v0, p0, Lcom/bianfeng/ymnsdk/entity/UrlLocalState;->hostState:I

    .line 50
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/entity/UrlLocalState;->urlConfig:Lcom/bianfeng/ymnsdk/entity/UrlConfig;

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/entity/UrlConfig;->getNormalHost()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/bianfeng/ymnsdk/entity/UrlLocalState;->setCurrentHost(Ljava/lang/String;)V

    .line 51
    return-void
.end method

.method public updateConfig(Lcom/bianfeng/ymnsdk/entity/UrlConfig;)V
    .locals 1
    .param p1, "urlConfig"    # Lcom/bianfeng/ymnsdk/entity/UrlConfig;

    .line 25
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/entity/UrlLocalState;->isNormalHost()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 26
    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/entity/UrlConfig;->getNormalHost()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/bianfeng/ymnsdk/entity/UrlLocalState;->setCurrentHost(Ljava/lang/String;)V

    goto :goto_0

    .line 27
    :cond_0
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/entity/UrlLocalState;->isBackupHost()Z

    move-result v0

    if-eqz v0, :cond_1

    .line 28
    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/entity/UrlConfig;->getBackupHost()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/bianfeng/ymnsdk/entity/UrlLocalState;->setCurrentHost(Ljava/lang/String;)V

    .line 30
    :cond_1
    :goto_0
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/entity/UrlLocalState;->urlConfig:Lcom/bianfeng/ymnsdk/entity/UrlConfig;

    .line 31
    return-void
.end method
