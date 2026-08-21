.class public Lcom/tkay/core/api/TYAdStatusInfo;
.super Ljava/lang/Object;


# instance fields
.field private mIsLoading:Z

.field private mIsReady:Z

.field private mTYAdInfo:Lcom/tkay/core/api/TYAdInfo;


# direct methods
.method public constructor <init>(ZZLcom/tkay/core/api/TYAdInfo;)V
    .locals 0

    .line 15
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 16
    iput-boolean p1, p0, Lcom/tkay/core/api/TYAdStatusInfo;->mIsLoading:Z

    .line 17
    iput-boolean p2, p0, Lcom/tkay/core/api/TYAdStatusInfo;->mIsReady:Z

    .line 18
    iput-object p3, p0, Lcom/tkay/core/api/TYAdStatusInfo;->mTYAdInfo:Lcom/tkay/core/api/TYAdInfo;

    return-void
.end method


# virtual methods
.method public getTYAdInfo()Lcom/tkay/core/api/TYAdInfo;
    .locals 1

    .line 30
    iget-object v0, p0, Lcom/tkay/core/api/TYAdStatusInfo;->mTYAdInfo:Lcom/tkay/core/api/TYAdInfo;

    return-object v0
.end method

.method public isLoading()Z
    .locals 1

    .line 22
    iget-boolean v0, p0, Lcom/tkay/core/api/TYAdStatusInfo;->mIsLoading:Z

    return v0
.end method

.method public isReady()Z
    .locals 1

    .line 26
    iget-boolean v0, p0, Lcom/tkay/core/api/TYAdStatusInfo;->mIsReady:Z

    return v0
.end method

.method public toString()Ljava/lang/String;
    .locals 2

    .line 35
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "TYAdStatusInfo{isLoading="

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-boolean v1, p0, Lcom/tkay/core/api/TYAdStatusInfo;->mIsLoading:Z

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v1, ", isReady="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-boolean v1, p0, Lcom/tkay/core/api/TYAdStatusInfo;->mIsReady:Z

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v1, ", topAdInfo="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 38
    iget-object v1, p0, Lcom/tkay/core/api/TYAdStatusInfo;->mTYAdInfo:Lcom/tkay/core/api/TYAdInfo;

    if-eqz v1, :cond_0

    goto :goto_0

    :cond_0
    const-string v1, "null"

    :goto_0
    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const/16 v1, 0x7d

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
