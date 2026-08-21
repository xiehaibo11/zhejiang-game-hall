.class public Lcom/bianfeng/seppellita/net/UrlManager;
.super Ljava/lang/Object;
.source "UrlManager.java"


# static fields
.field private static final SEPPELLITA_ABTEST_ROUTER:Ljava/lang/String; = "/api/abtest"

.field private static final SEPPELLITA_INIT_ROUTER:Ljava/lang/String; = "/api/init"

.field private static final SEPPELLITA_POST_ROUTER:Ljava/lang/String; = "/api/action"

.field private static volatile manager:Lcom/bianfeng/seppellita/net/UrlManager;


# instance fields
.field private urlStrategy:Lcom/bianfeng/seppellita/net/UrlStrategy;


# direct methods
.method private constructor <init>()V
    .locals 1

    .line 19
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 20
    new-instance v0, Lcom/bianfeng/seppellita/net/UrlStrategy;

    invoke-direct {v0}, Lcom/bianfeng/seppellita/net/UrlStrategy;-><init>()V

    iput-object v0, p0, Lcom/bianfeng/seppellita/net/UrlManager;->urlStrategy:Lcom/bianfeng/seppellita/net/UrlStrategy;

    return-void
.end method

.method private declared-synchronized createGetUrl(Ljava/lang/String;Ljava/util/Map;)Ljava/lang/String;
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;)",
            "Ljava/lang/String;"
        }
    .end annotation

    monitor-enter p0

    .line 53
    :try_start_0
    invoke-interface {p2}, Ljava/util/Map;->size()I

    move-result v0

    if-nez v0, :cond_0

    const-string p2, "createGetUrl--->map"

    .line 54
    invoke-static {p2}, Lcom/bianfeng/seppellita/utils/SeppellitaLogger;->e(Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 55
    monitor-exit p0

    return-object p1

    .line 57
    :cond_0
    :try_start_1
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    .line 58
    invoke-interface {p2}, Ljava/util/Map;->entrySet()Ljava/util/Set;

    move-result-object p2

    invoke-interface {p2}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object p2

    :goto_0
    invoke-interface {p2}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {p2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/util/Map$Entry;

    const-string v2, "&"

    .line 59
    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-interface {v1}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "="

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-interface {v1}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    goto :goto_0

    .line 62
    :cond_1
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, "?"

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/4 p1, 0x1

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->substring(I)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    monitor-exit p0

    return-object p1

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method public static getInstance()Lcom/bianfeng/seppellita/net/UrlManager;
    .locals 2

    .line 24
    sget-object v0, Lcom/bianfeng/seppellita/net/UrlManager;->manager:Lcom/bianfeng/seppellita/net/UrlManager;

    if-nez v0, :cond_1

    .line 25
    const-class v0, Lcom/bianfeng/seppellita/net/UrlManager;

    monitor-enter v0

    .line 26
    :try_start_0
    sget-object v1, Lcom/bianfeng/seppellita/net/UrlManager;->manager:Lcom/bianfeng/seppellita/net/UrlManager;

    if-nez v1, :cond_0

    .line 27
    new-instance v1, Lcom/bianfeng/seppellita/net/UrlManager;

    invoke-direct {v1}, Lcom/bianfeng/seppellita/net/UrlManager;-><init>()V

    sput-object v1, Lcom/bianfeng/seppellita/net/UrlManager;->manager:Lcom/bianfeng/seppellita/net/UrlManager;

    .line 29
    :cond_0
    monitor-exit v0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1

    .line 31
    :cond_1
    :goto_0
    sget-object v0, Lcom/bianfeng/seppellita/net/UrlManager;->manager:Lcom/bianfeng/seppellita/net/UrlManager;

    return-object v0
.end method


# virtual methods
.method public getAbTest(Ljava/util/Map;)Ljava/lang/String;
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;)",
            "Ljava/lang/String;"
        }
    .end annotation

    .line 66
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v1, p0, Lcom/bianfeng/seppellita/net/UrlManager;->urlStrategy:Lcom/bianfeng/seppellita/net/UrlStrategy;

    invoke-virtual {v1}, Lcom/bianfeng/seppellita/net/UrlStrategy;->getUrl()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "/api/abtest"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 67
    invoke-direct {p0, v0, p1}, Lcom/bianfeng/seppellita/net/UrlManager;->createGetUrl(Ljava/lang/String;Ljava/util/Map;)Ljava/lang/String;

    move-result-object p1

    return-object p1
.end method

.method public getInitUrl(Ljava/util/Map;)Ljava/lang/String;
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;)",
            "Ljava/lang/String;"
        }
    .end annotation

    .line 48
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v1, p0, Lcom/bianfeng/seppellita/net/UrlManager;->urlStrategy:Lcom/bianfeng/seppellita/net/UrlStrategy;

    invoke-virtual {v1}, Lcom/bianfeng/seppellita/net/UrlStrategy;->getUrl()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "/api/init"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 49
    invoke-direct {p0, v0, p1}, Lcom/bianfeng/seppellita/net/UrlManager;->createGetUrl(Ljava/lang/String;Ljava/util/Map;)Ljava/lang/String;

    move-result-object p1

    return-object p1
.end method

.method public getPostRouter()Ljava/lang/String;
    .locals 1

    const-string v0, "/api/action"

    return-object v0
.end method

.method public getPostUrl()Ljava/lang/String;
    .locals 2

    .line 76
    iget-object v0, p0, Lcom/bianfeng/seppellita/net/UrlManager;->urlStrategy:Lcom/bianfeng/seppellita/net/UrlStrategy;

    invoke-virtual {v0}, Lcom/bianfeng/seppellita/net/UrlStrategy;->getAction()Ljava/lang/String;

    move-result-object v0

    .line 77
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, "/api/action"

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public onFail()V
    .locals 1

    .line 89
    iget-object v0, p0, Lcom/bianfeng/seppellita/net/UrlManager;->urlStrategy:Lcom/bianfeng/seppellita/net/UrlStrategy;

    invoke-virtual {v0}, Lcom/bianfeng/seppellita/net/UrlStrategy;->onFail()V

    return-void
.end method

.method public onSuc()V
    .locals 1

    .line 85
    iget-object v0, p0, Lcom/bianfeng/seppellita/net/UrlManager;->urlStrategy:Lcom/bianfeng/seppellita/net/UrlStrategy;

    invoke-virtual {v0}, Lcom/bianfeng/seppellita/net/UrlStrategy;->onSuc()V

    return-void
.end method

.method public setUrlBean(Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    .line 39
    iget-object v0, p0, Lcom/bianfeng/seppellita/net/UrlManager;->urlStrategy:Lcom/bianfeng/seppellita/net/UrlStrategy;

    invoke-virtual {v0, p1, p2}, Lcom/bianfeng/seppellita/net/UrlStrategy;->setUrlBean(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public setUrls(Lcom/bianfeng/seppellita/bean/InitBean$DataBean$SevrerListBean;)V
    .locals 1

    .line 35
    iget-object v0, p0, Lcom/bianfeng/seppellita/net/UrlManager;->urlStrategy:Lcom/bianfeng/seppellita/net/UrlStrategy;

    invoke-virtual {v0, p1}, Lcom/bianfeng/seppellita/net/UrlStrategy;->setUrls(Lcom/bianfeng/seppellita/bean/InitBean$DataBean$SevrerListBean;)V

    return-void
.end method
