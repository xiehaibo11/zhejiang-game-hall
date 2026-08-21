.class public Lcom/tkay/network/toutiao/TTTYNativeExpressAd;
.super Lcom/tkay/nativead/unitgroup/api/CustomNativeAd;


# static fields
.field private static final h:Ljava/lang/String;


# instance fields
.field a:Lcom/bykv/vk/openvk/TTNtExpressObject;

.field b:Landroid/content/Context;

.field c:Ljava/lang/String;

.field d:D

.field e:D

.field f:Z

.field g:Landroid/view/View;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 28
    const-class v0, Lcom/tkay/network/toutiao/TTTYNativeExpressAd;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/tkay/network/toutiao/TTTYNativeExpressAd;->h:Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Ljava/lang/String;Lcom/bykv/vk/openvk/TTNtExpressObject;ZZ)V
    .locals 0

    .line 38
    invoke-direct {p0}, Lcom/tkay/nativead/unitgroup/api/CustomNativeAd;-><init>()V

    const/4 p5, 0x0

    .line 36
    iput-boolean p5, p0, Lcom/tkay/network/toutiao/TTTYNativeExpressAd;->f:Z

    .line 39
    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/network/toutiao/TTTYNativeExpressAd;->b:Landroid/content/Context;

    .line 40
    iput-object p2, p0, Lcom/tkay/network/toutiao/TTTYNativeExpressAd;->c:Ljava/lang/String;

    .line 41
    iput-object p3, p0, Lcom/tkay/network/toutiao/TTTYNativeExpressAd;->a:Lcom/bykv/vk/openvk/TTNtExpressObject;

    .line 43
    invoke-interface {p3}, Lcom/bykv/vk/openvk/TTNtExpressObject;->getMediaExtraInfo()Ljava/util/Map;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/tkay/network/toutiao/TTTYNativeExpressAd;->setNetworkInfoMap(Ljava/util/Map;)V

    .line 45
    invoke-virtual {p0, p4}, Lcom/tkay/network/toutiao/TTTYNativeExpressAd;->setAdData(Z)V

    .line 1227
    iget-object p1, p0, Lcom/tkay/network/toutiao/TTTYNativeExpressAd;->a:Lcom/bykv/vk/openvk/TTNtExpressObject;

    if-eqz p1, :cond_0

    .line 1231
    new-instance p2, Lcom/tkay/network/toutiao/TTTYNativeExpressAd$4;

    invoke-direct {p2, p0}, Lcom/tkay/network/toutiao/TTTYNativeExpressAd$4;-><init>(Lcom/tkay/network/toutiao/TTTYNativeExpressAd;)V

    invoke-interface {p1, p2}, Lcom/bykv/vk/openvk/TTNtExpressObject;->setExpressInteractionListener(Lcom/bykv/vk/openvk/TTNtExpressObject$NtInteractionListener;)V

    :cond_0
    return-void
.end method

.method static synthetic a(Lcom/tkay/network/toutiao/TTTYNativeExpressAd;)Lcom/tkay/core/api/TYEventInterface;
    .locals 0

    .line 27
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYNativeExpressAd;->mDownloadListener:Lcom/tkay/core/api/TYEventInterface;

    return-object p0
.end method

.method static synthetic a()Ljava/lang/String;
    .locals 1

    .line 27
    sget-object v0, Lcom/tkay/network/toutiao/TTTYNativeExpressAd;->h:Ljava/lang/String;

    return-object v0
.end method

.method private a(Landroid/app/Activity;)V
    .locals 2

    .line 195
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYNativeExpressAd;->a:Lcom/bykv/vk/openvk/TTNtExpressObject;

    if-nez v0, :cond_0

    return-void

    .line 199
    :cond_0
    new-instance v1, Lcom/tkay/network/toutiao/TTTYNativeExpressAd$3;

    invoke-direct {v1, p0}, Lcom/tkay/network/toutiao/TTTYNativeExpressAd$3;-><init>(Lcom/tkay/network/toutiao/TTTYNativeExpressAd;)V

    invoke-interface {v0, p1, v1}, Lcom/bykv/vk/openvk/TTNtExpressObject;->setDislikeCallback(Landroid/app/Activity;Lcom/bykv/vk/openvk/TTVfDislike$DislikeInteractionCallback;)V

    return-void
.end method

.method static synthetic b(Lcom/tkay/network/toutiao/TTTYNativeExpressAd;)Lcom/tkay/core/api/TYEventInterface;
    .locals 0

    .line 27
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYNativeExpressAd;->mDownloadListener:Lcom/tkay/core/api/TYEventInterface;

    return-object p0
.end method

.method private b()V
    .locals 2

    .line 227
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYNativeExpressAd;->a:Lcom/bykv/vk/openvk/TTNtExpressObject;

    if-nez v0, :cond_0

    return-void

    .line 231
    :cond_0
    new-instance v1, Lcom/tkay/network/toutiao/TTTYNativeExpressAd$4;

    invoke-direct {v1, p0}, Lcom/tkay/network/toutiao/TTTYNativeExpressAd$4;-><init>(Lcom/tkay/network/toutiao/TTTYNativeExpressAd;)V

    invoke-interface {v0, v1}, Lcom/bykv/vk/openvk/TTNtExpressObject;->setExpressInteractionListener(Lcom/bykv/vk/openvk/TTNtExpressObject$NtInteractionListener;)V

    return-void
.end method

.method static synthetic c(Lcom/tkay/network/toutiao/TTTYNativeExpressAd;)Lcom/tkay/core/api/TYEventInterface;
    .locals 0

    .line 27
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYNativeExpressAd;->mDownloadListener:Lcom/tkay/core/api/TYEventInterface;

    return-object p0
.end method

.method static synthetic d(Lcom/tkay/network/toutiao/TTTYNativeExpressAd;)Lcom/tkay/core/api/TYEventInterface;
    .locals 0

    .line 27
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYNativeExpressAd;->mDownloadListener:Lcom/tkay/core/api/TYEventInterface;

    return-object p0
.end method

.method static synthetic e(Lcom/tkay/network/toutiao/TTTYNativeExpressAd;)Lcom/tkay/core/api/TYEventInterface;
    .locals 0

    .line 27
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYNativeExpressAd;->mDownloadListener:Lcom/tkay/core/api/TYEventInterface;

    return-object p0
.end method

.method static synthetic f(Lcom/tkay/network/toutiao/TTTYNativeExpressAd;)Lcom/tkay/core/api/TYEventInterface;
    .locals 0

    .line 27
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYNativeExpressAd;->mDownloadListener:Lcom/tkay/core/api/TYEventInterface;

    return-object p0
.end method

.method static synthetic g(Lcom/tkay/network/toutiao/TTTYNativeExpressAd;)Lcom/tkay/core/api/TYEventInterface;
    .locals 0

    .line 27
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYNativeExpressAd;->mDownloadListener:Lcom/tkay/core/api/TYEventInterface;

    return-object p0
.end method

.method static synthetic h(Lcom/tkay/network/toutiao/TTTYNativeExpressAd;)Lcom/tkay/core/api/TYEventInterface;
    .locals 0

    .line 27
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYNativeExpressAd;->mDownloadListener:Lcom/tkay/core/api/TYEventInterface;

    return-object p0
.end method

.method static synthetic i(Lcom/tkay/network/toutiao/TTTYNativeExpressAd;)Lcom/tkay/core/api/TYEventInterface;
    .locals 0

    .line 27
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYNativeExpressAd;->mDownloadListener:Lcom/tkay/core/api/TYEventInterface;

    return-object p0
.end method

.method static synthetic j(Lcom/tkay/network/toutiao/TTTYNativeExpressAd;)Lcom/tkay/core/api/TYEventInterface;
    .locals 0

    .line 27
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYNativeExpressAd;->mDownloadListener:Lcom/tkay/core/api/TYEventInterface;

    return-object p0
.end method

.method static synthetic k(Lcom/tkay/network/toutiao/TTTYNativeExpressAd;)Lcom/tkay/core/api/TYEventInterface;
    .locals 0

    .line 27
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYNativeExpressAd;->mDownloadListener:Lcom/tkay/core/api/TYEventInterface;

    return-object p0
.end method

.method static synthetic l(Lcom/tkay/network/toutiao/TTTYNativeExpressAd;)Lcom/tkay/core/api/TYEventInterface;
    .locals 0

    .line 27
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYNativeExpressAd;->mDownloadListener:Lcom/tkay/core/api/TYEventInterface;

    return-object p0
.end method

.method static synthetic m(Lcom/tkay/network/toutiao/TTTYNativeExpressAd;)Lcom/tkay/core/api/TYEventInterface;
    .locals 0

    .line 27
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYNativeExpressAd;->mDownloadListener:Lcom/tkay/core/api/TYEventInterface;

    return-object p0
.end method

.method static synthetic n(Lcom/tkay/network/toutiao/TTTYNativeExpressAd;)Lcom/tkay/core/api/TYEventInterface;
    .locals 0

    .line 27
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYNativeExpressAd;->mDownloadListener:Lcom/tkay/core/api/TYEventInterface;

    return-object p0
.end method

.method static synthetic o(Lcom/tkay/network/toutiao/TTTYNativeExpressAd;)Lcom/tkay/core/api/TYEventInterface;
    .locals 0

    .line 27
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYNativeExpressAd;->mDownloadListener:Lcom/tkay/core/api/TYEventInterface;

    return-object p0
.end method

.method static synthetic p(Lcom/tkay/network/toutiao/TTTYNativeExpressAd;)Lcom/tkay/core/api/TYEventInterface;
    .locals 0

    .line 27
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYNativeExpressAd;->mDownloadListener:Lcom/tkay/core/api/TYEventInterface;

    return-object p0
.end method

.method static synthetic q(Lcom/tkay/network/toutiao/TTTYNativeExpressAd;)Lcom/tkay/core/api/TYEventInterface;
    .locals 0

    .line 27
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYNativeExpressAd;->mDownloadListener:Lcom/tkay/core/api/TYEventInterface;

    return-object p0
.end method

.method static synthetic r(Lcom/tkay/network/toutiao/TTTYNativeExpressAd;)Lcom/tkay/core/api/TYEventInterface;
    .locals 0

    .line 27
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYNativeExpressAd;->mDownloadListener:Lcom/tkay/core/api/TYEventInterface;

    return-object p0
.end method


# virtual methods
.method public clear(Landroid/view/View;)V
    .locals 0

    return-void
.end method

.method public destroy()V
    .locals 2

    .line 295
    sget-object v0, Lcom/tkay/network/toutiao/TTTYNativeExpressAd;->h:Ljava/lang/String;

    const-string v1, "destroy()"

    invoke-static {v0, v1}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    const/4 v0, 0x0

    .line 296
    iput-object v0, p0, Lcom/tkay/network/toutiao/TTTYNativeExpressAd;->g:Landroid/view/View;

    .line 297
    iget-object v1, p0, Lcom/tkay/network/toutiao/TTTYNativeExpressAd;->a:Lcom/bykv/vk/openvk/TTNtExpressObject;

    if-eqz v1, :cond_0

    .line 298
    invoke-interface {v1, v0}, Lcom/bykv/vk/openvk/TTNtExpressObject;->setExpressInteractionListener(Lcom/bykv/vk/openvk/TTNtExpressObject$NtInteractionListener;)V

    .line 299
    iget-object v1, p0, Lcom/tkay/network/toutiao/TTTYNativeExpressAd;->a:Lcom/bykv/vk/openvk/TTNtExpressObject;

    invoke-interface {v1}, Lcom/bykv/vk/openvk/TTNtExpressObject;->destroy()V

    .line 300
    iput-object v0, p0, Lcom/tkay/network/toutiao/TTTYNativeExpressAd;->a:Lcom/bykv/vk/openvk/TTNtExpressObject;

    .line 302
    :cond_0
    iput-object v0, p0, Lcom/tkay/network/toutiao/TTTYNativeExpressAd;->b:Landroid/content/Context;

    return-void
.end method

.method public getAdLogo()Landroid/graphics/Bitmap;
    .locals 1

    const/4 v0, 0x0

    return-object v0
.end method

.method public varargs getAdMediaView([Ljava/lang/Object;)Landroid/view/View;
    .locals 0

    .line 277
    :try_start_0
    iget-object p1, p0, Lcom/tkay/network/toutiao/TTTYNativeExpressAd;->g:Landroid/view/View;

    if-nez p1, :cond_0

    iget-object p1, p0, Lcom/tkay/network/toutiao/TTTYNativeExpressAd;->a:Lcom/bykv/vk/openvk/TTNtExpressObject;

    if-eqz p1, :cond_0

    .line 278
    iget-object p1, p0, Lcom/tkay/network/toutiao/TTTYNativeExpressAd;->a:Lcom/bykv/vk/openvk/TTNtExpressObject;

    invoke-interface {p1}, Lcom/bykv/vk/openvk/TTNtExpressObject;->getExpressNtView()Landroid/view/View;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/network/toutiao/TTTYNativeExpressAd;->g:Landroid/view/View;

    .line 280
    :cond_0
    iget-object p1, p0, Lcom/tkay/network/toutiao/TTTYNativeExpressAd;->g:Landroid/view/View;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object p1

    :catch_0
    const/4 p1, 0x0

    return-object p1
.end method

.method public getVideoProgress()D
    .locals 2

    .line 180
    iget-wide v0, p0, Lcom/tkay/network/toutiao/TTTYNativeExpressAd;->d:D

    return-wide v0
.end method

.method public isNativeExpress()Z
    .locals 1

    const/4 v0, 0x1

    return v0
.end method

.method public prepare(Landroid/view/View;Lcom/tkay/nativead/api/TYNativePrepareInfo;)V
    .locals 1

    if-eqz p1, :cond_0

    .line 185
    invoke-virtual {p1}, Landroid/view/View;->getContext()Landroid/content/Context;

    move-result-object p2

    instance-of p2, p2, Landroid/app/Activity;

    if-eqz p2, :cond_0

    .line 186
    invoke-virtual {p1}, Landroid/view/View;->getContext()Landroid/content/Context;

    move-result-object p1

    check-cast p1, Landroid/app/Activity;

    .line 2195
    iget-object p2, p0, Lcom/tkay/network/toutiao/TTTYNativeExpressAd;->a:Lcom/bykv/vk/openvk/TTNtExpressObject;

    if-eqz p2, :cond_0

    .line 2199
    new-instance v0, Lcom/tkay/network/toutiao/TTTYNativeExpressAd$3;

    invoke-direct {v0, p0}, Lcom/tkay/network/toutiao/TTTYNativeExpressAd$3;-><init>(Lcom/tkay/network/toutiao/TTTYNativeExpressAd;)V

    invoke-interface {p2, p1, v0}, Lcom/bykv/vk/openvk/TTNtExpressObject;->setDislikeCallback(Landroid/app/Activity;Lcom/bykv/vk/openvk/TTVfDislike$DislikeInteractionCallback;)V

    :cond_0
    return-void
.end method

.method public setAdData(Z)V
    .locals 4

    .line 52
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYNativeExpressAd;->a:Lcom/bykv/vk/openvk/TTNtExpressObject;

    invoke-interface {v0, p1}, Lcom/bykv/vk/openvk/TTNtExpressObject;->setCanInterruptVideoPlay(Z)V

    .line 54
    iget-object p1, p0, Lcom/tkay/network/toutiao/TTTYNativeExpressAd;->a:Lcom/bykv/vk/openvk/TTNtExpressObject;

    invoke-interface {p1}, Lcom/bykv/vk/openvk/TTNtExpressObject;->getInteractionType()I

    move-result p1

    const/4 v0, 0x4

    if-ne p1, v0, :cond_0

    const/4 p1, 0x1

    goto :goto_0

    :cond_0
    const/4 p1, 0x0

    .line 57
    :goto_0
    iget-object v1, p0, Lcom/tkay/network/toutiao/TTTYNativeExpressAd;->a:Lcom/bykv/vk/openvk/TTNtExpressObject;

    invoke-interface {v1}, Lcom/bykv/vk/openvk/TTNtExpressObject;->getInteractionType()I

    move-result v1

    const/4 v2, 0x3

    if-ne v1, v2, :cond_1

    move p1, v2

    .line 60
    :cond_1
    iget-object v1, p0, Lcom/tkay/network/toutiao/TTTYNativeExpressAd;->a:Lcom/bykv/vk/openvk/TTNtExpressObject;

    invoke-interface {v1}, Lcom/bykv/vk/openvk/TTNtExpressObject;->getInteractionType()I

    move-result v1

    const/4 v3, 0x2

    if-ne v1, v3, :cond_2

    move p1, v3

    .line 63
    :cond_2
    invoke-virtual {p0, p1}, Lcom/tkay/network/toutiao/TTTYNativeExpressAd;->setNativeInteractionType(I)V

    .line 65
    iget-object p1, p0, Lcom/tkay/network/toutiao/TTTYNativeExpressAd;->a:Lcom/bykv/vk/openvk/TTNtExpressObject;

    new-instance v1, Lcom/tkay/network/toutiao/TTTYNativeExpressAd$1;

    invoke-direct {v1, p0}, Lcom/tkay/network/toutiao/TTTYNativeExpressAd$1;-><init>(Lcom/tkay/network/toutiao/TTTYNativeExpressAd;)V

    invoke-interface {p1, v1}, Lcom/bykv/vk/openvk/TTNtExpressObject;->setVideoListener(Lcom/bykv/vk/openvk/TTNtExpressObject$ExpressVideoListener;)V

    .line 113
    iget-object p1, p0, Lcom/tkay/network/toutiao/TTTYNativeExpressAd;->a:Lcom/bykv/vk/openvk/TTNtExpressObject;

    new-instance v1, Lcom/tkay/network/toutiao/TTTYNativeExpressAd$2;

    invoke-direct {v1, p0}, Lcom/tkay/network/toutiao/TTTYNativeExpressAd$2;-><init>(Lcom/tkay/network/toutiao/TTTYNativeExpressAd;)V

    invoke-interface {p1, v1}, Lcom/bykv/vk/openvk/TTNtExpressObject;->setDownloadListener(Lcom/bykv/vk/openvk/TTAppDownloadListener;)V

    .line 163
    iget-object p1, p0, Lcom/tkay/network/toutiao/TTTYNativeExpressAd;->a:Lcom/bykv/vk/openvk/TTNtExpressObject;

    invoke-interface {p1}, Lcom/bykv/vk/openvk/TTNtExpressObject;->getImageMode()I

    move-result p1

    if-eq p1, v3, :cond_4

    if-eq p1, v2, :cond_4

    if-eq p1, v0, :cond_4

    const/4 v0, 0x5

    if-eq p1, v0, :cond_3

    const/16 v0, 0xf

    if-eq p1, v0, :cond_3

    const/16 v0, 0x10

    if-eq p1, v0, :cond_4

    goto :goto_1

    :cond_3
    const-string p1, "1"

    .line 166
    iput-object p1, p0, Lcom/tkay/network/toutiao/TTTYNativeExpressAd;->mAdSourceType:Ljava/lang/String;

    return-void

    :cond_4
    const-string p1, "2"

    .line 173
    iput-object p1, p0, Lcom/tkay/network/toutiao/TTTYNativeExpressAd;->mAdSourceType:Ljava/lang/String;

    :goto_1
    return-void
.end method
