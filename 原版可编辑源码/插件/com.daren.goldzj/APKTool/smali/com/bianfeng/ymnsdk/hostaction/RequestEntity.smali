.class public Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;
.super Ljava/lang/Object;
.source "RequestEntity.java"


# instance fields
.field Request_times:I

.field can_useful:Z

.field port:Ljava/lang/String;

.field type:Ljava/lang/String;

.field url:Ljava/lang/String;

.field weight:I


# direct methods
.method constructor <init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;IIZ)V
    .locals 0

    .line 1
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 2
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->url:Ljava/lang/String;

    .line 3
    iput-object p2, p0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->type:Ljava/lang/String;

    .line 4
    iput-object p3, p0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->port:Ljava/lang/String;

    .line 5
    iput p4, p0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->weight:I

    .line 6
    iput p5, p0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->Request_times:I

    .line 7
    iput-boolean p6, p0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->can_useful:Z

    return-void
.end method


# virtual methods
.method public getPort()Ljava/lang/String;
    .locals 1

    .line 1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->port:Ljava/lang/String;

    return-object v0
.end method

.method public getRequest_times()I
    .locals 1

    .line 1
    iget v0, p0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->Request_times:I

    return v0
.end method

.method public getType()Ljava/lang/String;
    .locals 1

    .line 1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->type:Ljava/lang/String;

    return-object v0
.end method

.method public getUrl()Ljava/lang/String;
    .locals 1

    .line 1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->url:Ljava/lang/String;

    return-object v0
.end method

.method public getWeight()I
    .locals 1

    .line 1
    iget v0, p0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->weight:I

    return v0
.end method

.method public isCan_useful()Z
    .locals 1

    .line 1
    iget-boolean v0, p0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->can_useful:Z

    return v0
.end method

.method public setCan_useful(Z)V
    .locals 0

    .line 1
    iput-boolean p1, p0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->can_useful:Z

    return-void
.end method

.method public setPort(Ljava/lang/String;)V
    .locals 0

    .line 1
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->port:Ljava/lang/String;

    return-void
.end method

.method public setRequest_times(I)V
    .locals 0

    .line 1
    iput p1, p0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->Request_times:I

    return-void
.end method

.method public setType(Ljava/lang/String;)V
    .locals 0

    .line 1
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->type:Ljava/lang/String;

    return-void
.end method

.method public setUrl(Ljava/lang/String;)V
    .locals 0

    .line 1
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->url:Ljava/lang/String;

    return-void
.end method

.method public setWeight(I)V
    .locals 0

    .line 1
    iput p1, p0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->weight:I

    return-void
.end method

.method public toString()Ljava/lang/String;
    .locals 1

    .line 1
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/util/thridsdk/YmnGsonUtil;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
