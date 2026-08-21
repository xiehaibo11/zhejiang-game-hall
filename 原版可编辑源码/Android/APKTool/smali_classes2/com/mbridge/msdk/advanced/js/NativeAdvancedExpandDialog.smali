.class public Lcom/mbridge/msdk/advanced/js/NativeAdvancedExpandDialog;
.super Landroid/app/Dialog;
.source "NativeAdvancedExpandDialog.java"


# instance fields
.field private final a:Ljava/lang/String;

.field private b:Ljava/lang/String;

.field private c:Z

.field private d:Landroid/widget/FrameLayout;

.field private e:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

.field private f:Landroid/widget/TextView;

.field private g:Ljava/lang/String;

.field private h:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/mbridge/msdk/foundation/entity/CampaignEx;",
            ">;"
        }
    .end annotation
.end field

.field private i:Lcom/mbridge/msdk/advanced/c/a;

.field private j:Lcom/mbridge/msdk/mbjscommon/mraid/b;


# direct methods
.method public constructor <init>(Landroid/content/Context;Landroid/os/Bundle;Lcom/mbridge/msdk/advanced/c/a;)V
    .locals 0

    .line 62
    invoke-direct {p0, p1}, Landroid/app/Dialog;-><init>(Landroid/content/Context;)V

    const-string p1, "NativeAdvancedExpandDialog"

    .line 47
    iput-object p1, p0, Lcom/mbridge/msdk/advanced/js/NativeAdvancedExpandDialog;->a:Ljava/lang/String;

    .line 221
    new-instance p1, Lcom/mbridge/msdk/advanced/js/NativeAdvancedExpandDialog$4;

    invoke-direct {p1, p0}, Lcom/mbridge/msdk/advanced/js/NativeAdvancedExpandDialog$4;-><init>(Lcom/mbridge/msdk/advanced/js/NativeAdvancedExpandDialog;)V

    iput-object p1, p0, Lcom/mbridge/msdk/advanced/js/NativeAdvancedExpandDialog;->j:Lcom/mbridge/msdk/mbjscommon/mraid/b;

    if-eqz p2, :cond_0

    const-string p1, "url"

    .line 65
    invoke-virtual {p2, p1}, Landroid/os/Bundle;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/mbridge/msdk/advanced/js/NativeAdvancedExpandDialog;->b:Ljava/lang/String;

    const-string p1, "shouldUseCustomClose"

    .line 66
    invoke-virtual {p2, p1}, Landroid/os/Bundle;->getBoolean(Ljava/lang/String;)Z

    move-result p1

    iput-boolean p1, p0, Lcom/mbridge/msdk/advanced/js/NativeAdvancedExpandDialog;->c:Z

    .line 69
    :cond_0
    iput-object p3, p0, Lcom/mbridge/msdk/advanced/js/NativeAdvancedExpandDialog;->i:Lcom/mbridge/msdk/advanced/c/a;

    return-void
.end method

.method static synthetic a(Lcom/mbridge/msdk/advanced/js/NativeAdvancedExpandDialog;Lcom/mbridge/msdk/advanced/c/a;)Lcom/mbridge/msdk/advanced/c/a;
    .locals 0

    .line 46
    iput-object p1, p0, Lcom/mbridge/msdk/advanced/js/NativeAdvancedExpandDialog;->i:Lcom/mbridge/msdk/advanced/c/a;

    return-object p1
.end method

.method static synthetic a(Lcom/mbridge/msdk/advanced/js/NativeAdvancedExpandDialog;Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;)Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;
    .locals 0

    .line 46
    iput-object p1, p0, Lcom/mbridge/msdk/advanced/js/NativeAdvancedExpandDialog;->e:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    return-object p1
.end method

.method static synthetic a(Lcom/mbridge/msdk/advanced/js/NativeAdvancedExpandDialog;)V
    .locals 22

    move-object/from16 v0, p0

    const-string v1, "true"

    .line 1180
    :try_start_0
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v2

    invoke-virtual {v2}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v2

    .line 1181
    invoke-virtual {v2}, Landroid/content/res/Resources;->getConfiguration()Landroid/content/res/Configuration;

    move-result-object v2

    iget v2, v2, Landroid/content/res/Configuration;->orientation:I

    .line 1182
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

    .line 1184
    :goto_0
    invoke-virtual {v3, v4, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v2, "locked"

    .line 1186
    invoke-virtual {v3, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 1188
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v2

    invoke-static {v2}, Lcom/mbridge/msdk/foundation/tools/v;->x(Landroid/content/Context;)I

    move-result v2

    int-to-float v2, v2

    .line 1189
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v4

    invoke-virtual {v4}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v4

    invoke-static {v4}, Lcom/mbridge/msdk/foundation/tools/v;->y(Landroid/content/Context;)I

    move-result v4

    int-to-float v4, v4

    .line 1191
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v7

    invoke-virtual {v7}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v7

    invoke-static {v7}, Lcom/mbridge/msdk/foundation/tools/v;->z(Landroid/content/Context;)Ljava/util/HashMap;

    move-result-object v7

    const-string v8, "width"

    .line 1192
    invoke-virtual {v7, v8}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v8

    check-cast v8, Ljava/lang/Integer;

    invoke-virtual {v8}, Ljava/lang/Integer;->intValue()I

    move-result v8

    const-string v9, "height"

    .line 1193
    invoke-virtual {v7, v9}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v7

    check-cast v7, Ljava/lang/Integer;

    invoke-virtual {v7}, Ljava/lang/Integer;->intValue()I

    move-result v7

    .line 1195
    new-instance v9, Ljava/util/HashMap;

    invoke-direct {v9}, Ljava/util/HashMap;-><init>()V

    const-string v10, "placementType"

    const-string v11, "inline"

    .line 1196
    invoke-virtual {v9, v10, v11}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v10, "state"

    const-string v11, "expanded"

    .line 1197
    invoke-virtual {v9, v10, v11}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v10, "viewable"

    .line 1198
    invoke-virtual {v9, v10, v1}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v1, "currentAppOrientation"

    .line 1199
    invoke-virtual {v9, v1, v3}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    new-array v1, v5, [I

    .line 1202
    iget-object v3, v0, Lcom/mbridge/msdk/advanced/js/NativeAdvancedExpandDialog;->e:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    invoke-virtual {v3, v1}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->getLocationInWindow([I)V

    .line 1204
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/mraid/a;->a()Lcom/mbridge/msdk/mbjscommon/mraid/a;

    move-result-object v10

    iget-object v11, v0, Lcom/mbridge/msdk/advanced/js/NativeAdvancedExpandDialog;->e:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    const/4 v3, 0x0

    aget v5, v1, v3

    int-to-float v12, v5

    aget v5, v1, v6

    int-to-float v13, v5

    iget-object v5, v0, Lcom/mbridge/msdk/advanced/js/NativeAdvancedExpandDialog;->e:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    .line 1205
    invoke-virtual {v5}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->getWidth()I

    move-result v5

    int-to-float v14, v5

    iget-object v5, v0, Lcom/mbridge/msdk/advanced/js/NativeAdvancedExpandDialog;->e:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    invoke-virtual {v5}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->getHeight()I

    move-result v5

    int-to-float v15, v5

    .line 1204
    invoke-virtual/range {v10 .. v15}, Lcom/mbridge/msdk/mbjscommon/mraid/a;->a(Landroid/webkit/WebView;FFFF)V

    .line 1206
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/mraid/a;->a()Lcom/mbridge/msdk/mbjscommon/mraid/a;

    move-result-object v16

    iget-object v5, v0, Lcom/mbridge/msdk/advanced/js/NativeAdvancedExpandDialog;->e:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    aget v3, v1, v3

    int-to-float v3, v3

    aget v1, v1, v6

    int-to-float v1, v1

    iget-object v6, v0, Lcom/mbridge/msdk/advanced/js/NativeAdvancedExpandDialog;->e:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    .line 1207
    invoke-virtual {v6}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->getWidth()I

    move-result v6

    int-to-float v6, v6

    iget-object v10, v0, Lcom/mbridge/msdk/advanced/js/NativeAdvancedExpandDialog;->e:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    invoke-virtual {v10}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->getHeight()I

    move-result v10

    int-to-float v10, v10

    move-object/from16 v17, v5

    move/from16 v18, v3

    move/from16 v19, v1

    move/from16 v20, v6

    move/from16 v21, v10

    .line 1206
    invoke-virtual/range {v16 .. v21}, Lcom/mbridge/msdk/mbjscommon/mraid/a;->b(Landroid/webkit/WebView;FFFF)V

    .line 1208
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/mraid/a;->a()Lcom/mbridge/msdk/mbjscommon/mraid/a;

    move-result-object v1

    iget-object v3, v0, Lcom/mbridge/msdk/advanced/js/NativeAdvancedExpandDialog;->e:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    invoke-virtual {v1, v3, v2, v4}, Lcom/mbridge/msdk/mbjscommon/mraid/a;->b(Landroid/webkit/WebView;FF)V

    .line 1209
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/mraid/a;->a()Lcom/mbridge/msdk/mbjscommon/mraid/a;

    move-result-object v1

    iget-object v2, v0, Lcom/mbridge/msdk/advanced/js/NativeAdvancedExpandDialog;->e:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    int-to-float v3, v8

    int-to-float v4, v7

    invoke-virtual {v1, v2, v3, v4}, Lcom/mbridge/msdk/mbjscommon/mraid/a;->c(Landroid/webkit/WebView;FF)V

    .line 1210
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/mraid/a;->a()Lcom/mbridge/msdk/mbjscommon/mraid/a;

    move-result-object v1

    iget-object v2, v0, Lcom/mbridge/msdk/advanced/js/NativeAdvancedExpandDialog;->e:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    invoke-virtual {v1, v2, v9}, Lcom/mbridge/msdk/mbjscommon/mraid/a;->a(Landroid/webkit/WebView;Ljava/util/Map;)V

    .line 1211
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/mraid/a;->a()Lcom/mbridge/msdk/mbjscommon/mraid/a;

    move-result-object v1

    iget-object v0, v0, Lcom/mbridge/msdk/advanced/js/NativeAdvancedExpandDialog;->e:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    invoke-virtual {v1, v0}, Lcom/mbridge/msdk/mbjscommon/mraid/a;->a(Landroid/webkit/WebView;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_1

    :catchall_0
    move-exception v0

    const-string v1, "NativeAdvancedExpandDialog"

    const-string v2, "notifyMraid"

    .line 1213
    invoke-static {v1, v2, v0}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :goto_1
    return-void
.end method

.method static synthetic b(Lcom/mbridge/msdk/advanced/js/NativeAdvancedExpandDialog;)Lcom/mbridge/msdk/advanced/c/a;
    .locals 0

    .line 46
    iget-object p0, p0, Lcom/mbridge/msdk/advanced/js/NativeAdvancedExpandDialog;->i:Lcom/mbridge/msdk/advanced/c/a;

    return-object p0
.end method

.method static synthetic c(Lcom/mbridge/msdk/advanced/js/NativeAdvancedExpandDialog;)Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;
    .locals 0

    .line 46
    iget-object p0, p0, Lcom/mbridge/msdk/advanced/js/NativeAdvancedExpandDialog;->e:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    return-object p0
.end method

.method static synthetic d(Lcom/mbridge/msdk/advanced/js/NativeAdvancedExpandDialog;)Landroid/widget/FrameLayout;
    .locals 0

    .line 46
    iget-object p0, p0, Lcom/mbridge/msdk/advanced/js/NativeAdvancedExpandDialog;->d:Landroid/widget/FrameLayout;

    return-object p0
.end method

.method static synthetic e(Lcom/mbridge/msdk/advanced/js/NativeAdvancedExpandDialog;)Ljava/util/List;
    .locals 0

    .line 46
    iget-object p0, p0, Lcom/mbridge/msdk/advanced/js/NativeAdvancedExpandDialog;->h:Ljava/util/List;

    return-object p0
.end method

.method static synthetic f(Lcom/mbridge/msdk/advanced/js/NativeAdvancedExpandDialog;)Landroid/widget/TextView;
    .locals 0

    .line 46
    iget-object p0, p0, Lcom/mbridge/msdk/advanced/js/NativeAdvancedExpandDialog;->f:Landroid/widget/TextView;

    return-object p0
.end method


# virtual methods
.method public dismiss()V
    .locals 0

    .line 219
    invoke-super {p0}, Landroid/app/Dialog;->dismiss()V

    return-void
.end method

.method protected onCreate(Landroid/os/Bundle;)V
    .locals 3

    .line 74
    invoke-super {p0, p1}, Landroid/app/Dialog;->onCreate(Landroid/os/Bundle;)V

    const/4 p1, 0x1

    .line 75
    invoke-virtual {p0, p1}, Lcom/mbridge/msdk/advanced/js/NativeAdvancedExpandDialog;->requestWindowFeature(I)Z

    const/4 v0, 0x0

    .line 77
    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/advanced/js/NativeAdvancedExpandDialog;->setCanceledOnTouchOutside(Z)V

    .line 78
    invoke-virtual {p0, p1}, Lcom/mbridge/msdk/advanced/js/NativeAdvancedExpandDialog;->setCancelable(Z)V

    .line 1084
    new-instance p1, Landroid/widget/FrameLayout;

    invoke-virtual {p0}, Lcom/mbridge/msdk/advanced/js/NativeAdvancedExpandDialog;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-direct {p1, v1}, Landroid/widget/FrameLayout;-><init>(Landroid/content/Context;)V

    iput-object p1, p0, Lcom/mbridge/msdk/advanced/js/NativeAdvancedExpandDialog;->d:Landroid/widget/FrameLayout;

    .line 1085
    new-instance v1, Landroid/widget/FrameLayout$LayoutParams;

    const/4 v2, -0x1

    invoke-direct {v1, v2, v2}, Landroid/widget/FrameLayout$LayoutParams;-><init>(II)V

    invoke-virtual {p1, v1}, Landroid/widget/FrameLayout;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 1088
    new-instance p1, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    invoke-virtual {p0}, Lcom/mbridge/msdk/advanced/js/NativeAdvancedExpandDialog;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-virtual {v1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v1

    invoke-direct {p1, v1}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;-><init>(Landroid/content/Context;)V

    iput-object p1, p0, Lcom/mbridge/msdk/advanced/js/NativeAdvancedExpandDialog;->e:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    .line 1089
    new-instance v1, Landroid/widget/FrameLayout$LayoutParams;

    invoke-direct {v1, v2, v2}, Landroid/widget/FrameLayout$LayoutParams;-><init>(II)V

    invoke-virtual {p1, v1}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 1091
    iget-object p1, p0, Lcom/mbridge/msdk/advanced/js/NativeAdvancedExpandDialog;->d:Landroid/widget/FrameLayout;

    iget-object v1, p0, Lcom/mbridge/msdk/advanced/js/NativeAdvancedExpandDialog;->e:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    invoke-virtual {p1, v1}, Landroid/widget/FrameLayout;->addView(Landroid/view/View;)V

    .line 1093
    new-instance p1, Landroid/widget/TextView;

    invoke-virtual {p0}, Lcom/mbridge/msdk/advanced/js/NativeAdvancedExpandDialog;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-direct {p1, v1}, Landroid/widget/TextView;-><init>(Landroid/content/Context;)V

    iput-object p1, p0, Lcom/mbridge/msdk/advanced/js/NativeAdvancedExpandDialog;->f:Landroid/widget/TextView;

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
    iget-object v1, p0, Lcom/mbridge/msdk/advanced/js/NativeAdvancedExpandDialog;->f:Landroid/widget/TextView;

    invoke-virtual {v1, p1}, Landroid/widget/TextView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 1099
    iget-object p1, p0, Lcom/mbridge/msdk/advanced/js/NativeAdvancedExpandDialog;->f:Landroid/widget/TextView;

    iget-boolean v1, p0, Lcom/mbridge/msdk/advanced/js/NativeAdvancedExpandDialog;->c:Z

    if-eqz v1, :cond_0

    const/4 v1, 0x4

    goto :goto_0

    :cond_0
    move v1, v0

    :goto_0
    invoke-virtual {p1, v1}, Landroid/widget/TextView;->setVisibility(I)V

    .line 1100
    iget-object p1, p0, Lcom/mbridge/msdk/advanced/js/NativeAdvancedExpandDialog;->f:Landroid/widget/TextView;

    new-instance v1, Lcom/mbridge/msdk/advanced/js/NativeAdvancedExpandDialog$1;

    invoke-direct {v1, p0}, Lcom/mbridge/msdk/advanced/js/NativeAdvancedExpandDialog$1;-><init>(Lcom/mbridge/msdk/advanced/js/NativeAdvancedExpandDialog;)V

    invoke-virtual {p1, v1}, Landroid/widget/TextView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 1106
    iget-object p1, p0, Lcom/mbridge/msdk/advanced/js/NativeAdvancedExpandDialog;->d:Landroid/widget/FrameLayout;

    iget-object v1, p0, Lcom/mbridge/msdk/advanced/js/NativeAdvancedExpandDialog;->f:Landroid/widget/TextView;

    invoke-virtual {p1, v1}, Landroid/widget/FrameLayout;->addView(Landroid/view/View;)V

    .line 1108
    iget-object p1, p0, Lcom/mbridge/msdk/advanced/js/NativeAdvancedExpandDialog;->d:Landroid/widget/FrameLayout;

    invoke-virtual {p0, p1}, Lcom/mbridge/msdk/advanced/js/NativeAdvancedExpandDialog;->setContentView(Landroid/view/View;)V

    .line 1110
    invoke-virtual {p0}, Lcom/mbridge/msdk/advanced/js/NativeAdvancedExpandDialog;->getWindow()Landroid/view/Window;

    move-result-object p1

    if-eqz p1, :cond_2

    .line 1111
    invoke-virtual {p0}, Lcom/mbridge/msdk/advanced/js/NativeAdvancedExpandDialog;->getWindow()Landroid/view/Window;

    move-result-object p1

    new-instance v1, Landroid/graphics/drawable/ColorDrawable;

    invoke-direct {v1, v0}, Landroid/graphics/drawable/ColorDrawable;-><init>(I)V

    invoke-virtual {p1, v1}, Landroid/view/Window;->setBackgroundDrawable(Landroid/graphics/drawable/Drawable;)V

    .line 1112
    invoke-virtual {p0}, Lcom/mbridge/msdk/advanced/js/NativeAdvancedExpandDialog;->getWindow()Landroid/view/Window;

    move-result-object p1

    invoke-virtual {p1}, Landroid/view/Window;->getDecorView()Landroid/view/View;

    move-result-object p1

    invoke-virtual {p1, v0, v0, v0, v0}, Landroid/view/View;->setPadding(IIII)V

    .line 1113
    invoke-virtual {p0}, Lcom/mbridge/msdk/advanced/js/NativeAdvancedExpandDialog;->getWindow()Landroid/view/Window;

    move-result-object p1

    invoke-virtual {p1}, Landroid/view/Window;->getAttributes()Landroid/view/WindowManager$LayoutParams;

    move-result-object p1

    .line 1114
    iput v2, p1, Landroid/view/WindowManager$LayoutParams;->width:I

    .line 1115
    iput v2, p1, Landroid/view/WindowManager$LayoutParams;->height:I

    .line 1116
    invoke-virtual {p0}, Lcom/mbridge/msdk/advanced/js/NativeAdvancedExpandDialog;->getWindow()Landroid/view/Window;

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
    invoke-virtual {p0}, Lcom/mbridge/msdk/advanced/js/NativeAdvancedExpandDialog;->getWindow()Landroid/view/Window;

    move-result-object v0

    invoke-virtual {v0}, Landroid/view/Window;->getDecorView()Landroid/view/View;

    move-result-object v0

    invoke-virtual {v0, p1}, Landroid/view/View;->setSystemUiVisibility(I)V

    .line 1131
    :cond_2
    iget-object p1, p0, Lcom/mbridge/msdk/advanced/js/NativeAdvancedExpandDialog;->e:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    new-instance v0, Lcom/mbridge/msdk/advanced/js/NativeAdvancedExpandDialog$2;

    invoke-direct {v0, p0}, Lcom/mbridge/msdk/advanced/js/NativeAdvancedExpandDialog$2;-><init>(Lcom/mbridge/msdk/advanced/js/NativeAdvancedExpandDialog;)V

    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->setWebViewListener(Lcom/mbridge/msdk/mbjscommon/windvane/d;)V

    .line 1152
    iget-object p1, p0, Lcom/mbridge/msdk/advanced/js/NativeAdvancedExpandDialog;->e:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    iget-object v0, p0, Lcom/mbridge/msdk/advanced/js/NativeAdvancedExpandDialog;->j:Lcom/mbridge/msdk/mbjscommon/mraid/b;

    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->setObject(Ljava/lang/Object;)V

    .line 1153
    iget-object p1, p0, Lcom/mbridge/msdk/advanced/js/NativeAdvancedExpandDialog;->e:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    iget-object v0, p0, Lcom/mbridge/msdk/advanced/js/NativeAdvancedExpandDialog;->b:Ljava/lang/String;

    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->loadUrl(Ljava/lang/String;)V

    .line 1155
    new-instance p1, Lcom/mbridge/msdk/advanced/js/NativeAdvancedExpandDialog$3;

    invoke-direct {p1, p0}, Lcom/mbridge/msdk/advanced/js/NativeAdvancedExpandDialog$3;-><init>(Lcom/mbridge/msdk/advanced/js/NativeAdvancedExpandDialog;)V

    invoke-virtual {p0, p1}, Lcom/mbridge/msdk/advanced/js/NativeAdvancedExpandDialog;->setOnDismissListener(Landroid/content/DialogInterface$OnDismissListener;)V

    return-void
.end method

.method public setCampaignList(Ljava/lang/String;Ljava/util/List;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Ljava/util/List<",
            "Lcom/mbridge/msdk/foundation/entity/CampaignEx;",
            ">;)V"
        }
    .end annotation

    .line 173
    iput-object p1, p0, Lcom/mbridge/msdk/advanced/js/NativeAdvancedExpandDialog;->g:Ljava/lang/String;

    .line 174
    iput-object p2, p0, Lcom/mbridge/msdk/advanced/js/NativeAdvancedExpandDialog;->h:Ljava/util/List;

    return-void
.end method
