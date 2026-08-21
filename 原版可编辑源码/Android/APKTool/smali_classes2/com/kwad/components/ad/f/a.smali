.class public final Lcom/kwad/components/ad/f/a;
.super Lcom/kwad/sdk/components/d;

# interfaces
.implements Lcom/kwad/components/ad/b/f;


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/sdk/components/d;-><init>()V

    return-void
.end method


# virtual methods
.method public final getComponentsType()Ljava/lang/Class;
    .locals 1

    const-class v0, Lcom/kwad/components/ad/b/f;

    return-object v0
.end method

.method public final init(Landroid/content/Context;)V
    .locals 0

    return-void
.end method

.method public final loadNativeAd(Lcom/kwad/sdk/api/KsScene;Lcom/kwad/sdk/api/KsLoadManager$NativeAdListener;)V
    .locals 0

    invoke-static {p1, p2}, Lcom/kwad/components/ad/f/c;->loadNativeAd(Lcom/kwad/sdk/api/KsScene;Lcom/kwad/sdk/api/KsLoadManager$NativeAdListener;)V

    return-void
.end method

.method public final loadNativeAd(Ljava/lang/String;Lcom/kwad/sdk/api/KsLoadManager$NativeAdListener;)V
    .locals 0

    invoke-static {p1, p2}, Lcom/kwad/components/ad/f/c;->loadNativeAd(Ljava/lang/String;Lcom/kwad/sdk/api/KsLoadManager$NativeAdListener;)V

    return-void
.end method
