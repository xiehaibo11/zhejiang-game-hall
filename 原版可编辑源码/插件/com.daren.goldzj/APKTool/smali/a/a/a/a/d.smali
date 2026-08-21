.class public La/a/a/a/d;
.super Ljava/lang/Object;
.source "NotchScreenUtils.java"


# static fields
.field public static b:La/a/a/a/d;


# instance fields
.field public a:I


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 1
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    .line 25
    iput v0, p0, La/a/a/a/d;->a:I

    return-void
.end method

.method public static synthetic a(La/a/a/a/d;)I
    .locals 0

    .line 1
    iget p0, p0, La/a/a/a/d;->a:I

    return p0
.end method

.method public static synthetic a(La/a/a/a/d;I)I
    .locals 0

    .line 2
    iput p1, p0, La/a/a/a/d;->a:I

    return p1
.end method

.method public static synthetic a(La/a/a/a/d;Landroid/app/Activity;)Z
    .locals 0

    .line 3
    invoke-virtual {p0, p1}, La/a/a/a/d;->c(Landroid/app/Activity;)Z

    move-result p0

    return p0
.end method

.method public static b()La/a/a/a/d;
    .locals 1

    .line 1
    sget-object v0, La/a/a/a/d;->b:La/a/a/a/d;

    if-nez v0, :cond_0

    .line 2
    new-instance v0, La/a/a/a/d;

    invoke-direct {v0}, La/a/a/a/d;-><init>()V

    sput-object v0, La/a/a/a/d;->b:La/a/a/a/d;

    .line 4
    :cond_0
    sget-object v0, La/a/a/a/d;->b:La/a/a/a/d;

    return-object v0
.end method


# virtual methods
.method public a()I
    .locals 1

    .line 4
    iget v0, p0, La/a/a/a/d;->a:I

    return v0
.end method

.method public final a(Landroid/app/Activity;)I
    .locals 2

    .line 5
    :try_start_0
    invoke-virtual {p1}, Landroid/app/Activity;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object v0

    .line 6
    invoke-virtual {p1}, Landroid/app/Activity;->getComponentName()Landroid/content/ComponentName;

    move-result-object p1

    const/16 v1, 0x80

    invoke-virtual {v0, p1, v1}, Landroid/content/pm/PackageManager;->getActivityInfo(Landroid/content/ComponentName;I)Landroid/content/pm/ActivityInfo;

    move-result-object p1

    .line 7
    iget p1, p1, Landroid/content/pm/ActivityInfo;->screenOrientation:I
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return p1

    :catch_0
    move-exception p1

    .line 10
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    const/4 p1, 0x0

    return p1
.end method

.method public final b(Landroid/app/Activity;)I
    .locals 3

    .line 5
    invoke-static {}, La/a/a/a/e;->c()Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-static {p1}, La/a/a/a/a;->b(Landroid/content/Context;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 6
    invoke-static {p1}, La/a/a/a/a;->a(Landroid/content/Context;)I

    move-result p1

    return p1

    .line 8
    :cond_0
    invoke-virtual {p1}, Landroid/app/Activity;->getResources()Landroid/content/res/Resources;

    move-result-object p1

    const-string v0, "status_bar_height"

    const-string v1, "dimen"

    const-string v2, "com.daren.goldzj"

    .line 9
    invoke-virtual {p1, v0, v1, v2}, Landroid/content/res/Resources;->getIdentifier(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    .line 10
    invoke-virtual {p1, v0}, Landroid/content/res/Resources;->getDimensionPixelSize(I)I

    move-result p1

    return p1
.end method

.method public final c(Landroid/app/Activity;)Z
    .locals 1

    .line 1
    invoke-virtual {p0, p1}, La/a/a/a/d;->a(Landroid/app/Activity;)I

    move-result v0

    .line 2
    invoke-virtual {p1}, Landroid/app/Activity;->getResources()Landroid/content/res/Resources;

    move-result-object p1

    invoke-virtual {p1}, Landroid/content/res/Resources;->getConfiguration()Landroid/content/res/Configuration;

    const/4 p1, 0x2

    if-ne v0, p1, :cond_0

    const/4 p1, 0x1

    goto :goto_0

    :cond_0
    const/4 p1, 0x0

    :goto_0
    return p1
.end method

.method public d(Landroid/app/Activity;)V
    .locals 3

    .line 1
    invoke-static {}, La/a/a/a/e;->f()Z

    move-result v0

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    .line 2
    iput v1, p0, La/a/a/a/d;->a:I

    return-void

    .line 5
    :cond_0
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v2, 0x1a

    if-ge v0, v2, :cond_1

    .line 6
    iput v1, p0, La/a/a/a/d;->a:I

    return-void

    :cond_1
    const/16 v1, 0x1c

    if-ge v0, v1, :cond_2

    .line 10
    invoke-virtual {p0, p1}, La/a/a/a/d;->b(Landroid/app/Activity;)I

    move-result p1

    iput p1, p0, La/a/a/a/d;->a:I

    return-void

    .line 13
    :cond_2
    invoke-virtual {p1}, Landroid/app/Activity;->getWindow()Landroid/view/Window;

    move-result-object v0

    invoke-virtual {v0}, Landroid/view/Window;->getDecorView()Landroid/view/View;

    move-result-object v0

    new-instance v1, La/a/a/a/d$a;

    invoke-direct {v1, p0, p1}, La/a/a/a/d$a;-><init>(La/a/a/a/d;Landroid/app/Activity;)V

    invoke-virtual {v0, v1}, Landroid/view/View;->setOnApplyWindowInsetsListener(Landroid/view/View$OnApplyWindowInsetsListener;)V

    return-void
.end method
