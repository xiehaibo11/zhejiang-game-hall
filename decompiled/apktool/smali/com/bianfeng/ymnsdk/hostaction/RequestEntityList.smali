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

    .line 60
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 12
    const/4 v0, 0x0

    iput v0, p0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->requested_success_times:I

    .line 13
    iput v0, p0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->requested_fail_times:I

    .line 61
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->requestEntityList:Ljava/util/List;

    .line 62
    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->formal_can_useful:Z

    .line 63
    iput-boolean v0, p0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->spare_can_useful:Z

    .line 64
    return-void
.end method


# virtual methods
.method public getFormal_index()I
    .locals 1

    .line 44
    iget v0, p0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->formal_index:I

    return v0
.end method

.method public getIs_mandatory()I
    .locals 1

    .line 35
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

    .line 67
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->requestEntityList:Ljava/util/List;

    return-object v0
.end method

.method public getRequested_fail_times()I
    .locals 1

    .line 27
    iget v0, p0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->requested_fail_times:I

    return v0
.end method

.method public getRequested_success_times()I
    .locals 1

    .line 19
    iget v0, p0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->requested_success_times:I

    return v0
.end method

.method public getSpare_index()I
    .locals 1

    .line 52
    iget v0, p0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->spare_index:I

    return v0
.end method

.method public isFormal_can_useful()Z
    .locals 1

    .line 81
    iget-boolean v0, p0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->formal_can_useful:Z

    return v0
.end method

.method public isSpare_can_useful()Z
    .locals 1

    .line 89
    iget-boolean v0, p0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->spare_can_useful:Z

    return v0
.end method

.method public resetUseable()V
    .locals 3

    .line 98
    const/4 v0, 0x0

    .local v0, "i":I
    :goto_0
    iget-object v1, p0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->requestEntityList:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result v1

    const/4 v2, 0x1

    if-ge v0, v1, :cond_0

    .line 99
    iget-object v1, p0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->requestEntityList:Ljava/util/List;

    invoke-interface {v1, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    .line 100
    .local v1, "entity":Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;
    invoke-virtual {v1, v2}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->setCan_useful(Z)V

    .line 98
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    .line 102
    .end local v0    # "i":I
    .end local v1    # "entity":Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;
    :cond_0
    iput-boolean v2, p0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->formal_can_useful:Z

    .line 103
    iput-boolean v2, p0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->spare_can_useful:Z

    .line 104
    const/4 v0, 0x0

    iput v0, p0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->requested_success_times:I

    .line 105
    iput v0, p0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->requested_fail_times:I

    .line 106
    return-void
.end method

.method public setFormal_can_useful(Z)V
    .locals 0
    .param p1, "formal_can_useful"    # Z

    .line 85
    iput-boolean p1, p0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->formal_can_useful:Z

    .line 86
    return-void
.end method

.method public setFormal_index(I)V
    .locals 0
    .param p1, "formal_index"    # I

    .line 48
    iput p1, p0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->formal_index:I

    .line 49
    return-void
.end method

.method public setIs_mandatory(I)V
    .locals 0
    .param p1, "is_mandatory"    # I

    .line 39
    iput p1, p0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->is_mandatory:I

    .line 40
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

    .line 71
    .local p1, "requestEntityList":Ljava/util/List;, "Ljava/util/List<Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;>;"
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->requestEntityList:Ljava/util/List;

    .line 72
    return-void
.end method

.method public setRequested_fail_times(I)V
    .locals 0
    .param p1, "requested_fail_times"    # I

    .line 31
    iput p1, p0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->requested_fail_times:I

    .line 32
    return-void
.end method

.method public setRequested_success_times(I)V
    .locals 0
    .param p1, "requested_success_times"    # I

    .line 23
    iput p1, p0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->requested_success_times:I

    .line 24
    return-void
.end method

.method public setSpare_can_useful(Z)V
    .locals 0
    .param p1, "spare_can_useful"    # Z

    .line 93
    iput-boolean p1, p0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->spare_can_useful:Z

    .line 94
    return-void
.end method

.method public setSpare_index(I)V
    .locals 0
    .param p1, "spare_index"    # I

    .line 56
    iput p1, p0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->spare_index:I

    .line 57
    return-void
.end method

.method public toString()Ljava/lang/String;
    .locals 1

    .line 77
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/util/thridsdk/YmnGsonUtil;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
