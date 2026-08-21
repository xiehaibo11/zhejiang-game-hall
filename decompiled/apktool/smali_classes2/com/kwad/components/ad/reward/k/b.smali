.class public abstract Lcom/kwad/components/ad/reward/k/b;
.super Ljava/util/Observable;

# interfaces
.implements Lcom/kwad/components/ad/reward/k/c;
.implements Lcom/kwad/sdk/core/b;


# instance fields
.field private xS:Z

.field protected xT:Ljava/lang/String;

.field protected xU:Ljava/lang/String;


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Ljava/util/Observable;-><init>()V

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/kwad/components/ad/reward/k/b;->xS:Z

    return-void
.end method

.method private jC()Z
    .locals 1

    iget-boolean v0, p0, Lcom/kwad/components/ad/reward/k/b;->xS:Z

    return v0
.end method

.method private jD()V
    .locals 1

    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/k/b;->setChanged()V

    iget-boolean v0, p0, Lcom/kwad/components/ad/reward/k/b;->xS:Z

    invoke-static {v0}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/reward/k/b;->notifyObservers(Ljava/lang/Object;)V

    return-void
.end method


# virtual methods
.method public isCompleted()Z
    .locals 1

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/k/b;->jC()Z

    move-result v0

    return v0
.end method

.method public final jA()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/k/b;->xT:Ljava/lang/String;

    return-object v0
.end method

.method public final jB()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/k/b;->xU:Ljava/lang/String;

    return-object v0
.end method

.method public final jy()V
    .locals 1

    iget-boolean v0, p0, Lcom/kwad/components/ad/reward/k/b;->xS:Z

    if-nez v0, :cond_0

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/kwad/components/ad/reward/k/b;->xS:Z

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/k/b;->jD()V

    :cond_0
    return-void
.end method

.method public final jz()V
    .locals 1

    iget-boolean v0, p0, Lcom/kwad/components/ad/reward/k/b;->xS:Z

    if-eqz v0, :cond_0

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/kwad/components/ad/reward/k/b;->xS:Z

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/k/b;->jD()V

    :cond_0
    return-void
.end method

.method public parseJson(Lorg/json/JSONObject;)V
    .locals 1

    :try_start_0
    const-string v0, "selfCompleted"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optBoolean(Ljava/lang/String;)Z

    move-result p1

    iput-boolean p1, p0, Lcom/kwad/components/ad/reward/k/b;->xS:Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    return-void
.end method

.method public toJson()Lorg/json/JSONObject;
    .locals 3

    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    iget-boolean v1, p0, Lcom/kwad/components/ad/reward/k/b;->xS:Z

    const-string v2, "selfCompleted"

    invoke-static {v0, v2, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Z)V

    return-object v0
.end method
