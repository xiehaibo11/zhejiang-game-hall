.class public final Lcom/kwad/components/ad/fullscreen/a;
.super Lcom/kwad/sdk/components/d;

# interfaces
.implements Lcom/kwad/components/ad/b/d;


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/sdk/components/d;-><init>()V

    return-void
.end method


# virtual methods
.method public final getComponentsType()Ljava/lang/Class;
    .locals 1

    const-class v0, Lcom/kwad/components/ad/b/d;

    return-object v0
.end method

.method public final init(Landroid/content/Context;)V
    .locals 0

    return-void
.end method

.method public final loadFullScreenVideoAd(Lcom/kwad/sdk/api/KsScene;Lcom/kwad/sdk/api/KsLoadManager$FullScreenVideoAdListener;)V
    .locals 0

    invoke-static {p1, p2}, Lcom/kwad/components/ad/fullscreen/d;->loadFullScreenVideoAd(Lcom/kwad/sdk/api/KsScene;Lcom/kwad/sdk/api/KsLoadManager$FullScreenVideoAdListener;)V

    return-void
.end method

.method public final priority()I
    .locals 2

    const-class v0, Lcom/kwad/components/ad/b/g;

    invoke-static {v0}, Lcom/kwad/sdk/components/c;->f(Ljava/lang/Class;)Lcom/kwad/sdk/components/a;

    move-result-object v0

    const/4 v1, 0x1

    if-eqz v0, :cond_0

    invoke-interface {v0}, Lcom/kwad/sdk/components/a;->priority()I

    move-result v0

    add-int/2addr v0, v1

    return v0

    :cond_0
    return v1
.end method
