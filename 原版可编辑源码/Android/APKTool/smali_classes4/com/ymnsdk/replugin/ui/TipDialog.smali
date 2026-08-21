.class public Lcom/ymnsdk/replugin/ui/TipDialog;
.super Landroid/app/Dialog;
.source "TipDialog.java"

# interfaces
.implements Landroid/view/View$OnClickListener;


# instance fields
.field private cancel_btn:Landroid/widget/Button;

.field private content_tv:Landroid/widget/TextView;

.field private context:Landroid/app/Activity;

.field private negativeListener:Landroid/content/DialogInterface$OnClickListener;

.field private ok_btn:Landroid/widget/Button;

.field private positiveListener:Landroid/content/DialogInterface$OnClickListener;

.field private title_tv:Landroid/widget/TextView;


# direct methods
.method public constructor <init>(Landroid/app/Activity;)V
    .locals 1

    const-string v0, "R.style.DialogActivityTheme"

    .line 23
    invoke-static {p1, v0}, Lcom/ymnsdk/replugin/ui/ResourceManger;->getId(Landroid/content/Context;Ljava/lang/String;)I

    move-result v0

    invoke-direct {p0, p1, v0}, Landroid/app/Dialog;-><init>(Landroid/content/Context;I)V

    .line 24
    iput-object p1, p0, Lcom/ymnsdk/replugin/ui/TipDialog;->context:Landroid/app/Activity;

    const-string v0, "R.layout.replugin_dialog_tip"

    .line 25
    invoke-static {p1, v0}, Lcom/ymnsdk/replugin/ui/ResourceManger;->getId(Landroid/content/Context;Ljava/lang/String;)I

    move-result p1

    invoke-virtual {p0, p1}, Lcom/ymnsdk/replugin/ui/TipDialog;->setContentView(I)V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/view/View;)V
    .locals 3

    .line 92
    invoke-virtual {p1}, Landroid/view/View;->getId()I

    move-result p1

    .line 93
    iget-object v0, p0, Lcom/ymnsdk/replugin/ui/TipDialog;->context:Landroid/app/Activity;

    const-string v1, "R.id.show_ok"

    invoke-static {v0, v1}, Lcom/ymnsdk/replugin/ui/ResourceManger;->getId(Landroid/content/Context;Ljava/lang/String;)I

    move-result v0

    const/4 v1, 0x0

    if-ne p1, v0, :cond_1

    .line 94
    iget-object p1, p0, Lcom/ymnsdk/replugin/ui/TipDialog;->positiveListener:Landroid/content/DialogInterface$OnClickListener;

    if-eqz p1, :cond_0

    invoke-interface {p1, p0, v1}, Landroid/content/DialogInterface$OnClickListener;->onClick(Landroid/content/DialogInterface;I)V

    .line 95
    :cond_0
    invoke-virtual {p0}, Lcom/ymnsdk/replugin/ui/TipDialog;->dismiss()V

    goto :goto_0

    .line 96
    :cond_1
    iget-object v0, p0, Lcom/ymnsdk/replugin/ui/TipDialog;->context:Landroid/app/Activity;

    const-string v2, "R.id.show_cancel"

    invoke-static {v0, v2}, Lcom/ymnsdk/replugin/ui/ResourceManger;->getId(Landroid/content/Context;Ljava/lang/String;)I

    move-result v0

    if-ne p1, v0, :cond_3

    .line 97
    iget-object p1, p0, Lcom/ymnsdk/replugin/ui/TipDialog;->negativeListener:Landroid/content/DialogInterface$OnClickListener;

    if-eqz p1, :cond_2

    invoke-interface {p1, p0, v1}, Landroid/content/DialogInterface$OnClickListener;->onClick(Landroid/content/DialogInterface;I)V

    .line 98
    :cond_2
    invoke-virtual {p0}, Lcom/ymnsdk/replugin/ui/TipDialog;->dismiss()V

    :cond_3
    :goto_0
    return-void
.end method

.method protected onCreate(Landroid/os/Bundle;)V
    .locals 7

    .line 36
    invoke-super {p0, p1}, Landroid/app/Dialog;->onCreate(Landroid/os/Bundle;)V

    .line 37
    invoke-virtual {p0}, Lcom/ymnsdk/replugin/ui/TipDialog;->getWindow()Landroid/view/Window;

    move-result-object p1

    .line 38
    invoke-virtual {p1}, Landroid/view/Window;->getAttributes()Landroid/view/WindowManager$LayoutParams;

    move-result-object v0

    .line 39
    iget-object v1, p0, Lcom/ymnsdk/replugin/ui/TipDialog;->context:Landroid/app/Activity;

    invoke-virtual {v1}, Landroid/app/Activity;->getResources()Landroid/content/res/Resources;

    move-result-object v1

    invoke-virtual {v1}, Landroid/content/res/Resources;->getDisplayMetrics()Landroid/util/DisplayMetrics;

    move-result-object v1

    const/4 v2, 0x0

    .line 40
    invoke-virtual {p0, v2}, Lcom/ymnsdk/replugin/ui/TipDialog;->setCancelable(Z)V

    .line 41
    iget v3, v1, Landroid/util/DisplayMetrics;->heightPixels:I

    .line 42
    iget v1, v1, Landroid/util/DisplayMetrics;->widthPixels:I

    .line 43
    invoke-static {v3, v1}, Ljava/lang/Math;->min(II)I

    move-result v4

    .line 44
    invoke-static {v3, v1}, Ljava/lang/Math;->max(II)I

    move-result v1

    int-to-double v3, v4

    const-wide v5, 0x3fe3333333333333L    # 0.6

    mul-double/2addr v3, v5

    double-to-int v3, v3

    .line 47
    iput v3, v0, Landroid/view/WindowManager$LayoutParams;->height:I

    int-to-double v3, v1

    mul-double/2addr v3, v5

    double-to-int v1, v3

    .line 48
    iput v1, v0, Landroid/view/WindowManager$LayoutParams;->width:I

    .line 49
    iput v2, v0, Landroid/view/WindowManager$LayoutParams;->screenOrientation:I

    .line 50
    invoke-virtual {p1, v0}, Landroid/view/Window;->setAttributes(Landroid/view/WindowManager$LayoutParams;)V

    .line 51
    iget-object p1, p0, Lcom/ymnsdk/replugin/ui/TipDialog;->context:Landroid/app/Activity;

    const-string v0, "R.id.show_ok"

    invoke-static {p1, v0}, Lcom/ymnsdk/replugin/ui/ResourceManger;->getId(Landroid/content/Context;Ljava/lang/String;)I

    move-result p1

    invoke-virtual {p0, p1}, Lcom/ymnsdk/replugin/ui/TipDialog;->findViewById(I)Landroid/view/View;

    move-result-object p1

    check-cast p1, Landroid/widget/Button;

    iput-object p1, p0, Lcom/ymnsdk/replugin/ui/TipDialog;->ok_btn:Landroid/widget/Button;

    .line 52
    iget-object p1, p0, Lcom/ymnsdk/replugin/ui/TipDialog;->context:Landroid/app/Activity;

    const-string v0, "R.id.show_cancel"

    invoke-static {p1, v0}, Lcom/ymnsdk/replugin/ui/ResourceManger;->getId(Landroid/content/Context;Ljava/lang/String;)I

    move-result p1

    invoke-virtual {p0, p1}, Lcom/ymnsdk/replugin/ui/TipDialog;->findViewById(I)Landroid/view/View;

    move-result-object p1

    check-cast p1, Landroid/widget/Button;

    iput-object p1, p0, Lcom/ymnsdk/replugin/ui/TipDialog;->cancel_btn:Landroid/widget/Button;

    .line 53
    iget-object p1, p0, Lcom/ymnsdk/replugin/ui/TipDialog;->context:Landroid/app/Activity;

    const-string v0, "R.id.dialog_title"

    invoke-static {p1, v0}, Lcom/ymnsdk/replugin/ui/ResourceManger;->getId(Landroid/content/Context;Ljava/lang/String;)I

    move-result p1

    invoke-virtual {p0, p1}, Lcom/ymnsdk/replugin/ui/TipDialog;->findViewById(I)Landroid/view/View;

    move-result-object p1

    check-cast p1, Landroid/widget/TextView;

    iput-object p1, p0, Lcom/ymnsdk/replugin/ui/TipDialog;->title_tv:Landroid/widget/TextView;

    .line 54
    iget-object p1, p0, Lcom/ymnsdk/replugin/ui/TipDialog;->context:Landroid/app/Activity;

    const-string v0, "R.id.dialog_content"

    invoke-static {p1, v0}, Lcom/ymnsdk/replugin/ui/ResourceManger;->getId(Landroid/content/Context;Ljava/lang/String;)I

    move-result p1

    invoke-virtual {p0, p1}, Lcom/ymnsdk/replugin/ui/TipDialog;->findViewById(I)Landroid/view/View;

    move-result-object p1

    check-cast p1, Landroid/widget/TextView;

    iput-object p1, p0, Lcom/ymnsdk/replugin/ui/TipDialog;->content_tv:Landroid/widget/TextView;

    .line 55
    iget-object p1, p0, Lcom/ymnsdk/replugin/ui/TipDialog;->ok_btn:Landroid/widget/Button;

    invoke-virtual {p1, p0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 56
    iget-object p1, p0, Lcom/ymnsdk/replugin/ui/TipDialog;->cancel_btn:Landroid/widget/Button;

    invoke-virtual {p1, p0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    return-void
.end method

.method public setContent(Ljava/lang/String;)V
    .locals 1

    .line 66
    iget-object v0, p0, Lcom/ymnsdk/replugin/ui/TipDialog;->content_tv:Landroid/widget/TextView;

    invoke-virtual {v0, p1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    return-void
.end method

.method public setNaBtHide()V
    .locals 2

    .line 87
    iget-object v0, p0, Lcom/ymnsdk/replugin/ui/TipDialog;->cancel_btn:Landroid/widget/Button;

    const/16 v1, 0x8

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setVisibility(I)V

    return-void
.end method

.method public setNegativeButton(Landroid/content/DialogInterface$OnClickListener;)V
    .locals 0

    .line 82
    iput-object p1, p0, Lcom/ymnsdk/replugin/ui/TipDialog;->negativeListener:Landroid/content/DialogInterface$OnClickListener;

    return-void
.end method

.method public setPosBtTx(Ljava/lang/String;)V
    .locals 1

    .line 71
    iget-object v0, p0, Lcom/ymnsdk/replugin/ui/TipDialog;->ok_btn:Landroid/widget/Button;

    invoke-virtual {v0, p1}, Landroid/widget/Button;->setText(Ljava/lang/CharSequence;)V

    return-void
.end method

.method public setPositiveButton(Landroid/content/DialogInterface$OnClickListener;)V
    .locals 0

    .line 77
    iput-object p1, p0, Lcom/ymnsdk/replugin/ui/TipDialog;->positiveListener:Landroid/content/DialogInterface$OnClickListener;

    return-void
.end method

.method public setTitle(Ljava/lang/String;)V
    .locals 1

    .line 61
    iget-object v0, p0, Lcom/ymnsdk/replugin/ui/TipDialog;->title_tv:Landroid/widget/TextView;

    invoke-virtual {v0, p1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    return-void
.end method
