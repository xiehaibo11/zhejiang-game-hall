.class public Lcom/bianfeng/ymnsdk/hostaction/HostEntity;
.super Ljava/lang/Object;
.source "HostEntity.java"


# instance fields
.field private is_mandatory:I

.field private request_times:I

.field private server_a:Ljava/lang/String;

.field private server_a_weight:I

.field private server_b:Ljava/lang/String;

.field private server_b_weight:I


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 1
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public constructor <init>(Ljava/lang/String;Ljava/lang/String;IIII)V
    .locals 0

    .line 2
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 3
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/hostaction/HostEntity;->server_a:Ljava/lang/String;

    .line 4
    iput-object p2, p0, Lcom/bianfeng/ymnsdk/hostaction/HostEntity;->server_b:Ljava/lang/String;

    .line 5
    iput p3, p0, Lcom/bianfeng/ymnsdk/hostaction/HostEntity;->server_a_weight:I

    .line 6
    iput p4, p0, Lcom/bianfeng/ymnsdk/hostaction/HostEntity;->server_b_weight:I

    .line 7
    iput p5, p0, Lcom/bianfeng/ymnsdk/hostaction/HostEntity;->is_mandatory:I

    .line 8
    iput p6, p0, Lcom/bianfeng/ymnsdk/hostaction/HostEntity;->request_times:I

    return-void
.end method


# virtual methods
.method public getIs_mandatory()I
    .locals 1

    .line 1
    iget v0, p0, Lcom/bianfeng/ymnsdk/hostaction/HostEntity;->is_mandatory:I

    return v0
.end method

.method public getRequest_times()I
    .locals 1

    .line 1
    iget v0, p0, Lcom/bianfeng/ymnsdk/hostaction/HostEntity;->request_times:I

    return v0
.end method

.method public getServer_a()Ljava/lang/String;
    .locals 1

    .line 1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/hostaction/HostEntity;->server_a:Ljava/lang/String;

    return-object v0
.end method

.method public getServer_a_weight()I
    .locals 1

    .line 1
    iget v0, p0, Lcom/bianfeng/ymnsdk/hostaction/HostEntity;->server_a_weight:I

    return v0
.end method

.method public getServer_b()Ljava/lang/String;
    .locals 1

    .line 1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/hostaction/HostEntity;->server_b:Ljava/lang/String;

    return-object v0
.end method

.method public getServer_b_weight()I
    .locals 1

    .line 1
    iget v0, p0, Lcom/bianfeng/ymnsdk/hostaction/HostEntity;->server_b_weight:I

    return v0
.end method

.method public setIs_mandatory(I)V
    .locals 0

    .line 1
    iput p1, p0, Lcom/bianfeng/ymnsdk/hostaction/HostEntity;->is_mandatory:I

    return-void
.end method

.method public setRequest_times(I)V
    .locals 0

    .line 1
    iput p1, p0, Lcom/bianfeng/ymnsdk/hostaction/HostEntity;->request_times:I

    return-void
.end method

.method public setServer_a(Ljava/lang/String;)V
    .locals 0

    .line 1
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/hostaction/HostEntity;->server_a:Ljava/lang/String;

    return-void
.end method

.method public setServer_a_weight(I)V
    .locals 0

    .line 1
    iput p1, p0, Lcom/bianfeng/ymnsdk/hostaction/HostEntity;->server_a_weight:I

    return-void
.end method

.method public setServer_b(Ljava/lang/String;)V
    .locals 0

    .line 1
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/hostaction/HostEntity;->server_b:Ljava/lang/String;

    return-void
.end method

.method public setServer_b_weight(I)V
    .locals 0

    .line 1
    iput p1, p0, Lcom/bianfeng/ymnsdk/hostaction/HostEntity;->server_b_weight:I

    return-void
.end method

.method public toString()Ljava/lang/String;
    .locals 1

    .line 1
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/util/thridsdk/YmnGsonUtil;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
