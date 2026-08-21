.class public interface abstract Lcom/sigmob/windad/natives/WindNativeUnifiedAd$WindNativeAdLoadListener;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/sigmob/windad/natives/WindNativeUnifiedAd;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x609
    name = "WindNativeAdLoadListener"
.end annotation


# virtual methods
.method public abstract onAdError(Lcom/sigmob/windad/WindAdError;Ljava/lang/String;)V
.end method

.method public abstract onAdLoad(Ljava/util/List;Ljava/lang/String;)V
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/sigmob/windad/natives/WindNativeAdData;",
            ">;",
            "Ljava/lang/String;",
            ")V"
        }
    .end annotation
.end method
