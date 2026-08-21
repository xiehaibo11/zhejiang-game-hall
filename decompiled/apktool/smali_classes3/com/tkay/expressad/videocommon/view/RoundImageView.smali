.class public Lcom/tkay/expressad/videocommon/view/RoundImageView;
.super Lcom/tkay/expressad/widget/TYImageView;


# static fields
.field private static final a:Ljava/lang/String; = "RoundImageView"

.field private static final c:I = 0x0

.field private static final d:I = 0x1

.field private static final e:I = 0x5

.field private static final m:Ljava/lang/String; = "state_instance"

.field private static final n:Ljava/lang/String; = "state_type"

.field private static final o:Ljava/lang/String; = "state_border_radius"


# instance fields
.field private b:I

.field private f:I

.field private g:Landroid/graphics/Paint;

.field private h:I

.field private i:Landroid/graphics/Matrix;

.field private j:Landroid/graphics/BitmapShader;

.field private k:I

.field private l:Landroid/graphics/RectF;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 2

    .line 89
    invoke-direct {p0, p1}, Lcom/tkay/expressad/widget/TYImageView;-><init>(Landroid/content/Context;)V

    .line 90
    new-instance p1, Landroid/graphics/Matrix;

    invoke-direct {p1}, Landroid/graphics/Matrix;-><init>()V

    iput-object p1, p0, Lcom/tkay/expressad/videocommon/view/RoundImageView;->i:Landroid/graphics/Matrix;

    .line 91
    new-instance p1, Landroid/graphics/Paint;

    invoke-direct {p1}, Landroid/graphics/Paint;-><init>()V

    iput-object p1, p0, Lcom/tkay/expressad/videocommon/view/RoundImageView;->g:Landroid/graphics/Paint;

    const/4 v0, 0x1

    .line 92
    invoke-virtual {p1, v0}, Landroid/graphics/Paint;->setAntiAlias(Z)V

    .line 96
    invoke-virtual {p0}, Lcom/tkay/expressad/videocommon/view/RoundImageView;->getResources()Landroid/content/res/Resources;

    move-result-object p1

    invoke-virtual {p1}, Landroid/content/res/Resources;->getDisplayMetrics()Landroid/util/DisplayMetrics;

    move-result-object p1

    const/high16 v1, 0x40a00000    # 5.0f

    .line 94
    invoke-static {v0, v1, p1}, Landroid/util/TypedValue;->applyDimension(IFLandroid/util/DisplayMetrics;)F

    move-result p1

    float-to-int p1, p1

    iput p1, p0, Lcom/tkay/expressad/videocommon/view/RoundImageView;->f:I

    .line 97
    iput v0, p0, Lcom/tkay/expressad/videocommon/view/RoundImageView;->b:I

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 1

    .line 77
    invoke-direct {p0, p1, p2}, Lcom/tkay/expressad/widget/TYImageView;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    .line 78
    new-instance p1, Landroid/graphics/Matrix;

    invoke-direct {p1}, Landroid/graphics/Matrix;-><init>()V

    iput-object p1, p0, Lcom/tkay/expressad/videocommon/view/RoundImageView;->i:Landroid/graphics/Matrix;

    .line 79
    new-instance p1, Landroid/graphics/Paint;

    invoke-direct {p1}, Landroid/graphics/Paint;-><init>()V

    iput-object p1, p0, Lcom/tkay/expressad/videocommon/view/RoundImageView;->g:Landroid/graphics/Paint;

    const/4 p2, 0x1

    .line 80
    invoke-virtual {p1, p2}, Landroid/graphics/Paint;->setAntiAlias(Z)V

    .line 84
    invoke-virtual {p0}, Lcom/tkay/expressad/videocommon/view/RoundImageView;->getResources()Landroid/content/res/Resources;

    move-result-object p1

    invoke-virtual {p1}, Landroid/content/res/Resources;->getDisplayMetrics()Landroid/util/DisplayMetrics;

    move-result-object p1

    const/high16 v0, 0x40a00000    # 5.0f

    .line 82
    invoke-static {p2, v0, p1}, Landroid/util/TypedValue;->applyDimension(IFLandroid/util/DisplayMetrics;)F

    move-result p1

    float-to-int p1, p1

    iput p1, p0, Lcom/tkay/expressad/videocommon/view/RoundImageView;->f:I

    .line 85
    iput p2, p0, Lcom/tkay/expressad/videocommon/view/RoundImageView;->b:I

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V
    .locals 0

    .line 64
    invoke-direct {p0, p1, p2, p3}, Lcom/tkay/expressad/widget/TYImageView;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V

    .line 65
    new-instance p1, Landroid/graphics/Matrix;

    invoke-direct {p1}, Landroid/graphics/Matrix;-><init>()V

    iput-object p1, p0, Lcom/tkay/expressad/videocommon/view/RoundImageView;->i:Landroid/graphics/Matrix;

    .line 66
    new-instance p1, Landroid/graphics/Paint;

    invoke-direct {p1}, Landroid/graphics/Paint;-><init>()V

    iput-object p1, p0, Lcom/tkay/expressad/videocommon/view/RoundImageView;->g:Landroid/graphics/Paint;

    const/4 p2, 0x1

    .line 67
    invoke-virtual {p1, p2}, Landroid/graphics/Paint;->setAntiAlias(Z)V

    .line 71
    invoke-virtual {p0}, Lcom/tkay/expressad/videocommon/view/RoundImageView;->getResources()Landroid/content/res/Resources;

    move-result-object p1

    invoke-virtual {p1}, Landroid/content/res/Resources;->getDisplayMetrics()Landroid/util/DisplayMetrics;

    move-result-object p1

    const/high16 p3, 0x40a00000    # 5.0f

    .line 69
    invoke-static {p2, p3, p1}, Landroid/util/TypedValue;->applyDimension(IFLandroid/util/DisplayMetrics;)F

    move-result p1

    float-to-int p1, p1

    iput p1, p0, Lcom/tkay/expressad/videocommon/view/RoundImageView;->f:I

    .line 72
    iput p2, p0, Lcom/tkay/expressad/videocommon/view/RoundImageView;->b:I

    return-void
.end method

.method private static a(Landroid/graphics/drawable/Drawable;)Landroid/graphics/Bitmap;
    .locals 5

    .line 225
    :try_start_0
    instance-of v0, p0, Landroid/graphics/drawable/BitmapDrawable;

    if-eqz v0, :cond_0

    .line 226
    check-cast p0, Landroid/graphics/drawable/BitmapDrawable;

    .line 227
    invoke-virtual {p0}, Landroid/graphics/drawable/BitmapDrawable;->getBitmap()Landroid/graphics/Bitmap;

    move-result-object p0

    return-object p0

    .line 229
    :cond_0
    invoke-virtual {p0}, Landroid/graphics/drawable/Drawable;->getIntrinsicWidth()I

    move-result v0

    .line 230
    invoke-virtual {p0}, Landroid/graphics/drawable/Drawable;->getIntrinsicHeight()I

    move-result v1

    .line 231
    sget-object v2, Landroid/graphics/Bitmap$Config;->ARGB_4444:Landroid/graphics/Bitmap$Config;

    invoke-static {v0, v1, v2}, Landroid/graphics/Bitmap;->createBitmap(IILandroid/graphics/Bitmap$Config;)Landroid/graphics/Bitmap;

    move-result-object v2

    .line 232
    new-instance v3, Landroid/graphics/Canvas;

    invoke-direct {v3, v2}, Landroid/graphics/Canvas;-><init>(Landroid/graphics/Bitmap;)V

    const/4 v4, 0x0

    .line 233
    invoke-virtual {p0, v4, v4, v0, v1}, Landroid/graphics/drawable/Drawable;->setBounds(IIII)V

    .line 234
    invoke-virtual {p0, v3}, Landroid/graphics/drawable/Drawable;->draw(Landroid/graphics/Canvas;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object v2

    :catchall_0
    move-exception p0

    .line 237
    invoke-virtual {p0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    const/4 p0, 0x0

    return-object p0
.end method

.method private a()V
    .locals 4

    .line 196
    :try_start_0
    invoke-virtual {p0}, Lcom/tkay/expressad/videocommon/view/RoundImageView;->getDrawable()Landroid/graphics/drawable/Drawable;

    move-result-object v0

    if-nez v0, :cond_0

    return-void

    .line 201
    :cond_0
    invoke-static {v0}, Lcom/tkay/expressad/videocommon/view/RoundImageView;->a(Landroid/graphics/drawable/Drawable;)Landroid/graphics/Bitmap;

    move-result-object v0

    if-eqz v0, :cond_3

    .line 202
    invoke-virtual {v0}, Landroid/graphics/Bitmap;->isRecycled()Z

    move-result v1

    if-nez v1, :cond_3

    .line 203
    new-instance v1, Landroid/graphics/BitmapShader;

    sget-object v2, Landroid/graphics/Shader$TileMode;->CLAMP:Landroid/graphics/Shader$TileMode;

    invoke-direct {v1, v0, v2, v2}, Landroid/graphics/BitmapShader;-><init>(Landroid/graphics/Bitmap;Landroid/graphics/Shader$TileMode;Landroid/graphics/Shader$TileMode;)V

    iput-object v1, p0, Lcom/tkay/expressad/videocommon/view/RoundImageView;->j:Landroid/graphics/BitmapShader;

    .line 205
    iget v1, p0, Lcom/tkay/expressad/videocommon/view/RoundImageView;->b:I

    const/high16 v2, 0x3f800000    # 1.0f

    if-nez v1, :cond_1

    .line 206
    invoke-virtual {v0}, Landroid/graphics/Bitmap;->getWidth()I

    move-result v1

    invoke-virtual {v0}, Landroid/graphics/Bitmap;->getHeight()I

    move-result v0

    invoke-static {v1, v0}, Ljava/lang/Math;->min(II)I

    move-result v0

    .line 207
    iget v1, p0, Lcom/tkay/expressad/videocommon/view/RoundImageView;->k:I

    int-to-float v1, v1

    mul-float/2addr v1, v2

    int-to-float v0, v0

    div-float v2, v1, v0

    goto :goto_0

    .line 209
    :cond_1
    iget v1, p0, Lcom/tkay/expressad/videocommon/view/RoundImageView;->b:I

    const/4 v3, 0x1

    if-ne v1, v3, :cond_2

    .line 210
    invoke-virtual {p0}, Lcom/tkay/expressad/videocommon/view/RoundImageView;->getWidth()I

    move-result v1

    int-to-float v1, v1

    mul-float/2addr v1, v2

    invoke-virtual {v0}, Landroid/graphics/Bitmap;->getWidth()I

    move-result v3

    int-to-float v3, v3

    div-float/2addr v1, v3

    invoke-virtual {p0}, Lcom/tkay/expressad/videocommon/view/RoundImageView;->getHeight()I

    move-result v3

    int-to-float v3, v3

    mul-float/2addr v3, v2

    .line 211
    invoke-virtual {v0}, Landroid/graphics/Bitmap;->getHeight()I

    move-result v0

    int-to-float v0, v0

    div-float/2addr v3, v0

    .line 210
    invoke-static {v1, v3}, Ljava/lang/Math;->max(FF)F

    move-result v2

    .line 213
    :cond_2
    :goto_0
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/view/RoundImageView;->i:Landroid/graphics/Matrix;

    invoke-virtual {v0, v2, v2}, Landroid/graphics/Matrix;->setScale(FF)V

    .line 214
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/view/RoundImageView;->j:Landroid/graphics/BitmapShader;

    iget-object v1, p0, Lcom/tkay/expressad/videocommon/view/RoundImageView;->i:Landroid/graphics/Matrix;

    invoke-virtual {v0, v1}, Landroid/graphics/BitmapShader;->setLocalMatrix(Landroid/graphics/Matrix;)V

    .line 216
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/view/RoundImageView;->g:Landroid/graphics/Paint;

    iget-object v1, p0, Lcom/tkay/expressad/videocommon/view/RoundImageView;->j:Landroid/graphics/BitmapShader;

    invoke-virtual {v0, v1}, Landroid/graphics/Paint;->setShader(Landroid/graphics/Shader;)Landroid/graphics/Shader;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_3
    return-void

    :catchall_0
    move-exception v0

    .line 219
    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    return-void
.end method


# virtual methods
.method protected onDraw(Landroid/graphics/Canvas;)V
    .locals 5

    .line 118
    :try_start_0
    invoke-virtual {p0}, Lcom/tkay/expressad/videocommon/view/RoundImageView;->getDrawable()Landroid/graphics/drawable/Drawable;

    move-result-object v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    if-nez v0, :cond_0

    return-void

    :cond_0
    const/4 v0, 0x1

    .line 1196
    :try_start_1
    invoke-virtual {p0}, Lcom/tkay/expressad/videocommon/view/RoundImageView;->getDrawable()Landroid/graphics/drawable/Drawable;

    move-result-object v1

    if-nez v1, :cond_1

    goto :goto_1

    .line 1201
    :cond_1
    invoke-static {v1}, Lcom/tkay/expressad/videocommon/view/RoundImageView;->a(Landroid/graphics/drawable/Drawable;)Landroid/graphics/Bitmap;

    move-result-object v1

    if-eqz v1, :cond_4

    .line 1202
    invoke-virtual {v1}, Landroid/graphics/Bitmap;->isRecycled()Z

    move-result v2

    if-nez v2, :cond_4

    .line 1203
    new-instance v2, Landroid/graphics/BitmapShader;

    sget-object v3, Landroid/graphics/Shader$TileMode;->CLAMP:Landroid/graphics/Shader$TileMode;

    invoke-direct {v2, v1, v3, v3}, Landroid/graphics/BitmapShader;-><init>(Landroid/graphics/Bitmap;Landroid/graphics/Shader$TileMode;Landroid/graphics/Shader$TileMode;)V

    iput-object v2, p0, Lcom/tkay/expressad/videocommon/view/RoundImageView;->j:Landroid/graphics/BitmapShader;

    .line 1205
    iget v2, p0, Lcom/tkay/expressad/videocommon/view/RoundImageView;->b:I

    const/high16 v3, 0x3f800000    # 1.0f

    if-nez v2, :cond_2

    .line 1206
    invoke-virtual {v1}, Landroid/graphics/Bitmap;->getWidth()I

    move-result v2

    invoke-virtual {v1}, Landroid/graphics/Bitmap;->getHeight()I

    move-result v1

    invoke-static {v2, v1}, Ljava/lang/Math;->min(II)I

    move-result v1

    .line 1207
    iget v2, p0, Lcom/tkay/expressad/videocommon/view/RoundImageView;->k:I

    int-to-float v2, v2

    mul-float/2addr v2, v3

    int-to-float v1, v1

    div-float v3, v2, v1

    goto :goto_0

    .line 1209
    :cond_2
    iget v2, p0, Lcom/tkay/expressad/videocommon/view/RoundImageView;->b:I

    if-ne v2, v0, :cond_3

    .line 1210
    invoke-virtual {p0}, Lcom/tkay/expressad/videocommon/view/RoundImageView;->getWidth()I

    move-result v2

    int-to-float v2, v2

    mul-float/2addr v2, v3

    invoke-virtual {v1}, Landroid/graphics/Bitmap;->getWidth()I

    move-result v4

    int-to-float v4, v4

    div-float/2addr v2, v4

    invoke-virtual {p0}, Lcom/tkay/expressad/videocommon/view/RoundImageView;->getHeight()I

    move-result v4

    int-to-float v4, v4

    mul-float/2addr v4, v3

    .line 1211
    invoke-virtual {v1}, Landroid/graphics/Bitmap;->getHeight()I

    move-result v1

    int-to-float v1, v1

    div-float/2addr v4, v1

    .line 1210
    invoke-static {v2, v4}, Ljava/lang/Math;->max(FF)F

    move-result v3

    .line 1213
    :cond_3
    :goto_0
    iget-object v1, p0, Lcom/tkay/expressad/videocommon/view/RoundImageView;->i:Landroid/graphics/Matrix;

    invoke-virtual {v1, v3, v3}, Landroid/graphics/Matrix;->setScale(FF)V

    .line 1214
    iget-object v1, p0, Lcom/tkay/expressad/videocommon/view/RoundImageView;->j:Landroid/graphics/BitmapShader;

    iget-object v2, p0, Lcom/tkay/expressad/videocommon/view/RoundImageView;->i:Landroid/graphics/Matrix;

    invoke-virtual {v1, v2}, Landroid/graphics/BitmapShader;->setLocalMatrix(Landroid/graphics/Matrix;)V

    .line 1216
    iget-object v1, p0, Lcom/tkay/expressad/videocommon/view/RoundImageView;->g:Landroid/graphics/Paint;

    iget-object v2, p0, Lcom/tkay/expressad/videocommon/view/RoundImageView;->j:Landroid/graphics/BitmapShader;

    invoke-virtual {v1, v2}, Landroid/graphics/Paint;->setShader(Landroid/graphics/Shader;)Landroid/graphics/Shader;
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_1

    :catchall_0
    move-exception v1

    .line 1219
    :try_start_2
    invoke-virtual {v1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    .line 124
    :cond_4
    :goto_1
    iget v1, p0, Lcom/tkay/expressad/videocommon/view/RoundImageView;->b:I

    if-ne v1, v0, :cond_5

    .line 125
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/view/RoundImageView;->l:Landroid/graphics/RectF;

    iget v1, p0, Lcom/tkay/expressad/videocommon/view/RoundImageView;->f:I

    int-to-float v1, v1

    iget v2, p0, Lcom/tkay/expressad/videocommon/view/RoundImageView;->f:I

    int-to-float v2, v2

    iget-object v3, p0, Lcom/tkay/expressad/videocommon/view/RoundImageView;->g:Landroid/graphics/Paint;

    invoke-virtual {p1, v0, v1, v2, v3}, Landroid/graphics/Canvas;->drawRoundRect(Landroid/graphics/RectF;FFLandroid/graphics/Paint;)V

    return-void

    .line 128
    :cond_5
    iget v0, p0, Lcom/tkay/expressad/videocommon/view/RoundImageView;->h:I

    int-to-float v0, v0

    iget v1, p0, Lcom/tkay/expressad/videocommon/view/RoundImageView;->h:I

    int-to-float v1, v1

    iget v2, p0, Lcom/tkay/expressad/videocommon/view/RoundImageView;->h:I

    int-to-float v2, v2

    iget-object v3, p0, Lcom/tkay/expressad/videocommon/view/RoundImageView;->g:Landroid/graphics/Paint;

    invoke-virtual {p1, v0, v1, v2, v3}, Landroid/graphics/Canvas;->drawCircle(FFFLandroid/graphics/Paint;)V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    return-void

    :catchall_1
    move-exception p1

    .line 132
    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    return-void
.end method

.method protected onMeasure(II)V
    .locals 0

    .line 103
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/widget/TYImageView;->onMeasure(II)V

    .line 108
    iget p1, p0, Lcom/tkay/expressad/videocommon/view/RoundImageView;->b:I

    if-nez p1, :cond_0

    .line 109
    invoke-virtual {p0}, Lcom/tkay/expressad/videocommon/view/RoundImageView;->getMeasuredWidth()I

    move-result p1

    invoke-virtual {p0}, Lcom/tkay/expressad/videocommon/view/RoundImageView;->getMeasuredHeight()I

    move-result p2

    invoke-static {p1, p2}, Ljava/lang/Math;->min(II)I

    move-result p1

    iput p1, p0, Lcom/tkay/expressad/videocommon/view/RoundImageView;->k:I

    .line 110
    div-int/lit8 p2, p1, 0x2

    iput p2, p0, Lcom/tkay/expressad/videocommon/view/RoundImageView;->h:I

    .line 111
    invoke-virtual {p0, p1, p1}, Lcom/tkay/expressad/videocommon/view/RoundImageView;->setMeasuredDimension(II)V

    :cond_0
    return-void
.end method

.method protected onRestoreInstanceState(Landroid/os/Parcelable;)V
    .locals 1

    .line 160
    instance-of v0, p1, Landroid/os/Bundle;

    if-eqz v0, :cond_0

    .line 161
    check-cast p1, Landroid/os/Bundle;

    const-string v0, "state_instance"

    .line 163
    invoke-virtual {p1, v0}, Landroid/os/Bundle;->getParcelable(Ljava/lang/String;)Landroid/os/Parcelable;

    move-result-object v0

    .line 162
    invoke-super {p0, v0}, Lcom/tkay/expressad/widget/TYImageView;->onRestoreInstanceState(Landroid/os/Parcelable;)V

    const-string v0, "state_type"

    .line 164
    invoke-virtual {p1, v0}, Landroid/os/Bundle;->getInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/tkay/expressad/videocommon/view/RoundImageView;->b:I

    const-string v0, "state_border_radius"

    .line 165
    invoke-virtual {p1, v0}, Landroid/os/Bundle;->getInt(Ljava/lang/String;)I

    move-result p1

    iput p1, p0, Lcom/tkay/expressad/videocommon/view/RoundImageView;->f:I

    return-void

    .line 167
    :cond_0
    invoke-super {p0, p1}, Lcom/tkay/expressad/widget/TYImageView;->onRestoreInstanceState(Landroid/os/Parcelable;)V

    return-void
.end method

.method protected onSaveInstanceState()Landroid/os/Parcelable;
    .locals 3

    .line 151
    new-instance v0, Landroid/os/Bundle;

    invoke-direct {v0}, Landroid/os/Bundle;-><init>()V

    .line 152
    invoke-super {p0}, Lcom/tkay/expressad/widget/TYImageView;->onSaveInstanceState()Landroid/os/Parcelable;

    move-result-object v1

    const-string v2, "state_instance"

    invoke-virtual {v0, v2, v1}, Landroid/os/Bundle;->putParcelable(Ljava/lang/String;Landroid/os/Parcelable;)V

    .line 153
    iget v1, p0, Lcom/tkay/expressad/videocommon/view/RoundImageView;->b:I

    const-string v2, "state_type"

    invoke-virtual {v0, v2, v1}, Landroid/os/Bundle;->putInt(Ljava/lang/String;I)V

    .line 154
    iget v1, p0, Lcom/tkay/expressad/videocommon/view/RoundImageView;->f:I

    const-string v2, "state_border_radius"

    invoke-virtual {v0, v2, v1}, Landroid/os/Bundle;->putInt(Ljava/lang/String;I)V

    return-object v0
.end method

.method protected onSizeChanged(IIII)V
    .locals 0

    .line 143
    invoke-super {p0, p1, p2, p3, p4}, Lcom/tkay/expressad/widget/TYImageView;->onSizeChanged(IIII)V

    .line 145
    iget p1, p0, Lcom/tkay/expressad/videocommon/view/RoundImageView;->b:I

    const/4 p2, 0x1

    if-ne p1, p2, :cond_0

    .line 146
    new-instance p1, Landroid/graphics/RectF;

    invoke-virtual {p0}, Lcom/tkay/expressad/videocommon/view/RoundImageView;->getWidth()I

    move-result p2

    int-to-float p2, p2

    invoke-virtual {p0}, Lcom/tkay/expressad/videocommon/view/RoundImageView;->getHeight()I

    move-result p3

    int-to-float p3, p3

    const/4 p4, 0x0

    invoke-direct {p1, p4, p4, p2, p3}, Landroid/graphics/RectF;-><init>(FFFF)V

    iput-object p1, p0, Lcom/tkay/expressad/videocommon/view/RoundImageView;->l:Landroid/graphics/RectF;

    :cond_0
    return-void
.end method

.method public setBorderRadius(I)V
    .locals 1

    .line 173
    invoke-virtual {p0}, Lcom/tkay/expressad/videocommon/view/RoundImageView;->getContext()Landroid/content/Context;

    move-result-object v0

    int-to-float p1, p1

    invoke-static {v0, p1}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result p1

    .line 174
    iget v0, p0, Lcom/tkay/expressad/videocommon/view/RoundImageView;->f:I

    if-eq v0, p1, :cond_0

    .line 175
    iput p1, p0, Lcom/tkay/expressad/videocommon/view/RoundImageView;->f:I

    .line 176
    invoke-virtual {p0}, Lcom/tkay/expressad/videocommon/view/RoundImageView;->invalidate()V

    :cond_0
    return-void
.end method

.method public setType(I)V
    .locals 1

    .line 181
    iget v0, p0, Lcom/tkay/expressad/videocommon/view/RoundImageView;->b:I

    if-eq v0, p1, :cond_1

    .line 182
    iput p1, p0, Lcom/tkay/expressad/videocommon/view/RoundImageView;->b:I

    const/4 v0, 0x1

    if-eq p1, v0, :cond_0

    if-eqz p1, :cond_0

    const/4 p1, 0x0

    .line 184
    iput p1, p0, Lcom/tkay/expressad/videocommon/view/RoundImageView;->b:I

    .line 186
    :cond_0
    invoke-virtual {p0}, Lcom/tkay/expressad/videocommon/view/RoundImageView;->requestLayout()V

    :cond_1
    return-void
.end method
