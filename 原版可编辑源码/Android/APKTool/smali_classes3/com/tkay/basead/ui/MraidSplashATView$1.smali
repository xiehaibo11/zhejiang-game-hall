.class final Lcom/tkay/basead/ui/MraidSplashATView$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/basead/ui/MraidContainerView$a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/basead/ui/MraidSplashATView;->b()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/basead/ui/MraidSplashATView;


# direct methods
.method constructor <init>(Lcom/tkay/basead/ui/MraidSplashATView;)V
    .locals 0

    .line 43
    iput-object p1, p0, Lcom/tkay/basead/ui/MraidSplashATView$1;->a:Lcom/tkay/basead/ui/MraidSplashATView;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a()V
    .locals 1

    .line 53
    :try_start_0
    iget-object v0, p0, Lcom/tkay/basead/ui/MraidSplashATView$1;->a:Lcom/tkay/basead/ui/MraidSplashATView;

    invoke-static {v0}, Lcom/tkay/basead/ui/MraidSplashATView;->a(Lcom/tkay/basead/ui/MraidSplashATView;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    return-void
.end method

.method public final a(Ljava/lang/String;)V
    .locals 1

    .line 46
    iget-object v0, p0, Lcom/tkay/basead/ui/MraidSplashATView$1;->a:Lcom/tkay/basead/ui/MraidSplashATView;

    iget-object v0, v0, Lcom/tkay/basead/ui/MraidSplashATView;->d:Lcom/tkay/core/common/f/h;

    invoke-virtual {v0, p1}, Lcom/tkay/core/common/f/h;->v(Ljava/lang/String;)V

    .line 47
    iget-object p1, p0, Lcom/tkay/basead/ui/MraidSplashATView$1;->a:Lcom/tkay/basead/ui/MraidSplashATView;

    const/4 v0, 0x1

    invoke-virtual {p1, v0}, Lcom/tkay/basead/ui/MraidSplashATView;->b(I)V

    return-void
.end method

.method public final b()V
    .locals 1

    .line 61
    iget-object v0, p0, Lcom/tkay/basead/ui/MraidSplashATView$1;->a:Lcom/tkay/basead/ui/MraidSplashATView;

    invoke-virtual {v0}, Lcom/tkay/basead/ui/MraidSplashATView;->q()V

    .line 62
    iget-object v0, p0, Lcom/tkay/basead/ui/MraidSplashATView$1;->a:Lcom/tkay/basead/ui/MraidSplashATView;

    invoke-virtual {v0}, Lcom/tkay/basead/ui/MraidSplashATView;->r()V

    .line 64
    iget-object v0, p0, Lcom/tkay/basead/ui/MraidSplashATView$1;->a:Lcom/tkay/basead/ui/MraidSplashATView;

    invoke-virtual {v0}, Lcom/tkay/basead/ui/MraidSplashATView;->p()V

    return-void
.end method
