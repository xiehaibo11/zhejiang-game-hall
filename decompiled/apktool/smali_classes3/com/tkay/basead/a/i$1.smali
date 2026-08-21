.class final Lcom/tkay/basead/a/i$1;
.super Lcom/tkay/basead/a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/basead/a/i;->a(Lcom/tkay/core/common/f/h;Ljava/lang/String;Ljava/lang/String;Z)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/basead/a/i;


# direct methods
.method constructor <init>(Lcom/tkay/basead/a/i;)V
    .locals 0

    .line 46
    iput-object p1, p0, Lcom/tkay/basead/a/i$1;->a:Lcom/tkay/basead/a/i;

    invoke-direct {p0}, Lcom/tkay/basead/a;-><init>()V

    return-void
.end method


# virtual methods
.method public final onActivityPaused(Landroid/app/Activity;)V
    .locals 0

    .line 57
    invoke-super {p0, p1}, Lcom/tkay/basead/a;->onActivityPaused(Landroid/app/Activity;)V

    .line 58
    iget-object p1, p0, Lcom/tkay/basead/a/i$1;->a:Lcom/tkay/basead/a/i;

    iget-object p1, p1, Lcom/tkay/basead/a/i;->a:Lcom/tkay/basead/d;

    if-eqz p1, :cond_0

    .line 59
    iget-object p1, p0, Lcom/tkay/basead/a/i$1;->a:Lcom/tkay/basead/a/i;

    iget-object p1, p1, Lcom/tkay/basead/a/i;->a:Lcom/tkay/basead/d;

    invoke-virtual {p1}, Lcom/tkay/basead/d;->b()V

    :cond_0
    return-void
.end method

.method public final onActivityResumed(Landroid/app/Activity;)V
    .locals 0

    .line 49
    invoke-super {p0, p1}, Lcom/tkay/basead/a;->onActivityResumed(Landroid/app/Activity;)V

    .line 50
    iget-object p1, p0, Lcom/tkay/basead/a/i$1;->a:Lcom/tkay/basead/a/i;

    iget-object p1, p1, Lcom/tkay/basead/a/i;->a:Lcom/tkay/basead/d;

    if-eqz p1, :cond_0

    .line 51
    iget-object p1, p0, Lcom/tkay/basead/a/i$1;->a:Lcom/tkay/basead/a/i;

    iget-object p1, p1, Lcom/tkay/basead/a/i;->a:Lcom/tkay/basead/d;

    invoke-virtual {p1}, Lcom/tkay/basead/d;->a()V

    :cond_0
    return-void
.end method
