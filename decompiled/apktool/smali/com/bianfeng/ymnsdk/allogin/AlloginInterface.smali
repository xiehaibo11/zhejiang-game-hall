.class public Lcom/bianfeng/ymnsdk/allogin/AlloginInterface;
.super Lcom/bianfeng/ymnsdk/feature/plugin/YmnChannelInterface;
.source "AlloginInterface.java"


# annotations
.annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin;
    entrance = .enum Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Entrance;->ACTIVITY:Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Entrance;
    strategy = .enum Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Policy;->FORCE:Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Policy;
.end annotation


# static fields
.field public static final ALLOGIN_GET_AUTOINFO:Ljava/lang/String; = "al_authinfo"

.field private static final ALLOGIN_GET_INFO_FAIL:I = 0x1ca4852

.field private static final ALLOGIN_GET_INFO_SUCCESS:I = 0x1ca4851

.field public static final ALLOGIN_LOGIN:Ljava/lang/String; = "al_login"

.field static Url:Ljava/lang/String; = "http://121.199.42.69:8866"


# instance fields
.field private volatile failCode:I


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 33
    invoke-direct {p0}, Lcom/bianfeng/ymnsdk/feature/plugin/YmnChannelInterface;-><init>()V

    return-void
.end method

.method public static StirngToMap(Ljava/lang/String;)Ljava/util/Map;
    .locals 6
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            ")",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    .line 291
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    const-string v1, "&"

    .line 292
    invoke-virtual {p0, v1}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object p0

    const/4 v1, 0x0

    const/4 v2, 0x0

    .line 293
    :goto_0
    array-length v3, p0

    if-ge v2, v3, :cond_0

    .line 295
    aget-object v3, p0, v2

    const-string v4, "="

    .line 296
    invoke-virtual {v3, v4}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v3

    .line 297
    aget-object v4, v3, v1

    const/4 v5, 0x1

    aget-object v3, v3, v5

    invoke-interface {v0, v4, v3}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    :cond_0
    return-object v0
.end method

.method public static mapToJson(Ljava/util/Map;)Ljava/lang/String;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "<T:",
            "Ljava/lang/Object;",
            ">(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "TT;>;)",
            "Ljava/lang/String;"
        }
    .end annotation

    .line 284
    new-instance v0, Lcom/google/gson/Gson;

    invoke-direct {v0}, Lcom/google/gson/Gson;-><init>()V

    .line 285
    invoke-virtual {v0, p0}, Lcom/google/gson/Gson;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method private onPreLoginRequest(Landroid/app/Activity;Ljava/lang/String;Ljava/lang/String;Lcom/bianfeng/ymnsdk/allogin/net/getPreLoginCallback;)V
    .locals 1

    .line 246
    new-instance v0, Lcom/bianfeng/ymnsdk/allogin/net/HttpHelper;

    invoke-direct {v0, p1}, Lcom/bianfeng/ymnsdk/allogin/net/HttpHelper;-><init>(Landroid/content/Context;)V

    const/4 p1, 0x2

    .line 247
    invoke-virtual {v0, p1}, Lcom/bianfeng/ymnsdk/allogin/net/HttpHelper;->setMethod(I)V

    .line 249
    :try_start_0
    new-instance p1, Lcom/bianfeng/ymnsdk/allogin/AlloginInterface$4;

    invoke-direct {p1, p0, p4}, Lcom/bianfeng/ymnsdk/allogin/AlloginInterface$4;-><init>(Lcom/bianfeng/ymnsdk/allogin/AlloginInterface;Lcom/bianfeng/ymnsdk/allogin/net/getPreLoginCallback;)V

    invoke-virtual {v0, p2, p3, p1}, Lcom/bianfeng/ymnsdk/allogin/net/HttpHelper;->createHttpRequest(Ljava/lang/String;Ljava/lang/String;Lcom/bianfeng/ymnsdk/allogin/net/HttpListener;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    const/4 p2, -0x1

    .line 279
    invoke-virtual {p1}, Ljava/lang/Exception;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-interface {p4, p2, p1}, Lcom/bianfeng/ymnsdk/allogin/net/getPreLoginCallback;->onPreLoginError(ILjava/lang/String;)V

    :goto_0
    return-void
.end method

.method private preLogin(Lcom/bianfeng/ymnsdk/allogin/net/AlloginCallBack;)V
    .locals 4

    .line 74
    new-instance v0, Ljava/util/TreeMap;

    invoke-direct {v0}, Ljava/util/TreeMap;-><init>()V

    const-string v1, "TD_SDK_APP_ID"

    .line 75
    invoke-virtual {p0, v1}, Lcom/bianfeng/ymnsdk/allogin/AlloginInterface;->getMetaData(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v1

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    const-string v2, "app_id"

    invoke-virtual {v0, v2, v1}, Ljava/util/TreeMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 76
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/allogin/AlloginInterface;->getPluginId()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v1

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    const-string v2, "platform_id"

    invoke-virtual {v0, v2, v1}, Ljava/util/TreeMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v1, "TD_CONFIG_ID"

    .line 77
    invoke-virtual {p0, v1}, Lcom/bianfeng/ymnsdk/allogin/AlloginInterface;->getMetaData(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v1

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    const-string v2, "package_id"

    invoke-virtual {v0, v2, v1}, Ljava/util/TreeMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 79
    :try_start_0
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/allogin/AlloginInterface;->getActivity()Landroid/app/Activity;

    move-result-object v1

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "login"

    invoke-static {v3}, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->getHost(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, "/pre_login"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/allogin/AlloginInterface;->mapToJson(Ljava/util/Map;)Ljava/lang/String;

    move-result-object v0

    new-instance v3, Lcom/bianfeng/ymnsdk/allogin/AlloginInterface$1;

    invoke-direct {v3, p0, p1}, Lcom/bianfeng/ymnsdk/allogin/AlloginInterface$1;-><init>(Lcom/bianfeng/ymnsdk/allogin/AlloginInterface;Lcom/bianfeng/ymnsdk/allogin/net/AlloginCallBack;)V

    invoke-direct {p0, v1, v2, v0, v3}, Lcom/bianfeng/ymnsdk/allogin/AlloginInterface;->onPreLoginRequest(Landroid/app/Activity;Ljava/lang/String;Ljava/lang/String;Lcom/bianfeng/ymnsdk/allogin/net/getPreLoginCallback;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 93
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 94
    iget v1, p0, Lcom/bianfeng/ymnsdk/allogin/AlloginInterface;->failCode:I

    invoke-virtual {v0}, Ljava/lang/Exception;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-interface {p1, v1, v0}, Lcom/bianfeng/ymnsdk/allogin/net/AlloginCallBack;->onPreLoginError(ILjava/lang/String;)V

    :goto_0
    return-void
.end method


# virtual methods
.method public getInfo()V
    .locals 1
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "al_authinfo"
    .end annotation

    const v0, 0x1ca4852

    .line 161
    iput v0, p0, Lcom/bianfeng/ymnsdk/allogin/AlloginInterface;->failCode:I

    .line 162
    new-instance v0, Lcom/bianfeng/ymnsdk/allogin/AlloginInterface$3;

    invoke-direct {v0, p0}, Lcom/bianfeng/ymnsdk/allogin/AlloginInterface$3;-><init>(Lcom/bianfeng/ymnsdk/allogin/AlloginInterface;)V

    invoke-direct {p0, v0}, Lcom/bianfeng/ymnsdk/allogin/AlloginInterface;->preLogin(Lcom/bianfeng/ymnsdk/allogin/net/AlloginCallBack;)V

    return-void
.end method

.method public getPluginId()Ljava/lang/String;
    .locals 1

    const-string v0, "30034"

    return-object v0
.end method

.method public getPluginName()Ljava/lang/String;
    .locals 1

    const-string v0, "allogin"

    return-object v0
.end method

.method public getPluginVersion()I
    .locals 1

    const/4 v0, 0x2

    return v0
.end method

.method public getSdkVersion()Ljava/lang/String;
    .locals 1

    const-string v0, "15.6.2"

    return-object v0
.end method

.method public login()V
    .locals 1
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "al_login"
    .end annotation

    const/16 v0, 0x69

    .line 102
    iput v0, p0, Lcom/bianfeng/ymnsdk/allogin/AlloginInterface;->failCode:I

    .line 103
    new-instance v0, Lcom/bianfeng/ymnsdk/allogin/AlloginInterface$2;

    invoke-direct {v0, p0}, Lcom/bianfeng/ymnsdk/allogin/AlloginInterface$2;-><init>(Lcom/bianfeng/ymnsdk/allogin/AlloginInterface;)V

    invoke-direct {p0, v0}, Lcom/bianfeng/ymnsdk/allogin/AlloginInterface;->preLogin(Lcom/bianfeng/ymnsdk/allogin/net/AlloginCallBack;)V

    return-void
.end method

.method public onInit(Landroid/content/Context;)V
    .locals 1

    .line 64
    invoke-super {p0, p1}, Lcom/bianfeng/ymnsdk/feature/plugin/YmnChannelInterface;->onInit(Landroid/content/Context;)V

    const/4 p1, 0x0

    const/16 v0, 0x64

    .line 65
    invoke-virtual {p0, v0, p1}, Lcom/bianfeng/ymnsdk/allogin/AlloginInterface;->sendResult(ILjava/lang/String;)V

    const/16 v0, 0xcd

    .line 66
    invoke-virtual {p0, v0, p1}, Lcom/bianfeng/ymnsdk/allogin/AlloginInterface;->sendResult(ILjava/lang/String;)V

    return-void
.end method
