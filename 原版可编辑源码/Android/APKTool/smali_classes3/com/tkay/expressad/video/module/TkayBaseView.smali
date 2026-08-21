.class public abstract Lcom/tkay/expressad/video/module/TkayBaseView;
.super Landroid/widget/RelativeLayout;


# static fields
.field public static final TAG:Ljava/lang/String; = "TkayBaseView"

.field private static final n:I = -0x3e7


# instance fields
.field protected a:Landroid/content/Context;

.field protected b:Lcom/tkay/expressad/foundation/d/c;

.field protected c:Landroid/view/LayoutInflater;

.field protected d:I

.field protected e:Lcom/tkay/expressad/video/module/a/a;

.field protected f:Z

.field protected g:F

.field protected h:F

.field protected i:Z

.field protected j:I

.field protected k:Z

.field protected l:I

.field protected m:I


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 1

    const/4 v0, 0x0

    .line 56
    invoke-direct {p0, p1, v0}, Lcom/tkay/expressad/video/module/TkayBaseView;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 1

    .line 72
    invoke-direct {p0, p1, p2}, Landroid/widget/RelativeLayout;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    const/4 p2, 0x1

    .line 36
    iput p2, p0, Lcom/tkay/expressad/video/module/TkayBaseView;->d:I

    .line 39
    new-instance v0, Lcom/tkay/expressad/video/module/a/a/f;

    invoke-direct {v0}, Lcom/tkay/expressad/video/module/a/a/f;-><init>()V

    iput-object v0, p0, Lcom/tkay/expressad/video/module/TkayBaseView;->e:Lcom/tkay/expressad/video/module/a/a;

    const/4 v0, 0x0

    .line 41
    iput-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayBaseView;->f:Z

    .line 52
    iput p2, p0, Lcom/tkay/expressad/video/module/TkayBaseView;->l:I

    .line 53
    iput v0, p0, Lcom/tkay/expressad/video/module/TkayBaseView;->m:I

    .line 73
    iput-object p1, p0, Lcom/tkay/expressad/video/module/TkayBaseView;->a:Landroid/content/Context;

    .line 74
    invoke-static {p1}, Landroid/view/LayoutInflater;->from(Landroid/content/Context;)Landroid/view/LayoutInflater;

    move-result-object p2

    iput-object p2, p0, Lcom/tkay/expressad/video/module/TkayBaseView;->c:Landroid/view/LayoutInflater;

    .line 75
    invoke-virtual {p0, p1}, Lcom/tkay/expressad/video/module/TkayBaseView;->init(Landroid/content/Context;)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;ZIZII)V
    .locals 1

    .line 60
    invoke-direct {p0, p1, p2}, Landroid/widget/RelativeLayout;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    const/4 p2, 0x1

    .line 36
    iput p2, p0, Lcom/tkay/expressad/video/module/TkayBaseView;->d:I

    .line 39
    new-instance v0, Lcom/tkay/expressad/video/module/a/a/f;

    invoke-direct {v0}, Lcom/tkay/expressad/video/module/a/a/f;-><init>()V

    iput-object v0, p0, Lcom/tkay/expressad/video/module/TkayBaseView;->e:Lcom/tkay/expressad/video/module/a/a;

    const/4 v0, 0x0

    .line 41
    iput-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayBaseView;->f:Z

    .line 52
    iput p2, p0, Lcom/tkay/expressad/video/module/TkayBaseView;->l:I

    .line 53
    iput v0, p0, Lcom/tkay/expressad/video/module/TkayBaseView;->m:I

    .line 61
    iput-object p1, p0, Lcom/tkay/expressad/video/module/TkayBaseView;->a:Landroid/content/Context;

    .line 62
    invoke-static {p1}, Landroid/view/LayoutInflater;->from(Landroid/content/Context;)Landroid/view/LayoutInflater;

    move-result-object p2

    iput-object p2, p0, Lcom/tkay/expressad/video/module/TkayBaseView;->c:Landroid/view/LayoutInflater;

    .line 63
    iput-boolean p3, p0, Lcom/tkay/expressad/video/module/TkayBaseView;->i:Z

    .line 64
    iput p4, p0, Lcom/tkay/expressad/video/module/TkayBaseView;->j:I

    .line 65
    iput-boolean p5, p0, Lcom/tkay/expressad/video/module/TkayBaseView;->k:Z

    .line 66
    iput p6, p0, Lcom/tkay/expressad/video/module/TkayBaseView;->l:I

    .line 67
    iput p7, p0, Lcom/tkay/expressad/video/module/TkayBaseView;->m:I

    .line 68
    invoke-virtual {p0, p1}, Lcom/tkay/expressad/video/module/TkayBaseView;->init(Landroid/content/Context;)V

    return-void
.end method


# virtual methods
.method protected final a(I)Lorg/json/JSONObject;
    .locals 4

    .line 268
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    .line 270
    :try_start_0
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1}, Lorg/json/JSONObject;-><init>()V
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_2

    .line 271
    :try_start_1
    sget-object v0, Lcom/tkay/expressad/foundation/g/a;->cc:Ljava/lang/String;

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v2

    iget v3, p0, Lcom/tkay/expressad/video/module/TkayBaseView;->g:F

    invoke-static {v2, v3}, Lcom/tkay/expressad/foundation/h/t;->a(Landroid/content/Context;F)I

    move-result v2

    invoke-virtual {v1, v0, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 272
    sget-object v0, Lcom/tkay/expressad/foundation/g/a;->cd:Ljava/lang/String;

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v2

    iget v3, p0, Lcom/tkay/expressad/video/module/TkayBaseView;->h:F

    invoke-static {v2, v3}, Lcom/tkay/expressad/foundation/h/t;->a(Landroid/content/Context;F)I

    move-result v2

    invoke-virtual {v1, v0, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 274
    sget-object v0, Lcom/tkay/expressad/foundation/g/a;->cf:Ljava/lang/String;

    invoke-virtual {v1, v0, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;
    :try_end_1
    .catch Lorg/json/JSONException; {:try_start_1 .. :try_end_1} :catch_1

    .line 276
    :try_start_2
    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/TkayBaseView;->getContext()Landroid/content/Context;

    move-result-object p1

    invoke-virtual {p1}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object p1

    invoke-virtual {p1}, Landroid/content/res/Resources;->getConfiguration()Landroid/content/res/Configuration;

    move-result-object p1

    iget p1, p1, Landroid/content/res/Configuration;->orientation:I

    iput p1, p0, Lcom/tkay/expressad/video/module/TkayBaseView;->d:I
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_0
    .catch Lorg/json/JSONException; {:try_start_2 .. :try_end_2} :catch_1

    goto :goto_0

    :catch_0
    move-exception p1

    .line 278
    :try_start_3
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    .line 280
    :goto_0
    sget-object p1, Lcom/tkay/expressad/foundation/g/a;->cg:Ljava/lang/String;

    iget v0, p0, Lcom/tkay/expressad/video/module/TkayBaseView;->d:I

    invoke-virtual {v1, p1, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 281
    sget-object p1, Lcom/tkay/expressad/foundation/g/a;->ch:Ljava/lang/String;

    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/TkayBaseView;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/expressad/foundation/h/t;->c(Landroid/content/Context;)F

    move-result v0

    float-to-double v2, v0

    invoke-virtual {v1, p1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;D)Lorg/json/JSONObject;
    :try_end_3
    .catch Lorg/json/JSONException; {:try_start_3 .. :try_end_3} :catch_1

    goto :goto_2

    :catch_1
    move-exception p1

    move-object v0, v1

    goto :goto_1

    :catch_2
    move-exception p1

    .line 283
    :goto_1
    invoke-virtual {p1}, Lorg/json/JSONException;->printStackTrace()V

    move-object v1, v0

    :goto_2
    return-object v1
.end method

.method protected c()V
    .locals 0

    return-void
.end method

.method protected final d()Ljava/lang/String;
    .locals 1

    const/4 v0, 0x0

    .line 264
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/video/module/TkayBaseView;->a(I)Lorg/json/JSONObject;

    move-result-object v0

    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public defaultShow()V
    .locals 0

    return-void
.end method

.method public filterFindViewId(ZLjava/lang/String;)I
    .locals 0

    if-eqz p1, :cond_0

    .line 115
    invoke-virtual {p0, p2}, Lcom/tkay/expressad/video/module/TkayBaseView;->findDyID(Ljava/lang/String;)I

    move-result p1

    goto :goto_0

    .line 117
    :cond_0
    invoke-virtual {p0, p2}, Lcom/tkay/expressad/video/module/TkayBaseView;->findID(Ljava/lang/String;)I

    move-result p1

    :goto_0
    return p1
.end method

.method public findColor(Ljava/lang/String;)I
    .locals 2

    .line 127
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayBaseView;->a:Landroid/content/Context;

    invoke-virtual {v0}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v0

    const-string v1, "color"

    invoke-static {v0, p1, v1}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result p1

    return p1
.end method

.method public findDrawable(Ljava/lang/String;)I
    .locals 2

    .line 131
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayBaseView;->a:Landroid/content/Context;

    invoke-virtual {v0}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v0

    const-string v1, "drawable"

    invoke-static {v0, p1, v1}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result p1

    return p1
.end method

.method public findDyID(Ljava/lang/String;)I
    .locals 1

    .line 106
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 107
    invoke-virtual {p1}, Ljava/lang/String;->hashCode()I

    move-result p1

    return p1

    :cond_0
    const/4 p1, -0x1

    return p1
.end method

.method public findID(Ljava/lang/String;)I
    .locals 2

    .line 102
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayBaseView;->a:Landroid/content/Context;

    invoke-virtual {v0}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v0

    const-string v1, "id"

    invoke-static {v0, p1, v1}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result p1

    return p1
.end method

.method public findLayout(Ljava/lang/String;)I
    .locals 2

    .line 123
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayBaseView;->a:Landroid/content/Context;

    invoke-virtual {v0}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v0

    const-string v1, "layout"

    invoke-static {v0, p1, v1}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result p1

    return p1
.end method

.method public getCampaign()Lcom/tkay/expressad/foundation/d/c;
    .locals 1

    .line 253
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayBaseView;->b:Lcom/tkay/expressad/foundation/d/c;

    return-object v0
.end method

.method public getParentLinearLayoutParams()Landroid/widget/LinearLayout$LayoutParams;
    .locals 2

    .line 245
    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/TkayBaseView;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v0

    .line 246
    instance-of v1, v0, Landroid/widget/LinearLayout$LayoutParams;

    if-eqz v1, :cond_0

    .line 247
    check-cast v0, Landroid/widget/LinearLayout$LayoutParams;

    return-object v0

    :cond_0
    const/4 v0, 0x0

    return-object v0
.end method

.method public getParentRelativeLayoutParams()Landroid/widget/RelativeLayout$LayoutParams;
    .locals 2

    .line 238
    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/TkayBaseView;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v0

    .line 239
    instance-of v1, v0, Landroid/widget/RelativeLayout$LayoutParams;

    if-eqz v1, :cond_0

    .line 240
    check-cast v0, Landroid/widget/RelativeLayout$LayoutParams;

    return-object v0

    :cond_0
    const/4 v0, 0x0

    return-object v0
.end method

.method public abstract init(Landroid/content/Context;)V
.end method

.method public isLandscape()Z
    .locals 2

    .line 184
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayBaseView;->a:Landroid/content/Context;

    invoke-virtual {v0}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v0

    invoke-virtual {v0}, Landroid/content/res/Resources;->getConfiguration()Landroid/content/res/Configuration;

    move-result-object v0

    iget v0, v0, Landroid/content/res/Configuration;->orientation:I

    const/4 v1, 0x2

    if-ne v0, v1, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public varargs isNotNULL([Landroid/view/View;)Z
    .locals 4

    const/4 v0, 0x0

    if-eqz p1, :cond_1

    .line 137
    array-length v1, p1

    move v2, v0

    move v3, v2

    :goto_0
    if-ge v2, v1, :cond_0

    aget-object v3, p1, v2

    if-eqz v3, :cond_1

    add-int/lit8 v2, v2, 0x1

    const/4 v3, 0x1

    goto :goto_0

    :cond_0
    move v0, v3

    :cond_1
    return v0
.end method

.method public onConfigurationChanged(Landroid/content/res/Configuration;)V
    .locals 2

    .line 80
    iget v0, p1, Landroid/content/res/Configuration;->orientation:I

    iput v0, p0, Lcom/tkay/expressad/video/module/TkayBaseView;->d:I

    .line 81
    invoke-super {p0, p1}, Landroid/widget/RelativeLayout;->onConfigurationChanged(Landroid/content/res/Configuration;)V

    .line 82
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "onConfigurationChanged:"

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget p1, p1, Landroid/content/res/Configuration;->orientation:I

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string v0, "TkayBaseView"

    invoke-static {v0, p1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    return-void
.end method

.method public onInterceptTouchEvent(Landroid/view/MotionEvent;)Z
    .locals 1

    .line 258
    invoke-virtual {p1}, Landroid/view/MotionEvent;->getRawX()F

    move-result v0

    iput v0, p0, Lcom/tkay/expressad/video/module/TkayBaseView;->g:F

    .line 259
    invoke-virtual {p1}, Landroid/view/MotionEvent;->getRawY()F

    move-result v0

    iput v0, p0, Lcom/tkay/expressad/video/module/TkayBaseView;->h:F

    .line 260
    invoke-super {p0, p1}, Landroid/widget/RelativeLayout;->onInterceptTouchEvent(Landroid/view/MotionEvent;)Z

    move-result p1

    return p1
.end method

.method public onSelfConfigurationChanged(Landroid/content/res/Configuration;)V
    .locals 2

    .line 86
    iget v0, p1, Landroid/content/res/Configuration;->orientation:I

    iput v0, p0, Lcom/tkay/expressad/video/module/TkayBaseView;->d:I

    .line 87
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "onSelfConfigurationChanged:"

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget p1, p1, Landroid/content/res/Configuration;->orientation:I

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string v0, "TkayBaseView"

    invoke-static {v0, p1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    return-void
.end method

.method public setCampaign(Lcom/tkay/expressad/foundation/d/c;)V
    .locals 0

    .line 98
    iput-object p1, p0, Lcom/tkay/expressad/video/module/TkayBaseView;->b:Lcom/tkay/expressad/foundation/d/c;

    return-void
.end method

.method public setLayoutCenter(II)V
    .locals 3

    .line 188
    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/TkayBaseView;->getParentRelativeLayoutParams()Landroid/widget/RelativeLayout$LayoutParams;

    move-result-object v0

    .line 189
    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/TkayBaseView;->getParentLinearLayoutParams()Landroid/widget/LinearLayout$LayoutParams;

    move-result-object v1

    const/16 v2, -0x3e7

    if-eqz v0, :cond_2

    const/16 v1, 0xd

    .line 191
    invoke-virtual {v0, v1}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    if-eq p1, v2, :cond_0

    .line 193
    iput p1, v0, Landroid/widget/RelativeLayout$LayoutParams;->width:I

    :cond_0
    if-eq p2, v2, :cond_1

    .line 196
    iput p2, v0, Landroid/widget/RelativeLayout$LayoutParams;->height:I

    .line 198
    :cond_1
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/video/module/TkayBaseView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    return-void

    :cond_2
    if-eqz v1, :cond_5

    const/16 v0, 0x11

    .line 200
    iput v0, v1, Landroid/widget/LinearLayout$LayoutParams;->gravity:I

    if-eq p1, v2, :cond_3

    .line 202
    iput p1, v1, Landroid/widget/LinearLayout$LayoutParams;->width:I

    :cond_3
    if-eq p2, v2, :cond_4

    .line 205
    iput p2, v1, Landroid/widget/LinearLayout$LayoutParams;->height:I

    .line 207
    :cond_4
    invoke-virtual {p0, v1}, Lcom/tkay/expressad/video/module/TkayBaseView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    :cond_5
    return-void
.end method

.method public setLayoutParam(IIII)V
    .locals 3

    .line 212
    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/TkayBaseView;->getParentRelativeLayoutParams()Landroid/widget/RelativeLayout$LayoutParams;

    move-result-object v0

    .line 213
    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/TkayBaseView;->getParentLinearLayoutParams()Landroid/widget/LinearLayout$LayoutParams;

    move-result-object v1

    const/16 v2, -0x3e7

    if-eqz v0, :cond_2

    .line 215
    iput p2, v0, Landroid/widget/RelativeLayout$LayoutParams;->topMargin:I

    .line 216
    iput p1, v0, Landroid/widget/RelativeLayout$LayoutParams;->leftMargin:I

    if-eq p3, v2, :cond_0

    .line 218
    iput p3, v0, Landroid/widget/RelativeLayout$LayoutParams;->width:I

    :cond_0
    if-eq p4, v2, :cond_1

    .line 221
    iput p4, v0, Landroid/widget/RelativeLayout$LayoutParams;->height:I

    .line 223
    :cond_1
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/video/module/TkayBaseView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    return-void

    :cond_2
    if-eqz v1, :cond_5

    .line 225
    iput p2, v1, Landroid/widget/LinearLayout$LayoutParams;->topMargin:I

    .line 226
    iput p1, v1, Landroid/widget/LinearLayout$LayoutParams;->leftMargin:I

    if-eq p3, v2, :cond_3

    .line 228
    iput p3, v1, Landroid/widget/LinearLayout$LayoutParams;->width:I

    :cond_3
    if-eq p4, v2, :cond_4

    .line 231
    iput p4, v1, Landroid/widget/LinearLayout$LayoutParams;->height:I

    .line 233
    :cond_4
    invoke-virtual {p0, v1}, Lcom/tkay/expressad/video/module/TkayBaseView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    :cond_5
    return-void
.end method

.method public setMatchParent()V
    .locals 2

    .line 150
    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/TkayBaseView;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v0

    const/4 v1, -0x1

    if-nez v0, :cond_0

    .line 152
    new-instance v0, Landroid/view/ViewGroup$LayoutParams;

    invoke-direct {v0, v1, v1}, Landroid/view/ViewGroup$LayoutParams;-><init>(II)V

    .line 153
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/video/module/TkayBaseView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    return-void

    .line 155
    :cond_0
    iput v1, v0, Landroid/view/ViewGroup$LayoutParams;->height:I

    .line 156
    iput v1, v0, Landroid/view/ViewGroup$LayoutParams;->width:I

    return-void
.end method

.method public setNotifyListener(Lcom/tkay/expressad/video/module/a/a;)V
    .locals 0

    .line 91
    iput-object p1, p0, Lcom/tkay/expressad/video/module/TkayBaseView;->e:Lcom/tkay/expressad/video/module/a/a;

    return-void
.end method

.method public setWrapContent()V
    .locals 2

    .line 160
    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/TkayBaseView;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v0

    const/4 v1, -0x2

    if-nez v0, :cond_0

    .line 162
    new-instance v0, Landroid/view/ViewGroup$LayoutParams;

    invoke-direct {v0, v1, v1}, Landroid/view/ViewGroup$LayoutParams;-><init>(II)V

    .line 163
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/video/module/TkayBaseView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    return-void

    .line 165
    :cond_0
    iput v1, v0, Landroid/view/ViewGroup$LayoutParams;->height:I

    .line 166
    iput v1, v0, Landroid/view/ViewGroup$LayoutParams;->width:I

    return-void
.end method
