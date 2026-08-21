.class public Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;
.super Landroid/widget/RelativeLayout;
.source "MBNativeAdvancedView.java"


# static fields
.field private static a:Ljava/lang/String; = "MBAdvancedNativeView"


# instance fields
.field private b:Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedWebview;

.field private c:Landroid/view/View;

.field private d:Z

.field private e:Z

.field private f:Z

.field private g:Lcom/mbridge/msdk/advanced/js/a;

.field private h:Landroid/content/Context;


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;)V
    .locals 1

    const/4 v0, 0x0

    .line 89
    invoke-direct {p0, p1, v0}, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 1

    const/4 v0, 0x0

    .line 93
    invoke-direct {p0, p1, p2, v0}, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V
    .locals 0

    .line 97
    invoke-direct {p0, p1, p2, p3}, Landroid/widget/RelativeLayout;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V

    .line 98
    iput-object p1, p0, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;->h:Landroid/content/Context;

    return-void
.end method

.method static synthetic a(Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;)Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedWebview;
    .locals 0

    .line 26
    iget-object p0, p0, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;->b:Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedWebview;

    return-object p0
.end method

.method static synthetic a()Ljava/lang/String;
    .locals 1

    .line 26
    sget-object v0, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;->a:Ljava/lang/String;

    return-object v0
.end method

.method public static transInfoForMraid(Landroid/webkit/WebView;IIII)V
    .locals 17

    move-object/from16 v0, p0

    const-string v1, "true"

    .line 228
    sget-object v2, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;->a:Ljava/lang/String;

    const-string v7, "transInfoForMraid"

    invoke-static {v2, v7}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 230
    :try_start_0
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v2

    invoke-virtual {v2}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v2

    .line 231
    invoke-virtual {v2}, Landroid/content/res/Resources;->getConfiguration()Landroid/content/res/Configuration;

    move-result-object v2

    iget v2, v2, Landroid/content/res/Configuration;->orientation:I

    .line 232
    new-instance v3, Lorg/json/JSONObject;

    invoke-direct {v3}, Lorg/json/JSONObject;-><init>()V

    const-string v4, "orientation"

    const/4 v5, 0x2

    if-ne v2, v5, :cond_0

    const-string v2, "landscape"

    goto :goto_0

    :cond_0
    const/4 v5, 0x1

    if-ne v2, v5, :cond_1

    const-string v2, "portrait"

    goto :goto_0

    :cond_1
    const-string v2, "undefined"

    .line 234
    :goto_0
    invoke-virtual {v3, v4, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v2, "locked"

    .line 236
    invoke-virtual {v3, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 238
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v2

    invoke-static {v2}, Lcom/mbridge/msdk/foundation/tools/v;->x(Landroid/content/Context;)I

    move-result v2

    int-to-float v8, v2

    .line 239
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v2

    invoke-static {v2}, Lcom/mbridge/msdk/foundation/tools/v;->y(Landroid/content/Context;)I

    move-result v2

    int-to-float v9, v2

    .line 241
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v2

    invoke-static {v2}, Lcom/mbridge/msdk/foundation/tools/v;->z(Landroid/content/Context;)Ljava/util/HashMap;

    move-result-object v2

    const-string v4, "width"

    .line 242
    invoke-virtual {v2, v4}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/lang/Integer;

    invoke-virtual {v4}, Ljava/lang/Integer;->intValue()I

    move-result v10

    const-string v4, "height"

    .line 243
    invoke-virtual {v2, v4}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/Integer;

    invoke-virtual {v2}, Ljava/lang/Integer;->intValue()I

    move-result v11

    .line 245
    new-instance v12, Ljava/util/HashMap;

    invoke-direct {v12}, Ljava/util/HashMap;-><init>()V

    const-string v2, "placementType"

    const-string v4, "inline"

    .line 246
    invoke-virtual {v12, v2, v4}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v2, "state"

    const-string v4, "default"

    .line 247
    invoke-virtual {v12, v2, v4}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v2, "viewable"

    .line 248
    invoke-virtual {v12, v2, v1}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v1, "currentAppOrientation"

    .line 249
    invoke-virtual {v12, v1, v3}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 251
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/mraid/a;->a()Lcom/mbridge/msdk/mbjscommon/mraid/a;

    move-result-object v1

    move/from16 v2, p1

    int-to-float v13, v2

    move/from16 v2, p2

    int-to-float v14, v2

    move/from16 v2, p3

    int-to-float v15, v2

    move/from16 v2, p4

    int-to-float v6, v2

    move-object/from16 v2, p0

    move v3, v13

    move v4, v14

    move v5, v15

    move/from16 v16, v6

    invoke-virtual/range {v1 .. v6}, Lcom/mbridge/msdk/mbjscommon/mraid/a;->a(Landroid/webkit/WebView;FFFF)V

    .line 252
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/mraid/a;->a()Lcom/mbridge/msdk/mbjscommon/mraid/a;

    move-result-object v1

    move-object/from16 v2, p0

    move v3, v13

    move v4, v14

    move v5, v15

    move/from16 v6, v16

    invoke-virtual/range {v1 .. v6}, Lcom/mbridge/msdk/mbjscommon/mraid/a;->b(Landroid/webkit/WebView;FFFF)V

    .line 253
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/mraid/a;->a()Lcom/mbridge/msdk/mbjscommon/mraid/a;

    move-result-object v1

    invoke-virtual {v1, v0, v8, v9}, Lcom/mbridge/msdk/mbjscommon/mraid/a;->b(Landroid/webkit/WebView;FF)V

    .line 254
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/mraid/a;->a()Lcom/mbridge/msdk/mbjscommon/mraid/a;

    move-result-object v1

    int-to-float v2, v10

    int-to-float v3, v11

    invoke-virtual {v1, v0, v2, v3}, Lcom/mbridge/msdk/mbjscommon/mraid/a;->c(Landroid/webkit/WebView;FF)V

    .line 255
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/mraid/a;->a()Lcom/mbridge/msdk/mbjscommon/mraid/a;

    move-result-object v1

    invoke-virtual {v1, v0, v12}, Lcom/mbridge/msdk/mbjscommon/mraid/a;->a(Landroid/webkit/WebView;Ljava/util/Map;)V

    .line 256
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/mraid/a;->a()Lcom/mbridge/msdk/mbjscommon/mraid/a;

    move-result-object v1

    invoke-virtual {v1, v0}, Lcom/mbridge/msdk/mbjscommon/mraid/a;->a(Landroid/webkit/WebView;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_1

    :catchall_0
    move-exception v0

    .line 258
    sget-object v1, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;->a:Ljava/lang/String;

    invoke-static {v1, v7, v0}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :goto_1
    return-void
.end method


# virtual methods
.method public changeCloseBtnState(I)V
    .locals 2

    .line 144
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;->c:Landroid/view/View;

    if-eqz v0, :cond_1

    const/4 v1, 0x2

    if-ne p1, v1, :cond_0

    const/16 p1, 0x8

    .line 146
    invoke-virtual {v0, p1}, Landroid/view/View;->setVisibility(I)V

    goto :goto_0

    :cond_0
    const/4 p1, 0x0

    .line 148
    invoke-virtual {v0, p1}, Landroid/view/View;->setVisibility(I)V

    :cond_1
    :goto_0
    return-void
.end method

.method public clearResState()V
    .locals 1

    const/4 v0, 0x0

    .line 172
    iput-boolean v0, p0, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;->f:Z

    iput-boolean v0, p0, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;->e:Z

    iput-boolean v0, p0, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;->d:Z

    return-void
.end method

.method public clearResStateAndRemoveClose()V
    .locals 1

    .line 177
    invoke-virtual {p0}, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;->clearResState()V

    .line 178
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;->c:Landroid/view/View;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Landroid/view/View;->getParent()Landroid/view/ViewParent;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 179
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;->c:Landroid/view/View;

    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;->removeView(Landroid/view/View;)V

    :cond_0
    return-void
.end method

.method public destroy()V
    .locals 3

    .line 263
    invoke-virtual {p0}, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;->removeAllViews()V

    .line 264
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;->b:Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedWebview;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedWebview;->isDestoryed()Z

    move-result v0

    if-nez v0, :cond_0

    .line 265
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;->b:Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedWebview;

    invoke-virtual {v0}, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedWebview;->release()V

    .line 266
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;->b:Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedWebview;

    const-string v1, "onSystemDestory"

    const-string v2, ""

    invoke-static {v0, v1, v2}, Lcom/mbridge/msdk/advanced/js/b;->a(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;)V

    .line 269
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;->h:Landroid/content/Context;

    if-eqz v0, :cond_1

    const/4 v0, 0x0

    .line 270
    iput-object v0, p0, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;->h:Landroid/content/Context;

    :cond_1
    return-void
.end method

.method public getAdvancedNativeJSBridgeImpl()Lcom/mbridge/msdk/advanced/js/a;
    .locals 1

    .line 78
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;->g:Lcom/mbridge/msdk/advanced/js/a;

    return-object v0
.end method

.method public getAdvancedNativeWebview()Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedWebview;
    .locals 1

    .line 130
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;->b:Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedWebview;

    return-object v0
.end method

.method public getCloseView()Landroid/view/View;
    .locals 1

    .line 154
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;->c:Landroid/view/View;

    return-object v0
.end method

.method public isEndCardReady()Z
    .locals 1

    .line 55
    iget-boolean v0, p0, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;->f:Z

    return v0
.end method

.method public isH5Ready()Z
    .locals 1

    .line 64
    iget-boolean v0, p0, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;->d:Z

    return v0
.end method

.method public isVideoReady()Z
    .locals 1

    .line 68
    iget-boolean v0, p0, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;->e:Z

    return v0
.end method

.method protected onConfigurationChanged(Landroid/content/res/Configuration;)V
    .locals 0

    .line 103
    invoke-super {p0, p1}, Landroid/widget/RelativeLayout;->onConfigurationChanged(Landroid/content/res/Configuration;)V

    return-void
.end method

.method public resetLoadState()V
    .locals 1

    const/4 v0, 0x0

    .line 74
    iput-boolean v0, p0, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;->f:Z

    iput-boolean v0, p0, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;->e:Z

    iput-boolean v0, p0, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;->d:Z

    return-void
.end method

.method public setAdvancedNativeJSBridgeImpl(Lcom/mbridge/msdk/advanced/js/a;)V
    .locals 1

    .line 82
    iput-object p1, p0, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;->g:Lcom/mbridge/msdk/advanced/js/a;

    .line 83
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;->b:Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedWebview;

    if-eqz v0, :cond_0

    .line 84
    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedWebview;->setObject(Ljava/lang/Object;)V

    :cond_0
    return-void
.end method

.method public setAdvancedNativeWebview(Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedWebview;)V
    .locals 1

    .line 134
    iput-object p1, p0, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;->b:Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedWebview;

    .line 135
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;->g:Lcom/mbridge/msdk/advanced/js/a;

    if-eqz v0, :cond_0

    .line 136
    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedWebview;->setObject(Ljava/lang/Object;)V

    :cond_0
    return-void
.end method

.method public setCloseView(Landroid/view/View;)V
    .locals 1

    .line 158
    iput-object p1, p0, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;->c:Landroid/view/View;

    if-eqz p1, :cond_0

    const-string v0, "closeButton"

    .line 160
    invoke-virtual {p1, v0}, Landroid/view/View;->setContentDescription(Ljava/lang/CharSequence;)V

    :cond_0
    return-void
.end method

.method public setEndCardReady(Z)V
    .locals 0

    .line 59
    iput-boolean p1, p0, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;->f:Z

    return-void
.end method

.method public setH5Ready(Z)V
    .locals 0

    .line 46
    iput-boolean p1, p0, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;->d:Z

    return-void
.end method

.method public setVideoReady(Z)V
    .locals 0

    .line 50
    iput-boolean p1, p0, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;->e:Z

    return-void
.end method

.method public show()V
    .locals 5

    .line 1110
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;->b:Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedWebview;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedWebview;->getParent()Landroid/view/ViewParent;

    move-result-object v0

    if-nez v0, :cond_0

    .line 1111
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;->b:Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedWebview;

    new-instance v1, Landroid/view/ViewGroup$LayoutParams;

    const/4 v2, -0x1

    invoke-direct {v1, v2, v2}, Landroid/view/ViewGroup$LayoutParams;-><init>(II)V

    invoke-virtual {p0, v0, v1}, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    :cond_0
    const/4 v0, 0x2

    new-array v0, v0, [I

    .line 1186
    iget-object v1, p0, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;->b:Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedWebview;

    invoke-virtual {v1, v0}, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedWebview;->getLocationInWindow([I)V

    .line 1187
    iget-object v1, p0, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;->b:Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedWebview;

    const/4 v2, 0x0

    aget v2, v0, v2

    const/4 v3, 0x1

    aget v0, v0, v3

    .line 1188
    invoke-virtual {v1}, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedWebview;->getWidth()I

    move-result v3

    iget-object v4, p0, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;->b:Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedWebview;

    invoke-virtual {v4}, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedWebview;->getHeight()I

    move-result v4

    .line 1187
    invoke-static {v1, v2, v0, v3, v4}, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;->transInfoForMraid(Landroid/webkit/WebView;IIII)V

    .line 1189
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;->b:Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedWebview;

    if-eqz v0, :cond_1

    .line 1190
    iget-object v1, p0, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;->g:Lcom/mbridge/msdk/advanced/js/a;

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedWebview;->setObject(Ljava/lang/Object;)V

    .line 1191
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;->b:Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedWebview;

    new-instance v1, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView$1;

    invoke-direct {v1, p0}, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView$1;-><init>(Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;)V

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedWebview;->post(Ljava/lang/Runnable;)Z

    .line 1115
    :cond_1
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;->c:Landroid/view/View;

    if-eqz v0, :cond_3

    .line 1116
    invoke-virtual {v0}, Landroid/view/View;->getParent()Landroid/view/ViewParent;

    move-result-object v0

    if-nez v0, :cond_2

    .line 1117
    new-instance v0, Landroid/widget/RelativeLayout$LayoutParams;

    invoke-virtual {p0}, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;->getContext()Landroid/content/Context;

    move-result-object v1

    const/high16 v2, 0x41e00000    # 28.0f

    invoke-static {v1, v2}, Lcom/mbridge/msdk/foundation/tools/ae;->b(Landroid/content/Context;F)I

    move-result v1

    invoke-virtual {p0}, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;->getContext()Landroid/content/Context;

    move-result-object v2

    const/high16 v3, 0x41800000    # 16.0f

    invoke-static {v2, v3}, Lcom/mbridge/msdk/foundation/tools/ae;->b(Landroid/content/Context;F)I

    move-result v2

    invoke-direct {v0, v1, v2}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    const/16 v1, 0xa

    .line 1118
    invoke-virtual {v0, v1}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    const/16 v1, 0xb

    .line 1119
    invoke-virtual {v0, v1}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    .line 1120
    invoke-virtual {p0}, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;->getContext()Landroid/content/Context;

    move-result-object v1

    const/high16 v2, 0x40000000    # 2.0f

    invoke-static {v1, v2}, Lcom/mbridge/msdk/foundation/tools/ae;->b(Landroid/content/Context;F)I

    move-result v1

    iput v1, v0, Landroid/widget/RelativeLayout$LayoutParams;->rightMargin:I

    .line 1121
    invoke-virtual {p0}, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1, v2}, Lcom/mbridge/msdk/foundation/tools/ae;->b(Landroid/content/Context;F)I

    move-result v1

    iput v1, v0, Landroid/widget/RelativeLayout$LayoutParams;->topMargin:I

    .line 1122
    iget-object v1, p0, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;->c:Landroid/view/View;

    invoke-virtual {p0, v1, v0}, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    goto :goto_0

    .line 1124
    :cond_2
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;->c:Landroid/view/View;

    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;->bringChildToFront(Landroid/view/View;)V

    .line 167
    :cond_3
    :goto_0
    invoke-virtual {p0}, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;->clearResState()V

    return-void
.end method
