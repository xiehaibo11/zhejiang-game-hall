.class public final Lcom/tkay/expressad/widget/a/a;
.super Landroid/app/Dialog;


# static fields
.field private static final a:Ljava/lang/String; = "ATFeedBackDialog"


# instance fields
.field private b:Lcom/tkay/expressad/widget/a/c;

.field private c:Landroid/widget/TextView;

.field private d:Landroid/widget/LinearLayout;

.field private e:Landroid/widget/Button;

.field private f:Landroid/widget/Button;

.field private g:I

.field private h:I


# direct methods
.method public constructor <init>(Landroid/content/Context;Lcom/tkay/expressad/widget/a/c;)V
    .locals 7

    const-string v0, "id"

    .line 43
    invoke-direct {p0, p1}, Landroid/app/Dialog;-><init>(Landroid/content/Context;)V

    .line 44
    invoke-virtual {p0}, Lcom/tkay/expressad/widget/a/a;->getWindow()Landroid/view/Window;

    move-result-object v1

    new-instance v2, Landroid/graphics/drawable/ColorDrawable;

    const/4 v3, 0x0

    invoke-direct {v2, v3}, Landroid/graphics/drawable/ColorDrawable;-><init>(I)V

    invoke-virtual {v1, v2}, Landroid/view/Window;->setBackgroundDrawable(Landroid/graphics/drawable/Drawable;)V

    const/4 v1, 0x1

    .line 45
    invoke-virtual {p0, v1}, Lcom/tkay/expressad/widget/a/a;->requestWindowFeature(I)Z

    .line 46
    invoke-static {p1}, Landroid/view/LayoutInflater;->from(Landroid/content/Context;)Landroid/view/LayoutInflater;

    move-result-object v2

    const-string v4, "tkay_cm_feedbackview"

    const-string v5, "layout"

    invoke-static {p1, v4, v5}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v4

    const/4 v5, 0x0

    invoke-virtual {v2, v4, v5}, Landroid/view/LayoutInflater;->inflate(ILandroid/view/ViewGroup;)Landroid/view/View;

    move-result-object v2

    .line 1209
    invoke-virtual {p0}, Lcom/tkay/expressad/widget/a/a;->getContext()Landroid/content/Context;

    move-result-object v4

    invoke-virtual {v4}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v4

    .line 1210
    invoke-virtual {v4}, Landroid/content/res/Resources;->getDisplayMetrics()Landroid/util/DisplayMetrics;

    move-result-object v4

    .line 1211
    invoke-virtual {p0}, Lcom/tkay/expressad/widget/a/a;->getContext()Landroid/content/Context;

    move-result-object v5

    .line 1232
    invoke-virtual {v5}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v5

    invoke-virtual {v5}, Landroid/content/res/Resources;->getConfiguration()Landroid/content/res/Configuration;

    move-result-object v5

    iget v5, v5, Landroid/content/res/Configuration;->orientation:I

    if-ne v5, v1, :cond_0

    goto :goto_0

    :cond_0
    move v1, v3

    :goto_0
    const/4 v5, -0x1

    if-eqz v1, :cond_1

    .line 1212
    iget v1, v4, Landroid/util/DisplayMetrics;->widthPixels:I

    iput v1, p0, Lcom/tkay/expressad/widget/a/a;->h:I

    .line 1213
    iget v1, v4, Landroid/util/DisplayMetrics;->heightPixels:I

    iput v1, p0, Lcom/tkay/expressad/widget/a/a;->g:I

    .line 1214
    invoke-virtual {p0}, Lcom/tkay/expressad/widget/a/a;->getWindow()Landroid/view/Window;

    move-result-object v1

    invoke-virtual {v1}, Landroid/view/Window;->getAttributes()Landroid/view/WindowManager$LayoutParams;

    move-result-object v1

    .line 1215
    iget v4, p0, Lcom/tkay/expressad/widget/a/a;->g:I

    int-to-float v4, v4

    const v6, 0x3f4ccccd    # 0.8f

    mul-float/2addr v4, v6

    float-to-int v4, v4

    .line 1216
    iput v5, v1, Landroid/view/WindowManager$LayoutParams;->width:I

    .line 1217
    iput v4, v1, Landroid/view/WindowManager$LayoutParams;->height:I

    const/16 v4, 0x50

    .line 1218
    iput v4, v1, Landroid/view/WindowManager$LayoutParams;->gravity:I

    .line 1219
    invoke-virtual {p0}, Lcom/tkay/expressad/widget/a/a;->getWindow()Landroid/view/Window;

    move-result-object v4

    invoke-virtual {v4, v1}, Landroid/view/Window;->setAttributes(Landroid/view/WindowManager$LayoutParams;)V

    goto :goto_1

    .line 1221
    :cond_1
    iget v1, v4, Landroid/util/DisplayMetrics;->heightPixels:I

    iput v1, p0, Lcom/tkay/expressad/widget/a/a;->h:I

    .line 1222
    iget v1, v4, Landroid/util/DisplayMetrics;->widthPixels:I

    iput v1, p0, Lcom/tkay/expressad/widget/a/a;->g:I

    .line 1223
    invoke-virtual {p0}, Lcom/tkay/expressad/widget/a/a;->getWindow()Landroid/view/Window;

    move-result-object v1

    invoke-virtual {v1}, Landroid/view/Window;->getAttributes()Landroid/view/WindowManager$LayoutParams;

    move-result-object v1

    .line 1224
    iget v4, p0, Lcom/tkay/expressad/widget/a/a;->g:I

    int-to-float v4, v4

    const/high16 v6, 0x3f000000    # 0.5f

    mul-float/2addr v4, v6

    float-to-int v4, v4

    .line 1225
    iput v4, v1, Landroid/view/WindowManager$LayoutParams;->width:I

    .line 1226
    iput v5, v1, Landroid/view/WindowManager$LayoutParams;->height:I

    const/16 v4, 0x11

    .line 1227
    iput v4, v1, Landroid/view/WindowManager$LayoutParams;->gravity:I

    .line 1228
    invoke-virtual {p0}, Lcom/tkay/expressad/widget/a/a;->getWindow()Landroid/view/Window;

    move-result-object v4

    invoke-virtual {v4, v1}, Landroid/view/Window;->setAttributes(Landroid/view/WindowManager$LayoutParams;)V

    .line 48
    :goto_1
    iput-object p2, p0, Lcom/tkay/expressad/widget/a/a;->b:Lcom/tkay/expressad/widget/a/c;

    if-eqz v2, :cond_2

    .line 50
    invoke-virtual {p0, v2}, Lcom/tkay/expressad/widget/a/a;->setContentView(Landroid/view/View;)V

    :try_start_0
    const-string p2, "tkay_video_common_alertview_titleview"

    .line 52
    invoke-static {p1, p2, v0}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result p2

    invoke-virtual {v2, p2}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object p2

    check-cast p2, Landroid/widget/TextView;

    iput-object p2, p0, Lcom/tkay/expressad/widget/a/a;->c:Landroid/widget/TextView;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_2

    :catch_0
    move-exception p2

    .line 54
    invoke-virtual {p2}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    :goto_2
    :try_start_1
    const-string p2, "tkay_video_common_alertview_contentview"

    .line 57
    invoke-static {p1, p2, v0}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result p2

    invoke-virtual {v2, p2}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object p2

    check-cast p2, Landroid/widget/LinearLayout;

    iput-object p2, p0, Lcom/tkay/expressad/widget/a/a;->d:Landroid/widget/LinearLayout;

    const-string p2, "tkay_video_common_alertview_confirm_button"

    .line 58
    invoke-static {p1, p2, v0}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result p2

    invoke-virtual {v2, p2}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object p2

    check-cast p2, Landroid/widget/Button;

    iput-object p2, p0, Lcom/tkay/expressad/widget/a/a;->e:Landroid/widget/Button;

    const-string p2, "tkay_video_common_alertview_cancel_button"

    .line 59
    invoke-static {p1, p2, v0}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result p1

    invoke-virtual {v2, p1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object p1

    check-cast p1, Landroid/widget/Button;

    iput-object p1, p0, Lcom/tkay/expressad/widget/a/a;->f:Landroid/widget/Button;
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    goto :goto_3

    :catch_1
    move-exception p1

    .line 61
    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    .line 65
    :cond_2
    :goto_3
    invoke-virtual {p0, v3}, Lcom/tkay/expressad/widget/a/a;->setCanceledOnTouchOutside(Z)V

    .line 66
    invoke-virtual {p0, v3}, Lcom/tkay/expressad/widget/a/a;->setCancelable(Z)V

    .line 2072
    iget-object p1, p0, Lcom/tkay/expressad/widget/a/a;->f:Landroid/widget/Button;

    if-eqz p1, :cond_3

    .line 2073
    new-instance p2, Lcom/tkay/expressad/widget/a/a$1;

    invoke-direct {p2, p0}, Lcom/tkay/expressad/widget/a/a$1;-><init>(Lcom/tkay/expressad/widget/a/a;)V

    invoke-virtual {p1, p2}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 2083
    :cond_3
    iget-object p1, p0, Lcom/tkay/expressad/widget/a/a;->e:Landroid/widget/Button;

    if-eqz p1, :cond_4

    .line 2084
    new-instance p2, Lcom/tkay/expressad/widget/a/a$2;

    invoke-direct {p2, p0}, Lcom/tkay/expressad/widget/a/a$2;-><init>(Lcom/tkay/expressad/widget/a/a;)V

    invoke-virtual {p1, p2}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 2094
    :cond_4
    new-instance p1, Lcom/tkay/expressad/widget/a/a$3;

    invoke-direct {p1, p0}, Lcom/tkay/expressad/widget/a/a$3;-><init>(Lcom/tkay/expressad/widget/a/a;)V

    invoke-virtual {p0, p1}, Lcom/tkay/expressad/widget/a/a;->setOnCancelListener(Landroid/content/DialogInterface$OnCancelListener;)V

    return-void
.end method

.method static synthetic a(Lcom/tkay/expressad/widget/a/a;)Lcom/tkay/expressad/widget/a/c;
    .locals 0

    .line 33
    iget-object p0, p0, Lcom/tkay/expressad/widget/a/a;->b:Lcom/tkay/expressad/widget/a/c;

    return-object p0
.end method

.method private a()V
    .locals 2

    .line 72
    iget-object v0, p0, Lcom/tkay/expressad/widget/a/a;->f:Landroid/widget/Button;

    if-eqz v0, :cond_0

    .line 73
    new-instance v1, Lcom/tkay/expressad/widget/a/a$1;

    invoke-direct {v1, p0}, Lcom/tkay/expressad/widget/a/a$1;-><init>(Lcom/tkay/expressad/widget/a/a;)V

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 83
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/widget/a/a;->e:Landroid/widget/Button;

    if-eqz v0, :cond_1

    .line 84
    new-instance v1, Lcom/tkay/expressad/widget/a/a$2;

    invoke-direct {v1, p0}, Lcom/tkay/expressad/widget/a/a$2;-><init>(Lcom/tkay/expressad/widget/a/a;)V

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 94
    :cond_1
    new-instance v0, Lcom/tkay/expressad/widget/a/a$3;

    invoke-direct {v0, p0}, Lcom/tkay/expressad/widget/a/a$3;-><init>(Lcom/tkay/expressad/widget/a/a;)V

    invoke-virtual {p0, v0}, Lcom/tkay/expressad/widget/a/a;->setOnCancelListener(Landroid/content/DialogInterface$OnCancelListener;)V

    return-void
.end method

.method private static a(Landroid/view/Window;)V
    .locals 2

    if-eqz p0, :cond_2

    const/16 v0, 0x400

    .line 184
    invoke-virtual {p0, v0, v0}, Landroid/view/Window;->setFlags(II)V

    .line 186
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x13

    if-lt v0, v1, :cond_0

    const/high16 v0, 0x4000000

    .line 187
    invoke-virtual {p0, v0}, Landroid/view/Window;->addFlags(I)V

    .line 189
    invoke-virtual {p0}, Landroid/view/Window;->getDecorView()Landroid/view/View;

    move-result-object v0

    const/16 v1, 0x1002

    invoke-virtual {v0, v1}, Landroid/view/View;->setSystemUiVisibility(I)V

    goto :goto_0

    .line 191
    :cond_0
    invoke-virtual {p0}, Landroid/view/Window;->getDecorView()Landroid/view/View;

    move-result-object v0

    const/4 v1, 0x2

    invoke-virtual {v0, v1}, Landroid/view/View;->setSystemUiVisibility(I)V

    .line 194
    :goto_0
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x1c

    if-lt v0, v1, :cond_1

    .line 195
    invoke-virtual {p0}, Landroid/view/Window;->getAttributes()Landroid/view/WindowManager$LayoutParams;

    move-result-object v0

    const/4 v1, 0x1

    .line 196
    iput v1, v0, Landroid/view/WindowManager$LayoutParams;->layoutInDisplayCutoutMode:I

    .line 197
    invoke-virtual {p0, v0}, Landroid/view/Window;->setAttributes(Landroid/view/WindowManager$LayoutParams;)V

    .line 200
    :cond_1
    new-instance v0, Landroid/graphics/drawable/ColorDrawable;

    const/4 v1, 0x0

    invoke-direct {v0, v1}, Landroid/graphics/drawable/ColorDrawable;-><init>(I)V

    invoke-virtual {p0, v0}, Landroid/view/Window;->setBackgroundDrawable(Landroid/graphics/drawable/Drawable;)V

    const/4 v0, -0x1

    .line 201
    invoke-virtual {p0, v0, v0}, Landroid/view/Window;->setLayout(II)V

    const/16 v0, 0x11

    .line 202
    invoke-virtual {p0, v0}, Landroid/view/Window;->setGravity(I)V

    :cond_2
    return-void
.end method

.method private a(Ljava/lang/String;Landroid/view/ViewGroup;Ljava/lang/String;Ljava/lang/String;)V
    .locals 0

    .line 159
    invoke-virtual {p0, p1}, Lcom/tkay/expressad/widget/a/a;->a(Ljava/lang/String;)V

    .line 160
    invoke-virtual {p0, p2}, Lcom/tkay/expressad/widget/a/a;->a(Landroid/view/ViewGroup;)V

    .line 161
    invoke-virtual {p0, p3}, Lcom/tkay/expressad/widget/a/a;->b(Ljava/lang/String;)V

    .line 162
    invoke-virtual {p0, p4}, Lcom/tkay/expressad/widget/a/a;->c(Ljava/lang/String;)V

    return-void
.end method

.method private static a(Landroid/content/Context;)Z
    .locals 1

    .line 232
    invoke-virtual {p0}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object p0

    invoke-virtual {p0}, Landroid/content/res/Resources;->getConfiguration()Landroid/content/res/Configuration;

    move-result-object p0

    iget p0, p0, Landroid/content/res/Configuration;->orientation:I

    const/4 v0, 0x1

    if-ne p0, v0, :cond_0

    return v0

    :cond_0
    const/4 p0, 0x0

    return p0
.end method

.method private b()V
    .locals 1

    .line 111
    iget-object v0, p0, Lcom/tkay/expressad/widget/a/a;->b:Lcom/tkay/expressad/widget/a/c;

    if-eqz v0, :cond_0

    const/4 v0, 0x0

    .line 112
    iput-object v0, p0, Lcom/tkay/expressad/widget/a/a;->b:Lcom/tkay/expressad/widget/a/c;

    :cond_0
    return-void
.end method

.method private c()Lcom/tkay/expressad/widget/a/c;
    .locals 1

    .line 117
    iget-object v0, p0, Lcom/tkay/expressad/widget/a/a;->b:Lcom/tkay/expressad/widget/a/c;

    return-object v0
.end method

.method private d()V
    .locals 4

    .line 209
    invoke-virtual {p0}, Lcom/tkay/expressad/widget/a/a;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-virtual {v0}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v0

    .line 210
    invoke-virtual {v0}, Landroid/content/res/Resources;->getDisplayMetrics()Landroid/util/DisplayMetrics;

    move-result-object v0

    .line 211
    invoke-virtual {p0}, Lcom/tkay/expressad/widget/a/a;->getContext()Landroid/content/Context;

    move-result-object v1

    .line 2232
    invoke-virtual {v1}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v1

    invoke-virtual {v1}, Landroid/content/res/Resources;->getConfiguration()Landroid/content/res/Configuration;

    move-result-object v1

    iget v1, v1, Landroid/content/res/Configuration;->orientation:I

    const/4 v2, 0x1

    if-ne v1, v2, :cond_0

    goto :goto_0

    :cond_0
    const/4 v2, 0x0

    :goto_0
    const/4 v1, -0x1

    if-eqz v2, :cond_1

    .line 212
    iget v2, v0, Landroid/util/DisplayMetrics;->widthPixels:I

    iput v2, p0, Lcom/tkay/expressad/widget/a/a;->h:I

    .line 213
    iget v0, v0, Landroid/util/DisplayMetrics;->heightPixels:I

    iput v0, p0, Lcom/tkay/expressad/widget/a/a;->g:I

    .line 214
    invoke-virtual {p0}, Lcom/tkay/expressad/widget/a/a;->getWindow()Landroid/view/Window;

    move-result-object v0

    invoke-virtual {v0}, Landroid/view/Window;->getAttributes()Landroid/view/WindowManager$LayoutParams;

    move-result-object v0

    .line 215
    iget v2, p0, Lcom/tkay/expressad/widget/a/a;->g:I

    int-to-float v2, v2

    const v3, 0x3f4ccccd    # 0.8f

    mul-float/2addr v2, v3

    float-to-int v2, v2

    .line 216
    iput v1, v0, Landroid/view/WindowManager$LayoutParams;->width:I

    .line 217
    iput v2, v0, Landroid/view/WindowManager$LayoutParams;->height:I

    const/16 v1, 0x50

    .line 218
    iput v1, v0, Landroid/view/WindowManager$LayoutParams;->gravity:I

    .line 219
    invoke-virtual {p0}, Lcom/tkay/expressad/widget/a/a;->getWindow()Landroid/view/Window;

    move-result-object v1

    invoke-virtual {v1, v0}, Landroid/view/Window;->setAttributes(Landroid/view/WindowManager$LayoutParams;)V

    return-void

    .line 221
    :cond_1
    iget v2, v0, Landroid/util/DisplayMetrics;->heightPixels:I

    iput v2, p0, Lcom/tkay/expressad/widget/a/a;->h:I

    .line 222
    iget v0, v0, Landroid/util/DisplayMetrics;->widthPixels:I

    iput v0, p0, Lcom/tkay/expressad/widget/a/a;->g:I

    .line 223
    invoke-virtual {p0}, Lcom/tkay/expressad/widget/a/a;->getWindow()Landroid/view/Window;

    move-result-object v0

    invoke-virtual {v0}, Landroid/view/Window;->getAttributes()Landroid/view/WindowManager$LayoutParams;

    move-result-object v0

    .line 224
    iget v2, p0, Lcom/tkay/expressad/widget/a/a;->g:I

    int-to-float v2, v2

    const/high16 v3, 0x3f000000    # 0.5f

    mul-float/2addr v2, v3

    float-to-int v2, v2

    .line 225
    iput v2, v0, Landroid/view/WindowManager$LayoutParams;->width:I

    .line 226
    iput v1, v0, Landroid/view/WindowManager$LayoutParams;->height:I

    const/16 v1, 0x11

    .line 227
    iput v1, v0, Landroid/view/WindowManager$LayoutParams;->gravity:I

    .line 228
    invoke-virtual {p0}, Lcom/tkay/expressad/widget/a/a;->getWindow()Landroid/view/Window;

    move-result-object v1

    invoke-virtual {v1, v0}, Landroid/view/Window;->setAttributes(Landroid/view/WindowManager$LayoutParams;)V

    return-void
.end method


# virtual methods
.method public final a(Landroid/view/ViewGroup;)V
    .locals 3

    .line 131
    iget-object v0, p0, Lcom/tkay/expressad/widget/a/a;->d:Landroid/widget/LinearLayout;

    if-eqz v0, :cond_1

    .line 132
    invoke-virtual {v0}, Landroid/widget/LinearLayout;->removeAllViews()V

    .line 133
    invoke-virtual {p1}, Landroid/view/ViewGroup;->getParent()Landroid/view/ViewParent;

    move-result-object v0

    check-cast v0, Landroid/view/ViewGroup;

    if-eqz v0, :cond_0

    .line 135
    invoke-virtual {v0, p1}, Landroid/view/ViewGroup;->removeView(Landroid/view/View;)V

    .line 137
    :cond_0
    new-instance v0, Landroid/widget/LinearLayout$LayoutParams;

    const/4 v1, -0x1

    invoke-direct {v0, v1, v1}, Landroid/widget/LinearLayout$LayoutParams;-><init>(II)V

    .line 138
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v1

    const/high16 v2, 0x42180000    # 38.0f

    invoke-static {v1, v2}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v1

    iput v1, v0, Landroid/widget/LinearLayout$LayoutParams;->leftMargin:I

    .line 139
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1, v2}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v1

    iput v1, v0, Landroid/widget/LinearLayout$LayoutParams;->rightMargin:I

    .line 140
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v1

    const/high16 v2, 0x41a00000    # 20.0f

    invoke-static {v1, v2}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v1

    iput v1, v0, Landroid/widget/LinearLayout$LayoutParams;->topMargin:I

    .line 141
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v1

    const/high16 v2, 0x41c00000    # 24.0f

    invoke-static {v1, v2}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v1

    iput v1, v0, Landroid/widget/LinearLayout$LayoutParams;->bottomMargin:I

    .line 142
    iget-object v1, p0, Lcom/tkay/expressad/widget/a/a;->d:Landroid/widget/LinearLayout;

    invoke-virtual {v1, p1, v0}, Landroid/widget/LinearLayout;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    :cond_1
    return-void
.end method

.method public final a(Lcom/tkay/expressad/widget/a/c;)V
    .locals 0

    .line 121
    iput-object p1, p0, Lcom/tkay/expressad/widget/a/a;->b:Lcom/tkay/expressad/widget/a/c;

    return-void
.end method

.method public final a(Ljava/lang/String;)V
    .locals 1

    .line 125
    iget-object v0, p0, Lcom/tkay/expressad/widget/a/a;->c:Landroid/widget/TextView;

    if-eqz v0, :cond_0

    .line 126
    invoke-virtual {v0, p1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    :cond_0
    return-void
.end method

.method public final a(Z)V
    .locals 1

    .line 105
    iget-object v0, p0, Lcom/tkay/expressad/widget/a/a;->f:Landroid/widget/Button;

    if-eqz v0, :cond_0

    .line 106
    invoke-virtual {v0, p1}, Landroid/widget/Button;->setClickable(Z)V

    :cond_0
    return-void
.end method

.method public final b(Ljava/lang/String;)V
    .locals 1

    .line 147
    iget-object v0, p0, Lcom/tkay/expressad/widget/a/a;->e:Landroid/widget/Button;

    if-eqz v0, :cond_0

    .line 148
    invoke-virtual {v0, p1}, Landroid/widget/Button;->setText(Ljava/lang/CharSequence;)V

    :cond_0
    return-void
.end method

.method public final c(Ljava/lang/String;)V
    .locals 1

    .line 153
    iget-object v0, p0, Lcom/tkay/expressad/widget/a/a;->f:Landroid/widget/Button;

    if-eqz v0, :cond_0

    .line 154
    invoke-virtual {v0, p1}, Landroid/widget/Button;->setText(Ljava/lang/CharSequence;)V

    :cond_0
    return-void
.end method

.method public final show()V
    .locals 4

    .line 169
    invoke-super {p0}, Landroid/app/Dialog;->show()V

    .line 171
    :try_start_0
    invoke-virtual {p0}, Lcom/tkay/expressad/widget/a/a;->getWindow()Landroid/view/Window;

    move-result-object v0

    const/16 v1, 0x8

    invoke-virtual {v0, v1, v1}, Landroid/view/Window;->setFlags(II)V

    .line 172
    invoke-super {p0}, Landroid/app/Dialog;->show()V

    .line 173
    invoke-virtual {p0}, Lcom/tkay/expressad/widget/a/a;->getWindow()Landroid/view/Window;

    move-result-object v0

    if-eqz v0, :cond_2

    const/16 v2, 0x400

    .line 2184
    invoke-virtual {v0, v2, v2}, Landroid/view/Window;->setFlags(II)V

    .line 2186
    sget v2, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v3, 0x13

    if-lt v2, v3, :cond_0

    const/high16 v2, 0x4000000

    .line 2187
    invoke-virtual {v0, v2}, Landroid/view/Window;->addFlags(I)V

    .line 2189
    invoke-virtual {v0}, Landroid/view/Window;->getDecorView()Landroid/view/View;

    move-result-object v2

    const/16 v3, 0x1002

    invoke-virtual {v2, v3}, Landroid/view/View;->setSystemUiVisibility(I)V

    goto :goto_0

    .line 2191
    :cond_0
    invoke-virtual {v0}, Landroid/view/Window;->getDecorView()Landroid/view/View;

    move-result-object v2

    const/4 v3, 0x2

    invoke-virtual {v2, v3}, Landroid/view/View;->setSystemUiVisibility(I)V

    .line 2194
    :goto_0
    sget v2, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v3, 0x1c

    if-lt v2, v3, :cond_1

    .line 2195
    invoke-virtual {v0}, Landroid/view/Window;->getAttributes()Landroid/view/WindowManager$LayoutParams;

    move-result-object v2

    const/4 v3, 0x1

    .line 2196
    iput v3, v2, Landroid/view/WindowManager$LayoutParams;->layoutInDisplayCutoutMode:I

    .line 2197
    invoke-virtual {v0, v2}, Landroid/view/Window;->setAttributes(Landroid/view/WindowManager$LayoutParams;)V

    .line 2200
    :cond_1
    new-instance v2, Landroid/graphics/drawable/ColorDrawable;

    const/4 v3, 0x0

    invoke-direct {v2, v3}, Landroid/graphics/drawable/ColorDrawable;-><init>(I)V

    invoke-virtual {v0, v2}, Landroid/view/Window;->setBackgroundDrawable(Landroid/graphics/drawable/Drawable;)V

    const/4 v2, -0x1

    .line 2201
    invoke-virtual {v0, v2, v2}, Landroid/view/Window;->setLayout(II)V

    const/16 v2, 0x11

    .line 2202
    invoke-virtual {v0, v2}, Landroid/view/Window;->setGravity(I)V

    .line 174
    :cond_2
    invoke-virtual {p0}, Lcom/tkay/expressad/widget/a/a;->getWindow()Landroid/view/Window;

    move-result-object v0

    invoke-virtual {v0, v1}, Landroid/view/Window;->clearFlags(I)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception v0

    .line 176
    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    .line 177
    invoke-super {p0}, Landroid/app/Dialog;->show()V

    return-void
.end method
