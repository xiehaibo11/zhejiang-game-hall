.class public final Lcom/kwad/components/ad/reward/b/b;
.super Lcom/kwad/components/core/n/g;

# interfaces
.implements Lcom/kwad/components/ad/reward/b/a$b;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/components/ad/reward/b/b$a;
    }
.end annotation


# instance fields
.field private mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

.field private qS:[I

.field private ri:Lcom/kwad/components/ad/reward/b/a;

.field private rj:Lcom/kwad/components/ad/reward/b/b$a;


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/core/n/g;-><init>()V

    return-void
.end method

.method public static a(Landroid/app/Activity;Lcom/kwad/sdk/core/response/model/AdTemplate;Lcom/kwad/components/ad/reward/b/b$a;[I)V
    .locals 2

    if-eqz p1, :cond_1

    if-nez p0, :cond_0

    goto :goto_0

    :cond_0
    invoke-virtual {p1}, Lcom/kwad/sdk/core/response/model/AdTemplate;->toJson()Lorg/json/JSONObject;

    move-result-object p1

    invoke-virtual {p1}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p1

    new-instance v0, Landroid/os/Bundle;

    invoke-direct {v0}, Landroid/os/Bundle;-><init>()V

    const-string v1, "key_template_json"

    invoke-virtual {v0, v1, p1}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    const-string p1, "key_end_location"

    invoke-virtual {v0, p1, p3}, Landroid/os/Bundle;->putIntArray(Ljava/lang/String;[I)V

    new-instance p1, Lcom/kwad/components/ad/reward/b/b;

    invoke-direct {p1}, Lcom/kwad/components/ad/reward/b/b;-><init>()V

    invoke-direct {p1, p2}, Lcom/kwad/components/ad/reward/b/b;->a(Lcom/kwad/components/ad/reward/b/b$a;)V

    invoke-virtual {p1, v0}, Lcom/kwad/components/ad/reward/b/b;->setArguments(Landroid/os/Bundle;)V

    invoke-virtual {p0}, Landroid/app/Activity;->getFragmentManager()Landroid/app/FragmentManager;

    move-result-object p0

    const-string p2, "rewardCoupon"

    invoke-virtual {p1, p0, p2}, Lcom/kwad/components/ad/reward/b/b;->show(Landroid/app/FragmentManager;Ljava/lang/String;)V

    :cond_1
    :goto_0
    return-void
.end method

.method private a(Lcom/kwad/components/ad/reward/b/b$a;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/reward/b/b;->rj:Lcom/kwad/components/ad/reward/b/b$a;

    return-void
.end method


# virtual methods
.method public final a(Landroid/view/LayoutInflater;Landroid/view/ViewGroup;)Landroid/view/View;
    .locals 2

    new-instance v0, Lcom/kwad/components/ad/reward/b/a;

    invoke-virtual {p1}, Landroid/view/LayoutInflater;->getContext()Landroid/content/Context;

    move-result-object p1

    iget-object v1, p0, Lcom/kwad/components/ad/reward/b/b;->qS:[I

    invoke-direct {v0, p1, p2, v1}, Lcom/kwad/components/ad/reward/b/a;-><init>(Landroid/content/Context;Landroid/view/ViewGroup;[I)V

    iput-object v0, p0, Lcom/kwad/components/ad/reward/b/b;->ri:Lcom/kwad/components/ad/reward/b/a;

    invoke-virtual {v0, p0}, Lcom/kwad/components/ad/reward/b/a;->a(Lcom/kwad/components/ad/reward/b/a$b;)V

    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/b/b;->getDialog()Landroid/app/Dialog;

    move-result-object p1

    invoke-virtual {p1}, Landroid/app/Dialog;->getWindow()Landroid/view/Window;

    move-result-object p1

    if-eqz p1, :cond_0

    invoke-virtual {p1}, Landroid/view/Window;->getDecorView()Landroid/view/View;

    move-result-object p2

    const/4 v0, 0x0

    invoke-virtual {p2, v0, v0, v0, v0}, Landroid/view/View;->setPadding(IIII)V

    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/b/b;->getDialog()Landroid/app/Dialog;

    move-result-object p2

    invoke-virtual {p2, v0}, Landroid/app/Dialog;->setCanceledOnTouchOutside(Z)V

    const/4 p2, -0x1

    invoke-virtual {p1, p2, p2}, Landroid/view/Window;->setLayout(II)V

    const/4 p2, 0x0

    invoke-virtual {p1, p2}, Landroid/view/Window;->setDimAmount(F)V

    new-instance p2, Landroid/graphics/drawable/ColorDrawable;

    invoke-direct {p2, v0}, Landroid/graphics/drawable/ColorDrawable;-><init>(I)V

    invoke-virtual {p1, p2}, Landroid/view/Window;->setBackgroundDrawable(Landroid/graphics/drawable/Drawable;)V

    :cond_0
    iget-object p1, p0, Lcom/kwad/components/ad/reward/b/b;->ri:Lcom/kwad/components/ad/reward/b/a;

    iget-object p2, p0, Lcom/kwad/components/ad/reward/b/b;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {p2}, Lcom/kwad/components/ad/reward/m/r;->C(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/components/ad/reward/m/r;

    move-result-object p2

    invoke-virtual {p1, p2}, Lcom/kwad/components/ad/reward/b/a;->b(Lcom/kwad/components/ad/reward/m/r;)V

    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/b/b;->getDialog()Landroid/app/Dialog;

    move-result-object p1

    new-instance p2, Lcom/kwad/components/ad/reward/b/b$1;

    invoke-direct {p2, p0}, Lcom/kwad/components/ad/reward/b/b$1;-><init>(Lcom/kwad/components/ad/reward/b/b;)V

    invoke-virtual {p1, p2}, Landroid/app/Dialog;->setOnKeyListener(Landroid/content/DialogInterface$OnKeyListener;)V

    iget-object p1, p0, Lcom/kwad/components/ad/reward/b/b;->ri:Lcom/kwad/components/ad/reward/b/a;

    invoke-virtual {p1}, Lcom/kwad/components/ad/reward/b/a;->gQ()Landroid/view/ViewGroup;

    move-result-object p1

    return-object p1
.end method

.method public final gU()V
    .locals 1

    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/b/b;->dismiss()V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/b/b;->rj:Lcom/kwad/components/ad/reward/b/b$a;

    if-eqz v0, :cond_0

    invoke-interface {v0}, Lcom/kwad/components/ad/reward/b/b$a;->gU()V

    :cond_0
    return-void
.end method

.method public final gV()V
    .locals 0

    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/b/b;->dismiss()V

    return-void
.end method

.method public final onCreate(Landroid/os/Bundle;)V
    .locals 3

    invoke-super {p0, p1}, Lcom/kwad/components/core/n/g;->onCreate(Landroid/os/Bundle;)V

    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/b/b;->getArguments()Landroid/os/Bundle;

    move-result-object p1

    if-eqz p1, :cond_1

    const-string v0, "key_template_json"

    invoke-virtual {p1, v0}, Landroid/os/Bundle;->containsKey(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_0

    :try_start_0
    invoke-virtual {p1, v0}, Landroid/os/Bundle;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    new-instance v1, Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-direct {v1}, Lcom/kwad/sdk/core/response/model/AdTemplate;-><init>()V

    iput-object v1, p0, Lcom/kwad/components/ad/reward/b/b;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    new-instance v2, Lorg/json/JSONObject;

    invoke-direct {v2, v0}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-virtual {v1, v2}, Lcom/kwad/sdk/core/response/model/AdTemplate;->parseJson(Lorg/json/JSONObject;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    invoke-static {v0}, Lcom/kwad/sdk/core/e/c;->printStackTraceOnly(Ljava/lang/Throwable;)V

    :cond_0
    :goto_0
    const-string v0, "key_end_location"

    invoke-virtual {p1, v0}, Landroid/os/Bundle;->containsKey(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-virtual {p1, v0}, Landroid/os/Bundle;->getIntArray(Ljava/lang/String;)[I

    move-result-object p1

    iput-object p1, p0, Lcom/kwad/components/ad/reward/b/b;->qS:[I

    :cond_1
    return-void
.end method
