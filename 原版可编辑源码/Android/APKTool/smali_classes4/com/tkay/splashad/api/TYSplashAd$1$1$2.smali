.class final Lcom/tkay/splashad/api/TYSplashAd$1$1$2;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/splashad/api/TYSplashAd$1$1;->onNoAdError(Ljava/lang/String;Lcom/tkay/core/api/AdError;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$2:Lcom/tkay/splashad/api/TYSplashAd$1$1;

.field final synthetic val$adError:Lcom/tkay/core/api/AdError;


# direct methods
.method constructor <init>(Lcom/tkay/splashad/api/TYSplashAd$1$1;Lcom/tkay/core/api/AdError;)V
    .locals 0

    .line 199
    iput-object p1, p0, Lcom/tkay/splashad/api/TYSplashAd$1$1$2;->this$2:Lcom/tkay/splashad/api/TYSplashAd$1$1;

    iput-object p2, p0, Lcom/tkay/splashad/api/TYSplashAd$1$1$2;->val$adError:Lcom/tkay/core/api/AdError;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 2

    .line 202
    iget-object v0, p0, Lcom/tkay/splashad/api/TYSplashAd$1$1$2;->this$2:Lcom/tkay/splashad/api/TYSplashAd$1$1;

    iget-object v0, v0, Lcom/tkay/splashad/api/TYSplashAd$1$1;->this$1:Lcom/tkay/splashad/api/TYSplashAd$1;

    iget-object v0, v0, Lcom/tkay/splashad/api/TYSplashAd$1;->this$0:Lcom/tkay/splashad/api/TYSplashAd;

    iget-object v0, v0, Lcom/tkay/splashad/api/TYSplashAd;->mListener:Lcom/tkay/splashad/api/TYSplashAdListener;

    if-eqz v0, :cond_0

    .line 203
    iget-object v0, p0, Lcom/tkay/splashad/api/TYSplashAd$1$1$2;->this$2:Lcom/tkay/splashad/api/TYSplashAd$1$1;

    iget-object v0, v0, Lcom/tkay/splashad/api/TYSplashAd$1$1;->this$1:Lcom/tkay/splashad/api/TYSplashAd$1;

    iget-object v0, v0, Lcom/tkay/splashad/api/TYSplashAd$1;->this$0:Lcom/tkay/splashad/api/TYSplashAd;

    iget-object v0, v0, Lcom/tkay/splashad/api/TYSplashAd;->mListener:Lcom/tkay/splashad/api/TYSplashAdListener;

    iget-object v1, p0, Lcom/tkay/splashad/api/TYSplashAd$1$1$2;->val$adError:Lcom/tkay/core/api/AdError;

    invoke-interface {v0, v1}, Lcom/tkay/splashad/api/TYSplashAdListener;->onNoAdError(Lcom/tkay/core/api/AdError;)V

    :cond_0
    return-void
.end method
