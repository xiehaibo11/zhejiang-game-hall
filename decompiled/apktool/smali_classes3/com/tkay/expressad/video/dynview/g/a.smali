.class public final Lcom/tkay/expressad/video/dynview/g/a;
.super Landroid/graphics/drawable/ShapeDrawable;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/expressad/video/dynview/g/a$b;,
        Lcom/tkay/expressad/video/dynview/g/a$a;
    }
.end annotation


# instance fields
.field private a:I

.field private b:F

.field private c:F

.field private d:I

.field private e:I

.field private f:Landroid/graphics/Bitmap;

.field private g:Landroid/graphics/Bitmap;

.field private h:Z

.field private i:Landroid/graphics/Paint;


# direct methods
.method private constructor <init>(Lcom/tkay/expressad/video/dynview/g/a$a;)V
    .locals 1

    .line 68
    invoke-static {p1}, Lcom/tkay/expressad/video/dynview/g/a$a;->a(Lcom/tkay/expressad/video/dynview/g/a$a;)Landroid/graphics/drawable/shapes/RectShape;

    move-result-object v0

    invoke-direct {p0, v0}, Landroid/graphics/drawable/ShapeDrawable;-><init>(Landroid/graphics/drawable/shapes/Shape;)V

    const/4 v0, 0x0

    .line 56
    iput-boolean v0, p0, Lcom/tkay/expressad/video/dynview/g/a;->h:Z

    .line 69
    invoke-static {p1}, Lcom/tkay/expressad/video/dynview/g/a$a;->b(Lcom/tkay/expressad/video/dynview/g/a$a;)Landroid/graphics/Bitmap;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/expressad/video/dynview/g/a;->f:Landroid/graphics/Bitmap;

    .line 70
    invoke-static {p1}, Lcom/tkay/expressad/video/dynview/g/a$a;->c(Lcom/tkay/expressad/video/dynview/g/a$a;)Landroid/graphics/Bitmap;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/expressad/video/dynview/g/a;->g:Landroid/graphics/Bitmap;

    .line 71
    invoke-static {p1}, Lcom/tkay/expressad/video/dynview/g/a$a;->d(Lcom/tkay/expressad/video/dynview/g/a$a;)Z

    move-result v0

    iput-boolean v0, p0, Lcom/tkay/expressad/video/dynview/g/a;->h:Z

    .line 72
    invoke-static {p1}, Lcom/tkay/expressad/video/dynview/g/a$a;->e(Lcom/tkay/expressad/video/dynview/g/a$a;)I

    move-result v0

    iput v0, p0, Lcom/tkay/expressad/video/dynview/g/a;->a:I

    .line 73
    invoke-static {p1}, Lcom/tkay/expressad/video/dynview/g/a$a;->f(Lcom/tkay/expressad/video/dynview/g/a$a;)I

    move-result v0

    iput v0, p0, Lcom/tkay/expressad/video/dynview/g/a;->d:I

    .line 74
    invoke-static {p1}, Lcom/tkay/expressad/video/dynview/g/a$a;->g(Lcom/tkay/expressad/video/dynview/g/a$a;)I

    move-result v0

    iput v0, p0, Lcom/tkay/expressad/video/dynview/g/a;->e:I

    .line 75
    invoke-static {p1}, Lcom/tkay/expressad/video/dynview/g/a$a;->h(Lcom/tkay/expressad/video/dynview/g/a$a;)F

    move-result v0

    iput v0, p0, Lcom/tkay/expressad/video/dynview/g/a;->b:F

    .line 76
    invoke-static {p1}, Lcom/tkay/expressad/video/dynview/g/a$a;->i(Lcom/tkay/expressad/video/dynview/g/a$a;)F

    move-result p1

    iput p1, p0, Lcom/tkay/expressad/video/dynview/g/a;->c:F

    .line 78
    new-instance p1, Landroid/graphics/Paint;

    invoke-direct {p1}, Landroid/graphics/Paint;-><init>()V

    iput-object p1, p0, Lcom/tkay/expressad/video/dynview/g/a;->i:Landroid/graphics/Paint;

    .line 79
    sget-object v0, Landroid/graphics/Paint$Style;->FILL:Landroid/graphics/Paint$Style;

    invoke-virtual {p1, v0}, Landroid/graphics/Paint;->setStyle(Landroid/graphics/Paint$Style;)V

    .line 80
    iget-object p1, p0, Lcom/tkay/expressad/video/dynview/g/a;->i:Landroid/graphics/Paint;

    const/4 v0, 0x1

    invoke-virtual {p1, v0}, Landroid/graphics/Paint;->setAntiAlias(Z)V

    return-void
.end method

.method synthetic constructor <init>(Lcom/tkay/expressad/video/dynview/g/a$a;B)V
    .locals 0

    .line 20
    invoke-direct {p0, p1}, Lcom/tkay/expressad/video/dynview/g/a;-><init>(Lcom/tkay/expressad/video/dynview/g/a$a;)V

    return-void
.end method

.method public static a()Lcom/tkay/expressad/video/dynview/g/a$a;
    .locals 2

    .line 210
    new-instance v0, Lcom/tkay/expressad/video/dynview/g/a$a;

    const/4 v1, 0x0

    invoke-direct {v0, v1}, Lcom/tkay/expressad/video/dynview/g/a$a;-><init>(B)V

    return-object v0
.end method

.method private a(Landroid/graphics/Canvas;)V
    .locals 6

    .line 95
    iget v0, p0, Lcom/tkay/expressad/video/dynview/g/a;->c:F

    const/high16 v1, 0x40000000    # 2.0f

    div-float/2addr v0, v1

    .line 97
    new-instance v1, Landroid/graphics/Path;

    invoke-direct {v1}, Landroid/graphics/Path;-><init>()V

    const/4 v2, 0x0

    .line 98
    invoke-virtual {v1, v2, v2}, Landroid/graphics/Path;->moveTo(FF)V

    .line 99
    iget v3, p0, Lcom/tkay/expressad/video/dynview/g/a;->d:I

    int-to-float v3, v3

    add-float/2addr v3, v0

    iget v4, p0, Lcom/tkay/expressad/video/dynview/g/a;->e:I

    int-to-float v4, v4

    sub-float/2addr v3, v4

    invoke-virtual {v1, v2, v3}, Landroid/graphics/Path;->lineTo(FF)V

    .line 100
    iget v3, p0, Lcom/tkay/expressad/video/dynview/g/a;->b:F

    iget v4, p0, Lcom/tkay/expressad/video/dynview/g/a;->d:I

    int-to-float v4, v4

    sub-float v4, v0, v4

    iget v5, p0, Lcom/tkay/expressad/video/dynview/g/a;->e:I

    int-to-float v5, v5

    sub-float/2addr v4, v5

    invoke-virtual {v1, v3, v4}, Landroid/graphics/Path;->lineTo(FF)V

    .line 101
    iget v3, p0, Lcom/tkay/expressad/video/dynview/g/a;->b:F

    invoke-virtual {v1, v3, v2}, Landroid/graphics/Path;->lineTo(FF)V

    .line 102
    iget-boolean v3, p0, Lcom/tkay/expressad/video/dynview/g/a;->h:Z

    if-eqz v3, :cond_0

    .line 104
    :try_start_0
    invoke-direct {p0, p1, v1}, Lcom/tkay/expressad/video/dynview/g/a;->a(Landroid/graphics/Canvas;Landroid/graphics/Path;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v1

    .line 106
    invoke-virtual {v1}, Ljava/lang/Exception;->printStackTrace()V

    goto :goto_0

    .line 109
    :cond_0
    iget-object v3, p0, Lcom/tkay/expressad/video/dynview/g/a;->f:Landroid/graphics/Bitmap;

    if-eqz v3, :cond_1

    invoke-virtual {v3}, Landroid/graphics/Bitmap;->isRecycled()Z

    move-result v3

    if-nez v3, :cond_1

    .line 111
    :try_start_1
    iget-object v3, p0, Lcom/tkay/expressad/video/dynview/g/a;->f:Landroid/graphics/Bitmap;

    invoke-direct {p0, p1, v1, v3}, Lcom/tkay/expressad/video/dynview/g/a;->a(Landroid/graphics/Canvas;Landroid/graphics/Path;Landroid/graphics/Bitmap;)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    goto :goto_0

    :catch_1
    move-exception v1

    .line 113
    invoke-virtual {v1}, Ljava/lang/Exception;->printStackTrace()V

    .line 120
    :cond_1
    :goto_0
    new-instance v1, Landroid/graphics/Path;

    invoke-direct {v1}, Landroid/graphics/Path;-><init>()V

    .line 121
    iget v3, p0, Lcom/tkay/expressad/video/dynview/g/a;->d:I

    int-to-float v3, v3

    add-float/2addr v3, v0

    iget v4, p0, Lcom/tkay/expressad/video/dynview/g/a;->e:I

    int-to-float v4, v4

    add-float/2addr v3, v4

    invoke-virtual {v1, v2, v3}, Landroid/graphics/Path;->moveTo(FF)V

    .line 122
    iget v3, p0, Lcom/tkay/expressad/video/dynview/g/a;->c:F

    invoke-virtual {v1, v2, v3}, Landroid/graphics/Path;->lineTo(FF)V

    .line 123
    iget v2, p0, Lcom/tkay/expressad/video/dynview/g/a;->b:F

    iget v3, p0, Lcom/tkay/expressad/video/dynview/g/a;->c:F

    invoke-virtual {v1, v2, v3}, Landroid/graphics/Path;->lineTo(FF)V

    .line 124
    iget v2, p0, Lcom/tkay/expressad/video/dynview/g/a;->b:F

    iget v3, p0, Lcom/tkay/expressad/video/dynview/g/a;->d:I

    int-to-float v3, v3

    sub-float/2addr v0, v3

    iget v3, p0, Lcom/tkay/expressad/video/dynview/g/a;->e:I

    int-to-float v3, v3

    add-float/2addr v0, v3

    invoke-virtual {v1, v2, v0}, Landroid/graphics/Path;->lineTo(FF)V

    .line 126
    iget-boolean v0, p0, Lcom/tkay/expressad/video/dynview/g/a;->h:Z

    if-eqz v0, :cond_2

    .line 128
    :try_start_2
    invoke-direct {p0, p1, v1}, Lcom/tkay/expressad/video/dynview/g/a;->a(Landroid/graphics/Canvas;Landroid/graphics/Path;)V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_2

    return-void

    :catch_2
    move-exception p1

    .line 130
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    return-void

    .line 133
    :cond_2
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/g/a;->g:Landroid/graphics/Bitmap;

    if-eqz v0, :cond_3

    invoke-virtual {v0}, Landroid/graphics/Bitmap;->isRecycled()Z

    move-result v0

    if-nez v0, :cond_3

    .line 135
    :try_start_3
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/g/a;->g:Landroid/graphics/Bitmap;

    invoke-direct {p0, p1, v1, v0}, Lcom/tkay/expressad/video/dynview/g/a;->a(Landroid/graphics/Canvas;Landroid/graphics/Path;Landroid/graphics/Bitmap;)V
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_3

    return-void

    :catch_3
    move-exception p1

    .line 137
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_3
    return-void
.end method

.method private a(Landroid/graphics/Canvas;Landroid/graphics/Path;)V
    .locals 2

    .line 199
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/g/a;->i:Landroid/graphics/Paint;

    const-string v1, "#40EAEAEA"

    invoke-static {v1}, Landroid/graphics/Color;->parseColor(Ljava/lang/String;)I

    move-result v1

    invoke-virtual {v0, v1}, Landroid/graphics/Paint;->setColor(I)V

    .line 200
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/g/a;->i:Landroid/graphics/Paint;

    invoke-virtual {p1, p2, v0}, Landroid/graphics/Canvas;->drawPath(Landroid/graphics/Path;Landroid/graphics/Paint;)V

    return-void
.end method

.method private a(Landroid/graphics/Canvas;Landroid/graphics/Path;Landroid/graphics/Bitmap;)V
    .locals 2

    .line 193
    new-instance v0, Landroid/graphics/BitmapShader;

    sget-object v1, Landroid/graphics/Shader$TileMode;->CLAMP:Landroid/graphics/Shader$TileMode;

    invoke-direct {v0, p3, v1, v1}, Landroid/graphics/BitmapShader;-><init>(Landroid/graphics/Bitmap;Landroid/graphics/Shader$TileMode;Landroid/graphics/Shader$TileMode;)V

    .line 194
    iget-object p3, p0, Lcom/tkay/expressad/video/dynview/g/a;->i:Landroid/graphics/Paint;

    invoke-virtual {p3, v0}, Landroid/graphics/Paint;->setShader(Landroid/graphics/Shader;)Landroid/graphics/Shader;

    .line 195
    iget-object p3, p0, Lcom/tkay/expressad/video/dynview/g/a;->i:Landroid/graphics/Paint;

    invoke-virtual {p1, p2, p3}, Landroid/graphics/Canvas;->drawPath(Landroid/graphics/Path;Landroid/graphics/Paint;)V

    return-void
.end method

.method private b(Landroid/graphics/Canvas;)V
    .locals 5

    .line 144
    iget v0, p0, Lcom/tkay/expressad/video/dynview/g/a;->b:F

    const/high16 v1, 0x40000000    # 2.0f

    div-float/2addr v0, v1

    .line 146
    new-instance v1, Landroid/graphics/Path;

    invoke-direct {v1}, Landroid/graphics/Path;-><init>()V

    const/4 v2, 0x0

    .line 147
    invoke-virtual {v1, v2, v2}, Landroid/graphics/Path;->moveTo(FF)V

    .line 148
    iget v3, p0, Lcom/tkay/expressad/video/dynview/g/a;->c:F

    invoke-virtual {v1, v2, v3}, Landroid/graphics/Path;->lineTo(FF)V

    .line 149
    iget v3, p0, Lcom/tkay/expressad/video/dynview/g/a;->d:I

    int-to-float v3, v3

    sub-float v3, v0, v3

    iget v4, p0, Lcom/tkay/expressad/video/dynview/g/a;->e:I

    int-to-float v4, v4

    sub-float/2addr v3, v4

    iget v4, p0, Lcom/tkay/expressad/video/dynview/g/a;->c:F

    invoke-virtual {v1, v3, v4}, Landroid/graphics/Path;->lineTo(FF)V

    .line 150
    iget v3, p0, Lcom/tkay/expressad/video/dynview/g/a;->d:I

    int-to-float v3, v3

    add-float/2addr v3, v0

    iget v4, p0, Lcom/tkay/expressad/video/dynview/g/a;->e:I

    int-to-float v4, v4

    sub-float/2addr v3, v4

    invoke-virtual {v1, v3, v2}, Landroid/graphics/Path;->lineTo(FF)V

    .line 152
    iget-boolean v3, p0, Lcom/tkay/expressad/video/dynview/g/a;->h:Z

    if-eqz v3, :cond_0

    .line 154
    :try_start_0
    invoke-direct {p0, p1, v1}, Lcom/tkay/expressad/video/dynview/g/a;->a(Landroid/graphics/Canvas;Landroid/graphics/Path;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v1

    .line 156
    invoke-virtual {v1}, Ljava/lang/Exception;->printStackTrace()V

    goto :goto_0

    .line 159
    :cond_0
    iget-object v3, p0, Lcom/tkay/expressad/video/dynview/g/a;->f:Landroid/graphics/Bitmap;

    if-eqz v3, :cond_1

    invoke-virtual {v3}, Landroid/graphics/Bitmap;->isRecycled()Z

    move-result v3

    if-nez v3, :cond_1

    .line 161
    :try_start_1
    iget-object v3, p0, Lcom/tkay/expressad/video/dynview/g/a;->f:Landroid/graphics/Bitmap;

    invoke-direct {p0, p1, v1, v3}, Lcom/tkay/expressad/video/dynview/g/a;->a(Landroid/graphics/Canvas;Landroid/graphics/Path;Landroid/graphics/Bitmap;)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    goto :goto_0

    :catch_1
    move-exception v1

    .line 163
    invoke-virtual {v1}, Ljava/lang/Exception;->printStackTrace()V

    .line 168
    :cond_1
    :goto_0
    new-instance v1, Landroid/graphics/Path;

    invoke-direct {v1}, Landroid/graphics/Path;-><init>()V

    .line 169
    iget v3, p0, Lcom/tkay/expressad/video/dynview/g/a;->d:I

    int-to-float v3, v3

    add-float/2addr v3, v0

    iget v4, p0, Lcom/tkay/expressad/video/dynview/g/a;->e:I

    int-to-float v4, v4

    add-float/2addr v3, v4

    invoke-virtual {v1, v3, v2}, Landroid/graphics/Path;->moveTo(FF)V

    .line 170
    iget v3, p0, Lcom/tkay/expressad/video/dynview/g/a;->b:F

    invoke-virtual {v1, v3, v2}, Landroid/graphics/Path;->lineTo(FF)V

    .line 171
    iget v2, p0, Lcom/tkay/expressad/video/dynview/g/a;->b:F

    iget v3, p0, Lcom/tkay/expressad/video/dynview/g/a;->c:F

    invoke-virtual {v1, v2, v3}, Landroid/graphics/Path;->lineTo(FF)V

    .line 172
    iget v2, p0, Lcom/tkay/expressad/video/dynview/g/a;->d:I

    int-to-float v2, v2

    sub-float/2addr v0, v2

    iget v2, p0, Lcom/tkay/expressad/video/dynview/g/a;->e:I

    int-to-float v2, v2

    add-float/2addr v0, v2

    iget v2, p0, Lcom/tkay/expressad/video/dynview/g/a;->c:F

    invoke-virtual {v1, v0, v2}, Landroid/graphics/Path;->lineTo(FF)V

    .line 174
    iget-boolean v0, p0, Lcom/tkay/expressad/video/dynview/g/a;->h:Z

    if-eqz v0, :cond_2

    .line 176
    :try_start_2
    invoke-direct {p0, p1, v1}, Lcom/tkay/expressad/video/dynview/g/a;->a(Landroid/graphics/Canvas;Landroid/graphics/Path;)V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_2

    return-void

    :catch_2
    move-exception p1

    .line 178
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    return-void

    .line 181
    :cond_2
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/g/a;->g:Landroid/graphics/Bitmap;

    if-eqz v0, :cond_3

    invoke-virtual {v0}, Landroid/graphics/Bitmap;->isRecycled()Z

    move-result v0

    if-nez v0, :cond_3

    .line 183
    :try_start_3
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/g/a;->g:Landroid/graphics/Bitmap;

    invoke-direct {p0, p1, v1, v0}, Lcom/tkay/expressad/video/dynview/g/a;->a(Landroid/graphics/Canvas;Landroid/graphics/Path;Landroid/graphics/Bitmap;)V
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_3

    return-void

    :catch_3
    move-exception p1

    .line 185
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_3
    return-void
.end method


# virtual methods
.method public final draw(Landroid/graphics/Canvas;)V
    .locals 6

    .line 86
    invoke-super {p0, p1}, Landroid/graphics/drawable/ShapeDrawable;->draw(Landroid/graphics/Canvas;)V

    .line 87
    iget v0, p0, Lcom/tkay/expressad/video/dynview/g/a;->a:I

    const/high16 v1, 0x40000000    # 2.0f

    const/4 v2, 0x0

    const/4 v3, 0x1

    if-ne v0, v3, :cond_4

    .line 1095
    iget v0, p0, Lcom/tkay/expressad/video/dynview/g/a;->c:F

    div-float/2addr v0, v1

    .line 1097
    new-instance v1, Landroid/graphics/Path;

    invoke-direct {v1}, Landroid/graphics/Path;-><init>()V

    .line 1098
    invoke-virtual {v1, v2, v2}, Landroid/graphics/Path;->moveTo(FF)V

    .line 1099
    iget v3, p0, Lcom/tkay/expressad/video/dynview/g/a;->d:I

    int-to-float v3, v3

    add-float/2addr v3, v0

    iget v4, p0, Lcom/tkay/expressad/video/dynview/g/a;->e:I

    int-to-float v4, v4

    sub-float/2addr v3, v4

    invoke-virtual {v1, v2, v3}, Landroid/graphics/Path;->lineTo(FF)V

    .line 1100
    iget v3, p0, Lcom/tkay/expressad/video/dynview/g/a;->b:F

    iget v4, p0, Lcom/tkay/expressad/video/dynview/g/a;->d:I

    int-to-float v4, v4

    sub-float v4, v0, v4

    iget v5, p0, Lcom/tkay/expressad/video/dynview/g/a;->e:I

    int-to-float v5, v5

    sub-float/2addr v4, v5

    invoke-virtual {v1, v3, v4}, Landroid/graphics/Path;->lineTo(FF)V

    .line 1101
    iget v3, p0, Lcom/tkay/expressad/video/dynview/g/a;->b:F

    invoke-virtual {v1, v3, v2}, Landroid/graphics/Path;->lineTo(FF)V

    .line 1102
    iget-boolean v3, p0, Lcom/tkay/expressad/video/dynview/g/a;->h:Z

    if-eqz v3, :cond_0

    .line 1104
    :try_start_0
    invoke-direct {p0, p1, v1}, Lcom/tkay/expressad/video/dynview/g/a;->a(Landroid/graphics/Canvas;Landroid/graphics/Path;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v1

    .line 1106
    invoke-virtual {v1}, Ljava/lang/Exception;->printStackTrace()V

    goto :goto_0

    .line 1109
    :cond_0
    iget-object v3, p0, Lcom/tkay/expressad/video/dynview/g/a;->f:Landroid/graphics/Bitmap;

    if-eqz v3, :cond_1

    invoke-virtual {v3}, Landroid/graphics/Bitmap;->isRecycled()Z

    move-result v3

    if-nez v3, :cond_1

    .line 1111
    :try_start_1
    iget-object v3, p0, Lcom/tkay/expressad/video/dynview/g/a;->f:Landroid/graphics/Bitmap;

    invoke-direct {p0, p1, v1, v3}, Lcom/tkay/expressad/video/dynview/g/a;->a(Landroid/graphics/Canvas;Landroid/graphics/Path;Landroid/graphics/Bitmap;)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    goto :goto_0

    :catch_1
    move-exception v1

    .line 1113
    invoke-virtual {v1}, Ljava/lang/Exception;->printStackTrace()V

    .line 1120
    :cond_1
    :goto_0
    new-instance v1, Landroid/graphics/Path;

    invoke-direct {v1}, Landroid/graphics/Path;-><init>()V

    .line 1121
    iget v3, p0, Lcom/tkay/expressad/video/dynview/g/a;->d:I

    int-to-float v3, v3

    add-float/2addr v3, v0

    iget v4, p0, Lcom/tkay/expressad/video/dynview/g/a;->e:I

    int-to-float v4, v4

    add-float/2addr v3, v4

    invoke-virtual {v1, v2, v3}, Landroid/graphics/Path;->moveTo(FF)V

    .line 1122
    iget v3, p0, Lcom/tkay/expressad/video/dynview/g/a;->c:F

    invoke-virtual {v1, v2, v3}, Landroid/graphics/Path;->lineTo(FF)V

    .line 1123
    iget v2, p0, Lcom/tkay/expressad/video/dynview/g/a;->b:F

    iget v3, p0, Lcom/tkay/expressad/video/dynview/g/a;->c:F

    invoke-virtual {v1, v2, v3}, Landroid/graphics/Path;->lineTo(FF)V

    .line 1124
    iget v2, p0, Lcom/tkay/expressad/video/dynview/g/a;->b:F

    iget v3, p0, Lcom/tkay/expressad/video/dynview/g/a;->d:I

    int-to-float v3, v3

    sub-float/2addr v0, v3

    iget v3, p0, Lcom/tkay/expressad/video/dynview/g/a;->e:I

    int-to-float v3, v3

    add-float/2addr v0, v3

    invoke-virtual {v1, v2, v0}, Landroid/graphics/Path;->lineTo(FF)V

    .line 1126
    iget-boolean v0, p0, Lcom/tkay/expressad/video/dynview/g/a;->h:Z

    if-eqz v0, :cond_2

    .line 1128
    :try_start_2
    invoke-direct {p0, p1, v1}, Lcom/tkay/expressad/video/dynview/g/a;->a(Landroid/graphics/Canvas;Landroid/graphics/Path;)V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_2

    return-void

    :catch_2
    move-exception p1

    .line 1130
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    return-void

    .line 1133
    :cond_2
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/g/a;->g:Landroid/graphics/Bitmap;

    if-eqz v0, :cond_3

    invoke-virtual {v0}, Landroid/graphics/Bitmap;->isRecycled()Z

    move-result v0

    if-nez v0, :cond_3

    .line 1135
    :try_start_3
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/g/a;->g:Landroid/graphics/Bitmap;

    invoke-direct {p0, p1, v1, v0}, Lcom/tkay/expressad/video/dynview/g/a;->a(Landroid/graphics/Canvas;Landroid/graphics/Path;Landroid/graphics/Bitmap;)V
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_3

    return-void

    :catch_3
    move-exception p1

    .line 1137
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_3
    return-void

    .line 1144
    :cond_4
    iget v0, p0, Lcom/tkay/expressad/video/dynview/g/a;->b:F

    div-float/2addr v0, v1

    .line 1146
    new-instance v1, Landroid/graphics/Path;

    invoke-direct {v1}, Landroid/graphics/Path;-><init>()V

    .line 1147
    invoke-virtual {v1, v2, v2}, Landroid/graphics/Path;->moveTo(FF)V

    .line 1148
    iget v3, p0, Lcom/tkay/expressad/video/dynview/g/a;->c:F

    invoke-virtual {v1, v2, v3}, Landroid/graphics/Path;->lineTo(FF)V

    .line 1149
    iget v3, p0, Lcom/tkay/expressad/video/dynview/g/a;->d:I

    int-to-float v3, v3

    sub-float v3, v0, v3

    iget v4, p0, Lcom/tkay/expressad/video/dynview/g/a;->e:I

    int-to-float v4, v4

    sub-float/2addr v3, v4

    iget v4, p0, Lcom/tkay/expressad/video/dynview/g/a;->c:F

    invoke-virtual {v1, v3, v4}, Landroid/graphics/Path;->lineTo(FF)V

    .line 1150
    iget v3, p0, Lcom/tkay/expressad/video/dynview/g/a;->d:I

    int-to-float v3, v3

    add-float/2addr v3, v0

    iget v4, p0, Lcom/tkay/expressad/video/dynview/g/a;->e:I

    int-to-float v4, v4

    sub-float/2addr v3, v4

    invoke-virtual {v1, v3, v2}, Landroid/graphics/Path;->lineTo(FF)V

    .line 1152
    iget-boolean v3, p0, Lcom/tkay/expressad/video/dynview/g/a;->h:Z

    if-eqz v3, :cond_5

    .line 1154
    :try_start_4
    invoke-direct {p0, p1, v1}, Lcom/tkay/expressad/video/dynview/g/a;->a(Landroid/graphics/Canvas;Landroid/graphics/Path;)V
    :try_end_4
    .catch Ljava/lang/Exception; {:try_start_4 .. :try_end_4} :catch_4

    goto :goto_1

    :catch_4
    move-exception v1

    .line 1156
    invoke-virtual {v1}, Ljava/lang/Exception;->printStackTrace()V

    goto :goto_1

    .line 1159
    :cond_5
    iget-object v3, p0, Lcom/tkay/expressad/video/dynview/g/a;->f:Landroid/graphics/Bitmap;

    if-eqz v3, :cond_6

    invoke-virtual {v3}, Landroid/graphics/Bitmap;->isRecycled()Z

    move-result v3

    if-nez v3, :cond_6

    .line 1161
    :try_start_5
    iget-object v3, p0, Lcom/tkay/expressad/video/dynview/g/a;->f:Landroid/graphics/Bitmap;

    invoke-direct {p0, p1, v1, v3}, Lcom/tkay/expressad/video/dynview/g/a;->a(Landroid/graphics/Canvas;Landroid/graphics/Path;Landroid/graphics/Bitmap;)V
    :try_end_5
    .catch Ljava/lang/Exception; {:try_start_5 .. :try_end_5} :catch_5

    goto :goto_1

    :catch_5
    move-exception v1

    .line 1163
    invoke-virtual {v1}, Ljava/lang/Exception;->printStackTrace()V

    .line 1168
    :cond_6
    :goto_1
    new-instance v1, Landroid/graphics/Path;

    invoke-direct {v1}, Landroid/graphics/Path;-><init>()V

    .line 1169
    iget v3, p0, Lcom/tkay/expressad/video/dynview/g/a;->d:I

    int-to-float v3, v3

    add-float/2addr v3, v0

    iget v4, p0, Lcom/tkay/expressad/video/dynview/g/a;->e:I

    int-to-float v4, v4

    add-float/2addr v3, v4

    invoke-virtual {v1, v3, v2}, Landroid/graphics/Path;->moveTo(FF)V

    .line 1170
    iget v3, p0, Lcom/tkay/expressad/video/dynview/g/a;->b:F

    invoke-virtual {v1, v3, v2}, Landroid/graphics/Path;->lineTo(FF)V

    .line 1171
    iget v2, p0, Lcom/tkay/expressad/video/dynview/g/a;->b:F

    iget v3, p0, Lcom/tkay/expressad/video/dynview/g/a;->c:F

    invoke-virtual {v1, v2, v3}, Landroid/graphics/Path;->lineTo(FF)V

    .line 1172
    iget v2, p0, Lcom/tkay/expressad/video/dynview/g/a;->d:I

    int-to-float v2, v2

    sub-float/2addr v0, v2

    iget v2, p0, Lcom/tkay/expressad/video/dynview/g/a;->e:I

    int-to-float v2, v2

    add-float/2addr v0, v2

    iget v2, p0, Lcom/tkay/expressad/video/dynview/g/a;->c:F

    invoke-virtual {v1, v0, v2}, Landroid/graphics/Path;->lineTo(FF)V

    .line 1174
    iget-boolean v0, p0, Lcom/tkay/expressad/video/dynview/g/a;->h:Z

    if-eqz v0, :cond_7

    .line 1176
    :try_start_6
    invoke-direct {p0, p1, v1}, Lcom/tkay/expressad/video/dynview/g/a;->a(Landroid/graphics/Canvas;Landroid/graphics/Path;)V
    :try_end_6
    .catch Ljava/lang/Exception; {:try_start_6 .. :try_end_6} :catch_6

    return-void

    :catch_6
    move-exception p1

    .line 1178
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    return-void

    .line 1181
    :cond_7
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/g/a;->g:Landroid/graphics/Bitmap;

    if-eqz v0, :cond_8

    invoke-virtual {v0}, Landroid/graphics/Bitmap;->isRecycled()Z

    move-result v0

    if-nez v0, :cond_8

    .line 1183
    :try_start_7
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/g/a;->g:Landroid/graphics/Bitmap;

    invoke-direct {p0, p1, v1, v0}, Lcom/tkay/expressad/video/dynview/g/a;->a(Landroid/graphics/Canvas;Landroid/graphics/Path;Landroid/graphics/Bitmap;)V
    :try_end_7
    .catch Ljava/lang/Exception; {:try_start_7 .. :try_end_7} :catch_7

    return-void

    :catch_7
    move-exception p1

    .line 1185
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_8
    return-void
.end method

.method public final getOpacity()I
    .locals 1

    const/4 v0, -0x3

    return v0
.end method
