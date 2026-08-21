.class public Lcom/tkay/network/ks/KSATFeedAd;
.super Lcom/tkay/nativead/unitgroup/api/CustomNativeAd;


# instance fields
.field a:Landroid/content/Context;

.field b:Lcom/kwad/sdk/api/KsFeedAd;

.field c:Landroid/view/View;


# direct methods
.method public constructor <init>(Landroid/content/Context;Lcom/kwad/sdk/api/KsFeedAd;Z)V
    .locals 2

    .line 32
    invoke-direct {p0}, Lcom/tkay/nativead/unitgroup/api/CustomNativeAd;-><init>()V

    .line 33
    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/network/ks/KSATFeedAd;->a:Landroid/content/Context;

    .line 34
    iput-object p2, p0, Lcom/tkay/network/ks/KSATFeedAd;->b:Lcom/kwad/sdk/api/KsFeedAd;

    .line 1041
    :try_start_0
    invoke-interface {p2, p3}, Lcom/kwad/sdk/api/KsFeedAd;->setVideoSoundEnable(Z)V

    const/4 p1, 0x0

    .line 1043
    iget-object p2, p0, Lcom/tkay/network/ks/KSATFeedAd;->b:Lcom/kwad/sdk/api/KsFeedAd;

    invoke-interface {p2}, Lcom/kwad/sdk/api/KsFeedAd;->getInteractionType()I

    move-result p2

    const/4 p3, 0x1

    if-ne p2, p3, :cond_0

    move p1, p3

    .line 1046
    :cond_0
    iget-object p2, p0, Lcom/tkay/network/ks/KSATFeedAd;->b:Lcom/kwad/sdk/api/KsFeedAd;

    invoke-interface {p2}, Lcom/kwad/sdk/api/KsFeedAd;->getInteractionType()I

    move-result p2

    const/4 v0, 0x3

    const/4 v1, 0x2

    if-ne p2, v1, :cond_1

    move p1, v0

    .line 1049
    :cond_1
    invoke-virtual {p0, p1}, Lcom/tkay/network/ks/KSATFeedAd;->setNativeInteractionType(I)V

    .line 1051
    iget-object p1, p0, Lcom/tkay/network/ks/KSATFeedAd;->b:Lcom/kwad/sdk/api/KsFeedAd;

    invoke-interface {p1}, Lcom/kwad/sdk/api/KsFeedAd;->getMaterialType()I

    move-result p1

    if-ne p1, p3, :cond_2

    const-string p1, "1"

    .line 1052
    iput-object p1, p0, Lcom/tkay/network/ks/KSATFeedAd;->mAdSourceType:Ljava/lang/String;

    goto :goto_0

    .line 1053
    :cond_2
    iget-object p1, p0, Lcom/tkay/network/ks/KSATFeedAd;->b:Lcom/kwad/sdk/api/KsFeedAd;

    invoke-interface {p1}, Lcom/kwad/sdk/api/KsFeedAd;->getMaterialType()I

    move-result p1

    if-eq p1, v0, :cond_3

    iget-object p1, p0, Lcom/tkay/network/ks/KSATFeedAd;->b:Lcom/kwad/sdk/api/KsFeedAd;

    invoke-interface {p1}, Lcom/kwad/sdk/api/KsFeedAd;->getMaterialType()I

    move-result p1

    if-ne p1, v1, :cond_4

    :cond_3
    const-string p1, "2"

    .line 1054
    iput-object p1, p0, Lcom/tkay/network/ks/KSATFeedAd;->mAdSourceType:Ljava/lang/String;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 1057
    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V

    .line 1060
    :cond_4
    :goto_0
    iget-object p1, p0, Lcom/tkay/network/ks/KSATFeedAd;->b:Lcom/kwad/sdk/api/KsFeedAd;

    new-instance p2, Lcom/tkay/network/ks/KSATFeedAd$1;

    invoke-direct {p2, p0}, Lcom/tkay/network/ks/KSATFeedAd$1;-><init>(Lcom/tkay/network/ks/KSATFeedAd;)V

    invoke-interface {p1, p2}, Lcom/kwad/sdk/api/KsFeedAd;->setAdInteractionListener(Lcom/kwad/sdk/api/KsFeedAd$AdInteractionListener;)V

    return-void
.end method

.method private a(Z)V
    .locals 4

    .line 41
    :try_start_0
    iget-object v0, p0, Lcom/tkay/network/ks/KSATFeedAd;->b:Lcom/kwad/sdk/api/KsFeedAd;

    invoke-interface {v0, p1}, Lcom/kwad/sdk/api/KsFeedAd;->setVideoSoundEnable(Z)V

    const/4 p1, 0x0

    .line 43
    iget-object v0, p0, Lcom/tkay/network/ks/KSATFeedAd;->b:Lcom/kwad/sdk/api/KsFeedAd;

    invoke-interface {v0}, Lcom/kwad/sdk/api/KsFeedAd;->getInteractionType()I

    move-result v0

    const/4 v1, 0x1

    if-ne v0, v1, :cond_0

    move p1, v1

    .line 46
    :cond_0
    iget-object v0, p0, Lcom/tkay/network/ks/KSATFeedAd;->b:Lcom/kwad/sdk/api/KsFeedAd;

    invoke-interface {v0}, Lcom/kwad/sdk/api/KsFeedAd;->getInteractionType()I

    move-result v0

    const/4 v2, 0x3

    const/4 v3, 0x2

    if-ne v0, v3, :cond_1

    move p1, v2

    .line 49
    :cond_1
    invoke-virtual {p0, p1}, Lcom/tkay/network/ks/KSATFeedAd;->setNativeInteractionType(I)V

    .line 51
    iget-object p1, p0, Lcom/tkay/network/ks/KSATFeedAd;->b:Lcom/kwad/sdk/api/KsFeedAd;

    invoke-interface {p1}, Lcom/kwad/sdk/api/KsFeedAd;->getMaterialType()I

    move-result p1

    if-ne p1, v1, :cond_2

    const-string p1, "1"

    .line 52
    iput-object p1, p0, Lcom/tkay/network/ks/KSATFeedAd;->mAdSourceType:Ljava/lang/String;

    goto :goto_0

    .line 53
    :cond_2
    iget-object p1, p0, Lcom/tkay/network/ks/KSATFeedAd;->b:Lcom/kwad/sdk/api/KsFeedAd;

    invoke-interface {p1}, Lcom/kwad/sdk/api/KsFeedAd;->getMaterialType()I

    move-result p1

    if-eq p1, v2, :cond_3

    iget-object p1, p0, Lcom/tkay/network/ks/KSATFeedAd;->b:Lcom/kwad/sdk/api/KsFeedAd;

    invoke-interface {p1}, Lcom/kwad/sdk/api/KsFeedAd;->getMaterialType()I

    move-result p1

    if-ne p1, v3, :cond_4

    :cond_3
    const-string p1, "2"

    .line 54
    iput-object p1, p0, Lcom/tkay/network/ks/KSATFeedAd;->mAdSourceType:Ljava/lang/String;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 57
    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V

    .line 60
    :cond_4
    :goto_0
    iget-object p1, p0, Lcom/tkay/network/ks/KSATFeedAd;->b:Lcom/kwad/sdk/api/KsFeedAd;

    new-instance v0, Lcom/tkay/network/ks/KSATFeedAd$1;

    invoke-direct {v0, p0}, Lcom/tkay/network/ks/KSATFeedAd$1;-><init>(Lcom/tkay/network/ks/KSATFeedAd;)V

    invoke-interface {p1, v0}, Lcom/kwad/sdk/api/KsFeedAd;->setAdInteractionListener(Lcom/kwad/sdk/api/KsFeedAd$AdInteractionListener;)V

    return-void
.end method


# virtual methods
.method public clear(Landroid/view/View;)V
    .locals 0

    return-void
.end method

.method public destroy()V
    .locals 2

    .line 120
    iget-object v0, p0, Lcom/tkay/network/ks/KSATFeedAd;->b:Lcom/kwad/sdk/api/KsFeedAd;

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    .line 121
    invoke-interface {v0, v1}, Lcom/kwad/sdk/api/KsFeedAd;->setAdInteractionListener(Lcom/kwad/sdk/api/KsFeedAd$AdInteractionListener;)V

    .line 122
    iput-object v1, p0, Lcom/tkay/network/ks/KSATFeedAd;->b:Lcom/kwad/sdk/api/KsFeedAd;

    .line 124
    :cond_0
    iput-object v1, p0, Lcom/tkay/network/ks/KSATFeedAd;->a:Landroid/content/Context;

    return-void
.end method

.method public varargs getAdMediaView([Ljava/lang/Object;)Landroid/view/View;
    .locals 1

    .line 98
    :try_start_0
    iget-object p1, p0, Lcom/tkay/network/ks/KSATFeedAd;->c:Landroid/view/View;

    if-nez p1, :cond_0

    .line 99
    iget-object p1, p0, Lcom/tkay/network/ks/KSATFeedAd;->b:Lcom/kwad/sdk/api/KsFeedAd;

    iget-object v0, p0, Lcom/tkay/network/ks/KSATFeedAd;->a:Landroid/content/Context;

    invoke-interface {p1, v0}, Lcom/kwad/sdk/api/KsFeedAd;->getFeedView(Landroid/content/Context;)Landroid/view/View;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/network/ks/KSATFeedAd;->c:Landroid/view/View;

    .line 101
    :cond_0
    iget-object p1, p0, Lcom/tkay/network/ks/KSATFeedAd;->c:Landroid/view/View;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object p1

    :catch_0
    const/4 p1, 0x0

    return-object p1
.end method

.method public isNativeExpress()Z
    .locals 1

    const/4 v0, 0x1

    return v0
.end method

.method public prepare(Landroid/view/View;Lcom/tkay/nativead/api/TYNativePrepareInfo;)V
    .locals 0

    return-void
.end method
