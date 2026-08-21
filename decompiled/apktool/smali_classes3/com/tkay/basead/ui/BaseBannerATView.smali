.class public abstract Lcom/tkay/basead/ui/BaseBannerATView;
.super Lcom/tkay/basead/ui/BaseATView;


# instance fields
.field public final TAG:Ljava/lang/String;

.field protected a:Lcom/tkay/basead/e/a;

.field protected t:Lcom/tkay/basead/ui/CloseImageView;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 0

    .line 27
    invoke-direct {p0, p1}, Lcom/tkay/basead/ui/BaseATView;-><init>(Landroid/content/Context;)V

    .line 20
    invoke-virtual {p0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object p1

    invoke-virtual {p1}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/basead/ui/BaseBannerATView;->TAG:Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Lcom/tkay/core/common/f/i;Lcom/tkay/core/common/f/h;Lcom/tkay/basead/e/a;)V
    .locals 0

    .line 31
    invoke-direct {p0, p1, p2, p3}, Lcom/tkay/basead/ui/BaseATView;-><init>(Landroid/content/Context;Lcom/tkay/core/common/f/i;Lcom/tkay/core/common/f/h;)V

    .line 20
    invoke-virtual {p0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object p1

    invoke-virtual {p1}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/basead/ui/BaseBannerATView;->TAG:Ljava/lang/String;

    .line 32
    iput-object p4, p0, Lcom/tkay/basead/ui/BaseBannerATView;->a:Lcom/tkay/basead/e/a;

    return-void
.end method

.method static synthetic a(Lcom/tkay/basead/ui/BaseBannerATView;)V
    .locals 0

    .line 18
    invoke-super {p0}, Lcom/tkay/basead/ui/BaseATView;->h()V

    return-void
.end method


# virtual methods
.method protected final a(I)V
    .locals 1

    .line 73
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseBannerATView;->a:Lcom/tkay/basead/e/a;

    if-eqz v0, :cond_0

    .line 74
    invoke-interface {v0, p1}, Lcom/tkay/basead/e/a;->onAdClick(I)V

    :cond_0
    return-void
.end method

.method protected final a(Z)V
    .locals 1

    .line 86
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseBannerATView;->a:Lcom/tkay/basead/e/a;

    if-eqz v0, :cond_0

    .line 87
    invoke-interface {v0, p1}, Lcom/tkay/basead/e/a;->onDeeplinkCallback(Z)V

    :cond_0
    return-void
.end method

.method protected b()V
    .locals 2

    .line 37
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseBannerATView;->c:Lcom/tkay/core/common/f/i;

    iget-object v0, v0, Lcom/tkay/core/common/f/i;->m:Lcom/tkay/core/common/f/j;

    invoke-virtual {v0}, Lcom/tkay/core/common/f/j;->R()I

    move-result v0

    if-gez v0, :cond_0

    const/16 v0, 0x64

    goto :goto_0

    :cond_0
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseBannerATView;->c:Lcom/tkay/core/common/f/i;

    iget-object v0, v0, Lcom/tkay/core/common/f/i;->m:Lcom/tkay/core/common/f/j;

    invoke-virtual {v0}, Lcom/tkay/core/common/f/j;->R()I

    move-result v0

    :goto_0
    new-instance v1, Lcom/tkay/basead/ui/BaseBannerATView$1;

    invoke-direct {v1, p0}, Lcom/tkay/basead/ui/BaseBannerATView$1;-><init>(Lcom/tkay/basead/ui/BaseBannerATView;)V

    invoke-virtual {p0, v0, v1}, Lcom/tkay/basead/ui/BaseBannerATView;->a(ILjava/lang/Runnable;)V

    return-void
.end method

.method protected c()V
    .locals 2

    .line 48
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseBannerATView;->t:Lcom/tkay/basead/ui/CloseImageView;

    new-instance v1, Lcom/tkay/basead/ui/BaseBannerATView$2;

    invoke-direct {v1, p0}, Lcom/tkay/basead/ui/BaseBannerATView$2;-><init>(Lcom/tkay/basead/ui/BaseBannerATView;)V

    invoke-virtual {v0, v1}, Lcom/tkay/basead/ui/CloseImageView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    return-void
.end method

.method protected final e()V
    .locals 3

    .line 61
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseBannerATView;->d:Lcom/tkay/core/common/f/h;

    invoke-virtual {p0}, Lcom/tkay/basead/ui/BaseBannerATView;->i()Lcom/tkay/basead/c/i;

    move-result-object v1

    const/16 v2, 0x8

    invoke-static {v2, v0, v1}, Lcom/tkay/basead/a/b;->a(ILcom/tkay/core/common/f/h;Lcom/tkay/basead/c/i;)V

    .line 63
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseBannerATView;->a:Lcom/tkay/basead/e/a;

    if-eqz v0, :cond_0

    .line 64
    invoke-interface {v0}, Lcom/tkay/basead/e/a;->onAdShow()V

    :cond_0
    return-void
.end method

.method protected final f()V
    .locals 2

    .line 80
    invoke-super {p0}, Lcom/tkay/basead/ui/BaseATView;->f()V

    .line 81
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseBannerATView;->t:Lcom/tkay/basead/ui/CloseImageView;

    iget-object v1, p0, Lcom/tkay/basead/ui/BaseBannerATView;->c:Lcom/tkay/core/common/f/i;

    iget-object v1, v1, Lcom/tkay/core/common/f/i;->m:Lcom/tkay/core/common/f/j;

    invoke-virtual {v1}, Lcom/tkay/core/common/f/j;->g()I

    move-result v1

    invoke-virtual {p0, v0, v1}, Lcom/tkay/basead/ui/BaseBannerATView;->a(Lcom/tkay/basead/ui/a;I)F

    return-void
.end method
