.class final Lcom/tkay/basead/f/g$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/basead/f/g;->a(Landroid/view/ViewGroup;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Landroid/view/ViewGroup;

.field final synthetic b:Lcom/tkay/basead/f/g;


# direct methods
.method constructor <init>(Lcom/tkay/basead/f/g;Landroid/view/ViewGroup;)V
    .locals 0

    .line 46
    iput-object p1, p0, Lcom/tkay/basead/f/g$1;->b:Lcom/tkay/basead/f/g;

    iput-object p2, p0, Lcom/tkay/basead/f/g$1;->a:Landroid/view/ViewGroup;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 6

    .line 50
    iget-object v0, p0, Lcom/tkay/basead/f/g$1;->b:Lcom/tkay/basead/f/g;

    iget-object v0, v0, Lcom/tkay/basead/f/g;->g:Lcom/tkay/core/common/f/r;

    iget-object v1, p0, Lcom/tkay/basead/f/g$1;->b:Lcom/tkay/basead/f/g;

    iget-object v1, v1, Lcom/tkay/basead/f/g;->d:Lcom/tkay/core/common/f/i;

    iget-object v1, v1, Lcom/tkay/core/common/f/i;->m:Lcom/tkay/core/common/f/j;

    invoke-static {v0, v1}, Lcom/tkay/basead/ui/BaseSdkSplashATView;->isSinglePicture(Lcom/tkay/core/common/f/h;Lcom/tkay/core/common/f/j;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 51
    iget-object v0, p0, Lcom/tkay/basead/f/g$1;->b:Lcom/tkay/basead/f/g;

    new-instance v1, Lcom/tkay/basead/ui/SinglePictureSplashATView;

    iget-object v2, p0, Lcom/tkay/basead/f/g$1;->a:Landroid/view/ViewGroup;

    invoke-virtual {v2}, Landroid/view/ViewGroup;->getContext()Landroid/content/Context;

    move-result-object v2

    iget-object v3, p0, Lcom/tkay/basead/f/g$1;->b:Lcom/tkay/basead/f/g;

    iget-object v3, v3, Lcom/tkay/basead/f/g;->d:Lcom/tkay/core/common/f/i;

    iget-object v4, p0, Lcom/tkay/basead/f/g$1;->b:Lcom/tkay/basead/f/g;

    iget-object v4, v4, Lcom/tkay/basead/f/g;->g:Lcom/tkay/core/common/f/r;

    iget-object v5, p0, Lcom/tkay/basead/f/g$1;->b:Lcom/tkay/basead/f/g;

    iget-object v5, v5, Lcom/tkay/basead/f/g;->a:Lcom/tkay/basead/e/a;

    invoke-direct {v1, v2, v3, v4, v5}, Lcom/tkay/basead/ui/SinglePictureSplashATView;-><init>(Landroid/content/Context;Lcom/tkay/core/common/f/i;Lcom/tkay/core/common/f/h;Lcom/tkay/basead/e/a;)V

    iput-object v1, v0, Lcom/tkay/basead/f/g;->k:Lcom/tkay/basead/ui/BaseSplashATView;

    goto :goto_0

    .line 53
    :cond_0
    iget-object v0, p0, Lcom/tkay/basead/f/g$1;->b:Lcom/tkay/basead/f/g;

    new-instance v1, Lcom/tkay/basead/ui/AsseblemSplashATView;

    iget-object v2, p0, Lcom/tkay/basead/f/g$1;->a:Landroid/view/ViewGroup;

    invoke-virtual {v2}, Landroid/view/ViewGroup;->getContext()Landroid/content/Context;

    move-result-object v2

    iget-object v3, p0, Lcom/tkay/basead/f/g$1;->b:Lcom/tkay/basead/f/g;

    iget-object v3, v3, Lcom/tkay/basead/f/g;->d:Lcom/tkay/core/common/f/i;

    iget-object v4, p0, Lcom/tkay/basead/f/g$1;->b:Lcom/tkay/basead/f/g;

    iget-object v4, v4, Lcom/tkay/basead/f/g;->g:Lcom/tkay/core/common/f/r;

    iget-object v5, p0, Lcom/tkay/basead/f/g$1;->b:Lcom/tkay/basead/f/g;

    iget-object v5, v5, Lcom/tkay/basead/f/g;->a:Lcom/tkay/basead/e/a;

    invoke-direct {v1, v2, v3, v4, v5}, Lcom/tkay/basead/ui/AsseblemSplashATView;-><init>(Landroid/content/Context;Lcom/tkay/core/common/f/i;Lcom/tkay/core/common/f/h;Lcom/tkay/basead/e/a;)V

    iput-object v1, v0, Lcom/tkay/basead/f/g;->k:Lcom/tkay/basead/ui/BaseSplashATView;

    .line 56
    :goto_0
    iget-object v0, p0, Lcom/tkay/basead/f/g$1;->b:Lcom/tkay/basead/f/g;

    iget-object v0, v0, Lcom/tkay/basead/f/g;->k:Lcom/tkay/basead/ui/BaseSplashATView;

    iget-object v1, p0, Lcom/tkay/basead/f/g$1;->b:Lcom/tkay/basead/f/g;

    iget-boolean v1, v1, Lcom/tkay/basead/f/g;->l:Z

    invoke-virtual {v0, v1}, Lcom/tkay/basead/ui/BaseSplashATView;->setDontCountDown(Z)V

    .line 58
    iget-object v0, p0, Lcom/tkay/basead/f/g$1;->a:Landroid/view/ViewGroup;

    iget-object v1, p0, Lcom/tkay/basead/f/g$1;->b:Lcom/tkay/basead/f/g;

    iget-object v1, v1, Lcom/tkay/basead/f/g;->k:Lcom/tkay/basead/ui/BaseSplashATView;

    invoke-virtual {v0, v1}, Landroid/view/ViewGroup;->addView(Landroid/view/View;)V

    return-void
.end method
