.class public La/a/a/a/f;
.super Ljava/lang/Object;
.source "SplashViewUtils.java"


# static fields
.field public static b:La/a/a/a/f;


# instance fields
.field public a:Landroid/widget/ImageView;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 1
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static a()La/a/a/a/f;
    .locals 2

    .line 2
    sget-object v0, La/a/a/a/f;->b:La/a/a/a/f;

    if-nez v0, :cond_1

    .line 3
    const-class v0, La/a/a/a/f;

    monitor-enter v0

    .line 4
    :try_start_0
    sget-object v1, La/a/a/a/f;->b:La/a/a/a/f;

    if-nez v1, :cond_0

    .line 5
    new-instance v1, La/a/a/a/f;

    invoke-direct {v1}, La/a/a/a/f;-><init>()V

    sput-object v1, La/a/a/a/f;->b:La/a/a/a/f;

    .line 7
    :cond_0
    monitor-exit v0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1

    .line 9
    :cond_1
    :goto_0
    sget-object v0, La/a/a/a/f;->b:La/a/a/a/f;

    return-object v0
.end method

.method public static synthetic a(La/a/a/a/f;)Landroid/widget/ImageView;
    .locals 0

    .line 1
    iget-object p0, p0, La/a/a/a/f;->a:Landroid/widget/ImageView;

    return-object p0
.end method


# virtual methods
.method public final a(Landroid/content/Context;Ljava/lang/String;)I
    .locals 2

    const-string v0, "\\."

    .line 29
    invoke-virtual {p2, v0}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object p2

    const/4 v0, 0x2

    .line 30
    aget-object v0, p2, v0

    const/4 v1, 0x1

    aget-object p2, p2, v1

    invoke-virtual {p0, p1, v0, p2}, La/a/a/a/f;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result p1

    return p1
.end method

.method public final a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I
    .locals 1

    .line 31
    :try_start_0
    invoke-virtual {p1}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v0

    invoke-virtual {p1}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    const-string p1, "com.daren.goldzj"

    invoke-virtual {v0, p2, p3, p1}, Landroid/content/res/Resources;->getIdentifier(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)I

    move-result p1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return p1

    :catch_0
    move-exception p1

    .line 33
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    const/4 p1, 0x0

    return p1
.end method

.method public a(Landroid/app/Activity;)V
    .locals 1

    .line 18
    :try_start_0
    new-instance v0, La/a/a/a/f$a;

    invoke-direct {v0, p0}, La/a/a/a/f$a;-><init>(La/a/a/a/f;)V

    invoke-virtual {p1, v0}, Landroid/app/Activity;->runOnUiThread(Ljava/lang/Runnable;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 28
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-void
.end method

.method public a(Landroid/app/Activity;Ljava/lang/String;)V
    .locals 2

    .line 10
    :try_start_0
    new-instance v0, Landroid/widget/ImageView;

    invoke-direct {v0, p1}, Landroid/widget/ImageView;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, La/a/a/a/f;->a:Landroid/widget/ImageView;

    .line 11
    iget-object v0, p0, La/a/a/a/f;->a:Landroid/widget/ImageView;

    invoke-virtual {p0, p1, p2}, La/a/a/a/f;->a(Landroid/content/Context;Ljava/lang/String;)I

    move-result p2

    invoke-virtual {v0, p2}, Landroid/widget/ImageView;->setImageResource(I)V

    .line 12
    iget-object p2, p0, La/a/a/a/f;->a:Landroid/widget/ImageView;

    sget-object v0, Landroid/widget/ImageView$ScaleType;->FIT_XY:Landroid/widget/ImageView$ScaleType;

    invoke-virtual {p2, v0}, Landroid/widget/ImageView;->setScaleType(Landroid/widget/ImageView$ScaleType;)V

    .line 13
    iget-object p2, p0, La/a/a/a/f;->a:Landroid/widget/ImageView;

    new-instance v0, Landroid/view/WindowManager$LayoutParams;

    const/4 v1, -0x1

    invoke-direct {v0, v1, v1}, Landroid/view/WindowManager$LayoutParams;-><init>(II)V

    invoke-virtual {p1, p2, v0}, Landroid/app/Activity;->addContentView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 17
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-void
.end method
