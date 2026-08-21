.class public final Lcom/kwad/components/core/page/b;
.super Lcom/kwad/components/core/page/recycle/a;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/components/core/page/b$a;
    }
.end annotation


# instance fields
.field private Ms:Landroid/webkit/WebView;

.field private Mt:Lcom/kwad/components/core/widget/FeedVideoView;

.field private Mu:Landroid/widget/LinearLayout;

.field private Mv:Landroid/widget/TextView;

.field private Mw:Landroid/widget/ImageView;

.field private mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

.field private mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/core/page/recycle/a;-><init>()V

    return-void
.end method

.method public static R(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/components/core/page/b;
    .locals 4

    new-instance v0, Lcom/kwad/components/core/page/b;

    invoke-direct {v0}, Lcom/kwad/components/core/page/b;-><init>()V

    new-instance v1, Landroid/os/Bundle;

    invoke-direct {v1}, Landroid/os/Bundle;-><init>()V

    invoke-virtual {p0}, Lcom/kwad/sdk/core/response/model/AdTemplate;->toJson()Lorg/json/JSONObject;

    move-result-object v2

    invoke-virtual {v2}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v2

    const-string v3, "key_photo"

    invoke-virtual {v1, v3, v2}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    iget-boolean p0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->mPvReported:Z

    const-string v2, "key_report"

    invoke-virtual {v1, v2, p0}, Landroid/os/Bundle;->putBoolean(Ljava/lang/String;Z)V

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/page/b;->setArguments(Landroid/os/Bundle;)V

    return-object v0
.end method

.method static synthetic a(Lcom/kwad/components/core/page/b;Landroid/webkit/WebView;)Landroid/webkit/WebView;
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/core/page/b;->Ms:Landroid/webkit/WebView;

    return-object p1
.end method

.method static synthetic a(Lcom/kwad/components/core/page/b;)Landroid/widget/LinearLayout;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/core/page/b;->Mu:Landroid/widget/LinearLayout;

    return-object p0
.end method

.method static synthetic a(Lcom/kwad/components/core/page/b;Lcom/kwad/components/core/widget/FeedVideoView;)Lcom/kwad/components/core/widget/FeedVideoView;
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/core/page/b;->Mt:Lcom/kwad/components/core/widget/FeedVideoView;

    return-object p1
.end method

.method static synthetic a(Lcom/kwad/components/core/page/b;Landroid/view/View;)V
    .locals 0

    invoke-direct {p0, p1}, Lcom/kwad/components/core/page/b;->v(Landroid/view/View;)V

    return-void
.end method

.method private v(Landroid/view/View;)V
    .locals 2

    sget v0, Lcom/kwad/sdk/R$id;->ksad_web_tip_bar:I

    invoke-virtual {p1, v0}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/LinearLayout;

    iput-object v0, p0, Lcom/kwad/components/core/page/b;->Mu:Landroid/widget/LinearLayout;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_web_tip_bar_textview:I

    invoke-virtual {p1, v0}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/kwad/components/core/page/b;->Mv:Landroid/widget/TextView;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_web_tip_close_btn:I

    invoke-virtual {p1, v0}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object p1

    check-cast p1, Landroid/widget/ImageView;

    iput-object p1, p0, Lcom/kwad/components/core/page/b;->Mw:Landroid/widget/ImageView;

    new-instance v0, Lcom/kwad/components/core/page/b$1;

    invoke-direct {v0, p0}, Lcom/kwad/components/core/page/b$1;-><init>(Lcom/kwad/components/core/page/b;)V

    invoke-virtual {p1, v0}, Landroid/widget/ImageView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    iget-object p1, p0, Lcom/kwad/components/core/page/b;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object p1

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/a;->bn(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v0

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/a;->bj(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object p1

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/core/page/b;->Mu:Landroid/widget/LinearLayout;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/widget/LinearLayout;->setVisibility(I)V

    iget-object v0, p0, Lcom/kwad/components/core/page/b;->Mv:Landroid/widget/TextView;

    invoke-virtual {v0, p1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    iget-object p1, p0, Lcom/kwad/components/core/page/b;->Mv:Landroid/widget/TextView;

    const/4 v0, 0x1

    invoke-virtual {p1, v0}, Landroid/widget/TextView;->setSelected(Z)V

    return-void

    :cond_0
    iget-object p1, p0, Lcom/kwad/components/core/page/b;->Mu:Landroid/widget/LinearLayout;

    const/16 v0, 0x8

    invoke-virtual {p1, v0}, Landroid/widget/LinearLayout;->setVisibility(I)V

    return-void
.end method


# virtual methods
.method public final a(Landroid/support/v7/widget/RecyclerView;)Lcom/kwad/components/core/page/recycle/d;
    .locals 3

    new-instance v0, Lcom/kwad/components/core/page/recycle/e;

    iget-object v1, p0, Lcom/kwad/components/core/page/b;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget-object v2, p0, Lcom/kwad/components/core/page/b;->mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

    invoke-direct {v0, v1, v2, p1}, Lcom/kwad/components/core/page/recycle/e;-><init>(Lcom/kwad/sdk/core/response/model/AdTemplate;Lcom/kwad/components/core/e/d/c;Landroid/support/v7/widget/RecyclerView;)V

    new-instance v1, Lcom/kwad/components/core/page/b$a;

    iget-object v2, p0, Lcom/kwad/components/core/page/b;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-virtual {p1}, Landroid/support/v7/widget/RecyclerView;->getContext()Landroid/content/Context;

    move-result-object p1

    invoke-direct {v1, v2, p1, v0}, Lcom/kwad/components/core/page/b$a;-><init>(Lcom/kwad/sdk/core/response/model/AdTemplate;Landroid/content/Context;Lcom/kwad/components/core/page/recycle/e;)V

    return-object v1
.end method

.method public final bP()Z
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/page/b;->Ms:Landroid/webkit/WebView;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Landroid/webkit/WebView;->canGoBack()Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/core/page/b;->Ms:Landroid/webkit/WebView;

    invoke-virtual {v0}, Landroid/webkit/WebView;->goBack()V

    const/4 v0, 0x1

    return v0

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/core/page/b;->Mt:Lcom/kwad/components/core/widget/FeedVideoView;

    if-eqz v0, :cond_1

    invoke-virtual {v0}, Lcom/kwad/components/core/widget/FeedVideoView;->ss()Z

    move-result v0

    return v0

    :cond_1
    const/4 v0, 0x0

    return v0
.end method

.method public final onCreate(Landroid/os/Bundle;)V
    .locals 3

    invoke-super {p0, p1}, Lcom/kwad/components/core/page/recycle/a;->onCreate(Landroid/os/Bundle;)V

    invoke-virtual {p0}, Lcom/kwad/components/core/page/b;->getArguments()Landroid/os/Bundle;

    move-result-object p1

    const-string v0, "key_photo"

    invoke-virtual {p1, v0}, Landroid/os/Bundle;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    new-instance v0, Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-direct {v0}, Lcom/kwad/sdk/core/response/model/AdTemplate;-><init>()V

    if-eqz p1, :cond_0

    :try_start_0
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p1}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/response/model/AdTemplate;->parseJson(Lorg/json/JSONObject;)V
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    invoke-static {p1}, Lcom/kwad/sdk/core/e/c;->printStackTrace(Ljava/lang/Throwable;)V

    :cond_0
    :goto_0
    iput-object v0, p0, Lcom/kwad/components/core/page/b;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-virtual {p0}, Lcom/kwad/components/core/page/b;->getArguments()Landroid/os/Bundle;

    move-result-object p1

    const/4 v1, 0x0

    const-string v2, "key_report"

    invoke-virtual {p1, v2, v1}, Landroid/os/Bundle;->getBoolean(Ljava/lang/String;Z)Z

    move-result p1

    iput-boolean p1, v0, Lcom/kwad/sdk/core/response/model/AdTemplate;->mPvReported:Z

    iget-object p1, p0, Lcom/kwad/components/core/page/b;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    const/4 v0, 0x1

    iput-boolean v0, p1, Lcom/kwad/sdk/core/response/model/AdTemplate;->mAdWebVideoPageShowing:Z

    return-void
.end method

.method public final onDestroy()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/core/page/recycle/a;->onDestroy()V

    iget-object v0, p0, Lcom/kwad/components/core/page/b;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    if-eqz v0, :cond_0

    const/4 v1, 0x0

    iput-boolean v1, v0, Lcom/kwad/sdk/core/response/model/AdTemplate;->mAdWebVideoPageShowing:Z

    :cond_0
    return-void
.end method

.method public final onViewCreated(Landroid/view/View;Landroid/os/Bundle;)V
    .locals 1

    invoke-super {p0, p1, p2}, Lcom/kwad/components/core/page/recycle/a;->onViewCreated(Landroid/view/View;Landroid/os/Bundle;)V

    invoke-virtual {p0}, Lcom/kwad/components/core/page/b;->pd()Landroid/support/v7/widget/RecyclerView;

    move-result-object p1

    check-cast p1, Lcom/kwad/components/core/page/recycle/DetailWebRecycleView;

    const/4 p2, 0x1

    invoke-virtual {p1, p2}, Lcom/kwad/components/core/page/recycle/DetailWebRecycleView;->setInterceptRequestFocusForWeb(Z)V

    invoke-virtual {p1}, Lcom/kwad/components/core/page/recycle/DetailWebRecycleView;->getViewTreeObserver()Landroid/view/ViewTreeObserver;

    move-result-object p2

    new-instance v0, Lcom/kwad/components/core/page/b$2;

    invoke-direct {v0, p0, p1}, Lcom/kwad/components/core/page/b$2;-><init>(Lcom/kwad/components/core/page/b;Lcom/kwad/components/core/page/recycle/DetailWebRecycleView;)V

    invoke-virtual {p2, v0}, Landroid/view/ViewTreeObserver;->addOnGlobalLayoutListener(Landroid/view/ViewTreeObserver$OnGlobalLayoutListener;)V

    return-void
.end method

.method public final ov()I
    .locals 1

    sget v0, Lcom/kwad/sdk/R$layout;->ksad_detail_webview:I

    return v0
.end method

.method public final setApkDownloadHelper(Lcom/kwad/components/core/e/d/c;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/core/page/b;->mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

    return-void
.end method
