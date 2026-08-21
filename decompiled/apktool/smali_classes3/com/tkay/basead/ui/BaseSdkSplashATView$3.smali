.class final Lcom/tkay/basead/ui/BaseSdkSplashATView$3;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/basead/ui/BaseSdkSplashATView;->o()V
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

    .line 114
    iput-object p1, p0, Lcom/tkay/basead/ui/BaseSdkSplashATView$3;->a:Lcom/tkay/basead/ui/BaseSdkSplashATView;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onClick(Landroid/view/View;)V
    .locals 1

    .line 117
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object p1

    invoke-virtual {p1}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object p1

    iget-object v0, p0, Lcom/tkay/basead/ui/BaseSdkSplashATView$3;->a:Lcom/tkay/basead/ui/BaseSdkSplashATView;

    iget-object v0, v0, Lcom/tkay/basead/ui/BaseSdkSplashATView;->d:Lcom/tkay/core/common/f/h;

    invoke-virtual {v0}, Lcom/tkay/core/common/f/h;->I()Ljava/lang/String;

    move-result-object v0

    invoke-static {p1, v0}, Lcom/tkay/core/common/l/l;->a(Landroid/content/Context;Ljava/lang/String;)V

    return-void
.end method
