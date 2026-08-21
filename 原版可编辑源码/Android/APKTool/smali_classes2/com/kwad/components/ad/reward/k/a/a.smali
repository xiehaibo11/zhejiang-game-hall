.class public final Lcom/kwad/components/ad/reward/k/a/a;
.super Lcom/kwad/components/ad/reward/k/a;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/components/ad/reward/k/a/a$a;,
        Lcom/kwad/components/ad/reward/k/a/a$b;
    }
.end annotation


# instance fields
.field private xV:Lcom/kwad/components/ad/reward/k/a/a$b;

.field private final xW:Lcom/kwad/components/ad/reward/k/a/a$a;


# direct methods
.method public constructor <init>()V
    .locals 2

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/k/a;-><init>()V

    new-instance v0, Lcom/kwad/components/ad/reward/k/a/a$b;

    invoke-direct {v0}, Lcom/kwad/components/ad/reward/k/a/a$b;-><init>()V

    iput-object v0, p0, Lcom/kwad/components/ad/reward/k/a/a;->xV:Lcom/kwad/components/ad/reward/k/a/a$b;

    new-instance v0, Lcom/kwad/components/ad/reward/k/a/a$a;

    invoke-static {}, Lcom/kwad/sdk/core/config/d;->zC()I

    move-result v1

    invoke-direct {v0, v1}, Lcom/kwad/components/ad/reward/k/a/a$a;-><init>(I)V

    iput-object v0, p0, Lcom/kwad/components/ad/reward/k/a/a;->xW:Lcom/kwad/components/ad/reward/k/a/a$a;

    return-void
.end method

.method private jI()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/k/a/a;->xW:Lcom/kwad/components/ad/reward/k/a/a$a;

    invoke-virtual {v0}, Lcom/kwad/components/ad/reward/k/a/a$a;->isCompleted()Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/k/a/a;->jy()V

    return-void

    :cond_0
    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/k/a/a;->jz()V

    return-void
.end method


# virtual methods
.method public final isCompleted()Z
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/k/a/a;->xW:Lcom/kwad/components/ad/reward/k/a/a$a;

    invoke-virtual {v0}, Lcom/kwad/components/ad/reward/k/a/a$a;->isCompleted()Z

    move-result v0

    return v0
.end method

.method public final jG()V
    .locals 2

    const-string v0, "LandPageOpenTask"

    const-string v1, "markWatchVideoCompleted"

    invoke-static {v0, v1}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/k/a/a;->xV:Lcom/kwad/components/ad/reward/k/a/a$b;

    invoke-virtual {v0}, Lcom/kwad/components/ad/reward/k/a/a$b;->jy()V

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/k/a/a;->jI()V

    return-void
.end method

.method public final jH()Z
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/k/a/a;->xV:Lcom/kwad/components/ad/reward/k/a/a$b;

    invoke-virtual {v0}, Lcom/kwad/components/ad/reward/k/a/a$b;->isCompleted()Z

    move-result v0

    return v0
.end method

.method public final jw()Ljava/util/List;
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Lcom/kwad/components/ad/reward/k/c;",
            ">;"
        }
    .end annotation

    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iget-object v1, p0, Lcom/kwad/components/ad/reward/k/a/a;->xV:Lcom/kwad/components/ad/reward/k/a/a$b;

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    iget-object v1, p0, Lcom/kwad/components/ad/reward/k/a/a;->xW:Lcom/kwad/components/ad/reward/k/a/a$a;

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    return-object v0
.end method

.method public final jx()I
    .locals 3

    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/k/a/a;->jw()Ljava/util/List;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    const/4 v1, 0x0

    :cond_0
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_1

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/kwad/components/ad/reward/k/c;

    invoke-interface {v2}, Lcom/kwad/components/ad/reward/k/c;->isCompleted()Z

    move-result v2

    if-nez v2, :cond_0

    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    :cond_1
    return v1
.end method

.method public final markOpenNsCompleted()V
    .locals 2

    const-string v0, "LandPageOpenTask"

    const-string v1, "markOpenNsCompleted"

    invoke-static {v0, v1}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/k/a/a;->xW:Lcom/kwad/components/ad/reward/k/a/a$a;

    invoke-virtual {v0}, Lcom/kwad/components/ad/reward/k/a/a$a;->jy()V

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/k/a/a;->jI()V

    return-void
.end method

.method public final parseJson(Lorg/json/JSONObject;)V
    .locals 2

    :try_start_0
    const-string v0, "mWatchVideoTask"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/reward/k/a/a;->xV:Lcom/kwad/components/ad/reward/k/a/a$b;

    invoke-virtual {v1, v0}, Lcom/kwad/components/ad/reward/k/a/a$b;->parseJson(Lorg/json/JSONObject;)V

    const-string v0, "mOpenNsTask"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object p1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/k/a/a;->xW:Lcom/kwad/components/ad/reward/k/a/a$a;

    invoke-virtual {v0, p1}, Lcom/kwad/components/ad/reward/k/a/a$a;->parseJson(Lorg/json/JSONObject;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    return-void
.end method

.method public final toJson()Lorg/json/JSONObject;
    .locals 3

    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    iget-object v1, p0, Lcom/kwad/components/ad/reward/k/a/a;->xV:Lcom/kwad/components/ad/reward/k/a/a$b;

    const-string v2, "mWatchVideoTask"

    invoke-static {v0, v2, v1}, Lcom/kwad/sdk/utils/t;->a(Lorg/json/JSONObject;Ljava/lang/String;Lcom/kwad/sdk/core/b;)V

    iget-object v1, p0, Lcom/kwad/components/ad/reward/k/a/a;->xW:Lcom/kwad/components/ad/reward/k/a/a$a;

    const-string v2, "mOpenNsTask"

    invoke-static {v0, v2, v1}, Lcom/kwad/sdk/utils/t;->a(Lorg/json/JSONObject;Ljava/lang/String;Lcom/kwad/sdk/core/b;)V

    return-object v0
.end method
