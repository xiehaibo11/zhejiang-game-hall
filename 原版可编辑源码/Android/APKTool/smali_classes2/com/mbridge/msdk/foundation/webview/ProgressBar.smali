.class public Lcom/mbridge/msdk/foundation/webview/ProgressBar;
.super Landroid/view/View;
.source "ProgressBar.java"

# interfaces
.implements Lcom/mbridge/msdk/foundation/webview/c;


# instance fields
.field a:Ljava/lang/Runnable;

.field private b:Landroid/graphics/Rect;

.field private c:F

.field private d:F

.field private e:J

.field private f:F

.field private g:Z

.field private h:F

.field private i:F

.field private j:F

.field private k:J

.field private l:I

.field private m:I

.field private n:I

.field private o:I

.field private p:J

.field private q:Landroid/graphics/drawable/Drawable;

.field private r:Landroid/graphics/drawable/Drawable;

.field private s:Landroid/graphics/drawable/Drawable;

.field private t:Landroid/graphics/drawable/Drawable;

.field private u:Z

.field private v:Lcom/mbridge/msdk/foundation/webview/c$a;

.field private w:Landroid/os/Handler;

.field private x:Z

.field private y:Z


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 2

    .line 72
    invoke-direct {p0, p1}, Landroid/view/View;-><init>(Landroid/content/Context;)V

    .line 22
    new-instance p1, Landroid/graphics/Rect;

    invoke-direct {p1}, Landroid/graphics/Rect;-><init>()V

    iput-object p1, p0, Lcom/mbridge/msdk/foundation/webview/ProgressBar;->b:Landroid/graphics/Rect;

    const p1, 0x3f733333    # 0.95f

    .line 24
    iput p1, p0, Lcom/mbridge/msdk/foundation/webview/ProgressBar;->d:F

    const-wide/16 v0, 0x19

    .line 46
    iput-wide v0, p0, Lcom/mbridge/msdk/foundation/webview/ProgressBar;->p:J

    const/4 p1, 0x0

    .line 53
    iput-boolean p1, p0, Lcom/mbridge/msdk/foundation/webview/ProgressBar;->u:Z

    .line 57
    new-instance v0, Landroid/os/Handler;

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v1

    invoke-direct {v0, v1}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    iput-object v0, p0, Lcom/mbridge/msdk/foundation/webview/ProgressBar;->w:Landroid/os/Handler;

    .line 58
    new-instance v0, Lcom/mbridge/msdk/foundation/webview/ProgressBar$1;

    invoke-direct {v0, p0}, Lcom/mbridge/msdk/foundation/webview/ProgressBar$1;-><init>(Lcom/mbridge/msdk/foundation/webview/ProgressBar;)V

    iput-object v0, p0, Lcom/mbridge/msdk/foundation/webview/ProgressBar;->a:Ljava/lang/Runnable;

    .line 69
    iput-boolean p1, p0, Lcom/mbridge/msdk/foundation/webview/ProgressBar;->y:Z

    .line 1082
    invoke-virtual {p0, p1}, Lcom/mbridge/msdk/foundation/webview/ProgressBar;->setWillNotDraw(Z)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 1

    .line 77
    invoke-direct {p0, p1, p2}, Landroid/view/View;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    .line 22
    new-instance p1, Landroid/graphics/Rect;

    invoke-direct {p1}, Landroid/graphics/Rect;-><init>()V

    iput-object p1, p0, Lcom/mbridge/msdk/foundation/webview/ProgressBar;->b:Landroid/graphics/Rect;

    const p1, 0x3f733333    # 0.95f

    .line 24
    iput p1, p0, Lcom/mbridge/msdk/foundation/webview/ProgressBar;->d:F

    const-wide/16 p1, 0x19

    .line 46
    iput-wide p1, p0, Lcom/mbridge/msdk/foundation/webview/ProgressBar;->p:J

    const/4 p1, 0x0

    .line 53
    iput-boolean p1, p0, Lcom/mbridge/msdk/foundation/webview/ProgressBar;->u:Z

    .line 57
    new-instance p2, Landroid/os/Handler;

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v0

    invoke-direct {p2, v0}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    iput-object p2, p0, Lcom/mbridge/msdk/foundation/webview/ProgressBar;->w:Landroid/os/Handler;

    .line 58
    new-instance p2, Lcom/mbridge/msdk/foundation/webview/ProgressBar$1;

    invoke-direct {p2, p0}, Lcom/mbridge/msdk/foundation/webview/ProgressBar$1;-><init>(Lcom/mbridge/msdk/foundation/webview/ProgressBar;)V

    iput-object p2, p0, Lcom/mbridge/msdk/foundation/webview/ProgressBar;->a:Ljava/lang/Runnable;

    .line 69
    iput-boolean p1, p0, Lcom/mbridge/msdk/foundation/webview/ProgressBar;->y:Z

    .line 2082
    invoke-virtual {p0, p1}, Lcom/mbridge/msdk/foundation/webview/ProgressBar;->setWillNotDraw(Z)V

    return-void
.end method


# virtual methods
.method public draw(Landroid/graphics/Canvas;)V
    .locals 10

    .line 91
    iget-boolean v0, p0, Lcom/mbridge/msdk/foundation/webview/ProgressBar;->u:Z

    const/4 v1, 0x1

    if-nez v0, :cond_0

    .line 92
    iput-boolean v1, p0, Lcom/mbridge/msdk/foundation/webview/ProgressBar;->u:Z

    .line 95
    :cond_0
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v2

    .line 96
    iget-boolean v0, p0, Lcom/mbridge/msdk/foundation/webview/ProgressBar;->y:Z

    if-eqz v0, :cond_1

    const-wide/16 v4, 0x0

    goto :goto_0

    :cond_1
    iget-wide v4, p0, Lcom/mbridge/msdk/foundation/webview/ProgressBar;->e:J

    sub-long v4, v2, v4

    :goto_0
    long-to-float v0, v4

    const/high16 v6, 0x447a0000    # 1000.0f

    div-float/2addr v0, v6

    .line 97
    invoke-static {v0}, Ljava/lang/Math;->abs(F)F

    move-result v0

    iput v0, p0, Lcom/mbridge/msdk/foundation/webview/ProgressBar;->f:F

    .line 98
    iput-wide v2, p0, Lcom/mbridge/msdk/foundation/webview/ProgressBar;->e:J

    .line 99
    iget-wide v2, p0, Lcom/mbridge/msdk/foundation/webview/ProgressBar;->k:J

    add-long/2addr v2, v4

    iput-wide v2, p0, Lcom/mbridge/msdk/foundation/webview/ProgressBar;->k:J

    .line 2122
    iget-boolean v0, p0, Lcom/mbridge/msdk/foundation/webview/ProgressBar;->g:Z

    const v4, 0x3e4ccccd    # 0.2f

    const v5, 0x3d4ccccd    # 0.05f

    const/high16 v6, 0x3f800000    # 1.0f

    const v7, 0x3ecccccd    # 0.4f

    if-nez v0, :cond_6

    const-wide/16 v8, 0x7d0

    cmp-long v0, v2, v8

    if-gez v0, :cond_5

    .line 2124
    iget v0, p0, Lcom/mbridge/msdk/foundation/webview/ProgressBar;->n:I

    if-ne v0, v1, :cond_2

    .line 2125
    iget-boolean v0, p0, Lcom/mbridge/msdk/foundation/webview/ProgressBar;->x:Z

    if-eqz v0, :cond_7

    goto :goto_2

    .line 2126
    :cond_2
    iget v0, p0, Lcom/mbridge/msdk/foundation/webview/ProgressBar;->m:I

    if-ne v0, v1, :cond_4

    .line 2127
    iget-boolean v0, p0, Lcom/mbridge/msdk/foundation/webview/ProgressBar;->x:Z

    if-eqz v0, :cond_3

    goto :goto_3

    :cond_3
    :goto_1
    move v7, v4

    goto :goto_3

    .line 2129
    :cond_4
    iget-boolean v0, p0, Lcom/mbridge/msdk/foundation/webview/ProgressBar;->x:Z

    if-eqz v0, :cond_5

    goto :goto_1

    :cond_5
    move v7, v5

    goto :goto_3

    .line 2135
    :cond_6
    iget-boolean v0, p0, Lcom/mbridge/msdk/foundation/webview/ProgressBar;->x:Z

    if-eqz v0, :cond_7

    :goto_2
    move v7, v6

    .line 101
    :cond_7
    :goto_3
    iput v7, p0, Lcom/mbridge/msdk/foundation/webview/ProgressBar;->j:F

    .line 106
    iget v0, p0, Lcom/mbridge/msdk/foundation/webview/ProgressBar;->i:F

    iget v1, p0, Lcom/mbridge/msdk/foundation/webview/ProgressBar;->f:F

    mul-float/2addr v7, v1

    add-float/2addr v0, v7

    iput v0, p0, Lcom/mbridge/msdk/foundation/webview/ProgressBar;->i:F

    .line 108
    iget-boolean v1, p0, Lcom/mbridge/msdk/foundation/webview/ProgressBar;->g:Z

    if-nez v1, :cond_8

    iget v1, p0, Lcom/mbridge/msdk/foundation/webview/ProgressBar;->d:F

    cmpl-float v0, v0, v1

    if-lez v0, :cond_8

    .line 109
    iput v1, p0, Lcom/mbridge/msdk/foundation/webview/ProgressBar;->i:F

    .line 112
    :cond_8
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/webview/ProgressBar;->b:Landroid/graphics/Rect;

    iget v1, p0, Lcom/mbridge/msdk/foundation/webview/ProgressBar;->i:F

    iget v2, p0, Lcom/mbridge/msdk/foundation/webview/ProgressBar;->c:F

    mul-float/2addr v1, v2

    float-to-int v1, v1

    iput v1, v0, Landroid/graphics/Rect;->right:I

    .line 114
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/webview/ProgressBar;->w:Landroid/os/Handler;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/os/Handler;->removeCallbacksAndMessages(Ljava/lang/Object;)V

    .line 115
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/webview/ProgressBar;->w:Landroid/os/Handler;

    iget-object v1, p0, Lcom/mbridge/msdk/foundation/webview/ProgressBar;->a:Ljava/lang/Runnable;

    iget-wide v2, p0, Lcom/mbridge/msdk/foundation/webview/ProgressBar;->p:J

    invoke-virtual {v0, v1, v2, v3}, Landroid/os/Handler;->postDelayed(Ljava/lang/Runnable;J)Z

    .line 117
    invoke-super {p0, p1}, Landroid/view/View;->draw(Landroid/graphics/Canvas;)V

    .line 118
    iget v0, p0, Lcom/mbridge/msdk/foundation/webview/ProgressBar;->f:F

    .line 2212
    iget-boolean v1, p0, Lcom/mbridge/msdk/foundation/webview/ProgressBar;->g:Z

    const/4 v2, 0x0

    const/4 v3, 0x0

    if-eqz v1, :cond_e

    .line 2214
    iget v1, p0, Lcom/mbridge/msdk/foundation/webview/ProgressBar;->h:F

    iget v7, p0, Lcom/mbridge/msdk/foundation/webview/ProgressBar;->c:F

    const/high16 v8, 0x3f000000    # 0.5f

    mul-float/2addr v7, v8

    div-float/2addr v1, v7

    sub-float/2addr v6, v1

    const/high16 v1, 0x437f0000    # 255.0f

    mul-float/2addr v6, v1

    float-to-int v1, v6

    if-gez v1, :cond_9

    move v1, v3

    .line 2219
    :cond_9
    iget v6, p0, Lcom/mbridge/msdk/foundation/webview/ProgressBar;->h:F

    iget v7, p0, Lcom/mbridge/msdk/foundation/webview/ProgressBar;->c:F

    mul-float/2addr v7, v8

    cmpl-float v6, v6, v7

    if-lez v6, :cond_a

    .line 2220
    invoke-virtual {p0, v3}, Lcom/mbridge/msdk/foundation/webview/ProgressBar;->setVisible(Z)V

    .line 2223
    :cond_a
    iget-object v6, p0, Lcom/mbridge/msdk/foundation/webview/ProgressBar;->r:Landroid/graphics/drawable/Drawable;

    if-eqz v6, :cond_b

    .line 2224
    invoke-virtual {v6, v1}, Landroid/graphics/drawable/Drawable;->setAlpha(I)V

    .line 2226
    :cond_b
    iget-object v6, p0, Lcom/mbridge/msdk/foundation/webview/ProgressBar;->s:Landroid/graphics/drawable/Drawable;

    if-eqz v6, :cond_c

    .line 2227
    invoke-virtual {v6, v1}, Landroid/graphics/drawable/Drawable;->setAlpha(I)V

    .line 2229
    :cond_c
    iget-object v6, p0, Lcom/mbridge/msdk/foundation/webview/ProgressBar;->q:Landroid/graphics/drawable/Drawable;

    if-eqz v6, :cond_d

    .line 2230
    invoke-virtual {v6, v1}, Landroid/graphics/drawable/Drawable;->setAlpha(I)V

    .line 2232
    :cond_d
    invoke-virtual {p1}, Landroid/graphics/Canvas;->save()I

    .line 2233
    iget v1, p0, Lcom/mbridge/msdk/foundation/webview/ProgressBar;->h:F

    invoke-virtual {p1, v1, v2}, Landroid/graphics/Canvas;->translate(FF)V

    .line 2236
    :cond_e
    iget-object v1, p0, Lcom/mbridge/msdk/foundation/webview/ProgressBar;->r:Landroid/graphics/drawable/Drawable;

    if-eqz v1, :cond_f

    iget-object v1, p0, Lcom/mbridge/msdk/foundation/webview/ProgressBar;->q:Landroid/graphics/drawable/Drawable;

    if-eqz v1, :cond_f

    .line 2237
    iget-object v1, p0, Lcom/mbridge/msdk/foundation/webview/ProgressBar;->b:Landroid/graphics/Rect;

    invoke-virtual {v1}, Landroid/graphics/Rect;->width()I

    move-result v1

    int-to-float v1, v1

    iget-object v6, p0, Lcom/mbridge/msdk/foundation/webview/ProgressBar;->q:Landroid/graphics/drawable/Drawable;

    .line 2238
    invoke-virtual {v6}, Landroid/graphics/drawable/Drawable;->getIntrinsicWidth()I

    move-result v6

    int-to-float v6, v6

    mul-float/2addr v6, v5

    sub-float/2addr v1, v6

    float-to-int v1, v1

    .line 2239
    iget-object v5, p0, Lcom/mbridge/msdk/foundation/webview/ProgressBar;->r:Landroid/graphics/drawable/Drawable;

    .line 2240
    invoke-virtual {v5}, Landroid/graphics/drawable/Drawable;->getIntrinsicHeight()I

    move-result v6

    .line 2239
    invoke-virtual {v5, v3, v3, v1, v6}, Landroid/graphics/drawable/Drawable;->setBounds(IIII)V

    .line 2241
    iget-object v1, p0, Lcom/mbridge/msdk/foundation/webview/ProgressBar;->r:Landroid/graphics/drawable/Drawable;

    invoke-virtual {v1, p1}, Landroid/graphics/drawable/Drawable;->draw(Landroid/graphics/Canvas;)V

    .line 2244
    :cond_f
    iget-boolean v1, p0, Lcom/mbridge/msdk/foundation/webview/ProgressBar;->g:Z

    if-eqz v1, :cond_10

    iget-object v1, p0, Lcom/mbridge/msdk/foundation/webview/ProgressBar;->s:Landroid/graphics/drawable/Drawable;

    if-eqz v1, :cond_10

    iget-object v5, p0, Lcom/mbridge/msdk/foundation/webview/ProgressBar;->q:Landroid/graphics/drawable/Drawable;

    if-eqz v5, :cond_10

    .line 2246
    invoke-virtual {v1}, Landroid/graphics/drawable/Drawable;->getIntrinsicWidth()I

    move-result v1

    .line 2247
    iget-object v5, p0, Lcom/mbridge/msdk/foundation/webview/ProgressBar;->s:Landroid/graphics/drawable/Drawable;

    .line 2248
    invoke-virtual {v5}, Landroid/graphics/drawable/Drawable;->getIntrinsicHeight()I

    move-result v6

    .line 2247
    invoke-virtual {v5, v3, v3, v1, v6}, Landroid/graphics/drawable/Drawable;->setBounds(IIII)V

    .line 2249
    invoke-virtual {p1}, Landroid/graphics/Canvas;->save()I

    neg-int v1, v1

    int-to-float v1, v1

    .line 2250
    invoke-virtual {p1, v1, v2}, Landroid/graphics/Canvas;->translate(FF)V

    .line 2251
    iget-object v1, p0, Lcom/mbridge/msdk/foundation/webview/ProgressBar;->s:Landroid/graphics/drawable/Drawable;

    invoke-virtual {v1, p1}, Landroid/graphics/drawable/Drawable;->draw(Landroid/graphics/Canvas;)V

    .line 2252
    invoke-virtual {p1}, Landroid/graphics/Canvas;->restore()V

    .line 2255
    :cond_10
    iget-object v1, p0, Lcom/mbridge/msdk/foundation/webview/ProgressBar;->q:Landroid/graphics/drawable/Drawable;

    if-eqz v1, :cond_11

    .line 2256
    invoke-virtual {p1}, Landroid/graphics/Canvas;->save()I

    .line 2257
    iget-object v1, p0, Lcom/mbridge/msdk/foundation/webview/ProgressBar;->b:Landroid/graphics/Rect;

    invoke-virtual {v1}, Landroid/graphics/Rect;->width()I

    move-result v1

    .line 2260
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/webview/ProgressBar;->getWidth()I

    move-result v3

    sub-int/2addr v1, v3

    int-to-float v1, v1

    .line 2257
    invoke-virtual {p1, v1, v2}, Landroid/graphics/Canvas;->translate(FF)V

    .line 2261
    iget-object v1, p0, Lcom/mbridge/msdk/foundation/webview/ProgressBar;->q:Landroid/graphics/drawable/Drawable;

    invoke-virtual {v1, p1}, Landroid/graphics/drawable/Drawable;->draw(Landroid/graphics/Canvas;)V

    .line 2262
    invoke-virtual {p1}, Landroid/graphics/Canvas;->restore()V

    .line 2265
    :cond_11
    iget-boolean v1, p0, Lcom/mbridge/msdk/foundation/webview/ProgressBar;->g:Z

    if-nez v1, :cond_13

    iget v1, p0, Lcom/mbridge/msdk/foundation/webview/ProgressBar;->i:F

    iget v3, p0, Lcom/mbridge/msdk/foundation/webview/ProgressBar;->d:F

    sub-float/2addr v1, v3

    .line 2266
    invoke-static {v1}, Ljava/lang/Math;->abs(F)F

    move-result v1

    const v3, 0x3727c5ac    # 1.0E-5f

    cmpg-float v1, v1, v3

    if-gez v1, :cond_13

    iget-object v1, p0, Lcom/mbridge/msdk/foundation/webview/ProgressBar;->t:Landroid/graphics/drawable/Drawable;

    if-eqz v1, :cond_13

    .line 2268
    iget v3, p0, Lcom/mbridge/msdk/foundation/webview/ProgressBar;->l:I

    int-to-float v3, v3

    mul-float/2addr v0, v4

    iget v4, p0, Lcom/mbridge/msdk/foundation/webview/ProgressBar;->c:F

    mul-float/2addr v0, v4

    add-float/2addr v3, v0

    float-to-int v0, v3

    iput v0, p0, Lcom/mbridge/msdk/foundation/webview/ProgressBar;->l:I

    .line 2270
    invoke-virtual {v1}, Landroid/graphics/drawable/Drawable;->getIntrinsicWidth()I

    move-result v1

    add-int/2addr v0, v1

    iget-object v1, p0, Lcom/mbridge/msdk/foundation/webview/ProgressBar;->b:Landroid/graphics/Rect;

    .line 2271
    invoke-virtual {v1}, Landroid/graphics/Rect;->width()I

    move-result v1

    if-lt v0, v1, :cond_12

    .line 2272
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/webview/ProgressBar;->t:Landroid/graphics/drawable/Drawable;

    invoke-virtual {v0}, Landroid/graphics/drawable/Drawable;->getIntrinsicWidth()I

    move-result v0

    neg-int v0, v0

    iput v0, p0, Lcom/mbridge/msdk/foundation/webview/ProgressBar;->l:I

    .line 2275
    :cond_12
    invoke-virtual {p1}, Landroid/graphics/Canvas;->save()I

    .line 2276
    iget v0, p0, Lcom/mbridge/msdk/foundation/webview/ProgressBar;->l:I

    int-to-float v0, v0

    invoke-virtual {p1, v0, v2}, Landroid/graphics/Canvas;->translate(FF)V

    .line 2277
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/webview/ProgressBar;->t:Landroid/graphics/drawable/Drawable;

    invoke-virtual {v0, p1}, Landroid/graphics/drawable/Drawable;->draw(Landroid/graphics/Canvas;)V

    .line 2278
    invoke-virtual {p1}, Landroid/graphics/Canvas;->restore()V

    .line 2281
    :cond_13
    iget-boolean v0, p0, Lcom/mbridge/msdk/foundation/webview/ProgressBar;->g:Z

    if-eqz v0, :cond_14

    .line 2282
    invoke-virtual {p1}, Landroid/graphics/Canvas;->restore()V

    :cond_14
    return-void
.end method

.method public getDrawingCache(Z)Landroid/graphics/Bitmap;
    .locals 0

    const/4 p1, 0x0

    return-object p1
.end method

.method public getProgress()F
    .locals 1

    .line 354
    iget v0, p0, Lcom/mbridge/msdk/foundation/webview/ProgressBar;->i:F

    return v0
.end method

.method public initResource(Z)V
    .locals 5

    if-nez p1, :cond_1

    .line 148
    iget-object p1, p0, Lcom/mbridge/msdk/foundation/webview/ProgressBar;->t:Landroid/graphics/drawable/Drawable;

    if-nez p1, :cond_0

    iget-object p1, p0, Lcom/mbridge/msdk/foundation/webview/ProgressBar;->q:Landroid/graphics/drawable/Drawable;

    if-nez p1, :cond_0

    iget-object p1, p0, Lcom/mbridge/msdk/foundation/webview/ProgressBar;->r:Landroid/graphics/drawable/Drawable;

    if-nez p1, :cond_0

    iget-object p1, p0, Lcom/mbridge/msdk/foundation/webview/ProgressBar;->s:Landroid/graphics/drawable/Drawable;

    if-eqz p1, :cond_1

    :cond_0
    return-void

    .line 154
    :cond_1
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/webview/ProgressBar;->getResources()Landroid/content/res/Resources;

    move-result-object p1

    .line 155
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/webview/ProgressBar;->getResources()Landroid/content/res/Resources;

    move-result-object v0

    .line 157
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/controller/a;->d()Ljava/lang/String;

    move-result-object v1

    const-string v2, "drawable"

    const-string v3, "mbridge_cm_highlight"

    .line 155
    invoke-virtual {v0, v3, v2, v1}, Landroid/content/res/Resources;->getIdentifier(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    .line 154
    invoke-virtual {p1, v0}, Landroid/content/res/Resources;->getDrawable(I)Landroid/graphics/drawable/Drawable;

    move-result-object p1

    iput-object p1, p0, Lcom/mbridge/msdk/foundation/webview/ProgressBar;->t:Landroid/graphics/drawable/Drawable;

    const/4 v0, 0x0

    if-eqz p1, :cond_2

    .line 160
    invoke-virtual {p1}, Landroid/graphics/drawable/Drawable;->getIntrinsicWidth()I

    move-result v1

    iget-object v3, p0, Lcom/mbridge/msdk/foundation/webview/ProgressBar;->t:Landroid/graphics/drawable/Drawable;

    .line 161
    invoke-virtual {v3}, Landroid/graphics/drawable/Drawable;->getIntrinsicHeight()I

    move-result v3

    .line 159
    invoke-virtual {p1, v0, v0, v1, v3}, Landroid/graphics/drawable/Drawable;->setBounds(IIII)V

    .line 164
    :cond_2
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/webview/ProgressBar;->getResources()Landroid/content/res/Resources;

    move-result-object p1

    .line 165
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/webview/ProgressBar;->getResources()Landroid/content/res/Resources;

    move-result-object v1

    .line 166
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v3

    invoke-virtual {v3}, Lcom/mbridge/msdk/foundation/controller/a;->d()Ljava/lang/String;

    move-result-object v3

    const-string v4, "mbridge_cm_head"

    .line 165
    invoke-virtual {v1, v4, v2, v3}, Landroid/content/res/Resources;->getIdentifier(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)I

    move-result v1

    .line 164
    invoke-virtual {p1, v1}, Landroid/content/res/Resources;->getDrawable(I)Landroid/graphics/drawable/Drawable;

    move-result-object p1

    iput-object p1, p0, Lcom/mbridge/msdk/foundation/webview/ProgressBar;->q:Landroid/graphics/drawable/Drawable;

    if-eqz p1, :cond_3

    .line 169
    invoke-virtual {p1}, Landroid/graphics/drawable/Drawable;->getIntrinsicWidth()I

    move-result v1

    iget-object v3, p0, Lcom/mbridge/msdk/foundation/webview/ProgressBar;->q:Landroid/graphics/drawable/Drawable;

    .line 170
    invoke-virtual {v3}, Landroid/graphics/drawable/Drawable;->getIntrinsicHeight()I

    move-result v3

    .line 168
    invoke-virtual {p1, v0, v0, v1, v3}, Landroid/graphics/drawable/Drawable;->setBounds(IIII)V

    .line 173
    :cond_3
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/webview/ProgressBar;->getResources()Landroid/content/res/Resources;

    move-result-object p1

    .line 174
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/webview/ProgressBar;->getResources()Landroid/content/res/Resources;

    move-result-object v0

    .line 175
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/controller/a;->d()Ljava/lang/String;

    move-result-object v1

    const-string v3, "mbridge_cm_tail"

    .line 174
    invoke-virtual {v0, v3, v2, v1}, Landroid/content/res/Resources;->getIdentifier(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    .line 173
    invoke-virtual {p1, v0}, Landroid/content/res/Resources;->getDrawable(I)Landroid/graphics/drawable/Drawable;

    move-result-object p1

    iput-object p1, p0, Lcom/mbridge/msdk/foundation/webview/ProgressBar;->r:Landroid/graphics/drawable/Drawable;

    .line 176
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/webview/ProgressBar;->getResources()Landroid/content/res/Resources;

    move-result-object p1

    .line 177
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/webview/ProgressBar;->getResources()Landroid/content/res/Resources;

    move-result-object v0

    .line 179
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/controller/a;->d()Ljava/lang/String;

    move-result-object v1

    const-string v3, "mbridge_cm_end_animation"

    .line 177
    invoke-virtual {v0, v3, v2, v1}, Landroid/content/res/Resources;->getIdentifier(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    .line 176
    invoke-virtual {p1, v0}, Landroid/content/res/Resources;->getDrawable(I)Landroid/graphics/drawable/Drawable;

    move-result-object p1

    iput-object p1, p0, Lcom/mbridge/msdk/foundation/webview/ProgressBar;->s:Landroid/graphics/drawable/Drawable;

    return-void
.end method

.method protected onLayout(ZIIII)V
    .locals 0

    .line 206
    invoke-super/range {p0 .. p5}, Landroid/view/View;->onLayout(ZIIII)V

    return-void
.end method

.method protected onMeasure(II)V
    .locals 0

    .line 184
    invoke-super {p0, p1, p2}, Landroid/view/View;->onMeasure(II)V

    return-void
.end method

.method protected onSizeChanged(IIII)V
    .locals 0

    .line 418
    invoke-super {p0, p1, p2, p3, p4}, Landroid/view/View;->onSizeChanged(IIII)V

    .line 420
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/webview/ProgressBar;->getMeasuredWidth()I

    move-result p1

    int-to-float p1, p1

    iput p1, p0, Lcom/mbridge/msdk/foundation/webview/ProgressBar;->c:F

    return-void
.end method

.method public onThemeChange()V
    .locals 1

    .line 141
    iget-boolean v0, p0, Lcom/mbridge/msdk/foundation/webview/ProgressBar;->u:Z

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    .line 142
    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/foundation/webview/ProgressBar;->initResource(Z)V

    :cond_0
    return-void
.end method

.method public onWindowFocusChanged(Z)V
    .locals 5

    .line 190
    invoke-super {p0, p1}, Landroid/view/View;->onWindowFocusChanged(Z)V

    .line 192
    iget-object p1, p0, Lcom/mbridge/msdk/foundation/webview/ProgressBar;->t:Landroid/graphics/drawable/Drawable;

    const/4 v0, 0x0

    if-eqz p1, :cond_0

    .line 194
    invoke-virtual {p1}, Landroid/graphics/drawable/Drawable;->getIntrinsicWidth()I

    move-result v1

    int-to-double v1, v1

    const-wide/high16 v3, 0x3ff8000000000000L    # 1.5

    mul-double/2addr v1, v3

    double-to-int v1, v1

    .line 195
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/webview/ProgressBar;->getHeight()I

    move-result v2

    .line 193
    invoke-virtual {p1, v0, v0, v1, v2}, Landroid/graphics/drawable/Drawable;->setBounds(IIII)V

    .line 198
    :cond_0
    iget-object p1, p0, Lcom/mbridge/msdk/foundation/webview/ProgressBar;->q:Landroid/graphics/drawable/Drawable;

    if-eqz p1, :cond_1

    .line 199
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/webview/ProgressBar;->getWidth()I

    move-result v1

    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/webview/ProgressBar;->getHeight()I

    move-result v2

    invoke-virtual {p1, v0, v0, v1, v2}, Landroid/graphics/drawable/Drawable;->setBounds(IIII)V

    :cond_1
    return-void
.end method

.method public setPaused(Z)V
    .locals 2

    .line 425
    iput-boolean p1, p0, Lcom/mbridge/msdk/foundation/webview/ProgressBar;->y:Z

    if-nez p1, :cond_0

    .line 427
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/mbridge/msdk/foundation/webview/ProgressBar;->e:J

    :cond_0
    return-void
.end method

.method public setProgress(FZ)V
    .locals 0

    if-eqz p2, :cond_0

    const/high16 p2, 0x3f800000    # 1.0f

    cmpl-float p1, p1, p2

    if-ltz p1, :cond_0

    .line 297
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/webview/ProgressBar;->startEndAnimation()V

    :cond_0
    return-void
.end method

.method public setProgressBarListener(Lcom/mbridge/msdk/foundation/webview/c$a;)V
    .locals 0

    .line 359
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/webview/ProgressBar;->v:Lcom/mbridge/msdk/foundation/webview/c$a;

    return-void
.end method

.method public setProgressState(I)V
    .locals 4

    const/4 v0, 0x5

    const-wide/16 v1, 0x0

    const/4 v3, 0x1

    if-eq p1, v0, :cond_4

    const/4 v0, 0x6

    if-eq p1, v0, :cond_2

    const/4 v0, 0x7

    if-eq p1, v0, :cond_1

    const/16 v0, 0x8

    if-eq p1, v0, :cond_0

    goto :goto_0

    .line 405
    :cond_0
    iput v3, p0, Lcom/mbridge/msdk/foundation/webview/ProgressBar;->o:I

    .line 406
    iget p1, p0, Lcom/mbridge/msdk/foundation/webview/ProgressBar;->n:I

    if-ne p1, v3, :cond_5

    .line 407
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/webview/ProgressBar;->startEndAnimation()V

    goto :goto_0

    .line 401
    :cond_1
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/webview/ProgressBar;->startEndAnimation()V

    goto :goto_0

    .line 393
    :cond_2
    iput v3, p0, Lcom/mbridge/msdk/foundation/webview/ProgressBar;->n:I

    .line 394
    iget p1, p0, Lcom/mbridge/msdk/foundation/webview/ProgressBar;->o:I

    if-ne p1, v3, :cond_3

    .line 395
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/webview/ProgressBar;->startEndAnimation()V

    .line 397
    :cond_3
    iput-wide v1, p0, Lcom/mbridge/msdk/foundation/webview/ProgressBar;->k:J

    goto :goto_0

    .line 384
    :cond_4
    iput v3, p0, Lcom/mbridge/msdk/foundation/webview/ProgressBar;->m:I

    const/4 p1, 0x0

    .line 385
    iput p1, p0, Lcom/mbridge/msdk/foundation/webview/ProgressBar;->n:I

    .line 386
    iput p1, p0, Lcom/mbridge/msdk/foundation/webview/ProgressBar;->o:I

    .line 389
    iput-wide v1, p0, Lcom/mbridge/msdk/foundation/webview/ProgressBar;->k:J

    :cond_5
    :goto_0
    return-void
.end method

.method public setVisibility(I)V
    .locals 1

    .line 364
    invoke-super {p0, p1}, Landroid/view/View;->setVisibility(I)V

    if-nez p1, :cond_0

    .line 367
    iget-object p1, p0, Lcom/mbridge/msdk/foundation/webview/ProgressBar;->v:Lcom/mbridge/msdk/foundation/webview/c$a;

    if-eqz p1, :cond_1

    const/4 v0, 0x1

    .line 368
    invoke-interface {p1, v0}, Lcom/mbridge/msdk/foundation/webview/c$a;->a(Z)V

    goto :goto_0

    .line 371
    :cond_0
    iget-object p1, p0, Lcom/mbridge/msdk/foundation/webview/ProgressBar;->v:Lcom/mbridge/msdk/foundation/webview/c$a;

    if-eqz p1, :cond_1

    const/4 v0, 0x0

    .line 372
    invoke-interface {p1, v0}, Lcom/mbridge/msdk/foundation/webview/c$a;->a(Z)V

    :cond_1
    :goto_0
    return-void
.end method

.method public setVisible(Z)V
    .locals 2

    if-eqz p1, :cond_4

    const/4 p1, 0x1

    .line 307
    iput-boolean p1, p0, Lcom/mbridge/msdk/foundation/webview/ProgressBar;->x:Z

    .line 309
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/mbridge/msdk/foundation/webview/ProgressBar;->e:J

    const/4 p1, 0x0

    .line 310
    iput p1, p0, Lcom/mbridge/msdk/foundation/webview/ProgressBar;->f:F

    const-wide/16 v0, 0x0

    .line 311
    iput-wide v0, p0, Lcom/mbridge/msdk/foundation/webview/ProgressBar;->k:J

    const/4 v0, 0x0

    .line 313
    iput-boolean v0, p0, Lcom/mbridge/msdk/foundation/webview/ProgressBar;->g:Z

    .line 314
    iput p1, p0, Lcom/mbridge/msdk/foundation/webview/ProgressBar;->h:F

    .line 315
    iput p1, p0, Lcom/mbridge/msdk/foundation/webview/ProgressBar;->i:F

    .line 316
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/webview/ProgressBar;->getMeasuredWidth()I

    move-result p1

    int-to-float p1, p1

    iput p1, p0, Lcom/mbridge/msdk/foundation/webview/ProgressBar;->c:F

    .line 318
    iput-boolean v0, p0, Lcom/mbridge/msdk/foundation/webview/ProgressBar;->y:Z

    .line 320
    iput v0, p0, Lcom/mbridge/msdk/foundation/webview/ProgressBar;->m:I

    .line 321
    iput v0, p0, Lcom/mbridge/msdk/foundation/webview/ProgressBar;->n:I

    .line 322
    iput v0, p0, Lcom/mbridge/msdk/foundation/webview/ProgressBar;->o:I

    .line 324
    iget-object p1, p0, Lcom/mbridge/msdk/foundation/webview/ProgressBar;->t:Landroid/graphics/drawable/Drawable;

    if-eqz p1, :cond_0

    .line 325
    invoke-virtual {p1}, Landroid/graphics/drawable/Drawable;->getIntrinsicWidth()I

    move-result p1

    neg-int p1, p1

    iput p1, p0, Lcom/mbridge/msdk/foundation/webview/ProgressBar;->l:I

    goto :goto_0

    .line 327
    :cond_0
    iput v0, p0, Lcom/mbridge/msdk/foundation/webview/ProgressBar;->l:I

    .line 330
    :goto_0
    iget-object p1, p0, Lcom/mbridge/msdk/foundation/webview/ProgressBar;->r:Landroid/graphics/drawable/Drawable;

    const/16 v1, 0xff

    if-eqz p1, :cond_1

    .line 331
    invoke-virtual {p1, v1}, Landroid/graphics/drawable/Drawable;->setAlpha(I)V

    .line 334
    :cond_1
    iget-object p1, p0, Lcom/mbridge/msdk/foundation/webview/ProgressBar;->s:Landroid/graphics/drawable/Drawable;

    if-eqz p1, :cond_2

    .line 335
    invoke-virtual {p1, v1}, Landroid/graphics/drawable/Drawable;->setAlpha(I)V

    .line 338
    :cond_2
    iget-object p1, p0, Lcom/mbridge/msdk/foundation/webview/ProgressBar;->q:Landroid/graphics/drawable/Drawable;

    if-eqz p1, :cond_3

    .line 339
    invoke-virtual {p1, v1}, Landroid/graphics/drawable/Drawable;->setAlpha(I)V

    .line 342
    :cond_3
    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/foundation/webview/ProgressBar;->setVisibility(I)V

    .line 343
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/webview/ProgressBar;->invalidate()V

    goto :goto_1

    :cond_4
    const/4 p1, 0x4

    .line 348
    invoke-virtual {p0, p1}, Lcom/mbridge/msdk/foundation/webview/ProgressBar;->setVisibility(I)V

    :goto_1
    return-void
.end method

.method public startEndAnimation()V
    .locals 1

    .line 288
    iget-boolean v0, p0, Lcom/mbridge/msdk/foundation/webview/ProgressBar;->g:Z

    if-nez v0, :cond_0

    const/4 v0, 0x1

    .line 289
    iput-boolean v0, p0, Lcom/mbridge/msdk/foundation/webview/ProgressBar;->g:Z

    const/4 v0, 0x0

    .line 290
    iput v0, p0, Lcom/mbridge/msdk/foundation/webview/ProgressBar;->h:F

    :cond_0
    return-void
.end method
