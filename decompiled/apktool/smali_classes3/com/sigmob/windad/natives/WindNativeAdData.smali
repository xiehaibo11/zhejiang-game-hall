.class public interface abstract Lcom/sigmob/windad/natives/WindNativeAdData;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/sigmob/windad/natives/WindNativeAdData$DislikeInteractionCallback;,
        Lcom/sigmob/windad/natives/WindNativeAdData$NativeADMediaListener;
    }
.end annotation


# virtual methods
.method public abstract bindImageViews(Ljava/util/List;I)V
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Landroid/widget/ImageView;",
            ">;I)V"
        }
    .end annotation
.end method

.method public abstract bindMediaView(Landroid/view/ViewGroup;Lcom/sigmob/windad/natives/WindNativeAdData$NativeADMediaListener;)V
.end method

.method public abstract bindViewForInteraction(Landroid/view/View;Ljava/util/List;Ljava/util/List;Landroid/view/View;Lcom/sigmob/windad/natives/NativeADEventListener;)V
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/view/View;",
            "Ljava/util/List<",
            "Landroid/view/View;",
            ">;",
            "Ljava/util/List<",
            "Landroid/view/View;",
            ">;",
            "Landroid/view/View;",
            "Lcom/sigmob/windad/natives/NativeADEventListener;",
            ")V"
        }
    .end annotation
.end method

.method public abstract destroy()V
.end method

.method public abstract getAdLogo()Landroid/graphics/Bitmap;
.end method

.method public abstract getAdPatternType()I
.end method

.method public abstract getCTAText()Ljava/lang/String;
.end method

.method public abstract getDesc()Ljava/lang/String;
.end method

.method public abstract getIconUrl()Ljava/lang/String;
.end method

.method public abstract getTitle()Ljava/lang/String;
.end method

.method public abstract pauseVideo()V
.end method

.method public abstract resumeVideo()V
.end method

.method public abstract setDislikeInteractionCallback(Landroid/app/Activity;Lcom/sigmob/windad/natives/WindNativeAdData$DislikeInteractionCallback;)V
.end method

.method public abstract startVideo()V
.end method

.method public abstract stopVideo()V
.end method
