.class final Lcom/tkay/basead/ui/BaseSplashATView$3;
.super Ljava/util/TimerTask;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/basead/ui/BaseSplashATView;->c()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/basead/ui/BaseSplashATView;


# direct methods
.method constructor <init>(Lcom/tkay/basead/ui/BaseSplashATView;)V
    .locals 0

    .line 174
    iput-object p1, p0, Lcom/tkay/basead/ui/BaseSplashATView$3;->a:Lcom/tkay/basead/ui/BaseSplashATView;

    invoke-direct {p0}, Ljava/util/TimerTask;-><init>()V

    return-void
.end method

.method private synthetic a()V
    .locals 5

    .line 179
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseSplashATView$3;->a:Lcom/tkay/basead/ui/BaseSplashATView;

    invoke-static {v0}, Lcom/tkay/basead/ui/BaseSplashATView;->d(Lcom/tkay/basead/ui/BaseSplashATView;)J

    move-result-wide v0

    const-wide/16 v2, 0x0

    cmp-long v0, v0, v2

    if-gtz v0, :cond_0

    .line 180
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseSplashATView$3;->a:Lcom/tkay/basead/ui/BaseSplashATView;

    invoke-static {v0}, Lcom/tkay/basead/ui/BaseSplashATView;->e(Lcom/tkay/basead/ui/BaseSplashATView;)V

    goto :goto_0

    .line 182
    :cond_0
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseSplashATView$3;->a:Lcom/tkay/basead/ui/BaseSplashATView;

    invoke-static {v0}, Lcom/tkay/basead/ui/BaseSplashATView;->d(Lcom/tkay/basead/ui/BaseSplashATView;)J

    move-result-wide v1

    invoke-static {v0, v1, v2}, Lcom/tkay/basead/ui/BaseSplashATView;->a(Lcom/tkay/basead/ui/BaseSplashATView;J)V

    .line 184
    :goto_0
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseSplashATView$3;->a:Lcom/tkay/basead/ui/BaseSplashATView;

    invoke-static {v0}, Lcom/tkay/basead/ui/BaseSplashATView;->d(Lcom/tkay/basead/ui/BaseSplashATView;)J

    move-result-wide v1

    const-wide/16 v3, 0x3e8

    sub-long/2addr v1, v3

    invoke-static {v0, v1, v2}, Lcom/tkay/basead/ui/BaseSplashATView;->b(Lcom/tkay/basead/ui/BaseSplashATView;J)J

    return-void
.end method

.method public static synthetic lambda$wMQ-UebBlFUUlpx3w6luJJ-WyXs(Lcom/tkay/basead/ui/BaseSplashATView$3;)V
    .locals 0

    invoke-direct {p0}, Lcom/tkay/basead/ui/BaseSplashATView$3;->a()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 2

    .line 177
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseSplashATView$3;->a:Lcom/tkay/basead/ui/BaseSplashATView;

    invoke-static {v0}, Lcom/tkay/basead/ui/BaseSplashATView;->c(Lcom/tkay/basead/ui/BaseSplashATView;)Lcom/tkay/core/common/l/a/f$b;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/tkay/core/common/l/u;->a(Landroid/view/View;Lcom/tkay/core/common/l/a/f$b;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 178
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseSplashATView$3;->a:Lcom/tkay/basead/ui/BaseSplashATView;

    new-instance v1, Lcom/tkay/basead/ui/-$$Lambda$BaseSplashATView$3$wMQ-UebBlFUUlpx3w6luJJ-WyXs;

    invoke-direct {v1, p0}, Lcom/tkay/basead/ui/-$$Lambda$BaseSplashATView$3$wMQ-UebBlFUUlpx3w6luJJ-WyXs;-><init>(Lcom/tkay/basead/ui/BaseSplashATView$3;)V

    invoke-virtual {v0, v1}, Lcom/tkay/basead/ui/BaseSplashATView;->post(Ljava/lang/Runnable;)Z

    :cond_0
    return-void
.end method
