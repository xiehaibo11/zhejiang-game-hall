.class public Lcom/tkay/expressad/out/LoadingActivity;
.super Landroid/app/Activity;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/expressad/out/LoadingActivity$a;
    }
.end annotation


# instance fields
.field a:Landroid/content/BroadcastReceiver;

.field private b:Landroid/widget/RelativeLayout;

.field private c:Landroid/widget/ImageView;

.field private d:Landroid/graphics/Bitmap;

.field private e:Lcom/tkay/expressad/out/LoadingActivity$a;

.field private f:Ljava/lang/String;

.field private g:Lcom/tkay/expressad/foundation/g/d/c;

.field private h:Landroid/graphics/drawable/Drawable;

.field private i:Landroid/widget/RelativeLayout;


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 25
    invoke-direct {p0}, Landroid/app/Activity;-><init>()V

    .line 32
    new-instance v0, Lcom/tkay/expressad/out/LoadingActivity$1;

    invoke-direct {v0, p0}, Lcom/tkay/expressad/out/LoadingActivity$1;-><init>(Lcom/tkay/expressad/out/LoadingActivity;)V

    iput-object v0, p0, Lcom/tkay/expressad/out/LoadingActivity;->g:Lcom/tkay/expressad/foundation/g/d/c;

    .line 50
    new-instance v0, Lcom/tkay/expressad/out/LoadingActivity$2;

    invoke-direct {v0, p0}, Lcom/tkay/expressad/out/LoadingActivity$2;-><init>(Lcom/tkay/expressad/out/LoadingActivity;)V

    iput-object v0, p0, Lcom/tkay/expressad/out/LoadingActivity;->a:Landroid/content/BroadcastReceiver;

    return-void
.end method

.method static synthetic a(Lcom/tkay/expressad/out/LoadingActivity;Landroid/graphics/Bitmap;)Landroid/graphics/Bitmap;
    .locals 0

    .line 25
    iput-object p1, p0, Lcom/tkay/expressad/out/LoadingActivity;->d:Landroid/graphics/Bitmap;

    return-object p1
.end method

.method private a()Landroid/view/View;
    .locals 5

    .line 107
    iget-object v0, p0, Lcom/tkay/expressad/out/LoadingActivity;->b:Landroid/widget/RelativeLayout;

    if-nez v0, :cond_1

    .line 108
    new-instance v0, Landroid/widget/RelativeLayout;

    invoke-direct {v0, p0}, Landroid/widget/RelativeLayout;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/tkay/expressad/out/LoadingActivity;->b:Landroid/widget/RelativeLayout;

    .line 109
    new-instance v0, Landroid/widget/RelativeLayout;

    invoke-direct {v0, p0}, Landroid/widget/RelativeLayout;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/tkay/expressad/out/LoadingActivity;->i:Landroid/widget/RelativeLayout;

    const/high16 v0, 0x41700000    # 15.0f

    .line 110
    invoke-static {p0, v0}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v0

    .line 111
    iget-object v1, p0, Lcom/tkay/expressad/out/LoadingActivity;->i:Landroid/widget/RelativeLayout;

    invoke-virtual {v1, v0, v0, v0, v0}, Landroid/widget/RelativeLayout;->setPadding(IIII)V

    .line 112
    invoke-virtual {p0}, Lcom/tkay/expressad/out/LoadingActivity;->getResources()Landroid/content/res/Resources;

    move-result-object v0

    .line 113
    invoke-virtual {p0}, Lcom/tkay/expressad/out/LoadingActivity;->getPackageName()Ljava/lang/String;

    move-result-object v1

    const-string v2, "tkay_native_bg_loading_camera"

    const-string v3, "drawable"

    .line 112
    invoke-virtual {v0, v2, v3, v1}, Landroid/content/res/Resources;->getIdentifier(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    .line 114
    iget-object v1, p0, Lcom/tkay/expressad/out/LoadingActivity;->i:Landroid/widget/RelativeLayout;

    invoke-virtual {v1, v0}, Landroid/widget/RelativeLayout;->setBackgroundResource(I)V

    .line 115
    new-instance v0, Landroid/widget/TextView;

    invoke-direct {v0, p0}, Landroid/widget/TextView;-><init>(Landroid/content/Context;)V

    const/high16 v1, 0x430c0000    # 140.0f

    .line 116
    invoke-static {p0, v1}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v1

    const/high16 v2, 0x41fc0000    # 31.5f

    .line 117
    invoke-static {p0, v2}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v2

    .line 118
    new-instance v3, Landroid/widget/RelativeLayout$LayoutParams;

    invoke-direct {v3, v1, v2}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    .line 119
    iget-object v1, p0, Lcom/tkay/expressad/out/LoadingActivity;->i:Landroid/widget/RelativeLayout;

    invoke-virtual {v1, v0, v3}, Landroid/widget/RelativeLayout;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    .line 120
    new-instance v0, Lcom/tkay/expressad/widget/TYImageView;

    invoke-direct {v0, p0}, Lcom/tkay/expressad/widget/TYImageView;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/tkay/expressad/out/LoadingActivity;->c:Landroid/widget/ImageView;

    .line 121
    invoke-static {}, Lcom/tkay/expressad/foundation/h/t;->a()I

    move-result v1

    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setId(I)V

    .line 122
    iget-object v0, p0, Lcom/tkay/expressad/out/LoadingActivity;->c:Landroid/widget/ImageView;

    iget-object v1, p0, Lcom/tkay/expressad/out/LoadingActivity;->f:Ljava/lang/String;

    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setTag(Ljava/lang/Object;)V

    .line 123
    iget-object v0, p0, Lcom/tkay/expressad/out/LoadingActivity;->f:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 124
    invoke-virtual {p0}, Lcom/tkay/expressad/out/LoadingActivity;->getApplicationContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/expressad/foundation/g/d/b;->a(Landroid/content/Context;)Lcom/tkay/expressad/foundation/g/d/b;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/expressad/out/LoadingActivity;->f:Ljava/lang/String;

    iget-object v2, p0, Lcom/tkay/expressad/out/LoadingActivity;->g:Lcom/tkay/expressad/foundation/g/d/c;

    invoke-virtual {v0, v1, v2}, Lcom/tkay/expressad/foundation/g/d/b;->a(Ljava/lang/String;Lcom/tkay/expressad/foundation/g/d/c;)V

    :cond_0
    const/high16 v0, 0x42800000    # 64.0f

    .line 127
    invoke-static {p0, v0}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v0

    .line 128
    new-instance v1, Landroid/widget/RelativeLayout$LayoutParams;

    invoke-direct {v1, v0, v0}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    const/16 v0, 0xd

    const/4 v2, -0x1

    .line 129
    invoke-virtual {v1, v0, v2}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(II)V

    .line 130
    iget-object v0, p0, Lcom/tkay/expressad/out/LoadingActivity;->i:Landroid/widget/RelativeLayout;

    iget-object v3, p0, Lcom/tkay/expressad/out/LoadingActivity;->c:Landroid/widget/ImageView;

    invoke-virtual {v0, v3, v1}, Landroid/widget/RelativeLayout;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    .line 132
    new-instance v0, Landroid/widget/TextView;

    invoke-direct {v0, p0}, Landroid/widget/TextView;-><init>(Landroid/content/Context;)V

    .line 133
    invoke-virtual {v0}, Landroid/widget/TextView;->setSingleLine()V

    .line 134
    invoke-virtual {v0, v2}, Landroid/widget/TextView;->setTextColor(I)V

    const/high16 v1, 0x41800000    # 16.0f

    .line 135
    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setTextSize(F)V

    const-string v1, "Relax while loading...."

    .line 136
    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 137
    new-instance v1, Landroid/widget/RelativeLayout$LayoutParams;

    const/4 v3, -0x2

    invoke-direct {v1, v3, v3}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    const/4 v3, 0x3

    .line 139
    iget-object v4, p0, Lcom/tkay/expressad/out/LoadingActivity;->c:Landroid/widget/ImageView;

    invoke-virtual {v4}, Landroid/widget/ImageView;->getId()I

    move-result v4

    invoke-virtual {v1, v3, v4}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(II)V

    const/16 v3, 0xe

    .line 140
    invoke-virtual {v1, v3, v2}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(II)V

    .line 141
    iget-object v3, p0, Lcom/tkay/expressad/out/LoadingActivity;->i:Landroid/widget/RelativeLayout;

    invoke-virtual {v3, v0, v1}, Landroid/widget/RelativeLayout;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    .line 142
    iget-object v0, p0, Lcom/tkay/expressad/out/LoadingActivity;->b:Landroid/widget/RelativeLayout;

    iget-object v1, p0, Lcom/tkay/expressad/out/LoadingActivity;->i:Landroid/widget/RelativeLayout;

    new-instance v3, Landroid/widget/RelativeLayout$LayoutParams;

    invoke-direct {v3, v2, v2}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    invoke-virtual {v0, v1, v3}, Landroid/widget/RelativeLayout;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    .line 146
    :cond_1
    iget-object v0, p0, Lcom/tkay/expressad/out/LoadingActivity;->b:Landroid/widget/RelativeLayout;

    return-object v0
.end method

.method static synthetic a(Lcom/tkay/expressad/out/LoadingActivity;)Landroid/widget/ImageView;
    .locals 0

    .line 25
    iget-object p0, p0, Lcom/tkay/expressad/out/LoadingActivity;->c:Landroid/widget/ImageView;

    return-object p0
.end method


# virtual methods
.method protected onCreate(Landroid/os/Bundle;)V
    .locals 4

    .line 98
    invoke-super {p0, p1}, Landroid/app/Activity;->onCreate(Landroid/os/Bundle;)V

    .line 99
    invoke-virtual {p0}, Lcom/tkay/expressad/out/LoadingActivity;->getIntent()Landroid/content/Intent;

    move-result-object p1

    const-string v0, "icon_url"

    invoke-virtual {p1, v0}, Landroid/content/Intent;->hasExtra(Ljava/lang/String;)Z

    move-result p1

    if-eqz p1, :cond_0

    .line 100
    invoke-virtual {p0}, Lcom/tkay/expressad/out/LoadingActivity;->getIntent()Landroid/content/Intent;

    move-result-object p1

    invoke-virtual {p1, v0}, Landroid/content/Intent;->getStringExtra(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/expressad/out/LoadingActivity;->f:Ljava/lang/String;

    .line 1107
    :cond_0
    iget-object p1, p0, Lcom/tkay/expressad/out/LoadingActivity;->b:Landroid/widget/RelativeLayout;

    if-nez p1, :cond_2

    .line 1108
    new-instance p1, Landroid/widget/RelativeLayout;

    invoke-direct {p1, p0}, Landroid/widget/RelativeLayout;-><init>(Landroid/content/Context;)V

    iput-object p1, p0, Lcom/tkay/expressad/out/LoadingActivity;->b:Landroid/widget/RelativeLayout;

    .line 1109
    new-instance p1, Landroid/widget/RelativeLayout;

    invoke-direct {p1, p0}, Landroid/widget/RelativeLayout;-><init>(Landroid/content/Context;)V

    iput-object p1, p0, Lcom/tkay/expressad/out/LoadingActivity;->i:Landroid/widget/RelativeLayout;

    const/high16 p1, 0x41700000    # 15.0f

    .line 1110
    invoke-static {p0, p1}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result p1

    .line 1111
    iget-object v0, p0, Lcom/tkay/expressad/out/LoadingActivity;->i:Landroid/widget/RelativeLayout;

    invoke-virtual {v0, p1, p1, p1, p1}, Landroid/widget/RelativeLayout;->setPadding(IIII)V

    .line 1112
    invoke-virtual {p0}, Lcom/tkay/expressad/out/LoadingActivity;->getResources()Landroid/content/res/Resources;

    move-result-object p1

    .line 1113
    invoke-virtual {p0}, Lcom/tkay/expressad/out/LoadingActivity;->getPackageName()Ljava/lang/String;

    move-result-object v0

    const-string v1, "tkay_native_bg_loading_camera"

    const-string v2, "drawable"

    .line 1112
    invoke-virtual {p1, v1, v2, v0}, Landroid/content/res/Resources;->getIdentifier(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)I

    move-result p1

    .line 1114
    iget-object v0, p0, Lcom/tkay/expressad/out/LoadingActivity;->i:Landroid/widget/RelativeLayout;

    invoke-virtual {v0, p1}, Landroid/widget/RelativeLayout;->setBackgroundResource(I)V

    .line 1115
    new-instance p1, Landroid/widget/TextView;

    invoke-direct {p1, p0}, Landroid/widget/TextView;-><init>(Landroid/content/Context;)V

    const/high16 v0, 0x430c0000    # 140.0f

    .line 1116
    invoke-static {p0, v0}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v0

    const/high16 v1, 0x41fc0000    # 31.5f

    .line 1117
    invoke-static {p0, v1}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v1

    .line 1118
    new-instance v2, Landroid/widget/RelativeLayout$LayoutParams;

    invoke-direct {v2, v0, v1}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    .line 1119
    iget-object v0, p0, Lcom/tkay/expressad/out/LoadingActivity;->i:Landroid/widget/RelativeLayout;

    invoke-virtual {v0, p1, v2}, Landroid/widget/RelativeLayout;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    .line 1120
    new-instance p1, Lcom/tkay/expressad/widget/TYImageView;

    invoke-direct {p1, p0}, Lcom/tkay/expressad/widget/TYImageView;-><init>(Landroid/content/Context;)V

    iput-object p1, p0, Lcom/tkay/expressad/out/LoadingActivity;->c:Landroid/widget/ImageView;

    .line 1121
    invoke-static {}, Lcom/tkay/expressad/foundation/h/t;->a()I

    move-result v0

    invoke-virtual {p1, v0}, Landroid/widget/ImageView;->setId(I)V

    .line 1122
    iget-object p1, p0, Lcom/tkay/expressad/out/LoadingActivity;->c:Landroid/widget/ImageView;

    iget-object v0, p0, Lcom/tkay/expressad/out/LoadingActivity;->f:Ljava/lang/String;

    invoke-virtual {p1, v0}, Landroid/widget/ImageView;->setTag(Ljava/lang/Object;)V

    .line 1123
    iget-object p1, p0, Lcom/tkay/expressad/out/LoadingActivity;->f:Ljava/lang/String;

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_1

    .line 1124
    invoke-virtual {p0}, Lcom/tkay/expressad/out/LoadingActivity;->getApplicationContext()Landroid/content/Context;

    move-result-object p1

    invoke-static {p1}, Lcom/tkay/expressad/foundation/g/d/b;->a(Landroid/content/Context;)Lcom/tkay/expressad/foundation/g/d/b;

    move-result-object p1

    iget-object v0, p0, Lcom/tkay/expressad/out/LoadingActivity;->f:Ljava/lang/String;

    iget-object v1, p0, Lcom/tkay/expressad/out/LoadingActivity;->g:Lcom/tkay/expressad/foundation/g/d/c;

    invoke-virtual {p1, v0, v1}, Lcom/tkay/expressad/foundation/g/d/b;->a(Ljava/lang/String;Lcom/tkay/expressad/foundation/g/d/c;)V

    :cond_1
    const/high16 p1, 0x42800000    # 64.0f

    .line 1127
    invoke-static {p0, p1}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result p1

    .line 1128
    new-instance v0, Landroid/widget/RelativeLayout$LayoutParams;

    invoke-direct {v0, p1, p1}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    const/16 p1, 0xd

    const/4 v1, -0x1

    .line 1129
    invoke-virtual {v0, p1, v1}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(II)V

    .line 1130
    iget-object p1, p0, Lcom/tkay/expressad/out/LoadingActivity;->i:Landroid/widget/RelativeLayout;

    iget-object v2, p0, Lcom/tkay/expressad/out/LoadingActivity;->c:Landroid/widget/ImageView;

    invoke-virtual {p1, v2, v0}, Landroid/widget/RelativeLayout;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    .line 1132
    new-instance p1, Landroid/widget/TextView;

    invoke-direct {p1, p0}, Landroid/widget/TextView;-><init>(Landroid/content/Context;)V

    .line 1133
    invoke-virtual {p1}, Landroid/widget/TextView;->setSingleLine()V

    .line 1134
    invoke-virtual {p1, v1}, Landroid/widget/TextView;->setTextColor(I)V

    const/high16 v0, 0x41800000    # 16.0f

    .line 1135
    invoke-virtual {p1, v0}, Landroid/widget/TextView;->setTextSize(F)V

    const-string v0, "Relax while loading...."

    .line 1136
    invoke-virtual {p1, v0}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 1137
    new-instance v0, Landroid/widget/RelativeLayout$LayoutParams;

    const/4 v2, -0x2

    invoke-direct {v0, v2, v2}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    const/4 v2, 0x3

    .line 1139
    iget-object v3, p0, Lcom/tkay/expressad/out/LoadingActivity;->c:Landroid/widget/ImageView;

    invoke-virtual {v3}, Landroid/widget/ImageView;->getId()I

    move-result v3

    invoke-virtual {v0, v2, v3}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(II)V

    const/16 v2, 0xe

    .line 1140
    invoke-virtual {v0, v2, v1}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(II)V

    .line 1141
    iget-object v2, p0, Lcom/tkay/expressad/out/LoadingActivity;->i:Landroid/widget/RelativeLayout;

    invoke-virtual {v2, p1, v0}, Landroid/widget/RelativeLayout;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    .line 1142
    iget-object p1, p0, Lcom/tkay/expressad/out/LoadingActivity;->b:Landroid/widget/RelativeLayout;

    iget-object v0, p0, Lcom/tkay/expressad/out/LoadingActivity;->i:Landroid/widget/RelativeLayout;

    new-instance v2, Landroid/widget/RelativeLayout$LayoutParams;

    invoke-direct {v2, v1, v1}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    invoke-virtual {p1, v0, v2}, Landroid/widget/RelativeLayout;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    .line 1146
    :cond_2
    iget-object p1, p0, Lcom/tkay/expressad/out/LoadingActivity;->b:Landroid/widget/RelativeLayout;

    .line 102
    invoke-virtual {p0, p1}, Lcom/tkay/expressad/out/LoadingActivity;->setContentView(Landroid/view/View;)V

    return-void
.end method

.method protected onDestroy()V
    .locals 2

    .line 75
    iget-object v0, p0, Lcom/tkay/expressad/out/LoadingActivity;->a:Landroid/content/BroadcastReceiver;

    if-eqz v0, :cond_0

    .line 76
    invoke-static {p0}, Lcom/tkay/core/common/b/j;->a(Landroid/content/Context;)Lcom/tkay/core/common/b/j;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/expressad/out/LoadingActivity;->a:Landroid/content/BroadcastReceiver;

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/b/j;->a(Landroid/content/BroadcastReceiver;)V

    .line 78
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/out/LoadingActivity;->c:Landroid/widget/ImageView;

    const/4 v1, 0x0

    if-eqz v0, :cond_1

    .line 79
    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setImageBitmap(Landroid/graphics/Bitmap;)V

    .line 81
    :cond_1
    iput-object v1, p0, Lcom/tkay/expressad/out/LoadingActivity;->c:Landroid/widget/ImageView;

    .line 82
    iput-object v1, p0, Lcom/tkay/expressad/out/LoadingActivity;->b:Landroid/widget/RelativeLayout;

    .line 83
    iput-object v1, p0, Lcom/tkay/expressad/out/LoadingActivity;->g:Lcom/tkay/expressad/foundation/g/d/c;

    .line 84
    iput-object v1, p0, Lcom/tkay/expressad/out/LoadingActivity;->h:Landroid/graphics/drawable/Drawable;

    .line 85
    iget-object v0, p0, Lcom/tkay/expressad/out/LoadingActivity;->i:Landroid/widget/RelativeLayout;

    if-eqz v0, :cond_2

    .line 86
    invoke-virtual {v0, v1}, Landroid/widget/RelativeLayout;->setBackgroundDrawable(Landroid/graphics/drawable/Drawable;)V

    .line 88
    :cond_2
    iput-object v1, p0, Lcom/tkay/expressad/out/LoadingActivity;->i:Landroid/widget/RelativeLayout;

    .line 89
    iget-object v0, p0, Lcom/tkay/expressad/out/LoadingActivity;->d:Landroid/graphics/Bitmap;

    if-eqz v0, :cond_3

    invoke-virtual {v0}, Landroid/graphics/Bitmap;->isRecycled()Z

    move-result v0

    if-nez v0, :cond_3

    .line 90
    iput-object v1, p0, Lcom/tkay/expressad/out/LoadingActivity;->d:Landroid/graphics/Bitmap;

    .line 92
    :cond_3
    invoke-super {p0}, Landroid/app/Activity;->onDestroy()V

    return-void
.end method

.method protected onResume()V
    .locals 3

    .line 63
    invoke-super {p0}, Landroid/app/Activity;->onResume()V

    .line 65
    new-instance v0, Landroid/content/IntentFilter;

    invoke-direct {v0}, Landroid/content/IntentFilter;-><init>()V

    const-string v1, "ExitApp"

    .line 66
    invoke-virtual {v0, v1}, Landroid/content/IntentFilter;->addAction(Ljava/lang/String;)V

    .line 67
    iget-object v1, p0, Lcom/tkay/expressad/out/LoadingActivity;->a:Landroid/content/BroadcastReceiver;

    if-eqz v1, :cond_0

    .line 68
    invoke-static {p0}, Lcom/tkay/core/common/b/j;->a(Landroid/content/Context;)Lcom/tkay/core/common/b/j;

    move-result-object v1

    iget-object v2, p0, Lcom/tkay/expressad/out/LoadingActivity;->a:Landroid/content/BroadcastReceiver;

    invoke-virtual {v1, v2, v0}, Lcom/tkay/core/common/b/j;->a(Landroid/content/BroadcastReceiver;Landroid/content/IntentFilter;)V

    :cond_0
    return-void
.end method
