.class public final Lcom/tkay/basead/ui/b;
.super Ljava/lang/Object;


# instance fields
.field private a:Landroid/view/ViewGroup;

.field private b:Landroid/widget/ImageView;

.field private c:I


# direct methods
.method public constructor <init>(Landroid/view/ViewGroup;)V
    .locals 3

    .line 29
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 30
    iput-object p1, p0, Lcom/tkay/basead/ui/b;->a:Landroid/view/ViewGroup;

    .line 32
    new-instance p1, Landroid/widget/ImageView;

    iget-object v0, p0, Lcom/tkay/basead/ui/b;->a:Landroid/view/ViewGroup;

    invoke-virtual {v0}, Landroid/view/ViewGroup;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-direct {p1, v0}, Landroid/widget/ImageView;-><init>(Landroid/content/Context;)V

    iput-object p1, p0, Lcom/tkay/basead/ui/b;->b:Landroid/widget/ImageView;

    .line 33
    iget-object v0, p0, Lcom/tkay/basead/ui/b;->a:Landroid/view/ViewGroup;

    invoke-virtual {v0}, Landroid/view/ViewGroup;->getContext()Landroid/content/Context;

    move-result-object v0

    const-string v1, "myoffer_loading_id"

    const-string v2, "id"

    invoke-static {v0, v1, v2}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p1, v0}, Landroid/widget/ImageView;->setId(I)V

    .line 34
    iget-object p1, p0, Lcom/tkay/basead/ui/b;->b:Landroid/widget/ImageView;

    iget-object v0, p0, Lcom/tkay/basead/ui/b;->a:Landroid/view/ViewGroup;

    invoke-virtual {v0}, Landroid/view/ViewGroup;->getContext()Landroid/content/Context;

    move-result-object v0

    const-string v1, "myoffer_loading"

    const-string v2, "drawable"

    invoke-static {v0, v1, v2}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p1, v0}, Landroid/widget/ImageView;->setImageResource(I)V

    .line 36
    iget-object p1, p0, Lcom/tkay/basead/ui/b;->a:Landroid/view/ViewGroup;

    invoke-virtual {p1}, Landroid/view/ViewGroup;->getResources()Landroid/content/res/Resources;

    move-result-object p1

    invoke-virtual {p1}, Landroid/content/res/Resources;->getDisplayMetrics()Landroid/util/DisplayMetrics;

    move-result-object p1

    const/4 v0, 0x1

    const/high16 v1, 0x42480000    # 50.0f

    invoke-static {v0, v1, p1}, Landroid/util/TypedValue;->applyDimension(IFLandroid/util/DisplayMetrics;)F

    move-result p1

    float-to-int p1, p1

    iput p1, p0, Lcom/tkay/basead/ui/b;->c:I

    return-void
.end method

.method static synthetic a(Lcom/tkay/basead/ui/b;)Landroid/view/ViewGroup;
    .locals 0

    .line 23
    iget-object p0, p0, Lcom/tkay/basead/ui/b;->a:Landroid/view/ViewGroup;

    return-object p0
.end method

.method static synthetic b(Lcom/tkay/basead/ui/b;)I
    .locals 0

    .line 23
    iget p0, p0, Lcom/tkay/basead/ui/b;->c:I

    return p0
.end method

.method static synthetic c(Lcom/tkay/basead/ui/b;)Landroid/widget/ImageView;
    .locals 0

    .line 23
    iget-object p0, p0, Lcom/tkay/basead/ui/b;->b:Landroid/widget/ImageView;

    return-object p0
.end method

.method private d()V
    .locals 2

    .line 44
    iget-object v0, p0, Lcom/tkay/basead/ui/b;->b:Landroid/widget/ImageView;

    if-eqz v0, :cond_0

    .line 45
    iget-object v1, p0, Lcom/tkay/basead/ui/b;->a:Landroid/view/ViewGroup;

    invoke-virtual {v1, v0}, Landroid/view/ViewGroup;->removeView(Landroid/view/View;)V

    .line 48
    :cond_0
    iget-object v0, p0, Lcom/tkay/basead/ui/b;->a:Landroid/view/ViewGroup;

    new-instance v1, Lcom/tkay/basead/ui/b$1;

    invoke-direct {v1, p0}, Lcom/tkay/basead/ui/b$1;-><init>(Lcom/tkay/basead/ui/b;)V

    invoke-virtual {v0, v1}, Landroid/view/ViewGroup;->post(Ljava/lang/Runnable;)Z

    return-void
.end method


# virtual methods
.method public final a()V
    .locals 3

    .line 40
    iget-object v0, p0, Lcom/tkay/basead/ui/b;->a:Landroid/view/ViewGroup;

    invoke-virtual {v0}, Landroid/view/ViewGroup;->getResources()Landroid/content/res/Resources;

    move-result-object v0

    invoke-virtual {v0}, Landroid/content/res/Resources;->getDisplayMetrics()Landroid/util/DisplayMetrics;

    move-result-object v0

    const/4 v1, 0x1

    const/high16 v2, 0x41f00000    # 30.0f

    invoke-static {v1, v2, v0}, Landroid/util/TypedValue;->applyDimension(IFLandroid/util/DisplayMetrics;)F

    move-result v0

    float-to-int v0, v0

    iput v0, p0, Lcom/tkay/basead/ui/b;->c:I

    return-void
.end method

.method public final b()V
    .locals 2

    .line 1044
    iget-object v0, p0, Lcom/tkay/basead/ui/b;->b:Landroid/widget/ImageView;

    if-eqz v0, :cond_0

    .line 1045
    iget-object v1, p0, Lcom/tkay/basead/ui/b;->a:Landroid/view/ViewGroup;

    invoke-virtual {v1, v0}, Landroid/view/ViewGroup;->removeView(Landroid/view/View;)V

    .line 1048
    :cond_0
    iget-object v0, p0, Lcom/tkay/basead/ui/b;->a:Landroid/view/ViewGroup;

    new-instance v1, Lcom/tkay/basead/ui/b$1;

    invoke-direct {v1, p0}, Lcom/tkay/basead/ui/b$1;-><init>(Lcom/tkay/basead/ui/b;)V

    invoke-virtual {v0, v1}, Landroid/view/ViewGroup;->post(Ljava/lang/Runnable;)Z

    .line 71
    iget-object v0, p0, Lcom/tkay/basead/ui/b;->b:Landroid/widget/ImageView;

    new-instance v1, Lcom/tkay/basead/ui/b$2;

    invoke-direct {v1, p0}, Lcom/tkay/basead/ui/b$2;-><init>(Lcom/tkay/basead/ui/b;)V

    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method public final c()V
    .locals 2

    .line 89
    iget-object v0, p0, Lcom/tkay/basead/ui/b;->b:Landroid/widget/ImageView;

    if-eqz v0, :cond_0

    .line 90
    iget-object v0, p0, Lcom/tkay/basead/ui/b;->a:Landroid/view/ViewGroup;

    new-instance v1, Lcom/tkay/basead/ui/b$3;

    invoke-direct {v1, p0}, Lcom/tkay/basead/ui/b$3;-><init>(Lcom/tkay/basead/ui/b;)V

    invoke-virtual {v0, v1}, Landroid/view/ViewGroup;->post(Ljava/lang/Runnable;)Z

    :cond_0
    return-void
.end method
