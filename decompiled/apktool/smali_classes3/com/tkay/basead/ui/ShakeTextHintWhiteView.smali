.class public Lcom/tkay/basead/ui/ShakeTextHintWhiteView;
.super Lcom/tkay/basead/ui/BaseShakeView;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 0

    .line 15
    invoke-direct {p0, p1}, Lcom/tkay/basead/ui/BaseShakeView;-><init>(Landroid/content/Context;)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 0

    .line 19
    invoke-direct {p0, p1, p2}, Lcom/tkay/basead/ui/BaseShakeView;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V
    .locals 0

    .line 23
    invoke-direct {p0, p1, p2, p3}, Lcom/tkay/basead/ui/BaseShakeView;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;II)V
    .locals 0

    .line 28
    invoke-direct {p0, p1, p2, p3, p4}, Lcom/tkay/basead/ui/BaseShakeView;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;II)V

    return-void
.end method


# virtual methods
.method final a()V
    .locals 4

    const/4 v0, 0x0

    .line 33
    invoke-virtual {p0, v0}, Lcom/tkay/basead/ui/ShakeTextHintWhiteView;->setOrientation(I)V

    const/16 v0, 0x11

    .line 34
    invoke-virtual {p0, v0}, Lcom/tkay/basead/ui/ShakeTextHintWhiteView;->setGravity(I)V

    .line 35
    invoke-virtual {p0}, Lcom/tkay/basead/ui/ShakeTextHintWhiteView;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Landroid/view/LayoutInflater;->from(Landroid/content/Context;)Landroid/view/LayoutInflater;

    move-result-object v0

    invoke-virtual {p0}, Lcom/tkay/basead/ui/ShakeTextHintWhiteView;->getContext()Landroid/content/Context;

    move-result-object v1

    const-string v2, "myoffer_shake_text_hint_white"

    const-string v3, "layout"

    invoke-static {v1, v2, v3}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v1

    const/4 v2, 0x1

    invoke-virtual {v0, v1, p0, v2}, Landroid/view/LayoutInflater;->inflate(ILandroid/view/ViewGroup;Z)Landroid/view/View;

    .line 36
    invoke-virtual {p0}, Lcom/tkay/basead/ui/ShakeTextHintWhiteView;->getContext()Landroid/content/Context;

    move-result-object v0

    const/high16 v1, 0x40800000    # 4.0f

    invoke-static {v0, v1}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;F)I

    move-result v0

    .line 37
    invoke-virtual {p0, v0, v0, v0, v0}, Lcom/tkay/basead/ui/ShakeTextHintWhiteView;->setPadding(IIII)V

    return-void
.end method
