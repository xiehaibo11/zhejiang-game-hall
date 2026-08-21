.class Lcom/tkay/splashad/api/TYSplashAd$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/splashad/api/TYSplashAd;->loadAd(I)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/tkay/splashad/api/TYSplashAd;

.field final synthetic val$loadType:I


# direct methods
.method constructor <init>(Lcom/tkay/splashad/api/TYSplashAd;I)V
    .locals 0

    .line 166
    iput-object p1, p0, Lcom/tkay/splashad/api/TYSplashAd$1;->this$0:Lcom/tkay/splashad/api/TYSplashAd;

    iput p2, p0, Lcom/tkay/splashad/api/TYSplashAd$1;->val$loadType:I

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 10

    .line 170
    iget-object v0, p0, Lcom/tkay/splashad/api/TYSplashAd$1;->this$0:Lcom/tkay/splashad/api/TYSplashAd;

    iget v0, v0, Lcom/tkay/splashad/api/TYSplashAd;->mFetchAdTimeout:I

    if-gtz v0, :cond_1

    .line 173
    iget-object v0, p0, Lcom/tkay/splashad/api/TYSplashAd$1;->this$0:Lcom/tkay/splashad/api/TYSplashAd;

    iget-object v0, v0, Lcom/tkay/splashad/api/TYSplashAd;->mContext:Landroid/content/Context;

    invoke-static {v0}, Lcom/tkay/core/c/b;->a(Landroid/content/Context;)Lcom/tkay/core/c/b;

    move-result-object v0

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->o()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/tkay/core/c/b;->b(Ljava/lang/String;)Lcom/tkay/core/c/a;

    move-result-object v0

    .line 174
    invoke-virtual {v0}, Lcom/tkay/core/c/a;->V()J

    move-result-wide v1

    const-wide/16 v3, 0x0

    cmp-long v1, v1, v3

    if-nez v1, :cond_0

    const/16 v0, 0x1388

    goto :goto_0

    :cond_0
    invoke-virtual {v0}, Lcom/tkay/core/c/a;->V()J

    move-result-wide v0

    long-to-int v0, v0

    :cond_1
    :goto_0
    move v6, v0

    .line 177
    iget-object v0, p0, Lcom/tkay/splashad/api/TYSplashAd$1;->this$0:Lcom/tkay/splashad/api/TYSplashAd;

    iget-object v0, v0, Lcom/tkay/splashad/api/TYSplashAd;->mActivityWeakRef:Ljava/lang/ref/WeakReference;

    const/4 v1, 0x0

    if-eqz v0, :cond_2

    iget-object v0, p0, Lcom/tkay/splashad/api/TYSplashAd$1;->this$0:Lcom/tkay/splashad/api/TYSplashAd;

    iget-object v0, v0, Lcom/tkay/splashad/api/TYSplashAd;->mActivityWeakRef:Ljava/lang/ref/WeakReference;

    invoke-virtual {v0}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/app/Activity;

    goto :goto_1

    :cond_2
    move-object v0, v1

    .line 180
    :goto_1
    iget v2, p0, Lcom/tkay/splashad/api/TYSplashAd$1;->val$loadType:I

    if-nez v2, :cond_3

    .line 181
    new-instance v1, Lcom/tkay/splashad/api/TYSplashAd$1$1;

    invoke-direct {v1, p0}, Lcom/tkay/splashad/api/TYSplashAd$1$1;-><init>(Lcom/tkay/splashad/api/TYSplashAd$1;)V

    .line 233
    invoke-virtual {v1, v6}, Lcom/tkay/splashad/a/b;->startCountDown(I)V

    :cond_3
    move-object v5, v1

    .line 235
    iget-object v1, p0, Lcom/tkay/splashad/api/TYSplashAd$1;->this$0:Lcom/tkay/splashad/api/TYSplashAd;

    iget-object v1, v1, Lcom/tkay/splashad/api/TYSplashAd;->mAdLoadManager:Lcom/tkay/splashad/a/c;

    if-eqz v0, :cond_4

    goto :goto_2

    :cond_4
    iget-object v0, p0, Lcom/tkay/splashad/api/TYSplashAd$1;->this$0:Lcom/tkay/splashad/api/TYSplashAd;

    iget-object v0, v0, Lcom/tkay/splashad/api/TYSplashAd;->mContext:Landroid/content/Context;

    :goto_2
    move-object v2, v0

    iget-object v0, p0, Lcom/tkay/splashad/api/TYSplashAd$1;->this$0:Lcom/tkay/splashad/api/TYSplashAd;

    iget-object v3, v0, Lcom/tkay/splashad/api/TYSplashAd;->mDefaultRequestInfo:Lcom/tkay/core/api/TYMediationRequestInfo;

    iget-object v0, p0, Lcom/tkay/splashad/api/TYSplashAd$1;->this$0:Lcom/tkay/splashad/api/TYSplashAd;

    iget-object v4, v0, Lcom/tkay/splashad/api/TYSplashAd;->mDefaultAdSourceConfig:Ljava/lang/String;

    iget v7, p0, Lcom/tkay/splashad/api/TYSplashAd$1;->val$loadType:I

    iget-object v0, p0, Lcom/tkay/splashad/api/TYSplashAd$1;->this$0:Lcom/tkay/splashad/api/TYSplashAd;

    iget-object v8, v0, Lcom/tkay/splashad/api/TYSplashAd;->mAdSourceEventListener:Lcom/tkay/core/common/b/b;

    iget-object v0, p0, Lcom/tkay/splashad/api/TYSplashAd$1;->this$0:Lcom/tkay/splashad/api/TYSplashAd;

    iget-object v9, v0, Lcom/tkay/splashad/api/TYSplashAd;->mTKExtraMap:Ljava/util/Map;

    invoke-virtual/range {v1 .. v9}, Lcom/tkay/splashad/a/c;->a(Landroid/content/Context;Lcom/tkay/core/api/TYMediationRequestInfo;Ljava/lang/String;Lcom/tkay/splashad/a/b;IILcom/tkay/core/common/b/b;Ljava/util/Map;)V

    return-void
.end method
