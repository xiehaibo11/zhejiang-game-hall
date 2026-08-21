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

    .line 1
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 2
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/entity/LoginEntity$ThirdDataBean;->uid:Ljava/lang/String;

    .line 3
    iput-object p2, p0, Lcom/bianfeng/ymnsdk/entity/LoginEntity$ThirdDataBean;->uname:Ljava/lang/String;

    .line 4
    iput-object p3, p0, Lcom/bianfeng/ymnsdk/entity/LoginEntity$ThirdDataBean;->session:Ljava/lang/String;

    return-void
.end method


# virtual methods
.method public getSession()Ljava/lang/String;
    .locals 1

    .line 1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/entity/LoginEntity$ThirdDataBean;->session:Ljava/lang/String;

    return-object v0
.end method

.method public getUid()Ljava/lang/String;
    .locals 1

    .line 1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/entity/LoginEntity$ThirdDataBean;->uid:Ljava/lang/String;

    return-object v0
.end method

.method public getUname()Ljava/lang/String;
    .locals 1

    .line 1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/entity/LoginEntity$ThirdDataBean;->uname:Ljava/lang/String;

    return-object v0
.end method

.method public setSession(Ljava/lang/String;)V
    .locals 0

    .line 1
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/entity/LoginEntity$ThirdDataBean;->session:Ljava/lang/String;

    return-void
.end method

.method public setUid(Ljava/lang/String;)V
    .locals 0

    .line 1
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/entity/LoginEntity$ThirdDataBean;->uid:Ljava/lang/String;

    return-void
.end method

.method public setUname(Ljava/lang/String;)V
    .locals 0

    .line 1
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/entity/LoginEntity$ThirdDataBean;->uname:Ljava/lang/String;

    return-void
.end method

.method public toString()Ljava/lang/String;
    .locals 1

    .line 1
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/util/thridsdk/YmnGsonUtil;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
