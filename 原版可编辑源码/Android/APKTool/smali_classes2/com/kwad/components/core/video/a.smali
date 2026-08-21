.class public Lcom/kwad/components/core/video/a;
.super Lcom/kwad/sdk/core/video/videoview/b;

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/components/core/video/a$a;,
        Lcom/kwad/components/core/video/a$b;,
        Lcom/kwad/components/core/video/a$c;
    }
.end annotation

.annotation runtime Ljava/lang/Deprecated;
.end annotation


# instance fields
.field private Ah:Landroid/widget/ImageView;

.field private Ai:Landroid/widget/TextView;

.field protected RB:Z

.field private RC:Z

.field protected RD:Z

.field private RE:I

.field private RF:I

.field private RG:Lcom/kwad/sdk/widget/KSRelativeLayout;

.field private RH:Landroid/widget/RelativeLayout;

.field private RI:Z

.field private RJ:Z

.field private RK:Landroid/widget/LinearLayout;

.field private RL:Landroid/widget/LinearLayout;

.field private RM:Landroid/widget/ImageView;

.field private RN:Landroid/view/ViewGroup;

.field private RO:Landroid/widget/TextView;

.field private RP:Lcom/kwad/components/core/video/a$c;

.field private RQ:Lcom/kwad/components/core/video/a$a;

.field private final RR:Lcom/kwad/sdk/core/download/a/a;

.field protected mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

.field protected mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

.field private mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

.field protected mContext:Landroid/content/Context;

.field protected na:Landroid/widget/ImageView;

.field protected nb:Landroid/widget/TextView;

.field private nu:Landroid/widget/ProgressBar;

.field private nx:Z


# direct methods
.method public constructor <init>(Landroid/content/Context;Lcom/kwad/sdk/core/response/model/AdTemplate;Lcom/kwad/sdk/core/video/videoview/c;)V
    .locals 0

    invoke-direct {p0, p1, p3}, Lcom/kwad/sdk/core/video/videoview/b;-><init>(Landroid/content/Context;Lcom/kwad/sdk/core/video/videoview/c;)V

    const/4 p3, 0x1

    iput-boolean p3, p0, Lcom/kwad/components/core/video/a;->RC:Z

    const/4 p3, 0x0

    iput-boolean p3, p0, Lcom/kwad/components/core/video/a;->RD:Z

    iput-boolean p3, p0, Lcom/kwad/components/core/video/a;->RJ:Z

    new-instance p3, Lcom/kwad/components/core/video/a$1;

    invoke-direct {p3, p0}, Lcom/kwad/components/core/video/a$1;-><init>(Lcom/kwad/components/core/video/a;)V

    iput-object p3, p0, Lcom/kwad/components/core/video/a;->RR:Lcom/kwad/sdk/core/download/a/a;

    iput-object p1, p0, Lcom/kwad/components/core/video/a;->mContext:Landroid/content/Context;

    iput-object p2, p0, Lcom/kwad/components/core/video/a;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {p2}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object p1

    iput-object p1, p0, Lcom/kwad/components/core/video/a;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-direct {p0}, Lcom/kwad/components/core/video/a;->init()V

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/core/video/a;)Landroid/widget/TextView;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/core/video/a;->RO:Landroid/widget/TextView;

    return-object p0
.end method

.method private aK(I)V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/core/video/a;->RQ:Lcom/kwad/components/core/video/a$a;

    if-eqz v0, :cond_0

    iget-object v1, p0, Lcom/kwad/components/core/video/a;->RG:Lcom/kwad/sdk/widget/KSRelativeLayout;

    invoke-virtual {v1}, Lcom/kwad/sdk/widget/KSRelativeLayout;->getTouchCoords()Lcom/kwad/sdk/utils/ac$a;

    move-result-object v1

    invoke-interface {v0, p1, v1}, Lcom/kwad/components/core/video/a$a;->a(ILcom/kwad/sdk/utils/ac$a;)V

    :cond_0
    return-void
.end method

.method private init()V
    .locals 4

    iget-object v0, p0, Lcom/kwad/components/core/video/a;->mContext:Landroid/content/Context;

    sget v1, Lcom/kwad/sdk/R$layout;->ksad_feed_video_palyer_controller:I

    invoke-static {v0, v1, p0}, Lcom/kwad/sdk/m/l;->inflate(Landroid/content/Context;ILandroid/view/ViewGroup;)Landroid/view/View;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_video_root_container:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/core/video/a;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Lcom/kwad/sdk/widget/KSRelativeLayout;

    iput-object v0, p0, Lcom/kwad/components/core/video/a;->RG:Lcom/kwad/sdk/widget/KSRelativeLayout;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_data_flow_container:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/core/video/a;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/RelativeLayout;

    iput-object v0, p0, Lcom/kwad/components/core/video/a;->RH:Landroid/widget/RelativeLayout;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_data_flow_play_tip:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/core/video/a;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/kwad/components/core/video/a;->nb:Landroid/widget/TextView;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_data_flow_play_btn:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/core/video/a;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/ImageView;

    iput-object v0, p0, Lcom/kwad/components/core/video/a;->na:Landroid/widget/ImageView;

    invoke-virtual {v0, p0}, Landroid/widget/ImageView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    sget v0, Lcom/kwad/sdk/R$id;->ksad_video_network_unavailable:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/core/video/a;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/LinearLayout;

    iput-object v0, p0, Lcom/kwad/components/core/video/a;->RK:Landroid/widget/LinearLayout;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_video_error_container:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/core/video/a;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/LinearLayout;

    iput-object v0, p0, Lcom/kwad/components/core/video/a;->RL:Landroid/widget/LinearLayout;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_video_progress:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/core/video/a;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/ProgressBar;

    iput-object v0, p0, Lcom/kwad/components/core/video/a;->nu:Landroid/widget/ProgressBar;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_video_thumb_image:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/core/video/a;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/ImageView;

    iput-object v0, p0, Lcom/kwad/components/core/video/a;->RM:Landroid/widget/ImageView;

    iget-object v0, p0, Lcom/kwad/components/core/video/a;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->bi(Lcom/kwad/sdk/core/response/model/AdInfo;)Lcom/kwad/sdk/core/response/model/b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/sdk/core/response/model/b;->getUrl()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    iget-object v1, p0, Lcom/kwad/components/core/video/a;->RM:Landroid/widget/ImageView;

    const/4 v2, 0x0

    invoke-virtual {v1, v2}, Landroid/widget/ImageView;->setImageDrawable(Landroid/graphics/drawable/Drawable;)V

    iget-object v1, p0, Lcom/kwad/components/core/video/a;->RM:Landroid/widget/ImageView;

    iget-object v2, p0, Lcom/kwad/components/core/video/a;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v1, v0, v2}, Lcom/kwad/sdk/core/imageloader/KSImageLoader;->loadImage(Landroid/widget/ImageView;Ljava/lang/String;Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    iget-object v0, p0, Lcom/kwad/components/core/video/a;->RM:Landroid/widget/ImageView;

    const/4 v1, 0x0

    goto :goto_0

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/core/video/a;->RM:Landroid/widget/ImageView;

    const/16 v1, 0x8

    :goto_0
    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setVisibility(I)V

    iget-object v0, p0, Lcom/kwad/components/core/video/a;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->G(Lcom/kwad/sdk/core/response/model/AdInfo;)I

    move-result v0

    iget-object v1, p0, Lcom/kwad/components/core/video/a;->nb:Landroid/widget/TextView;

    mul-int/lit16 v0, v0, 0x3e8

    int-to-long v2, v0

    invoke-static {v2, v3}, Lcom/kwad/sdk/utils/bh;->V(J)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v1, v0}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    invoke-virtual {p0}, Lcom/kwad/components/core/video/a;->qs()V

    return-void
.end method

.method private qt()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/core/video/a;->RN:Landroid/view/ViewGroup;

    if-eqz v0, :cond_0

    const/16 v1, 0x8

    invoke-virtual {v0, v1}, Landroid/view/ViewGroup;->setVisibility(I)V

    :cond_0
    return-void
.end method

.method private qx()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/core/video/a;->RH:Landroid/widget/RelativeLayout;

    const/16 v1, 0x8

    invoke-virtual {v0, v1}, Landroid/widget/RelativeLayout;->setVisibility(I)V

    return-void
.end method

.method private setTopBottomVisible(Z)V
    .locals 2

    iget-boolean v0, p0, Lcom/kwad/components/core/video/a;->RJ:Z

    if-eqz v0, :cond_0

    return-void

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/core/video/a;->nu:Landroid/widget/ProgressBar;

    if-eqz p1, :cond_1

    const/4 v1, 0x0

    goto :goto_0

    :cond_1
    const/16 v1, 0x8

    :goto_0
    invoke-virtual {v0, v1}, Landroid/widget/ProgressBar;->setVisibility(I)V

    iput-boolean p1, p0, Lcom/kwad/components/core/video/a;->RI:Z

    return-void
.end method


# virtual methods
.method public final aC(Ljava/lang/String;)V
    .locals 1

    sget v0, Lcom/kwad/sdk/R$id;->ksad_app_download:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/core/video/a;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    invoke-virtual {v0, p1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    return-void
.end method

.method public final aK(Z)V
    .locals 1

    iget-boolean v0, p0, Lcom/kwad/components/core/video/a;->RJ:Z

    if-eqz v0, :cond_0

    return-void

    :cond_0
    if-eqz p1, :cond_1

    iget-boolean p1, p0, Lcom/kwad/components/core/video/a;->RI:Z

    if-eqz p1, :cond_2

    iget-object p1, p0, Lcom/kwad/components/core/video/a;->nu:Landroid/widget/ProgressBar;

    const/4 v0, 0x0

    invoke-virtual {p1, v0}, Landroid/widget/ProgressBar;->setVisibility(I)V

    return-void

    :cond_1
    iget-object p1, p0, Lcom/kwad/components/core/video/a;->nu:Landroid/widget/ProgressBar;

    const/16 v0, 0x8

    invoke-virtual {p1, v0}, Landroid/widget/ProgressBar;->setVisibility(I)V

    :cond_2
    return-void
.end method

.method protected eP()V
    .locals 5

    iget-object v0, p0, Lcom/kwad/components/core/video/a;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->ax(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v0

    if-eqz v0, :cond_0

    sget v0, Lcom/kwad/sdk/R$id;->ksad_video_complete_app_container:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/core/video/a;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/LinearLayout;

    sget v1, Lcom/kwad/sdk/R$id;->ksad_video_complete_app_icon:I

    invoke-virtual {p0, v1}, Lcom/kwad/components/core/video/a;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/ImageView;

    iput-object v1, p0, Lcom/kwad/components/core/video/a;->Ah:Landroid/widget/ImageView;

    sget v1, Lcom/kwad/sdk/R$id;->ksad_app_name:I

    invoke-virtual {p0, v1}, Lcom/kwad/components/core/video/a;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/TextView;

    iput-object v1, p0, Lcom/kwad/components/core/video/a;->Ai:Landroid/widget/TextView;

    sget v1, Lcom/kwad/sdk/R$id;->ksad_app_download:I

    invoke-virtual {p0, v1}, Lcom/kwad/components/core/video/a;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/TextView;

    iput-object v1, p0, Lcom/kwad/components/core/video/a;->RO:Landroid/widget/TextView;

    iget-object v1, p0, Lcom/kwad/components/core/video/a;->Ah:Landroid/widget/ImageView;

    iget-object v2, p0, Lcom/kwad/components/core/video/a;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v2}, Lcom/kwad/sdk/core/response/b/d;->cl(Lcom/kwad/sdk/core/response/model/AdTemplate;)Ljava/lang/String;

    move-result-object v2

    iget-object v3, p0, Lcom/kwad/components/core/video/a;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    const/16 v4, 0xc

    invoke-static {v1, v2, v3, v4}, Lcom/kwad/sdk/core/imageloader/KSImageLoader;->loadAppIcon(Landroid/widget/ImageView;Ljava/lang/String;Lcom/kwad/sdk/core/response/model/AdTemplate;I)V

    iget-object v1, p0, Lcom/kwad/components/core/video/a;->Ai:Landroid/widget/TextView;

    iget-object v2, p0, Lcom/kwad/components/core/video/a;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {v2}, Lcom/kwad/sdk/core/response/b/a;->bO(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    iget-object v1, p0, Lcom/kwad/components/core/video/a;->RO:Landroid/widget/TextView;

    iget-object v2, p0, Lcom/kwad/components/core/video/a;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {v2}, Lcom/kwad/sdk/core/response/b/a;->aw(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    iput-object v0, p0, Lcom/kwad/components/core/video/a;->RN:Landroid/view/ViewGroup;

    iget-object v0, p0, Lcom/kwad/components/core/video/a;->Ah:Landroid/widget/ImageView;

    invoke-virtual {v0, p0}, Landroid/widget/ImageView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    iget-object v0, p0, Lcom/kwad/components/core/video/a;->Ai:Landroid/widget/TextView;

    invoke-virtual {v0, p0}, Landroid/widget/TextView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    iget-object v0, p0, Lcom/kwad/components/core/video/a;->RO:Landroid/widget/TextView;

    invoke-virtual {v0, p0}, Landroid/widget/TextView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    new-instance v0, Lcom/kwad/components/core/e/d/c;

    iget-object v1, p0, Lcom/kwad/components/core/video/a;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-direct {v0, v1}, Lcom/kwad/components/core/e/d/c;-><init>(Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    iput-object v0, p0, Lcom/kwad/components/core/video/a;->mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

    iget-object v1, p0, Lcom/kwad/components/core/video/a;->RR:Lcom/kwad/sdk/core/download/a/a;

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/e/d/c;->b(Lcom/kwad/sdk/api/KsAppDownloadListener;)V

    goto :goto_0

    :cond_0
    sget v0, Lcom/kwad/sdk/R$id;->ksad_video_complete_h5_container:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/core/video/a;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/LinearLayout;

    sget v1, Lcom/kwad/sdk/R$id;->ksad_h5_open:I

    invoke-virtual {p0, v1}, Lcom/kwad/components/core/video/a;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/TextView;

    iput-object v1, p0, Lcom/kwad/components/core/video/a;->RO:Landroid/widget/TextView;

    iget-object v2, p0, Lcom/kwad/components/core/video/a;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {v2}, Lcom/kwad/sdk/core/response/b/a;->aw(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    iget-object v1, p0, Lcom/kwad/components/core/video/a;->RO:Landroid/widget/TextView;

    invoke-virtual {v1, p0}, Landroid/widget/TextView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    iput-object v0, p0, Lcom/kwad/components/core/video/a;->RN:Landroid/view/ViewGroup;

    :goto_0
    iget-object v0, p0, Lcom/kwad/components/core/video/a;->RN:Landroid/view/ViewGroup;

    invoke-virtual {v0, p0}, Landroid/view/ViewGroup;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    iget-object v0, p0, Lcom/kwad/components/core/video/a;->RN:Landroid/view/ViewGroup;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/view/ViewGroup;->setVisibility(I)V

    return-void
.end method

.method public getAdTemplate()Lcom/kwad/sdk/core/response/model/AdTemplate;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/video/a;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    return-object v0
.end method

.method public final m(II)V
    .locals 0

    iput p2, p0, Lcom/kwad/components/core/video/a;->RF:I

    iput p1, p0, Lcom/kwad/components/core/video/a;->RE:I

    return-void
.end method

.method public onClick(Landroid/view/View;)V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/core/video/a;->na:Landroid/widget/ImageView;

    const/4 v1, 0x1

    if-ne p1, v0, :cond_0

    iput-boolean v1, p0, Lcom/kwad/components/core/video/a;->RB:Z

    iput-boolean v1, p0, Lcom/kwad/components/core/video/a;->RC:Z

    invoke-virtual {p0}, Lcom/kwad/components/core/video/a;->qy()V

    return-void

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/core/video/a;->Ah:Landroid/widget/ImageView;

    if-ne p1, v0, :cond_1

    invoke-direct {p0, v1}, Lcom/kwad/components/core/video/a;->aK(I)V

    return-void

    :cond_1
    iget-object v0, p0, Lcom/kwad/components/core/video/a;->Ai:Landroid/widget/TextView;

    if-ne p1, v0, :cond_2

    const/4 p1, 0x2

    invoke-direct {p0, p1}, Lcom/kwad/components/core/video/a;->aK(I)V

    return-void

    :cond_2
    iget-object v0, p0, Lcom/kwad/components/core/video/a;->RO:Landroid/widget/TextView;

    if-ne p1, v0, :cond_3

    const/4 p1, 0x3

    invoke-direct {p0, p1}, Lcom/kwad/components/core/video/a;->aK(I)V

    return-void

    :cond_3
    const/4 p1, 0x4

    invoke-direct {p0, p1}, Lcom/kwad/components/core/video/a;->aK(I)V

    return-void
.end method

.method public final onPlayStateChanged(I)V
    .locals 4

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "onPlayStateChanged playState="

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "AdVideoPlayerController"

    invoke-static {v1, v0}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    const/4 v0, -0x1

    const/4 v1, 0x0

    const/16 v2, 0x8

    if-eq p1, v0, :cond_7

    const/4 v0, 0x4

    if-eq p1, v0, :cond_5

    const/16 v0, 0x9

    if-eq p1, v0, :cond_3

    const/4 v0, 0x1

    if-eq p1, v0, :cond_2

    const/4 v1, 0x2

    if-eq p1, v1, :cond_0

    goto :goto_0

    :cond_0
    iget-object p1, p0, Lcom/kwad/components/core/video/a;->RP:Lcom/kwad/components/core/video/a$c;

    if-eqz p1, :cond_1

    invoke-interface {p1}, Lcom/kwad/components/core/video/a$c;->onVideoPlayStart()V

    :cond_1
    invoke-direct {p0, v0}, Lcom/kwad/components/core/video/a;->setTopBottomVisible(Z)V

    invoke-virtual {p0}, Lcom/kwad/components/core/video/a;->qH()V

    return-void

    :cond_2
    invoke-direct {p0}, Lcom/kwad/components/core/video/a;->qx()V

    iget-object p1, p0, Lcom/kwad/components/core/video/a;->RK:Landroid/widget/LinearLayout;

    invoke-virtual {p1, v2}, Landroid/widget/LinearLayout;->setVisibility(I)V

    iget-object p1, p0, Lcom/kwad/components/core/video/a;->RL:Landroid/widget/LinearLayout;

    invoke-virtual {p1, v2}, Landroid/widget/LinearLayout;->setVisibility(I)V

    iget-object p1, p0, Lcom/kwad/components/core/video/a;->nu:Landroid/widget/ProgressBar;

    invoke-virtual {p1, v2}, Landroid/widget/ProgressBar;->setVisibility(I)V

    invoke-direct {p0}, Lcom/kwad/components/core/video/a;->qt()V

    return-void

    :cond_3
    iget-object p1, p0, Lcom/kwad/components/core/video/a;->RP:Lcom/kwad/components/core/video/a$c;

    if-eqz p1, :cond_4

    invoke-interface {p1}, Lcom/kwad/components/core/video/a$c;->bk()V

    :cond_4
    invoke-virtual {p0}, Lcom/kwad/components/core/video/a;->qI()V

    iget-object p1, p0, Lcom/kwad/components/core/video/a;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    const-wide/16 v2, -0x1

    invoke-virtual {p1, v2, v3}, Lcom/kwad/sdk/core/response/model/AdTemplate;->setmCurPlayTime(J)V

    invoke-direct {p0, v1}, Lcom/kwad/components/core/video/a;->setTopBottomVisible(Z)V

    iget-object p1, p0, Lcom/kwad/components/core/video/a;->RM:Landroid/widget/ImageView;

    iget-object v0, p0, Lcom/kwad/components/core/video/a;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->P(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v0

    iget-object v2, p0, Lcom/kwad/components/core/video/a;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {p1, v0, v2}, Lcom/kwad/sdk/core/imageloader/KSImageLoader;->loadImage(Landroid/widget/ImageView;Ljava/lang/String;Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    iget-object p1, p0, Lcom/kwad/components/core/video/a;->RM:Landroid/widget/ImageView;

    invoke-virtual {p1, v1}, Landroid/widget/ImageView;->setVisibility(I)V

    invoke-virtual {p0}, Lcom/kwad/components/core/video/a;->eP()V

    :goto_0
    return-void

    :cond_5
    iget-object p1, p0, Lcom/kwad/components/core/video/a;->RP:Lcom/kwad/components/core/video/a$c;

    if-eqz p1, :cond_6

    invoke-interface {p1}, Lcom/kwad/components/core/video/a$c;->bj()V

    :cond_6
    iget-object p1, p0, Lcom/kwad/components/core/video/a;->RM:Landroid/widget/ImageView;

    invoke-virtual {p1, v2}, Landroid/widget/ImageView;->setVisibility(I)V

    return-void

    :cond_7
    invoke-virtual {p0}, Lcom/kwad/components/core/video/a;->qI()V

    invoke-direct {p0, v1}, Lcom/kwad/components/core/video/a;->setTopBottomVisible(Z)V

    iget-object p1, p0, Lcom/kwad/components/core/video/a;->RK:Landroid/widget/LinearLayout;

    invoke-virtual {p1, v2}, Landroid/widget/LinearLayout;->setVisibility(I)V

    iget-object p1, p0, Lcom/kwad/components/core/video/a;->RL:Landroid/widget/LinearLayout;

    invoke-virtual {p1, v1}, Landroid/widget/LinearLayout;->setVisibility(I)V

    iget-object p1, p0, Lcom/kwad/components/core/video/a;->RP:Lcom/kwad/components/core/video/a$c;

    instance-of v0, p1, Lcom/kwad/components/core/video/f$a;

    if-eqz v0, :cond_8

    check-cast p1, Lcom/kwad/components/core/video/f$a;

    iget v0, p0, Lcom/kwad/components/core/video/a;->RE:I

    iget v1, p0, Lcom/kwad/components/core/video/a;->RF:I

    invoke-interface {p1, v0, v1}, Lcom/kwad/components/core/video/f$a;->onVideoPlayError(II)V

    :cond_8
    iget-object p1, p0, Lcom/kwad/components/core/video/a;->RP:Lcom/kwad/components/core/video/a$c;

    instance-of v0, p1, Lcom/kwad/components/core/video/a$b;

    if-eqz v0, :cond_9

    check-cast p1, Lcom/kwad/components/core/video/a$b;

    iget v0, p0, Lcom/kwad/components/core/video/a;->RE:I

    iget v1, p0, Lcom/kwad/components/core/video/a;->RF:I

    invoke-interface {p1, v0, v1}, Lcom/kwad/components/core/video/a$b;->onVideoPlayError(II)V

    :cond_9
    invoke-static {}, Lcom/kwad/components/core/o/a;->pA()Lcom/kwad/components/core/o/a;

    move-result-object p1

    iget-object v0, p0, Lcom/kwad/components/core/video/a;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget v1, p0, Lcom/kwad/components/core/video/a;->RE:I

    iget v2, p0, Lcom/kwad/components/core/video/a;->RF:I

    invoke-virtual {p1, v0, v1, v2}, Lcom/kwad/components/core/o/a;->b(Lcom/kwad/sdk/core/response/model/AdTemplate;II)V

    return-void
.end method

.method protected qA()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/video/a;->awf:Lcom/kwad/sdk/core/video/videoview/c;

    invoke-interface {v0}, Lcom/kwad/sdk/core/video/videoview/c;->pause()V

    return-void
.end method

.method public final qB()V
    .locals 6

    iget-object v0, p0, Lcom/kwad/components/core/video/a;->awf:Lcom/kwad/sdk/core/video/videoview/c;

    invoke-interface {v0}, Lcom/kwad/sdk/core/video/videoview/c;->getCurrentPosition()J

    move-result-wide v0

    iget-object v2, p0, Lcom/kwad/components/core/video/a;->awf:Lcom/kwad/sdk/core/video/videoview/c;

    invoke-interface {v2}, Lcom/kwad/sdk/core/video/videoview/c;->getDuration()J

    move-result-wide v2

    iget-object v4, p0, Lcom/kwad/components/core/video/a;->awf:Lcom/kwad/sdk/core/video/videoview/c;

    invoke-interface {v4}, Lcom/kwad/sdk/core/video/videoview/c;->getBufferPercentage()I

    move-result v4

    iget-object v5, p0, Lcom/kwad/components/core/video/a;->nu:Landroid/widget/ProgressBar;

    invoke-virtual {v5, v4}, Landroid/widget/ProgressBar;->setSecondaryProgress(I)V

    long-to-float v4, v0

    const/high16 v5, 0x42c80000    # 100.0f

    mul-float/2addr v4, v5

    long-to-float v2, v2

    div-float/2addr v4, v2

    float-to-int v2, v4

    iget-object v3, p0, Lcom/kwad/components/core/video/a;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-virtual {v3, v0, v1}, Lcom/kwad/sdk/core/response/model/AdTemplate;->setmCurPlayTime(J)V

    iget-object v3, p0, Lcom/kwad/components/core/video/a;->nu:Landroid/widget/ProgressBar;

    invoke-virtual {v3, v2}, Landroid/widget/ProgressBar;->setProgress(I)V

    iget-object v2, p0, Lcom/kwad/components/core/video/a;->RP:Lcom/kwad/components/core/video/a$c;

    if-eqz v2, :cond_0

    invoke-interface {v2, v0, v1}, Lcom/kwad/components/core/video/a$c;->d(J)V

    :cond_0
    return-void
.end method

.method public final qC()V
    .locals 2

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/kwad/components/core/video/a;->RJ:Z

    iget-object v0, p0, Lcom/kwad/components/core/video/a;->nu:Landroid/widget/ProgressBar;

    const/16 v1, 0x8

    invoke-virtual {v0, v1}, Landroid/widget/ProgressBar;->setVisibility(I)V

    return-void
.end method

.method protected qs()V
    .locals 0

    return-void
.end method

.method protected final qu()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/core/video/a;->RK:Landroid/widget/LinearLayout;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/widget/LinearLayout;->setVisibility(I)V

    return-void
.end method

.method protected final qv()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/core/video/a;->RK:Landroid/widget/LinearLayout;

    const/16 v1, 0x8

    invoke-virtual {v0, v1}, Landroid/widget/LinearLayout;->setVisibility(I)V

    return-void
.end method

.method protected final qw()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/core/video/a;->RH:Landroid/widget/RelativeLayout;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/widget/RelativeLayout;->setVisibility(I)V

    iget-object v0, p0, Lcom/kwad/components/core/video/a;->RM:Landroid/widget/ImageView;

    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setVisibility(I)V

    iget-object v0, p0, Lcom/kwad/components/core/video/a;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget-object v0, v0, Lcom/kwad/sdk/core/response/model/AdTemplate;->mVideoPlayerStatus:Lcom/kwad/sdk/core/response/model/VideoPlayerStatus;

    const/4 v1, 0x2

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/response/model/VideoPlayerStatus;->setVideoPlayerBehavior(I)V

    return-void
.end method

.method protected qy()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/video/a;->awf:Lcom/kwad/sdk/core/video/videoview/c;

    invoke-interface {v0}, Lcom/kwad/sdk/core/video/videoview/c;->isIdle()Z

    move-result v0

    if-eqz v0, :cond_5

    iget-object v0, p0, Lcom/kwad/components/core/video/a;->mContext:Landroid/content/Context;

    invoke-static {v0}, Lcom/kwad/sdk/utils/ag;->isNetworkConnected(Landroid/content/Context;)Z

    move-result v0

    if-nez v0, :cond_0

    invoke-virtual {p0}, Lcom/kwad/components/core/video/a;->qu()V

    return-void

    :cond_0
    invoke-virtual {p0}, Lcom/kwad/components/core/video/a;->qv()V

    iget-boolean v0, p0, Lcom/kwad/components/core/video/a;->RD:Z

    if-eqz v0, :cond_2

    :cond_1
    :goto_0
    invoke-virtual {p0}, Lcom/kwad/components/core/video/a;->qz()V

    iget-object v0, p0, Lcom/kwad/components/core/video/a;->awf:Lcom/kwad/sdk/core/video/videoview/c;

    invoke-interface {v0}, Lcom/kwad/sdk/core/video/videoview/c;->start()V

    return-void

    :cond_2
    iget-boolean v0, p0, Lcom/kwad/components/core/video/a;->RC:Z

    if-eqz v0, :cond_3

    iget-object v0, p0, Lcom/kwad/components/core/video/a;->mContext:Landroid/content/Context;

    invoke-static {v0}, Lcom/kwad/sdk/utils/ag;->isWifiConnected(Landroid/content/Context;)Z

    move-result v0

    if-eqz v0, :cond_3

    goto :goto_0

    :cond_3
    iget-boolean v0, p0, Lcom/kwad/components/core/video/a;->RC:Z

    if-eqz v0, :cond_4

    iget-boolean v0, p0, Lcom/kwad/components/core/video/a;->nx:Z

    if-nez v0, :cond_1

    iget-boolean v0, p0, Lcom/kwad/components/core/video/a;->RB:Z

    if-eqz v0, :cond_4

    goto :goto_0

    :cond_4
    invoke-virtual {p0}, Lcom/kwad/components/core/video/a;->qw()V

    return-void

    :cond_5
    iget-object v0, p0, Lcom/kwad/components/core/video/a;->awf:Lcom/kwad/sdk/core/video/videoview/c;

    invoke-interface {v0}, Lcom/kwad/sdk/core/video/videoview/c;->isPaused()Z

    move-result v0

    if-nez v0, :cond_6

    iget-object v0, p0, Lcom/kwad/components/core/video/a;->awf:Lcom/kwad/sdk/core/video/videoview/c;

    invoke-interface {v0}, Lcom/kwad/sdk/core/video/videoview/c;->Dw()Z

    move-result v0

    if-eqz v0, :cond_7

    :cond_6
    invoke-virtual {p0}, Lcom/kwad/components/core/video/a;->qz()V

    iget-object v0, p0, Lcom/kwad/components/core/video/a;->awf:Lcom/kwad/sdk/core/video/videoview/c;

    invoke-interface {v0}, Lcom/kwad/sdk/core/video/videoview/c;->restart()V

    :cond_7
    return-void
.end method

.method protected final qz()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/core/video/a;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/contentalliance/a/a/a;->ap(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/contentalliance/a/a/a;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/core/video/a;->awf:Lcom/kwad/sdk/core/video/videoview/c;

    invoke-interface {v1, v0}, Lcom/kwad/sdk/core/video/videoview/c;->setKsPlayLogParam(Lcom/kwad/sdk/contentalliance/a/a/a;)V

    return-void
.end method

.method public release()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/video/a;->awf:Lcom/kwad/sdk/core/video/videoview/c;

    invoke-interface {v0}, Lcom/kwad/sdk/core/video/videoview/c;->release()V

    return-void
.end method

.method public final reset()V
    .locals 2

    invoke-virtual {p0}, Lcom/kwad/components/core/video/a;->qI()V

    iget-object v0, p0, Lcom/kwad/components/core/video/a;->nu:Landroid/widget/ProgressBar;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/widget/ProgressBar;->setProgress(I)V

    iget-object v0, p0, Lcom/kwad/components/core/video/a;->nu:Landroid/widget/ProgressBar;

    invoke-virtual {v0, v1}, Landroid/widget/ProgressBar;->setSecondaryProgress(I)V

    invoke-direct {p0}, Lcom/kwad/components/core/video/a;->qx()V

    iget-object v0, p0, Lcom/kwad/components/core/video/a;->RK:Landroid/widget/LinearLayout;

    const/16 v1, 0x8

    invoke-virtual {v0, v1}, Landroid/widget/LinearLayout;->setVisibility(I)V

    iget-object v0, p0, Lcom/kwad/components/core/video/a;->RL:Landroid/widget/LinearLayout;

    invoke-virtual {v0, v1}, Landroid/widget/LinearLayout;->setVisibility(I)V

    iget-object v0, p0, Lcom/kwad/components/core/video/a;->nu:Landroid/widget/ProgressBar;

    invoke-virtual {v0, v1}, Landroid/widget/ProgressBar;->setVisibility(I)V

    iget-object v0, p0, Lcom/kwad/components/core/video/a;->RM:Landroid/widget/ImageView;

    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setVisibility(I)V

    iget-object v0, p0, Lcom/kwad/components/core/video/a;->RH:Landroid/widget/RelativeLayout;

    invoke-virtual {v0, v1}, Landroid/widget/RelativeLayout;->setVisibility(I)V

    iget-object v0, p0, Lcom/kwad/components/core/video/a;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget-object v0, v0, Lcom/kwad/sdk/core/response/model/AdTemplate;->mVideoPlayerStatus:Lcom/kwad/sdk/core/response/model/VideoPlayerStatus;

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/response/model/VideoPlayerStatus;->setVideoPlayerBehavior(I)V

    invoke-direct {p0}, Lcom/kwad/components/core/video/a;->qt()V

    return-void
.end method

.method public setAdClickListener(Lcom/kwad/components/core/video/a$a;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/core/video/a;->RQ:Lcom/kwad/components/core/video/a$a;

    return-void
.end method

.method public setCanControlPlay(Z)V
    .locals 0

    iput-boolean p1, p0, Lcom/kwad/components/core/video/a;->RD:Z

    return-void
.end method

.method public setDataAutoStart(Z)V
    .locals 0

    iput-boolean p1, p0, Lcom/kwad/components/core/video/a;->RC:Z

    return-void
.end method

.method public setDataFlowAutoStart(Z)V
    .locals 0

    iput-boolean p1, p0, Lcom/kwad/components/core/video/a;->nx:Z

    return-void
.end method

.method public setVideoPlayCallback(Lcom/kwad/components/core/video/a$c;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/core/video/a;->RP:Lcom/kwad/components/core/video/a$c;

    return-void
.end method
