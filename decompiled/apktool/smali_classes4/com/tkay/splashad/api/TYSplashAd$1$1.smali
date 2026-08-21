.class Lcom/tkay/splashad/api/TYSplashAd$1$1;
.super Lcom/tkay/splashad/a/b;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/splashad/api/TYSplashAd$1;->run()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field hasCacheWhenTimeout:Z

.field final synthetic this$1:Lcom/tkay/splashad/api/TYSplashAd$1;


# direct methods
.method constructor <init>(Lcom/tkay/splashad/api/TYSplashAd$1;)V
    .locals 0

    .line 181
    iput-object p1, p0, Lcom/tkay/splashad/api/TYSplashAd$1$1;->this$1:Lcom/tkay/splashad/api/TYSplashAd$1;

    invoke-direct {p0}, Lcom/tkay/splashad/a/b;-><init>()V

    const/4 p1, 0x0

    .line 183
    iput-boolean p1, p0, Lcom/tkay/splashad/api/TYSplashAd$1$1;->hasCacheWhenTimeout:Z

    return-void
.end method


# virtual methods
.method public onAdLoaded(Ljava/lang/String;Z)V
    .locals 1

    .line 187
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object p1

    new-instance v0, Lcom/tkay/splashad/api/TYSplashAd$1$1$1;

    invoke-direct {v0, p0, p2}, Lcom/tkay/splashad/api/TYSplashAd$1$1$1;-><init>(Lcom/tkay/splashad/api/TYSplashAd$1$1;Z)V

    invoke-virtual {p1, v0}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;)V

    return-void
.end method

.method public onNoAdError(Ljava/lang/String;Lcom/tkay/core/api/AdError;)V
    .locals 1

    .line 199
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object p1

    new-instance v0, Lcom/tkay/splashad/api/TYSplashAd$1$1$2;

    invoke-direct {v0, p0, p2}, Lcom/tkay/splashad/api/TYSplashAd$1$1$2;-><init>(Lcom/tkay/splashad/api/TYSplashAd$1$1;Lcom/tkay/core/api/AdError;)V

    invoke-virtual {p1, v0}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;)V

    return-void
.end method

.method public onTimeout(Ljava/lang/String;)V
    .locals 4

    .line 212
    iget-object v0, p0, Lcom/tkay/splashad/api/TYSplashAd$1$1;->this$1:Lcom/tkay/splashad/api/TYSplashAd$1;

    iget-object v0, v0, Lcom/tkay/splashad/api/TYSplashAd$1;->this$0:Lcom/tkay/splashad/api/TYSplashAd;

    iget-object v0, v0, Lcom/tkay/splashad/api/TYSplashAd;->mAdLoadManager:Lcom/tkay/splashad/a/c;

    iget-object v1, p0, Lcom/tkay/splashad/api/TYSplashAd$1$1;->this$1:Lcom/tkay/splashad/api/TYSplashAd$1;

    iget-object v1, v1, Lcom/tkay/splashad/api/TYSplashAd$1;->this$0:Lcom/tkay/splashad/api/TYSplashAd;

    iget-object v1, v1, Lcom/tkay/splashad/api/TYSplashAd;->mContext:Landroid/content/Context;

    iget-object v2, p0, Lcom/tkay/splashad/api/TYSplashAd$1$1;->this$1:Lcom/tkay/splashad/api/TYSplashAd$1;

    iget-object v2, v2, Lcom/tkay/splashad/api/TYSplashAd$1;->this$0:Lcom/tkay/splashad/api/TYSplashAd;

    iget-object v2, v2, Lcom/tkay/splashad/api/TYSplashAd;->mTKExtraMap:Ljava/util/Map;

    const/4 v3, 0x0

    invoke-virtual {v0, v1, v3, v3, v2}, Lcom/tkay/splashad/a/c;->a(Landroid/content/Context;ZZLjava/util/Map;)Lcom/tkay/core/common/f/a;

    move-result-object v0

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    .line 214
    iput-boolean v0, p0, Lcom/tkay/splashad/api/TYSplashAd$1$1;->hasCacheWhenTimeout:Z

    .line 215
    iget-object v0, p0, Lcom/tkay/splashad/api/TYSplashAd$1$1;->this$1:Lcom/tkay/splashad/api/TYSplashAd$1;

    iget-object v0, v0, Lcom/tkay/splashad/api/TYSplashAd$1;->this$0:Lcom/tkay/splashad/api/TYSplashAd;

    iget-object v0, v0, Lcom/tkay/splashad/api/TYSplashAd;->mAdLoadManager:Lcom/tkay/splashad/a/c;

    invoke-virtual {v0, p1}, Lcom/tkay/splashad/a/c;->c(Ljava/lang/String;)Lcom/tkay/core/common/h;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 217
    iget-object v0, p0, Lcom/tkay/splashad/api/TYSplashAd$1$1;->this$1:Lcom/tkay/splashad/api/TYSplashAd$1;

    iget-object v0, v0, Lcom/tkay/splashad/api/TYSplashAd$1;->this$0:Lcom/tkay/splashad/api/TYSplashAd;

    iget-object v0, v0, Lcom/tkay/splashad/api/TYSplashAd;->TAG:Ljava/lang/String;

    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "has cache when timeout: "

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v2, p0, Lcom/tkay/splashad/api/TYSplashAd$1$1;->this$1:Lcom/tkay/splashad/api/TYSplashAd$1;

    iget-object v2, v2, Lcom/tkay/splashad/api/TYSplashAd$1;->this$0:Lcom/tkay/splashad/api/TYSplashAd;

    iget-object v2, v2, Lcom/tkay/splashad/api/TYSplashAd;->mPlacementId:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    const/16 v0, 0x9

    .line 218
    invoke-virtual {p1, v0}, Lcom/tkay/core/common/h;->b(I)V

    return-void

    .line 223
    :cond_0
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object p1

    new-instance v0, Lcom/tkay/splashad/api/TYSplashAd$1$1$3;

    invoke-direct {v0, p0}, Lcom/tkay/splashad/api/TYSplashAd$1$1$3;-><init>(Lcom/tkay/splashad/api/TYSplashAd$1$1;)V

    invoke-virtual {p1, v0}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;)V

    return-void
.end method
