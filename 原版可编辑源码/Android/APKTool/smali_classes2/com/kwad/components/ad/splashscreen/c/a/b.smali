.class public final Lcom/kwad/components/ad/splashscreen/c/a/b;
.super Lcom/kwad/components/ad/splashscreen/c/e;

# interfaces
.implements Landroid/view/View$OnClickListener;


# instance fields
.field private Ee:Landroid/widget/TextView;

.field private Ef:Landroid/widget/TextView;

.field private Eg:Landroid/widget/TextView;

.field private Eh:Landroid/widget/TextView;

.field private Ei:Lcom/kwad/sdk/core/response/model/AdInfo$DownloadSafeInfo;


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/ad/splashscreen/c/e;-><init>()V

    return-void
.end method

.method private initView()V
    .locals 1

    sget v0, Lcom/kwad/sdk/R$id;->ksad_ad_endcard_appversion:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/splashscreen/c/a/b;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/a/b;->Ee:Landroid/widget/TextView;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_ad_permission_text:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/splashscreen/c/a/b;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/a/b;->Ef:Landroid/widget/TextView;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_ad_privacy_text:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/splashscreen/c/a/b;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/a/b;->Eg:Landroid/widget/TextView;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_ad_developer_text:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/splashscreen/c/a/b;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/a/b;->Eh:Landroid/widget/TextView;

    return-void
.end method

.method private lv()V
    .locals 5

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/a/b;->CM:Lcom/kwad/components/ad/splashscreen/h;

    iget-object v0, v0, Lcom/kwad/components/ad/splashscreen/h;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->aH(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v0

    if-nez v0, :cond_0

    return-void

    :cond_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v1, p0, Lcom/kwad/components/ad/splashscreen/c/a/b;->Ei:Lcom/kwad/sdk/core/response/model/AdInfo$DownloadSafeInfo;

    iget-object v1, v1, Lcom/kwad/sdk/core/response/model/AdInfo$DownloadSafeInfo;->appVersion:Ljava/lang/String;

    invoke-static {v1}, Lcom/kwad/sdk/utils/bc;->fI(Ljava/lang/String;)Z

    move-result v2

    if-eqz v2, :cond_1

    const-string v2, "\u7248\u672c\u53f7\uff1a"

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "  |  "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_1
    iget-object v1, p0, Lcom/kwad/components/ad/splashscreen/c/a/b;->Ei:Lcom/kwad/sdk/core/response/model/AdInfo$DownloadSafeInfo;

    iget-wide v1, v1, Lcom/kwad/sdk/core/response/model/AdInfo$DownloadSafeInfo;->packageSize:J

    const-wide/16 v3, 0x0

    cmp-long v3, v1, v3

    if-lez v3, :cond_2

    const-string v3, "\u5e94\u7528\u5927\u5c0f\uff1a"

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/4 v3, 0x1

    invoke-static {v1, v2, v3}, Lcom/kwad/components/core/t/e;->a(JZ)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_2
    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/kwad/sdk/utils/bc;->fI(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_3

    iget-object v1, p0, Lcom/kwad/components/ad/splashscreen/c/a/b;->Ee:Landroid/widget/TextView;

    invoke-virtual {v1, v0}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    :cond_3
    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/a/b;->Ei:Lcom/kwad/sdk/core/response/model/AdInfo$DownloadSafeInfo;

    iget-object v0, v0, Lcom/kwad/sdk/core/response/model/AdInfo$DownloadSafeInfo;->appPermissionInfoUrl:Ljava/lang/String;

    iget-object v1, p0, Lcom/kwad/components/ad/splashscreen/c/a/b;->Ei:Lcom/kwad/sdk/core/response/model/AdInfo$DownloadSafeInfo;

    iget-object v1, v1, Lcom/kwad/sdk/core/response/model/AdInfo$DownloadSafeInfo;->appPrivacyUrl:Ljava/lang/String;

    invoke-static {v0}, Lcom/kwad/sdk/utils/bc;->fI(Ljava/lang/String;)Z

    move-result v2

    if-eqz v2, :cond_4

    iget-object v2, p0, Lcom/kwad/components/ad/splashscreen/c/a/b;->Ef:Landroid/widget/TextView;

    const-string v3, "\u6743\u9650\u4fe1\u606f"

    invoke-virtual {v2, v3}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    iget-object v2, p0, Lcom/kwad/components/ad/splashscreen/c/a/b;->Ef:Landroid/widget/TextView;

    invoke-virtual {v2, p0}, Landroid/widget/TextView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    :cond_4
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {v0}, Lcom/kwad/sdk/utils/bc;->fI(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_5

    const-string v0, " | "

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_5
    invoke-static {v1}, Lcom/kwad/sdk/utils/bc;->fI(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_6

    const-string v0, "\u9690\u79c1\u653f\u7b56"

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/a/b;->Eg:Landroid/widget/TextView;

    invoke-virtual {v0, v2}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/a/b;->Eg:Landroid/widget/TextView;

    invoke-virtual {v0, p0}, Landroid/widget/TextView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    :cond_6
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v1, p0, Lcom/kwad/components/ad/splashscreen/c/a/b;->Ei:Lcom/kwad/sdk/core/response/model/AdInfo$DownloadSafeInfo;

    iget-object v1, v1, Lcom/kwad/sdk/core/response/model/AdInfo$DownloadSafeInfo;->appName:Ljava/lang/String;

    invoke-static {v1}, Lcom/kwad/sdk/utils/bc;->fI(Ljava/lang/String;)Z

    move-result v2

    if-eqz v2, :cond_7

    const-string v2, "\u5e94\u7528\u540d\uff1a"

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "\uff1b"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_7
    iget-object v1, p0, Lcom/kwad/components/ad/splashscreen/c/a/b;->Ei:Lcom/kwad/sdk/core/response/model/AdInfo$DownloadSafeInfo;

    iget-object v1, v1, Lcom/kwad/sdk/core/response/model/AdInfo$DownloadSafeInfo;->corporationName:Ljava/lang/String;

    invoke-static {v1}, Lcom/kwad/sdk/utils/bc;->fI(Ljava/lang/String;)Z

    move-result v2

    if-eqz v2, :cond_8

    const-string v2, "\u5f00\u53d1\u8005\uff1a"

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_8
    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/kwad/sdk/utils/bc;->fI(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_9

    iget-object v1, p0, Lcom/kwad/components/ad/splashscreen/c/a/b;->Eh:Landroid/widget/TextView;

    invoke-virtual {v1, v0}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    :cond_9
    return-void
.end method


# virtual methods
.method public final ah()V
    .locals 1

    invoke-super {p0}, Lcom/kwad/components/ad/splashscreen/c/e;->ah()V

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/a/b;->CM:Lcom/kwad/components/ad/splashscreen/h;

    iget-object v0, v0, Lcom/kwad/components/ad/splashscreen/h;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    iget-object v0, v0, Lcom/kwad/sdk/core/response/model/AdInfo;->downloadSafeInfo:Lcom/kwad/sdk/core/response/model/AdInfo$DownloadSafeInfo;

    iput-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/a/b;->Ei:Lcom/kwad/sdk/core/response/model/AdInfo$DownloadSafeInfo;

    invoke-direct {p0}, Lcom/kwad/components/ad/splashscreen/c/a/b;->lv()V

    return-void
.end method

.method public final onClick(Landroid/view/View;)V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/a/b;->Eg:Landroid/widget/TextView;

    const/4 v1, 0x1

    if-ne p1, v0, :cond_0

    new-instance p1, Lcom/kwad/components/core/page/AdWebViewActivityProxy$a$a;

    invoke-direct {p1}, Lcom/kwad/components/core/page/AdWebViewActivityProxy$a$a;-><init>()V

    const-string v0, "\u9690\u79c1\u653f\u7b56"

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/page/AdWebViewActivityProxy$a$a;->aq(Ljava/lang/String;)Lcom/kwad/components/core/page/AdWebViewActivityProxy$a$a;

    move-result-object p1

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/a/b;->Ei:Lcom/kwad/sdk/core/response/model/AdInfo$DownloadSafeInfo;

    iget-object v0, v0, Lcom/kwad/sdk/core/response/model/AdInfo$DownloadSafeInfo;->appPrivacyUrl:Ljava/lang/String;

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/page/AdWebViewActivityProxy$a$a;->ar(Ljava/lang/String;)Lcom/kwad/components/core/page/AdWebViewActivityProxy$a$a;

    move-result-object p1

    invoke-virtual {p1, v1}, Lcom/kwad/components/core/page/AdWebViewActivityProxy$a$a;->ay(Z)Lcom/kwad/components/core/page/AdWebViewActivityProxy$a$a;

    move-result-object p1

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/a/b;->CM:Lcom/kwad/components/ad/splashscreen/h;

    iget-object v0, v0, Lcom/kwad/components/ad/splashscreen/h;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/page/AdWebViewActivityProxy$a$a;->S(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/components/core/page/AdWebViewActivityProxy$a$a;

    move-result-object p1

    invoke-virtual {p1}, Lcom/kwad/components/core/page/AdWebViewActivityProxy$a$a;->oA()Lcom/kwad/components/core/page/AdWebViewActivityProxy$a;

    move-result-object p1

    invoke-virtual {p0}, Lcom/kwad/components/ad/splashscreen/c/a/b;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0, p1}, Lcom/kwad/components/core/page/AdWebViewActivityProxy;->launch(Landroid/content/Context;Lcom/kwad/components/core/page/AdWebViewActivityProxy$a;)V

    return-void

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/a/b;->Ef:Landroid/widget/TextView;

    if-ne p1, v0, :cond_1

    new-instance p1, Lcom/kwad/components/core/page/AdWebViewActivityProxy$a$a;

    invoke-direct {p1}, Lcom/kwad/components/core/page/AdWebViewActivityProxy$a$a;-><init>()V

    const-string v0, "\u6743\u9650\u4fe1\u606f"

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/page/AdWebViewActivityProxy$a$a;->aq(Ljava/lang/String;)Lcom/kwad/components/core/page/AdWebViewActivityProxy$a$a;

    move-result-object p1

    invoke-virtual {p1, v1}, Lcom/kwad/components/core/page/AdWebViewActivityProxy$a$a;->ay(Z)Lcom/kwad/components/core/page/AdWebViewActivityProxy$a$a;

    move-result-object p1

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/a/b;->Ei:Lcom/kwad/sdk/core/response/model/AdInfo$DownloadSafeInfo;

    iget-object v0, v0, Lcom/kwad/sdk/core/response/model/AdInfo$DownloadSafeInfo;->appPermissionInfoUrl:Ljava/lang/String;

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/page/AdWebViewActivityProxy$a$a;->ar(Ljava/lang/String;)Lcom/kwad/components/core/page/AdWebViewActivityProxy$a$a;

    move-result-object p1

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/a/b;->CM:Lcom/kwad/components/ad/splashscreen/h;

    iget-object v0, v0, Lcom/kwad/components/ad/splashscreen/h;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/page/AdWebViewActivityProxy$a$a;->S(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/components/core/page/AdWebViewActivityProxy$a$a;

    move-result-object p1

    invoke-virtual {p1}, Lcom/kwad/components/core/page/AdWebViewActivityProxy$a$a;->oA()Lcom/kwad/components/core/page/AdWebViewActivityProxy$a;

    move-result-object p1

    invoke-virtual {p0}, Lcom/kwad/components/ad/splashscreen/c/a/b;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0, p1}, Lcom/kwad/components/core/page/AdWebViewActivityProxy;->launch(Landroid/content/Context;Lcom/kwad/components/core/page/AdWebViewActivityProxy$a;)V

    :cond_1
    return-void
.end method

.method public final onCreate()V
    .locals 0

    invoke-super {p0}, Lcom/kwad/components/ad/splashscreen/c/e;->onCreate()V

    invoke-direct {p0}, Lcom/kwad/components/ad/splashscreen/c/a/b;->initView()V

    return-void
.end method

.method public final onUnbind()V
    .locals 0

    invoke-super {p0}, Lcom/kwad/components/ad/splashscreen/c/e;->onUnbind()V

    return-void
.end method
