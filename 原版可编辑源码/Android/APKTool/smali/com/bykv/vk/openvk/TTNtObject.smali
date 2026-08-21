.class public interface abstract Lcom/bykv/vk/openvk/TTNtObject;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/bykv/vk/openvk/TTClientBidding;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/bykv/vk/openvk/TTNtObject$ExpressRenderListener;,
        Lcom/bykv/vk/openvk/TTNtObject$AdInteractionListener;
    }
.end annotation


# virtual methods
.method public abstract destroy()V
.end method

.method public abstract getAdLogo()Landroid/graphics/Bitmap;
.end method

.method public abstract getAdView()Landroid/view/View;
.end method

.method public abstract getAppCommentNum()I
.end method

.method public abstract getAppScore()I
.end method

.method public abstract getAppSize()I
.end method

.method public abstract getButtonText()Ljava/lang/String;
.end method

.method public abstract getComplianceInfo()Lcom/bykv/vk/openvk/ComplianceInfo;
.end method

.method public abstract getDescription()Ljava/lang/String;
.end method

.method public abstract getDislikeDialog(Landroid/app/Activity;)Lcom/bykv/vk/openvk/TTVfDislike;
.end method

.method public abstract getDislikeDialog(Lcom/bykv/vk/openvk/TTDislikeDialogAbstract;)Lcom/bykv/vk/openvk/TTVfDislike;
.end method

.method public abstract getDislikeInfo()Lcom/bykv/vk/openvk/DislikeInfo;
.end method

.method public abstract getDownloadStatusController()Lcom/bykv/vk/openvk/DownloadStatusController;
.end method

.method public abstract getIcon()Lcom/bykv/vk/openvk/TTImage;
.end method

.method public abstract getImageList()Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Lcom/bykv/vk/openvk/TTImage;",
            ">;"
        }
    .end annotation
.end method

.method public abstract getImageMode()I
.end method

.method public abstract getInteractionType()I
.end method

.method public abstract getMediaExtraInfo()Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;"
        }
    .end annotation
.end method

.method public abstract getSource()Ljava/lang/String;
.end method

.method public abstract getTitle()Ljava/lang/String;
.end method

.method public abstract getVideoCoverImage()Lcom/bykv/vk/openvk/TTImage;
.end method

.method public abstract registerViewForInteraction(Landroid/view/ViewGroup;Landroid/view/View;Lcom/bykv/vk/openvk/TTNtObject$AdInteractionListener;)V
.end method

.method public abstract registerViewForInteraction(Landroid/view/ViewGroup;Ljava/util/List;Ljava/util/List;Landroid/view/View;Lcom/bykv/vk/openvk/TTNtObject$AdInteractionListener;)V
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/view/ViewGroup;",
            "Ljava/util/List<",
            "Landroid/view/View;",
            ">;",
            "Ljava/util/List<",
            "Landroid/view/View;",
            ">;",
            "Landroid/view/View;",
            "Lcom/bykv/vk/openvk/TTNtObject$AdInteractionListener;",
            ")V"
        }
    .end annotation
.end method

.method public abstract registerViewForInteraction(Landroid/view/ViewGroup;Ljava/util/List;Ljava/util/List;Lcom/bykv/vk/openvk/TTNtObject$AdInteractionListener;)V
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/view/ViewGroup;",
            "Ljava/util/List<",
            "Landroid/view/View;",
            ">;",
            "Ljava/util/List<",
            "Landroid/view/View;",
            ">;",
            "Lcom/bykv/vk/openvk/TTNtObject$AdInteractionListener;",
            ")V"
        }
    .end annotation
.end method

.method public abstract registerViewForInteraction(Landroid/view/ViewGroup;Ljava/util/List;Ljava/util/List;Ljava/util/List;Landroid/view/View;Lcom/bykv/vk/openvk/TTNtObject$AdInteractionListener;)V
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/view/ViewGroup;",
            "Ljava/util/List<",
            "Landroid/view/View;",
            ">;",
            "Ljava/util/List<",
            "Landroid/view/View;",
            ">;",
            "Ljava/util/List<",
            "Landroid/view/View;",
            ">;",
            "Landroid/view/View;",
            "Lcom/bykv/vk/openvk/TTNtObject$AdInteractionListener;",
            ")V"
        }
    .end annotation
.end method

.method public abstract registerViewForInteraction(Landroid/view/ViewGroup;Ljava/util/List;Ljava/util/List;Ljava/util/List;Ljava/util/List;Landroid/view/View;Lcom/bykv/vk/openvk/TTNtObject$AdInteractionListener;)V
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/view/ViewGroup;",
            "Ljava/util/List<",
            "Landroid/view/View;",
            ">;",
            "Ljava/util/List<",
            "Landroid/view/View;",
            ">;",
            "Ljava/util/List<",
            "Landroid/view/View;",
            ">;",
            "Ljava/util/List<",
            "Landroid/view/View;",
            ">;",
            "Landroid/view/View;",
            "Lcom/bykv/vk/openvk/TTNtObject$AdInteractionListener;",
            ")V"
        }
    .end annotation
.end method

.method public abstract render()V
.end method

.method public abstract setActivityForDownloadApp(Landroid/app/Activity;)V
.end method

.method public abstract setDislikeCallback(Landroid/app/Activity;Lcom/bykv/vk/openvk/TTVfDislike$DislikeInteractionCallback;)V
.end method

.method public abstract setDislikeDialog(Lcom/bykv/vk/openvk/TTDislikeDialogAbstract;)V
.end method

.method public abstract setDownloadListener(Lcom/bykv/vk/openvk/TTAppDownloadListener;)V
.end method

.method public abstract setExpressRenderListener(Lcom/bykv/vk/openvk/TTNtObject$ExpressRenderListener;)V
.end method

.method public abstract showInteractionExpressAd(Landroid/app/Activity;)V
.end method
