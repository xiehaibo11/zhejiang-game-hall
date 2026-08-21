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
    .param p1, "session"    # Ljava/lang/String;

    .line 31
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 22
    const-string v0, ""

    iput-object v0, p0, Lcom/bianfeng/ymnsdk/entity/LoginDataEntity;->gid:Ljava/lang/String;

    .line 23
    const-string v1, "123456"

    iput-object v1, p0, Lcom/bianfeng/ymnsdk/entity/LoginDataEntity;->uid:Ljava/lang/String;

    .line 24
    iput-object v0, p0, Lcom/bianfeng/ymnsdk/entity/LoginDataEntity;->username:Ljava/lang/String;

    .line 26
    iput-object v0, p0, Lcom/bianfeng/ymnsdk/entity/LoginDataEntity;->headimgurl:Ljava/lang/String;

    .line 27
    iput-object v0, p0, Lcom/bianfeng/ymnsdk/entity/LoginDataEntity;->sex:Ljava/lang/String;

    .line 28
    iput-object v0, p0, Lcom/bianfeng/ymnsdk/entity/LoginDataEntity;->unionid:Ljava/lang/String;

    .line 29
    iput-object v0, p0, Lcom/bianfeng/ymnsdk/entity/LoginDataEntity;->openid:Ljava/lang/String;

    .line 32
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/entity/LoginDataEntity;->session:Ljava/lang/String;

    .line 33
    return-void
.end method


# virtual methods
.method public getGid()Ljava/lang/String;
    .locals 1

    .line 44
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/entity/LoginDataEntity;->gid:Ljava/lang/String;

    return-object v0
.end method

.method public getHeadimgurl()Ljava/lang/String;
    .locals 1

    .line 76
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/entity/LoginDataEntity;->headimgurl:Ljava/lang/String;

    return-object v0
.end method

.method public getOpenid()Ljava/lang/String;
    .locals 1

    .line 100
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/entity/LoginDataEntity;->openid:Ljava/lang/String;

    return-object v0
.end method

.method public getPid()I
    .locals 1

    .line 36
    iget v0, p0, Lcom/bianfeng/ymnsdk/entity/LoginDataEntity;->pid:I

    return v0
.end method

.method public getSession()Ljava/lang/String;
    .locals 1

    .line 68
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/entity/LoginDataEntity;->session:Ljava/lang/String;

    return-object v0
.end method

.method public getSex()Ljava/lang/String;
    .locals 1

    .line 84
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/entity/LoginDataEntity;->sex:Ljava/lang/String;

    return-object v0
.end method

.method public getUid()Ljava/lang/String;
    .locals 1

    .line 52
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/entity/LoginDataEntity;->uid:Ljava/lang/String;

    return-object v0
.end method

.method public getUnionid()Ljava/lang/String;
    .locals 1

    .line 92
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/entity/LoginDataEntity;->unionid:Ljava/lang/String;

    return-object v0
.end method

.method public getUsername()Ljava/lang/String;
    .locals 1

    .line 60
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/entity/LoginDataEntity;->username:Ljava/lang/String;

    return-object v0
.end method

.method public setGid(Ljava/lang/String;)V
    .locals 0
    .param p1, "gid"    # Ljava/lang/String;

    .line 48
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/entity/LoginDataEntity;->gid:Ljava/lang/String;

    .line 49
    return-void
.end method

.method public setHeadimgurl(Ljava/lang/String;)V
    .locals 0
    .param p1, "headimgurl"    # Ljava/lang/String;

    .line 80
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/entity/LoginDataEntity;->headimgurl:Ljava/lang/String;

    .line 81
    return-void
.end method

.method public setOpenid(Ljava/lang/String;)V
    .locals 0
    .param p1, "openid"    # Ljava/lang/String;

    .line 104
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/entity/LoginDataEntity;->openid:Ljava/lang/String;

    .line 105
    return-void
.end method

.method public setPid(I)V
    .locals 0
    .param p1, "pid"    # I

    .line 40
    iput p1, p0, Lcom/bianfeng/ymnsdk/entity/LoginDataEntity;->pid:I

    .line 41
    return-void
.end method

.method public setSession(Ljava/lang/String;)V
    .locals 0
    .param p1, "session"    # Ljava/lang/String;

    .line 72
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/entity/LoginDataEntity;->session:Ljava/lang/String;

    .line 73
    return-void
.end method

.method public setSex(Ljava/lang/String;)V
    .locals 0
    .param p1, "sex"    # Ljava/lang/String;

    .line 88
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/entity/LoginDataEntity;->sex:Ljava/lang/String;

    .line 89
    return-void
.end method

.method public setUid(Ljava/lang/String;)V
    .locals 0
    .param p1, "uid"    # Ljava/lang/String;

    .line 56
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/entity/LoginDataEntity;->uid:Ljava/lang/String;

    .line 57
    return-void
.end method

.method public setUnionid(Ljava/lang/String;)V
    .locals 0
    .param p1, "unionid"    # Ljava/lang/String;

    .line 96
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/entity/LoginDataEntity;->unionid:Ljava/lang/String;

    .line 97
    return-void
.end method

.method public setUsername(Ljava/lang/String;)V
    .locals 0
    .param p1, "username"    # Ljava/lang/String;

    .line 64
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/entity/LoginDataEntity;->username:Ljava/lang/String;

    .line 65
    return-void
.end method

.method public toString()Ljava/lang/String;
    .locals 1

    .line 109
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/util/thridsdk/YmnGsonUtil;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
