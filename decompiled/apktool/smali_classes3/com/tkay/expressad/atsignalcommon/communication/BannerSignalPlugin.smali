.class public Lcom/tkay/expressad/atsignalcommon/communication/BannerSignalPlugin;
.super Lcom/tkay/expressad/atsignalcommon/windvane/l;


# instance fields
.field private final a:Ljava/lang/String;

.field private b:Lcom/tkay/expressad/atsignalcommon/communication/b;


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 9
    invoke-direct {p0}, Lcom/tkay/expressad/atsignalcommon/windvane/l;-><init>()V

    const-string v0, "BannerSignalPlugin"

    .line 10
    iput-object v0, p0, Lcom/tkay/expressad/atsignalcommon/communication/BannerSignalPlugin;->a:Ljava/lang/String;

    return-void
.end method


# virtual methods
.method public click(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    return-void
.end method

.method public getFileInfo(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    return-void
.end method

.method public getNetstat(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    return-void
.end method

.method public handlerH5Exception(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    return-void
.end method

.method public increaseOfferFrequence(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    return-void
.end method

.method public init(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    return-void
.end method

.method public initialize(Landroid/content/Context;Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;)V
    .locals 1

    .line 16
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/atsignalcommon/windvane/l;->initialize(Landroid/content/Context;Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;)V

    .line 19
    :try_start_0
    instance-of v0, p1, Lcom/tkay/expressad/atsignalcommon/communication/b;

    if-eqz v0, :cond_0

    .line 20
    check-cast p1, Lcom/tkay/expressad/atsignalcommon/communication/b;

    iput-object p1, p0, Lcom/tkay/expressad/atsignalcommon/communication/BannerSignalPlugin;->b:Lcom/tkay/expressad/atsignalcommon/communication/b;

    return-void

    .line 22
    :cond_0
    invoke-virtual {p2}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->getObject()Ljava/lang/Object;

    move-result-object p1

    if-eqz p1, :cond_1

    invoke-virtual {p2}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->getObject()Ljava/lang/Object;

    move-result-object p1

    instance-of p1, p1, Lcom/tkay/expressad/atsignalcommon/communication/b;

    if-eqz p1, :cond_1

    .line 23
    invoke-virtual {p2}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->getObject()Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/tkay/expressad/atsignalcommon/communication/b;

    iput-object p1, p0, Lcom/tkay/expressad/atsignalcommon/communication/BannerSignalPlugin;->b:Lcom/tkay/expressad/atsignalcommon/communication/b;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_1
    return-void
.end method

.method public install(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    return-void
.end method

.method public onSignalCommunication(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    return-void
.end method

.method public openURL(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    return-void
.end method

.method public readyStatus(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    return-void
.end method

.method public reportUrls(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    return-void
.end method

.method public resetCountdown(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    return-void
.end method

.method public sendImpressions(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    return-void
.end method

.method public toggleCloseBtn(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    return-void
.end method

.method public triggerCloseBtn(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    return-void
.end method
