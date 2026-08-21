.class final Lcom/tkay/expressad/widget/a/a$2;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/widget/a/a;->a()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/expressad/widget/a/a;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/widget/a/a;)V
    .locals 0

    .line 84
    iput-object p1, p0, Lcom/tkay/expressad/widget/a/a$2;->a:Lcom/tkay/expressad/widget/a/a;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onClick(Landroid/view/View;)V
    .locals 0

    .line 87
    iget-object p1, p0, Lcom/tkay/expressad/widget/a/a$2;->a:Lcom/tkay/expressad/widget/a/a;

    invoke-static {p1}, Lcom/tkay/expressad/widget/a/a;->a(Lcom/tkay/expressad/widget/a/a;)Lcom/tkay/expressad/widget/a/c;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 88
    iget-object p1, p0, Lcom/tkay/expressad/widget/a/a$2;->a:Lcom/tkay/expressad/widget/a/a;

    invoke-static {p1}, Lcom/tkay/expressad/widget/a/a;->a(Lcom/tkay/expressad/widget/a/a;)Lcom/tkay/expressad/widget/a/c;

    move-result-object p1

    invoke-interface {p1}, Lcom/tkay/expressad/widget/a/c;->b()V

    .line 90
    :cond_0
    iget-object p1, p0, Lcom/tkay/expressad/widget/a/a$2;->a:Lcom/tkay/expressad/widget/a/a;

    invoke-virtual {p1}, Lcom/tkay/expressad/widget/a/a;->dismiss()V

    return-void
.end method
