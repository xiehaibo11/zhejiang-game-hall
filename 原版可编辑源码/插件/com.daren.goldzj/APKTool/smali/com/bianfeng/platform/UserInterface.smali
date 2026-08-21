.class public Lcom/bianfeng/platform/UserInterface;
.super Ljava/lang/Object;
.source "UserInterface.java"

# interfaces
.implements Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature;


# annotations
.annotation runtime Ljava/lang/Deprecated;
.end annotation


# static fields
.field public static final FUNCTION_DESTROY:Ljava/lang/String; = "destroy"
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation
.end field

.field public static final FUNCTION_SUBMIT_DATA:Ljava/lang/String; = "submitData"
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation
.end field

.field private static instance:Lcom/bianfeng/platform/UserInterface;

.field protected static listener:Lcom/bianfeng/platform/PlatformSdkListener;

.field private static ymnCallback:Lcom/bianfeng/ymnsdk/feature/YmnCallback;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 1
    new-instance v0, Lcom/bianfeng/platform/UserInterface$1;

    invoke-direct {v0}, Lcom/bianfeng/platform/UserInterface$1;-><init>()V

    sput-object v0, Lcom/bianfeng/platform/UserInterface;->ymnCallback:Lcom/bianfeng/ymnsdk/feature/YmnCallback;

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 1
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static getInstance()Lcom/bianfeng/platform/UserInterface;
    .locals 1
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    .line 1
    sget-object v0, Lcom/bianfeng/platform/UserInterface;->instance:Lcom/bianfeng/platform/UserInterface;

    if-nez v0, :cond_0

    .line 2
    new-instance v0, Lcom/bianfeng/platform/UserInterface;

    invoke-direct {v0}, Lcom/bianfeng/platform/UserInterface;-><init>()V

    sput-object v0, Lcom/bianfeng/platform/UserInterface;->instance:Lcom/bianfeng/platform/UserInterface;

    .line 4
    :cond_0
    sget-object v0, Lcom/bianfeng/platform/UserInterface;->instance:Lcom/bianfeng/platform/UserInterface;

    return-object v0
.end method

.method public static getListener()Lcom/bianfeng/platform/PlatformSdkListener;
    .locals 1
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    .line 1
    sget-object v0, Lcom/bianfeng/platform/UserInterface;->listener:Lcom/bianfeng/platform/PlatformSdkListener;

    return-object v0
.end method

.method public static setListener(Lcom/bianfeng/platform/PlatformSdkListener;)V
    .locals 0
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    .line 1
    sput-object p0, Lcom/bianfeng/platform/UserInterface;->listener:Lcom/bianfeng/platform/PlatformSdkListener;

    return-void
.end method


# virtual methods
.method public callFunction(Ljava/lang/String;)V
    .locals 0
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    .line 1
    invoke-static {p1}, Lcom/bianfeng/ymnsdk/YmnSdkUserWrapper;->callFunction(Ljava/lang/String;)V

    return-void
.end method

.method public callFunction(Ljava/lang/String;[Ljava/lang/String;)V
    .locals 0
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    .line 2
    invoke-static {p1, p2}, Lcom/bianfeng/ymnsdk/YmnSdkPaymentWrapper;->callFunction(Ljava/lang/String;[Ljava/lang/String;)V

    return-void
.end method

.method public varargs callFunctionWithResult(Ljava/lang/String;[Ljava/lang/String;)Ljava/lang/String;
    .locals 0
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    .line 1
    invoke-static {p1, p2}, Lcom/bianfeng/ymnsdk/YmnSdkWrapper;->callFunctionWithResult(Ljava/lang/String;[Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    return-object p1
.end method

.method public enterPlatform()V
    .locals 0

    .line 1
    invoke-static {}, Lcom/bianfeng/ymnsdk/YmnSdkUserWrapper;->enterPlatform()V

    return-void
.end method

.method public exit()V
    .locals 0

    .line 1
    invoke-static {}, Lcom/bianfeng/ymnsdk/YmnSdkUserWrapper;->exit()V

    return-void
.end method

.method public getAndShowVerifyRealName()V
    .locals 0

    .line 1
    invoke-static {}, Lcom/bianfeng/ymnsdk/YmnSdkUserWrapper;->getAndShowVerifyRealName()V

    return-void
.end method

.method public getExt()Ljava/lang/Object;
    .locals 1
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    const/4 v0, 0x0

    return-object v0
.end method

.method public getExtData()Ljava/lang/String;
    .locals 1
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    const/4 v0, 0x0

    return-object v0
.end method

.method public getGid()Ljava/lang/String;
    .locals 1
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    .line 1
    invoke-static {}, Lcom/bianfeng/ymnsdk/YmnSdkUserWrapper;->getUserInfo()Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 3
    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;->getPlatformUserId()Ljava/lang/String;

    move-result-object v0

    return-object v0

    :cond_0
    const/4 v0, 0x0

    return-object v0
.end method

.method public getPid()Ljava/lang/String;
    .locals 1
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    .line 1
    invoke-static {}, Lcom/bianfeng/ymnsdk/YmnSdkUserWrapper;->getUserInfo()Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 3
    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;->getYmnUserIdInt()Ljava/lang/String;

    move-result-object v0

    return-object v0

    :cond_0
    const/4 v0, 0x0

    return-object v0
.end method

.method public getSessionId()Ljava/lang/String;
    .locals 1
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    .line 1
    invoke-static {}, Lcom/bianfeng/ymnsdk/YmnSdkUserWrapper;->getUserInfo()Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 3
    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;->getYmnSession()Ljava/lang/String;

    move-result-object v0

    return-object v0

    :cond_0
    const/4 v0, 0x0

    return-object v0
.end method

.method public getUid()Ljava/lang/String;
    .locals 1
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    .line 1
    invoke-virtual {p0}, Lcom/bianfeng/platform/UserInterface;->getPid()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getUserId()Ljava/lang/String;
    .locals 1
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    .line 1
    invoke-virtual {p0}, Lcom/bianfeng/platform/UserInterface;->getGid()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getUserInfo()Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;
    .locals 1

    .line 1
    invoke-static {}, Lcom/bianfeng/ymnsdk/YmnSdkUserWrapper;->getUserInfo()Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;

    move-result-object v0

    return-object v0
.end method

.method public getUserName()Ljava/lang/String;
    .locals 1
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    .line 1
    invoke-static {}, Lcom/bianfeng/ymnsdk/YmnSdkUserWrapper;->getUserInfo()Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 3
    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;->getUserName()Ljava/lang/String;

    move-result-object v0

    return-object v0

    :cond_0
    const/4 v0, 0x0

    return-object v0
.end method

.method public getVerifyRealNameInfo()V
    .locals 0

    .line 1
    invoke-static {}, Lcom/bianfeng/ymnsdk/YmnSdkUserWrapper;->getVerifyRealNameInfo()V

    return-void
.end method

.method public hideToolBar()V
    .locals 0

    .line 1
    invoke-static {}, Lcom/bianfeng/ymnsdk/YmnSdkUserWrapper;->hideToolBar()V

    return-void
.end method

.method public init(Landroid/app/Activity;)V
    .locals 0
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    .line 1
    sget-object p1, Lcom/bianfeng/platform/UserInterface;->ymnCallback:Lcom/bianfeng/ymnsdk/feature/YmnCallback;

    invoke-static {p1}, Lcom/bianfeng/ymnsdk/YmnSdkWrapper;->registCallback(Lcom/bianfeng/ymnsdk/feature/YmnCallback;)V

    return-void
.end method

.method public isLogined()Z
    .locals 1
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    .line 1
    invoke-static {}, Lcom/bianfeng/ymnsdk/YmnSdkUserWrapper;->isLogined()Z

    move-result v0

    return v0
.end method

.method public isSupportFunction(Ljava/lang/String;)Z
    .locals 0
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    .line 1
    invoke-static {p1}, Lcom/bianfeng/ymnsdk/YmnSdkUserWrapper;->isSupportFunction(Ljava/lang/String;)Z

    move-result p1

    return p1
.end method

.method public login()V
    .locals 0
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    .line 1
    invoke-static {}, Lcom/bianfeng/ymnsdk/YmnSdkUserWrapper;->login()V

    return-void
.end method

.method public logout()V
    .locals 0

    .line 1
    invoke-static {}, Lcom/bianfeng/ymnsdk/YmnSdkUserWrapper;->logout()V

    return-void
.end method

.method public release()V
    .locals 0
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    return-void
.end method

.method public showToolBar()V
    .locals 0

    .line 1
    invoke-static {}, Lcom/bianfeng/ymnsdk/YmnSdkUserWrapper;->showToolBar()V

    return-void
.end method

.method public showVerifyRealName()V
    .locals 0

    .line 1
    invoke-static {}, Lcom/bianfeng/ymnsdk/YmnSdkUserWrapper;->showVerifyRealName()V

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

    .line 1
    invoke-static {p1}, Lcom/bianfeng/ymnsdk/YmnSdkUserWrapper;->submitUserInfo(Ljava/util/LinkedHashMap;)V

    return-void
.end method

.method public switchAccount()V
    .locals 0

    .line 1
    invoke-static {}, Lcom/bianfeng/ymnsdk/YmnSdkUserWrapper;->switchAccount()V

    return-void
.end method

.method public thirdLogin(Lcom/bianfeng/platform/PlatformSdkListener;)V
    .locals 0
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    return-void
.end method
