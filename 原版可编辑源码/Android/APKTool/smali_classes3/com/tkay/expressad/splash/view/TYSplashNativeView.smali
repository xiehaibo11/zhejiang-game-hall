.class public Lcom/tkay/expressad/splash/view/TYSplashNativeView;
.super Landroid/widget/RelativeLayout;


# static fields
.field private static final a:Ljava/lang/String; = "MBSplashNativeView"


# instance fields
.field private A:I

.field private B:I

.field private C:F

.field private D:F

.field private E:Z

.field private F:Z

.field private G:Z

.field private H:Z

.field private I:Z

.field private J:Ljava/lang/String;

.field private K:Ljava/lang/String;

.field private L:Lcom/tkay/expressad/splash/view/TYSplashView;

.field private M:Lcom/tkay/expressad/foundation/d/c;

.field private N:Lcom/tkay/expressad/shake/MBShakeView;

.field private O:Ljava/lang/String;

.field private P:Ljava/lang/String;

.field private Q:Ljava/lang/String;

.field private R:Lcom/tkay/expressad/shake/b;

.field private b:Lcom/tkay/expressad/splash/view/MBNoRecycledCrashImageView;

.field private c:Lcom/tkay/expressad/splash/view/MBNoRecycledCrashImageView;

.field private d:Landroid/widget/RelativeLayout;

.field private e:Landroid/widget/ImageView;

.field private f:Lcom/tkay/expressad/widget/FeedBackButton;

.field private g:Landroid/widget/TextView;

.field private h:Landroid/widget/RelativeLayout;

.field private i:Lcom/tkay/expressad/splash/view/MBNoRecycledCrashImageView;

.field private j:Landroid/widget/TextView;

.field private k:Lcom/tkay/expressad/splash/view/MBNoRecycledCrashImageView;

.field private l:Landroid/widget/TextView;

.field private m:Landroid/widget/TextView;

.field private n:Landroid/widget/RelativeLayout;

.field private o:Landroid/widget/TextView;

.field private p:Landroid/widget/TextView;

.field private q:Landroid/widget/TextView;

.field private r:Lcom/tkay/expressad/splash/view/MBSplashClickView;

.field private s:I

.field private t:I

.field private u:I

.field private v:I

.field private w:I

.field private x:I

.field private y:I

.field private z:I


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 0

    .line 92
    invoke-direct {p0, p1}, Landroid/widget/RelativeLayout;-><init>(Landroid/content/Context;)V

    const/4 p1, 0x0

    .line 77
    iput-boolean p1, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->H:Z

    .line 78
    iput-boolean p1, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->I:Z

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 1

    const/4 v0, 0x0

    .line 96
    invoke-direct {p0, p1, p2, v0}, Lcom/tkay/expressad/splash/view/TYSplashNativeView;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V
    .locals 0

    .line 100
    invoke-direct {p0, p1, p2, p3}, Landroid/widget/RelativeLayout;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V

    const/4 p1, 0x0

    .line 77
    iput-boolean p1, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->H:Z

    .line 78
    iput-boolean p1, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->I:Z

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Lcom/tkay/expressad/splash/view/TYSplashView;Lcom/tkay/expressad/splash/a/b;)V
    .locals 8

    const-string v0, "string"

    const-string v1, "id"

    .line 104
    invoke-direct {p0, p1}, Landroid/widget/RelativeLayout;-><init>(Landroid/content/Context;)V

    const/4 p1, 0x0

    .line 77
    iput-boolean p1, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->H:Z

    .line 78
    iput-boolean p1, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->I:Z

    if-eqz p3, :cond_9

    .line 108
    invoke-virtual {p3}, Lcom/tkay/expressad/splash/a/b;->b()Ljava/lang/String;

    move-result-object v2

    iput-object v2, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->J:Ljava/lang/String;

    .line 109
    invoke-virtual {p3}, Lcom/tkay/expressad/splash/a/b;->a()Ljava/lang/String;

    move-result-object v2

    iput-object v2, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->K:Ljava/lang/String;

    .line 110
    invoke-virtual {p3}, Lcom/tkay/expressad/splash/a/b;->c()Lcom/tkay/expressad/foundation/d/c;

    move-result-object v2

    iput-object v2, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->M:Lcom/tkay/expressad/foundation/d/c;

    .line 111
    iput-object p2, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->L:Lcom/tkay/expressad/splash/view/TYSplashView;

    .line 112
    invoke-virtual {p3}, Lcom/tkay/expressad/splash/a/b;->e()I

    move-result p2

    iput p2, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->s:I

    .line 113
    invoke-virtual {p3}, Lcom/tkay/expressad/splash/a/b;->f()I

    move-result p2

    iput p2, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->v:I

    .line 114
    invoke-virtual {p3}, Lcom/tkay/expressad/splash/a/b;->g()I

    move-result p2

    iput p2, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->u:I

    .line 115
    invoke-virtual {p3}, Lcom/tkay/expressad/splash/a/b;->h()I

    move-result p2

    iput p2, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->w:I

    .line 116
    invoke-virtual {p3}, Lcom/tkay/expressad/splash/a/b;->i()I

    move-result p2

    iput p2, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->x:I

    .line 117
    invoke-virtual {p3}, Lcom/tkay/expressad/splash/a/b;->j()I

    move-result p2

    iput p2, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->y:I

    .line 118
    invoke-virtual {p3}, Lcom/tkay/expressad/splash/a/b;->k()I

    move-result p2

    iput p2, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->z:I

    .line 119
    invoke-virtual {p3}, Lcom/tkay/expressad/splash/a/b;->l()I

    move-result p2

    iput p2, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->A:I

    .line 120
    invoke-virtual {p3}, Lcom/tkay/expressad/splash/a/b;->d()Z

    move-result p2

    iput-boolean p2, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->G:Z

    .line 121
    invoke-virtual {p3}, Lcom/tkay/expressad/splash/a/b;->m()I

    move-result p2

    iput p2, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->B:I

    const/4 p2, 0x1

    .line 1130
    :try_start_0
    iget p3, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->A:I
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const-string v2, "layout"

    if-ne p3, p2, :cond_0

    .line 1131
    :try_start_1
    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->getContext()Landroid/content/Context;

    move-result-object p3

    invoke-virtual {p3}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p3

    const-string v3, "tkay_splash_portrait"

    invoke-static {p3, v3, v2}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result p3

    goto :goto_0

    .line 1134
    :cond_0
    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->getContext()Landroid/content/Context;

    move-result-object p3

    invoke-virtual {p3}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p3

    const-string v3, "tkay_splash_landscape"

    invoke-static {p3, v3, v2}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result p3

    .line 1136
    :goto_0
    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->getContext()Landroid/content/Context;

    move-result-object v2

    invoke-static {v2}, Landroid/view/LayoutInflater;->from(Landroid/content/Context;)Landroid/view/LayoutInflater;

    move-result-object v2

    const/4 v3, 0x0

    invoke-virtual {v2, p3, v3}, Landroid/view/LayoutInflater;->inflate(ILandroid/view/ViewGroup;)Landroid/view/View;

    move-result-object p3

    .line 1137
    invoke-virtual {p0, p3}, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->addView(Landroid/view/View;)V

    .line 1139
    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->getContext()Landroid/content/Context;

    move-result-object v2

    invoke-virtual {v2}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v2

    const-string v3, "tkay_splash_iv_image_bg"

    invoke-static {v2, v3, v1}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v2

    invoke-virtual {p3, v2}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Lcom/tkay/expressad/splash/view/MBNoRecycledCrashImageView;

    iput-object v2, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->b:Lcom/tkay/expressad/splash/view/MBNoRecycledCrashImageView;

    .line 1140
    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->getContext()Landroid/content/Context;

    move-result-object v2

    invoke-virtual {v2}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v2

    const-string v3, "tkay_splash_iv_image"

    invoke-static {v2, v3, v1}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v2

    invoke-virtual {p3, v2}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Lcom/tkay/expressad/splash/view/MBNoRecycledCrashImageView;

    iput-object v2, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->c:Lcom/tkay/expressad/splash/view/MBNoRecycledCrashImageView;

    .line 1141
    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->getContext()Landroid/content/Context;

    move-result-object v2

    invoke-virtual {v2}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v2

    const-string v3, "tkay_splash_topcontroller"

    invoke-static {v2, v3, v1}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v2

    invoke-virtual {p3, v2}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Landroid/widget/RelativeLayout;

    iput-object v2, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->d:Landroid/widget/RelativeLayout;

    .line 1142
    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->getContext()Landroid/content/Context;

    move-result-object v2

    invoke-virtual {v2}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v2

    const-string v3, "tkay_splash_iv_link"

    invoke-static {v2, v3, v1}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v2

    invoke-virtual {p3, v2}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Landroid/widget/ImageView;

    iput-object v2, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->e:Landroid/widget/ImageView;

    .line 1143
    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->getContext()Landroid/content/Context;

    move-result-object v2

    invoke-virtual {v2}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v2

    const-string v3, "tkay_splash_feedback"

    invoke-static {v2, v3, v1}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v2

    invoke-virtual {p3, v2}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Lcom/tkay/expressad/widget/FeedBackButton;

    iput-object v2, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->f:Lcom/tkay/expressad/widget/FeedBackButton;

    .line 1144
    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->getContext()Landroid/content/Context;

    move-result-object v2

    invoke-virtual {v2}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v2

    const-string v3, "tkay_splash_tv_skip"

    invoke-static {v2, v3, v1}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v2

    invoke-virtual {p3, v2}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Landroid/widget/TextView;

    iput-object v2, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->g:Landroid/widget/TextView;

    .line 1145
    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->getContext()Landroid/content/Context;

    move-result-object v2

    invoke-virtual {v2}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v2

    const-string v3, "tkay_splash_landscape_foreground"

    invoke-static {v2, v3, v1}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v2

    invoke-virtual {p3, v2}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Landroid/widget/RelativeLayout;

    iput-object v2, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->h:Landroid/widget/RelativeLayout;

    .line 1146
    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->getContext()Landroid/content/Context;

    move-result-object v2

    invoke-virtual {v2}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v2

    const-string v3, "tkay_splash_iv_icon"

    invoke-static {v2, v3, v1}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v2

    invoke-virtual {p3, v2}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Lcom/tkay/expressad/splash/view/MBNoRecycledCrashImageView;

    iput-object v2, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->i:Lcom/tkay/expressad/splash/view/MBNoRecycledCrashImageView;

    .line 1147
    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->getContext()Landroid/content/Context;

    move-result-object v2

    invoke-virtual {v2}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v2

    const-string v3, "tkay_splash_tv_title"

    invoke-static {v2, v3, v1}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v2

    invoke-virtual {p3, v2}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Landroid/widget/TextView;

    iput-object v2, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->j:Landroid/widget/TextView;

    .line 1148
    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->getContext()Landroid/content/Context;

    move-result-object v2

    invoke-virtual {v2}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v2

    const-string v3, "tkay_splash_iv_foregroundimage"

    invoke-static {v2, v3, v1}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v2

    invoke-virtual {p3, v2}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Lcom/tkay/expressad/splash/view/MBNoRecycledCrashImageView;

    iput-object v2, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->k:Lcom/tkay/expressad/splash/view/MBNoRecycledCrashImageView;

    .line 1149
    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->getContext()Landroid/content/Context;

    move-result-object v2

    invoke-virtual {v2}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v2

    const-string v3, "tkay_splash_tv_adrect"

    invoke-static {v2, v3, v1}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v2

    invoke-virtual {p3, v2}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Landroid/widget/TextView;

    iput-object v2, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->l:Landroid/widget/TextView;

    .line 1150
    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->getContext()Landroid/content/Context;

    move-result-object v2

    invoke-virtual {v2}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v2

    const-string v3, "tkay_splash_layout_appinfo"

    invoke-static {v2, v3, v1}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v2

    invoke-virtual {p3, v2}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Landroid/widget/RelativeLayout;

    iput-object v2, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->n:Landroid/widget/RelativeLayout;

    .line 1151
    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->getContext()Landroid/content/Context;

    move-result-object v2

    invoke-virtual {v2}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v2

    const-string v3, "tkay_splash_tv_appinfo"

    invoke-static {v2, v3, v1}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v2

    invoke-virtual {p3, v2}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Landroid/widget/TextView;

    iput-object v2, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->o:Landroid/widget/TextView;

    .line 1152
    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->getContext()Landroid/content/Context;

    move-result-object v2

    invoke-virtual {v2}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v2

    const-string v3, "tkay_splash_tv_privacy"

    invoke-static {v2, v3, v1}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v2

    invoke-virtual {p3, v2}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Landroid/widget/TextView;

    iput-object v2, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->p:Landroid/widget/TextView;

    .line 1153
    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->getContext()Landroid/content/Context;

    move-result-object v2

    invoke-virtual {v2}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v2

    const-string v3, "tkay_splash_tv_permission"

    invoke-static {v2, v3, v1}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v2

    invoke-virtual {p3, v2}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Landroid/widget/TextView;

    iput-object v2, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->q:Landroid/widget/TextView;

    .line 1154
    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->getContext()Landroid/content/Context;

    move-result-object v2

    invoke-virtual {v2}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v2

    const-string v3, "tkay_splash_tv_click"

    invoke-static {v2, v3, v1}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v2

    invoke-virtual {p3, v2}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Lcom/tkay/expressad/splash/view/MBSplashClickView;

    iput-object v2, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->r:Lcom/tkay/expressad/splash/view/MBSplashClickView;

    .line 1155
    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->getContext()Landroid/content/Context;

    move-result-object v2

    invoke-virtual {v2}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v2

    const-string v3, "tkay_splash_tv_adcircle"

    invoke-static {v2, v3, v1}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v1

    invoke-virtual {p3, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object p3

    check-cast p3, Landroid/widget/TextView;

    iput-object p3, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->m:Landroid/widget/TextView;

    .line 1157
    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->getContext()Landroid/content/Context;

    move-result-object p3

    invoke-virtual {p3}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p3

    const-string v1, "tkay_splash_count_time_can_skip"

    invoke-static {p3, v1, v0}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result p3

    .line 1158
    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-virtual {v1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v1

    const-string v2, "tkay_splash_count_time_can_skip_not"

    invoke-static {v1, v2, v0}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v1

    .line 1159
    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->getContext()Landroid/content/Context;

    move-result-object v2

    invoke-virtual {v2}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v2

    const-string v3, "tkay_splash_count_time_can_skip_s"

    invoke-static {v2, v3, v0}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v2

    .line 1161
    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->getContext()Landroid/content/Context;

    move-result-object v3

    invoke-virtual {v3}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v3

    invoke-virtual {v3, p3}, Landroid/content/res/Resources;->getString(I)Ljava/lang/String;

    move-result-object p3

    iput-object p3, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->P:Ljava/lang/String;

    .line 1162
    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->getContext()Landroid/content/Context;

    move-result-object p3

    invoke-virtual {p3}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object p3

    invoke-virtual {p3, v1}, Landroid/content/res/Resources;->getString(I)Ljava/lang/String;

    move-result-object p3

    iput-object p3, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->Q:Ljava/lang/String;

    .line 1163
    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->getContext()Landroid/content/Context;

    move-result-object p3

    invoke-virtual {p3}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object p3

    invoke-virtual {p3, v2}, Landroid/content/res/Resources;->getString(I)Ljava/lang/String;

    move-result-object p3

    iput-object p3, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->O:Ljava/lang/String;
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_1

    :catchall_0
    move-exception p3

    .line 1165
    invoke-virtual {p3}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    .line 1491
    :goto_1
    invoke-static {}, Lcom/tkay/expressad/foundation/f/b;->a()Lcom/tkay/expressad/foundation/f/b;

    move-result-object p3

    invoke-virtual {p3}, Lcom/tkay/expressad/foundation/f/b;->b()Z

    move-result p3

    const/16 v1, 0x8

    if-eqz p3, :cond_1

    .line 1492
    iget-object p3, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->M:Lcom/tkay/expressad/foundation/d/c;

    iget-object v2, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->J:Ljava/lang/String;

    invoke-virtual {p3, v2}, Lcom/tkay/expressad/foundation/d/c;->l(Ljava/lang/String;)V

    .line 1493
    invoke-static {}, Lcom/tkay/expressad/foundation/f/b;->a()Lcom/tkay/expressad/foundation/f/b;

    move-result-object p3

    iget-object v2, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->J:Ljava/lang/String;

    new-instance v3, Lcom/tkay/expressad/splash/view/TYSplashNativeView$11;

    invoke-direct {v3, p0}, Lcom/tkay/expressad/splash/view/TYSplashNativeView$11;-><init>(Lcom/tkay/expressad/splash/view/TYSplashNativeView;)V

    invoke-virtual {p3, v2, v3}, Lcom/tkay/expressad/foundation/f/b;->a(Ljava/lang/String;Lcom/tkay/expressad/foundation/f/a;)V

    .line 1512
    invoke-static {}, Lcom/tkay/expressad/foundation/f/b;->a()Lcom/tkay/expressad/foundation/f/b;

    move-result-object p3

    iget-object v2, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->J:Ljava/lang/String;

    iget-object v3, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->f:Lcom/tkay/expressad/widget/FeedBackButton;

    invoke-virtual {p3, v2, v3}, Lcom/tkay/expressad/foundation/f/b;->a(Ljava/lang/String;Lcom/tkay/expressad/widget/FeedBackButton;)V

    .line 1513
    invoke-static {}, Lcom/tkay/expressad/foundation/f/b;->a()Lcom/tkay/expressad/foundation/f/b;

    move-result-object p3

    iget-object v2, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->J:Ljava/lang/String;

    iget-object v3, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->M:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {p3, v2, v3}, Lcom/tkay/expressad/foundation/f/b;->a(Ljava/lang/String;Lcom/tkay/expressad/foundation/d/c;)V

    goto :goto_2

    .line 1515
    :cond_1
    iget-object p3, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->f:Lcom/tkay/expressad/widget/FeedBackButton;

    if-eqz p3, :cond_2

    .line 1516
    invoke-virtual {p3, v1}, Lcom/tkay/expressad/widget/FeedBackButton;->setVisibility(I)V

    .line 2189
    :cond_2
    :goto_2
    iget-object p3, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->M:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {p3}, Lcom/tkay/expressad/foundation/d/c;->be()Ljava/lang/String;

    move-result-object p3

    invoke-static {p3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p3

    const/4 v2, 0x4

    if-nez p3, :cond_3

    .line 2190
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object p3

    invoke-virtual {p3}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object p3

    invoke-static {p3}, Lcom/tkay/expressad/foundation/g/d/b;->a(Landroid/content/Context;)Lcom/tkay/expressad/foundation/g/d/b;

    move-result-object p3

    iget-object v3, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->M:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v3}, Lcom/tkay/expressad/foundation/d/c;->be()Ljava/lang/String;

    move-result-object v3

    new-instance v4, Lcom/tkay/expressad/splash/view/TYSplashNativeView$1;

    invoke-direct {v4, p0}, Lcom/tkay/expressad/splash/view/TYSplashNativeView$1;-><init>(Lcom/tkay/expressad/splash/view/TYSplashNativeView;)V

    invoke-virtual {p3, v3, v4}, Lcom/tkay/expressad/foundation/g/d/b;->a(Ljava/lang/String;Lcom/tkay/expressad/foundation/g/d/c;)V

    goto :goto_3

    .line 2268
    :cond_3
    iget-object p3, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->c:Lcom/tkay/expressad/splash/view/MBNoRecycledCrashImageView;

    invoke-virtual {p3, v2}, Lcom/tkay/expressad/splash/view/MBNoRecycledCrashImageView;->setVisibility(I)V

    .line 1180
    :goto_3
    invoke-direct {p0}, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->e()V

    .line 2349
    iget-object p3, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->M:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {p3}, Lcom/tkay/expressad/foundation/d/c;->aG()Lcom/tkay/expressad/foundation/d/a;

    move-result-object p3

    if-eqz p3, :cond_4

    iget p3, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->w:I

    if-nez p3, :cond_4

    .line 2350
    iget-object p3, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->M:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {p3}, Lcom/tkay/expressad/foundation/d/c;->aG()Lcom/tkay/expressad/foundation/d/a;

    move-result-object p3

    .line 2351
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    .line 2352
    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->getContext()Landroid/content/Context;

    move-result-object v4

    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->getContext()Landroid/content/Context;

    move-result-object v5

    const-string v6, "tkay_cm_app_info_app_name"

    invoke-static {v5, v6, v0}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v5

    invoke-virtual {v4, v5}, Landroid/content/Context;->getString(I)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p3}, Lcom/tkay/expressad/foundation/d/a;->b()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, "\n"

    .line 2353
    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 2354
    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->getContext()Landroid/content/Context;

    move-result-object v5

    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->getContext()Landroid/content/Context;

    move-result-object v6

    const-string v7, "tkay_cm_app_info_version"

    invoke-static {v6, v7, v0}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v6

    invoke-virtual {v5, v6}, Landroid/content/Context;->getString(I)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p3}, Lcom/tkay/expressad/foundation/d/a;->e()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 2355
    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 2356
    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->getContext()Landroid/content/Context;

    move-result-object v5

    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->getContext()Landroid/content/Context;

    move-result-object v6

    const-string v7, "tkay_cm_app_info_publish"

    invoke-static {v6, v7, v0}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v6

    invoke-virtual {v5, v6}, Landroid/content/Context;->getString(I)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p3}, Lcom/tkay/expressad/foundation/d/a;->f()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 2357
    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 2358
    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->getContext()Landroid/content/Context;

    move-result-object v4

    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->getContext()Landroid/content/Context;

    move-result-object v5

    const-string v6, "tkay_cm_app_info_update_time"

    invoke-static {v5, v6, v0}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    invoke-virtual {v4, v0}, Landroid/content/Context;->getString(I)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p3}, Lcom/tkay/expressad/foundation/d/a;->d()Ljava/lang/String;

    move-result-object p3

    invoke-virtual {v3, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 2360
    iget-object p3, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->o:Landroid/widget/TextView;

    invoke-virtual {p3, v3}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    goto :goto_4

    .line 2362
    :cond_4
    iget-object p3, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->n:Landroid/widget/RelativeLayout;

    invoke-virtual {p3, v1}, Landroid/widget/RelativeLayout;->setVisibility(I)V

    .line 2367
    :goto_4
    iget p3, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->v:I

    if-ne p3, p2, :cond_5

    .line 2368
    iget-object p3, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->r:Lcom/tkay/expressad/splash/view/MBSplashClickView;

    invoke-virtual {p3, v1}, Lcom/tkay/expressad/splash/view/MBSplashClickView;->setVisibility(I)V

    goto :goto_5

    .line 2370
    :cond_5
    iget p3, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->x:I

    if-ne p3, p2, :cond_6

    .line 2371
    iget-object p3, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->r:Lcom/tkay/expressad/splash/view/MBSplashClickView;

    invoke-virtual {p3, v1}, Lcom/tkay/expressad/splash/view/MBSplashClickView;->setVisibility(I)V

    goto :goto_5

    .line 2373
    :cond_6
    iget-object p3, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->r:Lcom/tkay/expressad/splash/view/MBSplashClickView;

    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->M:Lcom/tkay/expressad/foundation/d/c;

    .line 3175
    iget-object v0, v0, Lcom/tkay/expressad/out/d;->cU:Ljava/lang/String;

    .line 2373
    invoke-virtual {p3, v0}, Lcom/tkay/expressad/splash/view/MBSplashClickView;->initView(Ljava/lang/String;)V

    .line 3379
    :goto_5
    iget p3, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->u:I

    if-ne p3, p2, :cond_7

    .line 3380
    new-instance p3, Lcom/tkay/expressad/splash/view/TYSplashNativeView$6;

    invoke-direct {p3, p0}, Lcom/tkay/expressad/splash/view/TYSplashNativeView$6;-><init>(Lcom/tkay/expressad/splash/view/TYSplashNativeView;)V

    invoke-virtual {p0, p3}, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    goto :goto_6

    .line 3387
    :cond_7
    iget-object p3, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->r:Lcom/tkay/expressad/splash/view/MBSplashClickView;

    new-instance v0, Lcom/tkay/expressad/splash/view/TYSplashNativeView$7;

    invoke-direct {v0, p0}, Lcom/tkay/expressad/splash/view/TYSplashNativeView$7;-><init>(Lcom/tkay/expressad/splash/view/TYSplashNativeView;)V

    invoke-virtual {p3, v0}, Lcom/tkay/expressad/splash/view/MBSplashClickView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 3395
    :goto_6
    iget-object p3, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->p:Landroid/widget/TextView;

    new-instance v0, Lcom/tkay/expressad/splash/view/TYSplashNativeView$8;

    invoke-direct {v0, p0}, Lcom/tkay/expressad/splash/view/TYSplashNativeView$8;-><init>(Lcom/tkay/expressad/splash/view/TYSplashNativeView;)V

    invoke-virtual {p3, v0}, Landroid/widget/TextView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 3407
    iget-object p3, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->q:Landroid/widget/TextView;

    new-instance v0, Lcom/tkay/expressad/splash/view/TYSplashNativeView$9;

    invoke-direct {v0, p0}, Lcom/tkay/expressad/splash/view/TYSplashNativeView$9;-><init>(Lcom/tkay/expressad/splash/view/TYSplashNativeView;)V

    invoke-virtual {p3, v0}, Landroid/widget/TextView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 3440
    iget-object p3, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->g:Landroid/widget/TextView;

    new-instance v0, Lcom/tkay/expressad/splash/view/TYSplashNativeView$10;

    invoke-direct {v0, p0}, Lcom/tkay/expressad/splash/view/TYSplashNativeView$10;-><init>(Lcom/tkay/expressad/splash/view/TYSplashNativeView;)V

    invoke-virtual {p3, v0}, Landroid/widget/TextView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 3522
    iget p3, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->x:I

    if-ne p3, p2, :cond_8

    .line 3523
    new-instance p2, Lcom/tkay/expressad/shake/MBShakeView;

    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->getContext()Landroid/content/Context;

    move-result-object p3

    invoke-direct {p2, p3}, Lcom/tkay/expressad/shake/MBShakeView;-><init>(Landroid/content/Context;)V

    iput-object p2, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->N:Lcom/tkay/expressad/shake/MBShakeView;

    .line 3524
    iget-object p3, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->M:Lcom/tkay/expressad/foundation/d/c;

    .line 4175
    iget-object p3, p3, Lcom/tkay/expressad/out/d;->cU:Ljava/lang/String;

    .line 3524
    invoke-virtual {p2, p3}, Lcom/tkay/expressad/shake/MBShakeView;->initView(Ljava/lang/String;)V

    .line 3526
    new-instance p2, Landroid/widget/RelativeLayout$LayoutParams;

    const/4 p3, -0x2

    invoke-direct {p2, p3, p3}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    const/16 p3, 0xd

    .line 3527
    invoke-virtual {p2, p3}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    .line 3528
    iget-object p3, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->N:Lcom/tkay/expressad/shake/MBShakeView;

    invoke-virtual {p3, p2}, Lcom/tkay/expressad/shake/MBShakeView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 3530
    iget-object p2, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->N:Lcom/tkay/expressad/shake/MBShakeView;

    invoke-virtual {p0, p2}, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->addView(Landroid/view/View;)V

    .line 3532
    iget-object p2, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->r:Lcom/tkay/expressad/splash/view/MBSplashClickView;

    invoke-virtual {p2, v2}, Lcom/tkay/expressad/splash/view/MBSplashClickView;->setVisibility(I)V

    .line 3533
    iget-object p2, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->r:Lcom/tkay/expressad/splash/view/MBSplashClickView;

    invoke-virtual {p2, p1}, Lcom/tkay/expressad/splash/view/MBSplashClickView;->setEnabled(Z)V

    .line 3535
    iget-object p1, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->N:Lcom/tkay/expressad/shake/MBShakeView;

    new-instance p2, Lcom/tkay/expressad/splash/view/TYSplashNativeView$2;

    invoke-direct {p2, p0}, Lcom/tkay/expressad/splash/view/TYSplashNativeView$2;-><init>(Lcom/tkay/expressad/splash/view/TYSplashNativeView;)V

    invoke-virtual {p1, p2}, Lcom/tkay/expressad/shake/MBShakeView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 3542
    new-instance p1, Lcom/tkay/expressad/splash/view/TYSplashNativeView$3;

    iget p2, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->y:I

    iget p3, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->z:I

    mul-int/lit16 p3, p3, 0x3e8

    invoke-direct {p1, p0, p2, p3}, Lcom/tkay/expressad/splash/view/TYSplashNativeView$3;-><init>(Lcom/tkay/expressad/splash/view/TYSplashNativeView;II)V

    iput-object p1, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->R:Lcom/tkay/expressad/shake/b;

    .line 1185
    :cond_8
    iget p1, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->s:I

    invoke-virtual {p0, p1}, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->updateCountDown(I)V

    return-void

    .line 106
    :cond_9
    new-instance p1, Ljava/lang/IllegalArgumentException;

    const-string p2, "Parameters is NULL, can\'t gen view."

    invoke-direct {p1, p2}, Ljava/lang/IllegalArgumentException;-><init>(Ljava/lang/String;)V

    throw p1
.end method

.method private a()V
    .locals 5

    const-string v0, "string"

    const-string v1, "id"

    .line 130
    :try_start_0
    iget v2, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->A:I
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const/4 v3, 0x1

    const-string v4, "layout"

    if-ne v2, v3, :cond_0

    .line 131
    :try_start_1
    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->getContext()Landroid/content/Context;

    move-result-object v2

    invoke-virtual {v2}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v2

    const-string v3, "tkay_splash_portrait"

    invoke-static {v2, v3, v4}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v2

    goto :goto_0

    .line 134
    :cond_0
    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->getContext()Landroid/content/Context;

    move-result-object v2

    invoke-virtual {v2}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v2

    const-string v3, "tkay_splash_landscape"

    invoke-static {v2, v3, v4}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v2

    .line 136
    :goto_0
    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->getContext()Landroid/content/Context;

    move-result-object v3

    invoke-static {v3}, Landroid/view/LayoutInflater;->from(Landroid/content/Context;)Landroid/view/LayoutInflater;

    move-result-object v3

    const/4 v4, 0x0

    invoke-virtual {v3, v2, v4}, Landroid/view/LayoutInflater;->inflate(ILandroid/view/ViewGroup;)Landroid/view/View;

    move-result-object v2

    .line 137
    invoke-virtual {p0, v2}, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->addView(Landroid/view/View;)V

    .line 139
    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->getContext()Landroid/content/Context;

    move-result-object v3

    invoke-virtual {v3}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v3

    const-string v4, "tkay_splash_iv_image_bg"

    invoke-static {v3, v4, v1}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v3

    invoke-virtual {v2, v3}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v3

    check-cast v3, Lcom/tkay/expressad/splash/view/MBNoRecycledCrashImageView;

    iput-object v3, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->b:Lcom/tkay/expressad/splash/view/MBNoRecycledCrashImageView;

    .line 140
    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->getContext()Landroid/content/Context;

    move-result-object v3

    invoke-virtual {v3}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v3

    const-string v4, "tkay_splash_iv_image"

    invoke-static {v3, v4, v1}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v3

    invoke-virtual {v2, v3}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v3

    check-cast v3, Lcom/tkay/expressad/splash/view/MBNoRecycledCrashImageView;

    iput-object v3, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->c:Lcom/tkay/expressad/splash/view/MBNoRecycledCrashImageView;

    .line 141
    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->getContext()Landroid/content/Context;

    move-result-object v3

    invoke-virtual {v3}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v3

    const-string v4, "tkay_splash_topcontroller"

    invoke-static {v3, v4, v1}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v3

    invoke-virtual {v2, v3}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v3

    check-cast v3, Landroid/widget/RelativeLayout;

    iput-object v3, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->d:Landroid/widget/RelativeLayout;

    .line 142
    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->getContext()Landroid/content/Context;

    move-result-object v3

    invoke-virtual {v3}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v3

    const-string v4, "tkay_splash_iv_link"

    invoke-static {v3, v4, v1}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v3

    invoke-virtual {v2, v3}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v3

    check-cast v3, Landroid/widget/ImageView;

    iput-object v3, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->e:Landroid/widget/ImageView;

    .line 143
    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->getContext()Landroid/content/Context;

    move-result-object v3

    invoke-virtual {v3}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v3

    const-string v4, "tkay_splash_feedback"

    invoke-static {v3, v4, v1}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v3

    invoke-virtual {v2, v3}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v3

    check-cast v3, Lcom/tkay/expressad/widget/FeedBackButton;

    iput-object v3, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->f:Lcom/tkay/expressad/widget/FeedBackButton;

    .line 144
    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->getContext()Landroid/content/Context;

    move-result-object v3

    invoke-virtual {v3}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v3

    const-string v4, "tkay_splash_tv_skip"

    invoke-static {v3, v4, v1}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v3

    invoke-virtual {v2, v3}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v3

    check-cast v3, Landroid/widget/TextView;

    iput-object v3, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->g:Landroid/widget/TextView;

    .line 145
    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->getContext()Landroid/content/Context;

    move-result-object v3

    invoke-virtual {v3}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v3

    const-string v4, "tkay_splash_landscape_foreground"

    invoke-static {v3, v4, v1}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v3

    invoke-virtual {v2, v3}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v3

    check-cast v3, Landroid/widget/RelativeLayout;

    iput-object v3, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->h:Landroid/widget/RelativeLayout;

    .line 146
    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->getContext()Landroid/content/Context;

    move-result-object v3

    invoke-virtual {v3}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v3

    const-string v4, "tkay_splash_iv_icon"

    invoke-static {v3, v4, v1}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v3

    invoke-virtual {v2, v3}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v3

    check-cast v3, Lcom/tkay/expressad/splash/view/MBNoRecycledCrashImageView;

    iput-object v3, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->i:Lcom/tkay/expressad/splash/view/MBNoRecycledCrashImageView;

    .line 147
    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->getContext()Landroid/content/Context;

    move-result-object v3

    invoke-virtual {v3}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v3

    const-string v4, "tkay_splash_tv_title"

    invoke-static {v3, v4, v1}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v3

    invoke-virtual {v2, v3}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v3

    check-cast v3, Landroid/widget/TextView;

    iput-object v3, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->j:Landroid/widget/TextView;

    .line 148
    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->getContext()Landroid/content/Context;

    move-result-object v3

    invoke-virtual {v3}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v3

    const-string v4, "tkay_splash_iv_foregroundimage"

    invoke-static {v3, v4, v1}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v3

    invoke-virtual {v2, v3}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v3

    check-cast v3, Lcom/tkay/expressad/splash/view/MBNoRecycledCrashImageView;

    iput-object v3, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->k:Lcom/tkay/expressad/splash/view/MBNoRecycledCrashImageView;

    .line 149
    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->getContext()Landroid/content/Context;

    move-result-object v3

    invoke-virtual {v3}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v3

    const-string v4, "tkay_splash_tv_adrect"

    invoke-static {v3, v4, v1}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v3

    invoke-virtual {v2, v3}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v3

    check-cast v3, Landroid/widget/TextView;

    iput-object v3, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->l:Landroid/widget/TextView;

    .line 150
    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->getContext()Landroid/content/Context;

    move-result-object v3

    invoke-virtual {v3}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v3

    const-string v4, "tkay_splash_layout_appinfo"

    invoke-static {v3, v4, v1}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v3

    invoke-virtual {v2, v3}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v3

    check-cast v3, Landroid/widget/RelativeLayout;

    iput-object v3, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->n:Landroid/widget/RelativeLayout;

    .line 151
    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->getContext()Landroid/content/Context;

    move-result-object v3

    invoke-virtual {v3}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v3

    const-string v4, "tkay_splash_tv_appinfo"

    invoke-static {v3, v4, v1}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v3

    invoke-virtual {v2, v3}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v3

    check-cast v3, Landroid/widget/TextView;

    iput-object v3, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->o:Landroid/widget/TextView;

    .line 152
    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->getContext()Landroid/content/Context;

    move-result-object v3

    invoke-virtual {v3}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v3

    const-string v4, "tkay_splash_tv_privacy"

    invoke-static {v3, v4, v1}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v3

    invoke-virtual {v2, v3}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v3

    check-cast v3, Landroid/widget/TextView;

    iput-object v3, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->p:Landroid/widget/TextView;

    .line 153
    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->getContext()Landroid/content/Context;

    move-result-object v3

    invoke-virtual {v3}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v3

    const-string v4, "tkay_splash_tv_permission"

    invoke-static {v3, v4, v1}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v3

    invoke-virtual {v2, v3}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v3

    check-cast v3, Landroid/widget/TextView;

    iput-object v3, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->q:Landroid/widget/TextView;

    .line 154
    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->getContext()Landroid/content/Context;

    move-result-object v3

    invoke-virtual {v3}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v3

    const-string v4, "tkay_splash_tv_click"

    invoke-static {v3, v4, v1}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v3

    invoke-virtual {v2, v3}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v3

    check-cast v3, Lcom/tkay/expressad/splash/view/MBSplashClickView;

    iput-object v3, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->r:Lcom/tkay/expressad/splash/view/MBSplashClickView;

    .line 155
    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->getContext()Landroid/content/Context;

    move-result-object v3

    invoke-virtual {v3}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v3

    const-string v4, "tkay_splash_tv_adcircle"

    invoke-static {v3, v4, v1}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v1

    invoke-virtual {v2, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/TextView;

    iput-object v1, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->m:Landroid/widget/TextView;

    .line 157
    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-virtual {v1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v1

    const-string v2, "tkay_splash_count_time_can_skip"

    invoke-static {v1, v2, v0}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v1

    .line 158
    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->getContext()Landroid/content/Context;

    move-result-object v2

    invoke-virtual {v2}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v2

    const-string v3, "tkay_splash_count_time_can_skip_not"

    invoke-static {v2, v3, v0}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v2

    .line 159
    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->getContext()Landroid/content/Context;

    move-result-object v3

    invoke-virtual {v3}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v3

    const-string v4, "tkay_splash_count_time_can_skip_s"

    invoke-static {v3, v4, v0}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    .line 161
    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->getContext()Landroid/content/Context;

    move-result-object v3

    invoke-virtual {v3}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v3

    invoke-virtual {v3, v1}, Landroid/content/res/Resources;->getString(I)Ljava/lang/String;

    move-result-object v1

    iput-object v1, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->P:Ljava/lang/String;

    .line 162
    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-virtual {v1}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v1

    invoke-virtual {v1, v2}, Landroid/content/res/Resources;->getString(I)Ljava/lang/String;

    move-result-object v1

    iput-object v1, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->Q:Ljava/lang/String;

    .line 163
    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-virtual {v1}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v1

    invoke-virtual {v1, v0}, Landroid/content/res/Resources;->getString(I)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->O:Ljava/lang/String;
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    return-void

    :catchall_0
    move-exception v0

    .line 165
    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    return-void
.end method

.method private a(I)V
    .locals 2

    .line 456
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->L:Lcom/tkay/expressad/splash/view/TYSplashView;

    invoke-virtual {v0}, Lcom/tkay/expressad/splash/view/TYSplashView;->getSplashJSBridgeImpl()Lcom/tkay/expressad/splash/js/SplashJSBridgeImpl;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->L:Lcom/tkay/expressad/splash/view/TYSplashView;

    .line 457
    invoke-virtual {v0}, Lcom/tkay/expressad/splash/view/TYSplashView;->getSplashJSBridgeImpl()Lcom/tkay/expressad/splash/js/SplashJSBridgeImpl;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/expressad/splash/js/SplashJSBridgeImpl;->getSplashBridgeListener()Lcom/tkay/expressad/splash/d/a;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 459
    :try_start_0
    iget v0, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->C:F

    iget v1, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->D:F

    invoke-static {p1, v0, v1}, Lcom/tkay/expressad/splash/a/a/a;->a(IFF)Ljava/lang/String;

    move-result-object p1

    .line 460
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->M:Lcom/tkay/expressad/foundation/d/c;

    invoke-static {p1, v0}, Lcom/tkay/expressad/splash/a/a/a;->a(Ljava/lang/String;Lcom/tkay/expressad/foundation/d/c;)Lcom/tkay/expressad/foundation/d/c;

    move-result-object p1

    .line 461
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->L:Lcom/tkay/expressad/splash/view/TYSplashView;

    invoke-virtual {v0}, Lcom/tkay/expressad/splash/view/TYSplashView;->getSplashJSBridgeImpl()Lcom/tkay/expressad/splash/js/SplashJSBridgeImpl;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/expressad/splash/js/SplashJSBridgeImpl;->getSplashBridgeListener()Lcom/tkay/expressad/splash/d/a;

    move-result-object v0

    invoke-interface {v0, p1}, Lcom/tkay/expressad/splash/d/a;->a(Lcom/tkay/expressad/foundation/d/c;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p1

    .line 463
    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    .line 464
    iget-object p1, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->L:Lcom/tkay/expressad/splash/view/TYSplashView;

    invoke-virtual {p1}, Lcom/tkay/expressad/splash/view/TYSplashView;->getSplashJSBridgeImpl()Lcom/tkay/expressad/splash/js/SplashJSBridgeImpl;

    move-result-object p1

    invoke-virtual {p1}, Lcom/tkay/expressad/splash/js/SplashJSBridgeImpl;->getSplashBridgeListener()Lcom/tkay/expressad/splash/d/a;

    move-result-object p1

    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->M:Lcom/tkay/expressad/foundation/d/c;

    invoke-interface {p1, v0}, Lcom/tkay/expressad/splash/d/a;->a(Lcom/tkay/expressad/foundation/d/c;)V

    :cond_0
    return-void
.end method

.method static synthetic a(Lcom/tkay/expressad/splash/view/TYSplashNativeView;I)V
    .locals 2

    .line 9456
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->L:Lcom/tkay/expressad/splash/view/TYSplashView;

    invoke-virtual {v0}, Lcom/tkay/expressad/splash/view/TYSplashView;->getSplashJSBridgeImpl()Lcom/tkay/expressad/splash/js/SplashJSBridgeImpl;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->L:Lcom/tkay/expressad/splash/view/TYSplashView;

    .line 9457
    invoke-virtual {v0}, Lcom/tkay/expressad/splash/view/TYSplashView;->getSplashJSBridgeImpl()Lcom/tkay/expressad/splash/js/SplashJSBridgeImpl;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/expressad/splash/js/SplashJSBridgeImpl;->getSplashBridgeListener()Lcom/tkay/expressad/splash/d/a;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 9459
    :try_start_0
    iget v0, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->C:F

    iget v1, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->D:F

    invoke-static {p1, v0, v1}, Lcom/tkay/expressad/splash/a/a/a;->a(IFF)Ljava/lang/String;

    move-result-object p1

    .line 9460
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->M:Lcom/tkay/expressad/foundation/d/c;

    invoke-static {p1, v0}, Lcom/tkay/expressad/splash/a/a/a;->a(Ljava/lang/String;Lcom/tkay/expressad/foundation/d/c;)Lcom/tkay/expressad/foundation/d/c;

    move-result-object p1

    .line 9461
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->L:Lcom/tkay/expressad/splash/view/TYSplashView;

    invoke-virtual {v0}, Lcom/tkay/expressad/splash/view/TYSplashView;->getSplashJSBridgeImpl()Lcom/tkay/expressad/splash/js/SplashJSBridgeImpl;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/expressad/splash/js/SplashJSBridgeImpl;->getSplashBridgeListener()Lcom/tkay/expressad/splash/d/a;

    move-result-object v0

    invoke-interface {v0, p1}, Lcom/tkay/expressad/splash/d/a;->a(Lcom/tkay/expressad/foundation/d/c;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p1

    .line 9463
    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    .line 9464
    iget-object p1, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->L:Lcom/tkay/expressad/splash/view/TYSplashView;

    invoke-virtual {p1}, Lcom/tkay/expressad/splash/view/TYSplashView;->getSplashJSBridgeImpl()Lcom/tkay/expressad/splash/js/SplashJSBridgeImpl;

    move-result-object p1

    invoke-virtual {p1}, Lcom/tkay/expressad/splash/js/SplashJSBridgeImpl;->getSplashBridgeListener()Lcom/tkay/expressad/splash/d/a;

    move-result-object p1

    iget-object p0, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->M:Lcom/tkay/expressad/foundation/d/c;

    invoke-interface {p1, p0}, Lcom/tkay/expressad/splash/d/a;->a(Lcom/tkay/expressad/foundation/d/c;)V

    :cond_0
    return-void
.end method

.method private a(Z)V
    .locals 2

    .line 566
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->L:Lcom/tkay/expressad/splash/view/TYSplashView;

    invoke-virtual {v0}, Lcom/tkay/expressad/splash/view/TYSplashView;->getSplashJSBridgeImpl()Lcom/tkay/expressad/splash/js/SplashJSBridgeImpl;

    move-result-object v0

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->L:Lcom/tkay/expressad/splash/view/TYSplashView;

    .line 567
    invoke-virtual {v0}, Lcom/tkay/expressad/splash/view/TYSplashView;->getSplashJSBridgeImpl()Lcom/tkay/expressad/splash/js/SplashJSBridgeImpl;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/expressad/splash/js/SplashJSBridgeImpl;->getSplashBridgeListener()Lcom/tkay/expressad/splash/d/a;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 568
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->L:Lcom/tkay/expressad/splash/view/TYSplashView;

    invoke-virtual {v0}, Lcom/tkay/expressad/splash/view/TYSplashView;->getSplashJSBridgeImpl()Lcom/tkay/expressad/splash/js/SplashJSBridgeImpl;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/expressad/splash/js/SplashJSBridgeImpl;->getSplashBridgeListener()Lcom/tkay/expressad/splash/d/a;

    move-result-object v0

    if-eqz p1, :cond_0

    const/4 p1, 0x2

    goto :goto_0

    :cond_0
    const/4 p1, 0x1

    :goto_0
    iget v1, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->t:I

    invoke-interface {v0, p1, v1}, Lcom/tkay/expressad/splash/d/a;->a(II)V

    :cond_1
    return-void
.end method

.method static synthetic a(Lcom/tkay/expressad/splash/view/TYSplashNativeView;)Z
    .locals 1

    const/4 v0, 0x1

    .line 41
    iput-boolean v0, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->F:Z

    return v0
.end method

.method static synthetic a(Lcom/tkay/expressad/splash/view/TYSplashNativeView;Z)Z
    .locals 0

    .line 41
    iput-boolean p1, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->I:Z

    return p1
.end method

.method static synthetic b(Lcom/tkay/expressad/splash/view/TYSplashNativeView;)Landroid/widget/RelativeLayout;
    .locals 0

    .line 41
    iget-object p0, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->h:Landroid/widget/RelativeLayout;

    return-object p0
.end method

.method private b()V
    .locals 9

    .line 4491
    invoke-static {}, Lcom/tkay/expressad/foundation/f/b;->a()Lcom/tkay/expressad/foundation/f/b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/f/b;->b()Z

    move-result v0

    const/16 v1, 0x8

    if-eqz v0, :cond_0

    .line 4492
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->M:Lcom/tkay/expressad/foundation/d/c;

    iget-object v2, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->J:Ljava/lang/String;

    invoke-virtual {v0, v2}, Lcom/tkay/expressad/foundation/d/c;->l(Ljava/lang/String;)V

    .line 4493
    invoke-static {}, Lcom/tkay/expressad/foundation/f/b;->a()Lcom/tkay/expressad/foundation/f/b;

    move-result-object v0

    iget-object v2, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->J:Ljava/lang/String;

    new-instance v3, Lcom/tkay/expressad/splash/view/TYSplashNativeView$11;

    invoke-direct {v3, p0}, Lcom/tkay/expressad/splash/view/TYSplashNativeView$11;-><init>(Lcom/tkay/expressad/splash/view/TYSplashNativeView;)V

    invoke-virtual {v0, v2, v3}, Lcom/tkay/expressad/foundation/f/b;->a(Ljava/lang/String;Lcom/tkay/expressad/foundation/f/a;)V

    .line 4512
    invoke-static {}, Lcom/tkay/expressad/foundation/f/b;->a()Lcom/tkay/expressad/foundation/f/b;

    move-result-object v0

    iget-object v2, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->J:Ljava/lang/String;

    iget-object v3, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->f:Lcom/tkay/expressad/widget/FeedBackButton;

    invoke-virtual {v0, v2, v3}, Lcom/tkay/expressad/foundation/f/b;->a(Ljava/lang/String;Lcom/tkay/expressad/widget/FeedBackButton;)V

    .line 4513
    invoke-static {}, Lcom/tkay/expressad/foundation/f/b;->a()Lcom/tkay/expressad/foundation/f/b;

    move-result-object v0

    iget-object v2, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->J:Ljava/lang/String;

    iget-object v3, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->M:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0, v2, v3}, Lcom/tkay/expressad/foundation/f/b;->a(Ljava/lang/String;Lcom/tkay/expressad/foundation/d/c;)V

    goto :goto_0

    .line 4515
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->f:Lcom/tkay/expressad/widget/FeedBackButton;

    if-eqz v0, :cond_1

    .line 4516
    invoke-virtual {v0, v1}, Lcom/tkay/expressad/widget/FeedBackButton;->setVisibility(I)V

    .line 5189
    :cond_1
    :goto_0
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->M:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->be()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    const/4 v2, 0x4

    if-nez v0, :cond_2

    .line 5190
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/expressad/foundation/g/d/b;->a(Landroid/content/Context;)Lcom/tkay/expressad/foundation/g/d/b;

    move-result-object v0

    iget-object v3, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->M:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v3}, Lcom/tkay/expressad/foundation/d/c;->be()Ljava/lang/String;

    move-result-object v3

    new-instance v4, Lcom/tkay/expressad/splash/view/TYSplashNativeView$1;

    invoke-direct {v4, p0}, Lcom/tkay/expressad/splash/view/TYSplashNativeView$1;-><init>(Lcom/tkay/expressad/splash/view/TYSplashNativeView;)V

    invoke-virtual {v0, v3, v4}, Lcom/tkay/expressad/foundation/g/d/b;->a(Ljava/lang/String;Lcom/tkay/expressad/foundation/g/d/c;)V

    goto :goto_1

    .line 5268
    :cond_2
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->c:Lcom/tkay/expressad/splash/view/MBNoRecycledCrashImageView;

    invoke-virtual {v0, v2}, Lcom/tkay/expressad/splash/view/MBNoRecycledCrashImageView;->setVisibility(I)V

    .line 180
    :goto_1
    invoke-direct {p0}, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->e()V

    .line 5349
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->M:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->aG()Lcom/tkay/expressad/foundation/d/a;

    move-result-object v0

    if-eqz v0, :cond_3

    iget v0, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->w:I

    if-nez v0, :cond_3

    .line 5350
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->M:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->aG()Lcom/tkay/expressad/foundation/d/a;

    move-result-object v0

    .line 5351
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    .line 5352
    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->getContext()Landroid/content/Context;

    move-result-object v4

    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->getContext()Landroid/content/Context;

    move-result-object v5

    const-string v6, "string"

    const-string v7, "tkay_cm_app_info_app_name"

    invoke-static {v5, v7, v6}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v5

    invoke-virtual {v4, v5}, Landroid/content/Context;->getString(I)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/a;->b()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, "\n"

    .line 5353
    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 5354
    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->getContext()Landroid/content/Context;

    move-result-object v5

    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->getContext()Landroid/content/Context;

    move-result-object v7

    const-string v8, "tkay_cm_app_info_version"

    invoke-static {v7, v8, v6}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v7

    invoke-virtual {v5, v7}, Landroid/content/Context;->getString(I)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/a;->e()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 5355
    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 5356
    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->getContext()Landroid/content/Context;

    move-result-object v5

    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->getContext()Landroid/content/Context;

    move-result-object v7

    const-string v8, "tkay_cm_app_info_publish"

    invoke-static {v7, v8, v6}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v7

    invoke-virtual {v5, v7}, Landroid/content/Context;->getString(I)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/a;->f()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 5357
    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 5358
    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->getContext()Landroid/content/Context;

    move-result-object v4

    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->getContext()Landroid/content/Context;

    move-result-object v5

    const-string v7, "tkay_cm_app_info_update_time"

    invoke-static {v5, v7, v6}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v5

    invoke-virtual {v4, v5}, Landroid/content/Context;->getString(I)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/a;->d()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 5360
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->o:Landroid/widget/TextView;

    invoke-virtual {v0, v3}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    goto :goto_2

    .line 5362
    :cond_3
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->n:Landroid/widget/RelativeLayout;

    invoke-virtual {v0, v1}, Landroid/widget/RelativeLayout;->setVisibility(I)V

    .line 5367
    :goto_2
    iget v0, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->v:I

    const/4 v3, 0x1

    if-ne v0, v3, :cond_4

    .line 5368
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->r:Lcom/tkay/expressad/splash/view/MBSplashClickView;

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/splash/view/MBSplashClickView;->setVisibility(I)V

    goto :goto_3

    .line 5370
    :cond_4
    iget v0, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->x:I

    if-ne v0, v3, :cond_5

    .line 5371
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->r:Lcom/tkay/expressad/splash/view/MBSplashClickView;

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/splash/view/MBSplashClickView;->setVisibility(I)V

    goto :goto_3

    .line 5373
    :cond_5
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->r:Lcom/tkay/expressad/splash/view/MBSplashClickView;

    iget-object v1, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->M:Lcom/tkay/expressad/foundation/d/c;

    .line 6175
    iget-object v1, v1, Lcom/tkay/expressad/out/d;->cU:Ljava/lang/String;

    .line 5373
    invoke-virtual {v0, v1}, Lcom/tkay/expressad/splash/view/MBSplashClickView;->initView(Ljava/lang/String;)V

    .line 6379
    :goto_3
    iget v0, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->u:I

    if-ne v0, v3, :cond_6

    .line 6380
    new-instance v0, Lcom/tkay/expressad/splash/view/TYSplashNativeView$6;

    invoke-direct {v0, p0}, Lcom/tkay/expressad/splash/view/TYSplashNativeView$6;-><init>(Lcom/tkay/expressad/splash/view/TYSplashNativeView;)V

    invoke-virtual {p0, v0}, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    goto :goto_4

    .line 6387
    :cond_6
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->r:Lcom/tkay/expressad/splash/view/MBSplashClickView;

    new-instance v1, Lcom/tkay/expressad/splash/view/TYSplashNativeView$7;

    invoke-direct {v1, p0}, Lcom/tkay/expressad/splash/view/TYSplashNativeView$7;-><init>(Lcom/tkay/expressad/splash/view/TYSplashNativeView;)V

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/splash/view/MBSplashClickView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 6395
    :goto_4
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->p:Landroid/widget/TextView;

    new-instance v1, Lcom/tkay/expressad/splash/view/TYSplashNativeView$8;

    invoke-direct {v1, p0}, Lcom/tkay/expressad/splash/view/TYSplashNativeView$8;-><init>(Lcom/tkay/expressad/splash/view/TYSplashNativeView;)V

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 6407
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->q:Landroid/widget/TextView;

    new-instance v1, Lcom/tkay/expressad/splash/view/TYSplashNativeView$9;

    invoke-direct {v1, p0}, Lcom/tkay/expressad/splash/view/TYSplashNativeView$9;-><init>(Lcom/tkay/expressad/splash/view/TYSplashNativeView;)V

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 6440
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->g:Landroid/widget/TextView;

    new-instance v1, Lcom/tkay/expressad/splash/view/TYSplashNativeView$10;

    invoke-direct {v1, p0}, Lcom/tkay/expressad/splash/view/TYSplashNativeView$10;-><init>(Lcom/tkay/expressad/splash/view/TYSplashNativeView;)V

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 6522
    iget v0, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->x:I

    if-ne v0, v3, :cond_7

    .line 6523
    new-instance v0, Lcom/tkay/expressad/shake/MBShakeView;

    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-direct {v0, v1}, Lcom/tkay/expressad/shake/MBShakeView;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->N:Lcom/tkay/expressad/shake/MBShakeView;

    .line 6524
    iget-object v1, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->M:Lcom/tkay/expressad/foundation/d/c;

    .line 7175
    iget-object v1, v1, Lcom/tkay/expressad/out/d;->cU:Ljava/lang/String;

    .line 6524
    invoke-virtual {v0, v1}, Lcom/tkay/expressad/shake/MBShakeView;->initView(Ljava/lang/String;)V

    .line 6526
    new-instance v0, Landroid/widget/RelativeLayout$LayoutParams;

    const/4 v1, -0x2

    invoke-direct {v0, v1, v1}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    const/16 v1, 0xd

    .line 6527
    invoke-virtual {v0, v1}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    .line 6528
    iget-object v1, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->N:Lcom/tkay/expressad/shake/MBShakeView;

    invoke-virtual {v1, v0}, Lcom/tkay/expressad/shake/MBShakeView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 6530
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->N:Lcom/tkay/expressad/shake/MBShakeView;

    invoke-virtual {p0, v0}, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->addView(Landroid/view/View;)V

    .line 6532
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->r:Lcom/tkay/expressad/splash/view/MBSplashClickView;

    invoke-virtual {v0, v2}, Lcom/tkay/expressad/splash/view/MBSplashClickView;->setVisibility(I)V

    .line 6533
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->r:Lcom/tkay/expressad/splash/view/MBSplashClickView;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/splash/view/MBSplashClickView;->setEnabled(Z)V

    .line 6535
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->N:Lcom/tkay/expressad/shake/MBShakeView;

    new-instance v1, Lcom/tkay/expressad/splash/view/TYSplashNativeView$2;

    invoke-direct {v1, p0}, Lcom/tkay/expressad/splash/view/TYSplashNativeView$2;-><init>(Lcom/tkay/expressad/splash/view/TYSplashNativeView;)V

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/shake/MBShakeView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 6542
    new-instance v0, Lcom/tkay/expressad/splash/view/TYSplashNativeView$3;

    iget v1, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->y:I

    iget v2, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->z:I

    mul-int/lit16 v2, v2, 0x3e8

    invoke-direct {v0, p0, v1, v2}, Lcom/tkay/expressad/splash/view/TYSplashNativeView$3;-><init>(Lcom/tkay/expressad/splash/view/TYSplashNativeView;II)V

    iput-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->R:Lcom/tkay/expressad/shake/b;

    .line 185
    :cond_7
    iget v0, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->s:I

    invoke-virtual {p0, v0}, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->updateCountDown(I)V

    return-void
.end method

.method static synthetic b(Lcom/tkay/expressad/splash/view/TYSplashNativeView;Z)V
    .locals 1

    .line 9566
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->L:Lcom/tkay/expressad/splash/view/TYSplashView;

    invoke-virtual {v0}, Lcom/tkay/expressad/splash/view/TYSplashView;->getSplashJSBridgeImpl()Lcom/tkay/expressad/splash/js/SplashJSBridgeImpl;

    move-result-object v0

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->L:Lcom/tkay/expressad/splash/view/TYSplashView;

    .line 9567
    invoke-virtual {v0}, Lcom/tkay/expressad/splash/view/TYSplashView;->getSplashJSBridgeImpl()Lcom/tkay/expressad/splash/js/SplashJSBridgeImpl;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/expressad/splash/js/SplashJSBridgeImpl;->getSplashBridgeListener()Lcom/tkay/expressad/splash/d/a;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 9568
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->L:Lcom/tkay/expressad/splash/view/TYSplashView;

    invoke-virtual {v0}, Lcom/tkay/expressad/splash/view/TYSplashView;->getSplashJSBridgeImpl()Lcom/tkay/expressad/splash/js/SplashJSBridgeImpl;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/expressad/splash/js/SplashJSBridgeImpl;->getSplashBridgeListener()Lcom/tkay/expressad/splash/d/a;

    move-result-object v0

    if-eqz p1, :cond_0

    const/4 p1, 0x2

    goto :goto_0

    :cond_0
    const/4 p1, 0x1

    :goto_0
    iget p0, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->t:I

    invoke-interface {v0, p1, p0}, Lcom/tkay/expressad/splash/d/a;->a(II)V

    :cond_1
    return-void
.end method

.method static synthetic c(Lcom/tkay/expressad/splash/view/TYSplashNativeView;)Lcom/tkay/expressad/splash/view/MBNoRecycledCrashImageView;
    .locals 0

    .line 41
    iget-object p0, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->c:Lcom/tkay/expressad/splash/view/MBNoRecycledCrashImageView;

    return-object p0
.end method

.method private c()V
    .locals 3

    .line 189
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->M:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->be()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 190
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/expressad/foundation/g/d/b;->a(Landroid/content/Context;)Lcom/tkay/expressad/foundation/g/d/b;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->M:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->be()Ljava/lang/String;

    move-result-object v1

    new-instance v2, Lcom/tkay/expressad/splash/view/TYSplashNativeView$1;

    invoke-direct {v2, p0}, Lcom/tkay/expressad/splash/view/TYSplashNativeView$1;-><init>(Lcom/tkay/expressad/splash/view/TYSplashNativeView;)V

    invoke-virtual {v0, v1, v2}, Lcom/tkay/expressad/foundation/g/d/b;->a(Ljava/lang/String;Lcom/tkay/expressad/foundation/g/d/c;)V

    return-void

    .line 268
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->c:Lcom/tkay/expressad/splash/view/MBNoRecycledCrashImageView;

    const/4 v1, 0x4

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/splash/view/MBNoRecycledCrashImageView;->setVisibility(I)V

    return-void
.end method

.method static synthetic d(Lcom/tkay/expressad/splash/view/TYSplashNativeView;)I
    .locals 0

    .line 41
    iget p0, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->A:I

    return p0
.end method

.method private d()V
    .locals 3

    .line 273
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->M:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->bd()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 274
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/expressad/foundation/g/d/b;->a(Landroid/content/Context;)Lcom/tkay/expressad/foundation/g/d/b;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->M:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->bd()Ljava/lang/String;

    move-result-object v1

    new-instance v2, Lcom/tkay/expressad/splash/view/TYSplashNativeView$4;

    invoke-direct {v2, p0}, Lcom/tkay/expressad/splash/view/TYSplashNativeView$4;-><init>(Lcom/tkay/expressad/splash/view/TYSplashNativeView;)V

    invoke-virtual {v0, v1, v2}, Lcom/tkay/expressad/foundation/g/d/b;->a(Ljava/lang/String;Lcom/tkay/expressad/foundation/g/d/c;)V

    return-void

    .line 302
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->i:Lcom/tkay/expressad/splash/view/MBNoRecycledCrashImageView;

    const/4 v1, 0x4

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/splash/view/MBNoRecycledCrashImageView;->setVisibility(I)V

    return-void
.end method

.method static synthetic e(Lcom/tkay/expressad/splash/view/TYSplashNativeView;)Lcom/tkay/expressad/splash/view/MBNoRecycledCrashImageView;
    .locals 0

    .line 41
    iget-object p0, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->k:Lcom/tkay/expressad/splash/view/MBNoRecycledCrashImageView;

    return-object p0
.end method

.method private e()V
    .locals 7

    .line 307
    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/b/b;->e()Ljava/lang/String;

    .line 308
    invoke-static {}, Lcom/tkay/expressad/d/b;->a()Lcom/tkay/expressad/d/b;

    invoke-static {}, Lcom/tkay/expressad/d/b;->b()Lcom/tkay/expressad/d/a;

    move-result-object v0

    const/16 v1, 0x8

    if-eqz v0, :cond_1

    .line 310
    invoke-virtual {v0}, Lcom/tkay/expressad/d/a;->J()Ljava/lang/String;

    move-result-object v0

    .line 311
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_0

    .line 312
    iget-object v2, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->e:Landroid/widget/ImageView;

    invoke-virtual {v2, v1}, Landroid/widget/ImageView;->setVisibility(I)V

    .line 314
    :cond_0
    iget-object v1, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->e:Landroid/widget/ImageView;

    new-instance v2, Lcom/tkay/expressad/splash/view/TYSplashNativeView$5;

    invoke-direct {v2, p0, v0}, Lcom/tkay/expressad/splash/view/TYSplashNativeView$5;-><init>(Lcom/tkay/expressad/splash/view/TYSplashNativeView;Ljava/lang/String;)V

    invoke-virtual {v1, v2}, Landroid/widget/ImageView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    goto :goto_0

    .line 321
    :cond_1
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->e:Landroid/widget/ImageView;

    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setVisibility(I)V

    .line 324
    :goto_0
    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-virtual {v0}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v0

    const-string v1, "tkay_splash_m_circle"

    const-string v2, "drawable"

    invoke-static {v0, v1, v2}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    const/4 v1, 0x0

    .line 327
    :try_start_0
    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->getResources()Landroid/content/res/Resources;

    move-result-object v2

    invoke-virtual {v2, v0}, Landroid/content/res/Resources;->getDrawable(I)Landroid/graphics/drawable/Drawable;

    move-result-object v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    .line 328
    :try_start_1
    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->getContext()Landroid/content/Context;

    move-result-object v2

    const/high16 v3, 0x41200000    # 10.0f

    invoke-static {v2, v3}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v2

    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->getContext()Landroid/content/Context;

    move-result-object v4

    invoke-static {v4, v3}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v3

    const/4 v4, 0x0

    invoke-virtual {v0, v4, v4, v2, v3}, Landroid/graphics/drawable/Drawable;->setBounds(IIII)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_2

    :catchall_0
    move-exception v2

    goto :goto_1

    :catchall_1
    move-exception v2

    move-object v0, v1

    .line 330
    :goto_1
    invoke-virtual {v2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    .line 333
    :goto_2
    iget v2, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->A:I

    const/4 v3, 0x1

    const/4 v4, 0x4

    const-string v5, "string"

    const-string v6, "tkay_cm_app_info_app_label"

    if-ne v2, v3, :cond_3

    iget-boolean v2, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->F:Z

    if-eqz v2, :cond_3

    .line 334
    iget v2, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->B:I

    if-eqz v2, :cond_2

    if-eqz v0, :cond_2

    .line 335
    iget-object v2, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->m:Landroid/widget/TextView;

    invoke-virtual {v2, v0, v1, v1, v1}, Landroid/widget/TextView;->setCompoundDrawables(Landroid/graphics/drawable/Drawable;Landroid/graphics/drawable/Drawable;Landroid/graphics/drawable/Drawable;Landroid/graphics/drawable/Drawable;)V

    .line 337
    :cond_2
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->m:Landroid/widget/TextView;

    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->getContext()Landroid/content/Context;

    move-result-object v2

    invoke-static {v2, v6, v5}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v2

    invoke-virtual {v1, v2}, Landroid/content/Context;->getString(I)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 338
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->l:Landroid/widget/TextView;

    invoke-virtual {v0, v4}, Landroid/widget/TextView;->setVisibility(I)V

    return-void

    .line 340
    :cond_3
    iget v2, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->B:I

    if-eqz v2, :cond_4

    if-eqz v0, :cond_4

    .line 341
    iget-object v2, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->l:Landroid/widget/TextView;

    invoke-virtual {v2, v0, v1, v1, v1}, Landroid/widget/TextView;->setCompoundDrawables(Landroid/graphics/drawable/Drawable;Landroid/graphics/drawable/Drawable;Landroid/graphics/drawable/Drawable;Landroid/graphics/drawable/Drawable;)V

    .line 343
    :cond_4
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->l:Landroid/widget/TextView;

    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->getContext()Landroid/content/Context;

    move-result-object v2

    invoke-static {v2, v6, v5}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v2

    invoke-virtual {v1, v2}, Landroid/content/Context;->getString(I)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 344
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->m:Landroid/widget/TextView;

    invoke-virtual {v0, v4}, Landroid/widget/TextView;->setVisibility(I)V

    return-void
.end method

.method static synthetic f(Lcom/tkay/expressad/splash/view/TYSplashNativeView;)Lcom/tkay/expressad/foundation/d/c;
    .locals 0

    .line 41
    iget-object p0, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->M:Lcom/tkay/expressad/foundation/d/c;

    return-object p0
.end method

.method private f()V
    .locals 7

    .line 349
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->M:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->aG()Lcom/tkay/expressad/foundation/d/a;

    move-result-object v0

    if-eqz v0, :cond_0

    iget v0, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->w:I

    if-nez v0, :cond_0

    .line 350
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->M:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->aG()Lcom/tkay/expressad/foundation/d/a;

    move-result-object v0

    .line 351
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    .line 352
    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->getContext()Landroid/content/Context;

    move-result-object v2

    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->getContext()Landroid/content/Context;

    move-result-object v3

    const-string v4, "string"

    const-string v5, "tkay_cm_app_info_app_name"

    invoke-static {v3, v5, v4}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v3

    invoke-virtual {v2, v3}, Landroid/content/Context;->getString(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/a;->b()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "\n"

    .line 353
    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 354
    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->getContext()Landroid/content/Context;

    move-result-object v3

    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->getContext()Landroid/content/Context;

    move-result-object v5

    const-string v6, "tkay_cm_app_info_version"

    invoke-static {v5, v6, v4}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v5

    invoke-virtual {v3, v5}, Landroid/content/Context;->getString(I)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/a;->e()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 355
    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 356
    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->getContext()Landroid/content/Context;

    move-result-object v3

    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->getContext()Landroid/content/Context;

    move-result-object v5

    const-string v6, "tkay_cm_app_info_publish"

    invoke-static {v5, v6, v4}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v5

    invoke-virtual {v3, v5}, Landroid/content/Context;->getString(I)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/a;->f()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 357
    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 358
    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->getContext()Landroid/content/Context;

    move-result-object v2

    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->getContext()Landroid/content/Context;

    move-result-object v3

    const-string v5, "tkay_cm_app_info_update_time"

    invoke-static {v3, v5, v4}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v3

    invoke-virtual {v2, v3}, Landroid/content/Context;->getString(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/a;->d()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 360
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->o:Landroid/widget/TextView;

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    return-void

    .line 362
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->n:Landroid/widget/RelativeLayout;

    const/16 v1, 0x8

    invoke-virtual {v0, v1}, Landroid/widget/RelativeLayout;->setVisibility(I)V

    return-void
.end method

.method static synthetic g(Lcom/tkay/expressad/splash/view/TYSplashNativeView;)Landroid/widget/TextView;
    .locals 0

    .line 41
    iget-object p0, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->j:Landroid/widget/TextView;

    return-object p0
.end method

.method private g()V
    .locals 3

    .line 367
    iget v0, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->v:I

    const/16 v1, 0x8

    const/4 v2, 0x1

    if-ne v0, v2, :cond_0

    .line 368
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->r:Lcom/tkay/expressad/splash/view/MBSplashClickView;

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/splash/view/MBSplashClickView;->setVisibility(I)V

    return-void

    .line 370
    :cond_0
    iget v0, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->x:I

    if-ne v0, v2, :cond_1

    .line 371
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->r:Lcom/tkay/expressad/splash/view/MBSplashClickView;

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/splash/view/MBSplashClickView;->setVisibility(I)V

    return-void

    .line 373
    :cond_1
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->r:Lcom/tkay/expressad/splash/view/MBSplashClickView;

    iget-object v1, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->M:Lcom/tkay/expressad/foundation/d/c;

    .line 8175
    iget-object v1, v1, Lcom/tkay/expressad/out/d;->cU:Ljava/lang/String;

    .line 373
    invoke-virtual {v0, v1}, Lcom/tkay/expressad/splash/view/MBSplashClickView;->initView(Ljava/lang/String;)V

    return-void
.end method

.method private h()V
    .locals 2

    .line 379
    iget v0, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->u:I

    const/4 v1, 0x1

    if-ne v0, v1, :cond_0

    .line 380
    new-instance v0, Lcom/tkay/expressad/splash/view/TYSplashNativeView$6;

    invoke-direct {v0, p0}, Lcom/tkay/expressad/splash/view/TYSplashNativeView$6;-><init>(Lcom/tkay/expressad/splash/view/TYSplashNativeView;)V

    invoke-virtual {p0, v0}, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    goto :goto_0

    .line 387
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->r:Lcom/tkay/expressad/splash/view/MBSplashClickView;

    new-instance v1, Lcom/tkay/expressad/splash/view/TYSplashNativeView$7;

    invoke-direct {v1, p0}, Lcom/tkay/expressad/splash/view/TYSplashNativeView$7;-><init>(Lcom/tkay/expressad/splash/view/TYSplashNativeView;)V

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/splash/view/MBSplashClickView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 395
    :goto_0
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->p:Landroid/widget/TextView;

    new-instance v1, Lcom/tkay/expressad/splash/view/TYSplashNativeView$8;

    invoke-direct {v1, p0}, Lcom/tkay/expressad/splash/view/TYSplashNativeView$8;-><init>(Lcom/tkay/expressad/splash/view/TYSplashNativeView;)V

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 407
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->q:Landroid/widget/TextView;

    new-instance v1, Lcom/tkay/expressad/splash/view/TYSplashNativeView$9;

    invoke-direct {v1, p0}, Lcom/tkay/expressad/splash/view/TYSplashNativeView$9;-><init>(Lcom/tkay/expressad/splash/view/TYSplashNativeView;)V

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 440
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->g:Landroid/widget/TextView;

    new-instance v1, Lcom/tkay/expressad/splash/view/TYSplashNativeView$10;

    invoke-direct {v1, p0}, Lcom/tkay/expressad/splash/view/TYSplashNativeView$10;-><init>(Lcom/tkay/expressad/splash/view/TYSplashNativeView;)V

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    return-void
.end method

.method static synthetic h(Lcom/tkay/expressad/splash/view/TYSplashNativeView;)V
    .locals 3

    .line 9273
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->M:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->bd()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 9274
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/expressad/foundation/g/d/b;->a(Landroid/content/Context;)Lcom/tkay/expressad/foundation/g/d/b;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->M:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->bd()Ljava/lang/String;

    move-result-object v1

    new-instance v2, Lcom/tkay/expressad/splash/view/TYSplashNativeView$4;

    invoke-direct {v2, p0}, Lcom/tkay/expressad/splash/view/TYSplashNativeView$4;-><init>(Lcom/tkay/expressad/splash/view/TYSplashNativeView;)V

    invoke-virtual {v0, v1, v2}, Lcom/tkay/expressad/foundation/g/d/b;->a(Ljava/lang/String;Lcom/tkay/expressad/foundation/g/d/c;)V

    return-void

    .line 9302
    :cond_0
    iget-object p0, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->i:Lcom/tkay/expressad/splash/view/MBNoRecycledCrashImageView;

    const/4 v0, 0x4

    invoke-virtual {p0, v0}, Lcom/tkay/expressad/splash/view/MBNoRecycledCrashImageView;->setVisibility(I)V

    return-void
.end method

.method static synthetic i(Lcom/tkay/expressad/splash/view/TYSplashNativeView;)Lcom/tkay/expressad/splash/view/MBNoRecycledCrashImageView;
    .locals 0

    .line 41
    iget-object p0, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->b:Lcom/tkay/expressad/splash/view/MBNoRecycledCrashImageView;

    return-object p0
.end method

.method private i()V
    .locals 3

    .line 491
    invoke-static {}, Lcom/tkay/expressad/foundation/f/b;->a()Lcom/tkay/expressad/foundation/f/b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/f/b;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 492
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->M:Lcom/tkay/expressad/foundation/d/c;

    iget-object v1, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->J:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/foundation/d/c;->l(Ljava/lang/String;)V

    .line 493
    invoke-static {}, Lcom/tkay/expressad/foundation/f/b;->a()Lcom/tkay/expressad/foundation/f/b;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->J:Ljava/lang/String;

    new-instance v2, Lcom/tkay/expressad/splash/view/TYSplashNativeView$11;

    invoke-direct {v2, p0}, Lcom/tkay/expressad/splash/view/TYSplashNativeView$11;-><init>(Lcom/tkay/expressad/splash/view/TYSplashNativeView;)V

    invoke-virtual {v0, v1, v2}, Lcom/tkay/expressad/foundation/f/b;->a(Ljava/lang/String;Lcom/tkay/expressad/foundation/f/a;)V

    .line 512
    invoke-static {}, Lcom/tkay/expressad/foundation/f/b;->a()Lcom/tkay/expressad/foundation/f/b;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->J:Ljava/lang/String;

    iget-object v2, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->f:Lcom/tkay/expressad/widget/FeedBackButton;

    invoke-virtual {v0, v1, v2}, Lcom/tkay/expressad/foundation/f/b;->a(Ljava/lang/String;Lcom/tkay/expressad/widget/FeedBackButton;)V

    .line 513
    invoke-static {}, Lcom/tkay/expressad/foundation/f/b;->a()Lcom/tkay/expressad/foundation/f/b;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->J:Ljava/lang/String;

    iget-object v2, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->M:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0, v1, v2}, Lcom/tkay/expressad/foundation/f/b;->a(Ljava/lang/String;Lcom/tkay/expressad/foundation/d/c;)V

    return-void

    .line 515
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->f:Lcom/tkay/expressad/widget/FeedBackButton;

    if-eqz v0, :cond_1

    const/16 v1, 0x8

    .line 516
    invoke-virtual {v0, v1}, Lcom/tkay/expressad/widget/FeedBackButton;->setVisibility(I)V

    :cond_1
    return-void
.end method

.method static synthetic j(Lcom/tkay/expressad/splash/view/TYSplashNativeView;)Lcom/tkay/expressad/splash/view/MBNoRecycledCrashImageView;
    .locals 0

    .line 41
    iget-object p0, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->i:Lcom/tkay/expressad/splash/view/MBNoRecycledCrashImageView;

    return-object p0
.end method

.method private j()V
    .locals 3

    .line 522
    iget v0, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->x:I

    const/4 v1, 0x1

    if-ne v0, v1, :cond_0

    .line 523
    new-instance v0, Lcom/tkay/expressad/shake/MBShakeView;

    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-direct {v0, v1}, Lcom/tkay/expressad/shake/MBShakeView;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->N:Lcom/tkay/expressad/shake/MBShakeView;

    .line 524
    iget-object v1, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->M:Lcom/tkay/expressad/foundation/d/c;

    .line 9175
    iget-object v1, v1, Lcom/tkay/expressad/out/d;->cU:Ljava/lang/String;

    .line 524
    invoke-virtual {v0, v1}, Lcom/tkay/expressad/shake/MBShakeView;->initView(Ljava/lang/String;)V

    .line 526
    new-instance v0, Landroid/widget/RelativeLayout$LayoutParams;

    const/4 v1, -0x2

    invoke-direct {v0, v1, v1}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    const/16 v1, 0xd

    .line 527
    invoke-virtual {v0, v1}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    .line 528
    iget-object v1, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->N:Lcom/tkay/expressad/shake/MBShakeView;

    invoke-virtual {v1, v0}, Lcom/tkay/expressad/shake/MBShakeView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 530
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->N:Lcom/tkay/expressad/shake/MBShakeView;

    invoke-virtual {p0, v0}, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->addView(Landroid/view/View;)V

    .line 532
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->r:Lcom/tkay/expressad/splash/view/MBSplashClickView;

    const/4 v1, 0x4

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/splash/view/MBSplashClickView;->setVisibility(I)V

    .line 533
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->r:Lcom/tkay/expressad/splash/view/MBSplashClickView;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/splash/view/MBSplashClickView;->setEnabled(Z)V

    .line 535
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->N:Lcom/tkay/expressad/shake/MBShakeView;

    new-instance v1, Lcom/tkay/expressad/splash/view/TYSplashNativeView$2;

    invoke-direct {v1, p0}, Lcom/tkay/expressad/splash/view/TYSplashNativeView$2;-><init>(Lcom/tkay/expressad/splash/view/TYSplashNativeView;)V

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/shake/MBShakeView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 542
    new-instance v0, Lcom/tkay/expressad/splash/view/TYSplashNativeView$3;

    iget v1, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->y:I

    iget v2, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->z:I

    mul-int/lit16 v2, v2, 0x3e8

    invoke-direct {v0, p0, v1, v2}, Lcom/tkay/expressad/splash/view/TYSplashNativeView$3;-><init>(Lcom/tkay/expressad/splash/view/TYSplashNativeView;II)V

    iput-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->R:Lcom/tkay/expressad/shake/b;

    :cond_0
    return-void
.end method

.method static synthetic k(Lcom/tkay/expressad/splash/view/TYSplashNativeView;)Z
    .locals 0

    .line 41
    iget-boolean p0, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->G:Z

    return p0
.end method

.method static synthetic l(Lcom/tkay/expressad/splash/view/TYSplashNativeView;)Lcom/tkay/expressad/splash/view/TYSplashView;
    .locals 0

    .line 41
    iget-object p0, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->L:Lcom/tkay/expressad/splash/view/TYSplashView;

    return-object p0
.end method

.method static synthetic m(Lcom/tkay/expressad/splash/view/TYSplashNativeView;)Landroid/widget/TextView;
    .locals 0

    .line 41
    iget-object p0, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->g:Landroid/widget/TextView;

    return-object p0
.end method

.method static synthetic n(Lcom/tkay/expressad/splash/view/TYSplashNativeView;)Z
    .locals 0

    .line 41
    iget-boolean p0, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->I:Z

    return p0
.end method

.method static synthetic o(Lcom/tkay/expressad/splash/view/TYSplashNativeView;)Z
    .locals 0

    .line 41
    iget-boolean p0, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->H:Z

    return p0
.end method


# virtual methods
.method protected onAttachedToWindow()V
    .locals 2

    .line 574
    invoke-super {p0}, Landroid/widget/RelativeLayout;->onAttachedToWindow()V

    .line 576
    :try_start_0
    iget v0, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->x:I

    const/4 v1, 0x1

    if-ne v0, v1, :cond_0

    .line 577
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->N:Lcom/tkay/expressad/shake/MBShakeView;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->R:Lcom/tkay/expressad/shake/b;

    if-eqz v0, :cond_0

    .line 578
    invoke-static {}, Lcom/tkay/expressad/shake/a;->a()Lcom/tkay/expressad/shake/a;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->R:Lcom/tkay/expressad/shake/b;

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/shake/a;->a(Landroid/hardware/SensorEventListener;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_0
    return-void

    :catchall_0
    move-exception v0

    .line 582
    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    return-void
.end method

.method protected onDetachedFromWindow()V
    .locals 0

    .line 588
    invoke-super {p0}, Landroid/widget/RelativeLayout;->onDetachedFromWindow()V

    .line 589
    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->release()V

    return-void
.end method

.method public onInterceptTouchEvent(Landroid/view/MotionEvent;)Z
    .locals 1

    .line 594
    invoke-virtual {p1}, Landroid/view/MotionEvent;->getRawX()F

    move-result v0

    iput v0, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->C:F

    .line 595
    invoke-virtual {p1}, Landroid/view/MotionEvent;->getRawY()F

    move-result v0

    iput v0, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->D:F

    .line 596
    invoke-super {p0, p1}, Landroid/widget/RelativeLayout;->onInterceptTouchEvent(Landroid/view/MotionEvent;)Z

    move-result p1

    return p1
.end method

.method protected onLayout(ZIIII)V
    .locals 1

    .line 601
    invoke-super/range {p0 .. p5}, Landroid/widget/RelativeLayout;->onLayout(ZIIII)V

    .line 602
    iget-object p1, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->g:Landroid/widget/TextView;

    if-eqz p1, :cond_0

    invoke-virtual {p1}, Landroid/widget/TextView;->getParent()Landroid/view/ViewParent;

    move-result-object p1

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->g:Landroid/widget/TextView;

    invoke-virtual {p1}, Landroid/widget/TextView;->getParent()Landroid/view/ViewParent;

    move-result-object p1

    instance-of p1, p1, Landroid/view/ViewGroup;

    if-eqz p1, :cond_0

    .line 603
    iget-object p1, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->g:Landroid/widget/TextView;

    invoke-virtual {p1}, Landroid/widget/TextView;->getParent()Landroid/view/ViewParent;

    move-result-object p1

    check-cast p1, Landroid/view/ViewGroup;

    invoke-virtual {p1}, Landroid/view/ViewGroup;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object p1

    .line 604
    instance-of p2, p1, Landroid/widget/RelativeLayout$LayoutParams;

    if-eqz p2, :cond_0

    .line 605
    check-cast p1, Landroid/widget/RelativeLayout$LayoutParams;

    iget p1, p1, Landroid/widget/RelativeLayout$LayoutParams;->topMargin:I

    .line 606
    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->getContext()Landroid/content/Context;

    move-result-object p2

    invoke-static {p2}, Lcom/tkay/core/common/l/h;->b(Landroid/content/Context;)I

    move-result p2

    add-int/2addr p1, p2

    const/4 p2, 0x2

    new-array p2, p2, [I

    .line 609
    iget-object p3, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->g:Landroid/widget/TextView;

    invoke-virtual {p3, p2}, Landroid/widget/TextView;->getLocationOnScreen([I)V

    const/4 p3, 0x1

    .line 610
    aget p4, p2, p3

    if-ge p4, p1, :cond_0

    .line 612
    aget p2, p2, p3

    sub-int/2addr p1, p2

    .line 613
    iget-object p2, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->g:Landroid/widget/TextView;

    invoke-virtual {p2}, Landroid/widget/TextView;->getParent()Landroid/view/ViewParent;

    move-result-object p2

    .line 614
    instance-of p3, p2, Landroid/view/ViewGroup;

    if-eqz p3, :cond_0

    .line 615
    check-cast p2, Landroid/view/ViewGroup;

    invoke-virtual {p2}, Landroid/view/ViewGroup;->getPaddingLeft()I

    move-result p3

    .line 616
    invoke-virtual {p2}, Landroid/view/ViewGroup;->getPaddingTop()I

    move-result p4

    add-int/2addr p4, p1

    .line 617
    invoke-virtual {p2}, Landroid/view/ViewGroup;->getPaddingRight()I

    move-result p5

    .line 618
    invoke-virtual {p2}, Landroid/view/ViewGroup;->getPaddingBottom()I

    move-result v0

    add-int/2addr v0, p1

    .line 615
    invoke-virtual {p2, p3, p4, p5, v0}, Landroid/view/ViewGroup;->setPadding(IIII)V

    :cond_0
    return-void
.end method

.method public release()V
    .locals 2

    .line 627
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->R:Lcom/tkay/expressad/shake/b;

    if-eqz v0, :cond_0

    .line 628
    invoke-static {}, Lcom/tkay/expressad/shake/a;->a()Lcom/tkay/expressad/shake/a;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->R:Lcom/tkay/expressad/shake/b;

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/shake/a;->b(Landroid/hardware/SensorEventListener;)V

    const/4 v0, 0x0

    .line 629
    iput-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->R:Lcom/tkay/expressad/shake/b;

    .line 631
    :cond_0
    invoke-static {}, Lcom/tkay/expressad/foundation/f/b;->a()Lcom/tkay/expressad/foundation/f/b;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->J:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/foundation/f/b;->c(Ljava/lang/String;)V

    .line 632
    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->detachAllViewsFromParent()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception v0

    .line 634
    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    return-void
.end method

.method public setIsPause(Z)V
    .locals 0

    .line 483
    iput-boolean p1, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->H:Z

    return-void
.end method

.method public setNotchPadding(IIII)V
    .locals 1

    .line 487
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->d:Landroid/widget/RelativeLayout;

    invoke-virtual {v0, p1, p3, p2, p4}, Landroid/widget/RelativeLayout;->setPadding(IIII)V

    return-void
.end method

.method public updateCountDown(I)V
    .locals 3

    .line 470
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->g:Landroid/widget/TextView;

    if-eqz v0, :cond_1

    .line 471
    iput p1, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->t:I

    .line 473
    iget-boolean v0, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->G:Z

    const-string v1, " "

    if-eqz v0, :cond_0

    .line 474
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v2, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->P:Ljava/lang/String;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    iget-object p1, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->O:Ljava/lang/String;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    goto :goto_0

    .line 476
    :cond_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    iget-object p1, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->O:Ljava/lang/String;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object p1, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->Q:Ljava/lang/String;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    .line 478
    :goto_0
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->g:Landroid/widget/TextView;

    invoke-virtual {v0, p1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    :cond_1
    return-void
.end method
