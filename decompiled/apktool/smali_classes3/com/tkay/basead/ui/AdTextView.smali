.class public Lcom/tkay/basead/ui/AdTextView;
.super Landroid/widget/TextView;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 0

    .line 22
    invoke-direct {p0, p1}, Landroid/widget/TextView;-><init>(Landroid/content/Context;)V

    .line 23
    invoke-direct {p0, p1}, Lcom/tkay/basead/ui/AdTextView;->a(Landroid/content/Context;)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 0

    .line 27
    invoke-direct {p0, p1, p2}, Landroid/widget/TextView;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    .line 28
    invoke-direct {p0, p1}, Lcom/tkay/basead/ui/AdTextView;->a(Landroid/content/Context;)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V
    .locals 0

    .line 32
    invoke-direct {p0, p1, p2, p3}, Landroid/widget/TextView;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V

    .line 33
    invoke-direct {p0, p1}, Lcom/tkay/basead/ui/AdTextView;->a(Landroid/content/Context;)V

    return-void
.end method

.method private a(Landroid/content/Context;)V
    .locals 3

    const-string v0, "myoffer_bg_banner_ad_choice"

    const-string v1, "drawable"

    .line 37
    invoke-static {p1, v0, v1}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p0, v0}, Lcom/tkay/basead/ui/AdTextView;->setBackgroundResource(I)V

    const/4 v0, -0x1

    .line 38
    invoke-virtual {p0, v0}, Lcom/tkay/basead/ui/AdTextView;->setTextColor(I)V

    .line 39
    invoke-virtual {p1}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v0

    const-string v1, "basead_ad_text"

    const-string v2, "string"

    invoke-static {p1, v1, v2}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v1

    invoke-virtual {v0, v1}, Landroid/content/res/Resources;->getString(I)Ljava/lang/String;

    move-result-object v0

    .line 40
    invoke-virtual {p0, v0}, Lcom/tkay/basead/ui/AdTextView;->setText(Ljava/lang/CharSequence;)V

    const/high16 v0, 0x41000000    # 8.0f

    .line 41
    invoke-virtual {p0, v0}, Lcom/tkay/basead/ui/AdTextView;->setTextSize(F)V

    const/16 v0, 0x11

    .line 42
    invoke-virtual {p0, v0}, Lcom/tkay/basead/ui/AdTextView;->setGravity(I)V

    const/high16 v0, 0x40400000    # 3.0f

    .line 43
    invoke-static {p1, v0}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;F)I

    move-result v1

    invoke-static {p1, v0}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;F)I

    move-result p1

    const/4 v0, 0x0

    invoke-virtual {p0, v1, v0, p1, v0}, Lcom/tkay/basead/ui/AdTextView;->setPadding(IIII)V

    return-void
.end method
