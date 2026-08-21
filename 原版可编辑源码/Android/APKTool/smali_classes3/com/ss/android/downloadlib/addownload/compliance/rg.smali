.class public Lcom/ss/android/downloadlib/addownload/compliance/rg;
.super Landroid/app/Dialog;


# instance fields
.field private b:J

.field private final bm:J

.field private c:Landroid/widget/TextView;

.field private df:Landroid/widget/TextView;

.field private fw:Lcom/ss/android/downloadlib/guide/install/ClipImageView;

.field private final hq:Lcom/ss/android/downloadlib/addownload/model/df;

.field private pp:Landroid/widget/TextView;

.field private pt:Landroid/widget/TextView;

.field private q:Landroid/widget/TextView;

.field private rg:Landroid/widget/TextView;

.field private rz:Landroid/app/Activity;

.field private ux:Landroid/widget/LinearLayout;


# direct methods
.method public constructor <init>(Landroid/app/Activity;J)V
    .locals 0

    .line 39
    invoke-direct {p0, p1}, Landroid/app/Dialog;-><init>(Landroid/content/Context;)V

    .line 40
    iput-object p1, p0, Lcom/ss/android/downloadlib/addownload/compliance/rg;->rz:Landroid/app/Activity;

    .line 41
    iput-wide p2, p0, Lcom/ss/android/downloadlib/addownload/compliance/rg;->bm:J

    .line 42
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/compliance/q;->rg()Lcom/ss/android/downloadlib/addownload/compliance/q;

    move-result-object p1

    invoke-static {p2, p3}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object p2

    invoke-virtual {p1, p2}, Lcom/ss/android/downloadlib/addownload/compliance/q;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/ss/android/downloadlib/addownload/model/df;

    iput-object p1, p0, Lcom/ss/android/downloadlib/addownload/compliance/rg;->hq:Lcom/ss/android/downloadlib/addownload/model/df;

    return-void
.end method

.method static synthetic df(Lcom/ss/android/downloadlib/addownload/compliance/rg;)Lcom/ss/android/downloadlib/guide/install/ClipImageView;
    .locals 0

    .line 27
    iget-object p0, p0, Lcom/ss/android/downloadlib/addownload/compliance/rg;->fw:Lcom/ss/android/downloadlib/guide/install/ClipImageView;

    return-object p0
.end method

.method static synthetic pt(Lcom/ss/android/downloadlib/addownload/compliance/rg;)J
    .locals 2

    .line 27
    iget-wide v0, p0, Lcom/ss/android/downloadlib/addownload/compliance/rg;->bm:J

    return-wide v0
.end method

.method static synthetic q(Lcom/ss/android/downloadlib/addownload/compliance/rg;)Landroid/app/Activity;
    .locals 0

    .line 27
    iget-object p0, p0, Lcom/ss/android/downloadlib/addownload/compliance/rg;->rz:Landroid/app/Activity;

    return-object p0
.end method

.method static synthetic rg(Lcom/ss/android/downloadlib/addownload/compliance/rg;)J
    .locals 2

    .line 27
    iget-wide v0, p0, Lcom/ss/android/downloadlib/addownload/compliance/rg;->b:J

    return-wide v0
.end method

.method private rg()V
    .locals 8

    .line 76
    sget v0, Lcom/bytedance/sdk/openadsdk/R$id;->tv_app_name:I

    invoke-virtual {p0, v0}, Lcom/ss/android/downloadlib/addownload/compliance/rg;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/ss/android/downloadlib/addownload/compliance/rg;->rg:Landroid/widget/TextView;

    .line 77
    sget v0, Lcom/bytedance/sdk/openadsdk/R$id;->tv_app_version:I

    invoke-virtual {p0, v0}, Lcom/ss/android/downloadlib/addownload/compliance/rg;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/ss/android/downloadlib/addownload/compliance/rg;->df:Landroid/widget/TextView;

    .line 78
    sget v0, Lcom/bytedance/sdk/openadsdk/R$id;->tv_app_developer:I

    invoke-virtual {p0, v0}, Lcom/ss/android/downloadlib/addownload/compliance/rg;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/ss/android/downloadlib/addownload/compliance/rg;->q:Landroid/widget/TextView;

    .line 79
    sget v0, Lcom/bytedance/sdk/openadsdk/R$id;->tv_app_detail:I

    invoke-virtual {p0, v0}, Lcom/ss/android/downloadlib/addownload/compliance/rg;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/ss/android/downloadlib/addownload/compliance/rg;->pt:Landroid/widget/TextView;

    .line 80
    sget v0, Lcom/bytedance/sdk/openadsdk/R$id;->tv_app_privacy:I

    invoke-virtual {p0, v0}, Lcom/ss/android/downloadlib/addownload/compliance/rg;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/ss/android/downloadlib/addownload/compliance/rg;->pp:Landroid/widget/TextView;

    .line 81
    sget v0, Lcom/bytedance/sdk/openadsdk/R$id;->tv_give_up:I

    invoke-virtual {p0, v0}, Lcom/ss/android/downloadlib/addownload/compliance/rg;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/ss/android/downloadlib/addownload/compliance/rg;->c:Landroid/widget/TextView;

    .line 82
    sget v0, Lcom/bytedance/sdk/openadsdk/R$id;->iv_app_icon:I

    invoke-virtual {p0, v0}, Lcom/ss/android/downloadlib/addownload/compliance/rg;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Lcom/ss/android/downloadlib/guide/install/ClipImageView;

    iput-object v0, p0, Lcom/ss/android/downloadlib/addownload/compliance/rg;->fw:Lcom/ss/android/downloadlib/guide/install/ClipImageView;

    .line 83
    sget v0, Lcom/bytedance/sdk/openadsdk/R$id;->ll_download:I

    invoke-virtual {p0, v0}, Lcom/ss/android/downloadlib/addownload/compliance/rg;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/LinearLayout;

    iput-object v0, p0, Lcom/ss/android/downloadlib/addownload/compliance/rg;->ux:Landroid/widget/LinearLayout;

    .line 85
    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/compliance/rg;->rg:Landroid/widget/TextView;

    const/4 v1, 0x2

    new-array v2, v1, [Ljava/lang/String;

    iget-object v3, p0, Lcom/ss/android/downloadlib/addownload/compliance/rg;->hq:Lcom/ss/android/downloadlib/addownload/model/df;

    iget-object v3, v3, Lcom/ss/android/downloadlib/addownload/model/df;->pp:Ljava/lang/String;

    const/4 v4, 0x0

    aput-object v3, v2, v4

    const-string v3, "--"

    const/4 v5, 0x1

    aput-object v3, v2, v5

    invoke-static {v2}, Lcom/ss/android/downloadlib/utils/b;->rg([Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 86
    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/compliance/rg;->df:Landroid/widget/TextView;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, "\u7248\u672c\u53f7\uff1a"

    invoke-virtual {v2, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    new-array v6, v1, [Ljava/lang/String;

    iget-object v7, p0, Lcom/ss/android/downloadlib/addownload/compliance/rg;->hq:Lcom/ss/android/downloadlib/addownload/model/df;

    iget-object v7, v7, Lcom/ss/android/downloadlib/addownload/model/df;->c:Ljava/lang/String;

    aput-object v7, v6, v4

    aput-object v3, v6, v5

    invoke-static {v6}, Lcom/ss/android/downloadlib/utils/b;->rg([Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 87
    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/compliance/rg;->q:Landroid/widget/TextView;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "\u5f00\u53d1\u8005\uff1a"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    new-array v1, v1, [Ljava/lang/String;

    iget-object v3, p0, Lcom/ss/android/downloadlib/addownload/compliance/rg;->hq:Lcom/ss/android/downloadlib/addownload/model/df;

    iget-object v3, v3, Lcom/ss/android/downloadlib/addownload/model/df;->fw:Ljava/lang/String;

    aput-object v3, v1, v4

    const-string v3, "\u5e94\u7528\u4fe1\u606f\u6b63\u5728\u5b8c\u5584\u4e2d"

    aput-object v3, v1, v5

    invoke-static {v1}, Lcom/ss/android/downloadlib/utils/b;->rg([Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 89
    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/compliance/rg;->fw:Lcom/ss/android/downloadlib/guide/install/ClipImageView;

    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->getContext()Landroid/content/Context;

    move-result-object v1

    const/high16 v2, 0x41000000    # 8.0f

    invoke-static {v1, v2}, Lcom/ss/android/downloadlib/utils/b;->rg(Landroid/content/Context;F)I

    move-result v1

    invoke-virtual {v0, v1}, Lcom/ss/android/downloadlib/guide/install/ClipImageView;->setRoundRadius(I)V

    .line 90
    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/compliance/rg;->fw:Lcom/ss/android/downloadlib/guide/install/ClipImageView;

    const-string v1, "#EBEBEB"

    invoke-static {v1}, Landroid/graphics/Color;->parseColor(Ljava/lang/String;)I

    move-result v1

    invoke-virtual {v0, v1}, Lcom/ss/android/downloadlib/guide/install/ClipImageView;->setBackgroundColor(I)V

    .line 91
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/compliance/pt;->rg()Lcom/ss/android/downloadlib/addownload/compliance/pt;

    move-result-object v0

    iget-wide v1, p0, Lcom/ss/android/downloadlib/addownload/compliance/rg;->bm:J

    new-instance v3, Lcom/ss/android/downloadlib/addownload/compliance/rg$2;

    invoke-direct {v3, p0}, Lcom/ss/android/downloadlib/addownload/compliance/rg$2;-><init>(Lcom/ss/android/downloadlib/addownload/compliance/rg;)V

    invoke-virtual {v0, v1, v2, v3}, Lcom/ss/android/downloadlib/addownload/compliance/pt;->rg(JLcom/ss/android/downloadlib/addownload/compliance/pt$rg;)V

    .line 103
    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/compliance/rg;->pt:Landroid/widget/TextView;

    new-instance v1, Lcom/ss/android/downloadlib/addownload/compliance/rg$3;

    invoke-direct {v1, p0}, Lcom/ss/android/downloadlib/addownload/compliance/rg$3;-><init>(Lcom/ss/android/downloadlib/addownload/compliance/rg;)V

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 112
    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/compliance/rg;->pp:Landroid/widget/TextView;

    new-instance v1, Lcom/ss/android/downloadlib/addownload/compliance/rg$4;

    invoke-direct {v1, p0}, Lcom/ss/android/downloadlib/addownload/compliance/rg$4;-><init>(Lcom/ss/android/downloadlib/addownload/compliance/rg;)V

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 121
    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/compliance/rg;->c:Landroid/widget/TextView;

    new-instance v1, Lcom/ss/android/downloadlib/addownload/compliance/rg$5;

    invoke-direct {v1, p0}, Lcom/ss/android/downloadlib/addownload/compliance/rg$5;-><init>(Lcom/ss/android/downloadlib/addownload/compliance/rg;)V

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 128
    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/compliance/rg;->ux:Landroid/widget/LinearLayout;

    new-instance v1, Lcom/ss/android/downloadlib/addownload/compliance/rg$6;

    invoke-direct {v1, p0}, Lcom/ss/android/downloadlib/addownload/compliance/rg$6;-><init>(Lcom/ss/android/downloadlib/addownload/compliance/rg;)V

    invoke-virtual {v0, v1}, Landroid/widget/LinearLayout;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    return-void
.end method


# virtual methods
.method public dismiss()V
    .locals 1

    .line 140
    invoke-super {p0}, Landroid/app/Dialog;->dismiss()V

    .line 141
    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/compliance/rg;->rz:Landroid/app/Activity;

    invoke-static {v0}, Lcom/ss/android/socialbase/appdownloader/q;->rg(Landroid/app/Activity;)V

    return-void
.end method

.method protected onCreate(Landroid/os/Bundle;)V
    .locals 2

    .line 47
    invoke-super {p0, p1}, Landroid/app/Dialog;->onCreate(Landroid/os/Bundle;)V

    .line 48
    iget-object p1, p0, Lcom/ss/android/downloadlib/addownload/compliance/rg;->hq:Lcom/ss/android/downloadlib/addownload/model/df;

    if-nez p1, :cond_0

    .line 50
    invoke-virtual {p0}, Lcom/ss/android/downloadlib/addownload/compliance/rg;->dismiss()V

    return-void

    :cond_0
    const/4 p1, 0x1

    .line 54
    invoke-virtual {p0, p1}, Lcom/ss/android/downloadlib/addownload/compliance/rg;->requestWindowFeature(I)Z

    .line 55
    sget v0, Lcom/bytedance/sdk/openadsdk/R$layout;->ttdownloader_dialog_appinfo:I

    invoke-virtual {p0, v0}, Lcom/ss/android/downloadlib/addownload/compliance/rg;->setContentView(I)V

    .line 56
    invoke-virtual {p0}, Lcom/ss/android/downloadlib/addownload/compliance/rg;->getWindow()Landroid/view/Window;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 58
    sget v1, Lcom/bytedance/sdk/openadsdk/R$drawable;->ttdownloader_bg_transparent:I

    invoke-virtual {v0, v1}, Landroid/view/Window;->setBackgroundDrawableResource(I)V

    .line 60
    :cond_1
    invoke-virtual {p0, p1}, Lcom/ss/android/downloadlib/addownload/compliance/rg;->setCancelable(Z)V

    .line 61
    invoke-virtual {p0, p1}, Lcom/ss/android/downloadlib/addownload/compliance/rg;->setCanceledOnTouchOutside(Z)V

    .line 63
    iget-object p1, p0, Lcom/ss/android/downloadlib/addownload/compliance/rg;->hq:Lcom/ss/android/downloadlib/addownload/model/df;

    iget-wide v0, p1, Lcom/ss/android/downloadlib/addownload/model/df;->df:J

    iput-wide v0, p0, Lcom/ss/android/downloadlib/addownload/compliance/rg;->b:J

    .line 64
    invoke-direct {p0}, Lcom/ss/android/downloadlib/addownload/compliance/rg;->rg()V

    .line 66
    iget-wide v0, p0, Lcom/ss/android/downloadlib/addownload/compliance/rg;->b:J

    const-string p1, "lp_app_dialog_show"

    invoke-static {p1, v0, v1}, Lcom/ss/android/downloadlib/addownload/compliance/pp;->df(Ljava/lang/String;J)V

    .line 67
    new-instance p1, Lcom/ss/android/downloadlib/addownload/compliance/rg$1;

    invoke-direct {p1, p0}, Lcom/ss/android/downloadlib/addownload/compliance/rg$1;-><init>(Lcom/ss/android/downloadlib/addownload/compliance/rg;)V

    invoke-virtual {p0, p1}, Lcom/ss/android/downloadlib/addownload/compliance/rg;->setOnCancelListener(Landroid/content/DialogInterface$OnCancelListener;)V

    return-void
.end method
