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
    .param p1, "url"    # Ljava/lang/String;
    .param p2, "type"    # Ljava/lang/String;
    .param p3, "port"    # Ljava/lang/String;
    .param p4, "weight"    # I
    .param p5, "Request_times"    # I
    .param p6, "can_useful"    # Z

    .line 16
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 17
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->url:Ljava/lang/String;

    .line 18
    iput-object p2, p0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->type:Ljava/lang/String;

    .line 19
    iput-object p3, p0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->port:Ljava/lang/String;

    .line 20
    iput p4, p0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->weight:I

    .line 21
    iput p5, p0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->Request_times:I

    .line 22
    iput-boolean p6, p0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->can_useful:Z

    .line 23
    return-void
.end method


# virtual methods
.method public getPort()Ljava/lang/String;
    .locals 1

    .line 44
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->port:Ljava/lang/String;

    return-object v0
.end method

.method public getRequest_times()I
    .locals 1

    .line 52
    iget v0, p0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->Request_times:I

    return v0
.end method

.method public getType()Ljava/lang/String;
    .locals 1

    .line 35
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->type:Ljava/lang/String;

    return-object v0
.end method

.method public getUrl()Ljava/lang/String;
    .locals 1

    .line 27
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->url:Ljava/lang/String;

    return-object v0
.end method

.method public getWeight()I
    .locals 1

    .line 68
    iget v0, p0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->weight:I

    return v0
.end method

.method public isCan_useful()Z
    .locals 1

    .line 60
    iget-boolean v0, p0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->can_useful:Z

    return v0
.end method

.method public setCan_useful(Z)V
    .locals 0
    .param p1, "can_useful"    # Z

    .line 64
    iput-boolean p1, p0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->can_useful:Z

    .line 65
    return-void
.end method

.method public setPort(Ljava/lang/String;)V
    .locals 0
    .param p1, "port"    # Ljava/lang/String;

    .line 48
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->port:Ljava/lang/String;

    .line 49
    return-void
.end method

.method public setRequest_times(I)V
    .locals 0
    .param p1, "request_times"    # I

    .line 56
    iput p1, p0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->Request_times:I

    .line 57
    return-void
.end method

.method public setType(Ljava/lang/String;)V
    .locals 0
    .param p1, "type"    # Ljava/lang/String;

    .line 39
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->type:Ljava/lang/String;

    .line 40
    return-void
.end method

.method public setUrl(Ljava/lang/String;)V
    .locals 0
    .param p1, "url"    # Ljava/lang/String;

    .line 31
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->url:Ljava/lang/String;

    .line 32
    return-void
.end method

.method public setWeight(I)V
    .locals 0
    .param p1, "weight"    # I

    .line 72
    iput p1, p0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->weight:I

    .line 73
    return-void
.end method

.method public toString()Ljava/lang/String;
    .locals 1

    .line 77
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/util/thridsdk/YmnGsonUtil;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
