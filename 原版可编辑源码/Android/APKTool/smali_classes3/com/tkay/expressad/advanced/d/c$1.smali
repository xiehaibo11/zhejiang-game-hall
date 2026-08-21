.class final Lcom/tkay/expressad/advanced/d/c$1;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/view/ViewTreeObserver$OnScrollChangedListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/expressad/advanced/d/c;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/expressad/advanced/d/c;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/advanced/d/c;)V
    .locals 0

    .line 79
    iput-object p1, p0, Lcom/tkay/expressad/advanced/d/c$1;->a:Lcom/tkay/expressad/advanced/d/c;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onScrollChanged()V
    .locals 4

    .line 82
    iget-object v0, p0, Lcom/tkay/expressad/advanced/d/c$1;->a:Lcom/tkay/expressad/advanced/d/c;

    invoke-static {v0}, Lcom/tkay/expressad/advanced/d/c;->a(Lcom/tkay/expressad/advanced/d/c;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 83
    iget-object v0, p0, Lcom/tkay/expressad/advanced/d/c$1;->a:Lcom/tkay/expressad/advanced/d/c;

    const/4 v1, 0x0

    invoke-static {v0, v1}, Lcom/tkay/expressad/advanced/d/c;->a(Lcom/tkay/expressad/advanced/d/c;Z)Z

    .line 84
    iget-object v0, p0, Lcom/tkay/expressad/advanced/d/c$1;->a:Lcom/tkay/expressad/advanced/d/c;

    invoke-static {v0}, Lcom/tkay/expressad/advanced/d/c;->b(Lcom/tkay/expressad/advanced/d/c;)Lcom/tkay/expressad/advanced/view/ATOutNativeAdvancedViewGroup;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 85
    iget-object v0, p0, Lcom/tkay/expressad/advanced/d/c$1;->a:Lcom/tkay/expressad/advanced/d/c;

    invoke-static {v0}, Lcom/tkay/expressad/advanced/d/c;->b(Lcom/tkay/expressad/advanced/d/c;)Lcom/tkay/expressad/advanced/view/ATOutNativeAdvancedViewGroup;

    move-result-object v0

    new-instance v1, Lcom/tkay/expressad/advanced/d/c$1$1;

    invoke-direct {v1, p0}, Lcom/tkay/expressad/advanced/d/c$1$1;-><init>(Lcom/tkay/expressad/advanced/d/c$1;)V

    const-wide/16 v2, 0x3e8

    invoke-virtual {v0, v1, v2, v3}, Lcom/tkay/expressad/advanced/view/ATOutNativeAdvancedViewGroup;->postDelayed(Ljava/lang/Runnable;J)Z

    .line 93
    :cond_0
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/advanced/d/c$1;->a:Lcom/tkay/expressad/advanced/d/c;

    invoke-static {v0}, Lcom/tkay/expressad/advanced/d/c;->c(Lcom/tkay/expressad/advanced/d/c;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_1
    return-void
.end method
