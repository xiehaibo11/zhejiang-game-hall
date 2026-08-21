.class public Lcom/bianfeng/ymnsdk/entity/LoginEntity$ThirdDataBean;
.super Ljava/lang/Object;
.source "LoginEntity.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/bianfeng/ymnsdk/entity/LoginEntity;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x9
    name = "ThirdDataBean"
.end annotation


# instance fields
.field private session:Ljava/lang/String;

.field private uid:Ljava/lang/String;

.field private uname:Ljava/lang/String;


# direct methods
.method public constructor <init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 0
    .param p1, "uid"    # Ljava/lang/String;
    .param p2, "uname"    # Ljava/lang/String;
    .param p3, "session"    # Ljava/lang/String;

    .line 121
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 122
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/entity/LoginEntity$ThirdDataBean;->uid:Ljava/lang/String;

    .line 123
    iput-object p2, p0, Lcom/bianfeng/ymnsdk/entity/LoginEntity$ThirdDataBean;->uname:Ljava/lang/String;

    .line 124
    iput-object p3, p0, Lcom/bianfeng/ymnsdk/entity/LoginEntity$ThirdDataBean;->session:Ljava/lang/String;

    .line 125
    return-void
.end method


# virtual methods
.method public getSession()Ljava/lang/String;
    .locals 1

    .line 144
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/entity/LoginEntity$ThirdDataBean;->session:Ljava/lang/String;

    return-object v0
.end method

.method public getUid()Ljava/lang/String;
    .locals 1

    .line 128
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/entity/LoginEntity$ThirdDataBean;->uid:Ljava/lang/String;

    return-object v0
.end method

.method public getUname()Ljava/lang/String;
    .locals 1

    .line 136
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/entity/LoginEntity$ThirdDataBean;->uname:Ljava/lang/String;

    return-object v0
.end method

.method public setSession(Ljava/lang/String;)V
    .locals 0
    .param p1, "session"    # Ljava/lang/String;

    .line 148
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/entity/LoginEntity$ThirdDataBean;->session:Ljava/lang/String;

    .line 149
    return-void
.end method

.method public setUid(Ljava/lang/String;)V
    .locals 0
    .param p1, "uid"    # Ljava/lang/String;

    .line 132
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/entity/LoginEntity$ThirdDataBean;->uid:Ljava/lang/String;

    .line 133
    return-void
.end method

.method public setUname(Ljava/lang/String;)V
    .locals 0
    .param p1, "uname"    # Ljava/lang/String;

    .line 140
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/entity/LoginEntity$ThirdDataBean;->uname:Ljava/lang/String;

    .line 141
    return-void
.end method

.method public toString()Ljava/lang/String;
    .locals 1

    .line 153
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/util/thridsdk/YmnGsonUtil;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
