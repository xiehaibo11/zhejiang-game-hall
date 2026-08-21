.class final Lcom/tkay/expressad/advanced/c/b$1;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/expressad/advanced/c/b;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/expressad/advanced/c/b;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/advanced/c/b;)V
    .locals 0

    .line 70
    iput-object p1, p0, Lcom/tkay/expressad/advanced/c/b$1;->a:Lcom/tkay/expressad/advanced/c/b;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onClick(Landroid/view/View;)V
    .locals 0

    .line 73
    iget-object p1, p0, Lcom/tkay/expressad/advanced/c/b$1;->a:Lcom/tkay/expressad/advanced/c/b;

    invoke-static {p1}, Lcom/tkay/expressad/advanced/c/b;->a(Lcom/tkay/expressad/advanced/c/b;)Z

    move-result p1

    if-eqz p1, :cond_0

    .line 74
    iget-object p1, p0, Lcom/tkay/expressad/advanced/c/b$1;->a:Lcom/tkay/expressad/advanced/c/b;

    invoke-static {p1}, Lcom/tkay/expressad/advanced/c/b;->b(Lcom/tkay/expressad/advanced/c/b;)V

    :cond_0
    return-void
.end method
