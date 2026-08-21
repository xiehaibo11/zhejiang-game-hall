.class final Lcom/tkay/basead/ui/BaseMediaATView$1;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/basead/ui/BaseMediaATView;->a()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/basead/ui/BaseMediaATView;


# direct methods
.method constructor <init>(Lcom/tkay/basead/ui/BaseMediaATView;)V
    .locals 0

    .line 75
    iput-object p1, p0, Lcom/tkay/basead/ui/BaseMediaATView$1;->a:Lcom/tkay/basead/ui/BaseMediaATView;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onClick(Landroid/view/View;)V
    .locals 0

    .line 78
    iget-object p1, p0, Lcom/tkay/basead/ui/BaseMediaATView$1;->a:Lcom/tkay/basead/ui/BaseMediaATView;

    iget-object p1, p1, Lcom/tkay/basead/ui/BaseMediaATView;->d:Lcom/tkay/basead/ui/BaseMediaATView$a;

    if-eqz p1, :cond_0

    .line 79
    iget-object p1, p0, Lcom/tkay/basead/ui/BaseMediaATView$1;->a:Lcom/tkay/basead/ui/BaseMediaATView;

    iget-object p1, p1, Lcom/tkay/basead/ui/BaseMediaATView;->d:Lcom/tkay/basead/ui/BaseMediaATView$a;

    invoke-interface {p1}, Lcom/tkay/basead/ui/BaseMediaATView$a;->onClickCloseView()V

    :cond_0
    return-void
.end method
