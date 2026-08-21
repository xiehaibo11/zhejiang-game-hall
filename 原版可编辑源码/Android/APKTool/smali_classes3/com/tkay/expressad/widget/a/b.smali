.class public final Lcom/tkay/expressad/widget/a/b;
.super Landroid/app/Dialog;


# static fields
.field private static final a:Ljava/lang/String; = "TYAlertDialog"


# instance fields
.field private b:Lcom/tkay/expressad/widget/a/c;

.field private c:Landroid/widget/TextView;

.field private d:Landroid/widget/TextView;

.field private e:Landroid/widget/Button;

.field private f:Landroid/widget/Button;


# direct methods
.method public constructor <init>(Landroid/content/Context;Lcom/tkay/expressad/widget/a/c;)V
    .locals 5

    const-string v0, "id"

    .line 38
    invoke-direct {p0, p1}, Landroid/app/Dialog;-><init>(Landroid/content/Context;)V

    .line 39
    invoke-virtual {p0}, Lcom/tkay/expressad/widget/a/b;->getWindow()Landroid/view/Window;

    move-result-object v1

    new-instance v2, Landroid/graphics/drawable/ColorDrawable;

    const/4 v3, 0x0

    invoke-direct {v2, v3}, Landroid/graphics/drawable/ColorDrawable;-><init>(I)V

    invoke-virtual {v1, v2}, Landroid/view/Window;->setBackgroundDrawable(Landroid/graphics/drawable/Drawable;)V

    const/4 v1, 0x1

    .line 40
    invoke-virtual {p0, v1}, Lcom/tkay/expressad/widget/a/b;->requestWindowFeature(I)Z

    .line 41
    invoke-static {p1}, Landroid/view/LayoutInflater;->from(Landroid/content/Context;)Landroid/view/LayoutInflater;

    move-result-object v1

    const-string v2, "tkay_cm_alertview"

    const-string v4, "layout"

    invoke-static {p1, v2, v4}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v2

    const/4 v4, 0x0

    invoke-virtual {v1, v2, v4}, Landroid/view/LayoutInflater;->inflate(ILandroid/view/ViewGroup;)Landroid/view/View;

    move-result-object v1

    .line 42
    iput-object p2, p0, Lcom/tkay/expressad/widget/a/b;->b:Lcom/tkay/expressad/widget/a/c;

    if-eqz v1, :cond_0

    .line 44
    invoke-virtual {p0, v1}, Lcom/tkay/expressad/widget/a/b;->setContentView(Landroid/view/View;)V

    :try_start_0
    const-string v2, "tkay_video_common_alertview_titleview"

    .line 46
    invoke-static {p1, v2, v0}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v2

    invoke-virtual {v1, v2}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Landroid/widget/TextView;

    iput-object v2, p0, Lcom/tkay/expressad/widget/a/b;->c:Landroid/widget/TextView;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v2

    .line 48
    invoke-virtual {v2}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    :goto_0
    :try_start_1
    const-string v2, "tkay_video_common_alertview_contentview"

    .line 51
    invoke-static {p1, v2, v0}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v2

    invoke-virtual {v1, v2}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Landroid/widget/TextView;

    iput-object v2, p0, Lcom/tkay/expressad/widget/a/b;->d:Landroid/widget/TextView;

    const-string v2, "tkay_video_common_alertview_confirm_button"

    .line 52
    invoke-static {p1, v2, v0}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v2

    invoke-virtual {v1, v2}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Landroid/widget/Button;

    iput-object v2, p0, Lcom/tkay/expressad/widget/a/b;->e:Landroid/widget/Button;

    const-string v2, "tkay_video_common_alertview_cancel_button"

    .line 53
    invoke-static {p1, v2, v0}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result p1

    invoke-virtual {v1, p1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object p1

    check-cast p1, Landroid/widget/Button;

    iput-object p1, p0, Lcom/tkay/expressad/widget/a/b;->f:Landroid/widget/Button;
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    goto :goto_1

    :catch_1
    move-exception p1

    .line 55
    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    .line 58
    :cond_0
    :goto_1
    iget-object p1, p0, Lcom/tkay/expressad/widget/a/b;->f:Landroid/widget/Button;

    if-eqz p1, :cond_1

    .line 59
    new-instance v0, Lcom/tkay/expressad/widget/a/b$1;

    invoke-direct {v0, p0, p2}, Lcom/tkay/expressad/widget/a/b$1;-><init>(Lcom/tkay/expressad/widget/a/b;Lcom/tkay/expressad/widget/a/c;)V

    invoke-virtual {p1, v0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 70
    :cond_1
    iget-object p1, p0, Lcom/tkay/expressad/widget/a/b;->e:Landroid/widget/Button;

    if-eqz p1, :cond_2

    .line 71
    new-instance v0, Lcom/tkay/expressad/widget/a/b$2;

    invoke-direct {v0, p0, p2}, Lcom/tkay/expressad/widget/a/b$2;-><init>(Lcom/tkay/expressad/widget/a/b;Lcom/tkay/expressad/widget/a/c;)V

    invoke-virtual {p1, v0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 82
    :cond_2
    invoke-virtual {p0, v3}, Lcom/tkay/expressad/widget/a/b;->setCanceledOnTouchOutside(Z)V

    .line 83
    invoke-virtual {p0, v3}, Lcom/tkay/expressad/widget/a/b;->setCancelable(Z)V

    return-void
.end method

.method private a(I)V
    .locals 10

    .line 243
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    .line 244
    invoke-virtual {p0}, Lcom/tkay/expressad/widget/a/b;->getContext()Landroid/content/Context;

    move-result-object v1

    const-string v2, "string"

    const-string v3, "tkay_cm_dialog_alert_confim_close_warn"

    invoke-static {v1, v3, v2}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v1

    invoke-virtual {v0, v1}, Landroid/content/Context;->getString(I)Ljava/lang/String;

    move-result-object v1

    .line 245
    invoke-virtual {p0}, Lcom/tkay/expressad/widget/a/b;->getContext()Landroid/content/Context;

    move-result-object v3

    const-string v4, "tkay_cm_dialog_alert_confim_close_warn_tips"

    invoke-static {v3, v4, v2}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v3

    invoke-virtual {v0, v3}, Landroid/content/Context;->getString(I)Ljava/lang/String;

    move-result-object v3

    .line 246
    invoke-virtual {p0}, Lcom/tkay/expressad/widget/a/b;->getContext()Landroid/content/Context;

    move-result-object v4

    const-string v5, "tkay_cm_dialog_alert_confim_close_warn_close"

    invoke-static {v4, v5, v2}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v4

    invoke-virtual {v0, v4}, Landroid/content/Context;->getString(I)Ljava/lang/String;

    move-result-object v4

    .line 247
    invoke-virtual {p0}, Lcom/tkay/expressad/widget/a/b;->getContext()Landroid/content/Context;

    move-result-object v5

    const-string v6, "tkay_cm_dialog_alert_confim_close_warn_continue"

    invoke-static {v5, v6, v2}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v5

    invoke-virtual {v0, v5}, Landroid/content/Context;->getString(I)Ljava/lang/String;

    move-result-object v5

    .line 248
    invoke-virtual {p0}, Lcom/tkay/expressad/widget/a/b;->getContext()Landroid/content/Context;

    move-result-object v6

    const-string v7, "tkay_cm_dialog_alert_confim_close"

    invoke-static {v6, v7, v2}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v6

    invoke-virtual {v0, v6}, Landroid/content/Context;->getString(I)Ljava/lang/String;

    move-result-object v6

    .line 249
    invoke-virtual {p0}, Lcom/tkay/expressad/widget/a/b;->getContext()Landroid/content/Context;

    move-result-object v7

    const-string v8, "tkay_cm_dialog_alert_confim_close_cancel"

    invoke-static {v7, v8, v2}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v7

    invoke-virtual {v0, v7}, Landroid/content/Context;->getString(I)Ljava/lang/String;

    move-result-object v7

    .line 250
    invoke-virtual {p0}, Lcom/tkay/expressad/widget/a/b;->getContext()Landroid/content/Context;

    move-result-object v8

    const-string v9, "tkay_cm_dialog_alert_confim_close_continue"

    invoke-static {v8, v9, v2}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v2

    invoke-virtual {v0, v2}, Landroid/content/Context;->getString(I)Ljava/lang/String;

    move-result-object v0

    .line 251
    sget v2, Lcom/tkay/expressad/foundation/g/a;->cr:I

    if-ne p1, v2, :cond_0

    goto :goto_0

    :cond_0
    move-object v1, v3

    :goto_0
    invoke-direct {p0, v1}, Lcom/tkay/expressad/widget/a/b;->a(Ljava/lang/String;)V

    .line 252
    sget v1, Lcom/tkay/expressad/foundation/g/a;->cr:I

    if-ne p1, v1, :cond_1

    goto :goto_1

    :cond_1
    move-object v4, v5

    :goto_1
    invoke-direct {p0, v4}, Lcom/tkay/expressad/widget/a/b;->b(Ljava/lang/String;)V

    .line 253
    sget v1, Lcom/tkay/expressad/foundation/g/a;->cr:I

    if-ne p1, v1, :cond_2

    goto :goto_2

    :cond_2
    move-object v6, v7

    :goto_2
    invoke-direct {p0, v6}, Lcom/tkay/expressad/widget/a/b;->c(Ljava/lang/String;)V

    .line 254
    invoke-direct {p0, v0}, Lcom/tkay/expressad/widget/a/b;->d(Ljava/lang/String;)V

    return-void
.end method

.method private static a(Landroid/view/Window;)V
    .locals 2

    if-eqz p0, :cond_2

    const/16 v0, 0x400

    .line 303
    invoke-virtual {p0, v0, v0}, Landroid/view/Window;->setFlags(II)V

    .line 305
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x13

    if-lt v0, v1, :cond_0

    const/high16 v0, 0x4000000

    .line 306
    invoke-virtual {p0, v0}, Landroid/view/Window;->addFlags(I)V

    .line 308
    invoke-virtual {p0}, Landroid/view/Window;->getDecorView()Landroid/view/View;

    move-result-object v0

    const/16 v1, 0x1002

    invoke-virtual {v0, v1}, Landroid/view/View;->setSystemUiVisibility(I)V

    goto :goto_0

    .line 310
    :cond_0
    invoke-virtual {p0}, Landroid/view/Window;->getDecorView()Landroid/view/View;

    move-result-object v0

    const/4 v1, 0x2

    invoke-virtual {v0, v1}, Landroid/view/View;->setSystemUiVisibility(I)V

    .line 313
    :goto_0
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x1c

    if-lt v0, v1, :cond_1

    .line 314
    invoke-virtual {p0}, Landroid/view/Window;->getAttributes()Landroid/view/WindowManager$LayoutParams;

    move-result-object v0

    const/4 v1, 0x1

    .line 315
    iput v1, v0, Landroid/view/WindowManager$LayoutParams;->layoutInDisplayCutoutMode:I

    .line 316
    invoke-virtual {p0, v0}, Landroid/view/Window;->setAttributes(Landroid/view/WindowManager$LayoutParams;)V

    .line 319
    :cond_1
    new-instance v0, Landroid/graphics/drawable/ColorDrawable;

    const/4 v1, 0x0

    invoke-direct {v0, v1}, Landroid/graphics/drawable/ColorDrawable;-><init>(I)V

    invoke-virtual {p0, v0}, Landroid/view/Window;->setBackgroundDrawable(Landroid/graphics/drawable/Drawable;)V

    const/4 v0, -0x1

    .line 320
    invoke-virtual {p0, v0, v0}, Landroid/view/Window;->setLayout(II)V

    const/16 v0, 0x11

    .line 321
    invoke-virtual {p0, v0}, Landroid/view/Window;->setGravity(I)V

    :cond_2
    return-void
.end method

.method private a(Ljava/lang/String;)V
    .locals 1

    .line 95
    iget-object v0, p0, Lcom/tkay/expressad/widget/a/b;->c:Landroid/widget/TextView;

    if-eqz v0, :cond_0

    .line 96
    invoke-virtual {v0, p1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    :cond_0
    return-void
.end method

.method private a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 0

    .line 119
    invoke-direct {p0, p1}, Lcom/tkay/expressad/widget/a/b;->a(Ljava/lang/String;)V

    .line 120
    invoke-direct {p0, p2}, Lcom/tkay/expressad/widget/a/b;->b(Ljava/lang/String;)V

    .line 121
    invoke-direct {p0, p3}, Lcom/tkay/expressad/widget/a/b;->c(Ljava/lang/String;)V

    .line 122
    invoke-direct {p0, p4}, Lcom/tkay/expressad/widget/a/b;->d(Ljava/lang/String;)V

    return-void
.end method

.method private b(Ljava/lang/String;)V
    .locals 1

    .line 101
    iget-object v0, p0, Lcom/tkay/expressad/widget/a/b;->d:Landroid/widget/TextView;

    if-eqz v0, :cond_0

    .line 102
    invoke-virtual {v0, p1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    :cond_0
    return-void
.end method

.method private c()V
    .locals 7

    .line 198
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    .line 199
    invoke-virtual {p0}, Lcom/tkay/expressad/widget/a/b;->getContext()Landroid/content/Context;

    move-result-object v1

    const-string v2, "string"

    const-string v3, "tkay_cm_dialog_alert_confim_close_warn"

    invoke-static {v1, v3, v2}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v1

    invoke-virtual {v0, v1}, Landroid/content/Context;->getString(I)Ljava/lang/String;

    move-result-object v1

    .line 200
    invoke-virtual {p0}, Lcom/tkay/expressad/widget/a/b;->getContext()Landroid/content/Context;

    move-result-object v3

    const-string v4, "tkay_cm_dialog_alert_confim_close_desc"

    invoke-static {v3, v4, v2}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v3

    invoke-virtual {v0, v3}, Landroid/content/Context;->getString(I)Ljava/lang/String;

    move-result-object v3

    .line 201
    invoke-virtual {p0}, Lcom/tkay/expressad/widget/a/b;->getContext()Landroid/content/Context;

    move-result-object v4

    const-string v5, "tkay_cm_dialog_alert_confim_close"

    invoke-static {v4, v5, v2}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v4

    invoke-virtual {v0, v4}, Landroid/content/Context;->getString(I)Ljava/lang/String;

    move-result-object v4

    .line 202
    invoke-virtual {p0}, Lcom/tkay/expressad/widget/a/b;->getContext()Landroid/content/Context;

    move-result-object v5

    const-string v6, "tkay_cm_dialog_alert_cancel_close"

    invoke-static {v5, v6, v2}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v2

    invoke-virtual {v0, v2}, Landroid/content/Context;->getString(I)Ljava/lang/String;

    move-result-object v0

    .line 203
    invoke-direct {p0, v1}, Lcom/tkay/expressad/widget/a/b;->a(Ljava/lang/String;)V

    .line 204
    invoke-direct {p0, v3}, Lcom/tkay/expressad/widget/a/b;->b(Ljava/lang/String;)V

    .line 205
    invoke-direct {p0, v4}, Lcom/tkay/expressad/widget/a/b;->c(Ljava/lang/String;)V

    .line 206
    invoke-direct {p0, v0}, Lcom/tkay/expressad/widget/a/b;->d(Ljava/lang/String;)V

    return-void
.end method

.method private c(Ljava/lang/String;)V
    .locals 1

    .line 107
    iget-object v0, p0, Lcom/tkay/expressad/widget/a/b;->e:Landroid/widget/Button;

    if-eqz v0, :cond_0

    .line 108
    invoke-virtual {v0, p1}, Landroid/widget/Button;->setText(Ljava/lang/CharSequence;)V

    :cond_0
    return-void
.end method

.method private d()V
    .locals 7

    .line 210
    invoke-static {}, Lcom/tkay/expressad/d/b;->a()Lcom/tkay/expressad/d/b;

    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/b/b;->e()Ljava/lang/String;

    invoke-static {}, Lcom/tkay/expressad/d/b;->b()Lcom/tkay/expressad/d/a;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 212
    invoke-virtual {v0}, Lcom/tkay/expressad/d/a;->C()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0}, Lcom/tkay/expressad/d/a;->D()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0}, Lcom/tkay/expressad/d/a;->E()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0}, Lcom/tkay/expressad/d/a;->F()Ljava/lang/String;

    move-result-object v0

    invoke-direct {p0, v1, v2, v3, v0}, Lcom/tkay/expressad/widget/a/b;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    return-void

    .line 1219
    :cond_0
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    .line 1220
    invoke-virtual {p0}, Lcom/tkay/expressad/widget/a/b;->getContext()Landroid/content/Context;

    move-result-object v1

    const-string v2, "string"

    const-string v3, "tkay_cm_dialog_alert_confim_close_warn"

    invoke-static {v1, v3, v2}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v1

    invoke-virtual {v0, v1}, Landroid/content/Context;->getString(I)Ljava/lang/String;

    move-result-object v1

    .line 1221
    invoke-virtual {p0}, Lcom/tkay/expressad/widget/a/b;->getContext()Landroid/content/Context;

    move-result-object v3

    const-string v4, "tkay_cm_dialog_alert_confim_close_desc"

    invoke-static {v3, v4, v2}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v3

    invoke-virtual {v0, v3}, Landroid/content/Context;->getString(I)Ljava/lang/String;

    move-result-object v3

    .line 1222
    invoke-virtual {p0}, Lcom/tkay/expressad/widget/a/b;->getContext()Landroid/content/Context;

    move-result-object v4

    const-string v5, "tkay_cm_dialog_alert_confim_close"

    invoke-static {v4, v5, v2}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v4

    invoke-virtual {v0, v4}, Landroid/content/Context;->getString(I)Ljava/lang/String;

    move-result-object v4

    .line 1223
    invoke-virtual {p0}, Lcom/tkay/expressad/widget/a/b;->getContext()Landroid/content/Context;

    move-result-object v5

    const-string v6, "tkay_cm_dialog_alert_continue_to_play"

    invoke-static {v5, v6, v2}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v2

    invoke-virtual {v0, v2}, Landroid/content/Context;->getString(I)Ljava/lang/String;

    move-result-object v0

    .line 1224
    invoke-direct {p0, v1}, Lcom/tkay/expressad/widget/a/b;->a(Ljava/lang/String;)V

    .line 1225
    invoke-direct {p0, v3}, Lcom/tkay/expressad/widget/a/b;->b(Ljava/lang/String;)V

    .line 1226
    invoke-direct {p0, v4}, Lcom/tkay/expressad/widget/a/b;->c(Ljava/lang/String;)V

    .line 1227
    invoke-direct {p0, v0}, Lcom/tkay/expressad/widget/a/b;->d(Ljava/lang/String;)V

    return-void
.end method

.method private d(Ljava/lang/String;)V
    .locals 1

    .line 113
    iget-object v0, p0, Lcom/tkay/expressad/widget/a/b;->f:Landroid/widget/Button;

    if-eqz v0, :cond_0

    .line 114
    invoke-virtual {v0, p1}, Landroid/widget/Button;->setText(Ljava/lang/CharSequence;)V

    :cond_0
    return-void
.end method

.method private e()V
    .locals 7

    .line 219
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    .line 220
    invoke-virtual {p0}, Lcom/tkay/expressad/widget/a/b;->getContext()Landroid/content/Context;

    move-result-object v1

    const-string v2, "string"

    const-string v3, "tkay_cm_dialog_alert_confim_close_warn"

    invoke-static {v1, v3, v2}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v1

    invoke-virtual {v0, v1}, Landroid/content/Context;->getString(I)Ljava/lang/String;

    move-result-object v1

    .line 221
    invoke-virtual {p0}, Lcom/tkay/expressad/widget/a/b;->getContext()Landroid/content/Context;

    move-result-object v3

    const-string v4, "tkay_cm_dialog_alert_confim_close_desc"

    invoke-static {v3, v4, v2}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v3

    invoke-virtual {v0, v3}, Landroid/content/Context;->getString(I)Ljava/lang/String;

    move-result-object v3

    .line 222
    invoke-virtual {p0}, Lcom/tkay/expressad/widget/a/b;->getContext()Landroid/content/Context;

    move-result-object v4

    const-string v5, "tkay_cm_dialog_alert_confim_close"

    invoke-static {v4, v5, v2}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v4

    invoke-virtual {v0, v4}, Landroid/content/Context;->getString(I)Ljava/lang/String;

    move-result-object v4

    .line 223
    invoke-virtual {p0}, Lcom/tkay/expressad/widget/a/b;->getContext()Landroid/content/Context;

    move-result-object v5

    const-string v6, "tkay_cm_dialog_alert_continue_to_play"

    invoke-static {v5, v6, v2}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v2

    invoke-virtual {v0, v2}, Landroid/content/Context;->getString(I)Ljava/lang/String;

    move-result-object v0

    .line 224
    invoke-direct {p0, v1}, Lcom/tkay/expressad/widget/a/b;->a(Ljava/lang/String;)V

    .line 225
    invoke-direct {p0, v3}, Lcom/tkay/expressad/widget/a/b;->b(Ljava/lang/String;)V

    .line 226
    invoke-direct {p0, v4}, Lcom/tkay/expressad/widget/a/b;->c(Ljava/lang/String;)V

    .line 227
    invoke-direct {p0, v0}, Lcom/tkay/expressad/widget/a/b;->d(Ljava/lang/String;)V

    return-void
.end method


# virtual methods
.method public final a()V
    .locals 1

    .line 89
    iget-object v0, p0, Lcom/tkay/expressad/widget/a/b;->b:Lcom/tkay/expressad/widget/a/c;

    if-eqz v0, :cond_0

    const/4 v0, 0x0

    .line 90
    iput-object v0, p0, Lcom/tkay/expressad/widget/a/b;->b:Lcom/tkay/expressad/widget/a/c;

    :cond_0
    return-void
.end method

.method public final a(ILjava/lang/String;)V
    .locals 9

    const-string v0, ""

    const-string v1, "string"

    .line 271
    :try_start_0
    invoke-virtual {p0}, Lcom/tkay/expressad/widget/a/b;->getContext()Landroid/content/Context;

    move-result-object v2

    const-string v3, "Tkay_ConfirmTitle"

    invoke-static {p2}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-static {v2, v3, v0}, Lcom/tkay/expressad/foundation/h/v;->b(Landroid/content/Context;Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v2

    .line 272
    invoke-virtual {p0}, Lcom/tkay/expressad/widget/a/b;->getContext()Landroid/content/Context;

    move-result-object v3

    const-string v4, "Tkay_ConfirmContent"

    invoke-static {p2}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v4, v5}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    invoke-static {v3, v4, v0}, Lcom/tkay/expressad/foundation/h/v;->b(Landroid/content/Context;Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    invoke-virtual {v3}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v3

    .line 273
    invoke-virtual {p0}, Lcom/tkay/expressad/widget/a/b;->getContext()Landroid/content/Context;

    move-result-object v4

    const-string v5, "Tkay_CancelText"

    invoke-static {p2}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v5, v6}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    invoke-static {v4, v5, v0}, Lcom/tkay/expressad/foundation/h/v;->b(Landroid/content/Context;Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v4

    invoke-virtual {v4}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v4

    .line 274
    invoke-virtual {p0}, Lcom/tkay/expressad/widget/a/b;->getContext()Landroid/content/Context;

    move-result-object v5

    const-string v6, "Tkay_ConfirmText"

    invoke-static {p2}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p2

    invoke-virtual {v6, p2}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    invoke-static {v5, p2, v0}, Lcom/tkay/expressad/foundation/h/v;->b(Landroid/content/Context;Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p2

    invoke-virtual {p2}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object p2

    .line 276
    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_3

    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_3

    .line 277
    invoke-static {v4}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_3

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_3

    .line 1243
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object p2

    invoke-virtual {p2}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object p2

    .line 1244
    invoke-virtual {p0}, Lcom/tkay/expressad/widget/a/b;->getContext()Landroid/content/Context;

    move-result-object v0

    const-string v2, "tkay_cm_dialog_alert_confim_close_warn"

    invoke-static {v0, v2, v1}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p2, v0}, Landroid/content/Context;->getString(I)Ljava/lang/String;

    move-result-object v0

    .line 1245
    invoke-virtual {p0}, Lcom/tkay/expressad/widget/a/b;->getContext()Landroid/content/Context;

    move-result-object v2

    const-string v3, "tkay_cm_dialog_alert_confim_close_warn_tips"

    invoke-static {v2, v3, v1}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v2

    invoke-virtual {p2, v2}, Landroid/content/Context;->getString(I)Ljava/lang/String;

    move-result-object v2

    .line 1246
    invoke-virtual {p0}, Lcom/tkay/expressad/widget/a/b;->getContext()Landroid/content/Context;

    move-result-object v3

    const-string v4, "tkay_cm_dialog_alert_confim_close_warn_close"

    invoke-static {v3, v4, v1}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v3

    invoke-virtual {p2, v3}, Landroid/content/Context;->getString(I)Ljava/lang/String;

    move-result-object v3

    .line 1247
    invoke-virtual {p0}, Lcom/tkay/expressad/widget/a/b;->getContext()Landroid/content/Context;

    move-result-object v4

    const-string v5, "tkay_cm_dialog_alert_confim_close_warn_continue"

    invoke-static {v4, v5, v1}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v4

    invoke-virtual {p2, v4}, Landroid/content/Context;->getString(I)Ljava/lang/String;

    move-result-object v4

    .line 1248
    invoke-virtual {p0}, Lcom/tkay/expressad/widget/a/b;->getContext()Landroid/content/Context;

    move-result-object v5

    const-string v6, "tkay_cm_dialog_alert_confim_close"

    invoke-static {v5, v6, v1}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v5

    invoke-virtual {p2, v5}, Landroid/content/Context;->getString(I)Ljava/lang/String;

    move-result-object v5

    .line 1249
    invoke-virtual {p0}, Lcom/tkay/expressad/widget/a/b;->getContext()Landroid/content/Context;

    move-result-object v6

    const-string v7, "tkay_cm_dialog_alert_confim_close_cancel"

    invoke-static {v6, v7, v1}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v6

    invoke-virtual {p2, v6}, Landroid/content/Context;->getString(I)Ljava/lang/String;

    move-result-object v6

    .line 1250
    invoke-virtual {p0}, Lcom/tkay/expressad/widget/a/b;->getContext()Landroid/content/Context;

    move-result-object v7

    const-string v8, "tkay_cm_dialog_alert_confim_close_continue"

    invoke-static {v7, v8, v1}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v1

    invoke-virtual {p2, v1}, Landroid/content/Context;->getString(I)Ljava/lang/String;

    move-result-object p2

    .line 1251
    sget v1, Lcom/tkay/expressad/foundation/g/a;->cr:I

    if-ne p1, v1, :cond_0

    goto :goto_0

    :cond_0
    move-object v0, v2

    :goto_0
    invoke-direct {p0, v0}, Lcom/tkay/expressad/widget/a/b;->a(Ljava/lang/String;)V

    .line 1252
    sget v0, Lcom/tkay/expressad/foundation/g/a;->cr:I

    if-ne p1, v0, :cond_1

    goto :goto_1

    :cond_1
    move-object v3, v4

    :goto_1
    invoke-direct {p0, v3}, Lcom/tkay/expressad/widget/a/b;->b(Ljava/lang/String;)V

    .line 1253
    sget v0, Lcom/tkay/expressad/foundation/g/a;->cr:I

    if-ne p1, v0, :cond_2

    goto :goto_2

    :cond_2
    move-object v5, v6

    :goto_2
    invoke-direct {p0, v5}, Lcom/tkay/expressad/widget/a/b;->c(Ljava/lang/String;)V

    .line 1254
    invoke-direct {p0, p2}, Lcom/tkay/expressad/widget/a/b;->d(Ljava/lang/String;)V

    return-void

    .line 280
    :cond_3
    invoke-direct {p0, v2, v3, v4, p2}, Lcom/tkay/expressad/widget/a/b;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception p1

    .line 283
    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    return-void
.end method

.method public final b()V
    .locals 7

    const-string v0, "string"

    .line 1198
    :try_start_0
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v1

    .line 1199
    invoke-virtual {p0}, Lcom/tkay/expressad/widget/a/b;->getContext()Landroid/content/Context;

    move-result-object v2

    const-string v3, "tkay_cm_dialog_alert_confim_close_warn"

    invoke-static {v2, v3, v0}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v2

    invoke-virtual {v1, v2}, Landroid/content/Context;->getString(I)Ljava/lang/String;

    move-result-object v2

    .line 1200
    invoke-virtual {p0}, Lcom/tkay/expressad/widget/a/b;->getContext()Landroid/content/Context;

    move-result-object v3

    const-string v4, "tkay_cm_dialog_alert_confim_close_desc"

    invoke-static {v3, v4, v0}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v3

    invoke-virtual {v1, v3}, Landroid/content/Context;->getString(I)Ljava/lang/String;

    move-result-object v3

    .line 1201
    invoke-virtual {p0}, Lcom/tkay/expressad/widget/a/b;->getContext()Landroid/content/Context;

    move-result-object v4

    const-string v5, "tkay_cm_dialog_alert_confim_close"

    invoke-static {v4, v5, v0}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v4

    invoke-virtual {v1, v4}, Landroid/content/Context;->getString(I)Ljava/lang/String;

    move-result-object v4

    .line 1202
    invoke-virtual {p0}, Lcom/tkay/expressad/widget/a/b;->getContext()Landroid/content/Context;

    move-result-object v5

    const-string v6, "tkay_cm_dialog_alert_cancel_close"

    invoke-static {v5, v6, v0}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    invoke-virtual {v1, v0}, Landroid/content/Context;->getString(I)Ljava/lang/String;

    move-result-object v0

    .line 1203
    invoke-direct {p0, v2}, Lcom/tkay/expressad/widget/a/b;->a(Ljava/lang/String;)V

    .line 1204
    invoke-direct {p0, v3}, Lcom/tkay/expressad/widget/a/b;->b(Ljava/lang/String;)V

    .line 1205
    invoke-direct {p0, v4}, Lcom/tkay/expressad/widget/a/b;->c(Ljava/lang/String;)V

    .line 1206
    invoke-direct {p0, v0}, Lcom/tkay/expressad/widget/a/b;->d(Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception v0

    .line 193
    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    return-void
.end method

.method public final show()V
    .locals 4

    .line 289
    invoke-super {p0}, Landroid/app/Dialog;->show()V

    .line 291
    :try_start_0
    invoke-virtual {p0}, Lcom/tkay/expressad/widget/a/b;->getWindow()Landroid/view/Window;

    move-result-object v0

    const/16 v1, 0x8

    invoke-virtual {v0, v1, v1}, Landroid/view/Window;->setFlags(II)V

    .line 292
    invoke-super {p0}, Landroid/app/Dialog;->show()V

    .line 293
    invoke-virtual {p0}, Lcom/tkay/expressad/widget/a/b;->getWindow()Landroid/view/Window;

    move-result-object v0

    if-eqz v0, :cond_2

    const/16 v2, 0x400

    .line 1303
    invoke-virtual {v0, v2, v2}, Landroid/view/Window;->setFlags(II)V

    .line 1305
    sget v2, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v3, 0x13

    if-lt v2, v3, :cond_0

    const/high16 v2, 0x4000000

    .line 1306
    invoke-virtual {v0, v2}, Landroid/view/Window;->addFlags(I)V

    .line 1308
    invoke-virtual {v0}, Landroid/view/Window;->getDecorView()Landroid/view/View;

    move-result-object v2

    const/16 v3, 0x1002

    invoke-virtual {v2, v3}, Landroid/view/View;->setSystemUiVisibility(I)V

    goto :goto_0

    .line 1310
    :cond_0
    invoke-virtual {v0}, Landroid/view/Window;->getDecorView()Landroid/view/View;

    move-result-object v2

    const/4 v3, 0x2

    invoke-virtual {v2, v3}, Landroid/view/View;->setSystemUiVisibility(I)V

    .line 1313
    :goto_0
    sget v2, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v3, 0x1c

    if-lt v2, v3, :cond_1

    .line 1314
    invoke-virtual {v0}, Landroid/view/Window;->getAttributes()Landroid/view/WindowManager$LayoutParams;

    move-result-object v2

    const/4 v3, 0x1

    .line 1315
    iput v3, v2, Landroid/view/WindowManager$LayoutParams;->layoutInDisplayCutoutMode:I

    .line 1316
    invoke-virtual {v0, v2}, Landroid/view/Window;->setAttributes(Landroid/view/WindowManager$LayoutParams;)V

    .line 1319
    :cond_1
    new-instance v2, Landroid/graphics/drawable/ColorDrawable;

    const/4 v3, 0x0

    invoke-direct {v2, v3}, Landroid/graphics/drawable/ColorDrawable;-><init>(I)V

    invoke-virtual {v0, v2}, Landroid/view/Window;->setBackgroundDrawable(Landroid/graphics/drawable/Drawable;)V

    const/4 v2, -0x1

    .line 1320
    invoke-virtual {v0, v2, v2}, Landroid/view/Window;->setLayout(II)V

    const/16 v2, 0x11

    .line 1321
    invoke-virtual {v0, v2}, Landroid/view/Window;->setGravity(I)V

    .line 294
    :cond_2
    invoke-virtual {p0}, Lcom/tkay/expressad/widget/a/b;->getWindow()Landroid/view/Window;

    move-result-object v0

    invoke-virtual {v0, v1}, Landroid/view/Window;->clearFlags(I)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception v0

    .line 296
    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    .line 297
    invoke-super {p0}, Landroid/app/Dialog;->show()V

    return-void
.end method
