.class public Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;
.super Landroid/widget/RelativeLayout;


# static fields
.field protected static final a:Ljava/lang/String; = "webviewshow"

.field private static b:Ljava/lang/String; = "TYNativeAdvancedView"


# instance fields
.field private c:Lcom/tkay/expressad/advanced/view/TYNativeAdvancedWebview;

.field private d:Landroid/view/View;

.field private e:Z

.field private f:Z

.field private g:Z

.field private h:Lcom/tkay/expressad/advanced/d/c;

.field private i:Lcom/tkay/expressad/advanced/js/NativeAdvancedJSBridgeImpl;

.field private j:Landroid/content/Context;


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;)V
    .locals 1

    const/4 v0, 0x0

    .line 90
    invoke-direct {p0, p1, v0}, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 1

    const/4 v0, 0x0

    .line 94
    invoke-direct {p0, p1, p2, v0}, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V
    .locals 0

    .line 98
    invoke-direct {p0, p1, p2, p3}, Landroid/widget/RelativeLayout;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V

    .line 99
    iput-object p1, p0, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;->j:Landroid/content/Context;

    return-void
.end method

.method static synthetic a(Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;)Lcom/tkay/expressad/advanced/view/TYNativeAdvancedWebview;
    .locals 0

    .line 27
    iget-object p0, p0, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;->c:Lcom/tkay/expressad/advanced/view/TYNativeAdvancedWebview;

    return-object p0
.end method

.method static synthetic a()Ljava/lang/String;
    .locals 1

    .line 27
    sget-object v0, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;->b:Ljava/lang/String;

    return-object v0
.end method

.method private b()V
    .locals 5

    .line 111
    iget-object v0, p0, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;->c:Lcom/tkay/expressad/advanced/view/TYNativeAdvancedWebview;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedWebview;->getParent()Landroid/view/ViewParent;

    move-result-object v0

    if-nez v0, :cond_0

    .line 112
    iget-object v0, p0, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;->c:Lcom/tkay/expressad/advanced/view/TYNativeAdvancedWebview;

    new-instance v1, Landroid/view/ViewGroup$LayoutParams;

    const/4 v2, -0x1

    invoke-direct {v1, v2, v2}, Landroid/view/ViewGroup$LayoutParams;-><init>(II)V

    invoke-virtual {p0, v0, v1}, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    :cond_0
    const/4 v0, 0x2

    new-array v0, v0, [I

    .line 1187
    iget-object v1, p0, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;->c:Lcom/tkay/expressad/advanced/view/TYNativeAdvancedWebview;

    invoke-virtual {v1, v0}, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedWebview;->getLocationInWindow([I)V

    .line 1188
    iget-object v1, p0, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;->c:Lcom/tkay/expressad/advanced/view/TYNativeAdvancedWebview;

    const/4 v2, 0x0

    aget v2, v0, v2

    const/4 v3, 0x1

    aget v0, v0, v3

    .line 1189
    invoke-virtual {v1}, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedWebview;->getWidth()I

    move-result v3

    iget-object v4, p0, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;->c:Lcom/tkay/expressad/advanced/view/TYNativeAdvancedWebview;

    invoke-virtual {v4}, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedWebview;->getHeight()I

    move-result v4

    .line 1188
    invoke-static {v1, v2, v0, v3, v4}, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;->transInfoForMraid(Landroid/webkit/WebView;IIII)V

    .line 1190
    iget-object v0, p0, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;->c:Lcom/tkay/expressad/advanced/view/TYNativeAdvancedWebview;

    if-eqz v0, :cond_1

    .line 1191
    iget-object v1, p0, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;->i:Lcom/tkay/expressad/advanced/js/NativeAdvancedJSBridgeImpl;

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedWebview;->setObject(Ljava/lang/Object;)V

    .line 1192
    iget-object v0, p0, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;->c:Lcom/tkay/expressad/advanced/view/TYNativeAdvancedWebview;

    new-instance v1, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView$1;

    invoke-direct {v1, p0}, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView$1;-><init>(Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;)V

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedWebview;->post(Ljava/lang/Runnable;)Z

    .line 116
    :cond_1
    iget-object v0, p0, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;->d:Landroid/view/View;

    if-eqz v0, :cond_3

    .line 117
    invoke-virtual {v0}, Landroid/view/View;->getParent()Landroid/view/ViewParent;

    move-result-object v0

    if-nez v0, :cond_2

    .line 118
    new-instance v0, Landroid/widget/RelativeLayout$LayoutParams;

    invoke-virtual {p0}, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;->getContext()Landroid/content/Context;

    move-result-object v1

    const/high16 v2, 0x41e00000    # 28.0f

    invoke-static {v1, v2}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v1

    invoke-virtual {p0}, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;->getContext()Landroid/content/Context;

    move-result-object v2

    const/high16 v3, 0x41800000    # 16.0f

    invoke-static {v2, v3}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v2

    invoke-direct {v0, v1, v2}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    const/16 v1, 0xa

    .line 119
    invoke-virtual {v0, v1}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    const/16 v1, 0xb

    .line 120
    invoke-virtual {v0, v1}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    .line 121
    invoke-virtual {p0}, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;->getContext()Landroid/content/Context;

    move-result-object v1

    const/high16 v2, 0x40000000    # 2.0f

    invoke-static {v1, v2}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v1

    iput v1, v0, Landroid/widget/RelativeLayout$LayoutParams;->rightMargin:I

    .line 122
    invoke-virtual {p0}, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1, v2}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v1

    iput v1, v0, Landroid/widget/RelativeLayout$LayoutParams;->topMargin:I

    .line 123
    iget-object v1, p0, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;->d:Landroid/view/View;

    invoke-virtual {p0, v1, v0}, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    return-void

    .line 125
    :cond_2
    iget-object v0, p0, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;->d:Landroid/view/View;

    invoke-virtual {p0, v0}, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;->bringChildToFront(Landroid/view/View;)V

    :cond_3
    return-void
.end method

.method private c()V
    .locals 5

    const/4 v0, 0x2

    new-array v0, v0, [I

    .line 187
    iget-object v1, p0, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;->c:Lcom/tkay/expressad/advanced/view/TYNativeAdvancedWebview;

    invoke-virtual {v1, v0}, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedWebview;->getLocationInWindow([I)V

    .line 188
    iget-object v1, p0, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;->c:Lcom/tkay/expressad/advanced/view/TYNativeAdvancedWebview;

    const/4 v2, 0x0

    aget v2, v0, v2

    const/4 v3, 0x1

    aget v0, v0, v3

    .line 189
    invoke-virtual {v1}, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedWebview;->getWidth()I

    move-result v3

    iget-object v4, p0, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;->c:Lcom/tkay/expressad/advanced/view/TYNativeAdvancedWebview;

    invoke-virtual {v4}, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedWebview;->getHeight()I

    move-result v4

    .line 188
    invoke-static {v1, v2, v0, v3, v4}, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;->transInfoForMraid(Landroid/webkit/WebView;IIII)V

    .line 190
    iget-object v0, p0, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;->c:Lcom/tkay/expressad/advanced/view/TYNativeAdvancedWebview;

    if-eqz v0, :cond_0

    .line 191
    iget-object v1, p0, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;->i:Lcom/tkay/expressad/advanced/js/NativeAdvancedJSBridgeImpl;

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedWebview;->setObject(Ljava/lang/Object;)V

    .line 192
    iget-object v0, p0, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;->c:Lcom/tkay/expressad/advanced/view/TYNativeAdvancedWebview;

    new-instance v1, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView$1;

    invoke-direct {v1, p0}, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView$1;-><init>(Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;)V

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedWebview;->post(Ljava/lang/Runnable;)Z

    :cond_0
    return-void
.end method

.method public static transInfoForMraid(Landroid/webkit/WebView;IIII)V
    .locals 16

    move-object/from16 v6, p0

    const-string v0, "true"

    .line 231
    :try_start_0
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v1

    invoke-virtual {v1}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v1

    .line 232
    invoke-virtual {v1}, Landroid/content/res/Resources;->getConfiguration()Landroid/content/res/Configuration;

    move-result-object v1

    iget v1, v1, Landroid/content/res/Configuration;->orientation:I

    .line 233
    new-instance v2, Lorg/json/JSONObject;

    invoke-direct {v2}, Lorg/json/JSONObject;-><init>()V

    const-string v3, "orientation"

    const/4 v4, 0x2

    if-ne v1, v4, :cond_0

    const-string v1, "landscape"

    goto :goto_0

    :cond_0
    const/4 v4, 0x1

    if-ne v1, v4, :cond_1

    const-string v1, "portrait"

    goto :goto_0

    :cond_1
    const-string v1, "undefined"

    .line 235
    :goto_0
    invoke-virtual {v2, v3, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "locked"

    .line 237
    invoke-virtual {v2, v1, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 239
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Lcom/tkay/expressad/foundation/h/k;->e(Landroid/content/Context;)I

    move-result v1

    int-to-float v7, v1

    .line 240
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Lcom/tkay/expressad/foundation/h/k;->f(Landroid/content/Context;)I

    move-result v1

    int-to-float v8, v1

    .line 242
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Lcom/tkay/expressad/foundation/h/k;->g(Landroid/content/Context;)Ljava/util/HashMap;

    move-result-object v1

    const-string v3, "width"

    .line 243
    invoke-virtual {v1, v3}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/Integer;

    invoke-virtual {v3}, Ljava/lang/Integer;->intValue()I

    move-result v9

    const-string v3, "height"

    .line 244
    invoke-virtual {v1, v3}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/Integer;

    invoke-virtual {v1}, Ljava/lang/Integer;->intValue()I

    move-result v10

    .line 246
    new-instance v11, Ljava/util/HashMap;

    invoke-direct {v11}, Ljava/util/HashMap;-><init>()V

    const-string v1, "placementType"

    const-string v3, "inline"

    .line 247
    invoke-virtual {v11, v1, v3}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v1, "state"

    const-string v3, "default"

    .line 248
    invoke-virtual {v11, v1, v3}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v1, "viewable"

    .line 249
    invoke-virtual {v11, v1, v0}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v0, "currentAppOrientation"

    .line 250
    invoke-virtual {v11, v0, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 252
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;->getInstance()Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;

    move-result-object v0

    move/from16 v1, p1

    int-to-float v12, v1

    move/from16 v1, p2

    int-to-float v13, v1

    move/from16 v1, p3

    int-to-float v14, v1

    move/from16 v1, p4

    int-to-float v15, v1

    move-object/from16 v1, p0

    move v2, v12

    move v3, v13

    move v4, v14

    move v5, v15

    invoke-virtual/range {v0 .. v5}, Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;->fireSetDefaultPosition(Landroid/webkit/WebView;FFFF)V

    .line 253
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;->getInstance()Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;

    move-result-object v0

    move-object/from16 v1, p0

    move v2, v12

    move v3, v13

    move v4, v14

    move v5, v15

    invoke-virtual/range {v0 .. v5}, Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;->fireSetCurrentPosition(Landroid/webkit/WebView;FFFF)V

    .line 254
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;->getInstance()Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;

    move-result-object v0

    invoke-virtual {v0, v6, v7, v8}, Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;->fireSetScreenSize(Landroid/webkit/WebView;FF)V

    .line 255
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;->getInstance()Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;

    move-result-object v0

    int-to-float v1, v9

    int-to-float v2, v10

    invoke-virtual {v0, v6, v1, v2}, Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;->fireSetMaxSize(Landroid/webkit/WebView;FF)V

    .line 256
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;->getInstance()Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;

    move-result-object v0

    invoke-virtual {v0, v6, v11}, Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;->fireChangeEventForPropertys(Landroid/webkit/WebView;Ljava/util/Map;)V

    .line 257
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;->getInstance()Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;

    move-result-object v0

    invoke-virtual {v0, v6}, Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;->fireReadyEvent(Landroid/webkit/WebView;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    return-void
.end method


# virtual methods
.method public changeCloseBtnState(I)V
    .locals 2

    .line 145
    iget-object v0, p0, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;->d:Landroid/view/View;

    if-eqz v0, :cond_1

    const/4 v1, 0x2

    if-ne p1, v1, :cond_0

    const/16 p1, 0x8

    .line 147
    invoke-virtual {v0, p1}, Landroid/view/View;->setVisibility(I)V

    return-void

    :cond_0
    const/4 p1, 0x0

    .line 149
    invoke-virtual {v0, p1}, Landroid/view/View;->setVisibility(I)V

    :cond_1
    return-void
.end method

.method public clearResState()V
    .locals 1

    const/4 v0, 0x0

    .line 173
    iput-boolean v0, p0, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;->g:Z

    iput-boolean v0, p0, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;->f:Z

    iput-boolean v0, p0, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;->e:Z

    return-void
.end method

.method public clearResStateAndRemoveClose()V
    .locals 1

    .line 178
    invoke-virtual {p0}, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;->clearResState()V

    .line 179
    iget-object v0, p0, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;->d:Landroid/view/View;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Landroid/view/View;->getParent()Landroid/view/ViewParent;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 180
    iget-object v0, p0, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;->d:Landroid/view/View;

    invoke-virtual {p0, v0}, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;->removeView(Landroid/view/View;)V

    :cond_0
    return-void
.end method

.method public destroy()V
    .locals 3

    .line 264
    invoke-virtual {p0}, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;->removeAllViews()V

    .line 265
    iget-object v0, p0, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;->c:Lcom/tkay/expressad/advanced/view/TYNativeAdvancedWebview;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedWebview;->isDestroyed()Z

    move-result v0

    if-nez v0, :cond_0

    .line 266
    iget-object v0, p0, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;->c:Lcom/tkay/expressad/advanced/view/TYNativeAdvancedWebview;

    invoke-virtual {v0}, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedWebview;->release()V

    .line 267
    iget-object v0, p0, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;->c:Lcom/tkay/expressad/advanced/view/TYNativeAdvancedWebview;

    const-string v1, "onSystemDestory"

    const-string v2, ""

    invoke-static {v0, v1, v2}, Lcom/tkay/expressad/advanced/js/NativeAdvancedJsUtils;->sendEventToH5(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;)V

    .line 270
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;->j:Landroid/content/Context;

    if-eqz v0, :cond_1

    const/4 v0, 0x0

    .line 271
    iput-object v0, p0, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;->j:Landroid/content/Context;

    :cond_1
    return-void
.end method

.method public getAdvancedNativeJSBridgeImpl()Lcom/tkay/expressad/advanced/js/NativeAdvancedJSBridgeImpl;
    .locals 1

    .line 79
    iget-object v0, p0, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;->i:Lcom/tkay/expressad/advanced/js/NativeAdvancedJSBridgeImpl;

    return-object v0
.end method

.method public getAdvancedNativeWebview()Lcom/tkay/expressad/advanced/view/TYNativeAdvancedWebview;
    .locals 1

    .line 131
    iget-object v0, p0, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;->c:Lcom/tkay/expressad/advanced/view/TYNativeAdvancedWebview;

    return-object v0
.end method

.method public getCloseView()Landroid/view/View;
    .locals 1

    .line 155
    iget-object v0, p0, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;->d:Landroid/view/View;

    return-object v0
.end method

.method public isEndCardReady()Z
    .locals 1

    .line 56
    iget-boolean v0, p0, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;->g:Z

    return v0
.end method

.method public isH5Ready()Z
    .locals 1

    .line 65
    iget-boolean v0, p0, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;->e:Z

    return v0
.end method

.method public isVideoReady()Z
    .locals 1

    .line 69
    iget-boolean v0, p0, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;->f:Z

    return v0
.end method

.method protected onConfigurationChanged(Landroid/content/res/Configuration;)V
    .locals 0

    .line 104
    invoke-super {p0, p1}, Landroid/widget/RelativeLayout;->onConfigurationChanged(Landroid/content/res/Configuration;)V

    return-void
.end method

.method public resetLoadState()V
    .locals 1

    const/4 v0, 0x0

    .line 75
    iput-boolean v0, p0, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;->g:Z

    iput-boolean v0, p0, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;->f:Z

    iput-boolean v0, p0, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;->e:Z

    return-void
.end method

.method public setAdvancedNativeJSBridgeImpl(Lcom/tkay/expressad/advanced/js/NativeAdvancedJSBridgeImpl;)V
    .locals 1

    .line 83
    iput-object p1, p0, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;->i:Lcom/tkay/expressad/advanced/js/NativeAdvancedJSBridgeImpl;

    .line 84
    iget-object v0, p0, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;->c:Lcom/tkay/expressad/advanced/view/TYNativeAdvancedWebview;

    if-eqz v0, :cond_0

    .line 85
    invoke-virtual {v0, p1}, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedWebview;->setObject(Ljava/lang/Object;)V

    :cond_0
    return-void
.end method

.method public setAdvancedNativeWebview(Lcom/tkay/expressad/advanced/view/TYNativeAdvancedWebview;)V
    .locals 1

    .line 135
    iput-object p1, p0, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;->c:Lcom/tkay/expressad/advanced/view/TYNativeAdvancedWebview;

    .line 136
    iget-object v0, p0, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;->i:Lcom/tkay/expressad/advanced/js/NativeAdvancedJSBridgeImpl;

    if-eqz v0, :cond_0

    .line 137
    invoke-virtual {p1, v0}, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedWebview;->setObject(Ljava/lang/Object;)V

    :cond_0
    return-void
.end method

.method public setCloseView(Landroid/view/View;)V
    .locals 1

    .line 159
    iput-object p1, p0, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;->d:Landroid/view/View;

    if-eqz p1, :cond_0

    const-string v0, "closeButton"

    .line 161
    invoke-virtual {p1, v0}, Landroid/view/View;->setContentDescription(Ljava/lang/CharSequence;)V

    :cond_0
    return-void
.end method

.method public setEndCardReady(Z)V
    .locals 0

    .line 60
    iput-boolean p1, p0, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;->g:Z

    return-void
.end method

.method public setH5Ready(Z)V
    .locals 0

    .line 47
    iput-boolean p1, p0, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;->e:Z

    return-void
.end method

.method public setVideoReady(Z)V
    .locals 0

    .line 51
    iput-boolean p1, p0, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;->f:Z

    return-void
.end method

.method public show()V
    .locals 5

    .line 2111
    iget-object v0, p0, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;->c:Lcom/tkay/expressad/advanced/view/TYNativeAdvancedWebview;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedWebview;->getParent()Landroid/view/ViewParent;

    move-result-object v0

    if-nez v0, :cond_0

    .line 2112
    iget-object v0, p0, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;->c:Lcom/tkay/expressad/advanced/view/TYNativeAdvancedWebview;

    new-instance v1, Landroid/view/ViewGroup$LayoutParams;

    const/4 v2, -0x1

    invoke-direct {v1, v2, v2}, Landroid/view/ViewGroup$LayoutParams;-><init>(II)V

    invoke-virtual {p0, v0, v1}, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    :cond_0
    const/4 v0, 0x2

    new-array v0, v0, [I

    .line 2187
    iget-object v1, p0, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;->c:Lcom/tkay/expressad/advanced/view/TYNativeAdvancedWebview;

    invoke-virtual {v1, v0}, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedWebview;->getLocationInWindow([I)V

    .line 2188
    iget-object v1, p0, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;->c:Lcom/tkay/expressad/advanced/view/TYNativeAdvancedWebview;

    const/4 v2, 0x0

    aget v2, v0, v2

    const/4 v3, 0x1

    aget v0, v0, v3

    .line 2189
    invoke-virtual {v1}, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedWebview;->getWidth()I

    move-result v3

    iget-object v4, p0, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;->c:Lcom/tkay/expressad/advanced/view/TYNativeAdvancedWebview;

    invoke-virtual {v4}, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedWebview;->getHeight()I

    move-result v4

    .line 2188
    invoke-static {v1, v2, v0, v3, v4}, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;->transInfoForMraid(Landroid/webkit/WebView;IIII)V

    .line 2190
    iget-object v0, p0, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;->c:Lcom/tkay/expressad/advanced/view/TYNativeAdvancedWebview;

    if-eqz v0, :cond_1

    .line 2191
    iget-object v1, p0, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;->i:Lcom/tkay/expressad/advanced/js/NativeAdvancedJSBridgeImpl;

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedWebview;->setObject(Ljava/lang/Object;)V

    .line 2192
    iget-object v0, p0, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;->c:Lcom/tkay/expressad/advanced/view/TYNativeAdvancedWebview;

    new-instance v1, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView$1;

    invoke-direct {v1, p0}, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView$1;-><init>(Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;)V

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedWebview;->post(Ljava/lang/Runnable;)Z

    .line 2116
    :cond_1
    iget-object v0, p0, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;->d:Landroid/view/View;

    if-eqz v0, :cond_3

    .line 2117
    invoke-virtual {v0}, Landroid/view/View;->getParent()Landroid/view/ViewParent;

    move-result-object v0

    if-nez v0, :cond_2

    .line 2118
    new-instance v0, Landroid/widget/RelativeLayout$LayoutParams;

    invoke-virtual {p0}, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;->getContext()Landroid/content/Context;

    move-result-object v1

    const/high16 v2, 0x41e00000    # 28.0f

    invoke-static {v1, v2}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v1

    invoke-virtual {p0}, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;->getContext()Landroid/content/Context;

    move-result-object v2

    const/high16 v3, 0x41800000    # 16.0f

    invoke-static {v2, v3}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v2

    invoke-direct {v0, v1, v2}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    const/16 v1, 0xa

    .line 2119
    invoke-virtual {v0, v1}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    const/16 v1, 0xb

    .line 2120
    invoke-virtual {v0, v1}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    .line 2121
    invoke-virtual {p0}, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;->getContext()Landroid/content/Context;

    move-result-object v1

    const/high16 v2, 0x40000000    # 2.0f

    invoke-static {v1, v2}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v1

    iput v1, v0, Landroid/widget/RelativeLayout$LayoutParams;->rightMargin:I

    .line 2122
    invoke-virtual {p0}, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1, v2}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v1

    iput v1, v0, Landroid/widget/RelativeLayout$LayoutParams;->topMargin:I

    .line 2123
    iget-object v1, p0, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;->d:Landroid/view/View;

    invoke-virtual {p0, v1, v0}, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    goto :goto_0

    .line 2125
    :cond_2
    iget-object v0, p0, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;->d:Landroid/view/View;

    invoke-virtual {p0, v0}, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;->bringChildToFront(Landroid/view/View;)V

    .line 168
    :cond_3
    :goto_0
    invoke-virtual {p0}, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;->clearResState()V

    return-void
.end method
