.class public Lcom/tkay/expressad/splash/view/TYSplashWebview;
.super Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;


# static fields
.field private static final a:Ljava/lang/String;


# instance fields
.field private b:Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 10
    const-class v0, Lcom/tkay/expressad/splash/view/TYSplashWebview;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/tkay/expressad/splash/view/TYSplashWebview;->a:Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;)V
    .locals 0

    .line 15
    invoke-direct {p0, p1}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;-><init>(Landroid/content/Context;)V

    const/4 p1, 0x0

    .line 16
    invoke-virtual {p0, p1}, Lcom/tkay/expressad/splash/view/TYSplashWebview;->setBackgroundColor(I)V

    return-void
.end method


# virtual methods
.method public getRequestId()Ljava/lang/String;
    .locals 1

    .line 20
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashWebview;->b:Ljava/lang/String;

    return-object v0
.end method

.method public setRequestId(Ljava/lang/String;)V
    .locals 0

    .line 24
    iput-object p1, p0, Lcom/tkay/expressad/splash/view/TYSplashWebview;->b:Ljava/lang/String;

    return-void
.end method
