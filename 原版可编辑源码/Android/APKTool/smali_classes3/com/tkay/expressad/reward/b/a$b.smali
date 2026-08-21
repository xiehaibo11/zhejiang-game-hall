.class public final Lcom/tkay/expressad/reward/b/a$b;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/expressad/reward/a/b;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/expressad/reward/b/a;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x1
    name = "b"
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/expressad/reward/b/a;

.field private b:Lcom/tkay/expressad/reward/a/a;

.field private c:Z

.field private d:Ljava/lang/Runnable;


# direct methods
.method public constructor <init>(Lcom/tkay/expressad/reward/b/a;Lcom/tkay/expressad/reward/a/a;)V
    .locals 0

    .line 2605
    iput-object p1, p0, Lcom/tkay/expressad/reward/b/a$b;->a:Lcom/tkay/expressad/reward/b/a;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 2606
    iput-object p2, p0, Lcom/tkay/expressad/reward/b/a$b;->b:Lcom/tkay/expressad/reward/a/a;

    const/4 p1, 0x1

    .line 2607
    iput-boolean p1, p0, Lcom/tkay/expressad/reward/b/a$b;->c:Z

    return-void
.end method

.method private c()Ljava/lang/Runnable;
    .locals 1

    .line 2613
    iget-object v0, p0, Lcom/tkay/expressad/reward/b/a$b;->d:Ljava/lang/Runnable;

    return-object v0
.end method


# virtual methods
.method public final a()V
    .locals 3

    .line 2632
    iget-object v0, p0, Lcom/tkay/expressad/reward/b/a$b;->d:Ljava/lang/Runnable;

    if-eqz v0, :cond_0

    .line 2633
    iget-object v0, p0, Lcom/tkay/expressad/reward/b/a$b;->a:Lcom/tkay/expressad/reward/b/a;

    invoke-static {v0}, Lcom/tkay/expressad/reward/b/a;->w(Lcom/tkay/expressad/reward/b/a;)Landroid/os/Handler;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/expressad/reward/b/a$b;->d:Ljava/lang/Runnable;

    invoke-virtual {v0, v1}, Landroid/os/Handler;->removeCallbacks(Ljava/lang/Runnable;)V

    .line 2635
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/reward/b/a$b;->a:Lcom/tkay/expressad/reward/b/a;

    invoke-static {v0}, Lcom/tkay/expressad/reward/b/a;->d(Lcom/tkay/expressad/reward/b/a;)Lcom/tkay/expressad/reward/b/a$c;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 2636
    iget-object v0, p0, Lcom/tkay/expressad/reward/b/a$b;->a:Lcom/tkay/expressad/reward/b/a;

    invoke-static {v0}, Lcom/tkay/expressad/reward/b/a;->d(Lcom/tkay/expressad/reward/b/a;)Lcom/tkay/expressad/reward/b/a$c;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/expressad/reward/b/a$b;->a:Lcom/tkay/expressad/reward/b/a;

    invoke-static {v1}, Lcom/tkay/expressad/reward/b/a;->f(Lcom/tkay/expressad/reward/b/a;)Ljava/lang/String;

    move-result-object v1

    iget-object v2, p0, Lcom/tkay/expressad/reward/b/a$b;->a:Lcom/tkay/expressad/reward/b/a;

    invoke-static {v2}, Lcom/tkay/expressad/reward/b/a;->g(Lcom/tkay/expressad/reward/b/a;)Ljava/lang/String;

    move-result-object v2

    invoke-static {v0, v1, v2}, Lcom/tkay/expressad/reward/b/a$c;->a(Lcom/tkay/expressad/reward/b/a$c;Ljava/lang/String;Ljava/lang/String;)V

    :cond_1
    return-void
.end method

.method public final a(Ljava/lang/Runnable;)V
    .locals 0

    .line 2617
    iput-object p1, p0, Lcom/tkay/expressad/reward/b/a$b;->d:Ljava/lang/Runnable;

    return-void
.end method

.method public final a(Ljava/lang/String;)V
    .locals 2

    .line 2642
    iget-object v0, p0, Lcom/tkay/expressad/reward/b/a$b;->d:Ljava/lang/Runnable;

    if-eqz v0, :cond_0

    .line 2643
    iget-object v0, p0, Lcom/tkay/expressad/reward/b/a$b;->a:Lcom/tkay/expressad/reward/b/a;

    invoke-static {v0}, Lcom/tkay/expressad/reward/b/a;->w(Lcom/tkay/expressad/reward/b/a;)Landroid/os/Handler;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/expressad/reward/b/a$b;->d:Ljava/lang/Runnable;

    invoke-virtual {v0, v1}, Landroid/os/Handler;->removeCallbacks(Ljava/lang/Runnable;)V

    .line 2645
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/reward/b/a$b;->b:Lcom/tkay/expressad/reward/a/a;

    if-eqz v0, :cond_1

    const/4 v1, 0x0

    .line 2646
    invoke-interface {v0, v1}, Lcom/tkay/expressad/reward/a/a;->a(Lcom/tkay/expressad/reward/a/b;)V

    .line 2647
    iput-object v1, p0, Lcom/tkay/expressad/reward/b/a$b;->b:Lcom/tkay/expressad/reward/a/a;

    .line 2650
    :cond_1
    iget-object v0, p0, Lcom/tkay/expressad/reward/b/a$b;->a:Lcom/tkay/expressad/reward/b/a;

    invoke-static {v0}, Lcom/tkay/expressad/reward/b/a;->d(Lcom/tkay/expressad/reward/b/a;)Lcom/tkay/expressad/reward/b/a$c;

    move-result-object v0

    if-eqz v0, :cond_2

    .line 2651
    iget-object v0, p0, Lcom/tkay/expressad/reward/b/a$b;->a:Lcom/tkay/expressad/reward/b/a;

    invoke-static {v0}, Lcom/tkay/expressad/reward/b/a;->d(Lcom/tkay/expressad/reward/b/a;)Lcom/tkay/expressad/reward/b/a$c;

    move-result-object v0

    invoke-static {v0, p1}, Lcom/tkay/expressad/reward/b/a$c;->a(Lcom/tkay/expressad/reward/b/a$c;Ljava/lang/String;)V

    :cond_2
    return-void
.end method

.method public final b()V
    .locals 3

    .line 2622
    iget-object v0, p0, Lcom/tkay/expressad/reward/b/a$b;->d:Ljava/lang/Runnable;

    if-eqz v0, :cond_0

    .line 2623
    iget-object v0, p0, Lcom/tkay/expressad/reward/b/a$b;->a:Lcom/tkay/expressad/reward/b/a;

    invoke-static {v0}, Lcom/tkay/expressad/reward/b/a;->w(Lcom/tkay/expressad/reward/b/a;)Landroid/os/Handler;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/expressad/reward/b/a$b;->d:Ljava/lang/Runnable;

    invoke-virtual {v0, v1}, Landroid/os/Handler;->removeCallbacks(Ljava/lang/Runnable;)V

    .line 2625
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/reward/b/a$b;->a:Lcom/tkay/expressad/reward/b/a;

    invoke-static {v0}, Lcom/tkay/expressad/reward/b/a;->d(Lcom/tkay/expressad/reward/b/a;)Lcom/tkay/expressad/reward/b/a$c;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 2626
    iget-object v0, p0, Lcom/tkay/expressad/reward/b/a$b;->a:Lcom/tkay/expressad/reward/b/a;

    invoke-static {v0}, Lcom/tkay/expressad/reward/b/a;->d(Lcom/tkay/expressad/reward/b/a;)Lcom/tkay/expressad/reward/b/a$c;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/expressad/reward/b/a$b;->a:Lcom/tkay/expressad/reward/b/a;

    invoke-static {v1}, Lcom/tkay/expressad/reward/b/a;->f(Lcom/tkay/expressad/reward/b/a;)Ljava/lang/String;

    move-result-object v1

    iget-object v2, p0, Lcom/tkay/expressad/reward/b/a$b;->a:Lcom/tkay/expressad/reward/b/a;

    invoke-static {v2}, Lcom/tkay/expressad/reward/b/a;->g(Lcom/tkay/expressad/reward/b/a;)Ljava/lang/String;

    move-result-object v2

    invoke-static {v0, v1, v2}, Lcom/tkay/expressad/reward/b/a$c;->c(Lcom/tkay/expressad/reward/b/a$c;Ljava/lang/String;Ljava/lang/String;)V

    :cond_1
    return-void
.end method
