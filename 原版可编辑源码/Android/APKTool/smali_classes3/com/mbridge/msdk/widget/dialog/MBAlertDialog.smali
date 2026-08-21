.class public Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;
.super Landroid/app/Dialog;
.source "MBAlertDialog.java"


# instance fields
.field private a:Lcom/mbridge/msdk/widget/dialog/a;

.field private b:Landroid/widget/TextView;

.field private c:Landroid/widget/TextView;

.field private d:Landroid/widget/Button;

.field private e:Landroid/widget/Button;

.field private f:I

.field private g:I


# direct methods
.method public constructor <init>(Landroid/content/Context;Lcom/mbridge/msdk/widget/dialog/a;)V
    .locals 6

    const-string v0, "MBAlertDialog"

    const-string v1, "id"

    .line 45
    invoke-direct {p0, p1}, Landroid/app/Dialog;-><init>(Landroid/content/Context;)V

    .line 46
    invoke-virtual {p0}, Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;->getWindow()Landroid/view/Window;

    move-result-object v2

    new-instance v3, Landroid/graphics/drawable/ColorDrawable;

    const/4 v4, 0x0

    invoke-direct {v3, v4}, Landroid/graphics/drawable/ColorDrawable;-><init>(I)V

    invoke-virtual {v2, v3}, Landroid/view/Window;->setBackgroundDrawable(Landroid/graphics/drawable/Drawable;)V

    const/4 v2, 0x1

    .line 47
    invoke-virtual {p0, v2}, Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;->requestWindowFeature(I)Z

    .line 48
    invoke-static {p1}, Landroid/view/LayoutInflater;->from(Landroid/content/Context;)Landroid/view/LayoutInflater;

    move-result-object v2

    const-string v3, "mbridge_cm_alertview"

    const-string v5, "layout"

    invoke-static {p1, v3, v5}, Lcom/mbridge/msdk/foundation/tools/s;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v3

    const/4 v5, 0x0

    invoke-virtual {v2, v3, v5}, Landroid/view/LayoutInflater;->inflate(ILandroid/view/ViewGroup;)Landroid/view/View;

    move-result-object v2

    .line 49
    iput-object p2, p0, Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;->a:Lcom/mbridge/msdk/widget/dialog/a;

    if-eqz v2, :cond_0

    .line 51
    invoke-virtual {p0, v2}, Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;->setContentView(Landroid/view/View;)V

    :try_start_0
    const-string v3, "mbridge_video_common_alertview_titleview"

    .line 53
    invoke-static {p1, v3, v1}, Lcom/mbridge/msdk/foundation/tools/s;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v3

    invoke-virtual {v2, v3}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v3

    check-cast v3, Landroid/widget/TextView;

    iput-object v3, p0, Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;->b:Landroid/widget/TextView;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v3

    .line 55
    invoke-virtual {v3}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v3

    invoke-static {v0, v3}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    :goto_0
    :try_start_1
    const-string v3, "mbridge_video_common_alertview_contentview"

    .line 58
    invoke-static {p1, v3, v1}, Lcom/mbridge/msdk/foundation/tools/s;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v3

    invoke-virtual {v2, v3}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v3

    check-cast v3, Landroid/widget/TextView;

    iput-object v3, p0, Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;->c:Landroid/widget/TextView;

    const-string v3, "mbridge_video_common_alertview_confirm_button"

    .line 59
    invoke-static {p1, v3, v1}, Lcom/mbridge/msdk/foundation/tools/s;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v3

    invoke-virtual {v2, v3}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v3

    check-cast v3, Landroid/widget/Button;

    iput-object v3, p0, Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;->d:Landroid/widget/Button;

    const-string v3, "mbridge_video_common_alertview_cancel_button"

    .line 60
    invoke-static {p1, v3, v1}, Lcom/mbridge/msdk/foundation/tools/s;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result p1

    invoke-virtual {v2, p1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object p1

    check-cast p1, Landroid/widget/Button;

    iput-object p1, p0, Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;->e:Landroid/widget/Button;
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    goto :goto_1

    :catch_1
    move-exception p1

    .line 62
    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 65
    :cond_0
    :goto_1
    iget-object p1, p0, Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;->e:Landroid/widget/Button;

    if-eqz p1, :cond_1

    .line 66
    new-instance v0, Lcom/mbridge/msdk/widget/dialog/MBAlertDialog$1;

    invoke-direct {v0, p0, p2}, Lcom/mbridge/msdk/widget/dialog/MBAlertDialog$1;-><init>(Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;Lcom/mbridge/msdk/widget/dialog/a;)V

    invoke-virtual {p1, v0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 77
    :cond_1
    iget-object p1, p0, Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;->d:Landroid/widget/Button;

    if-eqz p1, :cond_2

    .line 78
    new-instance v0, Lcom/mbridge/msdk/widget/dialog/MBAlertDialog$2;

    invoke-direct {v0, p0, p2}, Lcom/mbridge/msdk/widget/dialog/MBAlertDialog$2;-><init>(Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;Lcom/mbridge/msdk/widget/dialog/a;)V

    invoke-virtual {p1, v0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 89
    :cond_2
    invoke-virtual {p0, v4}, Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;->setCanceledOnTouchOutside(Z)V

    .line 90
    invoke-virtual {p0, v4}, Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;->setCancelable(Z)V

    return-void
.end method

.method private a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 0

    .line 130
    invoke-virtual {p0, p1}, Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;->setTitle(Ljava/lang/String;)V

    .line 131
    invoke-virtual {p0, p2}, Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;->setContent(Ljava/lang/String;)V

    .line 132
    invoke-virtual {p0, p3}, Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;->setConfirmText(Ljava/lang/String;)V

    .line 133
    invoke-virtual {p0, p4}, Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;->setCancelText(Ljava/lang/String;)V

    return-void
.end method


# virtual methods
.method public clear()V
    .locals 1

    .line 96
    iget-object v0, p0, Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;->a:Lcom/mbridge/msdk/widget/dialog/a;

    if-eqz v0, :cond_0

    const/4 v0, 0x0

    .line 97
    iput-object v0, p0, Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;->a:Lcom/mbridge/msdk/widget/dialog/a;

    :cond_0
    return-void
.end method

.method public getListener()Lcom/mbridge/msdk/widget/dialog/a;
    .locals 1

    .line 102
    iget-object v0, p0, Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;->a:Lcom/mbridge/msdk/widget/dialog/a;

    return-object v0
.end method

.method public hideNavigationBar(Landroid/view/Window;)V
    .locals 2

    if-eqz p1, :cond_2

    const/16 v0, 0x400

    .line 347
    invoke-virtual {p1, v0, v0}, Landroid/view/Window;->setFlags(II)V

    .line 349
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x13

    if-lt v0, v1, :cond_0

    const/high16 v0, 0x4000000

    .line 350
    invoke-virtual {p1, v0}, Landroid/view/Window;->addFlags(I)V

    const/16 v0, 0x1002

    .line 352
    invoke-virtual {p1}, Landroid/view/Window;->getDecorView()Landroid/view/View;

    move-result-object v1

    invoke-virtual {v1, v0}, Landroid/view/View;->setSystemUiVisibility(I)V

    goto :goto_0

    .line 354
    :cond_0
    invoke-virtual {p1}, Landroid/view/Window;->getDecorView()Landroid/view/View;

    move-result-object v0

    const/4 v1, 0x2

    invoke-virtual {v0, v1}, Landroid/view/View;->setSystemUiVisibility(I)V

    .line 357
    :goto_0
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x1c

    if-lt v0, v1, :cond_1

    .line 358
    invoke-virtual {p1}, Landroid/view/Window;->getAttributes()Landroid/view/WindowManager$LayoutParams;

    move-result-object v0

    const/4 v1, 0x1

    .line 359
    iput v1, v0, Landroid/view/WindowManager$LayoutParams;->layoutInDisplayCutoutMode:I

    .line 360
    invoke-virtual {p1, v0}, Landroid/view/Window;->setAttributes(Landroid/view/WindowManager$LayoutParams;)V

    .line 363
    :cond_1
    new-instance v0, Landroid/graphics/drawable/ColorDrawable;

    const/4 v1, 0x0

    invoke-direct {v0, v1}, Landroid/graphics/drawable/ColorDrawable;-><init>(I)V

    invoke-virtual {p1, v0}, Landroid/view/Window;->setBackgroundDrawable(Landroid/graphics/drawable/Drawable;)V

    const/4 v0, -0x1

    .line 364
    invoke-virtual {p1, v0, v0}, Landroid/view/Window;->setLayout(II)V

    const/16 v0, 0x11

    .line 365
    invoke-virtual {p1, v0}, Landroid/view/Window;->setGravity(I)V

    :cond_2
    return-void
.end method

.method public makeDownloadAlert(Ljava/lang/String;)V
    .locals 2

    const/4 v0, 0x1

    .line 232
    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;->setCancelable(Z)V

    .line 233
    invoke-static {}, Ljava/util/Locale;->getDefault()Ljava/util/Locale;

    move-result-object v0

    invoke-virtual {v0}, Ljava/util/Locale;->getLanguage()Ljava/lang/String;

    move-result-object v0

    .line 234
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_1

    const-string v1, "zh"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    const-string v0, "\u63d0\u793a"

    .line 235
    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;->setTitle(Ljava/lang/String;)V

    .line 236
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    const-string p1, "\u786e\u8ba4\u4e0b\u8f7d\u5417\uff1f"

    .line 237
    invoke-virtual {p0, p1}, Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;->setContent(Ljava/lang/String;)V

    goto :goto_0

    .line 239
    :cond_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "\u786e\u8ba4\u4e0b\u8f7d\""

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, "\"\u5417\uff1f"

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;->setContent(Ljava/lang/String;)V

    :goto_0
    const-string p1, "\u53d6\u6d88"

    .line 241
    invoke-virtual {p0, p1}, Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;->setConfirmText(Ljava/lang/String;)V

    const-string p1, "\u786e\u8ba4\u4e0b\u8f7d"

    .line 242
    invoke-virtual {p0, p1}, Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;->setCancelText(Ljava/lang/String;)V

    goto :goto_2

    :cond_1
    const-string v0, "Notification"

    .line 244
    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;->setTitle(Ljava/lang/String;)V

    .line 245
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_2

    const-string p1, "Confirm to download?"

    .line 246
    invoke-virtual {p0, p1}, Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;->setContent(Ljava/lang/String;)V

    goto :goto_1

    .line 248
    :cond_2
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "Confirm to download\""

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, "\"?"

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;->setContent(Ljava/lang/String;)V

    :goto_1
    const-string p1, "Cancel"

    .line 250
    invoke-virtual {p0, p1}, Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;->setConfirmText(Ljava/lang/String;)V

    const-string p1, "Confirm"

    .line 251
    invoke-virtual {p0, p1}, Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;->setCancelText(Ljava/lang/String;)V

    :goto_2
    return-void
.end method

.method public makeIVAlertView(ILjava/lang/String;)V
    .locals 7

    const-string v0, ""

    .line 311
    :try_start_0
    invoke-virtual {p0}, Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;->getContext()Landroid/content/Context;

    move-result-object v1

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "MBridge_ConfirmTitle"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2, v0}, Lcom/mbridge/msdk/foundation/tools/ag;->b(Landroid/content/Context;Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v1

    .line 312
    invoke-virtual {p0}, Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;->getContext()Landroid/content/Context;

    move-result-object v2

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "MBridge_ConfirmContent"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v2, v3, v0}, Lcom/mbridge/msdk/foundation/tools/ag;->b(Landroid/content/Context;Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v2

    .line 313
    invoke-virtual {p0}, Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;->getContext()Landroid/content/Context;

    move-result-object v3

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "MBridge_CancelText"

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v3, v4, v0}, Lcom/mbridge/msdk/foundation/tools/ag;->b(Landroid/content/Context;Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    invoke-virtual {v3}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v3

    .line 314
    invoke-virtual {p0}, Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;->getContext()Landroid/content/Context;

    move-result-object v4

    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, "MBridge_ConfirmText"

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-static {v4, p2, v0}, Lcom/mbridge/msdk/foundation/tools/ag;->b(Landroid/content/Context;Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p2

    invoke-virtual {p2}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object p2

    .line 316
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_7

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_7

    .line 317
    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_7

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_7

    .line 1295
    invoke-static {}, Ljava/util/Locale;->getDefault()Ljava/util/Locale;

    move-result-object p2

    invoke-virtual {p2}, Ljava/util/Locale;->getLanguage()Ljava/lang/String;

    move-result-object p2

    .line 1296
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_3

    const-string v0, "zh"

    invoke-virtual {p2, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p2

    if-eqz p2, :cond_3

    .line 1297
    sget p2, Lcom/mbridge/msdk/foundation/same/a;->w:I

    if-ne p1, p2, :cond_0

    const-string p2, "\u786e\u8ba4\u5173\u95ed\uff1f"

    goto :goto_0

    :cond_0
    const-string p2, "\u63d0\u793a"

    :goto_0
    invoke-virtual {p0, p2}, Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;->setTitle(Ljava/lang/String;)V

    .line 1298
    sget p2, Lcom/mbridge/msdk/foundation/same/a;->w:I

    if-ne p1, p2, :cond_1

    const-string p2, "\u5982\u679c\u4f60\u9009\u62e9\u7ee7\u7eed\uff0c\u7ed3\u675f\u540e\u5c06\u4f1a\u83b7\u5f97\u5956\u52b1\u3002\u786e\u8ba4\u5173\u95ed\u5417\uff1f"

    goto :goto_1

    :cond_1
    const-string p2, "\u5982\u679c\u4f60\u9009\u62e9\u7ee7\u7eed\uff0c\u7ed3\u675f\u540e\u5c06\u4f1a\u83b7\u5f97\u5956\u52b1\u3002\u662f\u5426\u7ee7\u7eed\uff1f"

    :goto_1
    invoke-virtual {p0, p2}, Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;->setContent(Ljava/lang/String;)V

    .line 1299
    sget p2, Lcom/mbridge/msdk/foundation/same/a;->w:I

    if-ne p1, p2, :cond_2

    const-string p1, "\u786e\u8ba4\u5173\u95ed"

    goto :goto_2

    :cond_2
    const-string p1, "\u53d6\u6d88"

    :goto_2
    invoke-virtual {p0, p1}, Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;->setConfirmText(Ljava/lang/String;)V

    const-string p1, "\u7ee7\u7eed"

    .line 1300
    invoke-virtual {p0, p1}, Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;->setCancelText(Ljava/lang/String;)V

    goto :goto_6

    .line 1302
    :cond_3
    sget p2, Lcom/mbridge/msdk/foundation/same/a;->w:I

    if-ne p1, p2, :cond_4

    const-string p2, "Confirm"

    goto :goto_3

    :cond_4
    const-string p2, "Tips"

    :goto_3
    invoke-virtual {p0, p2}, Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;->setTitle(Ljava/lang/String;)V

    .line 1303
    sget p2, Lcom/mbridge/msdk/foundation/same/a;->w:I

    if-ne p1, p2, :cond_5

    const-string p2, "If you choose to continue, you will receive a reward after the end. Confirm closed?"

    goto :goto_4

    :cond_5
    const-string p2, "If you choose to continue, you will receive a reward after the end. Whether to continue?"

    :goto_4
    invoke-virtual {p0, p2}, Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;->setContent(Ljava/lang/String;)V

    .line 1304
    sget p2, Lcom/mbridge/msdk/foundation/same/a;->w:I

    if-ne p1, p2, :cond_6

    const-string p1, "Close"

    goto :goto_5

    :cond_6
    const-string p1, "Cancel"

    :goto_5
    invoke-virtual {p0, p1}, Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;->setConfirmText(Ljava/lang/String;)V

    const-string p1, "Continue"

    .line 1305
    invoke-virtual {p0, p1}, Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;->setCancelText(Ljava/lang/String;)V

    goto :goto_6

    .line 320
    :cond_7
    invoke-direct {p0, v1, v2, v3, p2}, Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_6

    :catch_0
    move-exception p1

    .line 323
    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p1

    const-string p2, "MBAlertDialog"

    invoke-static {p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    :goto_6
    return-void
.end method

.method public makeInstallAlert(Ljava/lang/String;)V
    .locals 2

    const/4 v0, 0x0

    .line 208
    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;->setCancelable(Z)V

    .line 209
    invoke-static {}, Ljava/util/Locale;->getDefault()Ljava/util/Locale;

    move-result-object v0

    invoke-virtual {v0}, Ljava/util/Locale;->getLanguage()Ljava/lang/String;

    move-result-object v0

    .line 210
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_1

    const-string v1, "zh"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    const-string v0, "\u63d0\u793a"

    .line 211
    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;->setTitle(Ljava/lang/String;)V

    .line 212
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    const-string p1, "\u5e94\u7528\u5df2\u7ecf\u5b89\u88c5\u5b8c\u6210\uff0c\u662f\u5426\u73b0\u5728\u6253\u5f00\uff1f"

    .line 213
    invoke-virtual {p0, p1}, Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;->setContent(Ljava/lang/String;)V

    goto :goto_0

    .line 215
    :cond_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, " \u5df2\u5b8c\u6210\u5b89\u88c5\uff0c\u662f\u5426\u73b0\u5728\u6253\u5f00\uff1f"

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;->setContent(Ljava/lang/String;)V

    :goto_0
    const-string p1, "\u53d6\u6d88"

    .line 217
    invoke-virtual {p0, p1}, Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;->setConfirmText(Ljava/lang/String;)V

    const-string p1, "\u6253\u5f00"

    .line 218
    invoke-virtual {p0, p1}, Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;->setCancelText(Ljava/lang/String;)V

    goto :goto_2

    :cond_1
    const-string v0, "Notification"

    .line 220
    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;->setTitle(Ljava/lang/String;)V

    .line 221
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_2

    const-string p1, "app has been installed. Open it right now?"

    .line 222
    invoke-virtual {p0, p1}, Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;->setContent(Ljava/lang/String;)V

    goto :goto_1

    .line 224
    :cond_2
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, " has been installed. Open it right now?"

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;->setContent(Ljava/lang/String;)V

    :goto_1
    const-string p1, "Cancel"

    .line 226
    invoke-virtual {p0, p1}, Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;->setConfirmText(Ljava/lang/String;)V

    const-string p1, "Open"

    .line 227
    invoke-virtual {p0, p1}, Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;->setCancelText(Ljava/lang/String;)V

    :goto_2
    return-void
.end method

.method public makePlayableAlertView()V
    .locals 4

    .line 271
    invoke-static {}, Lcom/mbridge/msdk/c/b;->a()Lcom/mbridge/msdk/c/b;

    move-result-object v0

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/controller/a;->k()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/c/b;->b(Ljava/lang/String;)Lcom/mbridge/msdk/c/a;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 273
    invoke-virtual {v0}, Lcom/mbridge/msdk/c/a;->ar()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0}, Lcom/mbridge/msdk/c/a;->as()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0}, Lcom/mbridge/msdk/c/a;->at()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0}, Lcom/mbridge/msdk/c/a;->av()Ljava/lang/String;

    move-result-object v0

    invoke-direct {p0, v1, v2, v3, v0}, Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    .line 1280
    :cond_0
    invoke-static {}, Ljava/util/Locale;->getDefault()Ljava/util/Locale;

    move-result-object v0

    invoke-virtual {v0}, Ljava/util/Locale;->getLanguage()Ljava/lang/String;

    move-result-object v0

    .line 1281
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_1

    const-string v1, "zh"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    const-string v0, "\u786e\u8ba4\u5173\u95ed\uff1f"

    .line 1282
    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;->setTitle(Ljava/lang/String;)V

    const-string v0, "\u5173\u95ed\u540e\u60a8\u5c06\u4e0d\u4f1a\u83b7\u5f97\u4efb\u4f55\u5956\u52b1\u5662~ "

    .line 1283
    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;->setContent(Ljava/lang/String;)V

    const-string v0, "\u786e\u8ba4\u5173\u95ed"

    .line 1284
    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;->setConfirmText(Ljava/lang/String;)V

    const-string v0, "\u7ee7\u7eed\u8bd5\u73a9"

    .line 1285
    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;->setCancelText(Ljava/lang/String;)V

    goto :goto_0

    :cond_1
    const-string v0, "Confirm to close? "

    .line 1287
    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;->setTitle(Ljava/lang/String;)V

    const-string v0, "You will not be rewarded after closing the window"

    .line 1288
    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;->setContent(Ljava/lang/String;)V

    const-string v0, "Close it"

    .line 1289
    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;->setConfirmText(Ljava/lang/String;)V

    const-string v0, "Continue"

    .line 1290
    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;->setCancelText(Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method public makeRVAlertView(Ljava/lang/String;)V
    .locals 17

    move-object/from16 v1, p0

    move-object/from16 v0, p1

    const-string v2, ""

    .line 138
    :try_start_0
    invoke-virtual/range {p0 .. p0}, Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;->getContext()Landroid/content/Context;

    move-result-object v3

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "MBridge_ConfirmTitle"

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v3, v4, v2}, Lcom/mbridge/msdk/foundation/tools/ag;->b(Landroid/content/Context;Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    invoke-virtual {v3}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v3

    .line 139
    invoke-virtual/range {p0 .. p0}, Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;->getContext()Landroid/content/Context;

    move-result-object v4

    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, "MBridge_ConfirmContent"

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-static {v4, v5, v2}, Lcom/mbridge/msdk/foundation/tools/ag;->b(Landroid/content/Context;Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v4

    invoke-virtual {v4}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v4

    .line 140
    invoke-virtual/range {p0 .. p0}, Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;->getContext()Landroid/content/Context;

    move-result-object v5

    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    const-string v7, "MBridge_CancelText"

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    invoke-static {v5, v6, v2}, Lcom/mbridge/msdk/foundation/tools/ag;->b(Landroid/content/Context;Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v5

    invoke-virtual {v5}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v5

    .line 141
    invoke-virtual/range {p0 .. p0}, Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;->getContext()Landroid/content/Context;

    move-result-object v6

    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    const-string v8, "MBridge_ConfirmText"

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v6, v0, v2}, Lcom/mbridge/msdk/foundation/tools/ag;->b(Landroid/content/Context;Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v0

    .line 143
    invoke-static {}, Lcom/mbridge/msdk/c/b;->a()Lcom/mbridge/msdk/c/b;

    move-result-object v2

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v6

    invoke-virtual {v6}, Lcom/mbridge/msdk/foundation/controller/a;->k()Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v2, v6}, Lcom/mbridge/msdk/c/b;->b(Ljava/lang/String;)Lcom/mbridge/msdk/c/a;

    move-result-object v2

    .line 144
    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v6
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    const-string v7, "\u7ee7\u7eed\u89c2\u770b"

    const-string v8, "\u786e\u8ba4\u5173\u95ed"

    const-string v9, "Continue"

    const-string v10, "\u5173\u95ed\u540e\u60a8\u5c06\u4e0d\u4f1a\u83b7\u5f97\u4efb\u4f55\u5956\u52b1\u5662~ "

    const-string v11, "Close it"

    const-string v12, "\u786e\u8ba4\u5173\u95ed\uff1f"

    const-string v13, "You will not be rewarded after closing the window"

    const-string v14, "Confirm to close? "

    const-string v15, "zh"

    if-eqz v6, :cond_2

    :try_start_1
    invoke-static {v4}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v6

    if-eqz v6, :cond_2

    invoke-static {v5}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v6

    if-eqz v6, :cond_2

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v6

    if-eqz v6, :cond_2

    if-eqz v2, :cond_0

    .line 146
    invoke-virtual {v2}, Lcom/mbridge/msdk/c/a;->ar()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v2}, Lcom/mbridge/msdk/c/a;->as()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2}, Lcom/mbridge/msdk/c/a;->at()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v2}, Lcom/mbridge/msdk/c/a;->au()Ljava/lang/String;

    move-result-object v2

    invoke-direct {v1, v0, v3, v4, v2}, Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    .line 1256
    :cond_0
    invoke-static {}, Ljava/util/Locale;->getDefault()Ljava/util/Locale;

    move-result-object v0

    invoke-virtual {v0}, Ljava/util/Locale;->getLanguage()Ljava/lang/String;

    move-result-object v0

    .line 1257
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_1

    invoke-virtual {v0, v15}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 1258
    invoke-virtual {v1, v12}, Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;->setTitle(Ljava/lang/String;)V

    .line 1259
    invoke-virtual {v1, v10}, Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;->setContent(Ljava/lang/String;)V

    .line 1260
    invoke-virtual {v1, v8}, Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;->setConfirmText(Ljava/lang/String;)V

    .line 1261
    invoke-virtual {v1, v7}, Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;->setCancelText(Ljava/lang/String;)V

    goto :goto_0

    .line 1263
    :cond_1
    invoke-virtual {v1, v14}, Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;->setTitle(Ljava/lang/String;)V

    .line 1264
    invoke-virtual {v1, v13}, Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;->setContent(Ljava/lang/String;)V

    .line 1265
    invoke-virtual {v1, v11}, Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;->setConfirmText(Ljava/lang/String;)V

    .line 1266
    invoke-virtual {v1, v9}, Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;->setCancelText(Ljava/lang/String;)V

    :goto_0
    return-void

    .line 152
    :cond_2
    invoke-static {}, Ljava/util/Locale;->getDefault()Ljava/util/Locale;

    move-result-object v6

    invoke-virtual {v6}, Ljava/util/Locale;->getLanguage()Ljava/lang/String;

    move-result-object v6

    .line 153
    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v16

    if-eqz v16, :cond_5

    if-eqz v2, :cond_3

    .line 155
    invoke-virtual {v2}, Lcom/mbridge/msdk/c/a;->ar()Ljava/lang/String;

    move-result-object v3

    goto :goto_1

    .line 157
    :cond_3
    invoke-static {v6}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v16

    if-nez v16, :cond_4

    invoke-virtual {v6, v15}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v16

    if-eqz v16, :cond_4

    .line 158
    invoke-virtual {v1, v12}, Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;->setTitle(Ljava/lang/String;)V

    goto :goto_1

    .line 160
    :cond_4
    invoke-virtual {v1, v14}, Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;->setTitle(Ljava/lang/String;)V

    .line 165
    :cond_5
    :goto_1
    invoke-static {v4}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v12

    if-eqz v12, :cond_8

    if-eqz v2, :cond_6

    .line 167
    invoke-virtual {v2}, Lcom/mbridge/msdk/c/a;->as()Ljava/lang/String;

    move-result-object v4

    goto :goto_2

    .line 169
    :cond_6
    invoke-static {v6}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v12

    if-nez v12, :cond_7

    invoke-virtual {v6, v15}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v12

    if-eqz v12, :cond_7

    .line 170
    invoke-virtual {v1, v10}, Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;->setContent(Ljava/lang/String;)V

    goto :goto_2

    .line 172
    :cond_7
    invoke-virtual {v1, v13}, Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;->setContent(Ljava/lang/String;)V

    .line 177
    :cond_8
    :goto_2
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v10

    if-eqz v10, :cond_b

    if-eqz v2, :cond_9

    .line 179
    invoke-virtual {v2}, Lcom/mbridge/msdk/c/a;->at()Ljava/lang/String;

    move-result-object v0

    goto :goto_3

    .line 181
    :cond_9
    invoke-static {v6}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v10

    if-nez v10, :cond_a

    invoke-virtual {v6, v15}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v10

    if-eqz v10, :cond_a

    .line 182
    invoke-virtual {v1, v8}, Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;->setConfirmText(Ljava/lang/String;)V

    goto :goto_3

    .line 184
    :cond_a
    invoke-virtual {v1, v11}, Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;->setConfirmText(Ljava/lang/String;)V

    .line 189
    :cond_b
    :goto_3
    invoke-static {v5}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v8

    if-eqz v8, :cond_e

    if-eqz v2, :cond_c

    .line 191
    invoke-virtual {v2}, Lcom/mbridge/msdk/c/a;->au()Ljava/lang/String;

    move-result-object v5

    goto :goto_4

    .line 193
    :cond_c
    invoke-static {v6}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_d

    invoke-virtual {v6, v15}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_d

    .line 194
    invoke-virtual {v1, v7}, Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;->setCancelText(Ljava/lang/String;)V

    goto :goto_4

    .line 196
    :cond_d
    invoke-virtual {v1, v9}, Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;->setCancelText(Ljava/lang/String;)V

    .line 201
    :cond_e
    :goto_4
    invoke-direct {v1, v3, v4, v0, v5}, Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    goto :goto_5

    :catch_0
    move-exception v0

    .line 203
    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v0

    const-string v2, "MBAlertDialog"

    invoke-static {v2, v0}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    :goto_5
    return-void
.end method

.method public onlyShow()V
    .locals 0

    .line 342
    invoke-super {p0}, Landroid/app/Dialog;->show()V

    return-void
.end method

.method public setCancelText(Ljava/lang/String;)V
    .locals 1

    .line 124
    iget-object v0, p0, Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;->e:Landroid/widget/Button;

    if-eqz v0, :cond_0

    .line 125
    invoke-virtual {v0, p1}, Landroid/widget/Button;->setText(Ljava/lang/CharSequence;)V

    :cond_0
    return-void
.end method

.method public setConfirmText(Ljava/lang/String;)V
    .locals 1

    .line 118
    iget-object v0, p0, Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;->d:Landroid/widget/Button;

    if-eqz v0, :cond_0

    .line 119
    invoke-virtual {v0, p1}, Landroid/widget/Button;->setText(Ljava/lang/CharSequence;)V

    :cond_0
    return-void
.end method

.method public setContent(Ljava/lang/String;)V
    .locals 1

    .line 112
    iget-object v0, p0, Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;->c:Landroid/widget/TextView;

    if-eqz v0, :cond_0

    .line 113
    invoke-virtual {v0, p1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    :cond_0
    return-void
.end method

.method public setDialogWidthAndHeight(FF)V
    .locals 3

    .line 372
    invoke-virtual {p0}, Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-virtual {v0}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v0

    .line 373
    invoke-virtual {v0}, Landroid/content/res/Resources;->getDisplayMetrics()Landroid/util/DisplayMetrics;

    move-result-object v0

    .line 374
    invoke-virtual {p0}, Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;->isScreenOrientationPortrait(Landroid/content/Context;)Z

    move-result v1

    const/4 v2, -0x1

    if-eqz v1, :cond_0

    .line 375
    iget p1, v0, Landroid/util/DisplayMetrics;->widthPixels:I

    iput p1, p0, Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;->g:I

    .line 376
    iget p1, v0, Landroid/util/DisplayMetrics;->heightPixels:I

    iput p1, p0, Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;->f:I

    .line 377
    invoke-virtual {p0}, Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;->getWindow()Landroid/view/Window;

    move-result-object p1

    invoke-virtual {p1}, Landroid/view/Window;->getAttributes()Landroid/view/WindowManager$LayoutParams;

    move-result-object p1

    .line 378
    iget v0, p0, Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;->f:I

    int-to-float v0, v0

    mul-float/2addr v0, p2

    float-to-int p2, v0

    .line 379
    iput v2, p1, Landroid/view/WindowManager$LayoutParams;->width:I

    .line 380
    iput p2, p1, Landroid/view/WindowManager$LayoutParams;->height:I

    const/16 p2, 0x50

    .line 381
    iput p2, p1, Landroid/view/WindowManager$LayoutParams;->gravity:I

    .line 382
    invoke-virtual {p0}, Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;->getWindow()Landroid/view/Window;

    move-result-object p2

    invoke-virtual {p2, p1}, Landroid/view/Window;->setAttributes(Landroid/view/WindowManager$LayoutParams;)V

    goto :goto_0

    .line 384
    :cond_0
    iget p2, v0, Landroid/util/DisplayMetrics;->heightPixels:I

    iput p2, p0, Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;->g:I

    .line 385
    iget p2, v0, Landroid/util/DisplayMetrics;->widthPixels:I

    iput p2, p0, Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;->f:I

    .line 386
    invoke-virtual {p0}, Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;->getWindow()Landroid/view/Window;

    move-result-object p2

    invoke-virtual {p2}, Landroid/view/Window;->getAttributes()Landroid/view/WindowManager$LayoutParams;

    move-result-object p2

    .line 387
    iget v0, p0, Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;->f:I

    int-to-float v0, v0

    mul-float/2addr v0, p1

    float-to-int p1, v0

    .line 388
    iput p1, p2, Landroid/view/WindowManager$LayoutParams;->width:I

    .line 389
    iput v2, p2, Landroid/view/WindowManager$LayoutParams;->height:I

    const/16 p1, 0x11

    .line 390
    iput p1, p2, Landroid/view/WindowManager$LayoutParams;->gravity:I

    .line 391
    invoke-virtual {p0}, Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;->getWindow()Landroid/view/Window;

    move-result-object p1

    invoke-virtual {p1, p2}, Landroid/view/Window;->setAttributes(Landroid/view/WindowManager$LayoutParams;)V

    :goto_0
    return-void
.end method

.method public setTitle(Ljava/lang/String;)V
    .locals 1

    .line 106
    iget-object v0, p0, Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;->b:Landroid/widget/TextView;

    if-eqz v0, :cond_0

    .line 107
    invoke-virtual {v0, p1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    :cond_0
    return-void
.end method

.method public show()V
    .locals 2

    .line 329
    invoke-super {p0}, Landroid/app/Dialog;->show()V

    .line 331
    :try_start_0
    invoke-virtual {p0}, Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;->getWindow()Landroid/view/Window;

    move-result-object v0

    const/16 v1, 0x8

    invoke-virtual {v0, v1, v1}, Landroid/view/Window;->setFlags(II)V

    .line 332
    invoke-super {p0}, Landroid/app/Dialog;->show()V

    .line 333
    invoke-virtual {p0}, Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;->getWindow()Landroid/view/Window;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;->hideNavigationBar(Landroid/view/Window;)V

    .line 334
    invoke-virtual {p0}, Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;->getWindow()Landroid/view/Window;

    move-result-object v0

    invoke-virtual {v0, v1}, Landroid/view/Window;->clearFlags(I)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 336
    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v0

    const-string v1, "MBAlertDialog"

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 337
    invoke-super {p0}, Landroid/app/Dialog;->show()V

    :goto_0
    return-void
.end method
