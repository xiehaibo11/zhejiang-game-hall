.class public Lcom/ss/android/downloadlib/addownload/rg/pt;
.super Landroid/app/Dialog;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/ss/android/downloadlib/addownload/rg/pt$rg;
    }
.end annotation


# instance fields
.field private c:Landroid/app/Activity;

.field private df:Landroid/widget/TextView;

.field private fw:Ljava/lang/String;

.field private pp:Z

.field private pt:Lcom/ss/android/downloadlib/addownload/rg/q;

.field private q:Landroid/widget/TextView;

.field private rg:Landroid/widget/TextView;

.field private rz:Ljava/lang/String;

.field private ux:Ljava/lang/String;


# direct methods
.method public constructor <init>(Landroid/app/Activity;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;ZLcom/ss/android/downloadlib/addownload/rg/q;)V
    .locals 1

    .line 35
    sget v0, Lcom/bytedance/sdk/openadsdk/R$style;->ttdownloader_translucent_dialog:I

    invoke-direct {p0, p1, v0}, Landroid/app/Dialog;-><init>(Landroid/content/Context;I)V

    .line 36
    iput-object p1, p0, Lcom/ss/android/downloadlib/addownload/rg/pt;->c:Landroid/app/Activity;

    .line 37
    iput-object p6, p0, Lcom/ss/android/downloadlib/addownload/rg/pt;->pt:Lcom/ss/android/downloadlib/addownload/rg/q;

    .line 38
    iput-object p2, p0, Lcom/ss/android/downloadlib/addownload/rg/pt;->fw:Ljava/lang/String;

    .line 39
    iput-object p3, p0, Lcom/ss/android/downloadlib/addownload/rg/pt;->ux:Ljava/lang/String;

    .line 40
    iput-object p4, p0, Lcom/ss/android/downloadlib/addownload/rg/pt;->rz:Ljava/lang/String;

    .line 41
    invoke-virtual {p0, p5}, Lcom/ss/android/downloadlib/addownload/rg/pt;->setCanceledOnTouchOutside(Z)V

    .line 42
    invoke-direct {p0}, Lcom/ss/android/downloadlib/addownload/rg/pt;->pt()V

    return-void
.end method

.method private c()V
    .locals 0

    .line 96
    invoke-virtual {p0}, Lcom/ss/android/downloadlib/addownload/rg/pt;->dismiss()V

    return-void
.end method

.method static synthetic df(Lcom/ss/android/downloadlib/addownload/rg/pt;)V
    .locals 0

    .line 21
    invoke-direct {p0}, Lcom/ss/android/downloadlib/addownload/rg/pt;->c()V

    return-void
.end method

.method private pp()V
    .locals 1

    const/4 v0, 0x1

    .line 91
    iput-boolean v0, p0, Lcom/ss/android/downloadlib/addownload/rg/pt;->pp:Z

    .line 92
    invoke-virtual {p0}, Lcom/ss/android/downloadlib/addownload/rg/pt;->dismiss()V

    return-void
.end method

.method private pt()V
    .locals 3

    .line 47
    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/rg/pt;->c:Landroid/app/Activity;

    invoke-virtual {v0}, Landroid/app/Activity;->getApplicationContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Landroid/view/LayoutInflater;->from(Landroid/content/Context;)Landroid/view/LayoutInflater;

    move-result-object v0

    invoke-virtual {p0}, Lcom/ss/android/downloadlib/addownload/rg/pt;->rg()I

    move-result v1

    const/4 v2, 0x0

    invoke-virtual {v0, v1, v2}, Landroid/view/LayoutInflater;->inflate(ILandroid/view/ViewGroup;)Landroid/view/View;

    move-result-object v0

    .line 48
    invoke-virtual {p0, v0}, Lcom/ss/android/downloadlib/addownload/rg/pt;->setContentView(Landroid/view/View;)V

    .line 49
    invoke-virtual {p0}, Lcom/ss/android/downloadlib/addownload/rg/pt;->df()I

    move-result v0

    invoke-virtual {p0, v0}, Lcom/ss/android/downloadlib/addownload/rg/pt;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/ss/android/downloadlib/addownload/rg/pt;->rg:Landroid/widget/TextView;

    .line 50
    invoke-virtual {p0}, Lcom/ss/android/downloadlib/addownload/rg/pt;->q()I

    move-result v0

    invoke-virtual {p0, v0}, Lcom/ss/android/downloadlib/addownload/rg/pt;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/ss/android/downloadlib/addownload/rg/pt;->df:Landroid/widget/TextView;

    .line 51
    sget v0, Lcom/bytedance/sdk/openadsdk/R$id;->message_tv:I

    invoke-virtual {p0, v0}, Lcom/ss/android/downloadlib/addownload/rg/pt;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/ss/android/downloadlib/addownload/rg/pt;->q:Landroid/widget/TextView;

    .line 52
    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/rg/pt;->ux:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 53
    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/rg/pt;->rg:Landroid/widget/TextView;

    iget-object v1, p0, Lcom/ss/android/downloadlib/addownload/rg/pt;->ux:Ljava/lang/String;

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 55
    :cond_0
    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/rg/pt;->rz:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    .line 56
    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/rg/pt;->df:Landroid/widget/TextView;

    iget-object v1, p0, Lcom/ss/android/downloadlib/addownload/rg/pt;->rz:Ljava/lang/String;

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 58
    :cond_1
    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/rg/pt;->fw:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_2

    .line 59
    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/rg/pt;->q:Landroid/widget/TextView;

    iget-object v1, p0, Lcom/ss/android/downloadlib/addownload/rg/pt;->fw:Ljava/lang/String;

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 61
    :cond_2
    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/rg/pt;->rg:Landroid/widget/TextView;

    new-instance v1, Lcom/ss/android/downloadlib/addownload/rg/pt$1;

    invoke-direct {v1, p0}, Lcom/ss/android/downloadlib/addownload/rg/pt$1;-><init>(Lcom/ss/android/downloadlib/addownload/rg/pt;)V

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 67
    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/rg/pt;->df:Landroid/widget/TextView;

    new-instance v1, Lcom/ss/android/downloadlib/addownload/rg/pt$2;

    invoke-direct {v1, p0}, Lcom/ss/android/downloadlib/addownload/rg/pt$2;-><init>(Lcom/ss/android/downloadlib/addownload/rg/pt;)V

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    return-void
.end method

.method static synthetic rg(Lcom/ss/android/downloadlib/addownload/rg/pt;)V
    .locals 0

    .line 21
    invoke-direct {p0}, Lcom/ss/android/downloadlib/addownload/rg/pt;->pp()V

    return-void
.end method


# virtual methods
.method public df()I
    .locals 1

    .line 82
    sget v0, Lcom/bytedance/sdk/openadsdk/R$id;->confirm_tv:I

    return v0
.end method

.method public dismiss()V
    .locals 1

    .line 101
    invoke-super {p0}, Landroid/app/Dialog;->dismiss()V

    .line 102
    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/rg/pt;->c:Landroid/app/Activity;

    invoke-virtual {v0}, Landroid/app/Activity;->isFinishing()Z

    move-result v0

    if-nez v0, :cond_0

    .line 103
    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/rg/pt;->c:Landroid/app/Activity;

    invoke-virtual {v0}, Landroid/app/Activity;->finish()V

    .line 105
    :cond_0
    iget-boolean v0, p0, Lcom/ss/android/downloadlib/addownload/rg/pt;->pp:Z

    if-eqz v0, :cond_1

    .line 106
    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/rg/pt;->pt:Lcom/ss/android/downloadlib/addownload/rg/q;

    invoke-interface {v0}, Lcom/ss/android/downloadlib/addownload/rg/q;->rg()V

    goto :goto_0

    .line 108
    :cond_1
    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/rg/pt;->pt:Lcom/ss/android/downloadlib/addownload/rg/q;

    invoke-interface {v0}, Lcom/ss/android/downloadlib/addownload/rg/q;->df()V

    :goto_0
    return-void
.end method

.method public dispatchKeyEvent(Landroid/view/KeyEvent;)Z
    .locals 2

    .line 114
    invoke-virtual {p1}, Landroid/view/KeyEvent;->getKeyCode()I

    move-result v0

    const/4 v1, 0x4

    if-ne v0, v1, :cond_0

    const/4 p1, 0x1

    return p1

    .line 117
    :cond_0
    invoke-super {p0, p1}, Landroid/app/Dialog;->dispatchKeyEvent(Landroid/view/KeyEvent;)Z

    move-result p1

    return p1
.end method

.method public q()I
    .locals 1

    .line 87
    sget v0, Lcom/bytedance/sdk/openadsdk/R$id;->cancel_tv:I

    return v0
.end method

.method public rg()I
    .locals 1

    .line 77
    sget v0, Lcom/bytedance/sdk/openadsdk/R$layout;->ttdownloader_dialog_select_operation:I

    return v0
.end method
