.class public final Lcom/kwad/components/ad/feed/a;
.super Lcom/kwad/sdk/components/d;

# interfaces
.implements Lcom/kwad/components/ad/b/c;


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/sdk/components/d;-><init>()V

    return-void
.end method


# virtual methods
.method public final getComponentsType()Ljava/lang/Class;
    .locals 1

    const-class v0, Lcom/kwad/components/ad/b/c;

    return-object v0
.end method

.method public final init(Landroid/content/Context;)V
    .locals 0

    return-void
.end method

.method public final loadConfigFeedAd(Lcom/kwad/sdk/api/KsScene;Lcom/kwad/sdk/api/KsLoadManager$FeedAdListener;)V
    .locals 1

    const/4 v0, 0x1

    invoke-static {p1, p2, v0}, Lcom/kwad/components/ad/feed/e;->a(Lcom/kwad/sdk/api/KsScene;Lcom/kwad/sdk/api/KsLoadManager$FeedAdListener;Z)V

    return-void
.end method

.method public final loadFeedAd(Lcom/kwad/sdk/api/KsScene;Lcom/kwad/sdk/api/KsLoadManager$FeedAdListener;)V
    .locals 1

    invoke-static {}, Lcom/kwad/components/ad/feed/a/b;->aV()Z

    move-result v0

    xor-int/lit8 v0, v0, 0x1

    invoke-static {p1, p2, v0}, Lcom/kwad/components/ad/feed/e;->a(Lcom/kwad/sdk/api/KsScene;Lcom/kwad/sdk/api/KsLoadManager$FeedAdListener;Z)V

    return-void
.end method
