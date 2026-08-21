.class public Lcom/tkay/expressad/splash/view/MBSplashClickView;
.super Landroid/widget/RelativeLayout;


# static fields
.field private static final a:Ljava/lang/String; = "MBSplashClickView"


# instance fields
.field public final TYPE_SPLASH_BTN_CLICK:I

.field public final TYPE_SPLASH_BTN_GO:I

.field public final TYPE_SPLASH_BTN_OPEN:I

.field private b:Ljava/lang/String;

.field private c:Ljava/lang/String;

.field private d:Ljava/lang/String;

.field private final e:Ljava/lang/String;

.field private final f:Ljava/lang/String;

.field private final g:Ljava/lang/String;

.field private final h:Ljava/lang/String;

.field private final i:Ljava/lang/String;

.field private j:Ljava/lang/String;

.field private k:I

.field private l:Landroid/widget/ImageView;

.field private m:Landroid/widget/ImageView;

.field private final n:Landroid/graphics/RectF;

.field private final o:Landroid/graphics/Paint;

.field private final p:Landroid/graphics/Paint;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 0

    .line 66
    invoke-direct {p0, p1}, Landroid/widget/RelativeLayout;-><init>(Landroid/content/Context;)V

    const-string p1, ""

    .line 41
    iput-object p1, p0, Lcom/tkay/expressad/splash/view/MBSplashClickView;->b:Ljava/lang/String;

    .line 42
    iput-object p1, p0, Lcom/tkay/expressad/splash/view/MBSplashClickView;->c:Ljava/lang/String;

    .line 43
    iput-object p1, p0, Lcom/tkay/expressad/splash/view/MBSplashClickView;->d:Ljava/lang/String;

    const-string p1, "tkay_splash_btn_arrow_right"

    .line 45
    iput-object p1, p0, Lcom/tkay/expressad/splash/view/MBSplashClickView;->e:Ljava/lang/String;

    const-string p1, "tkay_splash_btn_circle"

    .line 46
    iput-object p1, p0, Lcom/tkay/expressad/splash/view/MBSplashClickView;->f:Ljava/lang/String;

    const-string p1, "tkay_splash_btn_finger"

    .line 47
    iput-object p1, p0, Lcom/tkay/expressad/splash/view/MBSplashClickView;->g:Ljava/lang/String;

    const-string p1, "tkay_splash_btn_go"

    .line 48
    iput-object p1, p0, Lcom/tkay/expressad/splash/view/MBSplashClickView;->h:Ljava/lang/String;

    const-string p1, "tkay_splash_btn_light"

    .line 49
    iput-object p1, p0, Lcom/tkay/expressad/splash/view/MBSplashClickView;->i:Ljava/lang/String;

    const/4 p1, 0x1

    .line 51
    iput p1, p0, Lcom/tkay/expressad/splash/view/MBSplashClickView;->TYPE_SPLASH_BTN_OPEN:I

    const/4 p1, 0x2

    .line 52
    iput p1, p0, Lcom/tkay/expressad/splash/view/MBSplashClickView;->TYPE_SPLASH_BTN_GO:I

    const/4 p1, 0x3

    .line 53
    iput p1, p0, Lcom/tkay/expressad/splash/view/MBSplashClickView;->TYPE_SPLASH_BTN_CLICK:I

    .line 61
    new-instance p1, Landroid/graphics/RectF;

    invoke-direct {p1}, Landroid/graphics/RectF;-><init>()V

    iput-object p1, p0, Lcom/tkay/expressad/splash/view/MBSplashClickView;->n:Landroid/graphics/RectF;

    .line 62
    new-instance p1, Landroid/graphics/Paint;

    invoke-direct {p1}, Landroid/graphics/Paint;-><init>()V

    iput-object p1, p0, Lcom/tkay/expressad/splash/view/MBSplashClickView;->o:Landroid/graphics/Paint;

    .line 63
    new-instance p1, Landroid/graphics/Paint;

    invoke-direct {p1}, Landroid/graphics/Paint;-><init>()V

    iput-object p1, p0, Lcom/tkay/expressad/splash/view/MBSplashClickView;->p:Landroid/graphics/Paint;

    .line 67
    invoke-direct {p0}, Lcom/tkay/expressad/splash/view/MBSplashClickView;->a()V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 0

    .line 71
    invoke-direct {p0, p1, p2}, Landroid/widget/RelativeLayout;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    const-string p1, ""

    .line 41
    iput-object p1, p0, Lcom/tkay/expressad/splash/view/MBSplashClickView;->b:Ljava/lang/String;

    .line 42
    iput-object p1, p0, Lcom/tkay/expressad/splash/view/MBSplashClickView;->c:Ljava/lang/String;

    .line 43
    iput-object p1, p0, Lcom/tkay/expressad/splash/view/MBSplashClickView;->d:Ljava/lang/String;

    const-string p1, "tkay_splash_btn_arrow_right"

    .line 45
    iput-object p1, p0, Lcom/tkay/expressad/splash/view/MBSplashClickView;->e:Ljava/lang/String;

    const-string p1, "tkay_splash_btn_circle"

    .line 46
    iput-object p1, p0, Lcom/tkay/expressad/splash/view/MBSplashClickView;->f:Ljava/lang/String;

    const-string p1, "tkay_splash_btn_finger"

    .line 47
    iput-object p1, p0, Lcom/tkay/expressad/splash/view/MBSplashClickView;->g:Ljava/lang/String;

    const-string p1, "tkay_splash_btn_go"

    .line 48
    iput-object p1, p0, Lcom/tkay/expressad/splash/view/MBSplashClickView;->h:Ljava/lang/String;

    const-string p1, "tkay_splash_btn_light"

    .line 49
    iput-object p1, p0, Lcom/tkay/expressad/splash/view/MBSplashClickView;->i:Ljava/lang/String;

    const/4 p1, 0x1

    .line 51
    iput p1, p0, Lcom/tkay/expressad/splash/view/MBSplashClickView;->TYPE_SPLASH_BTN_OPEN:I

    const/4 p1, 0x2

    .line 52
    iput p1, p0, Lcom/tkay/expressad/splash/view/MBSplashClickView;->TYPE_SPLASH_BTN_GO:I

    const/4 p1, 0x3

    .line 53
    iput p1, p0, Lcom/tkay/expressad/splash/view/MBSplashClickView;->TYPE_SPLASH_BTN_CLICK:I

    .line 61
    new-instance p1, Landroid/graphics/RectF;

    invoke-direct {p1}, Landroid/graphics/RectF;-><init>()V

    iput-object p1, p0, Lcom/tkay/expressad/splash/view/MBSplashClickView;->n:Landroid/graphics/RectF;

    .line 62
    new-instance p1, Landroid/graphics/Paint;

    invoke-direct {p1}, Landroid/graphics/Paint;-><init>()V

    iput-object p1, p0, Lcom/tkay/expressad/splash/view/MBSplashClickView;->o:Landroid/graphics/Paint;

    .line 63
    new-instance p1, Landroid/graphics/Paint;

    invoke-direct {p1}, Landroid/graphics/Paint;-><init>()V

    iput-object p1, p0, Lcom/tkay/expressad/splash/view/MBSplashClickView;->p:Landroid/graphics/Paint;

    .line 72
    invoke-direct {p0}, Lcom/tkay/expressad/splash/view/MBSplashClickView;->a()V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V
    .locals 0

    .line 76
    invoke-direct {p0, p1, p2, p3}, Landroid/widget/RelativeLayout;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V

    const-string p1, ""

    .line 41
    iput-object p1, p0, Lcom/tkay/expressad/splash/view/MBSplashClickView;->b:Ljava/lang/String;

    .line 42
    iput-object p1, p0, Lcom/tkay/expressad/splash/view/MBSplashClickView;->c:Ljava/lang/String;

    .line 43
    iput-object p1, p0, Lcom/tkay/expressad/splash/view/MBSplashClickView;->d:Ljava/lang/String;

    const-string p1, "tkay_splash_btn_arrow_right"

    .line 45
    iput-object p1, p0, Lcom/tkay/expressad/splash/view/MBSplashClickView;->e:Ljava/lang/String;

    const-string p1, "tkay_splash_btn_circle"

    .line 46
    iput-object p1, p0, Lcom/tkay/expressad/splash/view/MBSplashClickView;->f:Ljava/lang/String;

    const-string p1, "tkay_splash_btn_finger"

    .line 47
    iput-object p1, p0, Lcom/tkay/expressad/splash/view/MBSplashClickView;->g:Ljava/lang/String;

    const-string p1, "tkay_splash_btn_go"

    .line 48
    iput-object p1, p0, Lcom/tkay/expressad/splash/view/MBSplashClickView;->h:Ljava/lang/String;

    const-string p1, "tkay_splash_btn_light"

    .line 49
    iput-object p1, p0, Lcom/tkay/expressad/splash/view/MBSplashClickView;->i:Ljava/lang/String;

    const/4 p1, 0x1

    .line 51
    iput p1, p0, Lcom/tkay/expressad/splash/view/MBSplashClickView;->TYPE_SPLASH_BTN_OPEN:I

    const/4 p1, 0x2

    .line 52
    iput p1, p0, Lcom/tkay/expressad/splash/view/MBSplashClickView;->TYPE_SPLASH_BTN_GO:I

    const/4 p1, 0x3

    .line 53
    iput p1, p0, Lcom/tkay/expressad/splash/view/MBSplashClickView;->TYPE_SPLASH_BTN_CLICK:I

    .line 61
    new-instance p1, Landroid/graphics/RectF;

    invoke-direct {p1}, Landroid/graphics/RectF;-><init>()V

    iput-object p1, p0, Lcom/tkay/expressad/splash/view/MBSplashClickView;->n:Landroid/graphics/RectF;

    .line 62
    new-instance p1, Landroid/graphics/Paint;

    invoke-direct {p1}, Landroid/graphics/Paint;-><init>()V

    iput-object p1, p0, Lcom/tkay/expressad/splash/view/MBSplashClickView;->o:Landroid/graphics/Paint;

    .line 63
    new-instance p1, Landroid/graphics/Paint;

    invoke-direct {p1}, Landroid/graphics/Paint;-><init>()V

    iput-object p1, p0, Lcom/tkay/expressad/splash/view/MBSplashClickView;->p:Landroid/graphics/Paint;

    .line 77
    invoke-direct {p0}, Lcom/tkay/expressad/splash/view/MBSplashClickView;->a()V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;II)V
    .locals 0

    .line 82
    invoke-direct {p0, p1, p2, p3, p4}, Landroid/widget/RelativeLayout;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;II)V

    const-string p1, ""

    .line 41
    iput-object p1, p0, Lcom/tkay/expressad/splash/view/MBSplashClickView;->b:Ljava/lang/String;

    .line 42
    iput-object p1, p0, Lcom/tkay/expressad/splash/view/MBSplashClickView;->c:Ljava/lang/String;

    .line 43
    iput-object p1, p0, Lcom/tkay/expressad/splash/view/MBSplashClickView;->d:Ljava/lang/String;

    const-string p1, "tkay_splash_btn_arrow_right"

    .line 45
    iput-object p1, p0, Lcom/tkay/expressad/splash/view/MBSplashClickView;->e:Ljava/lang/String;

    const-string p1, "tkay_splash_btn_circle"

    .line 46
    iput-object p1, p0, Lcom/tkay/expressad/splash/view/MBSplashClickView;->f:Ljava/lang/String;

    const-string p1, "tkay_splash_btn_finger"

    .line 47
    iput-object p1, p0, Lcom/tkay/expressad/splash/view/MBSplashClickView;->g:Ljava/lang/String;

    const-string p1, "tkay_splash_btn_go"

    .line 48
    iput-object p1, p0, Lcom/tkay/expressad/splash/view/MBSplashClickView;->h:Ljava/lang/String;

    const-string p1, "tkay_splash_btn_light"

    .line 49
    iput-object p1, p0, Lcom/tkay/expressad/splash/view/MBSplashClickView;->i:Ljava/lang/String;

    const/4 p1, 0x1

    .line 51
    iput p1, p0, Lcom/tkay/expressad/splash/view/MBSplashClickView;->TYPE_SPLASH_BTN_OPEN:I

    const/4 p1, 0x2

    .line 52
    iput p1, p0, Lcom/tkay/expressad/splash/view/MBSplashClickView;->TYPE_SPLASH_BTN_GO:I

    const/4 p1, 0x3

    .line 53
    iput p1, p0, Lcom/tkay/expressad/splash/view/MBSplashClickView;->TYPE_SPLASH_BTN_CLICK:I

    .line 61
    new-instance p1, Landroid/graphics/RectF;

    invoke-direct {p1}, Landroid/graphics/RectF;-><init>()V

    iput-object p1, p0, Lcom/tkay/expressad/splash/view/MBSplashClickView;->n:Landroid/graphics/RectF;

    .line 62
    new-instance p1, Landroid/graphics/Paint;

    invoke-direct {p1}, Landroid/graphics/Paint;-><init>()V

    iput-object p1, p0, Lcom/tkay/expressad/splash/view/MBSplashClickView;->o:Landroid/graphics/Paint;

    .line 63
    new-instance p1, Landroid/graphics/Paint;

    invoke-direct {p1}, Landroid/graphics/Paint;-><init>()V

    iput-object p1, p0, Lcom/tkay/expressad/splash/view/MBSplashClickView;->p:Landroid/graphics/Paint;

    return-void
.end method

.method static synthetic a(Lcom/tkay/expressad/splash/view/MBSplashClickView;)Landroid/widget/ImageView;
    .locals 0

    .line 31
    iget-object p0, p0, Lcom/tkay/expressad/splash/view/MBSplashClickView;->m:Landroid/widget/ImageView;

    return-object p0
.end method

.method private a()V
    .locals 4

    .line 86
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/MBSplashClickView;->o:Landroid/graphics/Paint;

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Landroid/graphics/Paint;->setAntiAlias(Z)V

    .line 87
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/MBSplashClickView;->o:Landroid/graphics/Paint;

    new-instance v2, Landroid/graphics/PorterDuffXfermode;

    sget-object v3, Landroid/graphics/PorterDuff$Mode;->SRC_IN:Landroid/graphics/PorterDuff$Mode;

    invoke-direct {v2, v3}, Landroid/graphics/PorterDuffXfermode;-><init>(Landroid/graphics/PorterDuff$Mode;)V

    invoke-virtual {v0, v2}, Landroid/graphics/Paint;->setXfermode(Landroid/graphics/Xfermode;)Landroid/graphics/Xfermode;

    .line 88
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/MBSplashClickView;->p:Landroid/graphics/Paint;

    invoke-virtual {v0, v1}, Landroid/graphics/Paint;->setAntiAlias(Z)V

    .line 89
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/MBSplashClickView;->p:Landroid/graphics/Paint;

    const/4 v1, -0x1

    invoke-virtual {v0, v1}, Landroid/graphics/Paint;->setColor(I)V

    .line 91
    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/MBSplashClickView;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/MBSplashClickView;->getContext()Landroid/content/Context;

    move-result-object v1

    const-string v2, "string"

    const-string v3, "tkay_cm_shake_view_click_default_view"

    invoke-static {v1, v3, v2}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v1

    invoke-virtual {v0, v1}, Landroid/content/Context;->getString(I)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/expressad/splash/view/MBSplashClickView;->b:Ljava/lang/String;

    .line 92
    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/MBSplashClickView;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/MBSplashClickView;->getContext()Landroid/content/Context;

    move-result-object v1

    const-string v3, "tkay_cm_shake_view_click_default_open"

    invoke-static {v1, v3, v2}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v1

    invoke-virtual {v0, v1}, Landroid/content/Context;->getString(I)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/expressad/splash/view/MBSplashClickView;->c:Ljava/lang/String;

    .line 93
    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/MBSplashClickView;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/MBSplashClickView;->getContext()Landroid/content/Context;

    move-result-object v1

    const-string v3, "tkay_cm_shake_view_click_default_inst"

    invoke-static {v1, v3, v2}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v1

    invoke-virtual {v0, v1}, Landroid/content/Context;->getString(I)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/expressad/splash/view/MBSplashClickView;->d:Ljava/lang/String;

    return-void
.end method

.method private a(I)V
    .locals 5

    const-string v0, "#666666"

    .line 184
    invoke-static {v0}, Landroid/graphics/Color;->parseColor(Ljava/lang/String;)I

    move-result v0

    const-string v1, "#8FC31F"

    .line 185
    invoke-static {v1}, Landroid/graphics/Color;->parseColor(Ljava/lang/String;)I

    move-result v1

    const-string v2, "#000000"

    .line 186
    invoke-static {v2}, Landroid/graphics/Color;->parseColor(Ljava/lang/String;)I

    move-result v2

    .line 188
    new-instance v3, Landroid/graphics/drawable/GradientDrawable;

    invoke-direct {v3}, Landroid/graphics/drawable/GradientDrawable;-><init>()V

    const/4 v4, 0x2

    if-ne p1, v4, :cond_0

    .line 190
    invoke-virtual {v3, v1}, Landroid/graphics/drawable/GradientDrawable;->setColor(I)V

    goto :goto_0

    .line 192
    :cond_0
    invoke-virtual {v3, v2}, Landroid/graphics/drawable/GradientDrawable;->setColor(I)V

    .line 193
    invoke-virtual {v3, v4, v0}, Landroid/graphics/drawable/GradientDrawable;->setStroke(II)V

    :goto_0
    const/high16 p1, 0x43480000    # 200.0f

    .line 195
    invoke-virtual {v3, p1}, Landroid/graphics/drawable/GradientDrawable;->setCornerRadius(F)V

    .line 196
    invoke-virtual {p0, v3}, Lcom/tkay/expressad/splash/view/MBSplashClickView;->setBackgroundDrawable(Landroid/graphics/drawable/Drawable;)V

    return-void
.end method

.method private a(Ljava/lang/String;)Z
    .locals 2

    .line 220
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/MBSplashClickView;->b:Ljava/lang/String;

    invoke-static {p1, v0}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v0

    const/4 v1, 0x1

    if-eqz v0, :cond_0

    const/4 p1, 0x2

    .line 222
    iput p1, p0, Lcom/tkay/expressad/splash/view/MBSplashClickView;->k:I

    goto :goto_0

    .line 223
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/MBSplashClickView;->d:Ljava/lang/String;

    invoke-static {p1, v0}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_1

    const/4 p1, 0x3

    .line 225
    iput p1, p0, Lcom/tkay/expressad/splash/view/MBSplashClickView;->k:I

    goto :goto_0

    .line 226
    :cond_1
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/MBSplashClickView;->c:Ljava/lang/String;

    invoke-static {p1, v0}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_2

    .line 228
    iput v1, p0, Lcom/tkay/expressad/splash/view/MBSplashClickView;->k:I

    goto :goto_0

    :cond_2
    const/4 v1, 0x0

    :goto_0
    return v1
.end method

.method static synthetic b(Lcom/tkay/expressad/splash/view/MBSplashClickView;)Landroid/widget/ImageView;
    .locals 0

    .line 31
    iget-object p0, p0, Lcom/tkay/expressad/splash/view/MBSplashClickView;->l:Landroid/widget/ImageView;

    return-object p0
.end method

.method private b()V
    .locals 11

    .line 103
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/MBSplashClickView;->j:Ljava/lang/String;

    .line 2220
    iget-object v1, p0, Lcom/tkay/expressad/splash/view/MBSplashClickView;->b:Ljava/lang/String;

    invoke-static {v0, v1}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v1

    const/4 v2, 0x3

    const/4 v3, 0x0

    const/4 v4, 0x2

    const/4 v5, 0x1

    if-eqz v1, :cond_0

    .line 2222
    iput v4, p0, Lcom/tkay/expressad/splash/view/MBSplashClickView;->k:I

    :goto_0
    move v0, v5

    goto :goto_1

    .line 2223
    :cond_0
    iget-object v1, p0, Lcom/tkay/expressad/splash/view/MBSplashClickView;->d:Ljava/lang/String;

    invoke-static {v0, v1}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_1

    .line 2225
    iput v2, p0, Lcom/tkay/expressad/splash/view/MBSplashClickView;->k:I

    goto :goto_0

    .line 2226
    :cond_1
    iget-object v1, p0, Lcom/tkay/expressad/splash/view/MBSplashClickView;->c:Ljava/lang/String;

    invoke-static {v0, v1}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_2

    .line 2228
    iput v5, p0, Lcom/tkay/expressad/splash/view/MBSplashClickView;->k:I

    goto :goto_0

    :cond_2
    move v0, v3

    :goto_1
    if-nez v0, :cond_4

    .line 107
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/MBSplashClickView;->j:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_3

    .line 108
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/MBSplashClickView;->b:Ljava/lang/String;

    iput-object v0, p0, Lcom/tkay/expressad/splash/view/MBSplashClickView;->j:Ljava/lang/String;

    .line 110
    :cond_3
    iput v4, p0, Lcom/tkay/expressad/splash/view/MBSplashClickView;->k:I

    .line 113
    :cond_4
    iget v0, p0, Lcom/tkay/expressad/splash/view/MBSplashClickView;->k:I

    const-string v1, "#666666"

    .line 3184
    invoke-static {v1}, Landroid/graphics/Color;->parseColor(Ljava/lang/String;)I

    move-result v1

    const-string v6, "#8FC31F"

    .line 3185
    invoke-static {v6}, Landroid/graphics/Color;->parseColor(Ljava/lang/String;)I

    move-result v6

    const-string v7, "#000000"

    .line 3186
    invoke-static {v7}, Landroid/graphics/Color;->parseColor(Ljava/lang/String;)I

    move-result v7

    .line 3188
    new-instance v8, Landroid/graphics/drawable/GradientDrawable;

    invoke-direct {v8}, Landroid/graphics/drawable/GradientDrawable;-><init>()V

    if-ne v0, v4, :cond_5

    .line 3190
    invoke-virtual {v8, v6}, Landroid/graphics/drawable/GradientDrawable;->setColor(I)V

    goto :goto_2

    .line 3192
    :cond_5
    invoke-virtual {v8, v7}, Landroid/graphics/drawable/GradientDrawable;->setColor(I)V

    .line 3193
    invoke-virtual {v8, v4, v1}, Landroid/graphics/drawable/GradientDrawable;->setStroke(II)V

    :goto_2
    const/high16 v0, 0x43480000    # 200.0f

    .line 3195
    invoke-virtual {v8, v0}, Landroid/graphics/drawable/GradientDrawable;->setCornerRadius(F)V

    .line 3196
    invoke-virtual {p0, v8}, Lcom/tkay/expressad/splash/view/MBSplashClickView;->setBackgroundDrawable(Landroid/graphics/drawable/Drawable;)V

    .line 115
    new-instance v0, Landroid/widget/TextView;

    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/MBSplashClickView;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-direct {v0, v1}, Landroid/widget/TextView;-><init>(Landroid/content/Context;)V

    .line 116
    new-instance v1, Landroid/widget/RelativeLayout$LayoutParams;

    const/4 v6, -0x1

    invoke-direct {v1, v6, v6}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    const/16 v7, 0xf

    .line 117
    invoke-virtual {v1, v7}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    .line 118
    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    const/16 v1, 0x11

    .line 119
    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setGravity(I)V

    const/high16 v1, 0x41a00000    # 20.0f

    .line 120
    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setTextSize(F)V

    .line 121
    invoke-virtual {v0, v6}, Landroid/widget/TextView;->setTextColor(I)V

    .line 122
    iget-object v1, p0, Lcom/tkay/expressad/splash/view/MBSplashClickView;->j:Ljava/lang/String;

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 124
    new-instance v1, Landroid/widget/ImageView;

    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/MBSplashClickView;->getContext()Landroid/content/Context;

    move-result-object v8

    invoke-direct {v1, v8}, Landroid/widget/ImageView;-><init>(Landroid/content/Context;)V

    iput-object v1, p0, Lcom/tkay/expressad/splash/view/MBSplashClickView;->l:Landroid/widget/ImageView;

    const/4 v1, 0x0

    .line 128
    iget v8, p0, Lcom/tkay/expressad/splash/view/MBSplashClickView;->k:I

    const/16 v9, 0xb

    const-string v10, "drawable"

    if-ne v8, v4, :cond_6

    .line 129
    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/MBSplashClickView;->getResources()Landroid/content/res/Resources;

    move-result-object v1

    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/expressad/foundation/b/b;->a()Ljava/lang/String;

    move-result-object v2

    const-string v3, "tkay_splash_btn_go"

    invoke-virtual {v1, v3, v10, v2}, Landroid/content/res/Resources;->getIdentifier(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)I

    move-result v3

    .line 131
    new-instance v1, Landroid/widget/RelativeLayout$LayoutParams;

    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/MBSplashClickView;->getContext()Landroid/content/Context;

    move-result-object v2

    const/high16 v4, 0x420c0000    # 35.0f

    invoke-static {v2, v4}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v2

    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/MBSplashClickView;->getContext()Landroid/content/Context;

    move-result-object v5

    invoke-static {v5, v4}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v4

    invoke-direct {v1, v2, v4}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    .line 132
    invoke-virtual {v1, v9}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    .line 133
    invoke-virtual {v1, v7}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    .line 134
    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/MBSplashClickView;->getContext()Landroid/content/Context;

    move-result-object v2

    const/high16 v4, 0x41200000    # 10.0f

    invoke-static {v2, v4}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v2

    iput v2, v1, Landroid/widget/RelativeLayout$LayoutParams;->rightMargin:I

    goto/16 :goto_3

    :cond_6
    const/high16 v4, 0x42480000    # 50.0f

    if-ne v8, v5, :cond_7

    .line 136
    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/MBSplashClickView;->getResources()Landroid/content/res/Resources;

    move-result-object v1

    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/expressad/foundation/b/b;->a()Ljava/lang/String;

    move-result-object v2

    const-string v3, "tkay_splash_btn_light"

    invoke-virtual {v1, v3, v10, v2}, Landroid/content/res/Resources;->getIdentifier(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)I

    move-result v3

    .line 138
    new-instance v1, Landroid/widget/RelativeLayout$LayoutParams;

    const/4 v2, -0x2

    invoke-direct {v1, v2, v6}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    const/16 v5, 0x14

    .line 139
    iput v5, v1, Landroid/widget/RelativeLayout$LayoutParams;->leftMargin:I

    .line 140
    iput v5, v1, Landroid/widget/RelativeLayout$LayoutParams;->rightMargin:I

    .line 142
    new-instance v5, Landroid/widget/ImageView;

    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/MBSplashClickView;->getContext()Landroid/content/Context;

    move-result-object v8

    invoke-direct {v5, v8}, Landroid/widget/ImageView;-><init>(Landroid/content/Context;)V

    .line 143
    new-instance v8, Landroid/widget/RelativeLayout$LayoutParams;

    invoke-direct {v8, v2, v6}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    .line 144
    invoke-virtual {v8, v9}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    .line 145
    invoke-virtual {v8, v7}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    .line 146
    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/MBSplashClickView;->getContext()Landroid/content/Context;

    move-result-object v2

    invoke-static {v2, v4}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v2

    iput v2, v8, Landroid/widget/RelativeLayout$LayoutParams;->rightMargin:I

    .line 147
    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/MBSplashClickView;->getResources()Landroid/content/res/Resources;

    move-result-object v2

    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object v4

    invoke-virtual {v4}, Lcom/tkay/expressad/foundation/b/b;->a()Ljava/lang/String;

    move-result-object v4

    const-string v6, "tkay_splash_btn_arrow_right"

    invoke-virtual {v2, v6, v10, v4}, Landroid/content/res/Resources;->getIdentifier(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)I

    move-result v2

    .line 148
    invoke-virtual {v5, v2}, Landroid/widget/ImageView;->setImageResource(I)V

    .line 149
    sget-object v2, Landroid/widget/ImageView$ScaleType;->CENTER:Landroid/widget/ImageView$ScaleType;

    invoke-virtual {v5, v2}, Landroid/widget/ImageView;->setScaleType(Landroid/widget/ImageView$ScaleType;)V

    .line 150
    invoke-virtual {v5, v8}, Landroid/widget/ImageView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 151
    invoke-virtual {p0, v5}, Lcom/tkay/expressad/splash/view/MBSplashClickView;->addView(Landroid/view/View;)V

    goto/16 :goto_3

    :cond_7
    if-ne v8, v2, :cond_8

    .line 154
    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/MBSplashClickView;->getResources()Landroid/content/res/Resources;

    move-result-object v1

    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/expressad/foundation/b/b;->a()Ljava/lang/String;

    move-result-object v2

    const-string v3, "tkay_splash_btn_finger"

    invoke-virtual {v1, v3, v10, v2}, Landroid/content/res/Resources;->getIdentifier(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)I

    move-result v3

    .line 156
    new-instance v1, Landroid/widget/RelativeLayout$LayoutParams;

    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/MBSplashClickView;->getContext()Landroid/content/Context;

    move-result-object v2

    const/high16 v5, 0x41c80000    # 25.0f

    invoke-static {v2, v5}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v2

    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/MBSplashClickView;->getContext()Landroid/content/Context;

    move-result-object v6

    invoke-static {v6, v5}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v5

    invoke-direct {v1, v2, v5}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    .line 157
    invoke-virtual {v1, v9}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    .line 158
    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/MBSplashClickView;->getContext()Landroid/content/Context;

    move-result-object v2

    invoke-static {v2, v4}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v2

    iput v2, v1, Landroid/widget/RelativeLayout$LayoutParams;->rightMargin:I

    .line 159
    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/MBSplashClickView;->getContext()Landroid/content/Context;

    move-result-object v2

    const/high16 v5, 0x41900000    # 18.0f

    invoke-static {v2, v5}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v2

    iput v2, v1, Landroid/widget/RelativeLayout$LayoutParams;->topMargin:I

    .line 161
    new-instance v2, Landroid/widget/ImageView;

    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/MBSplashClickView;->getContext()Landroid/content/Context;

    move-result-object v5

    invoke-direct {v2, v5}, Landroid/widget/ImageView;-><init>(Landroid/content/Context;)V

    iput-object v2, p0, Lcom/tkay/expressad/splash/view/MBSplashClickView;->m:Landroid/widget/ImageView;

    .line 162
    new-instance v2, Landroid/widget/RelativeLayout$LayoutParams;

    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/MBSplashClickView;->getContext()Landroid/content/Context;

    move-result-object v5

    const/high16 v6, 0x41f00000    # 30.0f

    invoke-static {v5, v6}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v5

    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/MBSplashClickView;->getContext()Landroid/content/Context;

    move-result-object v7

    invoke-static {v7, v6}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v6

    invoke-direct {v2, v5, v6}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    .line 163
    invoke-virtual {v2, v9}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    .line 164
    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/MBSplashClickView;->getContext()Landroid/content/Context;

    move-result-object v5

    invoke-static {v5, v4}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v4

    iput v4, v2, Landroid/widget/RelativeLayout$LayoutParams;->rightMargin:I

    .line 165
    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/MBSplashClickView;->getContext()Landroid/content/Context;

    move-result-object v4

    const/high16 v5, 0x40a00000    # 5.0f

    invoke-static {v4, v5}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v4

    iput v4, v2, Landroid/widget/RelativeLayout$LayoutParams;->topMargin:I

    .line 166
    iget-object v4, p0, Lcom/tkay/expressad/splash/view/MBSplashClickView;->m:Landroid/widget/ImageView;

    invoke-virtual {v4, v2}, Landroid/widget/ImageView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 167
    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/MBSplashClickView;->getResources()Landroid/content/res/Resources;

    move-result-object v2

    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object v4

    invoke-virtual {v4}, Lcom/tkay/expressad/foundation/b/b;->a()Ljava/lang/String;

    move-result-object v4

    const-string v5, "tkay_splash_btn_circle"

    invoke-virtual {v2, v5, v10, v4}, Landroid/content/res/Resources;->getIdentifier(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)I

    move-result v2

    .line 168
    iget-object v4, p0, Lcom/tkay/expressad/splash/view/MBSplashClickView;->m:Landroid/widget/ImageView;

    invoke-virtual {v4, v2}, Landroid/widget/ImageView;->setImageResource(I)V

    .line 169
    iget-object v2, p0, Lcom/tkay/expressad/splash/view/MBSplashClickView;->m:Landroid/widget/ImageView;

    invoke-virtual {p0, v2}, Lcom/tkay/expressad/splash/view/MBSplashClickView;->addView(Landroid/view/View;)V

    .line 172
    :cond_8
    :goto_3
    iget-object v2, p0, Lcom/tkay/expressad/splash/view/MBSplashClickView;->l:Landroid/widget/ImageView;

    invoke-virtual {v2, v1}, Landroid/widget/ImageView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 173
    iget-object v1, p0, Lcom/tkay/expressad/splash/view/MBSplashClickView;->l:Landroid/widget/ImageView;

    invoke-virtual {v1, v3}, Landroid/widget/ImageView;->setImageResource(I)V

    .line 175
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/splash/view/MBSplashClickView;->addView(Landroid/view/View;)V

    .line 176
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/MBSplashClickView;->l:Landroid/widget/ImageView;

    invoke-virtual {p0, v0}, Lcom/tkay/expressad/splash/view/MBSplashClickView;->addView(Landroid/view/View;)V

    .line 178
    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/MBSplashClickView;->invalidate()V

    return-void
.end method

.method private c()V
    .locals 20

    move-object/from16 v0, p0

    .line 247
    new-instance v10, Landroid/view/animation/ScaleAnimation;

    const/high16 v2, 0x3f800000    # 1.0f

    const v3, 0x3f333333    # 0.7f

    const/high16 v4, 0x3f800000    # 1.0f

    const v5, 0x3f333333    # 0.7f

    const/4 v6, 0x1

    const/high16 v7, 0x3f000000    # 0.5f

    const/4 v8, 0x1

    const/high16 v9, 0x3f000000    # 0.5f

    move-object v1, v10

    invoke-direct/range {v1 .. v9}, Landroid/view/animation/ScaleAnimation;-><init>(FFFFIFIF)V

    const-wide/16 v1, 0x190

    .line 248
    invoke-virtual {v10, v1, v2}, Landroid/view/animation/ScaleAnimation;->setDuration(J)V

    const/4 v1, -0x1

    .line 249
    invoke-virtual {v10, v1}, Landroid/view/animation/ScaleAnimation;->setRepeatCount(I)V

    const/4 v1, 0x2

    .line 250
    invoke-virtual {v10, v1}, Landroid/view/animation/ScaleAnimation;->setRepeatMode(I)V

    .line 252
    new-instance v1, Landroid/view/animation/ScaleAnimation;

    const/4 v12, 0x0

    const/high16 v13, 0x3f000000    # 0.5f

    const/4 v14, 0x0

    const/high16 v15, 0x3f000000    # 0.5f

    const/16 v16, 0x1

    const/high16 v17, 0x3f000000    # 0.5f

    const/16 v18, 0x1

    const/high16 v19, 0x3f000000    # 0.5f

    move-object v11, v1

    invoke-direct/range {v11 .. v19}, Landroid/view/animation/ScaleAnimation;-><init>(FFFFIFIF)V

    const-wide/16 v2, 0xc8

    .line 253
    invoke-virtual {v1, v2, v3}, Landroid/view/animation/ScaleAnimation;->setDuration(J)V

    .line 255
    new-instance v2, Lcom/tkay/expressad/splash/view/MBSplashClickView$1;

    invoke-direct {v2, v0, v1}, Lcom/tkay/expressad/splash/view/MBSplashClickView$1;-><init>(Lcom/tkay/expressad/splash/view/MBSplashClickView;Landroid/view/animation/ScaleAnimation;)V

    invoke-virtual {v1, v2}, Landroid/view/animation/ScaleAnimation;->setAnimationListener(Landroid/view/animation/Animation$AnimationListener;)V

    .line 279
    iget-object v2, v0, Lcom/tkay/expressad/splash/view/MBSplashClickView;->m:Landroid/widget/ImageView;

    const/4 v3, 0x4

    invoke-virtual {v2, v3}, Landroid/widget/ImageView;->setVisibility(I)V

    .line 280
    iget-object v2, v0, Lcom/tkay/expressad/splash/view/MBSplashClickView;->l:Landroid/widget/ImageView;

    invoke-virtual {v2, v10}, Landroid/widget/ImageView;->startAnimation(Landroid/view/animation/Animation;)V

    .line 281
    iget-object v2, v0, Lcom/tkay/expressad/splash/view/MBSplashClickView;->m:Landroid/widget/ImageView;

    new-instance v3, Lcom/tkay/expressad/splash/view/MBSplashClickView$2;

    invoke-direct {v3, v0, v1}, Lcom/tkay/expressad/splash/view/MBSplashClickView$2;-><init>(Lcom/tkay/expressad/splash/view/MBSplashClickView;Landroid/view/animation/ScaleAnimation;)V

    const-wide/16 v4, 0x1f4

    invoke-virtual {v2, v3, v4, v5}, Landroid/widget/ImageView;->postDelayed(Ljava/lang/Runnable;J)Z

    return-void
.end method

.method private d()V
    .locals 10

    .line 290
    new-instance v9, Landroid/view/animation/TranslateAnimation;

    const/4 v1, 0x0

    const/high16 v2, -0x3d380000    # -100.0f

    const/4 v3, 0x0

    const/high16 v4, 0x447a0000    # 1000.0f

    const/4 v5, 0x0

    const/4 v6, 0x0

    const/4 v7, 0x0

    const/4 v8, 0x0

    move-object v0, v9

    invoke-direct/range {v0 .. v8}, Landroid/view/animation/TranslateAnimation;-><init>(IFIFIFIF)V

    const-wide/16 v0, 0x3e8

    .line 291
    invoke-virtual {v9, v0, v1}, Landroid/view/animation/TranslateAnimation;->setDuration(J)V

    .line 292
    new-instance v0, Lcom/tkay/expressad/splash/view/MBSplashClickView$3;

    invoke-direct {v0, p0}, Lcom/tkay/expressad/splash/view/MBSplashClickView$3;-><init>(Lcom/tkay/expressad/splash/view/MBSplashClickView;)V

    invoke-virtual {v9, v0}, Landroid/view/animation/TranslateAnimation;->setAnimationListener(Landroid/view/animation/Animation$AnimationListener;)V

    .line 314
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/MBSplashClickView;->l:Landroid/widget/ImageView;

    invoke-virtual {v0, v9}, Landroid/widget/ImageView;->startAnimation(Landroid/view/animation/Animation;)V

    return-void
.end method

.method private e()V
    .locals 10

    .line 318
    new-instance v9, Landroid/view/animation/ScaleAnimation;

    const v1, 0x3f4ccccd    # 0.8f

    const/high16 v2, 0x3f800000    # 1.0f

    const v3, 0x3f4ccccd    # 0.8f

    const/high16 v4, 0x3f800000    # 1.0f

    const/4 v5, 0x1

    const/high16 v6, 0x3f000000    # 0.5f

    const/4 v7, 0x1

    const/high16 v8, 0x3f000000    # 0.5f

    move-object v0, v9

    invoke-direct/range {v0 .. v8}, Landroid/view/animation/ScaleAnimation;-><init>(FFFFIFIF)V

    const-wide/16 v0, 0x1f4

    .line 319
    invoke-virtual {v9, v0, v1}, Landroid/view/animation/ScaleAnimation;->setDuration(J)V

    const/4 v0, -0x1

    .line 320
    invoke-virtual {v9, v0}, Landroid/view/animation/ScaleAnimation;->setRepeatCount(I)V

    const/4 v0, 0x2

    .line 321
    invoke-virtual {v9, v0}, Landroid/view/animation/ScaleAnimation;->setRepeatMode(I)V

    .line 322
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/MBSplashClickView;->l:Landroid/widget/ImageView;

    invoke-virtual {v0, v9}, Landroid/widget/ImageView;->startAnimation(Landroid/view/animation/Animation;)V

    return-void
.end method


# virtual methods
.method public draw(Landroid/graphics/Canvas;)V
    .locals 4

    .line 210
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/MBSplashClickView;->n:Landroid/graphics/RectF;

    iget-object v1, p0, Lcom/tkay/expressad/splash/view/MBSplashClickView;->p:Landroid/graphics/Paint;

    const/16 v2, 0x1f

    invoke-virtual {p1, v0, v1, v2}, Landroid/graphics/Canvas;->saveLayer(Landroid/graphics/RectF;Landroid/graphics/Paint;I)I

    .line 211
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/MBSplashClickView;->n:Landroid/graphics/RectF;

    iget-object v1, p0, Lcom/tkay/expressad/splash/view/MBSplashClickView;->p:Landroid/graphics/Paint;

    const/high16 v3, 0x43480000    # 200.0f

    invoke-virtual {p1, v0, v3, v3, v1}, Landroid/graphics/Canvas;->drawRoundRect(Landroid/graphics/RectF;FFLandroid/graphics/Paint;)V

    .line 213
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/MBSplashClickView;->n:Landroid/graphics/RectF;

    iget-object v1, p0, Lcom/tkay/expressad/splash/view/MBSplashClickView;->o:Landroid/graphics/Paint;

    invoke-virtual {p1, v0, v1, v2}, Landroid/graphics/Canvas;->saveLayer(Landroid/graphics/RectF;Landroid/graphics/Paint;I)I

    .line 214
    invoke-super {p0, p1}, Landroid/widget/RelativeLayout;->draw(Landroid/graphics/Canvas;)V

    .line 215
    invoke-virtual {p1}, Landroid/graphics/Canvas;->restore()V

    return-void
.end method

.method public initView(Ljava/lang/String;)V
    .locals 10

    .line 97
    iput-object p1, p0, Lcom/tkay/expressad/splash/view/MBSplashClickView;->j:Ljava/lang/String;

    .line 1220
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/MBSplashClickView;->b:Ljava/lang/String;

    invoke-static {p1, v0}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v0

    const/4 v1, 0x3

    const/4 v2, 0x0

    const/4 v3, 0x2

    const/4 v4, 0x1

    if-eqz v0, :cond_0

    .line 1222
    iput v3, p0, Lcom/tkay/expressad/splash/view/MBSplashClickView;->k:I

    :goto_0
    move p1, v4

    goto :goto_1

    .line 1223
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/MBSplashClickView;->d:Ljava/lang/String;

    invoke-static {p1, v0}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 1225
    iput v1, p0, Lcom/tkay/expressad/splash/view/MBSplashClickView;->k:I

    goto :goto_0

    .line 1226
    :cond_1
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/MBSplashClickView;->c:Ljava/lang/String;

    invoke-static {p1, v0}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_2

    .line 1228
    iput v4, p0, Lcom/tkay/expressad/splash/view/MBSplashClickView;->k:I

    goto :goto_0

    :cond_2
    move p1, v2

    :goto_1
    if-nez p1, :cond_4

    .line 1107
    iget-object p1, p0, Lcom/tkay/expressad/splash/view/MBSplashClickView;->j:Ljava/lang/String;

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_3

    .line 1108
    iget-object p1, p0, Lcom/tkay/expressad/splash/view/MBSplashClickView;->b:Ljava/lang/String;

    iput-object p1, p0, Lcom/tkay/expressad/splash/view/MBSplashClickView;->j:Ljava/lang/String;

    .line 1110
    :cond_3
    iput v3, p0, Lcom/tkay/expressad/splash/view/MBSplashClickView;->k:I

    .line 1113
    :cond_4
    iget p1, p0, Lcom/tkay/expressad/splash/view/MBSplashClickView;->k:I

    const-string v0, "#666666"

    .line 2184
    invoke-static {v0}, Landroid/graphics/Color;->parseColor(Ljava/lang/String;)I

    move-result v0

    const-string v5, "#8FC31F"

    .line 2185
    invoke-static {v5}, Landroid/graphics/Color;->parseColor(Ljava/lang/String;)I

    move-result v5

    const-string v6, "#000000"

    .line 2186
    invoke-static {v6}, Landroid/graphics/Color;->parseColor(Ljava/lang/String;)I

    move-result v6

    .line 2188
    new-instance v7, Landroid/graphics/drawable/GradientDrawable;

    invoke-direct {v7}, Landroid/graphics/drawable/GradientDrawable;-><init>()V

    if-ne p1, v3, :cond_5

    .line 2190
    invoke-virtual {v7, v5}, Landroid/graphics/drawable/GradientDrawable;->setColor(I)V

    goto :goto_2

    .line 2192
    :cond_5
    invoke-virtual {v7, v6}, Landroid/graphics/drawable/GradientDrawable;->setColor(I)V

    .line 2193
    invoke-virtual {v7, v3, v0}, Landroid/graphics/drawable/GradientDrawable;->setStroke(II)V

    :goto_2
    const/high16 p1, 0x43480000    # 200.0f

    .line 2195
    invoke-virtual {v7, p1}, Landroid/graphics/drawable/GradientDrawable;->setCornerRadius(F)V

    .line 2196
    invoke-virtual {p0, v7}, Lcom/tkay/expressad/splash/view/MBSplashClickView;->setBackgroundDrawable(Landroid/graphics/drawable/Drawable;)V

    .line 1115
    new-instance p1, Landroid/widget/TextView;

    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/MBSplashClickView;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-direct {p1, v0}, Landroid/widget/TextView;-><init>(Landroid/content/Context;)V

    .line 1116
    new-instance v0, Landroid/widget/RelativeLayout$LayoutParams;

    const/4 v5, -0x1

    invoke-direct {v0, v5, v5}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    const/16 v6, 0xf

    .line 1117
    invoke-virtual {v0, v6}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    .line 1118
    invoke-virtual {p1, v0}, Landroid/widget/TextView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    const/16 v0, 0x11

    .line 1119
    invoke-virtual {p1, v0}, Landroid/widget/TextView;->setGravity(I)V

    const/high16 v0, 0x41a00000    # 20.0f

    .line 1120
    invoke-virtual {p1, v0}, Landroid/widget/TextView;->setTextSize(F)V

    .line 1121
    invoke-virtual {p1, v5}, Landroid/widget/TextView;->setTextColor(I)V

    .line 1122
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/MBSplashClickView;->j:Ljava/lang/String;

    invoke-virtual {p1, v0}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 1124
    new-instance v0, Landroid/widget/ImageView;

    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/MBSplashClickView;->getContext()Landroid/content/Context;

    move-result-object v7

    invoke-direct {v0, v7}, Landroid/widget/ImageView;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/tkay/expressad/splash/view/MBSplashClickView;->l:Landroid/widget/ImageView;

    const/4 v0, 0x0

    .line 1128
    iget v7, p0, Lcom/tkay/expressad/splash/view/MBSplashClickView;->k:I

    const/16 v8, 0xb

    const-string v9, "drawable"

    if-ne v7, v3, :cond_6

    .line 1129
    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/MBSplashClickView;->getResources()Landroid/content/res/Resources;

    move-result-object v0

    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/b/b;->a()Ljava/lang/String;

    move-result-object v1

    const-string v2, "tkay_splash_btn_go"

    invoke-virtual {v0, v2, v9, v1}, Landroid/content/res/Resources;->getIdentifier(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)I

    move-result v2

    .line 1131
    new-instance v0, Landroid/widget/RelativeLayout$LayoutParams;

    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/MBSplashClickView;->getContext()Landroid/content/Context;

    move-result-object v1

    const/high16 v3, 0x420c0000    # 35.0f

    invoke-static {v1, v3}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v1

    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/MBSplashClickView;->getContext()Landroid/content/Context;

    move-result-object v4

    invoke-static {v4, v3}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v3

    invoke-direct {v0, v1, v3}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    .line 1132
    invoke-virtual {v0, v8}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    .line 1133
    invoke-virtual {v0, v6}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    .line 1134
    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/MBSplashClickView;->getContext()Landroid/content/Context;

    move-result-object v1

    const/high16 v3, 0x41200000    # 10.0f

    invoke-static {v1, v3}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v1

    iput v1, v0, Landroid/widget/RelativeLayout$LayoutParams;->rightMargin:I

    goto/16 :goto_3

    :cond_6
    const/high16 v3, 0x42480000    # 50.0f

    if-ne v7, v4, :cond_7

    .line 1136
    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/MBSplashClickView;->getResources()Landroid/content/res/Resources;

    move-result-object v0

    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/b/b;->a()Ljava/lang/String;

    move-result-object v1

    const-string v2, "tkay_splash_btn_light"

    invoke-virtual {v0, v2, v9, v1}, Landroid/content/res/Resources;->getIdentifier(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)I

    move-result v2

    .line 1138
    new-instance v0, Landroid/widget/RelativeLayout$LayoutParams;

    const/4 v1, -0x2

    invoke-direct {v0, v1, v5}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    const/16 v4, 0x14

    .line 1139
    iput v4, v0, Landroid/widget/RelativeLayout$LayoutParams;->leftMargin:I

    .line 1140
    iput v4, v0, Landroid/widget/RelativeLayout$LayoutParams;->rightMargin:I

    .line 1142
    new-instance v4, Landroid/widget/ImageView;

    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/MBSplashClickView;->getContext()Landroid/content/Context;

    move-result-object v7

    invoke-direct {v4, v7}, Landroid/widget/ImageView;-><init>(Landroid/content/Context;)V

    .line 1143
    new-instance v7, Landroid/widget/RelativeLayout$LayoutParams;

    invoke-direct {v7, v1, v5}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    .line 1144
    invoke-virtual {v7, v8}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    .line 1145
    invoke-virtual {v7, v6}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    .line 1146
    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/MBSplashClickView;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1, v3}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v1

    iput v1, v7, Landroid/widget/RelativeLayout$LayoutParams;->rightMargin:I

    .line 1147
    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/MBSplashClickView;->getResources()Landroid/content/res/Resources;

    move-result-object v1

    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object v3

    invoke-virtual {v3}, Lcom/tkay/expressad/foundation/b/b;->a()Ljava/lang/String;

    move-result-object v3

    const-string v5, "tkay_splash_btn_arrow_right"

    invoke-virtual {v1, v5, v9, v3}, Landroid/content/res/Resources;->getIdentifier(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)I

    move-result v1

    .line 1148
    invoke-virtual {v4, v1}, Landroid/widget/ImageView;->setImageResource(I)V

    .line 1149
    sget-object v1, Landroid/widget/ImageView$ScaleType;->CENTER:Landroid/widget/ImageView$ScaleType;

    invoke-virtual {v4, v1}, Landroid/widget/ImageView;->setScaleType(Landroid/widget/ImageView$ScaleType;)V

    .line 1150
    invoke-virtual {v4, v7}, Landroid/widget/ImageView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 1151
    invoke-virtual {p0, v4}, Lcom/tkay/expressad/splash/view/MBSplashClickView;->addView(Landroid/view/View;)V

    goto/16 :goto_3

    :cond_7
    if-ne v7, v1, :cond_8

    .line 1154
    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/MBSplashClickView;->getResources()Landroid/content/res/Resources;

    move-result-object v0

    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/b/b;->a()Ljava/lang/String;

    move-result-object v1

    const-string v2, "tkay_splash_btn_finger"

    invoke-virtual {v0, v2, v9, v1}, Landroid/content/res/Resources;->getIdentifier(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)I

    move-result v2

    .line 1156
    new-instance v0, Landroid/widget/RelativeLayout$LayoutParams;

    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/MBSplashClickView;->getContext()Landroid/content/Context;

    move-result-object v1

    const/high16 v4, 0x41c80000    # 25.0f

    invoke-static {v1, v4}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v1

    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/MBSplashClickView;->getContext()Landroid/content/Context;

    move-result-object v5

    invoke-static {v5, v4}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v4

    invoke-direct {v0, v1, v4}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    .line 1157
    invoke-virtual {v0, v8}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    .line 1158
    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/MBSplashClickView;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1, v3}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v1

    iput v1, v0, Landroid/widget/RelativeLayout$LayoutParams;->rightMargin:I

    .line 1159
    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/MBSplashClickView;->getContext()Landroid/content/Context;

    move-result-object v1

    const/high16 v4, 0x41900000    # 18.0f

    invoke-static {v1, v4}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v1

    iput v1, v0, Landroid/widget/RelativeLayout$LayoutParams;->topMargin:I

    .line 1161
    new-instance v1, Landroid/widget/ImageView;

    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/MBSplashClickView;->getContext()Landroid/content/Context;

    move-result-object v4

    invoke-direct {v1, v4}, Landroid/widget/ImageView;-><init>(Landroid/content/Context;)V

    iput-object v1, p0, Lcom/tkay/expressad/splash/view/MBSplashClickView;->m:Landroid/widget/ImageView;

    .line 1162
    new-instance v1, Landroid/widget/RelativeLayout$LayoutParams;

    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/MBSplashClickView;->getContext()Landroid/content/Context;

    move-result-object v4

    const/high16 v5, 0x41f00000    # 30.0f

    invoke-static {v4, v5}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v4

    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/MBSplashClickView;->getContext()Landroid/content/Context;

    move-result-object v6

    invoke-static {v6, v5}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v5

    invoke-direct {v1, v4, v5}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    .line 1163
    invoke-virtual {v1, v8}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    .line 1164
    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/MBSplashClickView;->getContext()Landroid/content/Context;

    move-result-object v4

    invoke-static {v4, v3}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v3

    iput v3, v1, Landroid/widget/RelativeLayout$LayoutParams;->rightMargin:I

    .line 1165
    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/MBSplashClickView;->getContext()Landroid/content/Context;

    move-result-object v3

    const/high16 v4, 0x40a00000    # 5.0f

    invoke-static {v3, v4}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v3

    iput v3, v1, Landroid/widget/RelativeLayout$LayoutParams;->topMargin:I

    .line 1166
    iget-object v3, p0, Lcom/tkay/expressad/splash/view/MBSplashClickView;->m:Landroid/widget/ImageView;

    invoke-virtual {v3, v1}, Landroid/widget/ImageView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 1167
    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/MBSplashClickView;->getResources()Landroid/content/res/Resources;

    move-result-object v1

    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object v3

    invoke-virtual {v3}, Lcom/tkay/expressad/foundation/b/b;->a()Ljava/lang/String;

    move-result-object v3

    const-string v4, "tkay_splash_btn_circle"

    invoke-virtual {v1, v4, v9, v3}, Landroid/content/res/Resources;->getIdentifier(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)I

    move-result v1

    .line 1168
    iget-object v3, p0, Lcom/tkay/expressad/splash/view/MBSplashClickView;->m:Landroid/widget/ImageView;

    invoke-virtual {v3, v1}, Landroid/widget/ImageView;->setImageResource(I)V

    .line 1169
    iget-object v1, p0, Lcom/tkay/expressad/splash/view/MBSplashClickView;->m:Landroid/widget/ImageView;

    invoke-virtual {p0, v1}, Lcom/tkay/expressad/splash/view/MBSplashClickView;->addView(Landroid/view/View;)V

    .line 1172
    :cond_8
    :goto_3
    iget-object v1, p0, Lcom/tkay/expressad/splash/view/MBSplashClickView;->l:Landroid/widget/ImageView;

    invoke-virtual {v1, v0}, Landroid/widget/ImageView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 1173
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/MBSplashClickView;->l:Landroid/widget/ImageView;

    invoke-virtual {v0, v2}, Landroid/widget/ImageView;->setImageResource(I)V

    .line 1175
    invoke-virtual {p0, p1}, Lcom/tkay/expressad/splash/view/MBSplashClickView;->addView(Landroid/view/View;)V

    .line 1176
    iget-object p1, p0, Lcom/tkay/expressad/splash/view/MBSplashClickView;->l:Landroid/widget/ImageView;

    invoke-virtual {p0, p1}, Lcom/tkay/expressad/splash/view/MBSplashClickView;->addView(Landroid/view/View;)V

    .line 1178
    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/MBSplashClickView;->invalidate()V

    return-void
.end method

.method protected onAttachedToWindow()V
    .locals 17

    move-object/from16 v0, p0

    .line 235
    invoke-super/range {p0 .. p0}, Landroid/widget/RelativeLayout;->onAttachedToWindow()V

    .line 237
    iget v1, v0, Lcom/tkay/expressad/splash/view/MBSplashClickView;->k:I

    const/4 v2, -0x1

    const-wide/16 v3, 0x1f4

    const/4 v5, 0x2

    if-ne v1, v5, :cond_0

    .line 3318
    new-instance v1, Landroid/view/animation/ScaleAnimation;

    const v7, 0x3f4ccccd    # 0.8f

    const/high16 v8, 0x3f800000    # 1.0f

    const v9, 0x3f4ccccd    # 0.8f

    const/high16 v10, 0x3f800000    # 1.0f

    const/4 v11, 0x1

    const/high16 v12, 0x3f000000    # 0.5f

    const/4 v13, 0x1

    const/high16 v14, 0x3f000000    # 0.5f

    move-object v6, v1

    invoke-direct/range {v6 .. v14}, Landroid/view/animation/ScaleAnimation;-><init>(FFFFIFIF)V

    .line 3319
    invoke-virtual {v1, v3, v4}, Landroid/view/animation/ScaleAnimation;->setDuration(J)V

    .line 3320
    invoke-virtual {v1, v2}, Landroid/view/animation/ScaleAnimation;->setRepeatCount(I)V

    .line 3321
    invoke-virtual {v1, v5}, Landroid/view/animation/ScaleAnimation;->setRepeatMode(I)V

    .line 3322
    iget-object v2, v0, Lcom/tkay/expressad/splash/view/MBSplashClickView;->l:Landroid/widget/ImageView;

    invoke-virtual {v2, v1}, Landroid/widget/ImageView;->startAnimation(Landroid/view/animation/Animation;)V

    return-void

    :cond_0
    const/4 v6, 0x1

    if-ne v1, v6, :cond_1

    .line 4290
    new-instance v1, Landroid/view/animation/TranslateAnimation;

    const/4 v8, 0x0

    const/high16 v9, -0x3d380000    # -100.0f

    const/4 v10, 0x0

    const/high16 v11, 0x447a0000    # 1000.0f

    const/4 v12, 0x0

    const/4 v13, 0x0

    const/4 v14, 0x0

    const/4 v15, 0x0

    move-object v7, v1

    invoke-direct/range {v7 .. v15}, Landroid/view/animation/TranslateAnimation;-><init>(IFIFIFIF)V

    const-wide/16 v2, 0x3e8

    .line 4291
    invoke-virtual {v1, v2, v3}, Landroid/view/animation/TranslateAnimation;->setDuration(J)V

    .line 4292
    new-instance v2, Lcom/tkay/expressad/splash/view/MBSplashClickView$3;

    invoke-direct {v2, v0}, Lcom/tkay/expressad/splash/view/MBSplashClickView$3;-><init>(Lcom/tkay/expressad/splash/view/MBSplashClickView;)V

    invoke-virtual {v1, v2}, Landroid/view/animation/TranslateAnimation;->setAnimationListener(Landroid/view/animation/Animation$AnimationListener;)V

    .line 4314
    iget-object v2, v0, Lcom/tkay/expressad/splash/view/MBSplashClickView;->l:Landroid/widget/ImageView;

    invoke-virtual {v2, v1}, Landroid/widget/ImageView;->startAnimation(Landroid/view/animation/Animation;)V

    return-void

    :cond_1
    const/4 v6, 0x3

    if-ne v1, v6, :cond_2

    .line 5247
    new-instance v1, Landroid/view/animation/ScaleAnimation;

    const/high16 v8, 0x3f800000    # 1.0f

    const v9, 0x3f333333    # 0.7f

    const/high16 v10, 0x3f800000    # 1.0f

    const v11, 0x3f333333    # 0.7f

    const/4 v12, 0x1

    const/high16 v13, 0x3f000000    # 0.5f

    const/4 v14, 0x1

    const/high16 v15, 0x3f000000    # 0.5f

    move-object v7, v1

    invoke-direct/range {v7 .. v15}, Landroid/view/animation/ScaleAnimation;-><init>(FFFFIFIF)V

    const-wide/16 v6, 0x190

    .line 5248
    invoke-virtual {v1, v6, v7}, Landroid/view/animation/ScaleAnimation;->setDuration(J)V

    .line 5249
    invoke-virtual {v1, v2}, Landroid/view/animation/ScaleAnimation;->setRepeatCount(I)V

    .line 5250
    invoke-virtual {v1, v5}, Landroid/view/animation/ScaleAnimation;->setRepeatMode(I)V

    .line 5252
    new-instance v2, Landroid/view/animation/ScaleAnimation;

    const/4 v9, 0x0

    const/high16 v10, 0x3f000000    # 0.5f

    const/4 v11, 0x0

    const/high16 v12, 0x3f000000    # 0.5f

    const/4 v13, 0x1

    const/high16 v14, 0x3f000000    # 0.5f

    const/4 v15, 0x1

    const/high16 v16, 0x3f000000    # 0.5f

    move-object v8, v2

    invoke-direct/range {v8 .. v16}, Landroid/view/animation/ScaleAnimation;-><init>(FFFFIFIF)V

    const-wide/16 v5, 0xc8

    .line 5253
    invoke-virtual {v2, v5, v6}, Landroid/view/animation/ScaleAnimation;->setDuration(J)V

    .line 5255
    new-instance v5, Lcom/tkay/expressad/splash/view/MBSplashClickView$1;

    invoke-direct {v5, v0, v2}, Lcom/tkay/expressad/splash/view/MBSplashClickView$1;-><init>(Lcom/tkay/expressad/splash/view/MBSplashClickView;Landroid/view/animation/ScaleAnimation;)V

    invoke-virtual {v2, v5}, Landroid/view/animation/ScaleAnimation;->setAnimationListener(Landroid/view/animation/Animation$AnimationListener;)V

    .line 5279
    iget-object v5, v0, Lcom/tkay/expressad/splash/view/MBSplashClickView;->m:Landroid/widget/ImageView;

    const/4 v6, 0x4

    invoke-virtual {v5, v6}, Landroid/widget/ImageView;->setVisibility(I)V

    .line 5280
    iget-object v5, v0, Lcom/tkay/expressad/splash/view/MBSplashClickView;->l:Landroid/widget/ImageView;

    invoke-virtual {v5, v1}, Landroid/widget/ImageView;->startAnimation(Landroid/view/animation/Animation;)V

    .line 5281
    iget-object v1, v0, Lcom/tkay/expressad/splash/view/MBSplashClickView;->m:Landroid/widget/ImageView;

    new-instance v5, Lcom/tkay/expressad/splash/view/MBSplashClickView$2;

    invoke-direct {v5, v0, v2}, Lcom/tkay/expressad/splash/view/MBSplashClickView$2;-><init>(Lcom/tkay/expressad/splash/view/MBSplashClickView;Landroid/view/animation/ScaleAnimation;)V

    invoke-virtual {v1, v5, v3, v4}, Landroid/widget/ImageView;->postDelayed(Ljava/lang/Runnable;J)Z

    :cond_2
    return-void
.end method

.method protected onLayout(ZIIII)V
    .locals 0

    .line 202
    invoke-super/range {p0 .. p5}, Landroid/widget/RelativeLayout;->onLayout(ZIIII)V

    .line 203
    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/MBSplashClickView;->getWidth()I

    move-result p1

    .line 204
    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/MBSplashClickView;->getHeight()I

    move-result p2

    .line 205
    iget-object p3, p0, Lcom/tkay/expressad/splash/view/MBSplashClickView;->n:Landroid/graphics/RectF;

    int-to-float p1, p1

    int-to-float p2, p2

    const/4 p4, 0x0

    invoke-virtual {p3, p4, p4, p1, p2}, Landroid/graphics/RectF;->set(FFFF)V

    return-void
.end method
