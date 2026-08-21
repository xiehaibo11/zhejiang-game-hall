.class public Lcom/bianfeng/ymnsdk/ymndatalib/h;
.super Ljava/lang/Object;
.source "YmndataWhiteListSdk.java"


# static fields
.field public static volatile d:Lcom/bianfeng/ymnsdk/ymndatalib/h;


# instance fields
.field public a:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field public b:Z

.field public c:Lcom/bianfeng/netlibsdk/BaseRequest$Listener;


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 1
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 12
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    iput-object v0, p0, Lcom/bianfeng/ymnsdk/ymndatalib/h;->a:Ljava/util/Map;

    .line 73
    new-instance v0, Lcom/bianfeng/ymnsdk/ymndatalib/h$a;

    invoke-direct {v0, p0}, Lcom/bianfeng/ymnsdk/ymndatalib/h$a;-><init>(Lcom/bianfeng/ymnsdk/ymndatalib/h;)V

    iput-object v0, p0, Lcom/bianfeng/ymnsdk/ymndatalib/h;->c:Lcom/bianfeng/netlibsdk/BaseRequest$Listener;

    return-void
.end method

.method public static synthetic a(Lcom/bianfeng/ymnsdk/ymndatalib/h;)Ljava/util/Map;
    .locals 0

    .line 2
    iget-object p0, p0, Lcom/bianfeng/ymnsdk/ymndatalib/h;->a:Ljava/util/Map;

    return-object p0
.end method

.method public static synthetic a(Lcom/bianfeng/ymnsdk/ymndatalib/h;Z)Z
    .locals 0

    .line 1
    iput-boolean p1, p0, Lcom/bianfeng/ymnsdk/ymndatalib/h;->b:Z

    return p1
.end method

.method public static b()Lcom/bianfeng/ymnsdk/ymndatalib/h;
    .locals 2

    .line 3
    sget-object v0, Lcom/bianfeng/ymnsdk/ymndatalib/h;->d:Lcom/bianfeng/ymnsdk/ymndatalib/h;

    if-nez v0, :cond_1

    .line 4
    const-class v0, Lcom/bianfeng/ymnsdk/ymndatalib/h;

    monitor-enter v0

    .line 5
    :try_start_0
    sget-object v1, Lcom/bianfeng/ymnsdk/ymndatalib/h;->d:Lcom/bianfeng/ymnsdk/ymndatalib/h;

    if-nez v1, :cond_0

    .line 6
    new-instance v1, Lcom/bianfeng/ymnsdk/ymndatalib/h;

    invoke-direct {v1}, Lcom/bianfeng/ymnsdk/ymndatalib/h;-><init>()V

    sput-object v1, Lcom/bianfeng/ymnsdk/ymndatalib/h;->d:Lcom/bianfeng/ymnsdk/ymndatalib/h;

    .line 8
    :cond_0
    monitor-exit v0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1

    .line 10
    :cond_1
    :goto_0
    sget-object v0, Lcom/bianfeng/ymnsdk/ymndatalib/h;->d:Lcom/bianfeng/ymnsdk/ymndatalib/h;

    return-object v0
.end method


# virtual methods
.method public a(Ljava/lang/String;)Ljava/lang/String;
    .locals 6

    .line 11
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "YmndataWhiteListSdk getKey "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/YmnDatalibLogger;->i(Ljava/lang/String;)V

    .line 13
    const/4 v0, 0x0

    :try_start_0
    iget-boolean v1, p0, Lcom/bianfeng/ymnsdk/ymndatalib/h;->b:Z

    if-nez v1, :cond_1

    const-string v1, ";"

    .line 14
    invoke-virtual {p1, v1}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object p1

    .line 15
    array-length v1, p1

    const/4 v2, 0x0

    :goto_0
    if-ge v2, v1, :cond_1

    aget-object v3, p1, v2

    .line 16
    invoke-static {v3}, Lcom/bianfeng/ymnsdk/utilslib/security/Md5Utils;->md5(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    .line 17
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "YmndataWhiteListSdk md5 "

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v4}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/YmnDatalibLogger;->i(Ljava/lang/String;)V

    .line 18
    iget-object v4, p0, Lcom/bianfeng/ymnsdk/ymndatalib/h;->a:Ljava/util/Map;

    invoke-interface {v4, v3}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v4
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    if-eqz v4, :cond_0

    return-object v3

    :cond_0
    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    :cond_1
    return-object v0

    .line 28
    :catch_0
    move-exception p1

    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    return-object v0
.end method

.method public a()V
    .locals 2

    .line 1
    new-instance v0, Lcom/bianfeng/ymnsdk/ymndatalib/g;

    invoke-direct {v0}, Lcom/bianfeng/ymnsdk/ymndatalib/g;-><init>()V

    .line 2
    new-instance v1, Lcom/bianfeng/netlibsdk/DefaultRetryPolicy;

    invoke-direct {v1}, Lcom/bianfeng/netlibsdk/DefaultRetryPolicy;-><init>()V

    invoke-virtual {v0, v1}, Lcom/bianfeng/netlibsdk/Request;->setRetryPolicy(Lcom/bianfeng/netlibsdk/RetryPolicy;)Lcom/bianfeng/netlibsdk/Request;

    .line 3
    iget-object v1, p0, Lcom/bianfeng/ymnsdk/ymndatalib/h;->c:Lcom/bianfeng/netlibsdk/BaseRequest$Listener;

    invoke-virtual {v0, v1}, Lcom/bianfeng/netlibsdk/BaseRequest;->setListener(Lcom/bianfeng/netlibsdk/BaseRequest$Listener;)V

    .line 4
    invoke-static {}, Lcom/bianfeng/netlibsdk/NetlibSdk;->getInstance()Lcom/bianfeng/netlibsdk/NetlibSdk;

    move-result-object v1

    invoke-virtual {v1, v0}, Lcom/bianfeng/netlibsdk/NetlibSdk;->add(Lcom/bianfeng/netlibsdk/Request;)V

    return-void
.end method
