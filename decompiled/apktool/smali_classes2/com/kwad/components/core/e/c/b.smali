.class public final Lcom/kwad/components/core/e/c/b;
.super Lcom/kwad/components/core/n/d;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/components/core/e/c/b$a;,
        Lcom/kwad/components/core/e/c/b$b;
    }
.end annotation


# static fields
.field private static Jp:Lcom/kwad/components/core/e/c/b;


# instance fields
.field private final Jq:Lcom/kwad/components/core/e/c/b$b;

.field private Jt:Lcom/kwad/components/core/e/c/a;

.field private Ju:Z


# direct methods
.method private constructor <init>(Landroid/app/Activity;Lcom/kwad/components/core/e/c/b$b;)V
    .locals 1

    invoke-direct {p0, p1}, Lcom/kwad/components/core/n/d;-><init>(Landroid/app/Activity;)V

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/kwad/components/core/e/c/b;->Ju:Z

    iput-object p2, p0, Lcom/kwad/components/core/e/c/b;->Jq:Lcom/kwad/components/core/e/c/b$b;

    invoke-static {p1}, Lcom/kwad/sdk/d/a/a;->b(Landroid/app/Activity;)Z

    move-result p1

    if-eqz p1, :cond_0

    invoke-virtual {p0}, Lcom/kwad/components/core/e/c/b;->getWindow()Landroid/view/Window;

    move-result-object p1

    const/16 v0, 0x400

    invoke-virtual {p1, v0}, Landroid/view/Window;->addFlags(I)V

    :cond_0
    iget-object p1, p2, Lcom/kwad/components/core/e/c/b$b;->Jw:Landroid/content/DialogInterface$OnShowListener;

    invoke-virtual {p0, p1}, Lcom/kwad/components/core/e/c/b;->setOnShowListener(Landroid/content/DialogInterface$OnShowListener;)V

    iget-object p1, p2, Lcom/kwad/components/core/e/c/b$b;->Jx:Landroid/content/DialogInterface$OnDismissListener;

    invoke-virtual {p0, p1}, Lcom/kwad/components/core/e/c/b;->setOnDismissListener(Landroid/content/DialogInterface$OnDismissListener;)V

    return-void
.end method

.method public static a(Landroid/content/Context;Lcom/kwad/components/core/e/c/b$b;)Z
    .locals 2

    sget-object v0, Lcom/kwad/components/core/e/c/b;->Jp:Lcom/kwad/components/core/e/c/b;

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/kwad/components/core/e/c/b;->isShowing()Z

    move-result v0

    if-eqz v0, :cond_0

    return v1

    :cond_0
    if-nez p0, :cond_1

    return v1

    :cond_1
    invoke-static {p0}, Lcom/kwad/sdk/m/l;->dr(Landroid/content/Context;)Landroid/app/Activity;

    move-result-object p0

    if-eqz p0, :cond_3

    invoke-virtual {p0}, Landroid/app/Activity;->isFinishing()Z

    move-result v0

    if-eqz v0, :cond_2

    goto :goto_0

    :cond_2
    invoke-static {}, Lcom/kwad/sdk/a/a/c;->yb()Lcom/kwad/sdk/a/a/c;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/sdk/a/a/c;->dismiss()V

    :try_start_0
    new-instance v0, Lcom/kwad/components/core/e/c/b;

    invoke-direct {v0, p0, p1}, Lcom/kwad/components/core/e/c/b;-><init>(Landroid/app/Activity;Lcom/kwad/components/core/e/c/b$b;)V

    sput-object v0, Lcom/kwad/components/core/e/c/b;->Jp:Lcom/kwad/components/core/e/c/b;

    invoke-virtual {v0}, Lcom/kwad/components/core/e/c/b;->show()V

    iget-object p0, p1, Lcom/kwad/components/core/e/c/b$b;->adTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    const/16 p1, 0x56

    const/4 v0, 0x0

    invoke-static {p0, p1, v0}, Lcom/kwad/sdk/core/report/a;->b(Lcom/kwad/sdk/core/response/model/AdTemplate;ILorg/json/JSONObject;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const/4 p0, 0x1

    return p0

    :catchall_0
    move-exception p0

    invoke-static {p0}, Lcom/kwad/sdk/core/e/c;->printStackTrace(Ljava/lang/Throwable;)V

    :cond_3
    :goto_0
    return v1
.end method

.method public static mZ()Z
    .locals 1

    sget-object v0, Lcom/kwad/components/core/e/c/b;->Jp:Lcom/kwad/components/core/e/c/b;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/kwad/components/core/e/c/b;->isShowing()Z

    move-result v0

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method


# virtual methods
.method public final al(Z)V
    .locals 0

    iput-boolean p1, p0, Lcom/kwad/components/core/e/c/b;->Ju:Z

    invoke-virtual {p0}, Lcom/kwad/components/core/e/c/b;->dismiss()V

    return-void
.end method

.method public final cf()Landroid/view/ViewGroup;
    .locals 3

    new-instance v0, Lcom/kwad/components/core/e/c/a;

    iget-object v1, p0, Lcom/kwad/components/core/e/c/b;->mContext:Landroid/content/Context;

    iget-object v2, p0, Lcom/kwad/components/core/e/c/b;->Jq:Lcom/kwad/components/core/e/c/b$b;

    invoke-direct {v0, v1, p0, v2}, Lcom/kwad/components/core/e/c/a;-><init>(Landroid/content/Context;Lcom/kwad/components/core/e/c/b;Lcom/kwad/components/core/e/c/b$b;)V

    iput-object v0, p0, Lcom/kwad/components/core/e/c/b;->Jt:Lcom/kwad/components/core/e/c/a;

    return-object v0
.end method

.method public final dismiss()V
    .locals 1

    invoke-super {p0}, Lcom/kwad/components/core/n/d;->dismiss()V

    const/4 v0, 0x0

    sput-object v0, Lcom/kwad/components/core/e/c/b;->Jp:Lcom/kwad/components/core/e/c/b;

    return-void
.end method

.method public final g(Landroid/view/View;)V
    .locals 1

    iget-object p1, p0, Lcom/kwad/components/core/e/c/b;->Jt:Lcom/kwad/components/core/e/c/a;

    new-instance v0, Lcom/kwad/components/core/e/c/b$1;

    invoke-direct {v0, p0}, Lcom/kwad/components/core/e/c/b$1;-><init>(Lcom/kwad/components/core/e/c/b;)V

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/e/c/a;->setChangeListener(Lcom/kwad/components/core/e/c/a$a;)V

    return-void
.end method

.method public final getLayoutId()I
    .locals 1

    const/4 v0, 0x0

    return v0
.end method

.method public final isShowing()Z
    .locals 1

    invoke-super {p0}, Lcom/kwad/components/core/n/d;->isShowing()Z

    move-result v0

    return v0
.end method

.method public final na()Z
    .locals 1

    const/4 v0, 0x1

    return v0
.end method

.method public final nb()Z
    .locals 1

    iget-boolean v0, p0, Lcom/kwad/components/core/e/c/b;->Ju:Z

    return v0
.end method

.method public final onBackPressed()V
    .locals 1

    invoke-super {p0}, Lcom/kwad/components/core/n/d;->onBackPressed()V

    iget-object v0, p0, Lcom/kwad/components/core/e/c/b;->Jq:Lcom/kwad/components/core/e/c/b$b;

    iget-object v0, v0, Lcom/kwad/components/core/e/c/b$b;->adTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/report/a;->aD(Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    return-void
.end method

.method public final onDetachedFromWindow()V
    .locals 1

    invoke-super {p0}, Lcom/kwad/components/core/n/d;->onDetachedFromWindow()V

    const/4 v0, 0x0

    sput-object v0, Lcom/kwad/components/core/e/c/b;->Jp:Lcom/kwad/components/core/e/c/b;

    return-void
.end method

.method public final onStart()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/core/n/d;->onStart()V

    sget-object v0, Lcom/kwad/components/core/e/c/b;->Jp:Lcom/kwad/components/core/e/c/b;

    if-eqz v0, :cond_0

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/e/c/b;->setTitle(Ljava/lang/CharSequence;)V

    :cond_0
    return-void
.end method

.method public final show()V
    .locals 1

    :try_start_0
    invoke-super {p0}, Lcom/kwad/components/core/n/d;->show()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception v0

    invoke-static {v0}, Lcom/kwad/sdk/core/e/c;->printStackTraceOnly(Ljava/lang/Throwable;)V

    return-void
.end method
