.class public Lcom/kwad/components/core/webview/b/c/d;
.super Lcom/kwad/components/core/n/g;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/components/core/webview/b/c/d$a;,
        Lcom/kwad/components/core/webview/b/c/d$b;
    }
.end annotation


# instance fields
.field public QM:Lcom/kwad/components/core/webview/b/e/c;

.field protected QO:Lcom/kwad/components/offline/api/tk/model/StyleTemplate;

.field protected Xl:Lcom/kwad/components/core/webview/b/c/b;

.field protected Xn:Lcom/kwad/sdk/components/g;

.field public Xo:Z

.field public Xp:Lcom/kwad/components/core/webview/b/c/d$a;

.field private Xs:Lcom/kwad/components/core/webview/b/e/d;

.field private Xu:Lcom/kwad/sdk/widget/KSFrameLayout;

.field protected Xv:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Landroid/content/DialogInterface$OnDismissListener;",
            ">;"
        }
    .end annotation
.end field

.field public Xw:Z

.field public mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

.field private mPresenter:Lcom/kwad/sdk/mvp/Presenter;

.field public xD:Ljava/lang/String;


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Lcom/kwad/components/core/n/g;-><init>()V

    new-instance v0, Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-direct {v0}, Ljava/util/concurrent/CopyOnWriteArrayList;-><init>()V

    iput-object v0, p0, Lcom/kwad/components/core/webview/b/c/d;->Xv:Ljava/util/List;

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/kwad/components/core/webview/b/c/d;->Xw:Z

    return-void
.end method

.method private ad()Lcom/kwad/sdk/mvp/Presenter;
    .locals 2

    new-instance v0, Lcom/kwad/sdk/mvp/Presenter;

    invoke-direct {v0}, Lcom/kwad/sdk/mvp/Presenter;-><init>()V

    iput-object v0, p0, Lcom/kwad/components/core/webview/b/c/d;->mPresenter:Lcom/kwad/sdk/mvp/Presenter;

    invoke-virtual {p0}, Lcom/kwad/components/core/webview/b/c/d;->jr()Lcom/kwad/components/core/webview/b/c/c;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/mvp/Presenter;->a(Lcom/kwad/sdk/mvp/Presenter;)V

    iget-object v0, p0, Lcom/kwad/components/core/webview/b/c/d;->mPresenter:Lcom/kwad/sdk/mvp/Presenter;

    return-object v0
.end method

.method public static b(Lcom/kwad/components/core/webview/b/c/d$b;)Lcom/kwad/components/core/webview/b/c/d;
    .locals 3

    new-instance v0, Lcom/kwad/components/core/webview/b/c/d;

    invoke-direct {v0}, Lcom/kwad/components/core/webview/b/c/d;-><init>()V

    invoke-virtual {p0}, Lcom/kwad/components/core/webview/b/c/d$b;->getAdTemplate()Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object v1

    iput-object v1, v0, Lcom/kwad/components/core/webview/b/c/d;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-virtual {p0}, Lcom/kwad/components/core/webview/b/c/d$b;->getTemplateId()Ljava/lang/String;

    move-result-object v1

    iput-object v1, v0, Lcom/kwad/components/core/webview/b/c/d;->xD:Ljava/lang/String;

    invoke-static {p0}, Lcom/kwad/components/core/webview/b/c/d$b;->c(Lcom/kwad/components/core/webview/b/c/d$b;)Z

    move-result v1

    iput-boolean v1, v0, Lcom/kwad/components/core/webview/b/c/d;->Xo:Z

    invoke-static {p0}, Lcom/kwad/components/core/webview/b/c/d$b;->d(Lcom/kwad/components/core/webview/b/c/d$b;)Z

    move-result v1

    iput-boolean v1, v0, Lcom/kwad/components/core/webview/b/c/d;->Xw:Z

    invoke-static {p0}, Lcom/kwad/components/core/webview/b/c/d$b;->e(Lcom/kwad/components/core/webview/b/c/d$b;)Lcom/kwad/components/offline/api/tk/model/StyleTemplate;

    move-result-object v1

    iput-object v1, v0, Lcom/kwad/components/core/webview/b/c/d;->QO:Lcom/kwad/components/offline/api/tk/model/StyleTemplate;

    invoke-static {p0}, Lcom/kwad/components/core/webview/b/c/d$b;->f(Lcom/kwad/components/core/webview/b/c/d$b;)Lcom/kwad/sdk/components/g;

    move-result-object v1

    iput-object v1, v0, Lcom/kwad/components/core/webview/b/c/d;->Xn:Lcom/kwad/sdk/components/g;

    new-instance v1, Landroid/os/Bundle;

    invoke-direct {v1}, Landroid/os/Bundle;-><init>()V

    invoke-virtual {p0}, Lcom/kwad/components/core/webview/b/c/d$b;->getTemplateId()Ljava/lang/String;

    move-result-object p0

    const-string v2, "templateId"

    invoke-virtual {v1, v2, p0}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/webview/b/c/d;->setArguments(Landroid/os/Bundle;)V

    return-object v0
.end method

.method private y(Landroid/view/View;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/webview/b/c/d;->mPresenter:Lcom/kwad/sdk/mvp/Presenter;

    if-nez v0, :cond_0

    invoke-direct {p0}, Lcom/kwad/components/core/webview/b/c/d;->ad()Lcom/kwad/sdk/mvp/Presenter;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/core/webview/b/c/d;->mPresenter:Lcom/kwad/sdk/mvp/Presenter;

    invoke-virtual {v0, p1}, Lcom/kwad/sdk/mvp/Presenter;->F(Landroid/view/View;)V

    invoke-virtual {p0}, Lcom/kwad/components/core/webview/b/c/d;->jq()Lcom/kwad/components/core/webview/b/c/b;

    move-result-object p1

    iput-object p1, p0, Lcom/kwad/components/core/webview/b/c/d;->Xl:Lcom/kwad/components/core/webview/b/c/b;

    :cond_0
    invoke-virtual {p0}, Lcom/kwad/components/core/webview/b/c/d;->js()V

    iget-object p1, p0, Lcom/kwad/components/core/webview/b/c/d;->mPresenter:Lcom/kwad/sdk/mvp/Presenter;

    iget-object v0, p0, Lcom/kwad/components/core/webview/b/c/d;->Xl:Lcom/kwad/components/core/webview/b/c/b;

    invoke-virtual {p1, v0}, Lcom/kwad/sdk/mvp/Presenter;->k(Ljava/lang/Object;)V

    return-void
.end method


# virtual methods
.method public final a(Landroid/view/LayoutInflater;Landroid/view/ViewGroup;)Landroid/view/View;
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/core/webview/b/c/d;->Xu:Lcom/kwad/sdk/widget/KSFrameLayout;

    if-nez v0, :cond_0

    sget v0, Lcom/kwad/sdk/R$layout;->ksad_video_tk_dialog_layout:I

    const/4 v1, 0x0

    invoke-virtual {p1, v0, p2, v1}, Landroid/view/LayoutInflater;->inflate(ILandroid/view/ViewGroup;Z)Landroid/view/View;

    move-result-object p1

    check-cast p1, Lcom/kwad/sdk/widget/KSFrameLayout;

    iput-object p1, p0, Lcom/kwad/components/core/webview/b/c/d;->Xu:Lcom/kwad/sdk/widget/KSFrameLayout;

    :cond_0
    iget-object p1, p0, Lcom/kwad/components/core/webview/b/c/d;->Xu:Lcom/kwad/sdk/widget/KSFrameLayout;

    return-object p1
.end method

.method public final a(Lcom/kwad/components/core/webview/b/e/d;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/core/webview/b/c/d;->Xs:Lcom/kwad/components/core/webview/b/e/d;

    return-void
.end method

.method public final d(Landroid/content/DialogInterface$OnDismissListener;)V
    .locals 1

    if-eqz p1, :cond_0

    iget-object v0, p0, Lcom/kwad/components/core/webview/b/c/d;->Xv:Ljava/util/List;

    invoke-interface {v0, p1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    :cond_0
    return-void
.end method

.method public final e(Landroid/content/DialogInterface$OnDismissListener;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/webview/b/c/d;->Xv:Ljava/util/List;

    invoke-interface {v0, p1}, Ljava/util/List;->remove(Ljava/lang/Object;)Z

    return-void
.end method

.method protected jq()Lcom/kwad/components/core/webview/b/c/b;
    .locals 1

    new-instance v0, Lcom/kwad/components/core/webview/b/c/b;

    invoke-direct {v0}, Lcom/kwad/components/core/webview/b/c/b;-><init>()V

    return-object v0
.end method

.method protected jr()Lcom/kwad/components/core/webview/b/c/c;
    .locals 1

    new-instance v0, Lcom/kwad/components/core/webview/b/c/c;

    invoke-direct {v0}, Lcom/kwad/components/core/webview/b/c/c;-><init>()V

    return-object v0
.end method

.method protected js()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/core/webview/b/c/d;->Xl:Lcom/kwad/components/core/webview/b/c/b;

    invoke-virtual {p0}, Lcom/kwad/components/core/webview/b/c/d;->getActivity()Landroid/app/Activity;

    move-result-object v1

    iput-object v1, v0, Lcom/kwad/components/core/webview/b/c/b;->mActivity:Landroid/app/Activity;

    iget-object v0, p0, Lcom/kwad/components/core/webview/b/c/d;->Xl:Lcom/kwad/components/core/webview/b/c/b;

    iput-object p0, v0, Lcom/kwad/components/core/webview/b/c/b;->VP:Lcom/kwad/components/core/webview/b/c/d;

    iget-object v0, p0, Lcom/kwad/components/core/webview/b/c/d;->Xl:Lcom/kwad/components/core/webview/b/c/b;

    iget-object v1, p0, Lcom/kwad/components/core/webview/b/c/d;->Xu:Lcom/kwad/sdk/widget/KSFrameLayout;

    iput-object v1, v0, Lcom/kwad/components/core/webview/b/c/b;->Xm:Lcom/kwad/sdk/widget/e;

    iget-object v0, p0, Lcom/kwad/components/core/webview/b/c/d;->Xl:Lcom/kwad/components/core/webview/b/c/b;

    iget-object v1, p0, Lcom/kwad/components/core/webview/b/c/d;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iput-object v1, v0, Lcom/kwad/components/core/webview/b/c/b;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget-object v0, p0, Lcom/kwad/components/core/webview/b/c/d;->Xl:Lcom/kwad/components/core/webview/b/c/b;

    iget-object v1, p0, Lcom/kwad/components/core/webview/b/c/d;->xD:Ljava/lang/String;

    iput-object v1, v0, Lcom/kwad/components/core/webview/b/c/b;->xD:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/components/core/webview/b/c/d;->Xl:Lcom/kwad/components/core/webview/b/c/b;

    iget-object v1, p0, Lcom/kwad/components/core/webview/b/c/d;->QO:Lcom/kwad/components/offline/api/tk/model/StyleTemplate;

    iput-object v1, v0, Lcom/kwad/components/core/webview/b/c/b;->QO:Lcom/kwad/components/offline/api/tk/model/StyleTemplate;

    iget-object v0, p0, Lcom/kwad/components/core/webview/b/c/d;->Xl:Lcom/kwad/components/core/webview/b/c/b;

    iget-boolean v1, p0, Lcom/kwad/components/core/webview/b/c/d;->Xo:Z

    iput-boolean v1, v0, Lcom/kwad/components/core/webview/b/c/b;->Xo:Z

    iget-object v0, p0, Lcom/kwad/components/core/webview/b/c/d;->Xl:Lcom/kwad/components/core/webview/b/c/b;

    iget-object v1, p0, Lcom/kwad/components/core/webview/b/c/d;->Xn:Lcom/kwad/sdk/components/g;

    iput-object v1, v0, Lcom/kwad/components/core/webview/b/c/b;->Xn:Lcom/kwad/sdk/components/g;

    iget-object v0, p0, Lcom/kwad/components/core/webview/b/c/d;->Xl:Lcom/kwad/components/core/webview/b/c/b;

    iget-object v1, p0, Lcom/kwad/components/core/webview/b/c/d;->Xp:Lcom/kwad/components/core/webview/b/c/d$a;

    iput-object v1, v0, Lcom/kwad/components/core/webview/b/c/b;->Xp:Lcom/kwad/components/core/webview/b/c/d$a;

    iget-object v0, p0, Lcom/kwad/components/core/webview/b/c/d;->Xl:Lcom/kwad/components/core/webview/b/c/b;

    iget-object v1, p0, Lcom/kwad/components/core/webview/b/c/d;->QM:Lcom/kwad/components/core/webview/b/e/c;

    iput-object v1, v0, Lcom/kwad/components/core/webview/b/c/b;->QM:Lcom/kwad/components/core/webview/b/e/c;

    return-void
.end method

.method public onActivityCreated(Landroid/os/Bundle;)V
    .locals 3

    :try_start_0
    invoke-super {p0, p1}, Lcom/kwad/components/core/n/g;->onActivityCreated(Landroid/os/Bundle;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    invoke-virtual {p0}, Lcom/kwad/components/core/webview/b/c/d;->getDialog()Landroid/app/Dialog;

    move-result-object p1

    if-nez p1, :cond_0

    return-void

    :cond_0
    invoke-virtual {p0}, Lcom/kwad/components/core/webview/b/c/d;->getDialog()Landroid/app/Dialog;

    move-result-object p1

    invoke-virtual {p1}, Landroid/app/Dialog;->getWindow()Landroid/view/Window;

    move-result-object p1

    if-nez p1, :cond_1

    return-void

    :cond_1
    invoke-virtual {p1}, Landroid/view/Window;->getAttributes()Landroid/view/WindowManager$LayoutParams;

    move-result-object v0

    const/4 v1, 0x0

    iput v1, v0, Landroid/view/WindowManager$LayoutParams;->dimAmount:F

    invoke-virtual {p1, v0}, Landroid/view/Window;->setAttributes(Landroid/view/WindowManager$LayoutParams;)V

    invoke-virtual {p0}, Lcom/kwad/components/core/webview/b/c/d;->getDialog()Landroid/app/Dialog;

    move-result-object v0

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/app/Dialog;->setCanceledOnTouchOutside(Z)V

    invoke-virtual {p1}, Landroid/view/Window;->getDecorView()Landroid/view/View;

    move-result-object v0

    invoke-virtual {v0, v1, v1, v1, v1}, Landroid/view/View;->setPadding(IIII)V

    const/4 v0, -0x1

    invoke-virtual {p1, v0, v0}, Landroid/view/Window;->setLayout(II)V

    invoke-virtual {p0}, Lcom/kwad/components/core/webview/b/c/d;->getDialog()Landroid/app/Dialog;

    move-result-object v0

    invoke-virtual {v0}, Landroid/app/Dialog;->getWindow()Landroid/view/Window;

    move-result-object v0

    new-instance v2, Landroid/graphics/drawable/ColorDrawable;

    invoke-direct {v2, v1}, Landroid/graphics/drawable/ColorDrawable;-><init>(I)V

    invoke-virtual {v0, v2}, Landroid/view/Window;->setBackgroundDrawable(Landroid/graphics/drawable/Drawable;)V

    const/16 v0, 0x10

    invoke-virtual {p1, v0}, Landroid/view/Window;->setSoftInputMode(I)V

    iget-boolean v0, p0, Lcom/kwad/components/core/webview/b/c/d;->Xw:Z

    if-eqz v0, :cond_2

    invoke-virtual {p0}, Lcom/kwad/components/core/webview/b/c/d;->getDialog()Landroid/app/Dialog;

    move-result-object v0

    new-instance v1, Lcom/kwad/components/core/webview/b/c/d$1;

    invoke-direct {v1, p0}, Lcom/kwad/components/core/webview/b/c/d$1;-><init>(Lcom/kwad/components/core/webview/b/c/d;)V

    invoke-virtual {v0, v1}, Landroid/app/Dialog;->setOnKeyListener(Landroid/content/DialogInterface$OnKeyListener;)V

    :cond_2
    const/16 v0, 0x400

    invoke-virtual {p1, v0, v0}, Landroid/view/Window;->setFlags(II)V

    iget-boolean p1, p0, Lcom/kwad/components/core/webview/b/c/d;->Xw:Z

    if-eqz p1, :cond_3

    invoke-virtual {p0}, Lcom/kwad/components/core/webview/b/c/d;->getDialog()Landroid/app/Dialog;

    move-result-object p1

    new-instance v0, Lcom/kwad/components/core/webview/b/c/d$2;

    invoke-direct {v0, p0}, Lcom/kwad/components/core/webview/b/c/d$2;-><init>(Lcom/kwad/components/core/webview/b/c/d;)V

    invoke-virtual {p1, v0}, Landroid/app/Dialog;->setOnKeyListener(Landroid/content/DialogInterface$OnKeyListener;)V

    :cond_3
    return-void
.end method

.method public onCreate(Landroid/os/Bundle;)V
    .locals 1

    invoke-super {p0, p1}, Lcom/kwad/components/core/n/g;->onCreate(Landroid/os/Bundle;)V

    invoke-virtual {p0}, Lcom/kwad/components/core/webview/b/c/d;->getArguments()Landroid/os/Bundle;

    move-result-object p1

    const-string v0, "templateId"

    invoke-virtual {p1, v0}, Landroid/os/Bundle;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/kwad/components/core/webview/b/c/d;->xD:Ljava/lang/String;

    return-void
.end method

.method public onDestroy()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/core/n/g;->onDestroy()V

    iget-object v0, p0, Lcom/kwad/components/core/webview/b/c/d;->mPresenter:Lcom/kwad/sdk/mvp/Presenter;

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/kwad/sdk/mvp/Presenter;->destroy()V

    iput-object v1, p0, Lcom/kwad/components/core/webview/b/c/d;->mPresenter:Lcom/kwad/sdk/mvp/Presenter;

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/core/webview/b/c/d;->Xl:Lcom/kwad/components/core/webview/b/c/b;

    if-eqz v0, :cond_1

    invoke-virtual {v0}, Lcom/kwad/components/core/webview/b/c/b;->release()V

    iput-object v1, p0, Lcom/kwad/components/core/webview/b/c/d;->Xl:Lcom/kwad/components/core/webview/b/c/b;

    :cond_1
    return-void
.end method

.method public onDestroyView()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/core/n/g;->onDestroyView()V

    iget-object v0, p0, Lcom/kwad/components/core/webview/b/c/d;->Xu:Lcom/kwad/sdk/widget/KSFrameLayout;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/kwad/sdk/widget/KSFrameLayout;->getParent()Landroid/view/ViewParent;

    move-result-object v0

    instance-of v0, v0, Landroid/view/ViewGroup;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/core/webview/b/c/d;->Xu:Lcom/kwad/sdk/widget/KSFrameLayout;

    invoke-virtual {v0}, Lcom/kwad/sdk/widget/KSFrameLayout;->getParent()Landroid/view/ViewParent;

    move-result-object v0

    check-cast v0, Landroid/view/ViewGroup;

    iget-object v1, p0, Lcom/kwad/components/core/webview/b/c/d;->Xu:Lcom/kwad/sdk/widget/KSFrameLayout;

    invoke-virtual {v0, v1}, Landroid/view/ViewGroup;->removeView(Landroid/view/View;)V

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/kwad/components/core/webview/b/c/d;->Xu:Lcom/kwad/sdk/widget/KSFrameLayout;

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/core/webview/b/c/d;->Xs:Lcom/kwad/components/core/webview/b/e/d;

    if-eqz v0, :cond_1

    invoke-interface {v0}, Lcom/kwad/components/core/webview/b/e/d;->go()V

    :cond_1
    return-void
.end method

.method public onDismiss(Landroid/content/DialogInterface;)V
    .locals 2

    invoke-super {p0, p1}, Lcom/kwad/components/core/n/g;->onDismiss(Landroid/content/DialogInterface;)V

    iget-object v0, p0, Lcom/kwad/components/core/webview/b/c/d;->QM:Lcom/kwad/components/core/webview/b/e/c;

    if-eqz v0, :cond_0

    invoke-interface {v0}, Lcom/kwad/components/core/webview/b/e/c;->go()V

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/core/webview/b/c/d;->Xv:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_1
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_2

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Landroid/content/DialogInterface$OnDismissListener;

    if-eqz v1, :cond_1

    invoke-interface {v1, p1}, Landroid/content/DialogInterface$OnDismissListener;->onDismiss(Landroid/content/DialogInterface;)V

    goto :goto_0

    :cond_2
    iget-object p1, p0, Lcom/kwad/components/core/webview/b/c/d;->Xn:Lcom/kwad/sdk/components/g;

    if-eqz p1, :cond_3

    invoke-interface {p1}, Lcom/kwad/sdk/components/g;->callbackDialogDismiss()V

    :cond_3
    return-void
.end method

.method public onViewCreated(Landroid/view/View;Landroid/os/Bundle;)V
    .locals 0

    invoke-super {p0, p1, p2}, Lcom/kwad/components/core/n/g;->onViewCreated(Landroid/view/View;Landroid/os/Bundle;)V

    invoke-direct {p0, p1}, Lcom/kwad/components/core/webview/b/c/d;->y(Landroid/view/View;)V

    iget-object p1, p0, Lcom/kwad/components/core/webview/b/c/d;->QM:Lcom/kwad/components/core/webview/b/e/c;

    if-eqz p1, :cond_0

    invoke-interface {p1}, Lcom/kwad/components/core/webview/b/e/c;->gg()V

    :cond_0
    iget-object p1, p0, Lcom/kwad/components/core/webview/b/c/d;->Xs:Lcom/kwad/components/core/webview/b/e/d;

    if-eqz p1, :cond_1

    invoke-interface {p1}, Lcom/kwad/components/core/webview/b/e/d;->gg()V

    :cond_1
    return-void
.end method
