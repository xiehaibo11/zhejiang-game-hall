.class public Lcom/tkay/expressad/widget/FeedBackButton;
.super Landroid/widget/TextView;


# static fields
.field public static FEEDBACK_BTN_BACKGROUND_COLOR_STR:Ljava/lang/String; = "#60000000"


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;)V
    .locals 0

    .line 17
    invoke-direct {p0, p1}, Landroid/widget/TextView;-><init>(Landroid/content/Context;)V

    .line 18
    invoke-direct {p0}, Lcom/tkay/expressad/widget/FeedBackButton;->a()V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 0

    .line 22
    invoke-direct {p0, p1, p2}, Landroid/widget/TextView;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    .line 23
    invoke-direct {p0}, Lcom/tkay/expressad/widget/FeedBackButton;->a()V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V
    .locals 0

    .line 27
    invoke-direct {p0, p1, p2, p3}, Landroid/widget/TextView;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V

    .line 28
    invoke-direct {p0}, Lcom/tkay/expressad/widget/FeedBackButton;->a()V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;II)V
    .locals 0

    .line 32
    invoke-direct {p0, p1, p2, p3, p4}, Landroid/widget/TextView;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;II)V

    .line 33
    invoke-direct {p0}, Lcom/tkay/expressad/widget/FeedBackButton;->a()V

    return-void
.end method

.method private a()V
    .locals 5

    .line 37
    invoke-virtual {p0}, Lcom/tkay/expressad/widget/FeedBackButton;->getContext()Landroid/content/Context;

    move-result-object v0

    const-string v1, "tkay_cm_feedback_btn_text"

    const-string v2, "string"

    invoke-static {v0, v1, v2}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p0, v0}, Lcom/tkay/expressad/widget/FeedBackButton;->setText(I)V

    .line 38
    invoke-virtual {p0}, Lcom/tkay/expressad/widget/FeedBackButton;->getContext()Landroid/content/Context;

    move-result-object v0

    const/high16 v1, 0x40a00000    # 5.0f

    .line 39
    invoke-static {v0, v1}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v2

    invoke-static {v0, v1}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v3

    invoke-static {v0, v1}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v4

    invoke-static {v0, v1}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v1

    invoke-virtual {p0, v2, v3, v4, v1}, Lcom/tkay/expressad/widget/FeedBackButton;->setPadding(IIII)V

    const/4 v1, 0x0

    .line 40
    invoke-virtual {p0, v1}, Lcom/tkay/expressad/widget/FeedBackButton;->setTextIsSelectable(Z)V

    const/16 v1, 0x11

    .line 41
    invoke-virtual {p0, v1}, Lcom/tkay/expressad/widget/FeedBackButton;->setGravity(I)V

    .line 42
    sget-object v1, Lcom/tkay/expressad/widget/FeedBackButton;->FEEDBACK_BTN_BACKGROUND_COLOR_STR:Ljava/lang/String;

    invoke-static {v1}, Landroid/graphics/Color;->parseColor(Ljava/lang/String;)I

    move-result v1

    invoke-virtual {p0, v1}, Lcom/tkay/expressad/widget/FeedBackButton;->setBackgroundColor(I)V

    .line 43
    new-instance v1, Landroid/graphics/drawable/GradientDrawable;

    invoke-direct {v1}, Landroid/graphics/drawable/GradientDrawable;-><init>()V

    const/high16 v2, 0x41a00000    # 20.0f

    .line 44
    invoke-static {v0, v2}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v0

    int-to-float v0, v0

    invoke-virtual {v1, v0}, Landroid/graphics/drawable/GradientDrawable;->setCornerRadius(F)V

    .line 45
    sget-object v0, Lcom/tkay/expressad/widget/FeedBackButton;->FEEDBACK_BTN_BACKGROUND_COLOR_STR:Ljava/lang/String;

    invoke-static {v0}, Landroid/graphics/Color;->parseColor(Ljava/lang/String;)I

    move-result v0

    invoke-virtual {v1, v0}, Landroid/graphics/drawable/GradientDrawable;->setColor(I)V

    .line 46
    invoke-virtual {p0, v1}, Lcom/tkay/expressad/widget/FeedBackButton;->setBackground(Landroid/graphics/drawable/Drawable;)V

    const/4 v0, -0x1

    .line 47
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/widget/FeedBackButton;->setTextColor(I)V

    return-void
.end method
