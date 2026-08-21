.class public final Lcom/kwad/components/ad/reward/m/p;
.super Lcom/kwad/components/ad/reward/m/s;

# interfaces
.implements Landroid/view/View$OnClickListener;


# instance fields
.field private Ah:Landroid/widget/ImageView;

.field private Ai:Landroid/widget/TextView;

.field private Aj:Landroid/widget/TextView;

.field private Ak:Landroid/widget/TextView;

.field private Al:Landroid/widget/TextView;

.field private Am:Landroid/widget/TextView;

.field private An:Landroid/widget/TextView;

.field private Ao:Landroid/widget/TextView;

.field private qx:Lcom/kwad/components/ad/reward/j;


# direct methods
.method public constructor <init>(Lcom/kwad/components/ad/reward/j;)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/m/s;-><init>()V

    iput-object p1, p0, Lcom/kwad/components/ad/reward/m/p;->qx:Lcom/kwad/components/ad/reward/j;

    return-void
.end method

.method private b(Lcom/kwad/sdk/core/response/model/AdTemplate;)V
    .locals 3

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object p1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/p;->Ah:Landroid/widget/ImageView;

    invoke-virtual {v0}, Landroid/widget/ImageView;->getResources()Landroid/content/res/Resources;

    move-result-object v0

    sget v1, Lcom/kwad/sdk/R$drawable;->ksad_ic_default_user_avatar:I

    invoke-virtual {v0, v1}, Landroid/content/res/Resources;->getDrawable(I)Landroid/graphics/drawable/Drawable;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/reward/m/p;->Ah:Landroid/widget/ImageView;

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/a;->bQ(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2, v0}, Lcom/kwad/sdk/core/imageloader/KSImageLoader;->loadCircleIcon(Landroid/widget/ImageView;Ljava/lang/String;Landroid/graphics/drawable/Drawable;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/p;->Ai:Landroid/widget/TextView;

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/a;->bO(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    return-void
.end method

.method private initView()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/p;->sw:Landroid/view/ViewGroup;

    if-nez v0, :cond_0

    return-void

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/p;->sw:Landroid/view/ViewGroup;

    sget v1, Lcom/kwad/sdk/R$id;->ksad_live_end_page_author_icon:I

    invoke-virtual {v0, v1}, Landroid/view/ViewGroup;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/ImageView;

    iput-object v0, p0, Lcom/kwad/components/ad/reward/m/p;->Ah:Landroid/widget/ImageView;

    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/p;->sw:Landroid/view/ViewGroup;

    sget v1, Lcom/kwad/sdk/R$id;->ksad_author_name_txt:I

    invoke-virtual {v0, v1}, Landroid/view/ViewGroup;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/kwad/components/ad/reward/m/p;->Ai:Landroid/widget/TextView;

    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/p;->sw:Landroid/view/ViewGroup;

    sget v1, Lcom/kwad/sdk/R$id;->ksad_live_end_detail_watch_person_count:I

    invoke-virtual {v0, v1}, Landroid/view/ViewGroup;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/kwad/components/ad/reward/m/p;->Aj:Landroid/widget/TextView;

    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/p;->sw:Landroid/view/ViewGroup;

    sget v1, Lcom/kwad/sdk/R$id;->ksad_live_end_detail_like_person_count:I

    invoke-virtual {v0, v1}, Landroid/view/ViewGroup;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/kwad/components/ad/reward/m/p;->Ak:Landroid/widget/TextView;

    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/p;->sw:Landroid/view/ViewGroup;

    sget v1, Lcom/kwad/sdk/R$id;->ksad_live_end_detail_watch_time:I

    invoke-virtual {v0, v1}, Landroid/view/ViewGroup;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/kwad/components/ad/reward/m/p;->Al:Landroid/widget/TextView;

    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/p;->sw:Landroid/view/ViewGroup;

    sget v1, Lcom/kwad/sdk/R$id;->ksad_live_end_bottom_title:I

    invoke-virtual {v0, v1}, Landroid/view/ViewGroup;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/kwad/components/ad/reward/m/p;->Am:Landroid/widget/TextView;

    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/p;->sw:Landroid/view/ViewGroup;

    sget v1, Lcom/kwad/sdk/R$id;->ksad_live_end_bottom_action_btn:I

    invoke-virtual {v0, v1}, Landroid/view/ViewGroup;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/kwad/components/ad/reward/m/p;->An:Landroid/widget/TextView;

    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/p;->sw:Landroid/view/ViewGroup;

    sget v1, Lcom/kwad/sdk/R$id;->ksad_live_end_bottom_des_btn:I

    invoke-virtual {v0, v1}, Landroid/view/ViewGroup;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/kwad/components/ad/reward/m/p;->Ao:Landroid/widget/TextView;

    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/p;->An:Landroid/widget/TextView;

    invoke-virtual {v0, p0}, Landroid/widget/TextView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/p;->Ao:Landroid/widget/TextView;

    invoke-virtual {v0, p0}, Landroid/widget/TextView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    return-void
.end method

.method private static l(J)Ljava/lang/String;
    .locals 8

    const-wide/32 v0, 0x36ee80

    div-long v0, p0, v0

    const-wide/32 v2, 0xea60

    div-long v2, p0, v2

    const-wide/16 v4, 0x3c

    mul-long v6, v0, v4

    sub-long/2addr v2, v6

    const-wide/16 v6, 0x3e8

    div-long/2addr p0, v6

    mul-long/2addr v4, v2

    sub-long/2addr p0, v4

    const-wide/16 v4, 0xe10

    mul-long/2addr v4, v0

    sub-long/2addr p0, v4

    const-wide/16 v4, 0x0

    cmp-long v4, v0, v4

    const/4 v5, 0x1

    const/4 v6, 0x0

    const/4 v7, 0x2

    if-lez v4, :cond_0

    const/4 v4, 0x3

    new-array v4, v4, [Ljava/lang/Object;

    invoke-static {v0, v1}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v0

    aput-object v0, v4, v6

    invoke-static {v2, v3}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v0

    aput-object v0, v4, v5

    invoke-static {p0, p1}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object p0

    aput-object p0, v4, v7

    const-string p0, "%02d:%02d:%02d"

    invoke-static {p0, v4}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p0

    return-object p0

    :cond_0
    new-array v0, v7, [Ljava/lang/Object;

    invoke-static {v2, v3}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v1

    aput-object v1, v0, v6

    invoke-static {p0, p1}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object p0

    aput-object p0, v0, v5

    const-string p0, "%02d:%02d"

    invoke-static {p0, v0}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method


# virtual methods
.method public final U(I)V
    .locals 6

    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/p;->Am:Landroid/widget/TextView;

    if-eqz v0, :cond_1

    if-lez p1, :cond_1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/p;->qx:Lcom/kwad/components/ad/reward/j;

    iget-boolean v0, v0, Lcom/kwad/components/ad/reward/j;->pj:Z

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    new-array v0, v0, [Ljava/lang/Object;

    const/4 v1, 0x0

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    aput-object p1, v0, v1

    const-string p1, "\u518d\u505c\u7559%s\u79d2\uff0c\u5373\u53ef\u83b7\u5f97\u5956\u52b1"

    invoke-static {p1, v0}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    new-instance v0, Landroid/text/SpannableString;

    invoke-direct {v0, p1}, Landroid/text/SpannableString;-><init>(Ljava/lang/CharSequence;)V

    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/m/p;->gQ()Landroid/view/ViewGroup;

    move-result-object v1

    invoke-virtual {v1}, Landroid/view/ViewGroup;->getResources()Landroid/content/res/Resources;

    move-result-object v1

    sget v2, Lcom/kwad/sdk/R$color;->ksad_reward_main_color:I

    invoke-virtual {v1, v2}, Landroid/content/res/Resources;->getColor(I)I

    move-result v1

    new-instance v2, Landroid/text/style/ForegroundColorSpan;

    invoke-direct {v2, v1}, Landroid/text/style/ForegroundColorSpan;-><init>(I)V

    const/4 v3, 0x3

    const/4 v4, 0x6

    const/16 v5, 0x12

    invoke-virtual {v0, v2, v3, v4, v5}, Landroid/text/SpannableString;->setSpan(Ljava/lang/Object;III)V

    new-instance v2, Landroid/text/style/ForegroundColorSpan;

    invoke-direct {v2, v1}, Landroid/text/style/ForegroundColorSpan;-><init>(I)V

    invoke-virtual {p1}, Ljava/lang/String;->length()I

    move-result p1

    add-int/lit8 v1, p1, -0x2

    invoke-virtual {v0, v2, v1, p1, v5}, Landroid/text/SpannableString;->setSpan(Ljava/lang/Object;III)V

    iget-object p1, p0, Lcom/kwad/components/ad/reward/m/p;->Am:Landroid/widget/TextView;

    invoke-virtual {p1, v0}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    return-void

    :cond_0
    iget-object p1, p0, Lcom/kwad/components/ad/reward/m/p;->Am:Landroid/widget/TextView;

    const-string v0, "\u5df2\u83b7\u5f97\u5956\u52b1"

    invoke-virtual {p1, v0}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    :cond_1
    return-void
.end method

.method public final a(Lcom/kwad/components/ad/reward/j;Lcom/kwad/components/ad/reward/model/AdLiveEndResultData$AdLivePushEndInfo;J)V
    .locals 3

    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/p;->Ak:Landroid/widget/TextView;

    iget-object v1, p2, Lcom/kwad/components/ad/reward/model/AdLiveEndResultData$AdLivePushEndInfo;->mDisplayLikeUserCount:Ljava/lang/String;

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/p;->Al:Landroid/widget/TextView;

    iget-wide v1, p2, Lcom/kwad/components/ad/reward/model/AdLiveEndResultData$AdLivePushEndInfo;->mLiveDuration:J

    invoke-static {v1, v2}, Lcom/kwad/components/ad/reward/m/p;->l(J)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/p;->Aj:Landroid/widget/TextView;

    iget-object p2, p2, Lcom/kwad/components/ad/reward/model/AdLiveEndResultData$AdLivePushEndInfo;->mDisplayWatchingUserCount:Ljava/lang/String;

    invoke-virtual {v0, p2}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    iget-boolean p2, p1, Lcom/kwad/components/ad/reward/j;->pj:Z

    if-eqz p2, :cond_0

    iget-object p1, p1, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object p1

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/a;->Y(Lcom/kwad/sdk/core/response/model/AdInfo;)J

    move-result-wide p1

    sub-long/2addr p1, p3

    const-wide/16 p3, 0x0

    invoke-static {p1, p2, p3, p4}, Ljava/lang/Math;->max(JJ)J

    move-result-wide p1

    const-wide/16 p3, 0x3e8

    div-long/2addr p1, p3

    long-to-int p1, p1

    const/4 p2, 0x1

    new-array p2, p2, [Ljava/lang/Object;

    const/4 p3, 0x0

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    aput-object p1, p2, p3

    const-string p1, "\u518d\u505c\u7559%s\u79d2\uff0c\u5373\u53ef\u83b7\u5f97\u5956\u52b1"

    invoke-static {p1, p2}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    new-instance p2, Landroid/text/SpannableString;

    invoke-direct {p2, p1}, Landroid/text/SpannableString;-><init>(Ljava/lang/CharSequence;)V

    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/m/p;->gQ()Landroid/view/ViewGroup;

    move-result-object p3

    invoke-virtual {p3}, Landroid/view/ViewGroup;->getResources()Landroid/content/res/Resources;

    move-result-object p3

    sget p4, Lcom/kwad/sdk/R$color;->ksad_reward_main_color:I

    invoke-virtual {p3, p4}, Landroid/content/res/Resources;->getColor(I)I

    move-result p3

    new-instance p4, Landroid/text/style/ForegroundColorSpan;

    invoke-direct {p4, p3}, Landroid/text/style/ForegroundColorSpan;-><init>(I)V

    const/4 v0, 0x3

    const/4 v1, 0x6

    const/16 v2, 0x12

    invoke-virtual {p2, p4, v0, v1, v2}, Landroid/text/SpannableString;->setSpan(Ljava/lang/Object;III)V

    new-instance p4, Landroid/text/style/ForegroundColorSpan;

    invoke-direct {p4, p3}, Landroid/text/style/ForegroundColorSpan;-><init>(I)V

    invoke-virtual {p1}, Ljava/lang/String;->length()I

    move-result p1

    add-int/lit8 p3, p1, -0x2

    invoke-virtual {p2, p4, p3, p1, v2}, Landroid/text/SpannableString;->setSpan(Ljava/lang/Object;III)V

    iget-object p1, p0, Lcom/kwad/components/ad/reward/m/p;->Am:Landroid/widget/TextView;

    :goto_0
    invoke-virtual {p1, p2}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    return-void

    :cond_0
    iget-object p1, p0, Lcom/kwad/components/ad/reward/m/p;->Am:Landroid/widget/TextView;

    const-string p2, "\u5185\u5bb9\u5f88\u7cbe\u5f69\uff0c\u4e0d\u8981\u9519\u8fc7\u54e6"

    goto :goto_0
.end method

.method protected final a(Lcom/kwad/components/ad/reward/m/r;)V
    .locals 0

    invoke-super {p0, p1}, Lcom/kwad/components/ad/reward/m/s;->a(Lcom/kwad/components/ad/reward/m/r;)V

    invoke-virtual {p1}, Lcom/kwad/components/ad/reward/m/r;->getAdTemplate()Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object p1

    invoke-direct {p0, p1}, Lcom/kwad/components/ad/reward/m/p;->b(Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    return-void
.end method

.method public final h(Landroid/view/ViewGroup;)V
    .locals 2

    sget v0, Lcom/kwad/sdk/R$id;->ksad_reward_origin_live_end_page_stub:I

    sget v1, Lcom/kwad/sdk/R$id;->ksad_live_end_page_layout_root:I

    invoke-super {p0, p1, v0, v1}, Lcom/kwad/components/ad/reward/m/s;->a(Landroid/view/ViewGroup;II)V

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/m/p;->initView()V

    return-void
.end method

.method public final onClick(Landroid/view/View;)V
    .locals 9

    new-instance v8, Lcom/kwad/sdk/core/report/j;

    invoke-direct {v8}, Lcom/kwad/sdk/core/report/j;-><init>()V

    const/16 v0, 0x18

    invoke-virtual {v8, v0}, Lcom/kwad/sdk/core/report/j;->cm(I)Lcom/kwad/sdk/core/report/j;

    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/p;->An:Landroid/widget/TextView;

    invoke-virtual {p1, v0}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/p;->qx:Lcom/kwad/components/ad/reward/j;

    const/4 v1, 0x2

    invoke-virtual {p1}, Landroid/view/View;->getContext()Landroid/content/Context;

    move-result-object v2

    const/16 v3, 0x26

    const/4 v4, 0x1

    const-wide/16 v5, 0x0

    const/4 v7, 0x0

    invoke-virtual/range {v0 .. v8}, Lcom/kwad/components/ad/reward/j;->a(ILandroid/content/Context;IIJZLcom/kwad/sdk/core/report/j;)V

    return-void

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/p;->Ao:Landroid/widget/TextView;

    invoke-virtual {p1, v0}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/p;->qx:Lcom/kwad/components/ad/reward/j;

    const/4 v1, 0x2

    invoke-virtual {p1}, Landroid/view/View;->getContext()Landroid/content/Context;

    move-result-object v2

    const/16 v3, 0x25

    const/4 v4, 0x1

    const-wide/16 v5, 0x0

    const/4 v7, 0x0

    invoke-virtual/range {v0 .. v8}, Lcom/kwad/components/ad/reward/j;->a(ILandroid/content/Context;IIJZLcom/kwad/sdk/core/report/j;)V

    :cond_1
    return-void
.end method
