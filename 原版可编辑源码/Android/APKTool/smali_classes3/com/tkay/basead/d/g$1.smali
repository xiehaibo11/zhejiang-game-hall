.class final Lcom/tkay/basead/d/g$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/basead/d/g;->a(Landroid/view/ViewGroup;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Landroid/view/ViewGroup;

.field final synthetic b:Lcom/tkay/basead/d/g;


# direct methods
.method constructor <init>(Lcom/tkay/basead/d/g;Landroid/view/ViewGroup;)V
    .locals 0

    .line 51
    iput-object p1, p0, Lcom/tkay/basead/d/g$1;->b:Lcom/tkay/basead/d/g;

    iput-object p2, p0, Lcom/tkay/basead/d/g$1;->a:Landroid/view/ViewGroup;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 6

    .line 55
    iget-object v0, p0, Lcom/tkay/basead/d/g$1;->b:Lcom/tkay/basead/d/g;

    iget-object v0, v0, Lcom/tkay/basead/d/g;->f:Lcom/tkay/core/common/a/g;

    instance-of v0, v0, Lcom/tkay/expressad/splash/d/c;

    if-eqz v0, :cond_0

    .line 57
    iget-object v0, p0, Lcom/tkay/basead/d/g$1;->b:Lcom/tkay/basead/d/g;

    iget-object v0, v0, Lcom/tkay/basead/d/g;->f:Lcom/tkay/core/common/a/g;

    check-cast v0, Lcom/tkay/expressad/splash/d/c;

    new-instance v1, Lcom/tkay/basead/d/g$1$1;

    invoke-direct {v1, p0}, Lcom/tkay/basead/d/g$1$1;-><init>(Lcom/tkay/basead/d/g$1;)V

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/splash/d/c;->a(Lcom/tkay/expressad/out/q;)V

    .line 104
    iget-object v0, p0, Lcom/tkay/basead/d/g$1;->b:Lcom/tkay/basead/d/g;

    iget-object v0, v0, Lcom/tkay/basead/d/g;->f:Lcom/tkay/core/common/a/g;

    check-cast v0, Lcom/tkay/expressad/splash/d/c;

    iget-object v1, p0, Lcom/tkay/basead/d/g$1;->a:Landroid/view/ViewGroup;

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/splash/d/c;->a(Landroid/view/ViewGroup;)V

    return-void

    .line 108
    :cond_0
    iget-object v0, p0, Lcom/tkay/basead/d/g$1;->b:Lcom/tkay/basead/d/g;

    iget-object v0, v0, Lcom/tkay/basead/d/g;->e:Lcom/tkay/core/common/f/z;

    invoke-virtual {v0}, Lcom/tkay/core/common/f/z;->g()Z

    move-result v0

    if-eqz v0, :cond_1

    .line 109
    iget-object v0, p0, Lcom/tkay/basead/d/g$1;->b:Lcom/tkay/basead/d/g;

    new-instance v1, Lcom/tkay/basead/ui/MraidSplashATView;

    iget-object v2, p0, Lcom/tkay/basead/d/g$1;->a:Landroid/view/ViewGroup;

    invoke-virtual {v2}, Landroid/view/ViewGroup;->getContext()Landroid/content/Context;

    move-result-object v2

    iget-object v3, p0, Lcom/tkay/basead/d/g$1;->b:Lcom/tkay/basead/d/g;

    iget-object v3, v3, Lcom/tkay/basead/d/g;->c:Lcom/tkay/core/common/f/i;

    iget-object v4, p0, Lcom/tkay/basead/d/g$1;->b:Lcom/tkay/basead/d/g;

    iget-object v4, v4, Lcom/tkay/basead/d/g;->e:Lcom/tkay/core/common/f/z;

    iget-object v5, p0, Lcom/tkay/basead/d/g$1;->b:Lcom/tkay/basead/d/g;

    iget-object v5, v5, Lcom/tkay/basead/d/g;->h:Lcom/tkay/basead/e/a;

    invoke-direct {v1, v2, v3, v4, v5}, Lcom/tkay/basead/ui/MraidSplashATView;-><init>(Landroid/content/Context;Lcom/tkay/core/common/f/i;Lcom/tkay/core/common/f/h;Lcom/tkay/basead/e/a;)V

    iput-object v1, v0, Lcom/tkay/basead/d/g;->a:Lcom/tkay/basead/ui/BaseSplashATView;

    goto :goto_0

    .line 110
    :cond_1
    iget-object v0, p0, Lcom/tkay/basead/d/g$1;->b:Lcom/tkay/basead/d/g;

    iget-object v0, v0, Lcom/tkay/basead/d/g;->e:Lcom/tkay/core/common/f/z;

    iget-object v1, p0, Lcom/tkay/basead/d/g$1;->b:Lcom/tkay/basead/d/g;

    iget-object v1, v1, Lcom/tkay/basead/d/g;->c:Lcom/tkay/core/common/f/i;

    iget-object v1, v1, Lcom/tkay/core/common/f/i;->m:Lcom/tkay/core/common/f/j;

    invoke-static {v0, v1}, Lcom/tkay/basead/ui/BaseSdkSplashATView;->isSinglePicture(Lcom/tkay/core/common/f/h;Lcom/tkay/core/common/f/j;)Z

    move-result v0

    if-eqz v0, :cond_2

    .line 111
    iget-object v0, p0, Lcom/tkay/basead/d/g$1;->b:Lcom/tkay/basead/d/g;

    new-instance v1, Lcom/tkay/basead/ui/SinglePictureSplashATView;

    iget-object v2, p0, Lcom/tkay/basead/d/g$1;->a:Landroid/view/ViewGroup;

    invoke-virtual {v2}, Landroid/view/ViewGroup;->getContext()Landroid/content/Context;

    move-result-object v2

    iget-object v3, p0, Lcom/tkay/basead/d/g$1;->b:Lcom/tkay/basead/d/g;

    iget-object v3, v3, Lcom/tkay/basead/d/g;->c:Lcom/tkay/core/common/f/i;

    iget-object v4, p0, Lcom/tkay/basead/d/g$1;->b:Lcom/tkay/basead/d/g;

    iget-object v4, v4, Lcom/tkay/basead/d/g;->e:Lcom/tkay/core/common/f/z;

    iget-object v5, p0, Lcom/tkay/basead/d/g$1;->b:Lcom/tkay/basead/d/g;

    iget-object v5, v5, Lcom/tkay/basead/d/g;->h:Lcom/tkay/basead/e/a;

    invoke-direct {v1, v2, v3, v4, v5}, Lcom/tkay/basead/ui/SinglePictureSplashATView;-><init>(Landroid/content/Context;Lcom/tkay/core/common/f/i;Lcom/tkay/core/common/f/h;Lcom/tkay/basead/e/a;)V

    iput-object v1, v0, Lcom/tkay/basead/d/g;->a:Lcom/tkay/basead/ui/BaseSplashATView;

    goto :goto_0

    .line 113
    :cond_2
    iget-object v0, p0, Lcom/tkay/basead/d/g$1;->b:Lcom/tkay/basead/d/g;

    new-instance v1, Lcom/tkay/basead/ui/AsseblemSplashATView;

    iget-object v2, p0, Lcom/tkay/basead/d/g$1;->a:Landroid/view/ViewGroup;

    invoke-virtual {v2}, Landroid/view/ViewGroup;->getContext()Landroid/content/Context;

    move-result-object v2

    iget-object v3, p0, Lcom/tkay/basead/d/g$1;->b:Lcom/tkay/basead/d/g;

    iget-object v3, v3, Lcom/tkay/basead/d/g;->c:Lcom/tkay/core/common/f/i;

    iget-object v4, p0, Lcom/tkay/basead/d/g$1;->b:Lcom/tkay/basead/d/g;

    iget-object v4, v4, Lcom/tkay/basead/d/g;->e:Lcom/tkay/core/common/f/z;

    iget-object v5, p0, Lcom/tkay/basead/d/g$1;->b:Lcom/tkay/basead/d/g;

    iget-object v5, v5, Lcom/tkay/basead/d/g;->h:Lcom/tkay/basead/e/a;

    invoke-direct {v1, v2, v3, v4, v5}, Lcom/tkay/basead/ui/AsseblemSplashATView;-><init>(Landroid/content/Context;Lcom/tkay/core/common/f/i;Lcom/tkay/core/common/f/h;Lcom/tkay/basead/e/a;)V

    iput-object v1, v0, Lcom/tkay/basead/d/g;->a:Lcom/tkay/basead/ui/BaseSplashATView;

    .line 116
    :goto_0
    iget-object v0, p0, Lcom/tkay/basead/d/g$1;->b:Lcom/tkay/basead/d/g;

    iget-object v0, v0, Lcom/tkay/basead/d/g;->a:Lcom/tkay/basead/ui/BaseSplashATView;

    iget-object v1, p0, Lcom/tkay/basead/d/g$1;->b:Lcom/tkay/basead/d/g;

    iget-boolean v1, v1, Lcom/tkay/basead/d/g;->k:Z

    invoke-virtual {v0, v1}, Lcom/tkay/basead/ui/BaseSplashATView;->setDontCountDown(Z)V

    .line 118
    iget-object v0, p0, Lcom/tkay/basead/d/g$1;->a:Landroid/view/ViewGroup;

    iget-object v1, p0, Lcom/tkay/basead/d/g$1;->b:Lcom/tkay/basead/d/g;

    iget-object v1, v1, Lcom/tkay/basead/d/g;->a:Lcom/tkay/basead/ui/BaseSplashATView;

    invoke-virtual {v0, v1}, Landroid/view/ViewGroup;->addView(Landroid/view/View;)V

    return-void
.end method
