.class Lcom/sigmob/sdk/nativead/m$b;
.super Landroid/widget/TextView;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/sigmob/sdk/nativead/m;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = "b"
.end annotation


# instance fields
.field final synthetic a:Lcom/sigmob/sdk/nativead/m;

.field private b:Z

.field private c:Landroid/graphics/Paint;

.field private d:Landroid/graphics/Rect;


# direct methods
.method public constructor <init>(Lcom/sigmob/sdk/nativead/m;Landroid/content/Context;Ljava/lang/CharSequence;)V
    .locals 5

    iput-object p1, p0, Lcom/sigmob/sdk/nativead/m$b;->a:Lcom/sigmob/sdk/nativead/m;

    invoke-direct {p0, p2}, Landroid/widget/TextView;-><init>(Landroid/content/Context;)V

    const/4 p2, 0x0

    iput-boolean p2, p0, Lcom/sigmob/sdk/nativead/m$b;->b:Z

    new-instance v0, Landroid/graphics/Paint;

    const/4 v1, 0x1

    invoke-direct {v0, v1}, Landroid/graphics/Paint;-><init>(I)V

    iput-object v0, p0, Lcom/sigmob/sdk/nativead/m$b;->c:Landroid/graphics/Paint;

    new-instance v0, Landroid/graphics/Rect;

    invoke-direct {v0}, Landroid/graphics/Rect;-><init>()V

    iput-object v0, p0, Lcom/sigmob/sdk/nativead/m$b;->d:Landroid/graphics/Rect;

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/m$b;->c:Landroid/graphics/Paint;

    sget-object v2, Landroid/graphics/Paint$Style;->FILL:Landroid/graphics/Paint$Style;

    invoke-virtual {v0, v2}, Landroid/graphics/Paint;->setStyle(Landroid/graphics/Paint$Style;)V

    invoke-static {p1}, Lcom/sigmob/sdk/nativead/m;->d(Lcom/sigmob/sdk/nativead/m;)I

    move-result v0

    invoke-static {p1}, Lcom/sigmob/sdk/nativead/m;->e(Lcom/sigmob/sdk/nativead/m;)I

    move-result v2

    invoke-static {p1}, Lcom/sigmob/sdk/nativead/m;->d(Lcom/sigmob/sdk/nativead/m;)I

    move-result v3

    invoke-static {p1}, Lcom/sigmob/sdk/nativead/m;->e(Lcom/sigmob/sdk/nativead/m;)I

    move-result v4

    invoke-virtual {p0, v0, v2, v3, v4}, Lcom/sigmob/sdk/nativead/m$b;->setPadding(IIII)V

    new-instance v0, Lcom/sigmob/sdk/nativead/m$c;

    invoke-static {p1}, Lcom/sigmob/sdk/nativead/m;->f(Lcom/sigmob/sdk/nativead/m;)I

    move-result v2

    const/4 v3, -0x2

    invoke-direct {v0, v2, v3}, Lcom/sigmob/sdk/nativead/m$c;-><init>(II)V

    invoke-virtual {p0, v0}, Lcom/sigmob/sdk/nativead/m$b;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    const/16 v0, 0x11

    invoke-virtual {p0, v0}, Lcom/sigmob/sdk/nativead/m$b;->setGravity(I)V

    invoke-static {p1}, Lcom/sigmob/sdk/nativead/m;->g(Lcom/sigmob/sdk/nativead/m;)F

    move-result p1

    invoke-virtual {p0, p2, p1}, Lcom/sigmob/sdk/nativead/m$b;->setTextSize(IF)V

    invoke-virtual {p0, v1}, Lcom/sigmob/sdk/nativead/m$b;->setSingleLine(Z)V

    const-string p1, "END"

    invoke-static {p1}, Landroid/text/TextUtils$TruncateAt;->valueOf(Ljava/lang/String;)Landroid/text/TextUtils$TruncateAt;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/nativead/m$b;->setEllipsize(Landroid/text/TextUtils$TruncateAt;)V

    const/4 p1, 0x4

    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/nativead/m$b;->setMaxEms(I)V

    invoke-virtual {p0, p3}, Lcom/sigmob/sdk/nativead/m$b;->setText(Ljava/lang/CharSequence;)V

    invoke-virtual {p0, v1}, Lcom/sigmob/sdk/nativead/m$b;->setClickable(Z)V

    invoke-direct {p0}, Lcom/sigmob/sdk/nativead/m$b;->a()V

    return-void
.end method

.method private a()V
    .locals 2

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/m$b;->a:Lcom/sigmob/sdk/nativead/m;

    const/4 v1, 0x0

    invoke-static {v0, v1}, Lcom/sigmob/sdk/nativead/m;->a(Lcom/sigmob/sdk/nativead/m;Z)Z

    iget-boolean v0, p0, Lcom/sigmob/sdk/nativead/m$b;->b:Z

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/m$b;->c:Landroid/graphics/Paint;

    iget-object v1, p0, Lcom/sigmob/sdk/nativead/m$b;->a:Lcom/sigmob/sdk/nativead/m;

    invoke-static {v1}, Lcom/sigmob/sdk/nativead/m;->h(Lcom/sigmob/sdk/nativead/m;)I

    move-result v1

    invoke-virtual {v0, v1}, Landroid/graphics/Paint;->setColor(I)V

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/m$b;->a:Lcom/sigmob/sdk/nativead/m;

    invoke-static {v0}, Lcom/sigmob/sdk/nativead/m;->i(Lcom/sigmob/sdk/nativead/m;)I

    move-result v0

    goto :goto_0

    :cond_0
    iget-object v0, p0, Lcom/sigmob/sdk/nativead/m$b;->c:Landroid/graphics/Paint;

    iget-object v1, p0, Lcom/sigmob/sdk/nativead/m$b;->a:Lcom/sigmob/sdk/nativead/m;

    invoke-static {v1}, Lcom/sigmob/sdk/nativead/m;->j(Lcom/sigmob/sdk/nativead/m;)I

    move-result v1

    invoke-virtual {v0, v1}, Landroid/graphics/Paint;->setColor(I)V

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/m$b;->a:Lcom/sigmob/sdk/nativead/m;

    invoke-static {v0}, Lcom/sigmob/sdk/nativead/m;->k(Lcom/sigmob/sdk/nativead/m;)I

    move-result v0

    :goto_0
    invoke-virtual {p0, v0}, Lcom/sigmob/sdk/nativead/m$b;->setTextColor(I)V

    return-void
.end method

.method static synthetic a(Lcom/sigmob/sdk/nativead/m$b;)Z
    .locals 0

    iget-boolean p0, p0, Lcom/sigmob/sdk/nativead/m$b;->b:Z

    return p0
.end method

.method private b()V
    .locals 3

    iget-boolean v0, p0, Lcom/sigmob/sdk/nativead/m$b;->b:Z

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/m$b;->a:Lcom/sigmob/sdk/nativead/m;

    invoke-static {v0}, Lcom/sigmob/sdk/nativead/m;->h(Lcom/sigmob/sdk/nativead/m;)I

    move-result v0

    goto :goto_0

    :cond_0
    iget-object v0, p0, Lcom/sigmob/sdk/nativead/m$b;->a:Lcom/sigmob/sdk/nativead/m;

    invoke-static {v0}, Lcom/sigmob/sdk/nativead/m;->j(Lcom/sigmob/sdk/nativead/m;)I

    move-result v0

    :goto_0
    new-instance v1, Landroid/graphics/drawable/GradientDrawable;

    invoke-direct {v1}, Landroid/graphics/drawable/GradientDrawable;-><init>()V

    iget-object v2, p0, Lcom/sigmob/sdk/nativead/m$b;->a:Lcom/sigmob/sdk/nativead/m;

    invoke-static {v2}, Lcom/sigmob/sdk/nativead/m;->m(Lcom/sigmob/sdk/nativead/m;)[F

    move-result-object v2

    invoke-virtual {v1, v2}, Landroid/graphics/drawable/GradientDrawable;->setCornerRadii([F)V

    invoke-virtual {v1, v0}, Landroid/graphics/drawable/GradientDrawable;->setColor(I)V

    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v2, 0x10

    if-ge v0, v2, :cond_1

    invoke-virtual {p0, v1}, Lcom/sigmob/sdk/nativead/m$b;->setBackgroundDrawable(Landroid/graphics/drawable/Drawable;)V

    goto :goto_1

    :cond_1
    invoke-virtual {p0, v1}, Lcom/sigmob/sdk/nativead/m$b;->setBackground(Landroid/graphics/drawable/Drawable;)V

    :goto_1
    return-void
.end method


# virtual methods
.method public a(Z)V
    .locals 0

    iput-boolean p1, p0, Lcom/sigmob/sdk/nativead/m$b;->b:Z

    invoke-direct {p0}, Lcom/sigmob/sdk/nativead/m$b;->a()V

    return-void
.end method

.method protected getDefaultEditable()Z
    .locals 1

    const/4 v0, 0x0

    return v0
.end method

.method protected onDraw(Landroid/graphics/Canvas;)V
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/m$b;->a:Lcom/sigmob/sdk/nativead/m;

    invoke-static {v0}, Lcom/sigmob/sdk/nativead/m;->l(Lcom/sigmob/sdk/nativead/m;)Z

    move-result v0

    if-nez v0, :cond_0

    invoke-direct {p0}, Lcom/sigmob/sdk/nativead/m$b;->b()V

    :cond_0
    invoke-super {p0, p1}, Landroid/widget/TextView;->onDraw(Landroid/graphics/Canvas;)V

    return-void
.end method

.method public onTouchEvent(Landroid/view/MotionEvent;)Z
    .locals 3

    invoke-virtual {p1}, Landroid/view/MotionEvent;->getAction()I

    move-result v0

    if-eqz v0, :cond_1

    const/4 v1, 0x1

    if-eq v0, v1, :cond_2

    const/4 v1, 0x2

    if-eq v0, v1, :cond_0

    goto :goto_1

    :cond_0
    iget-object v0, p0, Lcom/sigmob/sdk/nativead/m$b;->d:Landroid/graphics/Rect;

    invoke-virtual {p1}, Landroid/view/MotionEvent;->getX()F

    move-result v1

    float-to-int v1, v1

    invoke-virtual {p1}, Landroid/view/MotionEvent;->getY()F

    move-result v2

    float-to-int v2, v2

    invoke-virtual {v0, v1, v2}, Landroid/graphics/Rect;->contains(II)Z

    move-result v0

    if-nez v0, :cond_3

    goto :goto_0

    :cond_1
    iget-object v0, p0, Lcom/sigmob/sdk/nativead/m$b;->d:Landroid/graphics/Rect;

    invoke-virtual {p0, v0}, Lcom/sigmob/sdk/nativead/m$b;->getDrawingRect(Landroid/graphics/Rect;)V

    :cond_2
    :goto_0
    invoke-direct {p0}, Lcom/sigmob/sdk/nativead/m$b;->a()V

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/m$b;->invalidate()V

    :cond_3
    :goto_1
    invoke-super {p0, p1}, Landroid/widget/TextView;->onTouchEvent(Landroid/view/MotionEvent;)Z

    move-result p1

    return p1
.end method
