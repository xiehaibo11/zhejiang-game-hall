.class final Lcom/tkay/splashad/a/d$a;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/core/api/TYCustomLoadListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/splashad/a/d;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x2
    name = "a"
.end annotation


# instance fields
.field a:Lcom/tkay/splashad/unitgroup/api/CustomSplashAdapter;

.field final synthetic b:Lcom/tkay/splashad/a/d;


# direct methods
.method public constructor <init>(Lcom/tkay/splashad/a/d;Lcom/tkay/splashad/unitgroup/api/CustomSplashAdapter;)V
    .locals 0

    .line 357
    iput-object p1, p0, Lcom/tkay/splashad/a/d$a;->b:Lcom/tkay/splashad/a/d;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 358
    iput-object p2, p0, Lcom/tkay/splashad/a/d$a;->a:Lcom/tkay/splashad/unitgroup/api/CustomSplashAdapter;

    return-void
.end method


# virtual methods
.method public final varargs onAdCacheLoaded([Lcom/tkay/core/api/BaseAd;)V
    .locals 2

    .line 368
    iget-object v0, p0, Lcom/tkay/splashad/a/d$a;->b:Lcom/tkay/splashad/a/d;

    iget-object v1, p0, Lcom/tkay/splashad/a/d$a;->a:Lcom/tkay/splashad/unitgroup/api/CustomSplashAdapter;

    invoke-virtual {v0, v1, p1}, Lcom/tkay/splashad/a/d;->a(Lcom/tkay/splashad/unitgroup/api/CustomSplashAdapter;[Lcom/tkay/core/api/BaseAd;)V

    return-void
.end method

.method public final onAdDataLoaded()V
    .locals 0

    return-void
.end method

.method public final onAdLoadError(Ljava/lang/String;Ljava/lang/String;)V
    .locals 3

    .line 373
    iget-object v0, p0, Lcom/tkay/splashad/a/d$a;->b:Lcom/tkay/splashad/a/d;

    iget-object v1, p0, Lcom/tkay/splashad/a/d$a;->a:Lcom/tkay/splashad/unitgroup/api/CustomSplashAdapter;

    const-string v2, "4001"

    invoke-static {v2, p1, p2}, Lcom/tkay/core/api/ErrorCode;->getErrorCode(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/core/api/AdError;

    move-result-object p1

    invoke-virtual {v0, v1, p1}, Lcom/tkay/splashad/a/d;->a(Lcom/tkay/splashad/unitgroup/api/CustomSplashAdapter;Lcom/tkay/core/api/AdError;)V

    return-void
.end method
