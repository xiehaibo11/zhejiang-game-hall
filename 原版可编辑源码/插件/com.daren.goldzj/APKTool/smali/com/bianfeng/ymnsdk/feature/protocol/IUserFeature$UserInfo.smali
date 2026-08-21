.class public Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;
.super Ljava/lang/Object;
.source "IUserFeature.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x9
    name = "UserInfo"
.end annotation


# instance fields
.field public platformLogined:Z

.field public platformSession:Ljava/lang/String;

.field public platformUserId:Ljava/lang/String;

.field public platformUserName:Ljava/lang/String;

.field public resExt:Ljava/lang/Object;

.field private ymnLogined:Z

.field private ymnSession:Ljava/lang/String;

.field private ymnUserId:Ljava/lang/String;

.field private ymnUserIdInt:Ljava/lang/String;

.field private ymnUserName:Ljava/lang/String;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 1
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public getPlatformUserId()Ljava/lang/String;
    .locals 1

    .line 1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;->platformUserId:Ljava/lang/String;

    return-object v0
.end method

.method public getResonseExt()Ljava/lang/Object;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "<T:",
            "Ljava/lang/Object;",
            ">()TT;"
        }
    .end annotation

    .line 1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;->resExt:Ljava/lang/Object;

    return-object v0
.end method

.method public getUserName()Ljava/lang/String;
    .locals 1

    .line 1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;->platformUserName:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;->ymnUserName:Ljava/lang/String;

    return-object v0

    .line 2
    :cond_0
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;->platformUserName:Ljava/lang/String;

    return-object v0
.end method

.method public getYmnSession()Ljava/lang/String;
    .locals 1

    .line 1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;->ymnSession:Ljava/lang/String;

    return-object v0
.end method

.method public getYmnUserIdInt()Ljava/lang/String;
    .locals 1

    .line 1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;->ymnUserIdInt:Ljava/lang/String;

    return-object v0
.end method

.method public isYmnLogined()Z
    .locals 1

    .line 1
    iget-boolean v0, p0, Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;->ymnLogined:Z

    return v0
.end method

.method public setPlatformLogined(Z)V
    .locals 0

    .line 1
    iput-boolean p1, p0, Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;->platformLogined:Z

    return-void
.end method

.method public setPlatformSession(Ljava/lang/String;)V
    .locals 0

    .line 1
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;->platformSession:Ljava/lang/String;

    return-void
.end method

.method public setPlatformUserId(Ljava/lang/String;)V
    .locals 0

    .line 1
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;->platformUserId:Ljava/lang/String;

    return-void
.end method

.method public setPlatformUserName(Ljava/lang/String;)V
    .locals 0

    .line 1
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;->platformUserName:Ljava/lang/String;

    return-void
.end method

.method public setResponseExt(Ljava/lang/Object;)V
    .locals 0

    .line 1
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;->resExt:Ljava/lang/Object;

    return-void
.end method

.method public setYmnLogined(Z)V
    .locals 0

    .line 1
    iput-boolean p1, p0, Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;->ymnLogined:Z

    return-void
.end method

.method public setYmnSession(Ljava/lang/String;)V
    .locals 0

    .line 1
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;->ymnSession:Ljava/lang/String;

    return-void
.end method

.method public setYmnUserId(Ljava/lang/String;)V
    .locals 0

    .line 1
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;->ymnUserId:Ljava/lang/String;

    return-void
.end method

.method public setYmnUserIdInt(Ljava/lang/String;)V
    .locals 0

    .line 1
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;->ymnUserIdInt:Ljava/lang/String;

    return-void
.end method

.method public setYmnUserName(Ljava/lang/String;)V
    .locals 0

    .line 1
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;->ymnUserName:Ljava/lang/String;

    return-void
.end method
