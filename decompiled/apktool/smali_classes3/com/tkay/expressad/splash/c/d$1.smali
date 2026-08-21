.class final Lcom/tkay/expressad/splash/c/d$1;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/expressad/splash/c/d;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/expressad/splash/c/d;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/splash/c/d;)V
    .locals 0

    .line 82
    iput-object p1, p0, Lcom/tkay/expressad/splash/c/d$1;->a:Lcom/tkay/expressad/splash/c/d;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onClick(Landroid/view/View;)V
    .locals 1

    .line 85
    iget-object p1, p0, Lcom/tkay/expressad/splash/c/d$1;->a:Lcom/tkay/expressad/splash/c/d;

    invoke-static {p1}, Lcom/tkay/expressad/splash/c/d;->a(Lcom/tkay/expressad/splash/c/d;)Z

    move-result p1

    if-eqz p1, :cond_0

    .line 86
    iget-object p1, p0, Lcom/tkay/expressad/splash/c/d$1;->a:Lcom/tkay/expressad/splash/c/d;

    invoke-static {p1}, Lcom/tkay/expressad/splash/c/d;->b(Lcom/tkay/expressad/splash/c/d;)V

    .line 87
    iget-object p1, p0, Lcom/tkay/expressad/splash/c/d$1;->a:Lcom/tkay/expressad/splash/c/d;

    const/4 v0, -0x1

    invoke-static {p1, v0}, Lcom/tkay/expressad/splash/c/d;->a(Lcom/tkay/expressad/splash/c/d;I)V

    :cond_0
    return-void
.end method
