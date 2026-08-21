.class public Lcom/tkay/basead/ui/RewardExitConfirmDialogActivity;
.super Landroid/app/Activity;


# static fields
.field private static a:Ljava/lang/Runnable;

.field private static b:Ljava/lang/String;


# instance fields
.field private c:Landroid/app/Dialog;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 22
    invoke-direct {p0}, Landroid/app/Activity;-><init>()V

    return-void
.end method

.method static synthetic a()Ljava/lang/Runnable;
    .locals 1

    .line 22
    sget-object v0, Lcom/tkay/basead/ui/RewardExitConfirmDialogActivity;->a:Ljava/lang/Runnable;

    return-object v0
.end method

.method public static a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/Runnable;)V
    .locals 0

    .line 29
    sput-object p1, Lcom/tkay/basead/ui/RewardExitConfirmDialogActivity;->b:Ljava/lang/String;

    .line 30
    sput-object p2, Lcom/tkay/basead/ui/RewardExitConfirmDialogActivity;->a:Ljava/lang/Runnable;

    .line 32
    new-instance p1, Landroid/content/Intent;

    const-class p2, Lcom/tkay/basead/ui/RewardExitConfirmDialogActivity;

    invoke-direct {p1, p0, p2}, Landroid/content/Intent;-><init>(Landroid/content/Context;Ljava/lang/Class;)V

    const/high16 p2, 0x10000000

    .line 33
    invoke-virtual {p1, p2}, Landroid/content/Intent;->addFlags(I)Landroid/content/Intent;

    .line 34
    invoke-virtual {p0, p1}, Landroid/content/Context;->startActivity(Landroid/content/Intent;)V

    return-void
.end method

.method private b()V
    .locals 10

    const-string v0, "string"

    const-string v1, "id"

    .line 47
    :try_start_0
    invoke-static {p0}, Landroid/view/LayoutInflater;->from(Landroid/content/Context;)Landroid/view/LayoutInflater;

    move-result-object v2

    const-string v3, "myoffer_confirm_dialog"

    const-string v4, "layout"

    invoke-static {p0, v3, v4}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v3

    const/4 v4, 0x0

    const/4 v5, 0x0

    invoke-virtual {v2, v3, v4, v5}, Landroid/view/LayoutInflater;->inflate(ILandroid/view/ViewGroup;Z)Landroid/view/View;

    move-result-object v2

    const-string v3, "myoffer_confirm_msg"

    .line 49
    invoke-static {p0, v3, v1}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v3

    invoke-virtual {v2, v3}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v3

    check-cast v3, Landroid/widget/TextView;

    const-string v4, "myoffer_confirm_give_up"

    .line 50
    invoke-static {p0, v4, v1}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v4

    invoke-virtual {v2, v4}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v4

    check-cast v4, Landroid/widget/TextView;

    const-string v6, "myoffer_confirm_continue"

    .line 51
    invoke-static {p0, v6, v1}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v1

    invoke-virtual {v2, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/TextView;

    .line 53
    invoke-virtual {p0}, Lcom/tkay/basead/ui/RewardExitConfirmDialogActivity;->getResources()Landroid/content/res/Resources;

    move-result-object v6

    const-string v7, "myoffer_reward_exit_confirm_msg"

    .line 54
    invoke-static {p0, v7, v0}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v7

    const/4 v8, 0x1

    new-array v8, v8, [Ljava/lang/Object;

    sget-object v9, Lcom/tkay/basead/ui/RewardExitConfirmDialogActivity;->b:Ljava/lang/String;

    aput-object v9, v8, v5

    .line 53
    invoke-virtual {v6, v7, v8}, Landroid/content/res/Resources;->getString(I[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v3, v6}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 58
    invoke-virtual {p0}, Lcom/tkay/basead/ui/RewardExitConfirmDialogActivity;->getResources()Landroid/content/res/Resources;

    move-result-object v3

    const-string v6, "myoffer_reward_exit_confirm_give_up"

    .line 59
    invoke-static {p0, v6, v0}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v6

    .line 58
    invoke-virtual {v3, v6}, Landroid/content/res/Resources;->getString(I)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v4, v3}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 62
    invoke-virtual {p0}, Lcom/tkay/basead/ui/RewardExitConfirmDialogActivity;->getResources()Landroid/content/res/Resources;

    move-result-object v3

    const-string v6, "myoffer_reward_exit_confirm_continue"

    .line 63
    invoke-static {p0, v6, v0}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    .line 62
    invoke-virtual {v3, v0}, Landroid/content/res/Resources;->getString(I)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v1, v0}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 67
    new-instance v0, Lcom/tkay/basead/ui/RewardExitConfirmDialogActivity$1;

    invoke-direct {v0, p0}, Lcom/tkay/basead/ui/RewardExitConfirmDialogActivity$1;-><init>(Lcom/tkay/basead/ui/RewardExitConfirmDialogActivity;)V

    invoke-virtual {v4, v0}, Landroid/widget/TextView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 79
    new-instance v0, Lcom/tkay/basead/ui/RewardExitConfirmDialogActivity$2;

    invoke-direct {v0, p0}, Lcom/tkay/basead/ui/RewardExitConfirmDialogActivity$2;-><init>(Lcom/tkay/basead/ui/RewardExitConfirmDialogActivity;)V

    invoke-virtual {v1, v0}, Landroid/widget/TextView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 86
    new-instance v0, Landroid/app/Dialog;

    const-string v1, "style_full_screen_translucent_dialog"

    const-string v3, "style"

    invoke-static {p0, v1, v3}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v1

    invoke-direct {v0, p0, v1}, Landroid/app/Dialog;-><init>(Landroid/content/Context;I)V

    iput-object v0, p0, Lcom/tkay/basead/ui/RewardExitConfirmDialogActivity;->c:Landroid/app/Dialog;

    .line 87
    invoke-virtual {v0, v2}, Landroid/app/Dialog;->setContentView(Landroid/view/View;)V

    .line 88
    iget-object v0, p0, Lcom/tkay/basead/ui/RewardExitConfirmDialogActivity;->c:Landroid/app/Dialog;

    invoke-virtual {v0, v5}, Landroid/app/Dialog;->setCancelable(Z)V

    .line 90
    iget-object v0, p0, Lcom/tkay/basead/ui/RewardExitConfirmDialogActivity;->c:Landroid/app/Dialog;

    invoke-virtual {v0}, Landroid/app/Dialog;->show()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    .line 93
    :catchall_0
    invoke-virtual {p0}, Lcom/tkay/basead/ui/RewardExitConfirmDialogActivity;->finish()V

    return-void
.end method


# virtual methods
.method public onCreate(Landroid/os/Bundle;)V
    .locals 9

    const-string v0, "string"

    const-string v1, "id"

    .line 39
    invoke-super {p0, p1}, Landroid/app/Activity;->onCreate(Landroid/os/Bundle;)V

    .line 1047
    :try_start_0
    invoke-static {p0}, Landroid/view/LayoutInflater;->from(Landroid/content/Context;)Landroid/view/LayoutInflater;

    move-result-object p1

    const-string v2, "myoffer_confirm_dialog"

    const-string v3, "layout"

    invoke-static {p0, v2, v3}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v2

    const/4 v3, 0x0

    const/4 v4, 0x0

    invoke-virtual {p1, v2, v3, v4}, Landroid/view/LayoutInflater;->inflate(ILandroid/view/ViewGroup;Z)Landroid/view/View;

    move-result-object p1

    const-string v2, "myoffer_confirm_msg"

    .line 1049
    invoke-static {p0, v2, v1}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v2

    invoke-virtual {p1, v2}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Landroid/widget/TextView;

    const-string v3, "myoffer_confirm_give_up"

    .line 1050
    invoke-static {p0, v3, v1}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v3

    invoke-virtual {p1, v3}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v3

    check-cast v3, Landroid/widget/TextView;

    const-string v5, "myoffer_confirm_continue"

    .line 1051
    invoke-static {p0, v5, v1}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v1

    invoke-virtual {p1, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/TextView;

    .line 1053
    invoke-virtual {p0}, Lcom/tkay/basead/ui/RewardExitConfirmDialogActivity;->getResources()Landroid/content/res/Resources;

    move-result-object v5

    const-string v6, "myoffer_reward_exit_confirm_msg"

    .line 1054
    invoke-static {p0, v6, v0}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v6

    const/4 v7, 0x1

    new-array v7, v7, [Ljava/lang/Object;

    sget-object v8, Lcom/tkay/basead/ui/RewardExitConfirmDialogActivity;->b:Ljava/lang/String;

    aput-object v8, v7, v4

    .line 1053
    invoke-virtual {v5, v6, v7}, Landroid/content/res/Resources;->getString(I[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v2, v5}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 1058
    invoke-virtual {p0}, Lcom/tkay/basead/ui/RewardExitConfirmDialogActivity;->getResources()Landroid/content/res/Resources;

    move-result-object v2

    const-string v5, "myoffer_reward_exit_confirm_give_up"

    .line 1059
    invoke-static {p0, v5, v0}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v5

    .line 1058
    invoke-virtual {v2, v5}, Landroid/content/res/Resources;->getString(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v3, v2}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 1062
    invoke-virtual {p0}, Lcom/tkay/basead/ui/RewardExitConfirmDialogActivity;->getResources()Landroid/content/res/Resources;

    move-result-object v2

    const-string v5, "myoffer_reward_exit_confirm_continue"

    .line 1063
    invoke-static {p0, v5, v0}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    .line 1062
    invoke-virtual {v2, v0}, Landroid/content/res/Resources;->getString(I)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v1, v0}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 1067
    new-instance v0, Lcom/tkay/basead/ui/RewardExitConfirmDialogActivity$1;

    invoke-direct {v0, p0}, Lcom/tkay/basead/ui/RewardExitConfirmDialogActivity$1;-><init>(Lcom/tkay/basead/ui/RewardExitConfirmDialogActivity;)V

    invoke-virtual {v3, v0}, Landroid/widget/TextView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 1079
    new-instance v0, Lcom/tkay/basead/ui/RewardExitConfirmDialogActivity$2;

    invoke-direct {v0, p0}, Lcom/tkay/basead/ui/RewardExitConfirmDialogActivity$2;-><init>(Lcom/tkay/basead/ui/RewardExitConfirmDialogActivity;)V

    invoke-virtual {v1, v0}, Landroid/widget/TextView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 1086
    new-instance v0, Landroid/app/Dialog;

    const-string v1, "style_full_screen_translucent_dialog"

    const-string v2, "style"

    invoke-static {p0, v1, v2}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v1

    invoke-direct {v0, p0, v1}, Landroid/app/Dialog;-><init>(Landroid/content/Context;I)V

    iput-object v0, p0, Lcom/tkay/basead/ui/RewardExitConfirmDialogActivity;->c:Landroid/app/Dialog;

    .line 1087
    invoke-virtual {v0, p1}, Landroid/app/Dialog;->setContentView(Landroid/view/View;)V

    .line 1088
    iget-object p1, p0, Lcom/tkay/basead/ui/RewardExitConfirmDialogActivity;->c:Landroid/app/Dialog;

    invoke-virtual {p1, v4}, Landroid/app/Dialog;->setCancelable(Z)V

    .line 1090
    iget-object p1, p0, Lcom/tkay/basead/ui/RewardExitConfirmDialogActivity;->c:Landroid/app/Dialog;

    invoke-virtual {p1}, Landroid/app/Dialog;->show()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    .line 1093
    :catchall_0
    invoke-virtual {p0}, Lcom/tkay/basead/ui/RewardExitConfirmDialogActivity;->finish()V

    return-void
.end method

.method protected onDestroy()V
    .locals 2

    .line 110
    iget-object v0, p0, Lcom/tkay/basead/ui/RewardExitConfirmDialogActivity;->c:Landroid/app/Dialog;

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    .line 111
    invoke-virtual {v0}, Landroid/app/Dialog;->dismiss()V

    .line 112
    iput-object v1, p0, Lcom/tkay/basead/ui/RewardExitConfirmDialogActivity;->c:Landroid/app/Dialog;

    .line 115
    :cond_0
    sput-object v1, Lcom/tkay/basead/ui/RewardExitConfirmDialogActivity;->a:Ljava/lang/Runnable;

    .line 117
    invoke-super {p0}, Landroid/app/Activity;->onDestroy()V

    return-void
.end method

.method public onKeyDown(ILandroid/view/KeyEvent;)Z
    .locals 1

    const/4 v0, 0x4

    if-ne v0, p1, :cond_0

    const/4 p1, 0x1

    return p1

    .line 104
    :cond_0
    invoke-super {p0, p1, p2}, Landroid/app/Activity;->onKeyDown(ILandroid/view/KeyEvent;)Z

    move-result p1

    return p1
.end method
