.class public Lcom/kwad/components/core/page/a;
.super Lcom/kwad/components/core/n/f;

# interfaces
.implements Lcom/kwad/components/core/b/a$a;
.implements Lcom/kwad/components/core/webview/jshandler/ah$b;


# instance fields
.field private Mr:Z

.field private mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

.field private mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

.field private mRootContainer:Lcom/kwad/sdk/core/view/AdBaseFrameLayout;

.field private mTitleBarHelper:Lcom/kwad/components/core/b/a;

.field private oX:Lcom/kwad/components/core/playable/a;


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Lcom/kwad/components/core/n/f;-><init>()V

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/kwad/components/core/page/a;->Mr:Z

    return-void
.end method

.method private b(Landroid/content/Intent;)V
    .locals 1

    const-string v0, "key_template_json"

    invoke-virtual {p1, v0}, Landroid/content/Intent;->getStringExtra(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    :try_start_0
    new-instance v0, Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-direct {v0}, Lcom/kwad/sdk/core/response/model/AdTemplate;-><init>()V

    iput-object v0, p0, Lcom/kwad/components/core/page/a;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0, p1}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    iget-object p1, p0, Lcom/kwad/components/core/page/a;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-virtual {p1, v0}, Lcom/kwad/sdk/core/response/model/AdTemplate;->parseJson(Lorg/json/JSONObject;)V

    new-instance p1, Lcom/kwad/components/core/e/d/c;

    iget-object v0, p0, Lcom/kwad/components/core/page/a;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-direct {p1, v0}, Lcom/kwad/components/core/e/d/c;-><init>(Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    iput-object p1, p0, Lcom/kwad/components/core/page/a;->mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception p1

    invoke-static {p1}, Lcom/kwad/sdk/core/e/c;->printStackTraceOnly(Ljava/lang/Throwable;)V

    :cond_0
    return-void
.end method

.method public static launch(Landroid/content/Context;Lcom/kwad/sdk/core/response/model/AdTemplate;)V
    .locals 2

    const-class v0, Lcom/kwad/sdk/api/proxy/app/BaseFragmentActivity$FragmentActivity8;

    const-class v1, Lcom/kwad/components/core/page/a;

    invoke-static {v0, v1}, Lcom/kwad/sdk/service/b;->a(Ljava/lang/Class;Ljava/lang/Class;)V

    new-instance v1, Landroid/content/Intent;

    invoke-direct {v1, p0, v0}, Landroid/content/Intent;-><init>(Landroid/content/Context;Ljava/lang/Class;)V

    invoke-virtual {p1}, Lcom/kwad/sdk/core/response/model/AdTemplate;->toJson()Lorg/json/JSONObject;

    move-result-object p1

    invoke-virtual {p1}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p1

    const-string v0, "key_template_json"

    invoke-virtual {v1, v0, p1}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    invoke-virtual {p0, v1}, Landroid/content/Context;->startActivity(Landroid/content/Intent;)V

    return-void
.end method

.method private ou()V
    .locals 3

    new-instance v0, Lcom/kwad/components/core/b/a;

    iget-object v1, p0, Lcom/kwad/components/core/page/a;->mRootContainer:Lcom/kwad/sdk/core/view/AdBaseFrameLayout;

    invoke-direct {v0, v1}, Lcom/kwad/components/core/b/a;-><init>(Landroid/view/ViewGroup;)V

    iput-object v0, p0, Lcom/kwad/components/core/page/a;->mTitleBarHelper:Lcom/kwad/components/core/b/a;

    invoke-virtual {v0, p0}, Lcom/kwad/components/core/b/a;->a(Lcom/kwad/components/core/b/a$a;)V

    iget-object v0, p0, Lcom/kwad/components/core/page/a;->mTitleBarHelper:Lcom/kwad/components/core/b/a;

    new-instance v1, Lcom/kwad/components/core/b/b;

    const-string v2, ""

    invoke-direct {v1, v2}, Lcom/kwad/components/core/b/b;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/b/a;->a(Lcom/kwad/components/core/b/b;)V

    return-void
.end method

.method public static register()V
    .locals 2

    const-class v0, Lcom/kwad/sdk/api/proxy/app/BaseFragmentActivity$FragmentActivity8;

    const-class v1, Lcom/kwad/components/core/page/a;

    invoke-static {v0, v1}, Lcom/kwad/sdk/service/b;->a(Ljava/lang/Class;Ljava/lang/Class;)V

    return-void
.end method


# virtual methods
.method public final a(Lcom/kwad/components/core/webview/jshandler/ah$a;)V
    .locals 2

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "updatePageStatus status: "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "AdPlayableActivityProxy"

    invoke-static {v1, v0}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    iget p1, p1, Lcom/kwad/components/core/webview/jshandler/ah$a;->status:I

    const/4 v0, 0x1

    if-ne p1, v0, :cond_0

    iget-object p1, p0, Lcom/kwad/components/core/page/a;->oX:Lcom/kwad/components/core/playable/a;

    if-eqz p1, :cond_0

    sget-object v0, Lcom/kwad/components/core/playable/PlayableSource;->UNKNOWN_TRYPLAY_ENTRY_SOURCE:Lcom/kwad/components/core/playable/PlayableSource;

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/playable/a;->e(Lcom/kwad/components/core/playable/PlayableSource;)V

    :cond_0
    return-void
.end method

.method public getPageName()Ljava/lang/String;
    .locals 1

    const-string v0, "AdPlayableActivityProxy"

    return-object v0
.end method

.method public onCreate(Landroid/os/Bundle;)V
    .locals 3

    invoke-super {p0, p1}, Lcom/kwad/components/core/n/f;->onCreate(Landroid/os/Bundle;)V

    invoke-virtual {p0}, Lcom/kwad/components/core/page/a;->getActivity()Landroid/app/Activity;

    move-result-object p1

    sget v0, Lcom/kwad/sdk/R$style;->Theme_AppCompat_Light_NoActionBar:I

    invoke-virtual {p1, v0}, Landroid/app/Activity;->setTheme(I)V

    sget p1, Lcom/kwad/sdk/R$layout;->ksad_activity_playable:I

    invoke-virtual {p0, p1}, Lcom/kwad/components/core/page/a;->setContentView(I)V

    invoke-virtual {p0}, Lcom/kwad/components/core/page/a;->getIntent()Landroid/content/Intent;

    move-result-object p1

    invoke-direct {p0, p1}, Lcom/kwad/components/core/page/a;->b(Landroid/content/Intent;)V

    sget p1, Lcom/kwad/sdk/R$id;->ksad_playable_activity_root:I

    invoke-virtual {p0, p1}, Lcom/kwad/components/core/page/a;->findViewById(I)Landroid/view/View;

    move-result-object p1

    check-cast p1, Lcom/kwad/sdk/core/view/AdBaseFrameLayout;

    iput-object p1, p0, Lcom/kwad/components/core/page/a;->mRootContainer:Lcom/kwad/sdk/core/view/AdBaseFrameLayout;

    sget p1, Lcom/kwad/sdk/R$id;->ksad_playable_webview:I

    invoke-virtual {p0, p1}, Lcom/kwad/components/core/page/a;->findViewById(I)Landroid/view/View;

    move-result-object p1

    check-cast p1, Lcom/kwad/sdk/core/webview/KsAdWebView;

    invoke-direct {p0}, Lcom/kwad/components/core/page/a;->ou()V

    new-instance v0, Lcom/kwad/components/core/playable/a;

    invoke-direct {v0, p1}, Lcom/kwad/components/core/playable/a;-><init>(Lcom/kwad/sdk/core/webview/KsAdWebView;)V

    iput-object v0, p0, Lcom/kwad/components/core/page/a;->oX:Lcom/kwad/components/core/playable/a;

    iget-object p1, p0, Lcom/kwad/components/core/page/a;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget-object v1, p0, Lcom/kwad/components/core/page/a;->mRootContainer:Lcom/kwad/sdk/core/view/AdBaseFrameLayout;

    iget-object v2, p0, Lcom/kwad/components/core/page/a;->mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

    invoke-virtual {v0, p1, v1, v2}, Lcom/kwad/components/core/playable/a;->a(Lcom/kwad/sdk/core/response/model/AdTemplate;Lcom/kwad/sdk/core/view/AdBaseFrameLayout;Lcom/kwad/components/core/e/d/c;)V

    iget-object p1, p0, Lcom/kwad/components/core/page/a;->oX:Lcom/kwad/components/core/playable/a;

    invoke-virtual {p1, p0}, Lcom/kwad/components/core/playable/a;->a(Lcom/kwad/components/core/webview/jshandler/ah$b;)V

    iget-object p1, p0, Lcom/kwad/components/core/page/a;->oX:Lcom/kwad/components/core/playable/a;

    invoke-virtual {p1}, Lcom/kwad/components/core/playable/a;->pw()V

    return-void
.end method

.method public onDestroy()V
    .locals 1

    invoke-super {p0}, Lcom/kwad/components/core/n/f;->onDestroy()V

    iget-object v0, p0, Lcom/kwad/components/core/page/a;->oX:Lcom/kwad/components/core/playable/a;

    invoke-virtual {v0, p0}, Lcom/kwad/components/core/playable/a;->b(Lcom/kwad/components/core/webview/jshandler/ah$b;)V

    return-void
.end method

.method public onPause()V
    .locals 0

    invoke-super {p0}, Lcom/kwad/components/core/n/f;->onPause()V

    return-void
.end method

.method public onRestart()V
    .locals 0

    invoke-super {p0}, Lcom/kwad/components/core/n/f;->onRestart()V

    return-void
.end method

.method public onResume()V
    .locals 0

    invoke-super {p0}, Lcom/kwad/components/core/n/f;->onResume()V

    return-void
.end method

.method public final t(Landroid/view/View;)V
    .locals 0

    invoke-virtual {p0}, Lcom/kwad/components/core/page/a;->onBackPressed()V

    return-void
.end method

.method public final u(Landroid/view/View;)V
    .locals 2

    iget-object p1, p0, Lcom/kwad/components/core/page/a;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    new-instance v0, Lcom/kwad/sdk/core/report/j;

    invoke-direct {v0}, Lcom/kwad/sdk/core/report/j;-><init>()V

    const/4 v1, 0x6

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/report/j;->ch(I)Lcom/kwad/sdk/core/report/j;

    move-result-object v0

    const/4 v1, 0x0

    invoke-static {p1, v0, v1}, Lcom/kwad/sdk/core/report/a;->b(Lcom/kwad/sdk/core/response/model/AdTemplate;Lcom/kwad/sdk/core/report/j;Lorg/json/JSONObject;)V

    invoke-virtual {p0}, Lcom/kwad/components/core/page/a;->finish()V

    return-void
.end method
