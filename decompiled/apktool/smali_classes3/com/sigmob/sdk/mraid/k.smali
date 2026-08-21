.class public Lcom/sigmob/sdk/mraid/k;
.super Ljava/lang/Object;


# instance fields
.field private final a:Landroid/content/Context;

.field private final b:Landroid/graphics/Rect;

.field private final c:Landroid/graphics/Rect;

.field private final d:Landroid/graphics/Rect;

.field private final e:Landroid/graphics/Rect;

.field private final f:Landroid/graphics/Rect;

.field private final g:Landroid/graphics/Rect;

.field private final h:Landroid/graphics/Rect;

.field private final i:Landroid/graphics/Rect;

.field private final j:F


# direct methods
.method public constructor <init>(Landroid/content/Context;F)V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p1

    iput-object p1, p0, Lcom/sigmob/sdk/mraid/k;->a:Landroid/content/Context;

    iput p2, p0, Lcom/sigmob/sdk/mraid/k;->j:F

    new-instance p1, Landroid/graphics/Rect;

    invoke-direct {p1}, Landroid/graphics/Rect;-><init>()V

    iput-object p1, p0, Lcom/sigmob/sdk/mraid/k;->b:Landroid/graphics/Rect;

    new-instance p1, Landroid/graphics/Rect;

    invoke-direct {p1}, Landroid/graphics/Rect;-><init>()V

    iput-object p1, p0, Lcom/sigmob/sdk/mraid/k;->c:Landroid/graphics/Rect;

    new-instance p1, Landroid/graphics/Rect;

    invoke-direct {p1}, Landroid/graphics/Rect;-><init>()V

    iput-object p1, p0, Lcom/sigmob/sdk/mraid/k;->d:Landroid/graphics/Rect;

    new-instance p1, Landroid/graphics/Rect;

    invoke-direct {p1}, Landroid/graphics/Rect;-><init>()V

    iput-object p1, p0, Lcom/sigmob/sdk/mraid/k;->e:Landroid/graphics/Rect;

    new-instance p1, Landroid/graphics/Rect;

    invoke-direct {p1}, Landroid/graphics/Rect;-><init>()V

    iput-object p1, p0, Lcom/sigmob/sdk/mraid/k;->f:Landroid/graphics/Rect;

    new-instance p1, Landroid/graphics/Rect;

    invoke-direct {p1}, Landroid/graphics/Rect;-><init>()V

    iput-object p1, p0, Lcom/sigmob/sdk/mraid/k;->g:Landroid/graphics/Rect;

    new-instance p1, Landroid/graphics/Rect;

    invoke-direct {p1}, Landroid/graphics/Rect;-><init>()V

    iput-object p1, p0, Lcom/sigmob/sdk/mraid/k;->h:Landroid/graphics/Rect;

    new-instance p1, Landroid/graphics/Rect;

    invoke-direct {p1}, Landroid/graphics/Rect;-><init>()V

    iput-object p1, p0, Lcom/sigmob/sdk/mraid/k;->i:Landroid/graphics/Rect;

    return-void
.end method

.method private a(Landroid/graphics/Rect;Landroid/graphics/Rect;)V
    .locals 4

    iget v0, p1, Landroid/graphics/Rect;->left:I

    int-to-float v0, v0

    iget-object v1, p0, Lcom/sigmob/sdk/mraid/k;->a:Landroid/content/Context;

    invoke-static {v0, v1}, Lcom/czhj/sdk/common/utils/Dips;->pixelsToIntDips(FLandroid/content/Context;)I

    move-result v0

    iget v1, p1, Landroid/graphics/Rect;->top:I

    int-to-float v1, v1

    iget-object v2, p0, Lcom/sigmob/sdk/mraid/k;->a:Landroid/content/Context;

    invoke-static {v1, v2}, Lcom/czhj/sdk/common/utils/Dips;->pixelsToIntDips(FLandroid/content/Context;)I

    move-result v1

    iget v2, p1, Landroid/graphics/Rect;->right:I

    int-to-float v2, v2

    iget-object v3, p0, Lcom/sigmob/sdk/mraid/k;->a:Landroid/content/Context;

    invoke-static {v2, v3}, Lcom/czhj/sdk/common/utils/Dips;->pixelsToIntDips(FLandroid/content/Context;)I

    move-result v2

    iget p1, p1, Landroid/graphics/Rect;->bottom:I

    int-to-float p1, p1

    iget-object v3, p0, Lcom/sigmob/sdk/mraid/k;->a:Landroid/content/Context;

    invoke-static {p1, v3}, Lcom/czhj/sdk/common/utils/Dips;->pixelsToIntDips(FLandroid/content/Context;)I

    move-result p1

    invoke-virtual {p2, v0, v1, v2, p1}, Landroid/graphics/Rect;->set(IIII)V

    return-void
.end method


# virtual methods
.method public a()F
    .locals 1

    iget v0, p0, Lcom/sigmob/sdk/mraid/k;->j:F

    return v0
.end method

.method public a(II)V
    .locals 2

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/k;->b:Landroid/graphics/Rect;

    const/4 v1, 0x0

    invoke-virtual {v0, v1, v1, p1, p2}, Landroid/graphics/Rect;->set(IIII)V

    iget-object p1, p0, Lcom/sigmob/sdk/mraid/k;->b:Landroid/graphics/Rect;

    iget-object p2, p0, Lcom/sigmob/sdk/mraid/k;->c:Landroid/graphics/Rect;

    invoke-direct {p0, p1, p2}, Lcom/sigmob/sdk/mraid/k;->a(Landroid/graphics/Rect;Landroid/graphics/Rect;)V

    return-void
.end method

.method public a(IIII)V
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/k;->d:Landroid/graphics/Rect;

    add-int/2addr p3, p1

    add-int/2addr p4, p2

    invoke-virtual {v0, p1, p2, p3, p4}, Landroid/graphics/Rect;->set(IIII)V

    iget-object p1, p0, Lcom/sigmob/sdk/mraid/k;->d:Landroid/graphics/Rect;

    iget-object p2, p0, Lcom/sigmob/sdk/mraid/k;->e:Landroid/graphics/Rect;

    invoke-direct {p0, p1, p2}, Lcom/sigmob/sdk/mraid/k;->a(Landroid/graphics/Rect;Landroid/graphics/Rect;)V

    return-void
.end method

.method b()Landroid/graphics/Rect;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/k;->b:Landroid/graphics/Rect;

    return-object v0
.end method

.method public b(IIII)V
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/k;->f:Landroid/graphics/Rect;

    add-int/2addr p3, p1

    add-int/2addr p4, p2

    invoke-virtual {v0, p1, p2, p3, p4}, Landroid/graphics/Rect;->set(IIII)V

    iget-object p1, p0, Lcom/sigmob/sdk/mraid/k;->f:Landroid/graphics/Rect;

    iget-object p2, p0, Lcom/sigmob/sdk/mraid/k;->g:Landroid/graphics/Rect;

    invoke-direct {p0, p1, p2}, Lcom/sigmob/sdk/mraid/k;->a(Landroid/graphics/Rect;Landroid/graphics/Rect;)V

    return-void
.end method

.method public c()Landroid/graphics/Rect;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/k;->c:Landroid/graphics/Rect;

    return-object v0
.end method

.method public c(IIII)V
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/k;->h:Landroid/graphics/Rect;

    add-int/2addr p3, p1

    add-int/2addr p4, p2

    invoke-virtual {v0, p1, p2, p3, p4}, Landroid/graphics/Rect;->set(IIII)V

    iget-object p1, p0, Lcom/sigmob/sdk/mraid/k;->h:Landroid/graphics/Rect;

    iget-object p2, p0, Lcom/sigmob/sdk/mraid/k;->i:Landroid/graphics/Rect;

    invoke-direct {p0, p1, p2}, Lcom/sigmob/sdk/mraid/k;->a(Landroid/graphics/Rect;Landroid/graphics/Rect;)V

    return-void
.end method

.method d()Landroid/graphics/Rect;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/k;->d:Landroid/graphics/Rect;

    return-object v0
.end method

.method public e()Landroid/graphics/Rect;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/k;->e:Landroid/graphics/Rect;

    return-object v0
.end method

.method f()Landroid/graphics/Rect;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/k;->f:Landroid/graphics/Rect;

    return-object v0
.end method

.method public g()Landroid/graphics/Rect;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/k;->g:Landroid/graphics/Rect;

    return-object v0
.end method

.method h()Landroid/graphics/Rect;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/k;->h:Landroid/graphics/Rect;

    return-object v0
.end method

.method public i()Landroid/graphics/Rect;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/k;->i:Landroid/graphics/Rect;

    return-object v0
.end method
