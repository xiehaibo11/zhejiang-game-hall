.class final Lcom/tkay/splashad/api/TYSplashAd$2$3;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/splashad/api/TYSplashAd$2;->onAdShow(Lcom/tkay/core/api/TYAdInfo;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$1:Lcom/tkay/splashad/api/TYSplashAd$2;

.field final synthetic val$entity:Lcom/tkay/core/api/TYAdInfo;


# direct methods
.method constructor <init>(Lcom/tkay/splashad/api/TYSplashAd$2;Lcom/tkay/core/api/TYAdInfo;)V
    .locals 0

    .line 341
    iput-object p1, p0, Lcom/tkay/splashad/api/TYSplashAd$2$3;->this$1:Lcom/tkay/splashad/api/TYSplashAd$2;

    iput-object p2, p0, Lcom/tkay/splashad/api/TYSplashAd$2$3;->val$entity:Lcom/tkay/core/api/TYAdInfo;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 2

    .line 344
    iget-object v0, p0, Lcom/tkay/splashad/api/TYSplashAd$2$3;->this$1:Lcom/tkay/splashad/api/TYSplashAd$2;

    iget-object v0, v0, Lcom/tkay/splashad/api/TYSplashAd$2;->this$0:Lcom/tkay/splashad/api/TYSplashAd;

    iget-object v0, v0, Lcom/tkay/splashad/api/TYSplashAd;->mListener:Lcom/tkay/splashad/api/TYSplashAdListener;

    if-eqz v0, :cond_0

    .line 345
    iget-object v0, p0, Lcom/tkay/splashad/api/TYSplashAd$2$3;->this$1:Lcom/tkay/splashad/api/TYSplashAd$2;

    iget-object v0, v0, Lcom/tkay/splashad/api/TYSplashAd$2;->this$0:Lcom/tkay/splashad/api/TYSplashAd;

    iget-object v0, v0, Lcom/tkay/splashad/api/TYSplashAd;->mListener:Lcom/tkay/splashad/api/TYSplashAdListener;

    iget-object v1, p0, Lcom/tkay/splashad/api/TYSplashAd$2$3;->val$entity:Lcom/tkay/core/api/TYAdInfo;

    invoke-interface {v0, v1}, Lcom/tkay/splashad/api/TYSplashAdListener;->onAdShow(Lcom/tkay/core/api/TYAdInfo;)V

    :cond_0
    return-void
.end method
