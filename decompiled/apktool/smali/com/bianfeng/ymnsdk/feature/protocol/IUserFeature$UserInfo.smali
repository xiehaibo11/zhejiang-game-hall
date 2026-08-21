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

    .line 81
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public getPlatformUserId()Ljava/lang/String;
    .locals 1

    .line 134
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

    .line 158
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;->resExt:Ljava/lang/Object;

    return-object v0
.end method

.method public getUserName()Ljava/lang/String;
    .locals 1

    .line 97
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;->platformUserName:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;->ymnUserName:Ljava/lang/String;

    return-object v0

    .line 98
    :cond_0
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;->platformUserName:Ljava/lang/String;

    return-object v0
.end method

.method public getYmnSession()Ljava/lang/String;
    .locals 1

    .line 118
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;->ymnSession:Ljava/lang/String;

    return-object v0
.end method

.method public getYmnUserIdInt()Ljava/lang/String;
    .locals 1

    .line 106
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;->ymnUserIdInt:Ljava/lang/String;

    return-object v0
.end method

.method public isYmnLogined()Z
    .locals 1

    .line 126
    iget-boolean v0, p0, Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;->ymnLogined:Z

    return v0
.end method

.method public setPlatformLogined(Z)V
    .locals 0
    .param p1, "platformLogined"    # Z

    .line 150
    iput-boolean p1, p0, Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;->platformLogined:Z

    .line 151
    return-void
.end method

.method public setPlatformSession(Ljava/lang/String;)V
    .locals 0
    .param p1, "platformSession"    # Ljava/lang/String;

    .line 142
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;->platformSession:Ljava/lang/String;

    .line 143
    return-void
.end method

.method public setPlatformUserId(Ljava/lang/String;)V
    .locals 0
    .param p1, "platformUserId"    # Ljava/lang/String;

    .line 138
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;->platformUserId:Ljava/lang/String;

    .line 139
    return-void
.end method

.method public setPlatformUserName(Ljava/lang/String;)V
    .locals 0
    .param p1, "platformUserName"    # Ljava/lang/String;

    .line 146
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;->platformUserName:Ljava/lang/String;

    .line 147
    return-void
.end method

.method public setResponseExt(Ljava/lang/Object;)V
    .locals 0
    .param p1, "resExt"    # Ljava/lang/Object;

    .line 154
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;->resExt:Ljava/lang/Object;

    .line 155
    return-void
.end method

.method public setYmnLogined(Z)V
    .locals 0
    .param p1, "ymnLogined"    # Z

    .line 130
    iput-boolean p1, p0, Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;->ymnLogined:Z

    .line 131
    return-void
.end method

.method public setYmnSession(Ljava/lang/String;)V
    .locals 0
    .param p1, "ymnSession"    # Ljava/lang/String;

    .line 114
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;->ymnSession:Ljava/lang/String;

    .line 115
    return-void
.end method

.method public setYmnUserId(Ljava/lang/String;)V
    .locals 0
    .param p1, "ymnUserId"    # Ljava/lang/String;

    .line 102
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;->ymnUserId:Ljava/lang/String;

    .line 103
    return-void
.end method

.method public setYmnUserIdInt(Ljava/lang/String;)V
    .locals 0
    .param p1, "ymnUserIdInt"    # Ljava/lang/String;

    .line 110
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;->ymnUserIdInt:Ljava/lang/String;

    .line 111
    return-void
.end method

.method public setYmnUserName(Ljava/lang/String;)V
    .locals 0
    .param p1, "ymnUserName"    # Ljava/lang/String;

    .line 122
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;->ymnUserName:Ljava/lang/String;

    .line 123
    return-void
.end method
