.class public Lcom/tkay/expressad/splash/view/TYSplashView;
.super Landroid/widget/RelativeLayout;


# static fields
.field protected static final a:Ljava/lang/String; = "webviewshow"

.field protected static final b:Ljava/lang/String; = "updateCountdown"

.field private static c:Ljava/lang/String; = "TYSplashView"


# instance fields
.field private d:I

.field private e:Lcom/tkay/expressad/splash/view/TYSplashWebview;

.field private f:Landroid/view/ViewGroup;

.field private g:Landroid/view/View;

.field private h:Landroid/view/View;

.field private i:I

.field private j:Z

.field private k:Z

.field private l:Landroid/view/ViewGroup;

.field private m:Z

.field private n:Landroid/view/View;

.field private o:Z

.field private p:Z

.field private q:Landroid/widget/RelativeLayout$LayoutParams;

.field private r:Lcom/tkay/expressad/splash/js/SplashJSBridgeImpl;

.field private s:Z


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;)V
    .locals 1

    const/4 v0, 0x0

    .line 124
    invoke-direct {p0, p1, v0}, Lcom/tkay/expressad/splash/view/TYSplashView;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 1

    const/4 v0, 0x0

    .line 128
    invoke-direct {p0, p1, p2, v0}, Lcom/tkay/expressad/splash/view/TYSplashView;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V
    .locals 0

    .line 132
    invoke-direct {p0, p1, p2, p3}, Landroid/widget/RelativeLayout;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V

    const/4 p1, 0x0

    .line 56
    iput-boolean p1, p0, Lcom/tkay/expressad/splash/view/TYSplashView;->s:Z

    .line 133
    invoke-direct {p0}, Lcom/tkay/expressad/splash/view/TYSplashView;->b()V

    return-void
.end method

.method static synthetic a(Lcom/tkay/expressad/splash/view/TYSplashView;)Lcom/tkay/expressad/splash/view/TYSplashWebview;
    .locals 0

    .line 30
    iget-object p0, p0, Lcom/tkay/expressad/splash/view/TYSplashView;->e:Lcom/tkay/expressad/splash/view/TYSplashWebview;

    return-object p0
.end method

.method static synthetic a()Ljava/lang/String;
    .locals 1

    .line 30
    sget-object v0, Lcom/tkay/expressad/splash/view/TYSplashView;->c:Ljava/lang/String;

    return-object v0
.end method

.method private b()V
    .locals 2

    const/4 v0, 0x0

    .line 151
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/splash/view/TYSplashView;->setBackgroundColor(I)V

    .line 152
    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashView;->getResources()Landroid/content/res/Resources;

    move-result-object v1

    invoke-virtual {v1}, Landroid/content/res/Resources;->getConfiguration()Landroid/content/res/Configuration;

    move-result-object v1

    iget v1, v1, Landroid/content/res/Configuration;->orientation:I

    iput v1, p0, Lcom/tkay/expressad/splash/view/TYSplashView;->d:I

    .line 153
    iput-boolean v0, p0, Lcom/tkay/expressad/splash/view/TYSplashView;->s:Z

    return-void
.end method

.method private c()V
    .locals 5

    .line 163
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashView;->h:Landroid/view/View;

    const/16 v1, 0xb

    const/4 v2, -0x1

    if-nez v0, :cond_3

    .line 164
    iget-boolean v0, p0, Lcom/tkay/expressad/splash/view/TYSplashView;->o:Z

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashView;->n:Landroid/view/View;

    if-eqz v0, :cond_1

    .line 165
    invoke-virtual {v0}, Landroid/view/View;->getParent()Landroid/view/ViewParent;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 166
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashView;->n:Landroid/view/View;

    invoke-static {v0}, Lcom/tkay/core/common/l/u;->a(Landroid/view/View;)V

    .line 168
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashView;->n:Landroid/view/View;

    new-instance v3, Landroid/view/ViewGroup$LayoutParams;

    invoke-direct {v3, v2, v2}, Landroid/view/ViewGroup$LayoutParams;-><init>(II)V

    invoke-virtual {p0, v0, v3}, Lcom/tkay/expressad/splash/view/TYSplashView;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    goto/16 :goto_2

    .line 170
    :cond_1
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashView;->e:Lcom/tkay/expressad/splash/view/TYSplashWebview;

    if-eqz v0, :cond_2

    invoke-virtual {v0}, Lcom/tkay/expressad/splash/view/TYSplashWebview;->getParent()Landroid/view/ViewParent;

    move-result-object v0

    if-nez v0, :cond_2

    .line 171
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashView;->e:Lcom/tkay/expressad/splash/view/TYSplashWebview;

    new-instance v3, Landroid/view/ViewGroup$LayoutParams;

    invoke-direct {v3, v2, v2}, Landroid/view/ViewGroup$LayoutParams;-><init>(II)V

    invoke-virtual {p0, v0, v3}, Lcom/tkay/expressad/splash/view/TYSplashView;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    .line 173
    :cond_2
    invoke-direct {p0}, Lcom/tkay/expressad/splash/view/TYSplashView;->d()V

    goto/16 :goto_2

    .line 176
    :cond_3
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashView;->f:Landroid/view/ViewGroup;

    if-nez v0, :cond_4

    .line 177
    new-instance v0, Landroid/widget/RelativeLayout;

    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashView;->getContext()Landroid/content/Context;

    move-result-object v3

    invoke-direct {v0, v3}, Landroid/widget/RelativeLayout;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashView;->f:Landroid/view/ViewGroup;

    const v3, 0x7ffffc17

    .line 178
    invoke-virtual {v0, v3}, Landroid/view/ViewGroup;->setId(I)V

    .line 181
    :cond_4
    iget v0, p0, Lcom/tkay/expressad/splash/view/TYSplashView;->d:I

    const/4 v3, 0x2

    if-ne v0, v3, :cond_9

    .line 182
    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashView;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/expressad/foundation/h/t;->f(Landroid/content/Context;)I

    move-result v0

    iput v0, p0, Lcom/tkay/expressad/splash/view/TYSplashView;->i:I

    .line 184
    new-instance v0, Landroid/widget/RelativeLayout$LayoutParams;

    invoke-direct {v0, v2, v2}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    const/4 v3, 0x0

    .line 185
    iget-object v4, p0, Lcom/tkay/expressad/splash/view/TYSplashView;->f:Landroid/view/ViewGroup;

    invoke-virtual {v4}, Landroid/view/ViewGroup;->getId()I

    move-result v4

    invoke-virtual {v0, v3, v4}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(II)V

    .line 187
    iget-boolean v3, p0, Lcom/tkay/expressad/splash/view/TYSplashView;->o:Z

    if-eqz v3, :cond_6

    iget-object v3, p0, Lcom/tkay/expressad/splash/view/TYSplashView;->n:Landroid/view/View;

    if-eqz v3, :cond_6

    .line 188
    invoke-virtual {v3}, Landroid/view/View;->getParent()Landroid/view/ViewParent;

    move-result-object v3

    if-eqz v3, :cond_5

    .line 189
    iget-object v3, p0, Lcom/tkay/expressad/splash/view/TYSplashView;->n:Landroid/view/View;

    invoke-static {v3}, Lcom/tkay/core/common/l/u;->a(Landroid/view/View;)V

    .line 191
    :cond_5
    iget-object v3, p0, Lcom/tkay/expressad/splash/view/TYSplashView;->n:Landroid/view/View;

    invoke-virtual {p0, v3, v0}, Lcom/tkay/expressad/splash/view/TYSplashView;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    goto :goto_0

    .line 193
    :cond_6
    iget-object v3, p0, Lcom/tkay/expressad/splash/view/TYSplashView;->e:Lcom/tkay/expressad/splash/view/TYSplashWebview;

    if-eqz v3, :cond_7

    invoke-virtual {v3}, Lcom/tkay/expressad/splash/view/TYSplashWebview;->getParent()Landroid/view/ViewParent;

    move-result-object v3

    if-nez v3, :cond_7

    .line 194
    iget-object v3, p0, Lcom/tkay/expressad/splash/view/TYSplashView;->e:Lcom/tkay/expressad/splash/view/TYSplashWebview;

    invoke-virtual {p0, v3, v0}, Lcom/tkay/expressad/splash/view/TYSplashView;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    .line 196
    :cond_7
    invoke-direct {p0}, Lcom/tkay/expressad/splash/view/TYSplashView;->d()V

    .line 198
    :goto_0
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashView;->f:Landroid/view/ViewGroup;

    if-eqz v0, :cond_e

    invoke-virtual {v0}, Landroid/view/ViewGroup;->getParent()Landroid/view/ViewParent;

    move-result-object v0

    if-nez v0, :cond_e

    .line 199
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashView;->q:Landroid/widget/RelativeLayout$LayoutParams;

    iget v0, v0, Landroid/widget/RelativeLayout$LayoutParams;->width:I

    .line 200
    iget v3, p0, Lcom/tkay/expressad/splash/view/TYSplashView;->i:I

    div-int/lit8 v4, v3, 0x4

    if-le v0, v4, :cond_8

    .line 201
    div-int/lit8 v0, v3, 0x4

    .line 204
    :cond_8
    iget-object v3, p0, Lcom/tkay/expressad/splash/view/TYSplashView;->f:Landroid/view/ViewGroup;

    iget-object v4, p0, Lcom/tkay/expressad/splash/view/TYSplashView;->h:Landroid/view/View;

    invoke-virtual {v3, v4, v0, v2}, Landroid/view/ViewGroup;->addView(Landroid/view/View;II)V

    .line 207
    new-instance v3, Landroid/widget/RelativeLayout$LayoutParams;

    invoke-direct {v3, v0, v2}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    .line 208
    invoke-virtual {v3, v1}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    const/16 v0, 0xd

    .line 209
    invoke-virtual {v3, v0}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    .line 210
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashView;->f:Landroid/view/ViewGroup;

    invoke-virtual {p0, v0, v3}, Lcom/tkay/expressad/splash/view/TYSplashView;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    goto :goto_2

    .line 214
    :cond_9
    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashView;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/expressad/foundation/h/t;->e(Landroid/content/Context;)I

    move-result v0

    iput v0, p0, Lcom/tkay/expressad/splash/view/TYSplashView;->i:I

    .line 215
    new-instance v0, Landroid/widget/RelativeLayout$LayoutParams;

    invoke-direct {v0, v2, v2}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    .line 216
    iget-object v4, p0, Lcom/tkay/expressad/splash/view/TYSplashView;->f:Landroid/view/ViewGroup;

    invoke-virtual {v4}, Landroid/view/ViewGroup;->getId()I

    move-result v4

    invoke-virtual {v0, v3, v4}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(II)V

    .line 218
    iget-boolean v3, p0, Lcom/tkay/expressad/splash/view/TYSplashView;->o:Z

    if-eqz v3, :cond_b

    iget-object v3, p0, Lcom/tkay/expressad/splash/view/TYSplashView;->n:Landroid/view/View;

    if-eqz v3, :cond_b

    .line 219
    invoke-virtual {v3}, Landroid/view/View;->getParent()Landroid/view/ViewParent;

    move-result-object v3

    if-eqz v3, :cond_a

    .line 220
    iget-object v3, p0, Lcom/tkay/expressad/splash/view/TYSplashView;->n:Landroid/view/View;

    invoke-static {v3}, Lcom/tkay/core/common/l/u;->a(Landroid/view/View;)V

    .line 222
    :cond_a
    iget-object v3, p0, Lcom/tkay/expressad/splash/view/TYSplashView;->n:Landroid/view/View;

    invoke-virtual {p0, v3, v0}, Lcom/tkay/expressad/splash/view/TYSplashView;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    goto :goto_1

    .line 224
    :cond_b
    iget-object v3, p0, Lcom/tkay/expressad/splash/view/TYSplashView;->e:Lcom/tkay/expressad/splash/view/TYSplashWebview;

    if-eqz v3, :cond_c

    invoke-virtual {v3}, Lcom/tkay/expressad/splash/view/TYSplashWebview;->getParent()Landroid/view/ViewParent;

    move-result-object v3

    if-nez v3, :cond_c

    .line 225
    iget-object v3, p0, Lcom/tkay/expressad/splash/view/TYSplashView;->e:Lcom/tkay/expressad/splash/view/TYSplashWebview;

    invoke-virtual {p0, v3, v0}, Lcom/tkay/expressad/splash/view/TYSplashView;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    .line 227
    :cond_c
    invoke-direct {p0}, Lcom/tkay/expressad/splash/view/TYSplashView;->d()V

    .line 230
    :goto_1
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashView;->f:Landroid/view/ViewGroup;

    if-eqz v0, :cond_e

    invoke-virtual {v0}, Landroid/view/ViewGroup;->getParent()Landroid/view/ViewParent;

    move-result-object v0

    if-nez v0, :cond_e

    .line 232
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashView;->q:Landroid/widget/RelativeLayout$LayoutParams;

    iget v0, v0, Landroid/widget/RelativeLayout$LayoutParams;->height:I

    .line 233
    iget v3, p0, Lcom/tkay/expressad/splash/view/TYSplashView;->i:I

    div-int/lit8 v4, v3, 0x4

    if-le v0, v4, :cond_d

    .line 234
    div-int/lit8 v0, v3, 0x4

    .line 236
    :cond_d
    iget-object v3, p0, Lcom/tkay/expressad/splash/view/TYSplashView;->f:Landroid/view/ViewGroup;

    iget-object v4, p0, Lcom/tkay/expressad/splash/view/TYSplashView;->h:Landroid/view/View;

    invoke-virtual {v3, v4, v2, v0}, Landroid/view/ViewGroup;->addView(Landroid/view/View;II)V

    .line 238
    new-instance v3, Landroid/widget/RelativeLayout$LayoutParams;

    invoke-direct {v3, v2, v0}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    const/16 v0, 0xc

    .line 239
    invoke-virtual {v3, v0}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    .line 240
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashView;->f:Landroid/view/ViewGroup;

    invoke-virtual {p0, v0, v3}, Lcom/tkay/expressad/splash/view/TYSplashView;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    .line 245
    :cond_e
    :goto_2
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashView;->g:Landroid/view/View;

    if-eqz v0, :cond_10

    .line 246
    invoke-virtual {v0}, Landroid/view/View;->getParent()Landroid/view/ViewParent;

    move-result-object v0

    if-nez v0, :cond_f

    .line 247
    new-instance v0, Landroid/widget/RelativeLayout$LayoutParams;

    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashView;->getContext()Landroid/content/Context;

    move-result-object v2

    const/high16 v3, 0x42c80000    # 100.0f

    invoke-static {v2, v3}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v2

    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashView;->getContext()Landroid/content/Context;

    move-result-object v3

    const/high16 v4, 0x41f00000    # 30.0f

    invoke-static {v3, v4}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v3

    invoke-direct {v0, v2, v3}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    const/16 v2, 0xa

    .line 248
    invoke-virtual {v0, v2}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    .line 249
    invoke-virtual {v0, v1}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    .line 250
    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashView;->getContext()Landroid/content/Context;

    move-result-object v1

    const/high16 v2, 0x41200000    # 10.0f

    invoke-static {v1, v2}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v1

    iput v1, v0, Landroid/widget/RelativeLayout$LayoutParams;->rightMargin:I

    .line 251
    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashView;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1, v2}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v1

    iput v1, v0, Landroid/widget/RelativeLayout$LayoutParams;->topMargin:I

    .line 252
    iget-object v1, p0, Lcom/tkay/expressad/splash/view/TYSplashView;->g:Landroid/view/View;

    invoke-virtual {p0, v1, v0}, Lcom/tkay/expressad/splash/view/TYSplashView;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    return-void

    .line 254
    :cond_f
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashView;->g:Landroid/view/View;

    invoke-virtual {p0, v0}, Lcom/tkay/expressad/splash/view/TYSplashView;->bringChildToFront(Landroid/view/View;)V

    :cond_10
    return-void
.end method

.method private d()V
    .locals 2

    .line 376
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashView;->e:Lcom/tkay/expressad/splash/view/TYSplashWebview;

    if-eqz v0, :cond_0

    .line 377
    iget-object v1, p0, Lcom/tkay/expressad/splash/view/TYSplashView;->r:Lcom/tkay/expressad/splash/js/SplashJSBridgeImpl;

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/splash/view/TYSplashWebview;->setObject(Ljava/lang/Object;)V

    .line 378
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashView;->e:Lcom/tkay/expressad/splash/view/TYSplashWebview;

    new-instance v1, Lcom/tkay/expressad/splash/view/TYSplashView$1;

    invoke-direct {v1, p0}, Lcom/tkay/expressad/splash/view/TYSplashView$1;-><init>(Lcom/tkay/expressad/splash/view/TYSplashView;)V

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/splash/view/TYSplashWebview;->post(Ljava/lang/Runnable;)Z

    :cond_0
    return-void
.end method

.method public static transInfoForMraid(Landroid/webkit/WebView;IIII)V
    .locals 16

    move-object/from16 v6, p0

    const-string v0, "true"

    .line 424
    :try_start_0
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v1

    invoke-virtual {v1}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v1

    .line 425
    invoke-virtual {v1}, Landroid/content/res/Resources;->getConfiguration()Landroid/content/res/Configuration;

    move-result-object v1

    iget v1, v1, Landroid/content/res/Configuration;->orientation:I

    .line 426
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

    .line 428
    :goto_0
    invoke-virtual {v2, v3, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "locked"

    .line 430
    invoke-virtual {v2, v1, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 432
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Lcom/tkay/expressad/foundation/h/k;->e(Landroid/content/Context;)I

    move-result v1

    int-to-float v7, v1

    .line 433
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Lcom/tkay/expressad/foundation/h/k;->f(Landroid/content/Context;)I

    move-result v1

    int-to-float v8, v1

    .line 435
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Lcom/tkay/expressad/foundation/h/k;->g(Landroid/content/Context;)Ljava/util/HashMap;

    move-result-object v1

    const-string v3, "width"

    .line 436
    invoke-virtual {v1, v3}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/Integer;

    invoke-virtual {v3}, Ljava/lang/Integer;->intValue()I

    move-result v9

    const-string v3, "height"

    .line 437
    invoke-virtual {v1, v3}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/Integer;

    invoke-virtual {v1}, Ljava/lang/Integer;->intValue()I

    move-result v10

    .line 439
    new-instance v11, Ljava/util/HashMap;

    invoke-direct {v11}, Ljava/util/HashMap;-><init>()V

    const-string v1, "placementType"

    const-string v3, "Interstitial"

    .line 440
    invoke-virtual {v11, v1, v3}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v1, "state"

    const-string v3, "default"

    .line 441
    invoke-virtual {v11, v1, v3}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v1, "viewable"

    .line 442
    invoke-virtual {v11, v1, v0}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v0, "currentAppOrientation"

    .line 443
    invoke-virtual {v11, v0, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 445
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

    .line 446
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;->getInstance()Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;

    move-result-object v0

    move-object/from16 v1, p0

    move v2, v12

    move v3, v13

    move v4, v14

    move v5, v15

    invoke-virtual/range {v0 .. v5}, Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;->fireSetCurrentPosition(Landroid/webkit/WebView;FFFF)V

    .line 447
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;->getInstance()Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;

    move-result-object v0

    invoke-virtual {v0, v6, v7, v8}, Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;->fireSetScreenSize(Landroid/webkit/WebView;FF)V

    .line 448
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;->getInstance()Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;

    move-result-object v0

    int-to-float v1, v9

    int-to-float v2, v10

    invoke-virtual {v0, v6, v1, v2}, Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;->fireSetMaxSize(Landroid/webkit/WebView;FF)V

    .line 449
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;->getInstance()Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;

    move-result-object v0

    invoke-virtual {v0, v6, v11}, Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;->fireChangeEventForPropertys(Landroid/webkit/WebView;Ljava/util/Map;)V

    .line 450
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

    .line 311
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashView;->g:Landroid/view/View;

    if-eqz v0, :cond_1

    const/4 v1, 0x2

    if-ne p1, v1, :cond_0

    const/16 p1, 0x8

    .line 313
    invoke-virtual {v0, p1}, Landroid/view/View;->setVisibility(I)V

    return-void

    :cond_0
    const/4 p1, 0x0

    .line 315
    invoke-virtual {v0, p1}, Landroid/view/View;->setVisibility(I)V

    :cond_1
    return-void
.end method

.method public checkSkipViewLocation()V
    .locals 6

    .line 267
    iget-boolean v0, p0, Lcom/tkay/expressad/splash/view/TYSplashView;->s:Z

    if-eqz v0, :cond_0

    return-void

    .line 271
    :cond_0
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashView;->g:Landroid/view/View;

    if-eqz v0, :cond_2

    .line 272
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashView;->g:Landroid/view/View;

    invoke-virtual {v0}, Landroid/view/View;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v0

    .line 273
    instance-of v1, v0, Landroid/widget/RelativeLayout$LayoutParams;

    if-eqz v1, :cond_2

    .line 274
    move-object v1, v0

    check-cast v1, Landroid/widget/RelativeLayout$LayoutParams;

    iget v1, v1, Landroid/widget/RelativeLayout$LayoutParams;->topMargin:I

    .line 275
    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashView;->getContext()Landroid/content/Context;

    move-result-object v2

    invoke-static {v2}, Lcom/tkay/core/common/l/h;->b(Landroid/content/Context;)I

    move-result v2

    add-int/2addr v2, v1

    const/4 v3, 0x1

    if-lez v1, :cond_1

    .line 278
    iput-boolean v3, p0, Lcom/tkay/expressad/splash/view/TYSplashView;->s:Z

    :cond_1
    const/4 v4, 0x2

    new-array v4, v4, [I

    .line 281
    iget-object v5, p0, Lcom/tkay/expressad/splash/view/TYSplashView;->g:Landroid/view/View;

    invoke-virtual {v5, v4}, Landroid/view/View;->getLocationOnScreen([I)V

    .line 282
    aget v5, v4, v3

    if-ge v5, v2, :cond_2

    .line 284
    aget v3, v4, v3

    sub-int/2addr v2, v3

    .line 285
    move-object v3, v0

    check-cast v3, Landroid/widget/RelativeLayout$LayoutParams;

    add-int/2addr v1, v2

    iput v1, v3, Landroid/widget/RelativeLayout$LayoutParams;->topMargin:I

    .line 286
    iget-object v1, p0, Lcom/tkay/expressad/splash/view/TYSplashView;->g:Landroid/view/View;

    invoke-virtual {v1, v0}, Landroid/view/View;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_2
    return-void

    :catchall_0
    move-exception v0

    .line 292
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    return-void
.end method

.method public clearResState()V
    .locals 1

    const/4 v0, 0x0

    .line 349
    iput-boolean v0, p0, Lcom/tkay/expressad/splash/view/TYSplashView;->m:Z

    iput-boolean v0, p0, Lcom/tkay/expressad/splash/view/TYSplashView;->k:Z

    iput-boolean v0, p0, Lcom/tkay/expressad/splash/view/TYSplashView;->j:Z

    return-void
.end method

.method public destroy()V
    .locals 3

    .line 481
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashView;->e:Lcom/tkay/expressad/splash/view/TYSplashWebview;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/tkay/expressad/splash/view/TYSplashWebview;->isDestroyed()Z

    move-result v0

    if-nez v0, :cond_0

    .line 482
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashView;->e:Lcom/tkay/expressad/splash/view/TYSplashWebview;

    invoke-virtual {v0}, Lcom/tkay/expressad/splash/view/TYSplashWebview;->release()V

    .line 483
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashView;->e:Lcom/tkay/expressad/splash/view/TYSplashWebview;

    const-string v1, "onSystemDestory"

    const-string v2, ""

    invoke-static {v0, v1, v2}, Lcom/tkay/expressad/splash/js/SplashJsUtils;->sendEventToH5(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public getCloseView()Landroid/view/View;
    .locals 1

    .line 321
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashView;->g:Landroid/view/View;

    return-object v0
.end method

.method public getDevContainer()Landroid/view/ViewGroup;
    .locals 1

    .line 85
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashView;->l:Landroid/view/ViewGroup;

    return-object v0
.end method

.method public getIconVg()Landroid/view/View;
    .locals 1

    .line 332
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashView;->h:Landroid/view/View;

    return-object v0
.end method

.method public getSplashJSBridgeImpl()Lcom/tkay/expressad/splash/js/SplashJSBridgeImpl;
    .locals 1

    .line 113
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashView;->r:Lcom/tkay/expressad/splash/js/SplashJSBridgeImpl;

    return-object v0
.end method

.method public getSplashWebview()Lcom/tkay/expressad/splash/view/TYSplashWebview;
    .locals 1

    .line 297
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashView;->e:Lcom/tkay/expressad/splash/view/TYSplashWebview;

    return-object v0
.end method

.method public isAttach()Z
    .locals 1

    .line 101
    iget-boolean v0, p0, Lcom/tkay/expressad/splash/view/TYSplashView;->p:Z

    return v0
.end method

.method public isDynamicView()Z
    .locals 1

    .line 93
    iget-boolean v0, p0, Lcom/tkay/expressad/splash/view/TYSplashView;->o:Z

    return v0
.end method

.method public isH5Ready()Z
    .locals 1

    .line 73
    iget-boolean v0, p0, Lcom/tkay/expressad/splash/view/TYSplashView;->j:Z

    return v0
.end method

.method public isImageReady()Z
    .locals 1

    .line 81
    iget-boolean v0, p0, Lcom/tkay/expressad/splash/view/TYSplashView;->m:Z

    return v0
.end method

.method public isVideoReady()Z
    .locals 1

    .line 77
    iget-boolean v0, p0, Lcom/tkay/expressad/splash/view/TYSplashView;->k:Z

    return v0
.end method

.method protected onAttachedToWindow()V
    .locals 1

    .line 145
    invoke-super {p0}, Landroid/widget/RelativeLayout;->onAttachedToWindow()V

    const/4 v0, 0x1

    .line 147
    iput-boolean v0, p0, Lcom/tkay/expressad/splash/view/TYSplashView;->p:Z

    return-void
.end method

.method protected onConfigurationChanged(Landroid/content/res/Configuration;)V
    .locals 0

    .line 138
    invoke-super {p0, p1}, Landroid/widget/RelativeLayout;->onConfigurationChanged(Landroid/content/res/Configuration;)V

    .line 140
    invoke-direct {p0}, Lcom/tkay/expressad/splash/view/TYSplashView;->b()V

    return-void
.end method

.method protected onLayout(ZIIII)V
    .locals 0

    .line 261
    invoke-super/range {p0 .. p5}, Landroid/widget/RelativeLayout;->onLayout(ZIIII)V

    .line 262
    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashView;->checkSkipViewLocation()V

    return-void
.end method

.method public onPause()V
    .locals 2

    .line 463
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashView;->n:Landroid/view/View;

    if-eqz v0, :cond_0

    instance-of v1, v0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;

    if-eqz v1, :cond_0

    .line 464
    check-cast v0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->setIsPause(Z)V

    :cond_0
    return-void
.end method

.method public onResume()V
    .locals 2

    .line 457
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashView;->n:Landroid/view/View;

    if-eqz v0, :cond_0

    instance-of v1, v0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;

    if-eqz v1, :cond_0

    .line 458
    check-cast v0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->setIsPause(Z)V

    :cond_0
    return-void
.end method

.method public resetLoadState()V
    .locals 1

    const/4 v0, 0x0

    .line 105
    iput-boolean v0, p0, Lcom/tkay/expressad/splash/view/TYSplashView;->k:Z

    iput-boolean v0, p0, Lcom/tkay/expressad/splash/view/TYSplashView;->j:Z

    return-void
.end method

.method public setCloseView(Landroid/view/View;)V
    .locals 1

    .line 325
    iput-object p1, p0, Lcom/tkay/expressad/splash/view/TYSplashView;->g:Landroid/view/View;

    if-eqz p1, :cond_0

    const-string v0, "closeButton"

    .line 327
    invoke-virtual {p1, v0}, Landroid/view/View;->setContentDescription(Ljava/lang/CharSequence;)V

    :cond_0
    return-void
.end method

.method public setDevContainer(Landroid/view/ViewGroup;)V
    .locals 0

    .line 89
    iput-object p1, p0, Lcom/tkay/expressad/splash/view/TYSplashView;->l:Landroid/view/ViewGroup;

    return-void
.end method

.method public setDynamicView(Z)V
    .locals 0

    .line 97
    iput-boolean p1, p0, Lcom/tkay/expressad/splash/view/TYSplashView;->o:Z

    return-void
.end method

.method public setH5Ready(Z)V
    .locals 0

    .line 61
    iput-boolean p1, p0, Lcom/tkay/expressad/splash/view/TYSplashView;->j:Z

    return-void
.end method

.method public setIconVg(Landroid/view/View;Landroid/widget/RelativeLayout$LayoutParams;)V
    .locals 0

    .line 336
    iput-object p1, p0, Lcom/tkay/expressad/splash/view/TYSplashView;->h:Landroid/view/View;

    .line 337
    iput-object p2, p0, Lcom/tkay/expressad/splash/view/TYSplashView;->q:Landroid/widget/RelativeLayout$LayoutParams;

    return-void
.end method

.method public setImageReady(Z)V
    .locals 0

    .line 69
    iput-boolean p1, p0, Lcom/tkay/expressad/splash/view/TYSplashView;->m:Z

    return-void
.end method

.method public setNotchPadding(IIII)V
    .locals 2

    .line 469
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashView;->n:Landroid/view/View;

    if-eqz v0, :cond_0

    instance-of v1, v0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;

    if-eqz v1, :cond_0

    .line 470
    check-cast v0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;

    invoke-virtual {v0, p1, p2, p3, p4}, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->setNotchPadding(IIII)V

    :cond_0
    return-void
.end method

.method public setSplashJSBridgeImpl(Lcom/tkay/expressad/splash/js/SplashJSBridgeImpl;)V
    .locals 1

    .line 117
    iput-object p1, p0, Lcom/tkay/expressad/splash/view/TYSplashView;->r:Lcom/tkay/expressad/splash/js/SplashJSBridgeImpl;

    .line 118
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashView;->e:Lcom/tkay/expressad/splash/view/TYSplashWebview;

    if-eqz v0, :cond_0

    .line 119
    invoke-virtual {v0, p1}, Lcom/tkay/expressad/splash/view/TYSplashWebview;->setObject(Ljava/lang/Object;)V

    :cond_0
    return-void
.end method

.method public setSplashNativeView(Landroid/view/View;)V
    .locals 0

    if-eqz p1, :cond_0

    .line 158
    iput-object p1, p0, Lcom/tkay/expressad/splash/view/TYSplashView;->n:Landroid/view/View;

    :cond_0
    return-void
.end method

.method public setSplashWebview(Lcom/tkay/expressad/splash/view/TYSplashWebview;)V
    .locals 1

    .line 301
    iput-object p1, p0, Lcom/tkay/expressad/splash/view/TYSplashView;->e:Lcom/tkay/expressad/splash/view/TYSplashWebview;

    .line 302
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashView;->r:Lcom/tkay/expressad/splash/js/SplashJSBridgeImpl;

    if-eqz v0, :cond_0

    .line 303
    invoke-virtual {p1, v0}, Lcom/tkay/expressad/splash/view/TYSplashWebview;->setObject(Ljava/lang/Object;)V

    :cond_0
    return-void
.end method

.method public setVideoReady(Z)V
    .locals 0

    .line 65
    iput-boolean p1, p0, Lcom/tkay/expressad/splash/view/TYSplashView;->k:Z

    return-void
.end method

.method public show()V
    .locals 5

    .line 341
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashView;->r:Lcom/tkay/expressad/splash/js/SplashJSBridgeImpl;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashView;->l:Landroid/view/ViewGroup;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Landroid/view/ViewGroup;->getContext()Landroid/content/Context;

    move-result-object v0

    instance-of v0, v0, Landroid/app/Activity;

    if-eqz v0, :cond_0

    .line 342
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashView;->r:Lcom/tkay/expressad/splash/js/SplashJSBridgeImpl;

    iget-object v1, p0, Lcom/tkay/expressad/splash/view/TYSplashView;->l:Landroid/view/ViewGroup;

    invoke-virtual {v1}, Landroid/view/ViewGroup;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/splash/js/SplashJSBridgeImpl;->updateContext(Landroid/content/Context;)V

    .line 1163
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashView;->h:Landroid/view/View;

    const/16 v1, 0xb

    const/4 v2, -0x1

    if-nez v0, :cond_4

    .line 1164
    iget-boolean v0, p0, Lcom/tkay/expressad/splash/view/TYSplashView;->o:Z

    if-eqz v0, :cond_2

    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashView;->n:Landroid/view/View;

    if-eqz v0, :cond_2

    .line 1165
    invoke-virtual {v0}, Landroid/view/View;->getParent()Landroid/view/ViewParent;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 1166
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashView;->n:Landroid/view/View;

    invoke-static {v0}, Lcom/tkay/core/common/l/u;->a(Landroid/view/View;)V

    .line 1168
    :cond_1
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashView;->n:Landroid/view/View;

    new-instance v3, Landroid/view/ViewGroup$LayoutParams;

    invoke-direct {v3, v2, v2}, Landroid/view/ViewGroup$LayoutParams;-><init>(II)V

    invoke-virtual {p0, v0, v3}, Lcom/tkay/expressad/splash/view/TYSplashView;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    goto/16 :goto_2

    .line 1170
    :cond_2
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashView;->e:Lcom/tkay/expressad/splash/view/TYSplashWebview;

    if-eqz v0, :cond_3

    invoke-virtual {v0}, Lcom/tkay/expressad/splash/view/TYSplashWebview;->getParent()Landroid/view/ViewParent;

    move-result-object v0

    if-nez v0, :cond_3

    .line 1171
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashView;->e:Lcom/tkay/expressad/splash/view/TYSplashWebview;

    new-instance v3, Landroid/view/ViewGroup$LayoutParams;

    invoke-direct {v3, v2, v2}, Landroid/view/ViewGroup$LayoutParams;-><init>(II)V

    invoke-virtual {p0, v0, v3}, Lcom/tkay/expressad/splash/view/TYSplashView;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    .line 1173
    :cond_3
    invoke-direct {p0}, Lcom/tkay/expressad/splash/view/TYSplashView;->d()V

    goto/16 :goto_2

    .line 1176
    :cond_4
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashView;->f:Landroid/view/ViewGroup;

    if-nez v0, :cond_5

    .line 1177
    new-instance v0, Landroid/widget/RelativeLayout;

    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashView;->getContext()Landroid/content/Context;

    move-result-object v3

    invoke-direct {v0, v3}, Landroid/widget/RelativeLayout;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashView;->f:Landroid/view/ViewGroup;

    const v3, 0x7ffffc17

    .line 1178
    invoke-virtual {v0, v3}, Landroid/view/ViewGroup;->setId(I)V

    .line 1181
    :cond_5
    iget v0, p0, Lcom/tkay/expressad/splash/view/TYSplashView;->d:I

    const/4 v3, 0x2

    if-ne v0, v3, :cond_a

    .line 1182
    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashView;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/expressad/foundation/h/t;->f(Landroid/content/Context;)I

    move-result v0

    iput v0, p0, Lcom/tkay/expressad/splash/view/TYSplashView;->i:I

    .line 1184
    new-instance v0, Landroid/widget/RelativeLayout$LayoutParams;

    invoke-direct {v0, v2, v2}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    const/4 v3, 0x0

    .line 1185
    iget-object v4, p0, Lcom/tkay/expressad/splash/view/TYSplashView;->f:Landroid/view/ViewGroup;

    invoke-virtual {v4}, Landroid/view/ViewGroup;->getId()I

    move-result v4

    invoke-virtual {v0, v3, v4}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(II)V

    .line 1187
    iget-boolean v3, p0, Lcom/tkay/expressad/splash/view/TYSplashView;->o:Z

    if-eqz v3, :cond_7

    iget-object v3, p0, Lcom/tkay/expressad/splash/view/TYSplashView;->n:Landroid/view/View;

    if-eqz v3, :cond_7

    .line 1188
    invoke-virtual {v3}, Landroid/view/View;->getParent()Landroid/view/ViewParent;

    move-result-object v3

    if-eqz v3, :cond_6

    .line 1189
    iget-object v3, p0, Lcom/tkay/expressad/splash/view/TYSplashView;->n:Landroid/view/View;

    invoke-static {v3}, Lcom/tkay/core/common/l/u;->a(Landroid/view/View;)V

    .line 1191
    :cond_6
    iget-object v3, p0, Lcom/tkay/expressad/splash/view/TYSplashView;->n:Landroid/view/View;

    invoke-virtual {p0, v3, v0}, Lcom/tkay/expressad/splash/view/TYSplashView;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    goto :goto_0

    .line 1193
    :cond_7
    iget-object v3, p0, Lcom/tkay/expressad/splash/view/TYSplashView;->e:Lcom/tkay/expressad/splash/view/TYSplashWebview;

    if-eqz v3, :cond_8

    invoke-virtual {v3}, Lcom/tkay/expressad/splash/view/TYSplashWebview;->getParent()Landroid/view/ViewParent;

    move-result-object v3

    if-nez v3, :cond_8

    .line 1194
    iget-object v3, p0, Lcom/tkay/expressad/splash/view/TYSplashView;->e:Lcom/tkay/expressad/splash/view/TYSplashWebview;

    invoke-virtual {p0, v3, v0}, Lcom/tkay/expressad/splash/view/TYSplashView;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    .line 1196
    :cond_8
    invoke-direct {p0}, Lcom/tkay/expressad/splash/view/TYSplashView;->d()V

    .line 1198
    :goto_0
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashView;->f:Landroid/view/ViewGroup;

    if-eqz v0, :cond_f

    invoke-virtual {v0}, Landroid/view/ViewGroup;->getParent()Landroid/view/ViewParent;

    move-result-object v0

    if-nez v0, :cond_f

    .line 1199
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashView;->q:Landroid/widget/RelativeLayout$LayoutParams;

    iget v0, v0, Landroid/widget/RelativeLayout$LayoutParams;->width:I

    .line 1200
    iget v3, p0, Lcom/tkay/expressad/splash/view/TYSplashView;->i:I

    div-int/lit8 v4, v3, 0x4

    if-le v0, v4, :cond_9

    .line 1201
    div-int/lit8 v0, v3, 0x4

    .line 1204
    :cond_9
    iget-object v3, p0, Lcom/tkay/expressad/splash/view/TYSplashView;->f:Landroid/view/ViewGroup;

    iget-object v4, p0, Lcom/tkay/expressad/splash/view/TYSplashView;->h:Landroid/view/View;

    invoke-virtual {v3, v4, v0, v2}, Landroid/view/ViewGroup;->addView(Landroid/view/View;II)V

    .line 1207
    new-instance v3, Landroid/widget/RelativeLayout$LayoutParams;

    invoke-direct {v3, v0, v2}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    .line 1208
    invoke-virtual {v3, v1}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    const/16 v0, 0xd

    .line 1209
    invoke-virtual {v3, v0}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    .line 1210
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashView;->f:Landroid/view/ViewGroup;

    invoke-virtual {p0, v0, v3}, Lcom/tkay/expressad/splash/view/TYSplashView;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    goto :goto_2

    .line 1214
    :cond_a
    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashView;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/expressad/foundation/h/t;->e(Landroid/content/Context;)I

    move-result v0

    iput v0, p0, Lcom/tkay/expressad/splash/view/TYSplashView;->i:I

    .line 1215
    new-instance v0, Landroid/widget/RelativeLayout$LayoutParams;

    invoke-direct {v0, v2, v2}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    .line 1216
    iget-object v4, p0, Lcom/tkay/expressad/splash/view/TYSplashView;->f:Landroid/view/ViewGroup;

    invoke-virtual {v4}, Landroid/view/ViewGroup;->getId()I

    move-result v4

    invoke-virtual {v0, v3, v4}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(II)V

    .line 1218
    iget-boolean v3, p0, Lcom/tkay/expressad/splash/view/TYSplashView;->o:Z

    if-eqz v3, :cond_c

    iget-object v3, p0, Lcom/tkay/expressad/splash/view/TYSplashView;->n:Landroid/view/View;

    if-eqz v3, :cond_c

    .line 1219
    invoke-virtual {v3}, Landroid/view/View;->getParent()Landroid/view/ViewParent;

    move-result-object v3

    if-eqz v3, :cond_b

    .line 1220
    iget-object v3, p0, Lcom/tkay/expressad/splash/view/TYSplashView;->n:Landroid/view/View;

    invoke-static {v3}, Lcom/tkay/core/common/l/u;->a(Landroid/view/View;)V

    .line 1222
    :cond_b
    iget-object v3, p0, Lcom/tkay/expressad/splash/view/TYSplashView;->n:Landroid/view/View;

    invoke-virtual {p0, v3, v0}, Lcom/tkay/expressad/splash/view/TYSplashView;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    goto :goto_1

    .line 1224
    :cond_c
    iget-object v3, p0, Lcom/tkay/expressad/splash/view/TYSplashView;->e:Lcom/tkay/expressad/splash/view/TYSplashWebview;

    if-eqz v3, :cond_d

    invoke-virtual {v3}, Lcom/tkay/expressad/splash/view/TYSplashWebview;->getParent()Landroid/view/ViewParent;

    move-result-object v3

    if-nez v3, :cond_d

    .line 1225
    iget-object v3, p0, Lcom/tkay/expressad/splash/view/TYSplashView;->e:Lcom/tkay/expressad/splash/view/TYSplashWebview;

    invoke-virtual {p0, v3, v0}, Lcom/tkay/expressad/splash/view/TYSplashView;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    .line 1227
    :cond_d
    invoke-direct {p0}, Lcom/tkay/expressad/splash/view/TYSplashView;->d()V

    .line 1230
    :goto_1
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashView;->f:Landroid/view/ViewGroup;

    if-eqz v0, :cond_f

    invoke-virtual {v0}, Landroid/view/ViewGroup;->getParent()Landroid/view/ViewParent;

    move-result-object v0

    if-nez v0, :cond_f

    .line 1232
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashView;->q:Landroid/widget/RelativeLayout$LayoutParams;

    iget v0, v0, Landroid/widget/RelativeLayout$LayoutParams;->height:I

    .line 1233
    iget v3, p0, Lcom/tkay/expressad/splash/view/TYSplashView;->i:I

    div-int/lit8 v4, v3, 0x4

    if-le v0, v4, :cond_e

    .line 1234
    div-int/lit8 v0, v3, 0x4

    .line 1236
    :cond_e
    iget-object v3, p0, Lcom/tkay/expressad/splash/view/TYSplashView;->f:Landroid/view/ViewGroup;

    iget-object v4, p0, Lcom/tkay/expressad/splash/view/TYSplashView;->h:Landroid/view/View;

    invoke-virtual {v3, v4, v2, v0}, Landroid/view/ViewGroup;->addView(Landroid/view/View;II)V

    .line 1238
    new-instance v3, Landroid/widget/RelativeLayout$LayoutParams;

    invoke-direct {v3, v2, v0}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    const/16 v0, 0xc

    .line 1239
    invoke-virtual {v3, v0}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    .line 1240
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashView;->f:Landroid/view/ViewGroup;

    invoke-virtual {p0, v0, v3}, Lcom/tkay/expressad/splash/view/TYSplashView;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    .line 1245
    :cond_f
    :goto_2
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashView;->g:Landroid/view/View;

    if-eqz v0, :cond_11

    .line 1246
    invoke-virtual {v0}, Landroid/view/View;->getParent()Landroid/view/ViewParent;

    move-result-object v0

    if-nez v0, :cond_10

    .line 1247
    new-instance v0, Landroid/widget/RelativeLayout$LayoutParams;

    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashView;->getContext()Landroid/content/Context;

    move-result-object v2

    const/high16 v3, 0x42c80000    # 100.0f

    invoke-static {v2, v3}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v2

    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashView;->getContext()Landroid/content/Context;

    move-result-object v3

    const/high16 v4, 0x41f00000    # 30.0f

    invoke-static {v3, v4}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v3

    invoke-direct {v0, v2, v3}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    const/16 v2, 0xa

    .line 1248
    invoke-virtual {v0, v2}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    .line 1249
    invoke-virtual {v0, v1}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    .line 1250
    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashView;->getContext()Landroid/content/Context;

    move-result-object v1

    const/high16 v2, 0x41200000    # 10.0f

    invoke-static {v1, v2}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v1

    iput v1, v0, Landroid/widget/RelativeLayout$LayoutParams;->rightMargin:I

    .line 1251
    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashView;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1, v2}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v1

    iput v1, v0, Landroid/widget/RelativeLayout$LayoutParams;->topMargin:I

    .line 1252
    iget-object v1, p0, Lcom/tkay/expressad/splash/view/TYSplashView;->g:Landroid/view/View;

    invoke-virtual {p0, v1, v0}, Lcom/tkay/expressad/splash/view/TYSplashView;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    goto :goto_3

    .line 1254
    :cond_10
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashView;->g:Landroid/view/View;

    invoke-virtual {p0, v0}, Lcom/tkay/expressad/splash/view/TYSplashView;->bringChildToFront(Landroid/view/View;)V

    .line 345
    :cond_11
    :goto_3
    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashView;->clearResState()V

    return-void
.end method

.method public updateCountdown(I)V
    .locals 3

    .line 353
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashView;->e:Lcom/tkay/expressad/splash/view/TYSplashWebview;

    if-eqz v0, :cond_0

    .line 355
    :try_start_0
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    const-string v1, "countdown"

    .line 356
    invoke-virtual {v0, v1, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 357
    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/String;->getBytes()[B

    move-result-object v0

    const/4 v1, 0x2

    invoke-static {v0, v1}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object v0

    .line 358
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a()Lcom/tkay/expressad/atsignalcommon/windvane/j;

    iget-object v1, p0, Lcom/tkay/expressad/splash/view/TYSplashView;->e:Lcom/tkay/expressad/splash/view/TYSplashWebview;

    const-string v2, "updateCountdown"

    invoke-static {v1, v2, v0}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 360
    invoke-virtual {v0}, Lorg/json/JSONException;->printStackTrace()V

    .line 363
    :goto_0
    iget-boolean v0, p0, Lcom/tkay/expressad/splash/view/TYSplashView;->o:Z

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashView;->n:Landroid/view/View;

    if-eqz v0, :cond_0

    .line 364
    instance-of v1, v0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;

    if-eqz v1, :cond_0

    .line 365
    check-cast v0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;

    invoke-virtual {v0, p1}, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->updateCountDown(I)V

    :cond_0
    return-void
.end method
