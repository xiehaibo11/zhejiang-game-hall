.class public Lcom/tkay/expressad/splash/js/SplashExpandDialog;
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

.field private i:Lcom/tkay/expressad/splash/d/a;

.field private j:Lcom/tkay/expressad/atsignalcommon/mraid/IMraidJSBridge;


# direct methods
.method public constructor <init>(Landroid/content/Context;Landroid/os/Bundle;Lcom/tkay/expressad/splash/d/a;)V
    .locals 0

    .line 62
    invoke-direct {p0, p1}, Landroid/app/Dialog;-><init>(Landroid/content/Context;)V

    const-string p1, "SplashExpandDialog"

    .line 47
    iput-object p1, p0, Lcom/tkay/expressad/splash/js/SplashExpandDialog;->a:Ljava/lang/String;

    .line 224
    new-instance p1, Lcom/tkay/expressad/splash/js/SplashExpandDialog$4;

    invoke-direct {p1, p0}, Lcom/tkay/expressad/splash/js/SplashExpandDialog$4;-><init>(Lcom/tkay/expressad/splash/js/SplashExpandDialog;)V

    iput-object p1, p0, Lcom/tkay/expressad/splash/js/SplashExpandDialog;->j:Lcom/tkay/expressad/atsignalcommon/mraid/IMraidJSBridge;

    if-eqz p2, :cond_0

    const-string p1, "url"

    .line 65
    invoke-virtual {p2, p1}, Landroid/os/Bundle;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/expressad/splash/js/SplashExpandDialog;->b:Ljava/lang/String;

    const-string p1, "shouldUseCustomClose"

    .line 66
    invoke-virtual {p2, p1}, Landroid/os/Bundle;->getBoolean(Ljava/lang/String;)Z

    move-result p1

    iput-boolean p1, p0, Lcom/tkay/expressad/splash/js/SplashExpandDialog;->c:Z

    .line 69
    :cond_0
    iput-object p3, p0, Lcom/tkay/expressad/splash/js/SplashExpandDialog;->i:Lcom/tkay/expressad/splash/d/a;

    return-void
.end method

.method static synthetic a(Lcom/tkay/expressad/splash/js/SplashExpandDialog;Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;)Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;
    .locals 0

    .line 46
    iput-object p1, p0, Lcom/tkay/expressad/splash/js/SplashExpandDialog;->e:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    return-object p1
.end method

.method static synthetic a(Lcom/tkay/expressad/splash/js/SplashExpandDialog;Lcom/tkay/expressad/splash/d/a;)Lcom/tkay/expressad/splash/d/a;
    .locals 0

    .line 46
    iput-object p1, p0, Lcom/tkay/expressad/splash/js/SplashExpandDialog;->i:Lcom/tkay/expressad/splash/d/a;

    return-object p1
.end method

.method private a()V
    .locals 4

    .line 84
    new-instance v0, Landroid/widget/FrameLayout;

    invoke-virtual {p0}, Lcom/tkay/expressad/splash/js/SplashExpandDialog;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-direct {v0, v1}, Landroid/widget/FrameLayout;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/tkay/expressad/splash/js/SplashExpandDialog;->d:Landroid/widget/FrameLayout;

    .line 85
    new-instance v1, Landroid/widget/FrameLayout$LayoutParams;

    const/4 v2, -0x1

    invoke-direct {v1, v2, v2}, Landroid/widget/FrameLayout$LayoutParams;-><init>(II)V

    invoke-virtual {v0, v1}, Landroid/widget/FrameLayout;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 88
    new-instance v0, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    invoke-virtual {p0}, Lcom/tkay/expressad/splash/js/SplashExpandDialog;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-virtual {v1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v1

    invoke-direct {v0, v1}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/tkay/expressad/splash/js/SplashExpandDialog;->e:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    .line 89
    new-instance v1, Landroid/widget/FrameLayout$LayoutParams;

    invoke-direct {v1, v2, v2}, Landroid/widget/FrameLayout$LayoutParams;-><init>(II)V

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 91
    iget-object v0, p0, Lcom/tkay/expressad/splash/js/SplashExpandDialog;->d:Landroid/widget/FrameLayout;

    iget-object v1, p0, Lcom/tkay/expressad/splash/js/SplashExpandDialog;->e:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    invoke-virtual {v0, v1}, Landroid/widget/FrameLayout;->addView(Landroid/view/View;)V

    .line 93
    new-instance v0, Landroid/widget/TextView;

    invoke-virtual {p0}, Lcom/tkay/expressad/splash/js/SplashExpandDialog;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-direct {v0, v1}, Landroid/widget/TextView;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/tkay/expressad/splash/js/SplashExpandDialog;->f:Landroid/widget/TextView;

    const/4 v1, 0x0

    .line 94
    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setBackgroundColor(I)V

    .line 95
    new-instance v0, Landroid/widget/FrameLayout$LayoutParams;

    const/16 v3, 0x60

    invoke-direct {v0, v3, v3}, Landroid/widget/FrameLayout$LayoutParams;-><init>(II)V

    const v3, 0x800035

    .line 96
    iput v3, v0, Landroid/widget/FrameLayout$LayoutParams;->gravity:I

    const/16 v3, 0x1e

    .line 97
    invoke-virtual {v0, v3, v3, v3, v3}, Landroid/widget/FrameLayout$LayoutParams;->setMargins(IIII)V

    .line 98
    iget-object v3, p0, Lcom/tkay/expressad/splash/js/SplashExpandDialog;->f:Landroid/widget/TextView;

    invoke-virtual {v3, v0}, Landroid/widget/TextView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 99
    iget-object v0, p0, Lcom/tkay/expressad/splash/js/SplashExpandDialog;->f:Landroid/widget/TextView;

    iget-boolean v3, p0, Lcom/tkay/expressad/splash/js/SplashExpandDialog;->c:Z

    if-eqz v3, :cond_0

    const/4 v3, 0x4

    goto :goto_0

    :cond_0
    move v3, v1

    :goto_0
    invoke-virtual {v0, v3}, Landroid/widget/TextView;->setVisibility(I)V

    .line 100
    iget-object v0, p0, Lcom/tkay/expressad/splash/js/SplashExpandDialog;->f:Landroid/widget/TextView;

    new-instance v3, Lcom/tkay/expressad/splash/js/SplashExpandDialog$1;

    invoke-direct {v3, p0}, Lcom/tkay/expressad/splash/js/SplashExpandDialog$1;-><init>(Lcom/tkay/expressad/splash/js/SplashExpandDialog;)V

    invoke-virtual {v0, v3}, Landroid/widget/TextView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 106
    iget-object v0, p0, Lcom/tkay/expressad/splash/js/SplashExpandDialog;->d:Landroid/widget/FrameLayout;

    iget-object v3, p0, Lcom/tkay/expressad/splash/js/SplashExpandDialog;->f:Landroid/widget/TextView;

    invoke-virtual {v0, v3}, Landroid/widget/FrameLayout;->addView(Landroid/view/View;)V

    .line 108
    iget-object v0, p0, Lcom/tkay/expressad/splash/js/SplashExpandDialog;->d:Landroid/widget/FrameLayout;

    invoke-virtual {p0, v0}, Lcom/tkay/expressad/splash/js/SplashExpandDialog;->setContentView(Landroid/view/View;)V

    .line 110
    invoke-virtual {p0}, Lcom/tkay/expressad/splash/js/SplashExpandDialog;->getWindow()Landroid/view/Window;

    move-result-object v0

    if-eqz v0, :cond_2

    .line 111
    invoke-virtual {p0}, Lcom/tkay/expressad/splash/js/SplashExpandDialog;->getWindow()Landroid/view/Window;

    move-result-object v0

    new-instance v3, Landroid/graphics/drawable/ColorDrawable;

    invoke-direct {v3, v1}, Landroid/graphics/drawable/ColorDrawable;-><init>(I)V

    invoke-virtual {v0, v3}, Landroid/view/Window;->setBackgroundDrawable(Landroid/graphics/drawable/Drawable;)V

    .line 112
    invoke-virtual {p0}, Lcom/tkay/expressad/splash/js/SplashExpandDialog;->getWindow()Landroid/view/Window;

    move-result-object v0

    invoke-virtual {v0}, Landroid/view/Window;->getDecorView()Landroid/view/View;

    move-result-object v0

    invoke-virtual {v0, v1, v1, v1, v1}, Landroid/view/View;->setPadding(IIII)V

    .line 113
    invoke-virtual {p0}, Lcom/tkay/expressad/splash/js/SplashExpandDialog;->getWindow()Landroid/view/Window;

    move-result-object v0

    invoke-virtual {v0}, Landroid/view/Window;->getAttributes()Landroid/view/WindowManager$LayoutParams;

    move-result-object v0

    .line 114
    iput v2, v0, Landroid/view/WindowManager$LayoutParams;->width:I

    .line 115
    iput v2, v0, Landroid/view/WindowManager$LayoutParams;->height:I

    .line 116
    invoke-virtual {p0}, Lcom/tkay/expressad/splash/js/SplashExpandDialog;->getWindow()Landroid/view/Window;

    move-result-object v1

    invoke-virtual {v1, v0}, Landroid/view/Window;->setAttributes(Landroid/view/WindowManager$LayoutParams;)V

    .line 118
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x10

    if-lt v0, v1, :cond_2

    const/16 v0, 0x207

    .line 124
    sget v1, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v2, 0x13

    if-lt v1, v2, :cond_1

    const/16 v0, 0x1207

    .line 127
    :cond_1
    invoke-virtual {p0}, Lcom/tkay/expressad/splash/js/SplashExpandDialog;->getWindow()Landroid/view/Window;

    move-result-object v1

    invoke-virtual {v1}, Landroid/view/Window;->getDecorView()Landroid/view/View;

    move-result-object v1

    invoke-virtual {v1, v0}, Landroid/view/View;->setSystemUiVisibility(I)V

    .line 131
    :cond_2
    iget-object v0, p0, Lcom/tkay/expressad/splash/js/SplashExpandDialog;->e:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    new-instance v1, Lcom/tkay/expressad/splash/js/SplashExpandDialog$2;

    invoke-direct {v1, p0}, Lcom/tkay/expressad/splash/js/SplashExpandDialog$2;-><init>(Lcom/tkay/expressad/splash/js/SplashExpandDialog;)V

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->setWebViewListener(Lcom/tkay/expressad/atsignalcommon/windvane/e;)V

    .line 153
    iget-object v0, p0, Lcom/tkay/expressad/splash/js/SplashExpandDialog;->e:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    iget-object v1, p0, Lcom/tkay/expressad/splash/js/SplashExpandDialog;->j:Lcom/tkay/expressad/atsignalcommon/mraid/IMraidJSBridge;

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->setObject(Ljava/lang/Object;)V

    .line 154
    iget-object v0, p0, Lcom/tkay/expressad/splash/js/SplashExpandDialog;->e:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    iget-object v1, p0, Lcom/tkay/expressad/splash/js/SplashExpandDialog;->b:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->loadUrl(Ljava/lang/String;)V

    .line 156
    new-instance v0, Lcom/tkay/expressad/splash/js/SplashExpandDialog$3;

    invoke-direct {v0, p0}, Lcom/tkay/expressad/splash/js/SplashExpandDialog$3;-><init>(Lcom/tkay/expressad/splash/js/SplashExpandDialog;)V

    invoke-virtual {p0, v0}, Lcom/tkay/expressad/splash/js/SplashExpandDialog;->setOnDismissListener(Landroid/content/DialogInterface$OnDismissListener;)V

    return-void
.end method

.method static synthetic a(Lcom/tkay/expressad/splash/js/SplashExpandDialog;)V
    .locals 22

    move-object/from16 v0, p0

    const-string v1, "true"

    .line 1181
    :try_start_0
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v2

    invoke-virtual {v2}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v2

    .line 1182
    invoke-virtual {v2}, Landroid/content/res/Resources;->getConfiguration()Landroid/content/res/Configuration;

    move-result-object v2

    iget v2, v2, Landroid/content/res/Configuration;->orientation:I

    .line 1183
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

    .line 1185
    :goto_0
    invoke-virtual {v3, v4, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v2, "locked"

    .line 1187
    invoke-virtual {v3, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 1189
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v2

    invoke-static {v2}, Lcom/tkay/expressad/foundation/h/k;->e(Landroid/content/Context;)I

    move-result v2

    int-to-float v2, v2

    .line 1190
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v4

    invoke-virtual {v4}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v4

    invoke-static {v4}, Lcom/tkay/expressad/foundation/h/k;->f(Landroid/content/Context;)I

    move-result v4

    int-to-float v4, v4

    .line 1192
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v7

    invoke-virtual {v7}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v7

    invoke-static {v7}, Lcom/tkay/expressad/foundation/h/k;->g(Landroid/content/Context;)Ljava/util/HashMap;

    move-result-object v7

    const-string v8, "width"

    .line 1193
    invoke-virtual {v7, v8}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v8

    check-cast v8, Ljava/lang/Integer;

    invoke-virtual {v8}, Ljava/lang/Integer;->intValue()I

    move-result v8

    const-string v9, "height"

    .line 1194
    invoke-virtual {v7, v9}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v7

    check-cast v7, Ljava/lang/Integer;

    invoke-virtual {v7}, Ljava/lang/Integer;->intValue()I

    move-result v7

    .line 1196
    new-instance v9, Ljava/util/HashMap;

    invoke-direct {v9}, Ljava/util/HashMap;-><init>()V

    const-string v10, "placementType"

    const-string v11, "Interstitial"

    .line 1197
    invoke-virtual {v9, v10, v11}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v10, "state"

    const-string v11, "expanded"

    .line 1198
    invoke-virtual {v9, v10, v11}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v10, "viewable"

    .line 1199
    invoke-virtual {v9, v10, v1}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v1, "currentAppOrientation"

    .line 1200
    invoke-virtual {v9, v1, v3}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    new-array v1, v5, [I

    .line 1203
    iget-object v3, v0, Lcom/tkay/expressad/splash/js/SplashExpandDialog;->e:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    invoke-virtual {v3, v1}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->getLocationInWindow([I)V

    .line 1205
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;->getInstance()Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;

    move-result-object v10

    iget-object v11, v0, Lcom/tkay/expressad/splash/js/SplashExpandDialog;->e:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    const/4 v3, 0x0

    aget v5, v1, v3

    int-to-float v12, v5

    aget v5, v1, v6

    int-to-float v13, v5

    iget-object v5, v0, Lcom/tkay/expressad/splash/js/SplashExpandDialog;->e:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    .line 1206
    invoke-virtual {v5}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->getWidth()I

    move-result v5

    int-to-float v14, v5

    iget-object v5, v0, Lcom/tkay/expressad/splash/js/SplashExpandDialog;->e:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    invoke-virtual {v5}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->getHeight()I

    move-result v5

    int-to-float v15, v5

    .line 1205
    invoke-virtual/range {v10 .. v15}, Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;->fireSetDefaultPosition(Landroid/webkit/WebView;FFFF)V

    .line 1207
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;->getInstance()Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;

    move-result-object v16

    iget-object v5, v0, Lcom/tkay/expressad/splash/js/SplashExpandDialog;->e:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    aget v3, v1, v3

    int-to-float v3, v3

    aget v1, v1, v6

    int-to-float v1, v1

    iget-object v6, v0, Lcom/tkay/expressad/splash/js/SplashExpandDialog;->e:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    .line 1208
    invoke-virtual {v6}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->getWidth()I

    move-result v6

    int-to-float v6, v6

    iget-object v10, v0, Lcom/tkay/expressad/splash/js/SplashExpandDialog;->e:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    invoke-virtual {v10}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->getHeight()I

    move-result v10

    int-to-float v10, v10

    move-object/from16 v17, v5

    move/from16 v18, v3

    move/from16 v19, v1

    move/from16 v20, v6

    move/from16 v21, v10

    .line 1207
    invoke-virtual/range {v16 .. v21}, Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;->fireSetCurrentPosition(Landroid/webkit/WebView;FFFF)V

    .line 1209
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;->getInstance()Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;

    move-result-object v1

    iget-object v3, v0, Lcom/tkay/expressad/splash/js/SplashExpandDialog;->e:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    invoke-virtual {v1, v3, v2, v4}, Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;->fireSetScreenSize(Landroid/webkit/WebView;FF)V

    .line 1210
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;->getInstance()Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;

    move-result-object v1

    iget-object v2, v0, Lcom/tkay/expressad/splash/js/SplashExpandDialog;->e:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    int-to-float v3, v8

    int-to-float v4, v7

    invoke-virtual {v1, v2, v3, v4}, Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;->fireSetMaxSize(Landroid/webkit/WebView;FF)V

    .line 1211
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;->getInstance()Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;

    move-result-object v1

    iget-object v2, v0, Lcom/tkay/expressad/splash/js/SplashExpandDialog;->e:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    invoke-virtual {v1, v2, v9}, Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;->fireChangeEventForPropertys(Landroid/webkit/WebView;Ljava/util/Map;)V

    .line 1212
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;->getInstance()Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;

    move-result-object v1

    iget-object v0, v0, Lcom/tkay/expressad/splash/js/SplashExpandDialog;->e:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    invoke-virtual {v1, v0}, Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;->fireReadyEvent(Landroid/webkit/WebView;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    return-void
.end method

.method static synthetic b(Lcom/tkay/expressad/splash/js/SplashExpandDialog;)Lcom/tkay/expressad/splash/d/a;
    .locals 0

    .line 46
    iget-object p0, p0, Lcom/tkay/expressad/splash/js/SplashExpandDialog;->i:Lcom/tkay/expressad/splash/d/a;

    return-object p0
.end method

.method private b()V
    .locals 22

    move-object/from16 v0, p0

    const-string v1, "true"

    .line 181
    :try_start_0
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v2

    invoke-virtual {v2}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v2

    .line 182
    invoke-virtual {v2}, Landroid/content/res/Resources;->getConfiguration()Landroid/content/res/Configuration;

    move-result-object v2

    iget v2, v2, Landroid/content/res/Configuration;->orientation:I

    .line 183
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

    .line 185
    :goto_0
    invoke-virtual {v3, v4, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v2, "locked"

    .line 187
    invoke-virtual {v3, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 189
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v2

    invoke-static {v2}, Lcom/tkay/expressad/foundation/h/k;->e(Landroid/content/Context;)I

    move-result v2

    int-to-float v2, v2

    .line 190
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v4

    invoke-virtual {v4}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v4

    invoke-static {v4}, Lcom/tkay/expressad/foundation/h/k;->f(Landroid/content/Context;)I

    move-result v4

    int-to-float v4, v4

    .line 192
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v7

    invoke-virtual {v7}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v7

    invoke-static {v7}, Lcom/tkay/expressad/foundation/h/k;->g(Landroid/content/Context;)Ljava/util/HashMap;

    move-result-object v7

    const-string v8, "width"

    .line 193
    invoke-virtual {v7, v8}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v8

    check-cast v8, Ljava/lang/Integer;

    invoke-virtual {v8}, Ljava/lang/Integer;->intValue()I

    move-result v8

    const-string v9, "height"

    .line 194
    invoke-virtual {v7, v9}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v7

    check-cast v7, Ljava/lang/Integer;

    invoke-virtual {v7}, Ljava/lang/Integer;->intValue()I

    move-result v7

    .line 196
    new-instance v9, Ljava/util/HashMap;

    invoke-direct {v9}, Ljava/util/HashMap;-><init>()V

    const-string v10, "placementType"

    const-string v11, "Interstitial"

    .line 197
    invoke-virtual {v9, v10, v11}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v10, "state"

    const-string v11, "expanded"

    .line 198
    invoke-virtual {v9, v10, v11}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v10, "viewable"

    .line 199
    invoke-virtual {v9, v10, v1}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v1, "currentAppOrientation"

    .line 200
    invoke-virtual {v9, v1, v3}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    new-array v1, v5, [I

    .line 203
    iget-object v3, v0, Lcom/tkay/expressad/splash/js/SplashExpandDialog;->e:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    invoke-virtual {v3, v1}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->getLocationInWindow([I)V

    .line 205
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;->getInstance()Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;

    move-result-object v10

    iget-object v11, v0, Lcom/tkay/expressad/splash/js/SplashExpandDialog;->e:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    const/4 v3, 0x0

    aget v5, v1, v3

    int-to-float v12, v5

    aget v5, v1, v6

    int-to-float v13, v5

    iget-object v5, v0, Lcom/tkay/expressad/splash/js/SplashExpandDialog;->e:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    .line 206
    invoke-virtual {v5}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->getWidth()I

    move-result v5

    int-to-float v14, v5

    iget-object v5, v0, Lcom/tkay/expressad/splash/js/SplashExpandDialog;->e:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    invoke-virtual {v5}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->getHeight()I

    move-result v5

    int-to-float v15, v5

    .line 205
    invoke-virtual/range {v10 .. v15}, Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;->fireSetDefaultPosition(Landroid/webkit/WebView;FFFF)V

    .line 207
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;->getInstance()Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;

    move-result-object v16

    iget-object v5, v0, Lcom/tkay/expressad/splash/js/SplashExpandDialog;->e:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    aget v3, v1, v3

    int-to-float v3, v3

    aget v1, v1, v6

    int-to-float v1, v1

    iget-object v6, v0, Lcom/tkay/expressad/splash/js/SplashExpandDialog;->e:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    .line 208
    invoke-virtual {v6}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->getWidth()I

    move-result v6

    int-to-float v6, v6

    iget-object v10, v0, Lcom/tkay/expressad/splash/js/SplashExpandDialog;->e:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    invoke-virtual {v10}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->getHeight()I

    move-result v10

    int-to-float v10, v10

    move-object/from16 v17, v5

    move/from16 v18, v3

    move/from16 v19, v1

    move/from16 v20, v6

    move/from16 v21, v10

    .line 207
    invoke-virtual/range {v16 .. v21}, Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;->fireSetCurrentPosition(Landroid/webkit/WebView;FFFF)V

    .line 209
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;->getInstance()Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;

    move-result-object v1

    iget-object v3, v0, Lcom/tkay/expressad/splash/js/SplashExpandDialog;->e:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    invoke-virtual {v1, v3, v2, v4}, Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;->fireSetScreenSize(Landroid/webkit/WebView;FF)V

    .line 210
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;->getInstance()Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;

    move-result-object v1

    iget-object v2, v0, Lcom/tkay/expressad/splash/js/SplashExpandDialog;->e:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    int-to-float v3, v8

    int-to-float v4, v7

    invoke-virtual {v1, v2, v3, v4}, Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;->fireSetMaxSize(Landroid/webkit/WebView;FF)V

    .line 211
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;->getInstance()Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;

    move-result-object v1

    iget-object v2, v0, Lcom/tkay/expressad/splash/js/SplashExpandDialog;->e:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    invoke-virtual {v1, v2, v9}, Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;->fireChangeEventForPropertys(Landroid/webkit/WebView;Ljava/util/Map;)V

    .line 212
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;->getInstance()Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;

    move-result-object v1

    iget-object v2, v0, Lcom/tkay/expressad/splash/js/SplashExpandDialog;->e:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    invoke-virtual {v1, v2}, Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;->fireReadyEvent(Landroid/webkit/WebView;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    return-void
.end method

.method static synthetic c(Lcom/tkay/expressad/splash/js/SplashExpandDialog;)Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;
    .locals 0

    .line 46
    iget-object p0, p0, Lcom/tkay/expressad/splash/js/SplashExpandDialog;->e:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    return-object p0
.end method

.method static synthetic d(Lcom/tkay/expressad/splash/js/SplashExpandDialog;)Landroid/widget/FrameLayout;
    .locals 0

    .line 46
    iget-object p0, p0, Lcom/tkay/expressad/splash/js/SplashExpandDialog;->d:Landroid/widget/FrameLayout;

    return-object p0
.end method

.method static synthetic e(Lcom/tkay/expressad/splash/js/SplashExpandDialog;)Ljava/util/List;
    .locals 0

    .line 46
    iget-object p0, p0, Lcom/tkay/expressad/splash/js/SplashExpandDialog;->h:Ljava/util/List;

    return-object p0
.end method

.method static synthetic f(Lcom/tkay/expressad/splash/js/SplashExpandDialog;)Landroid/widget/TextView;
    .locals 0

    .line 46
    iget-object p0, p0, Lcom/tkay/expressad/splash/js/SplashExpandDialog;->f:Landroid/widget/TextView;

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

    .line 74
    invoke-super {p0, p1}, Landroid/app/Dialog;->onCreate(Landroid/os/Bundle;)V

    const/4 p1, 0x1

    .line 75
    invoke-virtual {p0, p1}, Lcom/tkay/expressad/splash/js/SplashExpandDialog;->requestWindowFeature(I)Z

    const/4 v0, 0x0

    .line 77
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/splash/js/SplashExpandDialog;->setCanceledOnTouchOutside(Z)V

    .line 78
    invoke-virtual {p0, p1}, Lcom/tkay/expressad/splash/js/SplashExpandDialog;->setCancelable(Z)V

    .line 1084
    new-instance p1, Landroid/widget/FrameLayout;

    invoke-virtual {p0}, Lcom/tkay/expressad/splash/js/SplashExpandDialog;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-direct {p1, v1}, Landroid/widget/FrameLayout;-><init>(Landroid/content/Context;)V

    iput-object p1, p0, Lcom/tkay/expressad/splash/js/SplashExpandDialog;->d:Landroid/widget/FrameLayout;

    .line 1085
    new-instance v1, Landroid/widget/FrameLayout$LayoutParams;

    const/4 v2, -0x1

    invoke-direct {v1, v2, v2}, Landroid/widget/FrameLayout$LayoutParams;-><init>(II)V

    invoke-virtual {p1, v1}, Landroid/widget/FrameLayout;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 1088
    new-instance p1, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    invoke-virtual {p0}, Lcom/tkay/expressad/splash/js/SplashExpandDialog;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-virtual {v1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v1

    invoke-direct {p1, v1}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;-><init>(Landroid/content/Context;)V

    iput-object p1, p0, Lcom/tkay/expressad/splash/js/SplashExpandDialog;->e:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    .line 1089
    new-instance v1, Landroid/widget/FrameLayout$LayoutParams;

    invoke-direct {v1, v2, v2}, Landroid/widget/FrameLayout$LayoutParams;-><init>(II)V

    invoke-virtual {p1, v1}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 1091
    iget-object p1, p0, Lcom/tkay/expressad/splash/js/SplashExpandDialog;->d:Landroid/widget/FrameLayout;

    iget-object v1, p0, Lcom/tkay/expressad/splash/js/SplashExpandDialog;->e:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    invoke-virtual {p1, v1}, Landroid/widget/FrameLayout;->addView(Landroid/view/View;)V

    .line 1093
    new-instance p1, Landroid/widget/TextView;

    invoke-virtual {p0}, Lcom/tkay/expressad/splash/js/SplashExpandDialog;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-direct {p1, v1}, Landroid/widget/TextView;-><init>(Landroid/content/Context;)V

    iput-object p1, p0, Lcom/tkay/expressad/splash/js/SplashExpandDialog;->f:Landroid/widget/TextView;

    .line 1094
    invoke-virtual {p1, v0}, Landroid/widget/TextView;->setBackgroundColor(I)V

    .line 1095
    new-instance p1, Landroid/widget/FrameLayout$LayoutParams;

    const/16 v1, 0x60

    invoke-direct {p1, v1, v1}, Landroid/widget/FrameLayout$LayoutParams;-><init>(II)V

    const v1, 0x800035

    .line 1096
    iput v1, p1, Landroid/widget/FrameLayout$LayoutParams;->gravity:I

    const/16 v1, 0x1e

    .line 1097
    invoke-virtual {p1, v1, v1, v1, v1}, Landroid/widget/FrameLayout$LayoutParams;->setMargins(IIII)V

    .line 1098
    iget-object v1, p0, Lcom/tkay/expressad/splash/js/SplashExpandDialog;->f:Landroid/widget/TextView;

    invoke-virtual {v1, p1}, Landroid/widget/TextView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 1099
    iget-object p1, p0, Lcom/tkay/expressad/splash/js/SplashExpandDialog;->f:Landroid/widget/TextView;

    iget-boolean v1, p0, Lcom/tkay/expressad/splash/js/SplashExpandDialog;->c:Z

    if-eqz v1, :cond_0

    const/4 v1, 0x4

    goto :goto_0

    :cond_0
    move v1, v0

    :goto_0
    invoke-virtual {p1, v1}, Landroid/widget/TextView;->setVisibility(I)V

    .line 1100
    iget-object p1, p0, Lcom/tkay/expressad/splash/js/SplashExpandDialog;->f:Landroid/widget/TextView;

    new-instance v1, Lcom/tkay/expressad/splash/js/SplashExpandDialog$1;

    invoke-direct {v1, p0}, Lcom/tkay/expressad/splash/js/SplashExpandDialog$1;-><init>(Lcom/tkay/expressad/splash/js/SplashExpandDialog;)V

    invoke-virtual {p1, v1}, Landroid/widget/TextView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 1106
    iget-object p1, p0, Lcom/tkay/expressad/splash/js/SplashExpandDialog;->d:Landroid/widget/FrameLayout;

    iget-object v1, p0, Lcom/tkay/expressad/splash/js/SplashExpandDialog;->f:Landroid/widget/TextView;

    invoke-virtual {p1, v1}, Landroid/widget/FrameLayout;->addView(Landroid/view/View;)V

    .line 1108
    iget-object p1, p0, Lcom/tkay/expressad/splash/js/SplashExpandDialog;->d:Landroid/widget/FrameLayout;

    invoke-virtual {p0, p1}, Lcom/tkay/expressad/splash/js/SplashExpandDialog;->setContentView(Landroid/view/View;)V

    .line 1110
    invoke-virtual {p0}, Lcom/tkay/expressad/splash/js/SplashExpandDialog;->getWindow()Landroid/view/Window;

    move-result-object p1

    if-eqz p1, :cond_2

    .line 1111
    invoke-virtual {p0}, Lcom/tkay/expressad/splash/js/SplashExpandDialog;->getWindow()Landroid/view/Window;

    move-result-object p1

    new-instance v1, Landroid/graphics/drawable/ColorDrawable;

    invoke-direct {v1, v0}, Landroid/graphics/drawable/ColorDrawable;-><init>(I)V

    invoke-virtual {p1, v1}, Landroid/view/Window;->setBackgroundDrawable(Landroid/graphics/drawable/Drawable;)V

    .line 1112
    invoke-virtual {p0}, Lcom/tkay/expressad/splash/js/SplashExpandDialog;->getWindow()Landroid/view/Window;

    move-result-object p1

    invoke-virtual {p1}, Landroid/view/Window;->getDecorView()Landroid/view/View;

    move-result-object p1

    invoke-virtual {p1, v0, v0, v0, v0}, Landroid/view/View;->setPadding(IIII)V

    .line 1113
    invoke-virtual {p0}, Lcom/tkay/expressad/splash/js/SplashExpandDialog;->getWindow()Landroid/view/Window;

    move-result-object p1

    invoke-virtual {p1}, Landroid/view/Window;->getAttributes()Landroid/view/WindowManager$LayoutParams;

    move-result-object p1

    .line 1114
    iput v2, p1, Landroid/view/WindowManager$LayoutParams;->width:I

    .line 1115
    iput v2, p1, Landroid/view/WindowManager$LayoutParams;->height:I

    .line 1116
    invoke-virtual {p0}, Lcom/tkay/expressad/splash/js/SplashExpandDialog;->getWindow()Landroid/view/Window;

    move-result-object v0

    invoke-virtual {v0, p1}, Landroid/view/Window;->setAttributes(Landroid/view/WindowManager$LayoutParams;)V

    .line 1118
    sget p1, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v0, 0x10

    if-lt p1, v0, :cond_2

    const/16 p1, 0x207

    .line 1124
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x13

    if-lt v0, v1, :cond_1

    const/16 p1, 0x1207

    .line 1127
    :cond_1
    invoke-virtual {p0}, Lcom/tkay/expressad/splash/js/SplashExpandDialog;->getWindow()Landroid/view/Window;

    move-result-object v0

    invoke-virtual {v0}, Landroid/view/Window;->getDecorView()Landroid/view/View;

    move-result-object v0

    invoke-virtual {v0, p1}, Landroid/view/View;->setSystemUiVisibility(I)V

    .line 1131
    :cond_2
    iget-object p1, p0, Lcom/tkay/expressad/splash/js/SplashExpandDialog;->e:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    new-instance v0, Lcom/tkay/expressad/splash/js/SplashExpandDialog$2;

    invoke-direct {v0, p0}, Lcom/tkay/expressad/splash/js/SplashExpandDialog$2;-><init>(Lcom/tkay/expressad/splash/js/SplashExpandDialog;)V

    invoke-virtual {p1, v0}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->setWebViewListener(Lcom/tkay/expressad/atsignalcommon/windvane/e;)V

    .line 1153
    iget-object p1, p0, Lcom/tkay/expressad/splash/js/SplashExpandDialog;->e:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    iget-object v0, p0, Lcom/tkay/expressad/splash/js/SplashExpandDialog;->j:Lcom/tkay/expressad/atsignalcommon/mraid/IMraidJSBridge;

    invoke-virtual {p1, v0}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->setObject(Ljava/lang/Object;)V

    .line 1154
    iget-object p1, p0, Lcom/tkay/expressad/splash/js/SplashExpandDialog;->e:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    iget-object v0, p0, Lcom/tkay/expressad/splash/js/SplashExpandDialog;->b:Ljava/lang/String;

    invoke-virtual {p1, v0}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->loadUrl(Ljava/lang/String;)V

    .line 1156
    new-instance p1, Lcom/tkay/expressad/splash/js/SplashExpandDialog$3;

    invoke-direct {p1, p0}, Lcom/tkay/expressad/splash/js/SplashExpandDialog$3;-><init>(Lcom/tkay/expressad/splash/js/SplashExpandDialog;)V

    invoke-virtual {p0, p1}, Lcom/tkay/expressad/splash/js/SplashExpandDialog;->setOnDismissListener(Landroid/content/DialogInterface$OnDismissListener;)V

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

    .line 174
    iput-object p1, p0, Lcom/tkay/expressad/splash/js/SplashExpandDialog;->g:Ljava/lang/String;

    .line 175
    iput-object p2, p0, Lcom/tkay/expressad/splash/js/SplashExpandDialog;->h:Ljava/util/List;

    return-void
.end method
