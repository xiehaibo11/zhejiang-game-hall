.class final Lcom/bianfeng/yidonglogin/utils/LoadingDialogUtils$1;
.super Ljava/lang/Object;
.source "LoadingDialogUtils.java"

# interfaces
.implements Landroid/content/DialogInterface$OnKeyListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bianfeng/yidonglogin/utils/LoadingDialogUtils;->show(Landroid/content/Context;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation


# direct methods
.method constructor <init>()V
    .locals 0

    .line 18
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onKey(Landroid/content/DialogInterface;ILandroid/view/KeyEvent;)Z
    .locals 1

    .line 21
    invoke-virtual {p3}, Landroid/view/KeyEvent;->getAction()I

    move-result p3

    const/4 v0, 0x1

    if-ne p3, v0, :cond_0

    .line 22
    invoke-interface {p1}, Landroid/content/DialogInterface;->dismiss()V

    const/4 p1, 0x0

    .line 23
    invoke-static {p1}, Lcom/bianfeng/yidonglogin/utils/LoadingDialogUtils;->access$002(Landroid/app/Dialog;)Landroid/app/Dialog;

    :cond_0
    const/4 p1, 0x4

    if-ne p2, p1, :cond_1

    goto :goto_0

    :cond_1
    const/4 v0, 0x0

    :goto_0
    return v0
.end method
