.class final Lcom/tkay/splashad/api/TYSplashAd$2$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/splashad/api/TYSplashAd$2;->onDeeplinkCallback(Lcom/tkay/core/api/TYAdInfo;Z)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$1:Lcom/tkay/splashad/api/TYSplashAd$2;

.field final synthetic val$entity:Lcom/tkay/core/api/TYAdInfo;

.field final synthetic val$isSuccess:Z


# direct methods
.method constructor <init>(Lcom/tkay/splashad/api/TYSplashAd$2;Lcom/tkay/core/api/TYAdInfo;Z)V
    .locals 0

    .line 317
    iput-object p1, p0, Lcom/tkay/splashad/api/TYSplashAd$2$1;->this$1:Lcom/tkay/splashad/api/TYSplashAd$2;

    iput-object p2, p0, Lcom/tkay/splashad/api/TYSplashAd$2$1;->val$entity:Lcom/tkay/core/api/TYAdInfo;

    iput-boolean p3, p0, Lcom/tkay/splashad/api/TYSplashAd$2$1;->val$isSuccess:Z

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 3

    .line 320
    iget-object v0, p0, Lcom/tkay/splashad/api/TYSplashAd$2$1;->this$1:Lcom/tkay/splashad/api/TYSplashAd$2;

    iget-object v0, v0, Lcom/tkay/splashad/api/TYSplashAd$2;->this$0:Lcom/tkay/splashad/api/TYSplashAd;

    iget-object v0, v0, Lcom/tkay/splashad/api/TYSplashAd;->mListener:Lcom/tkay/splashad/api/TYSplashAdListener;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/tkay/splashad/api/TYSplashAd$2$1;->this$1:Lcom/tkay/splashad/api/TYSplashAd$2;

    iget-object v0, v0, Lcom/tkay/splashad/api/TYSplashAd$2;->this$0:Lcom/tkay/splashad/api/TYSplashAd;

    iget-object v0, v0, Lcom/tkay/splashad/api/TYSplashAd;->mListener:Lcom/tkay/splashad/api/TYSplashAdListener;

    instance-of v0, v0, Lcom/tkay/splashad/api/TYSplashExListener;

    if-eqz v0, :cond_0

    .line 321
    iget-object v0, p0, Lcom/tkay/splashad/api/TYSplashAd$2$1;->this$1:Lcom/tkay/splashad/api/TYSplashAd$2;

    iget-object v0, v0, Lcom/tkay/splashad/api/TYSplashAd$2;->this$0:Lcom/tkay/splashad/api/TYSplashAd;

    iget-object v0, v0, Lcom/tkay/splashad/api/TYSplashAd;->mListener:Lcom/tkay/splashad/api/TYSplashAdListener;

    check-cast v0, Lcom/tkay/splashad/api/TYSplashExListener;

    iget-object v1, p0, Lcom/tkay/splashad/api/TYSplashAd$2$1;->val$entity:Lcom/tkay/core/api/TYAdInfo;

    iget-boolean v2, p0, Lcom/tkay/splashad/api/TYSplashAd$2$1;->val$isSuccess:Z

    invoke-interface {v0, v1, v2}, Lcom/tkay/splashad/api/TYSplashExListener;->onDeeplinkCallback(Lcom/tkay/core/api/TYAdInfo;Z)V

    :cond_0
    return-void
.end method
