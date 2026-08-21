.class public abstract Lcom/mbridge/msdk/video/bt/module/BTBaseView;
.super Landroid/widget/FrameLayout;
.source "BTBaseView.java"


# static fields
.field public static final TAG:Ljava/lang/String; = "BTBaseView"

.field protected static n:I = 0x0

.field protected static o:I = 0x1


# instance fields
.field protected a:Landroid/content/Context;

.field protected b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

.field protected c:Ljava/lang/String;

.field protected d:Ljava/lang/String;

.field protected e:Lcom/mbridge/msdk/videocommon/d/c;

.field protected f:Landroid/view/LayoutInflater;

.field protected g:I

.field protected h:Z

.field protected i:F

.field protected j:F

.field protected k:Landroid/graphics/Rect;

.field protected l:I

.field protected m:I


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;)V
    .locals 1

    const/4 v0, 0x0

    .line 78
    invoke-direct {p0, p1, v0}, Lcom/mbridge/msdk/video/bt/module/BTBaseView;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 0

    .line 82
    invoke-direct {p0, p1, p2}, Landroid/widget/FrameLayout;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    const-string p2, ""

    .line 43
    iput-object p2, p0, Lcom/mbridge/msdk/video/bt/module/BTBaseView;->d:Ljava/lang/String;

    const/4 p2, 0x1

    .line 47
    iput p2, p0, Lcom/mbridge/msdk/video/bt/module/BTBaseView;->g:I

    const/4 p2, 0x0

    .line 49
    iput-boolean p2, p0, Lcom/mbridge/msdk/video/bt/module/BTBaseView;->h:Z

    .line 83
    iput-object p1, p0, Lcom/mbridge/msdk/video/bt/module/BTBaseView;->a:Landroid/content/Context;

    .line 84
    invoke-static {p1}, Landroid/view/LayoutInflater;->from(Landroid/content/Context;)Landroid/view/LayoutInflater;

    move-result-object p2

    iput-object p2, p0, Lcom/mbridge/msdk/video/bt/module/BTBaseView;->f:Landroid/view/LayoutInflater;

    .line 85
    invoke-virtual {p0, p1}, Lcom/mbridge/msdk/video/bt/module/BTBaseView;->init(Landroid/content/Context;)V

    return-void
.end method

.method protected static a(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;)V
    .locals 3

    .line 337
    :try_start_0
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    const-string v1, "code"

    .line 338
    sget v2, Lcom/mbridge/msdk/video/bt/module/BTBaseView;->n:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "id"

    .line 339
    invoke-virtual {v0, v1, p2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 340
    new-instance p2, Lorg/json/JSONObject;

    invoke-direct {p2}, Lorg/json/JSONObject;-><init>()V

    const-string v1, "data"

    .line 341
    invoke-virtual {v0, v1, p2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 342
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a()Lcom/mbridge/msdk/mbjscommon/windvane/h;

    move-result-object p2

    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/String;->getBytes()[B

    move-result-object v0

    const/4 v1, 0x2

    invoke-static {v0, v1}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p2, p0, p1, v0}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 344
    invoke-static {}, Lcom/mbridge/msdk/video/bt/a/c;->a()Lcom/mbridge/msdk/video/bt/a/c;

    move-result-object p2

    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p2, p0, v0}, Lcom/mbridge/msdk/video/bt/a/c;->a(Landroid/webkit/WebView;Ljava/lang/String;)V

    .line 345
    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p0

    const-string p1, "BTBaseView"

    invoke-static {p1, p0}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    :goto_0
    return-void
.end method


# virtual methods
.method protected final a(I)Lorg/json/JSONObject;
    .locals 4

    .line 294
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    .line 296
    :try_start_0
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1}, Lorg/json/JSONObject;-><init>()V
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_2

    .line 297
    :try_start_1
    sget-object v0, Lcom/mbridge/msdk/foundation/same/a;->n:Ljava/lang/String;

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v2

    iget v3, p0, Lcom/mbridge/msdk/video/bt/module/BTBaseView;->i:F

    invoke-static {v2, v3}, Lcom/mbridge/msdk/foundation/tools/ae;->a(Landroid/content/Context;F)I

    move-result v2

    invoke-virtual {v1, v0, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 298
    sget-object v0, Lcom/mbridge/msdk/foundation/same/a;->o:Ljava/lang/String;

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v2

    iget v3, p0, Lcom/mbridge/msdk/video/bt/module/BTBaseView;->j:F

    invoke-static {v2, v3}, Lcom/mbridge/msdk/foundation/tools/ae;->a(Landroid/content/Context;F)I

    move-result v2

    invoke-virtual {v1, v0, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 300
    sget-object v0, Lcom/mbridge/msdk/foundation/same/a;->q:Ljava/lang/String;

    invoke-virtual {v1, v0, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;
    :try_end_1
    .catch Lorg/json/JSONException; {:try_start_1 .. :try_end_1} :catch_1

    .line 302
    :try_start_2
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/bt/module/BTBaseView;->getContext()Landroid/content/Context;

    move-result-object p1

    invoke-virtual {p1}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object p1

    invoke-virtual {p1}, Landroid/content/res/Resources;->getConfiguration()Landroid/content/res/Configuration;

    move-result-object p1

    iget p1, p1, Landroid/content/res/Configuration;->orientation:I

    iput p1, p0, Lcom/mbridge/msdk/video/bt/module/BTBaseView;->g:I
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_0
    .catch Lorg/json/JSONException; {:try_start_2 .. :try_end_2} :catch_1

    goto :goto_0

    :catch_0
    move-exception p1

    .line 304
    :try_start_3
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    .line 306
    :goto_0
    sget-object p1, Lcom/mbridge/msdk/foundation/same/a;->r:Ljava/lang/String;

    iget v0, p0, Lcom/mbridge/msdk/video/bt/module/BTBaseView;->g:I

    invoke-virtual {v1, p1, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 307
    sget-object p1, Lcom/mbridge/msdk/foundation/same/a;->s:Ljava/lang/String;

    invoke-virtual {p0}, Lcom/mbridge/msdk/video/bt/module/BTBaseView;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/tools/ae;->d(Landroid/content/Context;)F

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

    .line 309
    :goto_1
    invoke-virtual {p1}, Lorg/json/JSONException;->printStackTrace()V

    move-object v1, v0

    :goto_2
    return-object v1
.end method

.method protected a()V
    .locals 0

    return-void
.end method

.method public defaultShow()V
    .locals 2

    const-string v0, "BTBaseView"

    const-string v1, "defaultShow"

    .line 175
    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public findColor(Ljava/lang/String;)I
    .locals 2

    .line 120
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/BTBaseView;->a:Landroid/content/Context;

    invoke-virtual {v0}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v0

    const-string v1, "color"

    invoke-static {v0, p1, v1}, Lcom/mbridge/msdk/foundation/tools/s;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result p1

    return p1
.end method

.method public findDrawable(Ljava/lang/String;)I
    .locals 2

    .line 124
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/BTBaseView;->a:Landroid/content/Context;

    invoke-virtual {v0}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v0

    const-string v1, "drawable"

    invoke-static {v0, p1, v1}, Lcom/mbridge/msdk/foundation/tools/s;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result p1

    return p1
.end method

.method public findID(Ljava/lang/String;)I
    .locals 2

    .line 112
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/BTBaseView;->a:Landroid/content/Context;

    invoke-virtual {v0}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v0

    const-string v1, "id"

    invoke-static {v0, p1, v1}, Lcom/mbridge/msdk/foundation/tools/s;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result p1

    return p1
.end method

.method public findLayout(Ljava/lang/String;)I
    .locals 2

    .line 116
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/BTBaseView;->a:Landroid/content/Context;

    invoke-virtual {v0}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v0

    const-string v1, "layout"

    invoke-static {v0, p1, v1}, Lcom/mbridge/msdk/foundation/tools/s;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result p1

    return p1
.end method

.method public getCampaign()Lcom/mbridge/msdk/foundation/entity/CampaignEx;
    .locals 1

    .line 278
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/BTBaseView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    return-object v0
.end method

.method public getInstanceId()Ljava/lang/String;
    .locals 1

    .line 70
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/BTBaseView;->d:Ljava/lang/String;

    return-object v0
.end method

.method public getParentFrameLayoutParams()Landroid/widget/FrameLayout$LayoutParams;
    .locals 2

    .line 270
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/bt/module/BTBaseView;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v0

    .line 271
    instance-of v1, v0, Landroid/widget/FrameLayout$LayoutParams;

    if-eqz v1, :cond_0

    .line 272
    check-cast v0, Landroid/widget/FrameLayout$LayoutParams;

    return-object v0

    :cond_0
    const/4 v0, 0x0

    return-object v0
.end method

.method public getParentLinearLayoutParams()Landroid/widget/LinearLayout$LayoutParams;
    .locals 2

    .line 262
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/bt/module/BTBaseView;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v0

    .line 263
    instance-of v1, v0, Landroid/widget/LinearLayout$LayoutParams;

    if-eqz v1, :cond_0

    .line 264
    check-cast v0, Landroid/widget/LinearLayout$LayoutParams;

    return-object v0

    :cond_0
    const/4 v0, 0x0

    return-object v0
.end method

.method public getParentRelativeLayoutParams()Landroid/widget/RelativeLayout$LayoutParams;
    .locals 2

    .line 254
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/bt/module/BTBaseView;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v0

    .line 255
    instance-of v1, v0, Landroid/widget/RelativeLayout$LayoutParams;

    if-eqz v1, :cond_0

    .line 256
    check-cast v0, Landroid/widget/RelativeLayout$LayoutParams;

    return-object v0

    :cond_0
    const/4 v0, 0x0

    return-object v0
.end method

.method public getRect()Landroid/graphics/Rect;
    .locals 1

    .line 315
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/BTBaseView;->k:Landroid/graphics/Rect;

    return-object v0
.end method

.method public getUnitId()Ljava/lang/String;
    .locals 1

    .line 62
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/BTBaseView;->c:Ljava/lang/String;

    return-object v0
.end method

.method public getViewHeight()I
    .locals 1

    .line 332
    iget v0, p0, Lcom/mbridge/msdk/video/bt/module/BTBaseView;->m:I

    return v0
.end method

.method public getViewWidth()I
    .locals 1

    .line 328
    iget v0, p0, Lcom/mbridge/msdk/video/bt/module/BTBaseView;->l:I

    return v0
.end method

.method public abstract init(Landroid/content/Context;)V
.end method

.method public isLandscape()Z
    .locals 2

    .line 179
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/BTBaseView;->a:Landroid/content/Context;

    invoke-virtual {v0}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v0

    invoke-virtual {v0}, Landroid/content/res/Resources;->getConfiguration()Landroid/content/res/Configuration;

    move-result-object v0

    iget v0, v0, Landroid/content/res/Configuration;->orientation:I

    const/4 v1, 0x2

    if-ne v0, v1, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return v0
.end method

.method public varargs isNotNULL([Landroid/view/View;)Z
    .locals 4

    const/4 v0, 0x0

    if-eqz p1, :cond_1

    .line 130
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

    .line 90
    iget v0, p1, Landroid/content/res/Configuration;->orientation:I

    iput v0, p0, Lcom/mbridge/msdk/video/bt/module/BTBaseView;->g:I

    .line 91
    invoke-super {p0, p1}, Landroid/widget/FrameLayout;->onConfigurationChanged(Landroid/content/res/Configuration;)V

    .line 92
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "onConfigurationChanged:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget p1, p1, Landroid/content/res/Configuration;->orientation:I

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string v0, "BTBaseView"

    invoke-static {v0, p1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    return-void
.end method

.method public abstract onDestory()V
.end method

.method public onInterceptTouchEvent(Landroid/view/MotionEvent;)Z
    .locals 1

    .line 283
    invoke-virtual {p1}, Landroid/view/MotionEvent;->getRawX()F

    move-result v0

    iput v0, p0, Lcom/mbridge/msdk/video/bt/module/BTBaseView;->i:F

    .line 284
    invoke-virtual {p1}, Landroid/view/MotionEvent;->getRawY()F

    move-result v0

    iput v0, p0, Lcom/mbridge/msdk/video/bt/module/BTBaseView;->j:F

    .line 285
    invoke-super {p0, p1}, Landroid/widget/FrameLayout;->onInterceptTouchEvent(Landroid/view/MotionEvent;)Z

    move-result p1

    return p1
.end method

.method public onSelfConfigurationChanged(Landroid/content/res/Configuration;)V
    .locals 2

    .line 96
    iget v0, p1, Landroid/content/res/Configuration;->orientation:I

    iput v0, p0, Lcom/mbridge/msdk/video/bt/module/BTBaseView;->g:I

    .line 97
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "onSelfConfigurationChanged:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget p1, p1, Landroid/content/res/Configuration;->orientation:I

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string v0, "BTBaseView"

    invoke-static {v0, p1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    return-void
.end method

.method public setCampaign(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V
    .locals 0

    .line 104
    iput-object p1, p0, Lcom/mbridge/msdk/video/bt/module/BTBaseView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    return-void
.end method

.method public setInstanceId(Ljava/lang/String;)V
    .locals 0

    .line 74
    iput-object p1, p0, Lcom/mbridge/msdk/video/bt/module/BTBaseView;->d:Ljava/lang/String;

    return-void
.end method

.method public setLayout(II)V
    .locals 0

    .line 323
    iput p1, p0, Lcom/mbridge/msdk/video/bt/module/BTBaseView;->l:I

    .line 324
    iput p2, p0, Lcom/mbridge/msdk/video/bt/module/BTBaseView;->m:I

    return-void
.end method

.method public setLayoutCenter(II)V
    .locals 4

    .line 183
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/bt/module/BTBaseView;->getParentFrameLayoutParams()Landroid/widget/FrameLayout$LayoutParams;

    move-result-object v0

    .line 184
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/bt/module/BTBaseView;->getParentRelativeLayoutParams()Landroid/widget/RelativeLayout$LayoutParams;

    move-result-object v1

    .line 185
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/bt/module/BTBaseView;->getParentLinearLayoutParams()Landroid/widget/LinearLayout$LayoutParams;

    move-result-object v2

    const/16 v3, -0x3e7

    if-eqz v1, :cond_2

    const/16 v0, 0xd

    .line 187
    invoke-virtual {v1, v0}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    if-eq p1, v3, :cond_0

    .line 189
    iput p1, v1, Landroid/widget/RelativeLayout$LayoutParams;->width:I

    :cond_0
    if-eq p2, v3, :cond_1

    .line 192
    iput p2, v1, Landroid/widget/RelativeLayout$LayoutParams;->height:I

    .line 194
    :cond_1
    invoke-virtual {p0, v1}, Lcom/mbridge/msdk/video/bt/module/BTBaseView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    goto :goto_0

    :cond_2
    const/16 v1, 0x11

    if-eqz v2, :cond_5

    .line 196
    iput v1, v2, Landroid/widget/LinearLayout$LayoutParams;->gravity:I

    if-eq p1, v3, :cond_3

    .line 198
    iput p1, v2, Landroid/widget/LinearLayout$LayoutParams;->width:I

    :cond_3
    if-eq p2, v3, :cond_4

    .line 201
    iput p2, v2, Landroid/widget/LinearLayout$LayoutParams;->height:I

    .line 203
    :cond_4
    invoke-virtual {p0, v2}, Lcom/mbridge/msdk/video/bt/module/BTBaseView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    goto :goto_0

    :cond_5
    if-eqz v0, :cond_8

    .line 205
    iput v1, v0, Landroid/widget/FrameLayout$LayoutParams;->gravity:I

    if-eq p1, v3, :cond_6

    .line 207
    iput p1, v0, Landroid/widget/FrameLayout$LayoutParams;->width:I

    :cond_6
    if-eq p2, v3, :cond_7

    .line 210
    iput p2, v0, Landroid/widget/FrameLayout$LayoutParams;->height:I

    .line 212
    :cond_7
    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/video/bt/module/BTBaseView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    :cond_8
    :goto_0
    return-void
.end method

.method public setLayoutParam(IIII)V
    .locals 4

    .line 217
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/bt/module/BTBaseView;->getParentFrameLayoutParams()Landroid/widget/FrameLayout$LayoutParams;

    move-result-object v0

    .line 218
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/bt/module/BTBaseView;->getParentRelativeLayoutParams()Landroid/widget/RelativeLayout$LayoutParams;

    move-result-object v1

    .line 219
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/bt/module/BTBaseView;->getParentLinearLayoutParams()Landroid/widget/LinearLayout$LayoutParams;

    move-result-object v2

    const/16 v3, -0x3e7

    if-eqz v1, :cond_2

    .line 221
    iput p2, v1, Landroid/widget/RelativeLayout$LayoutParams;->topMargin:I

    .line 222
    iput p1, v1, Landroid/widget/RelativeLayout$LayoutParams;->leftMargin:I

    if-eq p3, v3, :cond_0

    .line 224
    iput p3, v1, Landroid/widget/RelativeLayout$LayoutParams;->width:I

    :cond_0
    if-eq p4, v3, :cond_1

    .line 227
    iput p4, v1, Landroid/widget/RelativeLayout$LayoutParams;->height:I

    .line 229
    :cond_1
    invoke-virtual {p0, v1}, Lcom/mbridge/msdk/video/bt/module/BTBaseView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    goto :goto_0

    :cond_2
    if-eqz v2, :cond_5

    .line 231
    iput p2, v2, Landroid/widget/LinearLayout$LayoutParams;->topMargin:I

    .line 232
    iput p1, v2, Landroid/widget/LinearLayout$LayoutParams;->leftMargin:I

    if-eq p3, v3, :cond_3

    .line 234
    iput p3, v2, Landroid/widget/LinearLayout$LayoutParams;->width:I

    :cond_3
    if-eq p4, v3, :cond_4

    .line 237
    iput p4, v2, Landroid/widget/LinearLayout$LayoutParams;->height:I

    .line 239
    :cond_4
    invoke-virtual {p0, v2}, Lcom/mbridge/msdk/video/bt/module/BTBaseView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    goto :goto_0

    :cond_5
    if-eqz v0, :cond_8

    .line 241
    iput p2, v0, Landroid/widget/FrameLayout$LayoutParams;->topMargin:I

    .line 242
    iput p1, v0, Landroid/widget/FrameLayout$LayoutParams;->leftMargin:I

    if-eq p3, v3, :cond_6

    .line 244
    iput p3, v0, Landroid/widget/FrameLayout$LayoutParams;->width:I

    :cond_6
    if-eq p4, v3, :cond_7

    .line 247
    iput p4, v0, Landroid/widget/FrameLayout$LayoutParams;->height:I

    .line 249
    :cond_7
    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/video/bt/module/BTBaseView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    :cond_8
    :goto_0
    return-void
.end method

.method public setMatchParent()V
    .locals 2

    .line 143
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/bt/module/BTBaseView;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v0

    const/4 v1, -0x1

    if-nez v0, :cond_0

    .line 145
    new-instance v0, Landroid/view/ViewGroup$LayoutParams;

    invoke-direct {v0, v1, v1}, Landroid/view/ViewGroup$LayoutParams;-><init>(II)V

    .line 146
    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/video/bt/module/BTBaseView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    goto :goto_0

    .line 148
    :cond_0
    iput v1, v0, Landroid/view/ViewGroup$LayoutParams;->height:I

    .line 149
    iput v1, v0, Landroid/view/ViewGroup$LayoutParams;->width:I

    :goto_0
    return-void
.end method

.method public setRect(Landroid/graphics/Rect;)V
    .locals 0

    .line 319
    iput-object p1, p0, Lcom/mbridge/msdk/video/bt/module/BTBaseView;->k:Landroid/graphics/Rect;

    return-void
.end method

.method public setRewardUnitSetting(Lcom/mbridge/msdk/videocommon/d/c;)V
    .locals 0

    .line 108
    iput-object p1, p0, Lcom/mbridge/msdk/video/bt/module/BTBaseView;->e:Lcom/mbridge/msdk/videocommon/d/c;

    return-void
.end method

.method public setUnitId(Ljava/lang/String;)V
    .locals 0

    .line 66
    iput-object p1, p0, Lcom/mbridge/msdk/video/bt/module/BTBaseView;->c:Ljava/lang/String;

    return-void
.end method

.method public setWrapContent()V
    .locals 2

    .line 154
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/bt/module/BTBaseView;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v0

    const/4 v1, -0x2

    if-nez v0, :cond_0

    .line 156
    new-instance v0, Landroid/view/ViewGroup$LayoutParams;

    invoke-direct {v0, v1, v1}, Landroid/view/ViewGroup$LayoutParams;-><init>(II)V

    .line 157
    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/video/bt/module/BTBaseView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    goto :goto_0

    .line 159
    :cond_0
    iput v1, v0, Landroid/view/ViewGroup$LayoutParams;->height:I

    .line 160
    iput v1, v0, Landroid/view/ViewGroup$LayoutParams;->width:I

    :goto_0
    return-void
.end method
