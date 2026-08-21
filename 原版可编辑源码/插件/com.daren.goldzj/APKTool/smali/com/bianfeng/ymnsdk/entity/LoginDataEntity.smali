.class public Lcom/bianfeng/ymnsdk/entity/LoginDataEntity;
.super Ljava/lang/Object;
.source "LoginDataEntity.java"


# instance fields
.field private gid:Ljava/lang/String;

.field private headimgurl:Ljava/lang/String;

.field private openid:Ljava/lang/String;

.field private pid:I

.field private session:Ljava/lang/String;

.field private sex:Ljava/lang/String;

.field private uid:Ljava/lang/String;

.field private unionid:Ljava/lang/String;

.field private username:Ljava/lang/String;


# direct methods
.method public constructor <init>(Ljava/lang/String;)V
    .locals 2

    .line 1
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const-string v0, ""

    .line 2
    iput-object v0, p0, Lcom/bianfeng/ymnsdk/entity/LoginDataEntity;->gid:Ljava/lang/String;

    const-string v1, "123456"

    .line 3
    iput-object v1, p0, Lcom/bianfeng/ymnsdk/entity/LoginDataEntity;->uid:Ljava/lang/String;

    .line 4
    iput-object v0, p0, Lcom/bianfeng/ymnsdk/entity/LoginDataEntity;->username:Ljava/lang/String;

    .line 6
    iput-object v0, p0, Lcom/bianfeng/ymnsdk/entity/LoginDataEntity;->headimgurl:Ljava/lang/String;

    .line 7
    iput-object v0, p0, Lcom/bianfeng/ymnsdk/entity/LoginDataEntity;->sex:Ljava/lang/String;

    .line 8
    iput-object v0, p0, Lcom/bianfeng/ymnsdk/entity/LoginDataEntity;->unionid:Ljava/lang/String;

    .line 9
    iput-object v0, p0, Lcom/bianfeng/ymnsdk/entity/LoginDataEntity;->openid:Ljava/lang/String;

    .line 12
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/entity/LoginDataEntity;->session:Ljava/lang/String;

    return-void
.end method


# virtual methods
.method public getGid()Ljava/lang/String;
    .locals 1

    .line 1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/entity/LoginDataEntity;->gid:Ljava/lang/String;

    return-object v0
.end method

.method public getHeadimgurl()Ljava/lang/String;
    .locals 1

    .line 1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/entity/LoginDataEntity;->headimgurl:Ljava/lang/String;

    return-object v0
.end method

.method public getOpenid()Ljava/lang/String;
    .locals 1

    .line 1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/entity/LoginDataEntity;->openid:Ljava/lang/String;

    return-object v0
.end method

.method public getPid()I
    .locals 1

    .line 1
    iget v0, p0, Lcom/bianfeng/ymnsdk/entity/LoginDataEntity;->pid:I

    return v0
.end method

.method public getSession()Ljava/lang/String;
    .locals 1

    .line 1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/entity/LoginDataEntity;->session:Ljava/lang/String;

    return-object v0
.end method

.method public getSex()Ljava/lang/String;
    .locals 1

    .line 1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/entity/LoginDataEntity;->sex:Ljava/lang/String;

    return-object v0
.end method

.method public getUid()Ljava/lang/String;
    .locals 1

    .line 1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/entity/LoginDataEntity;->uid:Ljava/lang/String;

    return-object v0
.end method

.method public getUnionid()Ljava/lang/String;
    .locals 1

    .line 1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/entity/LoginDataEntity;->unionid:Ljava/lang/String;

    return-object v0
.end method

.method public getUsername()Ljava/lang/String;
    .locals 1

    .line 1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/entity/LoginDataEntity;->username:Ljava/lang/String;

    return-object v0
.end method

.method public setGid(Ljava/lang/String;)V
    .locals 0

    .line 1
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/entity/LoginDataEntity;->gid:Ljava/lang/String;

    return-void
.end method

.method public setHeadimgurl(Ljava/lang/String;)V
    .locals 0

    .line 1
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/entity/LoginDataEntity;->headimgurl:Ljava/lang/String;

    return-void
.end method

.method public setOpenid(Ljava/lang/String;)V
    .locals 0

    .line 1
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/entity/LoginDataEntity;->openid:Ljava/lang/String;

    return-void
.end method

.method public setPid(I)V
    .locals 0

    .line 1
    iput p1, p0, Lcom/bianfeng/ymnsdk/entity/LoginDataEntity;->pid:I

    return-void
.end method

.method public setSession(Ljava/lang/String;)V
    .locals 0

    .line 1
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/entity/LoginDataEntity;->session:Ljava/lang/String;

    return-void
.end method

.method public setSex(Ljava/lang/String;)V
    .locals 0

    .line 1
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/entity/LoginDataEntity;->sex:Ljava/lang/String;

    return-void
.end method

.method public setUid(Ljava/lang/String;)V
    .locals 0

    .line 1
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/entity/LoginDataEntity;->uid:Ljava/lang/String;

    return-void
.end method

.method public setUnionid(Ljava/lang/String;)V
    .locals 0

    .line 1
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/entity/LoginDataEntity;->unionid:Ljava/lang/String;

    return-void
.end method

.method public setUsername(Ljava/lang/String;)V
    .locals 0

    .line 1
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/entity/LoginDataEntity;->username:Ljava/lang/String;

    return-void
.end method

.method public toString()Ljava/lang/String;
    .locals 1

    .line 1
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/util/thridsdk/YmnGsonUtil;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
