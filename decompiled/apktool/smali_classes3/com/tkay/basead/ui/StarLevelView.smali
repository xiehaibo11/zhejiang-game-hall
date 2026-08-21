.class public Lcom/tkay/basead/ui/StarLevelView;
.super Landroid/widget/ImageView;


# instance fields
.field a:Landroid/content/Context;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 1

    const/4 v0, 0x0

    .line 25
    invoke-direct {p0, p1, v0}, Lcom/tkay/basead/ui/StarLevelView;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    .line 26
    iput-object p1, p0, Lcom/tkay/basead/ui/StarLevelView;->a:Landroid/content/Context;

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 1

    const/4 v0, 0x0

    .line 20
    invoke-direct {p0, p1, p2, v0}, Lcom/tkay/basead/ui/StarLevelView;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V

    .line 21
    iput-object p1, p0, Lcom/tkay/basead/ui/StarLevelView;->a:Landroid/content/Context;

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V
    .locals 0

    .line 30
    invoke-direct {p0, p1, p2, p3}, Landroid/widget/ImageView;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V

    .line 31
    iput-object p1, p0, Lcom/tkay/basead/ui/StarLevelView;->a:Landroid/content/Context;

    return-void
.end method


# virtual methods
.method public setState(Z)V
    .locals 2

    const-string v0, "drawable"

    if-eqz p1, :cond_0

    .line 36
    invoke-virtual {p0}, Lcom/tkay/basead/ui/StarLevelView;->getContext()Landroid/content/Context;

    move-result-object p1

    const-string v1, "myoffer_splash_star"

    invoke-static {p1, v1, v0}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result p1

    invoke-virtual {p0, p1}, Lcom/tkay/basead/ui/StarLevelView;->setImageResource(I)V

    return-void

    .line 38
    :cond_0
    invoke-virtual {p0}, Lcom/tkay/basead/ui/StarLevelView;->getContext()Landroid/content/Context;

    move-result-object p1

    const-string v1, "myoffer_splash_star_gray"

    invoke-static {p1, v1, v0}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result p1

    invoke-virtual {p0, p1}, Lcom/tkay/basead/ui/StarLevelView;->setImageResource(I)V

    return-void
.end method
