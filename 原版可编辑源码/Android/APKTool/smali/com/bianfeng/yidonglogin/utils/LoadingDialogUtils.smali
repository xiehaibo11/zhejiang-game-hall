.class public Lcom/bianfeng/yidonglogin/utils/LoadingDialogUtils;
.super Ljava/lang/Object;
.source "LoadingDialogUtils.java"


# static fields
.field private static alertDialog:Landroid/app/Dialog;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 11
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method static synthetic access$002(Landroid/app/Dialog;)Landroid/app/Dialog;
    .locals 0

    .line 11
    sput-object p0, Lcom/bianfeng/yidonglogin/utils/LoadingDialogUtils;->alertDialog:Landroid/app/Dialog;

    return-object p0
.end method

.method public static dismiss()V
    .locals 1

    .line 33
    sget-object v0, Lcom/bianfeng/yidonglogin/utils/LoadingDialogUtils;->alertDialog:Landroid/app/Dialog;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Landroid/app/Dialog;->isShowing()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 34
    sget-object v0, Lcom/bianfeng/yidonglogin/utils/LoadingDialogUtils;->alertDialog:Landroid/app/Dialog;

    invoke-virtual {v0}, Landroid/app/Dialog;->dismiss()V

    const/4 v0, 0x0

    .line 35
    sput-object v0, Lcom/bianfeng/yidonglogin/utils/LoadingDialogUtils;->alertDialog:Landroid/app/Dialog;

    :cond_0
    return-void
.end method

.method public static show(Landroid/content/Context;)V
    .locals 3

    .line 15
    new-instance v0, Landroid/app/AlertDialog$Builder;

    invoke-direct {v0, p0}, Landroid/app/AlertDialog$Builder;-><init>(Landroid/content/Context;)V

    invoke-virtual {v0}, Landroid/app/AlertDialog$Builder;->create()Landroid/app/AlertDialog;

    move-result-object v0

    sput-object v0, Lcom/bianfeng/yidonglogin/utils/LoadingDialogUtils;->alertDialog:Landroid/app/Dialog;

    const/4 v1, 0x0

    .line 16
    invoke-virtual {v0, v1}, Landroid/app/Dialog;->setCancelable(Z)V

    .line 17
    sget-object v0, Lcom/bianfeng/yidonglogin/utils/LoadingDialogUtils;->alertDialog:Landroid/app/Dialog;

    invoke-virtual {v0, v1}, Landroid/app/Dialog;->setCanceledOnTouchOutside(Z)V

    .line 18
    sget-object v0, Lcom/bianfeng/yidonglogin/utils/LoadingDialogUtils;->alertDialog:Landroid/app/Dialog;

    new-instance v1, Lcom/bianfeng/yidonglogin/utils/LoadingDialogUtils$1;

    invoke-direct {v1}, Lcom/bianfeng/yidonglogin/utils/LoadingDialogUtils$1;-><init>()V

    invoke-virtual {v0, v1}, Landroid/app/Dialog;->setOnKeyListener(Landroid/content/DialogInterface$OnKeyListener;)V

    .line 28
    sget-object v0, Lcom/bianfeng/yidonglogin/utils/LoadingDialogUtils;->alertDialog:Landroid/app/Dialog;

    invoke-virtual {v0}, Landroid/app/Dialog;->show()V

    .line 29
    sget-object v0, Lcom/bianfeng/yidonglogin/utils/LoadingDialogUtils;->alertDialog:Landroid/app/Dialog;

    invoke-static {p0}, Landroid/view/LayoutInflater;->from(Landroid/content/Context;)Landroid/view/LayoutInflater;

    move-result-object v1

    const-string v2, "R.layout.yidonglogin_loading_alert"

    invoke-static {p0, v2}, Lcom/bianfeng/ymnsdk/util/ResourceManger;->getId(Landroid/content/Context;Ljava/lang/String;)I

    move-result p0

    const/4 v2, 0x0

    invoke-virtual {v1, p0, v2}, Landroid/view/LayoutInflater;->inflate(ILandroid/view/ViewGroup;)Landroid/view/View;

    move-result-object p0

    invoke-virtual {v0, p0}, Landroid/app/Dialog;->setContentView(Landroid/view/View;)V

    return-void
.end method
