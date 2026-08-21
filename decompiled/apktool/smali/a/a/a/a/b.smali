.class public La/a/a/a/b;
.super Ljava/lang/Object;
.source "FullScreenUtils.java"


# static fields
.field public static a:La/a/a/a/b;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 1
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static b()La/a/a/a/b;
    .locals 1

    .line 1
    sget-object v0, La/a/a/a/b;->a:La/a/a/a/b;

    if-nez v0, :cond_0

    .line 2
    new-instance v0, La/a/a/a/b;

    invoke-direct {v0}, La/a/a/a/b;-><init>()V

    sput-object v0, La/a/a/a/b;->a:La/a/a/a/b;

    .line 4
    :cond_0
    sget-object v0, La/a/a/a/b;->a:La/a/a/a/b;

    return-object v0
.end method


# virtual methods
.method public a()I
    .locals 1

    .line 9
    invoke-static {}, La/a/a/a/d;->b()La/a/a/a/d;

    move-result-object v0

    invoke-virtual {v0}, La/a/a/a/d;->a()I

    move-result v0

    return v0
.end method

.method public a(Landroid/app/Activity;)V
    .locals 2

    .line 1
    invoke-virtual {p1}, Landroid/app/Activity;->getWindow()Landroid/view/Window;

    move-result-object v0

    invoke-virtual {v0}, Landroid/view/Window;->getDecorView()Landroid/view/View;

    move-result-object v0

    .line 2
    invoke-virtual {v0}, Landroid/view/View;->getSystemUiVisibility()I

    move-result v0

    or-int/lit16 v0, v0, 0x1006

    .line 7
    invoke-virtual {p1}, Landroid/app/Activity;->getWindow()Landroid/view/Window;

    move-result-object v1

    invoke-virtual {v1}, Landroid/view/Window;->getDecorView()Landroid/view/View;

    move-result-object v1

    invoke-virtual {v1, v0}, Landroid/view/View;->setSystemUiVisibility(I)V

    .line 8
    invoke-static {}, La/a/a/a/d;->b()La/a/a/a/d;

    move-result-object v0

    invoke-virtual {v0, p1}, La/a/a/a/d;->d(Landroid/app/Activity;)V

    return-void
.end method

.method public b(Landroid/app/Activity;)V
    .locals 2

    .line 5
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x1c

    if-lt v0, v1, :cond_2

    .line 6
    invoke-static {}, La/a/a/a/e;->d()Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-static {p1}, La/a/a/a/h;->a(Landroid/content/Context;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 7
    invoke-virtual {p0, p1}, La/a/a/a/b;->d(Landroid/app/Activity;)V

    goto/16 :goto_1

    .line 8
    :cond_0
    invoke-static {}, La/a/a/a/e;->d()Z

    move-result v0

    if-eqz v0, :cond_1

    .line 9
    invoke-virtual {p0, p1}, La/a/a/a/b;->c(Landroid/app/Activity;)V

    goto :goto_1

    .line 11
    :cond_1
    invoke-virtual {p0, p1}, La/a/a/a/b;->d(Landroid/app/Activity;)V

    goto :goto_1

    .line 14
    :cond_2
    invoke-static {}, La/a/a/a/e;->b()Z

    move-result v0

    if-eqz v0, :cond_3

    invoke-static {p1}, La/a/a/a/c;->a(Landroid/content/Context;)Z

    move-result v0

    if-eqz v0, :cond_3

    .line 15
    invoke-virtual {p1}, Landroid/app/Activity;->getWindow()Landroid/view/Window;

    move-result-object v0

    invoke-static {v0}, La/a/a/a/c;->a(Landroid/view/Window;)V

    goto :goto_0

    .line 16
    :cond_3
    invoke-static {}, La/a/a/a/e;->d()Z

    move-result v0

    if-eqz v0, :cond_4

    invoke-static {p1}, La/a/a/a/h;->a(Landroid/content/Context;)Z

    move-result v0

    if-eqz v0, :cond_4

    .line 17
    invoke-virtual {p1}, Landroid/app/Activity;->getWindow()Landroid/view/Window;

    move-result-object v0

    invoke-static {v0}, La/a/a/a/h;->a(Landroid/view/Window;)V

    .line 18
    :cond_4
    :goto_0
    invoke-static {}, La/a/a/a/e;->c()Z

    move-result v0

    if-eqz v0, :cond_5

    invoke-static {p1}, La/a/a/a/a;->b(Landroid/content/Context;)Z

    move-result v0

    if-eqz v0, :cond_5

    .line 19
    invoke-virtual {p1}, Landroid/app/Activity;->getWindow()Landroid/view/Window;

    move-result-object p1

    invoke-static {p1}, La/a/a/a/a;->a(Landroid/view/Window;)V

    goto :goto_1

    .line 20
    :cond_5
    invoke-static {}, La/a/a/a/e;->f()Z

    move-result v0

    if-eqz v0, :cond_6

    invoke-static {p1}, La/a/a/a/g;->b(Landroid/content/Context;)Z

    move-result v0

    if-eqz v0, :cond_6

    .line 21
    invoke-static {p1}, La/a/a/a/g;->a(Landroid/content/Context;)Z

    goto :goto_1

    .line 22
    :cond_6
    invoke-static {}, La/a/a/a/e;->e()Z

    move-result v0

    if-eqz v0, :cond_7

    invoke-static {p1}, La/a/a/a/g;->a(Landroid/content/Context;)Z

    move-result v0

    if-eqz v0, :cond_7

    .line 23
    invoke-static {p1}, La/a/a/a/g;->b(Landroid/content/Context;)Z

    goto :goto_1

    .line 25
    :cond_7
    invoke-virtual {p0, p1}, La/a/a/a/b;->c(Landroid/app/Activity;)V

    :goto_1
    return-void
.end method

.method public final c(Landroid/app/Activity;)V
    .locals 2

    .line 1
    invoke-virtual {p1}, Landroid/app/Activity;->getWindow()Landroid/view/Window;

    move-result-object v0

    const/4 v1, 0x1

    .line 3
    invoke-virtual {p1, v1}, Landroid/app/Activity;->requestWindowFeature(I)Z

    const/16 p1, 0x400

    .line 7
    invoke-virtual {v0, p1, p1}, Landroid/view/Window;->setFlags(II)V

    return-void
.end method

.method public final d(Landroid/app/Activity;)V
    .locals 2

    .line 1
    invoke-virtual {p1}, Landroid/app/Activity;->getWindow()Landroid/view/Window;

    move-result-object p1

    .line 2
    invoke-virtual {p1}, Landroid/view/Window;->getDecorView()Landroid/view/View;

    move-result-object v0

    const/16 v1, 0x1706

    invoke-virtual {v0, v1}, Landroid/view/View;->setSystemUiVisibility(I)V

    const/4 v0, 0x0

    .line 9
    invoke-virtual {p1, v0}, Landroid/view/Window;->setStatusBarColor(I)V

    .line 11
    invoke-virtual {p1}, Landroid/view/Window;->getAttributes()Landroid/view/WindowManager$LayoutParams;

    move-result-object v0

    const/4 v1, 0x1

    .line 12
    iput v1, v0, Landroid/view/WindowManager$LayoutParams;->layoutInDisplayCutoutMode:I

    .line 14
    invoke-virtual {p1, v0}, Landroid/view/Window;->setAttributes(Landroid/view/WindowManager$LayoutParams;)V

    return-void
.end method
