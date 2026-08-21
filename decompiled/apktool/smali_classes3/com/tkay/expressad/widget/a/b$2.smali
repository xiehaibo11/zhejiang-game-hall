.class final Lcom/tkay/expressad/widget/a/b$2;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/widget/a/b;-><init>(Landroid/content/Context;Lcom/tkay/expressad/widget/a/c;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/expressad/widget/a/c;

.field final synthetic b:Lcom/tkay/expressad/widget/a/b;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/widget/a/b;Lcom/tkay/expressad/widget/a/c;)V
    .locals 0

    .line 71
    iput-object p1, p0, Lcom/tkay/expressad/widget/a/b$2;->b:Lcom/tkay/expressad/widget/a/b;

    iput-object p2, p0, Lcom/tkay/expressad/widget/a/b$2;->a:Lcom/tkay/expressad/widget/a/c;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onClick(Landroid/view/View;)V
    .locals 0

    .line 74
    iget-object p1, p0, Lcom/tkay/expressad/widget/a/b$2;->a:Lcom/tkay/expressad/widget/a/c;

    if-eqz p1, :cond_0

    .line 75
    invoke-interface {p1}, Lcom/tkay/expressad/widget/a/c;->b()V

    .line 77
    :cond_0
    iget-object p1, p0, Lcom/tkay/expressad/widget/a/b$2;->b:Lcom/tkay/expressad/widget/a/b;

    invoke-virtual {p1}, Lcom/tkay/expressad/widget/a/b;->cancel()V

    .line 78
    iget-object p1, p0, Lcom/tkay/expressad/widget/a/b$2;->b:Lcom/tkay/expressad/widget/a/b;

    invoke-virtual {p1}, Lcom/tkay/expressad/widget/a/b;->a()V

    return-void
.end method
