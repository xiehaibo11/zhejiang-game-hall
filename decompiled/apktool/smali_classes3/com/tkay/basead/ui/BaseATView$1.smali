.class final Lcom/tkay/basead/ui/BaseATView$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/basead/a/a$a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/basead/ui/BaseATView;-><init>(Landroid/content/Context;Lcom/tkay/core/common/f/i;Lcom/tkay/core/common/f/h;Ljava/lang/String;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/basead/ui/BaseATView;


# direct methods
.method constructor <init>(Lcom/tkay/basead/ui/BaseATView;)V
    .locals 0

    .line 81
    iput-object p1, p0, Lcom/tkay/basead/ui/BaseATView$1;->a:Lcom/tkay/basead/ui/BaseATView;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(I)V
    .locals 2

    .line 84
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseATView$1;->a:Lcom/tkay/basead/ui/BaseATView;

    iget-object v0, v0, Lcom/tkay/basead/ui/BaseATView;->s:Landroid/view/View;

    if-eqz v0, :cond_0

    .line 85
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseATView$1;->a:Lcom/tkay/basead/ui/BaseATView;

    iget-object v1, v0, Lcom/tkay/basead/ui/BaseATView;->s:Landroid/view/View;

    invoke-virtual {v0, v1}, Lcom/tkay/basead/ui/BaseATView;->a(Landroid/view/View;)V

    goto :goto_0

    .line 87
    :cond_0
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseATView$1;->a:Lcom/tkay/basead/ui/BaseATView;

    invoke-virtual {v0, v0}, Lcom/tkay/basead/ui/BaseATView;->a(Landroid/view/View;)V

    .line 89
    :goto_0
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseATView$1;->a:Lcom/tkay/basead/ui/BaseATView;

    invoke-virtual {v0, p1}, Lcom/tkay/basead/ui/BaseATView;->b(I)V

    return-void
.end method
