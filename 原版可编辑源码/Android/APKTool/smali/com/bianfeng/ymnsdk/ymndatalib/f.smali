.class public Lcom/bianfeng/ymnsdk/ymndatalib/f;
.super Ljava/lang/Object;
.source "PostDatalibUtils.java"


# static fields
.field public static volatile b:Lcom/bianfeng/ymnsdk/ymndatalib/f;

.field public static c:Landroid/os/Handler;


# instance fields
.field public a:Lcom/bianfeng/datafunsdk/net/ResponseHeaders;


# direct methods
.method public static constructor <clinit>()V
    .locals 2

    .line 1
    new-instance v0, Landroid/os/Handler;

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v1

    invoke-direct {v0, v1}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    sput-object v0, Lcom/bianfeng/ymnsdk/ymndatalib/f;->c:Landroid/os/Handler;

    return-void
.end method

.method public constructor <init>()V
    .locals 3

    .line 1
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 2
    new-instance v0, Lcom/bianfeng/datafunsdk/net/ResponseHeaders;

    const-string v1, "X-Error-Code"

    const/4 v2, 0x0

    invoke-direct {v0, v1, v2}, Lcom/bianfeng/datafunsdk/net/ResponseHeaders;-><init>(Ljava/lang/String;I)V

    iput-object v0, p0, Lcom/bianfeng/ymnsdk/ymndatalib/f;->a:Lcom/bianfeng/datafunsdk/net/ResponseHeaders;

    return-void
.end method

.method public static synthetic a(Lcom/bianfeng/ymnsdk/ymndatalib/f;)Lcom/bianfeng/datafunsdk/net/ResponseHeaders;
    .locals 0

    .line 1
    iget-object p0, p0, Lcom/bianfeng/ymnsdk/ymndatalib/f;->a:Lcom/bianfeng/datafunsdk/net/ResponseHeaders;

    return-object p0
.end method

.method public static a()Lcom/bianfeng/ymnsdk/ymndatalib/f;
    .locals 2

    .line 2
    sget-object v0, Lcom/bianfeng/ymnsdk/ymndatalib/f;->b:Lcom/bianfeng/ymnsdk/ymndatalib/f;

    if-nez v0, :cond_1

    .line 3
    const-class v0, Lcom/bianfeng/ymnsdk/ymndatalib/f;

    monitor-enter v0

    .line 4
    :try_start_0
    sget-object v1, Lcom/bianfeng/ymnsdk/ymndatalib/f;->b:Lcom/bianfeng/ymnsdk/ymndatalib/f;

    if-nez v1, :cond_0

    .line 5
    new-instance v1, Lcom/bianfeng/ymnsdk/ymndatalib/f;

    invoke-direct {v1}, Lcom/bianfeng/ymnsdk/ymndatalib/f;-><init>()V

    sput-object v1, Lcom/bianfeng/ymnsdk/ymndatalib/f;->b:Lcom/bianfeng/ymnsdk/ymndatalib/f;

    .line 7
    :cond_0
    monitor-exit v0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1

    .line 9
    :cond_1
    :goto_0
    sget-object v0, Lcom/bianfeng/ymnsdk/ymndatalib/f;->b:Lcom/bianfeng/ymnsdk/ymndatalib/f;

    return-object v0
.end method


# virtual methods
.method public a(Ljava/lang/String;)V
    .locals 3

    .line 10
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "PostDatalibUtils-->"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/YmnDatalibLogger;->i(Ljava/lang/String;)V

    .line 11
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/YmnDataUrlUtils;->getInstance()Lcom/bianfeng/ymnsdk/ymndatalib/utils/YmnDataUrlUtils;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/YmnDataUrlUtils;->getYmndataPostUrl()Ljava/lang/String;

    move-result-object v0

    .line 12
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "PostDatalibUtils--url-->"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/YmnDatalibLogger;->i(Ljava/lang/String;)V

    .line 14
    :try_start_0
    sget-object v1, Lcom/bianfeng/ymnsdk/ymndatalib/f;->c:Landroid/os/Handler;

    new-instance v2, Lcom/bianfeng/ymnsdk/ymndatalib/f$a;

    invoke-direct {v2, p0, v0, p1}, Lcom/bianfeng/ymnsdk/ymndatalib/f$a;-><init>(Lcom/bianfeng/ymnsdk/ymndatalib/f;Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {v1, v2}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 22
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "\u8c03postByteData\u51fa\u9519"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/YmnDatalibLogger;->i(Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method public b(Ljava/lang/String;)V
    .locals 1

    .line 1
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/YmnDataUrlUtils;->getInstance()Lcom/bianfeng/ymnsdk/ymndatalib/utils/YmnDataUrlUtils;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/YmnDataUrlUtils;->setYmndataPostUrl(Ljava/lang/String;)V

    return-void
.end method
