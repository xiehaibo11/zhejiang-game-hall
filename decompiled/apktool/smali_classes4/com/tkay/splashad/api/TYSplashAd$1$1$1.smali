.class final Lcom/tkay/splashad/api/TYSplashAd$1$1$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/splashad/api/TYSplashAd$1$1;->onAdLoaded(Ljava/lang/String;Z)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$2:Lcom/tkay/splashad/api/TYSplashAd$1$1;

.field final synthetic val$isTimeout:Z


# direct methods
.method constructor <init>(Lcom/tkay/splashad/api/TYSplashAd$1$1;Z)V
    .locals 0

    .line 187
    iput-object p1, p0, Lcom/tkay/splashad/api/TYSplashAd$1$1$1;->this$2:Lcom/tkay/splashad/api/TYSplashAd$1$1;

    iput-boolean p2, p0, Lcom/tkay/splashad/api/TYSplashAd$1$1$1;->val$isTimeout:Z

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 2

    .line 190
    iget-object v0, p0, Lcom/tkay/splashad/api/TYSplashAd$1$1$1;->this$2:Lcom/tkay/splashad/api/TYSplashAd$1$1;

    iget-object v0, v0, Lcom/tkay/splashad/api/TYSplashAd$1$1;->this$1:Lcom/tkay/splashad/api/TYSplashAd$1;

    iget-object v0, v0, Lcom/tkay/splashad/api/TYSplashAd$1;->this$0:Lcom/tkay/splashad/api/TYSplashAd;

    iget-object v0, v0, Lcom/tkay/splashad/api/TYSplashAd;->mListener:Lcom/tkay/splashad/api/TYSplashAdListener;

    if-eqz v0, :cond_1

    .line 191
    iget-object v0, p0, Lcom/tkay/splashad/api/TYSplashAd$1$1$1;->this$2:Lcom/tkay/splashad/api/TYSplashAd$1$1;

    iget-object v0, v0, Lcom/tkay/splashad/api/TYSplashAd$1$1;->this$1:Lcom/tkay/splashad/api/TYSplashAd$1;

    iget-object v0, v0, Lcom/tkay/splashad/api/TYSplashAd$1;->this$0:Lcom/tkay/splashad/api/TYSplashAd;

    iget-object v0, v0, Lcom/tkay/splashad/api/TYSplashAd;->mListener:Lcom/tkay/splashad/api/TYSplashAdListener;

    iget-object v1, p0, Lcom/tkay/splashad/api/TYSplashAd$1$1$1;->this$2:Lcom/tkay/splashad/api/TYSplashAd$1$1;

    iget-boolean v1, v1, Lcom/tkay/splashad/api/TYSplashAd$1$1;->hasCacheWhenTimeout:Z

    if-nez v1, :cond_0

    iget-boolean v1, p0, Lcom/tkay/splashad/api/TYSplashAd$1$1$1;->val$isTimeout:Z

    if-eqz v1, :cond_0

    const/4 v1, 0x1

    goto :goto_0

    :cond_0
    const/4 v1, 0x0

    :goto_0
    invoke-interface {v0, v1}, Lcom/tkay/splashad/api/TYSplashAdListener;->onAdLoaded(Z)V

    :cond_1
    return-void
.end method
