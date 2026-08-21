.class public Lcom/sigmob/sdk/nativead/m;
.super Landroid/view/ViewGroup;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/sigmob/sdk/nativead/m$b;,
        Lcom/sigmob/sdk/nativead/m$a;,
        Lcom/sigmob/sdk/nativead/m$d;,
        Lcom/sigmob/sdk/nativead/m$c;,
        Lcom/sigmob/sdk/nativead/m$e;
    }
.end annotation


# instance fields
.field private final a:I

.field private final b:I

.field private final c:I

.field private final d:I

.field private final e:F

.field private final f:F

.field private final g:F

.field private final h:F

.field private final i:F

.field private j:I

.field private k:I

.field private l:Z

.field private m:I

.field private n:I

.field private o:F

.field private p:I

.field private q:I

.field private r:I

.field private s:I

.field private t:Z

.field private u:Z

.field private v:[F

.field private w:Lcom/sigmob/sdk/nativead/m$e;

.field private x:Lcom/sigmob/sdk/nativead/m$a;

.field private y:I


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 1

    const/4 v0, 0x0

    invoke-direct {p0, p1, v0}, Lcom/sigmob/sdk/nativead/m;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 1

    const/4 v0, 0x0

    invoke-direct {p0, p1, p2, v0}, Lcom/sigmob/sdk/nativead/m;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V
    .locals 3

    invoke-direct {p0, p1, p2, p3}, Landroid/view/ViewGroup;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V

    const/high16 p2, -0x1000000

    iput p2, p0, Lcom/sigmob/sdk/nativead/m;->a:I

    const-string p3, "#EEEEEE"

    invoke-static {p3}, Landroid/graphics/Color;->parseColor(Ljava/lang/String;)I

    move-result p3

    iput p3, p0, Lcom/sigmob/sdk/nativead/m;->b:I

    const/4 p3, -0x1

    iput p3, p0, Lcom/sigmob/sdk/nativead/m;->c:I

    const-string v0, "#FE7E03"

    invoke-static {v0}, Landroid/graphics/Color;->parseColor(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/sigmob/sdk/nativead/m;->d:I

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/sigmob/sdk/nativead/m;->u:Z

    const/16 v1, 0x8

    new-array v1, v1, [F

    fill-array-data v1, :array_0

    iput-object v1, p0, Lcom/sigmob/sdk/nativead/m;->v:[F

    new-instance v1, Lcom/sigmob/sdk/nativead/m$a;

    invoke-direct {v1, p0}, Lcom/sigmob/sdk/nativead/m$a;-><init>(Lcom/sigmob/sdk/nativead/m;)V

    iput-object v1, p0, Lcom/sigmob/sdk/nativead/m;->x:Lcom/sigmob/sdk/nativead/m$a;

    invoke-virtual {p1}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v1

    invoke-virtual {v1}, Landroid/content/res/Resources;->getDisplayMetrics()Landroid/util/DisplayMetrics;

    move-result-object v1

    iget v1, v1, Landroid/util/DisplayMetrics;->widthPixels:I

    invoke-virtual {p1}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object p1

    invoke-virtual {p1}, Landroid/content/res/Resources;->getDisplayMetrics()Landroid/util/DisplayMetrics;

    move-result-object p1

    iget p1, p1, Landroid/util/DisplayMetrics;->heightPixels:I

    const/high16 v2, 0x42c80000    # 100.0f

    invoke-direct {p0, v2}, Lcom/sigmob/sdk/nativead/m;->a(F)F

    move-result v2

    float-to-int v2, v2

    if-le p1, v1, :cond_0

    sub-int/2addr v1, v2

    div-int/lit8 v1, v1, 0x3

    iput v1, p0, Lcom/sigmob/sdk/nativead/m;->y:I

    goto :goto_0

    :cond_0
    sub-int/2addr p1, v2

    div-int/lit8 p1, p1, 0x3

    iput p1, p0, Lcom/sigmob/sdk/nativead/m;->y:I

    :goto_0
    const/high16 p1, 0x41500000    # 13.0f

    invoke-direct {p0, p1}, Lcom/sigmob/sdk/nativead/m;->b(F)I

    move-result p1

    int-to-float p1, p1

    iput p1, p0, Lcom/sigmob/sdk/nativead/m;->e:F

    const/high16 p1, 0x41200000    # 10.0f

    invoke-direct {p0, p1}, Lcom/sigmob/sdk/nativead/m;->a(F)F

    move-result v1

    iput v1, p0, Lcom/sigmob/sdk/nativead/m;->f:F

    invoke-direct {p0, p1}, Lcom/sigmob/sdk/nativead/m;->a(F)F

    move-result v1

    iput v1, p0, Lcom/sigmob/sdk/nativead/m;->g:F

    invoke-direct {p0, p1}, Lcom/sigmob/sdk/nativead/m;->a(F)F

    move-result p1

    iput p1, p0, Lcom/sigmob/sdk/nativead/m;->h:F

    const/high16 p1, 0x40a00000    # 5.0f

    invoke-direct {p0, p1}, Lcom/sigmob/sdk/nativead/m;->a(F)F

    move-result p1

    iput p1, p0, Lcom/sigmob/sdk/nativead/m;->i:F

    iput p2, p0, Lcom/sigmob/sdk/nativead/m;->j:I

    iget p2, p0, Lcom/sigmob/sdk/nativead/m;->b:I

    iput p2, p0, Lcom/sigmob/sdk/nativead/m;->k:I

    iput p3, p0, Lcom/sigmob/sdk/nativead/m;->m:I

    iget p2, p0, Lcom/sigmob/sdk/nativead/m;->d:I

    iput p2, p0, Lcom/sigmob/sdk/nativead/m;->n:I

    iget p2, p0, Lcom/sigmob/sdk/nativead/m;->e:F

    iput p2, p0, Lcom/sigmob/sdk/nativead/m;->o:F

    iget p2, p0, Lcom/sigmob/sdk/nativead/m;->f:F

    float-to-int p2, p2

    iput p2, p0, Lcom/sigmob/sdk/nativead/m;->p:I

    iget p2, p0, Lcom/sigmob/sdk/nativead/m;->g:F

    float-to-int p2, p2

    iput p2, p0, Lcom/sigmob/sdk/nativead/m;->q:I

    iget p2, p0, Lcom/sigmob/sdk/nativead/m;->h:F

    float-to-int p2, p2

    iput p2, p0, Lcom/sigmob/sdk/nativead/m;->r:I

    float-to-int p1, p1

    iput p1, p0, Lcom/sigmob/sdk/nativead/m;->s:I

    iput-boolean v0, p0, Lcom/sigmob/sdk/nativead/m;->t:Z

    const/4 p1, 0x1

    iput-boolean p1, p0, Lcom/sigmob/sdk/nativead/m;->l:Z

    return-void

    :array_0
    .array-data 4
        0x0
        0x0
        0x0
        0x0
        0x0
        0x0
        0x0
        0x0
    .end array-data
.end method

.method private a(F)F
    .locals 2

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/m;->getResources()Landroid/content/res/Resources;

    move-result-object v0

    invoke-virtual {v0}, Landroid/content/res/Resources;->getDisplayMetrics()Landroid/util/DisplayMetrics;

    move-result-object v0

    const/4 v1, 0x1

    invoke-static {v1, p1, v0}, Landroid/util/TypedValue;->applyDimension(IFLandroid/util/DisplayMetrics;)F

    move-result p1

    return p1
.end method

.method private a(Ljava/lang/CharSequence;)V
    .locals 2

    new-instance v0, Lcom/sigmob/sdk/nativead/m$b;

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/m;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-direct {v0, p0, v1, p1}, Lcom/sigmob/sdk/nativead/m$b;-><init>(Lcom/sigmob/sdk/nativead/m;Landroid/content/Context;Ljava/lang/CharSequence;)V

    iget-object p1, p0, Lcom/sigmob/sdk/nativead/m;->x:Lcom/sigmob/sdk/nativead/m$a;

    invoke-virtual {v0, p1}, Lcom/sigmob/sdk/nativead/m$b;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    invoke-virtual {p0, v0}, Lcom/sigmob/sdk/nativead/m;->addView(Landroid/view/View;)V

    return-void
.end method

.method static synthetic a(Lcom/sigmob/sdk/nativead/m;)Z
    .locals 0

    iget-boolean p0, p0, Lcom/sigmob/sdk/nativead/m;->l:Z

    return p0
.end method

.method static synthetic a(Lcom/sigmob/sdk/nativead/m;Z)Z
    .locals 0

    iput-boolean p1, p0, Lcom/sigmob/sdk/nativead/m;->u:Z

    return p1
.end method

.method private b(F)I
    .locals 2

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/m;->getResources()Landroid/content/res/Resources;

    move-result-object v0

    invoke-virtual {v0}, Landroid/content/res/Resources;->getDisplayMetrics()Landroid/util/DisplayMetrics;

    move-result-object v0

    const/4 v1, 0x2

    invoke-static {v1, p1, v0}, Landroid/util/TypedValue;->applyDimension(IFLandroid/util/DisplayMetrics;)F

    move-result p1

    float-to-int p1, p1

    return p1
.end method

.method static synthetic b(Lcom/sigmob/sdk/nativead/m;)Z
    .locals 0

    iget-boolean p0, p0, Lcom/sigmob/sdk/nativead/m;->t:Z

    return p0
.end method

.method static synthetic c(Lcom/sigmob/sdk/nativead/m;)Lcom/sigmob/sdk/nativead/m$e;
    .locals 0

    iget-object p0, p0, Lcom/sigmob/sdk/nativead/m;->w:Lcom/sigmob/sdk/nativead/m$e;

    return-object p0
.end method

.method static synthetic d(Lcom/sigmob/sdk/nativead/m;)I
    .locals 0

    iget p0, p0, Lcom/sigmob/sdk/nativead/m;->r:I

    return p0
.end method

.method static synthetic e(Lcom/sigmob/sdk/nativead/m;)I
    .locals 0

    iget p0, p0, Lcom/sigmob/sdk/nativead/m;->s:I

    return p0
.end method

.method static synthetic f(Lcom/sigmob/sdk/nativead/m;)I
    .locals 0

    iget p0, p0, Lcom/sigmob/sdk/nativead/m;->y:I

    return p0
.end method

.method static synthetic g(Lcom/sigmob/sdk/nativead/m;)F
    .locals 0

    iget p0, p0, Lcom/sigmob/sdk/nativead/m;->o:F

    return p0
.end method

.method static synthetic h(Lcom/sigmob/sdk/nativead/m;)I
    .locals 0

    iget p0, p0, Lcom/sigmob/sdk/nativead/m;->n:I

    return p0
.end method

.method static synthetic i(Lcom/sigmob/sdk/nativead/m;)I
    .locals 0

    iget p0, p0, Lcom/sigmob/sdk/nativead/m;->m:I

    return p0
.end method

.method static synthetic j(Lcom/sigmob/sdk/nativead/m;)I
    .locals 0

    iget p0, p0, Lcom/sigmob/sdk/nativead/m;->k:I

    return p0
.end method

.method static synthetic k(Lcom/sigmob/sdk/nativead/m;)I
    .locals 0

    iget p0, p0, Lcom/sigmob/sdk/nativead/m;->j:I

    return p0
.end method

.method static synthetic l(Lcom/sigmob/sdk/nativead/m;)Z
    .locals 0

    iget-boolean p0, p0, Lcom/sigmob/sdk/nativead/m;->u:Z

    return p0
.end method

.method static synthetic m(Lcom/sigmob/sdk/nativead/m;)[F
    .locals 0

    iget-object p0, p0, Lcom/sigmob/sdk/nativead/m;->v:[F

    return-object p0
.end method


# virtual methods
.method public a(I)I
    .locals 1

    const/4 v0, 0x1

    invoke-virtual {p0, p1, v0}, Lcom/sigmob/sdk/nativead/m;->a(IZ)I

    move-result p1

    return p1
.end method

.method public a(IZ)I
    .locals 1

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/m;->getChildCount()I

    move-result v0

    if-lt p1, v0, :cond_0

    const/4 p1, -0x1

    return p1

    :cond_0
    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/nativead/m;->b(I)Lcom/sigmob/sdk/nativead/m$b;

    move-result-object v0

    invoke-virtual {v0, p2}, Lcom/sigmob/sdk/nativead/m$b;->a(Z)V

    return p1
.end method

.method public a(Ljava/lang/String;)I
    .locals 2

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/m;->getAllItemSelectedTextWithListArray()Ljava/util/ArrayList;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-interface {v0, p1}, Ljava/util/List;->contains(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {v0, p1}, Ljava/util/List;->indexOf(Ljava/lang/Object;)I

    move-result p1

    goto :goto_0

    :cond_0
    const/4 p1, -0x1

    :goto_0
    return p1
.end method

.method public a()V
    .locals 4

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/m;->getChildCount()I

    move-result v0

    const/4 v1, 0x0

    :goto_0
    if-ge v1, v0, :cond_0

    invoke-virtual {p0, v1}, Lcom/sigmob/sdk/nativead/m;->b(I)Lcom/sigmob/sdk/nativead/m$b;

    move-result-object v2

    const/4 v3, 0x1

    invoke-virtual {v2, v3}, Lcom/sigmob/sdk/nativead/m$b;->a(Z)V

    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    :cond_0
    return-void
.end method

.method public a(ILjava/lang/String;)V
    .locals 1

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/m;->getChildCount()I

    move-result v0

    if-lt p1, v0, :cond_0

    return-void

    :cond_0
    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/nativead/m;->b(I)Lcom/sigmob/sdk/nativead/m$b;

    move-result-object p1

    invoke-virtual {p1, p2}, Lcom/sigmob/sdk/nativead/m$b;->setText(Ljava/lang/CharSequence;)V

    return-void
.end method

.method protected b(I)Lcom/sigmob/sdk/nativead/m$b;
    .locals 1

    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/nativead/m;->getChildAt(I)Landroid/view/View;

    move-result-object v0

    if-nez v0, :cond_0

    const/4 p1, 0x0

    goto :goto_0

    :cond_0
    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/nativead/m;->getChildAt(I)Landroid/view/View;

    move-result-object p1

    check-cast p1, Lcom/sigmob/sdk/nativead/m$b;

    :goto_0
    return-object p1
.end method

.method public b()V
    .locals 5

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/m;->getChildCount()I

    move-result v0

    const/4 v1, 0x0

    move v2, v1

    :goto_0
    if-ge v2, v0, :cond_1

    invoke-virtual {p0, v2}, Lcom/sigmob/sdk/nativead/m;->b(I)Lcom/sigmob/sdk/nativead/m$b;

    move-result-object v3

    if-eqz v3, :cond_0

    invoke-static {v3}, Lcom/sigmob/sdk/nativead/m$b;->a(Lcom/sigmob/sdk/nativead/m$b;)Z

    move-result v4

    if-eqz v4, :cond_0

    invoke-virtual {v3, v1}, Lcom/sigmob/sdk/nativead/m$b;->a(Z)V

    :cond_0
    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    :cond_1
    return-void
.end method

.method public c()V
    .locals 5

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/m;->getChildCount()I

    move-result v0

    const/4 v1, 0x0

    move v2, v1

    :goto_0
    if-ge v2, v0, :cond_1

    invoke-virtual {p0, v2}, Lcom/sigmob/sdk/nativead/m;->b(I)Lcom/sigmob/sdk/nativead/m$b;

    move-result-object v3

    if-eqz v3, :cond_0

    invoke-static {v3}, Lcom/sigmob/sdk/nativead/m$b;->a(Lcom/sigmob/sdk/nativead/m$b;)Z

    move-result v4

    if-eqz v4, :cond_0

    invoke-virtual {v3, v1}, Lcom/sigmob/sdk/nativead/m$b;->a(Z)V

    :cond_0
    invoke-virtual {v3, v1}, Lcom/sigmob/sdk/nativead/m$b;->setClickable(Z)V

    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    :cond_1
    return-void
.end method

.method public c(I)V
    .locals 1

    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/nativead/m;->b(I)Lcom/sigmob/sdk/nativead/m$b;

    move-result-object p1

    if-eqz p1, :cond_0

    invoke-static {p1}, Lcom/sigmob/sdk/nativead/m$b;->a(Lcom/sigmob/sdk/nativead/m$b;)Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 v0, 0x0

    invoke-virtual {p1, v0}, Lcom/sigmob/sdk/nativead/m$b;->a(Z)V

    :cond_0
    return-void
.end method

.method public d(I)Z
    .locals 0

    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/nativead/m;->b(I)Lcom/sigmob/sdk/nativead/m$b;

    move-result-object p1

    if-eqz p1, :cond_0

    invoke-static {p1}, Lcom/sigmob/sdk/nativead/m$b;->a(Lcom/sigmob/sdk/nativead/m$b;)Z

    move-result p1

    if-eqz p1, :cond_0

    const/4 p1, 0x1

    goto :goto_0

    :cond_0
    const/4 p1, 0x0

    :goto_0
    return p1
.end method

.method public generateLayoutParams(Landroid/util/AttributeSet;)Landroid/view/ViewGroup$LayoutParams;
    .locals 2

    new-instance v0, Lcom/sigmob/sdk/nativead/m$c;

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/m;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-direct {v0, v1, p1}, Lcom/sigmob/sdk/nativead/m$c;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    return-object v0
.end method

.method public getAllItemSelectedIndex()Ljava/util/ArrayList;
    .locals 4
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/ArrayList<",
            "Ljava/lang/Integer;",
            ">;"
        }
    .end annotation

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/m;->getChildCount()I

    move-result v0

    new-instance v1, Ljava/util/ArrayList;

    invoke-direct {v1}, Ljava/util/ArrayList;-><init>()V

    const/4 v2, 0x0

    :goto_0
    if-ge v2, v0, :cond_1

    invoke-virtual {p0, v2}, Lcom/sigmob/sdk/nativead/m;->b(I)Lcom/sigmob/sdk/nativead/m$b;

    move-result-object v3

    invoke-static {v3}, Lcom/sigmob/sdk/nativead/m$b;->a(Lcom/sigmob/sdk/nativead/m$b;)Z

    move-result v3

    if-eqz v3, :cond_0

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    invoke-virtual {v1, v3}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    :cond_0
    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    :cond_1
    return-object v1
.end method

.method public getAllItemSelectedTextWithListArray()Ljava/util/ArrayList;
    .locals 5
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/ArrayList<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/m;->getChildCount()I

    move-result v0

    new-instance v1, Ljava/util/ArrayList;

    invoke-direct {v1}, Ljava/util/ArrayList;-><init>()V

    const/4 v2, 0x0

    :goto_0
    if-ge v2, v0, :cond_1

    invoke-virtual {p0, v2}, Lcom/sigmob/sdk/nativead/m;->b(I)Lcom/sigmob/sdk/nativead/m$b;

    move-result-object v3

    invoke-static {v3}, Lcom/sigmob/sdk/nativead/m$b;->a(Lcom/sigmob/sdk/nativead/m$b;)Z

    move-result v4

    if-eqz v4, :cond_0

    invoke-virtual {v3}, Lcom/sigmob/sdk/nativead/m$b;->getText()Ljava/lang/CharSequence;

    move-result-object v3

    invoke-interface {v3}, Ljava/lang/CharSequence;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v1, v3}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    :cond_0
    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    :cond_1
    return-object v1
.end method

.method public getAllItemSelectedTextWithStringArray()[Ljava/lang/String;
    .locals 5

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/m;->getChildCount()I

    move-result v0

    new-instance v1, Ljava/util/ArrayList;

    invoke-direct {v1}, Ljava/util/ArrayList;-><init>()V

    const/4 v2, 0x0

    :goto_0
    if-ge v2, v0, :cond_1

    invoke-virtual {p0, v2}, Lcom/sigmob/sdk/nativead/m;->b(I)Lcom/sigmob/sdk/nativead/m$b;

    move-result-object v3

    invoke-static {v3}, Lcom/sigmob/sdk/nativead/m$b;->a(Lcom/sigmob/sdk/nativead/m$b;)Z

    move-result v4

    if-eqz v4, :cond_0

    invoke-virtual {v3}, Lcom/sigmob/sdk/nativead/m$b;->getText()Ljava/lang/CharSequence;

    move-result-object v3

    invoke-interface {v3}, Ljava/lang/CharSequence;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-interface {v1, v3}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    :cond_0
    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    :cond_1
    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result v0

    new-array v0, v0, [Ljava/lang/String;

    invoke-interface {v1, v0}, Ljava/util/List;->toArray([Ljava/lang/Object;)[Ljava/lang/Object;

    move-result-object v0

    check-cast v0, [Ljava/lang/String;

    return-object v0
.end method

.method public getAllItemText()[Ljava/lang/String;
    .locals 4

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/m;->getChildCount()I

    move-result v0

    new-instance v1, Ljava/util/ArrayList;

    invoke-direct {v1}, Ljava/util/ArrayList;-><init>()V

    const/4 v2, 0x0

    :goto_0
    if-ge v2, v0, :cond_0

    invoke-virtual {p0, v2}, Lcom/sigmob/sdk/nativead/m;->b(I)Lcom/sigmob/sdk/nativead/m$b;

    move-result-object v3

    invoke-virtual {v3}, Lcom/sigmob/sdk/nativead/m$b;->getText()Ljava/lang/CharSequence;

    move-result-object v3

    invoke-interface {v3}, Ljava/lang/CharSequence;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-interface {v1, v3}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    :cond_0
    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result v0

    new-array v0, v0, [Ljava/lang/String;

    invoke-interface {v1, v0}, Ljava/util/List;->toArray([Ljava/lang/Object;)[Ljava/lang/Object;

    move-result-object v0

    check-cast v0, [Ljava/lang/String;

    return-object v0
.end method

.method public getSelectedIndex()I
    .locals 3

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/m;->getChildCount()I

    move-result v0

    const/4 v1, 0x0

    :goto_0
    if-ge v1, v0, :cond_1

    invoke-virtual {p0, v1}, Lcom/sigmob/sdk/nativead/m;->b(I)Lcom/sigmob/sdk/nativead/m$b;

    move-result-object v2

    invoke-static {v2}, Lcom/sigmob/sdk/nativead/m$b;->a(Lcom/sigmob/sdk/nativead/m$b;)Z

    move-result v2

    if-eqz v2, :cond_0

    return v1

    :cond_0
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    :cond_1
    const/4 v0, -0x1

    return v0
.end method

.method protected getSelectedItem()Lcom/sigmob/sdk/nativead/m$b;
    .locals 2

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/m;->getSelectedIndex()I

    move-result v0

    const/4 v1, -0x1

    if-eq v0, v1, :cond_0

    invoke-virtual {p0, v0}, Lcom/sigmob/sdk/nativead/m;->b(I)Lcom/sigmob/sdk/nativead/m$b;

    move-result-object v0

    return-object v0

    :cond_0
    const/4 v0, 0x0

    return-object v0
.end method

.method protected getSelectedItemText()Ljava/lang/String;
    .locals 1

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/m;->getSelectedItem()Lcom/sigmob/sdk/nativead/m$b;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/m;->getSelectedItem()Lcom/sigmob/sdk/nativead/m$b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/sigmob/sdk/nativead/m$b;->getText()Ljava/lang/CharSequence;

    move-result-object v0

    invoke-interface {v0}, Ljava/lang/CharSequence;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0

    :cond_0
    const/4 v0, 0x0

    return-object v0
.end method

.method protected onLayout(ZIIII)V
    .locals 7

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/m;->getPaddingLeft()I

    move-result p1

    sub-int/2addr p4, p2

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/m;->getPaddingRight()I

    move-result p2

    sub-int/2addr p4, p2

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/m;->getPaddingTop()I

    move-result p2

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/m;->getPaddingBottom()I

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/m;->getChildCount()I

    move-result p3

    const/4 p5, 0x0

    move v1, p1

    move v0, p5

    :goto_0
    if-ge p5, p3, :cond_2

    invoke-virtual {p0, p5}, Lcom/sigmob/sdk/nativead/m;->getChildAt(I)Landroid/view/View;

    move-result-object v2

    invoke-virtual {v2}, Landroid/view/View;->getMeasuredWidth()I

    move-result v3

    invoke-virtual {v2}, Landroid/view/View;->getMeasuredHeight()I

    move-result v4

    invoke-virtual {v2}, Landroid/view/View;->getVisibility()I

    move-result v5

    const/16 v6, 0x8

    if-eq v5, v6, :cond_1

    add-int v5, v1, v3

    if-le v5, p4, :cond_0

    iget v1, p0, Lcom/sigmob/sdk/nativead/m;->q:I

    add-int/2addr v0, v1

    add-int/2addr p2, v0

    move v1, p1

    move v0, v4

    goto :goto_1

    :cond_0
    invoke-static {v0, v4}, Ljava/lang/Math;->max(II)I

    move-result v0

    :goto_1
    add-int v5, v1, v3

    add-int/2addr v4, p2

    invoke-virtual {v2, v1, p2, v5, v4}, Landroid/view/View;->layout(IIII)V

    iget v2, p0, Lcom/sigmob/sdk/nativead/m;->p:I

    add-int/2addr v3, v2

    add-int/2addr v1, v3

    :cond_1
    add-int/lit8 p5, p5, 0x1

    goto :goto_0

    :cond_2
    return-void
.end method

.method protected onMeasure(II)V
    .locals 12

    invoke-static {p1}, Landroid/view/View$MeasureSpec;->getMode(I)I

    move-result v0

    invoke-static {p2}, Landroid/view/View$MeasureSpec;->getMode(I)I

    move-result v1

    invoke-static {p1}, Landroid/view/View$MeasureSpec;->getSize(I)I

    move-result v2

    invoke-static {p2}, Landroid/view/View$MeasureSpec;->getSize(I)I

    move-result v3

    invoke-virtual {p0, p1, p2}, Lcom/sigmob/sdk/nativead/m;->measureChildren(II)V

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/m;->getChildCount()I

    move-result p1

    const/4 p2, 0x0

    move v4, p2

    move v5, v4

    move v6, v5

    move v7, v6

    :goto_0
    if-ge p2, p1, :cond_2

    invoke-virtual {p0, p2}, Lcom/sigmob/sdk/nativead/m;->getChildAt(I)Landroid/view/View;

    move-result-object v8

    invoke-virtual {v8}, Landroid/view/View;->getMeasuredWidth()I

    move-result v9

    invoke-virtual {v8}, Landroid/view/View;->getMeasuredHeight()I

    move-result v10

    invoke-virtual {v8}, Landroid/view/View;->getVisibility()I

    move-result v8

    const/16 v11, 0x8

    if-eq v8, v11, :cond_1

    add-int/2addr v7, v9

    if-le v7, v2, :cond_0

    iget v7, p0, Lcom/sigmob/sdk/nativead/m;->q:I

    add-int/2addr v5, v7

    add-int/2addr v4, v5

    add-int/lit8 v6, v6, 0x1

    goto :goto_1

    :cond_0
    invoke-static {v5, v10}, Ljava/lang/Math;->max(II)I

    move-result v10

    move v9, v7

    :goto_1
    iget v5, p0, Lcom/sigmob/sdk/nativead/m;->p:I

    add-int/2addr v9, v5

    move v7, v9

    move v5, v10

    :cond_1
    add-int/lit8 p2, p2, 0x1

    goto :goto_0

    :cond_2
    add-int/2addr v4, v5

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/m;->getPaddingTop()I

    move-result p1

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/m;->getPaddingBottom()I

    move-result p2

    add-int/2addr p1, p2

    add-int/2addr v4, p1

    if-nez v6, :cond_3

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/m;->getPaddingLeft()I

    move-result p1

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/m;->getPaddingRight()I

    move-result p2

    add-int/2addr p1, p2

    add-int/2addr v7, p1

    goto :goto_2

    :cond_3
    move v7, v2

    :goto_2
    const/high16 p1, 0x40000000    # 2.0f

    if-ne v0, p1, :cond_4

    goto :goto_3

    :cond_4
    move v2, v7

    :goto_3
    if-ne v1, p1, :cond_5

    goto :goto_4

    :cond_5
    move v3, v4

    :goto_4
    invoke-virtual {p0, v2, v3}, Lcom/sigmob/sdk/nativead/m;->setMeasuredDimension(II)V

    return-void
.end method

.method public onRestoreInstanceState(Landroid/os/Parcelable;)V
    .locals 1

    instance-of v0, p1, Lcom/sigmob/sdk/nativead/m$d;

    if-nez v0, :cond_0

    invoke-super {p0, p1}, Landroid/view/ViewGroup;->onRestoreInstanceState(Landroid/os/Parcelable;)V

    return-void

    :cond_0
    check-cast p1, Lcom/sigmob/sdk/nativead/m$d;

    invoke-virtual {p1}, Lcom/sigmob/sdk/nativead/m$d;->getSuperState()Landroid/os/Parcelable;

    move-result-object v0

    invoke-super {p0, v0}, Landroid/view/ViewGroup;->onRestoreInstanceState(Landroid/os/Parcelable;)V

    iget-object v0, p1, Lcom/sigmob/sdk/nativead/m$d;->b:[Ljava/lang/String;

    invoke-virtual {p0, v0}, Lcom/sigmob/sdk/nativead/m;->setList([Ljava/lang/String;)V

    iget p1, p1, Lcom/sigmob/sdk/nativead/m$d;->c:I

    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/nativead/m;->b(I)Lcom/sigmob/sdk/nativead/m$b;

    move-result-object p1

    if-eqz p1, :cond_1

    const/4 v0, 0x1

    invoke-virtual {p1, v0}, Lcom/sigmob/sdk/nativead/m$b;->a(Z)V

    :cond_1
    return-void
.end method

.method public onSaveInstanceState()Landroid/os/Parcelable;
    .locals 2

    invoke-super {p0}, Landroid/view/ViewGroup;->onSaveInstanceState()Landroid/os/Parcelable;

    move-result-object v0

    new-instance v1, Lcom/sigmob/sdk/nativead/m$d;

    invoke-direct {v1, v0}, Lcom/sigmob/sdk/nativead/m$d;-><init>(Landroid/os/Parcelable;)V

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/m;->getAllItemText()[Ljava/lang/String;

    move-result-object v0

    iput-object v0, v1, Lcom/sigmob/sdk/nativead/m$d;->b:[Ljava/lang/String;

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/m;->getSelectedIndex()I

    move-result v0

    iput v0, v1, Lcom/sigmob/sdk/nativead/m$d;->c:I

    return-object v1
.end method

.method public setIndexListItemSelected(Ljava/util/List;)V
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Ljava/lang/Integer;",
            ">;)V"
        }
    .end annotation

    if-eqz p1, :cond_2

    invoke-interface {p1}, Ljava/util/List;->isEmpty()Z

    move-result v0

    if-nez v0, :cond_2

    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v0

    if-nez v0, :cond_0

    goto :goto_1

    :cond_0
    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/m;->getChildCount()I

    move-result v0

    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v1

    if-le v1, v0, :cond_1

    return-void

    :cond_1
    const/4 v0, 0x0

    :goto_0
    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v1

    if-ge v0, v1, :cond_2

    invoke-virtual {p0, v0}, Lcom/sigmob/sdk/nativead/m;->b(I)Lcom/sigmob/sdk/nativead/m$b;

    move-result-object v1

    const/4 v2, 0x1

    invoke-virtual {v1, v2}, Lcom/sigmob/sdk/nativead/m$b;->a(Z)V

    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    :cond_2
    :goto_1
    return-void
.end method

.method public setList(Ljava/util/List;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v0

    new-array v0, v0, [Ljava/lang/String;

    invoke-interface {p1, v0}, Ljava/util/List;->toArray([Ljava/lang/Object;)[Ljava/lang/Object;

    move-result-object p1

    check-cast p1, [Ljava/lang/String;

    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/nativead/m;->setList([Ljava/lang/String;)V

    return-void
.end method

.method public varargs setList([Ljava/lang/String;)V
    .locals 3

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/m;->removeAllViews()V

    array-length v0, p1

    const/4 v1, 0x0

    :goto_0
    if-ge v1, v0, :cond_0

    aget-object v2, p1, v1

    invoke-direct {p0, v2}, Lcom/sigmob/sdk/nativead/m;->a(Ljava/lang/CharSequence;)V

    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    :cond_0
    return-void
.end method

.method public setOnItemClickListener(Lcom/sigmob/sdk/nativead/m$e;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/nativead/m;->w:Lcom/sigmob/sdk/nativead/m$e;

    return-void
.end method
