.class public Lcom/tkay/expressad/foundation/webview/ProgressBar;
.super Landroid/view/View;

# interfaces
.implements Lcom/tkay/expressad/foundation/webview/a;


# static fields
.field private static final C:F = 1200.0f

.field private static final L:J = 0x19L

.field private static final g:Ljava/lang/String; = "ProgressBar"

.field private static final h:Z = false

.field private static final t:F = 0.05f

.field private static final u:F = 0.2f

.field private static final v:F = 0.4f

.field private static final w:F = 1.0f

.field private static final x:J = 0x7d0L

.field private static final y:F = 0.2f


# instance fields
.field private A:I

.field private B:I

.field private D:J

.field private E:Landroid/graphics/drawable/Drawable;

.field private F:Landroid/graphics/drawable/Drawable;

.field private G:Landroid/graphics/drawable/Drawable;

.field private H:Landroid/graphics/drawable/Drawable;

.field private I:Z

.field private J:Lcom/tkay/expressad/foundation/webview/a$a;

.field private K:Landroid/os/Handler;

.field private M:Z

.field private N:Z

.field f:Ljava/lang/Runnable;

.field private i:Landroid/graphics/Rect;

.field private j:F

.field private k:F

.field private l:J

.field private m:F

.field private n:Z

.field private o:F

.field private p:F

.field private q:F

.field private r:J

.field private s:I

.field private z:I


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 2

    .line 71
    invoke-direct {p0, p1}, Landroid/view/View;-><init>(Landroid/content/Context;)V

    .line 21
    new-instance p1, Landroid/graphics/Rect;

    invoke-direct {p1}, Landroid/graphics/Rect;-><init>()V

    iput-object p1, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->i:Landroid/graphics/Rect;

    const p1, 0x3f733333    # 0.95f

    .line 23
    iput p1, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->k:F

    const-wide/16 v0, 0x19

    .line 45
    iput-wide v0, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->D:J

    const/4 p1, 0x0

    .line 52
    iput-boolean p1, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->I:Z

    .line 56
    new-instance v0, Landroid/os/Handler;

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v1

    invoke-direct {v0, v1}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    iput-object v0, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->K:Landroid/os/Handler;

    .line 57
    new-instance v0, Lcom/tkay/expressad/foundation/webview/ProgressBar$1;

    invoke-direct {v0, p0}, Lcom/tkay/expressad/foundation/webview/ProgressBar$1;-><init>(Lcom/tkay/expressad/foundation/webview/ProgressBar;)V

    iput-object v0, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->f:Ljava/lang/Runnable;

    .line 68
    iput-boolean p1, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->N:Z

    .line 1081
    invoke-virtual {p0, p1}, Lcom/tkay/expressad/foundation/webview/ProgressBar;->setWillNotDraw(Z)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 1

    .line 76
    invoke-direct {p0, p1, p2}, Landroid/view/View;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    .line 21
    new-instance p1, Landroid/graphics/Rect;

    invoke-direct {p1}, Landroid/graphics/Rect;-><init>()V

    iput-object p1, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->i:Landroid/graphics/Rect;

    const p1, 0x3f733333    # 0.95f

    .line 23
    iput p1, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->k:F

    const-wide/16 p1, 0x19

    .line 45
    iput-wide p1, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->D:J

    const/4 p1, 0x0

    .line 52
    iput-boolean p1, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->I:Z

    .line 56
    new-instance p2, Landroid/os/Handler;

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v0

    invoke-direct {p2, v0}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    iput-object p2, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->K:Landroid/os/Handler;

    .line 57
    new-instance p2, Lcom/tkay/expressad/foundation/webview/ProgressBar$1;

    invoke-direct {p2, p0}, Lcom/tkay/expressad/foundation/webview/ProgressBar$1;-><init>(Lcom/tkay/expressad/foundation/webview/ProgressBar;)V

    iput-object p2, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->f:Ljava/lang/Runnable;

    .line 68
    iput-boolean p1, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->N:Z

    .line 2081
    invoke-virtual {p0, p1}, Lcom/tkay/expressad/foundation/webview/ProgressBar;->setWillNotDraw(Z)V

    return-void
.end method

.method private a()V
    .locals 1

    const/4 v0, 0x0

    .line 81
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/foundation/webview/ProgressBar;->setWillNotDraw(Z)V

    return-void
.end method

.method private a(Landroid/graphics/Canvas;F)V
    .locals 6

    .line 208
    iget-boolean v0, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->n:Z

    const/4 v1, 0x0

    const/4 v2, 0x0

    if-eqz v0, :cond_5

    const/high16 v0, 0x3f800000    # 1.0f

    .line 209
    iget v3, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->o:F

    iget v4, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->j:F

    const/high16 v5, 0x3f000000    # 0.5f

    mul-float/2addr v4, v5

    div-float/2addr v3, v4

    sub-float/2addr v0, v3

    const/high16 v3, 0x437f0000    # 255.0f

    mul-float/2addr v0, v3

    float-to-int v0, v0

    if-gez v0, :cond_0

    move v0, v2

    .line 214
    :cond_0
    iget v3, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->o:F

    iget v4, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->j:F

    mul-float/2addr v4, v5

    cmpl-float v3, v3, v4

    if-lez v3, :cond_1

    .line 215
    invoke-virtual {p0, v2}, Lcom/tkay/expressad/foundation/webview/ProgressBar;->setVisible(Z)V

    .line 218
    :cond_1
    iget-object v3, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->F:Landroid/graphics/drawable/Drawable;

    if-eqz v3, :cond_2

    .line 219
    invoke-virtual {v3, v0}, Landroid/graphics/drawable/Drawable;->setAlpha(I)V

    .line 221
    :cond_2
    iget-object v3, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->G:Landroid/graphics/drawable/Drawable;

    if-eqz v3, :cond_3

    .line 222
    invoke-virtual {v3, v0}, Landroid/graphics/drawable/Drawable;->setAlpha(I)V

    .line 224
    :cond_3
    iget-object v3, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->E:Landroid/graphics/drawable/Drawable;

    if-eqz v3, :cond_4

    .line 225
    invoke-virtual {v3, v0}, Landroid/graphics/drawable/Drawable;->setAlpha(I)V

    .line 227
    :cond_4
    invoke-virtual {p1}, Landroid/graphics/Canvas;->save()I

    .line 228
    iget v0, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->o:F

    invoke-virtual {p1, v0, v1}, Landroid/graphics/Canvas;->translate(FF)V

    .line 231
    :cond_5
    iget-object v0, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->F:Landroid/graphics/drawable/Drawable;

    if-eqz v0, :cond_6

    iget-object v0, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->E:Landroid/graphics/drawable/Drawable;

    if-eqz v0, :cond_6

    .line 232
    iget-object v0, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->i:Landroid/graphics/Rect;

    invoke-virtual {v0}, Landroid/graphics/Rect;->width()I

    move-result v0

    int-to-float v0, v0

    iget-object v3, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->E:Landroid/graphics/drawable/Drawable;

    .line 233
    invoke-virtual {v3}, Landroid/graphics/drawable/Drawable;->getIntrinsicWidth()I

    move-result v3

    int-to-float v3, v3

    const v4, 0x3d4ccccd    # 0.05f

    mul-float/2addr v3, v4

    sub-float/2addr v0, v3

    float-to-int v0, v0

    .line 234
    iget-object v3, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->F:Landroid/graphics/drawable/Drawable;

    .line 235
    invoke-virtual {v3}, Landroid/graphics/drawable/Drawable;->getIntrinsicHeight()I

    move-result v4

    .line 234
    invoke-virtual {v3, v2, v2, v0, v4}, Landroid/graphics/drawable/Drawable;->setBounds(IIII)V

    .line 236
    iget-object v0, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->F:Landroid/graphics/drawable/Drawable;

    invoke-virtual {v0, p1}, Landroid/graphics/drawable/Drawable;->draw(Landroid/graphics/Canvas;)V

    .line 239
    :cond_6
    iget-boolean v0, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->n:Z

    if-eqz v0, :cond_7

    iget-object v0, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->G:Landroid/graphics/drawable/Drawable;

    if-eqz v0, :cond_7

    iget-object v3, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->E:Landroid/graphics/drawable/Drawable;

    if-eqz v3, :cond_7

    .line 241
    invoke-virtual {v0}, Landroid/graphics/drawable/Drawable;->getIntrinsicWidth()I

    move-result v0

    .line 242
    iget-object v3, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->G:Landroid/graphics/drawable/Drawable;

    .line 243
    invoke-virtual {v3}, Landroid/graphics/drawable/Drawable;->getIntrinsicHeight()I

    move-result v4

    .line 242
    invoke-virtual {v3, v2, v2, v0, v4}, Landroid/graphics/drawable/Drawable;->setBounds(IIII)V

    .line 244
    invoke-virtual {p1}, Landroid/graphics/Canvas;->save()I

    neg-int v0, v0

    int-to-float v0, v0

    .line 245
    invoke-virtual {p1, v0, v1}, Landroid/graphics/Canvas;->translate(FF)V

    .line 246
    iget-object v0, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->G:Landroid/graphics/drawable/Drawable;

    invoke-virtual {v0, p1}, Landroid/graphics/drawable/Drawable;->draw(Landroid/graphics/Canvas;)V

    .line 247
    invoke-virtual {p1}, Landroid/graphics/Canvas;->restore()V

    .line 250
    :cond_7
    iget-object v0, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->E:Landroid/graphics/drawable/Drawable;

    if-eqz v0, :cond_8

    .line 251
    invoke-virtual {p1}, Landroid/graphics/Canvas;->save()I

    .line 252
    iget-object v0, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->i:Landroid/graphics/Rect;

    invoke-virtual {v0}, Landroid/graphics/Rect;->width()I

    move-result v0

    invoke-virtual {p0}, Lcom/tkay/expressad/foundation/webview/ProgressBar;->getWidth()I

    move-result v2

    sub-int/2addr v0, v2

    int-to-float v0, v0

    invoke-virtual {p1, v0, v1}, Landroid/graphics/Canvas;->translate(FF)V

    .line 253
    iget-object v0, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->E:Landroid/graphics/drawable/Drawable;

    invoke-virtual {v0, p1}, Landroid/graphics/drawable/Drawable;->draw(Landroid/graphics/Canvas;)V

    .line 254
    invoke-virtual {p1}, Landroid/graphics/Canvas;->restore()V

    .line 257
    :cond_8
    iget-boolean v0, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->n:Z

    if-nez v0, :cond_a

    iget v0, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->p:F

    iget v2, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->k:F

    sub-float/2addr v0, v2

    .line 258
    invoke-static {v0}, Ljava/lang/Math;->abs(F)F

    move-result v0

    const v2, 0x3727c5ac    # 1.0E-5f

    cmpg-float v0, v0, v2

    if-gez v0, :cond_a

    iget-object v0, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->H:Landroid/graphics/drawable/Drawable;

    if-eqz v0, :cond_a

    .line 260
    iget v2, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->s:I

    int-to-float v2, v2

    const v3, 0x3e4ccccd    # 0.2f

    mul-float/2addr p2, v3

    iget v3, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->j:F

    mul-float/2addr p2, v3

    add-float/2addr v2, p2

    float-to-int p2, v2

    iput p2, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->s:I

    .line 262
    invoke-virtual {v0}, Landroid/graphics/drawable/Drawable;->getIntrinsicWidth()I

    move-result v0

    add-int/2addr p2, v0

    iget-object v0, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->i:Landroid/graphics/Rect;

    .line 263
    invoke-virtual {v0}, Landroid/graphics/Rect;->width()I

    move-result v0

    if-lt p2, v0, :cond_9

    .line 264
    iget-object p2, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->H:Landroid/graphics/drawable/Drawable;

    invoke-virtual {p2}, Landroid/graphics/drawable/Drawable;->getIntrinsicWidth()I

    move-result p2

    neg-int p2, p2

    iput p2, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->s:I

    .line 267
    :cond_9
    invoke-virtual {p1}, Landroid/graphics/Canvas;->save()I

    .line 268
    iget p2, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->s:I

    int-to-float p2, p2

    invoke-virtual {p1, p2, v1}, Landroid/graphics/Canvas;->translate(FF)V

    .line 269
    iget-object p2, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->H:Landroid/graphics/drawable/Drawable;

    invoke-virtual {p2, p1}, Landroid/graphics/drawable/Drawable;->draw(Landroid/graphics/Canvas;)V

    .line 270
    invoke-virtual {p1}, Landroid/graphics/Canvas;->restore()V

    .line 273
    :cond_a
    iget-boolean p2, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->n:Z

    if-eqz p2, :cond_b

    .line 274
    invoke-virtual {p1}, Landroid/graphics/Canvas;->restore()V

    :cond_b
    return-void
.end method

.method private b()F
    .locals 7

    .line 118
    iget-boolean v0, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->n:Z

    const/high16 v1, 0x3f800000    # 1.0f

    const v2, 0x3ecccccd    # 0.4f

    if-nez v0, :cond_5

    .line 119
    iget-wide v3, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->r:J

    const-wide/16 v5, 0x7d0

    cmp-long v0, v3, v5

    const v3, 0x3d4ccccd    # 0.05f

    if-gez v0, :cond_4

    .line 120
    iget v0, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->A:I

    const/4 v4, 0x1

    if-ne v0, v4, :cond_1

    .line 121
    iget-boolean v0, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->M:Z

    if-eqz v0, :cond_0

    return v1

    :cond_0
    return v2

    .line 122
    :cond_1
    iget v0, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->z:I

    const v1, 0x3e4ccccd    # 0.2f

    if-ne v0, v4, :cond_3

    .line 123
    iget-boolean v0, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->M:Z

    if-eqz v0, :cond_2

    return v2

    :cond_2
    return v1

    .line 125
    :cond_3
    iget-boolean v0, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->M:Z

    if-eqz v0, :cond_4

    return v1

    :cond_4
    return v3

    .line 131
    :cond_5
    iget-boolean v0, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->M:Z

    if-eqz v0, :cond_6

    return v1

    :cond_6
    return v2
.end method


# virtual methods
.method public draw(Landroid/graphics/Canvas;)V
    .locals 10

    .line 90
    iget-boolean v0, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->I:Z

    const/4 v1, 0x1

    if-nez v0, :cond_0

    .line 91
    iput-boolean v1, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->I:Z

    .line 94
    :cond_0
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v2

    .line 95
    iget-boolean v0, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->N:Z

    if-eqz v0, :cond_1

    const-wide/16 v4, 0x0

    goto :goto_0

    :cond_1
    iget-wide v4, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->l:J

    sub-long v4, v2, v4

    :goto_0
    long-to-float v0, v4

    const/high16 v6, 0x447a0000    # 1000.0f

    div-float/2addr v0, v6

    .line 96
    invoke-static {v0}, Ljava/lang/Math;->abs(F)F

    move-result v0

    iput v0, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->m:F

    .line 97
    iput-wide v2, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->l:J

    .line 98
    iget-wide v2, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->r:J

    add-long/2addr v2, v4

    iput-wide v2, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->r:J

    .line 2118
    iget-boolean v0, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->n:Z

    const v4, 0x3ecccccd    # 0.4f

    const v5, 0x3e4ccccd    # 0.2f

    const v6, 0x3d4ccccd    # 0.05f

    const/high16 v7, 0x3f800000    # 1.0f

    if-nez v0, :cond_5

    const-wide/16 v8, 0x7d0

    cmp-long v0, v2, v8

    if-gez v0, :cond_4

    .line 2120
    iget v0, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->A:I

    if-ne v0, v1, :cond_2

    .line 2121
    iget-boolean v0, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->M:Z

    if-eqz v0, :cond_6

    goto :goto_2

    .line 2122
    :cond_2
    iget v0, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->z:I

    if-ne v0, v1, :cond_3

    .line 2123
    iget-boolean v0, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->M:Z

    if-nez v0, :cond_6

    goto :goto_1

    .line 2125
    :cond_3
    iget-boolean v0, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->M:Z

    if-eqz v0, :cond_4

    :goto_1
    move v4, v5

    goto :goto_3

    :cond_4
    move v4, v6

    goto :goto_3

    .line 2131
    :cond_5
    iget-boolean v0, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->M:Z

    if-eqz v0, :cond_6

    :goto_2
    move v4, v7

    .line 100
    :cond_6
    :goto_3
    iput v4, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->q:F

    .line 102
    iget v0, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->p:F

    iget v1, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->m:F

    mul-float/2addr v4, v1

    add-float/2addr v0, v4

    iput v0, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->p:F

    .line 104
    iget-boolean v1, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->n:Z

    if-nez v1, :cond_7

    iget v1, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->k:F

    cmpl-float v0, v0, v1

    if-lez v0, :cond_7

    .line 105
    iput v1, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->p:F

    .line 108
    :cond_7
    iget-object v0, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->i:Landroid/graphics/Rect;

    iget v1, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->p:F

    iget v2, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->j:F

    mul-float/2addr v1, v2

    float-to-int v1, v1

    iput v1, v0, Landroid/graphics/Rect;->right:I

    .line 110
    iget-object v0, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->K:Landroid/os/Handler;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/os/Handler;->removeCallbacksAndMessages(Ljava/lang/Object;)V

    .line 111
    iget-object v0, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->K:Landroid/os/Handler;

    iget-object v1, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->f:Ljava/lang/Runnable;

    iget-wide v2, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->D:J

    invoke-virtual {v0, v1, v2, v3}, Landroid/os/Handler;->postDelayed(Ljava/lang/Runnable;J)Z

    .line 113
    invoke-super {p0, p1}, Landroid/view/View;->draw(Landroid/graphics/Canvas;)V

    .line 114
    iget v0, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->m:F

    .line 2208
    iget-boolean v1, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->n:Z

    const/4 v2, 0x0

    const/4 v3, 0x0

    if-eqz v1, :cond_d

    .line 2209
    iget v1, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->o:F

    iget v4, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->j:F

    const/high16 v8, 0x3f000000    # 0.5f

    mul-float/2addr v4, v8

    div-float/2addr v1, v4

    sub-float/2addr v7, v1

    const/high16 v1, 0x437f0000    # 255.0f

    mul-float/2addr v7, v1

    float-to-int v1, v7

    if-gez v1, :cond_8

    move v1, v3

    .line 2214
    :cond_8
    iget v4, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->o:F

    iget v7, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->j:F

    mul-float/2addr v7, v8

    cmpl-float v4, v4, v7

    if-lez v4, :cond_9

    .line 2215
    invoke-virtual {p0, v3}, Lcom/tkay/expressad/foundation/webview/ProgressBar;->setVisible(Z)V

    .line 2218
    :cond_9
    iget-object v4, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->F:Landroid/graphics/drawable/Drawable;

    if-eqz v4, :cond_a

    .line 2219
    invoke-virtual {v4, v1}, Landroid/graphics/drawable/Drawable;->setAlpha(I)V

    .line 2221
    :cond_a
    iget-object v4, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->G:Landroid/graphics/drawable/Drawable;

    if-eqz v4, :cond_b

    .line 2222
    invoke-virtual {v4, v1}, Landroid/graphics/drawable/Drawable;->setAlpha(I)V

    .line 2224
    :cond_b
    iget-object v4, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->E:Landroid/graphics/drawable/Drawable;

    if-eqz v4, :cond_c

    .line 2225
    invoke-virtual {v4, v1}, Landroid/graphics/drawable/Drawable;->setAlpha(I)V

    .line 2227
    :cond_c
    invoke-virtual {p1}, Landroid/graphics/Canvas;->save()I

    .line 2228
    iget v1, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->o:F

    invoke-virtual {p1, v1, v2}, Landroid/graphics/Canvas;->translate(FF)V

    .line 2231
    :cond_d
    iget-object v1, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->F:Landroid/graphics/drawable/Drawable;

    if-eqz v1, :cond_e

    iget-object v1, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->E:Landroid/graphics/drawable/Drawable;

    if-eqz v1, :cond_e

    .line 2232
    iget-object v1, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->i:Landroid/graphics/Rect;

    invoke-virtual {v1}, Landroid/graphics/Rect;->width()I

    move-result v1

    int-to-float v1, v1

    iget-object v4, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->E:Landroid/graphics/drawable/Drawable;

    .line 2233
    invoke-virtual {v4}, Landroid/graphics/drawable/Drawable;->getIntrinsicWidth()I

    move-result v4

    int-to-float v4, v4

    mul-float/2addr v4, v6

    sub-float/2addr v1, v4

    float-to-int v1, v1

    .line 2234
    iget-object v4, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->F:Landroid/graphics/drawable/Drawable;

    .line 2235
    invoke-virtual {v4}, Landroid/graphics/drawable/Drawable;->getIntrinsicHeight()I

    move-result v6

    .line 2234
    invoke-virtual {v4, v3, v3, v1, v6}, Landroid/graphics/drawable/Drawable;->setBounds(IIII)V

    .line 2236
    iget-object v1, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->F:Landroid/graphics/drawable/Drawable;

    invoke-virtual {v1, p1}, Landroid/graphics/drawable/Drawable;->draw(Landroid/graphics/Canvas;)V

    .line 2239
    :cond_e
    iget-boolean v1, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->n:Z

    if-eqz v1, :cond_f

    iget-object v1, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->G:Landroid/graphics/drawable/Drawable;

    if-eqz v1, :cond_f

    iget-object v4, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->E:Landroid/graphics/drawable/Drawable;

    if-eqz v4, :cond_f

    .line 2241
    invoke-virtual {v1}, Landroid/graphics/drawable/Drawable;->getIntrinsicWidth()I

    move-result v1

    .line 2242
    iget-object v4, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->G:Landroid/graphics/drawable/Drawable;

    .line 2243
    invoke-virtual {v4}, Landroid/graphics/drawable/Drawable;->getIntrinsicHeight()I

    move-result v6

    .line 2242
    invoke-virtual {v4, v3, v3, v1, v6}, Landroid/graphics/drawable/Drawable;->setBounds(IIII)V

    .line 2244
    invoke-virtual {p1}, Landroid/graphics/Canvas;->save()I

    neg-int v1, v1

    int-to-float v1, v1

    .line 2245
    invoke-virtual {p1, v1, v2}, Landroid/graphics/Canvas;->translate(FF)V

    .line 2246
    iget-object v1, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->G:Landroid/graphics/drawable/Drawable;

    invoke-virtual {v1, p1}, Landroid/graphics/drawable/Drawable;->draw(Landroid/graphics/Canvas;)V

    .line 2247
    invoke-virtual {p1}, Landroid/graphics/Canvas;->restore()V

    .line 2250
    :cond_f
    iget-object v1, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->E:Landroid/graphics/drawable/Drawable;

    if-eqz v1, :cond_10

    .line 2251
    invoke-virtual {p1}, Landroid/graphics/Canvas;->save()I

    .line 2252
    iget-object v1, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->i:Landroid/graphics/Rect;

    invoke-virtual {v1}, Landroid/graphics/Rect;->width()I

    move-result v1

    invoke-virtual {p0}, Lcom/tkay/expressad/foundation/webview/ProgressBar;->getWidth()I

    move-result v3

    sub-int/2addr v1, v3

    int-to-float v1, v1

    invoke-virtual {p1, v1, v2}, Landroid/graphics/Canvas;->translate(FF)V

    .line 2253
    iget-object v1, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->E:Landroid/graphics/drawable/Drawable;

    invoke-virtual {v1, p1}, Landroid/graphics/drawable/Drawable;->draw(Landroid/graphics/Canvas;)V

    .line 2254
    invoke-virtual {p1}, Landroid/graphics/Canvas;->restore()V

    .line 2257
    :cond_10
    iget-boolean v1, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->n:Z

    if-nez v1, :cond_12

    iget v1, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->p:F

    iget v3, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->k:F

    sub-float/2addr v1, v3

    .line 2258
    invoke-static {v1}, Ljava/lang/Math;->abs(F)F

    move-result v1

    const v3, 0x3727c5ac    # 1.0E-5f

    cmpg-float v1, v1, v3

    if-gez v1, :cond_12

    iget-object v1, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->H:Landroid/graphics/drawable/Drawable;

    if-eqz v1, :cond_12

    .line 2260
    iget v3, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->s:I

    int-to-float v3, v3

    mul-float/2addr v0, v5

    iget v4, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->j:F

    mul-float/2addr v0, v4

    add-float/2addr v3, v0

    float-to-int v0, v3

    iput v0, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->s:I

    .line 2262
    invoke-virtual {v1}, Landroid/graphics/drawable/Drawable;->getIntrinsicWidth()I

    move-result v1

    add-int/2addr v0, v1

    iget-object v1, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->i:Landroid/graphics/Rect;

    .line 2263
    invoke-virtual {v1}, Landroid/graphics/Rect;->width()I

    move-result v1

    if-lt v0, v1, :cond_11

    .line 2264
    iget-object v0, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->H:Landroid/graphics/drawable/Drawable;

    invoke-virtual {v0}, Landroid/graphics/drawable/Drawable;->getIntrinsicWidth()I

    move-result v0

    neg-int v0, v0

    iput v0, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->s:I

    .line 2267
    :cond_11
    invoke-virtual {p1}, Landroid/graphics/Canvas;->save()I

    .line 2268
    iget v0, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->s:I

    int-to-float v0, v0

    invoke-virtual {p1, v0, v2}, Landroid/graphics/Canvas;->translate(FF)V

    .line 2269
    iget-object v0, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->H:Landroid/graphics/drawable/Drawable;

    invoke-virtual {v0, p1}, Landroid/graphics/drawable/Drawable;->draw(Landroid/graphics/Canvas;)V

    .line 2270
    invoke-virtual {p1}, Landroid/graphics/Canvas;->restore()V

    .line 2273
    :cond_12
    iget-boolean v0, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->n:Z

    if-eqz v0, :cond_13

    .line 2274
    invoke-virtual {p1}, Landroid/graphics/Canvas;->restore()V

    :cond_13
    return-void
.end method

.method public getDrawingCache(Z)Landroid/graphics/Bitmap;
    .locals 0

    const/4 p1, 0x0

    return-object p1
.end method

.method public getProgress()F
    .locals 1

    .line 340
    iget v0, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->p:F

    return v0
.end method

.method public initResource(Z)V
    .locals 5

    if-nez p1, :cond_1

    .line 144
    iget-object p1, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->H:Landroid/graphics/drawable/Drawable;

    if-nez p1, :cond_0

    iget-object p1, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->E:Landroid/graphics/drawable/Drawable;

    if-nez p1, :cond_0

    iget-object p1, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->F:Landroid/graphics/drawable/Drawable;

    if-nez p1, :cond_0

    iget-object p1, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->G:Landroid/graphics/drawable/Drawable;

    if-eqz p1, :cond_1

    :cond_0
    return-void

    .line 150
    :cond_1
    invoke-virtual {p0}, Lcom/tkay/expressad/foundation/webview/ProgressBar;->getResources()Landroid/content/res/Resources;

    move-result-object p1

    .line 151
    invoke-virtual {p0}, Lcom/tkay/expressad/foundation/webview/ProgressBar;->getResources()Landroid/content/res/Resources;

    move-result-object v0

    .line 153
    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/b/b;->a()Ljava/lang/String;

    move-result-object v1

    const-string v2, "drawable"

    const-string v3, "tkay_cm_highlight"

    .line 151
    invoke-virtual {v0, v3, v2, v1}, Landroid/content/res/Resources;->getIdentifier(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    .line 150
    invoke-virtual {p1, v0}, Landroid/content/res/Resources;->getDrawable(I)Landroid/graphics/drawable/Drawable;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->H:Landroid/graphics/drawable/Drawable;

    const/4 v0, 0x0

    if-eqz p1, :cond_2

    .line 156
    invoke-virtual {p1}, Landroid/graphics/drawable/Drawable;->getIntrinsicWidth()I

    move-result v1

    iget-object v3, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->H:Landroid/graphics/drawable/Drawable;

    .line 157
    invoke-virtual {v3}, Landroid/graphics/drawable/Drawable;->getIntrinsicHeight()I

    move-result v3

    .line 155
    invoke-virtual {p1, v0, v0, v1, v3}, Landroid/graphics/drawable/Drawable;->setBounds(IIII)V

    .line 160
    :cond_2
    invoke-virtual {p0}, Lcom/tkay/expressad/foundation/webview/ProgressBar;->getResources()Landroid/content/res/Resources;

    move-result-object p1

    .line 161
    invoke-virtual {p0}, Lcom/tkay/expressad/foundation/webview/ProgressBar;->getResources()Landroid/content/res/Resources;

    move-result-object v1

    .line 162
    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object v3

    invoke-virtual {v3}, Lcom/tkay/expressad/foundation/b/b;->a()Ljava/lang/String;

    move-result-object v3

    const-string v4, "tkay_cm_head"

    .line 161
    invoke-virtual {v1, v4, v2, v3}, Landroid/content/res/Resources;->getIdentifier(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)I

    move-result v1

    .line 160
    invoke-virtual {p1, v1}, Landroid/content/res/Resources;->getDrawable(I)Landroid/graphics/drawable/Drawable;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->E:Landroid/graphics/drawable/Drawable;

    if-eqz p1, :cond_3

    .line 165
    invoke-virtual {p1}, Landroid/graphics/drawable/Drawable;->getIntrinsicWidth()I

    move-result v1

    iget-object v3, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->E:Landroid/graphics/drawable/Drawable;

    .line 166
    invoke-virtual {v3}, Landroid/graphics/drawable/Drawable;->getIntrinsicHeight()I

    move-result v3

    .line 164
    invoke-virtual {p1, v0, v0, v1, v3}, Landroid/graphics/drawable/Drawable;->setBounds(IIII)V

    .line 169
    :cond_3
    invoke-virtual {p0}, Lcom/tkay/expressad/foundation/webview/ProgressBar;->getResources()Landroid/content/res/Resources;

    move-result-object p1

    .line 170
    invoke-virtual {p0}, Lcom/tkay/expressad/foundation/webview/ProgressBar;->getResources()Landroid/content/res/Resources;

    move-result-object v0

    .line 171
    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/b/b;->a()Ljava/lang/String;

    move-result-object v1

    const-string v3, "tkay_cm_tail"

    .line 170
    invoke-virtual {v0, v3, v2, v1}, Landroid/content/res/Resources;->getIdentifier(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    .line 169
    invoke-virtual {p1, v0}, Landroid/content/res/Resources;->getDrawable(I)Landroid/graphics/drawable/Drawable;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->F:Landroid/graphics/drawable/Drawable;

    .line 172
    invoke-virtual {p0}, Lcom/tkay/expressad/foundation/webview/ProgressBar;->getResources()Landroid/content/res/Resources;

    move-result-object p1

    .line 173
    invoke-virtual {p0}, Lcom/tkay/expressad/foundation/webview/ProgressBar;->getResources()Landroid/content/res/Resources;

    move-result-object v0

    .line 175
    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/b/b;->a()Ljava/lang/String;

    move-result-object v1

    const-string v3, "tkay_cm_end_animation"

    .line 173
    invoke-virtual {v0, v3, v2, v1}, Landroid/content/res/Resources;->getIdentifier(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    .line 172
    invoke-virtual {p1, v0}, Landroid/content/res/Resources;->getDrawable(I)Landroid/graphics/drawable/Drawable;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->G:Landroid/graphics/drawable/Drawable;

    return-void
.end method

.method protected onLayout(ZIIII)V
    .locals 0

    .line 202
    invoke-super/range {p0 .. p5}, Landroid/view/View;->onLayout(ZIIII)V

    return-void
.end method

.method protected onMeasure(II)V
    .locals 0

    .line 180
    invoke-super {p0, p1, p2}, Landroid/view/View;->onMeasure(II)V

    return-void
.end method

.method protected onSizeChanged(IIII)V
    .locals 0

    .line 399
    invoke-super {p0, p1, p2, p3, p4}, Landroid/view/View;->onSizeChanged(IIII)V

    .line 401
    invoke-virtual {p0}, Lcom/tkay/expressad/foundation/webview/ProgressBar;->getMeasuredWidth()I

    move-result p1

    int-to-float p1, p1

    iput p1, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->j:F

    return-void
.end method

.method public onThemeChange()V
    .locals 1

    .line 137
    iget-boolean v0, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->I:Z

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    .line 138
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/foundation/webview/ProgressBar;->initResource(Z)V

    :cond_0
    return-void
.end method

.method public onWindowFocusChanged(Z)V
    .locals 5

    .line 186
    invoke-super {p0, p1}, Landroid/view/View;->onWindowFocusChanged(Z)V

    .line 188
    iget-object p1, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->H:Landroid/graphics/drawable/Drawable;

    const/4 v0, 0x0

    if-eqz p1, :cond_0

    .line 190
    invoke-virtual {p1}, Landroid/graphics/drawable/Drawable;->getIntrinsicWidth()I

    move-result v1

    int-to-double v1, v1

    const-wide/high16 v3, 0x3ff8000000000000L    # 1.5

    mul-double/2addr v1, v3

    double-to-int v1, v1

    .line 191
    invoke-virtual {p0}, Lcom/tkay/expressad/foundation/webview/ProgressBar;->getHeight()I

    move-result v2

    .line 189
    invoke-virtual {p1, v0, v0, v1, v2}, Landroid/graphics/drawable/Drawable;->setBounds(IIII)V

    .line 194
    :cond_0
    iget-object p1, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->E:Landroid/graphics/drawable/Drawable;

    if-eqz p1, :cond_1

    .line 195
    invoke-virtual {p0}, Lcom/tkay/expressad/foundation/webview/ProgressBar;->getWidth()I

    move-result v1

    invoke-virtual {p0}, Lcom/tkay/expressad/foundation/webview/ProgressBar;->getHeight()I

    move-result v2

    invoke-virtual {p1, v0, v0, v1, v2}, Landroid/graphics/drawable/Drawable;->setBounds(IIII)V

    :cond_1
    return-void
.end method

.method public setPaused(Z)V
    .locals 2

    .line 406
    iput-boolean p1, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->N:Z

    if-nez p1, :cond_0

    .line 408
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->l:J

    :cond_0
    return-void
.end method

.method public setProgress(FZ)V
    .locals 0

    if-eqz p2, :cond_0

    const/high16 p2, 0x3f800000    # 1.0f

    cmpl-float p1, p1, p2

    if-ltz p1, :cond_0

    .line 289
    invoke-virtual {p0}, Lcom/tkay/expressad/foundation/webview/ProgressBar;->startEndAnimation()V

    :cond_0
    return-void
.end method

.method public setProgressBarListener(Lcom/tkay/expressad/foundation/webview/a$a;)V
    .locals 0

    .line 345
    iput-object p1, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->J:Lcom/tkay/expressad/foundation/webview/a$a;

    return-void
.end method

.method public setProgressState(I)V
    .locals 4

    const/4 v0, 0x5

    const-wide/16 v1, 0x0

    const/4 v3, 0x1

    if-eq p1, v0, :cond_5

    const/4 v0, 0x6

    if-eq p1, v0, :cond_3

    const/4 v0, 0x7

    if-eq p1, v0, :cond_2

    const/16 v0, 0x8

    if-eq p1, v0, :cond_0

    goto :goto_0

    .line 386
    :cond_0
    iput v3, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->B:I

    .line 387
    iget p1, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->A:I

    if-ne p1, v3, :cond_1

    .line 388
    invoke-virtual {p0}, Lcom/tkay/expressad/foundation/webview/ProgressBar;->startEndAnimation()V

    :cond_1
    :goto_0
    return-void

    .line 382
    :cond_2
    invoke-virtual {p0}, Lcom/tkay/expressad/foundation/webview/ProgressBar;->startEndAnimation()V

    return-void

    .line 374
    :cond_3
    iput v3, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->A:I

    .line 375
    iget p1, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->B:I

    if-ne p1, v3, :cond_4

    .line 376
    invoke-virtual {p0}, Lcom/tkay/expressad/foundation/webview/ProgressBar;->startEndAnimation()V

    .line 378
    :cond_4
    iput-wide v1, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->r:J

    return-void

    .line 367
    :cond_5
    iput v3, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->z:I

    const/4 p1, 0x0

    .line 368
    iput p1, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->A:I

    .line 369
    iput p1, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->B:I

    .line 370
    iput-wide v1, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->r:J

    return-void
.end method

.method public setVisibility(I)V
    .locals 0

    .line 350
    invoke-super {p0, p1}, Landroid/view/View;->setVisibility(I)V

    return-void
.end method

.method public setVisible(Z)V
    .locals 2

    if-eqz p1, :cond_4

    const/4 p1, 0x1

    .line 296
    iput-boolean p1, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->M:Z

    .line 298
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->l:J

    const/4 p1, 0x0

    .line 299
    iput p1, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->m:F

    const-wide/16 v0, 0x0

    .line 300
    iput-wide v0, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->r:J

    const/4 v0, 0x0

    .line 302
    iput-boolean v0, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->n:Z

    .line 303
    iput p1, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->o:F

    .line 304
    iput p1, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->p:F

    .line 305
    invoke-virtual {p0}, Lcom/tkay/expressad/foundation/webview/ProgressBar;->getMeasuredWidth()I

    move-result p1

    int-to-float p1, p1

    iput p1, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->j:F

    .line 307
    iput-boolean v0, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->N:Z

    .line 309
    iput v0, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->z:I

    .line 310
    iput v0, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->A:I

    .line 311
    iput v0, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->B:I

    .line 313
    iget-object p1, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->H:Landroid/graphics/drawable/Drawable;

    if-eqz p1, :cond_0

    .line 314
    invoke-virtual {p1}, Landroid/graphics/drawable/Drawable;->getIntrinsicWidth()I

    move-result p1

    neg-int p1, p1

    iput p1, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->s:I

    goto :goto_0

    .line 316
    :cond_0
    iput v0, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->s:I

    .line 319
    :goto_0
    iget-object p1, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->F:Landroid/graphics/drawable/Drawable;

    const/16 v1, 0xff

    if-eqz p1, :cond_1

    .line 320
    invoke-virtual {p1, v1}, Landroid/graphics/drawable/Drawable;->setAlpha(I)V

    .line 323
    :cond_1
    iget-object p1, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->G:Landroid/graphics/drawable/Drawable;

    if-eqz p1, :cond_2

    .line 324
    invoke-virtual {p1, v1}, Landroid/graphics/drawable/Drawable;->setAlpha(I)V

    .line 327
    :cond_2
    iget-object p1, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->E:Landroid/graphics/drawable/Drawable;

    if-eqz p1, :cond_3

    .line 328
    invoke-virtual {p1, v1}, Landroid/graphics/drawable/Drawable;->setAlpha(I)V

    .line 331
    :cond_3
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/foundation/webview/ProgressBar;->setVisibility(I)V

    .line 332
    invoke-virtual {p0}, Lcom/tkay/expressad/foundation/webview/ProgressBar;->invalidate()V

    return-void

    :cond_4
    const/4 p1, 0x4

    .line 334
    invoke-virtual {p0, p1}, Lcom/tkay/expressad/foundation/webview/ProgressBar;->setVisibility(I)V

    return-void
.end method

.method public startEndAnimation()V
    .locals 1

    .line 280
    iget-boolean v0, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->n:Z

    if-nez v0, :cond_0

    const/4 v0, 0x1

    .line 281
    iput-boolean v0, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->n:Z

    const/4 v0, 0x0

    .line 282
    iput v0, p0, Lcom/tkay/expressad/foundation/webview/ProgressBar;->o:F

    :cond_0
    return-void
.end method
