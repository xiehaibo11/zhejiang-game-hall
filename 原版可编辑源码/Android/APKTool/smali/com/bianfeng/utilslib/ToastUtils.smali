.class public Lcom/bianfeng/utilslib/ToastUtils;
.super Ljava/lang/Object;
.source "ToastUtils.java"


# static fields
.field private static utils:Lcom/bianfeng/utilslib/ToastUtils;


# instance fields
.field private mToast:Landroid/widget/Toast;


# direct methods
.method private constructor <init>()V
    .locals 0

    .line 13
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method static synthetic access$000(Lcom/bianfeng/utilslib/ToastUtils;)Landroid/widget/Toast;
    .locals 0

    .line 9
    iget-object p0, p0, Lcom/bianfeng/utilslib/ToastUtils;->mToast:Landroid/widget/Toast;

    return-object p0
.end method

.method public static getInstance()Lcom/bianfeng/utilslib/ToastUtils;
    .locals 2

    .line 17
    sget-object v0, Lcom/bianfeng/utilslib/ToastUtils;->utils:Lcom/bianfeng/utilslib/ToastUtils;

    if-nez v0, :cond_1

    .line 18
    const-class v0, Lcom/bianfeng/utilslib/ToastUtils;

    monitor-enter v0

    .line 19
    :try_start_0
    sget-object v1, Lcom/bianfeng/utilslib/ToastUtils;->utils:Lcom/bianfeng/utilslib/ToastUtils;

    if-nez v1, :cond_0

    .line 20
    new-instance v1, Lcom/bianfeng/utilslib/ToastUtils;

    invoke-direct {v1}, Lcom/bianfeng/utilslib/ToastUtils;-><init>()V

    sput-object v1, Lcom/bianfeng/utilslib/ToastUtils;->utils:Lcom/bianfeng/utilslib/ToastUtils;

    .line 22
    :cond_0
    monitor-exit v0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1

    .line 24
    :cond_1
    :goto_0
    sget-object v0, Lcom/bianfeng/utilslib/ToastUtils;->utils:Lcom/bianfeng/utilslib/ToastUtils;

    return-object v0
.end method

.method private show(Landroid/app/Activity;)V
    .locals 1

    .line 56
    new-instance v0, Lcom/bianfeng/utilslib/ToastUtils$1;

    invoke-direct {v0, p0}, Lcom/bianfeng/utilslib/ToastUtils$1;-><init>(Lcom/bianfeng/utilslib/ToastUtils;)V

    invoke-virtual {p1, v0}, Landroid/app/Activity;->runOnUiThread(Ljava/lang/Runnable;)V

    return-void
.end method


# virtual methods
.method public show(Landroid/app/Activity;I)V
    .locals 2

    .line 68
    iget-object v0, p0, Lcom/bianfeng/utilslib/ToastUtils;->mToast:Landroid/widget/Toast;

    const/4 v1, 0x0

    if-nez v0, :cond_0

    .line 69
    invoke-static {p1, p2, v1}, Landroid/widget/Toast;->makeText(Landroid/content/Context;II)Landroid/widget/Toast;

    move-result-object p2

    iput-object p2, p0, Lcom/bianfeng/utilslib/ToastUtils;->mToast:Landroid/widget/Toast;

    goto :goto_0

    .line 72
    :cond_0
    invoke-virtual {v0, p2}, Landroid/widget/Toast;->setText(I)V

    .line 74
    :goto_0
    iget-object p2, p0, Lcom/bianfeng/utilslib/ToastUtils;->mToast:Landroid/widget/Toast;

    const/16 v0, 0x11

    invoke-virtual {p2, v0, v1, v1}, Landroid/widget/Toast;->setGravity(III)V

    .line 75
    invoke-direct {p0, p1}, Lcom/bianfeng/utilslib/ToastUtils;->show(Landroid/app/Activity;)V

    return-void
.end method

.method public show(Landroid/app/Activity;Ljava/lang/String;)V
    .locals 2

    .line 31
    iget-object v0, p0, Lcom/bianfeng/utilslib/ToastUtils;->mToast:Landroid/widget/Toast;

    const/4 v1, 0x0

    if-nez v0, :cond_0

    .line 32
    invoke-static {p1, p2, v1}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object p2

    iput-object p2, p0, Lcom/bianfeng/utilslib/ToastUtils;->mToast:Landroid/widget/Toast;

    goto :goto_0

    .line 35
    :cond_0
    invoke-virtual {v0, p2}, Landroid/widget/Toast;->setText(Ljava/lang/CharSequence;)V

    .line 37
    :goto_0
    iget-object p2, p0, Lcom/bianfeng/utilslib/ToastUtils;->mToast:Landroid/widget/Toast;

    const/16 v0, 0x11

    invoke-virtual {p2, v0, v1, v1}, Landroid/widget/Toast;->setGravity(III)V

    .line 38
    invoke-direct {p0, p1}, Lcom/bianfeng/utilslib/ToastUtils;->show(Landroid/app/Activity;)V

    return-void
.end method

.method public show(Landroid/app/Activity;Ljava/lang/String;I)V
    .locals 1

    .line 45
    iget-object v0, p0, Lcom/bianfeng/utilslib/ToastUtils;->mToast:Landroid/widget/Toast;

    if-nez v0, :cond_0

    const/4 v0, 0x1

    .line 46
    invoke-static {p1, p2, v0}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object p2

    iput-object p2, p0, Lcom/bianfeng/utilslib/ToastUtils;->mToast:Landroid/widget/Toast;

    goto :goto_0

    .line 49
    :cond_0
    invoke-virtual {v0, p2}, Landroid/widget/Toast;->setText(Ljava/lang/CharSequence;)V

    .line 51
    :goto_0
    iget-object p2, p0, Lcom/bianfeng/utilslib/ToastUtils;->mToast:Landroid/widget/Toast;

    const/4 v0, 0x0

    invoke-virtual {p2, p3, v0, v0}, Landroid/widget/Toast;->setGravity(III)V

    .line 52
    invoke-direct {p0, p1}, Lcom/bianfeng/utilslib/ToastUtils;->show(Landroid/app/Activity;)V

    return-void
.end method

.method public showImg(Landroid/app/Activity;Ljava/lang/String;I)V
    .locals 1

    .line 82
    iget-object v0, p0, Lcom/bianfeng/utilslib/ToastUtils;->mToast:Landroid/widget/Toast;

    if-nez v0, :cond_0

    const/4 v0, 0x0

    .line 83
    invoke-static {p1, p2, v0}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object p2

    iput-object p2, p0, Lcom/bianfeng/utilslib/ToastUtils;->mToast:Landroid/widget/Toast;

    goto :goto_0

    .line 86
    :cond_0
    invoke-virtual {v0, p2}, Landroid/widget/Toast;->setText(Ljava/lang/CharSequence;)V

    .line 89
    :goto_0
    iget-object p2, p0, Lcom/bianfeng/utilslib/ToastUtils;->mToast:Landroid/widget/Toast;

    invoke-virtual {p2}, Landroid/widget/Toast;->getView()Landroid/view/View;

    move-result-object p2

    check-cast p2, Landroid/widget/LinearLayout;

    .line 90
    new-instance v0, Landroid/widget/ImageView;

    invoke-direct {v0, p1}, Landroid/widget/ImageView;-><init>(Landroid/content/Context;)V

    .line 91
    invoke-virtual {v0, p3}, Landroid/widget/ImageView;->setImageResource(I)V

    .line 92
    invoke-virtual {p2, v0}, Landroid/widget/LinearLayout;->addView(Landroid/view/View;)V

    .line 93
    invoke-direct {p0, p1}, Lcom/bianfeng/utilslib/ToastUtils;->show(Landroid/app/Activity;)V

    return-void
.end method
