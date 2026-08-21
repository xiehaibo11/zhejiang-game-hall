.class public final Lcom/kwad/components/ad/reward/presenter/g/b;
.super Lcom/kwad/components/ad/reward/presenter/a;

# interfaces
.implements Lcom/kwad/components/ad/reward/m/c$a;
.implements Lcom/kwad/sdk/b/a;
.implements Lcom/kwad/sdk/core/webview/d/a/a;
.implements Lcom/kwad/sdk/widget/c;


# static fields
.field private static xf:F = 0.4548105f


# instance fields
.field private mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

.field private final mRewardVerifyListener:Lcom/kwad/components/ad/reward/e/j;

.field private pA:Lcom/kwad/components/ad/reward/k/b/a;

.field private wY:Landroid/view/ViewGroup;

.field private wZ:Lcom/kwad/components/ad/reward/m/q;

.field private xa:Landroid/view/ViewGroup;

.field private xb:Lcom/kwad/components/ad/reward/m/e;

.field private xc:Lcom/kwad/components/ad/reward/m/c;

.field private xd:Lcom/kwad/components/ad/reward/m/c;

.field private xg:I

.field private xh:J

.field private xi:Z

.field private xj:Lcom/kwad/sdk/core/c/c;


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public constructor <init>()V
    .locals 2

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/a;-><init>()V

    const/16 v0, 0xf

    iput v0, p0, Lcom/kwad/components/ad/reward/presenter/g/b;->xg:I

    const-wide/16 v0, -0x1

    iput-wide v0, p0, Lcom/kwad/components/ad/reward/presenter/g/b;->xh:J

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/kwad/components/ad/reward/presenter/g/b;->xi:Z

    new-instance v0, Lcom/kwad/components/ad/reward/presenter/g/b$3;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/reward/presenter/g/b$3;-><init>(Lcom/kwad/components/ad/reward/presenter/g/b;)V

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/g/b;->mRewardVerifyListener:Lcom/kwad/components/ad/reward/e/j;

    new-instance v0, Lcom/kwad/components/ad/reward/presenter/g/b$4;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/reward/presenter/g/b$4;-><init>(Lcom/kwad/components/ad/reward/presenter/g/b;)V

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/g/b;->xj:Lcom/kwad/sdk/core/c/c;

    return-void
.end method

.method private Y(Z)V
    .locals 3

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/g/b;->pA:Lcom/kwad/components/ad/reward/k/b/a;

    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/presenter/g/b;->getContext()Landroid/content/Context;

    move-result-object v1

    iget-object v2, p0, Lcom/kwad/components/ad/reward/presenter/g/b;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v2, v2, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0, v1, v2}, Lcom/kwad/components/ad/reward/k/b/a;->a(Lcom/kwad/components/ad/reward/k/b/a;Landroid/content/Context;Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/g/b;->pA:Lcom/kwad/components/ad/reward/k/b/a;

    invoke-virtual {v0}, Lcom/kwad/components/ad/reward/k/b/a;->jM()Z

    move-result v0

    if-eqz v0, :cond_2

    if-eqz p1, :cond_1

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/g/b;->jk()Z

    move-result p1

    if-eqz p1, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/g/b;->pA:Lcom/kwad/components/ad/reward/k/b/a;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/kwad/components/ad/reward/k/b/a;->jL()V

    invoke-static {}, Lcom/kwad/components/ad/reward/c;->ft()Lcom/kwad/components/ad/reward/c;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/components/ad/reward/c;->notifyRewardVerify()V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/g/b;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->mAdOpenInteractionListener:Lcom/kwad/components/ad/reward/e/b;

    invoke-interface {v0}, Lcom/kwad/components/ad/reward/e/b;->onRewardVerify()V

    :cond_0
    invoke-direct {p0, p1}, Lcom/kwad/components/ad/reward/presenter/g/b;->Z(Z)V

    return-void

    :cond_1
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/components/ad/reward/presenter/g/b;->xh:J

    return-void

    :cond_2
    if-eqz p1, :cond_3

    const/4 p1, 0x0

    invoke-direct {p0, p1}, Lcom/kwad/components/ad/reward/presenter/g/b;->Z(Z)V

    :cond_3
    return-void
.end method

.method private Z(Z)V
    .locals 3

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "showTaskToast hasShowCompletedToast: "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-boolean v1, p0, Lcom/kwad/components/ad/reward/presenter/g/b;->xi:Z

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v1, " completed: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "LaunchAppTaskPresenter"

    invoke-static {v1, v0}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    iget-boolean v0, p0, Lcom/kwad/components/ad/reward/presenter/g/b;->xi:Z

    if-eqz v0, :cond_0

    return-void

    :cond_0
    if-eqz p1, :cond_1

    const-string v0, "\u606d\u559c\uff01\u4efb\u52a1\u8fbe\u6807\u5566\uff0c\u6210\u529f\u83b7\u53d6\u5956\u52b1~"

    goto :goto_0

    :cond_1
    const-string v0, "\u54ce\u5440\uff0c\u5dee\u4e00\u70b9\u5c31\u8fbe\u6807\u5566\uff0c\u518d\u8bd5\u4e00\u6b21~"

    :goto_0
    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/presenter/g/b;->getContext()Landroid/content/Context;

    move-result-object v1

    const/4 v2, 0x0

    invoke-static {v1, v0, v2}, Lcom/kwad/sdk/utils/v;->d(Landroid/content/Context;Ljava/lang/String;I)V

    if-eqz p1, :cond_2

    const/4 p1, 0x1

    iput-boolean p1, p0, Lcom/kwad/components/ad/reward/presenter/g/b;->xi:Z

    :cond_2
    return-void
.end method

.method static synthetic a(Lcom/kwad/components/ad/reward/presenter/g/b;)Lcom/kwad/components/ad/reward/j;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/g/b;->qx:Lcom/kwad/components/ad/reward/j;

    return-object p0
.end method

.method static synthetic a(Lcom/kwad/components/ad/reward/presenter/g/b;Z)V
    .locals 0

    invoke-direct {p0, p1}, Lcom/kwad/components/ad/reward/presenter/g/b;->Y(Z)V

    return-void
.end method

.method private a(Lcom/kwad/sdk/core/view/AdBaseFrameLayout;)V
    .locals 4

    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/presenter/g/b;->getContext()Landroid/content/Context;

    invoke-static {}, Lcom/kwad/sdk/utils/ai;->IN()Z

    move-result v0

    if-nez v0, :cond_0

    const-string p1, "LaunchAppTaskPresenter"

    const-string v0, "initBottomActionBar screen is horizontal"

    invoke-static {p1, v0}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    return-void

    :cond_0
    sget v0, Lcom/kwad/sdk/R$id;->ksad_reward_apk_info_stub:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/reward/presenter/g/b;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/view/ViewStub;

    invoke-virtual {v0}, Landroid/view/ViewStub;->inflate()Landroid/view/View;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_reward_apk_info_card_native_container:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/reward/presenter/g/b;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/view/ViewGroup;

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/g/b;->xa:Landroid/view/ViewGroup;

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Landroid/view/ViewGroup;->setClickable(Z)V

    new-instance v0, Lcom/kwad/sdk/widget/f;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/g/b;->xa:Landroid/view/ViewGroup;

    invoke-direct {v0, v1, p0}, Lcom/kwad/sdk/widget/f;-><init>(Landroid/view/View;Lcom/kwad/sdk/widget/c;)V

    sget v0, Lcom/kwad/sdk/R$id;->ksad_reward_apk_info_card_root:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/reward/presenter/g/b;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Lcom/kwad/sdk/widget/KSFrameLayout;

    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/presenter/g/b;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-virtual {v1}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v1

    sget v2, Lcom/kwad/sdk/R$dimen;->ksad_reward_apk_info_card_step_icon_radius:I

    invoke-virtual {v1, v2}, Landroid/content/res/Resources;->getDimension(I)F

    move-result v1

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/widget/KSFrameLayout;->setRadius(F)V

    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/presenter/g/b;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-virtual {v1}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v1

    sget v2, Lcom/kwad/sdk/R$dimen;->ksad_reward_apk_info_card_height:I

    invoke-virtual {v1, v2}, Landroid/content/res/Resources;->getDimension(I)F

    move-result v1

    new-instance v2, Lcom/kwad/components/ad/reward/presenter/g/b$1;

    invoke-direct {v2, p0, v0, v1}, Lcom/kwad/components/ad/reward/presenter/g/b$1;-><init>(Lcom/kwad/components/ad/reward/presenter/g/b;Lcom/kwad/sdk/widget/KSFrameLayout;F)V

    invoke-virtual {v0, v2}, Lcom/kwad/sdk/widget/KSFrameLayout;->post(Ljava/lang/Runnable;)Z

    sget v0, Lcom/kwad/sdk/R$id;->ksad_reward_apk_info_card_native_container:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/reward/presenter/g/b;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/view/ViewGroup;

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/g/b;->xa:Landroid/view/ViewGroup;

    new-instance v1, Lcom/kwad/components/ad/reward/m/c;

    invoke-direct {v1, v0}, Lcom/kwad/components/ad/reward/m/c;-><init>(Landroid/view/View;)V

    iput-object v1, p0, Lcom/kwad/components/ad/reward/presenter/g/b;->xc:Lcom/kwad/components/ad/reward/m/c;

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/g/b;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

    invoke-virtual {v1, v0}, Lcom/kwad/components/ad/reward/m/c;->a(Lcom/kwad/components/core/e/d/c;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/g/b;->xc:Lcom/kwad/components/ad/reward/m/c;

    invoke-virtual {v0, p0}, Lcom/kwad/components/ad/reward/m/c;->a(Lcom/kwad/components/ad/reward/m/c$a;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/g/b;->xc:Lcom/kwad/components/ad/reward/m/c;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/g/b;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v1, v1, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    const/4 v2, 0x0

    invoke-virtual {v0, v1, v2}, Lcom/kwad/components/ad/reward/m/c;->c(Lcom/kwad/sdk/core/response/model/AdTemplate;Z)V

    sget v0, Lcom/kwad/sdk/R$id;->ksad_reward_apk_info_card_h5:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/reward/presenter/g/b;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Lcom/kwad/sdk/core/webview/KsAdWebView;

    new-instance v1, Lcom/kwad/components/ad/reward/m/e;

    iget-object v2, p0, Lcom/kwad/components/ad/reward/presenter/g/b;->xa:Landroid/view/ViewGroup;

    iget-object v3, p0, Lcom/kwad/components/ad/reward/presenter/g/b;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v3, v3, Lcom/kwad/components/ad/reward/j;->mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

    invoke-direct {v1, v0, v2, v3, p0}, Lcom/kwad/components/ad/reward/m/e;-><init>(Lcom/kwad/sdk/core/webview/KsAdWebView;Landroid/view/View;Lcom/kwad/components/core/e/d/c;Lcom/kwad/sdk/core/webview/d/a/a;)V

    iput-object v1, p0, Lcom/kwad/components/ad/reward/presenter/g/b;->xb:Lcom/kwad/components/ad/reward/m/e;

    new-instance v0, Lcom/kwad/components/ad/reward/presenter/g/b$2;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/reward/presenter/g/b$2;-><init>(Lcom/kwad/components/ad/reward/presenter/g/b;)V

    invoke-virtual {v1, v0}, Lcom/kwad/components/ad/reward/m/e;->a(Lcom/kwad/components/ad/reward/m/f;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/g/b;->xb:Lcom/kwad/components/ad/reward/m/e;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/g/b;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v1, v1, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-virtual {v0, v1, p1}, Lcom/kwad/components/ad/reward/m/e;->a(Lcom/kwad/sdk/core/response/model/AdTemplate;Landroid/view/ViewGroup;)V

    return-void
.end method

.method private aa(Z)V
    .locals 3

    const/4 v0, 0x1

    if-eqz p1, :cond_0

    move p1, v0

    goto :goto_0

    :cond_0
    const/16 p1, 0x99

    :goto_0
    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/g/b;->qx:Lcom/kwad/components/ad/reward/j;

    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/presenter/g/b;->getContext()Landroid/content/Context;

    move-result-object v2

    invoke-virtual {v1, v0, v2, p1, v0}, Lcom/kwad/components/ad/reward/j;->a(ILandroid/content/Context;II)V

    return-void
.end method

.method static synthetic b(Lcom/kwad/components/ad/reward/presenter/g/b;)Lcom/kwad/components/ad/reward/m/c;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/g/b;->xc:Lcom/kwad/components/ad/reward/m/c;

    return-object p0
.end method

.method static synthetic c(Lcom/kwad/components/ad/reward/presenter/g/b;)Lcom/kwad/components/ad/reward/j;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/g/b;->qx:Lcom/kwad/components/ad/reward/j;

    return-object p0
.end method

.method static synthetic d(Lcom/kwad/components/ad/reward/presenter/g/b;)Lcom/kwad/components/ad/reward/m/c;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/g/b;->xd:Lcom/kwad/components/ad/reward/m/c;

    return-object p0
.end method

.method private jk()Z
    .locals 6

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "checkUseAppTime appBackgroundTimestamp: "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-wide v1, p0, Lcom/kwad/components/ad/reward/presenter/g/b;->xh:J

    invoke-virtual {v0, v1, v2}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "LaunchAppTaskPresenter"

    invoke-static {v1, v0}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    iget-wide v0, p0, Lcom/kwad/components/ad/reward/presenter/g/b;->xh:J

    const-wide/16 v2, 0x0

    cmp-long v0, v0, v2

    const/4 v1, 0x0

    if-gez v0, :cond_0

    return v1

    :cond_0
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v2

    iget-wide v4, p0, Lcom/kwad/components/ad/reward/presenter/g/b;->xh:J

    sub-long/2addr v2, v4

    iget v0, p0, Lcom/kwad/components/ad/reward/presenter/g/b;->xg:I

    mul-int/lit16 v0, v0, 0x3e8

    int-to-long v4, v0

    cmp-long v0, v2, v4

    if-lez v0, :cond_1

    const/4 v0, 0x1

    return v0

    :cond_1
    return v1
.end method


# virtual methods
.method public final S(Ljava/lang/String;)V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/g/b;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->aq(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0, p1}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_0

    return-void

    :cond_0
    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/g/b;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object p1, p1, Lcom/kwad/components/ad/reward/j;->pA:Lcom/kwad/components/ad/reward/k/b/a;

    if-eqz p1, :cond_1

    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/g/b;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object p1, p1, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {p1}, Lcom/kwad/components/ad/reward/j;->r(Lcom/kwad/sdk/core/response/model/AdTemplate;)Z

    move-result p1

    if-eqz p1, :cond_1

    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/g/b;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object p1, p1, Lcom/kwad/components/ad/reward/j;->pA:Lcom/kwad/components/ad/reward/k/b/a;

    invoke-virtual {p1}, Lcom/kwad/components/ad/reward/k/b/a;->jJ()V

    invoke-static {}, Lcom/kwad/sdk/core/c/b;->AU()Lcom/kwad/sdk/core/c/b;

    invoke-static {}, Lcom/kwad/sdk/core/c/b;->isAppOnForeground()Z

    move-result p1

    if-nez p1, :cond_1

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/components/ad/reward/presenter/g/b;->xh:J

    :cond_1
    return-void
.end method

.method public final a(Landroid/view/View;)V
    .locals 0

    const/4 p1, 0x1

    invoke-direct {p0, p1}, Lcom/kwad/components/ad/reward/presenter/g/b;->aa(Z)V

    return-void
.end method

.method public final a(Lcom/kwad/sdk/core/webview/d/b/a;)V
    .locals 0

    return-void
.end method

.method public final ah()V
    .locals 5

    invoke-super {p0}, Lcom/kwad/components/ad/reward/presenter/a;->ah()V

    const-string v0, "LaunchAppTaskPresenter"

    const-string v1, "onBind"

    invoke-static {v0, v1}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/g/b;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/j;->r(Lcom/kwad/sdk/core/response/model/AdTemplate;)Z

    move-result v0

    if-nez v0, :cond_0

    return-void

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/g/b;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/g/b;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {}, Lcom/kwad/components/ad/reward/a/b;->gE()I

    move-result v0

    iput v0, p0, Lcom/kwad/components/ad/reward/presenter/g/b;->xg:I

    invoke-static {}, Lcom/kwad/sdk/core/c/b;->AU()Lcom/kwad/sdk/core/c/b;

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/g/b;->xj:Lcom/kwad/sdk/core/c/c;

    invoke-static {v0}, Lcom/kwad/sdk/core/c/b;->a(Lcom/kwad/sdk/core/c/c;)V

    invoke-static {}, Lcom/kwad/components/ad/reward/c;->ft()Lcom/kwad/components/ad/reward/c;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/g/b;->mRewardVerifyListener:Lcom/kwad/components/ad/reward/e/j;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/reward/c;->a(Lcom/kwad/components/ad/reward/e/j;)V

    invoke-static {}, Lcom/kwad/components/ad/reward/k/d;->jE()Lcom/kwad/components/ad/reward/k/b/a;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/g/b;->pA:Lcom/kwad/components/ad/reward/k/b/a;

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/g/b;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/g/b;->pA:Lcom/kwad/components/ad/reward/k/b/a;

    iput-object v1, v0, Lcom/kwad/components/ad/reward/j;->pA:Lcom/kwad/components/ad/reward/k/b/a;

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/g/b;->pA:Lcom/kwad/components/ad/reward/k/b/a;

    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/presenter/g/b;->getContext()Landroid/content/Context;

    move-result-object v1

    iget-object v2, p0, Lcom/kwad/components/ad/reward/presenter/g/b;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v2, v2, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0, v1, v2}, Lcom/kwad/components/ad/reward/k/b/a;->a(Lcom/kwad/components/ad/reward/k/b/a;Landroid/content/Context;Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    sget v0, Lcom/kwad/sdk/R$id;->ksad_root_container:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/reward/presenter/g/b;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Lcom/kwad/sdk/core/view/AdBaseFrameLayout;

    sget v1, Lcom/kwad/sdk/R$id;->ksad_activity_apk_info_area_native:I

    invoke-virtual {p0, v1}, Lcom/kwad/components/ad/reward/presenter/g/b;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/view/ViewGroup;

    iput-object v1, p0, Lcom/kwad/components/ad/reward/presenter/g/b;->wY:Landroid/view/ViewGroup;

    if-eqz v1, :cond_1

    const/16 v2, 0x8

    invoke-virtual {v1, v2}, Landroid/view/ViewGroup;->setVisibility(I)V

    new-instance v1, Lcom/kwad/components/ad/reward/m/c;

    iget-object v2, p0, Lcom/kwad/components/ad/reward/presenter/g/b;->wY:Landroid/view/ViewGroup;

    invoke-direct {v1, v2}, Lcom/kwad/components/ad/reward/m/c;-><init>(Landroid/view/View;)V

    iput-object v1, p0, Lcom/kwad/components/ad/reward/presenter/g/b;->xd:Lcom/kwad/components/ad/reward/m/c;

    iget-object v2, p0, Lcom/kwad/components/ad/reward/presenter/g/b;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v2, v2, Lcom/kwad/components/ad/reward/j;->mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

    invoke-virtual {v1, v2}, Lcom/kwad/components/ad/reward/m/c;->a(Lcom/kwad/components/core/e/d/c;)V

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/g/b;->xd:Lcom/kwad/components/ad/reward/m/c;

    invoke-virtual {v1, p0}, Lcom/kwad/components/ad/reward/m/c;->a(Lcom/kwad/components/ad/reward/m/c$a;)V

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/g/b;->xd:Lcom/kwad/components/ad/reward/m/c;

    iget-object v2, p0, Lcom/kwad/components/ad/reward/presenter/g/b;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v2, v2, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    const/4 v3, 0x0

    invoke-virtual {v1, v2, v3}, Lcom/kwad/components/ad/reward/m/c;->c(Lcom/kwad/sdk/core/response/model/AdTemplate;Z)V

    sget v1, Lcom/kwad/sdk/R$id;->ksad_right_area_webview_container:I

    invoke-virtual {p0, v1}, Lcom/kwad/components/ad/reward/presenter/g/b;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Lcom/kwad/sdk/widget/KSFrameLayout;

    invoke-virtual {v1, v3}, Lcom/kwad/sdk/widget/KSFrameLayout;->setWidthBasedRatio(Z)V

    sget v1, Lcom/kwad/sdk/R$id;->ksad_right_area_webview:I

    invoke-virtual {p0, v1}, Lcom/kwad/components/ad/reward/presenter/g/b;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Lcom/kwad/sdk/core/webview/KsAdWebView;

    new-instance v2, Lcom/kwad/components/ad/reward/m/q;

    iget-object v3, p0, Lcom/kwad/components/ad/reward/presenter/g/b;->wY:Landroid/view/ViewGroup;

    iget-object v4, p0, Lcom/kwad/components/ad/reward/presenter/g/b;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v4, v4, Lcom/kwad/components/ad/reward/j;->mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

    invoke-direct {v2, v1, v3, v4, p0}, Lcom/kwad/components/ad/reward/m/q;-><init>(Lcom/kwad/sdk/core/webview/KsAdWebView;Landroid/view/View;Lcom/kwad/components/core/e/d/c;Lcom/kwad/sdk/core/webview/d/a/a;)V

    iput-object v2, p0, Lcom/kwad/components/ad/reward/presenter/g/b;->wZ:Lcom/kwad/components/ad/reward/m/q;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/g/b;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v1, v1, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-virtual {v2, v1, v0}, Lcom/kwad/components/ad/reward/m/q;->a(Lcom/kwad/sdk/core/response/model/AdTemplate;Landroid/view/ViewGroup;)V

    :cond_1
    invoke-static {}, Lcom/kwad/sdk/b/b;->yB()Lcom/kwad/sdk/b/b;

    move-result-object v1

    invoke-virtual {v1, p0}, Lcom/kwad/sdk/b/b;->a(Lcom/kwad/sdk/b/a;)V

    invoke-direct {p0, v0}, Lcom/kwad/components/ad/reward/presenter/g/b;->a(Lcom/kwad/sdk/core/view/AdBaseFrameLayout;)V

    return-void
.end method

.method public final b(Landroid/view/View;)V
    .locals 0

    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/g/b;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object p1, p1, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/c;->bV(Lcom/kwad/sdk/core/response/model/AdTemplate;)Z

    move-result p1

    if-eqz p1, :cond_0

    const/4 p1, 0x0

    invoke-direct {p0, p1}, Lcom/kwad/components/ad/reward/presenter/g/b;->aa(Z)V

    :cond_0
    return-void
.end method

.method public final c(ZI)V
    .locals 2

    const/4 p2, 0x1

    if-eqz p1, :cond_0

    move p1, p2

    goto :goto_0

    :cond_0
    const/16 p1, 0x99

    :goto_0
    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/g/b;->qx:Lcom/kwad/components/ad/reward/j;

    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/presenter/g/b;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-virtual {v0, p2, v1, p1, p2}, Lcom/kwad/components/ad/reward/j;->b(ILandroid/content/Context;II)V

    return-void
.end method

.method public final onUnbind()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/ad/reward/presenter/a;->onUnbind()V

    const-string v0, "LaunchAppTaskPresenter"

    const-string v1, "onUnbind"

    invoke-static {v0, v1}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    invoke-static {}, Lcom/kwad/sdk/core/c/b;->AU()Lcom/kwad/sdk/core/c/b;

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/g/b;->xj:Lcom/kwad/sdk/core/c/c;

    invoke-static {v0}, Lcom/kwad/sdk/core/c/b;->b(Lcom/kwad/sdk/core/c/c;)V

    invoke-static {}, Lcom/kwad/components/ad/reward/c;->ft()Lcom/kwad/components/ad/reward/c;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/g/b;->mRewardVerifyListener:Lcom/kwad/components/ad/reward/e/j;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/reward/c;->b(Lcom/kwad/components/ad/reward/e/j;)V

    invoke-static {}, Lcom/kwad/sdk/b/b;->yB()Lcom/kwad/sdk/b/b;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/kwad/sdk/b/b;->b(Lcom/kwad/sdk/b/a;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/g/b;->xb:Lcom/kwad/components/ad/reward/m/e;

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/kwad/components/ad/reward/m/e;->jX()V

    iput-object v1, p0, Lcom/kwad/components/ad/reward/presenter/g/b;->xb:Lcom/kwad/components/ad/reward/m/e;

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/g/b;->xd:Lcom/kwad/components/ad/reward/m/c;

    if-eqz v0, :cond_1

    invoke-virtual {v0}, Lcom/kwad/components/ad/reward/m/c;->jU()V

    :cond_1
    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/g/b;->qx:Lcom/kwad/components/ad/reward/j;

    iput-object v1, v0, Lcom/kwad/components/ad/reward/j;->pA:Lcom/kwad/components/ad/reward/k/b/a;

    return-void
.end method
