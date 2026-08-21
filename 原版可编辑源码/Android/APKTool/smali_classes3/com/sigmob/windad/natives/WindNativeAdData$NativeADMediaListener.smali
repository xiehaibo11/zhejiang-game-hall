.class public interface abstract Lcom/sigmob/windad/natives/WindNativeAdData$NativeADMediaListener;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/sigmob/windad/natives/WindNativeAdData;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x609
    name = "NativeADMediaListener"
.end annotation


# virtual methods
.method public abstract onVideoCompleted()V
.end method

.method public abstract onVideoError(Lcom/sigmob/windad/WindAdError;)V
.end method

.method public abstract onVideoLoad()V
.end method

.method public abstract onVideoPause()V
.end method

.method public abstract onVideoResume()V
.end method

.method public abstract onVideoStart()V
.end method
