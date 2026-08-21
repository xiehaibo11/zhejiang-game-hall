.class public Lcom/tkay/core/common/l/a/f$b;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/core/common/l/a/f;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x9
    name = "b"
.end annotation


# instance fields
.field private final a:Landroid/graphics/Rect;


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 311
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 313
    new-instance v0, Landroid/graphics/Rect;

    invoke-direct {v0}, Landroid/graphics/Rect;-><init>()V

    iput-object v0, p0, Lcom/tkay/core/common/l/a/f$b;->a:Landroid/graphics/Rect;

    return-void
.end method

.method private static a(JI)Z
    .locals 2

    .line 319
    invoke-static {}, Landroid/os/SystemClock;->uptimeMillis()J

    move-result-wide v0

    sub-long/2addr v0, p0

    int-to-long p0, p2

    cmp-long p0, v0, p0

    if-ltz p0, :cond_0

    const/4 p0, 0x1

    return p0

    :cond_0
    const/4 p0, 0x0

    return p0
.end method


# virtual methods
.method public final a(Landroid/view/View;Landroid/view/View;ILjava/lang/Integer;)Z
    .locals 7

    const/4 v0, 0x0

    if-eqz p2, :cond_5

    .line 334
    invoke-virtual {p2}, Landroid/view/View;->isShown()Z

    move-result v1

    if-eqz v1, :cond_5

    invoke-virtual {p1}, Landroid/view/View;->getParent()Landroid/view/ViewParent;

    move-result-object p1

    if-eqz p1, :cond_5

    invoke-virtual {p2}, Landroid/view/View;->getWindowVisibility()I

    move-result p1

    if-eqz p1, :cond_0

    goto :goto_0

    .line 339
    :cond_0
    iget-object p1, p0, Lcom/tkay/core/common/l/a/f$b;->a:Landroid/graphics/Rect;

    invoke-virtual {p2, p1}, Landroid/view/View;->getGlobalVisibleRect(Landroid/graphics/Rect;)Z

    move-result p1

    if-nez p1, :cond_1

    return v0

    .line 345
    :cond_1
    iget-object p1, p0, Lcom/tkay/core/common/l/a/f$b;->a:Landroid/graphics/Rect;

    invoke-virtual {p1}, Landroid/graphics/Rect;->height()I

    move-result p1

    int-to-long v1, p1

    iget-object p1, p0, Lcom/tkay/core/common/l/a/f$b;->a:Landroid/graphics/Rect;

    invoke-virtual {p1}, Landroid/graphics/Rect;->width()I

    move-result p1

    int-to-long v3, p1

    mul-long/2addr v1, v3

    .line 346
    invoke-virtual {p2}, Landroid/view/View;->getHeight()I

    move-result p1

    int-to-long v3, p1

    invoke-virtual {p2}, Landroid/view/View;->getWidth()I

    move-result p1

    int-to-long p1, p1

    mul-long/2addr v3, p1

    const-wide/16 p1, 0x0

    cmp-long p1, v3, p1

    if-gtz p1, :cond_2

    return v0

    :cond_2
    const/4 p1, 0x1

    if-eqz p4, :cond_4

    .line 352
    invoke-virtual {p4}, Ljava/lang/Integer;->intValue()I

    move-result p2

    if-lez p2, :cond_4

    .line 353
    invoke-virtual {p4}, Ljava/lang/Integer;->intValue()I

    move-result p2

    int-to-long p2, p2

    cmp-long p2, v1, p2

    if-ltz p2, :cond_3

    return p1

    :cond_3
    return v0

    :cond_4
    const-wide/16 v5, 0x64

    mul-long/2addr v1, v5

    int-to-long p2, p3

    mul-long/2addr p2, v3

    cmp-long p2, v1, p2

    if-ltz p2, :cond_5

    return p1

    :cond_5
    :goto_0
    return v0
.end method
