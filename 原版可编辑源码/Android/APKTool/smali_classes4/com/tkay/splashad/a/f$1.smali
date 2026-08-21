.class final Lcom/tkay/splashad/a/f$1;
.super Ljava/util/TimerTask;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/splashad/a/f;->a(Lcom/tkay/splashad/api/TYSplashSkipInfo;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Landroid/view/ViewGroup;

.field final synthetic b:Lcom/tkay/core/common/l/a/f$b;

.field final synthetic c:Lcom/tkay/splashad/api/TYSplashSkipAdListener;

.field final synthetic d:J

.field final synthetic e:J

.field final synthetic f:Lcom/tkay/splashad/a/f;


# direct methods
.method constructor <init>(Lcom/tkay/splashad/a/f;Landroid/view/ViewGroup;Lcom/tkay/core/common/l/a/f$b;Lcom/tkay/splashad/api/TYSplashSkipAdListener;JJ)V
    .locals 0

    .line 208
    iput-object p1, p0, Lcom/tkay/splashad/a/f$1;->f:Lcom/tkay/splashad/a/f;

    iput-object p2, p0, Lcom/tkay/splashad/a/f$1;->a:Landroid/view/ViewGroup;

    iput-object p3, p0, Lcom/tkay/splashad/a/f$1;->b:Lcom/tkay/core/common/l/a/f$b;

    iput-object p4, p0, Lcom/tkay/splashad/a/f$1;->c:Lcom/tkay/splashad/api/TYSplashSkipAdListener;

    iput-wide p5, p0, Lcom/tkay/splashad/a/f$1;->d:J

    iput-wide p7, p0, Lcom/tkay/splashad/a/f$1;->e:J

    invoke-direct {p0}, Ljava/util/TimerTask;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 2

    .line 211
    iget-object v0, p0, Lcom/tkay/splashad/a/f$1;->a:Landroid/view/ViewGroup;

    if-eqz v0, :cond_0

    iget-object v1, p0, Lcom/tkay/splashad/a/f$1;->b:Lcom/tkay/core/common/l/a/f$b;

    invoke-static {v0, v1}, Lcom/tkay/core/common/l/u;->a(Landroid/view/View;Lcom/tkay/core/common/l/a/f$b;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 212
    :cond_0
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    new-instance v1, Lcom/tkay/splashad/a/f$1$1;

    invoke-direct {v1, p0}, Lcom/tkay/splashad/a/f$1$1;-><init>(Lcom/tkay/splashad/a/f$1;)V

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;)V

    :cond_1
    return-void
.end method
