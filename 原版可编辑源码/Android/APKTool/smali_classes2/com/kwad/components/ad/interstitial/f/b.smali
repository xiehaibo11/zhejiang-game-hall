.class public final Lcom/kwad/components/ad/interstitial/f/b;
.super Lcom/kwad/components/core/n/g;

# interfaces
.implements Landroid/view/View$OnClickListener;


# static fields
.field private static lG:Z


# instance fields
.field private gQ:Landroid/widget/TextView;

.field private jf:Lcom/kwad/components/ad/interstitial/d/c;

.field private lB:Lcom/kwad/components/core/widget/KSCornerImageView;

.field private lC:Landroid/widget/TextView;

.field private lD:Landroid/widget/TextView;

.field private lE:Landroid/widget/TextView;

.field private lF:Landroid/widget/TextView;

.field private mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/core/n/g;-><init>()V

    return-void
.end method

.method public static d(Lcom/kwad/components/ad/interstitial/d/c;)V
    .locals 4

    sget-boolean v0, Lcom/kwad/components/ad/interstitial/f/b;->lG:Z

    if-eqz v0, :cond_0

    return-void

    :cond_0
    const/4 v0, 0x1

    sput-boolean v0, Lcom/kwad/components/ad/interstitial/f/b;->lG:Z

    new-instance v0, Lcom/kwad/components/ad/interstitial/f/b;

    invoke-direct {v0}, Lcom/kwad/components/ad/interstitial/f/b;-><init>()V

    new-instance v1, Landroid/os/Bundle;

    invoke-direct {v1}, Landroid/os/Bundle;-><init>()V

    iget-object v2, p0, Lcom/kwad/components/ad/interstitial/d/c;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-virtual {v2}, Lcom/kwad/sdk/core/response/model/AdTemplate;->toJson()Lorg/json/JSONObject;

    move-result-object v2

    invoke-virtual {v2}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v2

    const-string v3, "KEY_TEMPLATE"

    invoke-virtual {v1, v3, v2}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/interstitial/f/b;->setArguments(Landroid/os/Bundle;)V

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/interstitial/f/b;->e(Lcom/kwad/components/ad/interstitial/d/c;)V

    iget-object p0, p0, Lcom/kwad/components/ad/interstitial/d/c;->hG:Lcom/kwad/components/ad/interstitial/d;

    invoke-virtual {p0}, Lcom/kwad/components/ad/interstitial/d;->getOwnerActivity()Landroid/app/Activity;

    move-result-object p0

    invoke-virtual {p0}, Landroid/app/Activity;->getFragmentManager()Landroid/app/FragmentManager;

    move-result-object p0

    const-string v1, "interstitialCloseDialog"

    invoke-virtual {v0, p0, v1}, Lcom/kwad/components/ad/interstitial/f/b;->show(Landroid/app/FragmentManager;Ljava/lang/String;)V

    return-void
.end method

.method private e(Lcom/kwad/components/ad/interstitial/d/c;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/interstitial/f/b;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    return-void
.end method

.method private i(Landroid/view/View;)V
    .locals 3

    sget v0, Lcom/kwad/sdk/R$id;->ksad_interstitial_intercept_app_icon:I

    invoke-virtual {p1, v0}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Lcom/kwad/components/core/widget/KSCornerImageView;

    iput-object v0, p0, Lcom/kwad/components/ad/interstitial/f/b;->lB:Lcom/kwad/components/core/widget/KSCornerImageView;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_interstitial_intercept_app_title:I

    invoke-virtual {p1, v0}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/kwad/components/ad/interstitial/f/b;->gQ:Landroid/widget/TextView;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_interstitial_intercept_dialog_desc:I

    invoke-virtual {p1, v0}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/kwad/components/ad/interstitial/f/b;->lC:Landroid/widget/TextView;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_interstitial_intercept_dialog_detail:I

    invoke-virtual {p1, v0}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/kwad/components/ad/interstitial/f/b;->lD:Landroid/widget/TextView;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_interstitial_intercept_dialog_btn_continue:I

    invoke-virtual {p1, v0}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/kwad/components/ad/interstitial/f/b;->lE:Landroid/widget/TextView;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_interstitial_intercept_dialog_btn_deny:I

    invoke-virtual {p1, v0}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object p1

    check-cast p1, Landroid/widget/TextView;

    iput-object p1, p0, Lcom/kwad/components/ad/interstitial/f/b;->lF:Landroid/widget/TextView;

    const/4 v0, 0x6

    new-array v0, v0, [Landroid/view/View;

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/f/b;->lB:Lcom/kwad/components/core/widget/KSCornerImageView;

    const/4 v2, 0x0

    aput-object v1, v0, v2

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/f/b;->gQ:Landroid/widget/TextView;

    const/4 v2, 0x1

    aput-object v1, v0, v2

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/f/b;->lC:Landroid/widget/TextView;

    const/4 v2, 0x2

    aput-object v1, v0, v2

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/f/b;->lD:Landroid/widget/TextView;

    const/4 v2, 0x3

    aput-object v1, v0, v2

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/f/b;->lE:Landroid/widget/TextView;

    const/4 v2, 0x4

    aput-object v1, v0, v2

    const/4 v1, 0x5

    aput-object p1, v0, v1

    invoke-static {p0, v0}, Lcom/kwad/sdk/d/a/a;->a(Landroid/view/View$OnClickListener;[Landroid/view/View;)V

    return-void
.end method

.method private initData()V
    .locals 5

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/f/b;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/f/b;->lB:Lcom/kwad/components/core/widget/KSCornerImageView;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->bQ(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v2

    iget-object v3, p0, Lcom/kwad/components/ad/interstitial/f/b;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    const/16 v4, 0xc

    invoke-static {v1, v2, v3, v4}, Lcom/kwad/sdk/core/imageloader/KSImageLoader;->loadAppIcon(Landroid/widget/ImageView;Ljava/lang/String;Lcom/kwad/sdk/core/response/model/AdTemplate;I)V

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/f/b;->gQ:Landroid/widget/TextView;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->bO(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/f/b;->lC:Landroid/widget/TextView;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->an(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/f/b;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v1}, Lcom/kwad/sdk/core/response/b/a;->aN(Lcom/kwad/sdk/core/response/model/AdTemplate;)Z

    move-result v1

    if-eqz v1, :cond_0

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/f/b;->lD:Landroid/widget/TextView;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->aw(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v1, v0}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    :cond_0
    return-void
.end method


# virtual methods
.method public final a(Landroid/view/LayoutInflater;Landroid/view/ViewGroup;)Landroid/view/View;
    .locals 3

    invoke-virtual {p0}, Lcom/kwad/components/ad/interstitial/f/b;->getArguments()Landroid/os/Bundle;

    move-result-object v0

    const-string v1, "KEY_TEMPLATE"

    invoke-virtual {v0, v1}, Landroid/os/Bundle;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    :try_start_0
    new-instance v1, Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-direct {v1}, Lcom/kwad/sdk/core/response/model/AdTemplate;-><init>()V

    iput-object v1, p0, Lcom/kwad/components/ad/interstitial/f/b;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    new-instance v2, Lorg/json/JSONObject;

    invoke-direct {v2, v0}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-virtual {v1, v2}, Lcom/kwad/sdk/core/response/model/AdTemplate;->parseJson(Lorg/json/JSONObject;)V
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    invoke-virtual {v0}, Lorg/json/JSONException;->printStackTrace()V

    :goto_0
    sget v0, Lcom/kwad/sdk/R$layout;->ksad_interstitial_exit_intercept_dialog:I

    invoke-virtual {p1, v0, p2}, Landroid/view/LayoutInflater;->inflate(ILandroid/view/ViewGroup;)Landroid/view/View;

    move-result-object p1

    invoke-direct {p0, p1}, Lcom/kwad/components/ad/interstitial/f/b;->i(Landroid/view/View;)V

    invoke-direct {p0}, Lcom/kwad/components/ad/interstitial/f/b;->initData()V

    return-object p1
.end method

.method public final onActivityCreated(Landroid/os/Bundle;)V
    .locals 3

    invoke-super {p0, p1}, Lcom/kwad/components/core/n/g;->onActivityCreated(Landroid/os/Bundle;)V

    invoke-virtual {p0}, Lcom/kwad/components/ad/interstitial/f/b;->getDialog()Landroid/app/Dialog;

    move-result-object p1

    invoke-virtual {p1}, Landroid/app/Dialog;->getWindow()Landroid/view/Window;

    move-result-object p1

    if-nez p1, :cond_0

    return-void

    :cond_0
    invoke-virtual {p0}, Lcom/kwad/components/ad/interstitial/f/b;->getDialog()Landroid/app/Dialog;

    move-result-object v0

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/app/Dialog;->setCanceledOnTouchOutside(Z)V

    const/4 v0, -0x1

    invoke-virtual {p1, v0, v0}, Landroid/view/Window;->setLayout(II)V

    invoke-virtual {p0}, Lcom/kwad/components/ad/interstitial/f/b;->getDialog()Landroid/app/Dialog;

    move-result-object p1

    invoke-virtual {p1}, Landroid/app/Dialog;->getWindow()Landroid/view/Window;

    move-result-object p1

    new-instance v0, Landroid/graphics/drawable/ColorDrawable;

    invoke-direct {v0, v1}, Landroid/graphics/drawable/ColorDrawable;-><init>(I)V

    invoke-virtual {p1, v0}, Landroid/view/Window;->setBackgroundDrawable(Landroid/graphics/drawable/Drawable;)V

    invoke-virtual {p0, v1}, Lcom/kwad/components/ad/interstitial/f/b;->setCancelable(Z)V

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/f/b;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    if-eqz p1, :cond_1

    iget-object p1, p1, Lcom/kwad/components/ad/interstitial/d/c;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    new-instance v1, Lcom/kwad/sdk/core/report/j;

    invoke-direct {v1}, Lcom/kwad/sdk/core/report/j;-><init>()V

    const/16 v2, 0x95

    invoke-virtual {v1, v2}, Lcom/kwad/sdk/core/report/j;->ci(I)Lcom/kwad/sdk/core/report/j;

    move-result-object v1

    const/16 v2, 0x9

    invoke-virtual {v1, v2}, Lcom/kwad/sdk/core/report/j;->ck(I)Lcom/kwad/sdk/core/report/j;

    move-result-object v1

    invoke-static {p1, v0, v1}, Lcom/kwad/sdk/core/report/a;->d(Lcom/kwad/sdk/core/response/model/AdTemplate;Lorg/json/JSONObject;Lcom/kwad/sdk/core/report/j;)V

    :cond_1
    return-void
.end method

.method public final onClick(Landroid/view/View;)V
    .locals 5

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/f/b;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    const/4 v1, 0x0

    if-eqz v0, :cond_5

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/f/b;->lB:Lcom/kwad/components/core/widget/KSCornerImageView;

    invoke-virtual {p1, v0}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result v0

    const/4 v2, 0x2

    const/16 v3, 0x9

    if-eqz v0, :cond_0

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/f/b;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    iget-object v0, p1, Lcom/kwad/components/ad/interstitial/d/c;->hG:Lcom/kwad/components/ad/interstitial/d;

    invoke-virtual {v0}, Lcom/kwad/components/ad/interstitial/d;->getContext()Landroid/content/Context;

    move-result-object v0

    const/16 v4, 0x7f

    :goto_0
    invoke-virtual {p1, v0, v4, v2, v3}, Lcom/kwad/components/ad/interstitial/d/c;->a(Landroid/content/Context;III)V

    goto/16 :goto_1

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/f/b;->gQ:Landroid/widget/TextView;

    invoke-virtual {p1, v0}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/f/b;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    iget-object v0, p1, Lcom/kwad/components/ad/interstitial/d/c;->hG:Lcom/kwad/components/ad/interstitial/d;

    invoke-virtual {v0}, Lcom/kwad/components/ad/interstitial/d;->getContext()Landroid/content/Context;

    move-result-object v0

    const/16 v4, 0x80

    goto :goto_0

    :cond_1
    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/f/b;->lC:Landroid/widget/TextView;

    invoke-virtual {p1, v0}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_2

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/f/b;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    iget-object v0, p1, Lcom/kwad/components/ad/interstitial/d/c;->hG:Lcom/kwad/components/ad/interstitial/d;

    invoke-virtual {v0}, Lcom/kwad/components/ad/interstitial/d;->getContext()Landroid/content/Context;

    move-result-object v0

    const/16 v4, 0x81

    goto :goto_0

    :cond_2
    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/f/b;->lD:Landroid/widget/TextView;

    invoke-virtual {p1, v0}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_3

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/f/b;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    iget-object v0, p1, Lcom/kwad/components/ad/interstitial/d/c;->hG:Lcom/kwad/components/ad/interstitial/d;

    invoke-virtual {v0}, Lcom/kwad/components/ad/interstitial/d;->getContext()Landroid/content/Context;

    move-result-object v0

    const/16 v4, 0x83

    goto :goto_0

    :cond_3
    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/f/b;->lE:Landroid/widget/TextView;

    invoke-virtual {p1, v0}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_4

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/f/b;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    iget-object p1, p1, Lcom/kwad/components/ad/interstitial/d/c;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    const/4 v0, 0x0

    new-instance v2, Lcom/kwad/sdk/core/report/j;

    invoke-direct {v2}, Lcom/kwad/sdk/core/report/j;-><init>()V

    invoke-virtual {v2, v3}, Lcom/kwad/sdk/core/report/j;->ck(I)Lcom/kwad/sdk/core/report/j;

    move-result-object v2

    invoke-static {p1, v0, v2}, Lcom/kwad/sdk/core/report/a;->c(Lcom/kwad/sdk/core/response/model/AdTemplate;Lorg/json/JSONObject;Lcom/kwad/sdk/core/report/j;)V

    goto :goto_1

    :cond_4
    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/f/b;->lF:Landroid/widget/TextView;

    invoke-virtual {p1, v0}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_5

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/f/b;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    const/4 v0, -0x1

    iget-object v2, p1, Lcom/kwad/components/ad/interstitial/d/c;->ex:Lcom/kwad/sdk/core/video/videoview/a;

    invoke-virtual {p1, v1, v0, v2}, Lcom/kwad/components/ad/interstitial/d/c;->a(ZILcom/kwad/sdk/core/video/videoview/a;)V

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/f/b;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    iget-object p1, p1, Lcom/kwad/components/ad/interstitial/d/c;->hG:Lcom/kwad/components/ad/interstitial/d;

    invoke-virtual {p1}, Lcom/kwad/components/ad/interstitial/d;->dismiss()V

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/f/b;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    iget-object p1, p1, Lcom/kwad/components/ad/interstitial/d/c;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    new-instance v0, Lcom/kwad/sdk/core/report/j;

    invoke-direct {v0}, Lcom/kwad/sdk/core/report/j;-><init>()V

    const/16 v2, 0x97

    invoke-virtual {v0, v2}, Lcom/kwad/sdk/core/report/j;->ci(I)Lcom/kwad/sdk/core/report/j;

    move-result-object v0

    invoke-virtual {v0, v3}, Lcom/kwad/sdk/core/report/j;->ck(I)Lcom/kwad/sdk/core/report/j;

    move-result-object v0

    invoke-static {p1, v0}, Lcom/kwad/sdk/core/report/a;->a(Lcom/kwad/sdk/core/response/model/AdTemplate;Lcom/kwad/sdk/core/report/j;)V

    :cond_5
    :goto_1
    invoke-virtual {p0}, Lcom/kwad/components/ad/interstitial/f/b;->dismiss()V

    sput-boolean v1, Lcom/kwad/components/ad/interstitial/f/b;->lG:Z

    return-void
.end method
