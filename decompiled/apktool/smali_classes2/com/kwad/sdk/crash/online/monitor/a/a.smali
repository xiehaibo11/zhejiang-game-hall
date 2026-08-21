.class public Lcom/kwad/sdk/crash/online/monitor/a/a;
.super Lcom/kwad/sdk/core/response/a/a;


# instance fields
.field public aAT:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field public aAU:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field public aAV:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field public aAW:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field public aAX:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/kwad/sdk/crash/online/monitor/a/b;",
            ">;"
        }
    .end annotation
.end field

.field public aAY:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Lcom/kwad/sdk/crash/online/monitor/a/b;",
            ">;"
        }
    .end annotation
.end field

.field public aAZ:I

.field public aBa:I

.field public aBb:I

.field public aqQ:D


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Lcom/kwad/sdk/core/response/a/a;-><init>()V

    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/kwad/sdk/crash/online/monitor/a/a;->aAT:Ljava/util/List;

    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/kwad/sdk/crash/online/monitor/a/a;->aAU:Ljava/util/List;

    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/kwad/sdk/crash/online/monitor/a/a;->aAV:Ljava/util/List;

    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/kwad/sdk/crash/online/monitor/a/a;->aAW:Ljava/util/List;

    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/kwad/sdk/crash/online/monitor/a/a;->aAX:Ljava/util/List;

    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    iput-object v0, p0, Lcom/kwad/sdk/crash/online/monitor/a/a;->aAY:Ljava/util/Map;

    return-void
.end method


# virtual methods
.method public final Fc()Z
    .locals 1

    iget v0, p0, Lcom/kwad/sdk/crash/online/monitor/a/a;->aBb:I

    and-int/lit8 v0, v0, 0x4

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public final Fd()Z
    .locals 2

    iget v0, p0, Lcom/kwad/sdk/crash/online/monitor/a/a;->aBb:I

    const/4 v1, 0x1

    and-int/2addr v0, v1

    if-eqz v0, :cond_0

    return v1

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public final Fe()Z
    .locals 1

    iget v0, p0, Lcom/kwad/sdk/crash/online/monitor/a/a;->aBb:I

    and-int/lit8 v0, v0, 0x2

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public final Ff()Z
    .locals 1

    iget v0, p0, Lcom/kwad/sdk/crash/online/monitor/a/a;->aBb:I

    if-nez v0, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public afterParseJson(Lorg/json/JSONObject;)V
    .locals 3

    invoke-super {p0, p1}, Lcom/kwad/sdk/core/response/a/a;->afterParseJson(Lorg/json/JSONObject;)V

    iget-object p1, p0, Lcom/kwad/sdk/crash/online/monitor/a/a;->aAX:Ljava/util/List;

    if-eqz p1, :cond_1

    invoke-interface {p1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :goto_0
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/kwad/sdk/crash/online/monitor/a/b;

    iget-object v1, p0, Lcom/kwad/sdk/crash/online/monitor/a/a;->aAY:Ljava/util/Map;

    iget-object v2, v0, Lcom/kwad/sdk/crash/online/monitor/a/b;->appId:Ljava/lang/String;

    invoke-interface {v1, v2, v0}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    goto :goto_0

    :cond_0
    iget-object p1, p0, Lcom/kwad/sdk/crash/online/monitor/a/a;->aAX:Ljava/util/List;

    invoke-interface {p1}, Ljava/util/List;->clear()V

    :cond_1
    return-void
.end method

.method public final eK(Ljava/lang/String;)Lcom/kwad/sdk/crash/online/monitor/a/b;
    .locals 2

    iget-object v0, p0, Lcom/kwad/sdk/crash/online/monitor/a/a;->aAY:Ljava/util/Map;

    const/4 v1, 0x0

    if-eqz v0, :cond_1

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/kwad/sdk/crash/online/monitor/a/a;->aAY:Ljava/util/Map;

    invoke-interface {v0, p1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    move-object v1, p1

    check-cast v1, Lcom/kwad/sdk/crash/online/monitor/a/b;

    :cond_0
    if-nez v1, :cond_1

    iget-object p1, p0, Lcom/kwad/sdk/crash/online/monitor/a/a;->aAY:Ljava/util/Map;

    const-string v0, "000000000"

    invoke-interface {p1, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    move-object v1, p1

    check-cast v1, Lcom/kwad/sdk/crash/online/monitor/a/b;

    :cond_1
    return-object v1
.end method
