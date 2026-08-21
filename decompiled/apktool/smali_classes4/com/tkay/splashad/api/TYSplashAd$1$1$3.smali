.class final Lcom/tkay/splashad/api/TYSplashAd$1$1$3;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/splashad/api/TYSplashAd$1$1;->onTimeout(Ljava/lang/String;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$2:Lcom/tkay/splashad/api/TYSplashAd$1$1;


# direct methods
.method constructor <init>(Lcom/tkay/splashad/api/TYSplashAd$1$1;)V
    .locals 0

    .line 223
    iput-object p1, p0, Lcom/tkay/splashad/api/TYSplashAd$1$1$3;->this$2:Lcom/tkay/splashad/api/TYSplashAd$1$1;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 1

    .line 226
    iget-object v0, p0, Lcom/tkay/splashad/api/TYSplashAd$1$1$3;->this$2:Lcom/tkay/splashad/api/TYSplashAd$1$1;

    iget-object v0, v0, Lcom/tkay/splashad/api/TYSplashAd$1$1;->this$1:Lcom/tkay/splashad/api/TYSplashAd$1;

    iget-object v0, v0, Lcom/tkay/splashad/api/TYSplashAd$1;->this$0:Lcom/tkay/splashad/api/TYSplashAd;

    iget-object v0, v0, Lcom/tkay/splashad/api/TYSplashAd;->mListener:Lcom/tkay/splashad/api/TYSplashAdListener;

    if-eqz v0, :cond_0

    .line 227
    iget-object v0, p0, Lcom/tkay/splashad/api/TYSplashAd$1$1$3;->this$2:Lcom/tkay/splashad/api/TYSplashAd$1$1;

    iget-object v0, v0, Lcom/tkay/splashad/api/TYSplashAd$1$1;->this$1:Lcom/tkay/splashad/api/TYSplashAd$1;

    iget-object v0, v0, Lcom/tkay/splashad/api/TYSplashAd$1;->this$0:Lcom/tkay/splashad/api/TYSplashAd;

    iget-object v0, v0, Lcom/tkay/splashad/api/TYSplashAd;->mListener:Lcom/tkay/splashad/api/TYSplashAdListener;

    invoke-interface {v0}, Lcom/tkay/splashad/api/TYSplashAdListener;->onAdLoadTimeout()V

    :cond_0
    return-void
.end method
