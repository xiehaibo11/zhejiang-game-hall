.class final Lcom/kwad/components/ad/reward/widget/tailframe/TailFrameView$b;
.super Lcom/kwad/components/ad/reward/widget/tailframe/a;

# interfaces
.implements Lcom/kwad/sdk/widget/c;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/components/ad/reward/widget/tailframe/TailFrameView;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = "b"
.end annotation


# instance fields
.field private BA:Landroid/widget/ImageView;

.field private BB:Landroid/widget/ImageView;

.field private Bz:Landroid/widget/ImageView;


# direct methods
.method public constructor <init>()V
    .locals 1

    sget v0, Lcom/kwad/sdk/R$layout;->ksad_video_tf_view_landscape_vertical:I

    invoke-direct {p0, v0}, Lcom/kwad/components/ad/reward/widget/tailframe/a;-><init>(I)V

    return-void
.end method

.method private kr()V
    .locals 3

    iget-object v0, p0, Lcom/kwad/components/ad/reward/widget/tailframe/TailFrameView$b;->Bz:Landroid/widget/ImageView;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/widget/tailframe/TailFrameView$b;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {v1}, Lcom/kwad/sdk/core/response/b/a;->P(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v1

    iget-object v2, p0, Lcom/kwad/components/ad/reward/widget/tailframe/TailFrameView$b;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0, v1, v2}, Lcom/kwad/sdk/core/imageloader/KSImageLoader;->loadImage(Landroid/widget/ImageView;Ljava/lang/String;Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/widget/tailframe/TailFrameView$b;->BA:Landroid/widget/ImageView;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/widget/tailframe/TailFrameView$b;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {v1}, Lcom/kwad/sdk/core/response/b/a;->P(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v1

    iget-object v2, p0, Lcom/kwad/components/ad/reward/widget/tailframe/TailFrameView$b;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0, v1, v2}, Lcom/kwad/sdk/core/imageloader/KSImageLoader;->loadImage(Landroid/widget/ImageView;Ljava/lang/String;Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/widget/tailframe/TailFrameView$b;->BB:Landroid/widget/ImageView;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/widget/tailframe/TailFrameView$b;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {v1}, Lcom/kwad/sdk/core/response/b/a;->P(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v1

    iget-object v2, p0, Lcom/kwad/components/ad/reward/widget/tailframe/TailFrameView$b;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0, v1, v2}, Lcom/kwad/sdk/core/imageloader/KSImageLoader;->loadImage(Landroid/widget/ImageView;Ljava/lang/String;Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    return-void
.end method


# virtual methods
.method public final D(Landroid/content/Context;)V
    .locals 1

    invoke-super {p0, p1}, Lcom/kwad/components/ad/reward/widget/tailframe/a;->D(Landroid/content/Context;)V

    iget-object p1, p0, Lcom/kwad/components/ad/reward/widget/tailframe/TailFrameView$b;->Bo:Landroid/view/View;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_video_thumb_left:I

    invoke-virtual {p1, v0}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object p1

    check-cast p1, Landroid/widget/ImageView;

    iput-object p1, p0, Lcom/kwad/components/ad/reward/widget/tailframe/TailFrameView$b;->Bz:Landroid/widget/ImageView;

    iget-object p1, p0, Lcom/kwad/components/ad/reward/widget/tailframe/TailFrameView$b;->Bo:Landroid/view/View;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_video_thumb_mid:I

    invoke-virtual {p1, v0}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object p1

    check-cast p1, Landroid/widget/ImageView;

    iput-object p1, p0, Lcom/kwad/components/ad/reward/widget/tailframe/TailFrameView$b;->BA:Landroid/widget/ImageView;

    iget-object p1, p0, Lcom/kwad/components/ad/reward/widget/tailframe/TailFrameView$b;->Bo:Landroid/view/View;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_video_thumb_right:I

    invoke-virtual {p1, v0}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object p1

    check-cast p1, Landroid/widget/ImageView;

    iput-object p1, p0, Lcom/kwad/components/ad/reward/widget/tailframe/TailFrameView$b;->BB:Landroid/widget/ImageView;

    return-void
.end method

.method public final a(Lcom/kwad/sdk/core/response/model/AdTemplate;Lorg/json/JSONObject;Lcom/kwad/components/ad/reward/widget/tailframe/b;)V
    .locals 0

    invoke-super {p0, p1, p2, p3}, Lcom/kwad/components/ad/reward/widget/tailframe/a;->a(Lcom/kwad/sdk/core/response/model/AdTemplate;Lorg/json/JSONObject;Lcom/kwad/components/ad/reward/widget/tailframe/b;)V

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/widget/tailframe/TailFrameView$b;->kr()V

    return-void
.end method
