.class public Lcom/sigmob/sdk/mraid2/g;
.super Landroid/widget/HorizontalScrollView;

# interfaces
.implements Lcom/sigmob/sdk/mraid2/i;


# static fields
.field public static final c:F = 1000.0f

.field private static final d:Ljava/lang/String; = "PageScrollView"

.field private static final e:I = 0x3e8


# instance fields
.field public final a:I

.field public final b:I

.field private f:I

.field private g:J

.field private h:Lcom/sigmob/sdk/mraid2/b$c;

.field private i:I


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 1

    const/4 v0, 0x0

    invoke-direct {p0, p1, v0}, Lcom/sigmob/sdk/mraid2/g;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 1

    const/4 v0, 0x0

    invoke-direct {p0, p1, p2, v0}, Lcom/sigmob/sdk/mraid2/g;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V
    .locals 0

    invoke-direct {p0, p1, p2, p3}, Landroid/widget/HorizontalScrollView;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V

    invoke-virtual {p0}, Lcom/sigmob/sdk/mraid2/g;->getResources()Landroid/content/res/Resources;

    move-result-object p1

    invoke-virtual {p1}, Landroid/content/res/Resources;->getDisplayMetrics()Landroid/util/DisplayMetrics;

    move-result-object p1

    iget p1, p1, Landroid/util/DisplayMetrics;->widthPixels:I

    iput p1, p0, Lcom/sigmob/sdk/mraid2/g;->a:I

    div-int/lit8 p1, p1, 0x2

    iput p1, p0, Lcom/sigmob/sdk/mraid2/g;->b:I

    const/4 p1, 0x0

    iput p1, p0, Lcom/sigmob/sdk/mraid2/g;->i:I

    return-void
.end method

.method static synthetic a(Lcom/sigmob/sdk/mraid2/g;)I
    .locals 0

    iget p0, p0, Lcom/sigmob/sdk/mraid2/g;->i:I

    return p0
.end method

.method static synthetic a(Lcom/sigmob/sdk/mraid2/g;I)I
    .locals 0

    iput p1, p0, Lcom/sigmob/sdk/mraid2/g;->i:I

    return p1
.end method

.method private a(I)Z
    .locals 8

    iget v0, p0, Lcom/sigmob/sdk/mraid2/g;->a:I

    rem-int v1, p1, v0

    div-int v0, p1, v0

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v3, ":-----goPage------:"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v2, "PageScrollView"

    invoke-static {v2, v0}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    mul-int/lit16 p1, p1, 0x3e8

    int-to-long v2, p1

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v4

    iget-wide v6, p0, Lcom/sigmob/sdk/mraid2/g;->g:J

    sub-long/2addr v4, v6

    div-long/2addr v2, v4

    long-to-float p1, v2

    const/high16 v0, 0x447a0000    # 1000.0f

    cmpg-float v0, p1, v0

    const/4 v2, 0x1

    if-gez v0, :cond_1

    const/high16 v0, -0x3b860000    # -1000.0f

    cmpl-float p1, p1, v0

    if-lez p1, :cond_1

    iget p1, p0, Lcom/sigmob/sdk/mraid2/g;->b:I

    if-ge v1, p1, :cond_0

    const/4 p1, 0x0

    return p1

    :cond_0
    iget v0, p0, Lcom/sigmob/sdk/mraid2/g;->a:I

    sub-int/2addr v0, p1

    if-le v1, v0, :cond_1

    :cond_1
    return v2
.end method

.method static synthetic b(Lcom/sigmob/sdk/mraid2/g;)Lcom/sigmob/sdk/mraid2/b$c;
    .locals 0

    iget-object p0, p0, Lcom/sigmob/sdk/mraid2/g;->h:Lcom/sigmob/sdk/mraid2/b$c;

    return-object p0
.end method


# virtual methods
.method public a(II)V
    .locals 0

    iput p1, p0, Lcom/sigmob/sdk/mraid2/g;->f:I

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide p1

    iput-wide p1, p0, Lcom/sigmob/sdk/mraid2/g;->g:J

    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    iget p2, p0, Lcom/sigmob/sdk/mraid2/g;->i:I

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p2, "--------onTouchStart--------"

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget p2, p0, Lcom/sigmob/sdk/mraid2/g;->f:I

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string p2, "PageScrollView"

    invoke-static {p2, p1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    return-void
.end method

.method public a(Lcom/sigmob/sdk/mraid2/e;II)V
    .locals 6

    iget p3, p0, Lcom/sigmob/sdk/mraid2/g;->f:I

    sub-int v3, p3, p2

    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    iget p3, p0, Lcom/sigmob/sdk/mraid2/g;->i:I

    invoke-virtual {p2, p3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p3, "-----------onTouchEnd--------:"

    invoke-virtual {p2, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    const-string p3, "PageScrollView"

    invoke-static {p3, p2}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    invoke-direct {p0, v3}, Lcom/sigmob/sdk/mraid2/g;->a(I)Z

    move-result v2

    const/4 p2, 0x0

    invoke-virtual {p0, p2}, Lcom/sigmob/sdk/mraid2/g;->getChildAt(I)Landroid/view/View;

    move-result-object p2

    invoke-virtual {p2}, Landroid/view/View;->getWidth()I

    move-result v4

    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p2, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v0, "------\u662f\u5426\u7ffb\u9875----"

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, v2}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-static {p3, p2}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    new-instance p2, Lcom/sigmob/sdk/mraid2/g$2;

    move-object v0, p2

    move-object v1, p0

    move-object v5, p1

    invoke-direct/range {v0 .. v5}, Lcom/sigmob/sdk/mraid2/g$2;-><init>(Lcom/sigmob/sdk/mraid2/g;ZIILcom/sigmob/sdk/mraid2/e;)V

    invoke-virtual {p0, p2}, Lcom/sigmob/sdk/mraid2/g;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method public b(II)V
    .locals 1

    iget p2, p0, Lcom/sigmob/sdk/mraid2/g;->f:I

    sub-int/2addr p2, p1

    const/4 p1, 0x0

    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/mraid2/g;->getChildAt(I)Landroid/view/View;

    move-result-object p1

    invoke-virtual {p1}, Landroid/view/View;->getWidth()I

    move-result p1

    new-instance v0, Lcom/sigmob/sdk/mraid2/g$1;

    invoke-direct {v0, p0, p2, p1}, Lcom/sigmob/sdk/mraid2/g$1;-><init>(Lcom/sigmob/sdk/mraid2/g;II)V

    invoke-virtual {p0, v0}, Lcom/sigmob/sdk/mraid2/g;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method public fling(I)V
    .locals 0

    const/4 p1, 0x0

    invoke-super {p0, p1}, Landroid/widget/HorizontalScrollView;->fling(I)V

    return-void
.end method

.method public getView()Landroid/view/ViewGroup;
    .locals 0

    return-object p0
.end method

.method public setPageChangedListener(Lcom/sigmob/sdk/mraid2/b$c;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/mraid2/g;->h:Lcom/sigmob/sdk/mraid2/b$c;

    return-void
.end method
