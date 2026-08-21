.class public Lcom/cmic/gen/sdk/view/e;
.super Ljava/lang/Object;
.source "UmcActivityUtil.java"


# static fields
.field private static a:Ljava/util/ArrayList;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/ArrayList<",
            "Ljava/lang/ref/WeakReference<",
            "Landroid/app/Activity;",
            ">;>;"
        }
    .end annotation
.end field


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public static a(Landroid/content/Context;)I
    .locals 1

    const-string v0, "window"

    .line 340
    invoke-virtual {p0, v0}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Landroid/view/WindowManager;

    .line 341
    new-instance v0, Landroid/util/DisplayMetrics;

    invoke-direct {v0}, Landroid/util/DisplayMetrics;-><init>()V

    if-eqz p0, :cond_0

    .line 343
    invoke-interface {p0}, Landroid/view/WindowManager;->getDefaultDisplay()Landroid/view/Display;

    move-result-object p0

    invoke-virtual {p0, v0}, Landroid/view/Display;->getMetrics(Landroid/util/DisplayMetrics;)V

    .line 345
    :cond_0
    iget p0, v0, Landroid/util/DisplayMetrics;->widthPixels:I

    return p0
.end method

.method public static a(Landroid/content/Context;F)I
    .locals 1

    const/4 v0, 0x0

    cmpg-float v0, p1, v0

    if-gez v0, :cond_0

    float-to-int p0, p1

    return p0

    .line 309
    :cond_0
    :try_start_0
    invoke-virtual {p0}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object p0

    invoke-virtual {p0}, Landroid/content/res/Resources;->getDisplayMetrics()Landroid/util/DisplayMetrics;

    move-result-object p0

    iget p0, p0, Landroid/util/DisplayMetrics;->density:F
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    mul-float p1, p1, p0

    const/high16 p0, 0x3f000000    # 0.5f

    add-float/2addr p1, p0

    float-to-int p0, p1

    return p0

    :catch_0
    float-to-int p0, p1

    return p0
.end method

.method public static a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Lcom/cmic/gen/sdk/view/d;Ljava/util/ArrayList;Ljava/util/ArrayList;)Landroid/text/SpannableString;
    .locals 10
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/content/Context;",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "Lcom/cmic/gen/sdk/view/d;",
            "Ljava/util/ArrayList<",
            "Lcom/cmic/gen/sdk/view/d;",
            ">;",
            "Ljava/util/ArrayList<",
            "Ljava/lang/String;",
            ">;)",
            "Landroid/text/SpannableString;"
        }
    .end annotation

    const-string v0, "getClauseSpannableString"

    .line 79
    invoke-static {v0, p1}, Lcom/cmic/gen/sdk/e/c;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 81
    new-instance v0, Landroid/text/SpannableString;

    invoke-direct {v0, p1}, Landroid/text/SpannableString;-><init>(Ljava/lang/CharSequence;)V

    .line 92
    :try_start_0
    new-instance v1, Lcom/cmic/gen/sdk/view/e$1;

    invoke-direct {v1, p0, p3}, Lcom/cmic/gen/sdk/view/e$1;-><init>(Landroid/content/Context;Lcom/cmic/gen/sdk/view/d;)V

    .line 113
    invoke-virtual {p4}, Ljava/util/ArrayList;->size()I

    move-result p3

    const/4 v2, 0x1

    const/4 v3, 0x0

    if-lt p3, v2, :cond_0

    .line 114
    new-instance p3, Lcom/cmic/gen/sdk/view/e$2;

    invoke-direct {p3, p0, p4}, Lcom/cmic/gen/sdk/view/e$2;-><init>(Landroid/content/Context;Ljava/util/ArrayList;)V

    goto :goto_0

    :cond_0
    move-object p3, v3

    .line 135
    :goto_0
    invoke-virtual {p4}, Ljava/util/ArrayList;->size()I

    move-result v4

    const/4 v5, 0x2

    if-lt v4, v5, :cond_1

    .line 136
    new-instance v4, Lcom/cmic/gen/sdk/view/e$3;

    invoke-direct {v4, p0, p4}, Lcom/cmic/gen/sdk/view/e$3;-><init>(Landroid/content/Context;Ljava/util/ArrayList;)V

    goto :goto_1

    :cond_1
    move-object v4, v3

    .line 157
    :goto_1
    invoke-virtual {p4}, Ljava/util/ArrayList;->size()I

    move-result v6

    const/4 v7, 0x3

    if-lt v6, v7, :cond_2

    .line 158
    new-instance v6, Lcom/cmic/gen/sdk/view/e$4;

    invoke-direct {v6, p0, p4}, Lcom/cmic/gen/sdk/view/e$4;-><init>(Landroid/content/Context;Ljava/util/ArrayList;)V

    goto :goto_2

    :cond_2
    move-object v6, v3

    .line 179
    :goto_2
    invoke-virtual {p4}, Ljava/util/ArrayList;->size()I

    move-result v8

    const/4 v9, 0x4

    if-ne v8, v9, :cond_3

    .line 180
    new-instance v3, Lcom/cmic/gen/sdk/view/e$5;

    invoke-direct {v3, p0, p4}, Lcom/cmic/gen/sdk/view/e$5;-><init>(Landroid/content/Context;Ljava/util/ArrayList;)V

    .line 201
    :cond_3
    invoke-static {p0}, Lcom/cmic/gen/sdk/auth/GenAuthnHelper;->getInstance(Landroid/content/Context;)Lcom/cmic/gen/sdk/auth/GenAuthnHelper;

    move-result-object p0

    invoke-virtual {p0}, Lcom/cmic/gen/sdk/auth/GenAuthnHelper;->getAuthThemeConfig()Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;

    .line 202
    invoke-virtual {p1, p2}, Ljava/lang/String;->indexOf(Ljava/lang/String;)I

    move-result p0

    .line 203
    invoke-virtual {p2}, Ljava/lang/String;->length()I

    move-result p2

    add-int/2addr p2, p0

    const/16 v8, 0x22

    invoke-virtual {v0, v1, p0, p2, v8}, Landroid/text/SpannableString;->setSpan(Ljava/lang/Object;III)V

    .line 206
    invoke-virtual {p4}, Ljava/util/ArrayList;->size()I

    move-result p0

    const/4 p2, 0x0

    if-lt p0, v2, :cond_4

    .line 207
    invoke-virtual {p5, p2}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Ljava/lang/String;

    .line 208
    invoke-virtual {p1, p0}, Ljava/lang/String;->indexOf(Ljava/lang/String;)I

    move-result v1

    .line 209
    invoke-virtual {p0}, Ljava/lang/String;->length()I

    move-result p0

    add-int/2addr p0, v1

    invoke-virtual {v0, p3, v1, p0, v8}, Landroid/text/SpannableString;->setSpan(Ljava/lang/Object;III)V

    goto :goto_3

    :cond_4
    const/4 v1, 0x0

    .line 211
    :goto_3
    invoke-virtual {p4}, Ljava/util/ArrayList;->size()I

    move-result p0

    if-lt p0, v5, :cond_5

    .line 212
    invoke-virtual {p5, p2}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Ljava/lang/String;

    invoke-virtual {p0}, Ljava/lang/String;->length()I

    move-result p0

    add-int/2addr v1, p0

    .line 213
    invoke-virtual {p5, v2}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Ljava/lang/String;

    .line 214
    invoke-virtual {p1, p0, v1}, Ljava/lang/String;->indexOf(Ljava/lang/String;I)I

    move-result v1

    .line 215
    invoke-virtual {p0}, Ljava/lang/String;->length()I

    move-result p0

    add-int/2addr p0, v1

    invoke-virtual {v0, v4, v1, p0, v8}, Landroid/text/SpannableString;->setSpan(Ljava/lang/Object;III)V

    .line 216
    :cond_5
    invoke-virtual {p4}, Ljava/util/ArrayList;->size()I

    move-result p0

    if-lt p0, v7, :cond_6

    .line 217
    invoke-virtual {p5, v2}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Ljava/lang/String;

    invoke-virtual {p0}, Ljava/lang/String;->length()I

    move-result p0

    add-int/2addr p0, v1

    .line 218
    invoke-virtual {p5, v5}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object p2

    check-cast p2, Ljava/lang/String;

    .line 219
    invoke-virtual {p1, p2, p0}, Ljava/lang/String;->indexOf(Ljava/lang/String;I)I

    move-result p0

    .line 220
    invoke-virtual {p2}, Ljava/lang/String;->length()I

    move-result p2

    add-int/2addr p2, p0

    invoke-virtual {v0, v6, p0, p2, v8}, Landroid/text/SpannableString;->setSpan(Ljava/lang/Object;III)V

    .line 221
    :cond_6
    invoke-virtual {p4}, Ljava/util/ArrayList;->size()I

    move-result p0

    if-ne p0, v9, :cond_7

    .line 222
    invoke-virtual {p5, v5}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Ljava/lang/String;

    invoke-virtual {p0}, Ljava/lang/String;->length()I

    move-result p0

    add-int/2addr v1, p0

    .line 223
    invoke-virtual {p5, v7}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Ljava/lang/String;

    .line 224
    invoke-virtual {p1, p0, v1}, Ljava/lang/String;->indexOf(Ljava/lang/String;I)I

    move-result p1

    .line 225
    invoke-virtual {p0}, Ljava/lang/String;->length()I

    move-result p0

    add-int/2addr p0, p1

    invoke-virtual {v0, v3, p1, p0, v8}, Landroid/text/SpannableString;->setSpan(Ljava/lang/Object;III)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :cond_7
    return-object v0

    :catch_0
    move-exception p0

    .line 229
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    return-object v0
.end method

.method public static a(Landroid/content/Context;Landroid/view/View;IILjava/lang/String;Landroid/view/View$OnClickListener;)Landroid/widget/RelativeLayout;
    .locals 6

    .line 242
    invoke-static {p0}, Lcom/cmic/gen/sdk/auth/GenAuthnHelper;->getInstance(Landroid/content/Context;)Lcom/cmic/gen/sdk/auth/GenAuthnHelper;

    move-result-object v0

    invoke-virtual {v0}, Lcom/cmic/gen/sdk/auth/GenAuthnHelper;->getAuthThemeConfig()Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;

    move-result-object v0

    .line 244
    new-instance v1, Landroid/widget/RelativeLayout;

    invoke-direct {v1, p0}, Landroid/widget/RelativeLayout;-><init>(Landroid/content/Context;)V

    const/4 v2, -0x2

    if-eqz p1, :cond_0

    const/4 v3, -0x2

    goto :goto_0

    :cond_0
    const/high16 v3, 0x42440000    # 49.0f

    .line 245
    invoke-static {p0, v3}, Lcom/cmic/gen/sdk/view/e;->a(Landroid/content/Context;F)I

    move-result v3

    .line 246
    :goto_0
    new-instance v4, Landroid/widget/RelativeLayout$LayoutParams;

    const/4 v5, -0x1

    invoke-direct {v4, v5, v3}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    const/16 v3, 0xa

    .line 247
    invoke-virtual {v4, v3, v5}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(II)V

    .line 248
    invoke-virtual {v1, v4}, Landroid/widget/RelativeLayout;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 249
    invoke-virtual {v1, p2}, Landroid/widget/RelativeLayout;->setId(I)V

    .line 251
    new-instance p2, Landroid/widget/TextView;

    invoke-direct {p2, p0}, Landroid/widget/TextView;-><init>(Landroid/content/Context;)V

    .line 252
    new-instance v3, Landroid/widget/RelativeLayout$LayoutParams;

    invoke-direct {v3, v2, v2}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    const/16 v2, 0xd

    .line 253
    invoke-virtual {v3, v2, v5}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(II)V

    .line 254
    invoke-virtual {p2, v3}, Landroid/widget/TextView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 255
    invoke-virtual {v0}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->getNavTextColor()I

    move-result v2

    invoke-virtual {p2, v2}, Landroid/widget/TextView;->setTextColor(I)V

    const/4 v2, 0x2

    .line 256
    invoke-virtual {v0}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->getNavTextSize()I

    move-result v3

    int-to-float v3, v3

    invoke-virtual {p2, v2, v3}, Landroid/widget/TextView;->setTextSize(IF)V

    .line 257
    invoke-virtual {p2, p4}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    if-eqz p1, :cond_1

    .line 259
    invoke-virtual {v1, p1}, Landroid/widget/RelativeLayout;->addView(Landroid/view/View;)V

    .line 260
    invoke-virtual {v1, p2}, Landroid/widget/RelativeLayout;->addView(Landroid/view/View;)V

    return-object v1

    .line 263
    :cond_1
    invoke-virtual {v1, p2}, Landroid/widget/RelativeLayout;->addView(Landroid/view/View;)V

    .line 265
    new-instance p1, Landroid/widget/ImageButton;

    invoke-direct {p1, p0}, Landroid/widget/ImageButton;-><init>(Landroid/content/Context;)V

    .line 266
    new-instance p2, Landroid/widget/RelativeLayout$LayoutParams;

    invoke-virtual {v0}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->getNavReturnImgWidth()I

    move-result p4

    int-to-float p4, p4

    invoke-static {p0, p4}, Lcom/cmic/gen/sdk/view/e;->a(Landroid/content/Context;F)I

    move-result p4

    invoke-virtual {v0}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->getNavReturnImgHeight()I

    move-result v0

    int-to-float v0, v0

    invoke-static {p0, v0}, Lcom/cmic/gen/sdk/view/e;->a(Landroid/content/Context;F)I

    move-result v0

    invoke-direct {p2, p4, v0}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    const/16 p4, 0x9

    .line 267
    invoke-virtual {p2, p4, v5}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(II)V

    const/16 p4, 0xf

    .line 268
    invoke-virtual {p2, p4, v5}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(II)V

    const/high16 p4, 0x41400000    # 12.0f

    .line 269
    invoke-static {p0, p4}, Lcom/cmic/gen/sdk/view/e;->a(Landroid/content/Context;F)I

    move-result p4

    const/4 v0, 0x0

    invoke-virtual {p2, p4, v0, v0, v0}, Landroid/widget/RelativeLayout$LayoutParams;->setMargins(IIII)V

    .line 270
    invoke-virtual {p1, p2}, Landroid/widget/ImageButton;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 271
    invoke-virtual {p1, p3}, Landroid/widget/ImageButton;->setId(I)V

    .line 272
    invoke-virtual {p1, p5}, Landroid/widget/ImageButton;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 273
    invoke-virtual {p1, v0}, Landroid/widget/ImageButton;->setBackgroundColor(I)V

    .line 274
    invoke-virtual {v1, p1}, Landroid/widget/RelativeLayout;->addView(Landroid/view/View;)V

    .line 277
    :try_start_0
    invoke-static {p0}, Lcom/cmic/gen/sdk/auth/GenAuthnHelper;->getInstance(Landroid/content/Context;)Lcom/cmic/gen/sdk/auth/GenAuthnHelper;

    move-result-object p2

    invoke-virtual {p2}, Lcom/cmic/gen/sdk/auth/GenAuthnHelper;->getAuthThemeConfig()Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;

    move-result-object p2

    invoke-virtual {p2}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->getNavColor()I

    move-result p2

    invoke-virtual {v1, p2}, Landroid/widget/RelativeLayout;->setBackgroundColor(I)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_1

    :catch_0
    const p2, -0xff7930

    .line 279
    invoke-virtual {v1, p2}, Landroid/widget/RelativeLayout;->setBackgroundColor(I)V

    :goto_1
    const-string p2, "umcsdk_return_bg"

    .line 288
    invoke-static {p0, p2}, Lcom/cmic/gen/sdk/view/c;->b(Landroid/content/Context;Ljava/lang/String;)I

    move-result p0

    invoke-virtual {p1, p0}, Landroid/widget/ImageButton;->setImageResource(I)V

    return-object v1
.end method

.method public static b(Landroid/content/Context;)I
    .locals 1

    const-string v0, "window"

    .line 356
    invoke-virtual {p0, v0}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Landroid/view/WindowManager;

    .line 357
    new-instance v0, Landroid/util/DisplayMetrics;

    invoke-direct {v0}, Landroid/util/DisplayMetrics;-><init>()V

    if-eqz p0, :cond_0

    .line 359
    invoke-interface {p0}, Landroid/view/WindowManager;->getDefaultDisplay()Landroid/view/Display;

    move-result-object p0

    invoke-virtual {p0, v0}, Landroid/view/Display;->getMetrics(Landroid/util/DisplayMetrics;)V

    .line 361
    :cond_0
    iget p0, v0, Landroid/util/DisplayMetrics;->heightPixels:I

    return p0
.end method
