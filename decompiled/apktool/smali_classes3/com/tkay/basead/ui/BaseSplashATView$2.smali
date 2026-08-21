.class final Lcom/tkay/basead/ui/BaseSplashATView$2;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/view/View$OnClickListener;


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

    .line 161
    iput-object p1, p0, Lcom/tkay/basead/ui/BaseSplashATView$2;->a:Lcom/tkay/basead/ui/BaseSplashATView;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onClick(Landroid/view/View;)V
    .locals 0

    .line 164
    iget-object p1, p0, Lcom/tkay/basead/ui/BaseSplashATView$2;->a:Lcom/tkay/basead/ui/BaseSplashATView;

    iget-object p1, p1, Lcom/tkay/basead/ui/BaseSplashATView;->c:Lcom/tkay/core/common/f/i;

    iget-object p1, p1, Lcom/tkay/core/common/f/i;->m:Lcom/tkay/core/common/f/j;

    invoke-virtual {p1}, Lcom/tkay/core/common/f/j;->p()I

    move-result p1

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/tkay/basead/ui/BaseSplashATView$2;->a:Lcom/tkay/basead/ui/BaseSplashATView;

    iget-boolean p1, p1, Lcom/tkay/basead/ui/BaseSplashATView;->N:Z

    if-eqz p1, :cond_1

    .line 165
    :cond_0
    iget-object p1, p0, Lcom/tkay/basead/ui/BaseSplashATView$2;->a:Lcom/tkay/basead/ui/BaseSplashATView;

    invoke-static {p1}, Lcom/tkay/basead/ui/BaseSplashATView;->b(Lcom/tkay/basead/ui/BaseSplashATView;)V

    :cond_1
    return-void
.end method
