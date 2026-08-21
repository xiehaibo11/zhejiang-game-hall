.class public Lcom/bianfeng/platform/UserInterfaceFix;
.super Lcom/bianfeng/platform/UserInterface;
.source "UserInterfaceFix.java"


# annotations
.annotation runtime Ljava/lang/Deprecated;
.end annotation


# static fields
.field protected static listener:Lcom/bianfeng/platform/PlatformSdkListener;


# instance fields
.field protected activity:Landroid/app/Activity;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 1
    new-instance v0, Lcom/bianfeng/platform/UserInterfaceFix$1;

    invoke-direct {v0}, Lcom/bianfeng/platform/UserInterfaceFix$1;-><init>()V

    sput-object v0, Lcom/bianfeng/platform/UserInterfaceFix;->listener:Lcom/bianfeng/platform/PlatformSdkListener;

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 1
    invoke-direct {p0}, Lcom/bianfeng/platform/UserInterface;-><init>()V

    return-void
.end method

.method public static getListener()Lcom/bianfeng/platform/PlatformSdkListener;
    .locals 1

    .line 1
    sget-object v0, Lcom/bianfeng/platform/UserInterfaceFix;->listener:Lcom/bianfeng/platform/PlatformSdkListener;

    return-object v0
.end method


# virtual methods
.method public callFunction(Ljava/lang/String;)V
    .locals 0

    return-void
.end method

.method public callFunction(Ljava/lang/String;[Ljava/lang/String;)V
    .locals 0

    return-void
.end method

.method public varargs callFunctionWithResult(Ljava/lang/String;[Ljava/lang/String;)Ljava/lang/String;
    .locals 0

    const/4 p1, 0x0

    return-object p1
.end method

.method public enterPlatform()V
    .locals 0

    return-void
.end method

.method public exit()V
    .locals 0

    return-void
.end method

.method public getExt()Ljava/lang/Object;
    .locals 1

    const/4 v0, 0x0

    return-object v0
.end method

.method public getExtData()Ljava/lang/String;
    .locals 1

    const/4 v0, 0x0

    return-object v0
.end method

.method public getGid()Ljava/lang/String;
    .locals 1

    const/4 v0, 0x0

    return-object v0
.end method

.method public getPid()Ljava/lang/String;
    .locals 1

    const/4 v0, 0x0

    return-object v0
.end method

.method public getSessionId()Ljava/lang/String;
    .locals 1

    const/4 v0, 0x0

    return-object v0
.end method

.method public getUid()Ljava/lang/String;
    .locals 1

    const/4 v0, 0x0

    return-object v0
.end method

.method public getUserId()Ljava/lang/String;
    .locals 1

    const/4 v0, 0x0

    return-object v0
.end method

.method public getUserInfo()Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;
    .locals 1

    const/4 v0, 0x0

    return-object v0
.end method

.method public getUserName()Ljava/lang/String;
    .locals 1

    const/4 v0, 0x0

    return-object v0
.end method

.method public hideToolBar()V
    .locals 0

    return-void
.end method

.method public init(Landroid/app/Activity;)V
    .locals 0

    .line 1
    iput-object p1, p0, Lcom/bianfeng/platform/UserInterfaceFix;->activity:Landroid/app/Activity;

    return-void
.end method

.method public isLogined()Z
    .locals 1

    const/4 v0, 0x0

    return v0
.end method

.method public isSupportFunction(Ljava/lang/String;)Z
    .locals 0

    const/4 p1, 0x0

    return p1
.end method

.method public login()V
    .locals 0

    return-void
.end method

.method public logout()V
    .locals 0

    return-void
.end method

.method public release()V
    .locals 0

    return-void
.end method

.method public showToolBar()V
    .locals 0

    return-void
.end method

.method public submitUserInfo(Ljava/util/LinkedHashMap;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/LinkedHashMap<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    return-void
.end method

.method public switchAccount()V
    .locals 0

    return-void
.end method

.method public thirdLogin(Lcom/bianfeng/platform/PlatformSdkListener;)V
    .locals 0

    return-void
.end method
