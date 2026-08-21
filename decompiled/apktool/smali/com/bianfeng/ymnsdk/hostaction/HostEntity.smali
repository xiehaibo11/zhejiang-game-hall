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

    .line 15
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 16
    return-void
.end method

.method public constructor <init>(Ljava/lang/String;Ljava/lang/String;IIII)V
    .locals 0
    .param p1, "server_a"    # Ljava/lang/String;
    .param p2, "server_b"    # Ljava/lang/String;
    .param p3, "server_a_weight"    # I
    .param p4, "server_b_weight"    # I
    .param p5, "is_mandatory"    # I
    .param p6, "request_times"    # I

    .line 19
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 20
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/hostaction/HostEntity;->server_a:Ljava/lang/String;

    .line 21
    iput-object p2, p0, Lcom/bianfeng/ymnsdk/hostaction/HostEntity;->server_b:Ljava/lang/String;

    .line 22
    iput p3, p0, Lcom/bianfeng/ymnsdk/hostaction/HostEntity;->server_a_weight:I

    .line 23
    iput p4, p0, Lcom/bianfeng/ymnsdk/hostaction/HostEntity;->server_b_weight:I

    .line 24
    iput p5, p0, Lcom/bianfeng/ymnsdk/hostaction/HostEntity;->is_mandatory:I

    .line 25
    iput p6, p0, Lcom/bianfeng/ymnsdk/hostaction/HostEntity;->request_times:I

    .line 26
    return-void
.end method


# virtual methods
.method public getIs_mandatory()I
    .locals 1

    .line 61
    iget v0, p0, Lcom/bianfeng/ymnsdk/hostaction/HostEntity;->is_mandatory:I

    return v0
.end method

.method public getRequest_times()I
    .locals 1

    .line 69
    iget v0, p0, Lcom/bianfeng/ymnsdk/hostaction/HostEntity;->request_times:I

    return v0
.end method

.method public getServer_a()Ljava/lang/String;
    .locals 1

    .line 29
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/hostaction/HostEntity;->server_a:Ljava/lang/String;

    return-object v0
.end method

.method public getServer_a_weight()I
    .locals 1

    .line 45
    iget v0, p0, Lcom/bianfeng/ymnsdk/hostaction/HostEntity;->server_a_weight:I

    return v0
.end method

.method public getServer_b()Ljava/lang/String;
    .locals 1

    .line 37
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/hostaction/HostEntity;->server_b:Ljava/lang/String;

    return-object v0
.end method

.method public getServer_b_weight()I
    .locals 1

    .line 53
    iget v0, p0, Lcom/bianfeng/ymnsdk/hostaction/HostEntity;->server_b_weight:I

    return v0
.end method

.method public setIs_mandatory(I)V
    .locals 0
    .param p1, "is_mandatory"    # I

    .line 65
    iput p1, p0, Lcom/bianfeng/ymnsdk/hostaction/HostEntity;->is_mandatory:I

    .line 66
    return-void
.end method

.method public setRequest_times(I)V
    .locals 0
    .param p1, "request_times"    # I

    .line 73
    iput p1, p0, Lcom/bianfeng/ymnsdk/hostaction/HostEntity;->request_times:I

    .line 74
    return-void
.end method

.method public setServer_a(Ljava/lang/String;)V
    .locals 0
    .param p1, "server_a"    # Ljava/lang/String;

    .line 33
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/hostaction/HostEntity;->server_a:Ljava/lang/String;

    .line 34
    return-void
.end method

.method public setServer_a_weight(I)V
    .locals 0
    .param p1, "server_a_weight"    # I

    .line 49
    iput p1, p0, Lcom/bianfeng/ymnsdk/hostaction/HostEntity;->server_a_weight:I

    .line 50
    return-void
.end method

.method public setServer_b(Ljava/lang/String;)V
    .locals 0
    .param p1, "server_b"    # Ljava/lang/String;

    .line 41
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/hostaction/HostEntity;->server_b:Ljava/lang/String;

    .line 42
    return-void
.end method

.method public setServer_b_weight(I)V
    .locals 0
    .param p1, "server_b_weight"    # I

    .line 57
    iput p1, p0, Lcom/bianfeng/ymnsdk/hostaction/HostEntity;->server_b_weight:I

    .line 58
    return-void
.end method

.method public toString()Ljava/lang/String;
    .locals 1

    .line 78
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/util/thridsdk/YmnGsonUtil;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
