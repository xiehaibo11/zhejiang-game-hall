.class final Lcom/tkay/basead/a/a$1;
.super Lcom/tkay/basead/a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/basead/a/a;-><init>(Landroid/view/View;Lcom/tkay/core/common/f/i;Lcom/tkay/basead/a/a$a;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Landroid/content/Context;

.field final synthetic b:Lcom/tkay/basead/a/a;


# direct methods
.method constructor <init>(Lcom/tkay/basead/a/a;Landroid/content/Context;)V
    .locals 0

    .line 45
    iput-object p1, p0, Lcom/tkay/basead/a/a$1;->b:Lcom/tkay/basead/a/a;

    iput-object p2, p0, Lcom/tkay/basead/a/a$1;->a:Landroid/content/Context;

    invoke-direct {p0}, Lcom/tkay/basead/a;-><init>()V

    return-void
.end method


# virtual methods
.method public final onActivityDestroyed(Landroid/app/Activity;)V
    .locals 1

    .line 66
    iget-object v0, p0, Lcom/tkay/basead/a/a$1;->b:Lcom/tkay/basead/a/a;

    invoke-static {v0}, Lcom/tkay/basead/a/a;->a(Lcom/tkay/basead/a/a;)Landroid/app/Activity;

    move-result-object v0

    if-eq v0, p1, :cond_0

    iget-object p1, p0, Lcom/tkay/basead/a/a$1;->b:Lcom/tkay/basead/a/a;

    invoke-static {p1}, Lcom/tkay/basead/a/a;->b(Lcom/tkay/basead/a/a;)Z

    move-result p1

    if-eqz p1, :cond_1

    .line 67
    :cond_0
    iget-object p1, p0, Lcom/tkay/basead/a/a$1;->b:Lcom/tkay/basead/a/a;

    invoke-static {p1}, Lcom/tkay/basead/a/a;->d(Lcom/tkay/basead/a/a;)Landroid/app/Application$ActivityLifecycleCallbacks;

    move-result-object p1

    if-eqz p1, :cond_1

    .line 68
    iget-object p1, p0, Lcom/tkay/basead/a/a$1;->a:Landroid/content/Context;

    check-cast p1, Landroid/app/Application;

    iget-object v0, p0, Lcom/tkay/basead/a/a$1;->b:Lcom/tkay/basead/a/a;

    invoke-static {v0}, Lcom/tkay/basead/a/a;->d(Lcom/tkay/basead/a/a;)Landroid/app/Application$ActivityLifecycleCallbacks;

    move-result-object v0

    invoke-virtual {p1, v0}, Landroid/app/Application;->unregisterActivityLifecycleCallbacks(Landroid/app/Application$ActivityLifecycleCallbacks;)V

    .line 69
    iget-object p1, p0, Lcom/tkay/basead/a/a$1;->b:Lcom/tkay/basead/a/a;

    const/4 v0, 0x0

    invoke-static {p1, v0}, Lcom/tkay/basead/a/a;->a(Lcom/tkay/basead/a/a;Landroid/app/Application$ActivityLifecycleCallbacks;)Landroid/app/Application$ActivityLifecycleCallbacks;

    :cond_1
    return-void
.end method

.method public final onActivityPaused(Landroid/app/Activity;)V
    .locals 1

    .line 59
    iget-object v0, p0, Lcom/tkay/basead/a/a$1;->b:Lcom/tkay/basead/a/a;

    invoke-static {v0}, Lcom/tkay/basead/a/a;->a(Lcom/tkay/basead/a/a;)Landroid/app/Activity;

    move-result-object v0

    if-eq v0, p1, :cond_0

    iget-object p1, p0, Lcom/tkay/basead/a/a$1;->b:Lcom/tkay/basead/a/a;

    invoke-static {p1}, Lcom/tkay/basead/a/a;->b(Lcom/tkay/basead/a/a;)Z

    move-result p1

    if-eqz p1, :cond_1

    .line 60
    :cond_0
    iget-object p1, p0, Lcom/tkay/basead/a/a$1;->b:Lcom/tkay/basead/a/a;

    .line 1128
    iget-object p1, p1, Lcom/tkay/basead/a/a;->a:Lcom/tkay/basead/d;

    invoke-virtual {p1}, Lcom/tkay/basead/d;->b()V

    :cond_1
    return-void
.end method

.method public final onActivityResumed(Landroid/app/Activity;)V
    .locals 1

    .line 49
    iget-object v0, p0, Lcom/tkay/basead/a/a$1;->b:Lcom/tkay/basead/a/a;

    invoke-static {v0}, Lcom/tkay/basead/a/a;->a(Lcom/tkay/basead/a/a;)Landroid/app/Activity;

    move-result-object v0

    if-nez v0, :cond_0

    instance-of v0, p1, Lcom/tkay/basead/ui/BaseATActivity;

    if-eqz v0, :cond_0

    .line 50
    iget-object v0, p0, Lcom/tkay/basead/a/a$1;->b:Lcom/tkay/basead/a/a;

    invoke-static {v0, p1}, Lcom/tkay/basead/a/a;->a(Lcom/tkay/basead/a/a;Landroid/app/Activity;)Landroid/app/Activity;

    .line 52
    :cond_0
    iget-object v0, p0, Lcom/tkay/basead/a/a$1;->b:Lcom/tkay/basead/a/a;

    invoke-static {v0}, Lcom/tkay/basead/a/a;->a(Lcom/tkay/basead/a/a;)Landroid/app/Activity;

    move-result-object v0

    if-eq v0, p1, :cond_1

    iget-object p1, p0, Lcom/tkay/basead/a/a$1;->b:Lcom/tkay/basead/a/a;

    invoke-static {p1}, Lcom/tkay/basead/a/a;->b(Lcom/tkay/basead/a/a;)Z

    move-result p1

    if-eqz p1, :cond_2

    .line 53
    :cond_1
    iget-object p1, p0, Lcom/tkay/basead/a/a$1;->b:Lcom/tkay/basead/a/a;

    invoke-static {p1}, Lcom/tkay/basead/a/a;->c(Lcom/tkay/basead/a/a;)V

    :cond_2
    return-void
.end method
