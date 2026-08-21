.class public Lcom/sigmob/windad/WindAdRequest;
.super Ljava/lang/Object;


# instance fields
.field protected a:I

.field protected b:I

.field private c:Ljava/lang/String;

.field private d:Ljava/lang/String;

.field private e:Ljava/lang/String;

.field private f:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;"
        }
    .end annotation
.end field

.field private g:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;"
        }
    .end annotation
.end field

.field private h:Z


# direct methods
.method protected constructor <init>(Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;)V"
        }
    .end annotation

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x1

    iput v0, p0, Lcom/sigmob/windad/WindAdRequest;->b:I

    iput-object p1, p0, Lcom/sigmob/windad/WindAdRequest;->c:Ljava/lang/String;

    iput-object p2, p0, Lcom/sigmob/windad/WindAdRequest;->d:Ljava/lang/String;

    iput-object p3, p0, Lcom/sigmob/windad/WindAdRequest;->f:Ljava/util/Map;

    iput v0, p0, Lcom/sigmob/windad/WindAdRequest;->a:I

    return-void
.end method

.method public static isPlacementEmpty(Lcom/sigmob/windad/WindAdRequest;)Z
    .locals 0

    if-eqz p0, :cond_1

    invoke-virtual {p0}, Lcom/sigmob/windad/WindAdRequest;->getPlacementId()Ljava/lang/String;

    move-result-object p0

    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p0

    if-eqz p0, :cond_0

    goto :goto_0

    :cond_0
    const/4 p0, 0x0

    goto :goto_1

    :cond_1
    :goto_0
    const/4 p0, 0x1

    :goto_1
    return p0
.end method


# virtual methods
.method public getAdCount()I
    .locals 1

    iget v0, p0, Lcom/sigmob/windad/WindAdRequest;->b:I

    return v0
.end method

.method public getAdType()I
    .locals 1

    iget v0, p0, Lcom/sigmob/windad/WindAdRequest;->a:I

    return v0
.end method

.method public getLoadId()Ljava/lang/String;
    .locals 2

    iget-object v0, p0, Lcom/sigmob/windad/WindAdRequest;->g:Ljava/util/Map;

    if-eqz v0, :cond_0

    const-string v1, "loadId"

    invoke-interface {v0, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    instance-of v1, v0, Ljava/lang/String;

    if-eqz v1, :cond_0

    check-cast v0, Ljava/lang/String;

    return-object v0

    :cond_0
    const/4 v0, 0x0

    return-object v0
.end method

.method public getOptions()Ljava/util/Map;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;"
        }
    .end annotation

    iget-object v0, p0, Lcom/sigmob/windad/WindAdRequest;->f:Ljava/util/Map;

    return-object v0
.end method

.method public getPlacementId()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/windad/WindAdRequest;->c:Ljava/lang/String;

    return-object v0
.end method

.method public getUserId()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/windad/WindAdRequest;->d:Ljava/lang/String;

    return-object v0
.end method

.method public hasOptions()Z
    .locals 1

    iget-object v0, p0, Lcom/sigmob/windad/WindAdRequest;->f:Ljava/util/Map;

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return v0
.end method

.method public isHalfInterstitial()Z
    .locals 1

    iget-boolean v0, p0, Lcom/sigmob/windad/WindAdRequest;->h:Z

    return v0
.end method

.method public setExtOptions(Ljava/util/Map;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;)V"
        }
    .end annotation

    iput-object p1, p0, Lcom/sigmob/windad/WindAdRequest;->g:Ljava/util/Map;

    return-void
.end method

.method public setHalfInterstitial(Z)V
    .locals 0

    iput-boolean p1, p0, Lcom/sigmob/windad/WindAdRequest;->h:Z

    return-void
.end method

.method public setOptions(Ljava/util/Map;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;)V"
        }
    .end annotation

    iput-object p1, p0, Lcom/sigmob/windad/WindAdRequest;->f:Ljava/util/Map;

    return-void
.end method

.method public setUserId(Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/windad/WindAdRequest;->d:Ljava/lang/String;

    return-void
.end method
