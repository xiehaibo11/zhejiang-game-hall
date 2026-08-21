.class final Lcom/tkay/basead/ui/SinglePictureSplashATView$2;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/basead/ui/SinglePictureSplashATView;->c()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/basead/ui/SinglePictureSplashATView;


# direct methods
.method constructor <init>(Lcom/tkay/basead/ui/SinglePictureSplashATView;)V
    .locals 0

    .line 120
    iput-object p1, p0, Lcom/tkay/basead/ui/SinglePictureSplashATView$2;->a:Lcom/tkay/basead/ui/SinglePictureSplashATView;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 8

    .line 124
    iget-object v0, p0, Lcom/tkay/basead/ui/SinglePictureSplashATView$2;->a:Lcom/tkay/basead/ui/SinglePictureSplashATView;

    iget-object v0, v0, Lcom/tkay/basead/ui/SinglePictureSplashATView;->F:Lcom/tkay/basead/e/a;

    if-nez v0, :cond_0

    return-void

    .line 128
    :cond_0
    iget-object v0, p0, Lcom/tkay/basead/ui/SinglePictureSplashATView$2;->a:Lcom/tkay/basead/ui/SinglePictureSplashATView;

    invoke-virtual {v0}, Lcom/tkay/basead/ui/SinglePictureSplashATView;->getWidth()I

    move-result v0

    .line 129
    iget-object v1, p0, Lcom/tkay/basead/ui/SinglePictureSplashATView$2;->a:Lcom/tkay/basead/ui/SinglePictureSplashATView;

    invoke-virtual {v1}, Lcom/tkay/basead/ui/SinglePictureSplashATView;->getHeight()I

    move-result v1

    .line 131
    iget-object v2, p0, Lcom/tkay/basead/ui/SinglePictureSplashATView$2;->a:Lcom/tkay/basead/ui/SinglePictureSplashATView;

    invoke-virtual {v2}, Lcom/tkay/basead/ui/SinglePictureSplashATView;->getResources()Landroid/content/res/Resources;

    move-result-object v2

    invoke-virtual {v2}, Landroid/content/res/Resources;->getDisplayMetrics()Landroid/util/DisplayMetrics;

    move-result-object v2

    iget v2, v2, Landroid/util/DisplayMetrics;->widthPixels:I

    .line 132
    iget-object v3, p0, Lcom/tkay/basead/ui/SinglePictureSplashATView$2;->a:Lcom/tkay/basead/ui/SinglePictureSplashATView;

    invoke-virtual {v3}, Lcom/tkay/basead/ui/SinglePictureSplashATView;->getResources()Landroid/content/res/Resources;

    move-result-object v3

    invoke-virtual {v3}, Landroid/content/res/Resources;->getDisplayMetrics()Landroid/util/DisplayMetrics;

    move-result-object v3

    iget v3, v3, Landroid/util/DisplayMetrics;->heightPixels:I

    int-to-double v4, v2

    const-wide/high16 v6, 0x3fe0000000000000L    # 0.5

    mul-double/2addr v4, v6

    double-to-int v2, v4

    int-to-double v3, v3

    mul-double/2addr v3, v6

    double-to-int v3, v3

    const-string v4, "tkay"

    const-string v5, "40002"

    if-ge v0, v2, :cond_1

    .line 138
    iget-object v0, p0, Lcom/tkay/basead/ui/SinglePictureSplashATView$2;->a:Lcom/tkay/basead/ui/SinglePictureSplashATView;

    const-string v1, "Splash display width is less than 50% of screen width!"

    invoke-static {v5, v1}, Lcom/tkay/basead/c/f;->a(Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/basead/c/e;

    move-result-object v2

    invoke-virtual {v0, v2}, Lcom/tkay/basead/ui/SinglePictureSplashATView;->a(Lcom/tkay/basead/c/e;)V

    .line 139
    invoke-static {v4, v1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    return-void

    :cond_1
    if-ge v1, v3, :cond_2

    .line 141
    iget-object v0, p0, Lcom/tkay/basead/ui/SinglePictureSplashATView$2;->a:Lcom/tkay/basead/ui/SinglePictureSplashATView;

    const-string v1, "Splash display height is less than 50% of screen height!"

    invoke-static {v5, v1}, Lcom/tkay/basead/c/f;->a(Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/basead/c/e;

    move-result-object v2

    invoke-virtual {v0, v2}, Lcom/tkay/basead/ui/SinglePictureSplashATView;->a(Lcom/tkay/basead/c/e;)V

    .line 142
    invoke-static {v4, v1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    return-void

    .line 144
    :cond_2
    iget-object v0, p0, Lcom/tkay/basead/ui/SinglePictureSplashATView$2;->a:Lcom/tkay/basead/ui/SinglePictureSplashATView;

    invoke-static {v0}, Lcom/tkay/basead/ui/SinglePictureSplashATView;->a(Lcom/tkay/basead/ui/SinglePictureSplashATView;)V

    return-void
.end method
