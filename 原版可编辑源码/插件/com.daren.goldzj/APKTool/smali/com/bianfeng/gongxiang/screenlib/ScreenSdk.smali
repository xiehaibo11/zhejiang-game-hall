.class public Lcom/bianfeng/gongxiang/screenlib/ScreenSdk;
.super Ljava/lang/Object;
.source "ScreenSdk.java"


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 1
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static getHeight()I
    .locals 1

    .line 1
    invoke-static {}, La/a/a/a/b;->b()La/a/a/a/b;

    move-result-object v0

    invoke-virtual {v0}, La/a/a/a/b;->a()I

    move-result v0

    return v0
.end method

.method public static getVersion()Ljava/lang/String;
    .locals 1

    const-string v0, "1.0.0"

    return-object v0
.end method

.method public static hideSplashView(Landroid/app/Activity;)V
    .locals 1

    .line 1
    invoke-static {}, La/a/a/a/f;->a()La/a/a/a/f;

    move-result-object v0

    invoke-virtual {v0, p0}, La/a/a/a/f;->a(Landroid/app/Activity;)V

    return-void
.end method

.method public static onResume(Landroid/app/Activity;)V
    .locals 1

    .line 1
    invoke-static {}, La/a/a/a/b;->b()La/a/a/a/b;

    move-result-object v0

    invoke-virtual {v0, p0}, La/a/a/a/b;->a(Landroid/app/Activity;)V

    return-void
.end method

.method public static setFullScreen(Landroid/app/Activity;)V
    .locals 1

    .line 1
    invoke-static {}, La/a/a/a/b;->b()La/a/a/a/b;

    move-result-object v0

    invoke-virtual {v0, p0}, La/a/a/a/b;->b(Landroid/app/Activity;)V

    return-void
.end method

.method public static showSplashView(Landroid/app/Activity;Ljava/lang/String;)V
    .locals 1

    .line 1
    invoke-static {}, La/a/a/a/f;->a()La/a/a/a/f;

    move-result-object v0

    invoke-virtual {v0, p0, p1}, La/a/a/a/f;->a(Landroid/app/Activity;Ljava/lang/String;)V

    return-void
.end method
