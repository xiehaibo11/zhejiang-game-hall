.class public final Lcom/kwad/components/ad/draw/a;
.super Lcom/kwad/sdk/components/d;

# interfaces
.implements Lcom/kwad/components/ad/b/b;


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/sdk/components/d;-><init>()V

    return-void
.end method


# virtual methods
.method public final getComponentsType()Ljava/lang/Class;
    .locals 1

    const-class v0, Lcom/kwad/components/ad/b/b;

    return-object v0
.end method

.method public final init(Landroid/content/Context;)V
    .locals 0

    return-void
.end method

.method public final loadDrawAd(Lcom/kwad/sdk/api/KsScene;Lcom/kwad/sdk/api/KsLoadManager$DrawAdListener;)V
    .locals 0

    invoke-static {p1, p2}, Lcom/kwad/components/ad/draw/d;->loadDrawAd(Lcom/kwad/sdk/api/KsScene;Lcom/kwad/sdk/api/KsLoadManager$DrawAdListener;)V

    return-void
.end method
