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

    .line 32
    new-instance v0, Lcom/bianfeng/platform/UserInterface$1;

    invoke-direct {v0}, Lcom/bianfeng/platform/UserInterface$1;-><init>()V

    sput-object v0, Lcom/bianfeng/platform/UserInterface;->ymnCallback:Lcom/bianfeng/ymnsdk/feature/YmnCallback;

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 18
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static getInstance()Lcom/bianfeng/platform/UserInterface;
    .locals 1
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    .line 55
    sget-object v0, Lcom/bianfeng/platform/UserInterface;->instance:Lcom/bianfeng/platform/UserInterface;

    if-nez v0, :cond_0

    .line 56
    new-instance v0, Lcom/bianfeng/platform/UserInterface;

    invoke-direct {v0}, Lcom/bianfeng/platform/UserInterface;-><init>()V

    sput-object v0, Lcom/bianfeng/platform/UserInterface;->instance:Lcom/bianfeng/platform/UserInterface;

    .line 58
    :cond_0
    sget-object v0, Lcom/bianfeng/platform/UserInterface;->instance:Lcom/bianfeng/platform/UserInterface;

    return-object v0
.end method

.method public static getListener()Lcom/bianfeng/platform/PlatformSdkListener;
    .locals 1
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    .line 48
    sget-object v0, Lcom/bianfeng/platform/UserInterface;->listener:Lcom/bianfeng/platform/PlatformSdkListener;

    return-object v0
.end method

.method public static setListener(Lcom/bianfeng/platform/PlatformSdkListener;)V
    .locals 0
    .param p0, "listener"    # Lcom/bianfeng/platform/PlatformSdkListener;
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    .line 43
    sput-object p0, Lcom/bianfeng/platform/UserInterface;->listener:Lcom/bianfeng/platform/PlatformSdkListener;

    .line 44
    return-void
.end method


# virtual methods
.method public callFunction(Ljava/lang/String;)V
    .locals 0
    .param p1, "functionName"    # Ljava/lang/String;
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    .line 98
    invoke-static {p1}, Lcom/bianfeng/ymnsdk/YmnSdkUserWrapper;->callFunction(Ljava/lang/String;)V

    .line 99
    return-void
.end method

.method public callFunction(Ljava/lang/String;[Ljava/lang/String;)V
    .locals 0
    .param p1, "functionName"    # Ljava/lang/String;
    .param p2, "args"    # [Ljava/lang/String;
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    .line 103
    invoke-static {p1, p2}, Lcom/bianfeng/ymnsdk/YmnSdkPaymentWrapper;->callFunction(Ljava/lang/String;[Ljava/lang/String;)V

    .line 104
    return-void
.end method

.method public varargs callFunctionWithResult(Ljava/lang/String;[Ljava/lang/String;)Ljava/lang/String;
    .locals 1
    .param p1, "functionName"    # Ljava/lang/String;
    .param p2, "args"    # [Ljava/lang/String;
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    .line 108
    invoke-static {p1, p2}, Lcom/bianfeng/ymnsdk/YmnSdkWrapper;->callFunctionWithResult(Ljava/lang/String;[Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public enterPlatform()V
    .locals 0

    .line 252
    invoke-static {}, Lcom/bianfeng/ymnsdk/YmnSdkUserWrapper;->enterPlatform()V

    .line 253
    return-void
.end method

.method public exit()V
    .locals 0

    .line 237
    invoke-static {}, Lcom/bianfeng/ymnsdk/YmnSdkUserWrapper;->exit()V

    .line 238
    return-void
.end method

.method public getAndShowVerifyRealName()V
    .locals 0

    .line 223
    invoke-static {}, Lcom/bianfeng/ymnsdk/YmnSdkUserWrapper;->getAndShowVerifyRealName()V

    .line 224
    return-void
.end method

.method public getExt()Ljava/lang/Object;
    .locals 1
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    .line 133
    const/4 v0, 0x0

    return-object v0
.end method

.method public getExtData()Ljava/lang/String;
    .locals 1
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    .line 194
    const/4 v0, 0x0

    return-object v0
.end method

.method public getGid()Ljava/lang/String;
    .locals 2
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    .line 152
    invoke-static {}, Lcom/bianfeng/ymnsdk/YmnSdkUserWrapper;->getUserInfo()Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;

    move-result-object v0

    .line 153
    .local v0, "userInfo":Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;
    if-eqz v0, :cond_0

    .line 154
    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;->getPlatformUserId()Ljava/lang/String;

    move-result-object v1

    return-object v1

    .line 156
    :cond_0
    const/4 v1, 0x0

    return-object v1
.end method

.method public getPid()Ljava/lang/String;
    .locals 2
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    .line 138
    invoke-static {}, Lcom/bianfeng/ymnsdk/YmnSdkUserWrapper;->getUserInfo()Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;

    move-result-object v0

    .line 139
    .local v0, "userInfo":Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;
    if-eqz v0, :cond_0

    .line 140
    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;->getYmnUserIdInt()Ljava/lang/String;

    move-result-object v1

    return-object v1

    .line 142
    :cond_0
    const/4 v1, 0x0

    return-object v1
.end method

.method public getSessionId()Ljava/lang/String;
    .locals 2
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    .line 176
    invoke-static {}, Lcom/bianfeng/ymnsdk/YmnSdkUserWrapper;->getUserInfo()Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;

    move-result-object v0

    .line 177
    .local v0, "userInfo":Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;
    if-eqz v0, :cond_0

    .line 178
    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;->getYmnSession()Ljava/lang/String;

    move-result-object v1

    return-object v1

    .line 180
    :cond_0
    const/4 v1, 0x0

    return-object v1
.end method

.method public getUid()Ljava/lang/String;
    .locals 1
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    .line 166
    invoke-virtual {p0}, Lcom/bianfeng/platform/UserInterface;->getPid()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getUserId()Ljava/lang/String;
    .locals 1
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    .line 123
    invoke-virtual {p0}, Lcom/bianfeng/platform/UserInterface;->getGid()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getUserInfo()Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;
    .locals 1

    .line 247
    invoke-static {}, Lcom/bianfeng/ymnsdk/YmnSdkUserWrapper;->getUserInfo()Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;

    move-result-object v0

    return-object v0
.end method

.method public getUserName()Ljava/lang/String;
    .locals 2
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    .line 185
    invoke-static {}, Lcom/bianfeng/ymnsdk/YmnSdkUserWrapper;->getUserInfo()Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;

    move-result-object v0

    .line 186
    .local v0, "userInfo":Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;
    if-eqz v0, :cond_0

    .line 187
    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;->getUserName()Ljava/lang/String;

    move-result-object v1

    return-object v1

    .line 189
    :cond_0
    const/4 v1, 0x0

    return-object v1
.end method

.method public getVerifyRealNameInfo()V
    .locals 0

    .line 219
    invoke-static {}, Lcom/bianfeng/ymnsdk/YmnSdkUserWrapper;->getVerifyRealNameInfo()V

    .line 220
    return-void
.end method

.method public hideToolBar()V
    .locals 0

    .line 227
    invoke-static {}, Lcom/bianfeng/ymnsdk/YmnSdkUserWrapper;->hideToolBar()V

    .line 228
    return-void
.end method

.method public init(Landroid/app/Activity;)V
    .locals 1
    .param p1, "activity"    # Landroid/app/Activity;
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    .line 63
    sget-object v0, Lcom/bianfeng/platform/UserInterface;->ymnCallback:Lcom/bianfeng/ymnsdk/feature/YmnCallback;

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/YmnSdkWrapper;->registCallback(Lcom/bianfeng/ymnsdk/feature/YmnCallback;)V

    .line 64
    return-void
.end method

.method public isLogined()Z
    .locals 1
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    .line 88
    invoke-static {}, Lcom/bianfeng/ymnsdk/YmnSdkUserWrapper;->isLogined()Z

    move-result v0

    return v0
.end method

.method public isSupportFunction(Ljava/lang/String;)Z
    .locals 1
    .param p1, "functionName"    # Ljava/lang/String;
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    .line 93
    invoke-static {p1}, Lcom/bianfeng/ymnsdk/YmnSdkUserWrapper;->isSupportFunction(Ljava/lang/String;)Z

    move-result v0

    return v0
.end method

.method public login()V
    .locals 0
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    .line 68
    invoke-static {}, Lcom/bianfeng/ymnsdk/YmnSdkUserWrapper;->login()V

    .line 69
    return-void
.end method

.method public logout()V
    .locals 0

    .line 205
    invoke-static {}, Lcom/bianfeng/ymnsdk/YmnSdkUserWrapper;->logout()V

    .line 206
    return-void
.end method

.method public release()V
    .locals 0
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    .line 114
    return-void
.end method

.method public showToolBar()V
    .locals 0

    .line 210
    invoke-static {}, Lcom/bianfeng/ymnsdk/YmnSdkUserWrapper;->showToolBar()V

    .line 211
    return-void
.end method

.method public showVerifyRealName()V
    .locals 0

    .line 215
    invoke-static {}, Lcom/bianfeng/ymnsdk/YmnSdkUserWrapper;->showVerifyRealName()V

    .line 216
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

    .line 242
    .local p1, "data":Ljava/util/LinkedHashMap;, "Ljava/util/LinkedHashMap<Ljava/lang/String;Ljava/lang/String;>;"
    invoke-static {p1}, Lcom/bianfeng/ymnsdk/YmnSdkUserWrapper;->submitUserInfo(Ljava/util/LinkedHashMap;)V

    .line 243
    return-void
.end method

.method public switchAccount()V
    .locals 0

    .line 232
    invoke-static {}, Lcom/bianfeng/ymnsdk/YmnSdkUserWrapper;->switchAccount()V

    .line 233
    return-void
.end method

.method public thirdLogin(Lcom/bianfeng/platform/PlatformSdkListener;)V
    .locals 0
    .param p1, "listener"    # Lcom/bianfeng/platform/PlatformSdkListener;
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    .line 79
    return-void
.end method
