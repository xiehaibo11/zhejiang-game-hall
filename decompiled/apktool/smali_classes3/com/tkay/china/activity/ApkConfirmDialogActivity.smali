.class public Lcom/tkay/china/activity/ApkConfirmDialogActivity;
.super Landroid/app/Activity;


# static fields
.field public static a:Lcom/tkay/core/common/f/h;

.field private static b:Lcom/tkay/core/common/g/a;


# instance fields
.field private c:Landroid/app/Dialog;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 40
    invoke-direct {p0}, Landroid/app/Activity;-><init>()V

    return-void
.end method

.method static synthetic a()Lcom/tkay/core/common/g/a;
    .locals 1

    .line 40
    sget-object v0, Lcom/tkay/china/activity/ApkConfirmDialogActivity;->b:Lcom/tkay/core/common/g/a;

    return-object v0
.end method

.method static synthetic a(Lcom/tkay/core/common/g/a;)Lcom/tkay/core/common/g/a;
    .locals 0

    .line 40
    sput-object p0, Lcom/tkay/china/activity/ApkConfirmDialogActivity;->b:Lcom/tkay/core/common/g/a;

    return-object p0
.end method

.method public static a(Landroid/content/Context;Lcom/tkay/core/common/f/h;Lcom/tkay/core/common/g/a;)V
    .locals 2

    .line 48
    invoke-static {}, Lcom/tkay/core/common/l/b/a;->a()Lcom/tkay/core/common/l/b/a;

    move-result-object v0

    new-instance v1, Lcom/tkay/china/activity/ApkConfirmDialogActivity$1;

    invoke-direct {v1, p0, p1, p2}, Lcom/tkay/china/activity/ApkConfirmDialogActivity$1;-><init>(Landroid/content/Context;Lcom/tkay/core/common/f/h;Lcom/tkay/core/common/g/a;)V

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/l/b/a;->a(Ljava/lang/Runnable;)V

    return-void
.end method

.method private b()V
    .locals 8

    const-string v0, "id"

    :try_start_0
    const-string v1, ""

    .line 117
    sget-object v2, Lcom/tkay/china/activity/ApkConfirmDialogActivity;->a:Lcom/tkay/core/common/f/h;

    instance-of v2, v2, Lcom/tkay/core/common/f/z;

    if-eqz v2, :cond_0

    .line 118
    sget-object v1, Lcom/tkay/china/activity/ApkConfirmDialogActivity;->a:Lcom/tkay/core/common/f/h;

    check-cast v1, Lcom/tkay/core/common/f/z;

    invoke-virtual {v1}, Lcom/tkay/core/common/f/z;->aa()Ljava/lang/String;

    move-result-object v1

    .line 121
    :cond_0
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_1

    .line 122
    sget-object v1, Lcom/tkay/china/activity/ApkConfirmDialogActivity;->a:Lcom/tkay/core/common/f/h;

    invoke-virtual {v1}, Lcom/tkay/core/common/f/h;->r()Ljava/lang/String;

    move-result-object v1

    .line 126
    :cond_1
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

    .line 128
    invoke-static {p0, v3, v0}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v3

    invoke-virtual {v2, v3}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v3

    check-cast v3, Landroid/widget/TextView;

    const-string v4, "myoffer_confirm_give_up"

    .line 129
    invoke-static {p0, v4, v0}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v4

    invoke-virtual {v2, v4}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v4

    check-cast v4, Landroid/widget/TextView;

    const-string v6, "myoffer_confirm_continue"

    .line 130
    invoke-static {p0, v6, v0}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    invoke-virtual {v2, v0}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    .line 132
    new-instance v6, Ljava/lang/StringBuilder;

    const-string v7, "\u7acb\u5373\u4e0b\u8f7d\""

    invoke-direct {v6, v7}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v6, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "\"?"

    invoke-virtual {v6, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v3, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    const-string v1, "\u53d6 \u6d88"

    .line 134
    invoke-virtual {v4, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    const-string v1, "\u786e \u5b9a"

    .line 136
    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 139
    new-instance v1, Lcom/tkay/china/activity/ApkConfirmDialogActivity$2;

    invoke-direct {v1, p0}, Lcom/tkay/china/activity/ApkConfirmDialogActivity$2;-><init>(Lcom/tkay/china/activity/ApkConfirmDialogActivity;)V

    invoke-virtual {v4, v1}, Landroid/widget/TextView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 155
    new-instance v1, Lcom/tkay/china/activity/ApkConfirmDialogActivity$3;

    invoke-direct {v1, p0}, Lcom/tkay/china/activity/ApkConfirmDialogActivity$3;-><init>(Lcom/tkay/china/activity/ApkConfirmDialogActivity;)V

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 171
    new-instance v0, Landroid/app/Dialog;

    const-string v1, "style_full_screen_translucent_dialog"

    const-string v3, "style"

    invoke-static {p0, v1, v3}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v1

    invoke-direct {v0, p0, v1}, Landroid/app/Dialog;-><init>(Landroid/content/Context;I)V

    iput-object v0, p0, Lcom/tkay/china/activity/ApkConfirmDialogActivity;->c:Landroid/app/Dialog;

    .line 172
    invoke-virtual {v0, v2}, Landroid/app/Dialog;->setContentView(Landroid/view/View;)V

    .line 173
    iget-object v0, p0, Lcom/tkay/china/activity/ApkConfirmDialogActivity;->c:Landroid/app/Dialog;

    invoke-virtual {v0, v5}, Landroid/app/Dialog;->setCancelable(Z)V

    .line 175
    iget-object v0, p0, Lcom/tkay/china/activity/ApkConfirmDialogActivity;->c:Landroid/app/Dialog;

    invoke-virtual {v0}, Landroid/app/Dialog;->show()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    .line 178
    :catchall_0
    invoke-virtual {p0}, Lcom/tkay/china/activity/ApkConfirmDialogActivity;->finish()V

    return-void
.end method

.method private c()V
    .locals 19

    move-object/from16 v0, p0

    const-string v1, "confirm_dialog_privacy_agreement"

    const-string v2, "string"

    const-string v3, "id"

    .line 185
    :try_start_0
    sget-object v4, Lcom/tkay/china/activity/ApkConfirmDialogActivity;->a:Lcom/tkay/core/common/f/h;

    .line 187
    invoke-static/range {p0 .. p0}, Landroid/view/LayoutInflater;->from(Landroid/content/Context;)Landroid/view/LayoutInflater;

    move-result-object v5

    const-string v6, "confirm"

    const-string v7, "layout"

    invoke-static {v0, v6, v7}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v6

    const/4 v7, 0x0

    const/4 v8, 0x0

    invoke-virtual {v5, v6, v7, v8}, Landroid/view/LayoutInflater;->inflate(ILandroid/view/ViewGroup;Z)Landroid/view/View;

    move-result-object v5

    const-string v6, "confirm_dialog_icon"

    .line 189
    invoke-static {v0, v6, v3}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v6

    invoke-virtual {v5, v6}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v6

    check-cast v6, Lcom/tkay/core/common/ui/component/RoundImageView;

    const-string v7, "confirm_dialog_title"

    .line 190
    invoke-static {v0, v7, v3}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v7

    invoke-virtual {v5, v7}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v7

    check-cast v7, Landroid/widget/TextView;

    const-string v9, "confirm_dialog_version_name"

    .line 191
    invoke-static {v0, v9, v3}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v9

    invoke-virtual {v5, v9}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v9

    check-cast v9, Landroid/widget/TextView;

    const-string v10, "confirm_dialog_publisher_name"

    .line 192
    invoke-static {v0, v10, v3}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v10

    invoke-virtual {v5, v10}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v10

    check-cast v10, Landroid/widget/TextView;

    const-string v11, "confirm_dialog_permission_manage"

    .line 194
    invoke-static {v0, v11, v3}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v11

    invoke-virtual {v5, v11}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v11

    check-cast v11, Landroid/widget/TextView;

    .line 195
    invoke-static {v0, v1, v3}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v12

    invoke-virtual {v5, v12}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v12

    check-cast v12, Landroid/widget/TextView;

    const-string v13, "confirm_dialog_download_now"

    .line 197
    invoke-static {v0, v13, v3}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v13

    invoke-virtual {v5, v13}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v13

    check-cast v13, Landroid/widget/TextView;

    const-string v14, "confirm_dialog_give_up"

    .line 198
    invoke-static {v0, v14, v3}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v3

    invoke-virtual {v5, v3}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v3

    check-cast v3, Landroid/widget/TextView;

    .line 201
    invoke-virtual {v4}, Lcom/tkay/core/common/f/h;->t()Ljava/lang/String;

    move-result-object v14

    .line 202
    invoke-static {v14}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v15

    const/4 v8, 0x1

    if-nez v15, :cond_0

    .line 203
    invoke-virtual {v6, v8}, Lcom/tkay/core/common/ui/component/RoundImageView;->setNeedRadiu(Z)V

    const/4 v15, 0x4

    .line 204
    invoke-virtual {v6, v15}, Lcom/tkay/core/common/ui/component/RoundImageView;->setRadiusInDip(I)V

    .line 205
    invoke-virtual {v6}, Lcom/tkay/core/common/ui/component/RoundImageView;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v15

    .line 207
    invoke-static/range {p0 .. p0}, Lcom/tkay/core/common/res/b;->a(Landroid/content/Context;)Lcom/tkay/core/common/res/b;

    move-result-object v8

    move-object/from16 v16, v5

    new-instance v5, Lcom/tkay/core/common/res/e;

    move-object/from16 v17, v3

    const/4 v3, 0x1

    invoke-direct {v5, v3, v14}, Lcom/tkay/core/common/res/e;-><init>(ILjava/lang/String;)V

    iget v3, v15, Landroid/view/ViewGroup$LayoutParams;->width:I

    iget v15, v15, Landroid/view/ViewGroup$LayoutParams;->height:I

    move-object/from16 v18, v13

    new-instance v13, Lcom/tkay/china/activity/ApkConfirmDialogActivity$4;

    invoke-direct {v13, v0, v14, v6}, Lcom/tkay/china/activity/ApkConfirmDialogActivity$4;-><init>(Lcom/tkay/china/activity/ApkConfirmDialogActivity;Ljava/lang/String;Lcom/tkay/core/common/ui/component/RoundImageView;)V

    invoke-virtual {v8, v5, v3, v15, v13}, Lcom/tkay/core/common/res/b;->a(Lcom/tkay/core/common/res/e;IILcom/tkay/core/common/res/b$a;)V

    goto :goto_0

    :cond_0
    move-object/from16 v17, v3

    move-object/from16 v16, v5

    move-object/from16 v18, v13

    .line 221
    invoke-virtual {v6}, Lcom/tkay/core/common/ui/component/RoundImageView;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v3

    const/4 v5, 0x0

    .line 222
    iput v5, v3, Landroid/view/ViewGroup$LayoutParams;->width:I

    .line 223
    iput v5, v3, Landroid/view/ViewGroup$LayoutParams;->height:I

    .line 224
    invoke-virtual {v6, v3}, Lcom/tkay/core/common/ui/component/RoundImageView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    :goto_0
    const-string v3, ""

    .line 229
    instance-of v5, v4, Lcom/tkay/core/common/f/z;

    if-eqz v5, :cond_1

    .line 230
    move-object v3, v4

    check-cast v3, Lcom/tkay/core/common/f/z;

    invoke-virtual {v3}, Lcom/tkay/core/common/f/z;->aa()Ljava/lang/String;

    move-result-object v3

    .line 233
    :cond_1
    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v5

    if-eqz v5, :cond_2

    .line 234
    invoke-virtual {v4}, Lcom/tkay/core/common/f/h;->r()Ljava/lang/String;

    move-result-object v3

    .line 236
    :cond_2
    invoke-virtual {v7, v3}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 239
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/china/activity/ApkConfirmDialogActivity;->getResources()Landroid/content/res/Resources;

    move-result-object v3

    const-string v5, "confirm_dialog_version"

    invoke-static {v0, v5, v2}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v5

    const/4 v6, 0x1

    new-array v7, v6, [Ljava/lang/Object;

    invoke-virtual {v4}, Lcom/tkay/core/common/f/h;->G()Ljava/lang/String;

    move-result-object v6

    const/4 v8, 0x0

    aput-object v6, v7, v8

    invoke-virtual {v3, v5, v7}, Landroid/content/res/Resources;->getString(I[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v3

    .line 240
    invoke-virtual {v9, v3}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 242
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/china/activity/ApkConfirmDialogActivity;->getResources()Landroid/content/res/Resources;

    move-result-object v3

    const-string v5, "confirm_dialog_publisher"

    invoke-static {v0, v5, v2}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v5

    const/4 v6, 0x1

    new-array v6, v6, [Ljava/lang/Object;

    invoke-virtual {v4}, Lcom/tkay/core/common/f/h;->F()Ljava/lang/String;

    move-result-object v7

    const/4 v8, 0x0

    aput-object v7, v6, v8

    invoke-virtual {v3, v5, v6}, Landroid/content/res/Resources;->getString(I[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v3

    .line 243
    invoke-virtual {v10, v3}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 247
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/china/activity/ApkConfirmDialogActivity;->getResources()Landroid/content/res/Resources;

    move-result-object v3

    invoke-static {v0, v1, v2}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v1

    invoke-virtual {v3, v1}, Landroid/content/res/Resources;->getString(I)Ljava/lang/String;

    move-result-object v1

    .line 248
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/china/activity/ApkConfirmDialogActivity;->getResources()Landroid/content/res/Resources;

    move-result-object v3

    const-string v5, "confirm_dialog_application_permission"

    invoke-static {v0, v5, v2}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v2

    invoke-virtual {v3, v2}, Landroid/content/res/Resources;->getString(I)Ljava/lang/String;

    move-result-object v2

    .line 3016
    invoke-virtual {v1}, Ljava/lang/String;->length()I

    move-result v3

    .line 3017
    invoke-virtual {v2}, Ljava/lang/String;->length()I

    move-result v2

    if-ne v3, v2, :cond_3

    goto :goto_2

    :cond_3
    sub-int/2addr v2, v3

    .line 3023
    invoke-static {v2}, Ljava/lang/Math;->abs(I)I

    move-result v2

    .line 3025
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    const/4 v5, 0x0

    :goto_1
    if-ge v5, v2, :cond_4

    const-string v1, " "

    .line 3027
    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    add-int/lit8 v5, v5, 0x1

    goto :goto_1

    .line 3030
    :cond_4
    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    .line 251
    :goto_2
    invoke-virtual {v12, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 254
    new-instance v1, Lcom/tkay/china/activity/ApkConfirmDialogActivity$5;

    invoke-direct {v1, v0, v4}, Lcom/tkay/china/activity/ApkConfirmDialogActivity$5;-><init>(Lcom/tkay/china/activity/ApkConfirmDialogActivity;Lcom/tkay/core/common/f/h;)V

    invoke-virtual {v11, v1}, Landroid/widget/TextView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 261
    new-instance v1, Lcom/tkay/china/activity/ApkConfirmDialogActivity$6;

    invoke-direct {v1, v0, v4}, Lcom/tkay/china/activity/ApkConfirmDialogActivity$6;-><init>(Lcom/tkay/china/activity/ApkConfirmDialogActivity;Lcom/tkay/core/common/f/h;)V

    invoke-virtual {v12, v1}, Landroid/widget/TextView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 268
    new-instance v1, Lcom/tkay/china/activity/ApkConfirmDialogActivity$7;

    invoke-direct {v1, v0}, Lcom/tkay/china/activity/ApkConfirmDialogActivity$7;-><init>(Lcom/tkay/china/activity/ApkConfirmDialogActivity;)V

    move-object/from16 v13, v18

    invoke-virtual {v13, v1}, Landroid/widget/TextView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 284
    new-instance v1, Lcom/tkay/china/activity/ApkConfirmDialogActivity$8;

    invoke-direct {v1, v0}, Lcom/tkay/china/activity/ApkConfirmDialogActivity$8;-><init>(Lcom/tkay/china/activity/ApkConfirmDialogActivity;)V

    move-object/from16 v3, v17

    invoke-virtual {v3, v1}, Landroid/widget/TextView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 301
    new-instance v1, Landroid/app/Dialog;

    const-string v2, "style_full_screen_translucent_dialog"

    const-string v3, "style"

    invoke-static {v0, v2, v3}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v2

    invoke-direct {v1, v0, v2}, Landroid/app/Dialog;-><init>(Landroid/content/Context;I)V

    iput-object v1, v0, Lcom/tkay/china/activity/ApkConfirmDialogActivity;->c:Landroid/app/Dialog;

    move-object/from16 v2, v16

    .line 302
    invoke-virtual {v1, v2}, Landroid/app/Dialog;->setContentView(Landroid/view/View;)V

    .line 303
    iget-object v1, v0, Lcom/tkay/china/activity/ApkConfirmDialogActivity;->c:Landroid/app/Dialog;

    const/4 v2, 0x0

    invoke-virtual {v1, v2}, Landroid/app/Dialog;->setCancelable(Z)V

    .line 305
    iget-object v1, v0, Lcom/tkay/china/activity/ApkConfirmDialogActivity;->c:Landroid/app/Dialog;

    invoke-virtual {v1}, Landroid/app/Dialog;->getWindow()Landroid/view/Window;

    move-result-object v1

    if-eqz v1, :cond_6

    .line 308
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/china/activity/ApkConfirmDialogActivity;->getResources()Landroid/content/res/Resources;

    move-result-object v2

    const-string v3, "confirm_dialog_margin"

    const-string v4, "dimen"

    invoke-static {v0, v3, v4}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v3

    invoke-virtual {v2, v3}, Landroid/content/res/Resources;->getDimensionPixelSize(I)I

    move-result v2

    .line 310
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/china/activity/ApkConfirmDialogActivity;->getResources()Landroid/content/res/Resources;

    move-result-object v3

    invoke-virtual {v3}, Landroid/content/res/Resources;->getDisplayMetrics()Landroid/util/DisplayMetrics;

    move-result-object v3

    iget v3, v3, Landroid/util/DisplayMetrics;->widthPixels:I

    .line 311
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/china/activity/ApkConfirmDialogActivity;->getResources()Landroid/content/res/Resources;

    move-result-object v4

    invoke-virtual {v4}, Landroid/content/res/Resources;->getDisplayMetrics()Landroid/util/DisplayMetrics;

    move-result-object v4

    iget v4, v4, Landroid/util/DisplayMetrics;->heightPixels:I

    const v5, 0x3f7d1471

    if-le v3, v4, :cond_5

    mul-int/lit8 v2, v2, 0x2

    sub-int/2addr v4, v2

    int-to-float v2, v4

    mul-float/2addr v2, v5

    float-to-double v2, v2

    .line 318
    invoke-static {v2, v3}, Ljava/lang/Math;->ceil(D)D

    move-result-wide v2

    double-to-int v2, v2

    .line 320
    invoke-virtual {v1, v2, v4}, Landroid/view/Window;->setLayout(II)V

    goto :goto_3

    :cond_5
    mul-int/lit8 v2, v2, 0x2

    sub-int/2addr v3, v2

    int-to-float v2, v3

    div-float/2addr v2, v5

    float-to-double v4, v2

    .line 324
    invoke-static {v4, v5}, Ljava/lang/Math;->ceil(D)D

    move-result-wide v4

    double-to-int v2, v4

    .line 326
    invoke-virtual {v1, v3, v2}, Landroid/view/Window;->setLayout(II)V

    .line 330
    :cond_6
    :goto_3
    iget-object v1, v0, Lcom/tkay/china/activity/ApkConfirmDialogActivity;->c:Landroid/app/Dialog;

    invoke-virtual {v1}, Landroid/app/Dialog;->show()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    .line 332
    :catchall_0
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/china/activity/ApkConfirmDialogActivity;->finish()V

    return-void
.end method


# virtual methods
.method public onCreate(Landroid/os/Bundle;)V
    .locals 22

    move-object/from16 v0, p0

    const-string v1, "confirm_dialog_privacy_agreement"

    const-string v2, "string"

    .line 81
    invoke-super/range {p0 .. p1}, Landroid/app/Activity;->onCreate(Landroid/os/Bundle;)V

    .line 84
    sget-object v3, Lcom/tkay/china/activity/ApkConfirmDialogActivity;->a:Lcom/tkay/core/common/f/h;

    if-nez v3, :cond_0

    .line 85
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/china/activity/ApkConfirmDialogActivity;->finish()V

    return-void

    .line 90
    :cond_0
    invoke-virtual {v3}, Lcom/tkay/core/common/f/h;->r()Ljava/lang/String;

    move-result-object v3

    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    const/4 v5, 0x0

    if-eqz v3, :cond_2

    sget-object v3, Lcom/tkay/china/activity/ApkConfirmDialogActivity;->a:Lcom/tkay/core/common/f/h;

    instance-of v6, v3, Lcom/tkay/core/common/f/z;

    if-eqz v6, :cond_1

    check-cast v3, Lcom/tkay/core/common/f/z;

    .line 91
    invoke-virtual {v3}, Lcom/tkay/core/common/f/z;->aa()Ljava/lang/String;

    move-result-object v3

    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_1

    goto :goto_0

    :cond_1
    move v3, v5

    goto :goto_1

    :cond_2
    :goto_0
    const/4 v3, 0x1

    :goto_1
    const-string v6, "style"

    const-string v7, "style_full_screen_translucent_dialog"

    const/4 v8, 0x0

    const-string v9, "layout"

    const-string v10, ""

    const-string v11, "id"

    if-eqz v3, :cond_a

    .line 93
    sget-object v3, Lcom/tkay/china/activity/ApkConfirmDialogActivity;->a:Lcom/tkay/core/common/f/h;

    .line 94
    invoke-virtual {v3}, Lcom/tkay/core/common/f/h;->G()Ljava/lang/String;

    move-result-object v3

    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_a

    sget-object v3, Lcom/tkay/china/activity/ApkConfirmDialogActivity;->a:Lcom/tkay/core/common/f/h;

    .line 95
    invoke-virtual {v3}, Lcom/tkay/core/common/f/h;->F()Ljava/lang/String;

    move-result-object v3

    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_a

    sget-object v3, Lcom/tkay/china/activity/ApkConfirmDialogActivity;->a:Lcom/tkay/core/common/f/h;

    .line 96
    invoke-virtual {v3}, Lcom/tkay/core/common/f/h;->H()Ljava/lang/String;

    move-result-object v3

    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_a

    sget-object v3, Lcom/tkay/china/activity/ApkConfirmDialogActivity;->a:Lcom/tkay/core/common/f/h;

    .line 97
    invoke-virtual {v3}, Lcom/tkay/core/common/f/h;->I()Ljava/lang/String;

    move-result-object v3

    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_a

    .line 1185
    :try_start_0
    sget-object v3, Lcom/tkay/china/activity/ApkConfirmDialogActivity;->a:Lcom/tkay/core/common/f/h;

    .line 1187
    invoke-static/range {p0 .. p0}, Landroid/view/LayoutInflater;->from(Landroid/content/Context;)Landroid/view/LayoutInflater;

    move-result-object v12

    const-string v13, "confirm"

    invoke-static {v0, v13, v9}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v9

    invoke-virtual {v12, v9, v8, v5}, Landroid/view/LayoutInflater;->inflate(ILandroid/view/ViewGroup;Z)Landroid/view/View;

    move-result-object v8

    const-string v9, "confirm_dialog_icon"

    .line 1189
    invoke-static {v0, v9, v11}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v9

    invoke-virtual {v8, v9}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v9

    check-cast v9, Lcom/tkay/core/common/ui/component/RoundImageView;

    const-string v12, "confirm_dialog_title"

    .line 1190
    invoke-static {v0, v12, v11}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v12

    invoke-virtual {v8, v12}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v12

    check-cast v12, Landroid/widget/TextView;

    const-string v13, "confirm_dialog_version_name"

    .line 1191
    invoke-static {v0, v13, v11}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v13

    invoke-virtual {v8, v13}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v13

    check-cast v13, Landroid/widget/TextView;

    const-string v14, "confirm_dialog_publisher_name"

    .line 1192
    invoke-static {v0, v14, v11}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v14

    invoke-virtual {v8, v14}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v14

    check-cast v14, Landroid/widget/TextView;

    const-string v15, "confirm_dialog_permission_manage"

    .line 1194
    invoke-static {v0, v15, v11}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v15

    invoke-virtual {v8, v15}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v15

    check-cast v15, Landroid/widget/TextView;

    .line 1195
    invoke-static {v0, v1, v11}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v5

    invoke-virtual {v8, v5}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v5

    check-cast v5, Landroid/widget/TextView;

    const-string v4, "confirm_dialog_download_now"

    .line 1197
    invoke-static {v0, v4, v11}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v4

    invoke-virtual {v8, v4}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v4

    check-cast v4, Landroid/widget/TextView;

    move-object/from16 v16, v10

    const-string v10, "confirm_dialog_give_up"

    .line 1198
    invoke-static {v0, v10, v11}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v10

    invoke-virtual {v8, v10}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v10

    check-cast v10, Landroid/widget/TextView;

    .line 1201
    invoke-virtual {v3}, Lcom/tkay/core/common/f/h;->t()Ljava/lang/String;

    move-result-object v11

    .line 1202
    invoke-static {v11}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v17

    if-nez v17, :cond_3

    move-object/from16 v17, v8

    const/4 v8, 0x1

    .line 1203
    invoke-virtual {v9, v8}, Lcom/tkay/core/common/ui/component/RoundImageView;->setNeedRadiu(Z)V

    const/4 v8, 0x4

    .line 1204
    invoke-virtual {v9, v8}, Lcom/tkay/core/common/ui/component/RoundImageView;->setRadiusInDip(I)V

    .line 1205
    invoke-virtual {v9}, Lcom/tkay/core/common/ui/component/RoundImageView;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v8

    move-object/from16 v18, v6

    .line 1207
    invoke-static/range {p0 .. p0}, Lcom/tkay/core/common/res/b;->a(Landroid/content/Context;)Lcom/tkay/core/common/res/b;

    move-result-object v6

    move-object/from16 v19, v7

    new-instance v7, Lcom/tkay/core/common/res/e;

    move-object/from16 v20, v10

    const/4 v10, 0x1

    invoke-direct {v7, v10, v11}, Lcom/tkay/core/common/res/e;-><init>(ILjava/lang/String;)V

    iget v10, v8, Landroid/view/ViewGroup$LayoutParams;->width:I

    iget v8, v8, Landroid/view/ViewGroup$LayoutParams;->height:I

    move-object/from16 v21, v4

    new-instance v4, Lcom/tkay/china/activity/ApkConfirmDialogActivity$4;

    invoke-direct {v4, v0, v11, v9}, Lcom/tkay/china/activity/ApkConfirmDialogActivity$4;-><init>(Lcom/tkay/china/activity/ApkConfirmDialogActivity;Ljava/lang/String;Lcom/tkay/core/common/ui/component/RoundImageView;)V

    invoke-virtual {v6, v7, v10, v8, v4}, Lcom/tkay/core/common/res/b;->a(Lcom/tkay/core/common/res/e;IILcom/tkay/core/common/res/b$a;)V

    goto :goto_2

    :cond_3
    move-object/from16 v21, v4

    move-object/from16 v18, v6

    move-object/from16 v19, v7

    move-object/from16 v17, v8

    move-object/from16 v20, v10

    .line 1221
    invoke-virtual {v9}, Lcom/tkay/core/common/ui/component/RoundImageView;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v4

    const/4 v6, 0x0

    .line 1222
    iput v6, v4, Landroid/view/ViewGroup$LayoutParams;->width:I

    .line 1223
    iput v6, v4, Landroid/view/ViewGroup$LayoutParams;->height:I

    .line 1224
    invoke-virtual {v9, v4}, Lcom/tkay/core/common/ui/component/RoundImageView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 1229
    :goto_2
    instance-of v4, v3, Lcom/tkay/core/common/f/z;

    if-eqz v4, :cond_4

    .line 1230
    move-object v4, v3

    check-cast v4, Lcom/tkay/core/common/f/z;

    invoke-virtual {v4}, Lcom/tkay/core/common/f/z;->aa()Ljava/lang/String;

    move-result-object v10

    goto :goto_3

    :cond_4
    move-object/from16 v10, v16

    .line 1233
    :goto_3
    invoke-static {v10}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-eqz v4, :cond_5

    .line 1234
    invoke-virtual {v3}, Lcom/tkay/core/common/f/h;->r()Ljava/lang/String;

    move-result-object v10

    .line 1236
    :cond_5
    invoke-virtual {v12, v10}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 1239
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/china/activity/ApkConfirmDialogActivity;->getResources()Landroid/content/res/Resources;

    move-result-object v4

    const-string v6, "confirm_dialog_version"

    invoke-static {v0, v6, v2}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v6

    const/4 v7, 0x1

    new-array v8, v7, [Ljava/lang/Object;

    invoke-virtual {v3}, Lcom/tkay/core/common/f/h;->G()Ljava/lang/String;

    move-result-object v7

    const/4 v9, 0x0

    aput-object v7, v8, v9

    invoke-virtual {v4, v6, v8}, Landroid/content/res/Resources;->getString(I[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v4

    .line 1240
    invoke-virtual {v13, v4}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 1242
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/china/activity/ApkConfirmDialogActivity;->getResources()Landroid/content/res/Resources;

    move-result-object v4

    const-string v6, "confirm_dialog_publisher"

    invoke-static {v0, v6, v2}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v6

    const/4 v7, 0x1

    new-array v7, v7, [Ljava/lang/Object;

    invoke-virtual {v3}, Lcom/tkay/core/common/f/h;->F()Ljava/lang/String;

    move-result-object v8

    const/4 v9, 0x0

    aput-object v8, v7, v9

    invoke-virtual {v4, v6, v7}, Landroid/content/res/Resources;->getString(I[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v4

    .line 1243
    invoke-virtual {v14, v4}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 1247
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/china/activity/ApkConfirmDialogActivity;->getResources()Landroid/content/res/Resources;

    move-result-object v4

    invoke-static {v0, v1, v2}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v1

    invoke-virtual {v4, v1}, Landroid/content/res/Resources;->getString(I)Ljava/lang/String;

    move-result-object v1

    .line 1248
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/china/activity/ApkConfirmDialogActivity;->getResources()Landroid/content/res/Resources;

    move-result-object v4

    const-string v6, "confirm_dialog_application_permission"

    invoke-static {v0, v6, v2}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v2

    invoke-virtual {v4, v2}, Landroid/content/res/Resources;->getString(I)Ljava/lang/String;

    move-result-object v2

    .line 2016
    invoke-virtual {v1}, Ljava/lang/String;->length()I

    move-result v4

    .line 2017
    invoke-virtual {v2}, Ljava/lang/String;->length()I

    move-result v2

    if-ne v4, v2, :cond_6

    goto :goto_5

    :cond_6
    sub-int/2addr v2, v4

    .line 2023
    invoke-static {v2}, Ljava/lang/Math;->abs(I)I

    move-result v2

    .line 2025
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    const/4 v1, 0x0

    :goto_4
    if-ge v1, v2, :cond_7

    const-string v6, " "

    .line 2027
    invoke-virtual {v4, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    add-int/lit8 v1, v1, 0x1

    goto :goto_4

    .line 2030
    :cond_7
    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    .line 1251
    :goto_5
    invoke-virtual {v5, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 1254
    new-instance v1, Lcom/tkay/china/activity/ApkConfirmDialogActivity$5;

    invoke-direct {v1, v0, v3}, Lcom/tkay/china/activity/ApkConfirmDialogActivity$5;-><init>(Lcom/tkay/china/activity/ApkConfirmDialogActivity;Lcom/tkay/core/common/f/h;)V

    invoke-virtual {v15, v1}, Landroid/widget/TextView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 1261
    new-instance v1, Lcom/tkay/china/activity/ApkConfirmDialogActivity$6;

    invoke-direct {v1, v0, v3}, Lcom/tkay/china/activity/ApkConfirmDialogActivity$6;-><init>(Lcom/tkay/china/activity/ApkConfirmDialogActivity;Lcom/tkay/core/common/f/h;)V

    invoke-virtual {v5, v1}, Landroid/widget/TextView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 1268
    new-instance v1, Lcom/tkay/china/activity/ApkConfirmDialogActivity$7;

    invoke-direct {v1, v0}, Lcom/tkay/china/activity/ApkConfirmDialogActivity$7;-><init>(Lcom/tkay/china/activity/ApkConfirmDialogActivity;)V

    move-object/from16 v4, v21

    invoke-virtual {v4, v1}, Landroid/widget/TextView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 1284
    new-instance v1, Lcom/tkay/china/activity/ApkConfirmDialogActivity$8;

    invoke-direct {v1, v0}, Lcom/tkay/china/activity/ApkConfirmDialogActivity$8;-><init>(Lcom/tkay/china/activity/ApkConfirmDialogActivity;)V

    move-object/from16 v10, v20

    invoke-virtual {v10, v1}, Landroid/widget/TextView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 1301
    new-instance v1, Landroid/app/Dialog;

    move-object/from16 v2, v18

    move-object/from16 v3, v19

    invoke-static {v0, v3, v2}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v2

    invoke-direct {v1, v0, v2}, Landroid/app/Dialog;-><init>(Landroid/content/Context;I)V

    iput-object v1, v0, Lcom/tkay/china/activity/ApkConfirmDialogActivity;->c:Landroid/app/Dialog;

    move-object/from16 v2, v17

    .line 1302
    invoke-virtual {v1, v2}, Landroid/app/Dialog;->setContentView(Landroid/view/View;)V

    .line 1303
    iget-object v1, v0, Lcom/tkay/china/activity/ApkConfirmDialogActivity;->c:Landroid/app/Dialog;

    const/4 v2, 0x0

    invoke-virtual {v1, v2}, Landroid/app/Dialog;->setCancelable(Z)V

    .line 1305
    iget-object v1, v0, Lcom/tkay/china/activity/ApkConfirmDialogActivity;->c:Landroid/app/Dialog;

    invoke-virtual {v1}, Landroid/app/Dialog;->getWindow()Landroid/view/Window;

    move-result-object v1

    if-eqz v1, :cond_9

    .line 1308
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/china/activity/ApkConfirmDialogActivity;->getResources()Landroid/content/res/Resources;

    move-result-object v2

    const-string v3, "confirm_dialog_margin"

    const-string v4, "dimen"

    invoke-static {v0, v3, v4}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v3

    invoke-virtual {v2, v3}, Landroid/content/res/Resources;->getDimensionPixelSize(I)I

    move-result v2

    .line 1310
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/china/activity/ApkConfirmDialogActivity;->getResources()Landroid/content/res/Resources;

    move-result-object v3

    invoke-virtual {v3}, Landroid/content/res/Resources;->getDisplayMetrics()Landroid/util/DisplayMetrics;

    move-result-object v3

    iget v3, v3, Landroid/util/DisplayMetrics;->widthPixels:I

    .line 1311
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/china/activity/ApkConfirmDialogActivity;->getResources()Landroid/content/res/Resources;

    move-result-object v4

    invoke-virtual {v4}, Landroid/content/res/Resources;->getDisplayMetrics()Landroid/util/DisplayMetrics;

    move-result-object v4

    iget v4, v4, Landroid/util/DisplayMetrics;->heightPixels:I

    const v5, 0x3f7d1471

    if-le v3, v4, :cond_8

    mul-int/lit8 v2, v2, 0x2

    sub-int/2addr v4, v2

    int-to-float v2, v4

    mul-float/2addr v2, v5

    float-to-double v2, v2

    .line 1318
    invoke-static {v2, v3}, Ljava/lang/Math;->ceil(D)D

    move-result-wide v2

    double-to-int v2, v2

    .line 1320
    invoke-virtual {v1, v2, v4}, Landroid/view/Window;->setLayout(II)V

    goto :goto_6

    :cond_8
    mul-int/lit8 v2, v2, 0x2

    sub-int/2addr v3, v2

    int-to-float v2, v3

    div-float/2addr v2, v5

    float-to-double v4, v2

    .line 1324
    invoke-static {v4, v5}, Ljava/lang/Math;->ceil(D)D

    move-result-wide v4

    double-to-int v2, v4

    .line 1326
    invoke-virtual {v1, v3, v2}, Landroid/view/Window;->setLayout(II)V

    .line 1330
    :cond_9
    :goto_6
    iget-object v1, v0, Lcom/tkay/china/activity/ApkConfirmDialogActivity;->c:Landroid/app/Dialog;

    invoke-virtual {v1}, Landroid/app/Dialog;->show()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    .line 1332
    :catchall_0
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/china/activity/ApkConfirmDialogActivity;->finish()V

    return-void

    :cond_a
    move-object v2, v6

    move-object v3, v7

    move-object/from16 v16, v10

    .line 2117
    :try_start_1
    sget-object v1, Lcom/tkay/china/activity/ApkConfirmDialogActivity;->a:Lcom/tkay/core/common/f/h;

    instance-of v1, v1, Lcom/tkay/core/common/f/z;

    if-eqz v1, :cond_b

    .line 2118
    sget-object v1, Lcom/tkay/china/activity/ApkConfirmDialogActivity;->a:Lcom/tkay/core/common/f/h;

    check-cast v1, Lcom/tkay/core/common/f/z;

    invoke-virtual {v1}, Lcom/tkay/core/common/f/z;->aa()Ljava/lang/String;

    move-result-object v10

    goto :goto_7

    :cond_b
    move-object/from16 v10, v16

    .line 2121
    :goto_7
    invoke-static {v10}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_c

    .line 2122
    sget-object v1, Lcom/tkay/china/activity/ApkConfirmDialogActivity;->a:Lcom/tkay/core/common/f/h;

    invoke-virtual {v1}, Lcom/tkay/core/common/f/h;->r()Ljava/lang/String;

    move-result-object v10

    .line 2126
    :cond_c
    invoke-static/range {p0 .. p0}, Landroid/view/LayoutInflater;->from(Landroid/content/Context;)Landroid/view/LayoutInflater;

    move-result-object v1

    const-string v4, "myoffer_confirm_dialog"

    invoke-static {v0, v4, v9}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v4

    const/4 v5, 0x0

    invoke-virtual {v1, v4, v8, v5}, Landroid/view/LayoutInflater;->inflate(ILandroid/view/ViewGroup;Z)Landroid/view/View;

    move-result-object v1

    const-string v4, "myoffer_confirm_msg"

    .line 2128
    invoke-static {v0, v4, v11}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v4

    invoke-virtual {v1, v4}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v4

    check-cast v4, Landroid/widget/TextView;

    const-string v5, "myoffer_confirm_give_up"

    .line 2129
    invoke-static {v0, v5, v11}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v5

    invoke-virtual {v1, v5}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v5

    check-cast v5, Landroid/widget/TextView;

    const-string v6, "myoffer_confirm_continue"

    .line 2130
    invoke-static {v0, v6, v11}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v6

    invoke-virtual {v1, v6}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v6

    check-cast v6, Landroid/widget/TextView;

    .line 2132
    new-instance v7, Ljava/lang/StringBuilder;

    const-string v8, "\u7acb\u5373\u4e0b\u8f7d\""

    invoke-direct {v7, v8}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v7, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v8, "\"?"

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v4, v7}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    const-string v4, "\u53d6 \u6d88"

    .line 2134
    invoke-virtual {v5, v4}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    const-string v4, "\u786e \u5b9a"

    .line 2136
    invoke-virtual {v6, v4}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 2139
    new-instance v4, Lcom/tkay/china/activity/ApkConfirmDialogActivity$2;

    invoke-direct {v4, v0}, Lcom/tkay/china/activity/ApkConfirmDialogActivity$2;-><init>(Lcom/tkay/china/activity/ApkConfirmDialogActivity;)V

    invoke-virtual {v5, v4}, Landroid/widget/TextView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 2155
    new-instance v4, Lcom/tkay/china/activity/ApkConfirmDialogActivity$3;

    invoke-direct {v4, v0}, Lcom/tkay/china/activity/ApkConfirmDialogActivity$3;-><init>(Lcom/tkay/china/activity/ApkConfirmDialogActivity;)V

    invoke-virtual {v6, v4}, Landroid/widget/TextView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 2171
    new-instance v4, Landroid/app/Dialog;

    invoke-static {v0, v3, v2}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v2

    invoke-direct {v4, v0, v2}, Landroid/app/Dialog;-><init>(Landroid/content/Context;I)V

    iput-object v4, v0, Lcom/tkay/china/activity/ApkConfirmDialogActivity;->c:Landroid/app/Dialog;

    .line 2172
    invoke-virtual {v4, v1}, Landroid/app/Dialog;->setContentView(Landroid/view/View;)V

    .line 2173
    iget-object v1, v0, Lcom/tkay/china/activity/ApkConfirmDialogActivity;->c:Landroid/app/Dialog;

    const/4 v2, 0x0

    invoke-virtual {v1, v2}, Landroid/app/Dialog;->setCancelable(Z)V

    .line 2175
    iget-object v1, v0, Lcom/tkay/china/activity/ApkConfirmDialogActivity;->c:Landroid/app/Dialog;

    invoke-virtual {v1}, Landroid/app/Dialog;->show()V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    return-void

    .line 2178
    :catchall_1
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/china/activity/ApkConfirmDialogActivity;->finish()V

    return-void
.end method

.method protected onDestroy()V
    .locals 2

    const/4 v0, 0x0

    .line 348
    invoke-static {v0}, Lcom/tkay/core/common/l/u;->a(Z)V

    .line 349
    iget-object v0, p0, Lcom/tkay/china/activity/ApkConfirmDialogActivity;->c:Landroid/app/Dialog;

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    .line 350
    invoke-virtual {v0}, Landroid/app/Dialog;->dismiss()V

    .line 351
    iput-object v1, p0, Lcom/tkay/china/activity/ApkConfirmDialogActivity;->c:Landroid/app/Dialog;

    .line 354
    :cond_0
    sput-object v1, Lcom/tkay/china/activity/ApkConfirmDialogActivity;->a:Lcom/tkay/core/common/f/h;

    .line 355
    sput-object v1, Lcom/tkay/china/activity/ApkConfirmDialogActivity;->b:Lcom/tkay/core/common/g/a;

    .line 357
    invoke-super {p0}, Landroid/app/Activity;->onDestroy()V

    return-void
.end method

.method public onKeyDown(ILandroid/view/KeyEvent;)Z
    .locals 1

    const/4 v0, 0x4

    if-ne v0, p1, :cond_0

    const/4 p1, 0x1

    return p1

    .line 343
    :cond_0
    invoke-super {p0, p1, p2}, Landroid/app/Activity;->onKeyDown(ILandroid/view/KeyEvent;)Z

    move-result p1

    return p1
.end method

.method protected onResume()V
    .locals 1

    .line 109
    invoke-super {p0}, Landroid/app/Activity;->onResume()V

    const/4 v0, 0x1

    .line 110
    invoke-static {v0}, Lcom/tkay/core/common/l/u;->a(Z)V

    return-void
.end method
