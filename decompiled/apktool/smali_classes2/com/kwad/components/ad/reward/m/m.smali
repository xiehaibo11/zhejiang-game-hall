.class public final Lcom/kwad/components/ad/reward/m/m;
.super Lcom/kwad/components/ad/reward/m/d;

# interfaces
.implements Landroid/view/View$OnClickListener;


# instance fields
.field private eZ:Landroid/widget/ImageView;

.field private gQ:Landroid/widget/TextView;

.field private qa:Lcom/kwad/components/ad/reward/k$a;

.field private zI:Landroid/view/ViewGroup;

.field private zJ:Landroid/view/View;

.field private zK:Landroid/widget/TextView;

.field private zL:Landroid/widget/TextView;

.field private zM:Landroid/widget/TextView;

.field private zN:Landroid/view/View;

.field private zq:Landroid/app/DialogFragment;

.field private zt:Landroid/view/View;


# direct methods
.method public constructor <init>(Landroid/app/DialogFragment;Lcom/kwad/sdk/core/response/model/AdTemplate;Landroid/view/LayoutInflater;Landroid/view/ViewGroup;Lcom/kwad/components/ad/reward/k$a;)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/m/d;-><init>()V

    iput-object p1, p0, Lcom/kwad/components/ad/reward/m/m;->zq:Landroid/app/DialogFragment;

    iput-object p5, p0, Lcom/kwad/components/ad/reward/m/m;->qa:Lcom/kwad/components/ad/reward/k$a;

    invoke-static {p2}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object p1

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/a;->cw(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result p1

    const/4 p2, 0x0

    if-eqz p1, :cond_0

    sget p1, Lcom/kwad/sdk/R$layout;->ksad_live_origin_dialog:I

    invoke-virtual {p3, p1, p4, p2}, Landroid/view/LayoutInflater;->inflate(ILandroid/view/ViewGroup;Z)Landroid/view/View;

    move-result-object p1

    check-cast p1, Landroid/view/ViewGroup;

    iput-object p1, p0, Lcom/kwad/components/ad/reward/m/m;->zI:Landroid/view/ViewGroup;

    const/4 p1, 0x1

    invoke-direct {p0, p1}, Lcom/kwad/components/ad/reward/m/m;->s(Z)V

    return-void

    :cond_0
    sget p1, Lcom/kwad/sdk/R$layout;->ksad_live_subscribe_dialog:I

    invoke-virtual {p3, p1, p4, p2}, Landroid/view/LayoutInflater;->inflate(ILandroid/view/ViewGroup;Z)Landroid/view/View;

    move-result-object p1

    check-cast p1, Landroid/view/ViewGroup;

    iput-object p1, p0, Lcom/kwad/components/ad/reward/m/m;->zI:Landroid/view/ViewGroup;

    invoke-direct {p0, p2}, Lcom/kwad/components/ad/reward/m/m;->s(Z)V

    return-void
.end method

.method private s(Z)V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/m;->zI:Landroid/view/ViewGroup;

    sget v1, Lcom/kwad/sdk/R$id;->ksad_live_subscribe_dialog_btn_close:I

    invoke-virtual {v0, v1}, Landroid/view/ViewGroup;->findViewById(I)Landroid/view/View;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/ad/reward/m/m;->zJ:Landroid/view/View;

    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/m;->zI:Landroid/view/ViewGroup;

    sget v1, Lcom/kwad/sdk/R$id;->ksad_live_subscribe_dialog_title:I

    invoke-virtual {v0, v1}, Landroid/view/ViewGroup;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/kwad/components/ad/reward/m/m;->gQ:Landroid/widget/TextView;

    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/m;->zI:Landroid/view/ViewGroup;

    sget v1, Lcom/kwad/sdk/R$id;->ksad_live_subscribe_dialog_icon:I

    invoke-virtual {v0, v1}, Landroid/view/ViewGroup;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/ImageView;

    iput-object v0, p0, Lcom/kwad/components/ad/reward/m/m;->eZ:Landroid/widget/ImageView;

    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/m;->zI:Landroid/view/ViewGroup;

    sget v1, Lcom/kwad/sdk/R$id;->ksad_live_subscribe_dialog_content_txt:I

    invoke-virtual {v0, v1}, Landroid/view/ViewGroup;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/kwad/components/ad/reward/m/m;->zL:Landroid/widget/TextView;

    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/m;->zI:Landroid/view/ViewGroup;

    sget v1, Lcom/kwad/sdk/R$id;->ksad_live_subscribe_dialog_content:I

    invoke-virtual {v0, v1}, Landroid/view/ViewGroup;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/kwad/components/ad/reward/m/m;->zK:Landroid/widget/TextView;

    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/m;->zI:Landroid/view/ViewGroup;

    sget v1, Lcom/kwad/sdk/R$id;->ksad_live_subscribe_dialog_btn_continue:I

    invoke-virtual {v0, v1}, Landroid/view/ViewGroup;->findViewById(I)Landroid/view/View;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/ad/reward/m/m;->zt:Landroid/view/View;

    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/m;->zI:Landroid/view/ViewGroup;

    sget v1, Lcom/kwad/sdk/R$id;->ksad_live_subscribe_dialog_btn_deny:I

    invoke-virtual {v0, v1}, Landroid/view/ViewGroup;->findViewById(I)Landroid/view/View;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/ad/reward/m/m;->zN:Landroid/view/View;

    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/m;->zI:Landroid/view/ViewGroup;

    sget v1, Lcom/kwad/sdk/R$id;->ksad_live_subscribe_dialog_vide_detail:I

    invoke-virtual {v0, v1}, Landroid/view/ViewGroup;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/kwad/components/ad/reward/m/m;->zM:Landroid/widget/TextView;

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/kwad/components/ad/reward/m/m;->zJ:Landroid/view/View;

    const/16 v0, 0x8

    invoke-virtual {p1, v0}, Landroid/view/View;->setVisibility(I)V

    :cond_0
    iget-object p1, p0, Lcom/kwad/components/ad/reward/m/m;->zJ:Landroid/view/View;

    invoke-virtual {p1, p0}, Landroid/view/View;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    iget-object p1, p0, Lcom/kwad/components/ad/reward/m/m;->zt:Landroid/view/View;

    invoke-virtual {p1, p0}, Landroid/view/View;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    iget-object p1, p0, Lcom/kwad/components/ad/reward/m/m;->zN:Landroid/view/View;

    invoke-virtual {p1, p0}, Landroid/view/View;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    iget-object p1, p0, Lcom/kwad/components/ad/reward/m/m;->zM:Landroid/widget/TextView;

    invoke-virtual {p1, p0}, Landroid/widget/TextView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    return-void
.end method


# virtual methods
.method public final a(Lcom/kwad/components/ad/reward/k$c;)V
    .locals 7

    invoke-virtual {p1}, Lcom/kwad/components/ad/reward/k$c;->gu()Ljava/lang/String;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/reward/m/m;->zI:Landroid/view/ViewGroup;

    invoke-virtual {v1}, Landroid/view/ViewGroup;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-virtual {v1}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v1

    sget v2, Lcom/kwad/sdk/R$drawable;->ksad_ic_default_user_avatar:I

    invoke-virtual {v1, v2}, Landroid/content/res/Resources;->getDrawable(I)Landroid/graphics/drawable/Drawable;

    move-result-object v1

    iget-object v2, p0, Lcom/kwad/components/ad/reward/m/m;->eZ:Landroid/widget/ImageView;

    invoke-static {v2, v0, v1}, Lcom/kwad/sdk/core/imageloader/KSImageLoader;->loadCircleIcon(Landroid/widget/ImageView;Ljava/lang/String;Landroid/graphics/drawable/Drawable;)V

    invoke-virtual {p1}, Lcom/kwad/components/ad/reward/k$c;->getTitle()Ljava/lang/String;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/reward/m/m;->gQ:Landroid/widget/TextView;

    if-eqz v1, :cond_0

    if-eqz v0, :cond_0

    new-instance v1, Landroid/text/SpannableString;

    invoke-direct {v1, v0}, Landroid/text/SpannableString;-><init>(Ljava/lang/CharSequence;)V

    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/m/m;->gQ()Landroid/view/ViewGroup;

    move-result-object v2

    invoke-virtual {v2}, Landroid/view/ViewGroup;->getResources()Landroid/content/res/Resources;

    move-result-object v2

    sget v3, Lcom/kwad/sdk/R$color;->ksad_reward_main_color:I

    invoke-virtual {v2, v3}, Landroid/content/res/Resources;->getColor(I)I

    move-result v2

    new-instance v3, Landroid/text/style/ForegroundColorSpan;

    invoke-direct {v3, v2}, Landroid/text/style/ForegroundColorSpan;-><init>(I)V

    const/4 v4, 0x4

    const/16 v5, 0x12

    const/4 v6, 0x2

    invoke-virtual {v1, v3, v6, v4, v5}, Landroid/text/SpannableString;->setSpan(Ljava/lang/Object;III)V

    new-instance v3, Landroid/text/style/ForegroundColorSpan;

    invoke-direct {v3, v2}, Landroid/text/style/ForegroundColorSpan;-><init>(I)V

    invoke-interface {v0}, Ljava/lang/CharSequence;->length()I

    move-result v0

    add-int/lit8 v2, v0, -0x2

    invoke-virtual {v1, v3, v2, v0, v5}, Landroid/text/SpannableString;->setSpan(Ljava/lang/Object;III)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/m;->gQ:Landroid/widget/TextView;

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/m;->zK:Landroid/widget/TextView;

    invoke-virtual {p1}, Lcom/kwad/components/ad/reward/k$c;->gv()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/m;->zL:Landroid/widget/TextView;

    invoke-virtual {p1}, Lcom/kwad/components/ad/reward/k$c;->gw()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/m;->zM:Landroid/widget/TextView;

    const/4 v1, 0x1

    new-array v1, v1, [Ljava/lang/Object;

    const/4 v2, 0x0

    iget-object p1, p1, Lcom/kwad/components/ad/reward/k$c;->qj:Ljava/lang/String;

    aput-object p1, v1, v2

    const-string p1, "%s"

    invoke-static {p1, v1}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    return-void
.end method

.method public final gQ()Landroid/view/ViewGroup;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/m;->zI:Landroid/view/ViewGroup;

    return-object v0
.end method

.method public final onClick(Landroid/view/View;)V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/m;->zJ:Landroid/view/View;

    invoke-virtual {p1, v0}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object p1, p0, Lcom/kwad/components/ad/reward/m/m;->zq:Landroid/app/DialogFragment;

    invoke-virtual {p1}, Landroid/app/DialogFragment;->dismiss()V

    iget-object p1, p0, Lcom/kwad/components/ad/reward/m/m;->qa:Lcom/kwad/components/ad/reward/k$a;

    if-eqz p1, :cond_3

    invoke-interface {p1}, Lcom/kwad/components/ad/reward/k$a;->gp()V

    return-void

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/m;->zt:Landroid/view/View;

    invoke-virtual {p1, v0}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    iget-object p1, p0, Lcom/kwad/components/ad/reward/m/m;->zq:Landroid/app/DialogFragment;

    invoke-virtual {p1}, Landroid/app/DialogFragment;->dismiss()V

    iget-object p1, p0, Lcom/kwad/components/ad/reward/m/m;->qa:Lcom/kwad/components/ad/reward/k$a;

    if-eqz p1, :cond_3

    invoke-interface {p1}, Lcom/kwad/components/ad/reward/k$a;->gp()V

    return-void

    :cond_1
    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/m;->zN:Landroid/view/View;

    invoke-virtual {p1, v0}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_2

    iget-object p1, p0, Lcom/kwad/components/ad/reward/m/m;->zq:Landroid/app/DialogFragment;

    invoke-virtual {p1}, Landroid/app/DialogFragment;->dismiss()V

    iget-object p1, p0, Lcom/kwad/components/ad/reward/m/m;->qa:Lcom/kwad/components/ad/reward/k$a;

    if-eqz p1, :cond_3

    const/4 v0, 0x0

    invoke-interface {p1, v0}, Lcom/kwad/components/ad/reward/k$a;->H(Z)V

    return-void

    :cond_2
    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/m;->zM:Landroid/widget/TextView;

    invoke-virtual {p1, v0}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_3

    iget-object p1, p0, Lcom/kwad/components/ad/reward/m/m;->qa:Lcom/kwad/components/ad/reward/k$a;

    if-eqz p1, :cond_3

    const/16 v0, 0x83

    const/4 v1, 0x2

    invoke-interface {p1, v0, v1}, Lcom/kwad/components/ad/reward/k$a;->g(II)V

    :cond_3
    return-void
.end method
