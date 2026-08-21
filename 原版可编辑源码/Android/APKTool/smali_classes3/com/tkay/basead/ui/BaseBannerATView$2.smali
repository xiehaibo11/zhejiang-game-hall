.class final Lcom/tkay/basead/ui/BaseBannerATView$2;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/basead/ui/BaseBannerATView;->c()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/basead/ui/BaseBannerATView;


# direct methods
.method constructor <init>(Lcom/tkay/basead/ui/BaseBannerATView;)V
    .locals 0

    .line 48
    iput-object p1, p0, Lcom/tkay/basead/ui/BaseBannerATView$2;->a:Lcom/tkay/basead/ui/BaseBannerATView;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onClick(Landroid/view/View;)V
    .locals 0

    .line 51
    iget-object p1, p0, Lcom/tkay/basead/ui/BaseBannerATView$2;->a:Lcom/tkay/basead/ui/BaseBannerATView;

    iget-object p1, p1, Lcom/tkay/basead/ui/BaseBannerATView;->a:Lcom/tkay/basead/e/a;

    if-eqz p1, :cond_0

    .line 52
    iget-object p1, p0, Lcom/tkay/basead/ui/BaseBannerATView$2;->a:Lcom/tkay/basead/ui/BaseBannerATView;

    iget-object p1, p1, Lcom/tkay/basead/ui/BaseBannerATView;->a:Lcom/tkay/basead/e/a;

    invoke-interface {p1}, Lcom/tkay/basead/e/a;->onAdClosed()V

    :cond_0
    return-void
.end method
