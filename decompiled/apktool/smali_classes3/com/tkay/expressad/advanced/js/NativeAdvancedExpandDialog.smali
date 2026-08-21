.class public Lcom/tkay/expressad/advanced/js/NativeAdvancedExpandDialog;
.super Landroid/app/Dialog;


# instance fields
.field private final a:Ljava/lang/String;

.field private b:Ljava/lang/String;

.field private c:Z

.field private d:Landroid/widget/FrameLayout;

.field private e:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

.field private f:Landroid/widget/TextView;

.field private g:Ljava/lang/String;

.field private h:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/tkay/expressad/foundation/d/c;",
            ">;"
        }
    .end annotation
.end field

.field private i:Lcom/tkay/expressad/advanced/d/a;

.field private j:Lcom/tkay/expressad/atsignalcommon/mraid/IMraidJSBridge;


# direct methods
.method public constructor <init>(Landroid/content/Context;Landroid/os/Bundle;Lcom/tkay/expressad/advanced/d/a;)V
    .locals 0

    .line 63
    invoke-direct {p0, p1}, Landroid/app/Dialog;-><init>(Landroid/content/Context;)V

    const-string p1, "NativeAdvancedExpandDialog"

    .line 48
    iput-object p1, p0, Lcom/tkay/expressad/advanced/js/NativeAdvancedExpandDialog;->a:Ljava/lang/String;

    .line 224
    new-instance p1, Lcom/tkay/expressad/advanced/js/NativeAdvancedExpandDialog$4;

    invoke-direct {p1, p0}, Lcom/tkay/expressad/advanced/js/NativeAdvancedExpandDialog$4;-><init>(Lcom/tkay/expressad/advanced/js/NativeAdvancedExpandDialog;)V

    iput-object p1, p0, Lcom/tkay/expressad/advanced/js/NativeAdvancedExpandDialog;->j:Lcom/tkay/expressad/atsignalcommon/mraid/IMraidJSBridge;

    if-eqz p2, :cond_0

    const-string p1, "url"

    .line 66
    invoke-virtual {p2, p1}, Landroid/os/Bundle;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/expressad/advanced/js/NativeAdvancedExpandDialog;->b:Ljava/lang/String;

    const-string p1, "shouldUseCustomClose"

    .line 67
    invoke-virtual {p2, p1}, Landroid/os/Bundle;->getBoolean(Ljava/lang/String;)Z

    move-result p1

    iput-boolean p1, p0, Lcom/tkay/expressad/advanced/js/NativeAdvancedExpandDialog;->c:Z

    .line 70
    :cond_0
    iput-object p3, p0, Lcom/tkay/expressad/advanced/js/NativeAdvancedExpandDialog;->i:Lcom/tkay/expressad/advanced/d/a;

    return-void
.end method

.method static synthetic a(Lcom/tkay/expressad/advanced/js/NativeAdvancedExpandDialog;Lcom/tkay/expressad/advanced/d/a;)Lcom/tkay/expressad/advanced/d/a;
    .locals 0

    .line 47
    iput-object p1, p0, Lcom/tkay/expressad/advanced/js/NativeAdvancedExpandDialog;->i:Lcom/tkay/expressad/advanced/d/a;

    return-object p1
.end method

.method static synthetic a(Lcom/tkay/expressad/advanced/js/NativeAdvancedExpandDialog;Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;)Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;
    .locals 0

    .line 47
    iput-object p1, p0, Lcom/tkay/expressad/advanced/js/NativeAdvancedExpandDialog;->e:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    return-object p1
.end method

.method private a()V
    .locals 4

    .line 85
    new-instance v0, Landroid/widget/FrameLayout;

    invoke-virtual {p0}, Lcom/tkay/expressad/advanced/js/NativeAdvancedExpandDialog;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-direct {v0, v1}, Landroid/widget/FrameLayout;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/tkay/expressad/advanced/js/NativeAdvancedExpandDialog;->d:Landroid/widget/FrameLayout;

    .line 86
    new-instance v1, Landroid/widget/FrameLayout$LayoutParams;

    const/4 v2, -0x1

    invoke-direct {v1, v2, v2}, Landroid/widget/FrameLayout$LayoutParams;-><init>(II)V

    invoke-virtual {v0, v1}, Landroid/widget/FrameLayout;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 89
    new-instance v0, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    invoke-virtual {p0}, Lcom/tkay/expressad/advanced/js/NativeAdvancedExpandDialog;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-virtual {v1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v1

    invoke-direct {v0, v1}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/tkay/expressad/advanced/js/NativeAdvancedExpandDialog;->e:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    .line 90
    new-instance v1, Landroid/widget/FrameLayout$LayoutParams;

    invoke-direct {v1, v2, v2}, Landroid/widget/FrameLayout$LayoutParams;-><init>(II)V

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 92
    iget-object v0, p0, Lcom/tkay/expressad/advanced/js/NativeAdvancedExpandDialog;->d:Landroid/widget/FrameLayout;

    iget-object v1, p0, Lcom/tkay/expressad/advanced/js/NativeAdvancedExpandDialog;->e:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    invoke-virtual {v0, v1}, Landroid/widget/FrameLayout;->addView(Landroid/view/View;)V

    .line 94
    new-instance v0, Landroid/widget/TextView;

    invoke-virtual {p0}, Lcom/tkay/expressad/advanced/js/NativeAdvancedExpandDialog;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-direct {v0, v1}, Landroid/widget/TextView;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/tkay/expressad/advanced/js/NativeAdvancedExpandDialog;->f:Landroid/widget/TextView;

    const/4 v1, 0x0

    .line 95
    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setBackgroundColor(I)V

    .line 96
    new-instance v0, Landroid/widget/FrameLayout$LayoutParams;

    const/16 v3, 0x60

    invoke-direct {v0, v3, v3}, Landroid/widget/FrameLayout$LayoutParams;-><init>(II)V

    const v3, 0x800035

    .line 97
    iput v3, v0, Landroid/widget/FrameLayout$LayoutParams;->gravity:I

    const/16 v3, 0x1e

    .line 98
    invoke-virtual {v0, v3, v3, v3, v3}, Landroid/widget/FrameLayout$LayoutParams;->setMargins(IIII)V

    .line 99
    iget-object v3, p0, Lcom/tkay/expressad/advanced/js/NativeAdvancedExpandDialog;->f:Landroid/widget/TextView;

    invoke-virtual {v3, v0}, Landroid/widget/TextView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 100
    iget-object v0, p0, Lcom/tkay/expressad/advanced/js/NativeAdvancedExpandDialog;->f:Landroid/widget/TextView;

    iget-boolean v3, p0, Lcom/tkay/expressad/advanced/js/NativeAdvancedExpandDialog;->c:Z

    if-eqz v3, :cond_0

    const/4 v3, 0x4

    goto :goto_0

    :cond_0
    move v3, v1

    :goto_0
    invoke-virtual {v0, v3}, Landroid/widget/TextView;->setVisibility(I)V

    .line 101
    iget-object v0, p0, Lcom/tkay/expressad/advanced/js/NativeAdvancedExpandDialog;->f:Landroid/widget/TextView;

    new-instance v3, Lcom/tkay/expressad/advanced/js/NativeAdvancedExpandDialog$1;

    invoke-direct {v3, p0}, Lcom/tkay/expressad/advanced/js/NativeAdvancedExpandDialog$1;-><init>(Lcom/tkay/expressad/advanced/js/NativeAdvancedExpandDialog;)V

    invoke-virtual {v0, v3}, Landroid/widget/TextView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 107
    iget-object v0, p0, Lcom/tkay/expressad/advanced/js/NativeAdvancedExpandDialog;->d:Landroid/widget/FrameLayout;

    iget-object v3, p0, Lcom/tkay/expressad/advanced/js/NativeAdvancedExpandDialog;->f:Landroid/widget/TextView;

    invoke-virtual {v0, v3}, Landroid/widget/FrameLayout;->addView(Landroid/view/View;)V

    .line 109
    iget-object v0, p0, Lcom/tkay/expressad/advanced/js/NativeAdvancedExpandDialog;->d:Landroid/widget/FrameLayout;

    invoke-virtual {p0, v0}, Lcom/tkay/expressad/advanced/js/NativeAdvancedExpandDialog;->setContentView(Landroid/view/View;)V

    .line 111
    invoke-virtual {p0}, Lcom/tkay/expressad/advanced/js/NativeAdvancedExpandDialog;->getWindow()Landroid/view/Window;

    move-result-object v0

    if-eqz v0, :cond_2

    .line 112
    invoke-virtual {p0}, Lcom/tkay/expressad/advanced/js/NativeAdvancedExpandDialog;->getWindow()Landroid/view/Window;

    move-result-object v0

    new-instance v3, Landroid/graphics/drawable/ColorDrawable;

    invoke-direct {v3, v1}, Landroid/graphics/drawable/ColorDrawable;-><init>(I)V

    invoke-virtual {v0, v3}, Landroid/view/Window;->setBackgroundDrawable(Landroid/graphics/drawable/Drawable;)V

    .line 113
    invoke-virtual {p0}, Lcom/tkay/expressad/advanced/js/NativeAdvancedExpandDialog;->getWindow()Landroid/view/Window;

    move-result-object v0

    invoke-virtual {v0}, Landroid/view/Window;->getDecorView()Landroid/view/View;

    move-result-object v0

    invoke-virtual {v0, v1, v1, v1, v1}, Landroid/view/View;->setPadding(IIII)V

    .line 114
    invoke-virtual {p0}, Lcom/tkay/expressad/advanced/js/NativeAdvancedExpandDialog;->getWindow()Landroid/view/Window;

    move-result-object v0

    invoke-virtual {v0}, Landroid/view/Window;->getAttributes()Landroid/view/WindowManager$LayoutParams;

    move-result-object v0

    .line 115
    iput v2, v0, Landroid/view/WindowManager$LayoutParams;->width:I

    .line 116
    iput v2, v0, Landroid/view/WindowManager$LayoutParams;->height:I

    .line 117
    invoke-virtual {p0}, Lcom/tkay/expressad/advanced/js/NativeAdvancedExpandDialog;->getWindow()Landroid/view/Window;

    move-result-object v1

    invoke-virtual {v1, v0}, Landroid/view/Window;->setAttributes(Landroid/view/WindowManager$LayoutParams;)V

    .line 119
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x10

    if-lt v0, v1, :cond_2

    const/16 v0, 0x207

    .line 125
    sget v1, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v2, 0x13

    if-lt v1, v2, :cond_1

    const/16 v0, 0x1207

    .line 128
    :cond_1
    invoke-virtual {p0}, Lcom/tkay/expressad/advanced/js/NativeAdvancedExpandDialog;->getWindow()Landroid/view/Window;

    move-result-object v1

    invoke-virtual {v1}, Landroid/view/Window;->getDecorView()Landroid/view/View;

    move-result-object v1

    invoke-virtual {v1, v0}, Landroid/view/View;->setSystemUiVisibility(I)V

    .line 132
    :cond_2
    iget-object v0, p0, Lcom/tkay/expressad/advanced/js/NativeAdvancedExpandDialog;->e:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    new-instance v1, Lcom/tkay/expressad/advanced/js/NativeAdvancedExpandDialog$2;

    invoke-direct {v1, p0}, Lcom/tkay/expressad/advanced/js/NativeAdvancedExpandDialog$2;-><init>(Lcom/tkay/expressad/advanced/js/NativeAdvancedExpandDialog;)V

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->setWebViewListener(Lcom/tkay/expressad/atsignalcommon/windvane/e;)V

    .line 154
    iget-object v0, p0, Lcom/tkay/expressad/advanced/js/NativeAdvancedExpandDialog;->e:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    iget-object v1, p0, Lcom/tkay/expressad/advanced/js/NativeAdvancedExpandDialog;->j:Lcom/tkay/expressad/atsignalcommon/mraid/IMraidJSBridge;

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->setObject(Ljava/lang/Object;)V

    .line 155
    iget-object v0, p0, Lcom/tkay/expressad/advanced/js/NativeAdvancedExpandDialog;->e:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    iget-object v1, p0, Lcom/tkay/expressad/advanced/js/NativeAdvancedExpandDialog;->b:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->loadUrl(Ljava/lang/String;)V

    .line 157
    new-instance v0, Lcom/tkay/expressad/advanced/js/NativeAdvancedExpandDialog$3;

    invoke-direct {v0, p0}, Lcom/tkay/expressad/advanced/js/NativeAdvancedExpandDialog$3;-><init>(Lcom/tkay/expressad/advanced/js/NativeAdvancedExpandDialog;)V

    invoke-virtual {p0, v0}, Lcom/tkay/expressad/advanced/js/NativeAdvancedExpandDialog;->setOnDismissListener(Landroid/content/DialogInterface$OnDismissListener;)V

    return-void
.end method

.method static synthetic a(Lcom/tkay/expressad/advanced/js/NativeAdvancedExpandDialog;)V
    .locals 22

    move-object/from16 v0, p0

    const-string v1, "true"

    .line 1182
    :try_start_0
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v2

    invoke-virtual {v2}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v2

    .line 1183
    invoke-virtual {v2}, Landroid/content/res/Resources;->getConfiguration()Landroid/content/res/Configuration;

    move-result-object v2

    iget v2, v2, Landroid/content/res/Configuration;->orientation:I

    .line 1184
    new-instance v3, Lorg/json/JSONObject;

    invoke-direct {v3}, Lorg/json/JSONObject;-><init>()V

    const-string v4, "orientation"

    const/4 v5, 0x2

    const/4 v6, 0x1

    if-ne v2, v5, :cond_0

    const-string v2, "landscape"

    goto :goto_0

    :cond_0
    if-ne v2, v6, :cond_1

    const-string v2, "portrait"

    goto :goto_0

    :cond_1
    const-string v2, "undefined"

    .line 1186
    :goto_0
    invoke-virtual {v3, v4, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v2, "locked"

    .line 1188
    invoke-virtual {v3, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 1190
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v2

    invoke-static {v2}, Lcom/tkay/expressad/foundation/h/k;->e(Landroid/content/Context;)I

    move-result v2

    int-to-float v2, v2

    .line 1191
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v4

    invoke-virtual {v4}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v4

    invoke-static {v4}, Lcom/tkay/expressad/foundation/h/k;->f(Landroid/content/Context;)I

    move-result v4

    int-to-float v4, v4

    .line 1193
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v7

    invoke-virtual {v7}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v7

    invoke-static {v7}, Lcom/tkay/expressad/foundation/h/k;->g(Landroid/content/Context;)Ljava/util/HashMap;

    move-result-object v7

    const-string v8, "width"

    .line 1194
    invoke-virtual {v7, v8}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v8

    check-cast v8, Ljava/lang/Integer;

    invoke-virtual {v8}, Ljava/lang/Integer;->intValue()I

    move-result v8

    const-string v9, "height"

    .line 1195
    invoke-virtual {v7, v9}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v7

    check-cast v7, Ljava/lang/Integer;

    invoke-virtual {v7}, Ljava/lang/Integer;->intValue()I

    move-result v7

    .line 1197
    new-instance v9, Ljava/util/HashMap;

    invoke-direct {v9}, Ljava/util/HashMap;-><init>()V

    const-string v10, "placementType"

    const-string v11, "inline"

    .line 1198
    invoke-virtual {v9, v10, v11}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v10, "state"

    const-string v11, "expanded"

    .line 1199
    invoke-virtual {v9, v10, v11}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v10, "viewable"

    .line 1200
    invoke-virtual {v9, v10, v1}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v1, "currentAppOrientation"

    .line 1201
    invoke-virtual {v9, v1, v3}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    new-array v1, v5, [I

    .line 1204
    iget-object v3, v0, Lcom/tkay/expressad/advanced/js/NativeAdvancedExpandDialog;->e:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    invoke-virtual {v3, v1}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->getLocationInWindow([I)V

    .line 1206
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;->getInstance()Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;

    move-result-object v10

    iget-object v11, v0, Lcom/tkay/expressad/advanced/js/NativeAdvancedExpandDialog;->e:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    const/4 v3, 0x0

    aget v5, v1, v3

    int-to-float v12, v5

    aget v5, v1, v6

    int-to-float v13, v5

    iget-object v5, v0, Lcom/tkay/expressad/advanced/js/NativeAdvancedExpandDialog;->e:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    .line 1207
    invoke-virtual {v5}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->getWidth()I

    move-result v5

    int-to-float v14, v5

    iget-object v5, v0, Lcom/tkay/expressad/advanced/js/NativeAdvancedExpandDialog;->e:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    invoke-virtual {v5}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->getHeight()I

    move-result v5

    int-to-float v15, v5

    .line 1206
    invoke-virtual/range {v10 .. v15}, Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;->fireSetDefaultPosition(Landroid/webkit/WebView;FFFF)V

    .line 1208
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;->getInstance()Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;

    move-result-object v16

    iget-object v5, v0, Lcom/tkay/expressad/advanced/js/NativeAdvancedExpandDialog;->e:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    aget v3, v1, v3

    int-to-float v3, v3

    aget v1, v1, v6

    int-to-float v1, v1

    iget-object v6, v0, Lcom/tkay/expressad/advanced/js/NativeAdvancedExpandDialog;->e:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    .line 1209
    invoke-virtual {v6}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->getWidth()I

    move-result v6

    int-to-float v6, v6

    iget-object v10, v0, Lcom/tkay/expressad/advanced/js/NativeAdvancedExpandDialog;->e:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    invoke-virtual {v10}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->getHeight()I

    move-result v10

    int-to-float v10, v10

    move-object/from16 v17, v5

    move/from16 v18, v3

    move/from16 v19, v1

    move/from16 v20, v6

    move/from16 v21, v10

    .line 1208
    invoke-virtual/range {v16 .. v21}, Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;->fireSetCurrentPosition(Landroid/webkit/WebView;FFFF)V

    .line 1210
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;->getInstance()Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;

    move-result-object v1

    iget-object v3, v0, Lcom/tkay/expressad/advanced/js/NativeAdvancedExpandDialog;->e:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    invoke-virtual {v1, v3, v2, v4}, Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;->fireSetScreenSize(Landroid/webkit/WebView;FF)V

    .line 1211
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;->getInstance()Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;

    move-result-object v1

    iget-object v2, v0, Lcom/tkay/expressad/advanced/js/NativeAdvancedExpandDialog;->e:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    int-to-float v3, v8

    int-to-float v4, v7

    invoke-virtual {v1, v2, v3, v4}, Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;->fireSetMaxSize(Landroid/webkit/WebView;FF)V

    .line 1212
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;->getInstance()Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;

    move-result-object v1

    iget-object v2, v0, Lcom/tkay/expressad/advanced/js/NativeAdvancedExpandDialog;->e:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    invoke-virtual {v1, v2, v9}, Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;->fireChangeEventForPropertys(Landroid/webkit/WebView;Ljava/util/Map;)V

    .line 1213
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;->getInstance()Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;

    move-result-object v1

    iget-object v0, v0, Lcom/tkay/expressad/advanced/js/NativeAdvancedExpandDialog;->e:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    invoke-virtual {v1, v0}, Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;->fireReadyEvent(Landroid/webkit/WebView;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    return-void
.end method

.method static synthetic b(Lcom/tkay/expressad/advanced/js/NativeAdvancedExpandDialog;)Lcom/tkay/expressad/advanced/d/a;
    .locals 0

    .line 47
    iget-object p0, p0, Lcom/tkay/expressad/advanced/js/NativeAdvancedExpandDialog;->i:Lcom/tkay/expressad/advanced/d/a;

    return-object p0
.end method

.method private b()V
    .locals 22

    move-object/from16 v0, p0

    const-string v1, "true"

    .line 182
    :try_start_0
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v2

    invoke-virtual {v2}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v2

    .line 183
    invoke-virtual {v2}, Landroid/content/res/Resources;->getConfiguration()Landroid/content/res/Configuration;

    move-result-object v2

    iget v2, v2, Landroid/content/res/Configuration;->orientation:I

    .line 184
    new-instance v3, Lorg/json/JSONObject;

    invoke-direct {v3}, Lorg/json/JSONObject;-><init>()V

    const-string v4, "orientation"

    const/4 v5, 0x2

    const/4 v6, 0x1

    if-ne v2, v5, :cond_0

    const-string v2, "landscape"

    goto :goto_0

    :cond_0
    if-ne v2, v6, :cond_1

    const-string v2, "portrait"

    goto :goto_0

    :cond_1
    const-string v2, "undefined"

    .line 186
    :goto_0
    invoke-virtual {v3, v4, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v2, "locked"

    .line 188
    invoke-virtual {v3, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 190
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v2

    invoke-static {v2}, Lcom/tkay/expressad/foundation/h/k;->e(Landroid/content/Context;)I

    move-result v2

    int-to-float v2, v2

    .line 191
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v4

    invoke-virtual {v4}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v4

    invoke-static {v4}, Lcom/tkay/expressad/foundation/h/k;->f(Landroid/content/Context;)I

    move-result v4

    int-to-float v4, v4

    .line 193
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v7

    invoke-virtual {v7}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v7

    invoke-static {v7}, Lcom/tkay/expressad/foundation/h/k;->g(Landroid/content/Context;)Ljava/util/HashMap;

    move-result-object v7

    const-string v8, "width"

    .line 194
    invoke-virtual {v7, v8}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v8

    check-cast v8, Ljava/lang/Integer;

    invoke-virtual {v8}, Ljava/lang/Integer;->intValue()I

    move-result v8

    const-string v9, "height"

    .line 195
    invoke-virtual {v7, v9}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v7

    check-cast v7, Ljava/lang/Integer;

    invoke-virtual {v7}, Ljava/lang/Integer;->intValue()I

    move-result v7

    .line 197
    new-instance v9, Ljava/util/HashMap;

    invoke-direct {v9}, Ljava/util/HashMap;-><init>()V

    const-string v10, "placementType"

    const-string v11, "inline"

    .line 198
    invoke-virtual {v9, v10, v11}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v10, "state"

    const-string v11, "expanded"

    .line 199
    invoke-virtual {v9, v10, v11}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v10, "viewable"

    .line 200
    invoke-virtual {v9, v10, v1}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v1, "currentAppOrientation"

    .line 201
    invoke-virtual {v9, v1, v3}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    new-array v1, v5, [I

    .line 204
    iget-object v3, v0, Lcom/tkay/expressad/advanced/js/NativeAdvancedExpandDialog;->e:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    invoke-virtual {v3, v1}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->getLocationInWindow([I)V

    .line 206
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;->getInstance()Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;

    move-result-object v10

    iget-object v11, v0, Lcom/tkay/expressad/advanced/js/NativeAdvancedExpandDialog;->e:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    const/4 v3, 0x0

    aget v5, v1, v3

    int-to-float v12, v5

    aget v5, v1, v6

    int-to-float v13, v5

    iget-object v5, v0, Lcom/tkay/expressad/advanced/js/NativeAdvancedExpandDialog;->e:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    .line 207
    invoke-virtual {v5}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->getWidth()I

    move-result v5

    int-to-float v14, v5

    iget-object v5, v0, Lcom/tkay/expressad/advanced/js/NativeAdvancedExpandDialog;->e:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    invoke-virtual {v5}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->getHeight()I

    move-result v5

    int-to-float v15, v5

    .line 206
    invoke-virtual/range {v10 .. v15}, Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;->fireSetDefaultPosition(Landroid/webkit/WebView;FFFF)V

    .line 208
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;->getInstance()Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;

    move-result-object v16

    iget-object v5, v0, Lcom/tkay/expressad/advanced/js/NativeAdvancedExpandDialog;->e:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    aget v3, v1, v3

    int-to-float v3, v3

    aget v1, v1, v6

    int-to-float v1, v1

    iget-object v6, v0, Lcom/tkay/expressad/advanced/js/NativeAdvancedExpandDialog;->e:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    .line 209
    invoke-virtual {v6}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->getWidth()I

    move-result v6

    int-to-float v6, v6

    iget-object v10, v0, Lcom/tkay/expressad/advanced/js/NativeAdvancedExpandDialog;->e:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    invoke-virtual {v10}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->getHeight()I

    move-result v10

    int-to-float v10, v10

    move-object/from16 v17, v5

    move/from16 v18, v3

    move/from16 v19, v1

    move/from16 v20, v6

    move/from16 v21, v10

    .line 208
    invoke-virtual/range {v16 .. v21}, Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;->fireSetCurrentPosition(Landroid/webkit/WebView;FFFF)V

    .line 210
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;->getInstance()Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;

    move-result-object v1

    iget-object v3, v0, Lcom/tkay/expressad/advanced/js/NativeAdvancedExpandDialog;->e:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    invoke-virtual {v1, v3, v2, v4}, Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;->fireSetScreenSize(Landroid/webkit/WebView;FF)V

    .line 211
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;->getInstance()Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;

    move-result-object v1

    iget-object v2, v0, Lcom/tkay/expressad/advanced/js/NativeAdvancedExpandDialog;->e:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    int-to-float v3, v8

    int-to-float v4, v7

    invoke-virtual {v1, v2, v3, v4}, Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;->fireSetMaxSize(Landroid/webkit/WebView;FF)V

    .line 212
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;->getInstance()Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;

    move-result-object v1

    iget-object v2, v0, Lcom/tkay/expressad/advanced/js/NativeAdvancedExpandDialog;->e:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    invoke-virtual {v1, v2, v9}, Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;->fireChangeEventForPropertys(Landroid/webkit/WebView;Ljava/util/Map;)V

    .line 213
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;->getInstance()Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;

    move-result-object v1

    iget-object v2, v0, Lcom/tkay/expressad/advanced/js/NativeAdvancedExpandDialog;->e:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    invoke-virtual {v1, v2}, Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;->fireReadyEvent(Landroid/webkit/WebView;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    return-void
.end method

.method static synthetic c(Lcom/tkay/expressad/advanced/js/NativeAdvancedExpandDialog;)Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;
    .locals 0

    .line 47
    iget-object p0, p0, Lcom/tkay/expressad/advanced/js/NativeAdvancedExpandDialog;->e:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    return-object p0
.end method

.method static synthetic d(Lcom/tkay/expressad/advanced/js/NativeAdvancedExpandDialog;)Landroid/widget/FrameLayout;
    .locals 0

    .line 47
    iget-object p0, p0, Lcom/tkay/expressad/advanced/js/NativeAdvancedExpandDialog;->d:Landroid/widget/FrameLayout;

    return-object p0
.end method

.method static synthetic e(Lcom/tkay/expressad/advanced/js/NativeAdvancedExpandDialog;)Ljava/util/List;
    .locals 0

    .line 47
    iget-object p0, p0, Lcom/tkay/expressad/advanced/js/NativeAdvancedExpandDialog;->h:Ljava/util/List;

    return-object p0
.end method

.method static synthetic f(Lcom/tkay/expressad/advanced/js/NativeAdvancedExpandDialog;)Landroid/widget/TextView;
    .locals 0

    .line 47
    iget-object p0, p0, Lcom/tkay/expressad/advanced/js/NativeAdvancedExpandDialog;->f:Landroid/widget/TextView;

    return-object p0
.end method


# virtual methods
.method public dismiss()V
    .locals 0

    .line 221
    invoke-super {p0}, Landroid/app/Dialog;->dismiss()V

    return-void
.end method

.method protected onCreate(Landroid/os/Bundle;)V
    .locals 3

    .line 75
    invoke-super {p0, p1}, Landroid/app/Dialog;->onCreate(Landroid/os/Bundle;)V

    const/4 p1, 0x1

    .line 76
    invoke-virtual {p0, p1}, Lcom/tkay/expressad/advanced/js/NativeAdvancedExpandDialog;->requestWindowFeature(I)Z

    const/4 v0, 0x0

    .line 78
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/advanced/js/NativeAdvancedExpandDialog;->setCanceledOnTouchOutside(Z)V

    .line 79
    invoke-virtual {p0, p1}, Lcom/tkay/expressad/advanced/js/NativeAdvancedExpandDialog;->setCancelable(Z)V

    .line 1085
    new-instance p1, Landroid/widget/FrameLayout;

    invoke-virtual {p0}, Lcom/tkay/expressad/advanced/js/NativeAdvancedExpandDialog;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-direct {p1, v1}, Landroid/widget/FrameLayout;-><init>(Landroid/content/Context;)V

    iput-object p1, p0, Lcom/tkay/expressad/advanced/js/NativeAdvancedExpandDialog;->d:Landroid/widget/FrameLayout;

    .line 1086
    new-instance v1, Landroid/widget/FrameLayout$LayoutParams;

    const/4 v2, -0x1

    invoke-direct {v1, v2, v2}, Landroid/widget/FrameLayout$LayoutParams;-><init>(II)V

    invoke-virtual {p1, v1}, Landroid/widget/FrameLayout;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 1089
    new-instance p1, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    invoke-virtual {p0}, Lcom/tkay/expressad/advanced/js/NativeAdvancedExpandDialog;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-virtual {v1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v1

    invoke-direct {p1, v1}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;-><init>(Landroid/content/Context;)V

    iput-object p1, p0, Lcom/tkay/expressad/advanced/js/NativeAdvancedExpandDialog;->e:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    .line 1090
    new-instance v1, Landroid/widget/FrameLayout$LayoutParams;

    invoke-direct {v1, v2, v2}, Landroid/widget/FrameLayout$LayoutParams;-><init>(II)V

    invoke-virtual {p1, v1}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 1092
    iget-object p1, p0, Lcom/tkay/expressad/advanced/js/NativeAdvancedExpandDialog;->d:Landroid/widget/FrameLayout;

    iget-object v1, p0, Lcom/tkay/expressad/advanced/js/NativeAdvancedExpandDialog;->e:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    invoke-virtual {p1, v1}, Landroid/widget/FrameLayout;->addView(Landroid/view/View;)V

    .line 1094
    new-instance p1, Landroid/widget/TextView;

    invoke-virtual {p0}, Lcom/tkay/expressad/advanced/js/NativeAdvancedExpandDialog;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-direct {p1, v1}, Landroid/widget/TextView;-><init>(Landroid/content/Context;)V

    iput-object p1, p0, Lcom/tkay/expressad/advanced/js/NativeAdvancedExpandDialog;->f:Landroid/widget/TextView;

    .line 1095
    invoke-virtual {p1, v0}, Landroid/widget/TextView;->setBackgroundColor(I)V

    .line 1096
    new-instance p1, Landroid/widget/FrameLayout$LayoutParams;

    const/16 v1, 0x60

    invoke-direct {p1, v1, v1}, Landroid/widget/FrameLayout$LayoutParams;-><init>(II)V

    const v1, 0x800035

    .line 1097
    iput v1, p1, Landroid/widget/FrameLayout$LayoutParams;->gravity:I

    const/16 v1, 0x1e

    .line 1098
    invoke-virtual {p1, v1, v1, v1, v1}, Landroid/widget/FrameLayout$LayoutParams;->setMargins(IIII)V

    .line 1099
    iget-object v1, p0, Lcom/tkay/expressad/advanced/js/NativeAdvancedExpandDialog;->f:Landroid/widget/TextView;

    invoke-virtual {v1, p1}, Landroid/widget/TextView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 1100
    iget-object p1, p0, Lcom/tkay/expressad/advanced/js/NativeAdvancedExpandDialog;->f:Landroid/widget/TextView;

    iget-boolean v1, p0, Lcom/tkay/expressad/advanced/js/NativeAdvancedExpandDialog;->c:Z

    if-eqz v1, :cond_0

    const/4 v1, 0x4

    goto :goto_0

    :cond_0
    move v1, v0

    :goto_0
    invoke-virtual {p1, v1}, Landroid/widget/TextView;->setVisibility(I)V

    .line 1101
    iget-object p1, p0, Lcom/tkay/expressad/advanced/js/NativeAdvancedExpandDialog;->f:Landroid/widget/TextView;

    new-instance v1, Lcom/tkay/expressad/advanced/js/NativeAdvancedExpandDialog$1;

    invoke-direct {v1, p0}, Lcom/tkay/expressad/advanced/js/NativeAdvancedExpandDialog$1;-><init>(Lcom/tkay/expressad/advanced/js/NativeAdvancedExpandDialog;)V

    invoke-virtual {p1, v1}, Landroid/widget/TextView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 1107
    iget-object p1, p0, Lcom/tkay/expressad/advanced/js/NativeAdvancedExpandDialog;->d:Landroid/widget/FrameLayout;

    iget-object v1, p0, Lcom/tkay/expressad/advanced/js/NativeAdvancedExpandDialog;->f:Landroid/widget/TextView;

    invoke-virtual {p1, v1}, Landroid/widget/FrameLayout;->addView(Landroid/view/View;)V

    .line 1109
    iget-object p1, p0, Lcom/tkay/expressad/advanced/js/NativeAdvancedExpandDialog;->d:Landroid/widget/FrameLayout;

    invoke-virtual {p0, p1}, Lcom/tkay/expressad/advanced/js/NativeAdvancedExpandDialog;->setContentView(Landroid/view/View;)V

    .line 1111
    invoke-virtual {p0}, Lcom/tkay/expressad/advanced/js/NativeAdvancedExpandDialog;->getWindow()Landroid/view/Window;

    move-result-object p1

    if-eqz p1, :cond_2

    .line 1112
    invoke-virtual {p0}, Lcom/tkay/expressad/advanced/js/NativeAdvancedExpandDialog;->getWindow()Landroid/view/Window;

    move-result-object p1

    new-instance v1, Landroid/graphics/drawable/ColorDrawable;

    invoke-direct {v1, v0}, Landroid/graphics/drawable/ColorDrawable;-><init>(I)V

    invoke-virtual {p1, v1}, Landroid/view/Window;->setBackgroundDrawable(Landroid/graphics/drawable/Drawable;)V

    .line 1113
    invoke-virtual {p0}, Lcom/tkay/expressad/advanced/js/NativeAdvancedExpandDialog;->getWindow()Landroid/view/Window;

    move-result-object p1

    invoke-virtual {p1}, Landroid/view/Window;->getDecorView()Landroid/view/View;

    move-result-object p1

    invoke-virtual {p1, v0, v0, v0, v0}, Landroid/view/View;->setPadding(IIII)V

    .line 1114
    invoke-virtual {p0}, Lcom/tkay/expressad/advanced/js/NativeAdvancedExpandDialog;->getWindow()Landroid/view/Window;

    move-result-object p1

    invoke-virtual {p1}, Landroid/view/Window;->getAttributes()Landroid/view/WindowManager$LayoutParams;

    move-result-object p1

    .line 1115
    iput v2, p1, Landroid/view/WindowManager$LayoutParams;->width:I

    .line 1116
    iput v2, p1, Landroid/view/WindowManager$LayoutParams;->height:I

    .line 1117
    invoke-virtual {p0}, Lcom/tkay/expressad/advanced/js/NativeAdvancedExpandDialog;->getWindow()Landroid/view/Window;

    move-result-object v0

    invoke-virtual {v0, p1}, Landroid/view/Window;->setAttributes(Landroid/view/WindowManager$LayoutParams;)V

    .line 1119
    sget p1, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v0, 0x10

    if-lt p1, v0, :cond_2

    const/16 p1, 0x207

    .line 1125
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x13

    if-lt v0, v1, :cond_1

    const/16 p1, 0x1207

    .line 1128
    :cond_1
    invoke-virtual {p0}, Lcom/tkay/expressad/advanced/js/NativeAdvancedExpandDialog;->getWindow()Landroid/view/Window;

    move-result-object v0

    invoke-virtual {v0}, Landroid/view/Window;->getDecorView()Landroid/view/View;

    move-result-object v0

    invoke-virtual {v0, p1}, Landroid/view/View;->setSystemUiVisibility(I)V

    .line 1132
    :cond_2
    iget-object p1, p0, Lcom/tkay/expressad/advanced/js/NativeAdvancedExpandDialog;->e:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    new-instance v0, Lcom/tkay/expressad/advanced/js/NativeAdvancedExpandDialog$2;

    invoke-direct {v0, p0}, Lcom/tkay/expressad/advanced/js/NativeAdvancedExpandDialog$2;-><init>(Lcom/tkay/expressad/advanced/js/NativeAdvancedExpandDialog;)V

    invoke-virtual {p1, v0}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->setWebViewListener(Lcom/tkay/expressad/atsignalcommon/windvane/e;)V

    .line 1154
    iget-object p1, p0, Lcom/tkay/expressad/advanced/js/NativeAdvancedExpandDialog;->e:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    iget-object v0, p0, Lcom/tkay/expressad/advanced/js/NativeAdvancedExpandDialog;->j:Lcom/tkay/expressad/atsignalcommon/mraid/IMraidJSBridge;

    invoke-virtual {p1, v0}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->setObject(Ljava/lang/Object;)V

    .line 1155
    iget-object p1, p0, Lcom/tkay/expressad/advanced/js/NativeAdvancedExpandDialog;->e:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    iget-object v0, p0, Lcom/tkay/expressad/advanced/js/NativeAdvancedExpandDialog;->b:Ljava/lang/String;

    invoke-virtual {p1, v0}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->loadUrl(Ljava/lang/String;)V

    .line 1157
    new-instance p1, Lcom/tkay/expressad/advanced/js/NativeAdvancedExpandDialog$3;

    invoke-direct {p1, p0}, Lcom/tkay/expressad/advanced/js/NativeAdvancedExpandDialog$3;-><init>(Lcom/tkay/expressad/advanced/js/NativeAdvancedExpandDialog;)V

    invoke-virtual {p0, p1}, Lcom/tkay/expressad/advanced/js/NativeAdvancedExpandDialog;->setOnDismissListener(Landroid/content/DialogInterface$OnDismissListener;)V

    return-void
.end method

.method public setCampaignList(Ljava/lang/String;Ljava/util/List;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Ljava/util/List<",
            "Lcom/tkay/expressad/foundation/d/c;",
            ">;)V"
        }
    .end annotation

    .line 175
    iput-object p1, p0, Lcom/tkay/expressad/advanced/js/NativeAdvancedExpandDialog;->g:Ljava/lang/String;

    .line 176
    iput-object p2, p0, Lcom/tkay/expressad/advanced/js/NativeAdvancedExpandDialog;->h:Ljava/util/List;

    return-void
.end method
