.class public final Lcom/kwad/components/ad/adbit/c;
.super Ljava/lang/Object;


# direct methods
.method private static a(Lcom/kwad/sdk/g/c;)Lcom/kwad/components/core/p/a;
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "<T:",
            "Lcom/kwad/components/core/p/a;",
            ">(",
            "Lcom/kwad/sdk/g/c<",
            "TT;>;)TT;"
        }
    .end annotation

    invoke-interface {p0}, Lcom/kwad/sdk/g/c;->get()Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Lcom/kwad/components/core/p/a;

    return-object p0
.end method

.method private static a(Lcom/kwad/components/ad/adbit/AdBitResultData;J)Lcom/kwad/sdk/core/response/model/AdTemplate;
    .locals 3

    invoke-virtual {p0}, Lcom/kwad/components/ad/adbit/AdBitResultData;->getAdTemplateList()Ljava/util/List;

    move-result-object p0

    invoke-interface {p0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p0

    :cond_0
    invoke-interface {p0}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_1

    invoke-interface {p0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/kwad/sdk/core/response/model/AdTemplate;

    if-eqz v0, :cond_0

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/d;->cq(Lcom/kwad/sdk/core/response/model/AdTemplate;)J

    move-result-wide v1

    cmp-long v1, p1, v1

    if-nez v1, :cond_0

    return-object v0

    :cond_1
    const/4 p0, 0x0

    return-object p0
.end method

.method public static a(Lcom/kwad/sdk/internal/api/SceneImpl;)Ljava/lang/String;
    .locals 2

    invoke-static {p0}, Lcom/kwad/sdk/internal/api/SceneImpl;->covert(Lcom/kwad/sdk/api/KsScene;)Lcom/kwad/sdk/internal/api/SceneImpl;

    new-instance v0, Lcom/kwad/components/core/p/a/a$a;

    invoke-direct {v0}, Lcom/kwad/components/core/p/a/a$a;-><init>()V

    new-instance v1, Lcom/kwad/components/core/p/a/b;

    invoke-direct {v1, p0}, Lcom/kwad/components/core/p/a/b;-><init>(Lcom/kwad/sdk/internal/api/SceneImpl;)V

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/p/a/a$a;->e(Lcom/kwad/components/core/p/a/b;)Lcom/kwad/components/core/p/a/a$a;

    move-result-object p0

    new-instance v0, Lcom/kwad/components/core/p/c;

    invoke-direct {v0}, Lcom/kwad/components/core/p/c;-><init>()V

    invoke-virtual {p0, v0}, Lcom/kwad/components/core/p/a/a$a;->a(Lcom/kwad/components/core/p/b;)Lcom/kwad/components/core/p/a/a$a;

    move-result-object p0

    invoke-virtual {p0}, Lcom/kwad/components/core/p/a/a$a;->pI()Lcom/kwad/components/core/p/a/a;

    move-result-object p0

    new-instance v0, Lcom/kwad/components/ad/adbit/c$1;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/adbit/c$1;-><init>(Lcom/kwad/components/core/p/a/a;)V

    invoke-static {v0}, Lcom/kwad/components/ad/adbit/c;->a(Lcom/kwad/sdk/g/c;)Lcom/kwad/components/core/p/a;

    move-result-object p0

    check-cast p0, Lcom/kwad/components/ad/adbit/b;

    new-instance v0, Lcom/kwad/components/ad/adbit/a;

    invoke-virtual {p0}, Lcom/kwad/components/ad/adbit/b;->getBody()Lorg/json/JSONObject;

    move-result-object v1

    invoke-virtual {p0}, Lcom/kwad/components/ad/adbit/b;->getHeader()Ljava/util/Map;

    move-result-object p0

    invoke-direct {v0, v1, p0}, Lcom/kwad/components/ad/adbit/a;-><init>(Lorg/json/JSONObject;Ljava/util/Map;)V

    invoke-virtual {v0}, Lcom/kwad/components/ad/adbit/a;->N()Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method private static a(Lcom/kwad/components/ad/adbit/AdBitResultData;)Ljava/util/List;
    .locals 6
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/kwad/components/ad/adbit/AdBitResultData;",
            ")",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iget-object p0, p0, Lcom/kwad/components/ad/adbit/AdBitResultData;->adBidList:Ljava/util/List;

    invoke-interface {p0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p0

    :cond_0
    :goto_0
    invoke-interface {p0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {p0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/kwad/components/ad/adbit/AdBid;

    if-eqz v1, :cond_0

    iget v2, v1, Lcom/kwad/components/ad/adbit/AdBid;->bidEcpm:I

    if-lez v2, :cond_0

    iget-wide v2, v1, Lcom/kwad/components/ad/adbit/AdBid;->creativeId:J

    const-wide/16 v4, 0x0

    cmp-long v2, v2, v4

    if-lez v2, :cond_0

    iget-object v1, v1, Lcom/kwad/components/ad/adbit/AdBid;->materialId:Ljava/lang/String;

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_0

    :cond_1
    return-object v0
.end method

.method private static a(Lcom/kwad/components/ad/adbit/AdBitResultData;Lcom/kwad/components/ad/adbit/AdBitResultData;)Ljava/util/List;
    .locals 6
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/kwad/components/ad/adbit/AdBitResultData;",
            "Lcom/kwad/components/ad/adbit/AdBitResultData;",
            ")",
            "Ljava/util/List<",
            "Lcom/kwad/sdk/core/response/model/AdTemplate;",
            ">;"
        }
    .end annotation

    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iget-object p0, p0, Lcom/kwad/components/ad/adbit/AdBitResultData;->adBidList:Ljava/util/List;

    invoke-interface {p0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p0

    :cond_0
    :goto_0
    invoke-interface {p0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {p0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/kwad/components/ad/adbit/AdBid;

    if-eqz v1, :cond_0

    iget v2, v1, Lcom/kwad/components/ad/adbit/AdBid;->bidEcpm:I

    if-lez v2, :cond_0

    iget-wide v2, v1, Lcom/kwad/components/ad/adbit/AdBid;->creativeId:J

    const-wide/16 v4, 0x0

    cmp-long v2, v2, v4

    if-lez v2, :cond_0

    iget-wide v2, v1, Lcom/kwad/components/ad/adbit/AdBid;->creativeId:J

    invoke-static {p1, v2, v3}, Lcom/kwad/components/ad/adbit/c;->a(Lcom/kwad/components/ad/adbit/AdBitResultData;J)Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object v2

    if-eqz v2, :cond_0

    iget v1, v1, Lcom/kwad/components/ad/adbit/AdBid;->bidEcpm:I

    int-to-long v3, v1

    iput-wide v3, v2, Lcom/kwad/sdk/core/response/model/AdTemplate;->mBidEcpm:J

    invoke-interface {v0, v2}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_0

    :cond_1
    return-object v0
.end method

.method private static a(Ljava/lang/String;Lcom/kwad/components/core/p/a/a;)V
    .locals 3

    const/4 v0, 0x0

    :try_start_0
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p0}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    new-instance p0, Lcom/kwad/components/ad/adbit/AdBitResultData;

    iget-object v2, p1, Lcom/kwad/components/core/p/a/a;->Lj:Lcom/kwad/components/core/p/a/b;

    iget-object v2, v2, Lcom/kwad/components/core/p/a/b;->PN:Lcom/kwad/sdk/internal/api/SceneImpl;

    invoke-direct {p0, v2}, Lcom/kwad/components/ad/adbit/AdBitResultData;-><init>(Lcom/kwad/sdk/internal/api/SceneImpl;)V

    invoke-virtual {p0, v1}, Lcom/kwad/components/ad/adbit/AdBitResultData;->parseJson(Lorg/json/JSONObject;)V

    invoke-static {p0}, Lcom/kwad/components/ad/adbit/c;->a(Lcom/kwad/components/ad/adbit/AdBitResultData;)Ljava/util/List;

    move-result-object v1

    invoke-interface {v1}, Ljava/util/List;->isEmpty()Z

    move-result v2

    if-eqz v2, :cond_1

    sget-object v1, Lcom/kwad/sdk/core/network/f;->aoU:Lcom/kwad/sdk/core/network/f;

    iget v1, v1, Lcom/kwad/sdk/core/network/f;->errorCode:I

    iget-object v2, p0, Lcom/kwad/components/ad/adbit/AdBitResultData;->testErrorMsg:Ljava/lang/String;

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_0

    sget-object p0, Lcom/kwad/sdk/core/network/f;->aoU:Lcom/kwad/sdk/core/network/f;

    iget-object p0, p0, Lcom/kwad/sdk/core/network/f;->msg:Ljava/lang/String;

    goto :goto_0

    :cond_0
    iget-object p0, p0, Lcom/kwad/components/ad/adbit/AdBitResultData;->testErrorMsg:Ljava/lang/String;

    :goto_0
    invoke-static {p1, v1, p0, v0}, Lcom/kwad/components/core/p/a/a;->a(Lcom/kwad/components/core/p/a/a;ILjava/lang/String;Z)V

    return-void

    :cond_1
    invoke-static {v1, p0, p1}, Lcom/kwad/components/ad/adbit/c;->a(Ljava/util/List;Lcom/kwad/components/ad/adbit/AdBitResultData;Lcom/kwad/components/core/p/a/a;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception p0

    sget-object v1, Lcom/kwad/sdk/core/network/f;->aoT:Lcom/kwad/sdk/core/network/f;

    iget v1, v1, Lcom/kwad/sdk/core/network/f;->errorCode:I

    sget-object v2, Lcom/kwad/sdk/core/network/f;->aoT:Lcom/kwad/sdk/core/network/f;

    iget-object v2, v2, Lcom/kwad/sdk/core/network/f;->msg:Ljava/lang/String;

    invoke-static {p1, v1, v2, v0}, Lcom/kwad/components/core/p/a/a;->a(Lcom/kwad/components/core/p/a/a;ILjava/lang/String;Z)V

    invoke-static {p0}, Lcom/kwad/sdk/core/e/c;->printStackTraceOnly(Ljava/lang/Throwable;)V

    return-void
.end method

.method private static a(Ljava/util/List;Lcom/kwad/components/ad/adbit/AdBitResultData;Lcom/kwad/components/core/p/a/a;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;",
            "Lcom/kwad/components/ad/adbit/AdBitResultData;",
            "Lcom/kwad/components/core/p/a/a;",
            ")V"
        }
    .end annotation

    new-instance v0, Lcom/kwad/components/ad/adbit/c$4;

    invoke-direct {v0, p2, p1, p0}, Lcom/kwad/components/ad/adbit/c$4;-><init>(Lcom/kwad/components/core/p/a/a;Lcom/kwad/components/ad/adbit/AdBitResultData;Ljava/util/List;)V

    new-instance p0, Lcom/kwad/components/ad/adbit/c$5;

    invoke-direct {p0, p1, p2}, Lcom/kwad/components/ad/adbit/c$5;-><init>(Lcom/kwad/components/ad/adbit/AdBitResultData;Lcom/kwad/components/core/p/a/a;)V

    invoke-virtual {v0, p0}, Lcom/kwad/sdk/core/network/m;->request(Lcom/kwad/sdk/core/network/h;)V

    return-void
.end method

.method public static b(Lcom/kwad/components/ad/adbit/AdBitResultData;)Ljava/util/List;
    .locals 7
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/kwad/components/ad/adbit/AdBitResultData;",
            ")",
            "Ljava/util/List<",
            "Lcom/kwad/sdk/core/response/model/AdTemplate;",
            ">;"
        }
    .end annotation

    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iget-object v1, p0, Lcom/kwad/components/ad/adbit/AdBitResultData;->adBidList:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :cond_0
    :goto_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_1

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/kwad/components/ad/adbit/AdBid;

    if-eqz v2, :cond_0

    iget v3, v2, Lcom/kwad/components/ad/adbit/AdBid;->bidEcpm:I

    if-lez v3, :cond_0

    iget-wide v3, v2, Lcom/kwad/components/ad/adbit/AdBid;->creativeId:J

    const-wide/16 v5, 0x0

    cmp-long v3, v3, v5

    if-lez v3, :cond_0

    iget-wide v3, v2, Lcom/kwad/components/ad/adbit/AdBid;->creativeId:J

    invoke-static {p0, v3, v4}, Lcom/kwad/components/ad/adbit/c;->a(Lcom/kwad/components/ad/adbit/AdBitResultData;J)Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object v3

    if-eqz v3, :cond_0

    iget v2, v2, Lcom/kwad/components/ad/adbit/AdBid;->bidEcpm:I

    int-to-long v4, v2

    iput-wide v4, v3, Lcom/kwad/sdk/core/response/model/AdTemplate;->mBidEcpm:J

    invoke-interface {v0, v3}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_0

    :cond_1
    return-object v0
.end method

.method static synthetic b(Lcom/kwad/components/ad/adbit/AdBitResultData;Lcom/kwad/components/ad/adbit/AdBitResultData;)Ljava/util/List;
    .locals 0

    invoke-static {p0, p1}, Lcom/kwad/components/ad/adbit/c;->a(Lcom/kwad/components/ad/adbit/AdBitResultData;Lcom/kwad/components/ad/adbit/AdBitResultData;)Ljava/util/List;

    move-result-object p0

    return-object p0
.end method

.method public static b(Lcom/kwad/components/core/p/a/a;)Z
    .locals 4

    iget-object v0, p0, Lcom/kwad/components/core/p/a/a;->Lj:Lcom/kwad/components/core/p/a/b;

    iget-object v0, v0, Lcom/kwad/components/core/p/a/b;->PN:Lcom/kwad/sdk/internal/api/SceneImpl;

    invoke-virtual {v0}, Lcom/kwad/sdk/internal/api/SceneImpl;->getBidResponseV2()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    const/4 v2, 0x1

    if-nez v1, :cond_0

    invoke-static {v0, p0}, Lcom/kwad/components/ad/adbit/c;->a(Ljava/lang/String;Lcom/kwad/components/core/p/a/a;)V

    return v2

    :cond_0
    const-class v0, Lcom/kwad/sdk/components/DevelopMangerComponents;

    invoke-static {v0}, Lcom/kwad/sdk/components/c;->f(Ljava/lang/Class;)Lcom/kwad/sdk/components/a;

    iget-object v0, p0, Lcom/kwad/components/core/p/a/a;->Lj:Lcom/kwad/components/core/p/a/b;

    iget-object v0, v0, Lcom/kwad/components/core/p/a/b;->PN:Lcom/kwad/sdk/internal/api/SceneImpl;

    invoke-virtual {v0}, Lcom/kwad/sdk/internal/api/SceneImpl;->getBidResponse()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_1

    const/4 p0, 0x0

    return p0

    :cond_1
    invoke-static {}, Lcom/kwad/sdk/core/threads/GlobalThreadPools;->CW()Ljava/util/concurrent/ExecutorService;

    move-result-object v1

    new-instance v3, Lcom/kwad/components/ad/adbit/c$3;

    invoke-direct {v3, v0, p0}, Lcom/kwad/components/ad/adbit/c$3;-><init>(Ljava/lang/String;Lcom/kwad/components/core/p/a/a;)V

    invoke-interface {v1, v3}, Ljava/util/concurrent/ExecutorService;->submit(Ljava/lang/Runnable;)Ljava/util/concurrent/Future;

    return v2
.end method

.method public static getBidRequestTokenV2(Lcom/kwad/sdk/api/KsScene;)Ljava/lang/String;
    .locals 2

    invoke-static {p0}, Lcom/kwad/sdk/internal/api/SceneImpl;->covert(Lcom/kwad/sdk/api/KsScene;)Lcom/kwad/sdk/internal/api/SceneImpl;

    move-result-object p0

    new-instance v0, Lcom/kwad/components/core/p/a/a$a;

    invoke-direct {v0}, Lcom/kwad/components/core/p/a/a$a;-><init>()V

    new-instance v1, Lcom/kwad/components/core/p/a/b;

    invoke-direct {v1, p0}, Lcom/kwad/components/core/p/a/b;-><init>(Lcom/kwad/sdk/internal/api/SceneImpl;)V

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/p/a/a$a;->e(Lcom/kwad/components/core/p/a/b;)Lcom/kwad/components/core/p/a/a$a;

    move-result-object p0

    new-instance v0, Lcom/kwad/components/core/p/c;

    invoke-direct {v0}, Lcom/kwad/components/core/p/c;-><init>()V

    invoke-virtual {p0, v0}, Lcom/kwad/components/core/p/a/a$a;->a(Lcom/kwad/components/core/p/b;)Lcom/kwad/components/core/p/a/a$a;

    move-result-object p0

    invoke-virtual {p0}, Lcom/kwad/components/core/p/a/a$a;->pI()Lcom/kwad/components/core/p/a/a;

    move-result-object p0

    new-instance v0, Lcom/kwad/components/ad/adbit/c$2;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/adbit/c$2;-><init>(Lcom/kwad/components/core/p/a/a;)V

    invoke-static {v0}, Lcom/kwad/components/ad/adbit/c;->a(Lcom/kwad/sdk/g/c;)Lcom/kwad/components/core/p/a;

    move-result-object p0

    check-cast p0, Lcom/kwad/components/ad/a/a;

    new-instance v0, Lcom/kwad/components/ad/adbit/a;

    invoke-virtual {p0}, Lcom/kwad/components/ad/a/a;->getBody()Lorg/json/JSONObject;

    move-result-object v1

    invoke-virtual {p0}, Lcom/kwad/components/ad/a/a;->getHeader()Ljava/util/Map;

    move-result-object p0

    invoke-direct {v0, v1, p0}, Lcom/kwad/components/ad/adbit/a;-><init>(Lorg/json/JSONObject;Ljava/util/Map;)V

    invoke-virtual {v0}, Lcom/kwad/components/ad/adbit/a;->N()Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method
