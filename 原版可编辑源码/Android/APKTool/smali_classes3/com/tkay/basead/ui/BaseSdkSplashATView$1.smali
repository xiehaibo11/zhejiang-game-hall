.class final Lcom/tkay/basead/ui/BaseSdkSplashATView$1;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/basead/ui/BaseSdkSplashATView;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/basead/ui/BaseSdkSplashATView;


# direct methods
.method constructor <init>(Lcom/tkay/basead/ui/BaseSdkSplashATView;)V
    .locals 0

    .line 50
    iput-object p1, p0, Lcom/tkay/basead/ui/BaseSdkSplashATView$1;->a:Lcom/tkay/basead/ui/BaseSdkSplashATView;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onClick(Landroid/view/View;)V
    .locals 0

    .line 53
    iget-object p1, p0, Lcom/tkay/basead/ui/BaseSdkSplashATView$1;->a:Lcom/tkay/basead/ui/BaseSdkSplashATView;

    iget-object p1, p1, Lcom/tkay/basead/ui/BaseSdkSplashATView;->c:Lcom/tkay/core/common/f/i;

    iget-object p1, p1, Lcom/tkay/core/common/f/i;->m:Lcom/tkay/core/common/f/j;

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/tkay/basead/ui/BaseSdkSplashATView$1;->a:Lcom/tkay/basead/ui/BaseSdkSplashATView;

    iget-object p1, p1, Lcom/tkay/basead/ui/BaseSdkSplashATView;->c:Lcom/tkay/core/common/f/i;

    iget-object p1, p1, Lcom/tkay/core/common/f/i;->m:Lcom/tkay/core/common/f/j;

    invoke-virtual {p1}, Lcom/tkay/core/common/f/j;->x()I

    move-result p1

    if-nez p1, :cond_0

    .line 54
    iget-object p1, p0, Lcom/tkay/basead/ui/BaseSdkSplashATView$1;->a:Lcom/tkay/basead/ui/BaseSdkSplashATView;

    invoke-static {p1}, Lcom/tkay/basead/ui/BaseSdkSplashATView;->a(Lcom/tkay/basead/ui/BaseSdkSplashATView;)V

    :cond_0
    return-void
.end method
