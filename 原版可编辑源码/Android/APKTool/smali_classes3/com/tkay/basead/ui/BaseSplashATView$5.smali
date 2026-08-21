.class final Lcom/tkay/basead/ui/BaseSplashATView$5;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/basead/ui/BaseShakeView$a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/basead/ui/BaseSplashATView;->q()V
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

    .line 313
    iput-object p1, p0, Lcom/tkay/basead/ui/BaseSplashATView$5;->a:Lcom/tkay/basead/ui/BaseSplashATView;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a()Z
    .locals 2

    .line 316
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseSplashATView$5;->a:Lcom/tkay/basead/ui/BaseSplashATView;

    iget-boolean v0, v0, Lcom/tkay/basead/ui/BaseSplashATView;->E:Z

    if-nez v0, :cond_0

    .line 317
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseSplashATView$5;->a:Lcom/tkay/basead/ui/BaseSplashATView;

    const/4 v1, 0x4

    invoke-virtual {v0, v1}, Lcom/tkay/basead/ui/BaseSplashATView;->b(I)V

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method
