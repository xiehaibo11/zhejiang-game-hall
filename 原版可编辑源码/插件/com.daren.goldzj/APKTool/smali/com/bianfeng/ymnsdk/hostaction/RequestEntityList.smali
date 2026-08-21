.class public Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;
.super Ljava/lang/Object;
.source "RequestEntityList.java"


# instance fields
.field private formal_can_useful:Z

.field private formal_index:I

.field private is_mandatory:I

.field private requestEntityList:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;",
            ">;"
        }
    .end annotation
.end field

.field private requested_fail_times:I

.field private requested_success_times:I

.field private spare_can_useful:Z

.field private spare_index:I


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 1
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    .line 2
    iput v0, p0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->requested_success_times:I

    .line 3
    iput v0, p0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->requested_fail_times:I

    .line 51
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->requestEntityList:Ljava/util/List;

    const/4 v0, 0x1

    .line 52
    iput-boolean v0, p0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->formal_can_useful:Z

    .line 53
    iput-boolean v0, p0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->spare_can_useful:Z

    return-void
.end method


# virtual methods
.method public getFormal_index()I
    .locals 1

    .line 1
    iget v0, p0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->formal_index:I

    return v0
.end method

.method public getIs_mandatory()I
    .locals 1

    .line 1
    iget v0, p0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->is_mandatory:I

    return v0
.end method

.method public getRequestEntityList()Ljava/util/List;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;",
            ">;"
        }
    .end annotation

    .line 1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->requestEntityList:Ljava/util/List;

    return-object v0
.end method

.method public getRequested_fail_times()I
    .locals 1

    .line 1
    iget v0, p0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->requested_fail_times:I

    return v0
.end method

.method public getRequested_success_times()I
    .locals 1

    .line 1
    iget v0, p0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->requested_success_times:I

    return v0
.end method

.method public getSpare_index()I
    .locals 1

    .line 1
    iget v0, p0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->spare_index:I

    return v0
.end method

.method public isFormal_can_useful()Z
    .locals 1

    .line 1
    iget-boolean v0, p0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->formal_can_useful:Z

    return v0
.end method

.method public isSpare_can_useful()Z
    .locals 1

    .line 1
    iget-boolean v0, p0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->spare_can_useful:Z

    return v0
.end method

.method public resetUseable()V
    .locals 4

    const/4 v0, 0x0

    const/4 v1, 0x0

    .line 1
    :goto_0
    iget-object v2, p0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->requestEntityList:Ljava/util/List;

    invoke-interface {v2}, Ljava/util/List;->size()I

    move-result v2

    const/4 v3, 0x1

    if-ge v1, v2, :cond_0

    .line 2
    iget-object v2, p0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->requestEntityList:Ljava/util/List;

    invoke-interface {v2, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    .line 3
    invoke-virtual {v2, v3}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->setCan_useful(Z)V

    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    .line 5
    :cond_0
    iput-boolean v3, p0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->formal_can_useful:Z

    .line 6
    iput-boolean v3, p0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->spare_can_useful:Z

    .line 7
    iput v0, p0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->requested_success_times:I

    .line 8
    iput v0, p0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->requested_fail_times:I

    return-void
.end method

.method public setFormal_can_useful(Z)V
    .locals 0

    .line 1
    iput-boolean p1, p0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->formal_can_useful:Z

    return-void
.end method

.method public setFormal_index(I)V
    .locals 0

    .line 1
    iput p1, p0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->formal_index:I

    return-void
.end method

.method public setIs_mandatory(I)V
    .locals 0

    .line 1
    iput p1, p0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->is_mandatory:I

    return-void
.end method

.method public setRequestEntityList(Ljava/util/List;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;",
            ">;)V"
        }
    .end annotation

    .line 1
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->requestEntityList:Ljava/util/List;

    return-void
.end method

.method public setRequested_fail_times(I)V
    .locals 0

    .line 1
    iput p1, p0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->requested_fail_times:I

    return-void
.end method

.method public setRequested_success_times(I)V
    .locals 0

    .line 1
    iput p1, p0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->requested_success_times:I

    return-void
.end method

.method public setSpare_can_useful(Z)V
    .locals 0

    .line 1
    iput-boolean p1, p0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->spare_can_useful:Z

    return-void
.end method

.method public setSpare_index(I)V
    .locals 0

    .line 1
    iput p1, p0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->spare_index:I

    return-void
.end method

.method public toString()Ljava/lang/String;
    .locals 1

    .line 1
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/util/thridsdk/YmnGsonUtil;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
