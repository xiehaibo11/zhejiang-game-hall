.class final Lcom/tkay/splashad/api/TYSplashAd$2$5;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/splashad/api/TYSplashAd$2;->onAdDismiss(Lcom/tkay/core/api/TYAdInfo;Lcom/tkay/splashad/api/TYSplashAdExtraInfo;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$1:Lcom/tkay/splashad/api/TYSplashAd$2;

.field final synthetic val$entity:Lcom/tkay/core/api/TYAdInfo;

.field final synthetic val$splashAdExtraInfo:Lcom/tkay/splashad/api/TYSplashAdExtraInfo;


# direct methods
.method constructor <init>(Lcom/tkay/splashad/api/TYSplashAd$2;Lcom/tkay/core/api/TYAdInfo;Lcom/tkay/splashad/api/TYSplashAdExtraInfo;)V
    .locals 0

    .line 369
    iput-object p1, p0, Lcom/tkay/splashad/api/TYSplashAd$2$5;->this$1:Lcom/tkay/splashad/api/TYSplashAd$2;

    iput-object p2, p0, Lcom/tkay/splashad/api/TYSplashAd$2$5;->val$entity:Lcom/tkay/core/api/TYAdInfo;

    iput-object p3, p0, Lcom/tkay/splashad/api/TYSplashAd$2$5;->val$splashAdExtraInfo:Lcom/tkay/splashad/api/TYSplashAdExtraInfo;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 3

    .line 372
    iget-object v0, p0, Lcom/tkay/splashad/api/TYSplashAd$2$5;->this$1:Lcom/tkay/splashad/api/TYSplashAd$2;

    iget-object v0, v0, Lcom/tkay/splashad/api/TYSplashAd$2;->this$0:Lcom/tkay/splashad/api/TYSplashAd;

    iget-object v0, v0, Lcom/tkay/splashad/api/TYSplashAd;->mListener:Lcom/tkay/splashad/api/TYSplashAdListener;

    if-eqz v0, :cond_0

    .line 373
    iget-object v0, p0, Lcom/tkay/splashad/api/TYSplashAd$2$5;->this$1:Lcom/tkay/splashad/api/TYSplashAd$2;

    iget-object v0, v0, Lcom/tkay/splashad/api/TYSplashAd$2;->this$0:Lcom/tkay/splashad/api/TYSplashAd;

    iget-object v0, v0, Lcom/tkay/splashad/api/TYSplashAd;->mListener:Lcom/tkay/splashad/api/TYSplashAdListener;

    iget-object v1, p0, Lcom/tkay/splashad/api/TYSplashAd$2$5;->val$entity:Lcom/tkay/core/api/TYAdInfo;

    iget-object v2, p0, Lcom/tkay/splashad/api/TYSplashAd$2$5;->val$splashAdExtraInfo:Lcom/tkay/splashad/api/TYSplashAdExtraInfo;

    invoke-interface {v0, v1, v2}, Lcom/tkay/splashad/api/TYSplashAdListener;->onAdDismiss(Lcom/tkay/core/api/TYAdInfo;Lcom/tkay/splashad/api/TYSplashAdExtraInfo;)V

    :cond_0
    return-void
.end method
