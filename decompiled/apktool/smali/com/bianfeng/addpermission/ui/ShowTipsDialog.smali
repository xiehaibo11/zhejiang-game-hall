.class Lcom/bianfeng/addpermission/ui/ShowTipsDialog;
.super Landroid/app/Dialog;
.source "ShowTipsDialog.java"

# interfaces
.implements Landroid/view/View$OnClickListener;


# instance fields
.field private context:Landroid/app/Activity;

.field private ok_btn:Landroid/widget/Button;

.field private show_policy_content:Landroid/widget/TextView;

.field private show_policy_title_tv:Landroid/widget/TextView;


# direct methods
.method public constructor <init>(Landroid/app/Activity;)V
    .locals 1

    const-string v0, "R.style.DialogActivityTheme"

    .line 19
    invoke-static {p1, v0}, Lcom/bianfeng/addpermission/common/ResourceManger;->getId(Landroid/content/Context;Ljava/lang/String;)I

    move-result v0

    invoke-direct {p0, p1, v0}, Landroid/app/Dialog;-><init>(Landroid/content/Context;I)V

    .line 20
    iput-object p1, p0, Lcom/bianfeng/addpermission/ui/ShowTipsDialog;->context:Landroid/app/Activity;

    const-string v0, "R.layout.dialog_show_policy_tips_v2"

    .line 21
    invoke-static {p1, v0}, Lcom/bianfeng/addpermission/common/ResourceManger;->getId(Landroid/content/Context;Ljava/lang/String;)I

    move-result p1

    invoke-virtual {p0, p1}, Lcom/bianfeng/addpermission/ui/ShowTipsDialog;->setContentView(I)V

    return-void
.end method

.method private initTheme()V
    .locals 2

    .line 46
    iget-object v0, p0, Lcom/bianfeng/addpermission/ui/ShowTipsDialog;->context:Landroid/app/Activity;

    const-string v1, "ANDPERMISSION_TITLE_TEXT_COLOR"

    invoke-static {v0, v1}, Lcom/bianfeng/addpermission/common/AddPermissionToolUtils;->getParamsInfo(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 47
    invoke-virtual {v0}, Ljava/lang/String;->isEmpty()Z

    move-result v1

    if-nez v1, :cond_0

    .line 48
    iget-object v1, p0, Lcom/bianfeng/addpermission/ui/ShowTipsDialog;->show_policy_title_tv:Landroid/widget/TextView;

    invoke-static {v0}, Landroid/graphics/Color;->parseColor(Ljava/lang/String;)I

    move-result v0

    invoke-virtual {v1, v0}, Landroid/widget/TextView;->setTextColor(I)V

    .line 50
    :cond_0
    iget-object v0, p0, Lcom/bianfeng/addpermission/ui/ShowTipsDialog;->context:Landroid/app/Activity;

    const-string v1, "ANDPERMISSION_TITLE_BACKGROUND_COLOR"

    invoke-static {v0, v1}, Lcom/bianfeng/addpermission/common/AddPermissionToolUtils;->getParamsInfo(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 51
    invoke-virtual {v0}, Ljava/lang/String;->isEmpty()Z

    move-result v1

    if-nez v1, :cond_1

    .line 52
    iget-object v1, p0, Lcom/bianfeng/addpermission/ui/ShowTipsDialog;->show_policy_title_tv:Landroid/widget/TextView;

    invoke-static {v0}, Landroid/graphics/Color;->parseColor(Ljava/lang/String;)I

    move-result v0

    invoke-virtual {v1, v0}, Landroid/widget/TextView;->setBackgroundColor(I)V

    .line 54
    :cond_1
    iget-object v0, p0, Lcom/bianfeng/addpermission/ui/ShowTipsDialog;->context:Landroid/app/Activity;

    const-string v1, "ANDPERMISSION_CONTENT_TEXT_COLOR"

    invoke-static {v0, v1}, Lcom/bianfeng/addpermission/common/AddPermissionToolUtils;->getParamsInfo(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    if-eqz v0, :cond_2

    .line 55
    invoke-virtual {v0}, Ljava/lang/String;->isEmpty()Z

    move-result v1

    if-nez v1, :cond_2

    .line 56
    iget-object v1, p0, Lcom/bianfeng/addpermission/ui/ShowTipsDialog;->show_policy_content:Landroid/widget/TextView;

    invoke-static {v0}, Landroid/graphics/Color;->parseColor(Ljava/lang/String;)I

    move-result v0

    invoke-virtual {v1, v0}, Landroid/widget/TextView;->setTextColor(I)V

    .line 59
    :cond_2
    iget-object v0, p0, Lcom/bianfeng/addpermission/ui/ShowTipsDialog;->context:Landroid/app/Activity;

    const-string v1, "ANDPERMISSION_REFUSE_TEXT_COLOR"

    invoke-static {v0, v1}, Lcom/bianfeng/addpermission/common/AddPermissionToolUtils;->getParamsInfo(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    if-eqz v0, :cond_3

    .line 60
    invoke-virtual {v0}, Ljava/lang/String;->isEmpty()Z

    move-result v1

    if-nez v1, :cond_3

    .line 61
    iget-object v1, p0, Lcom/bianfeng/addpermission/ui/ShowTipsDialog;->ok_btn:Landroid/widget/Button;

    invoke-static {v0}, Landroid/graphics/Color;->parseColor(Ljava/lang/String;)I

    move-result v0

    invoke-virtual {v1, v0}, Landroid/widget/Button;->setTextColor(I)V

    .line 63
    :cond_3
    iget-object v0, p0, Lcom/bianfeng/addpermission/ui/ShowTipsDialog;->context:Landroid/app/Activity;

    const-string v1, "ANDPERMISSION_REFUSE_BACKGROUND_COLOR"

    invoke-static {v0, v1}, Lcom/bianfeng/addpermission/common/AddPermissionToolUtils;->getParamsInfo(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    if-eqz v0, :cond_4

    .line 64
    invoke-virtual {v0}, Ljava/lang/String;->isEmpty()Z

    move-result v1

    if-nez v1, :cond_4

    .line 65
    iget-object v1, p0, Lcom/bianfeng/addpermission/ui/ShowTipsDialog;->ok_btn:Landroid/widget/Button;

    invoke-virtual {v1}, Landroid/widget/Button;->getBackground()Landroid/graphics/drawable/Drawable;

    move-result-object v1

    check-cast v1, Landroid/graphics/drawable/GradientDrawable;

    .line 66
    invoke-static {v0}, Landroid/graphics/Color;->parseColor(Ljava/lang/String;)I

    move-result v0

    invoke-virtual {v1, v0}, Landroid/graphics/drawable/GradientDrawable;->setColor(I)V

    .line 67
    iget-object v0, p0, Lcom/bianfeng/addpermission/ui/ShowTipsDialog;->ok_btn:Landroid/widget/Button;

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setBackground(Landroid/graphics/drawable/Drawable;)V

    :cond_4
    return-void
.end method

.method public static start(Landroid/app/Activity;)V
    .locals 1

    .line 25
    new-instance v0, Lcom/bianfeng/addpermission/ui/ShowTipsDialog;

    invoke-direct {v0, p0}, Lcom/bianfeng/addpermission/ui/ShowTipsDialog;-><init>(Landroid/app/Activity;)V

    .line 26
    invoke-virtual {v0}, Lcom/bianfeng/addpermission/ui/ShowTipsDialog;->show()V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/view/View;)V
    .locals 2

    .line 84
    invoke-virtual {p1}, Landroid/view/View;->getId()I

    move-result p1

    .line 85
    iget-object v0, p0, Lcom/bianfeng/addpermission/ui/ShowTipsDialog;->context:Landroid/app/Activity;

    const-string v1, "R.id.show_tips_cancel"

    invoke-static {v0, v1}, Lcom/bianfeng/addpermission/common/ResourceManger;->getId(Landroid/content/Context;Ljava/lang/String;)I

    move-result v0

    if-ne p1, v0, :cond_0

    .line 86
    invoke-virtual {p0}, Lcom/bianfeng/addpermission/ui/ShowTipsDialog;->dismiss()V

    :cond_0
    return-void
.end method

.method protected onCreate(Landroid/os/Bundle;)V
    .locals 1

    .line 36
    invoke-super {p0, p1}, Landroid/app/Dialog;->onCreate(Landroid/os/Bundle;)V

    .line 37
    iget-object p1, p0, Lcom/bianfeng/addpermission/ui/ShowTipsDialog;->context:Landroid/app/Activity;

    const-string v0, "R.id.show_tips_cancel"

    invoke-static {p1, v0}, Lcom/bianfeng/addpermission/common/ResourceManger;->getId(Landroid/content/Context;Ljava/lang/String;)I

    move-result p1

    invoke-virtual {p0, p1}, Lcom/bianfeng/addpermission/ui/ShowTipsDialog;->findViewById(I)Landroid/view/View;

    move-result-object p1

    check-cast p1, Landroid/widget/Button;

    iput-object p1, p0, Lcom/bianfeng/addpermission/ui/ShowTipsDialog;->ok_btn:Landroid/widget/Button;

    .line 38
    iget-object p1, p0, Lcom/bianfeng/addpermission/ui/ShowTipsDialog;->context:Landroid/app/Activity;

    const-string v0, "R.id.show_policy_title_tv"

    invoke-static {p1, v0}, Lcom/bianfeng/addpermission/common/ResourceManger;->getId(Landroid/content/Context;Ljava/lang/String;)I

    move-result p1

    invoke-virtual {p0, p1}, Lcom/bianfeng/addpermission/ui/ShowTipsDialog;->findViewById(I)Landroid/view/View;

    move-result-object p1

    check-cast p1, Landroid/widget/TextView;

    iput-object p1, p0, Lcom/bianfeng/addpermission/ui/ShowTipsDialog;->show_policy_title_tv:Landroid/widget/TextView;

    .line 39
    iget-object p1, p0, Lcom/bianfeng/addpermission/ui/ShowTipsDialog;->context:Landroid/app/Activity;

    const-string v0, "R.id.show_policy_content"

    invoke-static {p1, v0}, Lcom/bianfeng/addpermission/common/ResourceManger;->getId(Landroid/content/Context;Ljava/lang/String;)I

    move-result p1

    invoke-virtual {p0, p1}, Lcom/bianfeng/addpermission/ui/ShowTipsDialog;->findViewById(I)Landroid/view/View;

    move-result-object p1

    check-cast p1, Landroid/widget/TextView;

    iput-object p1, p0, Lcom/bianfeng/addpermission/ui/ShowTipsDialog;->show_policy_content:Landroid/widget/TextView;

    .line 40
    iget-object p1, p0, Lcom/bianfeng/addpermission/ui/ShowTipsDialog;->ok_btn:Landroid/widget/Button;

    invoke-virtual {p1, p0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 41
    invoke-direct {p0}, Lcom/bianfeng/addpermission/ui/ShowTipsDialog;->initTheme()V

    return-void
.end method
