.class Lcom/sigmob/windad/natives/WindNativeUnifiedAd$2;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/sigmob/windad/natives/WindNativeUnifiedAd;->a(Lcom/sigmob/windad/WindAdError;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/sigmob/windad/WindAdError;

.field final synthetic b:Lcom/sigmob/windad/natives/WindNativeUnifiedAd;


# direct methods
.method constructor <init>(Lcom/sigmob/windad/natives/WindNativeUnifiedAd;Lcom/sigmob/windad/WindAdError;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/windad/natives/WindNativeUnifiedAd$2;->b:Lcom/sigmob/windad/natives/WindNativeUnifiedAd;

    iput-object p2, p0, Lcom/sigmob/windad/natives/WindNativeUnifiedAd$2;->a:Lcom/sigmob/windad/WindAdError;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 3

    iget-object v0, p0, Lcom/sigmob/windad/natives/WindNativeUnifiedAd$2;->b:Lcom/sigmob/windad/natives/WindNativeUnifiedAd;

    sget-object v1, Lcom/czhj/sdk/common/models/AdStatus;->AdStatusNone:Lcom/czhj/sdk/common/models/AdStatus;

    iput-object v1, v0, Lcom/sigmob/windad/natives/WindNativeUnifiedAd;->mADStatus:Lcom/czhj/sdk/common/models/AdStatus;

    iget-object v0, p0, Lcom/sigmob/windad/natives/WindNativeUnifiedAd$2;->b:Lcom/sigmob/windad/natives/WindNativeUnifiedAd;

    invoke-static {v0}, Lcom/sigmob/windad/natives/WindNativeUnifiedAd;->a(Lcom/sigmob/windad/natives/WindNativeUnifiedAd;)Lcom/sigmob/windad/natives/WindNativeUnifiedAd$WindNativeAdLoadListener;

    move-result-object v0

    if-eqz v0, :cond_0

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "onVideoAdLoadFail "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/windad/natives/WindNativeUnifiedAd$2;->a:Lcom/sigmob/windad/WindAdError;

    invoke-virtual {v1}, Lcom/sigmob/windad/WindAdError;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "|"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/windad/natives/WindNativeUnifiedAd$2;->b:Lcom/sigmob/windad/natives/WindNativeUnifiedAd;

    invoke-static {v1}, Lcom/sigmob/windad/natives/WindNativeUnifiedAd;->c(Lcom/sigmob/windad/natives/WindNativeUnifiedAd;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->i(Ljava/lang/String;)V

    iget-object v0, p0, Lcom/sigmob/windad/natives/WindNativeUnifiedAd$2;->b:Lcom/sigmob/windad/natives/WindNativeUnifiedAd;

    invoke-static {v0}, Lcom/sigmob/windad/natives/WindNativeUnifiedAd;->a(Lcom/sigmob/windad/natives/WindNativeUnifiedAd;)Lcom/sigmob/windad/natives/WindNativeUnifiedAd$WindNativeAdLoadListener;

    move-result-object v0

    iget-object v1, p0, Lcom/sigmob/windad/natives/WindNativeUnifiedAd$2;->a:Lcom/sigmob/windad/WindAdError;

    iget-object v2, p0, Lcom/sigmob/windad/natives/WindNativeUnifiedAd$2;->b:Lcom/sigmob/windad/natives/WindNativeUnifiedAd;

    invoke-static {v2}, Lcom/sigmob/windad/natives/WindNativeUnifiedAd;->d(Lcom/sigmob/windad/natives/WindNativeUnifiedAd;)Ljava/lang/String;

    move-result-object v2

    invoke-interface {v0, v1, v2}, Lcom/sigmob/windad/natives/WindNativeUnifiedAd$WindNativeAdLoadListener;->onAdError(Lcom/sigmob/windad/WindAdError;Ljava/lang/String;)V

    :cond_0
    return-void
.end method
