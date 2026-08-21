.class final Lcom/tkay/basead/d/h$6;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/basead/a/a$a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/basead/d/h;->q()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Landroid/view/View;

.field final synthetic b:Lcom/tkay/basead/d/h;


# direct methods
.method constructor <init>(Lcom/tkay/basead/d/h;Landroid/view/View;)V
    .locals 0

    .line 746
    iput-object p1, p0, Lcom/tkay/basead/d/h$6;->b:Lcom/tkay/basead/d/h;

    iput-object p2, p0, Lcom/tkay/basead/d/h$6;->a:Landroid/view/View;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(I)V
    .locals 2

    .line 749
    iget-object p1, p0, Lcom/tkay/basead/d/h$6;->b:Lcom/tkay/basead/d/h;

    iget-object v0, p0, Lcom/tkay/basead/d/h$6;->a:Landroid/view/View;

    const/4 v1, 0x2

    invoke-virtual {p1, v0, v1}, Lcom/tkay/basead/d/h;->a(Landroid/view/View;I)V

    return-void
.end method
